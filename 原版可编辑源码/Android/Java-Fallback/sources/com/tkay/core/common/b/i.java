package com.tkay.core.common.b;

public final class i extends com.tkay.core.api.TYAdInfo {
    private java.lang.String A;
    private int B;
    private java.util.Map<java.lang.String, java.lang.Object> C;
    private com.tkay.core.api.TYBaseAdAdapter a;
    private int b;
    private java.lang.String c;
    private int d;
    private double e;
    private int f;
    private java.lang.String g;
    private java.lang.Double h;
    private java.lang.String i;
    private java.lang.String j;
    private java.lang.String k;
    private java.lang.String l;
    private java.lang.String m;
    private java.lang.String n;
    private java.lang.String o;
    private int p;
    private int q;
    private java.lang.String r;
    private java.lang.String s;
    private int t;
    private java.lang.String u;
    private java.lang.String v;
    private java.util.Map<java.lang.String, java.lang.Object> w;
    private java.util.Map<java.lang.String, java.lang.Object> x;
    private java.lang.String y;
    private int z;

    public i() {
            r4 = this;
            r4.<init>()
            r0 = -1
            r4.b = r0
            java.lang.String r1 = ""
            r4.c = r1
            r4.d = r0
            r2 = 0
            r4.e = r2
            r0 = 0
            r4.f = r0
            r4.g = r1
            java.lang.Double r2 = java.lang.Double.valueOf(r2)
            r4.h = r2
            r4.i = r1
            r4.j = r1
            r4.k = r1
            r4.l = r1
            java.lang.String r2 = "unknow"
            r4.m = r2
            java.lang.String r2 = "Network"
            r4.n = r2
            r4.o = r1
            r2 = 1
            r4.p = r2
            r4.q = r0
            r4.r = r1
            r4.s = r1
            r4.t = r0
            r4.u = r1
            r4.v = r1
            r2 = 0
            r4.w = r2
            r4.y = r1
            r4.z = r0
            r4.A = r1
            r4.B = r0
            return
    }

    public static com.tkay.core.common.b.i a(com.tkay.core.api.BaseAd r1) {
            if (r1 == 0) goto L11
            com.tkay.core.common.f.d r0 = r1.getDetail()
            com.tkay.core.common.b.i r0 = a(r0)
            java.util.Map r1 = r1.getNetworkInfoMap()
            r0.x = r1
            return r0
        L11:
            com.tkay.core.common.b.i r1 = new com.tkay.core.common.b.i
            r1.<init>()
            return r1
    }

    private static com.tkay.core.common.b.i a(com.tkay.core.common.b.i r1, com.tkay.core.common.b.n r2) {
            if (r2 == 0) goto L10
            boolean r0 = r2 instanceof com.tkay.core.api.TYBaseAdAdapter
            if (r0 == 0) goto L10
            com.tkay.core.api.TYBaseAdAdapter r2 = (com.tkay.core.api.TYBaseAdAdapter) r2
            r1.a = r2
            java.util.Map r2 = r2.getNetworkInfoMap()
            r1.x = r2
        L10:
            return r1
    }

    private static com.tkay.core.common.b.i a(com.tkay.core.common.b.i r4, com.tkay.core.common.f.d r5) {
            int r0 = r5.H()
            r4.b = r0
            java.lang.String r0 = r5.x()
            r4.c = r0
            int r0 = r5.A()
            r4.d = r0
            int r0 = r5.v()
            r4.f = r0
            double r0 = r5.f()
            r4.e = r0
            java.lang.String r0 = r5.h()
            r4.i = r0
            java.lang.String r0 = r5.l()
            r4.g = r0
            double r0 = r4.e
            r2 = 4652007308841189376(0x408f400000000000, double:1000.0)
            double r0 = r0 / r2
            java.lang.Double r0 = java.lang.Double.valueOf(r0)
            r4.h = r0
            java.lang.String r0 = r5.o()
            r4.j = r0
            java.lang.String r0 = r5.Y()
            java.lang.String r0 = com.tkay.core.common.l.g.d(r0)
            r4.l = r0
            java.lang.String r0 = r5.W()
            r4.k = r0
            java.lang.String r0 = r5.n()
            r4.m = r0
            int r0 = r5.H()
            r1 = 35
            if (r0 != r1) goto L61
            java.lang.String r0 = "Cross_Promotion"
            r4.n = r0
            goto L72
        L61:
            int r0 = r5.H()
            r1 = 66
            if (r0 != r1) goto L6e
            java.lang.String r0 = "Adx"
            r4.n = r0
            goto L72
        L6e:
            java.lang.String r0 = "Network"
            r4.n = r0
        L72:
            java.lang.String r0 = r5.k()
            r4.o = r0
            int r0 = r5.m()
            r4.p = r0
            int r0 = r5.I()
            r4.q = r0
            java.lang.String r0 = r5.C
            r4.r = r0
            java.lang.String r0 = r4.l
            java.lang.String r1 = "RewardedVideo"
            boolean r0 = android.text.TextUtils.equals(r1, r0)
            if (r0 == 0) goto Lcc
            java.util.Map r0 = r5.q()
            if (r0 == 0) goto Lb2
            java.lang.String r1 = r4.r
            boolean r1 = r0.containsKey(r1)
            if (r1 == 0) goto Lb2
            java.lang.String r1 = r4.r
            java.lang.Object r0 = r0.get(r1)
            com.tkay.core.api.TYRewardInfo r0 = (com.tkay.core.api.TYRewardInfo) r0
            if (r0 == 0) goto Lb2
            java.lang.String r1 = r0.rewardName
            r4.s = r1
            int r0 = r0.rewardNumber
            r4.t = r0
        Lb2:
            java.lang.String r0 = r4.s
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lbe
            int r0 = r4.t
            if (r0 != 0) goto Lcc
        Lbe:
            com.tkay.core.api.TYRewardInfo r0 = r5.r()
            if (r0 == 0) goto Lcc
            java.lang.String r1 = r0.rewardName
            r4.s = r1
            int r0 = r0.rewardNumber
            r4.t = r0
        Lcc:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.m()
            r4.v = r0
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r0 = r0.n()
            r4.u = r0
            java.util.Map r0 = r5.s()
            r4.w = r0
            java.lang.String r0 = r5.e()
            r4.y = r0
            int r0 = r5.M()
            r4.z = r0
            java.lang.String r0 = r5.P()
            r4.A = r0
            int r0 = r5.U()
            r4.B = r0
            java.util.Map r5 = r5.a()
            if (r5 == 0) goto L10b
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>(r5)
            r4.C = r0
        L10b:
            return r4
    }

    public static com.tkay.core.common.b.i a(com.tkay.core.common.b.n r1) {
            if (r1 == 0) goto Lf
            com.tkay.core.common.f.d r0 = r1.getTrackingInfo()
            com.tkay.core.common.b.i r0 = a(r0)
            com.tkay.core.common.b.i r1 = a(r0, r1)
            return r1
        Lf:
            com.tkay.core.common.b.i r1 = new com.tkay.core.common.b.i
            r1.<init>()
            return r1
    }

    private static com.tkay.core.common.b.i a(com.tkay.core.common.f.d r1) {
            com.tkay.core.common.b.i r0 = new com.tkay.core.common.b.i
            r0.<init>()
            if (r1 == 0) goto Lc
            com.tkay.core.common.b.i r1 = a(r0, r1)
            return r1
        Lc:
            return r0
    }

    public static com.tkay.core.common.b.i a(com.tkay.core.common.f.d r0, com.tkay.core.common.b.n r1) {
            com.tkay.core.common.b.i r0 = a(r0)
            com.tkay.core.common.b.i r0 = a(r0, r1)
            return r0
    }

    @Override
    public final int getABTestId() {
            r1 = this;
            int r0 = r1.B
            return r0
    }

    @Override
    public final java.lang.String getAdNetworkType() {
            r1 = this;
            java.lang.String r0 = r1.n
            return r0
    }

    @Override
    public final java.lang.String getAdsourceId() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    @Override
    public final int getAdsourceIndex() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    @Override
    public final java.lang.String getChannel() {
            r1 = this;
            java.lang.String r0 = r1.v
            return r0
    }

    @Override
    public final java.lang.String getCountry() {
            r1 = this;
            java.lang.String r0 = r1.j
            return r0
    }

    @Override
    public final java.lang.String getCurrency() {
            r1 = this;
            java.lang.String r0 = r1.i
            return r0
    }

    @Override
    public final java.lang.String getCustomRule() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.w
            if (r0 == 0) goto L10
            org.json.JSONObject r0 = new org.json.JSONObject
            java.util.Map<java.lang.String, java.lang.Object> r1 = r2.w
            r0.<init>(r1)
            java.lang.String r0 = r0.toString()
            return r0
        L10:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public final int getDismissType() {
            r1 = this;
            int r0 = r1.z
            return r0
    }

    @Override
    public final double getEcpm() {
            r2 = this;
            double r0 = r2.e
            return r0
    }

    @Override
    public final int getEcpmLevel() {
            r1 = this;
            int r0 = r1.p
            return r0
    }

    @Override
    public final java.lang.String getEcpmPrecision() {
            r1 = this;
            java.lang.String r0 = r1.m
            return r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.Object> getExtInfoMap() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.x
            return r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.Object> getLocalExtra() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.C
            return r0
    }

    @Override
    public final int getNetworkFirmId() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    @Override
    public final java.lang.String getNetworkPlacementId() {
            r1 = this;
            java.lang.String r0 = r1.o
            return r0
    }

    @Override
    public final java.lang.Double getPublisherRevenue() {
            r1 = this;
            java.lang.Double r0 = r1.h
            return r0
    }

    @Override
    public final java.lang.String getRewardUserCustomData() {
            r1 = this;
            com.tkay.core.api.TYBaseAdAdapter r0 = r1.a
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.getUserCustomData()
            return r0
        L9:
            java.lang.String r0 = ""
            return r0
    }

    @Override
    public final java.lang.String getScenarioId() {
            r1 = this;
            java.lang.String r0 = r1.r
            return r0
    }

    @Override
    public final java.lang.String getScenarioRewardName() {
            r1 = this;
            java.lang.String r0 = r1.s
            return r0
    }

    @Override
    public final int getScenarioRewardNumber() {
            r1 = this;
            int r0 = r1.t
            return r0
    }

    @Override
    public final int getSegmentId() {
            r1 = this;
            int r0 = r1.q
            return r0
    }

    @Override
    public final java.lang.String getShowId() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }

    @Override
    public final java.lang.String getSubChannel() {
            r1 = this;
            java.lang.String r0 = r1.u
            return r0
    }

    @Override
    public final java.lang.String getTYAdFormat() {
            r1 = this;
            java.lang.String r0 = r1.l
            return r0
    }

    @Override
    public final java.lang.String getTYPlacementId() {
            r1 = this;
            java.lang.String r0 = r1.k
            return r0
    }

    @Override
    public final java.lang.String getTpBidId() {
            r1 = this;
            java.lang.String r0 = r1.y
            return r0
    }

    @Override
    public final int isHeaderBiddingAdsource() {
            r1 = this;
            int r0 = r1.f
            return r0
    }

    public final java.lang.String toString() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "id"
            java.lang.String r2 = r4.g     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            java.lang.String r1 = "publisher_revenue"
            java.lang.Double r2 = r4.h     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            java.lang.String r1 = "currency"
            java.lang.String r2 = r4.i     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            java.lang.String r1 = "country"
            java.lang.String r2 = r4.j     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            java.lang.String r1 = "adunit_id"
            java.lang.String r2 = r4.k     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            java.lang.String r1 = "adunit_format"
            java.lang.String r2 = r4.l     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            java.lang.String r1 = "precision"
            java.lang.String r2 = r4.m     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            java.lang.String r1 = "network_type"
            java.lang.String r2 = r4.n     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            java.lang.String r1 = "network_placement_id"
            java.lang.String r2 = r4.o     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            java.lang.String r1 = "ecpm_level"
            int r2 = r4.p     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            java.lang.String r1 = "segment_id"
            int r2 = r4.q     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            java.lang.String r1 = r4.r     // Catch: java.lang.Throwable -> L144
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L144
            if (r1 != 0) goto L61
            java.lang.String r1 = "scenario_id"
            java.lang.String r2 = r4.r     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
        L61:
            java.lang.String r1 = r4.s     // Catch: java.lang.Throwable -> L144
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L144
            if (r1 != 0) goto L7b
            int r1 = r4.t     // Catch: java.lang.Throwable -> L144
            if (r1 == 0) goto L7b
            java.lang.String r1 = "scenario_reward_name"
            java.lang.String r2 = r4.s     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            java.lang.String r1 = "scenario_reward_number"
            int r2 = r4.t     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
        L7b:
            java.lang.String r1 = r4.v     // Catch: java.lang.Throwable -> L144
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L144
            if (r1 != 0) goto L8a
            java.lang.String r1 = "channel"
            java.lang.String r2 = r4.v     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
        L8a:
            java.lang.String r1 = r4.u     // Catch: java.lang.Throwable -> L144
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L144
            if (r1 != 0) goto L99
            java.lang.String r1 = "sub_channel"
            java.lang.String r2 = r4.u     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
        L99:
            java.util.Map<java.lang.String, java.lang.Object> r1 = r4.w     // Catch: java.lang.Throwable -> L144
            if (r1 == 0) goto Lb1
            java.util.Map<java.lang.String, java.lang.Object> r1 = r4.w     // Catch: java.lang.Throwable -> L144
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L144
            if (r1 <= 0) goto Lb1
            java.lang.String r1 = "custom_rule"
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L144
            java.util.Map<java.lang.String, java.lang.Object> r3 = r4.w     // Catch: java.lang.Throwable -> L144
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
        Lb1:
            java.lang.String r1 = "network_firm_id"
            int r2 = r4.b     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            java.lang.String r1 = "adsource_id"
            java.lang.String r2 = r4.c     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            java.lang.String r1 = "adsource_index"
            int r2 = r4.d     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            java.lang.String r1 = "adsource_price"
            double r2 = r4.e     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            java.lang.String r1 = "adsource_isheaderbidding"
            int r2 = r4.f     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            java.util.Map<java.lang.String, java.lang.Object> r1 = r4.x     // Catch: java.lang.Throwable -> L144
            if (r1 == 0) goto Lec
            java.util.Map<java.lang.String, java.lang.Object> r1 = r4.x     // Catch: java.lang.Throwable -> L144
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L144
            if (r1 <= 0) goto Lec
            java.lang.String r1 = "ext_info"
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L144
            java.util.Map<java.lang.String, java.lang.Object> r3 = r4.x     // Catch: java.lang.Throwable -> L144
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
        Lec:
            com.tkay.core.api.TYBaseAdAdapter r1 = r4.a     // Catch: java.lang.Throwable -> L144
            if (r1 == 0) goto Lfb
            java.lang.String r1 = "reward_custom_data"
            com.tkay.core.api.TYBaseAdAdapter r2 = r4.a     // Catch: java.lang.Throwable -> L144
            java.lang.String r2 = r2.getUserCustomData()     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
        Lfb:
            java.lang.String r1 = r4.y     // Catch: java.lang.Throwable -> L144
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L144
            if (r1 != 0) goto L10a
            java.lang.String r1 = "tp_bid_id"
            java.lang.String r2 = r4.y     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
        L10a:
            int r1 = r4.z     // Catch: java.lang.Throwable -> L144
            if (r1 == 0) goto L115
            java.lang.String r1 = "dismiss_type"
            int r2 = r4.z     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
        L115:
            java.lang.String r1 = r4.A     // Catch: java.lang.Throwable -> L144
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L144
            if (r1 != 0) goto L124
            java.lang.String r1 = "wf_id"
            java.lang.String r2 = r4.A     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
        L124:
            java.lang.String r1 = "abtest_id"
            int r2 = r4.B     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            java.util.Map<java.lang.String, java.lang.Object> r1 = r4.C     // Catch: java.lang.Throwable -> L144
            if (r1 == 0) goto L148
            java.util.Map<java.lang.String, java.lang.Object> r1 = r4.C     // Catch: java.lang.Throwable -> L144
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L144
            if (r1 <= 0) goto L148
            java.lang.String r1 = "user_load_extra_data"
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L144
            java.util.Map<java.lang.String, java.lang.Object> r3 = r4.C     // Catch: java.lang.Throwable -> L144
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L144
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> L144
            goto L148
        L144:
            r1 = move-exception
            r1.printStackTrace()
        L148:
            java.lang.String r0 = r0.toString()
            return r0
    }
}
