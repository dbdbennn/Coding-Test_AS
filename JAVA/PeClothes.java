import java.util.Arrays;

public class PeClothes {
    public static void main(String[] args) {
        int n = 5;
        int lost [] = {2,4};
        int reserve [] = {1,3,5};
        int result = solution(n,lost, reserve);

        System.out.println("체육복을 입을 수 있는 학생 : "+result+"명");
    }

    public static int solution(int n, int[] lost, int[] reserve) {
        int answer = 0;

        answer = n - lost.length;
        Arrays.sort(reserve);
        Arrays.sort(lost);

        for (int i = 0; i < reserve.length; i++) {
            for (int j = 0; j < lost.length; j++) {
                if ( reserve[i] == lost[j] ) {
                    answer += 1;
                    reserve[i] = -1;
                    lost[j] = -1;
                }
            }
        }

        for (int i = 0; i < reserve.length; i++) {
            for (int j = 0; j < lost.length; j++) {
                if ( (reserve[i] != -1 && lost[j] != -1) )  {

                    if ( reserve[i] - lost[j] == 1 || reserve[i] - lost[j] == -1 ) {

                        reserve[i] = -1;
                        lost[j] = -1;
                        answer += 1;
                    }
                }
            }


        }

        return answer;
    }
}
