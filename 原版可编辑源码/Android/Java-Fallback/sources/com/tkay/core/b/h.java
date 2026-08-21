package com.tkay.core.b;

public class h extends com.tkay.core.common.l.a implements com.tkay.core.common.k.b {
    public static final java.lang.String a = null;
    java.util.Map<java.lang.String, com.tkay.core.common.f.d> b;
    java.lang.Runnable c;
    private java.lang.String d;
    private com.tkay.core.common.k.a e;
    private java.lang.String f;
    private long g;
    private boolean h;
    private com.tkay.core.common.f.ag i;
    private java.util.Map<java.lang.Integer, com.tkay.core.b.a> j;
    private long k;





    final class 5 implements java.lang.Runnable {
        final com.tkay.core.common.f.d a;
        final com.tkay.core.common.f.aj b;
        final com.tkay.core.b.h c;

        5(com.tkay.core.b.h r1, com.tkay.core.common.f.d r2, com.tkay.core.common.f.aj r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r5 = this;
                com.tkay.core.b.h r0 = r5.c
                com.tkay.core.common.f.ag r0 = com.tkay.core.b.h.e(r0)
                com.tkay.core.common.j r0 = r0.c
                com.tkay.core.common.b.b r0 = r0.e
                if (r0 == 0) goto L3a
                com.tkay.core.common.f.d r0 = r5.a
                if (r0 == 0) goto L2d
                com.tkay.core.b.h r0 = r5.c
                com.tkay.core.common.f.ag r0 = com.tkay.core.b.h.e(r0)
                com.tkay.core.common.j r0 = r0.c
                com.tkay.core.common.b.b r0 = r0.e
                com.tkay.core.common.f.d r1 = r5.a
                com.tkay.core.common.f.aj r2 = r5.b
                java.lang.String r2 = r2.z()
                java.lang.String r3 = "4007"
                java.lang.String r4 = ""
                com.tkay.core.api.AdError r2 = com.tkay.core.api.ErrorCode.getErrorCode(r3, r4, r2)
                r0.a(r1, r2)
            L2d:
                com.tkay.core.b.h r0 = r5.c
                java.util.Map<java.lang.String, com.tkay.core.common.f.d> r0 = r0.b
                com.tkay.core.common.f.aj r1 = r5.b
                java.lang.String r1 = r1.t()
                r0.remove(r1)
            L3a:
                return
        }
    }

    final class 6 implements java.lang.Runnable {
        final com.tkay.core.common.f.d a;
        final com.tkay.core.common.f.aj b;
        final com.tkay.core.b.h c;

        6(com.tkay.core.b.h r1, com.tkay.core.common.f.d r2, com.tkay.core.common.f.aj r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r3 = this;
                com.tkay.core.b.h r0 = r3.c
                com.tkay.core.common.f.ag r0 = com.tkay.core.b.h.e(r0)
                com.tkay.core.common.j r0 = r0.c
                com.tkay.core.common.b.b r0 = r0.e
                if (r0 == 0) goto L32
                com.tkay.core.common.f.d r0 = r3.a
                if (r0 == 0) goto L25
                com.tkay.core.common.f.aj r1 = r3.b
                r2 = 0
                com.tkay.core.common.l.s.a(r0, r1, r2, r2)
                com.tkay.core.b.h r0 = r3.c
                com.tkay.core.common.f.ag r0 = com.tkay.core.b.h.e(r0)
                com.tkay.core.common.j r0 = r0.c
                com.tkay.core.common.b.b r0 = r0.e
                com.tkay.core.common.f.d r1 = r3.a
                r0.b(r1)
            L25:
                com.tkay.core.b.h r0 = r3.c
                java.util.Map<java.lang.String, com.tkay.core.common.f.d> r0 = r0.b
                com.tkay.core.common.f.aj r1 = r3.b
                java.lang.String r1 = r1.t()
                r0.remove(r1)
            L32:
                return
        }
    }

    static {
            java.lang.Class<com.tkay.core.b.h> r0 = com.tkay.core.b.h.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.core.b.h.a = r0
            return
    }

    public h(com.tkay.core.common.f.ag r17) {
            r16 = this;
            r0 = r16
            r1 = r17
            r16.<init>()
            java.util.concurrent.ConcurrentHashMap r2 = new java.util.concurrent.ConcurrentHashMap
            r3 = 3
            r2.<init>(r3)
            r0.b = r2
            com.tkay.core.b.h$1 r2 = new com.tkay.core.b.h$1
            r2.<init>(r0)
            r0.c = r2
            r0.i = r1
            java.lang.String r2 = r1.e
            r0.d = r2
            java.lang.String r2 = r1.d
            r0.f = r2
            long r4 = r1.g
            r0.g = r4
            java.util.List<com.tkay.core.common.f.aj> r2 = r1.j
            int r4 = r2.size()
            java.util.List<com.tkay.core.common.f.aj> r5 = r1.k
            if (r5 == 0) goto L42
            java.util.List<com.tkay.core.common.f.aj> r5 = r1.k
            int r5 = r5.size()
            if (r5 <= 0) goto L42
            com.tkay.core.common.f.ag r5 = r0.i
            java.util.List<com.tkay.core.common.f.aj> r6 = r1.k
            int r6 = r6.size()
            int r6 = r6 + r4
            r5.z = r6
            goto L46
        L42:
            com.tkay.core.common.f.ag r5 = r0.i
            r5.z = r4
        L46:
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            r7 = 0
            r8 = 0
            r9 = r8
            r10 = r9
        L54:
            r12 = 2
            r13 = 1
            r14 = 5
            if (r7 >= r4) goto Lb1
            java.lang.Object r15 = r2.get(r7)
            com.tkay.core.common.f.aj r15 = (com.tkay.core.common.f.aj) r15
            int r11 = r15.l()
            if (r11 == r13) goto Lab
            int r11 = r15.l()
            if (r11 != r3) goto L6c
            goto Lab
        L6c:
            int r11 = r15.l()
            if (r11 != r12) goto L7d
            if (r8 != 0) goto L79
            java.util.ArrayList r8 = new java.util.ArrayList
            r8.<init>(r4)
        L79:
            r8.add(r15)
            goto Lae
        L7d:
            int r11 = r15.l()
            if (r11 != r14) goto L8e
            if (r9 != 0) goto L8a
            java.util.ArrayList r9 = new java.util.ArrayList
            r9.<init>(r4)
        L8a:
            r9.add(r15)
            goto Lae
        L8e:
            int r11 = r15.l()
            r12 = 6
            if (r11 != r12) goto La0
            if (r10 != 0) goto L9c
            java.util.ArrayList r10 = new java.util.ArrayList
            r10.<init>(r4)
        L9c:
            r10.add(r15)
            goto Lae
        La0:
            int r11 = r15.l()
            r12 = 7
            if (r11 != r12) goto Lae
            r6.add(r15)
            goto Lae
        Lab:
            r5.add(r15)
        Lae:
            int r7 = r7 + 1
            goto L54
        Lb1:
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>(r14)
            r0.j = r2
            int r2 = r5.size()
            if (r2 > 0) goto Lc4
            int r2 = r6.size()
            if (r2 <= 0) goto Ld6
        Lc4:
            com.tkay.core.b.i r2 = new com.tkay.core.b.i
            com.tkay.core.common.f.ag r3 = r1.a(r5, r6)
            r2.<init>(r3)
            java.util.Map<java.lang.Integer, com.tkay.core.b.a> r3 = r0.j
            java.lang.Integer r4 = java.lang.Integer.valueOf(r13)
            r3.put(r4, r2)
        Ld6:
            if (r8 == 0) goto Lf0
            int r2 = r8.size()
            if (r2 <= 0) goto Lf0
            com.tkay.core.b.g r2 = new com.tkay.core.b.g
            com.tkay.core.common.f.ag r3 = r1.a(r8)
            r2.<init>(r3)
            java.util.Map<java.lang.Integer, com.tkay.core.b.a> r3 = r0.j
            java.lang.Integer r4 = java.lang.Integer.valueOf(r12)
            r3.put(r4, r2)
        Lf0:
            if (r9 == 0) goto L10a
            int r2 = r9.size()
            if (r2 <= 0) goto L10a
            com.tkay.core.b.e r2 = new com.tkay.core.b.e
            com.tkay.core.common.f.ag r3 = r1.b(r9)
            r2.<init>(r3)
            java.util.Map<java.lang.Integer, com.tkay.core.b.a> r3 = r0.j
            java.lang.Integer r4 = java.lang.Integer.valueOf(r14)
            r3.put(r4, r2)
        L10a:
            if (r10 == 0) goto L125
            int r2 = r10.size()
            if (r2 <= 0) goto L125
            com.tkay.core.b.d r2 = new com.tkay.core.b.d
            com.tkay.core.common.f.ag r1 = r1.c(r10)
            r2.<init>(r1)
            java.util.Map<java.lang.Integer, com.tkay.core.b.a> r1 = r0.j
            r3 = 6
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1.put(r3, r2)
        L125:
            return
    }

    static void a(com.tkay.core.b.h r0) {
            r0.c()
            return
    }

    static void a(com.tkay.core.b.h r2, com.tkay.core.common.f.aj r3, com.tkay.core.api.TYBaseAdAdapter r4) {
            int r0 = r3.l()
            r1 = 7
            if (r0 == r1) goto L46
            if (r4 == 0) goto L46
            com.tkay.core.common.f.ag r0 = r2.i     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.j r0 = r0.c     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.b.b r0 = r0.e     // Catch: java.lang.Throwable -> L42
            if (r0 == 0) goto L41
            com.tkay.core.common.f.ag r0 = r2.i     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.f.d r0 = r0.t     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.f.d r0 = r0.N()     // Catch: java.lang.Throwable -> L42
            r1 = 0
            com.tkay.core.common.l.s.a(r0, r3, r1, r1)     // Catch: java.lang.Throwable -> L42
            java.lang.String r4 = r4.getNetworkPlacementId()     // Catch: java.lang.Throwable -> L42
            r0.g(r4)     // Catch: java.lang.Throwable -> L42
            java.util.Map<java.lang.String, com.tkay.core.common.f.d> r4 = r2.b     // Catch: java.lang.Throwable -> L42
            java.lang.String r3 = r3.t()     // Catch: java.lang.Throwable -> L42
            r4.put(r3, r0)     // Catch: java.lang.Throwable -> L42
            r3 = 0
            r0.d(r3)     // Catch: java.lang.Throwable -> L42
            r0.a(r3)     // Catch: java.lang.Throwable -> L42
            r0.b(r3)     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.f.ag r2 = r2.i     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.j r2 = r2.c     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.b.b r2 = r2.e     // Catch: java.lang.Throwable -> L42
            r2.a(r0)     // Catch: java.lang.Throwable -> L42
        L41:
            return
        L42:
            r2 = move-exception
            r2.printStackTrace()
        L46:
            return
    }

    static void a(com.tkay.core.b.h r0, java.lang.Integer r1) {
            r0.a(r1)
            return
    }

    static void a(com.tkay.core.b.h r0, java.lang.Integer r1, java.util.List r2, java.util.List r3) {
            r0.b(r1, r2, r3)
            return
    }

    private void a(com.tkay.core.common.f.aj r4) {
            r3 = this;
            java.util.Map<java.lang.String, com.tkay.core.common.f.d> r0 = r3.b
            java.lang.String r1 = r4.t()
            java.lang.Object r0 = r0.get(r1)
            com.tkay.core.common.f.d r0 = (com.tkay.core.common.f.d) r0
            if (r0 == 0) goto L1a
            com.tkay.core.common.l.b.a r1 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.b.h$5 r2 = new com.tkay.core.b.h$5
            r2.<init>(r3, r0, r4)
            r1.a(r2)
        L1a:
            return
    }

    private void a(com.tkay.core.common.f.aj r3, com.tkay.core.api.TYBaseAdAdapter r4) {
            r2 = this;
            int r0 = r3.l()
            r1 = 7
            if (r0 == r1) goto L46
            if (r4 == 0) goto L46
            com.tkay.core.common.f.ag r0 = r2.i     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.j r0 = r0.c     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.b.b r0 = r0.e     // Catch: java.lang.Throwable -> L42
            if (r0 == 0) goto L41
            com.tkay.core.common.f.ag r0 = r2.i     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.f.d r0 = r0.t     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.f.d r0 = r0.N()     // Catch: java.lang.Throwable -> L42
            r1 = 0
            com.tkay.core.common.l.s.a(r0, r3, r1, r1)     // Catch: java.lang.Throwable -> L42
            java.lang.String r4 = r4.getNetworkPlacementId()     // Catch: java.lang.Throwable -> L42
            r0.g(r4)     // Catch: java.lang.Throwable -> L42
            java.util.Map<java.lang.String, com.tkay.core.common.f.d> r4 = r2.b     // Catch: java.lang.Throwable -> L42
            java.lang.String r3 = r3.t()     // Catch: java.lang.Throwable -> L42
            r4.put(r3, r0)     // Catch: java.lang.Throwable -> L42
            r3 = 0
            r0.d(r3)     // Catch: java.lang.Throwable -> L42
            r0.a(r3)     // Catch: java.lang.Throwable -> L42
            r0.b(r3)     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.f.ag r3 = r2.i     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.j r3 = r3.c     // Catch: java.lang.Throwable -> L42
            com.tkay.core.common.b.b r3 = r3.e     // Catch: java.lang.Throwable -> L42
            r3.a(r0)     // Catch: java.lang.Throwable -> L42
        L41:
            return
        L42:
            r3 = move-exception
            r3.printStackTrace()
        L46:
            return
    }

    private synchronized void a(java.lang.Integer r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.Integer, com.tkay.core.b.a> r0 = r1.j     // Catch: java.lang.Throwable -> L1b
            java.lang.Object r0 = r0.get(r2)     // Catch: java.lang.Throwable -> L1b
            com.tkay.core.b.a r0 = (com.tkay.core.b.a) r0     // Catch: java.lang.Throwable -> L1b
            if (r0 == 0) goto L19
            boolean r0 = r0.a()     // Catch: java.lang.Throwable -> L1b
            if (r0 == 0) goto L19
            java.util.Map<java.lang.Integer, com.tkay.core.b.a> r0 = r1.j     // Catch: java.lang.Throwable -> L1b
            r0.remove(r2)     // Catch: java.lang.Throwable -> L1b
            r1.e()     // Catch: java.lang.Throwable -> L1b
        L19:
            monitor-exit(r1)
            return
        L1b:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    private synchronized void a(java.lang.Integer r18, java.util.List<com.tkay.core.common.f.aj> r19, java.util.List<com.tkay.core.common.f.aj> r20) {
            r17 = this;
            r1 = r17
            r0 = r19
            r2 = r20
            monitor-enter(r17)
            r3 = 0
            if (r0 == 0) goto L12
            int r4 = r19.size()     // Catch: java.lang.Throwable -> Lf
            goto L13
        Lf:
            r0 = move-exception
            goto L167
        L12:
            r4 = r3
        L13:
            if (r2 == 0) goto L1a
            int r5 = r20.size()     // Catch: java.lang.Throwable -> Lf
            goto L1b
        L1a:
            r5 = r3
        L1b:
            if (r4 > 0) goto L1f
            if (r5 <= 0) goto L165
        L1f:
            java.util.ArrayList r6 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lf
            r6.<init>()     // Catch: java.lang.Throwable -> Lf
            java.util.ArrayList r7 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lf
            r7.<init>()     // Catch: java.lang.Throwable -> Lf
            java.util.ArrayList r12 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lf
            r12.<init>()     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.common.f.ag r8 = r1.i     // Catch: java.lang.Throwable -> Lf
            android.content.Context r8 = r8.b     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.c.e r8 = com.tkay.core.c.e.a(r8)     // Catch: java.lang.Throwable -> Lf
            java.lang.String r9 = r1.d     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.c.d r8 = r8.a(r9)     // Catch: java.lang.Throwable -> Lf
            r9 = 8
            r10 = 1
            if (r4 <= 0) goto L86
            r11 = r3
        L42:
            if (r11 >= r4) goto L83
            java.lang.Object r13 = r0.get(r11)     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.common.f.aj r13 = (com.tkay.core.common.f.aj) r13     // Catch: java.lang.Throwable -> Lf
            java.lang.String r14 = r1.d     // Catch: java.lang.Throwable -> Lf
            r1.a(r14, r13, r10)     // Catch: java.lang.Throwable -> Lf
            java.lang.String r14 = r13.t()     // Catch: java.lang.Throwable -> Lf
            boolean r14 = r8.a(r14)     // Catch: java.lang.Throwable -> Lf
            if (r14 != 0) goto L5f
            com.tkay.core.common.f.ag r14 = r1.i     // Catch: java.lang.Throwable -> Lf
            int r14 = r14.v     // Catch: java.lang.Throwable -> Lf
            if (r14 != r9) goto L7f
        L5f:
            r6.add(r13)     // Catch: java.lang.Throwable -> Lf
            r12.add(r13)     // Catch: java.lang.Throwable -> Lf
            java.util.Map<java.lang.String, com.tkay.core.common.f.d> r14 = r1.b     // Catch: java.lang.Throwable -> Lf
            java.lang.String r15 = r13.t()     // Catch: java.lang.Throwable -> Lf
            java.lang.Object r14 = r14.get(r15)     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.common.f.d r14 = (com.tkay.core.common.f.d) r14     // Catch: java.lang.Throwable -> Lf
            if (r14 == 0) goto L7f
            com.tkay.core.common.l.b.a r15 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.b.h$6 r10 = new com.tkay.core.b.h$6     // Catch: java.lang.Throwable -> Lf
            r10.<init>(r1, r14, r13)     // Catch: java.lang.Throwable -> Lf
            r15.a(r10)     // Catch: java.lang.Throwable -> Lf
        L7f:
            int r11 = r11 + 1
            r10 = 1
            goto L42
        L83:
            r19.clear()     // Catch: java.lang.Throwable -> Lf
        L86:
            if (r5 <= 0) goto L11c
            r0 = r3
        L89:
            if (r0 >= r5) goto L119
            java.lang.Object r4 = r2.get(r0)     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.common.f.aj r4 = (com.tkay.core.common.f.aj) r4     // Catch: java.lang.Throwable -> Lf
            if (r4 != 0) goto Lc8
            java.lang.Throwable r10 = new java.lang.Throwable     // Catch: java.lang.Throwable -> Lc8
            r10.<init>()     // Catch: java.lang.Throwable -> Lc8
            java.lang.StackTraceElement[] r10 = r10.getStackTrace()     // Catch: java.lang.Throwable -> Lc8
            java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r13 = "Bid Fail AdSource Object is null, currentSize:"
            r11.<init>(r13)     // Catch: java.lang.Throwable -> Lc8
            int r13 = r20.size()     // Catch: java.lang.Throwable -> Lc8
            r11.append(r13)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r13 = "\n"
            r11.append(r13)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r10 = com.tkay.core.common.l.h.a(r10)     // Catch: java.lang.Throwable -> Lc8
            r11.append(r10)     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r10 = r11.toString()     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r11 = "Bidding inner error"
            com.tkay.core.common.b.m r13 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Lc8
            java.lang.String r13 = r13.q()     // Catch: java.lang.Throwable -> Lc8
            com.tkay.core.common.k.c.a(r10, r11, r13)     // Catch: java.lang.Throwable -> Lc8
            goto L115
        Lc8:
            java.lang.String r10 = r1.d     // Catch: java.lang.Throwable -> Lf
            r1.a(r10, r4, r3)     // Catch: java.lang.Throwable -> Lf
            java.lang.String r10 = r4.t()     // Catch: java.lang.Throwable -> Lf
            boolean r10 = r8.a(r10)     // Catch: java.lang.Throwable -> Lf
            if (r10 != 0) goto Ldd
            com.tkay.core.common.f.ag r10 = r1.i     // Catch: java.lang.Throwable -> Lf
            int r10 = r10.v     // Catch: java.lang.Throwable -> Lf
            if (r10 != r9) goto L115
        Ldd:
            double r10 = com.tkay.core.common.l.g.a(r4)     // Catch: java.lang.Throwable -> Lf
            r13 = 0
            int r10 = (r10 > r13 ? 1 : (r10 == r13 ? 0 : -1))
            if (r10 <= 0) goto Lf5
            java.lang.String r10 = r4.y()     // Catch: java.lang.Throwable -> Lf
            boolean r10 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> Lf
            if (r10 != 0) goto Lf5
            r6.add(r4)     // Catch: java.lang.Throwable -> Lf
            goto Lf8
        Lf5:
            r7.add(r4)     // Catch: java.lang.Throwable -> Lf
        Lf8:
            r12.add(r4)     // Catch: java.lang.Throwable -> Lf
            java.util.Map<java.lang.String, com.tkay.core.common.f.d> r10 = r1.b     // Catch: java.lang.Throwable -> Lf
            java.lang.String r11 = r4.t()     // Catch: java.lang.Throwable -> Lf
            java.lang.Object r10 = r10.get(r11)     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.common.f.d r10 = (com.tkay.core.common.f.d) r10     // Catch: java.lang.Throwable -> Lf
            if (r10 == 0) goto L115
            com.tkay.core.common.l.b.a r11 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.b.h$5 r13 = new com.tkay.core.b.h$5     // Catch: java.lang.Throwable -> Lf
            r13.<init>(r1, r10, r4)     // Catch: java.lang.Throwable -> Lf
            r11.a(r13)     // Catch: java.lang.Throwable -> Lf
        L115:
            int r0 = r0 + 1
            goto L89
        L119:
            r20.clear()     // Catch: java.lang.Throwable -> Lf
        L11c:
            int r0 = r6.size()     // Catch: java.lang.Throwable -> Lf
            r2 = 1
            if (r0 <= r2) goto L12b
            com.tkay.core.b.h$3 r0 = new com.tkay.core.b.h$3     // Catch: java.lang.Throwable -> Lf
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lf
            java.util.Collections.sort(r6, r0)     // Catch: java.lang.Throwable -> Lf
        L12b:
            com.tkay.core.common.f.ag r0 = r1.i     // Catch: java.lang.Throwable -> Lf
            java.lang.String r8 = r0.e     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.common.f.ag r0 = r1.i     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.c.d r9 = r0.o     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.common.f.ag r0 = r1.i     // Catch: java.lang.Throwable -> Lf
            java.lang.String r10 = r0.d     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.common.f.ag r0 = r1.i     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.common.j r0 = r0.c     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto L143
            com.tkay.core.common.f.ag r0 = r1.i     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.common.j r0 = r0.c     // Catch: java.lang.Throwable -> Lf
            int r3 = r0.d     // Catch: java.lang.Throwable -> Lf
        L143:
            r11 = r3
            long r13 = r1.k     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.common.f.ag r0 = r1.i     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.common.f.d r0 = r0.t     // Catch: java.lang.Throwable -> Lf
            int r15 = r0.S()     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.common.f.ag r0 = r1.i     // Catch: java.lang.Throwable -> Lf
            int r0 = r0.v     // Catch: java.lang.Throwable -> Lf
            r16 = r0
            com.tkay.core.b.d.a.a(r8, r9, r10, r11, r12, r13, r15, r16)     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Throwable -> Lf
            com.tkay.core.b.h$4 r2 = new com.tkay.core.b.h$4     // Catch: java.lang.Throwable -> Lf
            r3 = r18
            r2.<init>(r1, r6, r7, r3)     // Catch: java.lang.Throwable -> Lf
            r0.a(r2)     // Catch: java.lang.Throwable -> Lf
        L165:
            monitor-exit(r17)
            return
        L167:
            monitor-exit(r17)
            throw r0
    }

    private void a(java.lang.String r22, com.tkay.core.common.f.aj r23, boolean r24) {
            r21 = this;
            r1 = r21
            r0 = r22
            r2 = r23
            int r3 = r23.m()
            r4 = 2
            if (r3 != r4) goto L16d
            com.tkay.core.common.a r3 = com.tkay.core.common.a.a()
            com.tkay.core.common.f.a r3 = r3.a(r0, r2)
            com.tkay.core.common.f.l r5 = r23.M()
            if (r3 == 0) goto L16d
            boolean r6 = r23.Z()     // Catch: java.lang.Exception -> L16d
            r7 = 0
            r8 = 0
            r9 = 1
            if (r6 == 0) goto L65
            com.tkay.core.api.TYBaseAdAdapter r6 = r3.e()     // Catch: java.lang.Exception -> L16d
            com.tkay.core.common.f.aj r6 = r6.getUnitGroupInfo()     // Catch: java.lang.Exception -> L16d
            com.tkay.core.common.f.l r6 = r6.M()     // Catch: java.lang.Exception -> L16d
            if (r6 == 0) goto L63
            com.tkay.core.b.c r10 = com.tkay.core.b.c.a()     // Catch: java.lang.Exception -> L16d
            java.lang.String r11 = r6.g     // Catch: java.lang.Exception -> L16d
            java.lang.String r12 = r6.k     // Catch: java.lang.Exception -> L16d
            com.tkay.core.b.j r10 = r10.b(r11, r12)     // Catch: java.lang.Exception -> L16d
            com.tkay.core.common.f.l r11 = r23.M()     // Catch: java.lang.Exception -> L16d
            if (r11 == 0) goto L51
            com.tkay.core.b.c r12 = com.tkay.core.b.c.a()     // Catch: java.lang.Exception -> L16d
            java.lang.String r13 = r11.g     // Catch: java.lang.Exception -> L16d
            java.lang.String r11 = r11.k     // Catch: java.lang.Exception -> L16d
            com.tkay.core.b.j r11 = r12.b(r13, r11)     // Catch: java.lang.Exception -> L16d
            goto L52
        L51:
            r11 = r7
        L52:
            if (r10 == 0) goto L63
            if (r11 == 0) goto L63
            com.tkay.core.b.c r10 = com.tkay.core.b.c.a()     // Catch: java.lang.Exception -> L16d
            java.lang.String r11 = r6.g     // Catch: java.lang.Exception -> L16d
            java.lang.String r6 = r6.k     // Catch: java.lang.Exception -> L16d
            r10.c(r11, r6)     // Catch: java.lang.Exception -> L16d
        L61:
            r6 = r9
            goto L7a
        L63:
            r6 = r8
            goto L7a
        L65:
            double r10 = com.tkay.core.common.l.g.a(r23)     // Catch: java.lang.Exception -> L16d
            com.tkay.core.api.TYBaseAdAdapter r6 = r3.e()     // Catch: java.lang.Exception -> L16d
            com.tkay.core.common.f.aj r6 = r6.getUnitGroupInfo()     // Catch: java.lang.Exception -> L16d
            double r12 = com.tkay.core.common.l.g.a(r6)     // Catch: java.lang.Exception -> L16d
            int r6 = (r10 > r12 ? 1 : (r10 == r12 ? 0 : -1))
            if (r6 <= 0) goto L63
            goto L61
        L7a:
            if (r6 == 0) goto Lea
            int r5 = r23.o()     // Catch: java.lang.Exception -> L16d
            r2.a(r2, r4, r5, r9)     // Catch: java.lang.Exception -> L16d
            com.tkay.core.api.TYBaseAdAdapter r3 = r3.e()     // Catch: java.lang.Exception -> L16d
            com.tkay.core.common.f.aj r3 = r3.getUnitGroupInfo()     // Catch: java.lang.Exception -> L16d
            com.tkay.core.common.f.l r5 = r3.M()     // Catch: java.lang.Exception -> L16d
            if (r5 == 0) goto Lcf
            double r10 = com.tkay.core.common.l.g.a(r23)     // Catch: java.lang.Exception -> L16d
            com.tkay.core.common.f.ag r6 = r1.i     // Catch: java.lang.Exception -> L16d
            java.lang.String r12 = r6.d     // Catch: java.lang.Exception -> L16d
            com.tkay.core.common.f.ag r6 = r1.i     // Catch: java.lang.Exception -> L16d
            java.lang.String r13 = r6.e     // Catch: java.lang.Exception -> L16d
            java.lang.String r14 = ""
            com.tkay.core.common.f.ag r6 = r1.i     // Catch: java.lang.Exception -> L16d
            com.tkay.core.c.d r15 = r6.o     // Catch: java.lang.Exception -> L16d
            java.lang.String r16 = ""
            r17 = 1
            r18 = 0
            r19 = 0
            com.tkay.core.common.f.ag r6 = r1.i     // Catch: java.lang.Exception -> L16d
            com.tkay.core.common.j r6 = r6.c     // Catch: java.lang.Exception -> L16d
            if (r6 == 0) goto Lb7
            com.tkay.core.common.f.ag r6 = r1.i     // Catch: java.lang.Exception -> L16d
            com.tkay.core.common.j r6 = r6.c     // Catch: java.lang.Exception -> L16d
            java.util.Map<java.lang.String, java.lang.Object> r7 = r6.g     // Catch: java.lang.Exception -> L16d
        Lb7:
            r20 = r7
            com.tkay.core.common.f.d r6 = com.tkay.core.common.l.s.a(r12, r13, r14, r15, r16, r17, r18, r19, r20)     // Catch: java.lang.Exception -> L16d
            com.tkay.core.common.f.q r7 = new com.tkay.core.common.f.q     // Catch: java.lang.Exception -> L16d
            r7.<init>()     // Catch: java.lang.Exception -> L16d
            r7.a = r4     // Catch: java.lang.Exception -> L16d
            r7.b = r10     // Catch: java.lang.Exception -> L16d
            r7.e = r6     // Catch: java.lang.Exception -> L16d
            r7.c = r2     // Catch: java.lang.Exception -> L16d
            r7.d = r3     // Catch: java.lang.Exception -> L16d
            r5.a(r7, r9)     // Catch: java.lang.Exception -> L16d
        Lcf:
            com.tkay.core.common.x r4 = com.tkay.core.common.x.a()     // Catch: java.lang.Exception -> L16d
            com.tkay.core.common.f.ag r5 = r1.i     // Catch: java.lang.Exception -> L16d
            java.lang.String r5 = r5.e     // Catch: java.lang.Exception -> L16d
            com.tkay.core.common.f.ag r6 = r1.i     // Catch: java.lang.Exception -> L16d
            java.lang.String r6 = r6.d     // Catch: java.lang.Exception -> L16d
            r4.a(r5, r6, r3)     // Catch: java.lang.Exception -> L16d
            com.tkay.core.common.a r3 = com.tkay.core.common.a.a()     // Catch: java.lang.Exception -> L16d
            java.lang.String r2 = r23.t()     // Catch: java.lang.Exception -> L16d
            r3.a(r0, r2)     // Catch: java.lang.Exception -> L16d
            return
        Lea:
            com.tkay.core.api.TYBaseAdAdapter r0 = r3.e()     // Catch: java.lang.Throwable -> L157
            com.tkay.core.common.f.aj r0 = r0.getUnitGroupInfo()     // Catch: java.lang.Throwable -> L157
            double r10 = com.tkay.core.common.l.g.a(r0)     // Catch: java.lang.Throwable -> L157
            com.tkay.core.common.f.l r6 = r0.M()     // Catch: java.lang.Throwable -> L157
            if (r6 == 0) goto L103
            com.tkay.core.common.f.l r6 = r0.M()     // Catch: java.lang.Throwable -> L157
            java.lang.String r6 = r6.token     // Catch: java.lang.Throwable -> L157
            goto L105
        L103:
            java.lang.String r6 = ""
        L105:
            if (r5 == 0) goto L15b
            java.lang.String r12 = r5.token     // Catch: java.lang.Throwable -> L157
            boolean r6 = android.text.TextUtils.equals(r12, r6)     // Catch: java.lang.Throwable -> L157
            if (r6 != 0) goto L15b
            com.tkay.core.common.f.ag r6 = r1.i     // Catch: java.lang.Throwable -> L157
            java.lang.String r12 = r6.d     // Catch: java.lang.Throwable -> L157
            com.tkay.core.common.f.ag r6 = r1.i     // Catch: java.lang.Throwable -> L157
            java.lang.String r13 = r6.e     // Catch: java.lang.Throwable -> L157
            java.lang.String r14 = ""
            com.tkay.core.common.f.ag r6 = r1.i     // Catch: java.lang.Throwable -> L157
            com.tkay.core.c.d r15 = r6.o     // Catch: java.lang.Throwable -> L157
            java.lang.String r16 = ""
            r17 = 1
            r18 = 0
            r19 = 0
            com.tkay.core.common.f.ag r6 = r1.i     // Catch: java.lang.Throwable -> L157
            com.tkay.core.common.j r6 = r6.c     // Catch: java.lang.Throwable -> L157
            if (r6 == 0) goto L131
            com.tkay.core.common.f.ag r6 = r1.i     // Catch: java.lang.Throwable -> L157
            com.tkay.core.common.j r6 = r6.c     // Catch: java.lang.Throwable -> L157
            java.util.Map<java.lang.String, java.lang.Object> r7 = r6.g     // Catch: java.lang.Throwable -> L157
        L131:
            r20 = r7
            com.tkay.core.common.f.d r6 = com.tkay.core.common.l.s.a(r12, r13, r14, r15, r16, r17, r18, r19, r20)     // Catch: java.lang.Throwable -> L157
            com.tkay.core.common.f.q r7 = new com.tkay.core.common.f.q     // Catch: java.lang.Throwable -> L157
            r7.<init>()     // Catch: java.lang.Throwable -> L157
            r7.b = r10     // Catch: java.lang.Throwable -> L157
            r7.e = r6     // Catch: java.lang.Throwable -> L157
            r7.c = r0     // Catch: java.lang.Throwable -> L157
            r7.d = r2     // Catch: java.lang.Throwable -> L157
            boolean r0 = r0.Z()     // Catch: java.lang.Throwable -> L157
            if (r0 == 0) goto L151
            r0 = 3
            r7.a = r0     // Catch: java.lang.Throwable -> L157
            r5.a(r7, r9)     // Catch: java.lang.Throwable -> L157
            goto L15b
        L151:
            r7.a = r4     // Catch: java.lang.Throwable -> L157
            r5.a(r7, r9)     // Catch: java.lang.Throwable -> L157
            goto L15b
        L157:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Exception -> L16d
        L15b:
            com.tkay.core.api.TYBaseAdAdapter r0 = r3.e()     // Catch: java.lang.Exception -> L16d
            com.tkay.core.common.f.aj r0 = r0.getUnitGroupInfo()     // Catch: java.lang.Exception -> L16d
            int r3 = r23.o()     // Catch: java.lang.Exception -> L16d
            if (r24 == 0) goto L16a
            r8 = r9
        L16a:
            r2.a(r0, r9, r3, r8)     // Catch: java.lang.Exception -> L16d
        L16d:
            return
    }

    private void b(com.tkay.core.common.f.aj r4) {
            r3 = this;
            java.util.Map<java.lang.String, com.tkay.core.common.f.d> r0 = r3.b
            java.lang.String r1 = r4.t()
            java.lang.Object r0 = r0.get(r1)
            com.tkay.core.common.f.d r0 = (com.tkay.core.common.f.d) r0
            if (r0 == 0) goto L1a
            com.tkay.core.common.l.b.a r1 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.b.h$6 r2 = new com.tkay.core.b.h$6
            r2.<init>(r3, r0, r4)
            r1.a(r2)
        L1a:
            return
    }

    private synchronized void b(java.lang.Integer r1, java.util.List<com.tkay.core.common.f.aj> r2, java.util.List<com.tkay.core.common.f.aj> r3) {
            r0 = this;
            monitor-enter(r0)
            r0.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L6
            monitor-exit(r0)
            return
        L6:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    static boolean b(com.tkay.core.b.h r0) {
            boolean r0 = r0.h
            return r0
    }

    static com.tkay.core.common.k.a c(com.tkay.core.b.h r0) {
            com.tkay.core.common.k$a r0 = r0.e
            return r0
    }

    private synchronized void c() {
            r2 = this;
            monitor-enter(r2)
            com.tkay.core.common.k$a r0 = r2.e     // Catch: java.lang.Throwable -> Le
            if (r0 == 0) goto Lc
            com.tkay.core.common.k$a r0 = r2.e     // Catch: java.lang.Throwable -> Le
            java.lang.String r1 = r2.f     // Catch: java.lang.Throwable -> Le
            r0.a(r1)     // Catch: java.lang.Throwable -> Le
        Lc:
            monitor-exit(r2)
            return
        Le:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L14
            monitor-exit(r2)
            return
        L14:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    static java.lang.String d(com.tkay.core.b.h r0) {
            java.lang.String r0 = r0.f
            return r0
    }

    private void d() {
            r4 = this;
            com.tkay.core.common.f.ag r0 = r4.i
            long r0 = r0.i
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 > 0) goto Lc
            r0 = 2000(0x7d0, double:9.88E-321)
        Lc:
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r3 = r4.c
            r2.a(r3, r0)
            return
    }

    static com.tkay.core.common.f.ag e(com.tkay.core.b.h r0) {
            com.tkay.core.common.f.ag r0 = r0.i
            return r0
    }

    private synchronized void e() {
            r2 = this;
            monitor-enter(r2)
            java.util.Map<java.lang.Integer, com.tkay.core.b.a> r0 = r2.j     // Catch: java.lang.Throwable -> L25
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L25
            if (r0 != 0) goto L23
            r2.a()     // Catch: java.lang.Throwable -> L25
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L25
            java.lang.Runnable r1 = r2.c     // Catch: java.lang.Throwable -> L25
            r0.c(r1)     // Catch: java.lang.Throwable -> L25
            com.tkay.core.common.k$a r0 = r2.e     // Catch: java.lang.Throwable -> L25
            if (r0 == 0) goto L20
            com.tkay.core.common.k$a r0 = r2.e     // Catch: java.lang.Throwable -> L25
            java.lang.String r1 = r2.f     // Catch: java.lang.Throwable -> L25
            r0.b(r1)     // Catch: java.lang.Throwable -> L25
        L20:
            r0 = 0
            r2.e = r0     // Catch: java.lang.Throwable -> L25
        L23:
            monitor-exit(r2)
            return
        L25:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    private void f() {
            r1 = this;
            r0 = 0
            r1.e = r0
            return
    }

    @Override
    public final void a(com.tkay.core.common.k.a r5) {
            r4 = this;
            r4.e = r5
            long r0 = r4.g
            super.a(r0)
            com.tkay.core.common.f.ag r5 = r4.i
            long r0 = r5.i
            r2 = 0
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 > 0) goto L13
            r0 = 2000(0x7d0, double:9.88E-321)
        L13:
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
            java.lang.Runnable r2 = r4.c
            r5.a(r2, r0)
            long r0 = java.lang.System.currentTimeMillis()
            r4.k = r0
            java.util.HashMap r5 = new java.util.HashMap
            java.util.Map<java.lang.Integer, com.tkay.core.b.a> r0 = r4.j
            r5.<init>(r0)
            java.util.Set r5 = r5.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L31:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L56
            java.lang.Object r0 = r5.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.Integer r1 = (java.lang.Integer) r1
            java.lang.Object r0 = r0.getValue()
            com.tkay.core.b.a r0 = (com.tkay.core.b.a) r0
            com.tkay.core.common.l.b.a r2 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.b.h$2 r3 = new com.tkay.core.b.h$2
            r3.<init>(r4, r0, r1)
            r2.a(r3)
            goto L31
        L56:
            return
    }

    @Override
    public final void a(boolean r1) {
            r0 = this;
            r0.h = r1
            return
    }

    @Override
    protected final synchronized void b() {
            r2 = this;
            monitor-enter(r2)
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> L2a
            java.util.Map<java.lang.Integer, com.tkay.core.b.a> r1 = r2.j     // Catch: java.lang.Throwable -> L2a
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L2a
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L2a
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L2a
        L10:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L2a
            if (r1 == 0) goto L28
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L2a
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L2a
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L2a
            com.tkay.core.b.a r1 = (com.tkay.core.b.a) r1     // Catch: java.lang.Throwable -> L2a
            if (r1 == 0) goto L10
            r1.b()     // Catch: java.lang.Throwable -> L2a
            goto L10
        L28:
            monitor-exit(r2)
            return
        L2a:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }
}
