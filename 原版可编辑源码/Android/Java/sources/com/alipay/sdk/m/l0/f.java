package com.alipay.sdk.m.l0;

import java.util.regex.Pattern;

public class f {
    public static final Pattern a = Pattern.compile("([\t\r\n])+");

    public static boolean a(String str) {
        return str == null || str.length() <= 0;
    }

    public static int a(String str) {
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
