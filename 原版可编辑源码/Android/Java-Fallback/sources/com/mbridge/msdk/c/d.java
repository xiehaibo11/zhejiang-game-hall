package com.mbridge.msdk.c;

public final class d {
    public static java.lang.String a;
    private long A;
    private long B;
    private int C;
    private int D;
    private int E;
    private int F;
    private java.lang.String G;
    private int H;
    private int I;
    private java.lang.String J;
    private java.lang.String K;
    private int L;
    private int M;
    private int N;
    private int O;
    private int P;
    private java.lang.String Q;
    private java.lang.String R;
    private int b;
    private int c;
    private int d;
    private int e;
    private java.lang.String f;
    private java.lang.String g;
    private java.util.List<java.lang.Integer> h;
    private long i;
    private int j;
    private int k;
    private java.util.List<java.lang.Integer> l;
    private int m;
    private int n;
    private int o;
    private int p;
    private double q;
    private java.lang.String r;
    private int s;
    private int t;
    private int u;
    private int v;
    private int w;
    private long x;
    private java.lang.String y;
    private int z;

    public d() {
            r4 = this;
            r4.<init>()
            r0 = 30
            r4.e = r0
            r0 = 1
            r4.j = r0
            r1 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            r4.q = r1
            r4.t = r0
            r1 = 5000(0x1388, float:7.006E-42)
            r4.u = r1
            r1 = 60
            r4.C = r1
            java.lang.String r2 = ""
            r4.G = r2
            r3 = 10
            r4.H = r3
            r4.I = r1
            r4.J = r2
            r4.K = r2
            r4.L = r0
            r0 = 100
            r4.M = r0
            r0 = 0
            r4.N = r0
            return
    }

    public static com.mbridge.msdk.c.d b(java.lang.String r8) {
            java.lang.String r0 = ""
            r1 = 0
            boolean r2 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L1d0
            if (r2 != 0) goto L1d4
            com.mbridge.msdk.c.d r2 = new com.mbridge.msdk.c.d     // Catch: java.lang.Exception -> L1d0
            r2.<init>()     // Catch: java.lang.Exception -> L1d0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1cd
            r1.<init>(r8)     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "unitId"
            java.lang.String r8 = r1.optString(r8)     // Catch: java.lang.Exception -> L1cd
            r2.f = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "atzu"
            java.lang.String r8 = r1.optString(r8)     // Catch: java.lang.Exception -> L1cd
            com.mbridge.msdk.c.d.a = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "ab_id"
            java.lang.String r8 = r1.optString(r8)     // Catch: java.lang.Exception -> L1cd
            r2.J = r8     // Catch: java.lang.Exception -> L1cd
            java.util.HashMap<java.lang.String, java.lang.String> r3 = com.mbridge.msdk.foundation.controller.a.b     // Catch: java.lang.Exception -> L1cd
            java.lang.String r4 = r2.f     // Catch: java.lang.Exception -> L1cd
            r3.put(r4, r8)     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "adSourceList"
            org.json.JSONArray r8 = r1.optJSONArray(r8)     // Catch: java.lang.Exception -> L1cd
            r3 = 0
            if (r8 == 0) goto L5d
            int r4 = r8.length()     // Catch: java.lang.Exception -> L1cd
            if (r4 <= 0) goto L5d
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Exception -> L1cd
            r4.<init>()     // Catch: java.lang.Exception -> L1cd
            r5 = r3
        L47:
            int r6 = r8.length()     // Catch: java.lang.Exception -> L1cd
            if (r5 >= r6) goto L5b
            int r6 = r8.optInt(r5)     // Catch: java.lang.Exception -> L1cd
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Exception -> L1cd
            r4.add(r6)     // Catch: java.lang.Exception -> L1cd
            int r5 = r5 + 1
            goto L47
        L5b:
            r2.h = r4     // Catch: java.lang.Exception -> L1cd
        L5d:
            java.lang.String r8 = "ad_source_timeout"
            org.json.JSONArray r8 = r1.optJSONArray(r8)     // Catch: java.lang.Exception -> L1cd
            if (r8 == 0) goto L87
            int r4 = r8.length()     // Catch: java.lang.Exception -> L1cd
            if (r4 <= 0) goto L87
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Exception -> L1cd
            r4.<init>()     // Catch: java.lang.Exception -> L1cd
            r5 = r3
        L71:
            int r6 = r8.length()     // Catch: java.lang.Exception -> L1cd
            if (r5 >= r6) goto L85
            int r6 = r8.optInt(r5)     // Catch: java.lang.Exception -> L1cd
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Exception -> L1cd
            r4.add(r6)     // Catch: java.lang.Exception -> L1cd
            int r5 = r5 + 1
            goto L71
        L85:
            r2.l = r4     // Catch: java.lang.Exception -> L1cd
        L87:
            java.lang.String r8 = "tpqn"
            int r8 = r1.optInt(r8)     // Catch: java.lang.Exception -> L1cd
            r2.m = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "aqn"
            int r8 = r1.optInt(r8)     // Catch: java.lang.Exception -> L1cd
            r2.n = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "acn"
            int r8 = r1.optInt(r8)     // Catch: java.lang.Exception -> L1cd
            r2.o = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "wt"
            int r8 = r1.optInt(r8)     // Catch: java.lang.Exception -> L1cd
            r2.p = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "iscasf"
            r4 = 1
            int r8 = r1.optInt(r8, r4)     // Catch: java.lang.Exception -> L1cd
            r2.t = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "spmxrt"
            r5 = 5000(0x1388, float:7.006E-42)
            int r8 = r1.optInt(r8, r5)     // Catch: java.lang.Exception -> L1cd
            r2.u = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "ttc_type"
            int r8 = r1.optInt(r8)     // Catch: java.lang.Exception -> L1cd
            r2.k = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "fbPlacementId"
            java.lang.String r8 = r1.optString(r8)     // Catch: java.lang.Exception -> L1cd
            r2.g = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "current_time"
            long r5 = r1.optLong(r8)     // Catch: java.lang.Exception -> L1cd
            r2.i = r5     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "offset"
            int r8 = r1.optInt(r8)     // Catch: java.lang.Exception -> L1cd
            r2.j = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "admobUnitId"
            java.lang.String r8 = r1.optString(r8)     // Catch: java.lang.Exception -> L1cd
            r2.Q = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "myTargetSlotId"
            java.lang.String r8 = r1.optString(r8)     // Catch: java.lang.Exception -> L1cd
            r2.R = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "dlct"
            r5 = 3600(0xe10, double:1.7786E-320)
            long r5 = r1.optLong(r8, r5)     // Catch: java.lang.Exception -> L1cd
            r2.x = r5     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "autoplay"
            int r8 = r1.optInt(r8, r3)     // Catch: java.lang.Exception -> L1cd
            r2.v = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "dlnet"
            r5 = 2
            int r8 = r1.optInt(r8, r5)     // Catch: java.lang.Exception -> L1cd
            r2.w = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "no_offer"
            java.lang.String r8 = r1.optString(r8)     // Catch: java.lang.Exception -> L1cd
            r2.y = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "cb_type"
            int r8 = r1.optInt(r8)     // Catch: java.lang.Exception -> L1cd
            r2.z = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "clct"
            r6 = 86400(0x15180, double:4.26873E-319)
            long r6 = r1.optLong(r8, r6)     // Catch: java.lang.Exception -> L1cd
            r2.A = r6     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "clcq"
            r6 = 300(0x12c, double:1.48E-321)
            long r6 = r1.optLong(r8, r6)     // Catch: java.lang.Exception -> L1cd
            r2.B = r6     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "ready_rate"
            r6 = 100
            int r8 = r1.optInt(r8, r6)     // Catch: java.lang.Exception -> L1cd
            r2.M = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "cd_rate"
            int r8 = r1.optInt(r8, r3)     // Catch: java.lang.Exception -> L1cd
            r2.N = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "content"
            int r8 = r1.optInt(r8, r4)     // Catch: java.lang.Exception -> L1cd
            r2.O = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "impt"
            int r8 = r1.optInt(r8, r3)     // Catch: java.lang.Exception -> L1cd
            r2.P = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "cbp"
            r6 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r6 = r1.optDouble(r8, r6)     // Catch: java.lang.Exception -> L1cd
            r2.q = r6     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "icon_type"
            int r8 = r1.optInt(r8, r4)     // Catch: java.lang.Exception -> L1cd
            r2.s = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "no_ads_url"
            java.lang.String r8 = r1.optString(r8, r0)     // Catch: java.lang.Exception -> L1cd
            r2.r = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "playclosebtn_tm"
            r6 = -1
            int r8 = r1.optInt(r8, r6)     // Catch: java.lang.Exception -> L1cd
            r2.b = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "play_ctdown"
            int r8 = r1.optInt(r8, r3)     // Catch: java.lang.Exception -> L1cd
            r2.c = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "close_alert"
            int r8 = r1.optInt(r8, r3)     // Catch: java.lang.Exception -> L1cd
            r2.d = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "intershowlimit"
            r6 = 30
            int r8 = r1.optInt(r8, r6)     // Catch: java.lang.Exception -> L1cd
            r2.e = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "refreshFq"
            r6 = 60
            int r8 = r1.optInt(r8, r6)     // Catch: java.lang.Exception -> L1cd
            r2.C = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "closeBtn"
            int r8 = r1.optInt(r8, r3)     // Catch: java.lang.Exception -> L1cd
            r2.D = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "tmorl"
            int r8 = r1.optInt(r8, r4)     // Catch: java.lang.Exception -> L1cd
            if (r8 > r5) goto L1a7
            if (r8 > 0) goto L1a6
            goto L1a7
        L1a6:
            r4 = r8
        L1a7:
            r2.L = r4     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "placementid"
            java.lang.String r8 = r1.optString(r8, r0)     // Catch: java.lang.Exception -> L1cd
            r2.G = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "ltafemty"
            r3 = 10
            int r8 = r1.optInt(r8, r3)     // Catch: java.lang.Exception -> L1cd
            r2.H = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "ltorwc"
            int r8 = r1.optInt(r8, r6)     // Catch: java.lang.Exception -> L1cd
            r2.I = r8     // Catch: java.lang.Exception -> L1cd
            java.lang.String r8 = "vtag"
            java.lang.String r8 = r1.optString(r8, r0)     // Catch: java.lang.Exception -> L1cd
            r2.K = r8     // Catch: java.lang.Exception -> L1cd
            r1 = r2
            goto L1d4
        L1cd:
            r8 = move-exception
            r1 = r2
            goto L1d1
        L1d0:
            r8 = move-exception
        L1d1:
            r8.printStackTrace()
        L1d4:
            return r1
    }

    public static com.mbridge.msdk.c.d c(java.lang.String r1) {
            com.mbridge.msdk.c.d r1 = l()
            r0 = 0
            r1.v = r0
            return r1
    }

    public static com.mbridge.msdk.c.d d(java.lang.String r7) {
            com.mbridge.msdk.c.d r0 = new com.mbridge.msdk.c.d
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 1
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
            r1.add(r3)
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r4 = 8
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r3.add(r4)
            r3.add(r4)
            r4 = 2
            r0.k = r4
            r0.j = r2
            r0.f = r7
            r0.h = r1
            r0.l = r3
            r0.m = r2
            r7 = -2
            r0.o = r7
            r0.n = r7
            r7 = 5
            r0.p = r7
            r5 = 3600(0xe10, double:1.7786E-320)
            r0.x = r5
            r0.w = r4
            r0.v = r2
            r7 = 100
            r0.M = r7
            r7 = 0
            r0.N = r7
            r0.O = r2
            r0.P = r7
            r7 = 60
            r0.C = r7
            r1 = 10
            r0.H = r1
            r0.I = r7
            return r0
    }

    public static com.mbridge.msdk.c.d e(java.lang.String r4) {
            com.mbridge.msdk.c.d r0 = new com.mbridge.msdk.c.d
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L3f
            r1.<init>()     // Catch: java.lang.Exception -> L3f
            r2 = 1
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L3f
            r1.add(r3)     // Catch: java.lang.Exception -> L3f
            r0.h = r1     // Catch: java.lang.Exception -> L3f
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L3f
            r1.<init>()     // Catch: java.lang.Exception -> L3f
            r3 = 30
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L3f
            r1.add(r3)     // Catch: java.lang.Exception -> L3f
            r0.l = r1     // Catch: java.lang.Exception -> L3f
            r0.f = r4     // Catch: java.lang.Exception -> L3f
            r4 = 2
            r0.k = r4     // Catch: java.lang.Exception -> L3f
            r0.j = r2     // Catch: java.lang.Exception -> L3f
            r0.m = r2     // Catch: java.lang.Exception -> L3f
            r1 = -2
            r0.o = r1     // Catch: java.lang.Exception -> L3f
            r0.n = r1     // Catch: java.lang.Exception -> L3f
            r1 = 5
            r0.p = r1     // Catch: java.lang.Exception -> L3f
            r1 = 3600(0xe10, double:1.7786E-320)
            r0.x = r1     // Catch: java.lang.Exception -> L3f
            r0.w = r4     // Catch: java.lang.Exception -> L3f
            r4 = 3
            r0.v = r4     // Catch: java.lang.Exception -> L3f
            goto L43
        L3f:
            r4 = move-exception
            r4.printStackTrace()
        L43:
            return r0
    }

    public static com.mbridge.msdk.c.d f(java.lang.String r3) {
            com.mbridge.msdk.c.d r0 = new com.mbridge.msdk.c.d
            r0.<init>()
            r0.f = r3     // Catch: java.lang.Exception -> L19
            r3 = 2
            r0.k = r3     // Catch: java.lang.Exception -> L19
            r1 = 1
            r0.j = r1     // Catch: java.lang.Exception -> L19
            r0.m = r1     // Catch: java.lang.Exception -> L19
            r2 = 5
            r0.p = r2     // Catch: java.lang.Exception -> L19
            r0.k = r3     // Catch: java.lang.Exception -> L19
            r0.o = r1     // Catch: java.lang.Exception -> L19
            r0.n = r1     // Catch: java.lang.Exception -> L19
            goto L1d
        L19:
            r3 = move-exception
            r3.printStackTrace()
        L1d:
            return r0
    }

    public static com.mbridge.msdk.c.d l() {
            com.mbridge.msdk.c.d r0 = new com.mbridge.msdk.c.d
            r0.<init>()
            return r0
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.J
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.E = r1
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public final int b() {
            r1 = this;
            int r0 = r1.C
            return r0
    }

    public final void b(int r1) {
            r0 = this;
            r0.F = r1
            return
    }

    public final int c() {
            r1 = this;
            int r0 = r1.D
            return r0
    }

    public final void c(int r1) {
            r0 = this;
            r0.v = r1
            return
    }

    public final int d() {
            r1 = this;
            int r0 = r1.P
            return r0
    }

    public final double e() {
            r2 = this;
            double r0 = r2.q
            return r0
    }

    public final int f() {
            r1 = this;
            int r0 = r1.M
            return r0
    }

    public final int g() {
            r1 = this;
            int r0 = r1.N
            return r0
    }

    public final void g(java.lang.String r1) {
            r0 = this;
            r0.G = r1
            return
    }

    public final int h() {
            r1 = this;
            int r0 = r1.O
            return r0
    }

    public final long i() {
            r2 = this;
            long r0 = r2.x
            return r0
    }

    public final int j() {
            r1 = this;
            int r0 = r1.v
            return r0
    }

    public final int k() {
            r1 = this;
            int r0 = r1.w
            return r0
    }

    public final int m() {
            r1 = this;
            int r0 = r1.p
            return r0
    }

    public final int n() {
            r1 = this;
            int r0 = r1.t
            return r0
    }

    public final int o() {
            r1 = this;
            int r0 = r1.u
            return r0
    }

    public final int p() {
            r1 = this;
            int r0 = r1.n
            return r0
    }

    public final int q() {
            r1 = this;
            int r0 = r1.o
            return r0
    }

    public final java.util.List<java.lang.Integer> r() {
            r1 = this;
            java.util.List<java.lang.Integer> r0 = r1.h
            return r0
    }

    public final java.util.List<java.lang.Integer> s() {
            r1 = this;
            java.util.List<java.lang.Integer> r0 = r1.l
            return r0
    }

    public final org.json.JSONObject t() {
            r6 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.util.List<java.lang.Integer> r1 = r6.h     // Catch: java.lang.Exception -> L158
            r2 = 0
            if (r1 == 0) goto L31
            java.util.List<java.lang.Integer> r1 = r6.h     // Catch: java.lang.Exception -> L158
            int r1 = r1.size()     // Catch: java.lang.Exception -> L158
            if (r1 <= 0) goto L31
            java.util.List<java.lang.Integer> r1 = r6.h     // Catch: java.lang.Exception -> L158
            int r1 = r1.size()     // Catch: java.lang.Exception -> L158
            org.json.JSONArray r3 = new org.json.JSONArray     // Catch: java.lang.Exception -> L158
            r3.<init>()     // Catch: java.lang.Exception -> L158
            r4 = r2
        L1e:
            if (r4 >= r1) goto L2c
            java.util.List<java.lang.Integer> r5 = r6.h     // Catch: java.lang.Exception -> L158
            java.lang.Object r5 = r5.get(r4)     // Catch: java.lang.Exception -> L158
            r3.put(r5)     // Catch: java.lang.Exception -> L158
            int r4 = r4 + 1
            goto L1e
        L2c:
            java.lang.String r1 = "adSourceList"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L158
        L31:
            java.util.List<java.lang.Integer> r1 = r6.l     // Catch: java.lang.Exception -> L158
            if (r1 == 0) goto L5b
            java.util.List<java.lang.Integer> r1 = r6.l     // Catch: java.lang.Exception -> L158
            int r1 = r1.size()     // Catch: java.lang.Exception -> L158
            if (r1 <= 0) goto L5b
            java.util.List<java.lang.Integer> r1 = r6.l     // Catch: java.lang.Exception -> L158
            int r1 = r1.size()     // Catch: java.lang.Exception -> L158
            org.json.JSONArray r3 = new org.json.JSONArray     // Catch: java.lang.Exception -> L158
            r3.<init>()     // Catch: java.lang.Exception -> L158
        L48:
            if (r2 >= r1) goto L56
            java.util.List<java.lang.Integer> r4 = r6.l     // Catch: java.lang.Exception -> L158
            java.lang.Object r4 = r4.get(r2)     // Catch: java.lang.Exception -> L158
            r3.put(r4)     // Catch: java.lang.Exception -> L158
            int r2 = r2 + 1
            goto L48
        L56:
            java.lang.String r1 = "ad_source_timeout"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L158
        L5b:
            java.lang.String r1 = "tpqn"
            int r2 = r6.m     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "aqn"
            int r2 = r6.n     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "acn"
            int r2 = r6.o     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "wt"
            int r2 = r6.p     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "ttc_type"
            int r2 = r6.k     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "fbPlacementId"
            java.lang.String r2 = r6.g     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "current_time"
            long r2 = r6.i     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "offset"
            int r2 = r6.j     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "admobUnitId"
            java.lang.String r2 = r6.Q     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "myTargetSlotId"
            java.lang.String r2 = r6.R     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "dlct"
            long r2 = r6.x     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "autoplay"
            int r2 = r6.v     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "dlnet"
            int r2 = r6.w     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "no_offer"
            java.lang.String r2 = r6.y     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "cb_type"
            int r2 = r6.z     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "clct"
            long r2 = r6.A     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "clcq"
            long r2 = r6.B     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "ready_rate"
            int r2 = r6.M     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "content"
            int r2 = r6.O     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "impt"
            int r2 = r6.P     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "cbp"
            double r2 = r6.q     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "icon_type"
            int r2 = r6.s     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "no_ads_url"
            java.lang.String r2 = r6.r     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "playclosebtn_tm"
            int r2 = r6.b     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "play_ctdown"
            int r2 = r6.c     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "close_alert"
            int r2 = r6.d     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "closeBtn"
            int r2 = r6.D     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "refreshFq"
            int r2 = r6.C     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "countdown"
            int r2 = r6.F     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "allowSkip"
            int r2 = r6.E     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "tmorl"
            int r2 = r6.L     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "unitId"
            java.lang.String r2 = r6.f     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "placementid"
            java.lang.String r2 = r6.G     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "ltafemty"
            int r2 = r6.H     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "ltorwc"
            int r2 = r6.I     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            java.lang.String r1 = "vtag"
            java.lang.String r2 = r6.K     // Catch: java.lang.Exception -> L158
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L158
            goto L15c
        L158:
            r1 = move-exception
            r1.printStackTrace()
        L15c:
            return r0
    }

    public final java.lang.String toString() {
            r4 = this;
            java.util.List<java.lang.Integer> r0 = r4.h
            java.lang.String r1 = ""
            if (r0 == 0) goto L33
            int r0 = r0.size()
            if (r0 <= 0) goto L33
            java.util.List<java.lang.Integer> r0 = r4.h
            java.util.Iterator r0 = r0.iterator()
        L12:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L33
            java.lang.Object r2 = r0.next()
            java.lang.Integer r2 = (java.lang.Integer) r2
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            r3.append(r2)
            java.lang.String r1 = ","
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            goto L12
        L33:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "offset = "
            r0.append(r2)
            int r2 = r4.j
            r0.append(r2)
            java.lang.String r2 = " unitId = "
            r0.append(r2)
            java.lang.String r2 = r4.f
            r0.append(r2)
            java.lang.String r2 = " fbPlacementId = "
            r0.append(r2)
            java.lang.String r2 = r4.g
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final long u() {
            r2 = this;
            long r0 = r2.i
            return r0
    }

    public final int v() {
            r1 = this;
            int r0 = r1.j
            return r0
    }

    public final int w() {
            r1 = this;
            int r0 = r1.H
            return r0
    }

    public final int x() {
            r1 = this;
            int r0 = r1.I
            return r0
    }

    public final java.lang.String y() {
            r1 = this;
            java.lang.String r0 = r1.K
            return r0
    }
}
