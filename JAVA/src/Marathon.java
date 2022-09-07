import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

public class Marathon {
    public static void main(String[] args) {
        String praticipant [] = {"leo", "kiki", "eden","jau"};
        String completion [] = {"eden", "kiki","leo"};
        String result = solution(praticipant,completion);
        System.out.println(result);
    }

    public static String solution(String[] participant, String[] completion) {
        String answer = "";
        for(String part : participant) {
            boolean bool = true;
            for(int i=0;i<completion.length; i++) {
                if(part.equals(completion[i])) {
                    bool = false;
                    completion[i]="";
                    break;
                }
            }
            if(bool) {
                answer = part;
            }
        }
        return answer;
    }

}
