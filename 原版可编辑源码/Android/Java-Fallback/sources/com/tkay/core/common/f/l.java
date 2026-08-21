package com.tkay.core.common.f;

public final class l extends com.tkay.core.common.f.k implements java.lang.Comparable<com.tkay.core.common.f.l> {
    private boolean A;
    private java.lang.String B;
    private java.lang.String C;
    private java.lang.String D;
    private java.lang.String E;
    private java.lang.String F;
    private java.lang.String G;
    public int a;
    public java.lang.String b;
    public java.lang.String c;
    public int d;
    public long e;
    public long f;
    public java.lang.String g;
    public java.lang.String h;
    public java.lang.String i;
    public java.lang.String j;
    public java.lang.String k;
    public double l;
    public java.lang.String m;
    public int n;
    public double o;
    public java.lang.String p;
    public double q;
    public com.tkay.core.b.c.a r;
    public boolean s;
    private final java.lang.String t;
    private boolean u;
    private final java.lang.String v;
    private final java.lang.String w;
    private final java.lang.String x;
    private final java.lang.String y;
    private final java.lang.String z;

    public l(boolean r12, double r13, java.lang.String r15, java.lang.String r16, java.lang.String r17, java.lang.String r18, java.lang.String r19) {
            r11 = this;
            r10 = r11
            com.tkay.core.api.TYAdConst$CURRENCY r9 = com.tkay.core.api.TYAdConst.CURRENCY.USD
            r0 = r11
            r1 = r12
            r2 = r13
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r18
            r8 = r19
            r0.<init>(r1, r2, r4, r5, r6, r7, r8, r9)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r11.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r1 = ":"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r10.t = r0
            java.lang.String r0 = "${AUCTION_PRICE}"
            r10.v = r0
            java.lang.String r0 = "${AUCTION_LOSS}"
            r10.w = r0
            java.lang.String r0 = "${AUCTION_SEAT_ID}"
            r10.x = r0
            java.lang.String r0 = "${AUCTION_BID_TO_WIN}"
            r10.y = r0
            java.lang.String r0 = "${AUCTION_CURRENCY}"
            r10.z = r0
            return
    }

    private int a(com.tkay.core.common.f.l r8) {
            r7 = this;
            r0 = -1
            if (r8 != 0) goto L4
            return r0
        L4:
            double r1 = r7.sortPrice
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L19
            com.tkay.core.b.c r1 = com.tkay.core.b.c.a()
            java.lang.String r2 = r7.g
            java.lang.String r5 = r7.k
            double r1 = r1.a(r2, r5)
            goto L1b
        L19:
            double r1 = r7.sortPrice
        L1b:
            if (r8 == 0) goto L32
            double r5 = r8.sortPrice
            int r3 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r3 != 0) goto L30
            com.tkay.core.b.c r3 = com.tkay.core.b.c.a()
            java.lang.String r4 = r8.g
            java.lang.String r8 = r8.k
            double r3 = r3.a(r4, r8)
            goto L32
        L30:
            double r3 = r8.sortPrice
        L32:
            int r8 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r8 <= 0) goto L37
            return r0
        L37:
            r8 = 1
            return r8
    }

    private int a(boolean r2, int r3) {
            r1 = this;
            int r0 = r1.d
            if (r3 != r0) goto La
            if (r2 != 0) goto L8
            r2 = 1
            goto L16
        L8:
            r2 = 4
            goto L16
        La:
            r2 = 67
            if (r3 == r2) goto L15
            r2 = 35
            if (r0 != r2) goto L13
            goto L15
        L13:
            r2 = 2
            goto L16
        L15:
            r2 = 3
        L16:
            return r2
    }

    public static com.tkay.core.common.f.l a(java.lang.String r18) {
            java.lang.String r0 = "origin_price"
            java.lang.String r1 = "s_pty"
            java.lang.String r2 = "second_price"
            java.lang.String r3 = "ecpm_api"
            java.lang.String r4 = "bid_response"
            java.lang.String r5 = "price"
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L13a
            r7 = r18
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L13a
            java.lang.String r7 = "is_success"
            int r7 = r6.optInt(r7)     // Catch: java.lang.Throwable -> L13a
            r8 = 1
            if (r7 != r8) goto L1e
            r10 = r8
            goto L20
        L1e:
            r7 = 0
            r10 = r7
        L20:
            java.lang.String r7 = "bid_id"
            java.lang.String r13 = r6.optString(r7)     // Catch: java.lang.Throwable -> L13a
            boolean r7 = r6.has(r5)     // Catch: java.lang.Throwable -> L13a
            r14 = 0
            if (r7 == 0) goto L33
            double r11 = r6.optDouble(r5, r14)     // Catch: java.lang.Throwable -> L13a
            goto L34
        L33:
            r11 = r14
        L34:
            java.lang.String r5 = "nurl"
            java.lang.String r5 = r6.optString(r5)     // Catch: java.lang.Throwable -> L13a
            java.lang.String r7 = "lurl"
            java.lang.String r7 = r6.optString(r7)     // Catch: java.lang.Throwable -> L13a
            java.lang.String r9 = "burl"
            java.lang.String r16 = r6.optString(r9)     // Catch: java.lang.Throwable -> L13a
            java.lang.String r9 = "err_msg"
            java.lang.String r17 = r6.optString(r9)     // Catch: java.lang.Throwable -> L13a
            com.tkay.core.common.f.l r9 = new com.tkay.core.common.f.l     // Catch: java.lang.Throwable -> L13a
            r18 = r9
            r9 = r18
            r14 = r5
            r15 = r7
            r9.<init>(r10, r11, r13, r14, r15, r16, r17)     // Catch: java.lang.Throwable -> L13a
            java.lang.String r5 = "cur"
            java.lang.String r5 = r6.optString(r5)     // Catch: java.lang.Throwable -> L13a
            r7 = r18
            r7.b = r5     // Catch: java.lang.Throwable -> L13a
            java.lang.String r5 = "unit_id"
            java.lang.String r5 = r6.optString(r5)     // Catch: java.lang.Throwable -> L13a
            r7.c = r5     // Catch: java.lang.Throwable -> L13a
            java.lang.String r5 = "nw_firm_id"
            int r5 = r6.optInt(r5)     // Catch: java.lang.Throwable -> L13a
            r7.d = r5     // Catch: java.lang.Throwable -> L13a
            java.lang.String r5 = "err_code"
            int r5 = r6.optInt(r5)     // Catch: java.lang.Throwable -> L13a
            r7.a = r5     // Catch: java.lang.Throwable -> L13a
            java.lang.String r5 = "expire"
            long r9 = r6.optLong(r5)     // Catch: java.lang.Throwable -> L13a
            r7.e = r9     // Catch: java.lang.Throwable -> L13a
            java.lang.String r5 = "out_data_time"
            long r9 = r6.optLong(r5)     // Catch: java.lang.Throwable -> L13a
            r7.f = r9     // Catch: java.lang.Throwable -> L13a
            java.lang.String r5 = "is_send_winurl"
            boolean r5 = r6.optBoolean(r5)     // Catch: java.lang.Throwable -> L13a
            r7.u = r5     // Catch: java.lang.Throwable -> L13a
            java.lang.String r5 = "offer_data"
            java.lang.String r5 = r6.optString(r5)     // Catch: java.lang.Throwable -> L13a
            r7.i = r5     // Catch: java.lang.Throwable -> L13a
            java.lang.String r5 = "tp_bid_id"
            java.lang.String r5 = r6.optString(r5)     // Catch: java.lang.Throwable -> L13a
            r7.g = r5     // Catch: java.lang.Throwable -> L13a
            java.lang.String r5 = "burl_win"
            java.lang.String r5 = r6.optString(r5)     // Catch: java.lang.Throwable -> L13a
            r7.j = r5     // Catch: java.lang.Throwable -> L13a
            java.lang.String r5 = "ad_source_id"
            java.lang.String r5 = r6.optString(r5)     // Catch: java.lang.Throwable -> L13a
            r7.k = r5     // Catch: java.lang.Throwable -> L13a
            java.lang.String r5 = "cur_rate"
            r9 = 0
            double r11 = r6.optDouble(r5, r9)     // Catch: java.lang.Throwable -> L13a
            r7.l = r11     // Catch: java.lang.Throwable -> L13a
            boolean r5 = r6.has(r4)     // Catch: java.lang.Throwable -> L13a
            if (r5 == 0) goto Lc7
            java.lang.String r4 = r6.optString(r4)     // Catch: java.lang.Throwable -> L13a
            r7.m = r4     // Catch: java.lang.Throwable -> L13a
        Lc7:
            java.lang.String r4 = "ctrl"
            org.json.JSONObject r4 = r6.optJSONObject(r4)     // Catch: java.lang.Throwable -> L13a
            if (r4 == 0) goto Ld7
            java.lang.String r5 = "hb_preq_sw"
            int r4 = r4.optInt(r5)     // Catch: java.lang.Throwable -> L13a
            r7.n = r4     // Catch: java.lang.Throwable -> L13a
        Ld7:
            boolean r4 = r6.has(r3)     // Catch: java.lang.Throwable -> L13a
            if (r4 == 0) goto Le3
            double r3 = r6.optDouble(r3, r9)     // Catch: java.lang.Throwable -> L13a
            r7.o = r3     // Catch: java.lang.Throwable -> L13a
        Le3:
            java.lang.String r3 = "precision"
            java.lang.String r3 = r6.optString(r3)     // Catch: java.lang.Throwable -> L13a
            r7.p = r3     // Catch: java.lang.Throwable -> L13a
            boolean r3 = r6.has(r2)     // Catch: java.lang.Throwable -> L13a
            if (r3 == 0) goto Lf7
            double r2 = r6.optDouble(r2, r9)     // Catch: java.lang.Throwable -> L13a
            r7.q = r2     // Catch: java.lang.Throwable -> L13a
        Lf7:
            java.lang.String r2 = "req_url"
            java.lang.String r3 = ""
            java.lang.String r2 = r6.optString(r2, r3)     // Catch: java.lang.Throwable -> L13a
            r7.h = r2     // Catch: java.lang.Throwable -> L13a
            java.lang.String r2 = "bd_type"
            int r2 = r6.optInt(r2, r8)     // Catch: java.lang.Throwable -> L13a
            r7.useType = r2     // Catch: java.lang.Throwable -> L13a
            boolean r2 = r6.has(r1)     // Catch: java.lang.Throwable -> L13a
            if (r2 == 0) goto L116
            double r1 = r6.optDouble(r1, r9)     // Catch: java.lang.Throwable -> L13a
            r7.sortPrice = r1     // Catch: java.lang.Throwable -> L13a
            goto L11a
        L116:
            double r1 = r7.price     // Catch: java.lang.Throwable -> L13a
            r7.sortPrice = r1     // Catch: java.lang.Throwable -> L13a
        L11a:
            boolean r1 = r6.has(r0)     // Catch: java.lang.Throwable -> L13a
            if (r1 == 0) goto L127
            double r0 = r6.optDouble(r0, r9)     // Catch: java.lang.Throwable -> L13a
            r7.originPrice = r0     // Catch: java.lang.Throwable -> L13a
            goto L12b
        L127:
            double r0 = r7.sortPrice     // Catch: java.lang.Throwable -> L13a
            r7.originPrice = r0     // Catch: java.lang.Throwable -> L13a
        L12b:
            java.lang.String r0 = "request_id"
            java.lang.Object r0 = r6.opt(r0)     // Catch: java.lang.Throwable -> L13a
            if (r0 == 0) goto L139
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L13a
            r7.B = r0     // Catch: java.lang.Throwable -> L13a
        L139:
            return r7
        L13a:
            r0 = 0
            return r0
    }

    private java.lang.String a(double r3) {
            r2 = this;
            int r0 = r2.d
            r1 = 8
            if (r0 == r1) goto L10
            r1 = 28
            if (r0 != r1) goto Lb
            goto L10
        Lb:
            java.lang.String r3 = java.lang.String.valueOf(r3)
            return r3
        L10:
            int r3 = (int) r3
            java.lang.String r3 = java.lang.String.valueOf(r3)
            return r3
    }

    private static java.lang.String a(int r1) {
            r0 = 2
            if (r1 != r0) goto L6
            java.lang.String r1 = "102"
            goto L8
        L6:
            java.lang.String r1 = "1001"
        L8:
            return r1
    }

    private static java.lang.String a(int r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L9
            java.lang.String r1 = ""
            return r1
        L9:
            r0 = 34
            if (r1 != r0) goto L19
            com.tkay.core.api.TYAdConst$CURRENCY r1 = com.tkay.core.api.TYAdConst.CURRENCY.USD
            java.lang.String r1 = r1.toString()
            java.lang.String r0 = "${AUCTION_CURRENCY}"
            java.lang.String r2 = r2.replace(r0, r1)
        L19:
            return r2
    }

    private static java.lang.String a(java.util.Map<java.lang.String, java.lang.Object> r0, java.lang.String r1) {
            java.lang.Object r0 = r0.get(r1)
            boolean r1 = r0 instanceof java.lang.String
            if (r1 == 0) goto Ld
            java.lang.String r0 = r0.toString()
            return r0
        Ld:
            if (r0 == 0) goto L14
            java.lang.String r0 = r0.toString()
            return r0
        L14:
            java.lang.String r0 = ""
            return r0
    }

    private synchronized void a(com.tkay.core.common.f.aj r13, double r14) {
            r12 = this;
            monitor-enter(r12)
            boolean r0 = r12.u     // Catch: java.lang.Throwable -> Lad
            if (r0 == 0) goto L7
            monitor-exit(r12)
            return
        L7:
            r0 = 1
            r12.u = r0     // Catch: java.lang.Throwable -> Lad
            double r0 = r12.l     // Catch: java.lang.Throwable -> Lad
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L16
            double r0 = r12.l     // Catch: java.lang.Throwable -> Lad
            double r0 = r0 * r14
            goto L17
        L16:
            r0 = r14
        L17:
            double r4 = r12.l     // Catch: java.lang.Throwable -> Lad
            int r2 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r2 <= 0) goto L25
            double r2 = r12.getSortPrice()     // Catch: java.lang.Throwable -> Lad
            double r4 = r12.l     // Catch: java.lang.Throwable -> Lad
            double r2 = r2 * r4
            goto L29
        L25:
            double r2 = r12.getSortPrice()     // Catch: java.lang.Throwable -> Lad
        L29:
            java.lang.String r4 = r12.winNoticeUrl     // Catch: java.lang.Throwable -> Lad
            boolean r4 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> Lad
            r5 = 28
            if (r4 != 0) goto L70
            java.lang.String r4 = r12.winNoticeUrl     // Catch: java.lang.Throwable -> Lad
            java.lang.String r6 = "${AUCTION_BID_TO_WIN}"
            java.lang.String r7 = r12.a(r0)     // Catch: java.lang.Throwable -> Lad
            java.lang.String r4 = r4.replace(r6, r7)     // Catch: java.lang.Throwable -> Lad
            int r6 = r12.d     // Catch: java.lang.Throwable -> Lad
            if (r6 != r5) goto L4f
            java.lang.String r4 = r12.winNoticeUrl     // Catch: java.lang.Throwable -> Lad
            java.lang.String r6 = "${AUCTION_PRICE}"
            java.lang.String r7 = r12.a(r2)     // Catch: java.lang.Throwable -> Lad
            java.lang.String r4 = r4.replace(r6, r7)     // Catch: java.lang.Throwable -> Lad
        L4f:
            double r8 = r12.getSortPrice()     // Catch: java.lang.Throwable -> Lad
            if (r13 == 0) goto L70
            int r6 = r13.c()     // Catch: java.lang.Throwable -> Lad
            java.lang.String r7 = r13.t()     // Catch: java.lang.Throwable -> Lad
            com.tkay.core.common.h.f r4 = com.tkay.core.common.h.f.a(r4, r6, r7)     // Catch: java.lang.Throwable -> Lad
            r6 = r12
            r7 = r13
            r10 = r14
            com.tkay.core.common.f.ao r6 = r6.b(r7, r8, r10)     // Catch: java.lang.Throwable -> Lad
            r4.a(r6)     // Catch: java.lang.Throwable -> Lad
            r6 = 0
            r7 = 0
            r4.a(r6, r7)     // Catch: java.lang.Throwable -> Lad
        L70:
            com.tkay.core.api.TYBiddingNotice r4 = r12.biddingNotice     // Catch: java.lang.Throwable -> Lad
            if (r4 == 0) goto L91
            int r4 = r12.d     // Catch: java.lang.Throwable -> Lad
            if (r4 != r5) goto L7e
            com.tkay.core.api.TYBiddingNotice r0 = r12.biddingNotice     // Catch: java.lang.Throwable -> Lad
            r0.notifyBidWin(r2)     // Catch: java.lang.Throwable -> Lad
            goto L83
        L7e:
            com.tkay.core.api.TYBiddingNotice r2 = r12.biddingNotice     // Catch: java.lang.Throwable -> Lad
            r2.notifyBidWin(r0)     // Catch: java.lang.Throwable -> Lad
        L83:
            double r5 = r12.getSortPrice()     // Catch: java.lang.Throwable -> Lad
            r3 = r12
            r4 = r13
            r7 = r14
            com.tkay.core.common.f.ao r14 = r3.b(r4, r5, r7)     // Catch: java.lang.Throwable -> Lad
            com.tkay.core.common.k.c.a(r14)     // Catch: java.lang.Throwable -> Lad
        L91:
            int r14 = r13.l()     // Catch: java.lang.Throwable -> Lad
            r15 = 3
            if (r14 == r15) goto L9f
            int r13 = r13.l()     // Catch: java.lang.Throwable -> Lad
            r14 = 7
            if (r13 != r14) goto Lab
        L9f:
            boolean r13 = r12.A     // Catch: java.lang.Throwable -> Lad
            if (r13 != 0) goto Lab
            com.tkay.core.b.c.a()     // Catch: java.lang.Throwable -> Lad
            java.lang.String r13 = r12.k     // Catch: java.lang.Throwable -> Lad
            com.tkay.core.b.c.a(r13, r12)     // Catch: java.lang.Throwable -> Lad
        Lab:
            monitor-exit(r12)
            return
        Lad:
            r13 = move-exception
            monitor-exit(r12)
            throw r13
    }

    private void a(com.tkay.core.common.f.aj r1, double r2, double r4) {
            r0 = this;
            com.tkay.core.common.f.ao r1 = r0.b(r1, r2, r4)
            com.tkay.core.common.k.c.a(r1)
            return
    }

    private void a(java.lang.String r7, com.tkay.core.common.f.aj r8, double r9, double r11) {
            r6 = this;
            if (r8 != 0) goto L3
            return
        L3:
            int r0 = r8.c()
            java.lang.String r1 = r8.t()
            com.tkay.core.common.h.f r7 = com.tkay.core.common.h.f.a(r7, r0, r1)
            r0 = r6
            r1 = r8
            r2 = r9
            r4 = r11
            com.tkay.core.common.f.ao r8 = r0.b(r1, r2, r4)
            r7.a(r8)
            r8 = 0
            r9 = 0
            r7.a(r8, r9)
            return
    }

    private static int b(com.tkay.core.common.f.aj r1) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            int r1 = r1.l()
            r0 = 2
            if (r1 == r0) goto L14
            r0 = 5
            if (r1 == r0) goto L13
            r0 = 6
            if (r1 == r0) goto L13
            r0 = 1
            goto L14
        L13:
            r0 = 3
        L14:
            return r0
    }

    private com.tkay.core.common.f.ao b(com.tkay.core.common.f.aj r9, double r10, double r12) {
            r8 = this;
            if (r9 != 0) goto L4
            r9 = 0
            return r9
        L4:
            com.tkay.core.common.f.ao r7 = new com.tkay.core.common.f.ao
            int r1 = r9.c()
            java.lang.String r2 = r9.t()
            r0 = r7
            r3 = r10
            r5 = r12
            r0.<init>(r1, r2, r3, r5)
            java.lang.String r10 = r8.B
            r7.c(r10)
            int r9 = b(r9)
            r7.a(r9)
            java.lang.String r9 = r8.g
            r7.f(r9)
            java.lang.String r9 = r8.D
            r7.d(r9)
            java.lang.String r9 = r8.C
            r7.e(r9)
            java.lang.String r9 = r8.E
            r7.g(r9)
            java.lang.String r9 = r8.F
            r7.h(r9)
            java.lang.String r9 = r8.G
            r7.i(r9)
            return r7
    }

    private java.lang.String b(boolean r4, int r5) {
            r3 = this;
            r0 = 3
            if (r5 != r0) goto L6
            java.lang.String r4 = "-1"
            return r4
        L6:
            int r0 = r3.d
            r1 = 8
            r2 = 1
            if (r0 != r1) goto L15
            if (r5 != r2) goto L12
            java.lang.String r4 = "5"
            return r4
        L12:
            java.lang.String r4 = "1"
            return r4
        L15:
            r1 = 29
            if (r0 != r1) goto L21
            if (r5 != r2) goto L1e
            java.lang.String r4 = "2002"
            return r4
        L1e:
            java.lang.String r4 = "2"
            return r4
        L21:
            r1 = 34
            if (r0 != r1) goto L2a
            java.lang.String r4 = a(r5)
            return r4
        L2a:
            r5 = 59
            java.lang.String r1 = "102"
            if (r0 != r5) goto L31
            return r1
        L31:
            if (r4 == 0) goto L34
            return r1
        L34:
            java.lang.String r4 = "103"
            return r4
    }

    private void b(double r1) {
            r0 = this;
            r0.q = r1
            return
    }

    private static void c(java.lang.String r2) {
            com.tkay.core.common.h.f r2 = com.tkay.core.common.h.f.b(r2)
            r0 = 0
            r1 = 0
            r2.a(r0, r1)
            return
    }

    public final synchronized void a(com.tkay.core.common.f.aj r3) {
            r2 = this;
            monitor-enter(r2)
            double r0 = r2.q     // Catch: java.lang.Throwable -> L8
            r2.a(r3, r0)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r2)
            return
        L8:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final void a(com.tkay.core.common.f.d r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            int r0 = r2.U()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1.F = r0
            int r0 = r2.I()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1.E = r0
            java.lang.String r2 = r2.W()
            r1.G = r2
            return
    }

    public final synchronized void a(com.tkay.core.common.f.q r13, boolean r14) {
            r12 = this;
            monitor-enter(r12)
            int r0 = r13.a     // Catch: java.lang.Throwable -> L119
            com.tkay.core.common.f.aj r1 = r13.d     // Catch: java.lang.Throwable -> L119
            com.tkay.core.common.f.aj r2 = r13.c     // Catch: java.lang.Throwable -> L119
            double r3 = r13.b     // Catch: java.lang.Throwable -> L119
            com.tkay.core.common.f.d r13 = r13.e     // Catch: java.lang.Throwable -> L119
            if (r2 == 0) goto L117
            if (r1 != 0) goto L11
            goto L117
        L11:
            boolean r5 = r2.j()     // Catch: java.lang.Throwable -> L119
            int r2 = r2.c()     // Catch: java.lang.Throwable -> L119
            com.tkay.core.b.c r6 = com.tkay.core.b.c.a()     // Catch: java.lang.Throwable -> L119
            com.tkay.core.common.f.l r6 = r6.a(r1)     // Catch: java.lang.Throwable -> L119
            r7 = 3
            if (r14 == 0) goto L5f
            if (r6 == 0) goto L41
            java.lang.String r14 = r6.token     // Catch: java.lang.Throwable -> L119
            java.lang.String r6 = r12.token     // Catch: java.lang.Throwable -> L119
            boolean r14 = android.text.TextUtils.equals(r14, r6)     // Catch: java.lang.Throwable -> L119
            if (r14 == 0) goto L41
            com.tkay.core.b.c r14 = com.tkay.core.b.c.a()     // Catch: java.lang.Throwable -> L119
            java.lang.String r6 = r12.k     // Catch: java.lang.Throwable -> L119
            r14.a(r6)     // Catch: java.lang.Throwable -> L119
            com.tkay.core.b.c.a()     // Catch: java.lang.Throwable -> L119
            java.lang.String r14 = r12.k     // Catch: java.lang.Throwable -> L119
            com.tkay.core.b.c.b(r14)     // Catch: java.lang.Throwable -> L119
        L41:
            int r14 = r1.l()     // Catch: java.lang.Throwable -> L119
            if (r14 == r7) goto L4e
            int r14 = r1.l()     // Catch: java.lang.Throwable -> L119
            r6 = 7
            if (r14 != r6) goto L5f
        L4e:
            com.tkay.core.common.a.a r14 = com.tkay.core.common.a.a.a()     // Catch: java.lang.Throwable -> L119
            com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L119
            android.content.Context r6 = r6.f()     // Catch: java.lang.Throwable -> L119
            java.lang.String r8 = r12.token     // Catch: java.lang.Throwable -> L119
            r14.b(r6, r8)     // Catch: java.lang.Throwable -> L119
        L5f:
            boolean r14 = r12.u     // Catch: java.lang.Throwable -> L119
            if (r14 == 0) goto L65
            monitor-exit(r12)
            return
        L65:
            r14 = 1
            r12.u = r14     // Catch: java.lang.Throwable -> L119
            double r8 = r12.getSortPrice()     // Catch: java.lang.Throwable -> L119
            int r14 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
            if (r14 > 0) goto L7a
            double r3 = r12.getSortPrice()     // Catch: java.lang.Throwable -> L119
            r8 = 4576918229304087675(0x3f847ae147ae147b, double:0.01)
            double r3 = r3 + r8
        L7a:
            java.lang.String r14 = r12.loseNoticeUrl     // Catch: java.lang.Throwable -> L119
            java.lang.String r0 = r12.b(r5, r0)     // Catch: java.lang.Throwable -> L119
            com.tkay.core.common.k.c.a(r13, r1, r3, r0)     // Catch: java.lang.Throwable -> L119
            double r8 = r12.l     // Catch: java.lang.Throwable -> L119
            r10 = 0
            int r13 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r13 <= 0) goto L8e
            double r8 = r12.l     // Catch: java.lang.Throwable -> L119
            double r3 = r3 * r8
        L8e:
            java.lang.String r13 = "-1"
            boolean r13 = r0.equals(r13)     // Catch: java.lang.Throwable -> L119
            if (r13 != 0) goto L115
            com.tkay.core.api.TYBiddingNotice r13 = r12.biddingNotice     // Catch: java.lang.Throwable -> L119
            r1 = 8
            if (r13 == 0) goto Lba
            java.util.HashMap r13 = new java.util.HashMap     // Catch: java.lang.Throwable -> L119
            r13.<init>(r7)     // Catch: java.lang.Throwable -> L119
            int r6 = r12.d     // Catch: java.lang.Throwable -> L119
            if (r6 != r1) goto Lb2
            java.lang.String r6 = "adn_id"
            int r7 = r12.a(r5, r2)     // Catch: java.lang.Throwable -> L119
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: java.lang.Throwable -> L119
            r13.put(r6, r7)     // Catch: java.lang.Throwable -> L119
        Lb2:
            com.tkay.core.api.TYBiddingNotice r6 = r12.biddingNotice     // Catch: java.lang.Throwable -> L119
            r6.notifyBidLoss(r0, r3, r13)     // Catch: java.lang.Throwable -> L119
            r13 = 0
            r12.biddingNotice = r13     // Catch: java.lang.Throwable -> L119
        Lba:
            boolean r13 = android.text.TextUtils.isEmpty(r14)     // Catch: java.lang.Throwable -> L119
            if (r13 != 0) goto L115
            java.lang.String r13 = "${AUCTION_PRICE}"
            java.lang.String r3 = r12.a(r3)     // Catch: java.lang.Throwable -> L119
            java.lang.String r13 = r14.replace(r13, r3)     // Catch: java.lang.Throwable -> L119
            java.lang.String r14 = "${AUCTION_LOSS}"
            java.lang.String r13 = r13.replace(r14, r0)     // Catch: java.lang.Throwable -> L119
            int r14 = r12.d     // Catch: java.lang.Throwable -> L119
            if (r14 != r1) goto Le3
            java.lang.String r14 = "${AUCTION_SEAT_ID}"
            int r0 = r12.a(r5, r2)     // Catch: java.lang.Throwable -> L119
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L119
            java.lang.String r13 = r13.replace(r14, r0)     // Catch: java.lang.Throwable -> L119
            goto L101
        Le3:
            int r14 = r12.d     // Catch: java.lang.Throwable -> L119
            r0 = 29
            if (r14 != r0) goto Lf9
            java.lang.String r14 = "${AUCTION_SEAT_ID}"
            int r0 = r12.d     // Catch: java.lang.Throwable -> L119
            if (r0 != r2) goto Lf2
            java.lang.String r0 = "1"
            goto Lf4
        Lf2:
            java.lang.String r0 = "10001"
        Lf4:
            java.lang.String r13 = r13.replace(r14, r0)     // Catch: java.lang.Throwable -> L119
            goto L101
        Lf9:
            java.lang.String r14 = "${AUCTION_SEAT_ID}"
            java.lang.String r0 = ""
            java.lang.String r13 = r13.replace(r14, r0)     // Catch: java.lang.Throwable -> L119
        L101:
            int r14 = r12.d     // Catch: java.lang.Throwable -> L119
            r0 = 6
            if (r14 != r0) goto L112
            java.lang.String r14 = "${AUCTION_CURRENCY}"
            com.tkay.core.api.TYAdConst$CURRENCY r0 = com.tkay.core.api.TYAdConst.CURRENCY.USD     // Catch: java.lang.Throwable -> L119
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L119
            java.lang.String r13 = r13.replace(r14, r0)     // Catch: java.lang.Throwable -> L119
        L112:
            c(r13)     // Catch: java.lang.Throwable -> L119
        L115:
            monitor-exit(r12)
            return
        L117:
            monitor-exit(r12)
            return
        L119:
            r13 = move-exception
            monitor-exit(r12)
            throw r13
    }

    public final void a(java.util.Map<java.lang.String, java.lang.Object> r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "offer_id"
            java.lang.String r0 = a(r2, r0)
            r1.C = r0
            java.lang.String r0 = "dsp_id"
            java.lang.String r2 = a(r2, r0)
            r1.D = r2
            return
    }

    public final synchronized void a(boolean r5, double r6, boolean r8) {
            r4 = this;
            monitor-enter(r4)
            double r0 = r4.l     // Catch: java.lang.Throwable -> L5c
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto Lc
            double r0 = r4.l     // Catch: java.lang.Throwable -> L5c
            double r6 = r6 * r0
        Lc:
            if (r5 == 0) goto L2c
            java.lang.String r8 = r4.j     // Catch: java.lang.Throwable -> L5c
            boolean r0 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L5c
            if (r0 == 0) goto L18
            java.lang.String r8 = r4.displayNoticeUrl     // Catch: java.lang.Throwable -> L5c
        L18:
            boolean r0 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L5c
            if (r0 != 0) goto L4c
            java.lang.String r0 = "${AUCTION_PRICE}"
            java.lang.String r1 = r4.a(r6)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r8 = r8.replace(r0, r1)     // Catch: java.lang.Throwable -> L5c
            c(r8)     // Catch: java.lang.Throwable -> L5c
            goto L4c
        L2c:
            java.lang.String r0 = r4.displayNoticeUrl     // Catch: java.lang.Throwable -> L5c
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L5c
            if (r1 != 0) goto L4c
            r1 = 2
            java.lang.String r8 = r4.b(r8, r1)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r1 = "${AUCTION_PRICE}"
            java.lang.String r2 = r4.a(r6)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r0 = r0.replace(r1, r2)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r1 = "${AUCTION_LOSS}"
            java.lang.String r8 = r0.replace(r1, r8)     // Catch: java.lang.Throwable -> L5c
            c(r8)     // Catch: java.lang.Throwable -> L5c
        L4c:
            com.tkay.core.api.TYBiddingNotice r8 = r4.biddingNotice     // Catch: java.lang.Throwable -> L5c
            if (r8 == 0) goto L5a
            com.tkay.core.api.TYBiddingNotice r8 = r4.biddingNotice     // Catch: java.lang.Throwable -> L5c
            r8.notifyBidDisplay(r5, r6)     // Catch: java.lang.Throwable -> L5c
            if (r5 == 0) goto L5a
            r5 = 0
            r4.biddingNotice = r5     // Catch: java.lang.Throwable -> L5c
        L5a:
            monitor-exit(r4)
            return
        L5c:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public final boolean a() {
            r4 = this;
            long r0 = r4.f
            long r2 = java.lang.System.currentTimeMillis()
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public final synchronized void b() {
            r1 = this;
            monitor-enter(r1)
            r0 = 1
            r1.A = r0     // Catch: java.lang.Throwable -> L6
            monitor-exit(r1)
            return
        L6:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final void b(java.lang.String r1) {
            r0 = this;
            r0.B = r1
            return
    }

    public final java.lang.String c() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "bid_id"
            java.lang.String r2 = r4.token     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "cur"
            java.lang.String r2 = r4.b     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "origin_price"
            double r2 = r4.originPrice     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "price"
            double r2 = r4.price     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "nurl"
            java.lang.String r2 = r4.winNoticeUrl     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "lurl"
            java.lang.String r2 = r4.loseNoticeUrl     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "unit_id"
            java.lang.String r2 = r4.c     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "nw_firm_id"
            int r2 = r4.d     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "is_success"
            boolean r2 = r4.isSuccess     // Catch: java.lang.Throwable -> Le0
            if (r2 == 0) goto L45
            r2 = 1
            goto L46
        L45:
            r2 = 0
        L46:
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "err_code"
            int r2 = r4.a     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "err_msg"
            java.lang.String r2 = r4.errorMsg     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "expire"
            long r2 = r4.e     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "out_data_time"
            long r2 = r4.f     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "is_send_winurl"
            boolean r2 = r4.u     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "offer_data"
            java.lang.String r2 = r4.i     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "tp_bid_id"
            java.lang.String r2 = r4.g     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "burl"
            java.lang.String r2 = r4.displayNoticeUrl     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "ad_source_id"
            java.lang.String r2 = r4.k     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "cur_rate"
            double r2 = r4.l     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Le0
            r1.<init>()     // Catch: java.lang.Throwable -> Le0
            java.lang.String r2 = "hb_preq_sw"
            int r3 = r4.n     // Catch: java.lang.Throwable -> Le0
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r2 = "ctrl"
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = r4.m     // Catch: java.lang.Throwable -> Le0
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Le0
            if (r1 != 0) goto Laf
            java.lang.String r1 = "bid_response"
            java.lang.String r2 = r4.m     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
        Laf:
            java.lang.String r1 = "ecpm_api"
            double r2 = r4.o     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "precision"
            java.lang.String r2 = r4.p     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "second_price"
            double r2 = r4.q     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "req_url"
            java.lang.String r2 = r4.h     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "bd_type"
            int r2 = r4.useType     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "s_pty"
            double r2 = r4.sortPrice     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
            java.lang.String r1 = "request_id"
            java.lang.String r2 = r4.B     // Catch: java.lang.Throwable -> Le0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Le0
        Le0:
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public final int compareTo(com.tkay.core.common.f.l r8) {
            r7 = this;
            com.tkay.core.common.f.l r8 = (com.tkay.core.common.f.l) r8
            r0 = -1
            if (r8 != 0) goto L6
            return r0
        L6:
            double r1 = r7.sortPrice
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L1b
            com.tkay.core.b.c r1 = com.tkay.core.b.c.a()
            java.lang.String r2 = r7.g
            java.lang.String r5 = r7.k
            double r1 = r1.a(r2, r5)
            goto L1d
        L1b:
            double r1 = r7.sortPrice
        L1d:
            if (r8 == 0) goto L34
            double r5 = r8.sortPrice
            int r3 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r3 != 0) goto L32
            com.tkay.core.b.c r3 = com.tkay.core.b.c.a()
            java.lang.String r4 = r8.g
            java.lang.String r8 = r8.k
            double r3 = r3.a(r4, r8)
            goto L34
        L32:
            double r3 = r8.sortPrice
        L34:
            int r8 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r8 <= 0) goto L39
            return r0
        L39:
            r8 = 1
            return r8
    }

    public final boolean d() {
            r4 = this;
            double r0 = r4.price
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }
}
