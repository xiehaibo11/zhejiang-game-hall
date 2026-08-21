package com.tkay.expressad.videocommon.e;

public class d {
    public static final int a = 2;
    private static com.tkay.expressad.foundation.c.c ak = null;
    public static final int b = 4;
    public static final int c = 5;
    public static final int d = 6;
    public static final int e = 7;
    public static final int f = -2;
    public static final int g = 1;
    public static final int h = 0;
    public static final int i = 1;
    public static final int j = 2;
    public static final int k = 0;
    public static final int l = -1;
    public static final int m = 5;
    public static final int n = 0;
    public static final int o = 2;
    public static final int p = 2;
    public static final int q = -1;
    public static final int r = -2;
    public static final int s = -3;
    public static final int t = 1;
    public static final int u = -1;
    public static final int v = 1;
    public static final int w = 2;
    public static java.lang.String x;
    private java.util.List<com.tkay.expressad.videocommon.c.b> A;
    private long B;
    private int C;
    private int D;
    private int E;
    private int F;
    private int G;
    private int H;
    private int I;
    private double J;
    private int K;
    private int L;
    private int M;
    private int N;
    private int O;
    private int P;
    private int Q;
    private double R;
    private int S;
    private int T;
    private double U;
    private java.util.ArrayList<java.lang.Integer> V;
    private int W;
    private int X;
    private int Y;
    private int Z;
    private int aa;
    private java.lang.String ab;
    private int ac;
    private int ad;
    private int ae;
    private int af;
    private int ag;
    private int ah;
    private int ai;
    private int aj;
    private int al;
    private int am;
    private int an;
    private java.lang.String ao;
    private int ap;
    private java.lang.String aq;
    private int ar;
    private java.lang.String as;
    private int at;
    private int au;
    private int av;
    private java.lang.String y;
    private java.lang.String z;

    static {
            return
    }

    public d() {
            r8 = this;
            r8.<init>()
            r0 = -1
            r8.C = r0
            r1 = 0
            r8.D = r1
            r8.E = r1
            r2 = 1
            r8.F = r2
            r8.G = r2
            r8.H = r2
            r8.I = r2
            r3 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            r8.J = r3
            r5 = 2
            r8.K = r5
            r6 = 5
            r8.L = r6
            r8.M = r2
            r6 = 3
            r8.N = r6
            r7 = 80
            r8.O = r7
            r7 = 100
            r8.P = r7
            r8.Q = r1
            r8.R = r3
            r8.S = r0
            r8.T = r5
            r8.U = r3
            r8.W = r6
            r8.X = r2
            r8.Y = r1
            r3 = 10
            r8.Z = r3
            r3 = 60
            r8.aa = r3
            java.lang.String r4 = ""
            r8.ab = r4
            r8.ac = r1
            r5 = 70
            r8.ad = r5
            r8.ae = r1
            r8.af = r0
            r8.ag = r0
            r8.ah = r0
            r0 = 20
            r8.aj = r0
            r8.am = r1
            r8.an = r2
            r8.ao = r4
            r8.ap = r2
            r8.aq = r4
            r8.ar = r2
            java.lang.String r0 = "Virtual Item"
            r8.as = r0
            r8.at = r1
            r8.au = r2
            r8.av = r3
            return
    }

    public static java.lang.String J() {
            java.lang.String r0 = com.tkay.expressad.videocommon.e.d.x
            return r0
    }

    private java.lang.String W() {
            r1 = this;
            java.lang.String r0 = r1.ab
            return r0
    }

    private int X() {
            r1 = this;
            int r0 = r1.Z
            return r0
    }

    private int Y() {
            r1 = this;
            int r0 = r1.aa
            return r0
    }

    private java.util.ArrayList<java.lang.Integer> Z() {
            r1 = this;
            java.util.ArrayList<java.lang.Integer> r0 = r1.V
            return r0
    }

    public static com.tkay.expressad.videocommon.e.d a(org.json.JSONObject r12) {
            java.lang.String r0 = ""
            r1 = 0
            if (r12 == 0) goto L1ee
            com.tkay.expressad.videocommon.e.d r2 = new com.tkay.expressad.videocommon.e.d     // Catch: java.lang.Exception -> L1ea
            r2.<init>()     // Catch: java.lang.Exception -> L1ea
            java.lang.String r1 = "adSourceList"
            org.json.JSONArray r1 = r12.optJSONArray(r1)     // Catch: java.lang.Exception -> L1e7
            java.util.List r1 = com.tkay.expressad.videocommon.c.b.a(r1)     // Catch: java.lang.Exception -> L1e7
            r2.A = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "callbackType"
            int r1 = r12.optInt(r1)     // Catch: java.lang.Exception -> L1e7
            r2.F = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "aqn"
            r3 = 1
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L1e7
            if (r1 > 0) goto L28
            r1 = r3
        L28:
            r2.G = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "acn"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L1e7
            if (r1 >= 0) goto L33
            r1 = r3
        L33:
            r2.H = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "vcn"
            r4 = 5
            int r1 = r12.optInt(r1, r4)     // Catch: java.lang.Exception -> L1e7
            r2.I = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "cbp"
            r5 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r7 = r12.optDouble(r1, r5)     // Catch: java.lang.Exception -> L1e7
            r2.J = r7     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "ttc_type"
            r7 = 2
            int r1 = r12.optInt(r1, r7)     // Catch: java.lang.Exception -> L1e7
            r2.K = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "offset"
            int r1 = r12.optInt(r1, r4)     // Catch: java.lang.Exception -> L1e7
            r2.L = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "dlnet"
            int r1 = r12.optInt(r1, r7)     // Catch: java.lang.Exception -> L1e7
            r2.M = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "endscreen_type"
            int r1 = r12.optInt(r1, r7)     // Catch: java.lang.Exception -> L1e7
            r2.al = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "tv_start"
            r4 = 3
            int r1 = r12.optInt(r1, r4)     // Catch: java.lang.Exception -> L1e7
            r2.N = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "tv_end"
            r8 = 80
            int r1 = r12.optInt(r1, r8)     // Catch: java.lang.Exception -> L1e7
            r2.O = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "ready_rate"
            r8 = 100
            int r1 = r12.optInt(r1, r8)     // Catch: java.lang.Exception -> L1e7
            r2.P = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "current_time"
            long r8 = r12.optLong(r1)     // Catch: java.lang.Exception -> L1e7
            r2.B = r8     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "orientation"
            r8 = 0
            int r1 = r12.optInt(r1, r8)     // Catch: java.lang.Exception -> L1e7
            r2.ac = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "daily_play_cap"
            int r1 = r12.optInt(r1, r8)     // Catch: java.lang.Exception -> L1e7
            r2.ae = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "video_skip_time"
            r9 = -1
            int r1 = r12.optInt(r1, r9)     // Catch: java.lang.Exception -> L1e7
            r2.af = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "video_skip_result"
            int r1 = r12.optInt(r1, r7)     // Catch: java.lang.Exception -> L1e7
            r2.ag = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "video_interactive_type"
            int r1 = r12.optInt(r1, r9)     // Catch: java.lang.Exception -> L1e7
            r2.ah = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "close_button_delay"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L1e7
            r2.ai = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "playclosebtn_tm"
            int r1 = r12.optInt(r1, r9)     // Catch: java.lang.Exception -> L1e7
            r2.C = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "play_ctdown"
            int r1 = r12.optInt(r1, r8)     // Catch: java.lang.Exception -> L1e7
            r2.D = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "close_alert"
            int r1 = r12.optInt(r1, r8)     // Catch: java.lang.Exception -> L1e7
            r2.E = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "rdrct"
            r10 = 20
            int r1 = r12.optInt(r1, r10)     // Catch: java.lang.Exception -> L1e7
            r2.aj = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "rfpv"
            int r1 = r12.optInt(r1, r9)     // Catch: java.lang.Exception -> L1e7
            r2.S = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "vdcmp"
            double r9 = r12.optDouble(r1, r5)     // Catch: java.lang.Exception -> L1e7
            r2.R = r9     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "ccbprule"
            int r1 = r12.optInt(r1, r7)     // Catch: java.lang.Exception -> L1e7
            r2.T = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "ccbp"
            double r9 = r12.optDouble(r1, r5)     // Catch: java.lang.Exception -> L1e7
            r2.U = r9     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "load_global_timeout"
            r9 = 70
            int r1 = r12.optInt(r1, r9)     // Catch: java.lang.Exception -> L1e7
            r2.ad = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "atl_type"
            org.json.JSONArray r1 = r12.optJSONArray(r1)     // Catch: java.lang.Exception -> L1e7
            java.util.ArrayList r9 = new java.util.ArrayList     // Catch: java.lang.Exception -> L1e7
            r9.<init>()     // Catch: java.lang.Exception -> L1e7
            if (r1 == 0) goto L12e
            r10 = r8
        L11a:
            int r11 = r1.length()     // Catch: java.lang.Exception -> L141
            if (r10 >= r11) goto L13e
            int r11 = r1.getInt(r10)     // Catch: java.lang.Exception -> L141
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.Exception -> L141
            r9.add(r11)     // Catch: java.lang.Exception -> L141
            int r10 = r10 + 1
            goto L11a
        L12e:
            r1 = 4
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L141
            r9.add(r1)     // Catch: java.lang.Exception -> L141
            r1 = 6
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L141
            r9.add(r1)     // Catch: java.lang.Exception -> L141
        L13e:
            r2.V = r9     // Catch: java.lang.Exception -> L141
            goto L145
        L141:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Exception -> L1e7
        L145:
            java.lang.String r1 = "atl_dyt"
            int r1 = r12.optInt(r1, r4)     // Catch: java.lang.Exception -> L1e7
            r2.W = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "tmorl"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L1e7
            if (r1 > r7) goto L157
            if (r1 > 0) goto L158
        L157:
            r1 = r3
        L158:
            r2.X = r1     // Catch: java.lang.Exception -> L1e7
            double r9 = r2.J     // Catch: java.lang.Exception -> L1e7
            int r1 = (r9 > r5 ? 1 : (r9 == r5 ? 0 : -1))
            if (r1 != 0) goto L161
            goto L172
        L161:
            java.util.Random r1 = new java.util.Random     // Catch: java.lang.Exception -> L1e7
            r1.<init>()     // Catch: java.lang.Exception -> L1e7
            double r4 = r1.nextDouble()     // Catch: java.lang.Exception -> L1e7
            double r6 = r2.J     // Catch: java.lang.Exception -> L1e7
            int r1 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r1 <= 0) goto L172
            r1 = r3
            goto L173
        L172:
            r1 = r8
        L173:
            r2.Y = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "placementid"
            java.lang.String r1 = r12.optString(r1)     // Catch: java.lang.Exception -> L1e7
            r2.z = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "ltafemty"
            r4 = 10
            int r1 = r12.optInt(r1, r4)     // Catch: java.lang.Exception -> L1e7
            r2.Z = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "ltorwc"
            r4 = 60
            int r1 = r12.optInt(r1, r4)     // Catch: java.lang.Exception -> L1e7
            r2.aa = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "ab_id"
            java.lang.String r1 = r12.optString(r1)     // Catch: java.lang.Exception -> L1e7
            r2.ab = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "amount_max"
            int r1 = r12.optInt(r1, r8)     // Catch: java.lang.Exception -> L1e7
            r2.am = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "callback_rule"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L1e7
            r2.an = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "virtual_currency"
            java.lang.String r1 = r12.optString(r1, r0)     // Catch: java.lang.Exception -> L1e7
            r2.ao = r1     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "amount"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L1e7
            r2.i(r1)     // Catch: java.lang.Exception -> L1e7
            java.lang.String r1 = "icon"
            java.lang.String r0 = r12.optString(r1, r0)     // Catch: java.lang.Exception -> L1e7
            r2.aq = r0     // Catch: java.lang.Exception -> L1e7
            java.lang.String r0 = "currency_id"
            int r0 = r12.optInt(r0, r3)     // Catch: java.lang.Exception -> L1e7
            r2.ar = r0     // Catch: java.lang.Exception -> L1e7
            java.lang.String r0 = "name"
            java.lang.String r1 = "Virtual Item"
            java.lang.String r0 = r12.optString(r0, r1)     // Catch: java.lang.Exception -> L1e7
            r2.g(r0)     // Catch: java.lang.Exception -> L1e7
            java.lang.String r0 = "video_error_rule"
            int r0 = r12.optInt(r0, r3)     // Catch: java.lang.Exception -> L1e7
            r2.au = r0     // Catch: java.lang.Exception -> L1e7
            java.lang.String r0 = "loadtmo"
            int r12 = r12.optInt(r0, r4)     // Catch: java.lang.Exception -> L1e7
            r2.av = r12     // Catch: java.lang.Exception -> L1e7
            r1 = r2
            goto L1ee
        L1e7:
            r12 = move-exception
            r1 = r2
            goto L1eb
        L1ea:
            r12 = move-exception
        L1eb:
            r12.printStackTrace()
        L1ee:
            return r1
    }

    private void a(double r1) {
            r0 = this;
            r0.J = r1
            return
    }

    private void a(long r1) {
            r0 = this;
            r0.B = r1
            return
    }

    private int aa() {
            r1 = this;
            int r0 = r1.ae
            return r0
    }

    private int ab() {
            r1 = this;
            int r0 = r1.D
            return r0
    }

    private int ac() {
            r1 = this;
            int r0 = r1.am
            return r0
    }

    private int ad() {
            r1 = this;
            int r0 = r1.an
            return r0
    }

    private java.lang.String ae() {
            r1 = this;
            java.lang.String r0 = r1.ao
            return r0
    }

    private java.lang.String af() {
            r1 = this;
            java.lang.String r0 = r1.aq
            return r0
    }

    private int ag() {
            r1 = this;
            int r0 = r1.ar
            return r0
    }

    private int ah() {
            r1 = this;
            int r0 = r1.N
            return r0
    }

    private int ai() {
            r1 = this;
            int r0 = r1.O
            return r0
    }

    private int aj() {
            r1 = this;
            int r0 = r1.G
            return r0
    }

    private int ak() {
            r1 = this;
            int r0 = r1.I
            return r0
    }

    private double al() {
            r2 = this;
            double r0 = r2.J
            return r0
    }

    private int am() {
            r1 = this;
            int r0 = r1.K
            return r0
    }

    private int an() {
            r1 = this;
            int r0 = r1.F
            return r0
    }

    private long ao() {
            r2 = this;
            long r0 = r2.B
            return r0
    }

    private java.lang.String ap() {
            r1 = this;
            java.lang.String r0 = r1.y
            return r0
    }

    private double aq() {
            r2 = this;
            double r0 = r2.R
            return r0
    }

    private int ar() {
            r1 = this;
            int r0 = r1.W
            return r0
    }

    private java.util.Queue<java.lang.Integer> as() {
            r4 = this;
            r0 = 0
            java.util.List<com.tkay.expressad.videocommon.c.b> r1 = r4.A     // Catch: java.lang.Exception -> L33
            if (r1 == 0) goto L3f
            java.util.List<com.tkay.expressad.videocommon.c.b> r1 = r4.A     // Catch: java.lang.Exception -> L33
            int r1 = r1.size()     // Catch: java.lang.Exception -> L33
            if (r1 <= 0) goto L3f
            java.util.LinkedList r1 = new java.util.LinkedList     // Catch: java.lang.Exception -> L33
            r1.<init>()     // Catch: java.lang.Exception -> L33
            r0 = 0
        L13:
            java.util.List<com.tkay.expressad.videocommon.c.b> r2 = r4.A     // Catch: java.lang.Exception -> L31
            int r2 = r2.size()     // Catch: java.lang.Exception -> L31
            if (r0 >= r2) goto L3e
            java.util.List<com.tkay.expressad.videocommon.c.b> r2 = r4.A     // Catch: java.lang.Exception -> L31
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Exception -> L31
            com.tkay.expressad.videocommon.c.b r2 = (com.tkay.expressad.videocommon.c.b) r2     // Catch: java.lang.Exception -> L31
            int r2 = r2.a()     // Catch: java.lang.Exception -> L31
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L31
            r1.add(r2)     // Catch: java.lang.Exception -> L31
            int r0 = r0 + 1
            goto L13
        L31:
            r0 = move-exception
            goto L37
        L33:
            r1 = move-exception
            r3 = r1
            r1 = r0
            r0 = r3
        L37:
            boolean r2 = com.tkay.expressad.b.a
            if (r2 == 0) goto L3e
            r0.printStackTrace()
        L3e:
            r0 = r1
        L3f:
            return r0
    }

    private int at() {
            r1 = this;
            int r0 = r1.at
            return r0
    }

    private void b(double r1) {
            r0 = this;
            r0.R = r1
            return
    }

    private void b(int r1) {
            r0 = this;
            r0.Z = r1
            return
    }

    public static com.tkay.expressad.videocommon.e.d c(java.lang.String r12) {
            java.lang.String r0 = ""
            com.tkay.expressad.foundation.c.c r1 = com.tkay.expressad.videocommon.e.d.ak
            if (r1 != 0) goto L14
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.expressad.foundation.c.c r1 = com.tkay.expressad.foundation.c.c.a(r1)
            com.tkay.expressad.videocommon.e.d.ak = r1
        L14:
            boolean r1 = android.text.TextUtils.isEmpty(r12)
            r2 = 0
            if (r1 != 0) goto L239
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L235
            r1.<init>(r12)     // Catch: java.lang.Exception -> L235
            java.lang.String r12 = "unitSetting"
            org.json.JSONArray r12 = r1.optJSONArray(r12)     // Catch: java.lang.Exception -> L235
            if (r12 == 0) goto L234
            r3 = 0
            org.json.JSONObject r12 = r12.optJSONObject(r3)     // Catch: java.lang.Exception -> L235
            if (r12 == 0) goto L234
            java.lang.String r4 = "unitId"
            java.lang.String r4 = r12.optString(r4)     // Catch: java.lang.Exception -> L235
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L235
            if (r5 != 0) goto L234
            com.tkay.expressad.videocommon.e.d r5 = new com.tkay.expressad.videocommon.e.d     // Catch: java.lang.Exception -> L235
            r5.<init>()     // Catch: java.lang.Exception -> L235
            java.lang.String r2 = "adSourceList"
            org.json.JSONArray r2 = r12.optJSONArray(r2)     // Catch: java.lang.Exception -> L231
            java.util.List r2 = com.tkay.expressad.videocommon.c.b.a(r2)     // Catch: java.lang.Exception -> L231
            r5.y = r4     // Catch: java.lang.Exception -> L231
            r5.A = r2     // Catch: java.lang.Exception -> L231
            java.lang.String r2 = "callbackType"
            int r2 = r12.optInt(r2)     // Catch: java.lang.Exception -> L231
            r5.F = r2     // Catch: java.lang.Exception -> L231
            java.lang.String r2 = "aqn"
            r4 = 1
            int r2 = r12.optInt(r2, r4)     // Catch: java.lang.Exception -> L231
            if (r2 > 0) goto L60
            r2 = r4
        L60:
            r5.G = r2     // Catch: java.lang.Exception -> L231
            java.lang.String r2 = "acn"
            int r2 = r12.optInt(r2, r4)     // Catch: java.lang.Exception -> L231
            if (r2 >= 0) goto L6b
            r2 = r4
        L6b:
            r5.H = r2     // Catch: java.lang.Exception -> L231
            java.lang.String r2 = "vcn"
            r6 = 5
            int r2 = r12.optInt(r2, r6)     // Catch: java.lang.Exception -> L231
            r5.I = r2     // Catch: java.lang.Exception -> L231
            java.lang.String r2 = "cbp"
            r7 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r9 = r12.optDouble(r2, r7)     // Catch: java.lang.Exception -> L231
            r5.J = r9     // Catch: java.lang.Exception -> L231
            java.lang.String r2 = "ttc_type"
            r9 = 2
            int r2 = r12.optInt(r2, r9)     // Catch: java.lang.Exception -> L231
            r5.K = r2     // Catch: java.lang.Exception -> L231
            java.lang.String r2 = "offset"
            int r2 = r12.optInt(r2, r6)     // Catch: java.lang.Exception -> L231
            r5.L = r2     // Catch: java.lang.Exception -> L231
            java.lang.String r2 = "dlnet"
            int r2 = r12.optInt(r2, r4)     // Catch: java.lang.Exception -> L231
            r5.M = r2     // Catch: java.lang.Exception -> L231
            java.lang.String r2 = "endscreen_type"
            int r2 = r12.optInt(r2, r9)     // Catch: java.lang.Exception -> L231
            r5.al = r2     // Catch: java.lang.Exception -> L231
            java.lang.String r2 = "tv_start"
            r6 = 3
            int r2 = r12.optInt(r2, r6)     // Catch: java.lang.Exception -> L231
            r5.N = r2     // Catch: java.lang.Exception -> L231
            java.lang.String r2 = "tv_end"
            r10 = 80
            int r2 = r12.optInt(r2, r10)     // Catch: java.lang.Exception -> L231
            r5.O = r2     // Catch: java.lang.Exception -> L231
            java.lang.String r2 = "ready_rate"
            r10 = 100
            int r2 = r12.optInt(r2, r10)     // Catch: java.lang.Exception -> L231
            r5.P = r2     // Catch: java.lang.Exception -> L231
            java.lang.String r2 = "cd_rate"
            int r2 = r12.optInt(r2, r3)     // Catch: java.lang.Exception -> L231
            r5.Q = r2     // Catch: java.lang.Exception -> L231
            java.lang.String r2 = "current_time"
            long r1 = r1.optLong(r2)     // Catch: java.lang.Exception -> L231
            r5.B = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "orientation"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L231
            r5.ac = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "daily_play_cap"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L231
            r5.ae = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "video_skip_time"
            r2 = -1
            int r1 = r12.optInt(r1, r2)     // Catch: java.lang.Exception -> L231
            r5.af = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "video_skip_result"
            int r1 = r12.optInt(r1, r9)     // Catch: java.lang.Exception -> L231
            r5.ag = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "video_interactive_type"
            int r1 = r12.optInt(r1, r2)     // Catch: java.lang.Exception -> L231
            r5.ah = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "close_button_delay"
            int r1 = r12.optInt(r1, r4)     // Catch: java.lang.Exception -> L231
            r5.ai = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "playclosebtn_tm"
            int r1 = r12.optInt(r1, r2)     // Catch: java.lang.Exception -> L231
            r5.C = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "play_ctdown"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L231
            r5.D = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "close_alert"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L231
            r5.E = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "rdrct"
            r10 = 20
            int r1 = r12.optInt(r1, r10)     // Catch: java.lang.Exception -> L231
            r5.aj = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "load_global_timeout"
            r10 = 70
            int r1 = r12.optInt(r1, r10)     // Catch: java.lang.Exception -> L231
            r5.ad = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "rfpv"
            int r1 = r12.optInt(r1, r2)     // Catch: java.lang.Exception -> L231
            r5.S = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "vdcmp"
            double r1 = r12.optDouble(r1, r7)     // Catch: java.lang.Exception -> L231
            r5.R = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "ccbprule"
            int r1 = r12.optInt(r1, r9)     // Catch: java.lang.Exception -> L231
            r5.T = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "ccbp"
            double r1 = r12.optDouble(r1, r7)     // Catch: java.lang.Exception -> L231
            r5.U = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "atzu"
            java.lang.String r1 = r12.optString(r1)     // Catch: java.lang.Exception -> L231
            com.tkay.expressad.videocommon.e.d.x = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "atl_type"
            org.json.JSONArray r1 = r12.optJSONArray(r1)     // Catch: java.lang.Exception -> L231
            java.util.ArrayList r2 = new java.util.ArrayList     // Catch: java.lang.Exception -> L231
            r2.<init>()     // Catch: java.lang.Exception -> L231
            if (r1 == 0) goto L175
            r10 = r3
        L161:
            int r11 = r1.length()     // Catch: java.lang.Exception -> L188
            if (r10 >= r11) goto L185
            int r11 = r1.getInt(r10)     // Catch: java.lang.Exception -> L188
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.Exception -> L188
            r2.add(r11)     // Catch: java.lang.Exception -> L188
            int r10 = r10 + 1
            goto L161
        L175:
            r1 = 4
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L188
            r2.add(r1)     // Catch: java.lang.Exception -> L188
            r1 = 6
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L188
            r2.add(r1)     // Catch: java.lang.Exception -> L188
        L185:
            r5.V = r2     // Catch: java.lang.Exception -> L188
            goto L18c
        L188:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Exception -> L231
        L18c:
            java.lang.String r1 = "atl_dyt"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L231
            if (r1 <= 0) goto L195
            r6 = r1
        L195:
            r5.W = r6     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "tmorl"
            int r1 = r12.optInt(r1, r4)     // Catch: java.lang.Exception -> L231
            if (r1 > r9) goto L1a1
            if (r1 > 0) goto L1a2
        L1a1:
            r1 = r4
        L1a2:
            r5.X = r1     // Catch: java.lang.Exception -> L231
            double r1 = r5.J     // Catch: java.lang.Exception -> L231
            int r1 = (r1 > r7 ? 1 : (r1 == r7 ? 0 : -1))
            if (r1 != 0) goto L1ab
            goto L1bc
        L1ab:
            java.util.Random r1 = new java.util.Random     // Catch: java.lang.Exception -> L231
            r1.<init>()     // Catch: java.lang.Exception -> L231
            double r1 = r1.nextDouble()     // Catch: java.lang.Exception -> L231
            double r6 = r5.J     // Catch: java.lang.Exception -> L231
            int r1 = (r1 > r6 ? 1 : (r1 == r6 ? 0 : -1))
            if (r1 <= 0) goto L1bc
            r1 = r4
            goto L1bd
        L1bc:
            r1 = r3
        L1bd:
            r5.Y = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "placementid"
            java.lang.String r1 = r12.optString(r1)     // Catch: java.lang.Exception -> L231
            r5.z = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "ltafemty"
            r2 = 10
            int r1 = r12.optInt(r1, r2)     // Catch: java.lang.Exception -> L231
            r5.Z = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "ltorwc"
            r2 = 60
            int r1 = r12.optInt(r1, r2)     // Catch: java.lang.Exception -> L231
            r5.aa = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "ab_id"
            java.lang.String r1 = r12.optString(r1)     // Catch: java.lang.Exception -> L231
            r5.ab = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "amount_max"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L231
            r5.am = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "callback_rule"
            int r1 = r12.optInt(r1, r4)     // Catch: java.lang.Exception -> L231
            r5.an = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "virtual_currency"
            java.lang.String r1 = r12.optString(r1, r0)     // Catch: java.lang.Exception -> L231
            r5.ao = r1     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "amount"
            int r1 = r12.optInt(r1, r4)     // Catch: java.lang.Exception -> L231
            r5.i(r1)     // Catch: java.lang.Exception -> L231
            java.lang.String r1 = "icon"
            java.lang.String r0 = r12.optString(r1, r0)     // Catch: java.lang.Exception -> L231
            r5.aq = r0     // Catch: java.lang.Exception -> L231
            java.lang.String r0 = "currency_id"
            int r0 = r12.optInt(r0, r4)     // Catch: java.lang.Exception -> L231
            r5.ar = r0     // Catch: java.lang.Exception -> L231
            java.lang.String r0 = "name"
            java.lang.String r1 = "Virtual Item"
            java.lang.String r0 = r12.optString(r0, r1)     // Catch: java.lang.Exception -> L231
            r5.g(r0)     // Catch: java.lang.Exception -> L231
            java.lang.String r0 = "video_error_rule"
            int r0 = r12.optInt(r0, r4)     // Catch: java.lang.Exception -> L231
            r5.au = r0     // Catch: java.lang.Exception -> L231
            java.lang.String r0 = "loadtmo"
            int r12 = r12.optInt(r0, r2)     // Catch: java.lang.Exception -> L231
            r5.av = r12     // Catch: java.lang.Exception -> L231
            r2 = r5
            goto L234
        L231:
            r12 = move-exception
            r2 = r5
            goto L236
        L234:
            return r2
        L235:
            r12 = move-exception
        L236:
            r12.printStackTrace()
        L239:
            return r2
    }

    private void c(double r1) {
            r0 = this;
            r0.U = r1
            return
    }

    private void c(int r1) {
            r0 = this;
            r0.aa = r1
            return
    }

    private void d(int r1) {
            r0 = this;
            r0.Y = r1
            return
    }

    private void d(java.lang.String r1) {
            r0 = this;
            r0.ab = r1
            return
    }

    private void e(int r1) {
            r0 = this;
            r0.C = r1
            return
    }

    private void e(java.lang.String r1) {
            r0 = this;
            r0.ao = r1
            return
    }

    private void f(int r1) {
            r0 = this;
            r0.D = r1
            return
    }

    private void f(java.lang.String r1) {
            r0 = this;
            r0.aq = r1
            return
    }

    private void g(int r1) {
            r0 = this;
            r0.am = r1
            return
    }

    private void g(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lb
            java.lang.String r2 = r1.ao
            r1.as = r2
            return
        Lb:
            r1.as = r2
            return
    }

    private void h(int r1) {
            r0 = this;
            r0.an = r1
            return
    }

    private static void h(java.lang.String r0) {
            com.tkay.expressad.videocommon.e.d.x = r0
            return
    }

    private void i(int r1) {
            r0 = this;
            if (r1 > 0) goto L6
            r1 = 1
            r0.ap = r1
            return
        L6:
            r0.ap = r1
            return
    }

    private void j(int r1) {
            r0 = this;
            r0.ar = r1
            return
    }

    private void k(int r1) {
            r0 = this;
            r0.aj = r1
            return
    }

    private void l(int r1) {
            r0 = this;
            r0.K = r1
            return
    }

    private int m(int r3) {
            r2 = this;
            int r0 = r2.S
            r1 = -1
            if (r0 != r1) goto L11
            r0 = 94
            if (r3 != r0) goto Lb
            r3 = 2
            return r3
        Lb:
            r0 = 287(0x11f, float:4.02E-43)
            if (r3 != r0) goto L11
            r3 = 3
            return r3
        L11:
            int r3 = r2.S
            return r3
    }

    private void n(int r1) {
            r0 = this;
            r0.T = r1
            return
    }

    private boolean o(int r2) {
            r1 = this;
            java.util.ArrayList<java.lang.Integer> r0 = r1.V
            if (r0 == 0) goto L15
            int r0 = r0.size()
            if (r0 <= 0) goto L15
            java.util.ArrayList<java.lang.Integer> r0 = r1.V
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            boolean r2 = r0.contains(r2)
            return r2
        L15:
            r2 = 0
            return r2
    }

    private void p(int r1) {
            r0 = this;
            r0.S = r1
            return
    }

    private void q(int r1) {
            r0 = this;
            r0.at = r1
            return
    }

    private void r(int r1) {
            r0 = this;
            r0.au = r1
            return
    }

    private void s(int r1) {
            r0 = this;
            r0.av = r1
            return
    }

    public final int A() {
            r1 = this;
            int r0 = r1.H
            return r0
    }

    public final void B() {
            r1 = this;
            r0 = 1
            r1.H = r0
            return
    }

    public final void C() {
            r1 = this;
            r0 = 1
            r1.I = r0
            return
    }

    public final int D() {
            r1 = this;
            int r0 = r1.L
            return r0
    }

    public final void E() {
            r1 = this;
            r0 = 1
            r1.L = r0
            return
    }

    public final int F() {
            r1 = this;
            int r0 = r1.M
            return r0
    }

    public final void G() {
            r1 = this;
            r0 = 1
            r1.M = r0
            return
    }

    public final void H() {
            r1 = this;
            r0 = 1
            r1.F = r0
            return
    }

    public final java.util.List<com.tkay.expressad.videocommon.c.b> I() {
            r1 = this;
            java.util.List<com.tkay.expressad.videocommon.c.b> r0 = r1.A
            return r0
    }

    public final int K() {
            r1 = this;
            int r0 = r1.T
            return r0
    }

    public final double L() {
            r2 = this;
            double r0 = r2.U
            return r0
    }

    public final int M() {
            r1 = this;
            int r0 = r1.X
            return r0
    }

    public final void N() {
            r1 = this;
            r0 = 1
            r1.X = r0
            return
    }

    public final java.lang.String O() {
            r1 = this;
            java.lang.String r0 = r1.z
            return r0
    }

    public final void P() {
            r1 = this;
            r0 = 3
            r1.W = r0
            return
    }

    public final java.util.Queue<java.lang.Integer> Q() {
            r4 = this;
            r0 = 0
            java.util.List<com.tkay.expressad.videocommon.c.b> r1 = r4.A     // Catch: java.lang.Exception -> L33
            if (r1 == 0) goto L3b
            java.util.List<com.tkay.expressad.videocommon.c.b> r1 = r4.A     // Catch: java.lang.Exception -> L33
            int r1 = r1.size()     // Catch: java.lang.Exception -> L33
            if (r1 <= 0) goto L3b
            java.util.LinkedList r1 = new java.util.LinkedList     // Catch: java.lang.Exception -> L33
            r1.<init>()     // Catch: java.lang.Exception -> L33
            r0 = 0
        L13:
            java.util.List<com.tkay.expressad.videocommon.c.b> r2 = r4.A     // Catch: java.lang.Exception -> L31
            int r2 = r2.size()     // Catch: java.lang.Exception -> L31
            if (r0 >= r2) goto L3a
            java.util.List<com.tkay.expressad.videocommon.c.b> r2 = r4.A     // Catch: java.lang.Exception -> L31
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Exception -> L31
            com.tkay.expressad.videocommon.c.b r2 = (com.tkay.expressad.videocommon.c.b) r2     // Catch: java.lang.Exception -> L31
            int r2 = r2.b()     // Catch: java.lang.Exception -> L31
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L31
            r1.add(r2)     // Catch: java.lang.Exception -> L31
            int r0 = r0 + 1
            goto L13
        L31:
            r0 = move-exception
            goto L37
        L33:
            r1 = move-exception
            r3 = r1
            r1 = r0
            r0 = r3
        L37:
            r0.printStackTrace()
        L3a:
            r0 = r1
        L3b:
            return r0
    }

    public final org.json.JSONObject R() {
            r7 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "unitId"
            java.lang.String r2 = r7.y     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "callbackType"
            int r2 = r7.F     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.util.List<com.tkay.expressad.videocommon.c.b> r1 = r7.A     // Catch: java.lang.Exception -> L19b
            if (r1 == 0) goto L56
            java.util.List<com.tkay.expressad.videocommon.c.b> r1 = r7.A     // Catch: java.lang.Exception -> L19b
            int r1 = r1.size()     // Catch: java.lang.Exception -> L19b
            if (r1 <= 0) goto L56
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L19b
            r1.<init>()     // Catch: java.lang.Exception -> L19b
            java.util.List<com.tkay.expressad.videocommon.c.b> r2 = r7.A     // Catch: java.lang.Exception -> L19b
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L19b
        L2a:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L19b
            if (r3 == 0) goto L51
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L19b
            com.tkay.expressad.videocommon.c.b r3 = (com.tkay.expressad.videocommon.c.b) r3     // Catch: java.lang.Exception -> L19b
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L19b
            r4.<init>()     // Catch: java.lang.Exception -> L19b
            java.lang.String r5 = "id"
            int r6 = r3.a()     // Catch: java.lang.Exception -> L19b
            r4.put(r5, r6)     // Catch: java.lang.Exception -> L19b
            java.lang.String r5 = "timeout"
            int r3 = r3.b()     // Catch: java.lang.Exception -> L19b
            r4.put(r5, r3)     // Catch: java.lang.Exception -> L19b
            r1.put(r4)     // Catch: java.lang.Exception -> L19b
            goto L2a
        L51:
            java.lang.String r2 = "adSourceList"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L19b
        L56:
            java.lang.String r1 = "aqn"
            int r2 = r7.G     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "acn"
            int r2 = r7.H     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "vcn"
            int r2 = r7.I     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "cbp"
            double r2 = r7.J     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "ttc_type"
            int r2 = r7.K     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "offset"
            int r2 = r7.L     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "dlnet"
            int r2 = r7.M     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "tv_start"
            int r2 = r7.N     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "tv_end"
            int r2 = r7.O     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "ready_rate"
            int r2 = r7.P     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "endscreen_type"
            int r2 = r7.al     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "daily_play_cap"
            int r2 = r7.ae     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "video_skip_time"
            int r2 = r7.af     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "video_skip_result"
            int r2 = r7.ag     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "video_interactive_type"
            int r2 = r7.ah     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "orientation"
            int r2 = r7.ac     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "close_button_delay"
            int r2 = r7.ai     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "playclosebtn_tm"
            int r2 = r7.C     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "play_ctdown"
            int r2 = r7.D     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "close_alert"
            int r2 = r7.E     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "rfpv"
            int r2 = r7.S     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "vdcmp"
            double r2 = r7.R     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "ccbprule"
            int r2 = r7.T     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "ccbp"
            double r2 = r7.U     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L19b
            r1.<init>()     // Catch: java.lang.Exception -> L19b
            java.util.ArrayList<java.lang.Integer> r2 = r7.V     // Catch: java.lang.Exception -> L19b
            if (r2 == 0) goto L12a
            java.util.ArrayList<java.lang.Integer> r2 = r7.V     // Catch: java.lang.Exception -> L19b
            int r2 = r2.size()     // Catch: java.lang.Exception -> L19b
            if (r2 <= 0) goto L125
            java.util.ArrayList<java.lang.Integer> r2 = r7.V     // Catch: java.lang.Exception -> L19b
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L19b
        L115:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L19b
            if (r3 == 0) goto L125
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L19b
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Exception -> L19b
            r1.put(r3)     // Catch: java.lang.Exception -> L19b
            goto L115
        L125:
            java.lang.String r2 = "atl_type"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L19b
        L12a:
            java.lang.String r1 = "atl_dyt"
            int r2 = r7.W     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "tmorl"
            int r2 = r7.X     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "hitcbp"
            int r2 = r7.Y     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "placementid"
            java.lang.String r2 = r7.z     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "ltafemty"
            int r2 = r7.Z     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "ltorwc"
            int r2 = r7.aa     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "amount_max"
            int r2 = r7.am     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "callback_rule"
            int r2 = r7.an     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "virtual_currency"
            java.lang.String r2 = r7.ao     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "amount"
            int r2 = r7.ap     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "icon"
            java.lang.String r2 = r7.aq     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "currency_id"
            int r2 = r7.ar     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "name"
            java.lang.String r2 = r7.as     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "isDefault"
            int r2 = r7.at     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "video_error_rule"
            int r2 = r7.au     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            java.lang.String r1 = "loadtmo"
            int r2 = r7.av     // Catch: java.lang.Exception -> L19b
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L19b
            goto L19f
        L19b:
            r1 = move-exception
            r1.printStackTrace()
        L19f:
            return r0
    }

    public final int S() {
            r1 = this;
            int r0 = r1.ad
            return r0
    }

    public final void T() {
            r1 = this;
            r0 = 70
            r1.ad = r0
            return
    }

    public final int U() {
            r1 = this;
            int r0 = r1.au
            return r0
    }

    public final int V() {
            r1 = this;
            int r0 = r1.av
            return r0
    }

    public final int a() {
            r1 = this;
            int r0 = r1.Y
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.af = r1
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.y = r1
            return
    }

    public final void a(java.util.ArrayList<java.lang.Integer> r1) {
            r0 = this;
            r0.V = r1
            return
    }

    public final void a(java.util.List<com.tkay.expressad.videocommon.c.b> r1) {
            r0 = this;
            r0.A = r1
            return
    }

    public final int b() {
            r1 = this;
            int r0 = r1.ac
            return r0
    }

    public final void b(java.lang.String r1) {
            r0 = this;
            r0.z = r1
            return
    }

    public final void c() {
            r1 = this;
            r0 = 0
            r1.ac = r0
            return
    }

    public final void d() {
            r1 = this;
            r0 = 0
            r1.ae = r0
            return
    }

    public final int e() {
            r1 = this;
            int r0 = r1.af
            return r0
    }

    public final int f() {
            r1 = this;
            int r0 = r1.ag
            return r0
    }

    public final void g() {
            r1 = this;
            r0 = 2
            r1.ag = r0
            return
    }

    public final int h() {
            r1 = this;
            int r0 = r1.ah
            return r0
    }

    public final void i() {
            r1 = this;
            r0 = -1
            r1.ah = r0
            return
    }

    public final int j() {
            r1 = this;
            int r0 = r1.C
            return r0
    }

    public final int k() {
            r1 = this;
            int r0 = r1.E
            return r0
    }

    public final void l() {
            r1 = this;
            r0 = 1
            r1.E = r0
            return
    }

    public final int m() {
            r1 = this;
            int r0 = r1.ap
            return r0
    }

    public final java.lang.String n() {
            r1 = this;
            java.lang.String r0 = r1.as
            return r0
    }

    public final int o() {
            r1 = this;
            int r0 = r1.aj
            return r0
    }

    public final int p() {
            r1 = this;
            int r0 = r1.ai
            return r0
    }

    public final void q() {
            r1 = this;
            r0 = 1
            r1.ai = r0
            return
    }

    public final int r() {
            r1 = this;
            int r0 = r1.al
            return r0
    }

    public final void s() {
            r1 = this;
            r0 = 2
            r1.al = r0
            return
    }

    public final void t() {
            r1 = this;
            r0 = 3
            r1.N = r0
            return
    }

    public final void u() {
            r1 = this;
            r0 = 80
            r1.O = r0
            return
    }

    public final int v() {
            r1 = this;
            int r0 = r1.P
            return r0
    }

    public final void w() {
            r1 = this;
            r0 = 100
            r1.P = r0
            return
    }

    public final int x() {
            r1 = this;
            int r0 = r1.Q
            return r0
    }

    public final void y() {
            r1 = this;
            r0 = 0
            r1.Q = r0
            return
    }

    public final void z() {
            r1 = this;
            r0 = 1
            r1.G = r0
            return
    }
}
