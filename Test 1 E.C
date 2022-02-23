import java.util.Arrays;

public class TestRotateRight {
    public static void rotateRight(int[] list){

        int last = list[list.length-1];

        for(int i = list.length-1;i>=1;i--){
            list[i] = list[i-1];
        }

        list[0] = last;
    }

    public static void main(String[] args) {

        int[] list = {3, 8, 19, 7};

        rotateRight(list);

        System.out.println(Arrays.toString(list));   // [7, 3, 8, 19]

        rotateRight(list);

        rotateRight(list);

        System.out.println(Arrays.toString(list));   // [8, 19, 7, 3]

        rotateRight(list);

        System.out.println(Arrays.toString(list));   // [3, 8, 19, 7]

        rotateRight(list);

        rotateRight(list);

        rotateRight(list);

        System.out.println(Arrays.toString(list));   // [8, 19, 7, 3]

        rotateRight(list);

        rotateRight(list);

        rotateRight(list);

        rotateRight(list);

        System.out.println(Arrays.toString(list));   // [8, 19, 7, 3]

    }
}

