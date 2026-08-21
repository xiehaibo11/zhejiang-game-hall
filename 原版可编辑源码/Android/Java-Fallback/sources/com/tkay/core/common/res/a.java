package com.tkay.core.common.res;

public final class a implements java.io.Closeable {
    static final java.lang.String a = "journal";
    static final java.lang.String b = "journal.tmp";
    static final java.lang.String c = "libcore.io.DiskLruCache";
    static final java.lang.String d = "1";
    static final long e = -1;
    private static final java.lang.String f = "CLEAN";
    private static final java.lang.String g = "DIRTY";
    private static final java.lang.String h = "REMOVE";
    private static final java.lang.String i = "READ";
    private static final java.nio.charset.Charset j = null;
    private static final int k = 8192;
    private final java.io.File l;
    private final java.io.File m;
    private final java.io.File n;
    private final int o;
    private final long p;
    private final int q;
    private long r;
    private java.io.Writer s;
    private final java.util.LinkedHashMap<java.lang.String, com.tkay.core.common.res.a.b> t;
    private int u;
    private long v;
    private final java.util.concurrent.ExecutorService w;
    private final java.util.concurrent.Callable<java.lang.Void> x;


    public final class a {
        final com.tkay.core.common.res.a a;
        private final com.tkay.core.common.res.a.b b;
        private boolean c;

        private class a extends java.io.FilterOutputStream {
            final com.tkay.core.common.res.a.a a;

            private a(com.tkay.core.common.res.a.a r1, java.io.OutputStream r2) {
                    r0 = this;
                    r0.a = r1
                    r0.<init>(r2)
                    return
            }

            a(com.tkay.core.common.res.a.a r1, java.io.OutputStream r2, byte r3) {
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
                    com.tkay.core.common.res.a$a r0 = r1.a
                    com.tkay.core.common.res.a.a.b(r0)
                    return
            }

            @Override
            public final void flush() {
                    r1 = this;
                    java.io.OutputStream r0 = r1.out     // Catch: java.io.IOException -> L6
                    r0.flush()     // Catch: java.io.IOException -> L6
                    return
                L6:
                    com.tkay.core.common.res.a$a r0 = r1.a
                    com.tkay.core.common.res.a.a.b(r0)
                    return
            }

            @Override
            public final void write(int r2) {
                    r1 = this;
                    java.io.OutputStream r0 = r1.out     // Catch: java.io.IOException -> L6
                    r0.write(r2)     // Catch: java.io.IOException -> L6
                    return
                L6:
                    com.tkay.core.common.res.a$a r2 = r1.a
                    com.tkay.core.common.res.a.a.b(r2)
                    return
            }

            @Override
            public final void write(byte[] r2, int r3, int r4) {
                    r1 = this;
                    java.io.OutputStream r0 = r1.out     // Catch: java.io.IOException -> L6
                    r0.write(r2, r3, r4)     // Catch: java.io.IOException -> L6
                    return
                L6:
                    com.tkay.core.common.res.a$a r2 = r1.a
                    com.tkay.core.common.res.a.a.b(r2)
                    return
            }
        }

        private a(com.tkay.core.common.res.a r1, com.tkay.core.common.res.a.b r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        a(com.tkay.core.common.res.a r1, com.tkay.core.common.res.a.b r2, byte r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        static com.tkay.core.common.res.a.b a(com.tkay.core.common.res.a.a r0) {
                com.tkay.core.common.res.a$b r0 = r0.b
                return r0
        }

        private void a(int r4, java.lang.String r5) {
                r3 = this;
                r0 = 0
                java.io.OutputStreamWriter r1 = new java.io.OutputStreamWriter     // Catch: java.lang.Throwable -> L18
                java.io.OutputStream r4 = r3.a(r4)     // Catch: java.lang.Throwable -> L18
                java.nio.charset.Charset r2 = com.tkay.core.common.res.a.a()     // Catch: java.lang.Throwable -> L18
                r1.<init>(r4, r2)     // Catch: java.lang.Throwable -> L18
                r1.write(r5)     // Catch: java.lang.Throwable -> L15
                com.tkay.core.common.res.a.a(r1)
                return
            L15:
                r4 = move-exception
                r0 = r1
                goto L19
            L18:
                r4 = move-exception
            L19:
                com.tkay.core.common.res.a.a(r0)
                throw r4
        }

        private java.io.InputStream b(int r4) {
                r3 = this;
                com.tkay.core.common.res.a r0 = r3.a
                monitor-enter(r0)
                com.tkay.core.common.res.a$b r1 = r3.b     // Catch: java.lang.Throwable -> L29
                com.tkay.core.common.res.a$a r1 = com.tkay.core.common.res.a.b.b(r1)     // Catch: java.lang.Throwable -> L29
                if (r1 != r3) goto L23
                com.tkay.core.common.res.a$b r1 = r3.b     // Catch: java.lang.Throwable -> L29
                boolean r1 = com.tkay.core.common.res.a.b.e(r1)     // Catch: java.lang.Throwable -> L29
                if (r1 != 0) goto L16
                r4 = 0
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
                return r4
            L16:
                java.io.FileInputStream r1 = new java.io.FileInputStream     // Catch: java.lang.Throwable -> L29
                com.tkay.core.common.res.a$b r2 = r3.b     // Catch: java.lang.Throwable -> L29
                java.io.File r4 = r2.a(r4)     // Catch: java.lang.Throwable -> L29
                r1.<init>(r4)     // Catch: java.lang.Throwable -> L29
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
                return r1
            L23:
                java.lang.IllegalStateException r4 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L29
                r4.<init>()     // Catch: java.lang.Throwable -> L29
                throw r4     // Catch: java.lang.Throwable -> L29
            L29:
                r4 = move-exception
                monitor-exit(r0)
                throw r4
        }

        static boolean b(com.tkay.core.common.res.a.a r1) {
                r0 = 1
                r1.c = r0
                return r0
        }

        private java.lang.String c(int r1) {
                r0 = this;
                java.io.InputStream r1 = r0.b(r1)
                if (r1 == 0) goto Lb
                java.lang.String r1 = com.tkay.core.common.res.a.a(r1)
                return r1
            Lb:
                r1 = 0
                return r1
        }

        public final java.io.OutputStream a(int r5) {
                r4 = this;
                com.tkay.core.common.res.a r0 = r4.a
                monitor-enter(r0)
                com.tkay.core.common.res.a$b r1 = r4.b     // Catch: java.lang.Throwable -> L24
                com.tkay.core.common.res.a$a r1 = com.tkay.core.common.res.a.b.b(r1)     // Catch: java.lang.Throwable -> L24
                if (r1 != r4) goto L1e
                com.tkay.core.common.res.a$a$a r1 = new com.tkay.core.common.res.a$a$a     // Catch: java.lang.Throwable -> L24
                java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> L24
                com.tkay.core.common.res.a$b r3 = r4.b     // Catch: java.lang.Throwable -> L24
                java.io.File r5 = r3.b(r5)     // Catch: java.lang.Throwable -> L24
                r2.<init>(r5)     // Catch: java.lang.Throwable -> L24
                r5 = 0
                r1.<init>(r4, r2, r5)     // Catch: java.lang.Throwable -> L24
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L24
                return r1
            L1e:
                java.lang.IllegalStateException r5 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L24
                r5.<init>()     // Catch: java.lang.Throwable -> L24
                throw r5     // Catch: java.lang.Throwable -> L24
            L24:
                r5 = move-exception
                monitor-exit(r0)
                throw r5
        }

        public final void a() {
                r2 = this;
                boolean r0 = r2.c
                if (r0 == 0) goto L16
                com.tkay.core.common.res.a r0 = r2.a
                r1 = 0
                com.tkay.core.common.res.a.a(r0, r2, r1)
                com.tkay.core.common.res.a r0 = r2.a
                com.tkay.core.common.res.a$b r1 = r2.b
                java.lang.String r1 = com.tkay.core.common.res.a.b.d(r1)
                r0.c(r1)
                return
            L16:
                com.tkay.core.common.res.a r0 = r2.a
                r1 = 1
                com.tkay.core.common.res.a.a(r0, r2, r1)
                return
        }

        public final void b() {
                r2 = this;
                com.tkay.core.common.res.a r0 = r2.a
                r1 = 0
                com.tkay.core.common.res.a.a(r0, r2, r1)
                return
        }
    }

    private final class b {
        final com.tkay.core.common.res.a a;
        private final java.lang.String b;
        private final long[] c;
        private boolean d;
        private com.tkay.core.common.res.a.a e;
        private long f;

        private b(com.tkay.core.common.res.a r1, java.lang.String r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                int r1 = com.tkay.core.common.res.a.f(r1)
                long[] r1 = new long[r1]
                r0.c = r1
                return
        }

        b(com.tkay.core.common.res.a r1, java.lang.String r2, byte r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        static long a(com.tkay.core.common.res.a.b r0, long r1) {
                r0.f = r1
                return r1
        }

        static com.tkay.core.common.res.a.a a(com.tkay.core.common.res.a.b r0, com.tkay.core.common.res.a.a r1) {
                r0.e = r1
                return r1
        }

        static void a(com.tkay.core.common.res.a.b r4, java.lang.String[] r5) {
                int r0 = r5.length
                com.tkay.core.common.res.a r1 = r4.a
                int r1 = com.tkay.core.common.res.a.f(r1)
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
                java.io.IOException r4 = b(r5)
                throw r4
            L20:
                java.io.IOException r4 = b(r5)
                throw r4
        }

        private void a(java.lang.String[] r5) {
                r4 = this;
                int r0 = r5.length
                com.tkay.core.common.res.a r1 = r4.a
                int r1 = com.tkay.core.common.res.a.f(r1)
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
                java.io.IOException r5 = b(r5)
                throw r5
            L20:
                java.io.IOException r5 = b(r5)
                throw r5
        }

        static boolean a(com.tkay.core.common.res.a.b r1) {
                r0 = 1
                r1.d = r0
                return r0
        }

        static com.tkay.core.common.res.a.a b(com.tkay.core.common.res.a.b r0) {
                com.tkay.core.common.res.a$a r0 = r0.e
                return r0
        }

        private static java.io.IOException b(java.lang.String[] r3) {
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

        static long[] c(com.tkay.core.common.res.a.b r0) {
                long[] r0 = r0.c
                return r0
        }

        static java.lang.String d(com.tkay.core.common.res.a.b r0) {
                java.lang.String r0 = r0.b
                return r0
        }

        static boolean e(com.tkay.core.common.res.a.b r0) {
                boolean r0 = r0.d
                return r0
        }

        static long f(com.tkay.core.common.res.a.b r2) {
                long r0 = r2.f
                return r0
        }

        public final java.io.File a(int r5) {
                r4 = this;
                java.io.File r0 = new java.io.File
                com.tkay.core.common.res.a r1 = r4.a
                java.io.File r1 = com.tkay.core.common.res.a.g(r1)
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

        public final java.lang.String a() {
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
                com.tkay.core.common.res.a r1 = r4.a
                java.io.File r1 = com.tkay.core.common.res.a.g(r1)
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

    public final class c implements java.io.Closeable {
        final com.tkay.core.common.res.a a;
        private final java.lang.String b;
        private final long c;
        private final java.io.InputStream[] d;

        private c(com.tkay.core.common.res.a r1, java.lang.String r2, long r3, java.io.InputStream[] r5) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                r0.c = r3
                r0.d = r5
                return
        }

        c(com.tkay.core.common.res.a r1, java.lang.String r2, long r3, java.io.InputStream[] r5, byte r6) {
                r0 = this;
                r0.<init>(r1, r2, r3, r5)
                return
        }

        private java.lang.String a(int r2) {
                r1 = this;
                java.io.InputStream[] r0 = r1.d
                r2 = r0[r2]
                java.lang.String r2 = com.tkay.core.common.res.a.a(r2)
                return r2
        }

        private com.tkay.core.common.res.a.a b() {
                r4 = this;
                com.tkay.core.common.res.a r0 = r4.a
                java.lang.String r1 = r4.b
                long r2 = r4.c
                com.tkay.core.common.res.a$a r0 = com.tkay.core.common.res.a.a(r0, r1, r2)
                return r0
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
                com.tkay.core.common.res.a.a(r3)
                int r2 = r2 + 1
                goto L4
            Le:
                return
        }
    }

    static {
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            com.tkay.core.common.res.a.j = r0
            return
    }

    private a(java.io.File r16, long r17) {
            r15 = this;
            r0 = r15
            r1 = r16
            r15.<init>()
            r2 = 0
            r0.r = r2
            java.util.LinkedHashMap r4 = new java.util.LinkedHashMap
            r5 = 1
            r6 = 0
            r7 = 1061158912(0x3f400000, float:0.75)
            r4.<init>(r6, r7, r5)
            r0.t = r4
            r0.v = r2
            java.util.concurrent.ThreadPoolExecutor r2 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r13 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r14 = new java.util.concurrent.LinkedBlockingQueue
            r14.<init>()
            r9 = 0
            r10 = 1
            r11 = 60
            r8 = r2
            r8.<init>(r9, r10, r11, r13, r14)
            r0.w = r2
            com.tkay.core.common.res.a$1 r2 = new com.tkay.core.common.res.a$1
            r2.<init>(r15)
            r0.x = r2
            r0.l = r1
            r0.o = r5
            java.io.File r2 = new java.io.File
            java.lang.String r3 = "journal"
            r2.<init>(r1, r3)
            r0.m = r2
            java.io.File r2 = new java.io.File
            java.lang.String r3 = "journal.tmp"
            r2.<init>(r1, r3)
            r0.n = r2
            r0.q = r5
            r1 = r17
            r0.p = r1
            return
    }

    static com.tkay.core.common.res.a.a a(com.tkay.core.common.res.a r0, java.lang.String r1, long r2) {
            com.tkay.core.common.res.a$a r0 = r0.a(r1, r2)
            return r0
    }

    private synchronized com.tkay.core.common.res.a.a a(java.lang.String r6, long r7) {
            r5 = this;
            monitor-enter(r5)
            r5.j()     // Catch: java.lang.Throwable -> L5f
            e(r6)     // Catch: java.lang.Throwable -> L5f
            java.util.LinkedHashMap<java.lang.String, com.tkay.core.common.res.a$b> r0 = r5.t     // Catch: java.lang.Throwable -> L5f
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Throwable -> L5f
            com.tkay.core.common.res.a$b r0 = (com.tkay.core.common.res.a.b) r0     // Catch: java.lang.Throwable -> L5f
            r1 = -1
            int r1 = (r7 > r1 ? 1 : (r7 == r1 ? 0 : -1))
            r2 = 0
            if (r1 == 0) goto L22
            if (r0 == 0) goto L20
            long r3 = com.tkay.core.common.res.a.b.f(r0)     // Catch: java.lang.Throwable -> L5f
            int r7 = (r3 > r7 ? 1 : (r3 == r7 ? 0 : -1))
            if (r7 == 0) goto L22
        L20:
            monitor-exit(r5)
            return r2
        L22:
            r7 = 0
            if (r0 != 0) goto L30
            com.tkay.core.common.res.a$b r0 = new com.tkay.core.common.res.a$b     // Catch: java.lang.Throwable -> L5f
            r0.<init>(r5, r6, r7)     // Catch: java.lang.Throwable -> L5f
            java.util.LinkedHashMap<java.lang.String, com.tkay.core.common.res.a$b> r8 = r5.t     // Catch: java.lang.Throwable -> L5f
            r8.put(r6, r0)     // Catch: java.lang.Throwable -> L5f
            goto L38
        L30:
            com.tkay.core.common.res.a$a r8 = com.tkay.core.common.res.a.b.b(r0)     // Catch: java.lang.Throwable -> L5f
            if (r8 == 0) goto L38
            monitor-exit(r5)
            return r2
        L38:
            com.tkay.core.common.res.a$a r8 = new com.tkay.core.common.res.a$a     // Catch: java.lang.Throwable -> L5f
            r8.<init>(r5, r0, r7)     // Catch: java.lang.Throwable -> L5f
            com.tkay.core.common.res.a.b.a(r0, r8)     // Catch: java.lang.Throwable -> L5f
            java.io.Writer r7 = r5.s     // Catch: java.lang.Throwable -> L5f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5f
            java.lang.String r1 = "DIRTY "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L5f
            r0.append(r6)     // Catch: java.lang.Throwable -> L5f
            r6 = 10
            r0.append(r6)     // Catch: java.lang.Throwable -> L5f
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Throwable -> L5f
            r7.write(r6)     // Catch: java.lang.Throwable -> L5f
            java.io.Writer r6 = r5.s     // Catch: java.lang.Throwable -> L5f
            r6.flush()     // Catch: java.lang.Throwable -> L5f
            monitor-exit(r5)
            return r8
        L5f:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public static com.tkay.core.common.res.a a(java.io.File r5, long r6) {
            r0 = 0
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 <= 0) goto L3f
            com.tkay.core.common.res.a r0 = new com.tkay.core.common.res.a
            r0.<init>(r5, r6)
            java.io.File r1 = r0.m
            boolean r1 = r1.exists()
            if (r1 == 0) goto L33
            r0.b()     // Catch: java.io.IOException -> L2b
            r0.c()     // Catch: java.io.IOException -> L2b
            java.io.BufferedWriter r1 = new java.io.BufferedWriter     // Catch: java.io.IOException -> L2b
            java.io.FileWriter r2 = new java.io.FileWriter     // Catch: java.io.IOException -> L2b
            java.io.File r3 = r0.m     // Catch: java.io.IOException -> L2b
            r4 = 1
            r2.<init>(r3, r4)     // Catch: java.io.IOException -> L2b
            r3 = 8192(0x2000, float:1.148E-41)
            r1.<init>(r2, r3)     // Catch: java.io.IOException -> L2b
            r0.s = r1     // Catch: java.io.IOException -> L2b
            return r0
        L2b:
            r0.close()
            java.io.File r0 = r0.l
            a(r0)
        L33:
            r5.mkdirs()
            com.tkay.core.common.res.a r0 = new com.tkay.core.common.res.a
            r0.<init>(r5, r6)
            r0.d()
            return r0
        L3f:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "maxSize <= 0"
            r5.<init>(r6)
            throw r5
    }

    static java.io.Writer a(com.tkay.core.common.res.a r0) {
            java.io.Writer r0 = r0.s
            return r0
    }

    static java.lang.String a(java.io.InputStream r2) {
            java.io.InputStreamReader r0 = new java.io.InputStreamReader
            java.nio.charset.Charset r1 = com.tkay.core.common.res.a.j
            r0.<init>(r2, r1)
            java.lang.String r2 = a(r0)
            return r2
    }

    private static java.lang.String a(java.io.Reader r4) {
            java.io.StringWriter r0 = new java.io.StringWriter     // Catch: java.lang.Throwable -> L1d
            r0.<init>()     // Catch: java.lang.Throwable -> L1d
            r1 = 1024(0x400, float:1.435E-42)
            char[] r1 = new char[r1]     // Catch: java.lang.Throwable -> L1d
        L9:
            int r2 = r4.read(r1)     // Catch: java.lang.Throwable -> L1d
            r3 = -1
            if (r2 == r3) goto L15
            r3 = 0
            r0.write(r1, r3, r2)     // Catch: java.lang.Throwable -> L1d
            goto L9
        L15:
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1d
            r4.close()
            return r0
        L1d:
            r0 = move-exception
            r4.close()
            throw r0
    }

    static java.nio.charset.Charset a() {
            java.nio.charset.Charset r0 = com.tkay.core.common.res.a.j
            return r0
    }

    private synchronized void a(com.tkay.core.common.res.a.a r10, boolean r11) {
            r9 = this;
            monitor-enter(r9)
            com.tkay.core.common.res.a$b r0 = com.tkay.core.common.res.a.a.a(r10)     // Catch: java.lang.Throwable -> Lf6
            com.tkay.core.common.res.a$a r1 = com.tkay.core.common.res.a.b.b(r0)     // Catch: java.lang.Throwable -> Lf6
            if (r1 != r10) goto Lf0
            r1 = 0
            if (r11 == 0) goto L39
            boolean r2 = com.tkay.core.common.res.a.b.e(r0)     // Catch: java.lang.Throwable -> Lf6
            if (r2 != 0) goto L39
            r2 = r1
        L15:
            int r3 = r9.q     // Catch: java.lang.Throwable -> Lf6
            if (r2 >= r3) goto L39
            java.io.File r3 = r0.b(r2)     // Catch: java.lang.Throwable -> Lf6
            boolean r3 = r3.exists()     // Catch: java.lang.Throwable -> Lf6
            if (r3 == 0) goto L26
            int r2 = r2 + 1
            goto L15
        L26:
            r10.b()     // Catch: java.lang.Throwable -> Lf6
            java.lang.IllegalStateException r10 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r11 = "edit didn't create file "
            java.lang.String r0 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r11 = r11.concat(r0)     // Catch: java.lang.Throwable -> Lf6
            r10.<init>(r11)     // Catch: java.lang.Throwable -> Lf6
            throw r10     // Catch: java.lang.Throwable -> Lf6
        L39:
            int r10 = r9.q     // Catch: java.lang.Throwable -> Lf6
            if (r1 >= r10) goto L6d
            java.io.File r10 = r0.b(r1)     // Catch: java.lang.Throwable -> Lf6
            if (r11 == 0) goto L67
            boolean r2 = r10.exists()     // Catch: java.lang.Throwable -> Lf6
            if (r2 == 0) goto L6a
            java.io.File r2 = r0.a(r1)     // Catch: java.lang.Throwable -> Lf6
            r10.renameTo(r2)     // Catch: java.lang.Throwable -> Lf6
            long[] r10 = com.tkay.core.common.res.a.b.c(r0)     // Catch: java.lang.Throwable -> Lf6
            r3 = r10[r1]     // Catch: java.lang.Throwable -> Lf6
            long r5 = r2.length()     // Catch: java.lang.Throwable -> Lf6
            long[] r10 = com.tkay.core.common.res.a.b.c(r0)     // Catch: java.lang.Throwable -> Lf6
            r10[r1] = r5     // Catch: java.lang.Throwable -> Lf6
            long r7 = r9.r     // Catch: java.lang.Throwable -> Lf6
            long r7 = r7 - r3
            long r7 = r7 + r5
            r9.r = r7     // Catch: java.lang.Throwable -> Lf6
            goto L6a
        L67:
            b(r10)     // Catch: java.lang.Throwable -> Lf6
        L6a:
            int r1 = r1 + 1
            goto L39
        L6d:
            int r10 = r9.u     // Catch: java.lang.Throwable -> Lf6
            int r10 = r10 + 1
            r9.u = r10     // Catch: java.lang.Throwable -> Lf6
            r10 = 0
            com.tkay.core.common.res.a.b.a(r0, r10)     // Catch: java.lang.Throwable -> Lf6
            boolean r10 = com.tkay.core.common.res.a.b.e(r0)     // Catch: java.lang.Throwable -> Lf6
            r10 = r10 | r11
            r1 = 10
            if (r10 == 0) goto Lb1
            com.tkay.core.common.res.a.b.a(r0)     // Catch: java.lang.Throwable -> Lf6
            java.io.Writer r10 = r9.s     // Catch: java.lang.Throwable -> Lf6
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r3 = "CLEAN "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r3 = com.tkay.core.common.res.a.b.d(r0)     // Catch: java.lang.Throwable -> Lf6
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r3 = r0.a()     // Catch: java.lang.Throwable -> Lf6
            r2.append(r3)     // Catch: java.lang.Throwable -> Lf6
            r2.append(r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> Lf6
            r10.write(r1)     // Catch: java.lang.Throwable -> Lf6
            if (r11 == 0) goto Ld4
            long r10 = r9.v     // Catch: java.lang.Throwable -> Lf6
            r1 = 1
            long r1 = r1 + r10
            r9.v = r1     // Catch: java.lang.Throwable -> Lf6
            com.tkay.core.common.res.a.b.a(r0, r10)     // Catch: java.lang.Throwable -> Lf6
            goto Ld4
        Lb1:
            java.util.LinkedHashMap<java.lang.String, com.tkay.core.common.res.a$b> r10 = r9.t     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r11 = com.tkay.core.common.res.a.b.d(r0)     // Catch: java.lang.Throwable -> Lf6
            r10.remove(r11)     // Catch: java.lang.Throwable -> Lf6
            java.io.Writer r10 = r9.s     // Catch: java.lang.Throwable -> Lf6
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r2 = "REMOVE "
            r11.<init>(r2)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r0 = com.tkay.core.common.res.a.b.d(r0)     // Catch: java.lang.Throwable -> Lf6
            r11.append(r0)     // Catch: java.lang.Throwable -> Lf6
            r11.append(r1)     // Catch: java.lang.Throwable -> Lf6
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> Lf6
            r10.write(r11)     // Catch: java.lang.Throwable -> Lf6
        Ld4:
            java.io.Writer r10 = r9.s     // Catch: java.lang.Throwable -> Lf6
            r10.flush()     // Catch: java.lang.Throwable -> Lf6
            long r10 = r9.r     // Catch: java.lang.Throwable -> Lf6
            long r0 = r9.p     // Catch: java.lang.Throwable -> Lf6
            int r10 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
            if (r10 > 0) goto Le7
            boolean r10 = r9.h()     // Catch: java.lang.Throwable -> Lf6
            if (r10 == 0) goto Lee
        Le7:
            java.util.concurrent.ExecutorService r10 = r9.w     // Catch: java.lang.Throwable -> Lf6
            java.util.concurrent.Callable<java.lang.Void> r11 = r9.x     // Catch: java.lang.Throwable -> Lf6
            r10.submit(r11)     // Catch: java.lang.Throwable -> Lf6
        Lee:
            monitor-exit(r9)
            return
        Lf0:
            java.lang.IllegalStateException r10 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> Lf6
            r10.<init>()     // Catch: java.lang.Throwable -> Lf6
            throw r10     // Catch: java.lang.Throwable -> Lf6
        Lf6:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    static void a(com.tkay.core.common.res.a r0, com.tkay.core.common.res.a.a r1, boolean r2) {
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

    private static void a(java.io.File r4) {
            java.io.File[] r0 = r4.listFiles()
            if (r0 == 0) goto L2f
            int r4 = r0.length
            r1 = 0
        L8:
            if (r1 >= r4) goto L2e
            r2 = r0[r1]
            boolean r3 = r2.isDirectory()
            if (r3 == 0) goto L15
            a(r2)
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
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r1 = "not a directory: "
            java.lang.String r4 = r1.concat(r4)
            r0.<init>(r4)
            throw r0
    }

    private static <T> T[] a(T[] r3, int r4) {
            int r0 = r3.length
            r1 = 2
            if (r1 > r4) goto L25
            if (r1 > r0) goto L1f
            int r4 = r4 - r1
            int r0 = r0 - r1
            int r0 = java.lang.Math.min(r4, r0)
            java.lang.Class r2 = r3.getClass()
            java.lang.Class r2 = r2.getComponentType()
            java.lang.Object r4 = java.lang.reflect.Array.newInstance(r2, r4)
            java.lang.Object[] r4 = (java.lang.Object[]) r4
            r2 = 0
            java.lang.System.arraycopy(r3, r1, r4, r2, r0)
            return r4
        L1f:
            java.lang.ArrayIndexOutOfBoundsException r3 = new java.lang.ArrayIndexOutOfBoundsException
            r3.<init>()
            throw r3
        L25:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            r3.<init>()
            throw r3
    }

    private static java.lang.String b(java.io.InputStream r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r1 = 80
            r0.<init>(r1)
        L7:
            int r1 = r3.read()
            r2 = -1
            if (r1 == r2) goto L2f
            r2 = 10
            if (r1 == r2) goto L17
            char r1 = (char) r1
            r0.append(r1)
            goto L7
        L17:
            int r3 = r0.length()
            if (r3 <= 0) goto L2a
            int r3 = r3 + (-1)
            char r1 = r0.charAt(r3)
            r2 = 13
            if (r1 != r2) goto L2a
            r0.setLength(r3)
        L2a:
            java.lang.String r3 = r0.toString()
            return r3
        L2f:
            java.io.EOFException r3 = new java.io.EOFException
            r3.<init>()
            throw r3
    }

    private void b() {
            r9 = this;
            java.lang.String r0 = ", "
            java.io.BufferedInputStream r1 = new java.io.BufferedInputStream
            java.io.FileInputStream r2 = new java.io.FileInputStream
            java.io.File r3 = r9.m
            r2.<init>(r3)
            r3 = 8192(0x2000, float:1.148E-41)
            r1.<init>(r2, r3)
            java.lang.String r2 = b(r1)     // Catch: java.lang.Throwable -> L148
            java.lang.String r3 = b(r1)     // Catch: java.lang.Throwable -> L148
            java.lang.String r4 = b(r1)     // Catch: java.lang.Throwable -> L148
            java.lang.String r5 = b(r1)     // Catch: java.lang.Throwable -> L148
            java.lang.String r6 = b(r1)     // Catch: java.lang.Throwable -> L148
            java.lang.String r7 = "libcore.io.DiskLruCache"
            boolean r7 = r7.equals(r2)     // Catch: java.lang.Throwable -> L148
            if (r7 == 0) goto L11d
            java.lang.String r7 = "1"
            boolean r7 = r7.equals(r3)     // Catch: java.lang.Throwable -> L148
            if (r7 == 0) goto L11d
            int r7 = r9.o     // Catch: java.lang.Throwable -> L148
            java.lang.String r7 = java.lang.Integer.toString(r7)     // Catch: java.lang.Throwable -> L148
            boolean r4 = r7.equals(r4)     // Catch: java.lang.Throwable -> L148
            if (r4 == 0) goto L11d
            int r4 = r9.q     // Catch: java.lang.Throwable -> L148
            java.lang.String r4 = java.lang.Integer.toString(r4)     // Catch: java.lang.Throwable -> L148
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> L148
            if (r4 == 0) goto L11d
            java.lang.String r4 = ""
            boolean r4 = r4.equals(r6)     // Catch: java.lang.Throwable -> L148
            if (r4 == 0) goto L11d
        L54:
            java.lang.String r0 = b(r1)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            java.lang.String r2 = " "
            java.lang.String[] r2 = r0.split(r2)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            int r3 = r2.length     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            java.lang.String r4 = "unexpected journal line: "
            r5 = 2
            if (r3 < r5) goto L10b
            r3 = 1
            r3 = r2[r3]     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            r6 = 0
            r7 = r2[r6]     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            java.lang.String r8 = "REMOVE"
            boolean r7 = r7.equals(r8)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            if (r7 == 0) goto L7b
            int r7 = r2.length     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            if (r7 != r5) goto L7b
            java.util.LinkedHashMap<java.lang.String, com.tkay.core.common.res.a$b> r0 = r9.t     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            r0.remove(r3)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            goto L54
        L7b:
            java.util.LinkedHashMap<java.lang.String, com.tkay.core.common.res.a$b> r7 = r9.t     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            java.lang.Object r7 = r7.get(r3)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            com.tkay.core.common.res.a$b r7 = (com.tkay.core.common.res.a.b) r7     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            if (r7 != 0) goto L8f
            com.tkay.core.common.res.a$b r7 = new com.tkay.core.common.res.a$b     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            r7.<init>(r9, r3, r6)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            java.util.LinkedHashMap<java.lang.String, com.tkay.core.common.res.a$b> r8 = r9.t     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            r8.put(r3, r7)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
        L8f:
            r3 = r2[r6]     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            java.lang.String r8 = "CLEAN"
            boolean r3 = r3.equals(r8)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            if (r3 == 0) goto Ld7
            int r3 = r2.length     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            int r8 = r9.q     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            int r8 = r8 + r5
            if (r3 != r8) goto Ld7
            com.tkay.core.common.res.a.b.a(r7)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            r0 = 0
            com.tkay.core.common.res.a.b.a(r7, r0)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            int r0 = r2.length     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            int r3 = r2.length     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            if (r5 > r0) goto Ld1
            if (r5 > r3) goto Lcb
            int r0 = r0 + (-2)
            int r3 = r3 + (-2)
            int r3 = java.lang.Math.min(r0, r3)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            java.lang.Class r4 = r2.getClass()     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            java.lang.Class r4 = r4.getComponentType()     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            java.lang.Object r0 = java.lang.reflect.Array.newInstance(r4, r0)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            java.lang.Object[] r0 = (java.lang.Object[]) r0     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            java.lang.System.arraycopy(r2, r5, r0, r6, r3)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            java.lang.String[] r0 = (java.lang.String[]) r0     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            com.tkay.core.common.res.a.b.a(r7, r0)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            goto L54
        Lcb:
            java.lang.ArrayIndexOutOfBoundsException r0 = new java.lang.ArrayIndexOutOfBoundsException     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            r0.<init>()     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            throw r0     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
        Ld1:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            r0.<init>()     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            throw r0     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
        Ld7:
            r3 = r2[r6]     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            java.lang.String r8 = "DIRTY"
            boolean r3 = r3.equals(r8)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            if (r3 == 0) goto Lee
            int r3 = r2.length     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            if (r3 != r5) goto Lee
            com.tkay.core.common.res.a$a r0 = new com.tkay.core.common.res.a$a     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            r0.<init>(r9, r7, r6)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            com.tkay.core.common.res.a.b.a(r7, r0)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            goto L54
        Lee:
            r3 = r2[r6]     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            java.lang.String r6 = "READ"
            boolean r3 = r3.equals(r6)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            if (r3 == 0) goto Lfd
            int r2 = r2.length     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            if (r2 != r5) goto Lfd
            goto L54
        Lfd:
            java.io.IOException r2 = new java.io.IOException     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            java.lang.String r0 = r4.concat(r0)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            r2.<init>(r0)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            throw r2     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
        L10b:
            java.io.IOException r2 = new java.io.IOException     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            java.lang.String r0 = r4.concat(r0)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            r2.<init>(r0)     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
            throw r2     // Catch: java.io.EOFException -> L119 java.lang.Throwable -> L148
        L119:
            a(r1)
            return
        L11d:
            java.io.IOException r4 = new java.io.IOException     // Catch: java.lang.Throwable -> L148
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L148
            java.lang.String r8 = "unexpected journal header: ["
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L148
            r7.append(r2)     // Catch: java.lang.Throwable -> L148
            r7.append(r0)     // Catch: java.lang.Throwable -> L148
            r7.append(r3)     // Catch: java.lang.Throwable -> L148
            r7.append(r0)     // Catch: java.lang.Throwable -> L148
            r7.append(r5)     // Catch: java.lang.Throwable -> L148
            r7.append(r0)     // Catch: java.lang.Throwable -> L148
            r7.append(r6)     // Catch: java.lang.Throwable -> L148
            java.lang.String r0 = "]"
            r7.append(r0)     // Catch: java.lang.Throwable -> L148
            java.lang.String r0 = r7.toString()     // Catch: java.lang.Throwable -> L148
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L148
            throw r4     // Catch: java.lang.Throwable -> L148
        L148:
            r0 = move-exception
            a(r1)
            throw r0
    }

    static void b(com.tkay.core.common.res.a r0) {
            r0.l()
            return
    }

    private static void b(java.io.File r1) {
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

    private static java.lang.String c(java.io.InputStream r2) {
            java.io.InputStreamReader r0 = new java.io.InputStreamReader
            java.nio.charset.Charset r1 = com.tkay.core.common.res.a.j
            r0.<init>(r2, r1)
            java.lang.String r2 = a(r0)
            return r2
    }

    private void c() {
            r8 = this;
            java.io.File r0 = r8.n
            b(r0)
            java.util.LinkedHashMap<java.lang.String, com.tkay.core.common.res.a$b> r0 = r8.t
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        Lf:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L51
            java.lang.Object r1 = r0.next()
            com.tkay.core.common.res.a$b r1 = (com.tkay.core.common.res.a.b) r1
            com.tkay.core.common.res.a$a r2 = com.tkay.core.common.res.a.b.b(r1)
            r3 = 0
            if (r2 != 0) goto L34
        L22:
            int r2 = r8.q
            if (r3 >= r2) goto Lf
            long r4 = r8.r
            long[] r2 = com.tkay.core.common.res.a.b.c(r1)
            r6 = r2[r3]
            long r4 = r4 + r6
            r8.r = r4
            int r3 = r3 + 1
            goto L22
        L34:
            r2 = 0
            com.tkay.core.common.res.a.b.a(r1, r2)
        L38:
            int r2 = r8.q
            if (r3 >= r2) goto L4d
            java.io.File r2 = r1.a(r3)
            b(r2)
            java.io.File r2 = r1.b(r3)
            b(r2)
            int r3 = r3 + 1
            goto L38
        L4d:
            r0.remove()
            goto Lf
        L51:
            return
    }

    static boolean c(com.tkay.core.common.res.a r0) {
            boolean r0 = r0.h()
            return r0
    }

    private synchronized void d() {
            r7 = this;
            monitor-enter(r7)
            java.io.Writer r0 = r7.s     // Catch: java.lang.Throwable -> Lbf
            if (r0 == 0) goto La
            java.io.Writer r0 = r7.s     // Catch: java.lang.Throwable -> Lbf
            r0.close()     // Catch: java.lang.Throwable -> Lbf
        La:
            java.io.BufferedWriter r0 = new java.io.BufferedWriter     // Catch: java.lang.Throwable -> Lbf
            java.io.FileWriter r1 = new java.io.FileWriter     // Catch: java.lang.Throwable -> Lbf
            java.io.File r2 = r7.n     // Catch: java.lang.Throwable -> Lbf
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lbf
            r2 = 8192(0x2000, float:1.148E-41)
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r1 = "libcore.io.DiskLruCache"
            r0.write(r1)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r1 = "\n"
            r0.write(r1)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r1 = "1"
            r0.write(r1)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r1 = "\n"
            r0.write(r1)     // Catch: java.lang.Throwable -> Lbf
            int r1 = r7.o     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r1 = java.lang.Integer.toString(r1)     // Catch: java.lang.Throwable -> Lbf
            r0.write(r1)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r1 = "\n"
            r0.write(r1)     // Catch: java.lang.Throwable -> Lbf
            int r1 = r7.q     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r1 = java.lang.Integer.toString(r1)     // Catch: java.lang.Throwable -> Lbf
            r0.write(r1)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r1 = "\n"
            r0.write(r1)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r1 = "\n"
            r0.write(r1)     // Catch: java.lang.Throwable -> Lbf
            java.util.LinkedHashMap<java.lang.String, com.tkay.core.common.res.a$b> r1 = r7.t     // Catch: java.lang.Throwable -> Lbf
            java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> Lbf
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> Lbf
        L57:
            boolean r3 = r1.hasNext()     // Catch: java.lang.Throwable -> Lbf
            if (r3 == 0) goto La4
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Throwable -> Lbf
            com.tkay.core.common.res.a$b r3 = (com.tkay.core.common.res.a.b) r3     // Catch: java.lang.Throwable -> Lbf
            com.tkay.core.common.res.a$a r4 = com.tkay.core.common.res.a.b.b(r3)     // Catch: java.lang.Throwable -> Lbf
            r5 = 10
            if (r4 == 0) goto L84
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r6 = "DIRTY "
            r4.<init>(r6)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r3 = com.tkay.core.common.res.a.b.d(r3)     // Catch: java.lang.Throwable -> Lbf
            r4.append(r3)     // Catch: java.lang.Throwable -> Lbf
            r4.append(r5)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> Lbf
            r0.write(r3)     // Catch: java.lang.Throwable -> Lbf
            goto L57
        L84:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r6 = "CLEAN "
            r4.<init>(r6)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r6 = com.tkay.core.common.res.a.b.d(r3)     // Catch: java.lang.Throwable -> Lbf
            r4.append(r6)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r3 = r3.a()     // Catch: java.lang.Throwable -> Lbf
            r4.append(r3)     // Catch: java.lang.Throwable -> Lbf
            r4.append(r5)     // Catch: java.lang.Throwable -> Lbf
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> Lbf
            r0.write(r3)     // Catch: java.lang.Throwable -> Lbf
            goto L57
        La4:
            r0.close()     // Catch: java.lang.Throwable -> Lbf
            java.io.File r0 = r7.n     // Catch: java.lang.Throwable -> Lbf
            java.io.File r1 = r7.m     // Catch: java.lang.Throwable -> Lbf
            r0.renameTo(r1)     // Catch: java.lang.Throwable -> Lbf
            java.io.BufferedWriter r0 = new java.io.BufferedWriter     // Catch: java.lang.Throwable -> Lbf
            java.io.FileWriter r1 = new java.io.FileWriter     // Catch: java.lang.Throwable -> Lbf
            java.io.File r3 = r7.m     // Catch: java.lang.Throwable -> Lbf
            r4 = 1
            r1.<init>(r3, r4)     // Catch: java.lang.Throwable -> Lbf
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> Lbf
            r7.s = r0     // Catch: java.lang.Throwable -> Lbf
            monitor-exit(r7)
            return
        Lbf:
            r0 = move-exception
            monitor-exit(r7)
            throw r0
    }

    static void d(com.tkay.core.common.res.a r0) {
            r0.d()
            return
    }

    private void d(java.lang.String r8) {
            r7 = this;
            java.lang.String r0 = " "
            java.lang.String[] r0 = r8.split(r0)
            int r1 = r0.length
            java.lang.String r2 = "unexpected journal line: "
            r3 = 2
            if (r1 < r3) goto Laf
            r1 = 1
            r1 = r0[r1]
            r4 = 0
            r5 = r0[r4]
            java.lang.String r6 = "REMOVE"
            boolean r5 = r5.equals(r6)
            if (r5 == 0) goto L23
            int r5 = r0.length
            if (r5 != r3) goto L23
            java.util.LinkedHashMap<java.lang.String, com.tkay.core.common.res.a$b> r8 = r7.t
            r8.remove(r1)
            return
        L23:
            java.util.LinkedHashMap<java.lang.String, com.tkay.core.common.res.a$b> r5 = r7.t
            java.lang.Object r5 = r5.get(r1)
            com.tkay.core.common.res.a$b r5 = (com.tkay.core.common.res.a.b) r5
            if (r5 != 0) goto L37
            com.tkay.core.common.res.a$b r5 = new com.tkay.core.common.res.a$b
            r5.<init>(r7, r1, r4)
            java.util.LinkedHashMap<java.lang.String, com.tkay.core.common.res.a$b> r6 = r7.t
            r6.put(r1, r5)
        L37:
            r1 = r0[r4]
            java.lang.String r6 = "CLEAN"
            boolean r1 = r1.equals(r6)
            if (r1 == 0) goto L7d
            int r1 = r0.length
            int r6 = r7.q
            int r6 = r6 + r3
            if (r1 != r6) goto L7d
            com.tkay.core.common.res.a.b.a(r5)
            r8 = 0
            com.tkay.core.common.res.a.b.a(r5, r8)
            int r8 = r0.length
            int r1 = r0.length
            if (r3 > r8) goto L77
            if (r3 > r1) goto L71
            int r8 = r8 - r3
            int r1 = r1 - r3
            int r1 = java.lang.Math.min(r8, r1)
            java.lang.Class r2 = r0.getClass()
            java.lang.Class r2 = r2.getComponentType()
            java.lang.Object r8 = java.lang.reflect.Array.newInstance(r2, r8)
            java.lang.Object[] r8 = (java.lang.Object[]) r8
            java.lang.System.arraycopy(r0, r3, r8, r4, r1)
            java.lang.String[] r8 = (java.lang.String[]) r8
            com.tkay.core.common.res.a.b.a(r5, r8)
            return
        L71:
            java.lang.ArrayIndexOutOfBoundsException r8 = new java.lang.ArrayIndexOutOfBoundsException
            r8.<init>()
            throw r8
        L77:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            r8.<init>()
            throw r8
        L7d:
            r1 = r0[r4]
            java.lang.String r6 = "DIRTY"
            boolean r1 = r1.equals(r6)
            if (r1 == 0) goto L93
            int r1 = r0.length
            if (r1 != r3) goto L93
            com.tkay.core.common.res.a$a r8 = new com.tkay.core.common.res.a$a
            r8.<init>(r7, r5, r4)
            com.tkay.core.common.res.a.b.a(r5, r8)
            return
        L93:
            r1 = r0[r4]
            java.lang.String r4 = "READ"
            boolean r1 = r1.equals(r4)
            if (r1 == 0) goto La1
            int r0 = r0.length
            if (r0 != r3) goto La1
            return
        La1:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r8 = java.lang.String.valueOf(r8)
            java.lang.String r8 = r2.concat(r8)
            r0.<init>(r8)
            throw r0
        Laf:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r8 = java.lang.String.valueOf(r8)
            java.lang.String r8 = r2.concat(r8)
            r0.<init>(r8)
            throw r0
    }

    static int e(com.tkay.core.common.res.a r1) {
            r0 = 0
            r1.u = r0
            return r0
    }

    private java.io.File e() {
            r1 = this;
            java.io.File r0 = r1.l
            return r0
    }

    private static void e(java.lang.String r3) {
            java.lang.String r0 = " "
            boolean r0 = r3.contains(r0)
            if (r0 != 0) goto L19
            java.lang.String r0 = "\n"
            boolean r0 = r3.contains(r0)
            if (r0 != 0) goto L19
            java.lang.String r0 = "\r"
            boolean r0 = r3.contains(r0)
            if (r0 != 0) goto L19
            return
        L19:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "keys must not contain spaces or newlines: \""
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r3 = "\""
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    static int f(com.tkay.core.common.res.a r0) {
            int r0 = r0.q
            return r0
    }

    private long f() {
            r2 = this;
            long r0 = r2.p
            return r0
    }

    private synchronized long g() {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.r     // Catch: java.lang.Throwable -> L5
            monitor-exit(r2)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    static java.io.File g(com.tkay.core.common.res.a r0) {
            java.io.File r0 = r0.l
            return r0
    }

    private boolean h() {
            r2 = this;
            int r0 = r2.u
            r1 = 2000(0x7d0, float:2.803E-42)
            if (r0 < r1) goto L10
            java.util.LinkedHashMap<java.lang.String, com.tkay.core.common.res.a$b> r1 = r2.t
            int r1 = r1.size()
            if (r0 < r1) goto L10
            r0 = 1
            return r0
        L10:
            r0 = 0
            return r0
    }

    private boolean i() {
            r1 = this;
            java.io.Writer r0 = r1.s
            if (r0 != 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    private void j() {
            r2 = this;
            java.io.Writer r0 = r2.s
            if (r0 == 0) goto L5
            return
        L5:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "cache is closed"
            r0.<init>(r1)
            throw r0
    }

    private synchronized void k() {
            r1 = this;
            monitor-enter(r1)
            r1.j()     // Catch: java.lang.Throwable -> Le
            r1.l()     // Catch: java.lang.Throwable -> Le
            java.io.Writer r0 = r1.s     // Catch: java.lang.Throwable -> Le
            r0.flush()     // Catch: java.lang.Throwable -> Le
            monitor-exit(r1)
            return
        Le:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    private void l() {
            r4 = this;
        L0:
            long r0 = r4.r
            long r2 = r4.p
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L22
            java.util.LinkedHashMap<java.lang.String, com.tkay.core.common.res.a$b> r0 = r4.t
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
            java.lang.Object r0 = r0.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r0 = r0.getKey()
            java.lang.String r0 = (java.lang.String) r0
            r4.c(r0)
            goto L0
        L22:
            return
    }

    private void m() {
            r1 = this;
            r1.close()
            java.io.File r0 = r1.l
            a(r0)
            return
    }

    public final synchronized com.tkay.core.common.res.a.c a(java.lang.String r11) {
            r10 = this;
            monitor-enter(r10)
            r10.j()     // Catch: java.lang.Throwable -> L74
            e(r11)     // Catch: java.lang.Throwable -> L74
            java.util.LinkedHashMap<java.lang.String, com.tkay.core.common.res.a$b> r0 = r10.t     // Catch: java.lang.Throwable -> L74
            java.lang.Object r0 = r0.get(r11)     // Catch: java.lang.Throwable -> L74
            com.tkay.core.common.res.a$b r0 = (com.tkay.core.common.res.a.b) r0     // Catch: java.lang.Throwable -> L74
            r1 = 0
            if (r0 != 0) goto L14
            monitor-exit(r10)
            return r1
        L14:
            boolean r2 = com.tkay.core.common.res.a.b.e(r0)     // Catch: java.lang.Throwable -> L74
            if (r2 != 0) goto L1c
            monitor-exit(r10)
            return r1
        L1c:
            int r2 = r10.q     // Catch: java.lang.Throwable -> L74
            java.io.InputStream[] r8 = new java.io.InputStream[r2]     // Catch: java.lang.Throwable -> L74
            r2 = 0
        L21:
            int r3 = r10.q     // Catch: java.io.FileNotFoundException -> L72 java.lang.Throwable -> L74
            if (r2 >= r3) goto L33
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.io.FileNotFoundException -> L72 java.lang.Throwable -> L74
            java.io.File r4 = r0.a(r2)     // Catch: java.io.FileNotFoundException -> L72 java.lang.Throwable -> L74
            r3.<init>(r4)     // Catch: java.io.FileNotFoundException -> L72 java.lang.Throwable -> L74
            r8[r2] = r3     // Catch: java.io.FileNotFoundException -> L72 java.lang.Throwable -> L74
            int r2 = r2 + 1
            goto L21
        L33:
            int r1 = r10.u     // Catch: java.lang.Throwable -> L74
            int r1 = r1 + 1
            r10.u = r1     // Catch: java.lang.Throwable -> L74
            java.io.Writer r1 = r10.s     // Catch: java.lang.Throwable -> L74
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L74
            java.lang.String r3 = "READ "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L74
            r2.append(r11)     // Catch: java.lang.Throwable -> L74
            r3 = 10
            r2.append(r3)     // Catch: java.lang.Throwable -> L74
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L74
            r1.append(r2)     // Catch: java.lang.Throwable -> L74
            boolean r1 = r10.h()     // Catch: java.lang.Throwable -> L74
            if (r1 == 0) goto L5e
            java.util.concurrent.ExecutorService r1 = r10.w     // Catch: java.lang.Throwable -> L74
            java.util.concurrent.Callable<java.lang.Void> r2 = r10.x     // Catch: java.lang.Throwable -> L74
            r1.submit(r2)     // Catch: java.lang.Throwable -> L74
        L5e:
            java.io.Writer r1 = r10.s     // Catch: java.lang.Throwable -> L74
            r1.flush()     // Catch: java.lang.Throwable -> L74
            com.tkay.core.common.res.a$c r1 = new com.tkay.core.common.res.a$c     // Catch: java.lang.Throwable -> L74
            long r6 = com.tkay.core.common.res.a.b.f(r0)     // Catch: java.lang.Throwable -> L74
            r9 = 0
            r3 = r1
            r4 = r10
            r5 = r11
            r3.<init>(r4, r5, r6, r8, r9)     // Catch: java.lang.Throwable -> L74
            monitor-exit(r10)
            return r1
        L72:
            monitor-exit(r10)
            return r1
        L74:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
    }

    public final com.tkay.core.common.res.a.a b(java.lang.String r3) {
            r2 = this;
            r0 = -1
            com.tkay.core.common.res.a$a r3 = r2.a(r3, r0)
            return r3
    }

    public final synchronized boolean c(java.lang.String r8) {
            r7 = this;
            monitor-enter(r7)
            r7.j()     // Catch: java.lang.Throwable -> L81
            e(r8)     // Catch: java.lang.Throwable -> L81
            java.util.LinkedHashMap<java.lang.String, com.tkay.core.common.res.a$b> r0 = r7.t     // Catch: java.lang.Throwable -> L81
            java.lang.Object r0 = r0.get(r8)     // Catch: java.lang.Throwable -> L81
            com.tkay.core.common.res.a$b r0 = (com.tkay.core.common.res.a.b) r0     // Catch: java.lang.Throwable -> L81
            r1 = 0
            if (r0 == 0) goto L7f
            com.tkay.core.common.res.a$a r2 = com.tkay.core.common.res.a.b.b(r0)     // Catch: java.lang.Throwable -> L81
            if (r2 == 0) goto L19
            goto L7f
        L19:
            int r2 = r7.q     // Catch: java.lang.Throwable -> L81
            if (r1 >= r2) goto L4d
            java.io.File r2 = r0.a(r1)     // Catch: java.lang.Throwable -> L81
            boolean r3 = r2.delete()     // Catch: java.lang.Throwable -> L81
            if (r3 == 0) goto L3d
            long r2 = r7.r     // Catch: java.lang.Throwable -> L81
            long[] r4 = com.tkay.core.common.res.a.b.c(r0)     // Catch: java.lang.Throwable -> L81
            r5 = r4[r1]     // Catch: java.lang.Throwable -> L81
            long r2 = r2 - r5
            r7.r = r2     // Catch: java.lang.Throwable -> L81
            long[] r2 = com.tkay.core.common.res.a.b.c(r0)     // Catch: java.lang.Throwable -> L81
            r3 = 0
            r2[r1] = r3     // Catch: java.lang.Throwable -> L81
            int r1 = r1 + 1
            goto L19
        L3d:
            java.io.IOException r8 = new java.io.IOException     // Catch: java.lang.Throwable -> L81
            java.lang.String r0 = "failed to delete "
            java.lang.String r1 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L81
            java.lang.String r0 = r0.concat(r1)     // Catch: java.lang.Throwable -> L81
            r8.<init>(r0)     // Catch: java.lang.Throwable -> L81
            throw r8     // Catch: java.lang.Throwable -> L81
        L4d:
            int r0 = r7.u     // Catch: java.lang.Throwable -> L81
            r1 = 1
            int r0 = r0 + r1
            r7.u = r0     // Catch: java.lang.Throwable -> L81
            java.io.Writer r0 = r7.s     // Catch: java.lang.Throwable -> L81
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L81
            java.lang.String r3 = "REMOVE "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L81
            r2.append(r8)     // Catch: java.lang.Throwable -> L81
            r3 = 10
            r2.append(r3)     // Catch: java.lang.Throwable -> L81
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L81
            r0.append(r2)     // Catch: java.lang.Throwable -> L81
            java.util.LinkedHashMap<java.lang.String, com.tkay.core.common.res.a$b> r0 = r7.t     // Catch: java.lang.Throwable -> L81
            r0.remove(r8)     // Catch: java.lang.Throwable -> L81
            boolean r8 = r7.h()     // Catch: java.lang.Throwable -> L81
            if (r8 == 0) goto L7d
            java.util.concurrent.ExecutorService r8 = r7.w     // Catch: java.lang.Throwable -> L81
            java.util.concurrent.Callable<java.lang.Void> r0 = r7.x     // Catch: java.lang.Throwable -> L81
            r8.submit(r0)     // Catch: java.lang.Throwable -> L81
        L7d:
            monitor-exit(r7)
            return r1
        L7f:
            monitor-exit(r7)
            return r1
        L81:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    @Override
    public final synchronized void close() {
            r3 = this;
            monitor-enter(r3)
            java.io.Writer r0 = r3.s     // Catch: java.lang.Throwable -> L3d
            if (r0 != 0) goto L7
            monitor-exit(r3)
            return
        L7:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L3d
            java.util.LinkedHashMap<java.lang.String, com.tkay.core.common.res.a$b> r1 = r3.t     // Catch: java.lang.Throwable -> L3d
            java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> L3d
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L3d
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L3d
        L16:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L3d
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L3d
            com.tkay.core.common.res.a$b r1 = (com.tkay.core.common.res.a.b) r1     // Catch: java.lang.Throwable -> L3d
            com.tkay.core.common.res.a$a r2 = com.tkay.core.common.res.a.b.b(r1)     // Catch: java.lang.Throwable -> L3d
            if (r2 == 0) goto L16
            com.tkay.core.common.res.a$a r1 = com.tkay.core.common.res.a.b.b(r1)     // Catch: java.lang.Throwable -> L3d
            r1.b()     // Catch: java.lang.Throwable -> L3d
            goto L16
        L30:
            r3.l()     // Catch: java.lang.Throwable -> L3d
            java.io.Writer r0 = r3.s     // Catch: java.lang.Throwable -> L3d
            r0.close()     // Catch: java.lang.Throwable -> L3d
            r0 = 0
            r3.s = r0     // Catch: java.lang.Throwable -> L3d
            monitor-exit(r3)
            return
        L3d:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }
}
