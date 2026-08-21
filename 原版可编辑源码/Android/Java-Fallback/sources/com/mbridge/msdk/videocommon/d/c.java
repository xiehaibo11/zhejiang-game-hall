package com.mbridge.msdk.videocommon.d;

public final class c {
    private static com.mbridge.msdk.foundation.db.i O;
    public static java.lang.String a;
    private int A;
    private int B;
    private int C;
    private int D;
    private int E;
    private java.lang.String F;
    private int G;
    private int H;
    private int I;
    private int J;
    private int K;
    private int L;
    private int M;
    private int N;
    private int P;
    private int Q;
    private int R;
    private java.lang.String S;
    private int T;
    private java.lang.String U;
    private int V;
    private java.lang.String W;
    private int X;
    private int Y;
    private int Z;
    private java.lang.String aa;
    private java.lang.String b;
    private java.lang.String c;
    private java.util.List<com.mbridge.msdk.videocommon.b.b> d;
    private long e;
    private int f;
    private int g;
    private int h;
    private int i;
    private int j;
    private int k;
    private int l;
    private double m;
    private int n;
    private int o;
    private int p;
    private int q;
    private int r;
    private int s;
    private int t;
    private com.mbridge.msdk.videocommon.b.c u;
    private double v;
    private int w;
    private int x;
    private double y;
    private java.util.ArrayList<java.lang.Integer> z;

    static {
            return
    }

    public c() {
            r8 = this;
            r8.<init>()
            r0 = -1
            r8.f = r0
            r1 = 0
            r8.g = r1
            r8.h = r1
            r2 = 1
            r8.i = r2
            r8.j = r2
            r8.k = r2
            r8.l = r2
            r3 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            r8.m = r3
            r5 = 2
            r8.n = r5
            r6 = 5
            r8.o = r6
            r8.p = r2
            r6 = 3
            r8.q = r6
            r7 = 80
            r8.r = r7
            r7 = 100
            r8.s = r7
            r8.t = r1
            r8.v = r3
            r8.w = r0
            r8.x = r5
            r8.y = r3
            r8.A = r6
            r8.B = r2
            r8.C = r1
            r3 = 10
            r8.D = r3
            r3 = 60
            r8.E = r3
            java.lang.String r4 = ""
            r8.F = r4
            r8.G = r1
            r5 = 70
            r8.H = r5
            r8.I = r1
            r8.J = r0
            r8.K = r0
            r8.L = r0
            r0 = 20
            r8.N = r0
            r8.Q = r1
            r8.R = r2
            r8.S = r4
            r8.T = r2
            r8.U = r4
            r8.V = r2
            java.lang.String r0 = "Virtual Item"
            r8.W = r0
            r8.X = r1
            r8.Y = r2
            r8.Z = r3
            r8.aa = r4
            return
    }

    private void B(int r1) {
            r0 = this;
            if (r1 > 0) goto L6
            r1 = 1
            r0.T = r1
            goto L8
        L6:
            r0.T = r1
        L8:
            return
    }

    public static com.mbridge.msdk.videocommon.d.c a(org.json.JSONObject r12) {
            java.lang.String r0 = ""
            r1 = 0
            if (r12 == 0) goto L203
            com.mbridge.msdk.videocommon.d.c r2 = new com.mbridge.msdk.videocommon.d.c     // Catch: java.lang.Exception -> L1ff
            r2.<init>()     // Catch: java.lang.Exception -> L1ff
            java.lang.String r1 = "adSourceList"
            org.json.JSONArray r1 = r12.optJSONArray(r1)     // Catch: java.lang.Exception -> L1fc
            java.util.List r1 = com.mbridge.msdk.videocommon.b.b.a(r1)     // Catch: java.lang.Exception -> L1fc
            r2.d = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "callbackType"
            int r1 = r12.optInt(r1)     // Catch: java.lang.Exception -> L1fc
            r2.i = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "aqn"
            r3 = 1
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L1fc
            if (r1 > 0) goto L28
            r1 = r3
        L28:
            r2.j = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "acn"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L1fc
            if (r1 >= 0) goto L33
            r1 = r3
        L33:
            r2.k = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "vcn"
            r4 = 5
            int r1 = r12.optInt(r1, r4)     // Catch: java.lang.Exception -> L1fc
            r2.l = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "cbp"
            r5 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r7 = r12.optDouble(r1, r5)     // Catch: java.lang.Exception -> L1fc
            r2.m = r7     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "ttc_type"
            r7 = 2
            int r1 = r12.optInt(r1, r7)     // Catch: java.lang.Exception -> L1fc
            r2.n = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "offset"
            int r1 = r12.optInt(r1, r4)     // Catch: java.lang.Exception -> L1fc
            r2.o = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "dlnet"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L1fc
            r2.p = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "endscreen_type"
            int r1 = r12.optInt(r1, r7)     // Catch: java.lang.Exception -> L1fc
            r2.P = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "tv_start"
            r4 = 3
            int r1 = r12.optInt(r1, r4)     // Catch: java.lang.Exception -> L1fc
            r2.q = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "tv_end"
            r8 = 80
            int r1 = r12.optInt(r1, r8)     // Catch: java.lang.Exception -> L1fc
            r2.r = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "ready_rate"
            r8 = 100
            int r1 = r12.optInt(r1, r8)     // Catch: java.lang.Exception -> L1fc
            r2.s = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "current_time"
            long r8 = r12.optLong(r1)     // Catch: java.lang.Exception -> L1fc
            r2.e = r8     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "orientation"
            r8 = 0
            int r1 = r12.optInt(r1, r8)     // Catch: java.lang.Exception -> L1fc
            r2.G = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "daily_play_cap"
            int r1 = r12.optInt(r1, r8)     // Catch: java.lang.Exception -> L1fc
            r2.I = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "video_skip_time"
            r9 = -1
            int r1 = r12.optInt(r1, r9)     // Catch: java.lang.Exception -> L1fc
            r2.J = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "video_skip_result"
            int r1 = r12.optInt(r1, r7)     // Catch: java.lang.Exception -> L1fc
            r2.K = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "video_interactive_type"
            int r1 = r12.optInt(r1, r9)     // Catch: java.lang.Exception -> L1fc
            r2.L = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "close_button_delay"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L1fc
            r2.M = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "playclosebtn_tm"
            int r1 = r12.optInt(r1, r9)     // Catch: java.lang.Exception -> L1fc
            r2.f = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "play_ctdown"
            int r1 = r12.optInt(r1, r8)     // Catch: java.lang.Exception -> L1fc
            r2.g = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "close_alert"
            int r1 = r12.optInt(r1, r8)     // Catch: java.lang.Exception -> L1fc
            r2.h = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "rdrct"
            r10 = 20
            int r1 = r12.optInt(r1, r10)     // Catch: java.lang.Exception -> L1fc
            r2.N = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "rfpv"
            int r1 = r12.optInt(r1, r9)     // Catch: java.lang.Exception -> L1fc
            r2.w = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "vdcmp"
            double r9 = r12.optDouble(r1, r5)     // Catch: java.lang.Exception -> L1fc
            r2.v = r9     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "cbprule"
            org.json.JSONObject r1 = r12.optJSONObject(r1)     // Catch: java.lang.Exception -> L1fc
            com.mbridge.msdk.videocommon.b.c r1 = com.mbridge.msdk.videocommon.b.c.a(r1)     // Catch: java.lang.Exception -> L1fc
            r2.u = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "ccbprule"
            int r1 = r12.optInt(r1, r7)     // Catch: java.lang.Exception -> L1fc
            r2.x = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "ccbp"
            double r9 = r12.optDouble(r1, r5)     // Catch: java.lang.Exception -> L1fc
            r2.y = r9     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "load_global_timeout"
            r9 = 70
            int r1 = r12.optInt(r1, r9)     // Catch: java.lang.Exception -> L1fc
            r2.H = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "atl_type"
            org.json.JSONArray r1 = r12.optJSONArray(r1)     // Catch: java.lang.Exception -> L1fc
            java.util.ArrayList r9 = new java.util.ArrayList     // Catch: java.lang.Exception -> L1fc
            r9.<init>()     // Catch: java.lang.Exception -> L1fc
            if (r1 == 0) goto L13a
            r10 = r8
        L126:
            int r11 = r1.length()     // Catch: java.lang.Exception -> L14d
            if (r10 >= r11) goto L14a
            int r11 = r1.getInt(r10)     // Catch: java.lang.Exception -> L14d
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.Exception -> L14d
            r9.add(r11)     // Catch: java.lang.Exception -> L14d
            int r10 = r10 + 1
            goto L126
        L13a:
            r1 = 4
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L14d
            r9.add(r1)     // Catch: java.lang.Exception -> L14d
            r1 = 6
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> L14d
            r9.add(r1)     // Catch: java.lang.Exception -> L14d
        L14a:
            r2.z = r9     // Catch: java.lang.Exception -> L14d
            goto L151
        L14d:
            r1 = move-exception
            r1.printStackTrace()     // Catch: java.lang.Exception -> L1fc
        L151:
            java.lang.String r1 = "atl_dyt"
            int r1 = r12.optInt(r1, r4)     // Catch: java.lang.Exception -> L1fc
            r2.A = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "tmorl"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L1fc
            if (r1 > r7) goto L163
            if (r1 > 0) goto L164
        L163:
            r1 = r3
        L164:
            r2.B = r1     // Catch: java.lang.Exception -> L1fc
            double r9 = r2.m     // Catch: java.lang.Exception -> L1fc
            int r1 = (r9 > r5 ? 1 : (r9 == r5 ? 0 : -1))
            if (r1 != 0) goto L16d
            goto L17e
        L16d:
            java.util.Random r1 = new java.util.Random     // Catch: java.lang.Exception -> L1fc
            r1.<init>()     // Catch: java.lang.Exception -> L1fc
            double r4 = r1.nextDouble()     // Catch: java.lang.Exception -> L1fc
            double r6 = r2.m     // Catch: java.lang.Exception -> L1fc
            int r1 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r1 <= 0) goto L17e
            r1 = r3
            goto L17f
        L17e:
            r1 = r8
        L17f:
            r2.C = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "placementid"
            java.lang.String r1 = r12.optString(r1)     // Catch: java.lang.Exception -> L1fc
            r2.c = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "ltafemty"
            r4 = 10
            int r1 = r12.optInt(r1, r4)     // Catch: java.lang.Exception -> L1fc
            r2.D = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "ltorwc"
            r4 = 60
            int r1 = r12.optInt(r1, r4)     // Catch: java.lang.Exception -> L1fc
            r2.E = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "ab_id"
            java.lang.String r1 = r12.optString(r1)     // Catch: java.lang.Exception -> L1fc
            r2.d(r1)     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "amount_max"
            int r1 = r12.optInt(r1, r8)     // Catch: java.lang.Exception -> L1fc
            r2.Q = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "callback_rule"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L1fc
            r2.R = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "virtual_currency"
            java.lang.String r1 = r12.optString(r1, r0)     // Catch: java.lang.Exception -> L1fc
            r2.S = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "amount"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L1fc
            r2.B(r1)     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "icon"
            java.lang.String r1 = r12.optString(r1, r0)     // Catch: java.lang.Exception -> L1fc
            r2.U = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "currency_id"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L1fc
            r2.V = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "name"
            java.lang.String r5 = "Virtual Item"
            java.lang.String r1 = r12.optString(r1, r5)     // Catch: java.lang.Exception -> L1fc
            r2.e(r1)     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "video_error_rule"
            int r1 = r12.optInt(r1, r3)     // Catch: java.lang.Exception -> L1fc
            r2.Y = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "loadtmo"
            int r1 = r12.optInt(r1, r4)     // Catch: java.lang.Exception -> L1fc
            r2.Z = r1     // Catch: java.lang.Exception -> L1fc
            java.lang.String r1 = "vtag"
            java.lang.String r12 = r12.optString(r1, r0)     // Catch: java.lang.Exception -> L1fc
            r2.aa = r12     // Catch: java.lang.Exception -> L1fc
            r1 = r2
            goto L203
        L1fc:
            r12 = move-exception
            r1 = r2
            goto L200
        L1ff:
            r12 = move-exception
        L200:
            r12.printStackTrace()
        L203:
            return r1
    }

    public static com.mbridge.msdk.videocommon.d.c c(java.lang.String r12) {
            java.lang.String r0 = ""
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.videocommon.d.c.O
            if (r1 != 0) goto L14
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.foundation.db.i.a(r1)
            com.mbridge.msdk.videocommon.d.c.O = r1
        L14:
            boolean r1 = android.text.TextUtils.isEmpty(r12)
            r2 = 0
            if (r1 != 0) goto L24e
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L24a
            r1.<init>(r12)     // Catch: java.lang.Exception -> L24a
            java.lang.String r12 = "vtag"
            java.lang.String r12 = r1.optString(r12, r0)     // Catch: java.lang.Exception -> L24a
            java.lang.String r3 = "unitSetting"
            org.json.JSONArray r3 = r1.optJSONArray(r3)     // Catch: java.lang.Exception -> L24a
            if (r3 == 0) goto L249
            r4 = 0
            org.json.JSONObject r3 = r3.optJSONObject(r4)     // Catch: java.lang.Exception -> L24a
            if (r3 == 0) goto L249
            java.lang.String r5 = "unitId"
            java.lang.String r5 = r3.optString(r5)     // Catch: java.lang.Exception -> L24a
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L24a
            if (r6 != 0) goto L249
            com.mbridge.msdk.videocommon.d.c r6 = new com.mbridge.msdk.videocommon.d.c     // Catch: java.lang.Exception -> L24a
            r6.<init>()     // Catch: java.lang.Exception -> L24a
            r6.aa = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "adSourceList"
            org.json.JSONArray r12 = r3.optJSONArray(r12)     // Catch: java.lang.Exception -> L246
            java.util.List r12 = com.mbridge.msdk.videocommon.b.b.a(r12)     // Catch: java.lang.Exception -> L246
            r6.b = r5     // Catch: java.lang.Exception -> L246
            r6.d = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "callbackType"
            int r12 = r3.optInt(r12)     // Catch: java.lang.Exception -> L246
            r6.i = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "aqn"
            r2 = 1
            int r12 = r3.optInt(r12, r2)     // Catch: java.lang.Exception -> L246
            if (r12 > 0) goto L68
            r12 = r2
        L68:
            r6.j = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "acn"
            int r12 = r3.optInt(r12, r2)     // Catch: java.lang.Exception -> L246
            if (r12 >= 0) goto L73
            r12 = r2
        L73:
            r6.k = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "vcn"
            r5 = 5
            int r12 = r3.optInt(r12, r5)     // Catch: java.lang.Exception -> L246
            r6.l = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "cbp"
            r7 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            double r9 = r3.optDouble(r12, r7)     // Catch: java.lang.Exception -> L246
            r6.m = r9     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "ttc_type"
            r9 = 2
            int r12 = r3.optInt(r12, r9)     // Catch: java.lang.Exception -> L246
            r6.n = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "offset"
            int r12 = r3.optInt(r12, r5)     // Catch: java.lang.Exception -> L246
            r6.o = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "dlnet"
            int r12 = r3.optInt(r12, r2)     // Catch: java.lang.Exception -> L246
            r6.p = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "endscreen_type"
            int r12 = r3.optInt(r12, r9)     // Catch: java.lang.Exception -> L246
            r6.P = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "tv_start"
            r5 = 3
            int r12 = r3.optInt(r12, r5)     // Catch: java.lang.Exception -> L246
            r6.q = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "tv_end"
            r10 = 80
            int r12 = r3.optInt(r12, r10)     // Catch: java.lang.Exception -> L246
            r6.r = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "ready_rate"
            r10 = 100
            int r12 = r3.optInt(r12, r10)     // Catch: java.lang.Exception -> L246
            r6.s = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "cd_rate"
            int r12 = r3.optInt(r12, r4)     // Catch: java.lang.Exception -> L246
            r6.t = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "current_time"
            long r10 = r1.optLong(r12)     // Catch: java.lang.Exception -> L246
            r6.e = r10     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "orientation"
            int r12 = r3.optInt(r12, r4)     // Catch: java.lang.Exception -> L246
            r6.G = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "daily_play_cap"
            int r12 = r3.optInt(r12, r4)     // Catch: java.lang.Exception -> L246
            r6.I = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "video_skip_time"
            r1 = -1
            int r12 = r3.optInt(r12, r1)     // Catch: java.lang.Exception -> L246
            r6.J = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "video_skip_result"
            int r12 = r3.optInt(r12, r9)     // Catch: java.lang.Exception -> L246
            r6.K = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "video_interactive_type"
            int r12 = r3.optInt(r12, r1)     // Catch: java.lang.Exception -> L246
            r6.L = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "close_button_delay"
            int r12 = r3.optInt(r12, r2)     // Catch: java.lang.Exception -> L246
            r6.M = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "playclosebtn_tm"
            int r12 = r3.optInt(r12, r1)     // Catch: java.lang.Exception -> L246
            r6.f = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "play_ctdown"
            int r12 = r3.optInt(r12, r4)     // Catch: java.lang.Exception -> L246
            r6.g = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "close_alert"
            int r12 = r3.optInt(r12, r4)     // Catch: java.lang.Exception -> L246
            r6.h = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "rdrct"
            r10 = 20
            int r12 = r3.optInt(r12, r10)     // Catch: java.lang.Exception -> L246
            r6.N = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "load_global_timeout"
            r10 = 70
            int r12 = r3.optInt(r12, r10)     // Catch: java.lang.Exception -> L246
            r6.H = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "rfpv"
            int r12 = r3.optInt(r12, r1)     // Catch: java.lang.Exception -> L246
            r6.w = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "vdcmp"
            double r10 = r3.optDouble(r12, r7)     // Catch: java.lang.Exception -> L246
            r6.v = r10     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "cbprule"
            org.json.JSONObject r12 = r3.optJSONObject(r12)     // Catch: java.lang.Exception -> L246
            com.mbridge.msdk.videocommon.b.c r12 = com.mbridge.msdk.videocommon.b.c.a(r12)     // Catch: java.lang.Exception -> L246
            r6.u = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "ccbprule"
            int r12 = r3.optInt(r12, r9)     // Catch: java.lang.Exception -> L246
            r6.x = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "ccbp"
            double r10 = r3.optDouble(r12, r7)     // Catch: java.lang.Exception -> L246
            r6.y = r10     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "atzu"
            java.lang.String r12 = r3.optString(r12)     // Catch: java.lang.Exception -> L246
            com.mbridge.msdk.videocommon.d.c.a = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "atl_type"
            org.json.JSONArray r12 = r3.optJSONArray(r12)     // Catch: java.lang.Exception -> L246
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L246
            r1.<init>()     // Catch: java.lang.Exception -> L246
            if (r12 == 0) goto L189
            r10 = r4
        L175:
            int r11 = r12.length()     // Catch: java.lang.Exception -> L19c
            if (r10 >= r11) goto L199
            int r11 = r12.getInt(r10)     // Catch: java.lang.Exception -> L19c
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.Exception -> L19c
            r1.add(r11)     // Catch: java.lang.Exception -> L19c
            int r10 = r10 + 1
            goto L175
        L189:
            r12 = 4
            java.lang.Integer r12 = java.lang.Integer.valueOf(r12)     // Catch: java.lang.Exception -> L19c
            r1.add(r12)     // Catch: java.lang.Exception -> L19c
            r12 = 6
            java.lang.Integer r12 = java.lang.Integer.valueOf(r12)     // Catch: java.lang.Exception -> L19c
            r1.add(r12)     // Catch: java.lang.Exception -> L19c
        L199:
            r6.z = r1     // Catch: java.lang.Exception -> L19c
            goto L1a0
        L19c:
            r12 = move-exception
            r12.printStackTrace()     // Catch: java.lang.Exception -> L246
        L1a0:
            java.lang.String r12 = "atl_dyt"
            int r12 = r3.optInt(r12, r4)     // Catch: java.lang.Exception -> L246
            if (r12 <= 0) goto L1a9
            r5 = r12
        L1a9:
            r6.A = r5     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "tmorl"
            int r12 = r3.optInt(r12, r2)     // Catch: java.lang.Exception -> L246
            if (r12 > r9) goto L1b5
            if (r12 > 0) goto L1b6
        L1b5:
            r12 = r2
        L1b6:
            r6.B = r12     // Catch: java.lang.Exception -> L246
            double r9 = r6.m     // Catch: java.lang.Exception -> L246
            int r12 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r12 != 0) goto L1bf
            goto L1d0
        L1bf:
            java.util.Random r12 = new java.util.Random     // Catch: java.lang.Exception -> L246
            r12.<init>()     // Catch: java.lang.Exception -> L246
            double r7 = r12.nextDouble()     // Catch: java.lang.Exception -> L246
            double r9 = r6.m     // Catch: java.lang.Exception -> L246
            int r12 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r12 <= 0) goto L1d0
            r12 = r2
            goto L1d1
        L1d0:
            r12 = r4
        L1d1:
            r6.C = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "placementid"
            java.lang.String r12 = r3.optString(r12)     // Catch: java.lang.Exception -> L246
            r6.c = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "ltafemty"
            r1 = 10
            int r12 = r3.optInt(r12, r1)     // Catch: java.lang.Exception -> L246
            r6.D = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "ltorwc"
            r1 = 60
            int r12 = r3.optInt(r12, r1)     // Catch: java.lang.Exception -> L246
            r6.E = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "ab_id"
            java.lang.String r12 = r3.optString(r12)     // Catch: java.lang.Exception -> L246
            r6.d(r12)     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "amount_max"
            int r12 = r3.optInt(r12, r4)     // Catch: java.lang.Exception -> L246
            r6.Q = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "callback_rule"
            int r12 = r3.optInt(r12, r2)     // Catch: java.lang.Exception -> L246
            r6.R = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "virtual_currency"
            java.lang.String r12 = r3.optString(r12, r0)     // Catch: java.lang.Exception -> L246
            r6.S = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "amount"
            int r12 = r3.optInt(r12, r2)     // Catch: java.lang.Exception -> L246
            r6.B(r12)     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "icon"
            java.lang.String r12 = r3.optString(r12, r0)     // Catch: java.lang.Exception -> L246
            r6.U = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "currency_id"
            int r12 = r3.optInt(r12, r2)     // Catch: java.lang.Exception -> L246
            r6.V = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "name"
            java.lang.String r0 = "Virtual Item"
            java.lang.String r12 = r3.optString(r12, r0)     // Catch: java.lang.Exception -> L246
            r6.e(r12)     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "video_error_rule"
            int r12 = r3.optInt(r12, r2)     // Catch: java.lang.Exception -> L246
            r6.Y = r12     // Catch: java.lang.Exception -> L246
            java.lang.String r12 = "loadtmo"
            int r12 = r3.optInt(r12, r1)     // Catch: java.lang.Exception -> L246
            r6.Z = r12     // Catch: java.lang.Exception -> L246
            r2 = r6
            goto L249
        L246:
            r12 = move-exception
            r2 = r6
            goto L24b
        L249:
            return r2
        L24a:
            r12 = move-exception
        L24b:
            r12.printStackTrace()
        L24e:
            return r2
    }

    private void d(java.lang.String r3) {
            r2 = this;
            r2.F = r3
            java.util.HashMap<java.lang.String, java.lang.String> r0 = com.mbridge.msdk.foundation.controller.a.b
            java.lang.String r1 = r2.b
            r0.put(r1, r3)
            return
    }

    private void e(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Lb
            java.lang.String r2 = r1.S
            r1.W = r2
            goto Ld
        Lb:
            r1.W = r2
        Ld:
            return
    }

    public final int A() {
            r1 = this;
            int r0 = r1.x
            return r0
    }

    public final void A(int r1) {
            r0 = this;
            r0.Z = r1
            return
    }

    public final double B() {
            r2 = this;
            double r0 = r2.y
            return r0
    }

    public final int C() {
            r1 = this;
            int r0 = r1.B
            return r0
    }

    public final java.lang.String D() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public final int E() {
            r1 = this;
            int r0 = r1.A
            return r0
    }

    public final java.util.Queue<java.lang.Integer> F() {
            r4 = this;
            r0 = 0
            java.util.List<com.mbridge.msdk.videocommon.b.b> r1 = r4.d     // Catch: java.lang.Exception -> L33
            if (r1 == 0) goto L3b
            java.util.List<com.mbridge.msdk.videocommon.b.b> r1 = r4.d     // Catch: java.lang.Exception -> L33
            int r1 = r1.size()     // Catch: java.lang.Exception -> L33
            if (r1 <= 0) goto L3b
            java.util.LinkedList r1 = new java.util.LinkedList     // Catch: java.lang.Exception -> L33
            r1.<init>()     // Catch: java.lang.Exception -> L33
            r0 = 0
        L13:
            java.util.List<com.mbridge.msdk.videocommon.b.b> r2 = r4.d     // Catch: java.lang.Exception -> L31
            int r2 = r2.size()     // Catch: java.lang.Exception -> L31
            if (r0 >= r2) goto L3a
            java.util.List<com.mbridge.msdk.videocommon.b.b> r2 = r4.d     // Catch: java.lang.Exception -> L31
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Exception -> L31
            com.mbridge.msdk.videocommon.b.b r2 = (com.mbridge.msdk.videocommon.b.b) r2     // Catch: java.lang.Exception -> L31
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

    public final org.json.JSONObject G() {
            r7 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "unitId"
            java.lang.String r2 = r7.b     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "callbackType"
            int r2 = r7.i     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.util.List<com.mbridge.msdk.videocommon.b.b> r1 = r7.d     // Catch: java.lang.Exception -> L1df
            if (r1 == 0) goto L56
            java.util.List<com.mbridge.msdk.videocommon.b.b> r1 = r7.d     // Catch: java.lang.Exception -> L1df
            int r1 = r1.size()     // Catch: java.lang.Exception -> L1df
            if (r1 <= 0) goto L56
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L1df
            r1.<init>()     // Catch: java.lang.Exception -> L1df
            java.util.List<com.mbridge.msdk.videocommon.b.b> r2 = r7.d     // Catch: java.lang.Exception -> L1df
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L1df
        L2a:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L1df
            if (r3 == 0) goto L51
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L1df
            com.mbridge.msdk.videocommon.b.b r3 = (com.mbridge.msdk.videocommon.b.b) r3     // Catch: java.lang.Exception -> L1df
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1df
            r4.<init>()     // Catch: java.lang.Exception -> L1df
            java.lang.String r5 = "id"
            int r6 = r3.a()     // Catch: java.lang.Exception -> L1df
            r4.put(r5, r6)     // Catch: java.lang.Exception -> L1df
            java.lang.String r5 = "timeout"
            int r3 = r3.b()     // Catch: java.lang.Exception -> L1df
            r4.put(r5, r3)     // Catch: java.lang.Exception -> L1df
            r1.put(r4)     // Catch: java.lang.Exception -> L1df
            goto L2a
        L51:
            java.lang.String r2 = "adSourceList"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L1df
        L56:
            java.lang.String r1 = "aqn"
            int r2 = r7.j     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "acn"
            int r2 = r7.k     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "vcn"
            int r2 = r7.l     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "cbp"
            double r2 = r7.m     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "ttc_type"
            int r2 = r7.n     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "offset"
            int r2 = r7.o     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "dlnet"
            int r2 = r7.p     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "tv_start"
            int r2 = r7.q     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "tv_end"
            int r2 = r7.r     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "ready_rate"
            int r2 = r7.s     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "endscreen_type"
            int r2 = r7.P     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "daily_play_cap"
            int r2 = r7.I     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "video_skip_time"
            int r2 = r7.J     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "video_skip_result"
            int r2 = r7.K     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "video_interactive_type"
            int r2 = r7.L     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "orientation"
            int r2 = r7.G     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "close_button_delay"
            int r2 = r7.M     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "playclosebtn_tm"
            int r2 = r7.f     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "play_ctdown"
            int r2 = r7.g     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "close_alert"
            int r2 = r7.h     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "rfpv"
            int r2 = r7.w     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "vdcmp"
            double r2 = r7.v     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            com.mbridge.msdk.videocommon.b.c r1 = r7.u     // Catch: java.lang.Exception -> L1df
            if (r1 == 0) goto L12d
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L1df
            r1.<init>()     // Catch: java.lang.Exception -> L1df
            java.lang.String r2 = "type"
            com.mbridge.msdk.videocommon.b.c r3 = r7.u     // Catch: java.lang.Exception -> L1df
            int r3 = r3.a()     // Catch: java.lang.Exception -> L1df
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L1df
            org.json.JSONArray r2 = new org.json.JSONArray     // Catch: java.lang.Exception -> L1df
            r2.<init>()     // Catch: java.lang.Exception -> L1df
            com.mbridge.msdk.videocommon.b.c r3 = r7.u     // Catch: java.lang.Exception -> L1df
            java.util.List r3 = r3.b()     // Catch: java.lang.Exception -> L1df
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L1df
        L113:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Exception -> L1df
            if (r4 == 0) goto L123
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Exception -> L1df
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Exception -> L1df
            r2.put(r4)     // Catch: java.lang.Exception -> L1df
            goto L113
        L123:
            java.lang.String r3 = "value"
            r1.put(r3, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r2 = "cbprule"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L1df
        L12d:
            java.lang.String r1 = "ccbprule"
            int r2 = r7.x     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "ccbp"
            double r2 = r7.y     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Exception -> L1df
            r1.<init>()     // Catch: java.lang.Exception -> L1df
            java.util.ArrayList<java.lang.Integer> r2 = r7.z     // Catch: java.lang.Exception -> L1df
            if (r2 == 0) goto L167
            java.util.ArrayList<java.lang.Integer> r2 = r7.z     // Catch: java.lang.Exception -> L1df
            int r2 = r2.size()     // Catch: java.lang.Exception -> L1df
            if (r2 <= 0) goto L162
            java.util.ArrayList<java.lang.Integer> r2 = r7.z     // Catch: java.lang.Exception -> L1df
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L1df
        L152:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L1df
            if (r3 == 0) goto L162
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L1df
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Exception -> L1df
            r1.put(r3)     // Catch: java.lang.Exception -> L1df
            goto L152
        L162:
            java.lang.String r2 = "atl_type"
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L1df
        L167:
            java.lang.String r1 = "atl_dyt"
            int r2 = r7.A     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "tmorl"
            int r2 = r7.B     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "hitcbp"
            int r2 = r7.C     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "placementid"
            java.lang.String r2 = r7.c     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "ltafemty"
            int r2 = r7.D     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "ltorwc"
            int r2 = r7.E     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "amount_max"
            int r2 = r7.Q     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "callback_rule"
            int r2 = r7.R     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "virtual_currency"
            java.lang.String r2 = r7.S     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "amount"
            int r2 = r7.T     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "icon"
            java.lang.String r2 = r7.U     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "currency_id"
            int r2 = r7.V     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "name"
            java.lang.String r2 = r7.W     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "isDefault"
            int r2 = r7.X     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "video_error_rule"
            int r2 = r7.Y     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "loadtmo"
            int r2 = r7.Z     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            java.lang.String r1 = "vtag"
            java.lang.String r2 = r7.aa     // Catch: java.lang.Exception -> L1df
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L1df
            goto L1e3
        L1df:
            r1 = move-exception
            r1.printStackTrace()
        L1e3:
            return r0
    }

    public final int H() {
            r1 = this;
            int r0 = r1.H
            return r0
    }

    public final int I() {
            r1 = this;
            int r0 = r1.Y
            return r0
    }

    public final int J() {
            r1 = this;
            int r0 = r1.Z
            return r0
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.F
            return r0
    }

    public final void a(double r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public final void a(int r1) {
            r0 = this;
            r0.C = r1
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(java.util.ArrayList<java.lang.Integer> r1) {
            r0 = this;
            r0.z = r1
            return
    }

    public final void a(java.util.List<com.mbridge.msdk.videocommon.b.b> r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final int b() {
            r1 = this;
            int r0 = r1.D
            return r0
    }

    public final void b(double r1) {
            r0 = this;
            r0.y = r1
            return
    }

    public final void b(int r1) {
            r0 = this;
            r0.G = r1
            return
    }

    public final void b(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final int c() {
            r1 = this;
            int r0 = r1.E
            return r0
    }

    public final void c(int r1) {
            r0 = this;
            r0.I = r1
            return
    }

    public final int d() {
            r1 = this;
            int r0 = r1.C
            return r0
    }

    public final void d(int r1) {
            r0 = this;
            r0.J = r1
            return
    }

    public final int e() {
            r1 = this;
            int r0 = r1.G
            return r0
    }

    public final void e(int r1) {
            r0 = this;
            r0.K = r1
            return
    }

    public final int f() {
            r1 = this;
            int r0 = r1.I
            return r0
    }

    public final void f(int r1) {
            r0 = this;
            r0.L = r1
            return
    }

    public final int g() {
            r1 = this;
            int r0 = r1.J
            return r0
    }

    public final void g(int r1) {
            r0 = this;
            r0.M = r1
            return
    }

    public final int h() {
            r1 = this;
            int r0 = r1.K
            return r0
    }

    public final void h(int r1) {
            r0 = this;
            r0.P = r1
            return
    }

    public final int i() {
            r1 = this;
            int r0 = r1.L
            return r0
    }

    public final void i(int r1) {
            r0 = this;
            r0.q = r1
            return
    }

    public final int j() {
            r1 = this;
            int r0 = r1.f
            return r0
    }

    public final void j(int r1) {
            r0 = this;
            r0.r = r1
            return
    }

    public final int k() {
            r1 = this;
            int r0 = r1.h
            return r0
    }

    public final void k(int r1) {
            r0 = this;
            r0.s = r1
            return
    }

    public final java.lang.String l() {
            r1 = this;
            java.lang.String r0 = r1.aa
            return r0
    }

    public final void l(int r1) {
            r0 = this;
            r0.t = r1
            return
    }

    public final int m() {
            r1 = this;
            int r0 = r1.T
            return r0
    }

    public final void m(int r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public final java.lang.String n() {
            r1 = this;
            java.lang.String r0 = r1.W
            return r0
    }

    public final void n(int r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public final int o() {
            r1 = this;
            int r0 = r1.N
            return r0
    }

    public final void o(int r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public final int p() {
            r1 = this;
            int r0 = r1.M
            return r0
    }

    public final void p(int r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public final int q() {
            r1 = this;
            int r0 = r1.P
            return r0
    }

    public final void q(int r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public final int r() {
            r1 = this;
            int r0 = r1.s
            return r0
    }

    public final void r(int r1) {
            r0 = this;
            r0.p = r1
            return
    }

    public final int s() {
            r1 = this;
            int r0 = r1.t
            return r0
    }

    public final void s(int r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public final int t() {
            r1 = this;
            int r0 = r1.j
            return r0
    }

    public final void t(int r1) {
            r0 = this;
            r0.x = r1
            return
    }

    public final int u() {
            r1 = this;
            int r0 = r1.k
            return r0
    }

    public final void u(int r1) {
            r0 = this;
            r0.B = r1
            return
    }

    public final int v() {
            r1 = this;
            int r0 = r1.o
            return r0
    }

    public final boolean v(int r2) {
            r1 = this;
            java.util.ArrayList<java.lang.Integer> r0 = r1.z
            if (r0 == 0) goto L15
            int r0 = r0.size()
            if (r0 <= 0) goto L15
            java.util.ArrayList<java.lang.Integer> r0 = r1.z
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            boolean r2 = r0.contains(r2)
            return r2
        L15:
            r2 = 0
            return r2
    }

    public final int w() {
            r1 = this;
            int r0 = r1.p
            return r0
    }

    public final void w(int r1) {
            r0 = this;
            r0.A = r1
            return
    }

    public final long x() {
            r2 = this;
            long r0 = r2.e
            return r0
    }

    public final void x(int r1) {
            r0 = this;
            r0.H = r1
            return
    }

    public final java.util.List<com.mbridge.msdk.videocommon.b.b> y() {
            r1 = this;
            java.util.List<com.mbridge.msdk.videocommon.b.b> r0 = r1.d
            return r0
    }

    public final void y(int r1) {
            r0 = this;
            r0.X = r1
            return
    }

    public final com.mbridge.msdk.videocommon.b.c z() {
            r1 = this;
            com.mbridge.msdk.videocommon.b.c r0 = r1.u
            return r0
    }

    public final void z(int r1) {
            r0 = this;
            r0.Y = r1
            return
    }
}
