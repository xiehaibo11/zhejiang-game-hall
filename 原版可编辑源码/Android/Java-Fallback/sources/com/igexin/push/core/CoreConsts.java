package com.igexin.push.core;

public class CoreConsts {
    public static final java.lang.String a = null;
    public static final java.lang.String b = null;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static int g;
    public static int h;
    public static int i;
    public static int j;
    public static int k;
    public static int l;
    public static int m;
    public static java.lang.String n;
    public static final java.lang.String o = null;
    public static final java.lang.String p = null;
    public static final java.lang.String q = null;
    public static java.lang.String r;

    static {
            java.lang.String r0 = "co."
            java.lang.String r1 = "mi."
            java.lang.String r2 = "gex."
            java.lang.String r3 = "ins."
            java.lang.String r4 = "dka."
            java.lang.String r5 = "cti."
            java.lang.String r6 = "on."
            java.lang.String r7 = "notifi."
            java.lang.String r8 = "cation."
            java.lang.String r9 = "burying."
            java.lang.String r10 = "point."
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10}
            r1 = 6
            java.lang.String r2 = "pre_burypoint."
            java.lang.String r0 = a(r1, r2, r0)
            com.igexin.push.core.CoreConsts.a = r0
            java.lang.String r1 = "com."
            java.lang.String r2 = "ige."
            java.lang.String r3 = "xin."
            java.lang.String r4 = "sdk."
            java.lang.String r5 = "act."
            java.lang.String r6 = "ion."
            java.lang.String r7 = "do."
            java.lang.String r8 = "act."
            java.lang.String r9 = "tion."
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8, r9}
            r1 = 5
            java.lang.String r2 = "pre_doaction."
            java.lang.String r0 = a(r1, r2, r0)
            com.igexin.push.core.CoreConsts.b = r0
            r0 = 0
            com.igexin.push.core.CoreConsts.c = r0
            r2 = 2
            com.igexin.push.core.CoreConsts.d = r2
            r3 = 3
            com.igexin.push.core.CoreConsts.e = r3
            r3 = 11
            com.igexin.push.core.CoreConsts.f = r3
            com.igexin.push.core.CoreConsts.g = r1
            r1 = 7
            com.igexin.push.core.CoreConsts.h = r1
            r1 = 9
            com.igexin.push.core.CoreConsts.i = r1
            r1 = 10
            com.igexin.push.core.CoreConsts.j = r1
            com.igexin.push.core.CoreConsts.k = r0
            r0 = 1
            com.igexin.push.core.CoreConsts.l = r0
            com.igexin.push.core.CoreConsts.m = r2
            java.lang.String r0 = "com.igexin.sdk.PushService"
            com.igexin.push.core.CoreConsts.n = r0
            java.io.File r0 = android.os.Environment.getExternalStorageDirectory()
            java.lang.String r0 = r0.getPath()
            com.igexin.push.core.CoreConsts.o = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.core.CoreConsts.o
            r0.append(r1)
            java.lang.String r1 = "/Sdk/ImgCache/"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.core.CoreConsts.p = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.core.CoreConsts.o
            r0.append(r1)
            java.lang.String r1 = "/Sdk/WebCache/"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.core.CoreConsts.q = r0
            java.lang.String r0 = "com.igexin.sdk.GTPushService"
            com.igexin.push.core.CoreConsts.r = r0
            return
    }

    public CoreConsts() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(int r4, java.lang.String r5, java.lang.String[] r6) {
            if (r4 <= 0) goto L39
            if (r6 == 0) goto L39
            int r0 = r6.length
            if (r0 > 0) goto L8
            goto L39
        L8:
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            java.lang.StringBuffer r1 = new java.lang.StringBuffer
            r1.<init>()
            r1.append(r5)
            r5 = 0
            r2 = r5
        L17:
            if (r2 >= r4) goto L26
            int r3 = r6.length
            int r3 = r0.nextInt(r3)
            r3 = r6[r3]
            r1.append(r3)
            int r2 = r2 + 1
            goto L17
        L26:
            java.lang.String r4 = r1.toString()
            java.lang.String r6 = r1.toString()
            int r6 = r6.length()
            int r6 = r6 + (-1)
            java.lang.String r4 = r4.substring(r5, r6)
            return r4
        L39:
            return r5
    }

    @java.lang.Deprecated
    public static java.lang.String getBuryPointAction() {
            java.lang.String r0 = com.igexin.push.core.CoreConsts.a
            return r0
    }
}
