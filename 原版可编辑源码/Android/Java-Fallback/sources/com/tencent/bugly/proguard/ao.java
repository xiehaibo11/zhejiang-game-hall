package com.tencent.bugly.proguard;

public final class ao {
    public static boolean a = true;
    public static boolean b = true;
    private static java.text.SimpleDateFormat c = null;
    private static int d = 30720;
    private static java.lang.StringBuilder e;
    private static java.lang.StringBuilder f;
    private static boolean g;
    private static com.tencent.bugly.proguard.ao.a h;
    private static java.lang.String i;
    private static java.lang.String j;
    private static android.content.Context k;
    private static java.lang.String l;
    private static boolean m;
    private static boolean n;
    private static java.util.concurrent.ExecutorService o;
    private static int p;
    private static final java.lang.Object q = null;



    public static class a {
        boolean a;
        java.io.File b;
        long c;
        private java.lang.String d;
        private long e;

        public a(java.lang.String r3) {
                r2 = this;
                r2.<init>()
                r0 = 30720(0x7800, double:1.51777E-319)
                r2.c = r0
                if (r3 == 0) goto L1a
                java.lang.String r0 = ""
                boolean r0 = r3.equals(r0)
                if (r0 == 0) goto L12
                goto L1a
            L12:
                r2.d = r3
                boolean r3 = r2.a()
                r2.a = r3
            L1a:
                return
        }

        final boolean a() {
                r3 = this;
                r0 = 0
                java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L2a
                java.lang.String r2 = r3.d     // Catch: java.lang.Throwable -> L2a
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L2a
                r3.b = r1     // Catch: java.lang.Throwable -> L2a
                java.io.File r1 = r3.b     // Catch: java.lang.Throwable -> L2a
                boolean r1 = r1.exists()     // Catch: java.lang.Throwable -> L2a
                if (r1 == 0) goto L1d
                java.io.File r1 = r3.b     // Catch: java.lang.Throwable -> L2a
                boolean r1 = r1.delete()     // Catch: java.lang.Throwable -> L2a
                if (r1 != 0) goto L1d
                r3.a = r0     // Catch: java.lang.Throwable -> L2a
                return r0
            L1d:
                java.io.File r1 = r3.b     // Catch: java.lang.Throwable -> L2a
                boolean r1 = r1.createNewFile()     // Catch: java.lang.Throwable -> L2a
                if (r1 != 0) goto L28
                r3.a = r0     // Catch: java.lang.Throwable -> L2a
                return r0
            L28:
                r0 = 1
                return r0
            L2a:
                r1 = move-exception
                com.tencent.bugly.proguard.al.a(r1)
                r3.a = r0
                return r0
        }

        public final boolean a(java.lang.String r10) {
                r9 = this;
                boolean r0 = r9.a
                r1 = 0
                if (r0 != 0) goto L6
                return r1
            L6:
                r0 = 0
                java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L30 java.lang.Throwable -> L33
                java.io.File r3 = r9.b     // Catch: java.lang.Throwable -> L30 java.lang.Throwable -> L33
                r4 = 1
                r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L30 java.lang.Throwable -> L33
                java.lang.String r0 = "UTF-8"
                byte[] r10 = r10.getBytes(r0)     // Catch: java.lang.Throwable -> L2b java.lang.Throwable -> L2d
                r2.write(r10)     // Catch: java.lang.Throwable -> L2b java.lang.Throwable -> L2d
                r2.flush()     // Catch: java.lang.Throwable -> L2b java.lang.Throwable -> L2d
                r2.close()     // Catch: java.lang.Throwable -> L2b java.lang.Throwable -> L2d
                long r5 = r9.e     // Catch: java.lang.Throwable -> L2b java.lang.Throwable -> L2d
                int r10 = r10.length     // Catch: java.lang.Throwable -> L2b java.lang.Throwable -> L2d
                long r7 = (long) r10     // Catch: java.lang.Throwable -> L2b java.lang.Throwable -> L2d
                long r5 = r5 + r7
                r9.e = r5     // Catch: java.lang.Throwable -> L2b java.lang.Throwable -> L2d
                r9.a = r4     // Catch: java.lang.Throwable -> L2b java.lang.Throwable -> L2d
                r2.close()     // Catch: java.io.IOException -> L2a
            L2a:
                return r4
            L2b:
                r10 = move-exception
                goto L3f
            L2d:
                r10 = move-exception
                r0 = r2
                goto L34
            L30:
                r10 = move-exception
                r2 = r0
                goto L3f
            L33:
                r10 = move-exception
            L34:
                com.tencent.bugly.proguard.al.a(r10)     // Catch: java.lang.Throwable -> L30
                r9.a = r1     // Catch: java.lang.Throwable -> L30
                if (r0 == 0) goto L3e
                r0.close()     // Catch: java.io.IOException -> L3e
            L3e:
                return r1
            L3f:
                if (r2 == 0) goto L44
                r2.close()     // Catch: java.io.IOException -> L44
            L44:
                throw r10
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.tencent.bugly.proguard.ao.q = r0
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat     // Catch: java.lang.Throwable -> L11
            java.lang.String r1 = "MM-dd HH:mm:ss"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L11
            com.tencent.bugly.proguard.ao.c = r0     // Catch: java.lang.Throwable -> L11
            return
        L11:
            r0 = move-exception
            java.lang.Throwable r0 = r0.getCause()
            com.tencent.bugly.proguard.al.b(r0)
            return
    }

    private static java.lang.String a(java.lang.String r3, java.lang.String r4, java.lang.String r5, long r6) {
            java.lang.StringBuilder r0 = com.tencent.bugly.proguard.ao.e
            r1 = 0
            r0.setLength(r1)
            int r0 = r5.length()
            r1 = 30720(0x7800, float:4.3048E-41)
            if (r0 <= r1) goto L1d
            int r0 = r5.length()
            int r0 = r0 - r1
            int r1 = r5.length()
            int r1 = r1 + (-1)
            java.lang.String r5 = r5.substring(r0, r1)
        L1d:
            java.util.Date r0 = new java.util.Date
            r0.<init>()
            java.text.SimpleDateFormat r1 = com.tencent.bugly.proguard.ao.c
            if (r1 == 0) goto L2b
            java.lang.String r0 = r1.format(r0)
            goto L2f
        L2b:
            java.lang.String r0 = r0.toString()
        L2f:
            java.lang.StringBuilder r1 = com.tencent.bugly.proguard.ao.e
            r1.append(r0)
            java.lang.String r0 = " "
            r1.append(r0)
            int r2 = com.tencent.bugly.proguard.ao.p
            r1.append(r2)
            r1.append(r0)
            r1.append(r6)
            r1.append(r0)
            r1.append(r3)
            r1.append(r0)
            r1.append(r4)
            java.lang.String r3 = ": "
            r1.append(r3)
            r1.append(r5)
            java.lang.String r3 = "\u0001\r\n"
            r1.append(r3)
            java.lang.StringBuilder r3 = com.tencent.bugly.proguard.ao.e
            java.lang.String r3 = r3.toString()
            return r3
    }

    public static void a(int r2) {
            java.lang.Object r0 = com.tencent.bugly.proguard.ao.q
            monitor-enter(r0)
            com.tencent.bugly.proguard.ao.d = r2     // Catch: java.lang.Throwable -> L13
            if (r2 >= 0) goto Lb
            r2 = 0
            com.tencent.bugly.proguard.ao.d = r2     // Catch: java.lang.Throwable -> L13
            goto L11
        Lb:
            r1 = 30720(0x7800, float:4.3048E-41)
            if (r2 <= r1) goto L11
            com.tencent.bugly.proguard.ao.d = r1     // Catch: java.lang.Throwable -> L13
        L11:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            return
        L13:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
            throw r2
    }

    public static synchronized void a(android.content.Context r3) {
            java.lang.Class<com.tencent.bugly.proguard.ao> r0 = com.tencent.bugly.proguard.ao.class
            monitor-enter(r0)
            boolean r1 = com.tencent.bugly.proguard.ao.m     // Catch: java.lang.Throwable -> L72
            if (r1 != 0) goto L70
            if (r3 == 0) goto L70
            boolean r1 = com.tencent.bugly.proguard.ao.b     // Catch: java.lang.Throwable -> L72
            if (r1 != 0) goto Le
            goto L70
        Le:
            java.util.concurrent.ExecutorService r1 = java.util.concurrent.Executors.newSingleThreadExecutor()     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            com.tencent.bugly.proguard.ao.o = r1     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            r2 = 0
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            com.tencent.bugly.proguard.ao.f = r1     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            com.tencent.bugly.proguard.ao.e = r1     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            com.tencent.bugly.proguard.ao.k = r3     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            com.tencent.bugly.proguard.aa r3 = com.tencent.bugly.proguard.aa.a(r3)     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            java.lang.String r1 = r3.d     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            com.tencent.bugly.proguard.ao.i = r1     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            r3.getClass()     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            java.lang.String r3 = ""
            com.tencent.bugly.proguard.ao.j = r3     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            r3.<init>()     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            android.content.Context r1 = com.tencent.bugly.proguard.ao.k     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            java.io.File r1 = r1.getFilesDir()     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            java.lang.String r1 = r1.getPath()     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            r3.append(r1)     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            java.lang.String r1 = "/buglylog_"
            r3.append(r1)     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            java.lang.String r1 = com.tencent.bugly.proguard.ao.i     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            r3.append(r1)     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            java.lang.String r1 = "_"
            r3.append(r1)     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            java.lang.String r1 = com.tencent.bugly.proguard.ao.j     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            r3.append(r1)     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            java.lang.String r1 = ".txt"
            r3.append(r1)     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            com.tencent.bugly.proguard.ao.l = r3     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            int r3 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
            com.tencent.bugly.proguard.ao.p = r3     // Catch: java.lang.Throwable -> L6b java.lang.Throwable -> L72
        L6b:
            r3 = 1
            com.tencent.bugly.proguard.ao.m = r3     // Catch: java.lang.Throwable -> L72
            monitor-exit(r0)
            return
        L70:
            monitor-exit(r0)
            return
        L72:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static synchronized void a(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            java.lang.Class<com.tencent.bugly.proguard.ao> r0 = com.tencent.bugly.proguard.ao.class
            monitor-enter(r0)
            boolean r1 = com.tencent.bugly.proguard.ao.m     // Catch: java.lang.Throwable -> L30
            if (r1 == 0) goto L2e
            boolean r1 = com.tencent.bugly.proguard.ao.b     // Catch: java.lang.Throwable -> L30
            if (r1 != 0) goto Lc
            goto L2e
        Lc:
            boolean r1 = com.tencent.bugly.proguard.ao.n     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L30
            if (r1 == 0) goto L1c
            java.util.concurrent.ExecutorService r1 = com.tencent.bugly.proguard.ao.o     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L30
            com.tencent.bugly.proguard.ao$1 r2 = new com.tencent.bugly.proguard.ao$1     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L30
            r2.<init>(r3, r4, r5)     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L30
            r1.execute(r2)     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L30
            monitor-exit(r0)
            return
        L1c:
            java.util.concurrent.ExecutorService r1 = com.tencent.bugly.proguard.ao.o     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L30
            com.tencent.bugly.proguard.ao$2 r2 = new com.tencent.bugly.proguard.ao$2     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L30
            r2.<init>(r3, r4, r5)     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L30
            r1.execute(r2)     // Catch: java.lang.Exception -> L28 java.lang.Throwable -> L30
            monitor-exit(r0)
            return
        L28:
            r3 = move-exception
            com.tencent.bugly.proguard.al.b(r3)     // Catch: java.lang.Throwable -> L30
            monitor-exit(r0)
            return
        L2e:
            monitor-exit(r0)
            return
        L30:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public static void a(java.lang.String r2, java.lang.String r3, java.lang.Throwable r4) {
            if (r4 != 0) goto L3
            return
        L3:
            java.lang.String r0 = r4.getMessage()
            if (r0 != 0) goto Lb
            java.lang.String r0 = ""
        Lb:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            r0 = 10
            r1.append(r0)
            java.lang.String r4 = com.tencent.bugly.proguard.ap.b(r4)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            a(r2, r3, r4)
            return
    }

    public static byte[] a() {
            boolean r0 = com.tencent.bugly.proguard.ao.a
            if (r0 == 0) goto L17
            boolean r0 = com.tencent.bugly.proguard.ao.b
            if (r0 != 0) goto La
            r0 = 0
            return r0
        La:
            java.lang.StringBuilder r0 = com.tencent.bugly.proguard.ao.f
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "BuglyLog.txt"
            byte[] r0 = com.tencent.bugly.proguard.ap.a(r0, r1)
            return r0
        L17:
            byte[] r0 = c()
            return r0
    }

    private static java.lang.String b() {
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()     // Catch: java.lang.Throwable -> L11
            if (r0 == 0) goto L1b
            com.tencent.bugly.proguard.q r1 = r0.N     // Catch: java.lang.Throwable -> L11
            if (r1 == 0) goto L1b
            com.tencent.bugly.proguard.q r0 = r0.N     // Catch: java.lang.Throwable -> L11
            java.lang.String r0 = r0.getLogFromNative()     // Catch: java.lang.Throwable -> L11
            return r0
        L11:
            r0 = move-exception
            boolean r1 = com.tencent.bugly.proguard.al.a(r0)
            if (r1 != 0) goto L1b
            r0.printStackTrace()
        L1b:
            r0 = 0
            return r0
    }

    static boolean b(java.lang.String r0, java.lang.String r1, java.lang.String r2) {
            boolean r0 = d(r0, r1, r2)
            return r0
    }

    static void c(java.lang.String r0, java.lang.String r1, java.lang.String r2) {
            e(r0, r1, r2)
            return
    }

    private static byte[] c() {
            boolean r0 = com.tencent.bugly.proguard.ao.b
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            boolean r0 = com.tencent.bugly.proguard.ao.n
            r1 = 1
            if (r0 == 0) goto L31
            r0 = 0
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.String r3 = "[LogUtil] Get user log from native."
            com.tencent.bugly.proguard.al.a(r3, r2)
            java.lang.String r2 = b()
            if (r2 == 0) goto L31
            java.lang.Object[] r1 = new java.lang.Object[r1]
            int r3 = r2.length()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r0] = r3
            java.lang.String r0 = "[LogUtil] Got user log from native: %d bytes"
            com.tencent.bugly.proguard.al.a(r0, r1)
            java.lang.String r0 = "BuglyNativeLog.txt"
            byte[] r0 = com.tencent.bugly.proguard.ap.a(r2, r0)
            return r0
        L31:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Object r2 = com.tencent.bugly.proguard.ao.q
            monitor-enter(r2)
            com.tencent.bugly.proguard.ao$a r3 = com.tencent.bugly.proguard.ao.h     // Catch: java.lang.Throwable -> L85
            if (r3 == 0) goto L64
            com.tencent.bugly.proguard.ao$a r3 = com.tencent.bugly.proguard.ao.h     // Catch: java.lang.Throwable -> L85
            boolean r3 = r3.a     // Catch: java.lang.Throwable -> L85
            if (r3 == 0) goto L64
            com.tencent.bugly.proguard.ao$a r3 = com.tencent.bugly.proguard.ao.h     // Catch: java.lang.Throwable -> L85
            java.io.File r3 = r3.b     // Catch: java.lang.Throwable -> L85
            if (r3 == 0) goto L64
            com.tencent.bugly.proguard.ao$a r3 = com.tencent.bugly.proguard.ao.h     // Catch: java.lang.Throwable -> L85
            java.io.File r3 = r3.b     // Catch: java.lang.Throwable -> L85
            long r3 = r3.length()     // Catch: java.lang.Throwable -> L85
            r5 = 0
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 <= 0) goto L64
            com.tencent.bugly.proguard.ao$a r3 = com.tencent.bugly.proguard.ao.h     // Catch: java.lang.Throwable -> L85
            java.io.File r3 = r3.b     // Catch: java.lang.Throwable -> L85
            r4 = 30720(0x7800, float:4.3048E-41)
            java.lang.String r1 = com.tencent.bugly.proguard.ap.a(r3, r4, r1)     // Catch: java.lang.Throwable -> L85
            r0.append(r1)     // Catch: java.lang.Throwable -> L85
        L64:
            java.lang.StringBuilder r1 = com.tencent.bugly.proguard.ao.f     // Catch: java.lang.Throwable -> L85
            if (r1 == 0) goto L79
            java.lang.StringBuilder r1 = com.tencent.bugly.proguard.ao.f     // Catch: java.lang.Throwable -> L85
            int r1 = r1.length()     // Catch: java.lang.Throwable -> L85
            if (r1 <= 0) goto L79
            java.lang.StringBuilder r1 = com.tencent.bugly.proguard.ao.f     // Catch: java.lang.Throwable -> L85
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L85
            r0.append(r1)     // Catch: java.lang.Throwable -> L85
        L79:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L85
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "BuglyLog.txt"
            byte[] r0 = com.tencent.bugly.proguard.ap.a(r0, r1)
            return r0
        L85:
            r0 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L85
            throw r0
    }

    private static boolean d(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            com.tencent.bugly.proguard.aa r0 = com.tencent.bugly.proguard.aa.b()     // Catch: java.lang.Throwable -> L11
            if (r0 == 0) goto L1b
            com.tencent.bugly.proguard.q r1 = r0.N     // Catch: java.lang.Throwable -> L11
            if (r1 == 0) goto L1b
            com.tencent.bugly.proguard.q r0 = r0.N     // Catch: java.lang.Throwable -> L11
            boolean r2 = r0.appendLogToNative(r2, r3, r4)     // Catch: java.lang.Throwable -> L11
            return r2
        L11:
            r2 = move-exception
            boolean r3 = com.tencent.bugly.proguard.al.a(r2)
            if (r3 != 0) goto L1b
            r2.printStackTrace()
        L1b:
            r2 = 0
            return r2
    }

    private static synchronized void e(java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            java.lang.Class<com.tencent.bugly.proguard.ao> r0 = com.tencent.bugly.proguard.ao.class
            monitor-enter(r0)
            boolean r1 = com.tencent.bugly.proguard.ao.a     // Catch: java.lang.Throwable -> L11
            if (r1 == 0) goto Lc
            f(r2, r3, r4)     // Catch: java.lang.Throwable -> L11
            monitor-exit(r0)
            return
        Lc:
            g(r2, r3, r4)     // Catch: java.lang.Throwable -> L11
            monitor-exit(r0)
            return
        L11:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    private static synchronized void f(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            java.lang.Class<com.tencent.bugly.proguard.ao> r0 = com.tencent.bugly.proguard.ao.class
            monitor-enter(r0)
            int r1 = android.os.Process.myTid()     // Catch: java.lang.Throwable -> L43
            long r1 = (long) r1     // Catch: java.lang.Throwable -> L43
            java.lang.String r3 = a(r3, r4, r5, r1)     // Catch: java.lang.Throwable -> L43
            java.lang.Object r4 = com.tencent.bugly.proguard.ao.q     // Catch: java.lang.Throwable -> L43
            monitor-enter(r4)     // Catch: java.lang.Throwable -> L43
            java.lang.StringBuilder r5 = com.tencent.bugly.proguard.ao.f     // Catch: java.lang.Throwable -> L32 java.lang.Throwable -> L34
            r5.append(r3)     // Catch: java.lang.Throwable -> L32 java.lang.Throwable -> L34
            java.lang.StringBuilder r3 = com.tencent.bugly.proguard.ao.f     // Catch: java.lang.Throwable -> L32 java.lang.Throwable -> L34
            int r3 = r3.length()     // Catch: java.lang.Throwable -> L32 java.lang.Throwable -> L34
            int r5 = com.tencent.bugly.proguard.ao.d     // Catch: java.lang.Throwable -> L32 java.lang.Throwable -> L34
            if (r3 < r5) goto L3e
            java.lang.StringBuilder r3 = com.tencent.bugly.proguard.ao.f     // Catch: java.lang.Throwable -> L32 java.lang.Throwable -> L34
            r5 = 0
            java.lang.StringBuilder r1 = com.tencent.bugly.proguard.ao.f     // Catch: java.lang.Throwable -> L32 java.lang.Throwable -> L34
            java.lang.String r2 = "\u0001\r\n"
            int r1 = r1.indexOf(r2)     // Catch: java.lang.Throwable -> L32 java.lang.Throwable -> L34
            int r1 = r1 + 1
            java.lang.StringBuilder r3 = r3.delete(r5, r1)     // Catch: java.lang.Throwable -> L32 java.lang.Throwable -> L34
            com.tencent.bugly.proguard.ao.f = r3     // Catch: java.lang.Throwable -> L32 java.lang.Throwable -> L34
            goto L3e
        L32:
            r3 = move-exception
            goto L41
        L34:
            r3 = move-exception
            boolean r5 = com.tencent.bugly.proguard.al.b(r3)     // Catch: java.lang.Throwable -> L32
            if (r5 != 0) goto L3e
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L32
        L3e:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L32
            monitor-exit(r0)
            return
        L41:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L32
            throw r3     // Catch: java.lang.Throwable -> L43
        L43:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    private static synchronized void g(java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            java.lang.Class<com.tencent.bugly.proguard.ao> r0 = com.tencent.bugly.proguard.ao.class
            monitor-enter(r0)
            int r1 = android.os.Process.myTid()     // Catch: java.lang.Throwable -> L7a
            long r1 = (long) r1     // Catch: java.lang.Throwable -> L7a
            java.lang.String r5 = a(r5, r6, r7, r1)     // Catch: java.lang.Throwable -> L7a
            java.lang.Object r6 = com.tencent.bugly.proguard.ao.q     // Catch: java.lang.Throwable -> L7a
            monitor-enter(r6)     // Catch: java.lang.Throwable -> L7a
            java.lang.StringBuilder r7 = com.tencent.bugly.proguard.ao.f     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            r7.append(r5)     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            java.lang.StringBuilder r5 = com.tencent.bugly.proguard.ao.f     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            int r5 = r5.length()     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            int r7 = com.tencent.bugly.proguard.ao.d     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            if (r5 > r7) goto L21
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L73
            monitor-exit(r0)
            return
        L21:
            boolean r5 = com.tencent.bugly.proguard.ao.g     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            if (r5 == 0) goto L28
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L73
            monitor-exit(r0)
            return
        L28:
            r5 = 1
            com.tencent.bugly.proguard.ao.g = r5     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            com.tencent.bugly.proguard.ao$a r5 = com.tencent.bugly.proguard.ao.h     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            if (r5 != 0) goto L39
            com.tencent.bugly.proguard.ao$a r5 = new com.tencent.bugly.proguard.ao$a     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            java.lang.String r7 = com.tencent.bugly.proguard.ao.l     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            r5.<init>(r7)     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            com.tencent.bugly.proguard.ao.h = r5     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            goto L5c
        L39:
            com.tencent.bugly.proguard.ao$a r5 = com.tencent.bugly.proguard.ao.h     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            java.io.File r5 = r5.b     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            if (r5 == 0) goto L57
            com.tencent.bugly.proguard.ao$a r5 = com.tencent.bugly.proguard.ao.h     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            java.io.File r5 = r5.b     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            long r1 = r5.length()     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            java.lang.StringBuilder r5 = com.tencent.bugly.proguard.ao.f     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            int r5 = r5.length()     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            long r3 = (long) r5     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            long r1 = r1 + r3
            com.tencent.bugly.proguard.ao$a r5 = com.tencent.bugly.proguard.ao.h     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            long r3 = r5.c     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 <= 0) goto L5c
        L57:
            com.tencent.bugly.proguard.ao$a r5 = com.tencent.bugly.proguard.ao.h     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            r5.a()     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
        L5c:
            com.tencent.bugly.proguard.ao$a r5 = com.tencent.bugly.proguard.ao.h     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            java.lang.StringBuilder r7 = com.tencent.bugly.proguard.ao.f     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            boolean r5 = r5.a(r7)     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            if (r5 == 0) goto L75
            java.lang.StringBuilder r5 = com.tencent.bugly.proguard.ao.f     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            r7 = 0
            r5.setLength(r7)     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            com.tencent.bugly.proguard.ao.g = r7     // Catch: java.lang.Throwable -> L73 java.lang.Throwable -> L75
            goto L75
        L73:
            r5 = move-exception
            goto L78
        L75:
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L73
            monitor-exit(r0)
            return
        L78:
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L73
            throw r5     // Catch: java.lang.Throwable -> L7a
        L7a:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }
}
