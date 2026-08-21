package com.igexin.push.util;

public class l {
    private static char[] a;

    static {
            java.lang.String r0 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz`~!@#$%^&*()-_=+[{}];:'/?.>,<"
            char[] r0 = r0.toCharArray()
            com.igexin.push.util.l.a = r0
            return
    }

    public static java.lang.String a(int r5) {
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r2 = 0
        Lb:
            if (r2 >= r5) goto L1f
            r3 = 62
            int r3 = r0.nextInt(r3)
            java.lang.String r4 = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
            char r3 = r4.charAt(r3)
            r1.append(r3)
            int r2 = r2 + 1
            goto Lb
        L1f:
            java.lang.String r5 = r1.toString()
            return r5
    }
}
