package com.alipay.sdk.m.m;

public final class a {
    public static final java.lang.String A0 = "cfg_max_time";
    public static final java.lang.String B0 = "get_oa_id";
    public static final java.lang.String C0 = "notifyFailApp";
    public static final java.lang.String D0 = "startactivity_in_ui_thread";
    public static final java.lang.String E = "DynCon";
    public static final java.lang.String E0 = "scheme_pay_2";
    public static final int F = 10000;
    public static final java.lang.String F0 = "intercept_batch";
    public static final java.lang.String G = "https://h5.m.taobao.com/mlapp/olist.html";
    public static final java.lang.String G0 = "bind_with_startActivity";
    public static final int H = 10;
    public static final java.lang.String H0 = "startActivity_InsteadOf_Scheme";
    public static final boolean I = false;
    public static final java.lang.String I0 = "enableStartActivityFallback";
    public static final boolean J = true;
    public static final java.lang.String J0 = "enableBindExFallback";
    public static final boolean K = false;
    public static com.alipay.sdk.m.m.a K0 = null;
    public static final boolean L = true;
    public static final boolean M = true;
    public static final java.lang.String N = "";
    public static final boolean O = false;
    public static final boolean P = false;
    public static final boolean Q = false;
    public static final boolean R = false;
    public static final boolean S = true;
    public static final java.lang.String T = "";
    public static final boolean U = false;
    public static final boolean V = false;
    public static final boolean W = false;
    public static final int X = 1000;
    public static final boolean Y = true;
    public static final java.lang.String Z = "";
    public static final boolean a0 = false;
    public static final boolean b0 = false;
    public static final boolean c0 = false;
    public static final int d0 = 1000;
    public static final int e0 = 20000;
    public static final boolean f0 = false;
    public static final java.lang.String g0 = "alipay_cashier_dynamic_config";
    public static final java.lang.String h0 = "timeout";
    public static final java.lang.String i0 = "h5_port_degrade";
    public static final java.lang.String j0 = "st_sdk_config";
    public static final java.lang.String k0 = "tbreturl";
    public static final java.lang.String l0 = "launchAppSwitch";
    public static final java.lang.String m0 = "configQueryInterval";
    public static final java.lang.String n0 = "deg_log_mcgw";
    public static final java.lang.String o0 = "deg_start_srv_first";
    public static final java.lang.String p0 = "prev_jump_dual";
    public static final java.lang.String q0 = "use_sc_only";
    public static final java.lang.String r0 = "retry_aidl_activity_not_start";
    public static final java.lang.String s0 = "bind_use_imp";
    public static final java.lang.String t0 = "retry_bnd_once";
    public static final java.lang.String u0 = "skip_trans";
    public static final java.lang.String v0 = "start_trans";
    public static final java.lang.String w0 = "up_before_pay";
    public static final java.lang.String x0 = "lck_k";
    public static final java.lang.String y0 = "use_sc_lck_a";
    public static final java.lang.String z0 = "utdid_factor";
    public org.json.JSONObject A;
    public boolean B;
    public java.util.List<com.alipay.sdk.m.m.a.b> C;
    public int D;
    public int a;
    public boolean b;
    public java.lang.String c;
    public int d;
    public boolean e;
    public boolean f;
    public boolean g;
    public boolean h;
    public boolean i;
    public boolean j;
    public boolean k;
    public java.lang.String l;
    public boolean m;
    public boolean n;
    public boolean o;
    public boolean p;
    public boolean q;
    public java.lang.String r;
    public java.lang.String s;
    public boolean t;
    public boolean u;
    public boolean v;
    public boolean w;
    public boolean x;
    public int y;
    public boolean z;

    public class a implements java.lang.Runnable {
        public final com.alipay.sdk.m.s.a a;
        public final android.content.Context b;
        public final boolean c;
        public final int d;
        public final com.alipay.sdk.m.m.a e;

        public a(com.alipay.sdk.m.m.a r1, com.alipay.sdk.m.s.a r2, android.content.Context r3, boolean r4, int r5) {
                r0 = this;
                r0.e = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.d = r5
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r4 = this;
                com.alipay.sdk.m.q.b r0 = new com.alipay.sdk.m.q.b     // Catch: java.lang.Throwable -> L48
                r0.<init>()     // Catch: java.lang.Throwable -> L48
                com.alipay.sdk.m.s.a r1 = r4.a     // Catch: java.lang.Throwable -> L48
                android.content.Context r2 = r4.b     // Catch: java.lang.Throwable -> L48
                com.alipay.sdk.m.p.b r0 = r0.a(r1, r2)     // Catch: java.lang.Throwable -> L48
                if (r0 == 0) goto L4c
                com.alipay.sdk.m.m.a r1 = r4.e     // Catch: java.lang.Throwable -> L48
                com.alipay.sdk.m.s.a r2 = r4.a     // Catch: java.lang.Throwable -> L48
                java.lang.String r0 = r0.a()     // Catch: java.lang.Throwable -> L48
                com.alipay.sdk.m.m.a.a(r1, r2, r0)     // Catch: java.lang.Throwable -> L48
                com.alipay.sdk.m.m.a r0 = r4.e     // Catch: java.lang.Throwable -> L48
                com.alipay.sdk.m.s.a r1 = com.alipay.sdk.m.s.a.h()     // Catch: java.lang.Throwable -> L48
                com.alipay.sdk.m.m.a.a(r0, r1)     // Catch: java.lang.Throwable -> L48
                com.alipay.sdk.m.s.a r0 = r4.a     // Catch: java.lang.Throwable -> L48
                java.lang.String r1 = "biz"
                java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L48
                r2.<init>()     // Catch: java.lang.Throwable -> L48
                java.lang.String r3 = "offcfg|"
                r2.append(r3)     // Catch: java.lang.Throwable -> L48
                boolean r3 = r4.c     // Catch: java.lang.Throwable -> L48
                r2.append(r3)     // Catch: java.lang.Throwable -> L48
                java.lang.String r3 = "|"
                r2.append(r3)     // Catch: java.lang.Throwable -> L48
                int r3 = r4.d     // Catch: java.lang.Throwable -> L48
                r2.append(r3)     // Catch: java.lang.Throwable -> L48
                java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L48
                com.alipay.sdk.m.k.a.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L48
                goto L4c
            L48:
                r0 = move-exception
                com.alipay.sdk.m.u.e.a(r0)
            L4c:
                return
        }
    }

    public static final class b {
        public final java.lang.String a;
        public final int b;
        public final java.lang.String c;

        public b(java.lang.String r1, int r2, java.lang.String r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }

        public static com.alipay.sdk.m.m.a.b a(org.json.JSONObject r4) {
                if (r4 != 0) goto L4
                r4 = 0
                return r4
            L4:
                com.alipay.sdk.m.m.a$b r0 = new com.alipay.sdk.m.m.a$b
                java.lang.String r1 = "pn"
                java.lang.String r1 = r4.optString(r1)
                r2 = 0
                java.lang.String r3 = "v"
                int r2 = r4.optInt(r3, r2)
                java.lang.String r3 = "pk"
                java.lang.String r4 = r4.optString(r3)
                r0.<init>(r1, r2, r4)
                return r0
        }

        public static java.util.List<com.alipay.sdk.m.m.a.b> a(org.json.JSONArray r4) {
                if (r4 != 0) goto L4
                r4 = 0
                return r4
            L4:
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                int r1 = r4.length()
                r2 = 0
            Le:
                if (r2 >= r1) goto L20
                org.json.JSONObject r3 = r4.optJSONObject(r2)
                com.alipay.sdk.m.m.a$b r3 = a(r3)
                if (r3 == 0) goto L1d
                r0.add(r3)
            L1d:
                int r2 = r2 + 1
                goto Le
            L20:
                return r0
        }

        public static org.json.JSONArray a(java.util.List<com.alipay.sdk.m.m.a.b> r2) {
                if (r2 != 0) goto L4
                r2 = 0
                return r2
            L4:
                org.json.JSONArray r0 = new org.json.JSONArray
                r0.<init>()
                java.util.Iterator r2 = r2.iterator()
            Ld:
                boolean r1 = r2.hasNext()
                if (r1 == 0) goto L21
                java.lang.Object r1 = r2.next()
                com.alipay.sdk.m.m.a$b r1 = (com.alipay.sdk.m.m.a.b) r1
                org.json.JSONObject r1 = a(r1)
                r0.put(r1)
                goto Ld
            L21:
                return r0
        }

        public static org.json.JSONObject a(com.alipay.sdk.m.m.a.b r4) {
                r0 = 0
                if (r4 != 0) goto L4
                return r0
            L4:
                org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L22
                r1.<init>()     // Catch: org.json.JSONException -> L22
                java.lang.String r2 = "pn"
                java.lang.String r3 = r4.a     // Catch: org.json.JSONException -> L22
                org.json.JSONObject r1 = r1.put(r2, r3)     // Catch: org.json.JSONException -> L22
                java.lang.String r2 = "v"
                int r3 = r4.b     // Catch: org.json.JSONException -> L22
                org.json.JSONObject r1 = r1.put(r2, r3)     // Catch: org.json.JSONException -> L22
                java.lang.String r2 = "pk"
                java.lang.String r4 = r4.c     // Catch: org.json.JSONException -> L22
                org.json.JSONObject r4 = r1.put(r2, r4)     // Catch: org.json.JSONException -> L22
                return r4
            L22:
                r4 = move-exception
                com.alipay.sdk.m.u.e.a(r4)
                return r0
        }

        public java.lang.String toString() {
                r1 = this;
                org.json.JSONObject r0 = a(r1)
                java.lang.String r0 = java.lang.String.valueOf(r0)
                return r0
        }
    }

    public a() {
            r3 = this;
            r3.<init>()
            r0 = 10000(0x2710, float:1.4013E-41)
            r3.a = r0
            r0 = 0
            r3.b = r0
            java.lang.String r1 = "https://h5.m.taobao.com/mlapp/olist.html"
            r3.c = r1
            r1 = 10
            r3.d = r1
            r3.e = r0
            r1 = 1
            r3.f = r1
            r3.g = r0
            r3.h = r0
            r3.i = r0
            r3.j = r1
            r3.k = r1
            java.lang.String r2 = ""
            r3.l = r2
            r3.m = r0
            r3.n = r0
            r3.o = r0
            r3.p = r0
            r3.q = r1
            r3.r = r2
            r3.s = r2
            r3.t = r0
            r3.u = r0
            r3.v = r0
            r3.w = r0
            r3.x = r0
            r2 = 1000(0x3e8, float:1.401E-42)
            r3.y = r2
            r3.z = r0
            r3.B = r1
            r0 = 0
            r3.C = r0
            r0 = -1
            r3.D = r0
            return
    }

    private int C() {
            r1 = this;
            int r0 = r1.y
            return r0
    }

    public static com.alipay.sdk.m.m.a D() {
            com.alipay.sdk.m.m.a r0 = com.alipay.sdk.m.m.a.K0
            if (r0 != 0) goto Le
            com.alipay.sdk.m.m.a r0 = new com.alipay.sdk.m.m.a
            r0.<init>()
            com.alipay.sdk.m.m.a.K0 = r0
            r0.t()
        Le:
            com.alipay.sdk.m.m.a r0 = com.alipay.sdk.m.m.a.K0
            return r0
    }

    private org.json.JSONObject E() throws org.json.JSONException {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            int r1 = r3.k()
            java.lang.String r2 = "timeout"
            r0.put(r2, r1)
            boolean r1 = r3.y()
            java.lang.String r2 = "h5_port_degrade"
            r0.put(r2, r1)
            java.lang.String r1 = r3.r()
            java.lang.String r2 = "tbreturl"
            r0.put(r2, r1)
            int r1 = r3.d()
            java.lang.String r2 = "configQueryInterval"
            r0.put(r2, r1)
            java.util.List r1 = r3.l()
            org.json.JSONArray r1 = com.alipay.sdk.m.m.a.b.a(r1)
            java.lang.String r2 = "launchAppSwitch"
            r0.put(r2, r1)
            boolean r1 = r3.i()
            java.lang.String r2 = "scheme_pay_2"
            r0.put(r2, r1)
            boolean r1 = r3.h()
            java.lang.String r2 = "intercept_batch"
            r0.put(r2, r1)
            boolean r1 = r3.e()
            java.lang.String r2 = "deg_log_mcgw"
            r0.put(r2, r1)
            boolean r1 = r3.f()
            java.lang.String r2 = "deg_start_srv_first"
            r0.put(r2, r1)
            boolean r1 = r3.m()
            java.lang.String r2 = "prev_jump_dual"
            r0.put(r2, r1)
            java.lang.String r1 = r3.g()
            java.lang.String r2 = "use_sc_only"
            r0.put(r2, r1)
            boolean r1 = r3.b()
            java.lang.String r2 = "bind_use_imp"
            r0.put(r2, r1)
            boolean r1 = r3.n()
            java.lang.String r2 = "retry_bnd_once"
            r0.put(r2, r1)
            boolean r1 = r3.p()
            java.lang.String r2 = "skip_trans"
            r0.put(r2, r1)
            boolean r1 = r3.B()
            java.lang.String r2 = "start_trans"
            r0.put(r2, r1)
            boolean r1 = r3.s()
            java.lang.String r2 = "up_before_pay"
            r0.put(r2, r1)
            boolean r1 = r3.o()
            java.lang.String r2 = "use_sc_lck_a"
            r0.put(r2, r1)
            java.lang.String r1 = r3.j()
            java.lang.String r2 = "lck_k"
            r0.put(r2, r1)
            java.lang.String r1 = r3.c()
            java.lang.String r2 = "bind_with_startActivity"
            r0.put(r2, r1)
            boolean r1 = r3.q()
            java.lang.String r2 = "startActivity_InsteadOf_Scheme"
            r0.put(r2, r1)
            boolean r1 = r3.A()
            java.lang.String r2 = "retry_aidl_activity_not_start"
            r0.put(r2, r1)
            int r1 = r3.C()
            java.lang.String r2 = "cfg_max_time"
            r0.put(r2, r1)
            boolean r1 = r3.x()
            java.lang.String r2 = "get_oa_id"
            r0.put(r2, r1)
            boolean r1 = r3.v()
            java.lang.String r2 = "notifyFailApp"
            r0.put(r2, r1)
            boolean r1 = r3.w()
            java.lang.String r2 = "enableStartActivityFallback"
            r0.put(r2, r1)
            boolean r1 = r3.u()
            java.lang.String r2 = "enableBindExFallback"
            r0.put(r2, r1)
            boolean r1 = r3.z()
            java.lang.String r2 = "startactivity_in_ui_thread"
            r0.put(r2, r1)
            org.json.JSONObject r1 = r3.a()
            java.lang.String r2 = "ap_args"
            r0.put(r2, r1)
            return r0
    }

    public static void a(com.alipay.sdk.m.m.a r0, com.alipay.sdk.m.s.a r1) {
            r0.a(r1)
            return
    }

    public static void a(com.alipay.sdk.m.m.a r0, com.alipay.sdk.m.s.a r1, java.lang.String r2) {
            r0.a(r1, r2)
            return
    }

    private void a(com.alipay.sdk.m.s.a r4) {
            r3 = this;
            org.json.JSONObject r0 = r3.E()     // Catch: java.lang.Exception -> L16
            com.alipay.sdk.m.s.b r1 = com.alipay.sdk.m.s.b.d()     // Catch: java.lang.Exception -> L16
            android.content.Context r1 = r1.b()     // Catch: java.lang.Exception -> L16
            java.lang.String r2 = "alipay_cashier_dynamic_config"
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L16
            com.alipay.sdk.m.u.j.b(r4, r1, r2, r0)     // Catch: java.lang.Exception -> L16
            goto L1a
        L16:
            r4 = move-exception
            com.alipay.sdk.m.u.e.a(r4)
        L1a:
            return
    }

    private void a(com.alipay.sdk.m.s.a r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return
        L7:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L27
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L27
            java.lang.String r3 = "st_sdk_config"
            org.json.JSONObject r3 = r0.optJSONObject(r3)     // Catch: java.lang.Throwable -> L27
            org.json.JSONObject r0 = com.alipay.sdk.m.u.a.a(r2, r0)     // Catch: java.lang.Throwable -> L27
            com.alipay.sdk.m.u.a.a(r2, r3, r0)     // Catch: java.lang.Throwable -> L27
            if (r3 == 0) goto L1f
            r1.a(r3)     // Catch: java.lang.Throwable -> L27
            goto L2b
        L1f:
            java.lang.String r2 = "DynCon"
            java.lang.String r3 = "empty config"
            com.alipay.sdk.m.u.e.e(r2, r3)     // Catch: java.lang.Throwable -> L27
            goto L2b
        L27:
            r2 = move-exception
            com.alipay.sdk.m.u.e.a(r2)
        L2b:
            return
    }

    private void a(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L10
            r1.a(r0)     // Catch: java.lang.Throwable -> L10
            goto L14
        L10:
            r2 = move-exception
            com.alipay.sdk.m.u.e.a(r2)
        L14:
            return
    }

    private void a(org.json.JSONObject r5) {
            r4 = this;
            java.lang.String r0 = "timeout"
            r1 = 10000(0x2710, float:1.4013E-41)
            int r0 = r5.optInt(r0, r1)
            r4.a = r0
            r0 = 0
            java.lang.String r1 = "h5_port_degrade"
            boolean r1 = r5.optBoolean(r1, r0)
            r4.b = r1
            java.lang.String r1 = "tbreturl"
            java.lang.String r2 = "https://h5.m.taobao.com/mlapp/olist.html"
            java.lang.String r1 = r5.optString(r1, r2)
            java.lang.String r1 = r1.trim()
            r4.c = r1
            java.lang.String r1 = "configQueryInterval"
            r2 = 10
            int r1 = r5.optInt(r1, r2)
            r4.d = r1
            java.lang.String r1 = "launchAppSwitch"
            org.json.JSONArray r1 = r5.optJSONArray(r1)
            java.util.List r1 = com.alipay.sdk.m.m.a.b.a(r1)
            r4.C = r1
            java.lang.String r1 = "scheme_pay_2"
            boolean r1 = r5.optBoolean(r1, r0)
            r4.e = r1
            r1 = 1
            java.lang.String r2 = "intercept_batch"
            boolean r2 = r5.optBoolean(r2, r1)
            r4.f = r2
            java.lang.String r2 = "deg_log_mcgw"
            boolean r2 = r5.optBoolean(r2, r0)
            r4.i = r2
            java.lang.String r2 = "deg_start_srv_first"
            boolean r2 = r5.optBoolean(r2, r1)
            r4.j = r2
            java.lang.String r2 = "prev_jump_dual"
            boolean r2 = r5.optBoolean(r2, r1)
            r4.k = r2
            java.lang.String r2 = ""
            java.lang.String r3 = "use_sc_only"
            java.lang.String r3 = r5.optString(r3, r2)
            r4.l = r3
            java.lang.String r3 = "bind_use_imp"
            boolean r3 = r5.optBoolean(r3, r0)
            r4.m = r3
            java.lang.String r3 = "retry_bnd_once"
            boolean r3 = r5.optBoolean(r3, r0)
            r4.n = r3
            java.lang.String r3 = "skip_trans"
            boolean r3 = r5.optBoolean(r3, r0)
            r4.o = r3
            java.lang.String r3 = "start_trans"
            boolean r3 = r5.optBoolean(r3, r0)
            r4.p = r3
            java.lang.String r3 = "up_before_pay"
            boolean r3 = r5.optBoolean(r3, r1)
            r4.q = r3
            java.lang.String r3 = "lck_k"
            java.lang.String r3 = r5.optString(r3, r2)
            r4.r = r3
            java.lang.String r3 = "use_sc_lck_a"
            boolean r3 = r5.optBoolean(r3, r0)
            r4.w = r3
            java.lang.String r3 = "retry_aidl_activity_not_start"
            boolean r3 = r5.optBoolean(r3, r0)
            r4.x = r3
            java.lang.String r3 = "notifyFailApp"
            boolean r3 = r5.optBoolean(r3, r0)
            r4.z = r3
            java.lang.String r3 = "bind_with_startActivity"
            java.lang.String r2 = r5.optString(r3, r2)
            r4.s = r2
            java.lang.String r2 = "startActivity_InsteadOf_Scheme"
            boolean r2 = r5.optBoolean(r2, r0)
            r4.t = r2
            java.lang.String r2 = "cfg_max_time"
            r3 = 1000(0x3e8, float:1.401E-42)
            int r2 = r5.optInt(r2, r3)
            r4.y = r2
            java.lang.String r2 = "get_oa_id"
            boolean r1 = r5.optBoolean(r2, r1)
            r4.B = r1
            java.lang.String r1 = "enableStartActivityFallback"
            boolean r1 = r5.optBoolean(r1, r0)
            r4.u = r1
            java.lang.String r1 = "enableBindExFallback"
            boolean r1 = r5.optBoolean(r1, r0)
            r4.v = r1
            java.lang.String r1 = "startactivity_in_ui_thread"
            boolean r0 = r5.optBoolean(r1, r0)
            r4.g = r0
            java.lang.String r0 = "ap_args"
            org.json.JSONObject r5 = r5.optJSONObject(r0)
            r4.A = r5
            return
    }

    public boolean A() {
            r1 = this;
            boolean r0 = r1.x
            return r0
    }

    public boolean B() {
            r1 = this;
            boolean r0 = r1.p
            return r0
    }

    public org.json.JSONObject a() {
            r1 = this;
            org.json.JSONObject r0 = r1.A
            return r0
    }

    public void a(com.alipay.sdk.m.s.a r9, android.content.Context r10, boolean r11, int r12) {
            r8 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "oncfg|"
            r0.append(r1)
            r0.append(r11)
            java.lang.String r1 = "|"
            r0.append(r1)
            r0.append(r12)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "biz"
            com.alipay.sdk.m.k.a.a(r9, r1, r0)
            com.alipay.sdk.m.m.a$a r0 = new com.alipay.sdk.m.m.a$a
            r2 = r0
            r3 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            r7 = r12
            r2.<init>(r3, r4, r5, r6, r7)
            if (r11 == 0) goto L55
            boolean r10 = com.alipay.sdk.m.u.n.h()
            if (r10 != 0) goto L55
            int r10 = r8.C()
            long r11 = (long) r10
            java.lang.String r2 = "AlipayDCPBlok"
            boolean r11 = com.alipay.sdk.m.u.n.a(r11, r0, r2)
            if (r11 != 0) goto L62
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = ""
            r11.append(r12)
            r11.append(r10)
            java.lang.String r10 = r11.toString()
            java.lang.String r11 = "LogAppFetchConfigTimeout"
            com.alipay.sdk.m.k.a.b(r9, r1, r11, r10)
            goto L62
        L55:
            java.lang.Thread r9 = new java.lang.Thread
            r9.<init>(r0)
            java.lang.String r10 = "AlipayDCP"
            r9.setName(r10)
            r9.start()
        L62:
            return
    }

    public void a(boolean r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public boolean a(android.content.Context r4, int r5) {
            r3 = this;
            int r0 = r3.D
            r1 = -1
            if (r0 != r1) goto L1a
            int r0 = com.alipay.sdk.m.u.n.a()
            r3.D = r0
            com.alipay.sdk.m.s.a r0 = com.alipay.sdk.m.s.a.h()
            int r1 = r3.D
            java.lang.String r1 = java.lang.String.valueOf(r1)
            java.lang.String r2 = "utdid_factor"
            com.alipay.sdk.m.u.j.b(r0, r4, r2, r1)
        L1a:
            int r4 = r3.D
            if (r4 >= r5) goto L20
            r4 = 1
            goto L21
        L20:
            r4 = 0
        L21:
            return r4
    }

    public boolean b() {
            r1 = this;
            boolean r0 = r1.m
            return r0
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.s
            return r0
    }

    public int d() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public boolean e() {
            r1 = this;
            boolean r0 = r1.i
            return r0
    }

    public boolean f() {
            r1 = this;
            boolean r0 = r1.j
            return r0
    }

    public java.lang.String g() {
            r1 = this;
            java.lang.String r0 = r1.l
            return r0
    }

    public boolean h() {
            r1 = this;
            boolean r0 = r1.f
            return r0
    }

    public boolean i() {
            r1 = this;
            boolean r0 = r1.e
            return r0
    }

    public java.lang.String j() {
            r1 = this;
            java.lang.String r0 = r1.r
            return r0
    }

    public int k() {
            r3 = this;
            int r0 = r3.a
            java.lang.String r1 = "DynCon"
            r2 = 1000(0x3e8, float:1.401E-42)
            if (r0 < r2) goto L26
            r2 = 20000(0x4e20, float:2.8026E-41)
            if (r0 <= r2) goto Ld
            goto L26
        Ld:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "time = "
            r0.append(r2)
            int r2 = r3.a
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.alipay.sdk.m.u.e.b(r1, r0)
            int r0 = r3.a
            return r0
        L26:
            java.lang.String r0 = "time(def) = 10000"
            com.alipay.sdk.m.u.e.b(r1, r0)
            r0 = 10000(0x2710, float:1.4013E-41)
            return r0
    }

    public java.util.List<com.alipay.sdk.m.m.a.b> l() {
            r1 = this;
            java.util.List<com.alipay.sdk.m.m.a$b> r0 = r1.C
            return r0
    }

    public boolean m() {
            r1 = this;
            boolean r0 = r1.k
            return r0
    }

    public boolean n() {
            r1 = this;
            boolean r0 = r1.n
            return r0
    }

    public boolean o() {
            r1 = this;
            boolean r0 = r1.w
            return r0
    }

    public boolean p() {
            r1 = this;
            boolean r0 = r1.o
            return r0
    }

    public boolean q() {
            r1 = this;
            boolean r0 = r1.t
            return r0
    }

    public java.lang.String r() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public boolean s() {
            r1 = this;
            boolean r0 = r1.q
            return r0
    }

    public void t() {
            r5 = this;
            com.alipay.sdk.m.s.b r0 = com.alipay.sdk.m.s.b.d()
            android.content.Context r0 = r0.b()
            com.alipay.sdk.m.s.a r1 = com.alipay.sdk.m.s.a.h()
            java.lang.String r2 = "alipay_cashier_dynamic_config"
            r3 = 0
            java.lang.String r1 = com.alipay.sdk.m.u.j.a(r1, r0, r2, r3)
            com.alipay.sdk.m.s.a r2 = com.alipay.sdk.m.s.a.h()
            java.lang.String r3 = "utdid_factor"
            java.lang.String r4 = "-1"
            java.lang.String r0 = com.alipay.sdk.m.u.j.a(r2, r0, r3, r4)
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L25
            r5.D = r0     // Catch: java.lang.Exception -> L25
        L25:
            r5.a(r1)
            return
    }

    public boolean u() {
            r1 = this;
            boolean r0 = r1.v
            return r0
    }

    public boolean v() {
            r1 = this;
            boolean r0 = r1.z
            return r0
    }

    public boolean w() {
            r1 = this;
            boolean r0 = r1.u
            return r0
    }

    public boolean x() {
            r1 = this;
            boolean r0 = r1.B
            return r0
    }

    public boolean y() {
            r1 = this;
            boolean r0 = r1.b
            return r0
    }

    public boolean z() {
            r1 = this;
            boolean r0 = r1.g
            return r0
    }
}
