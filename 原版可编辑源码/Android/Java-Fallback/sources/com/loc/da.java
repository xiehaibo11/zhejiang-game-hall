package com.loc;

public final class da {
    private static volatile com.loc.da g;
    private static java.lang.Object h;
    private com.loc.cz a;
    private com.loc.db b;
    private long c;
    private com.loc.ef d;
    private com.loc.cw e;
    private com.loc.ef f;

    public static class a {
        public com.loc.ef a;
        public java.util.List<com.loc.eg> b;
        public long c;
        public long d;
        public boolean e;
        public long f;
        public byte g;
        public java.lang.String h;
        public java.util.List<com.loc.dz> i;
        public boolean j;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.loc.da.h = r0
            return
    }

    private da() {
            r1 = this;
            r1.<init>()
            com.loc.ef r0 = new com.loc.ef
            r0.<init>()
            r1.f = r0
            com.loc.cz r0 = new com.loc.cz
            r0.<init>()
            r1.a = r0
            com.loc.db r0 = new com.loc.db
            r0.<init>()
            r1.b = r0
            com.loc.cw r0 = new com.loc.cw
            r0.<init>()
            r1.e = r0
            return
    }

    public static com.loc.da a() {
            com.loc.da r0 = com.loc.da.g
            if (r0 != 0) goto L17
            java.lang.Object r0 = com.loc.da.h
            monitor-enter(r0)
            com.loc.da r1 = com.loc.da.g     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.loc.da r1 = new com.loc.da     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.loc.da.g = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.loc.da r0 = com.loc.da.g
            return r0
    }

    public final com.loc.dc a(com.loc.da.a r23) {
            r22 = this;
            r0 = r22
            r1 = r23
            r2 = 0
            if (r1 != 0) goto L8
            return r2
        L8:
            long r11 = java.lang.System.currentTimeMillis()
            long r13 = android.os.SystemClock.elapsedRealtime()
            com.loc.ef r3 = r0.d
            if (r3 == 0) goto L22
            com.loc.ef r3 = r1.a
            com.loc.ef r4 = r0.d
            double r3 = r3.a(r4)
            r5 = 4621819117588971520(0x4024000000000000, double:10.0)
            int r7 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r7 < 0) goto L75
        L22:
            com.loc.cz r15 = r0.a
            com.loc.ef r3 = r1.a
            boolean r4 = r1.j
            byte r5 = r1.g
            java.lang.String r6 = r1.h
            java.util.List<com.loc.dz> r7 = r1.i
            r16 = r3
            r17 = r4
            r18 = r5
            r19 = r6
            r20 = r7
            com.loc.cz$a r18 = r15.a(r16, r17, r18, r19, r20)
            com.loc.db r3 = r0.b
            com.loc.ef r4 = r1.a
            java.util.List<com.loc.eg> r5 = r1.b
            boolean r6 = r1.e
            long r7 = r1.d
            r9 = r11
            java.util.List r21 = r3.a(r4, r5, r6, r7, r9)
            if (r18 != 0) goto L4f
            if (r21 == 0) goto L6f
        L4f:
            com.loc.ef r3 = r0.f
            com.loc.ef r4 = r1.a
            long r5 = r1.f
            r7 = r11
            com.loc.dx.a(r3, r4, r5, r7)
            com.loc.dc r2 = new com.loc.dc
            r3 = 0
            com.loc.cw r4 = r0.e
            com.loc.ef r5 = r0.f
            long r6 = r1.c
            r16 = r4
            r17 = r5
            r19 = r6
            byte[] r4 = r16.a(r17, r18, r19, r21)
            r2.<init>(r3, r4)
        L6f:
            com.loc.ef r1 = r1.a
            r0.d = r1
            r0.c = r13
        L75:
            return r2
    }
}
