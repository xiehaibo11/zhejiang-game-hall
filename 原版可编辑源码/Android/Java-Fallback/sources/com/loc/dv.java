package com.loc;

public final class dv {

    public static class a implements com.loc.dt {
        private int a;
        private int b;
        private int c;

        a(int r1, int r2, int r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }

        @Override
        public final long a() {
                r2 = this;
                int r0 = r2.a
                int r1 = r2.b
                long r0 = com.loc.dv.a(r0, r1)
                return r0
        }

        @Override
        public final int b() {
                r1 = this;
                int r0 = r1.c
                return r0
        }
    }

    public static class b implements com.loc.dt {
        private long a;
        private int b;

        b(long r1, int r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r3
                return
        }

        @Override
        public final long a() {
                r2 = this;
                long r0 = r2.a
                return r0
        }

        @Override
        public final int b() {
                r1 = this;
                int r0 = r1.b
                return r0
        }
    }

    public static long a(int r4, int r5) {
            long r0 = (long) r4
            r2 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r0 = r0 & r2
            r4 = 32
            long r0 = r0 << r4
            long r4 = (long) r5
            long r4 = r4 & r2
            long r4 = r4 | r0
            return r4
    }

    public static synchronized short a(long r2) {
            java.lang.Class<com.loc.dv> r0 = com.loc.dv.class
            monitor-enter(r0)
            com.loc.du r1 = com.loc.du.a()     // Catch: java.lang.Throwable -> Ld
            short r2 = r1.a(r2)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)
            return r2
        Ld:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static synchronized void a(java.util.List<com.loc.dz> r6) {
            java.lang.Class<com.loc.dv> r0 = com.loc.dv.class
            monitor-enter(r0)
            if (r6 == 0) goto L7d
            boolean r1 = r6.isEmpty()     // Catch: java.lang.Throwable -> L7a
            if (r1 == 0) goto Ld
            goto L7d
        Ld:
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L7a
            int r2 = r6.size()     // Catch: java.lang.Throwable -> L7a
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L7a
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Throwable -> L7a
        L1a:
            boolean r2 = r6.hasNext()     // Catch: java.lang.Throwable -> L7a
            if (r2 == 0) goto L71
            java.lang.Object r2 = r6.next()     // Catch: java.lang.Throwable -> L7a
            com.loc.dz r2 = (com.loc.dz) r2     // Catch: java.lang.Throwable -> L7a
            boolean r3 = r2 instanceof com.loc.eb     // Catch: java.lang.Throwable -> L7a
            if (r3 == 0) goto L3b
            com.loc.eb r2 = (com.loc.eb) r2     // Catch: java.lang.Throwable -> L7a
            com.loc.dv$a r3 = new com.loc.dv$a     // Catch: java.lang.Throwable -> L7a
            int r4 = r2.j     // Catch: java.lang.Throwable -> L7a
            int r5 = r2.k     // Catch: java.lang.Throwable -> L7a
            int r2 = r2.c     // Catch: java.lang.Throwable -> L7a
            r3.<init>(r4, r5, r2)     // Catch: java.lang.Throwable -> L7a
        L37:
            r1.add(r3)     // Catch: java.lang.Throwable -> L7a
            goto L1a
        L3b:
            boolean r3 = r2 instanceof com.loc.ec     // Catch: java.lang.Throwable -> L7a
            if (r3 == 0) goto L4d
            com.loc.ec r2 = (com.loc.ec) r2     // Catch: java.lang.Throwable -> L7a
            com.loc.dv$a r3 = new com.loc.dv$a     // Catch: java.lang.Throwable -> L7a
            int r4 = r2.j     // Catch: java.lang.Throwable -> L7a
            int r5 = r2.k     // Catch: java.lang.Throwable -> L7a
            int r2 = r2.c     // Catch: java.lang.Throwable -> L7a
            r3.<init>(r4, r5, r2)     // Catch: java.lang.Throwable -> L7a
            goto L37
        L4d:
            boolean r3 = r2 instanceof com.loc.ed     // Catch: java.lang.Throwable -> L7a
            if (r3 == 0) goto L5f
            com.loc.ed r2 = (com.loc.ed) r2     // Catch: java.lang.Throwable -> L7a
            com.loc.dv$a r3 = new com.loc.dv$a     // Catch: java.lang.Throwable -> L7a
            int r4 = r2.j     // Catch: java.lang.Throwable -> L7a
            int r5 = r2.k     // Catch: java.lang.Throwable -> L7a
            int r2 = r2.c     // Catch: java.lang.Throwable -> L7a
            r3.<init>(r4, r5, r2)     // Catch: java.lang.Throwable -> L7a
            goto L37
        L5f:
            boolean r3 = r2 instanceof com.loc.ea     // Catch: java.lang.Throwable -> L7a
            if (r3 == 0) goto L1a
            com.loc.ea r2 = (com.loc.ea) r2     // Catch: java.lang.Throwable -> L7a
            com.loc.dv$a r3 = new com.loc.dv$a     // Catch: java.lang.Throwable -> L7a
            int r4 = r2.k     // Catch: java.lang.Throwable -> L7a
            int r5 = r2.l     // Catch: java.lang.Throwable -> L7a
            int r2 = r2.c     // Catch: java.lang.Throwable -> L7a
            r3.<init>(r4, r5, r2)     // Catch: java.lang.Throwable -> L7a
            goto L37
        L71:
            com.loc.du r6 = com.loc.du.a()     // Catch: java.lang.Throwable -> L7a
            r6.a(r1)     // Catch: java.lang.Throwable -> L7a
            monitor-exit(r0)
            return
        L7a:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
        L7d:
            monitor-exit(r0)
            return
    }

    public static synchronized short b(long r2) {
            java.lang.Class<com.loc.dv> r0 = com.loc.dv.class
            monitor-enter(r0)
            com.loc.du r1 = com.loc.du.a()     // Catch: java.lang.Throwable -> Ld
            short r2 = r1.b(r2)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r0)
            return r2
        Ld:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    public static synchronized void b(java.util.List<com.loc.eg> r6) {
            java.lang.Class<com.loc.dv> r0 = com.loc.dv.class
            monitor-enter(r0)
            if (r6 == 0) goto L3e
            boolean r1 = r6.isEmpty()     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto Lc
            goto L3e
        Lc:
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L3b
            int r2 = r6.size()     // Catch: java.lang.Throwable -> L3b
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L3b
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Throwable -> L3b
        L19:
            boolean r2 = r6.hasNext()     // Catch: java.lang.Throwable -> L3b
            if (r2 == 0) goto L32
            java.lang.Object r2 = r6.next()     // Catch: java.lang.Throwable -> L3b
            com.loc.eg r2 = (com.loc.eg) r2     // Catch: java.lang.Throwable -> L3b
            com.loc.dv$b r3 = new com.loc.dv$b     // Catch: java.lang.Throwable -> L3b
            long r4 = r2.a     // Catch: java.lang.Throwable -> L3b
            int r2 = r2.c     // Catch: java.lang.Throwable -> L3b
            r3.<init>(r4, r2)     // Catch: java.lang.Throwable -> L3b
            r1.add(r3)     // Catch: java.lang.Throwable -> L3b
            goto L19
        L32:
            com.loc.du r6 = com.loc.du.a()     // Catch: java.lang.Throwable -> L3b
            r6.b(r1)     // Catch: java.lang.Throwable -> L3b
            monitor-exit(r0)
            return
        L3b:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
        L3e:
            monitor-exit(r0)
            return
    }
}
