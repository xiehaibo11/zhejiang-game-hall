package com.alipay.sdk.m.l0;

import java.util.regex.Pattern;

/* JADX INFO: loaded from: classes.dex */
public class f {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final Pattern f1214a = Pattern.compile("([\t\r\n])+");

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static boolean m6a(String str) {
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
