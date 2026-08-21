package com.tkay.core.common.h;

public final class c {
    public static final java.lang.String A = "it_src";
    public static final java.lang.String B = "lat";
    public static final java.lang.String C = "lon";
    public static final java.lang.String D = "inst_wx";
    public static final java.lang.String E = "mini_sdk";
    public static final java.lang.String F = "ms_type";
    public static final java.lang.String G = "device_set";
    public static final java.lang.String H = "gdpr_cs";
    public static final java.lang.String I = "abtest_id";
    public static final java.lang.String J = "first_init_time";
    public static final java.lang.String K = "days_from_first_init";
    public static final java.lang.String L = "cs_cl";
    public static final java.lang.String M = "is_ofm";
    public static final java.lang.String N = "app_id";
    public static final java.lang.String O = "api_ver";
    public static final java.lang.String P = "custom";
    public static final java.lang.String Q = "rdid";
    public static final java.lang.String R = "rc";
    public static final java.lang.String S = "data";
    public static final java.lang.String T = "tcp_tk_da_type";
    public static final java.lang.String U = "ofl";
    public static final java.lang.String V = "tcp_rate";
    public static final java.lang.String W = "p";
    public static final java.lang.String X = "p2";
    public static final java.lang.String Y = "sign";
    public static final java.lang.String Z = "common";
    public static final java.lang.String a = "platform";
    public static final int aa = 1;
    public static final int ab = 2;
    public static final int ac = 3;
    public static final java.lang.String ad = "area_type";
    public static final java.lang.String ae = "sp_http";
    public static final java.lang.String af = "os_fw";
    public static final java.lang.String ag = "is_test";
    public static final java.lang.String ah = "mdna_oid";
    public static final java.lang.String ai = "mdna_appkey";
    public static final java.lang.String aj = "mdna_r";
    public static final java.lang.String ak = "user_num";
    public static final java.lang.String al = "cp_device_id";
    public static final java.lang.String am = "cp_pl_id";
    public static int an = -1;
    public static int ao = -1;
    public static final java.lang.String ap = "al_it_apil";
    public static final java.lang.String aq = "wx_data";
    public static final java.lang.String b = "os_vn";
    public static final java.lang.String c = "os_vc";
    public static final java.lang.String d = "package_name";
    public static final java.lang.String e = "app_vn";
    public static final java.lang.String f = "app_vc";
    public static final java.lang.String g = "brand";
    public static final java.lang.String h = "model";
    public static final java.lang.String i = "screen";
    public static final java.lang.String j = "network_type";
    public static final java.lang.String k = "mnc";
    public static final java.lang.String l = "mcc";
    public static final java.lang.String m = "language";
    public static final java.lang.String n = "timezone";
    public static final java.lang.String o = "sdk_ver";
    public static final java.lang.String p = "gp_ver";
    public static final java.lang.String q = "nw_ver";
    public static final java.lang.String r = "ua";
    public static final java.lang.String s = "orient";
    public static final java.lang.String t = "system";
    public static final java.lang.String u = "android_id";
    public static final java.lang.String v = "gaid";
    public static final java.lang.String w = "channel";
    public static final java.lang.String x = "sub_channel";
    public static final java.lang.String y = "upid";
    public static final java.lang.String z = "ps_id";

    static {
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.json.JSONObject a() {
            java.lang.String r0 = "a"
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            com.tkay.core.c.b r3 = com.tkay.core.c.b.a(r1)
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()
            java.lang.String r4 = r4.o()
            com.tkay.core.c.a r3 = r3.b(r4)
            java.lang.String r4 = ""
            if (r3 == 0) goto L28
            java.lang.String r5 = r3.F()     // Catch: java.lang.Throwable -> L173
            goto L29
        L28:
            r5 = r4
        L29:
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L173
            r7 = 1
            if (r6 != 0) goto L44
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Exception -> L44
            r6.<init>(r5)     // Catch: java.lang.Exception -> L44
            boolean r5 = r6.isNull(r0)     // Catch: java.lang.Exception -> L44
            if (r5 != 0) goto L44
            int r0 = r6.optInt(r0)     // Catch: java.lang.Exception -> L44
            if (r0 != r7) goto L42
            goto L44
        L42:
            r0 = 0
            goto L45
        L44:
            r0 = r7
        L45:
            java.lang.String r5 = "android_id"
            if (r0 == 0) goto L4e
            java.lang.String r0 = com.tkay.core.common.l.d.d(r1)     // Catch: java.lang.Throwable -> L173
            goto L4f
        L4e:
            r0 = r4
        L4f:
            r2.put(r5, r0)     // Catch: java.lang.Throwable -> L173
            java.lang.String r0 = "gaid"
            java.lang.String r5 = com.tkay.core.common.l.d.f()     // Catch: java.lang.Throwable -> L173
            r2.put(r0, r5)     // Catch: java.lang.Throwable -> L173
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L173
            com.tkay.core.api.IExHandler r0 = r0.b()     // Catch: java.lang.Throwable -> L173
            java.lang.String r5 = "is_cn_sdk"
            if (r0 == 0) goto L70
            r0.fillRequestData(r2, r3)     // Catch: java.lang.Throwable -> L173
            java.lang.String r0 = "1"
            r2.put(r5, r0)     // Catch: java.lang.Throwable -> L173
            goto L75
        L70:
            java.lang.String r0 = "0"
            r2.put(r5, r0)     // Catch: java.lang.Throwable -> L173
        L75:
            java.lang.String r0 = com.tkay.core.common.l.d.l(r1)     // Catch: java.lang.Throwable -> L173
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L173
            android.location.Location r3 = r3.r()     // Catch: java.lang.Throwable -> L173
            if (r3 == 0) goto L95
            java.lang.String r5 = "lat"
            double r8 = r3.getLatitude()     // Catch: java.lang.Throwable -> L173
            r2.put(r5, r8)     // Catch: java.lang.Throwable -> L173
            java.lang.String r5 = "lon"
            double r8 = r3.getLongitude()     // Catch: java.lang.Throwable -> L173
            r2.put(r5, r8)     // Catch: java.lang.Throwable -> L173
        L95:
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L173
            java.lang.String r3 = r3.s()     // Catch: java.lang.Throwable -> L173
            boolean r5 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L173
            if (r5 != 0) goto Lac
            java.lang.String r5 = "inst_wx"
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Throwable -> L173
            r2.put(r5, r3)     // Catch: java.lang.Throwable -> L173
        Lac:
            java.lang.String r3 = "it_src"
            boolean r5 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L173
            if (r5 != 0) goto Lb5
            r4 = r0
        Lb5:
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L173
            java.lang.String r0 = "area_type"
            int r3 = com.tkay.core.common.b.f.d.a     // Catch: java.lang.Throwable -> L173
            r2.put(r0, r3)     // Catch: java.lang.Throwable -> L173
            int r0 = com.tkay.core.common.h.c.an     // Catch: java.lang.Throwable -> L173
            java.lang.String r3 = "ms_type"
            r4 = -1
            if (r0 == r4) goto Ld0
            int r0 = com.tkay.core.common.h.c.an     // Catch: java.lang.Throwable -> L173
            if (r0 <= 0) goto Le9
            int r0 = com.tkay.core.common.h.c.an     // Catch: java.lang.Throwable -> L173
            r2.put(r3, r0)     // Catch: java.lang.Throwable -> L173
            goto Le9
        Ld0:
            boolean r0 = com.tkay.core.common.l.g.c(r1)     // Catch: java.lang.Throwable -> L173
            boolean r1 = com.tkay.core.common.l.g.b(r1)     // Catch: java.lang.Throwable -> L173
            if (r1 == 0) goto Ldc
            r5 = 2
            goto Ldd
        Ldc:
            r5 = r0
        Ldd:
            if (r0 == 0) goto Le2
            if (r1 == 0) goto Le2
            r5 = 3
        Le2:
            if (r5 <= 0) goto Le7
            r2.put(r3, r5)     // Catch: java.lang.Throwable -> L173
        Le7:
            com.tkay.core.common.h.c.an = r5     // Catch: java.lang.Throwable -> L173
        Le9:
            int r0 = com.tkay.core.common.h.c.ao     // Catch: java.lang.Throwable -> L173
            java.lang.String r1 = "mini_sdk"
            if (r0 == r4) goto Lf9
            int r0 = com.tkay.core.common.h.c.ao     // Catch: java.lang.Throwable -> L173
            if (r0 != r7) goto L104
            int r0 = com.tkay.core.common.h.c.ao     // Catch: java.lang.Throwable -> L173
            r2.put(r1, r0)     // Catch: java.lang.Throwable -> L173
            goto L104
        Lf9:
            boolean r0 = com.tkay.core.common.l.g.c()     // Catch: java.lang.Throwable -> L173
            if (r0 != r7) goto L102
            r2.put(r1, r7)     // Catch: java.lang.Throwable -> L173
        L102:
            com.tkay.core.common.h.c.ao = r0     // Catch: java.lang.Throwable -> L173
        L104:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L173
            com.tkay.core.api.ATPrivacyConfig r0 = r0.I()     // Catch: java.lang.Throwable -> L173
            if (r0 == 0) goto L145
            java.lang.String r1 = r0.getDevGaid()     // Catch: java.lang.Throwable -> L173
            java.lang.String r3 = r0.getDevImei()     // Catch: java.lang.Throwable -> L173
            java.lang.String r0 = r0.getDevOaid()     // Catch: java.lang.Throwable -> L173
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L173
            r4.<init>()     // Catch: java.lang.Throwable -> L173
            boolean r5 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L173
            if (r5 != 0) goto L12a
            java.lang.String r5 = "set_gaid"
            r4.put(r5, r1)     // Catch: java.lang.Throwable -> L173
        L12a:
            boolean r1 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L173
            if (r1 != 0) goto L135
            java.lang.String r1 = "set_imei"
            r4.put(r1, r3)     // Catch: java.lang.Throwable -> L173
        L135:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L173
            if (r1 != 0) goto L140
            java.lang.String r1 = "set_oaid"
            r4.put(r1, r0)     // Catch: java.lang.Throwable -> L173
        L140:
            java.lang.String r0 = "device_set"
            r2.put(r0, r4)     // Catch: java.lang.Throwable -> L173
        L145:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L173
            java.util.Map r0 = r0.l()     // Catch: java.lang.Throwable -> L173
            java.lang.String r1 = "user_number"
            java.lang.Object r1 = r0.get(r1)     // Catch: java.lang.Throwable -> L162
            if (r1 == 0) goto L162
            java.lang.String r3 = "user_num"
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L162
            long r4 = java.lang.Long.parseLong(r1)     // Catch: java.lang.Throwable -> L162
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L162
        L162:
            java.lang.String r1 = "user_device_id"
            java.lang.Object r0 = r0.get(r1)
            if (r0 == 0) goto L173
            java.lang.String r1 = "cp_device_id"
            java.lang.String r0 = r0.toString()
            r2.put(r1, r0)
        L173:
            return r2
    }

    public static org.json.JSONObject a(int r9) {
            java.lang.String r0 = "3"
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.core.common.l.d.q(r1)
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            java.lang.String r3 = "platform"
            r4 = 1
            r1.put(r3, r4)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "os_vn"
            java.lang.String r5 = com.tkay.core.common.l.d.e()     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "os_vc"
            java.lang.String r5 = com.tkay.core.common.l.d.d()     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "package_name"
            java.lang.String r5 = com.tkay.core.common.l.d.k(r2)     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "app_vn"
            java.lang.String r5 = com.tkay.core.common.l.d.i(r2)     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "app_vc"
            java.lang.String r5 = com.tkay.core.common.l.d.h(r2)     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "brand"
            java.lang.String r5 = com.tkay.core.common.l.d.b()     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "model"
            java.lang.String r5 = com.tkay.core.common.l.d.a()     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "screen"
            java.lang.String r5 = com.tkay.core.common.l.d.j(r2)     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "network_type"
            java.lang.String r5 = com.tkay.core.common.l.d.m(r2)     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "mnc"
            java.lang.String r5 = com.tkay.core.common.l.d.c(r2)     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "mcc"
            java.lang.String r5 = com.tkay.core.common.l.d.b(r2)     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "language"
            java.lang.String r5 = com.tkay.core.common.l.d.f(r2)     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "timezone"
            java.lang.String r5 = com.tkay.core.common.l.d.c()     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "sdk_ver"
            java.lang.String r5 = com.tkay.core.common.l.g.a()     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "gp_ver"
            java.lang.String r5 = com.tkay.core.common.l.d.n(r2)     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "ua"
            java.lang.String r5 = com.tkay.core.common.l.d.i()     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "orient"
            int r5 = com.tkay.core.common.l.d.g(r2)     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "system"
            r1.put(r3, r4)     // Catch: java.lang.Exception -> L268
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = r3.m()     // Catch: java.lang.Exception -> L268
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L268
            if (r3 != 0) goto Ld9
            java.lang.String r3 = "channel"
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            java.lang.String r5 = r5.m()     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
        Ld9:
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = r3.n()     // Catch: java.lang.Exception -> L268
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L268
            if (r3 != 0) goto Lf4
            java.lang.String r3 = "sub_channel"
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            java.lang.String r5 = r5.n()     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
        Lf4:
            java.lang.String r3 = "upid"
            com.tkay.core.common.b.p r5 = com.tkay.core.common.b.p.a(r2)     // Catch: java.lang.Exception -> L268
            boolean r5 = r5.b()     // Catch: java.lang.Exception -> L268
            java.lang.String r6 = ""
            if (r5 == 0) goto L10b
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            java.lang.String r5 = r5.w()     // Catch: java.lang.Exception -> L268
            goto L10c
        L10b:
            r5 = r6
        L10c:
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = "ps_id"
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            java.lang.String r5 = r5.q()     // Catch: java.lang.Exception -> L268
            r1.put(r3, r5)     // Catch: java.lang.Exception -> L268
            com.tkay.core.c.b r3 = com.tkay.core.c.b.a(r2)     // Catch: java.lang.Exception -> L268
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            java.lang.String r5 = r5.o()     // Catch: java.lang.Exception -> L268
            com.tkay.core.c.a r3 = r3.b(r5)     // Catch: java.lang.Exception -> L268
            if (r3 == 0) goto L143
            java.lang.String r5 = "abtest_id"
            java.lang.String r7 = r3.A()     // Catch: java.lang.Exception -> L268
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> L268
            if (r7 == 0) goto L13c
            r7 = r6
            goto L140
        L13c:
            java.lang.String r7 = r3.A()     // Catch: java.lang.Exception -> L268
        L140:
            r1.put(r5, r7)     // Catch: java.lang.Exception -> L268
        L143:
            java.lang.String r5 = "first_init_time"
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            long r7 = r7.g()     // Catch: java.lang.Exception -> L268
            r1.put(r5, r7)     // Catch: java.lang.Exception -> L268
            java.lang.String r5 = "days_from_first_init"
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            long r7 = r7.h()     // Catch: java.lang.Exception -> L268
            r1.put(r5, r7)     // Catch: java.lang.Exception -> L268
            java.lang.String r5 = "gdpr_cs"
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L268
            r7.<init>()     // Catch: java.lang.Exception -> L268
            com.tkay.core.common.b.m r8 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            int r8 = r8.d()     // Catch: java.lang.Exception -> L268
            r7.append(r8)     // Catch: java.lang.Exception -> L268
            com.tkay.core.common.b.p r2 = com.tkay.core.common.b.p.a(r2)     // Catch: java.lang.Exception -> L268
            int r2 = r2.a()     // Catch: java.lang.Exception -> L268
            r7.append(r2)     // Catch: java.lang.Exception -> L268
            java.lang.String r2 = r7.toString()     // Catch: java.lang.Exception -> L268
            r1.put(r5, r2)     // Catch: java.lang.Exception -> L268
            java.lang.String r2 = "cs_cl"
            r1.put(r2, r0)     // Catch: java.lang.Exception -> L268
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            int r2 = r2.i()     // Catch: java.lang.Exception -> L268
            if (r2 != r4) goto L195
            java.lang.String r2 = "is_ofm"
            r1.put(r2, r4)     // Catch: java.lang.Exception -> L268
        L195:
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            boolean r2 = r2.G()     // Catch: java.lang.Exception -> L268
            if (r2 == 0) goto L1f4
            com.tkay.core.common.b.h r2 = com.tkay.core.common.b.h.a()     // Catch: java.lang.Exception -> L268
            boolean r2 = r2.a(r3)     // Catch: java.lang.Exception -> L268
            if (r2 == 0) goto L1f4
            com.tkay.core.common.b.h r2 = com.tkay.core.common.b.h.a()     // Catch: java.lang.Exception -> L268
            java.lang.String r2 = r2.b()     // Catch: java.lang.Exception -> L268
            com.tkay.core.common.b.h r3 = com.tkay.core.common.b.h.a()     // Catch: java.lang.Exception -> L268
            java.lang.String r3 = r3.c()     // Catch: java.lang.Exception -> L268
            com.tkay.core.common.b.h r4 = com.tkay.core.common.b.h.a()     // Catch: java.lang.Exception -> L268
            java.lang.String r4 = r4.d()     // Catch: java.lang.Exception -> L268
            java.lang.String r5 = "mdna_oid"
            boolean r7 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L268
            if (r7 != 0) goto L1ca
            goto L1cb
        L1ca:
            r2 = r6
        L1cb:
            r1.put(r5, r2)     // Catch: java.lang.Exception -> L268
            java.lang.String r2 = "mdna_appkey"
            boolean r5 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L268
            if (r5 != 0) goto L1d7
            goto L1d8
        L1d7:
            r3 = r6
        L1d8:
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L268
            java.lang.String r2 = "rdid"
            boolean r3 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L268
            if (r3 != 0) goto L1e4
            r6 = r4
        L1e4:
            r1.put(r2, r6)     // Catch: java.lang.Exception -> L268
            java.lang.String r2 = "mdna_r"
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            int r3 = r3.J()     // Catch: java.lang.Exception -> L268
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L268
        L1f4:
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            boolean r2 = r2.B()     // Catch: java.lang.Exception -> L268
            if (r2 == 0) goto L20b
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            boolean r2 = r2.C()     // Catch: java.lang.Exception -> L268
            if (r2 == 0) goto L21a
            java.lang.String r0 = "1"
            goto L21a
        L20b:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            boolean r0 = r0.C()     // Catch: java.lang.Exception -> L268
            if (r0 == 0) goto L218
            java.lang.String r0 = "2"
            goto L21a
        L218:
            java.lang.String r0 = "4"
        L21a:
            java.lang.String r2 = "sp_http"
            r1.put(r2, r0)     // Catch: java.lang.Exception -> L268
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            com.tkay.core.api.IExHandler r0 = r0.b()     // Catch: java.lang.Exception -> L268
            if (r0 == 0) goto L22c
            r0.fillRequestDeviceData(r1, r9)     // Catch: java.lang.Exception -> L268
        L22c:
            java.lang.String r0 = com.tkay.core.common.l.d.j()     // Catch: java.lang.Exception -> L268
            boolean r2 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L268
            if (r2 != 0) goto L23f
            java.lang.String r2 = "os_fw"
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Exception -> L268
            r1.put(r2, r0)     // Catch: java.lang.Exception -> L268
        L23f:
            r0 = 4
            r9 = r9 & r0
            if (r9 != r0) goto L268
            com.tkay.core.common.b.m r9 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            android.content.Context r9 = r9.f()     // Catch: java.lang.Exception -> L268
            com.tkay.core.c.b r9 = com.tkay.core.c.b.a(r9)     // Catch: java.lang.Exception -> L268
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L268
            java.lang.String r0 = r0.o()     // Catch: java.lang.Exception -> L268
            com.tkay.core.c.a r9 = r9.b(r0)     // Catch: java.lang.Exception -> L268
            if (r9 == 0) goto L268
            org.json.JSONObject r9 = r9.am()     // Catch: java.lang.Exception -> L268
            if (r9 == 0) goto L268
            java.lang.String r0 = "a_c"
            r1.put(r0, r9)     // Catch: java.lang.Exception -> L268
        L268:
            return r1
    }

    public static org.json.JSONObject a(java.lang.String r1) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.util.Map r1 = r0.d(r1)
            org.json.JSONObject r1 = a(r1)
            return r1
    }

    public static org.json.JSONObject a(java.util.Map<java.lang.String, java.lang.Object> r4) {
            r0 = 0
            if (r4 == 0) goto L2b
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2b
            r1.<init>()     // Catch: java.lang.Throwable -> L2b
            java.util.Set r0 = r4.keySet()     // Catch: java.lang.Throwable -> L2a
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L2a
        L10:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Throwable -> L2a
            if (r2 == 0) goto L2a
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> L2a
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L2a
            java.lang.Object r3 = r4.get(r2)     // Catch: java.lang.Throwable -> L2a
            if (r3 == 0) goto L10
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L10
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L10
            goto L10
        L2a:
            r0 = r1
        L2b:
            return r0
    }

    private static void a(android.content.Context r4, org.json.JSONObject r5) {
            int r0 = com.tkay.core.common.h.c.an
            java.lang.String r1 = "ms_type"
            r2 = -1
            if (r0 == r2) goto Ld
            if (r0 <= 0) goto L26
            r5.put(r1, r0)
            goto L26
        Ld:
            boolean r0 = com.tkay.core.common.l.g.c(r4)
            boolean r4 = com.tkay.core.common.l.g.b(r4)
            if (r4 == 0) goto L19
            r3 = 2
            goto L1a
        L19:
            r3 = r0
        L1a:
            if (r0 == 0) goto L1f
            if (r4 == 0) goto L1f
            r3 = 3
        L1f:
            if (r3 <= 0) goto L24
            r5.put(r1, r3)
        L24:
            com.tkay.core.common.h.c.an = r3
        L26:
            int r4 = com.tkay.core.common.h.c.ao
            java.lang.String r0 = "mini_sdk"
            r1 = 1
            if (r4 == r2) goto L33
            if (r4 != r1) goto L3e
            r5.put(r0, r4)
            return
        L33:
            boolean r4 = com.tkay.core.common.l.g.c()
            if (r4 != r1) goto L3c
            r5.put(r0, r1)
        L3c:
            com.tkay.core.common.h.c.ao = r4
        L3e:
            return
    }

    public static void a(org.json.JSONObject r5) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L43
            com.tkay.core.common.f.al r0 = r0.K()     // Catch: java.lang.Throwable -> L43
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L43
            r1.<init>()     // Catch: java.lang.Throwable -> L43
            java.lang.String r2 = "has_sdk"
            int r3 = r0.b()     // Catch: java.lang.Throwable -> L43
            r4 = 1
            if (r3 != r4) goto L17
            goto L18
        L17:
            r4 = 0
        L18:
            r1.put(r2, r4)     // Catch: java.lang.Throwable -> L43
            java.lang.String r2 = "sdk_ver"
            int r3 = r0.c()     // Catch: java.lang.Throwable -> L43
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L43
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L43
            java.lang.String r2 = "sdk_api_ver"
            int r0 = r0.d()     // Catch: java.lang.Throwable -> L43
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L43
            r1.put(r2, r0)     // Catch: java.lang.Throwable -> L43
            java.lang.String r0 = "open_app_id"
            java.lang.String r2 = com.tkay.core.common.l.d.l()     // Catch: java.lang.Throwable -> L43
            r1.put(r0, r2)     // Catch: java.lang.Throwable -> L43
            java.lang.String r0 = "wx_data"
            r5.put(r0, r1)     // Catch: java.lang.Throwable -> L43
        L43:
            return
    }

    public static org.json.JSONObject b() {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.util.Map r0 = r0.l()
            org.json.JSONObject r0 = a(r0)
            return r0
    }

    private static void b(org.json.JSONObject r5) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.core.api.ATPrivacyConfig r0 = r0.I()
            if (r0 == 0) goto L41
            java.lang.String r1 = r0.getDevGaid()
            java.lang.String r2 = r0.getDevImei()
            java.lang.String r0 = r0.getDevOaid()
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 != 0) goto L26
            java.lang.String r4 = "set_gaid"
            r3.put(r4, r1)
        L26:
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L31
            java.lang.String r1 = "set_imei"
            r3.put(r1, r2)
        L31:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L3c
            java.lang.String r1 = "set_oaid"
            r3.put(r1, r0)
        L3c:
            java.lang.String r0 = "device_set"
            r5.put(r0, r3)
        L41:
            return
    }
}
