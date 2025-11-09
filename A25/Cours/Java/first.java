//import java.util.scanner;
/*public class first{
    public static void main(string[] args);
    int n1,n2,n3,c1,c2,c3;
    scanner clavier = new scanner (System.in);
    System.out.println("entrer les troi notes : ");
    int n1=clavier.nextInt(),n2=clavier.nextInt(),n3 = clavier.nextInt();
    System.out.println("entrer les troi coef : ");
    int c1 = clavier.nextInt(),c2 = clavier.nextInt(),c3 = clavier.nextInt();
    system.out,println("la moyenne ponderer est : " (n1*c1+n2*c2+n3*c3)/c1+c2+c3)



}*/
import java.util.Arrays;
import java.util.Scanner;
class first {
    public static void scanF(int e,Scanner input)//entrer les information
    {
        e=input.nextInt();
    }
    public static void afficherTableau(int []d) // affiche les tableau voulu
    {
        for(int i=0;i<d.length;i++){
            System.out.print(d[i]+" | ");
        }
    }
    public static void entrerUnTableau(int []d, Scanner input) // entre un tableau voulu
    {
        System.out.println("Entrer Les Elements du TAB: ");
        for(int i=0;i<=d.length-1;i++){
            System.out.print("d["+i+"] = " );
            d[i]=input.nextInt();
        }
    }
    public static void trieTableau(int[] tab){
        int n=tab.length;
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1-i;j++){
                if(tab[j]>tab[j+1]){
                    int temp=tab[j];
                    tab[j]=tab[j+1];
                    tab[j+1]=temp;
                }
            }
        }
    }
    public static void main(String[] args) {
       /*  int a;
        a=2;
        System.out.println("a= "+a);
        int t[]=new int[3];
        t[0]=5;
        t[1]=3;
        t[2]=7;
        System.out.print("t = ");
        for(int i=0;i<=t.length;i++){
            System.out.print(t[i]+ " ");
        }*/
        ///////
        
        System.out.print("Entrer la dimension du tableau: ");
        Scanner input= new Scanner(System.in);
        int Dim=input.nextInt();
        int d[]=new int[Dim];
        entrerUnTableau(d,input);
        System.out.print("Votre tableau et le suivant:        " );
        afficherTableau(d);
        int result=d[Dim-1];
        for(int i=Dim-1;i>0;i--){
            d[i]=d[i-1];
        }
        d[0]=result;
        System.out.print("\nLe tableux decaller de ladroite est: ");
        afficherTableau(d);
        //---------------------------------------------------
        System.out.println("\nEntrer les Dimmension du premier tableau: ");
        int Dim1=input.nextInt();
        int tab1[]=new int[Dim1];
        System.out.println("\nEntrer la dimmention du deuxieme tableau:");
        int Dim2=input.nextInt();
        int tab2[]=new int[Dim2];
        int Dim3=Dim2+Dim1;
        int tab3[]=new int[Dim3];
        entrerUnTableau(tab1,input);
        entrerUnTableau(tab2,input);
        //fait que le tableux 3 regroupe les elment du tableux 1 et 2 trier 
        for(int i=0; i<Dim1;i++){
            tab3[i]=tab1[i];
        }
        for(int i=0;i<Dim2;i++){
            tab3[Dim1+i]=tab2[i];
        }
        System.out.println("Tableau fusionne: ");
        afficherTableau(tab3);
        Arrays.sort(tab3);
        System.out.println("\nTableau fusionnee trie: ");
        afficherTableau(tab3);


        input.close();
    }
}