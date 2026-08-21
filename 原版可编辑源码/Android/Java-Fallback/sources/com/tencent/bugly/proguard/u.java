package com.tencent.bugly.proguard;

public final class u {
    public static final long a = 0;
    private static com.tencent.bugly.proguard.u b;
    private android.content.Context c;
    private java.lang.String d;
    private java.util.Map<java.lang.Integer, java.util.Map<java.lang.String, com.tencent.bugly.proguard.t>> e;
    private android.content.SharedPreferences f;



    static {
            long r0 = java.lang.System.currentTimeMillis()
            com.tencent.bugly.proguard.u.a = r0
            return
    }

    private u(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            r2.c = r3
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.e = r0
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()
            java.lang.String r0 = r0.d
            r2.d = r0
            java.lang.String r0 = "crashrecord"
            r1 = 0
            android.content.SharedPreferences r3 = r3.getSharedPreferences(r0, r1)
            r2.f = r3
            return
    }

    public static synchronized com.tencent.bugly.proguard.u a() {
            java.lang.Class<com.tencent.bugly.proguard.u> r0 = com.tencent.bugly.proguard.u.class
            monitor-enter(r0)
            com.tencent.bugly.proguard.u r1 = com.tencent.bugly.proguard.u.b     // Catch: java.lang.Throwable -> L7
            monitor-exit(r0)
            return r1
        L7:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static synchronized com.tencent.bugly.proguard.u a(android.content.Context r2) {
            java.lang.Class<com.tencent.bugly.proguard.u> r0 = com.tencent.bugly.proguard.u.class
            monitor-enter(r0)
            com.tencent.bugly.proguard.u r1 = com.tencent.bugly.proguard.u.b     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.tencent.bugly.proguard.u r1 = new com.tencent.bugly.proguard.u     // Catch: java.lang.Throwable -> L12
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L12
            com.tencent.bugly.proguard.u.b = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.tencent.bugly.proguard.u r2 = com.tencent.bugly.proguard.u.b     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r2
        L12:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    static java.lang.String a(com.tencent.bugly.proguard.u r0) {
            java.lang.String r0 = r0.d
            return r0
    }

    static java.util.List a(com.tencent.bugly.proguard.u r0, int r1) {
            java.util.List r0 = r0.d(r1)
            return r0
    }

    private synchronized <T extends java.util.List<?>> void a(int r5, T r6) {
            r4 = this;
            monitor-enter(r4)
            if (r6 != 0) goto L5
            monitor-exit(r4)
            return
        L5:
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L50
            android.content.Context r2 = r4.c     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L50
            java.lang.String r3 = "crashrecord"
            java.io.File r2 = r2.getDir(r3, r0)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L50
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L50
            r1.<init>(r2, r5)     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L50
            r5 = 0
            java.io.ObjectOutputStream r2 = new java.io.ObjectOutputStream     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            r3.<init>(r1)     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L32 java.io.IOException -> L34
            r2.writeObject(r6)     // Catch: java.lang.Throwable -> L2a java.io.IOException -> L2e
            r2.close()     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L50
            monitor-exit(r4)
            return
        L2a:
            r5 = move-exception
            r6 = r5
            r5 = r2
            goto L48
        L2e:
            r5 = move-exception
            r6 = r5
            r5 = r2
            goto L35
        L32:
            r6 = move-exception
            goto L48
        L34:
            r6 = move-exception
        L35:
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L32
            java.lang.String r6 = "open record file error"
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L32
            com.tencent.bugly.proguard.al.a(r6, r1)     // Catch: java.lang.Throwable -> L32
            if (r5 == 0) goto L46
            r5.close()     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L50
            monitor-exit(r4)
            return
        L46:
            monitor-exit(r4)
            return
        L48:
            if (r5 == 0) goto L4d
            r5.close()     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L50
        L4d:
            throw r6     // Catch: java.lang.Throwable -> L4e java.lang.Exception -> L50
        L4e:
            r5 = move-exception
            goto L59
        L50:
            java.lang.String r5 = "writeCrashRecord error"
            java.lang.Object[] r6 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L4e
            com.tencent.bugly.proguard.al.e(r5, r6)     // Catch: java.lang.Throwable -> L4e
            monitor-exit(r4)
            return
        L59:
            monitor-exit(r4)
            throw r5
    }

    static void a(com.tencent.bugly.proguard.u r0, int r1, java.util.List r2) {
            r0.a(r1, r2)
            return
    }

    static boolean a(com.tencent.bugly.proguard.t r5, com.tencent.bugly.proguard.t r6) {
            long r0 = r5.g
            long r2 = r6.g
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 != 0) goto L18
            java.lang.String r0 = r5.b
            if (r0 == 0) goto L18
            java.lang.String r5 = r5.b
            java.lang.String r6 = r6.b
            boolean r5 = r5.equalsIgnoreCase(r6)
            if (r5 == 0) goto L18
            r5 = 1
            return r5
        L18:
            r5 = 0
            return r5
    }

    static java.util.Map b(com.tencent.bugly.proguard.u r0) {
            java.util.Map<java.lang.Integer, java.util.Map<java.lang.String, com.tencent.bugly.proguard.t>> r0 = r0.e
            return r0
    }

    static boolean b(com.tencent.bugly.proguard.t r2, com.tencent.bugly.proguard.t r3) {
            java.lang.String r0 = r2.e
            if (r0 == 0) goto Le
            java.lang.String r0 = r2.e
            java.lang.String r1 = r3.e
            boolean r0 = r0.equalsIgnoreCase(r1)
            if (r0 == 0) goto L20
        Le:
            java.lang.String r0 = r2.f
            if (r0 == 0) goto L1c
            java.lang.String r0 = r2.f
            java.lang.String r3 = r3.f
            boolean r3 = r0.equalsIgnoreCase(r3)
            if (r3 == 0) goto L20
        L1c:
            int r2 = r2.d
            if (r2 > 0) goto L22
        L20:
            r2 = 1
            return r2
        L22:
            r2 = 0
            return r2
    }

    static boolean b(com.tencent.bugly.proguard.u r0, int r1) {
            boolean r0 = r0.c(r1)
            return r0
    }

    static android.content.SharedPreferences c(com.tencent.bugly.proguard.u r0) {
            android.content.SharedPreferences r0 = r0.f
            return r0
    }

    private synchronized boolean c(int r13) {
            r12 = this;
            monitor-enter(r12)
            r0 = 0
            java.util.List r1 = r12.d(r13)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            if (r1 != 0) goto La
            monitor-exit(r12)
            return r0
        La:
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            r4.<init>()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.util.ArrayList r5 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            r5.<init>()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.util.Iterator r6 = r1.iterator()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
        L1c:
            boolean r7 = r6.hasNext()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            r8 = 86400000(0x5265c00, double:4.2687272E-316)
            if (r7 == 0) goto L4b
            java.lang.Object r7 = r6.next()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            com.tencent.bugly.proguard.t r7 = (com.tencent.bugly.proguard.t) r7     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.lang.String r10 = r7.b     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            if (r10 == 0) goto L40
            java.lang.String r10 = r7.b     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            java.lang.String r11 = r12.d     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            boolean r10 = r10.equalsIgnoreCase(r11)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            if (r10 == 0) goto L40
            int r10 = r7.d     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            if (r10 <= 0) goto L40
            r4.add(r7)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
        L40:
            long r10 = r7.c     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            long r10 = r10 + r8
            int r8 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r8 >= 0) goto L1c
            r5.add(r7)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            goto L1c
        L4b:
            java.util.Collections.sort(r4)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            int r6 = r4.size()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            r7 = 2
            if (r6 < r7) goto L78
            int r5 = r4.size()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            r6 = 1
            if (r5 <= 0) goto L76
            int r5 = r4.size()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            int r5 = r5 - r6
            java.lang.Object r4 = r4.get(r5)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            com.tencent.bugly.proguard.t r4 = (com.tencent.bugly.proguard.t) r4     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            long r4 = r4.c     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            long r4 = r4 + r8
            int r7 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r7 >= 0) goto L76
            r1.clear()     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            r12.a(r13, r1)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            monitor-exit(r12)
            return r0
        L76:
            monitor-exit(r12)
            return r6
        L78:
            r1.removeAll(r5)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            r12.a(r13, r1)     // Catch: java.lang.Throwable -> L80 java.lang.Exception -> L82
            monitor-exit(r12)
            return r0
        L80:
            r13 = move-exception
            goto L8b
        L82:
            java.lang.String r13 = "isFrequentCrash failed"
            java.lang.Object[] r1 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L80
            com.tencent.bugly.proguard.al.e(r13, r1)     // Catch: java.lang.Throwable -> L80
            monitor-exit(r12)
            return r0
        L8b:
            monitor-exit(r12)
            throw r13
    }

    private synchronized <T extends java.util.List<?>> T d(int r6) {
            r5 = this;
            monitor-enter(r5)
            r0 = 0
            r1 = 0
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
            android.content.Context r3 = r5.c     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
            java.lang.String r4 = "crashrecord"
            java.io.File r3 = r3.getDir(r4, r1)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
            java.lang.String r6 = java.lang.String.valueOf(r6)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
            r2.<init>(r3, r6)     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
            boolean r6 = r2.exists()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
            if (r6 != 0) goto L1c
            monitor-exit(r5)
            return r0
        L1c:
            java.io.ObjectInputStream r6 = new java.io.ObjectInputStream     // Catch: java.lang.Throwable -> L31 java.lang.ClassNotFoundException -> L34 java.io.IOException -> L42
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L31 java.lang.ClassNotFoundException -> L34 java.io.IOException -> L42
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L31 java.lang.ClassNotFoundException -> L34 java.io.IOException -> L42
            r6.<init>(r3)     // Catch: java.lang.Throwable -> L31 java.lang.ClassNotFoundException -> L34 java.io.IOException -> L42
            java.lang.Object r2 = r6.readObject()     // Catch: java.lang.ClassNotFoundException -> L35 java.io.IOException -> L43 java.lang.Throwable -> L4d
            java.util.List r2 = (java.util.List) r2     // Catch: java.lang.ClassNotFoundException -> L35 java.io.IOException -> L43 java.lang.Throwable -> L4d
            r6.close()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
            monitor-exit(r5)
            return r2
        L31:
            r2 = move-exception
            r6 = r0
            goto L4e
        L34:
            r6 = r0
        L35:
            java.lang.String r2 = "get object error"
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L4d
            com.tencent.bugly.proguard.al.a(r2, r3)     // Catch: java.lang.Throwable -> L4d
            if (r6 == 0) goto L5d
        L3e:
            r6.close()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
            goto L5d
        L42:
            r6 = r0
        L43:
            java.lang.String r2 = "open record file error"
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L4d
            com.tencent.bugly.proguard.al.a(r2, r3)     // Catch: java.lang.Throwable -> L4d
            if (r6 == 0) goto L5d
            goto L3e
        L4d:
            r2 = move-exception
        L4e:
            if (r6 == 0) goto L53
            r6.close()     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
        L53:
            throw r2     // Catch: java.lang.Throwable -> L54 java.lang.Exception -> L56
        L54:
            r6 = move-exception
            goto L5f
        L56:
            java.lang.String r6 = "readCrashRecord error"
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L54
            com.tencent.bugly.proguard.al.e(r6, r1)     // Catch: java.lang.Throwable -> L54
        L5d:
            monitor-exit(r5)
            return r0
        L5f:
            monitor-exit(r5)
            throw r6
    }

    public final void a(int r3) {
            r2 = this;
            com.tencent.bugly.proguard.ak r0 = com.tencent.bugly.proguard.ak.a()
            com.tencent.bugly.proguard.u$1 r1 = new com.tencent.bugly.proguard.u$1
            r1.<init>(r2, r3)
            r0.a(r1)
            return
    }

    public final synchronized boolean b(int r5) {
            r4 = this;
            monitor-enter(r4)
            r0 = 1
            android.content.SharedPreferences r1 = r4.f     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r2.<init>()     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r2.append(r5)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            java.lang.String r3 = "_"
            r2.append(r3)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            java.lang.String r3 = r4.d     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r2.append(r3)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            boolean r0 = r1.getBoolean(r2, r0)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            com.tencent.bugly.proguard.ak r1 = com.tencent.bugly.proguard.ak.a()     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            com.tencent.bugly.proguard.u$2 r2 = new com.tencent.bugly.proguard.u$2     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r2.<init>(r4, r5)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            r1.a(r2)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L2e
            monitor-exit(r4)
            return r0
        L2c:
            r5 = move-exception
            goto L38
        L2e:
            java.lang.String r5 = "canInit error"
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L2c
            com.tencent.bugly.proguard.al.e(r5, r1)     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r4)
            return r0
        L38:
            monitor-exit(r4)
            throw r5
    }
}
