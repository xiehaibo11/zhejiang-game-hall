package com.loc;

public final class cz {
    private com.loc.dz a;
    private com.loc.dz b;
    private com.loc.ef c;
    private com.loc.cz.a d;
    private final java.util.List<com.loc.dz> e;

    public static class a {
        public byte a;
        public java.lang.String b;
        public com.loc.dz c;
        public com.loc.dz d;
        public com.loc.dz e;
        public java.util.List<com.loc.dz> f;
        public java.util.List<com.loc.dz> g;

        public a() {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.f = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.g = r0
                return
        }

        public static boolean a(com.loc.dz r4, com.loc.dz r5) {
                r0 = 1
                r1 = 0
                if (r4 == 0) goto L76
                if (r5 != 0) goto L8
                goto L76
            L8:
                boolean r2 = r4 instanceof com.loc.eb
                if (r2 == 0) goto L22
                boolean r2 = r5 instanceof com.loc.eb
                if (r2 == 0) goto L22
                com.loc.eb r4 = (com.loc.eb) r4
                com.loc.eb r5 = (com.loc.eb) r5
                int r2 = r4.j
                int r3 = r5.j
                if (r2 != r3) goto L21
                int r4 = r4.k
                int r5 = r5.k
                if (r4 != r5) goto L21
                return r0
            L21:
                return r1
            L22:
                boolean r2 = r4 instanceof com.loc.ea
                if (r2 == 0) goto L42
                boolean r2 = r5 instanceof com.loc.ea
                if (r2 == 0) goto L42
                com.loc.ea r4 = (com.loc.ea) r4
                com.loc.ea r5 = (com.loc.ea) r5
                int r2 = r4.l
                int r3 = r5.l
                if (r2 != r3) goto L41
                int r2 = r4.k
                int r3 = r5.k
                if (r2 != r3) goto L41
                int r4 = r4.j
                int r5 = r5.j
                if (r4 != r5) goto L41
                return r0
            L41:
                return r1
            L42:
                boolean r2 = r4 instanceof com.loc.ec
                if (r2 == 0) goto L5c
                boolean r2 = r5 instanceof com.loc.ec
                if (r2 == 0) goto L5c
                com.loc.ec r4 = (com.loc.ec) r4
                com.loc.ec r5 = (com.loc.ec) r5
                int r2 = r4.j
                int r3 = r5.j
                if (r2 != r3) goto L5b
                int r4 = r4.k
                int r5 = r5.k
                if (r4 != r5) goto L5b
                return r0
            L5b:
                return r1
            L5c:
                boolean r2 = r4 instanceof com.loc.ed
                if (r2 == 0) goto L75
                boolean r2 = r5 instanceof com.loc.ed
                if (r2 == 0) goto L75
                com.loc.ed r4 = (com.loc.ed) r4
                com.loc.ed r5 = (com.loc.ed) r5
                int r2 = r4.j
                int r3 = r5.j
                if (r2 != r3) goto L75
                int r4 = r4.k
                int r5 = r5.k
                if (r4 != r5) goto L75
                return r0
            L75:
                return r1
            L76:
                if (r4 != 0) goto L7a
                r4 = 1
                goto L7b
            L7a:
                r4 = 0
            L7b:
                if (r5 != 0) goto L7f
                r5 = 1
                goto L80
            L7f:
                r5 = 0
            L80:
                if (r4 != r5) goto L83
                return r0
            L83:
                return r1
        }

        public final void a() {
                r1 = this;
                r0 = 0
                r1.a = r0
                java.lang.String r0 = ""
                r1.b = r0
                r0 = 0
                r1.c = r0
                r1.d = r0
                r1.e = r0
                java.util.List<com.loc.dz> r0 = r1.f
                r0.clear()
                java.util.List<com.loc.dz> r0 = r1.g
                r0.clear()
                return
        }

        public final void a(byte r1, java.lang.String r2, java.util.List<com.loc.dz> r3) {
                r0 = this;
                r0.a()
                r0.a = r1
                r0.b = r2
                if (r3 == 0) goto L36
                java.util.List<com.loc.dz> r1 = r0.f
                r1.addAll(r3)
                java.util.List<com.loc.dz> r1 = r0.f
                java.util.Iterator r1 = r1.iterator()
            L14:
                boolean r2 = r1.hasNext()
                if (r2 == 0) goto L36
                java.lang.Object r2 = r1.next()
                com.loc.dz r2 = (com.loc.dz) r2
                boolean r3 = r2.i
                if (r3 != 0) goto L2b
                boolean r3 = r2.h
                if (r3 == 0) goto L2b
                r0.d = r2
                goto L14
            L2b:
                boolean r3 = r2.i
                if (r3 == 0) goto L14
                boolean r3 = r2.h
                if (r3 == 0) goto L14
                r0.e = r2
                goto L14
            L36:
                com.loc.dz r1 = r0.d
                if (r1 != 0) goto L3c
                com.loc.dz r1 = r0.e
            L3c:
                r0.c = r1
                return
        }

        public final java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "CellInfo{radio="
                r0.<init>(r1)
                byte r1 = r2.a
                r0.append(r1)
                java.lang.String r1 = ", operator='"
                r0.append(r1)
                java.lang.String r1 = r2.b
                r0.append(r1)
                r1 = 39
                r0.append(r1)
                java.lang.String r1 = ", mainCell="
                r0.append(r1)
                com.loc.dz r1 = r2.c
                r0.append(r1)
                java.lang.String r1 = ", mainOldInterCell="
                r0.append(r1)
                com.loc.dz r1 = r2.d
                r0.append(r1)
                java.lang.String r1 = ", mainNewInterCell="
                r0.append(r1)
                com.loc.dz r1 = r2.e
                r0.append(r1)
                java.lang.String r1 = ", cells="
                r0.append(r1)
                java.util.List<com.loc.dz> r1 = r2.f
                r0.append(r1)
                java.lang.String r1 = ", historyMainCellList="
                r0.append(r1)
                java.util.List<com.loc.dz> r1 = r2.g
                r0.append(r1)
                r1 = 125(0x7d, float:1.75E-43)
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    public cz() {
            r2 = this;
            r2.<init>()
            com.loc.cz$a r0 = new com.loc.cz$a
            r0.<init>()
            r2.d = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 3
            r0.<init>(r1)
            r2.e = r0
            return
    }

    private void a(com.loc.cz.a r5) {
            r4 = this;
            java.util.List<com.loc.dz> r0 = r4.e
            monitor-enter(r0)
            java.util.List<com.loc.dz> r5 = r5.f     // Catch: java.lang.Throwable -> L3b
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L3b
        L9:
            boolean r1 = r5.hasNext()     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto L29
            java.lang.Object r1 = r5.next()     // Catch: java.lang.Throwable -> L3b
            com.loc.dz r1 = (com.loc.dz) r1     // Catch: java.lang.Throwable -> L3b
            if (r1 == 0) goto L9
            boolean r2 = r1.h     // Catch: java.lang.Throwable -> L3b
            if (r2 == 0) goto L9
            com.loc.dz r1 = r1.a()     // Catch: java.lang.Throwable -> L3b
            long r2 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L3b
            r1.e = r2     // Catch: java.lang.Throwable -> L3b
            r4.a(r1)     // Catch: java.lang.Throwable -> L3b
            goto L9
        L29:
            com.loc.cz$a r5 = r4.d     // Catch: java.lang.Throwable -> L3b
            java.util.List<com.loc.dz> r5 = r5.g     // Catch: java.lang.Throwable -> L3b
            r5.clear()     // Catch: java.lang.Throwable -> L3b
            com.loc.cz$a r5 = r4.d     // Catch: java.lang.Throwable -> L3b
            java.util.List<com.loc.dz> r5 = r5.g     // Catch: java.lang.Throwable -> L3b
            java.util.List<com.loc.dz> r1 = r4.e     // Catch: java.lang.Throwable -> L3b
            r5.addAll(r1)     // Catch: java.lang.Throwable -> L3b
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3b
            return
        L3b:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L3b
            throw r5
    }

    private void a(com.loc.dz r10) {
            r9 = this;
            if (r10 != 0) goto L3
            return
        L3:
            java.util.List<com.loc.dz> r0 = r9.e
            int r0 = r0.size()
            if (r0 != 0) goto L11
        Lb:
            java.util.List<com.loc.dz> r0 = r9.e
            r0.add(r10)
            return
        L11:
            r1 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r3 = 0
            r4 = -1
            r5 = -1
        L19:
            if (r3 >= r0) goto L49
            java.util.List<com.loc.dz> r6 = r9.e
            java.lang.Object r6 = r6.get(r3)
            com.loc.dz r6 = (com.loc.dz) r6
            boolean r7 = r10.equals(r6)
            if (r7 == 0) goto L39
            int r3 = r10.c
            int r5 = r6.c
            if (r3 == r5) goto L4a
            int r3 = r10.c
            long r7 = (long) r3
            r6.e = r7
            int r3 = r10.c
            r6.c = r3
            goto L4a
        L39:
            long r7 = r6.e
            long r1 = java.lang.Math.min(r1, r7)
            long r6 = r6.e
            int r8 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r8 != 0) goto L46
            r5 = r3
        L46:
            int r3 = r3 + 1
            goto L19
        L49:
            r4 = r5
        L4a:
            if (r4 < 0) goto L62
            r3 = 3
            if (r0 >= r3) goto L50
            goto Lb
        L50:
            long r5 = r10.e
            int r3 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r3 <= 0) goto L62
            if (r4 >= r0) goto L62
            java.util.List<com.loc.dz> r0 = r9.e
            r0.remove(r4)
            java.util.List<com.loc.dz> r0 = r9.e
            r0.add(r10)
        L62:
            return
    }

    private boolean a(com.loc.ef r6) {
            r5 = this;
            float r0 = r6.g
            r1 = 1092616192(0x41200000, float:10.0)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 <= 0) goto Lb
            r0 = 1157234688(0x44fa0000, float:2000.0)
            goto L18
        Lb:
            float r0 = r6.g
            r1 = 1073741824(0x40000000, float:2.0)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 <= 0) goto L16
            r0 = 1140457472(0x43fa0000, float:500.0)
            goto L18
        L16:
            r0 = 1120403456(0x42c80000, float:100.0)
        L18:
            com.loc.ef r1 = r5.c
            double r1 = r6.a(r1)
            double r3 = (double) r0
            int r6 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r6 <= 0) goto L25
            r6 = 1
            return r6
        L25:
            r6 = 0
            return r6
    }

    final com.loc.cz.a a(com.loc.ef r2, boolean r3, byte r4, java.lang.String r5, java.util.List<com.loc.dz> r6) {
            r1 = this;
            r0 = 0
            if (r3 == 0) goto L9
            com.loc.cz$a r2 = r1.d
            r2.a()
            return r0
        L9:
            com.loc.cz$a r3 = r1.d
            r3.a(r4, r5, r6)
            com.loc.cz$a r3 = r1.d
            com.loc.dz r3 = r3.c
            if (r3 != 0) goto L15
            return r0
        L15:
            com.loc.ef r3 = r1.c
            if (r3 == 0) goto L3a
            boolean r3 = r1.a(r2)
            if (r3 != 0) goto L3a
            com.loc.cz$a r3 = r1.d
            com.loc.dz r3 = r3.d
            com.loc.dz r4 = r1.a
            boolean r3 = com.loc.cz.a.a(r3, r4)
            if (r3 == 0) goto L3a
            com.loc.cz$a r3 = r1.d
            com.loc.dz r3 = r3.e
            com.loc.dz r4 = r1.b
            boolean r3 = com.loc.cz.a.a(r3, r4)
            if (r3 != 0) goto L38
            goto L3a
        L38:
            r3 = 0
            goto L3b
        L3a:
            r3 = 1
        L3b:
            if (r3 == 0) goto L5a
            com.loc.cz$a r3 = r1.d
            com.loc.dz r3 = r3.d
            r1.a = r3
            com.loc.cz$a r3 = r1.d
            com.loc.dz r3 = r3.e
            r1.b = r3
            r1.c = r2
            com.loc.cz$a r2 = r1.d
            java.util.List<com.loc.dz> r2 = r2.f
            com.loc.dv.a(r2)
            com.loc.cz$a r2 = r1.d
            r1.a(r2)
            com.loc.cz$a r2 = r1.d
            return r2
        L5a:
            return r0
    }
}
