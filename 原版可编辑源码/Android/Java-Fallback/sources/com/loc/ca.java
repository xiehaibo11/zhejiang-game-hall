package com.loc;

public class ca {
    static boolean a = false;
    static int b = 20;
    private static int c = 20;
    private static java.lang.ref.WeakReference<com.loc.bv> d;
    private static int e;

    static class a extends com.loc.cs {
        static int a = 1;
        static int b = 2;
        static int c = 3;
        private android.content.Context d;
        private com.loc.bz f;
        private int g;
        private java.util.List<com.loc.bz> h;

        static {
                return
        }

        a(android.content.Context r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.d = r1
                r0.g = r2
                return
        }

        a(android.content.Context r1, int r2, com.loc.bz r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.f = r3
                return
        }

        a(android.content.Context r1, int r2, java.util.List<com.loc.bz> r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.h = r3
                return
        }

        @Override
        public final void a() {
                r16 = this;
                r1 = r16
                int r0 = r1.g
                r2 = 1
                if (r0 != r2) goto L38
                android.content.Context r0 = r1.d     // Catch: java.lang.Throwable -> L2f
                if (r0 == 0) goto L2e
                com.loc.bz r0 = r1.f     // Catch: java.lang.Throwable -> L2f
                if (r0 != 0) goto L10
                goto L2e
            L10:
                java.lang.Class<com.loc.ca> r2 = com.loc.ca.class
                monitor-enter(r2)     // Catch: java.lang.Throwable -> L2f
                android.content.Context r0 = r1.d     // Catch: java.lang.Throwable -> L2b
                if (r0 == 0) goto L29
                com.loc.bz r0 = r1.f     // Catch: java.lang.Throwable -> L2b
                if (r0 != 0) goto L1c
                goto L29
            L1c:
                android.content.Context r0 = r1.d     // Catch: java.lang.Throwable -> L2b
                com.loc.bz r3 = r1.f     // Catch: java.lang.Throwable -> L2b
                byte[] r3 = r3.a()     // Catch: java.lang.Throwable -> L2b
                com.loc.ca.a(r0, r3)     // Catch: java.lang.Throwable -> L2b
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L2b
                return
            L29:
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L2b
                return
            L2b:
                r0 = move-exception
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L2b
                throw r0     // Catch: java.lang.Throwable -> L2f
            L2e:
                return
            L2f:
                r0 = move-exception
                java.lang.String r2 = "stm"
                java.lang.String r3 = "as"
            L34:
                com.loc.av.b(r0, r2, r3)
                return
            L38:
                r2 = 2
                if (r0 != r2) goto Lae
                java.lang.Class<com.loc.ca> r2 = com.loc.ca.class
                monitor-enter(r2)     // Catch: java.lang.Throwable -> La8
                java.util.List<com.loc.bz> r0 = r1.h     // Catch: java.lang.Throwable -> La5
                if (r0 == 0) goto La3
                android.content.Context r0 = r1.d     // Catch: java.lang.Throwable -> La5
                if (r0 != 0) goto L47
                goto La3
            L47:
                r3 = 0
                r0 = 0
                byte[] r4 = new byte[r0]     // Catch: java.lang.Throwable -> La5
                java.io.ByteArrayOutputStream r5 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L7d
                r5.<init>()     // Catch: java.lang.Throwable -> L7d
                java.util.List<com.loc.bz> r0 = r1.h     // Catch: java.lang.Throwable -> L7a
                java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L7a
            L56:
                boolean r3 = r0.hasNext()     // Catch: java.lang.Throwable -> L7a
                if (r3 == 0) goto L6c
                java.lang.Object r3 = r0.next()     // Catch: java.lang.Throwable -> L7a
                com.loc.bz r3 = (com.loc.bz) r3     // Catch: java.lang.Throwable -> L7a
                if (r3 == 0) goto L56
                byte[] r3 = r3.a()     // Catch: java.lang.Throwable -> L7a
                r5.write(r3)     // Catch: java.lang.Throwable -> L7a
                goto L56
            L6c:
                byte[] r4 = r5.toByteArray()     // Catch: java.lang.Throwable -> L7a
                r5.close()     // Catch: java.lang.Throwable -> L74
                goto L8e
            L74:
                r0 = move-exception
                r3 = r0
            L76:
                r3.printStackTrace()     // Catch: java.lang.Throwable -> La5
                goto L8e
            L7a:
                r0 = move-exception
                r3 = r5
                goto L7e
            L7d:
                r0 = move-exception
            L7e:
                java.lang.String r5 = "stm"
                java.lang.String r6 = "aStB"
                com.loc.av.b(r0, r5, r6)     // Catch: java.lang.Throwable -> L95
                if (r3 == 0) goto L8e
                r3.close()     // Catch: java.lang.Throwable -> L8b
                goto L8e
            L8b:
                r0 = move-exception
                r3 = r0
                goto L76
            L8e:
                android.content.Context r0 = r1.d     // Catch: java.lang.Throwable -> La5
                com.loc.ca.a(r0, r4)     // Catch: java.lang.Throwable -> La5
                monitor-exit(r2)     // Catch: java.lang.Throwable -> La5
                return
            L95:
                r0 = move-exception
                r4 = r0
                if (r3 == 0) goto La2
                r3.close()     // Catch: java.lang.Throwable -> L9d
                goto La2
            L9d:
                r0 = move-exception
                r3 = r0
                r3.printStackTrace()     // Catch: java.lang.Throwable -> La5
            La2:
                throw r4     // Catch: java.lang.Throwable -> La5
            La3:
                monitor-exit(r2)     // Catch: java.lang.Throwable -> La5
                return
            La5:
                r0 = move-exception
                monitor-exit(r2)     // Catch: java.lang.Throwable -> La5
                throw r0     // Catch: java.lang.Throwable -> La8
            La8:
                r0 = move-exception
                java.lang.String r2 = "stm"
                java.lang.String r3 = "apb"
                goto L34
            Lae:
                r2 = 3
                if (r0 != r2) goto L13f
                android.content.Context r0 = r1.d     // Catch: java.lang.Throwable -> L137
                if (r0 != 0) goto Lb6
                return
            Lb6:
                java.lang.ref.WeakReference r0 = com.loc.ca.a()     // Catch: java.lang.Throwable -> L137
                com.loc.bv r0 = com.loc.cb.a(r0)     // Catch: java.lang.Throwable -> L137
                android.content.Context r2 = r1.d     // Catch: java.lang.Throwable -> L137
                java.lang.String r4 = com.loc.at.h     // Catch: java.lang.Throwable -> L137
                r5 = 1000(0x3e8, float:1.401E-42)
                r6 = 307200(0x4b000, float:4.30479E-40)
                java.lang.String r7 = "2"
                r3 = r0
                com.loc.cb.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L137
                com.loc.ci r2 = r0.g     // Catch: java.lang.Throwable -> L137
                if (r2 != 0) goto Lee
                com.loc.cc r2 = new com.loc.cc     // Catch: java.lang.Throwable -> L137
                com.loc.cg r3 = new com.loc.cg     // Catch: java.lang.Throwable -> L137
                android.content.Context r4 = r1.d     // Catch: java.lang.Throwable -> L137
                com.loc.cd r5 = new com.loc.cd     // Catch: java.lang.Throwable -> L137
                com.loc.ch r6 = new com.loc.ch     // Catch: java.lang.Throwable -> L137
                com.loc.cj r7 = new com.loc.cj     // Catch: java.lang.Throwable -> L137
                r7.<init>()     // Catch: java.lang.Throwable -> L137
                r6.<init>(r7)     // Catch: java.lang.Throwable -> L137
                r5.<init>(r6)     // Catch: java.lang.Throwable -> L137
                r3.<init>(r4, r5)     // Catch: java.lang.Throwable -> L137
                r2.<init>(r3)     // Catch: java.lang.Throwable -> L137
                r0.g = r2     // Catch: java.lang.Throwable -> L137
            Lee:
                r2 = 3600000(0x36ee80, float:5.044674E-39)
                r0.h = r2     // Catch: java.lang.Throwable -> L137
                java.lang.String r2 = r0.i     // Catch: java.lang.Throwable -> L137
                boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L137
                if (r2 == 0) goto Lff
                java.lang.String r2 = "cKey"
                r0.i = r2     // Catch: java.lang.Throwable -> L137
            Lff:
                com.loc.co r2 = r0.f     // Catch: java.lang.Throwable -> L137
                if (r2 != 0) goto L133
                com.loc.cn r2 = new com.loc.cn     // Catch: java.lang.Throwable -> L137
                android.content.Context r3 = r1.d     // Catch: java.lang.Throwable -> L137
                int r4 = r0.h     // Catch: java.lang.Throwable -> L137
                java.lang.String r5 = r0.i     // Catch: java.lang.Throwable -> L137
                com.loc.ck r6 = new com.loc.ck     // Catch: java.lang.Throwable -> L137
                java.lang.String r7 = r0.a     // Catch: java.lang.Throwable -> L137
                com.loc.cl r15 = new com.loc.cl     // Catch: java.lang.Throwable -> L137
                android.content.Context r9 = r1.d     // Catch: java.lang.Throwable -> L137
                boolean r10 = com.loc.ca.a     // Catch: java.lang.Throwable -> L137
                int r8 = com.loc.ca.b()     // Catch: java.lang.Throwable -> L137
                int r11 = r8 * 1024
                int r8 = com.loc.ca.b     // Catch: java.lang.Throwable -> L137
                int r12 = r8 * 1024
                java.lang.String r13 = "staticUpdate"
                int r8 = com.loc.ca.c()     // Catch: java.lang.Throwable -> L137
                int r14 = r8 * 1024
                r8 = r15
                r8.<init>(r9, r10, r11, r12, r13, r14)     // Catch: java.lang.Throwable -> L137
                r6.<init>(r7, r15)     // Catch: java.lang.Throwable -> L137
                r2.<init>(r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L137
                r0.f = r2     // Catch: java.lang.Throwable -> L137
            L133:
                com.loc.bw.a(r0)     // Catch: java.lang.Throwable -> L137
                return
            L137:
                r0 = move-exception
                java.lang.String r2 = "stm"
                java.lang.String r3 = "usd"
                com.loc.av.b(r0, r2, r3)
            L13f:
                return
        }
    }

    static {
            return
    }

    public ca() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.ref.WeakReference a() {
            java.lang.ref.WeakReference<com.loc.bv> r0 = com.loc.ca.d
            return r0
    }

    public static void a(android.content.Context r3) {
            com.loc.cr r0 = com.loc.cr.a()
            com.loc.ca$a r1 = new com.loc.ca$a
            int r2 = com.loc.ca.a.c
            r1.<init>(r3, r2)
            r0.b(r1)
            return
    }

    static void a(android.content.Context r7, byte[] r8) throws java.io.IOException {
            java.lang.ref.WeakReference<com.loc.bv> r0 = com.loc.ca.d
            com.loc.bv r0 = com.loc.cb.a(r0)
            java.lang.String r3 = com.loc.at.h
            r4 = 1000(0x3e8, float:1.401E-42)
            r5 = 307200(0x4b000, float:4.30479E-40)
            java.lang.String r6 = "2"
            r1 = r7
            r2 = r0
            com.loc.cb.a(r1, r2, r3, r4, r5, r6)
            com.loc.bh r7 = r0.e
            if (r7 != 0) goto L1f
            com.loc.be r7 = new com.loc.be
            r7.<init>()
            r0.e = r7
        L1f:
            java.util.Random r7 = new java.util.Random
            r7.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r2 = 100
            int r7 = r7.nextInt(r2)
            java.lang.String r7 = java.lang.Integer.toString(r7)
            r1.append(r7)
            long r2 = java.lang.System.nanoTime()
            java.lang.String r7 = java.lang.Long.toString(r2)
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            com.loc.bw.a(r7, r8, r0)     // Catch: java.lang.Throwable -> L49
            return
        L49:
            r7 = move-exception
            java.lang.String r8 = "stm"
            java.lang.String r0 = "wts"
            com.loc.av.b(r7, r8, r0)
            return
    }

    public static synchronized void a(com.loc.bz r4, android.content.Context r5) {
            java.lang.Class<com.loc.ca> r0 = com.loc.ca.class
            monitor-enter(r0)
            com.loc.cr r1 = com.loc.cr.a()     // Catch: java.lang.Throwable -> L13
            com.loc.ca$a r2 = new com.loc.ca$a     // Catch: java.lang.Throwable -> L13
            int r3 = com.loc.ca.a.a     // Catch: java.lang.Throwable -> L13
            r2.<init>(r5, r3, r4)     // Catch: java.lang.Throwable -> L13
            r1.b(r2)     // Catch: java.lang.Throwable -> L13
            monitor-exit(r0)
            return
        L13:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    public static synchronized void a(java.util.List<com.loc.bz> r4, android.content.Context r5) {
            java.lang.Class<com.loc.ca> r0 = com.loc.ca.class
            monitor-enter(r0)
            if (r4 == 0) goto L1e
            int r1 = r4.size()     // Catch: java.lang.Throwable -> L1c
            if (r1 != 0) goto Lc
            goto L1e
        Lc:
            com.loc.cr r1 = com.loc.cr.a()     // Catch: java.lang.Throwable -> L1c
            com.loc.ca$a r2 = new com.loc.ca$a     // Catch: java.lang.Throwable -> L1c
            int r3 = com.loc.ca.a.b     // Catch: java.lang.Throwable -> L1c
            r2.<init>(r5, r3, r4)     // Catch: java.lang.Throwable -> L1c
            r1.b(r2)     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r0)
            return
        L1c:
            monitor-exit(r0)
            return
        L1e:
            monitor-exit(r0)
            return
    }

    public static synchronized void a(boolean r1, int r2) {
            java.lang.Class<com.loc.ca> r0 = com.loc.ca.class
            monitor-enter(r0)
            com.loc.ca.a = r1     // Catch: java.lang.Throwable -> Le
            r1 = 0
            int r1 = java.lang.Math.max(r1, r2)     // Catch: java.lang.Throwable -> Le
            com.loc.ca.e = r1     // Catch: java.lang.Throwable -> Le
            monitor-exit(r0)
            return
        Le:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    static int b() {
            int r0 = com.loc.ca.c
            return r0
    }

    public static synchronized void b(java.util.List<com.loc.bz> r3, android.content.Context r4) {
            java.lang.Class<com.loc.ca> r0 = com.loc.ca.class
            monitor-enter(r0)
            java.util.List r1 = com.loc.bq.b()     // Catch: java.lang.Throwable -> L12
            if (r1 == 0) goto L12
            int r2 = r1.size()     // Catch: java.lang.Throwable -> L12
            if (r2 <= 0) goto L12
            r3.addAll(r1)     // Catch: java.lang.Throwable -> L12
        L12:
            a(r3, r4)     // Catch: java.lang.Throwable -> L17
            monitor-exit(r0)
            return
        L17:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    static int c() {
            int r0 = com.loc.ca.e
            return r0
    }
}
