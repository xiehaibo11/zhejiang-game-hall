package com.xiaomi.mipush.sdk;

public class d {
    public static java.lang.String a(android.content.Context r1) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r1.getPackageName()
            r0.append(r1)
            java.lang.String r1 = ".permission.MIPUSH_RECEIVE"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            return r1
    }
}
