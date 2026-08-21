package com.cmic.gen.sdk.e;

public class c {
    private static final com.cmic.gen.sdk.e.c a = null;
    private static boolean b;

    static {
            com.cmic.gen.sdk.e.c r0 = new com.cmic.gen.sdk.e.c
            r0.<init>()
            com.cmic.gen.sdk.e.c.a = r0
            r0 = 0
            com.cmic.gen.sdk.e.c.b = r0
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.cmic.gen.sdk.e.c.b
            if (r0 == 0) goto L29
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "CMCC-SDK:"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = ""
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.util.Log.e(r2, r3)
        L29:
            return
    }

    public static void a(boolean r0) {
            com.cmic.gen.sdk.e.c.b = r0
            return
    }

    public static void b(java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.cmic.gen.sdk.e.c.b
            if (r0 == 0) goto L29
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "CMCC-SDK:"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = ""
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.util.Log.d(r2, r3)
        L29:
            return
    }
}
