package com.kwad.sdk.core.diskcache.a;

public final class a implements java.io.Closeable {
    static final java.util.regex.Pattern amU = null;
    private static final java.io.OutputStream anj = null;
    private final java.io.File amV;
    private final java.io.File amW;
    private final java.io.File amX;
    private final java.io.File amY;
    private final int amZ;
    private int ana;
    private final int anb;
    private int anc;
    private java.io.Writer and;
    private final java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.diskcache.a.a.b> ane;
    private int anf;
    private long ang;
    final java.util.concurrent.ThreadPoolExecutor anh;
    private final java.util.concurrent.Callable<java.lang.Void> ani;
    private long maxSize;
    private long size;




    public final class a {
        final com.kwad.sdk.core.diskcache.a.a ank;
        private final com.kwad.sdk.core.diskcache.a.a.b anl;
        private final boolean[] anm;
        private boolean ann;
        private boolean ano;

        class a extends java.io.FilterOutputStream {
            final com.kwad.sdk.core.diskcache.a.a.a anp;

            private a(com.kwad.sdk.core.diskcache.a.a.a r1, java.io.OutputStream r2) {
                    r0 = this;
                    r0.anp = r1
                    r0.<init>(r2)
                    return
            }

            a(com.kwad.sdk.core.diskcache.a.a.a r1, java.io.OutputStream r2, byte r3) {
                    r0 = this;
                    r0.<init>(r1, r2)
                    return
            }

            @Override
            public final void close() {
                    r2 = this;
                    java.io.OutputStream r0 = r2.out     // Catch: java.io.IOException -> L6
                    r0.close()     // Catch: java.io.IOException -> L6
                    return
                L6:
                    com.kwad.sdk.core.diskcache.a.a$a r0 = r2.anp
                    r1 = 1
                    com.kwad.sdk.core.diskcache.a.a.a.b(r0, r1)
                    return
            }

            @Override
            public final void flush() {
                    r2 = this;
                    java.io.OutputStream r0 = r2.out     // Catch: java.io.IOException -> L6
                    r0.flush()     // Catch: java.io.IOException -> L6
                    return
                L6:
                    com.kwad.sdk.core.diskcache.a.a$a r0 = r2.anp
                    r1 = 1
                    com.kwad.sdk.core.diskcache.a.a.a.b(r0, r1)
                    return
            }

            @Override
            public final void write(int r2) {
                    r1 = this;
                    java.io.OutputStream r0 = r1.out     // Catch: java.io.IOException -> L6
                    r0.write(r2)     // Catch: java.io.IOException -> L6
                    return
                L6:
                    com.kwad.sdk.core.diskcache.a.a$a r2 = r1.anp
                    r0 = 1
                    com.kwad.sdk.core.diskcache.a.a.a.b(r2, r0)
                    return
            }

            @Override
            public final void write(byte[] r2, int r3, int r4) {
                    r1 = this;
                    java.io.OutputStream r0 = r1.out     // Catch: java.io.IOException -> L6
                    r0.write(r2, r3, r4)     // Catch: java.io.IOException -> L6
                    return
                L6:
                    com.kwad.sdk.core.diskcache.a.a$a r2 = r1.anp
                    r3 = 1
                    com.kwad.sdk.core.diskcache.a.a.a.b(r2, r3)
                    return
            }
        }

        private a(com.kwad.sdk.core.diskcache.a.a r1, com.kwad.sdk.core.diskcache.a.a.b r2) {
                r0 = this;
                r0.ank = r1
                r0.<init>()
                r0.anl = r2
                boolean r2 = com.kwad.sdk.core.diskcache.a.a.b.d(r2)
                if (r2 == 0) goto Lf
                r1 = 0
                goto L15
            Lf:
                int r1 = com.kwad.sdk.core.diskcache.a.a.f(r1)
                boolean[] r1 = new boolean[r1]
            L15:
                r0.anm = r1
                return
        }

        a(com.kwad.sdk.core.diskcache.a.a r1, com.kwad.sdk.core.diskcache.a.a.b r2, byte r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        static com.kwad.sdk.core.diskcache.a.a.b a(com.kwad.sdk.core.diskcache.a.a.a r0) {
                com.kwad.sdk.core.diskcache.a.a$b r0 = r0.anl
                return r0
        }

        static boolean b(com.kwad.sdk.core.diskcache.a.a.a r0, boolean r1) {
                r1 = 1
                r0.ann = r1
                return r1
        }

        static boolean[] b(com.kwad.sdk.core.diskcache.a.a.a r0) {
                boolean[] r0 = r0.anm
                return r0
        }

        public final void abort() {
                r2 = this;
                com.kwad.sdk.core.diskcache.a.a r0 = r2.ank
                r1 = 0
                com.kwad.sdk.core.diskcache.a.a.a(r0, r2, r1)
                return
        }

        public final java.io.OutputStream bT(int r4) {
                r3 = this;
                com.kwad.sdk.core.diskcache.a.a r4 = r3.ank
                monitor-enter(r4)
                com.kwad.sdk.core.diskcache.a.a$b r0 = r3.anl     // Catch: java.lang.Throwable -> L46
                com.kwad.sdk.core.diskcache.a.a$a r0 = com.kwad.sdk.core.diskcache.a.a.b.a(r0)     // Catch: java.lang.Throwable -> L46
                if (r0 != r3) goto L40
                com.kwad.sdk.core.diskcache.a.a$b r0 = r3.anl     // Catch: java.lang.Throwable -> L46
                boolean r0 = com.kwad.sdk.core.diskcache.a.a.b.d(r0)     // Catch: java.lang.Throwable -> L46
                r1 = 0
                if (r0 != 0) goto L19
                boolean[] r0 = r3.anm     // Catch: java.lang.Throwable -> L46
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.Throwable -> L46
            L19:
                com.kwad.sdk.core.diskcache.a.a$b r0 = r3.anl     // Catch: java.lang.Throwable -> L46
                java.io.File r0 = r0.bV(r1)     // Catch: java.lang.Throwable -> L46
                java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.io.FileNotFoundException -> L25 java.lang.Throwable -> L46
                r2.<init>(r0)     // Catch: java.io.FileNotFoundException -> L25 java.lang.Throwable -> L46
                goto L33
            L25:
                com.kwad.sdk.core.diskcache.a.a r2 = r3.ank     // Catch: java.lang.Throwable -> L46
                java.io.File r2 = com.kwad.sdk.core.diskcache.a.a.g(r2)     // Catch: java.lang.Throwable -> L46
                r2.mkdirs()     // Catch: java.lang.Throwable -> L46
                java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.io.FileNotFoundException -> L3a java.lang.Throwable -> L46
                r2.<init>(r0)     // Catch: java.io.FileNotFoundException -> L3a java.lang.Throwable -> L46
            L33:
                com.kwad.sdk.core.diskcache.a.a$a$a r0 = new com.kwad.sdk.core.diskcache.a.a$a$a     // Catch: java.lang.Throwable -> L46
                r0.<init>(r3, r2, r1)     // Catch: java.lang.Throwable -> L46
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L46
                return r0
            L3a:
                java.io.OutputStream r0 = com.kwad.sdk.core.diskcache.a.a.Ar()     // Catch: java.lang.Throwable -> L46
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L46
                return r0
            L40:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L46
                r0.<init>()     // Catch: java.lang.Throwable -> L46
                throw r0     // Catch: java.lang.Throwable -> L46
            L46:
                r0 = move-exception
                monitor-exit(r4)     // Catch: java.lang.Throwable -> L46
                throw r0
        }

        public final void commit() {
                r3 = this;
                boolean r0 = r3.ann
                r1 = 1
                if (r0 == 0) goto L17
                com.kwad.sdk.core.diskcache.a.a r0 = r3.ank
                r2 = 0
                com.kwad.sdk.core.diskcache.a.a.a(r0, r3, r2)
                com.kwad.sdk.core.diskcache.a.a r0 = r3.ank
                com.kwad.sdk.core.diskcache.a.a$b r2 = r3.anl
                java.lang.String r2 = com.kwad.sdk.core.diskcache.a.a.b.c(r2)
                r0.remove(r2)
                goto L1c
            L17:
                com.kwad.sdk.core.diskcache.a.a r0 = r3.ank
                com.kwad.sdk.core.diskcache.a.a.a(r0, r3, r1)
            L1c:
                r3.ano = r1
                return
        }
    }

    final class b {
        final com.kwad.sdk.core.diskcache.a.a ank;
        private final long[] anq;
        private boolean anr;
        private com.kwad.sdk.core.diskcache.a.a.a ans;
        private long ant;
        private final java.lang.String key;

        private b(com.kwad.sdk.core.diskcache.a.a r1, java.lang.String r2) {
                r0 = this;
                r0.ank = r1
                r0.<init>()
                r0.key = r2
                int r1 = com.kwad.sdk.core.diskcache.a.a.f(r1)
                long[] r1 = new long[r1]
                r0.anq = r1
                return
        }

        b(com.kwad.sdk.core.diskcache.a.a r1, java.lang.String r2, byte r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        static long a(com.kwad.sdk.core.diskcache.a.a.b r0, long r1) {
                r0.ant = r1
                return r1
        }

        static com.kwad.sdk.core.diskcache.a.a.a a(com.kwad.sdk.core.diskcache.a.a.b r0) {
                com.kwad.sdk.core.diskcache.a.a$a r0 = r0.ans
                return r0
        }

        static com.kwad.sdk.core.diskcache.a.a.a a(com.kwad.sdk.core.diskcache.a.a.b r0, com.kwad.sdk.core.diskcache.a.a.a r1) {
                r0.ans = r1
                return r1
        }

        static void a(com.kwad.sdk.core.diskcache.a.a.b r0, java.lang.String[] r1) {
                r0.b(r1)
                return
        }

        static boolean a(com.kwad.sdk.core.diskcache.a.a.b r0, boolean r1) {
                r1 = 1
                r0.anr = r1
                return r1
        }

        private void b(java.lang.String[] r5) {
                r4 = this;
                int r0 = r5.length
                com.kwad.sdk.core.diskcache.a.a r1 = r4.ank
                int r1 = com.kwad.sdk.core.diskcache.a.a.f(r1)
                if (r0 != r1) goto L20
                r0 = 0
            La:
                int r1 = r5.length     // Catch: java.lang.NumberFormatException -> L1b
                if (r0 >= r1) goto L1a
                long[] r1 = r4.anq     // Catch: java.lang.NumberFormatException -> L1b
                r2 = r5[r0]     // Catch: java.lang.NumberFormatException -> L1b
                long r2 = java.lang.Long.parseLong(r2)     // Catch: java.lang.NumberFormatException -> L1b
                r1[r0] = r2     // Catch: java.lang.NumberFormatException -> L1b
                int r0 = r0 + 1
                goto La
            L1a:
                return
            L1b:
                java.io.IOException r5 = c(r5)
                throw r5
            L20:
                java.io.IOException r5 = c(r5)
                throw r5
        }

        static long[] b(com.kwad.sdk.core.diskcache.a.a.b r0) {
                long[] r0 = r0.anq
                return r0
        }

        private static java.io.IOException c(java.lang.String[] r3) {
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

        static java.lang.String c(com.kwad.sdk.core.diskcache.a.a.b r0) {
                java.lang.String r0 = r0.key
                return r0
        }

        static boolean d(com.kwad.sdk.core.diskcache.a.a.b r0) {
                boolean r0 = r0.anr
                return r0
        }

        static long e(com.kwad.sdk.core.diskcache.a.a.b r2) {
                long r0 = r2.ant
                return r0
        }

        public final java.lang.String As() {
                r7 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                long[] r1 = r7.anq
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

        public final java.io.File bU(int r5) {
                r4 = this;
                java.io.File r0 = new java.io.File
                com.kwad.sdk.core.diskcache.a.a r1 = r4.ank
                java.io.File r1 = com.kwad.sdk.core.diskcache.a.a.g(r1)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = r4.key
                r2.append(r3)
                r2.append(r5)
                java.lang.String r5 = r2.toString()
                r0.<init>(r1, r5)
                return r0
        }

        public final java.io.File bV(int r5) {
                r4 = this;
                java.io.File r0 = new java.io.File
                com.kwad.sdk.core.diskcache.a.a r1 = r4.ank
                java.io.File r1 = com.kwad.sdk.core.diskcache.a.a.g(r1)
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = r4.key
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
        final com.kwad.sdk.core.diskcache.a.a ank;
        private final long[] anq;
        private final long ant;
        private java.io.File[] anu;
        private final java.io.InputStream[] anv;
        private final java.lang.String key;

        private c(com.kwad.sdk.core.diskcache.a.a r1, java.lang.String r2, long r3, java.io.File[] r5, java.io.InputStream[] r6, long[] r7) {
                r0 = this;
                r0.ank = r1
                r0.<init>()
                r0.key = r2
                r0.ant = r3
                r0.anu = r5
                r0.anv = r6
                r0.anq = r7
                return
        }

        c(com.kwad.sdk.core.diskcache.a.a r1, java.lang.String r2, long r3, java.io.File[] r5, java.io.InputStream[] r6, long[] r7, byte r8) {
                r0 = this;
                r0.<init>(r1, r2, r3, r5, r6, r7)
                return
        }

        public final java.io.File bW(int r2) {
                r1 = this;
                java.io.File[] r2 = r1.anu
                r0 = 0
                r2 = r2[r0]
                return r2
        }

        @Override
        public final void close() {
                r4 = this;
                java.io.InputStream[] r0 = r4.anv
                int r1 = r0.length
                r2 = 0
            L4:
                if (r2 >= r1) goto Le
                r3 = r0[r2]
                com.kwad.sdk.crash.utils.b.closeQuietly(r3)
                int r2 = r2 + 1
                goto L4
            Le:
                return
        }
    }

    static {
            java.lang.String r0 = "[a-z0-9_-]{1,64}"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.kwad.sdk.core.diskcache.a.a.amU = r0
            com.kwad.sdk.core.diskcache.a.a$3 r0 = new com.kwad.sdk.core.diskcache.a.a$3
            r0.<init>()
            com.kwad.sdk.core.diskcache.a.a.anj = r0
            return
    }

    private a(java.io.File r17, int r18, int r19, long r20, int r22) {
            r16 = this;
            r0 = r16
            r1 = r17
            r16.<init>()
            r2 = 0
            r0.size = r2
            r4 = 0
            r0.anc = r4
            java.util.LinkedHashMap r5 = new java.util.LinkedHashMap
            r6 = 1061158912(0x3f400000, float:0.75)
            r7 = 1
            r5.<init>(r4, r6, r7)
            r0.ane = r5
            r0.ang = r2
            java.util.concurrent.ThreadPoolExecutor r2 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r13 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r14 = new java.util.concurrent.LinkedBlockingQueue
            r14.<init>()
            com.kwad.sdk.core.diskcache.a.a$1 r15 = new com.kwad.sdk.core.diskcache.a.a$1
            r15.<init>(r0)
            r9 = 0
            r10 = 1
            r11 = 60
            r8 = r2
            r8.<init>(r9, r10, r11, r13, r14, r15)
            r0.anh = r2
            com.kwad.sdk.core.diskcache.a.a$2 r2 = new com.kwad.sdk.core.diskcache.a.a$2
            r2.<init>(r0)
            r0.ani = r2
            r0.amV = r1
            r2 = r18
            r0.amZ = r2
            java.io.File r2 = new java.io.File
            java.lang.String r3 = "journal"
            r2.<init>(r1, r3)
            r0.amW = r2
            java.io.File r2 = new java.io.File
            java.lang.String r3 = "journal.tmp"
            r2.<init>(r1, r3)
            r0.amX = r2
            java.io.File r2 = new java.io.File
            java.lang.String r3 = "journal.bkp"
            r2.<init>(r1, r3)
            r0.amY = r2
            r1 = r19
            r0.anb = r1
            r1 = r20
            r0.maxSize = r1
            r1 = r22
            r0.ana = r1
            return
    }

    private void Al() {
            r9 = this;
            java.lang.String r0 = ", "
            com.kwad.sdk.core.diskcache.a.b r1 = new com.kwad.sdk.core.diskcache.a.b
            java.io.FileInputStream r2 = new java.io.FileInputStream
            java.io.File r3 = r9.amW
            r2.<init>(r3)
            java.nio.charset.Charset r3 = com.kwad.sdk.crash.utils.a.US_ASCII
            r1.<init>(r2, r3)
            java.lang.String r2 = r1.readLine()     // Catch: java.lang.Throwable -> L97
            java.lang.String r3 = r1.readLine()     // Catch: java.lang.Throwable -> L97
            java.lang.String r4 = r1.readLine()     // Catch: java.lang.Throwable -> L97
            java.lang.String r5 = r1.readLine()     // Catch: java.lang.Throwable -> L97
            java.lang.String r6 = r1.readLine()     // Catch: java.lang.Throwable -> L97
            java.lang.String r7 = "libcore.io.DiskLruCache"
            boolean r7 = r7.equals(r2)     // Catch: java.lang.Throwable -> L97
            if (r7 == 0) goto L6c
            java.lang.String r7 = "1"
            boolean r7 = r7.equals(r3)     // Catch: java.lang.Throwable -> L97
            if (r7 == 0) goto L6c
            int r7 = r9.amZ     // Catch: java.lang.Throwable -> L97
            java.lang.String r7 = java.lang.Integer.toString(r7)     // Catch: java.lang.Throwable -> L97
            boolean r4 = r7.equals(r4)     // Catch: java.lang.Throwable -> L97
            if (r4 == 0) goto L6c
            int r4 = r9.anb     // Catch: java.lang.Throwable -> L97
            java.lang.String r4 = java.lang.Integer.toString(r4)     // Catch: java.lang.Throwable -> L97
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Throwable -> L97
            if (r4 == 0) goto L6c
            java.lang.String r4 = ""
            boolean r4 = r4.equals(r6)     // Catch: java.lang.Throwable -> L97
            if (r4 == 0) goto L6c
            r0 = 0
        L55:
            java.lang.String r2 = r1.readLine()     // Catch: java.io.EOFException -> L5f java.lang.Throwable -> L97
            r9.cz(r2)     // Catch: java.io.EOFException -> L5f java.lang.Throwable -> L97
            int r0 = r0 + 1
            goto L55
        L5f:
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.diskcache.a.a$b> r2 = r9.ane     // Catch: java.lang.Throwable -> L97
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L97
            int r0 = r0 - r2
            r9.anf = r0     // Catch: java.lang.Throwable -> L97
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return
        L6c:
            java.io.IOException r4 = new java.io.IOException     // Catch: java.lang.Throwable -> L97
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L97
            java.lang.String r8 = "unexpected journal header: ["
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L97
            r7.append(r2)     // Catch: java.lang.Throwable -> L97
            r7.append(r0)     // Catch: java.lang.Throwable -> L97
            r7.append(r3)     // Catch: java.lang.Throwable -> L97
            r7.append(r0)     // Catch: java.lang.Throwable -> L97
            r7.append(r5)     // Catch: java.lang.Throwable -> L97
            r7.append(r0)     // Catch: java.lang.Throwable -> L97
            r7.append(r6)     // Catch: java.lang.Throwable -> L97
            java.lang.String r0 = "]"
            r7.append(r0)     // Catch: java.lang.Throwable -> L97
            java.lang.String r0 = r7.toString()     // Catch: java.lang.Throwable -> L97
            r4.<init>(r0)     // Catch: java.lang.Throwable -> L97
            throw r4     // Catch: java.lang.Throwable -> L97
        L97:
            r0 = move-exception
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r0
    }

    private void Am() {
            r8 = this;
            java.io.File r0 = r8.amX
            p(r0)
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.diskcache.a.a$b> r0 = r8.ane
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        Lf:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L57
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.core.diskcache.a.a$b r1 = (com.kwad.sdk.core.diskcache.a.a.b) r1
            com.kwad.sdk.core.diskcache.a.a$a r2 = com.kwad.sdk.core.diskcache.a.a.b.a(r1)
            r3 = 0
            if (r2 != 0) goto L3a
        L22:
            int r2 = r8.anb
            if (r3 >= r2) goto Lf
            long r4 = r8.size
            long[] r2 = com.kwad.sdk.core.diskcache.a.a.b.b(r1)
            r6 = r2[r3]
            long r4 = r4 + r6
            r8.size = r4
            int r2 = r8.anc
            int r2 = r2 + 1
            r8.anc = r2
            int r3 = r3 + 1
            goto L22
        L3a:
            r2 = 0
            com.kwad.sdk.core.diskcache.a.a.b.a(r1, r2)
        L3e:
            int r2 = r8.anb
            if (r3 >= r2) goto L53
            java.io.File r2 = r1.bU(r3)
            p(r2)
            java.io.File r2 = r1.bV(r3)
            p(r2)
            int r3 = r3 + 1
            goto L3e
        L53:
            r0.remove()
            goto Lf
        L57:
            return
    }

    private synchronized void An() {
            r6 = this;
            monitor-enter(r6)
            java.io.Writer r0 = r6.and     // Catch: java.lang.Throwable -> Le2
            if (r0 == 0) goto La
            java.io.Writer r0 = r6.and     // Catch: java.lang.Throwable -> Le2
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)     // Catch: java.lang.Throwable -> Le2
        La:
            java.io.BufferedWriter r0 = new java.io.BufferedWriter     // Catch: java.lang.Throwable -> Le2
            java.io.OutputStreamWriter r1 = new java.io.OutputStreamWriter     // Catch: java.lang.Throwable -> Le2
            java.io.FileOutputStream r2 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Le2
            java.io.File r3 = r6.amX     // Catch: java.lang.Throwable -> Le2
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Le2
            java.nio.charset.Charset r3 = com.kwad.sdk.crash.utils.a.US_ASCII     // Catch: java.lang.Throwable -> Le2
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
            int r1 = r6.amZ     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r1 = java.lang.Integer.toString(r1)     // Catch: java.lang.Throwable -> Ldd
            r0.write(r1)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r1 = "\n"
            r0.write(r1)     // Catch: java.lang.Throwable -> Ldd
            int r1 = r6.anb     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r1 = java.lang.Integer.toString(r1)     // Catch: java.lang.Throwable -> Ldd
            r0.write(r1)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r1 = "\n"
            r0.write(r1)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r1 = "\n"
            r0.write(r1)     // Catch: java.lang.Throwable -> Ldd
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.diskcache.a.a$b> r1 = r6.ane     // Catch: java.lang.Throwable -> Ldd
            java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> Ldd
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> Ldd
        L5c:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> Ldd
            if (r2 == 0) goto La6
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> Ldd
            com.kwad.sdk.core.diskcache.a.a$b r2 = (com.kwad.sdk.core.diskcache.a.a.b) r2     // Catch: java.lang.Throwable -> Ldd
            com.kwad.sdk.core.diskcache.a.a$a r3 = com.kwad.sdk.core.diskcache.a.a.b.a(r2)     // Catch: java.lang.Throwable -> Ldd
            r4 = 10
            if (r3 == 0) goto L89
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r5 = "DIRTY "
            r3.<init>(r5)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = com.kwad.sdk.core.diskcache.a.a.b.c(r2)     // Catch: java.lang.Throwable -> Ldd
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
            java.lang.String r5 = com.kwad.sdk.core.diskcache.a.a.b.c(r2)     // Catch: java.lang.Throwable -> Ldd
            r3.append(r5)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = r2.As()     // Catch: java.lang.Throwable -> Ldd
            r3.append(r2)     // Catch: java.lang.Throwable -> Ldd
            r3.append(r4)     // Catch: java.lang.Throwable -> Ldd
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> Ldd
            goto L85
        La6:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)     // Catch: java.lang.Throwable -> Le2
            java.io.File r0 = r6.amW     // Catch: java.lang.Throwable -> Le2
            boolean r0 = r0.exists()     // Catch: java.lang.Throwable -> Le2
            r1 = 1
            if (r0 == 0) goto Lb9
            java.io.File r0 = r6.amW     // Catch: java.lang.Throwable -> Le2
            java.io.File r2 = r6.amY     // Catch: java.lang.Throwable -> Le2
            a(r0, r2, r1)     // Catch: java.lang.Throwable -> Le2
        Lb9:
            java.io.File r0 = r6.amX     // Catch: java.lang.Throwable -> Le2
            java.io.File r2 = r6.amW     // Catch: java.lang.Throwable -> Le2
            r3 = 0
            a(r0, r2, r3)     // Catch: java.lang.Throwable -> Le2
            java.io.File r0 = r6.amY     // Catch: java.lang.Throwable -> Le2
            r0.delete()     // Catch: java.lang.Throwable -> Le2
            java.io.BufferedWriter r0 = new java.io.BufferedWriter     // Catch: java.lang.Throwable -> Le2
            java.io.OutputStreamWriter r2 = new java.io.OutputStreamWriter     // Catch: java.lang.Throwable -> Le2
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.lang.Throwable -> Le2
            java.io.File r4 = r6.amW     // Catch: java.lang.Throwable -> Le2
            r3.<init>(r4, r1)     // Catch: java.lang.Throwable -> Le2
            java.nio.charset.Charset r1 = com.kwad.sdk.crash.utils.a.US_ASCII     // Catch: java.lang.Throwable -> Le2
            r2.<init>(r3, r1)     // Catch: java.lang.Throwable -> Le2
            r0.<init>(r2)     // Catch: java.lang.Throwable -> Le2
            r6.and = r0     // Catch: java.lang.Throwable -> Le2
            monitor-exit(r6)
            return
        Ldd:
            r1 = move-exception
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)     // Catch: java.lang.Throwable -> Le2
            throw r1     // Catch: java.lang.Throwable -> Le2
        Le2:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    private boolean Ap() {
            r2 = this;
            int r0 = r2.anf
            r1 = 2000(0x7d0, float:2.803E-42)
            if (r0 < r1) goto L10
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.diskcache.a.a$b> r1 = r2.ane
            int r1 = r1.size()
            if (r0 < r1) goto L10
            r0 = 1
            return r0
        L10:
            r0 = 0
            return r0
    }

    private void Aq() {
            r2 = this;
        L0:
            int r0 = r2.anc
            int r1 = r2.ana
            if (r0 <= r1) goto L20
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.diskcache.a.a$b> r0 = r2.ane
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
            java.lang.Object r0 = r0.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r0 = r0.getKey()
            java.lang.String r0 = (java.lang.String) r0
            r2.remove(r0)
            goto L0
        L20:
            return
    }

    static java.io.OutputStream Ar() {
            java.io.OutputStream r0 = com.kwad.sdk.core.diskcache.a.a.anj
            return r0
    }

    static int a(com.kwad.sdk.core.diskcache.a.a r0, int r1) {
            r1 = 0
            r0.anf = r1
            return r1
    }

    public static com.kwad.sdk.core.diskcache.a.a a(java.io.File r6, int r7, int r8, long r9) {
            r1 = 1
            r2 = 1
            r3 = 209715200(0xc800000, double:1.036130757E-315)
            r5 = 2147483647(0x7fffffff, float:NaN)
            r0 = r6
            com.kwad.sdk.core.diskcache.a.a r6 = a(r0, r1, r2, r3, r5)
            return r6
    }

    public static com.kwad.sdk.core.diskcache.a.a a(java.io.File r10, int r11, int r12, long r13, int r15) {
            r0 = 0
            int r0 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
            if (r0 <= 0) goto La6
            if (r15 <= 0) goto L9e
            if (r12 <= 0) goto L96
            java.io.File r0 = new java.io.File
            java.lang.String r1 = "journal.bkp"
            r0.<init>(r10, r1)
            boolean r1 = r0.exists()
            if (r1 == 0) goto L2c
            java.io.File r1 = new java.io.File
            java.lang.String r2 = "journal"
            r1.<init>(r10, r2)
            boolean r2 = r1.exists()
            if (r2 == 0) goto L28
            r0.delete()
            goto L2c
        L28:
            r2 = 0
            a(r0, r1, r2)
        L2c:
            com.kwad.sdk.core.diskcache.a.a r0 = new com.kwad.sdk.core.diskcache.a.a
            r3 = r0
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            r9 = r15
            r3.<init>(r4, r5, r6, r7, r9)
            java.io.File r1 = r0.amW
            boolean r1 = r1.exists()
            if (r1 == 0) goto L84
            r0.Al()     // Catch: java.io.IOException -> L5c
            r0.Am()     // Catch: java.io.IOException -> L5c
            java.io.BufferedWriter r1 = new java.io.BufferedWriter     // Catch: java.io.IOException -> L5c
            java.io.OutputStreamWriter r2 = new java.io.OutputStreamWriter     // Catch: java.io.IOException -> L5c
            java.io.FileOutputStream r3 = new java.io.FileOutputStream     // Catch: java.io.IOException -> L5c
            java.io.File r4 = r0.amW     // Catch: java.io.IOException -> L5c
            r5 = 1
            r3.<init>(r4, r5)     // Catch: java.io.IOException -> L5c
            java.nio.charset.Charset r4 = com.kwad.sdk.crash.utils.a.US_ASCII     // Catch: java.io.IOException -> L5c
            r2.<init>(r3, r4)     // Catch: java.io.IOException -> L5c
            r1.<init>(r2)     // Catch: java.io.IOException -> L5c
            r0.and = r1     // Catch: java.io.IOException -> L5c
            return r0
        L5c:
            r1 = move-exception
            java.io.PrintStream r2 = java.lang.System.out
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "DiskLruCache "
            r3.<init>(r4)
            r3.append(r10)
            java.lang.String r4 = " is corrupt: "
            r3.append(r4)
            java.lang.String r1 = r1.getMessage()
            r3.append(r1)
            java.lang.String r1 = ", removing"
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            r2.println(r1)
            r0.delete()
        L84:
            r10.mkdirs()
            com.kwad.sdk.core.diskcache.a.a r0 = new com.kwad.sdk.core.diskcache.a.a
            r3 = r0
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            r9 = r15
            r3.<init>(r4, r5, r6, r7, r9)
            r0.An()
            return r0
        L96:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r11 = "valueCount <= 0"
            r10.<init>(r11)
            throw r10
        L9e:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r11 = "maxFileCount <= 0"
            r10.<init>(r11)
            throw r10
        La6:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r11 = "maxSize <= 0"
            r10.<init>(r11)
            throw r10
    }

    static java.io.Writer a(com.kwad.sdk.core.diskcache.a.a r0) {
            java.io.Writer r0 = r0.and
            return r0
    }

    private synchronized void a(com.kwad.sdk.core.diskcache.a.a.a r11, boolean r12) {
            r10 = this;
            monitor-enter(r10)
            com.kwad.sdk.core.diskcache.a.a$b r0 = com.kwad.sdk.core.diskcache.a.a.a.a(r11)     // Catch: java.lang.Throwable -> L112
            com.kwad.sdk.core.diskcache.a.a$a r1 = com.kwad.sdk.core.diskcache.a.a.b.a(r0)     // Catch: java.lang.Throwable -> L112
            if (r1 != r11) goto L10c
            r1 = 0
            if (r12 == 0) goto L4a
            boolean r2 = com.kwad.sdk.core.diskcache.a.a.b.d(r0)     // Catch: java.lang.Throwable -> L112
            if (r2 != 0) goto L4a
            r2 = r1
        L15:
            int r3 = r10.anb     // Catch: java.lang.Throwable -> L112
            if (r2 >= r3) goto L4a
            boolean[] r3 = com.kwad.sdk.core.diskcache.a.a.a.b(r11)     // Catch: java.lang.Throwable -> L112
            boolean r3 = r3[r2]     // Catch: java.lang.Throwable -> L112
            if (r3 == 0) goto L33
            java.io.File r3 = r0.bV(r2)     // Catch: java.lang.Throwable -> L112
            boolean r3 = r3.exists()     // Catch: java.lang.Throwable -> L112
            if (r3 != 0) goto L30
            r11.abort()     // Catch: java.lang.Throwable -> L112
            monitor-exit(r10)
            return
        L30:
            int r2 = r2 + 1
            goto L15
        L33:
            r11.abort()     // Catch: java.lang.Throwable -> L112
            java.lang.IllegalStateException r11 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L112
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L112
            java.lang.String r0 = "Newly created entry didn't create value for index "
            r12.<init>(r0)     // Catch: java.lang.Throwable -> L112
            r12.append(r2)     // Catch: java.lang.Throwable -> L112
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L112
            r11.<init>(r12)     // Catch: java.lang.Throwable -> L112
            throw r11     // Catch: java.lang.Throwable -> L112
        L4a:
            int r11 = r10.anb     // Catch: java.lang.Throwable -> L112
            r2 = 1
            if (r1 >= r11) goto L84
            java.io.File r11 = r0.bV(r1)     // Catch: java.lang.Throwable -> L112
            if (r12 == 0) goto L7e
            boolean r3 = r11.exists()     // Catch: java.lang.Throwable -> L112
            if (r3 == 0) goto L81
            java.io.File r3 = r0.bU(r1)     // Catch: java.lang.Throwable -> L112
            r11.renameTo(r3)     // Catch: java.lang.Throwable -> L112
            long[] r11 = com.kwad.sdk.core.diskcache.a.a.b.b(r0)     // Catch: java.lang.Throwable -> L112
            r4 = r11[r1]     // Catch: java.lang.Throwable -> L112
            long r6 = r3.length()     // Catch: java.lang.Throwable -> L112
            long[] r11 = com.kwad.sdk.core.diskcache.a.a.b.b(r0)     // Catch: java.lang.Throwable -> L112
            r11[r1] = r6     // Catch: java.lang.Throwable -> L112
            long r8 = r10.size     // Catch: java.lang.Throwable -> L112
            long r8 = r8 - r4
            long r8 = r8 + r6
            r10.size = r8     // Catch: java.lang.Throwable -> L112
            int r11 = r10.anc     // Catch: java.lang.Throwable -> L112
            int r11 = r11 + r2
            r10.anc = r11     // Catch: java.lang.Throwable -> L112
            goto L81
        L7e:
            p(r11)     // Catch: java.lang.Throwable -> L112
        L81:
            int r1 = r1 + 1
            goto L4a
        L84:
            int r11 = r10.anf     // Catch: java.lang.Throwable -> L112
            int r11 = r11 + r2
            r10.anf = r11     // Catch: java.lang.Throwable -> L112
            r11 = 0
            com.kwad.sdk.core.diskcache.a.a.b.a(r0, r11)     // Catch: java.lang.Throwable -> L112
            boolean r11 = com.kwad.sdk.core.diskcache.a.a.b.d(r0)     // Catch: java.lang.Throwable -> L112
            r11 = r11 | r12
            r1 = 10
            if (r11 == 0) goto Lc7
            com.kwad.sdk.core.diskcache.a.a.b.a(r0, r2)     // Catch: java.lang.Throwable -> L112
            java.io.Writer r11 = r10.and     // Catch: java.lang.Throwable -> L112
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L112
            java.lang.String r3 = "CLEAN "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L112
            java.lang.String r3 = com.kwad.sdk.core.diskcache.a.a.b.c(r0)     // Catch: java.lang.Throwable -> L112
            r2.append(r3)     // Catch: java.lang.Throwable -> L112
            java.lang.String r3 = r0.As()     // Catch: java.lang.Throwable -> L112
            r2.append(r3)     // Catch: java.lang.Throwable -> L112
            r2.append(r1)     // Catch: java.lang.Throwable -> L112
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L112
            r11.write(r1)     // Catch: java.lang.Throwable -> L112
            if (r12 == 0) goto Lea
            long r11 = r10.ang     // Catch: java.lang.Throwable -> L112
            r1 = 1
            long r1 = r1 + r11
            r10.ang = r1     // Catch: java.lang.Throwable -> L112
            com.kwad.sdk.core.diskcache.a.a.b.a(r0, r11)     // Catch: java.lang.Throwable -> L112
            goto Lea
        Lc7:
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.diskcache.a.a$b> r11 = r10.ane     // Catch: java.lang.Throwable -> L112
            java.lang.String r12 = com.kwad.sdk.core.diskcache.a.a.b.c(r0)     // Catch: java.lang.Throwable -> L112
            r11.remove(r12)     // Catch: java.lang.Throwable -> L112
            java.io.Writer r11 = r10.and     // Catch: java.lang.Throwable -> L112
            java.lang.StringBuilder r12 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L112
            java.lang.String r2 = "REMOVE "
            r12.<init>(r2)     // Catch: java.lang.Throwable -> L112
            java.lang.String r0 = com.kwad.sdk.core.diskcache.a.a.b.c(r0)     // Catch: java.lang.Throwable -> L112
            r12.append(r0)     // Catch: java.lang.Throwable -> L112
            r12.append(r1)     // Catch: java.lang.Throwable -> L112
            java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L112
            r11.write(r12)     // Catch: java.lang.Throwable -> L112
        Lea:
            java.io.Writer r11 = r10.and     // Catch: java.lang.Throwable -> L112
            r11.flush()     // Catch: java.lang.Throwable -> L112
            long r11 = r10.size     // Catch: java.lang.Throwable -> L112
            long r0 = r10.maxSize     // Catch: java.lang.Throwable -> L112
            int r11 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
            if (r11 > 0) goto L103
            int r11 = r10.anc     // Catch: java.lang.Throwable -> L112
            int r12 = r10.ana     // Catch: java.lang.Throwable -> L112
            if (r11 > r12) goto L103
            boolean r11 = r10.Ap()     // Catch: java.lang.Throwable -> L112
            if (r11 == 0) goto L10a
        L103:
            java.util.concurrent.ThreadPoolExecutor r11 = r10.anh     // Catch: java.lang.Throwable -> L112
            java.util.concurrent.Callable<java.lang.Void> r12 = r10.ani     // Catch: java.lang.Throwable -> L112
            r11.submit(r12)     // Catch: java.lang.Throwable -> L112
        L10a:
            monitor-exit(r10)
            return
        L10c:
            java.lang.IllegalStateException r11 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L112
            r11.<init>()     // Catch: java.lang.Throwable -> L112
            throw r11     // Catch: java.lang.Throwable -> L112
        L112:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
    }

    static void a(com.kwad.sdk.core.diskcache.a.a r0, com.kwad.sdk.core.diskcache.a.a.a r1, boolean r2) {
            r0.a(r1, r2)
            return
    }

    private static void a(java.io.File r0, java.io.File r1, boolean r2) {
            if (r2 == 0) goto L5
            p(r1)
        L5:
            boolean r0 = r0.renameTo(r1)
            if (r0 == 0) goto Lc
            return
        Lc:
            java.io.IOException r0 = new java.io.IOException
            r0.<init>()
            throw r0
    }

    static void b(com.kwad.sdk.core.diskcache.a.a r0) {
            r0.trimToSize()
            return
    }

    static void c(com.kwad.sdk.core.diskcache.a.a r0) {
            r0.Aq()
            return
    }

    private static void cC(java.lang.String r3) {
            java.util.regex.Pattern r0 = com.kwad.sdk.core.diskcache.a.a.amU
            java.util.regex.Matcher r0 = r0.matcher(r3)
            boolean r0 = r0.matches()
            if (r0 == 0) goto Ld
            return
        Ld:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "keys must match regex [a-z0-9_-]{1,64}: \""
            r1.<init>(r2)
            r1.append(r3)
            java.lang.String r3 = "\""
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    private void checkNotClosed() {
            r2 = this;
            java.io.Writer r0 = r2.and
            if (r0 == 0) goto L5
            return
        L5:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "cache is closed"
            r0.<init>(r1)
            throw r0
    }

    private void cz(java.lang.String r9) {
            r8 = this;
            r0 = 32
            int r1 = r9.indexOf(r0)
            java.lang.String r2 = "unexpected journal line: "
            r3 = -1
            if (r1 == r3) goto L9a
            int r4 = r1 + 1
            int r0 = r9.indexOf(r0, r4)
            if (r0 != r3) goto L28
            java.lang.String r4 = r9.substring(r4)
            r5 = 6
            if (r1 != r5) goto L2c
            java.lang.String r5 = "REMOVE"
            boolean r5 = r9.startsWith(r5)
            if (r5 == 0) goto L2c
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.diskcache.a.a$b> r9 = r8.ane
            r9.remove(r4)
            return
        L28:
            java.lang.String r4 = r9.substring(r4, r0)
        L2c:
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.diskcache.a.a$b> r5 = r8.ane
            java.lang.Object r5 = r5.get(r4)
            com.kwad.sdk.core.diskcache.a.a$b r5 = (com.kwad.sdk.core.diskcache.a.a.b) r5
            r6 = 0
            if (r5 != 0) goto L41
            com.kwad.sdk.core.diskcache.a.a$b r5 = new com.kwad.sdk.core.diskcache.a.a$b
            r5.<init>(r8, r4, r6)
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.diskcache.a.a$b> r7 = r8.ane
            r7.put(r4, r5)
        L41:
            r4 = 5
            if (r0 == r3) goto L65
            if (r1 != r4) goto L65
            java.lang.String r7 = "CLEAN"
            boolean r7 = r9.startsWith(r7)
            if (r7 == 0) goto L65
            r1 = 1
            int r0 = r0 + r1
            java.lang.String r9 = r9.substring(r0)
            java.lang.String r0 = " "
            java.lang.String[] r9 = r9.split(r0)
            com.kwad.sdk.core.diskcache.a.a.b.a(r5, r1)
            r0 = 0
            com.kwad.sdk.core.diskcache.a.a.b.a(r5, r0)
            com.kwad.sdk.core.diskcache.a.a.b.a(r5, r9)
            return
        L65:
            if (r0 != r3) goto L7a
            if (r1 != r4) goto L7a
            java.lang.String r4 = "DIRTY"
            boolean r4 = r9.startsWith(r4)
            if (r4 == 0) goto L7a
            com.kwad.sdk.core.diskcache.a.a$a r9 = new com.kwad.sdk.core.diskcache.a.a$a
            r9.<init>(r8, r5, r6)
            com.kwad.sdk.core.diskcache.a.a.b.a(r5, r9)
            return
        L7a:
            if (r0 != r3) goto L88
            r0 = 4
            if (r1 != r0) goto L88
            java.lang.String r0 = "READ"
            boolean r0 = r9.startsWith(r0)
            if (r0 == 0) goto L88
            return
        L88:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r2)
            r1.append(r9)
            java.lang.String r9 = r1.toString()
            r0.<init>(r9)
            throw r0
        L9a:
            java.io.IOException r0 = new java.io.IOException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>(r2)
            r1.append(r9)
            java.lang.String r9 = r1.toString()
            r0.<init>(r9)
            throw r0
    }

    static boolean d(com.kwad.sdk.core.diskcache.a.a r0) {
            boolean r0 = r0.Ap()
            return r0
    }

    private synchronized com.kwad.sdk.core.diskcache.a.a.a e(java.lang.String r3, long r4) {
            r2 = this;
            monitor-enter(r2)
            r2.checkNotClosed()     // Catch: java.lang.Throwable -> L4d
            cC(r3)     // Catch: java.lang.Throwable -> L4d
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.diskcache.a.a$b> r4 = r2.ane     // Catch: java.lang.Throwable -> L4d
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Throwable -> L4d
            com.kwad.sdk.core.diskcache.a.a$b r4 = (com.kwad.sdk.core.diskcache.a.a.b) r4     // Catch: java.lang.Throwable -> L4d
            r5 = 0
            if (r4 != 0) goto L1d
            com.kwad.sdk.core.diskcache.a.a$b r4 = new com.kwad.sdk.core.diskcache.a.a$b     // Catch: java.lang.Throwable -> L4d
            r4.<init>(r2, r3, r5)     // Catch: java.lang.Throwable -> L4d
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.diskcache.a.a$b> r0 = r2.ane     // Catch: java.lang.Throwable -> L4d
            r0.put(r3, r4)     // Catch: java.lang.Throwable -> L4d
            goto L26
        L1d:
            com.kwad.sdk.core.diskcache.a.a$a r0 = com.kwad.sdk.core.diskcache.a.a.b.a(r4)     // Catch: java.lang.Throwable -> L4d
            if (r0 == 0) goto L26
            r3 = 0
            monitor-exit(r2)
            return r3
        L26:
            com.kwad.sdk.core.diskcache.a.a$a r0 = new com.kwad.sdk.core.diskcache.a.a$a     // Catch: java.lang.Throwable -> L4d
            r0.<init>(r2, r4, r5)     // Catch: java.lang.Throwable -> L4d
            com.kwad.sdk.core.diskcache.a.a.b.a(r4, r0)     // Catch: java.lang.Throwable -> L4d
            java.io.Writer r4 = r2.and     // Catch: java.lang.Throwable -> L4d
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4d
            java.lang.String r1 = "DIRTY "
            r5.<init>(r1)     // Catch: java.lang.Throwable -> L4d
            r5.append(r3)     // Catch: java.lang.Throwable -> L4d
            r3 = 10
            r5.append(r3)     // Catch: java.lang.Throwable -> L4d
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> L4d
            r4.write(r3)     // Catch: java.lang.Throwable -> L4d
            java.io.Writer r3 = r2.and     // Catch: java.lang.Throwable -> L4d
            r3.flush()     // Catch: java.lang.Throwable -> L4d
            monitor-exit(r2)
            return r0
        L4d:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    static void e(com.kwad.sdk.core.diskcache.a.a r0) {
            r0.An()
            return
    }

    static int f(com.kwad.sdk.core.diskcache.a.a r0) {
            int r0 = r0.anb
            return r0
    }

    static java.io.File g(com.kwad.sdk.core.diskcache.a.a r0) {
            java.io.File r0 = r0.amV
            return r0
    }

    private static void p(java.io.File r1) {
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

    private void trimToSize() {
            r4 = this;
        L0:
            long r0 = r4.size
            long r2 = r4.maxSize
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L22
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.diskcache.a.a$b> r0 = r4.ane
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
            java.lang.Object r0 = r0.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r0 = r0.getKey()
            java.lang.String r0 = (java.lang.String) r0
            r4.remove(r0)
            goto L0
        L22:
            return
    }

    public final synchronized int Ao() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.ana     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized com.kwad.sdk.core.diskcache.a.a.c cA(java.lang.String r13) {
            r12 = this;
            monitor-enter(r12)
            r12.checkNotClosed()     // Catch: java.lang.Throwable -> L8a
            cC(r13)     // Catch: java.lang.Throwable -> L8a
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.diskcache.a.a$b> r0 = r12.ane     // Catch: java.lang.Throwable -> L8a
            java.lang.Object r0 = r0.get(r13)     // Catch: java.lang.Throwable -> L8a
            com.kwad.sdk.core.diskcache.a.a$b r0 = (com.kwad.sdk.core.diskcache.a.a.b) r0     // Catch: java.lang.Throwable -> L8a
            r1 = 0
            if (r0 != 0) goto L14
            monitor-exit(r12)
            return r1
        L14:
            boolean r2 = com.kwad.sdk.core.diskcache.a.a.b.d(r0)     // Catch: java.lang.Throwable -> L8a
            if (r2 != 0) goto L1c
            monitor-exit(r12)
            return r1
        L1c:
            int r2 = r12.anb     // Catch: java.lang.Throwable -> L8a
            java.io.File[] r8 = new java.io.File[r2]     // Catch: java.lang.Throwable -> L8a
            int r2 = r12.anb     // Catch: java.lang.Throwable -> L8a
            java.io.InputStream[] r9 = new java.io.InputStream[r2]     // Catch: java.lang.Throwable -> L8a
            r2 = 0
            r3 = r2
        L26:
            int r4 = r12.anb     // Catch: java.io.FileNotFoundException -> L78 java.lang.Throwable -> L8a
            if (r3 >= r4) goto L3a
            java.io.File r4 = r0.bU(r3)     // Catch: java.io.FileNotFoundException -> L78 java.lang.Throwable -> L8a
            r8[r3] = r4     // Catch: java.io.FileNotFoundException -> L78 java.lang.Throwable -> L8a
            java.io.FileInputStream r5 = new java.io.FileInputStream     // Catch: java.io.FileNotFoundException -> L78 java.lang.Throwable -> L8a
            r5.<init>(r4)     // Catch: java.io.FileNotFoundException -> L78 java.lang.Throwable -> L8a
            r9[r3] = r5     // Catch: java.io.FileNotFoundException -> L78 java.lang.Throwable -> L8a
            int r3 = r3 + 1
            goto L26
        L3a:
            int r1 = r12.anf     // Catch: java.lang.Throwable -> L8a
            int r1 = r1 + 1
            r12.anf = r1     // Catch: java.lang.Throwable -> L8a
            java.io.Writer r1 = r12.and     // Catch: java.lang.Throwable -> L8a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L8a
            java.lang.String r3 = "READ "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L8a
            r2.append(r13)     // Catch: java.lang.Throwable -> L8a
            r3 = 10
            r2.append(r3)     // Catch: java.lang.Throwable -> L8a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L8a
            r1.append(r2)     // Catch: java.lang.Throwable -> L8a
            boolean r1 = r12.Ap()     // Catch: java.lang.Throwable -> L8a
            if (r1 == 0) goto L65
            java.util.concurrent.ThreadPoolExecutor r1 = r12.anh     // Catch: java.lang.Throwable -> L8a
            java.util.concurrent.Callable<java.lang.Void> r2 = r12.ani     // Catch: java.lang.Throwable -> L8a
            r1.submit(r2)     // Catch: java.lang.Throwable -> L8a
        L65:
            com.kwad.sdk.core.diskcache.a.a$c r1 = new com.kwad.sdk.core.diskcache.a.a$c     // Catch: java.lang.Throwable -> L8a
            long r6 = com.kwad.sdk.core.diskcache.a.a.b.e(r0)     // Catch: java.lang.Throwable -> L8a
            long[] r10 = com.kwad.sdk.core.diskcache.a.a.b.b(r0)     // Catch: java.lang.Throwable -> L8a
            r11 = 0
            r3 = r1
            r4 = r12
            r5 = r13
            r3.<init>(r4, r5, r6, r8, r9, r10, r11)     // Catch: java.lang.Throwable -> L8a
            monitor-exit(r12)
            return r1
        L78:
            int r13 = r12.anb     // Catch: java.lang.Throwable -> L8a
            if (r2 >= r13) goto L88
            r13 = r9[r2]     // Catch: java.lang.Throwable -> L8a
            if (r13 == 0) goto L88
            r13 = r9[r2]     // Catch: java.lang.Throwable -> L8a
            com.kwad.sdk.crash.utils.b.closeQuietly(r13)     // Catch: java.lang.Throwable -> L8a
            int r2 = r2 + 1
            goto L78
        L88:
            monitor-exit(r12)
            return r1
        L8a:
            r13 = move-exception
            monitor-exit(r12)
            throw r13
    }

    public final com.kwad.sdk.core.diskcache.a.a.a cB(java.lang.String r3) {
            r2 = this;
            r0 = -1
            com.kwad.sdk.core.diskcache.a.a$a r3 = r2.e(r3, r0)
            return r3
    }

    @Override
    public final synchronized void close() {
            r3 = this;
            monitor-enter(r3)
            java.io.Writer r0 = r3.and     // Catch: java.lang.Throwable -> L40
            if (r0 != 0) goto L7
            monitor-exit(r3)
            return
        L7:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L40
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.diskcache.a.a$b> r1 = r3.ane     // Catch: java.lang.Throwable -> L40
            java.util.Collection r1 = r1.values()     // Catch: java.lang.Throwable -> L40
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L40
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L40
        L16:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L40
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L40
            com.kwad.sdk.core.diskcache.a.a$b r1 = (com.kwad.sdk.core.diskcache.a.a.b) r1     // Catch: java.lang.Throwable -> L40
            com.kwad.sdk.core.diskcache.a.a$a r2 = com.kwad.sdk.core.diskcache.a.a.b.a(r1)     // Catch: java.lang.Throwable -> L40
            if (r2 == 0) goto L16
            com.kwad.sdk.core.diskcache.a.a$a r1 = com.kwad.sdk.core.diskcache.a.a.b.a(r1)     // Catch: java.lang.Throwable -> L40
            r1.abort()     // Catch: java.lang.Throwable -> L40
            goto L16
        L30:
            r3.trimToSize()     // Catch: java.lang.Throwable -> L40
            r3.Aq()     // Catch: java.lang.Throwable -> L40
            java.io.Writer r0 = r3.and     // Catch: java.lang.Throwable -> L40
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)     // Catch: java.lang.Throwable -> L40
            r0 = 0
            r3.and = r0     // Catch: java.lang.Throwable -> L40
            monitor-exit(r3)
            return
        L40:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public final void delete() {
            r1 = this;
            r1.close()
            java.io.File r0 = r1.amV
            com.kwad.sdk.utils.q.deleteContents(r0)
            return
    }

    public final synchronized void flush() {
            r1 = this;
            monitor-enter(r1)
            r1.checkNotClosed()     // Catch: java.lang.Throwable -> L11
            r1.trimToSize()     // Catch: java.lang.Throwable -> L11
            r1.Aq()     // Catch: java.lang.Throwable -> L11
            java.io.Writer r0 = r1.and     // Catch: java.lang.Throwable -> L11
            r0.flush()     // Catch: java.lang.Throwable -> L11
            monitor-exit(r1)
            return
        L11:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final java.io.File getDirectory() {
            r1 = this;
            java.io.File r0 = r1.amV
            return r0
    }

    public final synchronized long getMaxSize() {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.maxSize     // Catch: java.lang.Throwable -> L5
            monitor-exit(r2)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final synchronized boolean remove(java.lang.String r9) {
            r8 = this;
            monitor-enter(r8)
            r8.checkNotClosed()     // Catch: java.lang.Throwable -> L92
            cC(r9)     // Catch: java.lang.Throwable -> L92
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.diskcache.a.a$b> r0 = r8.ane     // Catch: java.lang.Throwable -> L92
            java.lang.Object r0 = r0.get(r9)     // Catch: java.lang.Throwable -> L92
            com.kwad.sdk.core.diskcache.a.a$b r0 = (com.kwad.sdk.core.diskcache.a.a.b) r0     // Catch: java.lang.Throwable -> L92
            r1 = 0
            if (r0 == 0) goto L90
            com.kwad.sdk.core.diskcache.a.a$a r2 = com.kwad.sdk.core.diskcache.a.a.b.a(r0)     // Catch: java.lang.Throwable -> L92
            if (r2 == 0) goto L1a
            goto L90
        L1a:
            int r2 = r8.anb     // Catch: java.lang.Throwable -> L92
            r3 = 1
            if (r1 >= r2) goto L5f
            java.io.File r2 = r0.bU(r1)     // Catch: java.lang.Throwable -> L92
            boolean r4 = r2.exists()     // Catch: java.lang.Throwable -> L92
            if (r4 == 0) goto L44
            boolean r4 = r2.delete()     // Catch: java.lang.Throwable -> L92
            if (r4 == 0) goto L30
            goto L44
        L30:
            java.io.IOException r9 = new java.io.IOException     // Catch: java.lang.Throwable -> L92
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L92
            java.lang.String r1 = "failed to delete "
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L92
            r0.append(r2)     // Catch: java.lang.Throwable -> L92
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L92
            r9.<init>(r0)     // Catch: java.lang.Throwable -> L92
            throw r9     // Catch: java.lang.Throwable -> L92
        L44:
            long r4 = r8.size     // Catch: java.lang.Throwable -> L92
            long[] r2 = com.kwad.sdk.core.diskcache.a.a.b.b(r0)     // Catch: java.lang.Throwable -> L92
            r6 = r2[r1]     // Catch: java.lang.Throwable -> L92
            long r4 = r4 - r6
            r8.size = r4     // Catch: java.lang.Throwable -> L92
            int r2 = r8.anc     // Catch: java.lang.Throwable -> L92
            int r2 = r2 - r3
            r8.anc = r2     // Catch: java.lang.Throwable -> L92
            long[] r2 = com.kwad.sdk.core.diskcache.a.a.b.b(r0)     // Catch: java.lang.Throwable -> L92
            r3 = 0
            r2[r1] = r3     // Catch: java.lang.Throwable -> L92
            int r1 = r1 + 1
            goto L1a
        L5f:
            int r0 = r8.anf     // Catch: java.lang.Throwable -> L92
            int r0 = r0 + r3
            r8.anf = r0     // Catch: java.lang.Throwable -> L92
            java.io.Writer r0 = r8.and     // Catch: java.lang.Throwable -> L92
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L92
            java.lang.String r2 = "REMOVE "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L92
            r1.append(r9)     // Catch: java.lang.Throwable -> L92
            r2 = 10
            r1.append(r2)     // Catch: java.lang.Throwable -> L92
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L92
            r0.append(r1)     // Catch: java.lang.Throwable -> L92
            java.util.LinkedHashMap<java.lang.String, com.kwad.sdk.core.diskcache.a.a$b> r0 = r8.ane     // Catch: java.lang.Throwable -> L92
            r0.remove(r9)     // Catch: java.lang.Throwable -> L92
            boolean r9 = r8.Ap()     // Catch: java.lang.Throwable -> L92
            if (r9 == 0) goto L8e
            java.util.concurrent.ThreadPoolExecutor r9 = r8.anh     // Catch: java.lang.Throwable -> L92
            java.util.concurrent.Callable<java.lang.Void> r0 = r8.ani     // Catch: java.lang.Throwable -> L92
            r9.submit(r0)     // Catch: java.lang.Throwable -> L92
        L8e:
            monitor-exit(r8)
            return r3
        L90:
            monitor-exit(r8)
            return r1
        L92:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }
}
