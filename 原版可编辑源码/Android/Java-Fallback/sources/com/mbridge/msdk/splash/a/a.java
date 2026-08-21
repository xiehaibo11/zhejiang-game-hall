package com.mbridge.msdk.splash.a;

public final class a {
    public java.lang.String a;
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;
    public java.lang.String e;
    public java.lang.String f;
    public java.lang.String g;
    public java.lang.String h;
    public java.lang.String i;
    public java.lang.String j;
    public java.lang.String k;
    public java.lang.String l;
    public java.lang.String m;
    public java.lang.String n;
    public java.lang.String o;
    public java.lang.String p;
    public java.lang.String q;

    public a(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "android"
            r2.c = r0
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.y()
            r2.a = r0
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.C()
            r2.b = r0
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.b(r3)
            r2.d = r0
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.g(r3)
            r2.e = r0
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.E()
            r2.f = r0
            int r0 = com.mbridge.msdk.foundation.tools.v.D(r3)
            java.lang.String r1 = java.lang.String.valueOf(r0)
            r2.h = r1
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.a(r3, r0)
            r2.i = r0
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.C(r3)
            r2.j = r0
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.l()
            r2.k = r0
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.k()
            r2.l = r0
            int r0 = com.mbridge.msdk.foundation.tools.ae.h(r3)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r2.m = r0
            int r0 = com.mbridge.msdk.foundation.tools.ae.g(r3)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r2.n = r0
            float r0 = com.mbridge.msdk.foundation.tools.ae.d(r3)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r2.p = r0
            android.content.res.Resources r0 = r3.getResources()
            android.content.res.Configuration r0 = r0.getConfiguration()
            int r0 = r0.orientation
            r1 = 2
            if (r0 != r1) goto L7f
            java.lang.String r0 = "landscape"
            r2.o = r0
            goto L83
        L7f:
            java.lang.String r0 = "portrait"
            r2.o = r0
        L83:
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.a(r3)
            r2.g = r3
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.J()
            r2.q = r3
            return
    }

    public final org.json.JSONObject a() {
            r5 = this;
            java.lang.String r0 = ""
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r2 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: org.json.JSONException -> L119
            java.lang.String r3 = "authority_general_data"
            boolean r2 = r2.a(r3)     // Catch: org.json.JSONException -> L119
            if (r2 == 0) goto L91
            java.lang.String r2 = "device"
            java.lang.String r3 = r5.a     // Catch: org.json.JSONException -> L119
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L119
            java.lang.String r2 = "system_version"
            java.lang.String r3 = r5.b     // Catch: org.json.JSONException -> L119
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L119
            java.lang.String r2 = "network_type"
            java.lang.String r3 = r5.h     // Catch: org.json.JSONException -> L119
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L119
            java.lang.String r2 = "network_type_str"
            java.lang.String r3 = r5.i     // Catch: org.json.JSONException -> L119
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L119
            java.lang.String r2 = "device_ua"
            java.lang.String r3 = r5.j     // Catch: org.json.JSONException -> L119
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L119
            java.lang.String r2 = "has_wx"
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: org.json.JSONException -> L119
            android.content.Context r3 = r3.j()     // Catch: org.json.JSONException -> L119
            int r3 = com.mbridge.msdk.foundation.tools.v.r(r3)     // Catch: org.json.JSONException -> L119
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L119
            java.lang.String r2 = "integrated_wx"
            int r3 = com.mbridge.msdk.foundation.tools.v.v()     // Catch: org.json.JSONException -> L119
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L119
            java.lang.String r2 = "opensdk_ver"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L119
            r3.<init>()     // Catch: org.json.JSONException -> L119
            int r4 = com.mbridge.msdk.foundation.tools.v.w()     // Catch: org.json.JSONException -> L119
            r3.append(r4)     // Catch: org.json.JSONException -> L119
            r3.append(r0)     // Catch: org.json.JSONException -> L119
            java.lang.String r3 = r3.toString()     // Catch: org.json.JSONException -> L119
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L119
            java.lang.String r2 = "wx_api_ver"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L119
            r3.<init>()     // Catch: org.json.JSONException -> L119
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: org.json.JSONException -> L119
            java.lang.String r4 = r4.m()     // Catch: org.json.JSONException -> L119
            int r4 = com.mbridge.msdk.foundation.tools.v.g(r4)     // Catch: org.json.JSONException -> L119
            r3.append(r4)     // Catch: org.json.JSONException -> L119
            r3.append(r0)     // Catch: org.json.JSONException -> L119
            java.lang.String r0 = r3.toString()     // Catch: org.json.JSONException -> L119
            r1.put(r2, r0)     // Catch: org.json.JSONException -> L119
            java.lang.String r0 = "emu"
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.u()     // Catch: org.json.JSONException -> L119
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L119
        L91:
            java.lang.String r0 = "plantform"
            java.lang.String r2 = r5.c     // Catch: org.json.JSONException -> L119
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L119
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: org.json.JSONException -> L119
            java.lang.String r2 = "authority_imei_mac"
            boolean r0 = r0.a(r2)     // Catch: org.json.JSONException -> L119
            if (r0 == 0) goto Lab
            java.lang.String r0 = "device_imei"
            java.lang.String r2 = r5.d     // Catch: org.json.JSONException -> L119
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L119
        Lab:
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: org.json.JSONException -> L119
            java.lang.String r2 = "authority_android_id"
            boolean r0 = r0.a(r2)     // Catch: org.json.JSONException -> L119
            if (r0 == 0) goto Lbe
            java.lang.String r0 = "android_id"
            java.lang.String r2 = r5.e     // Catch: org.json.JSONException -> L119
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L119
        Lbe:
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r0 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: org.json.JSONException -> L119
            java.lang.String r2 = "authority_device_id"
            boolean r0 = r0.a(r2)     // Catch: org.json.JSONException -> L119
            if (r0 == 0) goto Ld8
            java.lang.String r0 = "google_ad_id"
            java.lang.String r2 = r5.f     // Catch: org.json.JSONException -> L119
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L119
            java.lang.String r0 = "oaid"
            java.lang.String r2 = r5.g     // Catch: org.json.JSONException -> L119
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L119
        Ld8:
            java.lang.String r0 = "appkey"
            java.lang.String r2 = r5.k     // Catch: org.json.JSONException -> L119
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L119
            java.lang.String r0 = "appId"
            java.lang.String r2 = r5.l     // Catch: org.json.JSONException -> L119
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L119
            java.lang.String r0 = "screen_width"
            java.lang.String r2 = r5.m     // Catch: org.json.JSONException -> L119
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L119
            java.lang.String r0 = "screen_height"
            java.lang.String r2 = r5.n     // Catch: org.json.JSONException -> L119
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L119
            java.lang.String r0 = "orientation"
            java.lang.String r2 = r5.o     // Catch: org.json.JSONException -> L119
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L119
            java.lang.String r0 = "scale"
            java.lang.String r2 = r5.p     // Catch: org.json.JSONException -> L119
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L119
            int r0 = com.mbridge.msdk.foundation.tools.v.P()     // Catch: org.json.JSONException -> L119
            if (r0 == 0) goto L111
            java.lang.String r0 = "tun"
            int r2 = com.mbridge.msdk.foundation.tools.v.P()     // Catch: org.json.JSONException -> L119
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L119
        L111:
            java.lang.String r0 = "f"
            java.lang.String r2 = r5.q     // Catch: org.json.JSONException -> L119
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L119
            goto L11d
        L119:
            r0 = move-exception
            r0.printStackTrace()
        L11d:
            return r1
    }
}
