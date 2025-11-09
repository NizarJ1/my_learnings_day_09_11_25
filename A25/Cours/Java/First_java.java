
import java.util.Scanner;
public class First_java {
    public static void main(String[] args) {
        System.out.println("Hello world");
        Scanner input = new Scanner(System.in);
        System.out.println("Entrez votre nom : ");
        String nom = input.nextLine();
        String nom_reel = "Nizar";
        if (nom.equals(nom_reel)){
            System.out.println("Votre nom est belle est bien " + nom);
        }else{
            System.out.println("Acsess Denided : * ");
        }
        for (int i = 1; i<=5; i++){
            System.out.println("Compteur : "+ i);
        }
        System.out.println("donner un entier positif : ");
        int N = input.nextInt();
        for (int i = 1; i<=N;i++){
            if (N%2==0){
                System.out.println(N+" Est pair");
            }else{
                System.out.println(N+" est impair");
            }
        }
        input.close(); // cela ferme le scanner

    }
}
