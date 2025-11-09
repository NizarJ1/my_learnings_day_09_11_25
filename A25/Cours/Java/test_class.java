
public class test_class {
    public static void main(String[] args) {
        String greetings = "HelloHelloHello";
        int greetlen = greetings.length();

        //int a=1,b=5;

        /*int likes, dislikes;
        System.out.print("Entrer le nombre de likes puit de dislikes: ");
        Scanner input= new Scanner(System.in);
        likes=input.nextInt();
        dislikes=input.nextInt();

        double total = MathUtils.add(a,b);
        double ratioLD=MathUtils.ratio(likes, dislikes);
        System.out.println("Le totale de a+b = " + total);
        System.out.println("Le ratio de Likes/Dislikes est : "+ratioLD);*/

        for(int i=0; i<greetlen;i++){
            System.out.println(greetings.charAt(i));
        }
    }
}
