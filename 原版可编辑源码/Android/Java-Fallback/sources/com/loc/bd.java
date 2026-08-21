package com.loc;

public final class bd {
    static byte[] a;
    static byte[] b;
    private java.lang.String c;

    static {
            return
    }

    public bd(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            boolean r0 = android.text.TextUtils.isDigitsOnly(r2)
            if (r0 == 0) goto Lb
            java.lang.String r2 = "SPUtil"
        Lb:
            java.lang.String r2 = com.loc.s.a(r2)
            r1.c = r2
            return
    }

    public static int a(android.content.Context r1, java.lang.String r2, java.lang.String r3, int r4) {
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Throwable -> La
            int r1 = r1.getInt(r3, r4)     // Catch: java.lang.Throwable -> La
            return r1
        La:
            r1 = move-exception
            java.lang.String r2 = "csp"
            java.lang.String r3 = "giv"
            com.loc.av.b(r1, r2, r3)
            return r4
    }

    public static long a(android.content.Context r1, java.lang.String r2, java.lang.String r3, long r4) {
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Throwable -> La
            long r1 = r1.getLong(r3, r4)     // Catch: java.lang.Throwable -> La
            return r1
        La:
            r1 = move-exception
            java.lang.String r2 = "csp"
            java.lang.String r3 = "glv"
            com.loc.av.b(r1, r2, r3)
            return r4
    }

    public static android.content.SharedPreferences.Editor a(android.content.Context r2, java.lang.String r3) {
            r0 = 0
            if (r2 == 0) goto L1c
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L14
            if (r1 == 0) goto La
            goto L1c
        La:
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r3, r1)     // Catch: java.lang.Throwable -> L14
            android.content.SharedPreferences$Editor r2 = r2.edit()     // Catch: java.lang.Throwable -> L14
            return r2
        L14:
            r2 = move-exception
            java.lang.String r3 = "sp"
            java.lang.String r1 = "ge"
            com.loc.as.a(r2, r3, r1)
        L1c:
            return r0
    }

    public static java.lang.String a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = ""
            if (r2 != 0) goto L5
            return r0
        L5:
            r1 = 0
            android.content.SharedPreferences r3 = r2.getSharedPreferences(r3, r1)     // Catch: java.lang.Throwable -> L1a
            java.lang.String r3 = r3.getString(r4, r0)     // Catch: java.lang.Throwable -> L1a
            byte[] r3 = com.loc.x.d(r3)     // Catch: java.lang.Throwable -> L1a
            byte[] r2 = b(r2, r3)     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = com.loc.x.a(r2)     // Catch: java.lang.Throwable -> L1a
        L1a:
            return r0
    }

    public static void a(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            if (r1 == 0) goto L2a
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L2a
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Lf
            goto L2a
        Lf:
            r0 = 0
            android.content.SharedPreferences r2 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Throwable -> L2a
            android.content.SharedPreferences$Editor r2 = r2.edit()     // Catch: java.lang.Throwable -> L2a
            byte[] r4 = com.loc.x.a(r4)     // Catch: java.lang.Throwable -> L2a
            byte[] r1 = a(r1, r4)     // Catch: java.lang.Throwable -> L2a
            java.lang.String r1 = com.loc.x.g(r1)     // Catch: java.lang.Throwable -> L2a
            r2.putString(r3, r1)     // Catch: java.lang.Throwable -> L2a
            a(r2)     // Catch: java.lang.Throwable -> L2a
        L2a:
            return
    }

    public static void a(android.content.SharedPreferences.Editor r2) {
            if (r2 != 0) goto L3
            return
        L3:
            r2.apply()     // Catch: java.lang.Throwable -> L7
            return
        L7:
            r2 = move-exception
            java.lang.String r0 = "sp"
            java.lang.String r1 = "cm"
            com.loc.as.a(r2, r0, r1)
            return
    }

    public static void a(android.content.SharedPreferences.Editor r1, java.lang.String r2) {
            if (r1 == 0) goto L15
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto L9
            goto L15
        L9:
            r1.remove(r2)     // Catch: java.lang.Throwable -> Ld
            return
        Ld:
            r1 = move-exception
            java.lang.String r2 = "sp"
            java.lang.String r0 = "rk"
            com.loc.as.a(r1, r2, r0)
        L15:
            return
    }

    public static void a(android.content.SharedPreferences.Editor r0, java.lang.String r1, int r2) {
            r0.putInt(r1, r2)     // Catch: java.lang.Throwable -> L4
            return
        L4:
            r0 = move-exception
            java.lang.String r1 = "csp"
            java.lang.String r2 = "putPrefsInt"
            com.loc.av.b(r0, r1, r2)
            return
    }

    public static void a(android.content.SharedPreferences.Editor r1, java.lang.String r2, long r3) {
            if (r1 == 0) goto L15
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            goto L15
        L9:
            r1.putLong(r2, r3)     // Catch: java.lang.Throwable -> Ld
            return
        Ld:
            r1 = move-exception
            java.lang.String r2 = "csp"
            java.lang.String r3 = "plv"
            com.loc.av.b(r1, r2, r3)
        L15:
            return
    }

    public static void a(android.content.SharedPreferences.Editor r1, java.lang.String r2, java.lang.String r3) {
            if (r1 == 0) goto L1b
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L13
            if (r0 != 0) goto L1b
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L13
            if (r0 == 0) goto Lf
            goto L1b
        Lf:
            r1.putString(r2, r3)     // Catch: java.lang.Throwable -> L13
            return
        L13:
            r1 = move-exception
            java.lang.String r2 = "sp"
            java.lang.String r3 = "ps"
            com.loc.as.a(r1, r2, r3)
        L1b:
            return
    }

    public static void a(android.content.SharedPreferences.Editor r0, java.lang.String r1, boolean r2) {
            r0.putBoolean(r1, r2)     // Catch: java.lang.Throwable -> L4
            return
        L4:
            r0 = move-exception
            java.lang.String r1 = "csp"
            java.lang.String r2 = "setPrefsStr"
            com.loc.av.b(r0, r1, r2)
            return
    }

    public static boolean a(android.content.Context r1, java.lang.String r2, java.lang.String r3, boolean r4) {
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Throwable -> La
            boolean r1 = r1.getBoolean(r3, r4)     // Catch: java.lang.Throwable -> La
            return r1
        La:
            r1 = move-exception
            java.lang.String r2 = "csp"
            java.lang.String r3 = "gbv"
            com.loc.av.b(r1, r2, r3)
            return r4
    }

    private static byte[] a(android.content.Context r2) {
            if (r2 != 0) goto L6
            r2 = 0
            byte[] r2 = new byte[r2]
            return r2
        L6:
            byte[] r0 = com.loc.bd.a
            if (r0 == 0) goto Le
            int r1 = r0.length
            if (r1 <= 0) goto Le
            return r0
        Le:
            java.lang.String r2 = com.loc.l.f(r2)
            byte[] r2 = r2.getBytes()
            com.loc.bd.a = r2
            return r2
    }

    public static byte[] a(android.content.Context r1, byte[] r2) {
            byte[] r0 = a(r1)     // Catch: java.lang.Throwable -> Ld
            byte[] r1 = b(r1)     // Catch: java.lang.Throwable -> Ld
            byte[] r1 = com.loc.p.b(r0, r2, r1)     // Catch: java.lang.Throwable -> Ld
            return r1
        Ld:
            r1 = 0
            byte[] r1 = new byte[r1]
            return r1
    }

    public static java.lang.String b(android.content.Context r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            r0 = 0
            android.content.SharedPreferences r1 = r1.getSharedPreferences(r2, r0)     // Catch: java.lang.Throwable -> Le
            java.lang.String r1 = r1.getString(r3, r4)     // Catch: java.lang.Throwable -> Le
            return r1
        Le:
            r1 = move-exception
            java.lang.String r2 = "csp"
            java.lang.String r3 = "gsv"
            com.loc.av.b(r1, r2, r3)
            return r4
    }

    private static byte[] b(android.content.Context r3) {
            byte[] r0 = com.loc.bd.b
            if (r0 == 0) goto L8
            int r1 = r0.length
            if (r1 <= 0) goto L8
            return r0
        L8:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 9
            r2 = 0
            if (r0 < r1) goto L21
            byte[] r0 = a(r3)
            byte[] r3 = a(r3)
            int r3 = r3.length
            int r3 = r3 / 2
            byte[] r3 = java.util.Arrays.copyOfRange(r0, r2, r3)
            com.loc.bd.b = r3
            goto L3c
        L21:
            byte[] r0 = a(r3)
            int r0 = r0.length
            int r0 = r0 / 2
            byte[] r0 = new byte[r0]
            com.loc.bd.b = r0
        L2c:
            byte[] r0 = com.loc.bd.b
            int r1 = r0.length
            if (r2 >= r1) goto L3c
            byte[] r1 = a(r3)
            r1 = r1[r2]
            r0[r2] = r1
            int r2 = r2 + 1
            goto L2c
        L3c:
            byte[] r3 = com.loc.bd.b
            return r3
    }

    public static byte[] b(android.content.Context r1, byte[] r2) {
            byte[] r0 = a(r1)     // Catch: java.lang.Exception -> Ld
            byte[] r1 = b(r1)     // Catch: java.lang.Exception -> Ld
            byte[] r1 = com.loc.p.a(r0, r2, r1)     // Catch: java.lang.Exception -> Ld
            return r1
        Ld:
            r1 = 0
            byte[] r1 = new byte[r1]
            return r1
    }
}
