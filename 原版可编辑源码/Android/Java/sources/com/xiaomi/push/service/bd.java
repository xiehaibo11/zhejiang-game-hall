package com.xiaomi.push.service;

import android.text.TextUtils;

public class bd {
    private static long a = 0;
    private static String a = "";

    public static String a() {
        if (TextUtils.isEmpty(a)) {
            a = com.xiaomi.push.bp.a(4);
        }
        StringBuilder sb = new StringBuilder();
        sb.append(a);
        long j = a;
        a = 1 + j;
        sb.append(j);
        return sb.toString();
    }
}
