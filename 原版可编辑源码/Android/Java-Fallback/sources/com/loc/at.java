package com.loc;

public final class at {
    public static final java.lang.String a = "/a/";
    static final java.lang.String b = "b";
    static final java.lang.String c = "c";
    static final java.lang.String d = "d";
    public static java.lang.String e = "s";
    public static final java.lang.String f = "g";
    public static final java.lang.String g = "h";
    public static final java.lang.String h = "e";
    public static final java.lang.String i = "f";
    public static final java.lang.String j = "j";
    public static final java.lang.String k = "k";
    private static long l;
    private static java.util.Vector<com.loc.w> m;


    static {
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
            com.loc.at.m = r0
            return
    }

    public static java.lang.String a(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "AMSKLG_CFG"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            java.lang.String r0 = ""
            java.lang.String r2 = r2.getString(r3, r0)
            return r2
    }

    static java.util.List<com.loc.w> a() {
            android.os.Looper r0 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> Lc
            monitor-enter(r0)     // Catch: java.lang.Throwable -> Lc
            java.util.Vector<com.loc.w> r1 = com.loc.at.m     // Catch: java.lang.Throwable -> L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
            return r1
        L9:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
            throw r1     // Catch: java.lang.Throwable -> Lc
        Lc:
            r0 = move-exception
            r0.printStackTrace()
            java.util.Vector<com.loc.w> r0 = com.loc.at.m
            return r0
    }

    public static void a(android.content.Context r5) {
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L22
            long r2 = com.loc.at.l     // Catch: java.lang.Throwable -> L22
            long r0 = r0 - r2
            r2 = 60000(0xea60, double:2.9644E-319)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 >= 0) goto Lf
            return
        Lf:
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L22
            com.loc.at.l = r0     // Catch: java.lang.Throwable -> L22
            com.loc.cr r0 = com.loc.cr.a()     // Catch: java.lang.Throwable -> L22
            com.loc.at$1 r1 = new com.loc.at$1     // Catch: java.lang.Throwable -> L22
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L22
            r0.b(r1)     // Catch: java.lang.Throwable -> L22
            return
        L22:
            r5 = move-exception
            java.lang.String r0 = "Lg"
            java.lang.String r1 = "proL"
            com.loc.av.b(r5, r0, r1)
            return
    }

    public static void a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = "AMSKLG_CFG"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            r2.putString(r3, r4)
            r2.apply()
            return
    }

    public static void a(com.loc.w r2) {
            android.os.Looper r0 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L1d
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L1d
            if (r2 != 0) goto L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            return
        L9:
            java.util.Vector<com.loc.w> r1 = com.loc.at.m     // Catch: java.lang.Throwable -> L1a
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L1a
            if (r1 == 0) goto L13
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            return
        L13:
            java.util.Vector<com.loc.w> r1 = com.loc.at.m     // Catch: java.lang.Throwable -> L1a
            r1.add(r2)     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            return
        L1a:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            throw r2     // Catch: java.lang.Throwable -> L1d
        L1d:
            return
    }

    static boolean a(java.lang.String[] r6, java.lang.String r7) {
            r0 = 0
            if (r6 == 0) goto L4d
            if (r7 != 0) goto L6
            goto L4d
        L6:
            java.lang.String r1 = "\n"
            java.lang.String[] r7 = r7.split(r1)     // Catch: java.lang.Throwable -> L49
            int r1 = r7.length     // Catch: java.lang.Throwable -> L49
            r2 = 0
        Le:
            r3 = 1
            if (r2 >= r1) goto L35
            r4 = r7[r2]     // Catch: java.lang.Throwable -> L49
            java.lang.String r4 = r4.trim()     // Catch: java.lang.Throwable -> L49
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L49
            if (r5 != 0) goto L2e
            java.lang.String r5 = "at "
            boolean r5 = r4.startsWith(r5)     // Catch: java.lang.Throwable -> L49
            if (r5 == 0) goto L2e
            java.lang.String r5 = "uncaughtException"
            boolean r4 = r4.contains(r5)     // Catch: java.lang.Throwable -> L49
            if (r4 == 0) goto L2e
            goto L2f
        L2e:
            r3 = 0
        L2f:
            if (r3 == 0) goto L32
            return r0
        L32:
            int r2 = r2 + 1
            goto Le
        L35:
            int r1 = r7.length     // Catch: java.lang.Throwable -> L49
            r2 = 0
        L37:
            if (r2 >= r1) goto L4d
            r4 = r7[r2]     // Catch: java.lang.Throwable -> L49
            java.lang.String r4 = r4.trim()     // Catch: java.lang.Throwable -> L49
            boolean r4 = b(r6, r4)     // Catch: java.lang.Throwable -> L49
            if (r4 == 0) goto L46
            return r3
        L46:
            int r2 = r2 + 1
            goto L37
        L49:
            r6 = move-exception
            r6.printStackTrace()
        L4d:
            return r0
    }

    public static void b(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "AMSKLG_CFG"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            r2.remove(r3)
            r2.apply()
            return
    }

    static boolean b(java.lang.String[] r5, java.lang.String r6) {
            r0 = 0
            if (r5 == 0) goto L48
            if (r6 != 0) goto L6
            goto L48
        L6:
            int r1 = r5.length     // Catch: java.lang.Throwable -> L44
            r2 = 0
        L8:
            if (r2 >= r1) goto L48
            r3 = r5[r2]     // Catch: java.lang.Throwable -> L44
            java.lang.String r6 = r6.trim()     // Catch: java.lang.Throwable -> L44
            java.lang.String r4 = "at "
            boolean r4 = r6.startsWith(r4)     // Catch: java.lang.Throwable -> L44
            if (r4 == 0) goto L41
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L44
            r4.<init>()     // Catch: java.lang.Throwable -> L44
            r4.append(r3)     // Catch: java.lang.Throwable -> L44
            java.lang.String r3 = "."
            r4.append(r3)     // Catch: java.lang.Throwable -> L44
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L44
            boolean r3 = r6.contains(r3)     // Catch: java.lang.Throwable -> L44
            if (r3 == 0) goto L41
            java.lang.String r3 = ")"
            boolean r3 = r6.endsWith(r3)     // Catch: java.lang.Throwable -> L44
            if (r3 == 0) goto L41
            java.lang.String r3 = "uncaughtException"
            boolean r3 = r6.contains(r3)     // Catch: java.lang.Throwable -> L44
            if (r3 != 0) goto L41
            r5 = 1
            return r5
        L41:
            int r2 = r2 + 1
            goto L8
        L44:
            r5 = move-exception
            r5.printStackTrace()
        L48:
            return r0
    }

    public static java.lang.String c(android.content.Context r1, java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.io.File r1 = r1.getFilesDir()
            java.lang.String r1 = r1.getAbsolutePath()
            r0.append(r1)
            java.lang.String r1 = com.loc.at.a
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = r0.toString()
            return r1
    }
}
