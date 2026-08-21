package com.loc;

public final class bl implements java.io.Closeable {
    static final java.util.regex.Pattern a = null;
    public static final java.nio.charset.Charset b = null;
    static final java.nio.charset.Charset c = null;
    static java.util.concurrent.ThreadPoolExecutor d;
    private static final java.util.concurrent.ThreadFactory r = null;
    private static final java.io.OutputStream t = null;
    private final java.io.File e;
    private final java.io.File f;
    private final java.io.File g;
    private final java.io.File h;
    private final int i;
    private long j;
    private final int k;
    private long l;
    private java.io.Writer m;
    private int n;
    private final java.util.LinkedHashMap<java.lang.String, com.loc.bl.c> o;
    private int p;
    private long q;
    private final java.util.concurrent.Callable<java.lang.Void> s;




    public final class a {
        final com.loc.bl a;
        private final com.loc.bl.c b;
        private final boolean[] c;
        private boolean d;
        private boolean e;

        private class a extends java.io.FilterOutputStream {
            final com.loc.bl.a a;

            private a(com.loc.bl.a r1, java.io.OutputStream r2) {
                    r0 = this;
                    r0.a = r1
                    r0.<init>(r2)
                    return
            }

            a(com.loc.bl.a r1, java.io.OutputStream r2, byte r3) {
                    r0 = this;
                    r0.<init>(r1, r2)
                    return
            }

            @Override
            public final void close() {
                    r1 = this;
                    java.io.OutputStream r0 = r1.out     // Catch: java.io.IOException -> L6
                    r0.close()     // Catch: java.io.IOException -> L6
                    return
                L6:
                    com.loc.bl$a r0 = r1.a
                    com.loc.bl.a.c(r0)
                    return
            }

            @Override
            public final void flush() {
                    r1 = this;
                    java.io.OutputStream r0 = r1.out     // Catch: java.io.IOException -> L6
                    r0.flush()     // Catch: java.io.IOException -> L6
                    return
                L6:
                    com.loc.bl$a r0 = r1.a
                    com.loc.bl.a.c(r0)
                    return
            }

            @Override
            public final void write(int r2) {
                    r1 = this;
                    java.io.OutputStream r0 = r1.out     // Catch: java.io.IOException -> L6
                    r0.write(r2)     // Catch: java.io.IOException -> L6
                    return
                L6:
                    com.loc.bl$a r2 = r1.a
                    com.loc.bl.a.c(r2)
                    return
            }

            @Override
            public final void write(byte[] r2, int r3, int r4) {
                    r1 = this;
                    java.io.OutputStream r0 = r1.out     // Catch: java.io.IOException -> L6
                    r0.write(r2, r3, r4)     // Catch: java.io.IOException -> L6
                    return
                L6:
                    com.loc.bl$a r2 = r1.a
                    com.loc.bl.a.c(r2)
                    return
            }
        }

        private a(com.loc.bl r1, com.loc.bl.c r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                boolean r2 = com.loc.bl.c.e(r2)
                if (r2 == 0) goto Lf
                r1 = 0
                goto L15
            Lf:
                int r1 = com.loc.bl.f(r1)
                boolean[] r1 = new boolean[r1]
            L15:
                r0.c = r1
                return
        }

        a(com.loc.bl r1, com.loc.bl.c r2, byte r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        static com.loc.bl.c a(com.loc.bl.a r0) {
                com.loc.bl$c r0 = r0.b
                return r0
        }

        static boolean[] b(com.loc.bl.a r0) {
                boolean[] r0 = r0.c
                return r0
        }

        static boolean c(com.loc.bl.a r1) {
                r0 = 1
                r1.d = r0
                return r0
        }

        public final java.io.OutputStream a() throws java.io.IOException {
                r4 = this;
                com.loc.bl r0 = r4.a
                int r0 = com.loc.bl.f(r0)
                if (r0 <= 0) goto L51
                com.loc.bl r0 = r4.a
                monitor-enter(r0)
                com.loc.bl$c r1 = r4.b     // Catch: java.lang.Throwable -> L4e
                com.loc.bl$a r1 = com.loc.bl.c.b(r1)     // Catch: java.lang.Throwable -> L4e
                if (r1 != r4) goto L48
                com.loc.bl$c r1 = r4.b     // Catch: java.lang.Throwable -> L4e
                boolean r1 = com.loc.bl.c.e(r1)     // Catch: java.lang.Throwable -> L4e
                r2 = 0
                if (r1 != 0) goto L21
                boolean[] r1 = r4.c     // Catch: java.lang.Throwable -> L4e
                r3 = 1
                r1[r2] = r3     // Catch: java.lang.Throwable -> L4e
            L21:
                com.loc.bl$c r1 = r4.b     // Catch: java.lang.Throwable -> L4e
                java.io.File r1 = r1.b(r2)     // Catch: java.lang.Throwable -> L4e
                java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.io.FileNotFoundException -> L2d java.lang.Throwable -> L4e
                r3.<init>(r1)     // Catch: java.io.FileNotFoundException -> L2d java.lang.Throwable -> L4e
                goto L3b
            L2d:
                com.loc.bl r3 = r4.a     // Catch: java.lang.Throwable -> L4e
                java.io.File r3 = com.loc.bl.g(r3)     // Catch: java.lang.Throwable -> L4e
                r3.mkdirs()     // Catch: java.lang.Throwable -> L4e
                java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.io.FileNotFoundException -> L42 java.lang.Throwable -> L4e
                r3.<init>(r1)     // Catch: java.io.FileNotFoundException -> L42 java.lang.Throwable -> L4e
            L3b:
                com.loc.bl$a$a r1 = new com.loc.bl$a$a     // Catch: java.lang.Throwable -> L4e
                r1.<init>(r4, r3, r2)     // Catch: java.lang.Throwable -> L4e
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L4e
                return r1
            L42:
                java.io.OutputStream r1 = com.loc.bl.e()     // Catch: java.lang.Throwable -> L4e
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L4e
                return r1
            L48:
                java.lang.IllegalStateException r1 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L4e
                r1.<init>()     // Catch: java.lang.Throwable -> L4e
                throw r1     // Catch: java.lang.Throwable -> L4e
            L4e:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L4e
                throw r1
            L51:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "Expected index 0 to be greater than 0 and less than the maximum value count of "
                r1.<init>(r2)
                com.loc.bl r2 = r4.a
                int r2 = com.loc.bl.f(r2)
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.<init>(r1)
                throw r0
        }

        public final void b() throws java.io.IOException {
                r3 = this;
                boolean r0 = r3.d
                r1 = 1
                if (r0 == 0) goto L17
                com.loc.bl r0 = r3.a
                r2 = 0
                com.loc.bl.a(r0, r3, r2)
                com.loc.bl r0 = r3.a
                com.loc.bl$c r2 = r3.b
                java.lang.String r2 = com.loc.bl.c.d(r2)
                r0.c(r2)
                goto L1c
            L17:
                com.loc.bl r0 = r3.a
                com.loc.bl.a(r0, r3, r1)
            L1c:
                r3.e = r1
                return
        }

        public final void c() throws java.io.IOException {
                r2 = this;
                com.loc.bl r0 = r2.a
                r1 = 0
                com.loc.bl.a(r0, r2, r1)
                return
        }
    }

    public final class b implements java.io.Closeable {
        final com.loc.bl a;
        private final java.lang.String b;
        private final long c;
        private final java.io.InputStream[] d;
        private final long[] e;

        private b(com.loc.bl r1, java.lang.String r2, long r3, java.io.InputStream[] r5, long[] r6) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                r0.c = r3
                r0.d = r5
                r0.e = r6
                return
        }

        b(com.loc.bl r1, java.lang.String r2, long r3, java.io.InputStream[] r5, long[] r6, byte r7) {
                r0 = this;
                r0.<init>(r1, r2, r3, r5, r6)
                return
        }

        public final java.io.InputStream a() {
                r2 = this;
                java.io.InputStream[] r0 = r2.d
                r1 = 0
                r0 = r0[r1]
                return r0
        }

        @Override
        public final void close() {
                r4 = this;
                java.io.InputStream[] r0 = r4.d
                int r1 = r0.length
                r2 = 0
            L4:
                if (r2 >= r1) goto Le
                r3 = r0[r2]
                com.loc.bl.a(r3)
                int r2 = r2 + 1
                goto L4
            Le:
                return
        }
    }

    private final class c {
        final com.loc.bl a;
        private final java.lang.String b;
        private final long[] c;
        private boolean d;
        private com.loc.bl.a e;
        private long f;

        private c(com.loc.bl r1, java.lang.String r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                int r1 = com.loc.bl.f(r1)
                long[] r1 = new long[r1]
                r0.c = r1
                return
        }

        c(com.loc.bl r1, java.lang.String r2, byte r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        static long a(com.loc.bl.c r0, long r1) {
                r0.f = r1
                return r1
        }

        static com.loc.bl.a a(com.loc.bl.c r0, com.loc.bl.a r1) {
                r0.e = r1
                return r1
        }

        private static java.io.IOException a(java.lang.String[] r3) throws java.io.IOException {
                java.io.IOException r0 = new java.io.IOException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "unexpected journal line: "
                r1.<init>(r2)
                java.lang.String r3 = java.util.Arrays.toString(r3)
                r1.append(r3)
                java.lang.String r3 = r1.toString()
                r0.<init>(r3)
                throw r0
        }

        static void a(com.loc.bl.c r4, java.lang.String[] r5) throws java.io.IOException {
                int r0 = r5.length
                com.loc.bl r1 = r4.a
                int r1 = com.loc.bl.f(r1)
                if (r0 != r1) goto L20
                r0 = 0
            La:
                int r1 = r5.length     // Catch: java.lang.NumberFormatException -> L1b
                if (r0 >= r1) goto L1a
                long[] r1 = r4.c     // Catch: java.lang.NumberFormatException -> L1b
                r2 = r5[r0]     // Catch: java.lang.NumberFormatException -> L1b
                long r2 = java.lang.Long.parseLong(r2)     // Catch: java.lang.NumberFormatException -> L1b
                r1[r0] = r2     // Catch: java.lang.NumberFormatException -> L1b
                int r0 = r0 + 1
                goto La
            L1a:
                return
            L1b:
                java.io.IOException r4 = a(r5)
                throw r4
            L20:
                java.io.IOException r4 = a(r5)
                throw r4
        }

        static boolean a(com.loc.bl.c r1) {
                r0 = 1
                r1.d = r0
                return r0
        }

        static com.loc.bl.a b(com.loc.bl.c r0) {
                com.loc.bl$a r0 = r0.e
                return r0
        }

        static long[] c(com.loc.bl.c r0) {
                long[] r0 = r0.c
                return r0
        }

        static java.lang.String d(com.loc.bl.c r0) {
                java.lang.String r0 = r0.b
                return r0
        }

        static boolean e(com.loc.bl.c r0) {
                boolean r0 = r0.d
                return r0
        }

        static long f(com.loc.bl.c r2) {
                long r0 = r2.f
                return r0
        }

        public final java.io.File a(int r5) {
                r4 = this;
                java.io.File r0 = new java.io.File
                com.loc.bl r1 = r4.a
                java.io.File r1 = com.loc.bl.g(r1)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = r4.b
                r2.append(r3)
                java.lang.String r3 = "."
                r2.append(r3)
                r2.append(r5)
                java.lang.String r5 = r2.toString()
                r0.<init>(r1, r5)
                return r0
        }

        public final java.lang.String a() throws java.io.IOException {
                r7 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                long[] r1 = r7.c
                int r2 = r1.length
                r3 = 0
            L9:
                if (r3 >= r2) goto L18
                r4 = r1[r3]
                r6 = 32
                r0.append(r6)
                r0.append(r4)
                int r3 = r3 + 1
                goto L9
            L18:
                java.lang.String r0 = r0.toString()
                return r0
        }

        public final java.io.File b(int r5) {
                r4 = this;
                java.io.File r0 = new java.io.File
                com.loc.bl r1 = r4.a
                java.io.File r1 = com.loc.bl.g(r1)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = r4.b
                r2.append(r3)
                java.lang.String r3 = "."
                r2.append(r3)
                r2.append(r5)
                java.lang.String r5 = ".tmp"
                r2.append(r5)
                java.lang.String r5 = r2.toString()
                r0.<init>(r1, r5)
                return r0
        }
    }

    static {
            java.lang.String r0 = "[a-z0-9_-]{1,120}"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.loc.bl.a = r0
            java.lang.String r0 = "US-ASCII"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            com.loc.bl.b = r0
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            com.loc.bl.c = r0
            com.loc.bl$1 r0 = new com.loc.bl$1
            r0.<init>()
            com.loc.bl.r = r0
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue
            r7.<init>()
            java.util.concurrent.ThreadFactory r8 = com.loc.bl.r
            r2 = 0
            r3 = 1
            r4 = 60
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7, r8)
            com.loc.bl.d = r0
            com.loc.bl$3 r0 = new com.loc.bl$3
            r0.<init>()
            com.loc.bl.t = r0
            return
    }

    private bl(java.io.File r7, long r8) {
            r6 = this;
            r6.<init>()
            r0 = 0
            r6.l = r0
            r2 = 1000(0x3e8, float:1.401E-42)
            r6.n = r2
            java.util.LinkedHashMap r2 = new java.util.LinkedHashMap
            r3 = 1
            r4 = 0
            r5 = 1061158912(0x3f400000, float:0.75)
            r2.<init>(r4, r5, r3)
            r6.o = r2
            r6.q = r0
            com.loc.bl$2 r0 = new com.loc.bl$2
            r0.<init>(r6)
            r6.s = r0
            r6.e = r7
            r6.i = r3
            java.io.File r0 = new java.io.File
            java.lang.String r1 = "journal"
            r0.<init>(r7, r1)
            r6.f = r0
            java.io.File r0 = new java.io.File
            java.lang.String r1 = "journal.tmp"
            r0.<init>(r7, r1)
            r6.g = r0
            java.io.File r0 = new java.io.File
            java.lang.String r1 = "journal.bkp"
            r0.<init>(r7, r1)
            r6.h = r0
            r6.k = r3
            r6.j = r8
            return
    }

    public static com.loc.bl a(java.io.File r6, long r7) throws java.io.IOException {
            r0 = 0
            int r2 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r2 <= 0) goto L61
            java.io.File r0 = new java.io.File
            java.lang.String r1 = "journal.bkp"
            r0.<init>(r6, r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L28
            java.io.File r1 = new java.io.File
            java.lang.String r2 = "journal"
            r1.<init>(r6, r2)
            boolean r2 = r1.exists()
            if (r2 == 0) goto L24
            r0.delete()
            goto L28
        L24:
            r2 = 0
            a(r0, r1, r2)
        L28:
            com.loc.bl r0 = new com.loc.bl
            r0.<init>(r6, r7)
            java.io.File r1 = r0.f
            boolean r1 = r1.exists()
            if (r1 == 0) goto L55
            r0.g()     // Catch: java.lang.Throwable -> L52
            r0.h()     // Catch: java.lang.Throwable -> L52
            java.io.BufferedWriter r1 = new java.io.BufferedWriter     // Catch: java.lang.Throwable -> L52
            java.io.OutputStreamWriter r2 = new java.io.OutputStreamWriter     // Catch: java.lang.Throwable -> L52
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L52
            java.io.File r4 = r0.f     // Catch: java.lang.Throwable -> L52
            r5 = 1
            r3.<init>(r4, r5)     // Catch: java.lang.Throwable -> L52
            java.nio.charset.Charset r4 = com.loc.bl.b     // Catch: java.lang.Throwable -> L52
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L52
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L52
            r0.m = r1     // Catch: java.lang.Throwable -> L52
            return r0
        L52:
            r0.d()
        L55:
            r6.mkdirs()
            com.loc.bl r0 = new com.loc.bl
            r0.<init>(r6, r7)
            r0.i()
            return r0
        L61:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r7 = "maxSize <= 0"
            r6.<init>(r7)
            throw r6
    }

    static java.io.Writer a(com.loc.bl r0) {
            java.io.Writer r0 = r0.m
            return r0
    }

    public static void a() {
            java.util.concurrent.ThreadPoolExecutor r0 = com.loc.bl.d
            if (r0 == 0) goto Lf
            boolean r0 = r0.isShutdown()
            if (r0 != 0) goto Lf
            java.util.concurrent.ThreadPoolExecutor r0 = com.loc.bl.d
            r0.shutdown()
        Lf:
            return
    }

    private synchronized void a(com.loc.bl.a r10, boolean r11) throws java.io.IOException {
            r9 = this;
            monitor-enter(r9)
            com.loc.bl$c r0 = com.loc.bl.a.a(r10)     // Catch: java.lang.Throwable -> L105
            com.loc.bl$a r1 = com.loc.bl.c.b(r0)     // Catch: java.lang.Throwable -> L105
            if (r1 != r10) goto Lff
            r1 = 0
            if (r11 == 0) goto L46
            boolean r2 = com.loc.bl.c.e(r0)     // Catch: java.lang.Throwable -> L105
            if (r2 != 0) goto L46
            r2 = 0
        L15:
            int r3 = r9.k     // Catch: java.lang.Throwable -> L105
            if (r2 >= r3) goto L46
            boolean[] r3 = com.loc.bl.a.b(r10)     // Catch: java.lang.Throwable -> L105
            boolean r3 = r3[r2]     // Catch: java.lang.Throwable -> L105
            if (r3 == 0) goto L33
            java.io.File r3 = r0.b(r2)     // Catch: java.lang.Throwable -> L105
            boolean r3 = r3.exists()     // Catch: java.lang.Throwable -> L105
            if (r3 != 0) goto L30
            r10.c()     // Catch: java.lang.Throwable -> L105
            monitor-exit(r9)
            return
        L30:
            int r2 = r2 + 1
            goto L15
        L33:
            r10.c()     // Catch: java.lang.Throwable -> L105
            java.lang.IllegalStateException r10 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L105
            java.lang.String r11 = "Newly created entry didn't create value for index "
            java.lang.String r0 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L105
            java.lang.String r11 = r11.concat(r0)     // Catch: java.lang.Throwable -> L105
            r10.<init>(r11)     // Catch: java.lang.Throwable -> L105
            throw r10     // Catch: java.lang.Throwable -> L105
        L46:
            int r10 = r9.k     // Catch: java.lang.Throwable -> L105
            if (r1 >= r10) goto L7a
            java.io.File r10 = r0.b(r1)     // Catch: java.lang.Throwable -> L105
            if (r11 == 0) goto L74
            boolean r2 = r10.exists()     // Catch: java.lang.Throwable -> L105
            if (r2 == 0) goto L77
            java.io.File r2 = r0.a(r1)     // Catch: java.lang.Throwable -> L105
            r10.renameTo(r2)     // Catch: java.lang.Throwable -> L105
            long[] r10 = com.loc.bl.c.c(r0)     // Catch: java.lang.Throwable -> L105
            r3 = r10[r1]     // Catch: java.lang.Throwable -> L105
            long r5 = r2.length()     // Catch: java.lang.Throwable -> L105
            long[] r10 = com.loc.bl.c.c(r0)     // Catch: java.lang.Throwable -> L105
            r10[r1] = r5     // Catch: java.lang.Throwable -> L105
            long r7 = r9.l     // Catch: java.lang.Throwable -> L105
            long r7 = r7 - r3
            long r7 = r7 + r5
            r9.l = r7     // Catch: java.lang.Throwable -> L105
            goto L77
        L74:
            a(r10)     // Catch: java.lang.Throwable -> L105
        L77:
            int r1 = r1 + 1
            goto L46
        L7a:
            int r10 = r9.p     // Catch: java.lang.Throwable -> L105
            int r10 = r10 + 1
            r9.p = r10     // Catch: java.lang.Throwable -> L105
            r10 = 0
            com.loc.bl.c.a(r0, r10)     // Catch: java.lang.Throwable -> L105
            boolean r10 = com.loc.bl.c.e(r0)     // Catch: java.lang.Throwable -> L105
            r10 = r10 | r11
            r1 = 10
            if (r10 == 0) goto Lbe
            com.loc.bl.c.a(r0)     // Catch: java.lang.Throwable -> L105
            java.io.Writer r10 = r9.m     // Catch: java.lang.Throwable -> L105
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L105
            java.lang.String r3 = "CLEAN "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L105
            java.lang.String r3 = com.loc.bl.c.d(r0)     // Catch: java.lang.Throwable -> L105
            r2.append(r3)     // Catch: java.lang.Throwable -> L105
            java.lang.String r3 = r0.a()     // Catch: java.lang.Throwable -> L105
            r2.append(r3)     // Catch: java.lang.Throwable -> L105
            r2.append(r1)     // Catch: java.lang.Throwable -> L105
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L105
            r10.write(r1)     // Catch: java.lang.Throwable -> L105
            if (r11 == 0) goto Le1
            long r10 = r9.q     // Catch: java.lang.Throwable -> L105
            r1 = 1
            long r1 = r1 + r10
            r9.q = r1     // Catch: java.lang.Throwable -> L105
            com.loc.bl.c.a(r0, r10)     // Catch: java.lang.Throwable -> L105
            goto Le1
        Lbe:
            java.util.LinkedHashMap<java.lang.String, com.loc.bl$c> r10 = r9.o     // Catch: java.lang.Throwable -> L105
            java.lang.String r11 = com.loc.bl.c.d(r0)     // Catch: java.lang.Throwable -> L105
            r10.remove(r11)     // Catch: java.lang.Throwable -> L105
            java.io.Writer r10 = r9.m     // Catch: java.lang.Throwable -> L105
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L105
            java.lang.String r2 = "REMOVE "
            r11.<init>(r2)     // Catch: java.lang.Throwable -> L105
            java.lang.String r0 = com.loc.bl.c.d(r0)     // Catch: java.lang.Throwable -> L105
            r11.append(r0)     // Catch: java.lang.Throwable -> L105
            r11.append(r1)     // Catch: java.lang.Throwable -> L105
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L105
            r10.write(r11)     // Catch: java.lang.Throwable -> L105
        Le1:
            java.io.Writer r10 = r9.m     // Catch: java.lang.Throwable -> L105
            r10.flush()     // Catch: java.lang.Throwable -> L105
            long r10 = r9.l     // Catch: java.lang.Throwable -> L105
            long r0 = r9.j     // Catch: java.lang.Throwable -> L105
            int r2 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r2 > 0) goto Lf4
            boolean r10 = r9.j()     // Catch: java.lang.Throwable -> L105
            if (r10 == 0) goto Lfd
        Lf4:
            java.util.concurrent.ThreadPoolExecutor r10 = f()     // Catch: java.lang.Throwable -> L105
            java.util.concurrent.Callable<java.lang.Void> r11 = r9.s     // Catch: java.lang.Throwable -> L105
            r10.submit(r11)     // Catch: java.lang.Throwable -> L105
        Lfd:
            monitor-exit(r9)
            return
        Lff:
            java.lang.IllegalStateException r10 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L105
            r10.<init>()     // Catch: java.lang.Throwable -> L105
            throw r10     // Catch: java.lang.Throwable -> L105
        L105:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    static void a(com.loc.bl r0, com.loc.bl.a r1, boolean r2) throws java.io.IOException {
            r0.a(r1, r2)
            return
    }

    public static void a(java.io.Closeable r0) {
            if (r0 == 0) goto L8
            r0.close()     // Catch: java.lang.RuntimeException -> L6 java.lang.Exception -> L8
            return
        L6:
            r0 = move-exception
            throw r0
        L8:
            return
    }

    private static void a(java.io.File r1) throws java.io.IOException {
            boolean r0 = r1.exists()
            if (r0 == 0) goto L13
            boolean r1 = r1.delete()
            if (r1 == 0) goto Ld
            goto L13
        Ld:
            java.io.IOException r1 = new java.io.IOException
            r1.<init>()
            throw r1
        L13:
            return
    }

    private static void a(java.io.File r0, java.io.File r1, boolean r2) throws java.io.IOException {
            if (r2 == 0) goto L5
            a(r1)
        L5:
            boolean r0 = r0.renameTo(r1)
            if (r0 == 0) goto Lc
            return
        Lc:
            java.io.IOException r0 = new java.io.IOException
            r0.<init>()
            throw r0
    }

    static void b(com.loc.bl r0) throws java.io.IOException {
            r0.l()
            return
    }

    private static void b(java.io.File r4) throws java.io.IOException {
            java.io.File[] r0 = r4.listFiles()
            if (r0 == 0) goto L2f
            int r4 = r0.length
            r1 = 0
        L8:
            if (r1 >= r4) goto L2e
            r2 = r0[r1]
            boolean r3 = r2.isDirectory()
            if (r3 == 0) goto L15
            b(r2)
        L15:
            boolean r3 = r2.delete()
            if (r3 == 0) goto L1e
            int r1 = r1 + 1
            goto L8
        L1e:
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r0 = java.lang.String.valueOf(r2)
            java.lang.String r1 = "failed to delete file: "
            java.lang.String r0 = r1.concat(r0)
            r4.<init>(r0)
            throw r4
        L2e:
            return
        L2f:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r1 = "not a readable directory: "
            java.lang.String r4 = r1.concat(r4)
            r0.<init>(r4)
            throw r0
    }

    static boolean c(com.loc.bl r0) {
            boolean r0 = r0.j()
            return r0
    }

    private synchronized com.loc.bl.a d(java.lang.String r5) throws java.io.IOException {
            r4 = this;
            monitor-enter(r4)
            r4.k()     // Catch: java.lang.Throwable -> L4d
            e(r5)     // Catch: java.lang.Throwable -> L4d
            java.util.LinkedHashMap<java.lang.String, com.loc.bl$c> r0 = r4.o     // Catch: java.lang.Throwable -> L4d
            java.lang.Object r0 = r0.get(r5)     // Catch: java.lang.Throwable -> L4d
            com.loc.bl$c r0 = (com.loc.bl.c) r0     // Catch: java.lang.Throwable -> L4d
            r1 = 0
            if (r0 != 0) goto L1d
            com.loc.bl$c r0 = new com.loc.bl$c     // Catch: java.lang.Throwable -> L4d
            r0.<init>(r4, r5, r1)     // Catch: java.lang.Throwable -> L4d
            java.util.LinkedHashMap<java.lang.String, com.loc.bl$c> r2 = r4.o     // Catch: java.lang.Throwable -> L4d
            r2.put(r5, r0)     // Catch: java.lang.Throwable -> L4d
            goto L26
        L1d:
            com.loc.bl$a r2 = com.loc.bl.c.b(r0)     // Catch: java.lang.Throwable -> L4d
            if (r2 == 0) goto L26
            r5 = 0
            monitor-exit(r4)
            return r5
        L26:
            com.loc.bl$a r2 = new com.loc.bl$a     // Catch: java.lang.Throwable -> L4d
            r2.<init>(r4, r0, r1)     // Catch: java.lang.Throwable -> L4d
            com.loc.bl.c.a(r0, r2)     // Catch: java.lang.Throwable -> L4d
            java.io.Writer r0 = r4.m     // Catch: java.lang.Throwable -> L4d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = "DIRTY "
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L4d
            r1.append(r5)     // Catch: java.lang.Throwable -> L4d
            r5 = 10
            r1.append(r5)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L4d
            r0.write(r5)     // Catch: java.lang.Throwable -> L4d
            java.io.Writer r5 = r4.m     // Catch: java.lang.Throwable -> L4d
            r5.flush()     // Catch: java.lang.Throwable -> L4d
            monitor-exit(r4)
            return r2
        L4d:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    static void d(com.loc.bl r0) throws java.io.IOException {
            r0.i()
            return
    }

    static int e(com.loc.bl r1) {
            r0 = 0
            r1.p = r0
            return r0
    }

    static java.io.OutputStream e() {
            java.io.OutputStream r0 = com.loc.bl.t
            return r0
    }

    private static void e(java.lang.String r3) {
            java.util.regex.Pattern r0 = com.loc.bl.a
            java.util.regex.Matcher r0 = r0.matcher(r3)
            boolean r0 = r0.matches()
            if (r0 == 0) goto Ld
            return
        Ld:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "keys must match regex [a-z0-9_-]{1,120}: \""
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r3 = "\""
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    static int f(com.loc.bl r0) {
            int r0 = r0.k
            return r0
    }

    private static java.util.concurrent.ThreadPoolExecutor f() {
            java.util.concurrent.ThreadPoolExecutor r0 = com.loc.bl.d     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto Lc
            java.util.concurrent.ThreadPoolExecutor r0 = com.loc.bl.d     // Catch: java.lang.Throwable -> L24
            boolean r0 = r0.isShutdown()     // Catch: java.lang.Throwable -> L24
            if (r0 == 0) goto L28
        Lc:
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor     // Catch: java.lang.Throwable -> L24
            r2 = 0
            r3 = 1
            r4 = 60
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L24
            java.util.concurrent.LinkedBlockingQueue r7 = new java.util.concurrent.LinkedBlockingQueue     // Catch: java.lang.Throwable -> L24
            r1 = 256(0x100, float:3.59E-43)
            r7.<init>(r1)     // Catch: java.lang.Throwable -> L24
            java.util.concurrent.ThreadFactory r8 = com.loc.bl.r     // Catch: java.lang.Throwable -> L24
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7, r8)     // Catch: java.lang.Throwable -> L24
            com.loc.bl.d = r0     // Catch: java.lang.Throwable -> L24
            goto L28
        L24:
            r0 = move-exception
            r0.printStackTrace()
        L28:
            java.util.concurrent.ThreadPoolExecutor r0 = com.loc.bl.d
            return r0
    }

    static java.io.File g(com.loc.bl r0) {
            java.io.File r0 = r0.e
            return r0
    }

    private void g() throws java.io.IOException {
            r11 = this;
            java.lang.String r0 = ", "
            com.loc.bm r1 = new com.loc.bm
            java.io.FileInputStream r2 = new java.io.FileInputStream
            java.io.File r3 = r11.f
            r2.<init>(r3)
            java.nio.charset.Charset r3 = com.loc.bl.b
            r1.<init>(r2, r3)
            java.lang.String r2 = r1.a()     // Catch: java.lang.Throwable -> L138
            java.lang.String r3 = r1.a()     // Catch: java.lang.Throwable -> L138
            java.lang.String r4 = r1.a()     // Catch: java.lang.Throwable -> L138
            java.lang.String r5 = r1.a()     // Catch: java.lang.Throwable -> L138
            java.lang.String r6 = r1.a()     // Catch: java.lang.Throwable -> L138
            java.lang.String r7 = "libcore.io.DiskLruCache"
            boolean r7 = r7.equals(r2)     // Catch: java.lang.Throwable -> L138
            if (r7 == 0) goto L10d
            java.lang.String r7 = "1"
            boolean r7 = r7.equals(r3)     // Catch: java.lang.Throwable -> L138
            if (r7 == 0) goto L10d
            int r7 = r11.i     // Catch: java.lang.Throwable -> L138
            java.lang.String r7 = java.lang.Integer.toString(r7)     // Catch: java.lang.Throwable -> L138
            boolean r4 = r7.equals(r4)     // Catch: java.lang.Throwable -> L138
            if (r4 == 0) goto L10d
            int r4 = r11.k     // Catch: java.lang.Throwable -> L138
            java.lang.String r4 = java.lang.Integer.toString(r4)     // Catch: java.lang.Throwable -> L138
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> L138
            if (r4 == 0) goto L10d
            java.lang.String r4 = ""
            boolean r4 = r4.equals(r6)     // Catch: java.lang.Throwable -> L138
            if (r4 == 0) goto L10d
            r0 = 0
            r2 = 0
        L56:
            java.lang.String r3 = r1.a()     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            r4 = 32
            int r5 = r3.indexOf(r4)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            java.lang.String r6 = "unexpected journal line: "
            r7 = -1
            if (r5 == r7) goto Lf2
            int r8 = r5 + 1
            int r4 = r3.indexOf(r4, r8)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            if (r4 != r7) goto L82
            java.lang.String r8 = r3.substring(r8)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            r9 = 6
            if (r5 != r9) goto L86
            java.lang.String r9 = "REMOVE"
            boolean r9 = r3.startsWith(r9)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            if (r9 == 0) goto L86
            java.util.LinkedHashMap<java.lang.String, com.loc.bl$c> r3 = r11.o     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            r3.remove(r8)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            goto Le0
        L82:
            java.lang.String r8 = r3.substring(r8, r4)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
        L86:
            java.util.LinkedHashMap<java.lang.String, com.loc.bl$c> r9 = r11.o     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            java.lang.Object r9 = r9.get(r8)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            com.loc.bl$c r9 = (com.loc.bl.c) r9     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            if (r9 != 0) goto L9a
            com.loc.bl$c r9 = new com.loc.bl$c     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            r9.<init>(r11, r8, r0)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            java.util.LinkedHashMap<java.lang.String, com.loc.bl$c> r10 = r11.o     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            r10.put(r8, r9)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
        L9a:
            r8 = 5
            if (r4 == r7) goto Lbe
            if (r5 != r8) goto Lbe
            java.lang.String r10 = "CLEAN"
            boolean r10 = r3.startsWith(r10)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            if (r10 == 0) goto Lbe
            int r4 = r4 + 1
            java.lang.String r3 = r3.substring(r4)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            java.lang.String r4 = " "
            java.lang.String[] r3 = r3.split(r4)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            com.loc.bl.c.a(r9)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            r4 = 0
            com.loc.bl.c.a(r9, r4)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            com.loc.bl.c.a(r9, r3)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            goto Le0
        Lbe:
            if (r4 != r7) goto Ld3
            if (r5 != r8) goto Ld3
            java.lang.String r8 = "DIRTY"
            boolean r8 = r3.startsWith(r8)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            if (r8 == 0) goto Ld3
            com.loc.bl$a r3 = new com.loc.bl$a     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            r3.<init>(r11, r9, r0)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            com.loc.bl.c.a(r9, r3)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            goto Le0
        Ld3:
            if (r4 != r7) goto Le4
            r4 = 4
            if (r5 != r4) goto Le4
            java.lang.String r4 = "READ"
            boolean r4 = r3.startsWith(r4)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            if (r4 == 0) goto Le4
        Le0:
            int r2 = r2 + 1
            goto L56
        Le4:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            java.lang.String r3 = r6.concat(r3)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            r0.<init>(r3)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            throw r0     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
        Lf2:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            java.lang.String r3 = r6.concat(r3)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            r0.<init>(r3)     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
            throw r0     // Catch: java.io.EOFException -> L100 java.lang.Throwable -> L138
        L100:
            java.util.LinkedHashMap<java.lang.String, com.loc.bl$c> r0 = r11.o     // Catch: java.lang.Throwable -> L138
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L138
            int r2 = r2 - r0
            r11.p = r2     // Catch: java.lang.Throwable -> L138
            a(r1)
            return
        L10d:
            java.io.IOException r4 = new java.io.IOException     // Catch: java.lang.Throwable -> L138
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L138
            java.lang.String r8 = "unexpected journal header: ["
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L138
            r7.append(r2)     // Catch: java.lang.Throwable -> L138
            r7.append(r0)     // Catch: java.lang.Throwable -> L138
            r7.append(r3)     // Catch: java.lang.Throwable -> L138
            r7.append(r0)     // Catch: java.lang.Throwable -> L138
            r7.append(r5)     // Catch: java.lang.Throwable -> L138
            r7.append(r0)     // Catch: java.lang.Throwable -> L138
            r7.append(r6)     // Catch: java.lang.Throwable -> L138
            java.lang.String r0 = "]"
            r7.append(r0)     // Catch: java.lang.Throwable -> L138
            java.lang.String r0 = r7.toString()     // Catch: java.lang.Throwable -> L138
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L138
            throw r4     // Catch: java.lang.Throwable -> L138
        L138:
            r0 = move-exception
            a(r1)
            throw r0
    }

    private void h() throws java.io.IOException {
            r8 = this;
            java.io.File r0 = r8.g
            a(r0)
            java.util.LinkedHashMap<java.lang.String, com.loc.bl$c> r0 = r8.o
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        Lf:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L51
            java.lang.Object r1 = r0.next()
            com.loc.bl$c r1 = (com.loc.bl.c) r1
            com.loc.bl$a r2 = com.loc.bl.c.b(r1)
            r3 = 0
            if (r2 != 0) goto L34
        L22:
            int r2 = r8.k
            if (r3 >= r2) goto Lf
            long r4 = r8.l
            long[] r2 = com.loc.bl.c.c(r1)
            r6 = r2[r3]
            long r4 = r4 + r6
            r8.l = r4
            int r3 = r3 + 1
            goto L22
        L34:
            r2 = 0
            com.loc.bl.c.a(r1, r2)
        L38:
            int r2 = r8.k
            if (r3 >= r2) goto L4d
            java.io.File r2 = r1.a(r3)
            a(r2)
            java.io.File r2 = r1.b(r3)
            a(r2)
            int r3 = r3 + 1
            goto L38
        L4d:
            r0.remove()
            goto Lf
        L51:
            return
    }

    private synchronized void i() throws java.io.IOException {
            r6 = this;
            monitor-enter(r6)
            java.io.Writer r0 = r6.m     // Catch: java.lang.Throwable -> Le2
            if (r0 == 0) goto La
            java.io.Writer r0 = r6.m     // Catch: java.lang.Throwable -> Le2
            r0.close()     // Catch: java.lang.Throwable -> Le2
        La:
            java.io.BufferedWriter r0 = new java.io.BufferedWriter     // Catch: java.lang.Throwable -> Le2
            java.io.OutputStreamWriter r1 = new java.io.OutputStreamWriter     // Catch: java.lang.Throwable -> Le2
            java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Le2
            java.io.File r3 = r6.g     // Catch: java.lang.Throwable -> Le2
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Le2
            java.nio.charset.Charset r3 = com.loc.bl.b     // Catch: java.lang.Throwable -> Le2
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> Le2
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r1 = "libcore.io.DiskLruCache"
            r0.write(r1)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r1 = "\n"
            r0.write(r1)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r1 = "1"
            r0.write(r1)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r1 = "\n"
            r0.write(r1)     // Catch: java.lang.Throwable -> Ldd
            int r1 = r6.i     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r1 = java.lang.Integer.toString(r1)     // Catch: java.lang.Throwable -> Ldd
            r0.write(r1)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r1 = "\n"
            r0.write(r1)     // Catch: java.lang.Throwable -> Ldd
            int r1 = r6.k     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r1 = java.lang.Integer.toString(r1)     // Catch: java.lang.Throwable -> Ldd
            r0.write(r1)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r1 = "\n"
            r0.write(r1)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r1 = "\n"
            r0.write(r1)     // Catch: java.lang.Throwable -> Ldd
            java.util.LinkedHashMap<java.lang.String, com.loc.bl$c> r1 = r6.o     // Catch: java.lang.Throwable -> Ldd
            java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> Ldd
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> Ldd
        L5c:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> Ldd
            if (r2 == 0) goto La6
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> Ldd
            com.loc.bl$c r2 = (com.loc.bl.c) r2     // Catch: java.lang.Throwable -> Ldd
            com.loc.bl$a r3 = com.loc.bl.c.b(r2)     // Catch: java.lang.Throwable -> Ldd
            r4 = 10
            if (r3 == 0) goto L89
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r5 = "DIRTY "
            r3.<init>(r5)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = com.loc.bl.c.d(r2)     // Catch: java.lang.Throwable -> Ldd
            r3.append(r2)     // Catch: java.lang.Throwable -> Ldd
            r3.append(r4)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> Ldd
        L85:
            r0.write(r2)     // Catch: java.lang.Throwable -> Ldd
            goto L5c
        L89:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r5 = "CLEAN "
            r3.<init>(r5)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r5 = com.loc.bl.c.d(r2)     // Catch: java.lang.Throwable -> Ldd
            r3.append(r5)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = r2.a()     // Catch: java.lang.Throwable -> Ldd
            r3.append(r2)     // Catch: java.lang.Throwable -> Ldd
            r3.append(r4)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> Ldd
            goto L85
        La6:
            r0.close()     // Catch: java.lang.Throwable -> Le2
            java.io.File r0 = r6.f     // Catch: java.lang.Throwable -> Le2
            boolean r0 = r0.exists()     // Catch: java.lang.Throwable -> Le2
            r1 = 1
            if (r0 == 0) goto Lb9
            java.io.File r0 = r6.f     // Catch: java.lang.Throwable -> Le2
            java.io.File r2 = r6.h     // Catch: java.lang.Throwable -> Le2
            a(r0, r2, r1)     // Catch: java.lang.Throwable -> Le2
        Lb9:
            java.io.File r0 = r6.g     // Catch: java.lang.Throwable -> Le2
            java.io.File r2 = r6.f     // Catch: java.lang.Throwable -> Le2
            r3 = 0
            a(r0, r2, r3)     // Catch: java.lang.Throwable -> Le2
            java.io.File r0 = r6.h     // Catch: java.lang.Throwable -> Le2
            r0.delete()     // Catch: java.lang.Throwable -> Le2
            java.io.BufferedWriter r0 = new java.io.BufferedWriter     // Catch: java.lang.Throwable -> Le2
            java.io.OutputStreamWriter r2 = new java.io.OutputStreamWriter     // Catch: java.lang.Throwable -> Le2
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Le2
            java.io.File r4 = r6.f     // Catch: java.lang.Throwable -> Le2
            r3.<init>(r4, r1)     // Catch: java.lang.Throwable -> Le2
            java.nio.charset.Charset r1 = com.loc.bl.b     // Catch: java.lang.Throwable -> Le2
            r2.<init>(r3, r1)     // Catch: java.lang.Throwable -> Le2
            r0.<init>(r2)     // Catch: java.lang.Throwable -> Le2
            r6.m = r0     // Catch: java.lang.Throwable -> Le2
            monitor-exit(r6)
            return
        Ldd:
            r1 = move-exception
            r0.close()     // Catch: java.lang.Throwable -> Le2
            throw r1     // Catch: java.lang.Throwable -> Le2
        Le2:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    private boolean j() {
            r2 = this;
            int r0 = r2.p
            r1 = 2000(0x7d0, float:2.803E-42)
            if (r0 < r1) goto L10
            java.util.LinkedHashMap<java.lang.String, com.loc.bl$c> r1 = r2.o
            int r1 = r1.size()
            if (r0 < r1) goto L10
            r0 = 1
            return r0
        L10:
            r0 = 0
            return r0
    }

    private void k() {
            r2 = this;
            java.io.Writer r0 = r2.m
            if (r0 == 0) goto L5
            return
        L5:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "cache is closed"
            r0.<init>(r1)
            throw r0
    }

    private void l() throws java.io.IOException {
            r5 = this;
        L0:
            long r0 = r5.l
            long r2 = r5.j
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 > 0) goto L14
            java.util.LinkedHashMap<java.lang.String, com.loc.bl$c> r0 = r5.o
            int r0 = r0.size()
            int r1 = r5.n
            if (r0 <= r1) goto L13
            goto L14
        L13:
            return
        L14:
            java.util.LinkedHashMap<java.lang.String, com.loc.bl$c> r0 = r5.o
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
            java.lang.Object r0 = r0.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r0 = r0.getKey()
            java.lang.String r0 = (java.lang.String) r0
            r5.c(r0)
            goto L0
    }

    public final synchronized com.loc.bl.b a(java.lang.String r12) throws java.io.IOException {
            r11 = this;
            monitor-enter(r11)
            r11.k()     // Catch: java.lang.Throwable -> L86
            e(r12)     // Catch: java.lang.Throwable -> L86
            java.util.LinkedHashMap<java.lang.String, com.loc.bl$c> r0 = r11.o     // Catch: java.lang.Throwable -> L86
            java.lang.Object r0 = r0.get(r12)     // Catch: java.lang.Throwable -> L86
            com.loc.bl$c r0 = (com.loc.bl.c) r0     // Catch: java.lang.Throwable -> L86
            r1 = 0
            if (r0 != 0) goto L14
            monitor-exit(r11)
            return r1
        L14:
            boolean r2 = com.loc.bl.c.e(r0)     // Catch: java.lang.Throwable -> L86
            if (r2 != 0) goto L1c
            monitor-exit(r11)
            return r1
        L1c:
            int r2 = r11.k     // Catch: java.lang.Throwable -> L86
            java.io.InputStream[] r8 = new java.io.InputStream[r2]     // Catch: java.lang.Throwable -> L86
            r2 = 0
            r3 = 0
        L22:
            int r4 = r11.k     // Catch: java.io.FileNotFoundException -> L74 java.lang.Throwable -> L86
            if (r3 >= r4) goto L34
            java.io.FileInputStream r4 = new java.io.FileInputStream     // Catch: java.io.FileNotFoundException -> L74 java.lang.Throwable -> L86
            java.io.File r5 = r0.a(r3)     // Catch: java.io.FileNotFoundException -> L74 java.lang.Throwable -> L86
            r4.<init>(r5)     // Catch: java.io.FileNotFoundException -> L74 java.lang.Throwable -> L86
            r8[r3] = r4     // Catch: java.io.FileNotFoundException -> L74 java.lang.Throwable -> L86
            int r3 = r3 + 1
            goto L22
        L34:
            int r1 = r11.p     // Catch: java.lang.Throwable -> L86
            int r1 = r1 + 1
            r11.p = r1     // Catch: java.lang.Throwable -> L86
            java.io.Writer r1 = r11.m     // Catch: java.lang.Throwable -> L86
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L86
            java.lang.String r3 = "READ "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L86
            r2.append(r12)     // Catch: java.lang.Throwable -> L86
            r3 = 10
            r2.append(r3)     // Catch: java.lang.Throwable -> L86
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L86
            r1.append(r2)     // Catch: java.lang.Throwable -> L86
            boolean r1 = r11.j()     // Catch: java.lang.Throwable -> L86
            if (r1 == 0) goto L61
            java.util.concurrent.ThreadPoolExecutor r1 = f()     // Catch: java.lang.Throwable -> L86
            java.util.concurrent.Callable<java.lang.Void> r2 = r11.s     // Catch: java.lang.Throwable -> L86
            r1.submit(r2)     // Catch: java.lang.Throwable -> L86
        L61:
            com.loc.bl$b r1 = new com.loc.bl$b     // Catch: java.lang.Throwable -> L86
            long r6 = com.loc.bl.c.f(r0)     // Catch: java.lang.Throwable -> L86
            long[] r9 = com.loc.bl.c.c(r0)     // Catch: java.lang.Throwable -> L86
            r10 = 0
            r3 = r1
            r4 = r11
            r5 = r12
            r3.<init>(r4, r5, r6, r8, r9, r10)     // Catch: java.lang.Throwable -> L86
            monitor-exit(r11)
            return r1
        L74:
            int r12 = r11.k     // Catch: java.lang.Throwable -> L86
            if (r2 >= r12) goto L84
            r12 = r8[r2]     // Catch: java.lang.Throwable -> L86
            if (r12 == 0) goto L84
            r12 = r8[r2]     // Catch: java.lang.Throwable -> L86
            a(r12)     // Catch: java.lang.Throwable -> L86
            int r2 = r2 + 1
            goto L74
        L84:
            monitor-exit(r11)
            return r1
        L86:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    public final void a(int r3) {
            r2 = this;
            r0 = 10000(0x2710, float:1.4013E-41)
            r1 = 10
            if (r3 >= r1) goto L9
            r3 = 10
            goto Ld
        L9:
            if (r3 <= r0) goto Ld
            r3 = 10000(0x2710, float:1.4013E-41)
        Ld:
            r2.n = r3
            return
    }

    public final com.loc.bl.a b(java.lang.String r1) throws java.io.IOException {
            r0 = this;
            com.loc.bl$a r1 = r0.d(r1)
            return r1
    }

    public final java.io.File b() {
            r1 = this;
            java.io.File r0 = r1.e
            return r0
    }

    public final synchronized void c() throws java.io.IOException {
            r1 = this;
            monitor-enter(r1)
            r1.k()     // Catch: java.lang.Throwable -> Le
            r1.l()     // Catch: java.lang.Throwable -> Le
            java.io.Writer r0 = r1.m     // Catch: java.lang.Throwable -> Le
            r0.flush()     // Catch: java.lang.Throwable -> Le
            monitor-exit(r1)
            return
        Le:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized boolean c(java.lang.String r8) throws java.io.IOException {
            r7 = this;
            monitor-enter(r7)
            r7.k()     // Catch: java.lang.Throwable -> L8a
            e(r8)     // Catch: java.lang.Throwable -> L8a
            java.util.LinkedHashMap<java.lang.String, com.loc.bl$c> r0 = r7.o     // Catch: java.lang.Throwable -> L8a
            java.lang.Object r0 = r0.get(r8)     // Catch: java.lang.Throwable -> L8a
            com.loc.bl$c r0 = (com.loc.bl.c) r0     // Catch: java.lang.Throwable -> L8a
            r1 = 0
            if (r0 == 0) goto L88
            com.loc.bl$a r2 = com.loc.bl.c.b(r0)     // Catch: java.lang.Throwable -> L8a
            if (r2 == 0) goto L19
            goto L88
        L19:
            int r2 = r7.k     // Catch: java.lang.Throwable -> L8a
            if (r1 >= r2) goto L54
            java.io.File r2 = r0.a(r1)     // Catch: java.lang.Throwable -> L8a
            boolean r3 = r2.exists()     // Catch: java.lang.Throwable -> L8a
            if (r3 == 0) goto L3e
            boolean r3 = r2.delete()     // Catch: java.lang.Throwable -> L8a
            if (r3 == 0) goto L2e
            goto L3e
        L2e:
            java.io.IOException r8 = new java.io.IOException     // Catch: java.lang.Throwable -> L8a
            java.lang.String r0 = "failed to delete "
            java.lang.String r1 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r0 = r0.concat(r1)     // Catch: java.lang.Throwable -> L8a
            r8.<init>(r0)     // Catch: java.lang.Throwable -> L8a
            throw r8     // Catch: java.lang.Throwable -> L8a
        L3e:
            long r2 = r7.l     // Catch: java.lang.Throwable -> L8a
            long[] r4 = com.loc.bl.c.c(r0)     // Catch: java.lang.Throwable -> L8a
            r5 = r4[r1]     // Catch: java.lang.Throwable -> L8a
            long r2 = r2 - r5
            r7.l = r2     // Catch: java.lang.Throwable -> L8a
            long[] r2 = com.loc.bl.c.c(r0)     // Catch: java.lang.Throwable -> L8a
            r3 = 0
            r2[r1] = r3     // Catch: java.lang.Throwable -> L8a
            int r1 = r1 + 1
            goto L19
        L54:
            int r0 = r7.p     // Catch: java.lang.Throwable -> L8a
            r1 = 1
            int r0 = r0 + r1
            r7.p = r0     // Catch: java.lang.Throwable -> L8a
            java.io.Writer r0 = r7.m     // Catch: java.lang.Throwable -> L8a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8a
            java.lang.String r3 = "REMOVE "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L8a
            r2.append(r8)     // Catch: java.lang.Throwable -> L8a
            r3 = 10
            r2.append(r3)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L8a
            r0.append(r2)     // Catch: java.lang.Throwable -> L8a
            java.util.LinkedHashMap<java.lang.String, com.loc.bl$c> r0 = r7.o     // Catch: java.lang.Throwable -> L8a
            r0.remove(r8)     // Catch: java.lang.Throwable -> L8a
            boolean r8 = r7.j()     // Catch: java.lang.Throwable -> L8a
            if (r8 == 0) goto L86
            java.util.concurrent.ThreadPoolExecutor r8 = f()     // Catch: java.lang.Throwable -> L8a
            java.util.concurrent.Callable<java.lang.Void> r0 = r7.s     // Catch: java.lang.Throwable -> L8a
            r8.submit(r0)     // Catch: java.lang.Throwable -> L8a
        L86:
            monitor-exit(r7)
            return r1
        L88:
            monitor-exit(r7)
            return r1
        L8a:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    @Override
    public final synchronized void close() throws java.io.IOException {
            r3 = this;
            monitor-enter(r3)
            java.io.Writer r0 = r3.m     // Catch: java.lang.Throwable -> L3d
            if (r0 != 0) goto L7
            monitor-exit(r3)
            return
        L7:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L3d
            java.util.LinkedHashMap<java.lang.String, com.loc.bl$c> r1 = r3.o     // Catch: java.lang.Throwable -> L3d
            java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> L3d
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L3d
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L3d
        L16:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L3d
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L3d
            com.loc.bl$c r1 = (com.loc.bl.c) r1     // Catch: java.lang.Throwable -> L3d
            com.loc.bl$a r2 = com.loc.bl.c.b(r1)     // Catch: java.lang.Throwable -> L3d
            if (r2 == 0) goto L16
            com.loc.bl$a r1 = com.loc.bl.c.b(r1)     // Catch: java.lang.Throwable -> L3d
            r1.c()     // Catch: java.lang.Throwable -> L3d
            goto L16
        L30:
            r3.l()     // Catch: java.lang.Throwable -> L3d
            java.io.Writer r0 = r3.m     // Catch: java.lang.Throwable -> L3d
            r0.close()     // Catch: java.lang.Throwable -> L3d
            r0 = 0
            r3.m = r0     // Catch: java.lang.Throwable -> L3d
            monitor-exit(r3)
            return
        L3d:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public final void d() throws java.io.IOException {
            r1 = this;
            r1.close()
            java.io.File r0 = r1.e
            b(r0)
            return
    }
}
