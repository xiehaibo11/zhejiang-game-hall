package com.kwad.sdk.utils.a;

public final class c {
    private static final int PAGE_SIZE = 0;
    private static final int[] aKH = null;
    private static final byte[] aKI = null;
    private static final int aKJ = 0;
    private static final int aKK = 0;
    private static final int aKL = 0;
    private final java.lang.String Tt;
    private final java.util.Map<java.lang.String, com.kwad.sdk.utils.a.c.b> aKM;
    private final com.kwad.sdk.utils.a.c.d aKN;
    private java.nio.channels.FileChannel aKO;
    private java.nio.channels.FileChannel aKP;
    private java.io.RandomAccessFile aKQ;
    private java.io.RandomAccessFile aKR;
    private java.nio.MappedByteBuffer aKS;
    private java.nio.MappedByteBuffer aKT;
    private com.kwad.sdk.utils.a.b aKU;
    private int aKV;
    private long aKW;
    private final java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a.b> aKX;
    private boolean aKY;
    private int aKZ;
    private int aLa;
    private int aLb;
    private boolean aLc;
    private java.lang.String aLd;
    private int aLe;
    private final java.util.ArrayList<com.kwad.sdk.utils.a.c.e> aLf;
    private int aLg;
    private boolean aLh;
    private final java.util.concurrent.Executor aLi;
    private final java.lang.String name;



    public static class a {
        static int aLk = 11;
        static final com.kwad.sdk.utils.a.c.c aLl = null;
        private final java.lang.String Tt;
        private int aLg;
        private com.kwad.sdk.utils.a.c.b[] aLm;
        private final java.lang.String name;

        static {
                com.kwad.sdk.utils.a.c$c r0 = new com.kwad.sdk.utils.a.c$c
                r1 = 11
                r0.<init>(r1)
                com.kwad.sdk.utils.a.c.a.aLl = r0
                return
        }

        public a(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.aLg = r0
                if (r2 == 0) goto L3d
                boolean r0 = r2.isEmpty()
                if (r0 != 0) goto L3d
                if (r3 == 0) goto L35
                boolean r0 = r3.isEmpty()
                if (r0 != 0) goto L35
                java.lang.String r0 = "/"
                boolean r0 = r2.endsWith(r0)
                if (r0 == 0) goto L1f
                goto L30
            L1f:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r0.append(r2)
                r2 = 47
                r0.append(r2)
                java.lang.String r2 = r0.toString()
            L30:
                r1.Tt = r2
                r1.name = r3
                return
            L35:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r3 = "name is empty"
                r2.<init>(r3)
                throw r2
            L3d:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r3 = "path is empty"
                r2.<init>(r3)
                throw r2
        }

        public final com.kwad.sdk.utils.a.c Kz() {
                r7 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = r7.Tt
                r0.append(r1)
                java.lang.String r1 = r7.name
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                com.kwad.sdk.utils.a.c r1 = com.kwad.sdk.utils.a.c.c.fX(r0)
                if (r1 != 0) goto L37
                java.lang.Class<com.kwad.sdk.utils.a.c$a> r2 = com.kwad.sdk.utils.a.c.a.class
                monitor-enter(r2)
                com.kwad.sdk.utils.a.c r1 = com.kwad.sdk.utils.a.c.c.fX(r0)     // Catch: java.lang.Throwable -> L34
                if (r1 != 0) goto L32
                com.kwad.sdk.utils.a.c r1 = new com.kwad.sdk.utils.a.c     // Catch: java.lang.Throwable -> L34
                java.lang.String r3 = r7.Tt     // Catch: java.lang.Throwable -> L34
                java.lang.String r4 = r7.name     // Catch: java.lang.Throwable -> L34
                com.kwad.sdk.utils.a.c$b[] r5 = r7.aLm     // Catch: java.lang.Throwable -> L34
                int r6 = r7.aLg     // Catch: java.lang.Throwable -> L34
                r1.<init>(r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L34
                com.kwad.sdk.utils.a.c.c.b(r0, r1)     // Catch: java.lang.Throwable -> L34
            L32:
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L34
                goto L37
            L34:
                r0 = move-exception
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L34
                throw r0
            L37:
                java.util.Map<java.lang.String, java.lang.Integer> r2 = com.kwad.sdk.utils.a.c.c.aLq
                java.lang.Object r2 = r2.get(r0)
                java.lang.Integer r2 = (java.lang.Integer) r2
                r3 = 1
                if (r2 == 0) goto L51
                java.util.Map<java.lang.String, java.lang.Integer> r4 = com.kwad.sdk.utils.a.c.c.aLq
                int r2 = r2.intValue()
                int r2 = r2 + r3
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
                r4.put(r0, r2)
                goto L5a
            L51:
                java.util.Map<java.lang.String, java.lang.Integer> r2 = com.kwad.sdk.utils.a.c.c.aLq
                java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
                r2.put(r0, r3)
            L5a:
                return r1
        }
    }

    public interface b<T> {
        java.lang.String KA();

        T g(byte[] r1, int r2, int r3);

        byte[] o(T r1);
    }

    static class c {
        private static java.util.Map<java.lang.String, com.kwad.sdk.utils.a.c> aLn;
        private static java.util.List<java.lang.String> aLo;
        private static int aLp;
        public static java.util.Map<java.lang.String, java.lang.Integer> aLq;

        public c(int r3) {
                r2 = this;
                r2.<init>()
                int r0 = getSize(r3)
                java.util.concurrent.ConcurrentHashMap r1 = new java.util.concurrent.ConcurrentHashMap
                r1.<init>(r0)
                com.kwad.sdk.utils.a.c.c.aLn = r1
                java.util.HashMap r1 = new java.util.HashMap
                r1.<init>(r0)
                com.kwad.sdk.utils.a.c.c.aLq = r1
                java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
                r0.<init>()
                com.kwad.sdk.utils.a.c.c.aLo = r0
                com.kwad.sdk.utils.a.c.c.aLp = r3
                return
        }

        public static void b(java.lang.String r2, com.kwad.sdk.utils.a.c r3) {
                java.util.Map<java.lang.String, com.kwad.sdk.utils.a.c> r0 = com.kwad.sdk.utils.a.c.c.aLn
                if (r0 != 0) goto L11
                java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
                int r1 = com.kwad.sdk.utils.a.c.c.aLp
                int r1 = getSize(r1)
                r0.<init>(r1)
                com.kwad.sdk.utils.a.c.c.aLn = r0
            L11:
                java.util.List<java.lang.String> r0 = com.kwad.sdk.utils.a.c.c.aLo
                if (r0 != 0) goto L1c
                java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
                r0.<init>()
                com.kwad.sdk.utils.a.c.c.aLo = r0
            L1c:
                java.util.Map<java.lang.String, com.kwad.sdk.utils.a.c> r0 = com.kwad.sdk.utils.a.c.c.aLn
                boolean r0 = r0.containsKey(r2)
                if (r0 == 0) goto L29
                java.util.List<java.lang.String> r0 = com.kwad.sdk.utils.a.c.c.aLo
                r0.remove(r2)
            L29:
                java.util.List<java.lang.String> r0 = com.kwad.sdk.utils.a.c.c.aLo
                r0.add(r2)
                java.util.Map<java.lang.String, com.kwad.sdk.utils.a.c> r0 = com.kwad.sdk.utils.a.c.c.aLn
                r0.put(r2, r3)
                java.util.Map<java.lang.String, com.kwad.sdk.utils.a.c> r2 = com.kwad.sdk.utils.a.c.c.aLn
                int r2 = r2.size()
                int r3 = com.kwad.sdk.utils.a.c.c.aLp
                if (r2 <= r3) goto L82
                java.util.List<java.lang.String> r2 = com.kwad.sdk.utils.a.c.c.aLo
                r3 = 0
                java.lang.Object r2 = r2.get(r3)
                java.lang.String r2 = (java.lang.String) r2
                java.util.Map<java.lang.String, java.lang.Integer> r0 = com.kwad.sdk.utils.a.c.c.aLq
                java.lang.Object r2 = r0.get(r2)
                java.lang.Integer r2 = (java.lang.Integer) r2
                if (r2 == 0) goto L5f
                int r2 = r2.intValue()
                r0 = 2
                if (r2 == r0) goto L5f
                int r2 = com.kwad.sdk.utils.a.c.c.aLp
                int r2 = r2 + 1
                dq(r2)
                return
            L5f:
                java.util.Map<java.lang.String, com.kwad.sdk.utils.a.c> r2 = com.kwad.sdk.utils.a.c.c.aLn
                java.util.List<java.lang.String> r0 = com.kwad.sdk.utils.a.c.c.aLo
                java.lang.Object r0 = r0.get(r3)
                java.lang.Object r2 = r2.get(r0)
                com.kwad.sdk.utils.a.c r2 = (com.kwad.sdk.utils.a.c) r2
                if (r2 == 0) goto L72
                r2.release()
            L72:
                java.util.Map<java.lang.String, com.kwad.sdk.utils.a.c> r2 = com.kwad.sdk.utils.a.c.c.aLn
                java.util.List<java.lang.String> r0 = com.kwad.sdk.utils.a.c.c.aLo
                java.lang.Object r0 = r0.get(r3)
                r2.remove(r0)
                java.util.List<java.lang.String> r2 = com.kwad.sdk.utils.a.c.c.aLo
                r2.remove(r3)
            L82:
                return
        }

        private static void dq(int r3) {
                com.kwad.sdk.utils.a.c$d r0 = com.kwad.sdk.utils.a.d.aLr
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                java.lang.String r2 = "reSize:"
                r1.<init>(r2)
                r1.append(r3)
                java.lang.String r1 = r1.toString()
                java.lang.String r2 = "Ks_UnionKv"
                r0.i(r2, r1)
                com.kwad.sdk.utils.a.c.c.aLp = r3
                return
        }

        public static com.kwad.sdk.utils.a.c fX(java.lang.String r2) {
                java.util.Map<java.lang.String, com.kwad.sdk.utils.a.c> r0 = com.kwad.sdk.utils.a.c.c.aLn
                if (r0 != 0) goto L11
                java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
                int r1 = com.kwad.sdk.utils.a.c.c.aLp
                int r1 = getSize(r1)
                r0.<init>(r1)
                com.kwad.sdk.utils.a.c.c.aLn = r0
            L11:
                java.util.List<java.lang.String> r0 = com.kwad.sdk.utils.a.c.c.aLo
                if (r0 != 0) goto L1c
                java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
                r0.<init>()
                com.kwad.sdk.utils.a.c.c.aLo = r0
            L1c:
                java.util.Map<java.lang.String, com.kwad.sdk.utils.a.c> r0 = com.kwad.sdk.utils.a.c.c.aLn
                java.lang.Object r0 = r0.get(r2)
                com.kwad.sdk.utils.a.c r0 = (com.kwad.sdk.utils.a.c) r0
                if (r0 == 0) goto L31
                java.util.List<java.lang.String> r1 = com.kwad.sdk.utils.a.c.c.aLo
                r1.remove(r2)
                java.util.List<java.lang.String> r1 = com.kwad.sdk.utils.a.c.c.aLo
                r1.add(r2)
                return r0
            L31:
                r2 = 0
                return r2
        }

        private static int getSize(int r1) {
                float r1 = (float) r1
                r0 = 1061158912(0x3f400000, float:0.75)
                float r1 = r1 / r0
                r0 = 1065353216(0x3f800000, float:1.0)
                float r1 = r1 + r0
                int r1 = (int) r1
                return r1
        }

        public static void remove(java.lang.String r1) {
                java.util.List<java.lang.String> r0 = com.kwad.sdk.utils.a.c.c.aLo
                if (r0 == 0) goto L7
                r0.remove(r1)
            L7:
                java.util.Map<java.lang.String, com.kwad.sdk.utils.a.c> r0 = com.kwad.sdk.utils.a.c.c.aLn
                if (r0 == 0) goto Le
                r0.remove(r1)
            Le:
                return
        }
    }

    public interface d {
        void a(java.lang.String r1, java.lang.Exception r2);

        void e(java.lang.String r1, java.lang.Throwable r2);

        void i(java.lang.String r1, java.lang.String r2);
    }

    static class e implements java.lang.Comparable<com.kwad.sdk.utils.a.c.e> {
        int end;
        int start;

        e(int r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.start = r1
                r0.end = r2
                return
        }

        private int a(com.kwad.sdk.utils.a.c.e r2) {
                r1 = this;
                int r0 = r1.start
                int r2 = r2.start
                int r0 = r0 - r2
                return r0
        }

        @Override
        public final int compareTo(com.kwad.sdk.utils.a.c.e r1) {
                r0 = this;
                com.kwad.sdk.utils.a.c$e r1 = (com.kwad.sdk.utils.a.c.e) r1
                int r1 = r0.a(r1)
                return r1
        }
    }

    static {
            r0 = 6
            int[] r0 = new int[r0]
            r0 = {x0026: FILL_ARRAY_DATA , data: [0, 1, 4, 4, 8, 8} // fill-array
            com.kwad.sdk.utils.a.c.aKH = r0
            r0 = 0
            byte[] r0 = new byte[r0]
            com.kwad.sdk.utils.a.c.aKI = r0
            int r0 = com.kwad.sdk.utils.a.h.KD()
            com.kwad.sdk.utils.a.c.PAGE_SIZE = r0
            int r1 = r0 + (-192)
            com.kwad.sdk.utils.a.c.aKJ = r1
            int r0 = r0 << 1
            r1 = 16384(0x4000, float:2.2959E-41)
            int r0 = java.lang.Math.max(r0, r1)
            com.kwad.sdk.utils.a.c.aKK = r0
            int r0 = r0 << 1
            com.kwad.sdk.utils.a.c.aKL = r0
            return
    }

    c(java.lang.String r4, java.lang.String r5, com.kwad.sdk.utils.a.c.b[] r6, int r7) {
            r3 = this;
            r3.<init>()
            com.kwad.sdk.utils.a.c$d r0 = com.kwad.sdk.utils.a.d.aLr
            r3.aKN = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r3.aKX = r0
            r0 = 0
            r3.aKY = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r3.aLf = r1
            r1 = 1
            r3.aLh = r1
            com.kwad.sdk.utils.a.f r1 = new com.kwad.sdk.utils.a.f
            r1.<init>()
            r3.aLi = r1
            r3.Tt = r4
            r3.name = r5
            r3.aLg = r7
            java.util.HashMap r4 = new java.util.HashMap
            r4.<init>()
            com.kwad.sdk.utils.a.g r5 = com.kwad.sdk.utils.a.g.aLz
            java.lang.String r7 = r5.KA()
            r4.put(r7, r5)
            if (r6 == 0) goto L62
            int r5 = r6.length
            if (r5 <= 0) goto L62
            int r5 = r6.length
        L3c:
            if (r0 >= r5) goto L62
            r7 = r6[r0]
            java.lang.String r1 = r7.KA()
            boolean r2 = r4.containsKey(r1)
            if (r2 == 0) goto L5c
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            java.lang.String r2 = "duplicate encoder tag:"
            r7.<init>(r2)
            r7.append(r1)
            java.lang.String r7 = r7.toString()
            r3.fW(r7)
            goto L5f
        L5c:
            r4.put(r1, r7)
        L5f:
            int r0 = r0 + 1
            goto L3c
        L62:
            r3.aKM = r4
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r4 = r3.aKX
            monitor-enter(r4)
            java.util.concurrent.Executor r5 = com.kwad.sdk.utils.a.d.getExecutor()     // Catch: java.lang.Throwable -> L7f
            com.kwad.sdk.utils.a.c$1 r6 = new com.kwad.sdk.utils.a.c$1     // Catch: java.lang.Throwable -> L7f
            r6.<init>(r3)     // Catch: java.lang.Throwable -> L7f
            r5.execute(r6)     // Catch: java.lang.Throwable -> L7f
        L73:
            boolean r5 = r3.aKY     // Catch: java.lang.Throwable -> L7f
            if (r5 != 0) goto L7d
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r5 = r3.aKX     // Catch: java.lang.InterruptedException -> L73 java.lang.Throwable -> L7f
            r5.wait()     // Catch: java.lang.InterruptedException -> L73 java.lang.Throwable -> L7f
            goto L73
        L7d:
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L7f
            return
        L7f:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L7f
            throw r5
    }

    private int B(int r3, int r4) {
            r2 = this;
            r0 = 536870912(0x20000000, float:1.0842022E-19)
            if (r4 <= r0) goto L18
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "data size out of limit"
            r0.<init>(r1)
            java.lang.Boolean r1 = com.kwad.library.a.a.ml
            boolean r1 = r1.booleanValue()
            if (r1 != 0) goto L17
            r2.r(r0)
            goto L18
        L17:
            throw r0
        L18:
            int r0 = com.kwad.sdk.utils.a.c.PAGE_SIZE
            if (r4 > r0) goto L1d
            return r0
        L1d:
            if (r3 >= r4) goto L28
            int r0 = com.kwad.sdk.utils.a.c.aKK
            if (r3 > r0) goto L26
            int r3 = r3 << 1
            goto L1d
        L26:
            int r3 = r3 + r0
            goto L1d
        L28:
            return r3
    }

    private void C(int r3, int r4) {
            r2 = this;
            int r0 = r2.aLe
            int r1 = r4 - r3
            int r0 = r0 + r1
            r2.aLe = r0
            java.util.ArrayList<com.kwad.sdk.utils.a.c$e> r0 = r2.aLf
            if (r0 == 0) goto L13
            com.kwad.sdk.utils.a.c$e r1 = new com.kwad.sdk.utils.a.c$e
            r1.<init>(r3, r4)
            r0.add(r1)
        L13:
            return
    }

    private synchronized void Kh() {
            r4 = this;
            monitor-enter(r4)
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r0 = r4.aKX     // Catch: java.lang.Throwable -> L6b
            monitor-enter(r0)     // Catch: java.lang.Throwable -> L6b
            r1 = 1
            r4.aKY = r1     // Catch: java.lang.Throwable -> L68
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r1 = r4.aKX     // Catch: java.lang.Throwable -> L68
            r1.notify()     // Catch: java.lang.Throwable -> L68
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L68
            long r0 = java.lang.System.nanoTime()     // Catch: java.lang.Throwable -> L6b
            boolean r2 = r4.Kk()     // Catch: java.lang.Throwable -> L6b
            if (r2 != 0) goto L1e
            int r2 = r4.aLg     // Catch: java.lang.Throwable -> L6b
            if (r2 != 0) goto L1e
            r4.Ki()     // Catch: java.lang.Throwable -> L6b
        L1e:
            com.kwad.sdk.utils.a.b r2 = r4.aKU     // Catch: java.lang.Throwable -> L6b
            if (r2 != 0) goto L2b
            com.kwad.sdk.utils.a.b r2 = new com.kwad.sdk.utils.a.b     // Catch: java.lang.Throwable -> L6b
            int r3 = com.kwad.sdk.utils.a.c.PAGE_SIZE     // Catch: java.lang.Throwable -> L6b
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L6b
            r4.aKU = r2     // Catch: java.lang.Throwable -> L6b
        L2b:
            com.kwad.sdk.utils.a.c$d r2 = r4.aKN     // Catch: java.lang.Throwable -> L6b
            if (r2 == 0) goto L66
            long r2 = java.lang.System.nanoTime()     // Catch: java.lang.Throwable -> L6b
            long r2 = r2 - r0
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r2 = r2 / r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6b
            java.lang.String r1 = "loading finish, data len:"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L6b
            int r1 = r4.aKV     // Catch: java.lang.Throwable -> L6b
            r0.append(r1)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r1 = ", get keys:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L6b
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r1 = r4.aKX     // Catch: java.lang.Throwable -> L6b
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L6b
            r0.append(r1)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r1 = ", use time:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L6b
            r0.append(r2)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r1 = " ms"
            r0.append(r1)     // Catch: java.lang.Throwable -> L6b
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L6b
            r4.info(r0)     // Catch: java.lang.Throwable -> L6b
        L66:
            monitor-exit(r4)
            return
        L68:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L68
            throw r1     // Catch: java.lang.Throwable -> L6b
        L6b:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    private void Ki() {
            r22 = this;
            r1 = r22
            java.lang.String r0 = "rw"
            java.io.File r2 = new java.io.File
            java.lang.String r3 = r1.Tt
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r1.name
            r4.append(r5)
            java.lang.String r5 = ".kva"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r2.<init>(r3, r4)
            java.io.File r3 = new java.io.File
            java.lang.String r4 = r1.Tt
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = r1.name
            r5.append(r6)
            java.lang.String r6 = ".kvb"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r3.<init>(r4, r5)
            boolean r4 = com.kwad.sdk.utils.a.h.ad(r2)     // Catch: java.lang.Throwable -> L1c2
            if (r4 == 0) goto L1b4
            boolean r4 = com.kwad.sdk.utils.a.h.ad(r3)     // Catch: java.lang.Throwable -> L1c2
            if (r4 != 0) goto L46
            goto L1b4
        L46:
            java.io.RandomAccessFile r4 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L1c2
            r4.<init>(r2, r0)     // Catch: java.lang.Throwable -> L1c2
            r1.aKQ = r4     // Catch: java.lang.Throwable -> L1c2
            java.io.RandomAccessFile r4 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L1c2
            r4.<init>(r3, r0)     // Catch: java.lang.Throwable -> L1c2
            r1.aKR = r4     // Catch: java.lang.Throwable -> L1c2
            java.io.RandomAccessFile r0 = r1.aKQ     // Catch: java.lang.Throwable -> L1c2
            long r4 = r0.length()     // Catch: java.lang.Throwable -> L1c2
            java.io.RandomAccessFile r0 = r1.aKR     // Catch: java.lang.Throwable -> L1c2
            long r6 = r0.length()     // Catch: java.lang.Throwable -> L1c2
            java.io.RandomAccessFile r0 = r1.aKQ     // Catch: java.lang.Throwable -> L1c2
            java.nio.channels.FileChannel r0 = r0.getChannel()     // Catch: java.lang.Throwable -> L1c2
            r1.aKO = r0     // Catch: java.lang.Throwable -> L1c2
            java.io.RandomAccessFile r0 = r1.aKR     // Catch: java.lang.Throwable -> L1c2
            java.nio.channels.FileChannel r0 = r0.getChannel()     // Catch: java.lang.Throwable -> L1c2
            r1.aKP = r0     // Catch: java.lang.Throwable -> L1c2
            java.nio.channels.FileChannel r8 = r1.aKO     // Catch: java.io.IOException -> L1a9 java.lang.Throwable -> L1c2
            java.nio.channels.FileChannel$MapMode r9 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.io.IOException -> L1a9 java.lang.Throwable -> L1c2
            r10 = 0
            r14 = 0
            int r0 = (r4 > r14 ? 1 : (r4 == r14 ? 0 : -1))
            if (r0 <= 0) goto L7e
            r12 = r4
            goto L81
        L7e:
            int r12 = com.kwad.sdk.utils.a.c.PAGE_SIZE     // Catch: java.io.IOException -> L1a9 java.lang.Throwable -> L1c2
            long r12 = (long) r12     // Catch: java.io.IOException -> L1a9 java.lang.Throwable -> L1c2
        L81:
            java.nio.MappedByteBuffer r8 = r8.map(r9, r10, r12)     // Catch: java.io.IOException -> L1a9 java.lang.Throwable -> L1c2
            r1.aKS = r8     // Catch: java.io.IOException -> L1a9 java.lang.Throwable -> L1c2
            java.nio.ByteOrder r9 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.io.IOException -> L1a9 java.lang.Throwable -> L1c2
            r8.order(r9)     // Catch: java.io.IOException -> L1a9 java.lang.Throwable -> L1c2
            java.nio.channels.FileChannel r8 = r1.aKP     // Catch: java.io.IOException -> L1a9 java.lang.Throwable -> L1c2
            java.nio.channels.FileChannel$MapMode r17 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.io.IOException -> L1a9 java.lang.Throwable -> L1c2
            r18 = 0
            int r9 = (r6 > r14 ? 1 : (r6 == r14 ? 0 : -1))
            if (r9 <= 0) goto L99
            r20 = r6
            goto L9e
        L99:
            int r10 = com.kwad.sdk.utils.a.c.PAGE_SIZE     // Catch: java.io.IOException -> L1a9 java.lang.Throwable -> L1c2
            long r10 = (long) r10     // Catch: java.io.IOException -> L1a9 java.lang.Throwable -> L1c2
            r20 = r10
        L9e:
            r16 = r8
            java.nio.MappedByteBuffer r8 = r16.map(r17, r18, r20)     // Catch: java.io.IOException -> L1a9 java.lang.Throwable -> L1c2
            r1.aKT = r8     // Catch: java.io.IOException -> L1a9 java.lang.Throwable -> L1c2
            java.nio.ByteOrder r10 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.io.IOException -> L1a9 java.lang.Throwable -> L1c2
            r8.order(r10)     // Catch: java.io.IOException -> L1a9 java.lang.Throwable -> L1c2
            com.kwad.sdk.utils.a.b r2 = new com.kwad.sdk.utils.a.b     // Catch: java.lang.Throwable -> L1c2
            java.nio.MappedByteBuffer r3 = r1.aKS     // Catch: java.lang.Throwable -> L1c2
            int r3 = r3.capacity()     // Catch: java.lang.Throwable -> L1c2
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1c2
            r1.aKU = r2     // Catch: java.lang.Throwable -> L1c2
            r2 = 12
            if (r0 != 0) goto Lc2
            if (r9 != 0) goto Lc2
            r1.aKV = r2     // Catch: java.lang.Throwable -> L1c2
            goto L1cc
        Lc2:
            java.nio.MappedByteBuffer r0 = r1.aKS     // Catch: java.lang.Throwable -> L1c2
            int r0 = r0.getInt()     // Catch: java.lang.Throwable -> L1c2
            java.nio.MappedByteBuffer r3 = r1.aKS     // Catch: java.lang.Throwable -> L1c2
            long r8 = r3.getLong()     // Catch: java.lang.Throwable -> L1c2
            java.nio.MappedByteBuffer r3 = r1.aKT     // Catch: java.lang.Throwable -> L1c2
            int r3 = r3.getInt()     // Catch: java.lang.Throwable -> L1c2
            java.nio.MappedByteBuffer r10 = r1.aKT     // Catch: java.lang.Throwable -> L1c2
            long r10 = r10.getLong()     // Catch: java.lang.Throwable -> L1c2
            r13 = 12
            r15 = 0
            r17 = r3
            if (r0 < 0) goto L112
            long r2 = (long) r0     // Catch: java.lang.Throwable -> L1c2
            long r18 = r4 - r13
            int r2 = (r2 > r18 ? 1 : (r2 == r18 ? 0 : -1))
            if (r2 > 0) goto L112
            int r2 = r0 + 12
            r1.aKV = r2     // Catch: java.lang.Throwable -> L1c2
            java.nio.MappedByteBuffer r2 = r1.aKS     // Catch: java.lang.Throwable -> L1c2
            r2.rewind()     // Catch: java.lang.Throwable -> L1c2
            java.nio.MappedByteBuffer r2 = r1.aKS     // Catch: java.lang.Throwable -> L1c2
            com.kwad.sdk.utils.a.b r3 = r1.aKU     // Catch: java.lang.Throwable -> L1c2
            byte[] r3 = r3.aKG     // Catch: java.lang.Throwable -> L1c2
            int r12 = r1.aKV     // Catch: java.lang.Throwable -> L1c2
            r2.get(r3, r15, r12)     // Catch: java.lang.Throwable -> L1c2
            com.kwad.sdk.utils.a.b r2 = r1.aKU     // Catch: java.lang.Throwable -> L1c2
            r3 = 12
            long r19 = r2.A(r3, r0)     // Catch: java.lang.Throwable -> L1c2
            int r0 = (r8 > r19 ? 1 : (r8 == r19 ? 0 : -1))
            if (r0 != 0) goto L112
            int r0 = r22.Kl()     // Catch: java.lang.Throwable -> L1c2
            if (r0 != 0) goto L112
            r1.aKW = r8     // Catch: java.lang.Throwable -> L1c2
            r0 = 1
            goto L113
        L112:
            r0 = r15
        L113:
            if (r0 == 0) goto L134
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto L11f
            boolean r0 = r22.Kj()     // Catch: java.lang.Throwable -> L1c2
            if (r0 != 0) goto L1a8
        L11f:
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Throwable -> L1c2
            java.lang.String r2 = "B file error"
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L1c2
            r1.g(r0)     // Catch: java.lang.Throwable -> L1c2
            java.nio.MappedByteBuffer r0 = r1.aKS     // Catch: java.lang.Throwable -> L1c2
            java.nio.MappedByteBuffer r2 = r1.aKT     // Catch: java.lang.Throwable -> L1c2
            int r3 = r1.aKV     // Catch: java.lang.Throwable -> L1c2
            r1.a(r0, r2, r3)     // Catch: java.lang.Throwable -> L1c2
            goto L1cc
        L134:
            if (r17 < 0) goto L19d
            r0 = r17
            long r2 = (long) r0     // Catch: java.lang.Throwable -> L1c2
            long r6 = r6 - r13
            int r2 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r2 > 0) goto L19d
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r2 = r1.aKX     // Catch: java.lang.Throwable -> L1c2
            r2.clear()     // Catch: java.lang.Throwable -> L1c2
            r22.Ky()     // Catch: java.lang.Throwable -> L1c2
            int r3 = r0 + 12
            r1.aKV = r3     // Catch: java.lang.Throwable -> L1c2
            com.kwad.sdk.utils.a.b r2 = r1.aKU     // Catch: java.lang.Throwable -> L1c2
            byte[] r2 = r2.aKG     // Catch: java.lang.Throwable -> L1c2
            int r2 = r2.length     // Catch: java.lang.Throwable -> L1c2
            java.nio.MappedByteBuffer r3 = r1.aKT     // Catch: java.lang.Throwable -> L1c2
            int r3 = r3.capacity()     // Catch: java.lang.Throwable -> L1c2
            if (r2 == r3) goto L164
            com.kwad.sdk.utils.a.b r2 = new com.kwad.sdk.utils.a.b     // Catch: java.lang.Throwable -> L1c2
            java.nio.MappedByteBuffer r3 = r1.aKT     // Catch: java.lang.Throwable -> L1c2
            int r3 = r3.capacity()     // Catch: java.lang.Throwable -> L1c2
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1c2
            r1.aKU = r2     // Catch: java.lang.Throwable -> L1c2
        L164:
            java.nio.MappedByteBuffer r2 = r1.aKT     // Catch: java.lang.Throwable -> L1c2
            r2.rewind()     // Catch: java.lang.Throwable -> L1c2
            java.nio.MappedByteBuffer r2 = r1.aKT     // Catch: java.lang.Throwable -> L1c2
            com.kwad.sdk.utils.a.b r3 = r1.aKU     // Catch: java.lang.Throwable -> L1c2
            byte[] r3 = r3.aKG     // Catch: java.lang.Throwable -> L1c2
            int r4 = r1.aKV     // Catch: java.lang.Throwable -> L1c2
            r2.get(r3, r15, r4)     // Catch: java.lang.Throwable -> L1c2
            com.kwad.sdk.utils.a.b r2 = r1.aKU     // Catch: java.lang.Throwable -> L1c2
            r3 = 12
            long r2 = r2.A(r3, r0)     // Catch: java.lang.Throwable -> L1c2
            int r0 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r0 != 0) goto L19d
            int r0 = r22.Kl()     // Catch: java.lang.Throwable -> L1c2
            if (r0 != 0) goto L19d
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Throwable -> L1c2
            java.lang.String r2 = "A file error"
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L1c2
            r1.g(r0)     // Catch: java.lang.Throwable -> L1c2
            java.nio.MappedByteBuffer r0 = r1.aKT     // Catch: java.lang.Throwable -> L1c2
            java.nio.MappedByteBuffer r2 = r1.aKS     // Catch: java.lang.Throwable -> L1c2
            int r3 = r1.aKV     // Catch: java.lang.Throwable -> L1c2
            r1.a(r0, r2, r3)     // Catch: java.lang.Throwable -> L1c2
            r1.aKW = r10     // Catch: java.lang.Throwable -> L1c2
            r12 = 1
            goto L19e
        L19d:
            r12 = r15
        L19e:
            if (r12 != 0) goto L1a8
            java.lang.String r0 = "both files error"
            r1.fW(r0)     // Catch: java.lang.Throwable -> L1c2
            r22.Kr()     // Catch: java.lang.Throwable -> L1c2
        L1a8:
            return
        L1a9:
            r0 = move-exception
            r1.r(r0)     // Catch: java.lang.Throwable -> L1c2
            r22.Kq()     // Catch: java.lang.Throwable -> L1c2
            r1.h(r2, r3)     // Catch: java.lang.Throwable -> L1c2
            return
        L1b4:
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Throwable -> L1c2
            java.lang.String r2 = "open file failed"
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L1c2
            r1.r(r0)     // Catch: java.lang.Throwable -> L1c2
            r22.Kq()     // Catch: java.lang.Throwable -> L1c2
            return
        L1c2:
            r0 = move-exception
            r1.r(r0)
            r22.Ks()
            r22.Kq()
        L1cc:
            return
    }

    private boolean Kj() {
            r6 = this;
            com.kwad.sdk.utils.a.b r0 = new com.kwad.sdk.utils.a.b
            int r1 = r6.aKV
            r0.<init>(r1)
            java.nio.MappedByteBuffer r1 = r6.aKT
            r2 = 0
            if (r1 == 0) goto L18
            r1.rewind()
            java.nio.MappedByteBuffer r1 = r6.aKT
            byte[] r3 = r0.aKG
            int r4 = r6.aKV
            r1.get(r3, r2, r4)
        L18:
            com.kwad.sdk.utils.a.b r1 = r6.aKU
            if (r1 == 0) goto L2f
            byte[] r1 = r1.aKG
            byte[] r0 = r0.aKG
            r3 = r2
        L21:
            int r4 = r6.aKV
            if (r3 >= r4) goto L2f
            r4 = r1[r3]
            r5 = r0[r3]
            if (r4 == r5) goto L2c
            return r2
        L2c:
            int r3 = r3 + 1
            goto L21
        L2f:
            r0 = 1
            return r0
    }

    private boolean Kk() {
            r6 = this;
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r6.Tt
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r6.name
            r2.append(r3)
            java.lang.String r3 = ".kvc"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r0.<init>(r1, r2)
            java.io.File r1 = new java.io.File
            java.lang.String r2 = r6.Tt
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = r6.name
            r3.append(r4)
            java.lang.String r4 = ".tmp"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r1.<init>(r2, r3)
            r2 = 0
            r3 = 1
            r4 = 0
            boolean r5 = r0.exists()     // Catch: java.lang.Exception -> Lb9
            if (r5 == 0) goto L3e
            goto L47
        L3e:
            boolean r0 = r1.exists()     // Catch: java.lang.Exception -> Lb9
            if (r0 == 0) goto L46
            r0 = r1
            goto L47
        L46:
            r0 = r2
        L47:
            if (r0 == 0) goto L70
            boolean r0 = r6.ac(r0)     // Catch: java.lang.Exception -> Lb9
            if (r0 == 0) goto L69
            int r0 = r6.aLg     // Catch: java.lang.Exception -> Lb9
            if (r0 != 0) goto Lb7
            com.kwad.sdk.utils.a.b r0 = r6.aKU     // Catch: java.lang.Exception -> Lb9
            boolean r0 = r6.a(r0)     // Catch: java.lang.Exception -> Lb9
            if (r0 == 0) goto L66
            java.lang.String r0 = "recover from c file"
            r6.info(r0)     // Catch: java.lang.Exception -> Lb9
            r6.Kp()     // Catch: java.lang.Exception -> L64
            goto Lbe
        L64:
            r0 = move-exception
            goto Lbb
        L66:
            r6.aLg = r3     // Catch: java.lang.Exception -> Lb9
            goto Lb7
        L69:
            r6.Ks()     // Catch: java.lang.Exception -> Lb9
            r6.Kp()     // Catch: java.lang.Exception -> Lb9
            goto Lb7
        L70:
            int r0 = r6.aLg     // Catch: java.lang.Exception -> Lb9
            if (r0 == 0) goto Lb7
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> Lb9
            java.lang.String r1 = r6.Tt     // Catch: java.lang.Exception -> Lb9
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb9
            r2.<init>()     // Catch: java.lang.Exception -> Lb9
            java.lang.String r3 = r6.name     // Catch: java.lang.Exception -> Lb9
            r2.append(r3)     // Catch: java.lang.Exception -> Lb9
            java.lang.String r3 = ".kva"
            r2.append(r3)     // Catch: java.lang.Exception -> Lb9
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lb9
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> Lb9
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> Lb9
            java.lang.String r2 = r6.Tt     // Catch: java.lang.Exception -> Lb9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb9
            r3.<init>()     // Catch: java.lang.Exception -> Lb9
            java.lang.String r5 = r6.name     // Catch: java.lang.Exception -> Lb9
            r3.append(r5)     // Catch: java.lang.Exception -> Lb9
            java.lang.String r5 = ".kvb"
            r3.append(r5)     // Catch: java.lang.Exception -> Lb9
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Lb9
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> Lb9
            boolean r2 = r0.exists()     // Catch: java.lang.Exception -> Lb9
            if (r2 == 0) goto Lb7
            boolean r2 = r1.exists()     // Catch: java.lang.Exception -> Lb9
            if (r2 == 0) goto Lb7
            r6.h(r0, r1)     // Catch: java.lang.Exception -> Lb9
        Lb7:
            r3 = r4
            goto Lbe
        Lb9:
            r0 = move-exception
            r3 = r4
        Lbb:
            r6.r(r0)
        Lbe:
            return r3
    }

    private int Kl() {
            r13 = this;
            com.kwad.sdk.utils.a.b r0 = r13.aKU
            r1 = 12
            r0.position = r1
        L6:
            r1 = -1
            int r2 = r0.position     // Catch: java.lang.Exception -> L170
            int r3 = r13.aKV     // Catch: java.lang.Exception -> L170
            java.lang.String r4 = "parse dara failed"
            r5 = 0
            if (r2 >= r3) goto L160
            int r7 = r0.position     // Catch: java.lang.Exception -> L170
            byte r2 = r0.get()     // Catch: java.lang.Exception -> L170
            r3 = r2 & 63
            byte r3 = (byte) r3     // Catch: java.lang.Exception -> L170
            if (r3 <= 0) goto L15a
            r6 = 8
            if (r3 > r6) goto L15a
            byte r6 = r0.get()     // Catch: java.lang.Exception -> L170
            r6 = r6 & 255(0xff, float:3.57E-43)
            r8 = 65535(0xffff, float:9.1834E-41)
            r9 = 5
            if (r2 >= 0) goto L4b
            int r2 = r0.position     // Catch: java.lang.Exception -> L170
            int r2 = r2 + r6
            r0.position = r2     // Catch: java.lang.Exception -> L170
            if (r3 > r9) goto L37
            int[] r2 = com.kwad.sdk.utils.a.c.aKH     // Catch: java.lang.Exception -> L170
            r2 = r2[r3]     // Catch: java.lang.Exception -> L170
            goto L3c
        L37:
            short r2 = r0.getShort()     // Catch: java.lang.Exception -> L170
            r2 = r2 & r8
        L3c:
            com.kwad.sdk.utils.a.b r3 = r13.aKU     // Catch: java.lang.Exception -> L170
            int r4 = r3.position     // Catch: java.lang.Exception -> L170
            int r4 = r4 + r2
            r3.position = r4     // Catch: java.lang.Exception -> L170
            com.kwad.sdk.utils.a.b r2 = r13.aKU     // Catch: java.lang.Exception -> L170
            int r2 = r2.position     // Catch: java.lang.Exception -> L170
            r13.C(r7, r2)     // Catch: java.lang.Exception -> L170
            goto L6
        L4b:
            java.lang.String r12 = r0.getString(r6)     // Catch: java.lang.Exception -> L170
            int r6 = r0.position     // Catch: java.lang.Exception -> L170
            r10 = 1
            if (r3 > r9) goto La1
            if (r3 == r10) goto L92
            r2 = 2
            if (r3 == r2) goto L86
            r2 = 3
            if (r3 == r2) goto L7a
            r2 = 4
            if (r3 == r2) goto L6e
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r2 = r13.aKX     // Catch: java.lang.Exception -> L170
            com.kwad.sdk.utils.a.a$d r3 = new com.kwad.sdk.utils.a.a$d     // Catch: java.lang.Exception -> L170
            double r4 = r0.getDouble()     // Catch: java.lang.Exception -> L170
            r3.<init>(r6, r4)     // Catch: java.lang.Exception -> L170
        L6a:
            r2.put(r12, r3)     // Catch: java.lang.Exception -> L170
            goto L6
        L6e:
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r2 = r13.aKX     // Catch: java.lang.Exception -> L170
            com.kwad.sdk.utils.a.a$g r3 = new com.kwad.sdk.utils.a.a$g     // Catch: java.lang.Exception -> L170
            long r4 = r0.getLong()     // Catch: java.lang.Exception -> L170
            r3.<init>(r6, r4)     // Catch: java.lang.Exception -> L170
            goto L6a
        L7a:
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r2 = r13.aKX     // Catch: java.lang.Exception -> L170
            com.kwad.sdk.utils.a.a$e r3 = new com.kwad.sdk.utils.a.a$e     // Catch: java.lang.Exception -> L170
            float r4 = r0.getFloat()     // Catch: java.lang.Exception -> L170
            r3.<init>(r6, r4)     // Catch: java.lang.Exception -> L170
            goto L6a
        L86:
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r2 = r13.aKX     // Catch: java.lang.Exception -> L170
            com.kwad.sdk.utils.a.a$f r3 = new com.kwad.sdk.utils.a.a$f     // Catch: java.lang.Exception -> L170
            int r4 = r0.getInt()     // Catch: java.lang.Exception -> L170
            r3.<init>(r6, r4)     // Catch: java.lang.Exception -> L170
            goto L6a
        L92:
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r2 = r13.aKX     // Catch: java.lang.Exception -> L170
            com.kwad.sdk.utils.a.a$c r3 = new com.kwad.sdk.utils.a.a$c     // Catch: java.lang.Exception -> L170
            byte r4 = r0.get()     // Catch: java.lang.Exception -> L170
            if (r4 != r10) goto L9d
            r5 = r10
        L9d:
            r3.<init>(r6, r5)     // Catch: java.lang.Exception -> L170
            goto L6a
        La1:
            short r9 = r0.getShort()     // Catch: java.lang.Exception -> L170
            r11 = r9 & r8
            r2 = r2 & 64
            if (r2 == 0) goto Lac
            r5 = r10
        Lac:
            d(r11, r5)     // Catch: java.lang.Exception -> L170
            r2 = 6
            if (r3 == r2) goto L140
            r2 = 7
            if (r3 == r2) goto L126
            if (r5 == 0) goto Lc9
            java.lang.String r9 = r0.getString(r11)     // Catch: java.lang.Exception -> L170
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r2 = r13.aKX     // Catch: java.lang.Exception -> L170
            com.kwad.sdk.utils.a.a$h r3 = new com.kwad.sdk.utils.a.a$h     // Catch: java.lang.Exception -> L170
            int r8 = r6 + 2
            r4 = 1
            r6 = r3
            r10 = r11
            r11 = r4
            r6.<init>(r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> L170
            goto L6a
        Lc9:
            byte r2 = r0.get()     // Catch: java.lang.Exception -> L170
            r2 = r2 & 255(0xff, float:3.57E-43)
            java.lang.String r3 = r0.getString(r2)     // Catch: java.lang.Exception -> L170
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.c$b> r5 = r13.aKM     // Catch: java.lang.Exception -> L170
            java.lang.Object r5 = r5.get(r3)     // Catch: java.lang.Exception -> L170
            com.kwad.sdk.utils.a.c$b r5 = (com.kwad.sdk.utils.a.c.b) r5     // Catch: java.lang.Exception -> L170
            int r2 = r2 + 1
            int r2 = r11 - r2
            if (r2 < 0) goto L120
            if (r5 == 0) goto L103
            byte[] r3 = r0.aKG     // Catch: java.lang.Exception -> Lfe
            int r4 = r0.position     // Catch: java.lang.Exception -> Lfe
            java.lang.Object r9 = r5.g(r3, r4, r2)     // Catch: java.lang.Exception -> Lfe
            if (r9 == 0) goto L119
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r3 = r13.aKX     // Catch: java.lang.Exception -> Lfe
            com.kwad.sdk.utils.a.a$h r4 = new com.kwad.sdk.utils.a.a$h     // Catch: java.lang.Exception -> Lfe
            int r8 = r6 + 2
            r5 = 0
            r6 = r4
            r10 = r11
            r11 = r5
            r6.<init>(r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> Lfe
            r3.put(r12, r4)     // Catch: java.lang.Exception -> Lfe
            goto L119
        Lfe:
            r3 = move-exception
            r13.r(r3)     // Catch: java.lang.Exception -> L170
            goto L119
        L103:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L170
            java.lang.String r5 = "object with tag: "
            r4.<init>(r5)     // Catch: java.lang.Exception -> L170
            r4.append(r3)     // Catch: java.lang.Exception -> L170
            java.lang.String r3 = " without encoder"
            r4.append(r3)     // Catch: java.lang.Exception -> L170
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Exception -> L170
            r13.fW(r3)     // Catch: java.lang.Exception -> L170
        L119:
            int r3 = r0.position     // Catch: java.lang.Exception -> L170
            int r3 = r3 + r2
            r0.position = r3     // Catch: java.lang.Exception -> L170
            goto L6
        L120:
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Exception -> L170
            r0.<init>(r4)     // Catch: java.lang.Exception -> L170
            throw r0     // Catch: java.lang.Exception -> L170
        L126:
            if (r5 == 0) goto L12d
            java.lang.String r2 = r0.getString(r11)     // Catch: java.lang.Exception -> L170
            goto L131
        L12d:
            byte[] r2 = r0.getBytes(r11)     // Catch: java.lang.Exception -> L170
        L131:
            r9 = r2
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r2 = r13.aKX     // Catch: java.lang.Exception -> L170
            com.kwad.sdk.utils.a.a$a r3 = new com.kwad.sdk.utils.a.a$a     // Catch: java.lang.Exception -> L170
            int r8 = r6 + 2
            r6 = r3
            r10 = r11
            r11 = r5
            r6.<init>(r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> L170
            goto L6a
        L140:
            if (r5 == 0) goto L147
            java.lang.String r2 = r0.di(r11)     // Catch: java.lang.Exception -> L170
            goto L14b
        L147:
            java.lang.String r2 = r0.getString(r11)     // Catch: java.lang.Exception -> L170
        L14b:
            r9 = r2
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r2 = r13.aKX     // Catch: java.lang.Exception -> L170
            com.kwad.sdk.utils.a.a$i r3 = new com.kwad.sdk.utils.a.a$i     // Catch: java.lang.Exception -> L170
            int r8 = r6 + 2
            r6 = r3
            r10 = r11
            r11 = r5
            r6.<init>(r7, r8, r9, r10, r11)     // Catch: java.lang.Exception -> L170
            goto L6a
        L15a:
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Exception -> L170
            r0.<init>(r4)     // Catch: java.lang.Exception -> L170
            throw r0     // Catch: java.lang.Exception -> L170
        L160:
            int r0 = r0.position
            int r2 = r13.aKV
            if (r0 == r2) goto L16f
            java.lang.Exception r0 = new java.lang.Exception
            r0.<init>(r4)
            r13.g(r0)
            return r1
        L16f:
            return r5
        L170:
            r0 = move-exception
            r13.g(r0)
            return r1
    }

    private void Km() {
            r1 = this;
            int r0 = r1.aLg
            if (r0 == 0) goto Lb
            boolean r0 = r1.aLh
            if (r0 == 0) goto Lb
            r1.Kn()
        Lb:
            return
    }

    private boolean Kn() {
            r3 = this;
            int r0 = r3.aLg
            r1 = 1
            if (r0 != r1) goto L12
            java.util.concurrent.Executor r0 = r3.aLi
            if (r0 == 0) goto L1a
            com.kwad.sdk.utils.a.c$2 r2 = new com.kwad.sdk.utils.a.c$2
            r2.<init>(r3)
            r0.execute(r2)
            goto L1a
        L12:
            r2 = 2
            if (r0 != r2) goto L1a
            boolean r0 = r3.Ko()
            return r0
        L1a:
            return r1
    }

    private synchronized boolean Ko() {
            r6 = this;
            monitor-enter(r6)
            r0 = 0
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r2 = r6.Tt     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r3.<init>()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r4 = r6.name     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r3.append(r4)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r4 = ".tmp"
            r3.append(r4)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            boolean r2 = com.kwad.sdk.utils.a.h.ad(r1)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            if (r2 == 0) goto L7b
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r3 = "rw"
            r2.<init>(r1, r3)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            int r3 = r6.aKV     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            long r3 = (long) r3     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r2.setLength(r3)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            com.kwad.sdk.utils.a.b r3 = r6.aKU     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            byte[] r3 = r3.aKG     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            int r4 = r6.aKV     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r2.write(r3, r0, r4)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r2.close()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r3 = r6.Tt     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r4.<init>()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r5 = r6.name     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r4.append(r5)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r5 = ".kvc"
            r4.append(r5)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            boolean r3 = r2.exists()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            if (r3 == 0) goto L61
            boolean r3 = r2.delete()     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            if (r3 == 0) goto L7b
        L61:
            boolean r1 = r1.renameTo(r2)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            if (r1 == 0) goto L6a
            r0 = 1
            monitor-exit(r6)
            return r0
        L6a:
            java.lang.Exception r1 = new java.lang.Exception     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            java.lang.String r2 = "rename failed"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            r6.g(r1)     // Catch: java.lang.Throwable -> L75 java.lang.Exception -> L77
            goto L7b
        L75:
            r0 = move-exception
            goto L7d
        L77:
            r1 = move-exception
            r6.r(r1)     // Catch: java.lang.Throwable -> L75
        L7b:
            monitor-exit(r6)
            return r0
        L7d:
            monitor-exit(r6)
            throw r0
    }

    private void Kp() {
            r4 = this;
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L3b
            java.lang.String r1 = r4.Tt     // Catch: java.lang.Exception -> L3b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3b
            r2.<init>()     // Catch: java.lang.Exception -> L3b
            java.lang.String r3 = r4.name     // Catch: java.lang.Exception -> L3b
            r2.append(r3)     // Catch: java.lang.Exception -> L3b
            java.lang.String r3 = ".kvc"
            r2.append(r3)     // Catch: java.lang.Exception -> L3b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L3b
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L3b
            com.kwad.sdk.utils.a.h.h(r0)     // Catch: java.lang.Exception -> L3b
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L3b
            java.lang.String r1 = r4.Tt     // Catch: java.lang.Exception -> L3b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L3b
            r2.<init>()     // Catch: java.lang.Exception -> L3b
            java.lang.String r3 = r4.name     // Catch: java.lang.Exception -> L3b
            r2.append(r3)     // Catch: java.lang.Exception -> L3b
            java.lang.String r3 = ".tmp"
            r2.append(r3)     // Catch: java.lang.Exception -> L3b
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L3b
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L3b
            com.kwad.sdk.utils.a.h.h(r0)     // Catch: java.lang.Exception -> L3b
            return
        L3b:
            r0 = move-exception
            r4.r(r0)
            return
    }

    private void Kq() {
            r1 = this;
            r0 = 1
            r1.aLg = r0
            java.nio.channels.FileChannel r0 = r1.aKO
            com.kwad.sdk.utils.a.h.closeQuietly(r0)
            java.nio.channels.FileChannel r0 = r1.aKP
            com.kwad.sdk.utils.a.h.closeQuietly(r0)
            r0 = 0
            r1.aKO = r0
            r1.aKP = r0
            r1.aKS = r0
            r1.aKT = r0
            return
    }

    private void Kr() {
            r3 = this;
            int r0 = r3.aLg
            if (r0 != 0) goto L12
            java.nio.MappedByteBuffer r0 = r3.aKS     // Catch: java.lang.Throwable -> Lf
            r3.a(r0)     // Catch: java.lang.Throwable -> Lf
            java.nio.MappedByteBuffer r0 = r3.aKT     // Catch: java.lang.Throwable -> Lf
            r3.a(r0)     // Catch: java.lang.Throwable -> Lf
            goto L12
        Lf:
            r3.Kq()
        L12:
            r3.Ks()
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.Tt
            r1.append(r2)
            java.lang.String r2 = r3.name
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            com.kwad.sdk.utils.a.h.h(r0)
            return
    }

    private void Ks() {
            r4 = this;
            r0 = 12
            r4.aKV = r0
            r0 = 0
            r4.aKW = r0
            r4.Ky()
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r2 = r4.aKX
            r2.clear()
            com.kwad.sdk.utils.a.b r2 = r4.aKU
            if (r2 == 0) goto L29
            byte[] r2 = r2.aKG
            int r2 = r2.length
            int r3 = com.kwad.sdk.utils.a.c.PAGE_SIZE
            if (r2 == r3) goto L1c
            goto L29
        L1c:
            com.kwad.sdk.utils.a.b r2 = r4.aKU
            r3 = 0
            r2.y(r3, r3)
            com.kwad.sdk.utils.a.b r2 = r4.aKU
            r3 = 4
            r2.g(r3, r0)
            return
        L29:
            com.kwad.sdk.utils.a.b r0 = new com.kwad.sdk.utils.a.b
            int r1 = com.kwad.sdk.utils.a.c.PAGE_SIZE
            r0.<init>(r1)
            r4.aKU = r0
            return
    }

    private void Kt() {
            r5 = this;
            com.kwad.sdk.utils.a.b r0 = r5.aKU
            if (r0 == 0) goto L12
            long r1 = r5.aKW
            int r3 = r5.aKZ
            int r4 = r5.aLa
            long r3 = r0.A(r3, r4)
            long r0 = r1 ^ r3
            r5.aKW = r0
        L12:
            int r0 = r5.aLg
            r1 = 0
            if (r0 != 0) goto L35
            java.nio.MappedByteBuffer r0 = r5.aKS
            if (r0 == 0) goto L2d
            r2 = -1
            r0.putInt(r1, r2)
            java.nio.MappedByteBuffer r0 = r5.aKS
            r5.b(r0)
            java.nio.MappedByteBuffer r0 = r5.aKS
            int r2 = r5.aKV
            int r2 = r2 + (-12)
            r0.putInt(r1, r2)
        L2d:
            java.nio.MappedByteBuffer r0 = r5.aKT
            if (r0 == 0) goto L4e
            r5.b(r0)
            goto L4e
        L35:
            boolean r0 = r5.aLc
            if (r0 == 0) goto L44
            com.kwad.sdk.utils.a.b r0 = r5.aKU
            if (r0 == 0) goto L44
            int r2 = r5.aKV
            int r2 = r2 + (-12)
            r0.y(r1, r2)
        L44:
            com.kwad.sdk.utils.a.b r0 = r5.aKU
            if (r0 == 0) goto L4e
            r2 = 4
            long r3 = r5.aKW
            r0.g(r2, r3)
        L4e:
            r5.aLc = r1
            r5.aLb = r1
            r5.aLa = r1
            return
    }

    private int Ku() {
            r3 = this;
            int r0 = r3.aKV
            r1 = 16384(0x4000, float:2.2959E-41)
            if (r0 > r1) goto L9
            r0 = 4096(0x1000, float:5.74E-42)
            return r0
        L9:
            r2 = 65536(0x10000, float:9.1835E-41)
            if (r0 > r2) goto L10
            r0 = 8192(0x2000, float:1.148E-41)
            return r0
        L10:
            return r1
    }

    private void Kv() {
            r2 = this;
            int r0 = r2.aLa
            r2.dn(r0)
            int r0 = r2.aKV
            r2.aKZ = r0
            int r1 = r2.aLa
            int r1 = r1 + r0
            r2.aKV = r1
            com.kwad.sdk.utils.a.b r1 = r2.aKU
            if (r1 == 0) goto L14
            r1.position = r0
        L14:
            r0 = 1
            r2.aLc = r0
            return
    }

    private void Kw() {
            r3 = this;
            int r0 = r3.aLe
            int r1 = r3.Ku()
            int r1 = r1 << 1
            if (r0 >= r1) goto L1d
            java.util.ArrayList<com.kwad.sdk.utils.a.c$e> r0 = r3.aLf
            int r0 = r0.size()
            int r1 = r3.aKV
            r2 = 16384(0x4000, float:2.2959E-41)
            if (r1 >= r2) goto L19
            r1 = 80
            goto L1b
        L19:
            r1 = 160(0xa0, float:2.24E-43)
        L1b:
            if (r0 < r1) goto L21
        L1d:
            r0 = 0
            r3.do(r0)
        L21:
            return
    }

    private void Kx() {
            r5 = this;
            java.util.ArrayList<com.kwad.sdk.utils.a.c$e> r0 = r5.aLf
            if (r0 != 0) goto L5
            return
        L5:
            int r0 = r0.size()
            int r0 = r0 + (-1)
            java.util.ArrayList<com.kwad.sdk.utils.a.c$e> r1 = r5.aLf
            java.lang.Object r1 = r1.get(r0)
            com.kwad.sdk.utils.a.c$e r1 = (com.kwad.sdk.utils.a.c.e) r1
        L13:
            if (r0 <= 0) goto L32
            java.util.ArrayList<com.kwad.sdk.utils.a.c$e> r2 = r5.aLf
            int r0 = r0 + (-1)
            java.lang.Object r2 = r2.get(r0)
            com.kwad.sdk.utils.a.c$e r2 = (com.kwad.sdk.utils.a.c.e) r2
            int r3 = r1.start
            int r4 = r2.end
            if (r3 != r4) goto L30
            int r1 = r1.end
            r2.end = r1
            java.util.ArrayList<com.kwad.sdk.utils.a.c$e> r1 = r5.aLf
            int r3 = r0 + 1
            r1.remove(r3)
        L30:
            r1 = r2
            goto L13
        L32:
            return
    }

    private void Ky() {
            r1 = this;
            r0 = 0
            r1.aLe = r0
            java.util.ArrayList<com.kwad.sdk.utils.a.c$e> r0 = r1.aLf
            if (r0 == 0) goto La
            r0.clear()
        La:
            return
    }

    private int a(java.lang.String r5, byte[] r6, byte r7) {
            r4 = this;
            r0 = 0
            r4.aLd = r0
            int r0 = r6.length
            r1 = 2048(0x800, float:2.87E-42)
            if (r0 >= r1) goto Ld
            int r5 = r4.b(r5, r6, r7)
            return r5
        Ld:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "large value, key: "
            r0.<init>(r1)
            r0.append(r5)
            java.lang.String r1 = ", size: "
            r0.append(r1)
            int r1 = r6.length
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r4.info(r0)
            java.lang.String r0 = com.kwad.sdk.utils.a.h.KC()
            java.io.File r1 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r4.Tt
            r2.append(r3)
            java.lang.String r3 = r4.name
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r0)
            boolean r6 = com.kwad.sdk.utils.a.h.a(r1, r6)
            r1 = 0
            if (r6 == 0) goto L5b
            r4.aLd = r0
            r6 = 32
            byte[] r2 = new byte[r6]
            r0.getBytes(r1, r6, r2, r1)
            r6 = r7 | 64
            byte r6 = (byte) r6
            int r5 = r4.b(r5, r2, r6)
            return r5
        L5b:
            java.lang.String r5 = "save large value failed"
            r4.fW(r5)
            return r1
    }

    private java.lang.Object a(com.kwad.sdk.utils.a.a.h r5) {
            r4 = this;
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.Tt
            r1.append(r2)
            java.lang.String r2 = r4.name
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.Object r5 = r5.value
            java.lang.String r5 = (java.lang.String) r5
            r0.<init>(r1, r5)
            byte[] r5 = com.kwad.sdk.utils.a.h.ae(r0)     // Catch: java.lang.Exception -> L60
            if (r5 == 0) goto L58
            r0 = 0
            r0 = r5[r0]     // Catch: java.lang.Exception -> L60
            r0 = r0 & 255(0xff, float:3.57E-43)
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L60
            java.nio.charset.Charset r2 = com.kwad.sdk.utils.a.b.UTF_8     // Catch: java.lang.Exception -> L60
            r3 = 1
            r1.<init>(r5, r3, r0, r2)     // Catch: java.lang.Exception -> L60
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.c$b> r2 = r4.aKM     // Catch: java.lang.Exception -> L60
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Exception -> L60
            com.kwad.sdk.utils.a.c$b r2 = (com.kwad.sdk.utils.a.c.b) r2     // Catch: java.lang.Exception -> L60
            if (r2 == 0) goto L41
            int r0 = r0 + r3
            int r1 = r5.length     // Catch: java.lang.Exception -> L60
            int r1 = r1 - r0
            java.lang.Object r5 = r2.g(r5, r0, r1)     // Catch: java.lang.Exception -> L60
            return r5
        L41:
            java.lang.Exception r5 = new java.lang.Exception     // Catch: java.lang.Exception -> L60
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L60
            java.lang.String r2 = "No encoder for tag:"
            r0.<init>(r2)     // Catch: java.lang.Exception -> L60
            r0.append(r1)     // Catch: java.lang.Exception -> L60
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L60
            r5.<init>(r0)     // Catch: java.lang.Exception -> L60
        L54:
            r4.g(r5)     // Catch: java.lang.Exception -> L60
            goto L64
        L58:
            java.lang.Exception r5 = new java.lang.Exception     // Catch: java.lang.Exception -> L60
            java.lang.String r0 = "Read object data failed"
            r5.<init>(r0)     // Catch: java.lang.Exception -> L60
            goto L54
        L60:
            r5 = move-exception
            r4.r(r5)
        L64:
            r5 = 0
            return r5
    }

    private java.lang.String a(com.kwad.sdk.utils.a.a.i r5) {
            r4 = this;
            java.lang.String r0 = ""
            java.lang.Object r5 = r5.value
            java.lang.String r5 = (java.lang.String) r5
            java.io.File r1 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r4.Tt
            r2.append(r3)
            java.lang.String r3 = r4.name
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2, r5)
            byte[] r5 = com.kwad.sdk.utils.a.h.ae(r1)     // Catch: java.lang.Exception -> L4b
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L4b
            r1.<init>(r5)     // Catch: java.lang.Exception -> L4b
            if (r5 == 0) goto L4a
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L4b
            if (r2 == 0) goto L30
            goto L4a
        L30:
            int r1 = com.kwad.sdk.utils.a.b.fS(r1)     // Catch: java.lang.Exception -> L4b
            java.lang.String r5 = com.kwad.sdk.utils.a.b.j(r5, r1)     // Catch: java.lang.Exception -> L4b
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L4b
            if (r5 == 0) goto L4f
            int r1 = r5.length     // Catch: java.lang.Exception -> L4b
            if (r1 != 0) goto L42
            return r0
        L42:
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L4b
            java.nio.charset.Charset r2 = com.kwad.sdk.utils.a.b.UTF_8     // Catch: java.lang.Exception -> L4b
            r1.<init>(r5, r2)     // Catch: java.lang.Exception -> L4b
            return r1
        L4a:
            return r0
        L4b:
            r5 = move-exception
            r4.r(r5)
        L4f:
            return r0
    }

    private void a(byte r5, int r6) {
            r4 = this;
            long r0 = r4.aKW
            r2 = 1
            long r2 = d(r2, r6)
            long r0 = r0 ^ r2
            r4.aKW = r0
            int r2 = r4.aLg
            r3 = 4
            if (r2 != 0) goto L2b
            java.nio.MappedByteBuffer r2 = r4.aKS
            if (r2 == 0) goto L1c
            r2.putLong(r3, r0)
            java.nio.MappedByteBuffer r0 = r4.aKS
            r0.put(r6, r5)
        L1c:
            java.nio.MappedByteBuffer r0 = r4.aKT
            if (r0 == 0) goto L32
            long r1 = r4.aKW
            r0.putLong(r3, r1)
            java.nio.MappedByteBuffer r0 = r4.aKT
            r0.put(r6, r5)
            goto L32
        L2b:
            com.kwad.sdk.utils.a.b r2 = r4.aKU
            if (r2 == 0) goto L32
            r2.g(r3, r0)
        L32:
            com.kwad.sdk.utils.a.b r0 = r4.aKU
            if (r0 == 0) goto L3a
            byte[] r0 = r0.aKG
            r0[r6] = r5
        L3a:
            return
    }

    private void a(byte r8, int r9, int r10) {
            r7 = this;
            r7.C(r9, r10)
            r8 = r8 | (-128(0xffffffffffffff80, float:NaN))
            byte r8 = (byte) r8
            com.kwad.sdk.utils.a.b r10 = r7.aKU
            if (r10 == 0) goto L2a
            byte[] r10 = r10.aKG
            if (r10 == 0) goto L2a
            com.kwad.sdk.utils.a.b r10 = r7.aKU
            byte[] r10 = r10.aKG
            r10 = r10[r9]
            r0 = r9 & 7
            int r0 = r0 << 3
            long r1 = r7.aKW
            r10 = r10 ^ r8
            long r3 = (long) r10
            r5 = 255(0xff, double:1.26E-321)
            long r3 = r3 & r5
            long r3 = r3 << r0
            long r0 = r1 ^ r3
            r7.aKW = r0
            com.kwad.sdk.utils.a.b r10 = r7.aKU
            byte[] r10 = r10.aKG
            r10[r9] = r8
        L2a:
            r7.aLb = r9
            return
    }

    private void a(int r5, long r6, int r8) {
            r4 = this;
            long r0 = r4.aKW
            long r6 = d(r6, r8)
            long r6 = r6 ^ r0
            r4.aKW = r6
            int r0 = r4.aLg
            r1 = 4
            if (r0 != 0) goto L29
            java.nio.MappedByteBuffer r0 = r4.aKS
            if (r0 == 0) goto L1a
            r0.putLong(r1, r6)
            java.nio.MappedByteBuffer r6 = r4.aKS
            r6.putInt(r8, r5)
        L1a:
            java.nio.MappedByteBuffer r6 = r4.aKT
            if (r6 == 0) goto L30
            long r2 = r4.aKW
            r6.putLong(r1, r2)
            java.nio.MappedByteBuffer r6 = r4.aKT
            r6.putInt(r8, r5)
            goto L30
        L29:
            com.kwad.sdk.utils.a.b r0 = r4.aKU
            if (r0 == 0) goto L30
            r0.g(r1, r6)
        L30:
            com.kwad.sdk.utils.a.b r6 = r4.aKU
            if (r6 == 0) goto L37
            r6.y(r8, r5)
        L37:
            return
    }

    private void a(int r6, int[] r7) {
            r5 = this;
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r0 = r5.aKX
            if (r0 != 0) goto L5
            return
        L5:
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        Ld:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3d
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.utils.a.a$b r1 = (com.kwad.sdk.utils.a.a.b) r1
            int r2 = r1.offset
            if (r2 <= r6) goto Ld
            int r2 = r1.offset
            int r2 = com.kwad.sdk.utils.a.h.binarySearch(r7, r2)
            int r2 = r2 << 1
            int r2 = r2 + 1
            r2 = r7[r2]
            int r3 = r1.offset
            int r3 = r3 - r2
            r1.offset = r3
            byte r3 = r1.Kf()
            r4 = 6
            if (r3 < r4) goto Ld
            com.kwad.sdk.utils.a.a$j r1 = (com.kwad.sdk.utils.a.a.j) r1
            int r3 = r1.start
            int r3 = r3 - r2
            r1.start = r3
            goto Ld
        L3d:
            return
    }

    static void a(com.kwad.sdk.utils.a.c r0) {
            r0.Kh()
            return
    }

    private void a(java.lang.String r2, byte r3) {
            r1 = this;
            int[] r0 = com.kwad.sdk.utils.a.c.aKH
            r0 = r0[r3]
            r1.a(r2, r3, r0)
            return
    }

    private void a(java.lang.String r3, byte r4, int r5) {
            r2 = this;
            int r0 = com.kwad.sdk.utils.a.b.fS(r3)
            dm(r0)
            int r1 = r0 + 2
            int r1 = r1 + r5
            r2.aLa = r1
            r2.Kv()
            com.kwad.sdk.utils.a.b r5 = r2.aKU
            if (r5 == 0) goto L16
            r5.e(r4)
        L16:
            r2.q(r3, r0)
            return
    }

    private static void a(java.lang.String r2, int r3, int r4, byte[] r5, int r6) {
            int r3 = r2.length()
            if (r4 <= r3) goto L7
            return
        L7:
            if (r4 >= 0) goto La
            return
        La:
            r3 = 0
        Lb:
            if (r3 >= r4) goto L28
            int r0 = r3 + 1
            char r3 = r2.charAt(r3)
            r1 = 128(0x80, float:1.8E-43)
            if (r3 >= r1) goto L20
            int r1 = r6 + 1
            byte r3 = (byte) r3
            r3 = r3 ^ 1
            byte r3 = (byte) r3
            r5[r6] = r3
            goto L25
        L20:
            int r1 = r6 + 1
            byte r3 = (byte) r3
            r5[r6] = r3
        L25:
            r3 = r0
            r6 = r1
            goto Lb
        L28:
            return
    }

    private synchronized <T> void a(java.lang.String r10, T r11, com.kwad.sdk.utils.a.c.b<T> r12) {
            r9 = this;
            monitor-enter(r9)
            fV(r10)     // Catch: java.lang.Throwable -> Lb0
            if (r12 != 0) goto L1b
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r11 = "Encoder is null"
            r10.<init>(r11)     // Catch: java.lang.Throwable -> Lb0
            java.lang.Boolean r11 = com.kwad.library.a.a.ml     // Catch: java.lang.Throwable -> Lb0
            boolean r11 = r11.booleanValue()     // Catch: java.lang.Throwable -> Lb0
            if (r11 != 0) goto L1a
            r9.r(r10)     // Catch: java.lang.Throwable -> Lb0
            monitor-exit(r9)
            return
        L1a:
            throw r10     // Catch: java.lang.Throwable -> Lb0
        L1b:
            java.lang.String r0 = r12.KA()     // Catch: java.lang.Throwable -> Lb0
            boolean r1 = r0.isEmpty()     // Catch: java.lang.Throwable -> Lb0
            if (r1 != 0) goto L8f
            int r1 = r0.length()     // Catch: java.lang.Throwable -> Lb0
            r2 = 50
            if (r1 <= r2) goto L2e
            goto L8f
        L2e:
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.c$b> r1 = r9.aKM     // Catch: java.lang.Throwable -> Lb0
            boolean r1 = r1.containsKey(r0)     // Catch: java.lang.Throwable -> Lb0
            if (r1 != 0) goto L4b
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r11 = "Encoder hasn't been registered"
            r10.<init>(r11)     // Catch: java.lang.Throwable -> Lb0
            java.lang.Boolean r11 = com.kwad.library.a.a.ml     // Catch: java.lang.Throwable -> Lb0
            boolean r11 = r11.booleanValue()     // Catch: java.lang.Throwable -> Lb0
            if (r11 != 0) goto L4a
            r9.r(r10)     // Catch: java.lang.Throwable -> Lb0
            monitor-exit(r9)
            return
        L4a:
            throw r10     // Catch: java.lang.Throwable -> Lb0
        L4b:
            if (r11 != 0) goto L52
            r9.remove(r10)     // Catch: java.lang.Throwable -> Lb0
            monitor-exit(r9)
            return
        L52:
            r1 = 0
            byte[] r1 = r12.o(r11)     // Catch: java.lang.Exception -> L58 java.lang.Throwable -> Lb0
            goto L5c
        L58:
            r12 = move-exception
            r9.r(r12)     // Catch: java.lang.Throwable -> Lb0
        L5c:
            if (r1 != 0) goto L63
            r9.remove(r10)     // Catch: java.lang.Throwable -> Lb0
            monitor-exit(r9)
            return
        L63:
            int r12 = com.kwad.sdk.utils.a.b.fS(r0)     // Catch: java.lang.Throwable -> Lb0
            com.kwad.sdk.utils.a.b r2 = new com.kwad.sdk.utils.a.b     // Catch: java.lang.Throwable -> Lb0
            int r3 = r12 + 1
            int r4 = r1.length     // Catch: java.lang.Throwable -> Lb0
            int r3 = r3 + r4
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Lb0
            byte r12 = (byte) r12     // Catch: java.lang.Throwable -> Lb0
            r2.e(r12)     // Catch: java.lang.Throwable -> Lb0
            r2.fR(r0)     // Catch: java.lang.Throwable -> Lb0
            r2.n(r1)     // Catch: java.lang.Throwable -> Lb0
            byte[] r6 = r2.aKG     // Catch: java.lang.Throwable -> Lb0
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r12 = r9.aKX     // Catch: java.lang.Throwable -> Lb0
            java.lang.Object r12 = r12.get(r10)     // Catch: java.lang.Throwable -> Lb0
            r7 = r12
            com.kwad.sdk.utils.a.a$h r7 = (com.kwad.sdk.utils.a.a.h) r7     // Catch: java.lang.Throwable -> Lb0
            r8 = 8
            r3 = r9
            r4 = r10
            r5 = r11
            r3.a(r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> Lb0
            monitor-exit(r9)
            return
        L8f:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> Lb0
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r12 = "Invalid encoder tag:"
            r11.<init>(r12)     // Catch: java.lang.Throwable -> Lb0
            r11.append(r0)     // Catch: java.lang.Throwable -> Lb0
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> Lb0
            r10.<init>(r11)     // Catch: java.lang.Throwable -> Lb0
            java.lang.Boolean r11 = com.kwad.library.a.a.ml     // Catch: java.lang.Throwable -> Lb0
            boolean r11 = r11.booleanValue()     // Catch: java.lang.Throwable -> Lb0
            if (r11 != 0) goto Laf
            r9.r(r10)     // Catch: java.lang.Throwable -> Lb0
            monitor-exit(r9)
            return
        Laf:
            throw r10     // Catch: java.lang.Throwable -> Lb0
        Lb0:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    private void a(java.lang.String r7, java.lang.Object r8, byte[] r9, byte r10) {
            r6 = this;
            int r2 = r6.a(r7, r9, r10)
            if (r2 == 0) goto L47
            java.lang.String r0 = r6.aLd
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            r5 = r0
            if (r5 == 0) goto L1a
            r8 = 32
            java.lang.String r9 = r6.aLd
            r0 = 0
            r6.aLd = r0
            r4 = r8
            r3 = r9
            goto L1d
        L1a:
            int r9 = r9.length
            r3 = r8
            r4 = r9
        L1d:
            r8 = 6
            if (r10 != r8) goto L2b
            com.kwad.sdk.utils.a.a$i r8 = new com.kwad.sdk.utils.a.a$i
            int r1 = r6.aKZ
            java.lang.String r3 = (java.lang.String) r3
            r0 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            goto L3f
        L2b:
            r8 = 7
            if (r10 != r8) goto L37
            com.kwad.sdk.utils.a.a$a r8 = new com.kwad.sdk.utils.a.a$a
            int r1 = r6.aKZ
            r0 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            goto L3f
        L37:
            com.kwad.sdk.utils.a.a$h r8 = new com.kwad.sdk.utils.a.a$h
            int r1 = r6.aKZ
            r0 = r8
            r0.<init>(r1, r2, r3, r4, r5)
        L3f:
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r9 = r6.aKX
            r9.put(r7, r8)
            r6.Kt()
        L47:
            return
    }

    private void a(java.lang.String r7, java.lang.Object r8, byte[] r9, com.kwad.sdk.utils.a.a.j r10) {
            r6 = this;
            byte r0 = r10.Kf()
            int r7 = r6.a(r7, r9, r0)
            if (r7 == 0) goto L67
            boolean r0 = r10.aKE
            r1 = 0
            if (r0 == 0) goto L14
            java.lang.Object r0 = r10.value
            java.lang.String r0 = (java.lang.String) r0
            goto L15
        L14:
            r0 = r1
        L15:
            byte r2 = r10.Kf()
            int r3 = r10.start
            int r4 = r10.offset
            int r5 = r10.aKD
            int r4 = r4 + r5
            r6.a(r2, r3, r4)
            java.lang.String r2 = r6.aLd
            if (r2 == 0) goto L29
            r2 = 1
            goto L2a
        L29:
            r2 = 0
        L2a:
            int r3 = r6.aKZ
            r10.start = r3
            r10.offset = r7
            r10.aKE = r2
            if (r2 == 0) goto L3f
            java.lang.String r7 = r6.aLd
            r10.value = r7
            r7 = 32
            r10.aKD = r7
            r6.aLd = r1
            goto L44
        L3f:
            r10.value = r8
            int r7 = r9.length
            r10.aKD = r7
        L44:
            r6.Kt()
            r6.Kw()
            if (r0 == 0) goto L67
            java.io.File r7 = new java.io.File
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = r6.Tt
            r8.append(r9)
            java.lang.String r9 = r6.name
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            r7.<init>(r8, r0)
            com.kwad.sdk.utils.a.h.h(r7)
        L67:
            return
    }

    private void a(java.lang.String r2, java.lang.Object r3, byte[] r4, com.kwad.sdk.utils.a.a.j r5, byte r6) {
            r1 = this;
            if (r5 != 0) goto L6
            r1.a(r2, r3, r4, r6)
            goto L1b
        L6:
            boolean r6 = r5.aKE
            if (r6 != 0) goto L18
            int r6 = r5.aKD
            int r0 = r4.length
            if (r6 == r0) goto L10
            goto L18
        L10:
            int r2 = r5.offset
            r1.updateBytes(r2, r4)
            r5.value = r3
            goto L1b
        L18:
            r1.a(r2, r3, r4, r5)
        L1b:
            r1.Km()
            return
    }

    private void a(java.lang.String r11, java.lang.String r12, com.kwad.sdk.utils.a.a.i r13) {
            r10 = this;
            int r4 = com.kwad.sdk.utils.a.b.fS(r12)
            r0 = 6
            if (r13 != 0) goto L3c
            int r13 = com.kwad.sdk.utils.a.b.fS(r11)
            dm(r13)
            int r1 = r13 + 4
            int r2 = r1 + r4
            r10.aLa = r2
            r10.Kv()
            com.kwad.sdk.utils.a.b r2 = r10.aKU
            if (r2 == 0) goto L1e
            r2.e(r0)
        L1e:
            r10.q(r11, r13)
            r10.r(r12, r4)
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r13 = r10.aKX
            com.kwad.sdk.utils.a.a$i r6 = new com.kwad.sdk.utils.a.a$i
            int r2 = r10.aKZ
            int r3 = r2 + r1
            r5 = 0
            r0 = r6
            r1 = r2
            r2 = r3
            r3 = r12
            r0.<init>(r1, r2, r3, r4, r5)
            r13.put(r11, r6)
            r10.Kt()
            goto Lf2
        L3c:
            r11 = 0
            int r1 = r13.offset
            int r2 = r13.start
            int r1 = r1 - r2
            int r2 = r13.aKD
            r3 = 1
            r5 = 0
            if (r2 != r4) goto L7c
            long r0 = r10.aKW
            com.kwad.sdk.utils.a.b r2 = r10.aKU
            int r3 = r13.offset
            int r6 = r13.aKD
            long r2 = r2.A(r3, r6)
            long r0 = r0 ^ r2
            r10.aKW = r0
            int r0 = r12.length()
            if (r4 != r0) goto L67
            com.kwad.sdk.utils.a.b r0 = r10.aKU
            byte[] r0 = r0.aKG
            int r1 = r13.offset
            a(r12, r5, r4, r0, r1)
            goto L74
        L67:
            com.kwad.sdk.utils.a.b r0 = r10.aKU
            if (r0 == 0) goto L74
            int r1 = r13.offset
            r0.position = r1
            com.kwad.sdk.utils.a.b r0 = r10.aKU
            r0.fR(r12)
        L74:
            int r0 = r13.offset
            r10.aKZ = r0
            r10.aLa = r4
            r3 = r5
            goto Lcb
        L7c:
            int r2 = r1 + r4
            r10.aLa = r2
            r10.Kv()
            com.kwad.sdk.utils.a.b r2 = r10.aKU
            if (r2 == 0) goto L8a
            r2.e(r0)
        L8a:
            int r2 = r1 + (-3)
            com.kwad.sdk.utils.a.b r6 = r10.aKU
            if (r6 == 0) goto La0
            byte[] r6 = r6.aKG
            int r7 = r13.start
            int r7 = r7 + r3
            com.kwad.sdk.utils.a.b r8 = r10.aKU
            byte[] r8 = r8.aKG
            com.kwad.sdk.utils.a.b r9 = r10.aKU
            int r9 = r9.position
            java.lang.System.arraycopy(r6, r7, r8, r9, r2)
        La0:
            com.kwad.sdk.utils.a.b r6 = r10.aKU
            if (r6 == 0) goto La9
            int r7 = r6.position
            int r7 = r7 + r2
            r6.position = r7
        La9:
            r10.r(r12, r4)
            int r2 = r13.start
            int r6 = r13.offset
            int r7 = r13.aKD
            int r6 = r6 + r7
            r10.a(r0, r2, r6)
            boolean r0 = r13.aKE
            if (r0 == 0) goto Lbe
            java.lang.Object r11 = r13.value
            java.lang.String r11 = (java.lang.String) r11
        Lbe:
            r13.aKE = r5
            int r0 = r10.aKZ
            r13.start = r0
            int r0 = r10.aKZ
            int r0 = r0 + r1
            r13.offset = r0
            r13.aKD = r4
        Lcb:
            r13.value = r12
            r10.Kt()
            if (r3 == 0) goto Ld5
            r10.Kw()
        Ld5:
            if (r11 == 0) goto Lf2
            java.io.File r12 = new java.io.File
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r0 = r10.Tt
            r13.append(r0)
            java.lang.String r0 = r10.name
            r13.append(r0)
            java.lang.String r13 = r13.toString()
            r12.<init>(r13, r11)
            com.kwad.sdk.utils.a.h.h(r12)
        Lf2:
            r10.Km()
            return
    }

    private void a(java.nio.MappedByteBuffer r8) {
            r7 = this;
            if (r8 != 0) goto L3
            return
        L3:
            int r0 = r8.capacity()
            int r1 = com.kwad.sdk.utils.a.c.PAGE_SIZE
            if (r0 == r1) goto L38
            java.nio.MappedByteBuffer r0 = r7.aKS
            if (r8 != r0) goto L12
            java.nio.channels.FileChannel r0 = r7.aKO
            goto L14
        L12:
            java.nio.channels.FileChannel r0 = r7.aKP
        L14:
            r1 = r0
            if (r1 != 0) goto L18
            return
        L18:
            int r0 = com.kwad.sdk.utils.a.c.PAGE_SIZE
            long r2 = (long) r0
            r1.truncate(r2)
            java.nio.channels.FileChannel$MapMode r2 = java.nio.channels.FileChannel.MapMode.READ_WRITE
            r3 = 0
            int r0 = com.kwad.sdk.utils.a.c.PAGE_SIZE
            long r5 = (long) r0
            java.nio.MappedByteBuffer r0 = r1.map(r2, r3, r5)
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN
            r0.order(r1)
            java.nio.MappedByteBuffer r1 = r7.aKS
            if (r8 != r1) goto L35
            r7.aKS = r0
            goto L37
        L35:
            r7.aKT = r0
        L37:
            r8 = r0
        L38:
            r0 = 0
            r8.putInt(r0, r0)
            r0 = 4
            r1 = 0
            r8.putLong(r0, r1)
            return
    }

    private void a(java.nio.MappedByteBuffer r8, java.nio.MappedByteBuffer r9, int r10) {
            r7 = this;
            int r0 = r8.capacity()
            int r1 = r9.capacity()
            if (r0 == r1) goto L39
            java.nio.MappedByteBuffer r0 = r7.aKT     // Catch: java.lang.Exception -> L31
            if (r9 != r0) goto L11
            java.nio.channels.FileChannel r0 = r7.aKP     // Catch: java.lang.Exception -> L31
            goto L13
        L11:
            java.nio.channels.FileChannel r0 = r7.aKO     // Catch: java.lang.Exception -> L31
        L13:
            r1 = r0
            java.nio.channels.FileChannel$MapMode r2 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.lang.Exception -> L31
            r3 = 0
            int r0 = r8.capacity()     // Catch: java.lang.Exception -> L31
            long r5 = (long) r0     // Catch: java.lang.Exception -> L31
            java.nio.MappedByteBuffer r0 = r1.map(r2, r3, r5)     // Catch: java.lang.Exception -> L31
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.lang.Exception -> L31
            r0.order(r1)     // Catch: java.lang.Exception -> L31
            java.nio.MappedByteBuffer r1 = r7.aKT     // Catch: java.lang.Exception -> L31
            if (r9 != r1) goto L2d
            r7.aKT = r0     // Catch: java.lang.Exception -> L31
            goto L2f
        L2d:
            r7.aKS = r0     // Catch: java.lang.Exception -> L31
        L2f:
            r9 = r0
            goto L39
        L31:
            r8 = move-exception
            r7.r(r8)
            r7.Kq()
            return
        L39:
            r8.rewind()
            r9.rewind()
            r8.limit(r10)
            r9.put(r8)
            int r9 = r8.capacity()
            r8.limit(r9)
            return
    }

    private synchronized void a(java.util.Map<java.lang.String, java.lang.Object> r4, java.util.Map<java.lang.Class, com.kwad.sdk.utils.a.c.b> r5) {
            r3 = this;
            monitor-enter(r3)
            if (r4 != 0) goto L5
            monitor-exit(r3)
            return
        L5:
            java.util.Set r4 = r4.entrySet()     // Catch: java.lang.Throwable -> Lb6
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Throwable -> Lb6
        Ld:
            boolean r5 = r4.hasNext()     // Catch: java.lang.Throwable -> Lb6
            if (r5 == 0) goto Lb4
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> Lb6
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5     // Catch: java.lang.Throwable -> Lb6
            java.lang.Object r0 = r5.getKey()     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> Lb6
            java.lang.Object r5 = r5.getValue()     // Catch: java.lang.Throwable -> Lb6
            if (r0 == 0) goto Ld
            boolean r1 = r0.isEmpty()     // Catch: java.lang.Throwable -> Lb6
            if (r1 != 0) goto Ld
            boolean r1 = r5 instanceof java.lang.String     // Catch: java.lang.Throwable -> Lb6
            if (r1 == 0) goto L35
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> Lb6
            r3.putString(r0, r5)     // Catch: java.lang.Throwable -> Lb6
            goto Ld
        L35:
            boolean r1 = r5 instanceof java.lang.Boolean     // Catch: java.lang.Throwable -> Lb6
            if (r1 == 0) goto L43
            java.lang.Boolean r5 = (java.lang.Boolean) r5     // Catch: java.lang.Throwable -> Lb6
            boolean r5 = r5.booleanValue()     // Catch: java.lang.Throwable -> Lb6
            r3.putBoolean(r0, r5)     // Catch: java.lang.Throwable -> Lb6
            goto Ld
        L43:
            boolean r1 = r5 instanceof java.lang.Integer     // Catch: java.lang.Throwable -> Lb6
            if (r1 == 0) goto L51
            java.lang.Integer r5 = (java.lang.Integer) r5     // Catch: java.lang.Throwable -> Lb6
            int r5 = r5.intValue()     // Catch: java.lang.Throwable -> Lb6
            r3.putInt(r0, r5)     // Catch: java.lang.Throwable -> Lb6
            goto Ld
        L51:
            boolean r1 = r5 instanceof java.lang.Long     // Catch: java.lang.Throwable -> Lb6
            if (r1 == 0) goto L5f
            java.lang.Long r5 = (java.lang.Long) r5     // Catch: java.lang.Throwable -> Lb6
            long r1 = r5.longValue()     // Catch: java.lang.Throwable -> Lb6
            r3.putLong(r0, r1)     // Catch: java.lang.Throwable -> Lb6
            goto Ld
        L5f:
            boolean r1 = r5 instanceof java.lang.Float     // Catch: java.lang.Throwable -> Lb6
            if (r1 == 0) goto L6d
            java.lang.Float r5 = (java.lang.Float) r5     // Catch: java.lang.Throwable -> Lb6
            float r5 = r5.floatValue()     // Catch: java.lang.Throwable -> Lb6
            r3.putFloat(r0, r5)     // Catch: java.lang.Throwable -> Lb6
            goto Ld
        L6d:
            boolean r1 = r5 instanceof java.lang.Double     // Catch: java.lang.Throwable -> Lb6
            if (r1 == 0) goto L7b
            java.lang.Double r5 = (java.lang.Double) r5     // Catch: java.lang.Throwable -> Lb6
            double r1 = r5.doubleValue()     // Catch: java.lang.Throwable -> Lb6
            r3.putDouble(r0, r1)     // Catch: java.lang.Throwable -> Lb6
            goto Ld
        L7b:
            boolean r1 = r5 instanceof java.util.Set     // Catch: java.lang.Throwable -> Lb6
            if (r1 == 0) goto L9b
            r1 = r5
            java.util.Set r1 = (java.util.Set) r1     // Catch: java.lang.Throwable -> Lb6
            boolean r2 = r1.isEmpty()     // Catch: java.lang.Throwable -> Lb6
            if (r2 != 0) goto Ld
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> Lb6
            java.lang.Object r1 = r1.next()     // Catch: java.lang.Throwable -> Lb6
            boolean r1 = r1 instanceof java.lang.String     // Catch: java.lang.Throwable -> Lb6
            if (r1 == 0) goto Ld
            java.util.Set r5 = (java.util.Set) r5     // Catch: java.lang.Throwable -> Lb6
            r3.putStringSet(r0, r5)     // Catch: java.lang.Throwable -> Lb6
            goto Ld
        L9b:
            boolean r1 = r5 instanceof byte[]     // Catch: java.lang.Throwable -> Lb6
            if (r1 == 0) goto La8
            byte[] r5 = (byte[]) r5     // Catch: java.lang.Throwable -> Lb6
            byte[] r5 = (byte[]) r5     // Catch: java.lang.Throwable -> Lb6
            r3.b(r0, r5)     // Catch: java.lang.Throwable -> Lb6
            goto Ld
        La8:
            java.lang.Exception r5 = new java.lang.Exception     // Catch: java.lang.Throwable -> Lb6
            java.lang.String r0 = "missing encoders"
            r5.<init>(r0)     // Catch: java.lang.Throwable -> Lb6
            r3.g(r5)     // Catch: java.lang.Throwable -> Lb6
            goto Ld
        Lb4:
            monitor-exit(r3)
            return
        Lb6:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    private boolean a(com.kwad.sdk.utils.a.b r13) {
            r12 = this;
            java.lang.String r0 = "rw"
            byte[] r1 = r13.aKG
            int r1 = r1.length
            java.io.File r2 = new java.io.File
            java.lang.String r3 = r12.Tt
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r12.name
            r4.append(r5)
            java.lang.String r5 = ".kva"
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            r2.<init>(r3, r4)
            java.io.File r3 = new java.io.File
            java.lang.String r4 = r12.Tt
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = r12.name
            r5.append(r6)
            java.lang.String r6 = ".kvb"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r3.<init>(r4, r5)
            r4 = 0
            boolean r5 = com.kwad.sdk.utils.a.h.ad(r2)     // Catch: java.lang.Exception -> La3
            if (r5 == 0) goto L9b
            boolean r5 = com.kwad.sdk.utils.a.h.ad(r3)     // Catch: java.lang.Exception -> La3
            if (r5 == 0) goto L9b
            java.io.RandomAccessFile r5 = new java.io.RandomAccessFile     // Catch: java.lang.Exception -> La3
            r5.<init>(r2, r0)     // Catch: java.lang.Exception -> La3
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile     // Catch: java.lang.Exception -> La3
            r2.<init>(r3, r0)     // Catch: java.lang.Exception -> La3
            long r0 = (long) r1     // Catch: java.lang.Exception -> La3
            r5.setLength(r0)     // Catch: java.lang.Exception -> La3
            r2.setLength(r0)     // Catch: java.lang.Exception -> La3
            java.nio.channels.FileChannel r3 = r5.getChannel()     // Catch: java.lang.Exception -> La3
            r12.aKO = r3     // Catch: java.lang.Exception -> La3
            java.nio.channels.FileChannel r2 = r2.getChannel()     // Catch: java.lang.Exception -> La3
            r12.aKP = r2     // Catch: java.lang.Exception -> La3
            java.nio.channels.FileChannel r6 = r12.aKO     // Catch: java.lang.Exception -> La3
            java.nio.channels.FileChannel$MapMode r7 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.lang.Exception -> La3
            r8 = 0
            r10 = r0
            java.nio.MappedByteBuffer r2 = r6.map(r7, r8, r10)     // Catch: java.lang.Exception -> La3
            r12.aKS = r2     // Catch: java.lang.Exception -> La3
            java.nio.ByteOrder r3 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.lang.Exception -> La3
            r2.order(r3)     // Catch: java.lang.Exception -> La3
            java.nio.channels.FileChannel r6 = r12.aKP     // Catch: java.lang.Exception -> La3
            java.nio.channels.FileChannel$MapMode r7 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.lang.Exception -> La3
            r8 = 0
            r10 = r0
            java.nio.MappedByteBuffer r0 = r6.map(r7, r8, r10)     // Catch: java.lang.Exception -> La3
            r12.aKT = r0     // Catch: java.lang.Exception -> La3
            java.nio.ByteOrder r1 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.lang.Exception -> La3
            r0.order(r1)     // Catch: java.lang.Exception -> La3
            java.nio.MappedByteBuffer r0 = r12.aKS     // Catch: java.lang.Exception -> La3
            byte[] r1 = r13.aKG     // Catch: java.lang.Exception -> La3
            int r2 = r12.aKV     // Catch: java.lang.Exception -> La3
            r0.put(r1, r4, r2)     // Catch: java.lang.Exception -> La3
            java.nio.MappedByteBuffer r0 = r12.aKT     // Catch: java.lang.Exception -> La3
            byte[] r13 = r13.aKG     // Catch: java.lang.Exception -> La3
            int r1 = r12.aKV     // Catch: java.lang.Exception -> La3
            r0.put(r13, r4, r1)     // Catch: java.lang.Exception -> La3
            r13 = 1
            return r13
        L9b:
            java.lang.Exception r13 = new java.lang.Exception     // Catch: java.lang.Exception -> La3
            java.lang.String r0 = "open file failed"
            r13.<init>(r0)     // Catch: java.lang.Exception -> La3
            throw r13     // Catch: java.lang.Exception -> La3
        La3:
            r13 = move-exception
            r12.r(r13)
            return r4
    }

    private byte[] a(com.kwad.sdk.utils.a.a.a r4) {
            r3 = this;
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.Tt
            r1.append(r2)
            java.lang.String r2 = r3.name
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.Object r4 = r4.value
            java.lang.String r4 = (java.lang.String) r4
            r0.<init>(r1, r4)
            byte[] r4 = com.kwad.sdk.utils.a.h.ae(r0)     // Catch: java.lang.Exception -> L26
            if (r4 == 0) goto L23
            return r4
        L23:
            byte[] r4 = com.kwad.sdk.utils.a.c.aKI     // Catch: java.lang.Exception -> L26
            return r4
        L26:
            r4 = move-exception
            r3.r(r4)
            byte[] r4 = com.kwad.sdk.utils.a.c.aKI
            return r4
    }

    private boolean ac(java.io.File r7) {
            r6 = this;
            long r0 = r7.length()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r3 = 0
            if (r2 == 0) goto L5c
            r4 = 536870912(0x20000000, double:2.65249474E-315)
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 <= 0) goto L13
            goto L5c
        L13:
            int r0 = (int) r0
            int r1 = com.kwad.sdk.utils.a.c.PAGE_SIZE
            int r1 = r6.B(r1, r0)
            com.kwad.sdk.utils.a.b r2 = r6.aKU
            if (r2 == 0) goto L28
            byte[] r2 = r2.aKG
            int r2 = r2.length
            if (r2 != r1) goto L28
            com.kwad.sdk.utils.a.b r1 = r6.aKU
            r1.position = r3
            goto L32
        L28:
            com.kwad.sdk.utils.a.b r2 = new com.kwad.sdk.utils.a.b
            byte[] r1 = new byte[r1]
            r2.<init>(r1)
            r6.aKU = r2
            r1 = r2
        L32:
            byte[] r2 = r1.aKG
            com.kwad.sdk.utils.a.h.a(r7, r2, r0)
            int r7 = r1.getInt()
            long r4 = r1.getLong()
            int r2 = r7 + 12
            r6.aKV = r2
            if (r7 < 0) goto L5c
            r2 = 12
            int r0 = r0 - r2
            if (r7 > r0) goto L5c
            long r0 = r1.A(r2, r7)
            int r7 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r7 != 0) goto L5c
            int r7 = r6.Kl()
            if (r7 != 0) goto L5c
            r6.aKW = r4
            r7 = 1
            return r7
        L5c:
            return r3
    }

    private int b(java.lang.String r2, byte[] r3, byte r4) {
            r1 = this;
            int r0 = r3.length
            int r0 = r0 + 2
            r1.a(r2, r4, r0)
            com.kwad.sdk.utils.a.b r2 = r1.aKU
            if (r2 == 0) goto L19
            int r4 = r3.length
            short r4 = (short) r4
            r2.a(r4)
            com.kwad.sdk.utils.a.b r2 = r1.aKU
            int r2 = r2.position
            com.kwad.sdk.utils.a.b r4 = r1.aKU
            r4.n(r3)
            return r2
        L19:
            r2 = 0
            return r2
    }

    private void b(long r5, long r7, int r9) {
            r4 = this;
            long r0 = r4.aKW
            long r7 = d(r7, r9)
            long r7 = r7 ^ r0
            r4.aKW = r7
            int r0 = r4.aLg
            r1 = 4
            if (r0 != 0) goto L29
            java.nio.MappedByteBuffer r0 = r4.aKS
            if (r0 == 0) goto L1a
            r0.putLong(r1, r7)
            java.nio.MappedByteBuffer r7 = r4.aKS
            r7.putLong(r9, r5)
        L1a:
            java.nio.MappedByteBuffer r7 = r4.aKT
            if (r7 == 0) goto L30
            long r2 = r4.aKW
            r7.putLong(r1, r2)
            java.nio.MappedByteBuffer r7 = r4.aKT
            r7.putLong(r9, r5)
            goto L30
        L29:
            com.kwad.sdk.utils.a.b r0 = r4.aKU
            if (r0 == 0) goto L30
            r0.g(r1, r7)
        L30:
            com.kwad.sdk.utils.a.b r7 = r4.aKU
            if (r7 == 0) goto L37
            r7.g(r9, r5)
        L37:
            return
    }

    private synchronized void b(java.lang.String r8, byte[] r9) {
            r7 = this;
            monitor-enter(r7)
            fV(r8)     // Catch: java.lang.Throwable -> L1e
            if (r9 != 0) goto Lb
            r7.remove(r8)     // Catch: java.lang.Throwable -> L1e
            monitor-exit(r7)
            return
        Lb:
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r0 = r7.aKX     // Catch: java.lang.Throwable -> L1e
            java.lang.Object r0 = r0.get(r8)     // Catch: java.lang.Throwable -> L1e
            r5 = r0
            com.kwad.sdk.utils.a.a$a r5 = (com.kwad.sdk.utils.a.a.a) r5     // Catch: java.lang.Throwable -> L1e
            r6 = 7
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r9
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L1e
            monitor-exit(r7)
            return
        L1e:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    private void b(java.nio.MappedByteBuffer r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            boolean r0 = r3.aLc
            if (r0 == 0) goto L13
            java.nio.MappedByteBuffer r0 = r3.aKS
            if (r4 == r0) goto L13
            r0 = 0
            int r1 = r3.aKV
            int r1 = r1 + (-12)
            r4.putInt(r0, r1)
        L13:
            r0 = 4
            long r1 = r3.aKW
            r4.putLong(r0, r1)
            int r0 = r3.aLb
            if (r0 == 0) goto L28
            com.kwad.sdk.utils.a.b r1 = r3.aKU
            byte[] r1 = r1.aKG
            int r2 = r3.aLb
            r1 = r1[r2]
            r4.put(r0, r1)
        L28:
            int r0 = r3.aLa
            if (r0 == 0) goto L3c
            int r0 = r3.aKZ
            r4.position(r0)
            com.kwad.sdk.utils.a.b r0 = r3.aKU
            byte[] r0 = r0.aKG
            int r1 = r3.aKZ
            int r2 = r3.aLa
            r4.put(r0, r1, r2)
        L3c:
            return
    }

    static boolean b(com.kwad.sdk.utils.a.c r0) {
            boolean r0 = r0.Ko()
            return r0
    }

    private static long d(long r2, int r4) {
            r4 = r4 & 7
            int r4 = r4 << 3
            long r0 = r2 << r4
            int r4 = 64 - r4
            long r2 = r2 >>> r4
            long r2 = r2 | r0
            return r2
    }

    private static void d(int r0, boolean r1) {
            if (r1 == 0) goto Lf
            r1 = 32
            if (r0 != r1) goto L7
            goto L15
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "name size not match"
            r0.<init>(r1)
            throw r0
        Lf:
            if (r0 < 0) goto L16
            r1 = 2048(0x800, float:2.87E-42)
            if (r0 >= r1) goto L16
        L15:
            return
        L16:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "value size out of bound"
            r0.<init>(r1)
            throw r0
    }

    private static void dm(int r1) {
            r0 = 255(0xff, float:3.57E-43)
            if (r1 > r0) goto L5
            return
        L5:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "key's length must less than 256"
            r1.<init>(r0)
            throw r1
    }

    private void dn(int r15) {
            r14 = this;
            com.kwad.sdk.utils.a.b r0 = r14.aKU
            if (r0 != 0) goto Ld
            com.kwad.sdk.utils.a.b r0 = new com.kwad.sdk.utils.a.b
            int r1 = com.kwad.sdk.utils.a.c.PAGE_SIZE
            r0.<init>(r1)
            r14.aKU = r0
        Ld:
            com.kwad.sdk.utils.a.b r0 = r14.aKU
            byte[] r0 = r0.aKG
            int r0 = r0.length
            int r1 = r14.aKV
            int r1 = r1 + r15
            if (r1 < r0) goto L81
            int r2 = r14.aLe
            if (r2 <= r15) goto L25
            int r3 = r14.Ku()
            if (r2 <= r3) goto L25
            r14.do(r15)
            return
        L25:
            int r15 = r14.B(r0, r1)
            byte[] r0 = new byte[r15]
            com.kwad.sdk.utils.a.b r1 = r14.aKU
            byte[] r1 = r1.aKG
            int r2 = r14.aKV
            r3 = 0
            java.lang.System.arraycopy(r1, r3, r0, r3, r2)
            com.kwad.sdk.utils.a.b r1 = r14.aKU
            r1.aKG = r0
            int r0 = r14.aLg
            if (r0 != 0) goto L81
            java.nio.channels.FileChannel r4 = r14.aKO     // Catch: java.lang.Throwable -> L62
            java.nio.channels.FileChannel$MapMode r5 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.lang.Throwable -> L62
            r6 = 0
            long r12 = (long) r15     // Catch: java.lang.Throwable -> L62
            r8 = r12
            java.nio.MappedByteBuffer r15 = r4.map(r5, r6, r8)     // Catch: java.lang.Throwable -> L62
            r14.aKS = r15     // Catch: java.lang.Throwable -> L62
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.lang.Throwable -> L62
            r15.order(r0)     // Catch: java.lang.Throwable -> L62
            java.nio.channels.FileChannel r8 = r14.aKP     // Catch: java.lang.Throwable -> L62
            java.nio.channels.FileChannel$MapMode r9 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.lang.Throwable -> L62
            r10 = 0
            java.nio.MappedByteBuffer r15 = r8.map(r9, r10, r12)     // Catch: java.lang.Throwable -> L62
            r14.aKT = r15     // Catch: java.lang.Throwable -> L62
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.lang.Throwable -> L62
            r15.order(r0)     // Catch: java.lang.Throwable -> L62
            return
        L62:
            r15 = move-exception
            java.lang.Exception r0 = new java.lang.Exception
            java.lang.String r1 = "map failed"
            r0.<init>(r1, r15)
            r14.r(r0)
            com.kwad.sdk.utils.a.b r15 = r14.aKU
            int r0 = r14.aKV
            int r0 = r0 + (-12)
            r15.y(r3, r0)
            com.kwad.sdk.utils.a.b r15 = r14.aKU
            r0 = 4
            long r1 = r14.aKW
            r15.g(r0, r1)
            r14.Kq()
        L81:
            return
    }

    private void do(int r18) {
            r17 = this;
            r0 = r17
            java.util.ArrayList<com.kwad.sdk.utils.a.c$e> r1 = r0.aLf
            if (r1 != 0) goto L7
            return
        L7:
            com.kwad.sdk.utils.a.b r2 = r0.aKU
            if (r2 != 0) goto Lc
            return
        Lc:
            java.util.Collections.sort(r1)
            r17.Kx()
            java.util.ArrayList<com.kwad.sdk.utils.a.c$e> r1 = r0.aLf
            r2 = 0
            java.lang.Object r1 = r1.get(r2)
            com.kwad.sdk.utils.a.c$e r1 = (com.kwad.sdk.utils.a.c.e) r1
            int r3 = r1.start
            int r4 = r0.aKV
            int r5 = r0.aLe
            int r5 = r4 - r5
            int r6 = r5 + (-12)
            int r7 = r5 - r3
            int r4 = r4 - r3
            int r8 = r4 + r7
            r9 = 1
            if (r6 >= r8) goto L2f
            r8 = r9
            goto L30
        L2f:
            r8 = r2
        L30:
            if (r8 != 0) goto L3d
            long r10 = r0.aKW
            com.kwad.sdk.utils.a.b r12 = r0.aKU
            long r12 = r12.A(r3, r4)
            long r10 = r10 ^ r12
            r0.aKW = r10
        L3d:
            java.util.ArrayList<com.kwad.sdk.utils.a.c$e> r4 = r0.aLf
            int r4 = r4.size()
            int r10 = r0.aKV
            java.util.ArrayList<com.kwad.sdk.utils.a.c$e> r11 = r0.aLf
            int r12 = r4 + (-1)
            java.lang.Object r11 = r11.get(r12)
            com.kwad.sdk.utils.a.c$e r11 = (com.kwad.sdk.utils.a.c.e) r11
            int r11 = r11.end
            int r10 = r10 - r11
            if (r10 <= 0) goto L56
            r11 = r4
            goto L57
        L56:
            r11 = r12
        L57:
            int r11 = r11 << r9
            int[] r11 = new int[r11]
            int r13 = r1.start
            int r1 = r1.end
            r14 = r9
        L5f:
            if (r14 >= r4) goto L8d
            java.util.ArrayList<com.kwad.sdk.utils.a.c$e> r15 = r0.aLf
            java.lang.Object r15 = r15.get(r14)
            com.kwad.sdk.utils.a.c$e r15 = (com.kwad.sdk.utils.a.c.e) r15
            int r2 = r15.start
            int r2 = r2 - r1
            com.kwad.sdk.utils.a.b r9 = r0.aKU
            byte[] r9 = r9.aKG
            r16 = r4
            com.kwad.sdk.utils.a.b r4 = r0.aKU
            byte[] r4 = r4.aKG
            java.lang.System.arraycopy(r9, r1, r4, r13, r2)
            int r4 = r14 + (-1)
            r9 = 1
            int r4 = r4 << r9
            r11[r4] = r1
            int r4 = r4 + r9
            int r1 = r1 - r13
            r11[r4] = r1
            int r13 = r13 + r2
            int r1 = r15.end
            int r14 = r14 + 1
            r4 = r16
            r2 = 0
            r9 = 1
            goto L5f
        L8d:
            if (r10 <= 0) goto La3
            com.kwad.sdk.utils.a.b r2 = r0.aKU
            byte[] r2 = r2.aKG
            com.kwad.sdk.utils.a.b r4 = r0.aKU
            byte[] r4 = r4.aKG
            java.lang.System.arraycopy(r2, r1, r4, r13, r10)
            r2 = 1
            int r4 = r12 << 1
            r11[r4] = r1
            int r4 = r4 + r2
            int r1 = r1 - r13
            r11[r4] = r1
        La3:
            r17.Ky()
            if (r8 == 0) goto Lb1
            com.kwad.sdk.utils.a.b r1 = r0.aKU
            r2 = 12
            long r1 = r1.A(r2, r6)
            goto Lba
        Lb1:
            long r1 = r0.aKW
            com.kwad.sdk.utils.a.b r4 = r0.aKU
            long r8 = r4.A(r3, r7)
            long r1 = r1 ^ r8
        Lba:
            r0.aKW = r1
            r0.aKV = r5
            int r1 = r0.aLg
            r2 = 4
            if (r1 != 0) goto L105
            java.nio.MappedByteBuffer r1 = r0.aKS
            if (r1 == 0) goto Le7
            r4 = -1
            r8 = 0
            r1.putInt(r8, r4)
            java.nio.MappedByteBuffer r1 = r0.aKS
            long r9 = r0.aKW
            r1.putLong(r2, r9)
            java.nio.MappedByteBuffer r1 = r0.aKS
            r1.position(r3)
            java.nio.MappedByteBuffer r1 = r0.aKS
            com.kwad.sdk.utils.a.b r4 = r0.aKU
            byte[] r4 = r4.aKG
            r1.put(r4, r3, r7)
            java.nio.MappedByteBuffer r1 = r0.aKS
            r1.putInt(r8, r6)
            goto Le8
        Le7:
            r8 = 0
        Le8:
            java.nio.MappedByteBuffer r1 = r0.aKT
            if (r1 == 0) goto L112
            r1.putInt(r8, r6)
            java.nio.MappedByteBuffer r1 = r0.aKT
            long r8 = r0.aKW
            r1.putLong(r2, r8)
            java.nio.MappedByteBuffer r1 = r0.aKT
            r1.position(r3)
            java.nio.MappedByteBuffer r1 = r0.aKT
            com.kwad.sdk.utils.a.b r2 = r0.aKU
            byte[] r2 = r2.aKG
            r1.put(r2, r3, r7)
            goto L112
        L105:
            com.kwad.sdk.utils.a.b r1 = r0.aKU
            r4 = 0
            r1.y(r4, r6)
            com.kwad.sdk.utils.a.b r1 = r0.aKU
            long r6 = r0.aKW
            r1.g(r2, r6)
        L112:
            r0.a(r3, r11)
            int r5 = r5 + r18
            com.kwad.sdk.utils.a.b r1 = r0.aKU
            byte[] r1 = r1.aKG
            int r1 = r1.length
            int r1 = r1 - r5
            int r2 = com.kwad.sdk.utils.a.c.aKL
            if (r1 <= r2) goto L124
            r0.dp(r5)
        L124:
            java.lang.String r1 = "gc finish"
            r0.info(r1)
            return
    }

    private void dp(int r10) {
            r9 = this;
            int r0 = com.kwad.sdk.utils.a.c.PAGE_SIZE
            int r10 = r10 + r0
            int r10 = r9.B(r0, r10)
            com.kwad.sdk.utils.a.b r0 = r9.aKU
            if (r0 == 0) goto L21
            byte[] r0 = r0.aKG
            int r0 = r0.length
            if (r10 < r0) goto L11
            return
        L11:
            byte[] r0 = new byte[r10]
            com.kwad.sdk.utils.a.b r1 = r9.aKU
            byte[] r1 = r1.aKG
            int r2 = r9.aKV
            r3 = 0
            java.lang.System.arraycopy(r1, r3, r0, r3, r2)
            com.kwad.sdk.utils.a.b r1 = r9.aKU
            r1.aKG = r0
        L21:
            int r0 = r9.aLg
            if (r0 != 0) goto L63
            java.nio.channels.FileChannel r0 = r9.aKO     // Catch: java.lang.Throwable -> L55
            long r7 = (long) r10     // Catch: java.lang.Throwable -> L55
            r0.truncate(r7)     // Catch: java.lang.Throwable -> L55
            java.nio.channels.FileChannel r1 = r9.aKO     // Catch: java.lang.Throwable -> L55
            java.nio.channels.FileChannel$MapMode r2 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.lang.Throwable -> L55
            r3 = 0
            r5 = r7
            java.nio.MappedByteBuffer r10 = r1.map(r2, r3, r5)     // Catch: java.lang.Throwable -> L55
            r9.aKS = r10     // Catch: java.lang.Throwable -> L55
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.lang.Throwable -> L55
            r10.order(r0)     // Catch: java.lang.Throwable -> L55
            java.nio.channels.FileChannel r10 = r9.aKP     // Catch: java.lang.Throwable -> L55
            r10.truncate(r7)     // Catch: java.lang.Throwable -> L55
            java.nio.channels.FileChannel r1 = r9.aKP     // Catch: java.lang.Throwable -> L55
            java.nio.channels.FileChannel$MapMode r2 = java.nio.channels.FileChannel.MapMode.READ_WRITE     // Catch: java.lang.Throwable -> L55
            r3 = 0
            r5 = r7
            java.nio.MappedByteBuffer r10 = r1.map(r2, r3, r5)     // Catch: java.lang.Throwable -> L55
            r9.aKT = r10     // Catch: java.lang.Throwable -> L55
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN     // Catch: java.lang.Throwable -> L55
            r10.order(r0)     // Catch: java.lang.Throwable -> L55
            goto L63
        L55:
            r10 = move-exception
            java.lang.Exception r0 = new java.lang.Exception
            java.lang.String r1 = "map failed"
            r0.<init>(r1, r10)
            r9.r(r0)
            r9.Kq()
        L63:
            java.lang.String r10 = "truncate finish"
            r9.info(r10)
            return
    }

    private static void fV(java.lang.String r1) {
            if (r1 == 0) goto L9
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L9
            return
        L9:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "key is empty"
            r1.<init>(r0)
            throw r1
    }

    private void fW(java.lang.String r4) {
            r3 = this;
            com.kwad.sdk.utils.a.c$d r0 = r3.aKN
            if (r0 == 0) goto Le
            java.lang.String r1 = r3.name
            java.lang.Exception r2 = new java.lang.Exception
            r2.<init>(r4)
            r0.e(r1, r2)
        Le:
            return
    }

    private void g(java.lang.Exception r3) {
            r2 = this;
            com.kwad.sdk.utils.a.c$d r0 = r2.aKN
            if (r0 == 0) goto L9
            java.lang.String r1 = r2.name
            r0.a(r1, r3)
        L9:
            return
    }

    private void h(java.io.File r1, java.io.File r2) {
            r0 = this;
            boolean r1 = r0.ac(r1)     // Catch: java.io.IOException -> L7
            if (r1 == 0) goto Lb
            return
        L7:
            r1 = move-exception
            r0.g(r1)
        Lb:
            r0.Ks()
            boolean r1 = r0.ac(r2)     // Catch: java.lang.Exception -> L15
            if (r1 == 0) goto L19
            return
        L15:
            r1 = move-exception
            r0.g(r1)
        L19:
            r0.Ks()
            return
    }

    private void info(java.lang.String r3) {
            r2 = this;
            com.kwad.sdk.utils.a.c$d r0 = r2.aKN
            if (r0 == 0) goto L9
            java.lang.String r1 = r2.name
            r0.i(r1, r3)
        L9:
            return
    }

    private synchronized void putDouble(java.lang.String r8, double r9) {
            r7 = this;
            monitor-enter(r7)
            fV(r8)     // Catch: java.lang.Throwable -> L57
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r0 = r7.aKX     // Catch: java.lang.Throwable -> L57
            java.lang.Object r0 = r0.get(r8)     // Catch: java.lang.Throwable -> L57
            com.kwad.sdk.utils.a.a$d r0 = (com.kwad.sdk.utils.a.a.d) r0     // Catch: java.lang.Throwable -> L57
            if (r0 != 0) goto L39
            r0 = 5
            r7.a(r8, r0)     // Catch: java.lang.Throwable -> L57
            com.kwad.sdk.utils.a.b r0 = r7.aKU     // Catch: java.lang.Throwable -> L57
            if (r0 == 0) goto L34
            com.kwad.sdk.utils.a.b r0 = r7.aKU     // Catch: java.lang.Throwable -> L57
            int r0 = r0.position     // Catch: java.lang.Throwable -> L57
            com.kwad.sdk.utils.a.b r1 = r7.aKU     // Catch: java.lang.Throwable -> L57
            long r2 = java.lang.Double.doubleToRawLongBits(r9)     // Catch: java.lang.Throwable -> L57
            r1.av(r2)     // Catch: java.lang.Throwable -> L57
            r7.Kt()     // Catch: java.lang.Throwable -> L57
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r1 = r7.aKX     // Catch: java.lang.Throwable -> L57
            if (r1 == 0) goto L34
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r1 = r7.aKX     // Catch: java.lang.Throwable -> L57
            com.kwad.sdk.utils.a.a$d r2 = new com.kwad.sdk.utils.a.a$d     // Catch: java.lang.Throwable -> L57
            r2.<init>(r0, r9)     // Catch: java.lang.Throwable -> L57
            r1.put(r8, r2)     // Catch: java.lang.Throwable -> L57
        L34:
            r7.Km()     // Catch: java.lang.Throwable -> L57
            monitor-exit(r7)
            return
        L39:
            double r1 = r0.value     // Catch: java.lang.Throwable -> L57
            int r8 = (r1 > r9 ? 1 : (r1 == r9 ? 0 : -1))
            if (r8 == 0) goto L55
            long r2 = java.lang.Double.doubleToRawLongBits(r9)     // Catch: java.lang.Throwable -> L57
            double r4 = r0.value     // Catch: java.lang.Throwable -> L57
            long r4 = java.lang.Double.doubleToRawLongBits(r4)     // Catch: java.lang.Throwable -> L57
            long r4 = r4 ^ r2
            r0.value = r9     // Catch: java.lang.Throwable -> L57
            int r6 = r0.offset     // Catch: java.lang.Throwable -> L57
            r1 = r7
            r1.b(r2, r4, r6)     // Catch: java.lang.Throwable -> L57
            r7.Km()     // Catch: java.lang.Throwable -> L57
        L55:
            monitor-exit(r7)
            return
        L57:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    private synchronized void putFloat(java.lang.String r6, float r7) {
            r5 = this;
            monitor-enter(r5)
            fV(r6)     // Catch: java.lang.Throwable -> L5d
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r0 = r5.aKX     // Catch: java.lang.Throwable -> L5d
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Throwable -> L5d
            com.kwad.sdk.utils.a.a$e r0 = (com.kwad.sdk.utils.a.a.e) r0     // Catch: java.lang.Throwable -> L5d
            if (r0 != 0) goto L39
            r0 = 3
            r5.a(r6, r0)     // Catch: java.lang.Throwable -> L5d
            com.kwad.sdk.utils.a.b r0 = r5.aKU     // Catch: java.lang.Throwable -> L5d
            if (r0 == 0) goto L34
            com.kwad.sdk.utils.a.b r0 = r5.aKU     // Catch: java.lang.Throwable -> L5d
            int r0 = r0.position     // Catch: java.lang.Throwable -> L5d
            com.kwad.sdk.utils.a.b r1 = r5.aKU     // Catch: java.lang.Throwable -> L5d
            int r2 = java.lang.Float.floatToRawIntBits(r7)     // Catch: java.lang.Throwable -> L5d
            r1.df(r2)     // Catch: java.lang.Throwable -> L5d
            r5.Kt()     // Catch: java.lang.Throwable -> L5d
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r1 = r5.aKX     // Catch: java.lang.Throwable -> L5d
            if (r1 == 0) goto L34
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r1 = r5.aKX     // Catch: java.lang.Throwable -> L5d
            com.kwad.sdk.utils.a.a$e r2 = new com.kwad.sdk.utils.a.a$e     // Catch: java.lang.Throwable -> L5d
            r2.<init>(r0, r7)     // Catch: java.lang.Throwable -> L5d
            r1.put(r6, r2)     // Catch: java.lang.Throwable -> L5d
        L34:
            r5.Km()     // Catch: java.lang.Throwable -> L5d
            monitor-exit(r5)
            return
        L39:
            float r6 = r0.value     // Catch: java.lang.Throwable -> L5d
            int r6 = (r6 > r7 ? 1 : (r6 == r7 ? 0 : -1))
            if (r6 == 0) goto L5b
            int r6 = java.lang.Float.floatToRawIntBits(r7)     // Catch: java.lang.Throwable -> L5d
            float r1 = r0.value     // Catch: java.lang.Throwable -> L5d
            int r1 = java.lang.Float.floatToRawIntBits(r1)     // Catch: java.lang.Throwable -> L5d
            r1 = r1 ^ r6
            long r1 = (long) r1     // Catch: java.lang.Throwable -> L5d
            r3 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r1 = r1 & r3
            r0.value = r7     // Catch: java.lang.Throwable -> L5d
            int r7 = r0.offset     // Catch: java.lang.Throwable -> L5d
            r5.a(r6, r1, r7)     // Catch: java.lang.Throwable -> L5d
            r5.Km()     // Catch: java.lang.Throwable -> L5d
        L5b:
            monitor-exit(r5)
            return
        L5d:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    private synchronized void putStringSet(java.lang.String r2, java.util.Set<java.lang.String> r3) {
            r1 = this;
            monitor-enter(r1)
            if (r3 != 0) goto L8
            r1.remove(r2)     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return
        L8:
            com.kwad.sdk.utils.a.g r0 = com.kwad.sdk.utils.a.g.aLz     // Catch: java.lang.Throwable -> Lf
            r1.a(r2, r3, r0)     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return
        Lf:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    private void q(java.lang.String r4, int r5) {
            r3 = this;
            com.kwad.sdk.utils.a.b r0 = r3.aKU
            if (r0 != 0) goto L5
            return
        L5:
            byte r1 = (byte) r5
            r0.e(r1)
            int r0 = r4.length()
            if (r5 != r0) goto L23
            r0 = 0
            com.kwad.sdk.utils.a.b r1 = r3.aKU
            byte[] r1 = r1.aKG
            com.kwad.sdk.utils.a.b r2 = r3.aKU
            int r2 = r2.position
            a(r4, r0, r5, r1, r2)
            com.kwad.sdk.utils.a.b r4 = r3.aKU
            int r0 = r4.position
            int r0 = r0 + r5
            r4.position = r0
            return
        L23:
            com.kwad.sdk.utils.a.b r5 = r3.aKU
            r5.fR(r4)
            return
    }

    private void r(java.lang.String r4, int r5) {
            r3 = this;
            com.kwad.sdk.utils.a.b r0 = r3.aKU
            if (r0 != 0) goto L5
            return
        L5:
            short r1 = (short) r5
            r0.a(r1)
            int r0 = r4.length()
            if (r5 != r0) goto L1c
            r0 = 0
            com.kwad.sdk.utils.a.b r1 = r3.aKU
            byte[] r1 = r1.aKG
            com.kwad.sdk.utils.a.b r2 = r3.aKU
            int r2 = r2.position
            a(r4, r0, r5, r1, r2)
            return
        L1c:
            com.kwad.sdk.utils.a.b r5 = r3.aKU
            r5.fR(r4)
            return
    }

    private void r(java.lang.Throwable r3) {
            r2 = this;
            com.kwad.sdk.utils.a.c$d r0 = r2.aKN
            if (r0 == 0) goto L9
            java.lang.String r1 = r2.name
            r0.e(r1, r3)
        L9:
            return
    }

    private void updateBytes(int r7, byte[] r8) {
            r6 = this;
            int r0 = r8.length
            com.kwad.sdk.utils.a.b r1 = r6.aKU
            if (r1 == 0) goto L24
            long r2 = r6.aKW
            long r4 = r1.A(r7, r0)
            long r1 = r2 ^ r4
            r6.aKW = r1
            com.kwad.sdk.utils.a.b r1 = r6.aKU
            r1.position = r7
            com.kwad.sdk.utils.a.b r1 = r6.aKU
            r1.n(r8)
            long r1 = r6.aKW
            com.kwad.sdk.utils.a.b r3 = r6.aKU
            long r3 = r3.A(r7, r0)
            long r0 = r1 ^ r3
            r6.aKW = r0
        L24:
            int r0 = r6.aLg
            r1 = 4
            if (r0 != 0) goto L60
            java.nio.MappedByteBuffer r0 = r6.aKS
            if (r0 == 0) goto L4c
            r2 = -1
            r3 = 0
            r0.putInt(r3, r2)
            java.nio.MappedByteBuffer r0 = r6.aKS
            long r4 = r6.aKW
            r0.putLong(r1, r4)
            java.nio.MappedByteBuffer r0 = r6.aKS
            r0.position(r7)
            java.nio.MappedByteBuffer r0 = r6.aKS
            r0.put(r8)
            java.nio.MappedByteBuffer r0 = r6.aKS
            int r2 = r6.aKV
            int r2 = r2 + (-12)
            r0.putInt(r3, r2)
        L4c:
            java.nio.MappedByteBuffer r0 = r6.aKT
            if (r0 == 0) goto L69
            long r2 = r6.aKW
            r0.putLong(r1, r2)
            java.nio.MappedByteBuffer r0 = r6.aKT
            r0.position(r7)
            java.nio.MappedByteBuffer r7 = r6.aKT
            r7.put(r8)
            return
        L60:
            com.kwad.sdk.utils.a.b r7 = r6.aKU
            if (r7 == 0) goto L69
            long r2 = r6.aKW
            r7.g(r1, r2)
        L69:
            return
    }

    public final synchronized boolean contains(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r0 = r1.aKX     // Catch: java.lang.Throwable -> L9
            boolean r2 = r0.containsKey(r2)     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r2
        L9:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized java.util.Map<java.lang.String, java.lang.Object> getAll() {
            r6 = this;
            monitor-enter(r6)
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r0 = r6.aKX     // Catch: java.lang.Throwable -> La7
            int r0 = r0.size()     // Catch: java.lang.Throwable -> La7
            if (r0 != 0) goto L10
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> La7
            r0.<init>()     // Catch: java.lang.Throwable -> La7
            monitor-exit(r6)
            return r0
        L10:
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> La7
            int r0 = r0 * 4
            int r0 = r0 / 3
            int r0 = r0 + 1
            r1.<init>(r0)     // Catch: java.lang.Throwable -> La7
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r0 = r6.aKX     // Catch: java.lang.Throwable -> La7
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> La7
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> La7
        L25:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Throwable -> La7
            if (r2 == 0) goto La5
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> La7
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2     // Catch: java.lang.Throwable -> La7
            java.lang.Object r3 = r2.getKey()     // Catch: java.lang.Throwable -> La7
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> La7
            java.lang.Object r2 = r2.getValue()     // Catch: java.lang.Throwable -> La7
            com.kwad.sdk.utils.a.a$b r2 = (com.kwad.sdk.utils.a.a.b) r2     // Catch: java.lang.Throwable -> La7
            r4 = 0
            byte r5 = r2.Kf()     // Catch: java.lang.Throwable -> La7
            switch(r5) {
                case 1: goto L98;
                case 2: goto L8f;
                case 3: goto L86;
                case 4: goto L7d;
                case 5: goto L74;
                case 6: goto L66;
                case 7: goto L57;
                case 8: goto L46;
                default: goto L45;
            }     // Catch: java.lang.Throwable -> La7
        L45:
            goto La1
        L46:
            r4 = r2
            com.kwad.sdk.utils.a.a$h r4 = (com.kwad.sdk.utils.a.a.h) r4     // Catch: java.lang.Throwable -> La7
            boolean r5 = r4.aKE     // Catch: java.lang.Throwable -> La7
            if (r5 == 0) goto L52
            java.lang.Object r2 = r6.a(r4)     // Catch: java.lang.Throwable -> La7
            goto L64
        L52:
            com.kwad.sdk.utils.a.a$h r2 = (com.kwad.sdk.utils.a.a.h) r2     // Catch: java.lang.Throwable -> La7
            java.lang.Object r2 = r2.value     // Catch: java.lang.Throwable -> La7
            goto L64
        L57:
            com.kwad.sdk.utils.a.a$a r2 = (com.kwad.sdk.utils.a.a.a) r2     // Catch: java.lang.Throwable -> La7
            boolean r4 = r2.aKE     // Catch: java.lang.Throwable -> La7
            if (r4 == 0) goto L62
            byte[] r2 = r6.a(r2)     // Catch: java.lang.Throwable -> La7
            goto L64
        L62:
            java.lang.Object r2 = r2.value     // Catch: java.lang.Throwable -> La7
        L64:
            r4 = r2
            goto La1
        L66:
            com.kwad.sdk.utils.a.a$i r2 = (com.kwad.sdk.utils.a.a.i) r2     // Catch: java.lang.Throwable -> La7
            boolean r4 = r2.aKE     // Catch: java.lang.Throwable -> La7
            if (r4 == 0) goto L71
            java.lang.String r2 = r6.a(r2)     // Catch: java.lang.Throwable -> La7
            goto L64
        L71:
            java.lang.Object r2 = r2.value     // Catch: java.lang.Throwable -> La7
            goto L64
        L74:
            com.kwad.sdk.utils.a.a$d r2 = (com.kwad.sdk.utils.a.a.d) r2     // Catch: java.lang.Throwable -> La7
            double r4 = r2.value     // Catch: java.lang.Throwable -> La7
            java.lang.Double r2 = java.lang.Double.valueOf(r4)     // Catch: java.lang.Throwable -> La7
            goto L64
        L7d:
            com.kwad.sdk.utils.a.a$g r2 = (com.kwad.sdk.utils.a.a.g) r2     // Catch: java.lang.Throwable -> La7
            long r4 = r2.value     // Catch: java.lang.Throwable -> La7
            java.lang.Long r2 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Throwable -> La7
            goto L64
        L86:
            com.kwad.sdk.utils.a.a$e r2 = (com.kwad.sdk.utils.a.a.e) r2     // Catch: java.lang.Throwable -> La7
            float r2 = r2.value     // Catch: java.lang.Throwable -> La7
            java.lang.Float r2 = java.lang.Float.valueOf(r2)     // Catch: java.lang.Throwable -> La7
            goto L64
        L8f:
            com.kwad.sdk.utils.a.a$f r2 = (com.kwad.sdk.utils.a.a.f) r2     // Catch: java.lang.Throwable -> La7
            int r2 = r2.value     // Catch: java.lang.Throwable -> La7
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> La7
            goto L64
        L98:
            com.kwad.sdk.utils.a.a$c r2 = (com.kwad.sdk.utils.a.a.c) r2     // Catch: java.lang.Throwable -> La7
            boolean r2 = r2.value     // Catch: java.lang.Throwable -> La7
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)     // Catch: java.lang.Throwable -> La7
            goto L64
        La1:
            r1.put(r3, r4)     // Catch: java.lang.Throwable -> La7
            goto L25
        La5:
            monitor-exit(r6)
            return r1
        La7:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    public final synchronized boolean getBoolean(java.lang.String r2, boolean r3) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r0 = r1.aKX     // Catch: java.lang.Throwable -> L11
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L11
            com.kwad.sdk.utils.a.a$c r2 = (com.kwad.sdk.utils.a.a.c) r2     // Catch: java.lang.Throwable -> L11
            if (r2 != 0) goto Ld
            monitor-exit(r1)
            return r3
        Ld:
            boolean r2 = r2.value     // Catch: java.lang.Throwable -> L11
            monitor-exit(r1)
            return r2
        L11:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized int getInt(java.lang.String r2, int r3) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r0 = r1.aKX     // Catch: java.lang.Throwable -> L11
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L11
            com.kwad.sdk.utils.a.a$f r2 = (com.kwad.sdk.utils.a.a.f) r2     // Catch: java.lang.Throwable -> L11
            if (r2 != 0) goto Ld
            monitor-exit(r1)
            return r3
        Ld:
            int r2 = r2.value     // Catch: java.lang.Throwable -> L11
            monitor-exit(r1)
            return r2
        L11:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized long getLong(java.lang.String r2, long r3) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r0 = r1.aKX     // Catch: java.lang.Throwable -> L11
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L11
            com.kwad.sdk.utils.a.a$g r2 = (com.kwad.sdk.utils.a.a.g) r2     // Catch: java.lang.Throwable -> L11
            if (r2 != 0) goto Ld
            monitor-exit(r1)
            return r3
        Ld:
            long r2 = r2.value     // Catch: java.lang.Throwable -> L11
            monitor-exit(r1)
            return r2
        L11:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized java.lang.String getString(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r0 = r1.aKX     // Catch: java.lang.Throwable -> L1d
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L1d
            com.kwad.sdk.utils.a.a$i r2 = (com.kwad.sdk.utils.a.a.i) r2     // Catch: java.lang.Throwable -> L1d
            if (r2 == 0) goto L1b
            boolean r3 = r2.aKE     // Catch: java.lang.Throwable -> L1d
            if (r3 == 0) goto L15
            java.lang.String r2 = r1.a(r2)     // Catch: java.lang.Throwable -> L1d
            monitor-exit(r1)
            return r2
        L15:
            java.lang.Object r2 = r2.value     // Catch: java.lang.Throwable -> L1d
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L1d
            monitor-exit(r1)
            return r2
        L1b:
            monitor-exit(r1)
            return r3
        L1d:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final void putAll(java.util.Map<java.lang.String, java.lang.Object> r2) {
            r1 = this;
            r0 = 0
            r1.a(r2, r0)
            return
    }

    public final synchronized void putBoolean(java.lang.String r5, boolean r6) {
            r4 = this;
            monitor-enter(r4)
            fV(r5)     // Catch: java.lang.Throwable -> L4e
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r0 = r4.aKX     // Catch: java.lang.Throwable -> L4e
            java.lang.Object r0 = r0.get(r5)     // Catch: java.lang.Throwable -> L4e
            com.kwad.sdk.utils.a.a$c r0 = (com.kwad.sdk.utils.a.a.c) r0     // Catch: java.lang.Throwable -> L4e
            r1 = 0
            r2 = 1
            if (r0 != 0) goto L3a
            r4.a(r5, r2)     // Catch: java.lang.Throwable -> L4e
            com.kwad.sdk.utils.a.b r0 = r4.aKU     // Catch: java.lang.Throwable -> L4e
            if (r0 == 0) goto L35
            com.kwad.sdk.utils.a.b r0 = r4.aKU     // Catch: java.lang.Throwable -> L4e
            int r0 = r0.position     // Catch: java.lang.Throwable -> L4e
            com.kwad.sdk.utils.a.b r3 = r4.aKU     // Catch: java.lang.Throwable -> L4e
            if (r6 == 0) goto L20
            r1 = r2
        L20:
            byte r1 = (byte) r1     // Catch: java.lang.Throwable -> L4e
            r3.e(r1)     // Catch: java.lang.Throwable -> L4e
            r4.Kt()     // Catch: java.lang.Throwable -> L4e
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r1 = r4.aKX     // Catch: java.lang.Throwable -> L4e
            if (r1 == 0) goto L35
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r1 = r4.aKX     // Catch: java.lang.Throwable -> L4e
            com.kwad.sdk.utils.a.a$c r2 = new com.kwad.sdk.utils.a.a$c     // Catch: java.lang.Throwable -> L4e
            r2.<init>(r0, r6)     // Catch: java.lang.Throwable -> L4e
            r1.put(r5, r2)     // Catch: java.lang.Throwable -> L4e
        L35:
            r4.Km()     // Catch: java.lang.Throwable -> L4e
            monitor-exit(r4)
            return
        L3a:
            boolean r5 = r0.value     // Catch: java.lang.Throwable -> L4e
            if (r5 == r6) goto L4c
            r0.value = r6     // Catch: java.lang.Throwable -> L4e
            if (r6 == 0) goto L43
            r1 = r2
        L43:
            byte r5 = (byte) r1     // Catch: java.lang.Throwable -> L4e
            int r6 = r0.offset     // Catch: java.lang.Throwable -> L4e
            r4.a(r5, r6)     // Catch: java.lang.Throwable -> L4e
            r4.Km()     // Catch: java.lang.Throwable -> L4e
        L4c:
            monitor-exit(r4)
            return
        L4e:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public final synchronized void putInt(java.lang.String r6, int r7) {
            r5 = this;
            monitor-enter(r5)
            fV(r6)     // Catch: java.lang.Throwable -> L4f
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r0 = r5.aKX     // Catch: java.lang.Throwable -> L4f
            java.lang.Object r0 = r0.get(r6)     // Catch: java.lang.Throwable -> L4f
            com.kwad.sdk.utils.a.a$f r0 = (com.kwad.sdk.utils.a.a.f) r0     // Catch: java.lang.Throwable -> L4f
            if (r0 != 0) goto L35
            r0 = 2
            r5.a(r6, r0)     // Catch: java.lang.Throwable -> L4f
            com.kwad.sdk.utils.a.b r0 = r5.aKU     // Catch: java.lang.Throwable -> L4f
            if (r0 == 0) goto L30
            com.kwad.sdk.utils.a.b r0 = r5.aKU     // Catch: java.lang.Throwable -> L4f
            int r0 = r0.position     // Catch: java.lang.Throwable -> L4f
            com.kwad.sdk.utils.a.b r1 = r5.aKU     // Catch: java.lang.Throwable -> L4f
            r1.df(r7)     // Catch: java.lang.Throwable -> L4f
            r5.Kt()     // Catch: java.lang.Throwable -> L4f
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r1 = r5.aKX     // Catch: java.lang.Throwable -> L4f
            if (r1 == 0) goto L30
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r1 = r5.aKX     // Catch: java.lang.Throwable -> L4f
            com.kwad.sdk.utils.a.a$f r2 = new com.kwad.sdk.utils.a.a$f     // Catch: java.lang.Throwable -> L4f
            r2.<init>(r0, r7)     // Catch: java.lang.Throwable -> L4f
            r1.put(r6, r2)     // Catch: java.lang.Throwable -> L4f
        L30:
            r5.Km()     // Catch: java.lang.Throwable -> L4f
            monitor-exit(r5)
            return
        L35:
            int r6 = r0.value     // Catch: java.lang.Throwable -> L4f
            if (r6 == r7) goto L4d
            int r6 = r0.value     // Catch: java.lang.Throwable -> L4f
            r6 = r6 ^ r7
            long r1 = (long) r6     // Catch: java.lang.Throwable -> L4f
            r3 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r1 = r1 & r3
            r0.value = r7     // Catch: java.lang.Throwable -> L4f
            int r6 = r0.offset     // Catch: java.lang.Throwable -> L4f
            r5.a(r7, r1, r6)     // Catch: java.lang.Throwable -> L4f
            r5.Km()     // Catch: java.lang.Throwable -> L4f
        L4d:
            monitor-exit(r5)
            return
        L4f:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public final synchronized void putLong(java.lang.String r10, long r11) {
            r9 = this;
            monitor-enter(r9)
            fV(r10)     // Catch: java.lang.Throwable -> L4d
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r0 = r9.aKX     // Catch: java.lang.Throwable -> L4d
            java.lang.Object r0 = r0.get(r10)     // Catch: java.lang.Throwable -> L4d
            com.kwad.sdk.utils.a.a$g r0 = (com.kwad.sdk.utils.a.a.g) r0     // Catch: java.lang.Throwable -> L4d
            if (r0 != 0) goto L35
            r0 = 4
            r9.a(r10, r0)     // Catch: java.lang.Throwable -> L4d
            com.kwad.sdk.utils.a.b r0 = r9.aKU     // Catch: java.lang.Throwable -> L4d
            if (r0 == 0) goto L30
            com.kwad.sdk.utils.a.b r0 = r9.aKU     // Catch: java.lang.Throwable -> L4d
            int r0 = r0.position     // Catch: java.lang.Throwable -> L4d
            com.kwad.sdk.utils.a.b r1 = r9.aKU     // Catch: java.lang.Throwable -> L4d
            r1.av(r11)     // Catch: java.lang.Throwable -> L4d
            r9.Kt()     // Catch: java.lang.Throwable -> L4d
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r1 = r9.aKX     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto L30
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r1 = r9.aKX     // Catch: java.lang.Throwable -> L4d
            com.kwad.sdk.utils.a.a$g r2 = new com.kwad.sdk.utils.a.a$g     // Catch: java.lang.Throwable -> L4d
            r2.<init>(r0, r11)     // Catch: java.lang.Throwable -> L4d
            r1.put(r10, r2)     // Catch: java.lang.Throwable -> L4d
        L30:
            r9.Km()     // Catch: java.lang.Throwable -> L4d
            monitor-exit(r9)
            return
        L35:
            long r1 = r0.value     // Catch: java.lang.Throwable -> L4d
            int r10 = (r1 > r11 ? 1 : (r1 == r11 ? 0 : -1))
            if (r10 == 0) goto L4b
            long r1 = r0.value     // Catch: java.lang.Throwable -> L4d
            long r6 = r11 ^ r1
            r0.value = r11     // Catch: java.lang.Throwable -> L4d
            int r8 = r0.offset     // Catch: java.lang.Throwable -> L4d
            r3 = r9
            r4 = r11
            r3.b(r4, r6, r8)     // Catch: java.lang.Throwable -> L4d
            r9.Km()     // Catch: java.lang.Throwable -> L4d
        L4b:
            monitor-exit(r9)
            return
        L4d:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    public final synchronized void putString(java.lang.String r8, java.lang.String r9) {
            r7 = this;
            monitor-enter(r7)
            fV(r8)     // Catch: java.lang.Throwable -> L6b
            if (r9 != 0) goto Lb
            r7.remove(r8)     // Catch: java.lang.Throwable -> L6b
            monitor-exit(r7)
            return
        Lb:
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r0 = r7.aKX     // Catch: java.lang.Throwable -> L6b
            java.lang.Object r0 = r0.get(r8)     // Catch: java.lang.Throwable -> L6b
            r5 = r0
            com.kwad.sdk.utils.a.a$i r5 = (com.kwad.sdk.utils.a.a.i) r5     // Catch: java.lang.Throwable -> L6b
            int r0 = r9.length()     // Catch: java.lang.Throwable -> L6b
            int r0 = r0 * 3
            r1 = 2048(0x800, float:2.87E-42)
            if (r0 >= r1) goto L23
            r7.a(r8, r9, r5)     // Catch: java.lang.Throwable -> L6b
            monitor-exit(r7)
            return
        L23:
            boolean r0 = r9.isEmpty()     // Catch: java.lang.Throwable -> L6b
            if (r0 == 0) goto L2d
            byte[] r0 = com.kwad.sdk.utils.a.c.aKI     // Catch: java.lang.Throwable -> L6b
        L2b:
            r4 = r0
            goto L62
        L2d:
            r0 = 0
            if (r5 != 0) goto L4c
            int r2 = r9.length()     // Catch: java.lang.Throwable -> L6b
            if (r2 >= r1) goto L4c
            int r1 = com.kwad.sdk.utils.a.b.fS(r9)     // Catch: java.lang.Throwable -> L6b
            byte[] r2 = new byte[r1]     // Catch: java.lang.Throwable -> L6b
            int r3 = r9.length()     // Catch: java.lang.Throwable -> L6b
            if (r1 != r3) goto L47
            a(r9, r0, r1, r2, r0)     // Catch: java.lang.Throwable -> L6b
        L45:
            r4 = r2
            goto L62
        L47:
            byte[] r0 = com.kwad.sdk.utils.a.b.fU(r9)     // Catch: java.lang.Throwable -> L6b
            goto L2b
        L4c:
            if (r5 == 0) goto L47
            boolean r1 = r5.aKE     // Catch: java.lang.Throwable -> L6b
            if (r1 != 0) goto L47
            int r1 = com.kwad.sdk.utils.a.b.fS(r9)     // Catch: java.lang.Throwable -> L6b
            byte[] r2 = new byte[r1]     // Catch: java.lang.Throwable -> L6b
            int r3 = r9.length()     // Catch: java.lang.Throwable -> L6b
            if (r1 != r3) goto L47
            a(r9, r0, r1, r2, r0)     // Catch: java.lang.Throwable -> L6b
            goto L45
        L62:
            r6 = 6
            r1 = r7
            r2 = r8
            r3 = r9
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L6b
            monitor-exit(r7)
            return
        L6b:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    public final void release() {
            r2 = this;
            java.io.RandomAccessFile r0 = r2.aKQ
            com.kwad.sdk.utils.a.h.closeQuietly(r0)
            java.io.RandomAccessFile r0 = r2.aKR
            com.kwad.sdk.utils.a.h.closeQuietly(r0)
            java.nio.channels.FileChannel r0 = r2.aKO
            com.kwad.sdk.utils.a.h.closeQuietly(r0)
            java.nio.channels.FileChannel r0 = r2.aKP
            com.kwad.sdk.utils.a.h.closeQuietly(r0)
            r0 = 0
            r2.aKO = r0
            r2.aKP = r0
            r2.aKS = r0
            r2.aKT = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.Tt
            r0.append(r1)
            java.lang.String r1 = r2.name
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.kwad.sdk.utils.a.c$c r1 = com.kwad.sdk.utils.a.c.a.aLl
            com.kwad.sdk.utils.a.c.c.remove(r0)
            return
    }

    public final synchronized void remove(java.lang.String r7) {
            r6 = this;
            monitor-enter(r6)
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r0 = r6.aKX     // Catch: java.lang.Throwable -> La1
            java.lang.Object r0 = r0.get(r7)     // Catch: java.lang.Throwable -> La1
            com.kwad.sdk.utils.a.a$b r0 = (com.kwad.sdk.utils.a.a.b) r0     // Catch: java.lang.Throwable -> La1
            if (r0 == 0) goto L9f
            java.util.Map<java.lang.String, com.kwad.sdk.utils.a.a$b> r1 = r6.aKX     // Catch: java.lang.Throwable -> La1
            r1.remove(r7)     // Catch: java.lang.Throwable -> La1
            byte r1 = r0.Kf()     // Catch: java.lang.Throwable -> La1
            r2 = 5
            r3 = 0
            if (r1 > r2) goto L2c
            int r7 = com.kwad.sdk.utils.a.b.fS(r7)     // Catch: java.lang.Throwable -> La1
            int r2 = r0.offset     // Catch: java.lang.Throwable -> La1
            int r7 = r7 + 2
            int r2 = r2 - r7
            int r7 = r0.offset     // Catch: java.lang.Throwable -> La1
            int[] r0 = com.kwad.sdk.utils.a.c.aKH     // Catch: java.lang.Throwable -> La1
            r0 = r0[r1]     // Catch: java.lang.Throwable -> La1
            int r7 = r7 + r0
            r6.a(r1, r2, r7)     // Catch: java.lang.Throwable -> La1
            goto L41
        L2c:
            com.kwad.sdk.utils.a.a$j r0 = (com.kwad.sdk.utils.a.a.j) r0     // Catch: java.lang.Throwable -> La1
            int r7 = r0.start     // Catch: java.lang.Throwable -> La1
            int r2 = r0.offset     // Catch: java.lang.Throwable -> La1
            int r4 = r0.aKD     // Catch: java.lang.Throwable -> La1
            int r2 = r2 + r4
            r6.a(r1, r7, r2)     // Catch: java.lang.Throwable -> La1
            boolean r7 = r0.aKE     // Catch: java.lang.Throwable -> La1
            if (r7 == 0) goto L41
            java.lang.Object r7 = r0.value     // Catch: java.lang.Throwable -> La1
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> La1
            r3 = r7
        L41:
            r7 = r1 | (-128(0xffffffffffffff80, float:NaN))
            byte r7 = (byte) r7     // Catch: java.lang.Throwable -> La1
            int r0 = r6.aLg     // Catch: java.lang.Throwable -> La1
            r1 = 4
            if (r0 != 0) goto L6e
            java.nio.MappedByteBuffer r0 = r6.aKS     // Catch: java.lang.Throwable -> La1
            if (r0 == 0) goto L5b
            java.nio.MappedByteBuffer r0 = r6.aKS     // Catch: java.lang.Throwable -> La1
            long r4 = r6.aKW     // Catch: java.lang.Throwable -> La1
            r0.putLong(r1, r4)     // Catch: java.lang.Throwable -> La1
            java.nio.MappedByteBuffer r0 = r6.aKS     // Catch: java.lang.Throwable -> La1
            int r2 = r6.aLb     // Catch: java.lang.Throwable -> La1
            r0.put(r2, r7)     // Catch: java.lang.Throwable -> La1
        L5b:
            java.nio.MappedByteBuffer r0 = r6.aKT     // Catch: java.lang.Throwable -> La1
            if (r0 == 0) goto L79
            java.nio.MappedByteBuffer r0 = r6.aKT     // Catch: java.lang.Throwable -> La1
            long r4 = r6.aKW     // Catch: java.lang.Throwable -> La1
            r0.putLong(r1, r4)     // Catch: java.lang.Throwable -> La1
            java.nio.MappedByteBuffer r0 = r6.aKT     // Catch: java.lang.Throwable -> La1
            int r1 = r6.aLb     // Catch: java.lang.Throwable -> La1
            r0.put(r1, r7)     // Catch: java.lang.Throwable -> La1
            goto L79
        L6e:
            com.kwad.sdk.utils.a.b r7 = r6.aKU     // Catch: java.lang.Throwable -> La1
            if (r7 == 0) goto L79
            com.kwad.sdk.utils.a.b r7 = r6.aKU     // Catch: java.lang.Throwable -> La1
            long r4 = r6.aKW     // Catch: java.lang.Throwable -> La1
            r7.g(r1, r4)     // Catch: java.lang.Throwable -> La1
        L79:
            r7 = 0
            r6.aLb = r7     // Catch: java.lang.Throwable -> La1
            if (r3 == 0) goto L99
            java.io.File r7 = new java.io.File     // Catch: java.lang.Throwable -> La1
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La1
            r0.<init>()     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = r6.Tt     // Catch: java.lang.Throwable -> La1
            r0.append(r1)     // Catch: java.lang.Throwable -> La1
            java.lang.String r1 = r6.name     // Catch: java.lang.Throwable -> La1
            r0.append(r1)     // Catch: java.lang.Throwable -> La1
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> La1
            r7.<init>(r0, r3)     // Catch: java.lang.Throwable -> La1
            com.kwad.sdk.utils.a.h.h(r7)     // Catch: java.lang.Throwable -> La1
        L99:
            r6.Kw()     // Catch: java.lang.Throwable -> La1
            r6.Km()     // Catch: java.lang.Throwable -> La1
        L9f:
            monitor-exit(r6)
            return
        La1:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final synchronized java.lang.String toString() {
            r2 = this;
            monitor-enter(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = "FastKV: path:"
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = r2.Tt     // Catch: java.lang.Throwable -> L1d
            r0.append(r1)     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = " name:"
            r0.append(r1)     // Catch: java.lang.Throwable -> L1d
            java.lang.String r1 = r2.name     // Catch: java.lang.Throwable -> L1d
            r0.append(r1)     // Catch: java.lang.Throwable -> L1d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1d
            monitor-exit(r2)
            return r0
        L1d:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }
}
