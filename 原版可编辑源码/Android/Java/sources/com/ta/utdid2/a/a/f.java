package com.ta.utdid2.a.a;

import java.util.regex.Pattern;

public class f {
    private static final Pattern a = Pattern.compile("([\t\r\n])+");

    public static boolean isEmpty(String str) {
        return str == null || str.length() <= 0;
    }

    public static int hashCode(String str) {
        if (str.length() <= 0) {
            return 0;
        }
        int i = 0;
        for (char c : str.toCharArray()) {
            i = (i * 31) + c;
        }
        return i;
    }
}
