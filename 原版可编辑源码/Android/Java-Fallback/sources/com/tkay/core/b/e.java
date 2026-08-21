package com.tkay.core.b;

public final class e extends com.tkay.core.b.a {
    private java.lang.String d;
    private long e;
    private com.tkay.core.b.b.a f;


    public e(com.tkay.core.common.f.ag r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = "IH Bidding"
            r0.d = r1
            return
    }

    static void a(com.tkay.core.b.e r1, java.util.List r2) {
            r0 = -1
            r1.a(r2, r0)
            return
    }

    private synchronized void a(java.util.List<com.tkay.core.common.f.aj> r23, int r24) {
            r22 = this;
            r1 = r22
            r0 = r24
            monitor-enter(r22)
            java.util.concurrent.atomic.AtomicBoolean r2 = r1.c     // Catch: java.lang.Throwable -> Lfd
            boolean r2 = r2.get()     // Catch: java.lang.Throwable -> Lfd
            if (r2 == 0) goto Lf
            monitor-exit(r22)
            return
        Lf:
            java.util.concurrent.atomic.AtomicBoolean r2 = r1.c     // Catch: java.lang.Throwable -> Lfd
            r3 = 1
            r2.set(r3)     // Catch: java.lang.Throwable -> Lfd
            if (r23 != 0) goto L1d
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lfd
            r2.<init>()     // Catch: java.lang.Throwable -> Lfd
            goto L1f
        L1d:
            r2 = r23
        L1f:
            long r4 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> Lfd
            long r6 = r1.e     // Catch: java.lang.Throwable -> Lfd
            long r4 = r4 - r6
            java.util.ArrayList r6 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Lfd
            r6.<init>()     // Catch: java.lang.Throwable -> Lfd
            com.tkay.core.common.f.ag r7 = r1.a     // Catch: java.lang.Throwable -> Lfd
            java.util.List<com.tkay.core.common.f.aj> r7 = r7.j     // Catch: java.lang.Throwable -> Lfd
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Throwable -> Lfd
        L33:
            boolean r8 = r7.hasNext()     // Catch: java.lang.Throwable -> Lfd
            r9 = 0
            if (r8 == 0) goto Lc9
            java.lang.Object r8 = r7.next()     // Catch: java.lang.Throwable -> Lfd
            com.tkay.core.common.f.aj r8 = (com.tkay.core.common.f.aj) r8     // Catch: java.lang.Throwable -> Lfd
            java.util.Iterator r10 = r2.iterator()     // Catch: java.lang.Throwable -> Lfd
        L44:
            boolean r11 = r10.hasNext()     // Catch: java.lang.Throwable -> Lfd
            if (r11 == 0) goto L9b
            java.lang.Object r11 = r10.next()     // Catch: java.lang.Throwable -> Lfd
            com.tkay.core.common.f.aj r11 = (com.tkay.core.common.f.aj) r11     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r12 = r8.t()     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r13 = r11.t()     // Catch: java.lang.Throwable -> Lfd
            boolean r12 = r12.equals(r13)     // Catch: java.lang.Throwable -> Lfd
            if (r12 == 0) goto L44
            r11.a(r4)     // Catch: java.lang.Throwable -> Lfd
            r11.g(r9)     // Catch: java.lang.Throwable -> Lfd
            com.tkay.core.common.f.l r9 = new com.tkay.core.common.f.l     // Catch: java.lang.Throwable -> Lfd
            r14 = 1
            double r15 = r11.x()     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r17 = r11.y()     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r18 = ""
            java.lang.String r19 = ""
            java.lang.String r20 = ""
            java.lang.String r21 = ""
            r13 = r9
            r13.<init>(r14, r15, r17, r18, r19, r20, r21)     // Catch: java.lang.Throwable -> Lfd
            long r12 = r11.n()     // Catch: java.lang.Throwable -> Lfd
            long r14 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lfd
            long r12 = r12 + r14
            r9.f = r12     // Catch: java.lang.Throwable -> Lfd
            long r12 = r11.n()     // Catch: java.lang.Throwable -> Lfd
            r9.e = r12     // Catch: java.lang.Throwable -> Lfd
            com.tkay.core.common.f.ag r10 = r1.a     // Catch: java.lang.Throwable -> Lfd
            if (r10 == 0) goto L97
            com.tkay.core.common.f.ag r10 = r1.a     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r10 = r10.d     // Catch: java.lang.Throwable -> Lfd
            r9.b(r10)     // Catch: java.lang.Throwable -> Lfd
        L97:
            r1.a(r11, r9)     // Catch: java.lang.Throwable -> Lfd
            r9 = r3
        L9b:
            if (r9 != 0) goto L33
            java.lang.String r9 = "NO_BID_TOKEN"
            java.lang.String r10 = r8.z()     // Catch: java.lang.Throwable -> Lfd
            boolean r9 = r9.equals(r10)     // Catch: java.lang.Throwable -> Lfd
            if (r9 == 0) goto Lb2
            java.lang.String r9 = "No Bid Info."
            r10 = 0
            r12 = -2
            b(r8, r9, r10, r12)     // Catch: java.lang.Throwable -> Lfd
            goto Lb7
        Lb2:
            java.lang.String r9 = "No Bid Info."
            b(r8, r9, r4, r0)     // Catch: java.lang.Throwable -> Lfd
        Lb7:
            java.lang.String r9 = "No Bid Info."
            boolean r9 = r1.a(r8, r9, r0)     // Catch: java.lang.Throwable -> Lfd
            if (r9 == 0) goto Lc4
            r2.add(r8)     // Catch: java.lang.Throwable -> Lfd
            goto L33
        Lc4:
            r6.add(r8)     // Catch: java.lang.Throwable -> Lfd
            goto L33
        Lc9:
            boolean r0 = r1.b     // Catch: java.lang.Throwable -> Lfd
            if (r0 == 0) goto Led
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lfd
            r0.<init>()     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r4 = "IH Bidding Success List"
            org.json.JSONArray r5 = a(r2)     // Catch: java.lang.Exception -> Le4 java.lang.Throwable -> Lfd
            r0.put(r4, r5)     // Catch: java.lang.Exception -> Le4 java.lang.Throwable -> Lfd
            java.lang.String r4 = "IH Bidding Fail List"
            org.json.JSONArray r5 = a(r6)     // Catch: java.lang.Exception -> Le4 java.lang.Throwable -> Lfd
            r0.put(r4, r5)     // Catch: java.lang.Exception -> Le4 java.lang.Throwable -> Lfd
        Le4:
            java.lang.String r4 = r1.d     // Catch: java.lang.Throwable -> Lfd
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Lfd
            com.tkay.core.common.l.n.a(r4, r0, r9)     // Catch: java.lang.Throwable -> Lfd
        Led:
            java.util.concurrent.atomic.AtomicBoolean r0 = r1.c     // Catch: java.lang.Throwable -> Lfd
            r0.set(r3)     // Catch: java.lang.Throwable -> Lfd
            com.tkay.core.b.b.a r0 = r1.f     // Catch: java.lang.Throwable -> Lfd
            if (r0 == 0) goto Lfb
            com.tkay.core.b.b.a r0 = r1.f     // Catch: java.lang.Throwable -> Lfd
            r0.a(r2, r6)     // Catch: java.lang.Throwable -> Lfd
        Lfb:
            monitor-exit(r22)
            return
        Lfd:
            r0 = move-exception
            monitor-exit(r22)
            throw r0
    }

    private void b(com.tkay.core.common.f.aj r11) {
            r10 = this;
            com.tkay.core.common.f.l r9 = new com.tkay.core.common.f.l
            double r2 = r11.x()
            java.lang.String r4 = r11.y()
            r1 = 1
            java.lang.String r5 = ""
            java.lang.String r6 = ""
            java.lang.String r7 = ""
            java.lang.String r8 = ""
            r0 = r9
            r0.<init>(r1, r2, r4, r5, r6, r7, r8)
            long r0 = r11.n()
            long r2 = java.lang.System.currentTimeMillis()
            long r0 = r0 + r2
            r9.f = r0
            long r0 = r11.n()
            r9.e = r0
            com.tkay.core.common.f.ag r0 = r10.a
            if (r0 == 0) goto L33
            com.tkay.core.common.f.ag r0 = r10.a
            java.lang.String r0 = r0.d
            r9.b(r0)
        L33:
            r10.a(r11, r9)
            return
    }

    private static void b(com.tkay.core.common.f.aj r0, java.lang.String r1, long r2, int r4) {
            a(r0, r1, r2, r4)
            return
    }

    @Override
    protected final void a(com.tkay.core.b.b.a r6) {
            r5 = this;
            r5.f = r6
            long r0 = android.os.SystemClock.elapsedRealtime()
            r5.e = r0
            com.tkay.core.common.f.ag r0 = r5.a
            java.util.List<com.tkay.core.common.f.aj> r0 = r0.j
            boolean r1 = r5.b
            java.lang.String r2 = "tkay_bidding"
            if (r1 == 0) goto L28
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.lang.String r3 = "Start IH Bidding List"
            org.json.JSONArray r4 = a(r0)     // Catch: java.lang.Exception -> L20
            r1.put(r3, r4)     // Catch: java.lang.Exception -> L20
        L20:
            java.lang.String r1 = r1.toString()
            r3 = 0
            com.tkay.core.common.l.n.a(r2, r1, r3)
        L28:
            com.tkay.core.b.c r1 = com.tkay.core.b.c.a()
            com.tkay.core.api.MediationBidManager r1 = r1.b()
            if (r1 != 0) goto L55
            java.util.Iterator r0 = r0.iterator()
        L36:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L55
            java.lang.Object r1 = r0.next()
            com.tkay.core.common.f.aj r1 = (com.tkay.core.common.f.aj) r1
            com.tkay.core.api.TYBaseAdAdapter r1 = com.tkay.core.common.l.i.a(r1)
            if (r1 == 0) goto L36
            com.tkay.core.api.MediationBidManager r0 = r1.getBidManager()
            if (r0 == 0) goto L55
            com.tkay.core.b.c r1 = com.tkay.core.b.c.a()
            r1.a(r0)
        L55:
            com.tkay.core.b.c r0 = com.tkay.core.b.c.a()
            com.tkay.core.api.MediationBidManager r0 = r0.b()
            if (r0 != 0) goto L6b
            java.lang.String r6 = "No BidManager."
            android.util.Log.i(r2, r6)
            r6 = 0
            r0 = -9
            r5.a(r6, r0)
            return
        L6b:
            com.tkay.core.common.f.ag r1 = r5.a
            java.lang.String r1 = r1.p
            r0.setBidRequestUrl(r1)
            com.tkay.core.common.f.ag r1 = r5.a
            com.tkay.core.b.e$1 r2 = new com.tkay.core.b.e$1
            r2.<init>(r5, r6)
            r0.startBid(r1, r2)
            return
    }

    @Override
    protected final void a(com.tkay.core.common.f.aj r1, com.tkay.core.common.f.k r2, long r3) {
            r0 = this;
            return
    }

    @Override
    protected final void b() {
            r2 = this;
            r0 = 0
            r1 = -3
            r2.a(r0, r1)
            return
    }
}
