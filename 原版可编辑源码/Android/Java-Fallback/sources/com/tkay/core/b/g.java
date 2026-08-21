package com.tkay.core.b;

public class g extends com.tkay.core.b.a {
    public static final java.lang.String d = null;
    private java.util.List<com.tkay.core.common.f.aj> e;
    private com.tkay.core.b.b.a f;
    private long g;


    static {
            java.lang.Class<com.tkay.core.b.g> r0 = com.tkay.core.b.g.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.core.b.g.d = r0
            return
    }

    public g(com.tkay.core.common.f.ag r2) {
            r1 = this;
            r1.<init>(r2)
            java.util.ArrayList r2 = new java.util.ArrayList
            com.tkay.core.common.f.ag r0 = r1.a
            java.util.List<com.tkay.core.common.f.aj> r0 = r0.j
            r2.<init>(r0)
            java.util.List r2 = java.util.Collections.synchronizedList(r2)
            r1.e = r2
            return
    }

    private static com.tkay.core.api.TYBiddingResult a(java.lang.String r0) {
            com.tkay.core.api.TYBiddingResult r0 = com.tkay.core.api.TYBiddingResult.fail(r0)
            return r0
    }

    private synchronized void a(com.tkay.core.api.TYBiddingResult r7, com.tkay.core.common.f.aj r8) {
            r6 = this;
            monitor-enter(r6)
            r1 = 0
            r4 = -1
            r5 = 0
            r0 = r6
            r2 = r7
            r3 = r8
            r0.a(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r6)
            return
        Lc:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    static void a(com.tkay.core.b.g r0, boolean r1, com.tkay.core.api.TYBiddingResult r2, com.tkay.core.common.f.aj r3, int r4, com.tkay.core.b.c.a r5) {
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    private void a(com.tkay.core.common.f.aj r18, com.tkay.core.common.f.k r19, long r20, int r22, com.tkay.core.b.c.a r23) {
            r17 = this;
            r0 = r17
            r1 = r18
            r2 = r19
            r3 = r20
            r5 = r23
            boolean r6 = r19.isSuccessWithUseType()
            if (r6 == 0) goto L100
            r1.a(r3)
            com.tkay.core.api.TYAdConst$CURRENCY r3 = r2.currency
            r1.a(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "C2S Bidding Success: , AdSoruceId:"
            r3.<init>(r4)
            java.lang.String r4 = r18.t()
            r3.append(r4)
            java.lang.String r4 = ", NetworkFirmId:"
            r3.append(r4)
            int r4 = r18.c()
            r3.append(r4)
            java.lang.String r4 = " | price:"
            r3.append(r4)
            double r6 = r19.getPrice()
            r3.append(r6)
            java.lang.String r4 = " | sortPrice:"
            r3.append(r4)
            double r6 = r19.getSortPrice()
            r3.append(r6)
            java.lang.String r4 = " | currency:"
            r3.append(r4)
            com.tkay.core.api.TYAdConst$CURRENCY r4 = r2.currency
            java.lang.String r4 = r4.toString()
            r3.append(r4)
            double r3 = r19.getSortPrice()
            double r3 = r0.a(r3, r1)
            r6 = 0
            int r8 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r8 > 0) goto L92
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "NetworkName:"
            r3.<init>(r4)
            java.lang.String r4 = r18.d()
            r3.append(r4)
            java.lang.String r4 = ",AdSoruceId:"
            r3.append(r4)
            java.lang.String r4 = r18.t()
            r3.append(r4)
            java.lang.String r4 = " c2s price return 0,please check network placement c2s config"
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.String r4 = "tkay_bidding"
            android.util.Log.w(r4, r3)
            double r3 = com.tkay.core.common.l.g.a(r18)
        L92:
            r10 = r3
            com.tkay.core.common.f.l r3 = new com.tkay.core.common.f.l
            r9 = 1
            java.lang.String r12 = r2.token
            java.lang.String r13 = r2.winNoticeUrl
            java.lang.String r14 = r2.loseNoticeUrl
            java.lang.String r15 = r2.displayNoticeUrl
            java.lang.String r16 = ""
            r8 = r3
            r8.<init>(r9, r10, r12, r13, r14, r15, r16)
            double r8 = r17.a(r18)
            r3.l = r8
            com.tkay.core.api.TYBiddingNotice r2 = r2.biddingNotice
            r3.setBiddingNotice(r2)
            long r8 = r18.n()
            long r10 = java.lang.System.currentTimeMillis()
            long r8 = r8 + r10
            r3.f = r8
            long r8 = r18.n()
            r3.e = r8
            java.lang.String r2 = r18.t()
            r3.k = r2
            int r2 = r18.c()
            r3.d = r2
            r3.r = r5
            if (r5 == 0) goto Ld2
            r2 = 1
            goto Ld3
        Ld2:
            r2 = 0
        Ld3:
            r3.s = r2
            com.tkay.core.common.f.ag r2 = r0.a
            if (r2 == 0) goto Le0
            com.tkay.core.common.f.ag r2 = r0.a
            java.lang.String r2 = r2.d
            r3.b(r2)
        Le0:
            int r2 = r18.c()
            r0.a(r2, r3, r6)
            r0.a(r1, r3)
            java.lang.String r2 = com.tkay.core.common.b.f.i.l
            com.tkay.core.common.f.ag r3 = r0.a
            java.lang.String r3 = r3.e
            com.tkay.core.common.f.ag r4 = r0.a
            int r4 = r4.f
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r4 = com.tkay.core.common.l.g.d(r4)
            com.tkay.core.common.l.n.a(r2, r3, r4, r1)
            return
        L100:
            java.lang.String r2 = r2.errorMsg
            r5 = r22
            a(r1, r2, r3, r5)
            java.lang.String r2 = com.tkay.core.common.b.f.i.m
            com.tkay.core.common.f.ag r3 = r0.a
            java.lang.String r3 = r3.e
            com.tkay.core.common.f.ag r4 = r0.a
            int r4 = r4.f
            java.lang.String r4 = java.lang.String.valueOf(r4)
            java.lang.String r4 = com.tkay.core.common.l.g.d(r4)
            com.tkay.core.common.l.n.a(r2, r3, r4, r1)
            return
    }

    private synchronized void a(boolean r12, com.tkay.core.api.TYBiddingResult r13, com.tkay.core.common.f.aj r14, int r15, com.tkay.core.b.c.a r16) {
            r11 = this;
            r8 = r11
            r0 = r13
            r9 = r14
            monitor-enter(r11)
            r10 = 1
            if (r12 == 0) goto L42
            com.tkay.core.b.c r1 = com.tkay.core.b.c.a()     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r2 = r14.t()     // Catch: java.lang.Throwable -> Ldc
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> r3 = r1.e     // Catch: java.lang.Throwable -> Ldc
            if (r3 == 0) goto L30
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> r1 = r1.e     // Catch: java.lang.Throwable -> Ldc
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ldc
            r3.<init>()     // Catch: java.lang.Throwable -> Ldc
            r3.append(r2)     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r2 = "_c2sfirstStatus"
            r3.append(r2)     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> Ldc
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> Ldc
            if (r1 != 0) goto L2d
            goto L30
        L2d:
            r1 = 0
            r3 = r1
            goto L31
        L30:
            r3 = r10
        L31:
            com.tkay.core.common.f.ag r1 = r8.a     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r1 = r1.e     // Catch: java.lang.Throwable -> Ldc
            long r4 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> Ldc
            long r6 = r8.g     // Catch: java.lang.Throwable -> Ldc
            long r4 = r4 - r6
            com.tkay.core.common.f.ag r6 = r8.a     // Catch: java.lang.Throwable -> Ldc
            r2 = r14
            com.tkay.core.common.k.c.a(r1, r2, r3, r4, r6)     // Catch: java.lang.Throwable -> Ldc
        L42:
            com.tkay.core.b.c r1 = com.tkay.core.b.c.a()     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r2 = r14.t()     // Catch: java.lang.Throwable -> Ldc
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> r3 = r1.e     // Catch: java.lang.Throwable -> Ldc
            if (r3 != 0) goto L55
            java.util.concurrent.ConcurrentHashMap r3 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> Ldc
            r3.<init>()     // Catch: java.lang.Throwable -> Ldc
            r1.e = r3     // Catch: java.lang.Throwable -> Ldc
        L55:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> r1 = r1.e     // Catch: java.lang.Throwable -> Ldc
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Ldc
            r3.<init>()     // Catch: java.lang.Throwable -> Ldc
            r3.append(r2)     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r2 = "_c2sfirstStatus"
            r3.append(r2)     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> Ldc
            java.lang.Integer r3 = java.lang.Integer.valueOf(r10)     // Catch: java.lang.Throwable -> Ldc
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Ldc
            java.util.concurrent.atomic.AtomicBoolean r1 = r8.c     // Catch: java.lang.Throwable -> Ldc
            boolean r1 = r1.get()     // Catch: java.lang.Throwable -> Ldc
            if (r1 != 0) goto Lc6
            long r1 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> Ldc
            long r3 = r8.g     // Catch: java.lang.Throwable -> Ldc
            long r4 = r1 - r3
            r1 = r11
            r2 = r14
            r3 = r13
            r6 = r15
            r7 = r16
            r1.a(r2, r3, r4, r6, r7)     // Catch: java.lang.Throwable -> Ldc
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Ldc
            r1.<init>(r10)     // Catch: java.lang.Throwable -> Ldc
            java.util.List r1 = java.util.Collections.synchronizedList(r1)     // Catch: java.lang.Throwable -> Ldc
            r1.add(r14)     // Catch: java.lang.Throwable -> Ldc
            java.util.List<com.tkay.core.common.f.aj> r2 = r8.e     // Catch: java.lang.Throwable -> Ldc
            r2.remove(r14)     // Catch: java.lang.Throwable -> Ldc
            java.util.List<com.tkay.core.common.f.aj> r2 = r8.e     // Catch: java.lang.Throwable -> Ldc
            int r2 = r2.size()     // Catch: java.lang.Throwable -> Ldc
            if (r2 != 0) goto La6
            java.util.concurrent.atomic.AtomicBoolean r2 = r8.c     // Catch: java.lang.Throwable -> Ldc
            r2.set(r10)     // Catch: java.lang.Throwable -> Ldc
        La6:
            com.tkay.core.b.b.a r2 = r8.f     // Catch: java.lang.Throwable -> Ldc
            if (r2 == 0) goto Lc4
            if (r12 != 0) goto Lb4
            java.lang.String r0 = r0.errorMsg     // Catch: java.lang.Throwable -> Ldc
            r2 = -1
            boolean r0 = r11.a(r14, r0, r2)     // Catch: java.lang.Throwable -> Ldc
            goto Lb5
        Lb4:
            r0 = r12
        Lb5:
            r2 = 0
            if (r0 == 0) goto Lbf
            com.tkay.core.b.b.a r0 = r8.f     // Catch: java.lang.Throwable -> Ldc
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> Ldc
            monitor-exit(r11)
            return
        Lbf:
            com.tkay.core.b.b.a r0 = r8.f     // Catch: java.lang.Throwable -> Ldc
            r0.a(r2, r1)     // Catch: java.lang.Throwable -> Ldc
        Lc4:
            monitor-exit(r11)
            return
        Lc6:
            if (r0 == 0) goto Lda
            com.tkay.core.api.TYBiddingNotice r1 = r0.biddingNotice     // Catch: java.lang.Throwable -> Ldc
            if (r1 == 0) goto Lda
            com.tkay.core.api.TYBiddingNotice r0 = r0.biddingNotice     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r1 = "2"
            r2 = 0
            java.util.HashMap r4 = new java.util.HashMap     // Catch: java.lang.Throwable -> Ldc
            r4.<init>(r10)     // Catch: java.lang.Throwable -> Ldc
            r0.notifyBidLoss(r1, r2, r4)     // Catch: java.lang.Throwable -> Ldc
        Lda:
            monitor-exit(r11)
            return
        Ldc:
            r0 = move-exception
            monitor-exit(r11)
            throw r0
    }

    @Override
    protected final void a(com.tkay.core.b.b.a r18) {
            r17 = this;
            r7 = r17
            r8 = r18
            r7.f = r8
            com.tkay.core.common.f.ag r0 = r7.a
            java.util.List<com.tkay.core.common.f.aj> r9 = r0.j
            int r10 = r9.size()
            long r0 = android.os.SystemClock.elapsedRealtime()
            r7.g = r0
            r11 = 0
            r12 = r11
        L16:
            if (r12 >= r10) goto L117
            java.lang.Object r0 = r9.get(r12)
            r4 = r0
            com.tkay.core.common.f.aj r4 = (com.tkay.core.common.f.aj) r4
            com.tkay.core.api.TYBaseAdAdapter r1 = com.tkay.core.common.l.i.a(r4)
            if (r1 != 0) goto L49
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.h()
            r0.append(r1)
            java.lang.String r1 = "not exist!"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.tkay.core.api.TYBiddingResult r3 = com.tkay.core.api.TYBiddingResult.fail(r0)
            r2 = 0
            r5 = -9
            r6 = 0
            r1 = r17
            r1.a(r2, r3, r4, r5, r6)
            goto L113
        L49:
            com.tkay.core.b.g$1 r2 = new com.tkay.core.b.g$1     // Catch: java.lang.Throwable -> L104
            r2.<init>(r7, r1, r4)     // Catch: java.lang.Throwable -> L104
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L104
            java.lang.String r3 = "start c2s bid request: "
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L104
            java.lang.String r3 = r1.getNetworkName()     // Catch: java.lang.Throwable -> L104
            r0.append(r3)     // Catch: java.lang.Throwable -> L104
            com.tkay.core.common.f.ag r0 = r7.a     // Catch: java.lang.Throwable -> L104
            android.content.Context r0 = r0.b     // Catch: java.lang.Throwable -> L104
            com.tkay.core.c.e r0 = com.tkay.core.c.e.a(r0)     // Catch: java.lang.Throwable -> L104
            com.tkay.core.common.f.ag r3 = r7.a     // Catch: java.lang.Throwable -> L104
            java.lang.String r3 = r3.e     // Catch: java.lang.Throwable -> L104
            com.tkay.core.c.d r0 = r0.a(r3)     // Catch: java.lang.Throwable -> L104
            com.tkay.core.common.f.ag r3 = r7.a     // Catch: java.lang.Throwable -> L104
            java.lang.String r3 = r3.e     // Catch: java.lang.Throwable -> L104
            com.tkay.core.common.f.ag r5 = r7.a     // Catch: java.lang.Throwable -> L104
            java.lang.String r5 = r5.d     // Catch: java.lang.Throwable -> L104
            java.util.Map r3 = r0.a(r3, r5, r4)     // Catch: java.lang.Throwable -> L104
            r5 = 0
            double r13 = r4.a(r0)     // Catch: java.lang.Throwable -> L91
            int r0 = (r13 > r5 ? 1 : (r13 == r5 ? 0 : -1))
            if (r0 <= 0) goto La9
            double r15 = r7.a(r4)     // Catch: java.lang.Throwable -> L91
            java.lang.String r0 = "bid_floor"
            double r13 = r13 * r15
            java.lang.Double r13 = java.lang.Double.valueOf(r13)     // Catch: java.lang.Throwable -> L91
            r3.put(r0, r13)     // Catch: java.lang.Throwable -> L91
            goto La9
        L91:
            r0 = move-exception
            java.lang.String r13 = "tkay_bidding"
            java.lang.StringBuilder r14 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L104
            java.lang.String r15 = "C2S startBidRequest with exception:"
            r14.<init>(r15)     // Catch: java.lang.Throwable -> L104
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L104
            r14.append(r0)     // Catch: java.lang.Throwable -> L104
            java.lang.String r0 = r14.toString()     // Catch: java.lang.Throwable -> L104
            android.util.Log.w(r13, r0)     // Catch: java.lang.Throwable -> L104
        La9:
            com.tkay.core.common.f.ag r0 = r7.a     // Catch: java.lang.Throwable -> L104
            com.tkay.core.common.f.d r0 = r0.t     // Catch: java.lang.Throwable -> L104
            com.tkay.core.common.f.d r0 = r0.N()     // Catch: java.lang.Throwable -> L104
            com.tkay.core.common.l.s.a(r0, r4, r11, r11)     // Catch: java.lang.Throwable -> L104
            com.tkay.core.common.l.g.a(r3, r0)     // Catch: java.lang.Throwable -> L104
            com.tkay.core.common.f.ag r0 = r7.a     // Catch: java.lang.Throwable -> L104
            int r0 = r0.v     // Catch: java.lang.Throwable -> L104
            r13 = 8
            if (r0 != r13) goto Ld7
            java.lang.String r0 = "tkay_dynamic_max_price"
            com.tkay.core.common.f.ag r13 = r7.a     // Catch: java.lang.Throwable -> L104
            double r13 = r13.w     // Catch: java.lang.Throwable -> L104
            int r5 = (r13 > r5 ? 1 : (r13 == r5 ? 0 : -1))
            if (r5 >= 0) goto Lcc
            java.lang.String r5 = "0"
            goto Ld4
        Lcc:
            com.tkay.core.common.f.ag r5 = r7.a     // Catch: java.lang.Throwable -> L104
            double r5 = r5.w     // Catch: java.lang.Throwable -> L104
            java.lang.Double r5 = java.lang.Double.valueOf(r5)     // Catch: java.lang.Throwable -> L104
        Ld4:
            r3.put(r0, r5)     // Catch: java.lang.Throwable -> L104
        Ld7:
            com.tkay.core.common.f.ag r0 = r7.a     // Catch: java.lang.Throwable -> L104
            com.tkay.core.common.j r0 = r0.c     // Catch: java.lang.Throwable -> L104
            if (r0 == 0) goto Le6
            com.tkay.core.common.f.ag r0 = r7.a     // Catch: java.lang.Throwable -> L104
            com.tkay.core.common.j r0 = r0.c     // Catch: java.lang.Throwable -> L104
            android.content.Context r0 = r0.a()     // Catch: java.lang.Throwable -> L104
            goto Le7
        Le6:
            r0 = 0
        Le7:
            if (r0 != 0) goto Led
            com.tkay.core.common.f.ag r0 = r7.a     // Catch: java.lang.Throwable -> L104
            android.content.Context r0 = r0.b     // Catch: java.lang.Throwable -> L104
        Led:
            com.tkay.core.common.f.ag r5 = r7.a     // Catch: java.lang.Throwable -> L104
            java.util.Map<java.lang.String, java.lang.Object> r5 = r5.r     // Catch: java.lang.Throwable -> L104
            boolean r0 = r1.internalStartBiddingRequest(r0, r3, r5, r2)     // Catch: java.lang.Throwable -> L104
            r8.a(r4, r1)     // Catch: java.lang.Throwable -> L104
            if (r0 != 0) goto L113
            java.lang.String r0 = "This network don't support head bidding in current TY's version."
            com.tkay.core.api.TYBiddingResult r0 = com.tkay.core.api.TYBiddingResult.fail(r0)     // Catch: java.lang.Throwable -> L104
            r7.a(r0, r4)     // Catch: java.lang.Throwable -> L104
            goto L113
        L104:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = r0.getMessage()
            com.tkay.core.api.TYBiddingResult r0 = com.tkay.core.api.TYBiddingResult.fail(r0)
            r7.a(r0, r4)
        L113:
            int r12 = r12 + 1
            goto L16
        L117:
            return
    }

    @Override
    protected final void a(com.tkay.core.common.f.aj r8, com.tkay.core.common.f.k r9, long r10) {
            r7 = this;
            r5 = -1
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r0.a(r1, r2, r3, r5, r6)
            return
    }

    @Override
    public final synchronized void b() {
            r12 = this;
            monitor-enter(r12)
            java.util.concurrent.atomic.AtomicBoolean r0 = r12.c     // Catch: java.lang.Throwable -> L6a
            boolean r0 = r0.get()     // Catch: java.lang.Throwable -> L6a
            if (r0 != 0) goto L68
            java.util.concurrent.atomic.AtomicBoolean r0 = r12.c     // Catch: java.lang.Throwable -> L6a
            r1 = 1
            r0.set(r1)     // Catch: java.lang.Throwable -> L6a
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L6a
            r2 = 3
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L6a
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L6a
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L6a
            java.util.List<com.tkay.core.common.f.aj> r2 = r12.e     // Catch: java.lang.Throwable -> L6a
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L6a
        L20:
            boolean r4 = r2.hasNext()     // Catch: java.lang.Throwable -> L6a
            if (r4 == 0) goto L52
            java.lang.Object r4 = r2.next()     // Catch: java.lang.Throwable -> L6a
            com.tkay.core.common.f.aj r4 = (com.tkay.core.common.f.aj) r4     // Catch: java.lang.Throwable -> L6a
            java.lang.String r5 = "bid timeout"
            r6 = -3
            boolean r5 = r12.a(r4, r5, r6)     // Catch: java.lang.Throwable -> L6a
            if (r5 == 0) goto L39
            r0.add(r4)     // Catch: java.lang.Throwable -> L6a
            goto L20
        L39:
            java.lang.String r5 = "bid timeout!"
            com.tkay.core.api.TYBiddingResult r7 = com.tkay.core.api.TYBiddingResult.fail(r5)     // Catch: java.lang.Throwable -> L6a
            long r5 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L6a
            long r8 = r12.g     // Catch: java.lang.Throwable -> L6a
            long r8 = r5 - r8
            r10 = -3
            r11 = 0
            r5 = r12
            r6 = r4
            r5.a(r6, r7, r8, r10, r11)     // Catch: java.lang.Throwable -> L6a
            r3.add(r4)     // Catch: java.lang.Throwable -> L6a
            goto L20
        L52:
            java.util.List<com.tkay.core.common.f.aj> r2 = r12.e     // Catch: java.lang.Throwable -> L6a
            r2.clear()     // Catch: java.lang.Throwable -> L6a
            java.util.concurrent.atomic.AtomicBoolean r2 = r12.c     // Catch: java.lang.Throwable -> L6a
            r2.set(r1)     // Catch: java.lang.Throwable -> L6a
            com.tkay.core.b.b.a r1 = r12.f     // Catch: java.lang.Throwable -> L6a
            if (r1 == 0) goto L65
            com.tkay.core.b.b.a r1 = r12.f     // Catch: java.lang.Throwable -> L6a
            r1.a(r0, r3)     // Catch: java.lang.Throwable -> L6a
        L65:
            r0 = 0
            r12.f = r0     // Catch: java.lang.Throwable -> L6a
        L68:
            monitor-exit(r12)
            return
        L6a:
            r0 = move-exception
            monitor-exit(r12)
            throw r0
    }
}
