public class MathUtils {
    public static double ratio(int likes, int dislikes){
        if(likes+dislikes == 0){
            return 0;
        }
        return (double) likes / (likes + dislikes) * 100;
    }

    public static int add(int a, int b){
        return (a+b);
    }
     public static int substract(int a , int b){
        return (a-b);
     }
}
