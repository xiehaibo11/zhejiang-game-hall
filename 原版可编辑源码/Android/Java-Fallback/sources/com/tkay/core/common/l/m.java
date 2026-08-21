package com.tkay.core.common.l;

public final class m {
    public static final java.lang.String A = "it_src";
    public static final java.lang.String a = "platform";
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

    public m() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.json.JSONObject a() {
            org.json.JSONObject r0 = b()
            org.json.JSONObject r1 = c()
            java.lang.String r2 = "app_id"
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()     // Catch: org.json.JSONException -> L2d
            java.lang.String r3 = r3.o()     // Catch: org.json.JSONException -> L2d
            r0.put(r2, r3)     // Catch: org.json.JSONException -> L2d
            java.util.Iterator r2 = r1.keys()     // Catch: org.json.JSONException -> L2d
        L19:
            boolean r3 = r2.hasNext()     // Catch: org.json.JSONException -> L2d
            if (r3 == 0) goto L2d
            java.lang.Object r3 = r2.next()     // Catch: org.json.JSONException -> L2d
            java.lang.String r3 = (java.lang.String) r3     // Catch: org.json.JSONException -> L2d
            java.lang.Object r4 = r1.opt(r3)     // Catch: org.json.JSONException -> L2d
            r0.put(r3, r4)     // Catch: org.json.JSONException -> L2d
            goto L19
        L2d:
            return r0
    }

    private static org.json.JSONObject b() {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            java.lang.String r2 = "platform"
            r3 = 1
            r0.put(r2, r3)     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = "os_vn"
            java.lang.String r4 = com.tkay.core.common.l.d.e()     // Catch: java.lang.Exception -> L105
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = "os_vc"
            java.lang.String r4 = com.tkay.core.common.l.d.d()     // Catch: java.lang.Exception -> L105
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = "package_name"
            java.lang.String r4 = com.tkay.core.common.l.d.k(r1)     // Catch: java.lang.Exception -> L105
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = "app_vn"
            java.lang.String r4 = com.tkay.core.common.l.d.i(r1)     // Catch: java.lang.Exception -> L105
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = "app_vc"
            java.lang.String r4 = com.tkay.core.common.l.d.h(r1)     // Catch: java.lang.Exception -> L105
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = "brand"
            java.lang.String r4 = com.tkay.core.common.l.d.b()     // Catch: java.lang.Exception -> L105
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = "model"
            java.lang.String r4 = com.tkay.core.common.l.d.a()     // Catch: java.lang.Exception -> L105
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = "screen"
            java.lang.String r4 = com.tkay.core.common.l.d.j(r1)     // Catch: java.lang.Exception -> L105
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = "network_type"
            java.lang.String r4 = com.tkay.core.common.l.d.m(r1)     // Catch: java.lang.Exception -> L105
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Exception -> L105
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = "mnc"
            java.lang.String r4 = com.tkay.core.common.l.d.c(r1)     // Catch: java.lang.Exception -> L105
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = "mcc"
            java.lang.String r4 = com.tkay.core.common.l.d.b(r1)     // Catch: java.lang.Exception -> L105
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = "language"
            java.lang.String r4 = com.tkay.core.common.l.d.f(r1)     // Catch: java.lang.Exception -> L105
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = "timezone"
            java.lang.String r4 = com.tkay.core.common.l.d.c()     // Catch: java.lang.Exception -> L105
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = "sdk_ver"
            java.lang.String r4 = com.tkay.core.common.l.g.a()     // Catch: java.lang.Exception -> L105
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = "gp_ver"
            java.lang.String r4 = com.tkay.core.common.l.d.n(r1)     // Catch: java.lang.Exception -> L105
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = "ua"
            java.lang.String r4 = com.tkay.core.common.l.d.i()     // Catch: java.lang.Exception -> L105
            r0.put(r2, r4)     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = "orient"
            int r1 = com.tkay.core.common.l.d.g(r1)     // Catch: java.lang.Exception -> L105
            r0.put(r2, r1)     // Catch: java.lang.Exception -> L105
            java.lang.String r1 = "system"
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L105
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L105
            java.lang.String r1 = r1.m()     // Catch: java.lang.Exception -> L105
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L105
            if (r1 != 0) goto Ld0
            java.lang.String r1 = "channel"
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = r2.m()     // Catch: java.lang.Exception -> L105
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L105
        Ld0:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L105
            java.lang.String r1 = r1.n()     // Catch: java.lang.Exception -> L105
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L105
            if (r1 != 0) goto Leb
            java.lang.String r1 = "sub_channel"
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = r2.n()     // Catch: java.lang.Exception -> L105
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L105
        Leb:
            java.lang.String r1 = "upid"
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = r2.w()     // Catch: java.lang.Exception -> L105
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L105
            java.lang.String r1 = "ps_id"
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L105
            java.lang.String r2 = r2.q()     // Catch: java.lang.Exception -> L105
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L105
        L105:
            return r0
    }

    private static org.json.JSONObject c() {
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
            java.lang.String r5 = r3.F()     // Catch: java.lang.Exception -> L83
            goto L29
        L28:
            r5 = r4
        L29:
            boolean r6 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L83
            r7 = 1
            if (r6 != 0) goto L43
            org.json.JSONObject r6 = new org.json.JSONObject     // Catch: java.lang.Exception -> L43
            r6.<init>(r5)     // Catch: java.lang.Exception -> L43
            boolean r5 = r6.isNull(r0)     // Catch: java.lang.Exception -> L43
            if (r5 != 0) goto L43
            int r0 = r6.optInt(r0)     // Catch: java.lang.Exception -> L43
            if (r0 != r7) goto L42
            goto L43
        L42:
            r7 = 0
        L43:
            java.lang.String r0 = "android_id"
            if (r7 == 0) goto L4c
            java.lang.String r5 = com.tkay.core.common.l.d.d(r1)     // Catch: java.lang.Exception -> L83
            goto L4d
        L4c:
            r5 = r4
        L4d:
            r2.put(r0, r5)     // Catch: java.lang.Exception -> L83
            java.lang.String r0 = "gaid"
            java.lang.String r5 = com.tkay.core.common.l.d.f()     // Catch: java.lang.Exception -> L83
            r2.put(r0, r5)     // Catch: java.lang.Exception -> L83
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L83
            com.tkay.core.api.IExHandler r0 = r0.b()     // Catch: java.lang.Exception -> L83
            java.lang.String r5 = "is_cn_sdk"
            if (r0 == 0) goto L6e
            r0.fillRequestData(r2, r3)     // Catch: java.lang.Exception -> L83
            java.lang.String r0 = "1"
            r2.put(r5, r0)     // Catch: java.lang.Exception -> L83
            goto L73
        L6e:
            java.lang.String r0 = "0"
            r2.put(r5, r0)     // Catch: java.lang.Exception -> L83
        L73:
            java.lang.String r0 = com.tkay.core.common.l.d.l(r1)     // Catch: java.lang.Exception -> L83
            java.lang.String r1 = "it_src"
            boolean r3 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L83
            if (r3 != 0) goto L80
            r4 = r0
        L80:
            r2.put(r1, r4)     // Catch: java.lang.Exception -> L83
        L83:
            return r2
    }
}
