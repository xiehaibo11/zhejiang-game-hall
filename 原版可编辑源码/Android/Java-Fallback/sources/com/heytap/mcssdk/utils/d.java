package com.heytap.mcssdk.utils;

public class d {
    public static final java.lang.String a = "mcssdk---";
    private static java.lang.String b = "MCS";
    private static boolean c = false;
    private static boolean d = false;
    private static boolean e = true;
    private static boolean f = true;
    private static boolean g = true;
    private static java.lang.String h = "-->";
    private static boolean i = true;

    static {
            return
    }

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a() {
            java.lang.String r0 = com.heytap.mcssdk.utils.d.b
            return r0
    }

    public static void a(java.lang.Exception r1) {
            boolean r0 = com.heytap.mcssdk.utils.d.g
            if (r0 == 0) goto L10
            if (r1 != 0) goto L7
            return
        L7:
            java.lang.String r1 = r1.getMessage()
            java.lang.String r0 = "mcssdk---"
            android.util.Log.e(r0, r1)
        L10:
            return
    }

    public static void a(java.lang.String r2) {
            boolean r0 = com.heytap.mcssdk.utils.d.c
            if (r0 == 0) goto L23
            boolean r0 = com.heytap.mcssdk.utils.d.i
            if (r0 == 0) goto L23
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.heytap.mcssdk.utils.d.b
            r0.append(r1)
            java.lang.String r1 = com.heytap.mcssdk.utils.d.h
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "mcssdk---"
            android.util.Log.v(r0, r2)
        L23:
            return
    }

    public static void a(java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.heytap.mcssdk.utils.d.c
            if (r0 == 0) goto L21
            boolean r0 = com.heytap.mcssdk.utils.d.i
            if (r0 == 0) goto L21
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.heytap.mcssdk.utils.d.b
            r0.append(r1)
            java.lang.String r1 = com.heytap.mcssdk.utils.d.h
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.util.Log.v(r2, r3)
        L21:
            return
    }

    public static void a(java.lang.String r1, java.lang.Throwable r2) {
            boolean r0 = com.heytap.mcssdk.utils.d.g
            if (r0 == 0) goto Lb
            java.lang.String r2 = r2.toString()
            android.util.Log.e(r1, r2)
        Lb:
            return
    }

    public static void a(boolean r0) {
            com.heytap.mcssdk.utils.d.c = r0
            return
    }

    public static void b(java.lang.String r2) {
            boolean r0 = com.heytap.mcssdk.utils.d.e
            if (r0 == 0) goto L23
            boolean r0 = com.heytap.mcssdk.utils.d.i
            if (r0 == 0) goto L23
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.heytap.mcssdk.utils.d.b
            r0.append(r1)
            java.lang.String r1 = com.heytap.mcssdk.utils.d.h
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "mcssdk---"
            android.util.Log.d(r0, r2)
        L23:
            return
    }

    public static void b(java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.heytap.mcssdk.utils.d.e
            if (r0 == 0) goto L21
            boolean r0 = com.heytap.mcssdk.utils.d.i
            if (r0 == 0) goto L21
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.heytap.mcssdk.utils.d.b
            r0.append(r1)
            java.lang.String r1 = com.heytap.mcssdk.utils.d.h
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.util.Log.d(r2, r3)
        L21:
            return
    }

    public static void b(boolean r0) {
            com.heytap.mcssdk.utils.d.e = r0
            return
    }

    public static boolean b() {
            boolean r0 = com.heytap.mcssdk.utils.d.c
            return r0
    }

    public static void c(java.lang.String r2) {
            boolean r0 = com.heytap.mcssdk.utils.d.d
            if (r0 == 0) goto L23
            boolean r0 = com.heytap.mcssdk.utils.d.i
            if (r0 == 0) goto L23
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.heytap.mcssdk.utils.d.b
            r0.append(r1)
            java.lang.String r1 = com.heytap.mcssdk.utils.d.h
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "mcssdk---"
            android.util.Log.i(r0, r2)
        L23:
            return
    }

    public static void c(java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.heytap.mcssdk.utils.d.d
            if (r0 == 0) goto L21
            boolean r0 = com.heytap.mcssdk.utils.d.i
            if (r0 == 0) goto L21
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.heytap.mcssdk.utils.d.b
            r0.append(r1)
            java.lang.String r1 = com.heytap.mcssdk.utils.d.h
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.util.Log.i(r2, r3)
        L21:
            return
    }

    public static void c(boolean r0) {
            com.heytap.mcssdk.utils.d.d = r0
            return
    }

    public static boolean c() {
            boolean r0 = com.heytap.mcssdk.utils.d.e
            return r0
    }

    public static void d(java.lang.String r2) {
            boolean r0 = com.heytap.mcssdk.utils.d.f
            if (r0 == 0) goto L23
            boolean r0 = com.heytap.mcssdk.utils.d.i
            if (r0 == 0) goto L23
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.heytap.mcssdk.utils.d.b
            r0.append(r1)
            java.lang.String r1 = com.heytap.mcssdk.utils.d.h
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "mcssdk---"
            android.util.Log.w(r0, r2)
        L23:
            return
    }

    public static void d(java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.heytap.mcssdk.utils.d.f
            if (r0 == 0) goto L21
            boolean r0 = com.heytap.mcssdk.utils.d.i
            if (r0 == 0) goto L21
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.heytap.mcssdk.utils.d.b
            r0.append(r1)
            java.lang.String r1 = com.heytap.mcssdk.utils.d.h
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.util.Log.w(r2, r3)
        L21:
            return
    }

    public static void d(boolean r0) {
            com.heytap.mcssdk.utils.d.f = r0
            return
    }

    public static boolean d() {
            boolean r0 = com.heytap.mcssdk.utils.d.d
            return r0
    }

    public static void e(java.lang.String r2) {
            boolean r0 = com.heytap.mcssdk.utils.d.g
            if (r0 == 0) goto L23
            boolean r0 = com.heytap.mcssdk.utils.d.i
            if (r0 == 0) goto L23
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.heytap.mcssdk.utils.d.b
            r0.append(r1)
            java.lang.String r1 = com.heytap.mcssdk.utils.d.h
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "mcssdk---"
            android.util.Log.e(r0, r2)
        L23:
            return
    }

    public static void e(java.lang.String r2, java.lang.String r3) {
            boolean r0 = com.heytap.mcssdk.utils.d.g
            if (r0 == 0) goto L21
            boolean r0 = com.heytap.mcssdk.utils.d.i
            if (r0 == 0) goto L21
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.heytap.mcssdk.utils.d.b
            r0.append(r1)
            java.lang.String r1 = com.heytap.mcssdk.utils.d.h
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            android.util.Log.e(r2, r3)
        L21:
            return
    }

    public static void e(boolean r0) {
            com.heytap.mcssdk.utils.d.g = r0
            return
    }

    public static boolean e() {
            boolean r0 = com.heytap.mcssdk.utils.d.f
            return r0
    }

    public static void f(java.lang.String r0) {
            com.heytap.mcssdk.utils.d.b = r0
            return
    }

    public static void f(boolean r0) {
            com.heytap.mcssdk.utils.d.i = r0
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.heytap.mcssdk.utils.d.c = r0
            com.heytap.mcssdk.utils.d.e = r0
            com.heytap.mcssdk.utils.d.d = r0
            com.heytap.mcssdk.utils.d.f = r0
            com.heytap.mcssdk.utils.d.g = r0
            return
    }

    public static boolean f() {
            boolean r0 = com.heytap.mcssdk.utils.d.g
            return r0
    }

    public static void g(java.lang.String r0) {
            com.heytap.mcssdk.utils.d.h = r0
            return
    }

    public static boolean g() {
            boolean r0 = com.heytap.mcssdk.utils.d.i
            return r0
    }

    public static java.lang.String h() {
            java.lang.String r0 = com.heytap.mcssdk.utils.d.h
            return r0
    }
}
