
import java.util.Scanner;
import java.util.Locale;

public class APE7 {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        sc.useLocale(Locale.US);
//Definición de variables.
        double notaIndividual, notaGrupal, notaEvaluacion, notaFinal;
        String desempeno, estado;
//Datos de entrada: nota individual, nota grupal y nota de la evaluación final.
        System.out.println("Ingrese la nota individual:");
        notaIndividual = sc.nextDouble();

        System.out.println("Ingrese la nota grupal:");
        notaGrupal = sc.nextDouble();

        System.out.println("Ingrese la nota de la evaluacion final:");
        notaEvaluacion = sc.nextDouble();
//Validación de los datos ingresados: Mayores o iguales que 
//cero y menores o iguales que 10 para que no excedan el límite
        if (notaIndividual >= 0 && notaIndividual <= 10 &&
            notaGrupal >= 0 && notaGrupal <= 10 &&
            notaEvaluacion >= 0 && notaEvaluacion <= 10) {
//Proceso: Cálculo de la nota final.
            notaFinal = (notaIndividual * 0.30) +
                        (notaGrupal * 0.30) +
                        (notaEvaluacion * 0.40);
//Proceso: Definición del desempeño basado en la nota final.
            if (notaFinal >= 9) {
                desempeno = "Excelente";
            } else {
                if (notaFinal >= 8) {
                    desempeno = "Muy bueno";
                } else {
                    if (notaFinal >= 7) {
                        desempeno = "Bueno";
                    } else {
                        if (notaFinal >= 5) {
                            desempeno = "Regular";
                        } else {
                            desempeno = "Deficiente";
                        }
                    }
                }
            }
//Estado del estudiante: Si la nota final es mayor o igual a 7 el estudiante está aprobado.
//Si la nota final es menor a 7 el estudiante está reprobado y necesita un refuerzo académico.
            if (notaFinal >= 7) {
                estado = "Aprobado";
            } else {
                estado = "Reprobado";
                System.out.println("El estudiante requiere refuerzo academico");
            }
//Si la nota final del estudiante el mayor o igual a 9 su rendimiento es sobresaliente.
            if (notaFinal >= 9) {
                System.out.println("¡Felicitaciones! Rendimiento sobresaliente");
            }
//Datos de salida: Se muestran: las notas ingresadas, la nota final, el desempeño del estudiante
//y el estado del mismo (aprobado o reprobado).
            System.out.println("\nRESULTADOS");
            System.out.printf("Nota individual: %.2f%n", notaIndividual);
            System.out.printf("Nota grupal: %.2f%n", notaGrupal);
            System.out.printf("Nota evaluacion final: %.2f%n", notaEvaluacion);
            System.out.printf("Promedio ponderado: %.2f%n", notaFinal);
            System.out.println("Nivel de desempeno: " + desempeno);
            System.out.println("Estado final: " + estado);
//Mensaje de error si los valores ingresados no están dentro del límite.
        } else {
            System.out.println("Los datos ingresados no son validos.");
        }

        sc.close();
    }
}