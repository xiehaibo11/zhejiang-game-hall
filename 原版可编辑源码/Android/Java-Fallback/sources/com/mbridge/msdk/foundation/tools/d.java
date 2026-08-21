package com.mbridge.msdk.foundation.tools;

public final class d {
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
    public java.lang.String r;
    public java.lang.String s;
    public java.lang.String t;
    public java.lang.String u;
    public int v;
    public org.json.JSONObject w;

    public d(android.content.Context r3) {
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
            r2.g = r1
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.a(r3, r0)
            r2.h = r0
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.C(r3)
            r2.i = r0
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.l()
            r2.j = r0
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r0 = r0.k()
            r2.k = r0
            int r0 = com.mbridge.msdk.foundation.tools.ae.h(r3)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r2.l = r0
            int r0 = com.mbridge.msdk.foundation.tools.ae.g(r3)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r2.m = r0
            float r0 = com.mbridge.msdk.foundation.tools.ae.d(r3)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r2.q = r0
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            org.json.JSONObject r0 = r0.o()
            java.lang.String r0 = r0.toString()
            r2.s = r0
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.z()
            r2.u = r0
            int r0 = com.mbridge.msdk.foundation.tools.ae.e()
            r2.v = r0
            android.content.res.Resources r0 = r3.getResources()
            android.content.res.Configuration r0 = r0.getConfiguration()
            int r0 = r0.orientation
            r1 = 2
            if (r0 != r1) goto L99
            java.lang.String r0 = "landscape"
            r2.n = r0
            goto L9d
        L99:
            java.lang.String r0 = "portrait"
            r2.n = r0
        L9d:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.a(r3)
            r2.r = r0
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.t
            r2.o = r0
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.u
            r2.p = r0
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.v.J()
            r2.t = r0
            r0 = 1
            org.json.JSONObject r3 = r2.a(r3, r0)
            r2.w = r3
            return
    }

    private org.json.JSONObject a(android.content.Context r7, boolean r8) {
            r6 = this;
            java.lang.String r0 = ""
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r2 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: org.json.JSONException -> L105
            java.lang.String r3 = "authority_general_data"
            boolean r2 = r2.a(r3)     // Catch: org.json.JSONException -> L105
            if (r2 == 0) goto L55
            java.lang.String r2 = "cid"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L105
            r3.<init>()     // Catch: org.json.JSONException -> L105
            int r4 = com.mbridge.msdk.foundation.tools.v.a()     // Catch: org.json.JSONException -> L105
            r3.append(r4)     // Catch: org.json.JSONException -> L105
            r3.append(r0)     // Catch: org.json.JSONException -> L105
            java.lang.String r3 = r3.toString()     // Catch: org.json.JSONException -> L105
            r1.put(r2, r3)     // Catch: org.json.JSONException -> L105
            java.lang.String r2 = "dmt"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L105
            r3.<init>()     // Catch: org.json.JSONException -> L105
            int r4 = com.mbridge.msdk.foundation.tools.v.L()     // Catch: org.json.JSONException -> L105
            r3.append(r4)     // Catch: org.json.JSONException -> L105
            r3.append(r0)     // Catch: org.json.JSONException -> L105
            java.lang.String r0 = r3.toString()     // Catch: org.json.JSONException -> L105
            r1.put(r2, r0)     // Catch: org.json.JSONException -> L105
            java.lang.String r0 = "dmf"
            int r2 = com.mbridge.msdk.foundation.tools.v.K()     // Catch: org.json.JSONException -> L105
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L105
            java.lang.String r0 = "ct"
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.s()     // Catch: org.json.JSONException -> L105
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L105
        L55:
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()     // Catch: org.json.JSONException -> L105
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: org.json.JSONException -> L105
            java.lang.String r2 = r2.k()     // Catch: org.json.JSONException -> L105
            com.mbridge.msdk.c.a r0 = r0.b(r2)     // Catch: org.json.JSONException -> L105
            if (r0 == 0) goto L104
            if (r7 != 0) goto L6b
            goto L104
        L6b:
            int r2 = r0.Z()     // Catch: org.json.JSONException -> L105
            r3 = 1
            if (r2 != r3) goto Lc1
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.b(r7)     // Catch: org.json.JSONException -> L105
            java.lang.String r4 = "authority_imei_mac"
            if (r2 == 0) goto L8d
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r2 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: org.json.JSONException -> L105
            boolean r2 = r2.a(r4)     // Catch: org.json.JSONException -> L105
            if (r2 == 0) goto L8d
            java.lang.String r2 = "imei"
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.b(r7)     // Catch: org.json.JSONException -> L105
            r1.put(r2, r5)     // Catch: org.json.JSONException -> L105
        L8d:
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.i(r7)     // Catch: org.json.JSONException -> L105
            if (r2 == 0) goto La6
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r2 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: org.json.JSONException -> L105
            boolean r2 = r2.a(r4)     // Catch: org.json.JSONException -> L105
            if (r2 == 0) goto La6
            java.lang.String r2 = "mac"
            java.lang.String r5 = com.mbridge.msdk.foundation.tools.v.i(r7)     // Catch: org.json.JSONException -> L105
            r1.put(r2, r5)     // Catch: org.json.JSONException -> L105
        La6:
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.c(r7)     // Catch: org.json.JSONException -> L105
            if (r2 == 0) goto Lc1
            if (r8 == 0) goto Lc1
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r8 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: org.json.JSONException -> L105
            boolean r8 = r8.a(r4)     // Catch: org.json.JSONException -> L105
            if (r8 == 0) goto Lc1
            java.lang.String r8 = "imsi"
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.c(r7)     // Catch: org.json.JSONException -> L105
            r1.put(r8, r2)     // Catch: org.json.JSONException -> L105
        Lc1:
            int r8 = r0.G()     // Catch: org.json.JSONException -> L105
            if (r8 != r3) goto Le2
            java.lang.String r8 = com.mbridge.msdk.foundation.tools.v.a(r7)     // Catch: org.json.JSONException -> L105
            if (r8 == 0) goto Le2
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r8 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: org.json.JSONException -> L105
            java.lang.String r2 = "authority_device_id"
            boolean r8 = r8.a(r2)     // Catch: org.json.JSONException -> L105
            if (r8 == 0) goto Le2
            java.lang.String r8 = "oaid"
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.a(r7)     // Catch: org.json.JSONException -> L105
            r1.put(r8, r2)     // Catch: org.json.JSONException -> L105
        Le2:
            int r8 = r0.aa()     // Catch: org.json.JSONException -> L105
            if (r8 != r3) goto L10f
            java.lang.String r8 = com.mbridge.msdk.foundation.tools.v.g(r7)     // Catch: org.json.JSONException -> L105
            if (r8 == 0) goto L10f
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r8 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: org.json.JSONException -> L105
            java.lang.String r0 = "authority_android_id"
            boolean r8 = r8.a(r0)     // Catch: org.json.JSONException -> L105
            if (r8 == 0) goto L10f
            java.lang.String r8 = "android_id"
            java.lang.String r7 = com.mbridge.msdk.foundation.tools.v.g(r7)     // Catch: org.json.JSONException -> L105
            r1.put(r8, r7)     // Catch: org.json.JSONException -> L105
            goto L10f
        L104:
            return r1
        L105:
            r7 = move-exception
            java.lang.String r7 = r7.getMessage()
            java.lang.String r8 = "DomainDeviceInfo"
            com.mbridge.msdk.foundation.tools.z.d(r8, r7)
        L10f:
            return r1
    }

    public final org.json.JSONObject a() {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: org.json.JSONException -> L183
            java.lang.String r2 = "authority_general_data"
            boolean r1 = r1.a(r2)     // Catch: org.json.JSONException -> L183
            java.lang.String r2 = ""
            if (r1 == 0) goto L98
            java.lang.String r1 = "device"
            java.lang.String r3 = r5.a     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "system_version"
            java.lang.String r3 = r5.b     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "network_type"
            java.lang.String r3 = r5.g     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "network_type_str"
            java.lang.String r3 = r5.h     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "device_ua"
            java.lang.String r3 = r5.i     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "has_wx"
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: org.json.JSONException -> L183
            android.content.Context r3 = r3.j()     // Catch: org.json.JSONException -> L183
            int r3 = com.mbridge.msdk.foundation.tools.v.r(r3)     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "integrated_wx"
            int r3 = com.mbridge.msdk.foundation.tools.v.v()     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "opensdk_ver"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L183
            r3.<init>()     // Catch: org.json.JSONException -> L183
            int r4 = com.mbridge.msdk.foundation.tools.v.w()     // Catch: org.json.JSONException -> L183
            r3.append(r4)     // Catch: org.json.JSONException -> L183
            r3.append(r2)     // Catch: org.json.JSONException -> L183
            java.lang.String r3 = r3.toString()     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "wx_api_ver"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L183
            r3.<init>()     // Catch: org.json.JSONException -> L183
            com.mbridge.msdk.foundation.controller.a r4 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: org.json.JSONException -> L183
            java.lang.String r4 = r4.m()     // Catch: org.json.JSONException -> L183
            int r4 = com.mbridge.msdk.foundation.tools.v.g(r4)     // Catch: org.json.JSONException -> L183
            r3.append(r4)     // Catch: org.json.JSONException -> L183
            r3.append(r2)     // Catch: org.json.JSONException -> L183
            java.lang.String r3 = r3.toString()     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "emu"
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.v.u()     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "brand"
            java.lang.String r3 = r5.u     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
        L98:
            java.lang.String r1 = "plantform"
            java.lang.String r3 = r5.c     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: org.json.JSONException -> L183
            java.lang.String r3 = "authority_imei_mac"
            boolean r1 = r1.a(r3)     // Catch: org.json.JSONException -> L183
            if (r1 == 0) goto Lb2
            java.lang.String r1 = "device_imei"
            java.lang.String r3 = r5.d     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
        Lb2:
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: org.json.JSONException -> L183
            java.lang.String r3 = "authority_android_id"
            boolean r1 = r1.a(r3)     // Catch: org.json.JSONException -> L183
            if (r1 == 0) goto Lc5
            java.lang.String r1 = "android_id"
            java.lang.String r3 = r5.e     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
        Lc5:
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: org.json.JSONException -> L183
            java.lang.String r3 = "authority_device_id"
            boolean r1 = r1.a(r3)     // Catch: org.json.JSONException -> L183
            if (r1 == 0) goto Ldf
            java.lang.String r1 = "google_ad_id"
            java.lang.String r3 = r5.f     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "oaid"
            java.lang.String r3 = r5.r     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
        Ldf:
            java.lang.String r1 = "appkey"
            java.lang.String r3 = r5.j     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "appId"
            java.lang.String r3 = r5.k     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "screen_width"
            java.lang.String r3 = r5.l     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "screen_height"
            java.lang.String r3 = r5.m     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "orientation"
            java.lang.String r3 = r5.n     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "scale"
            java.lang.String r3 = r5.q     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "b"
            java.lang.String r3 = r5.o     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "c"
            java.lang.String r3 = r5.p     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "web_env"
            java.lang.String r3 = r5.s     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "f"
            java.lang.String r3 = r5.t     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = "misk_spt"
            int r3 = r5.v     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            int r1 = com.mbridge.msdk.foundation.tools.v.P()     // Catch: org.json.JSONException -> L183
            if (r1 == 0) goto L14a
            java.lang.String r1 = "tun"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L183
            r3.<init>()     // Catch: org.json.JSONException -> L183
            int r4 = com.mbridge.msdk.foundation.tools.v.P()     // Catch: org.json.JSONException -> L183
            r3.append(r4)     // Catch: org.json.JSONException -> L183
            r3.append(r2)     // Catch: org.json.JSONException -> L183
            java.lang.String r3 = r3.toString()     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
        L14a:
            java.lang.String r1 = "dvi"
            org.json.JSONObject r3 = r5.w     // Catch: org.json.JSONException -> L183
            java.lang.String r3 = r3.toString()     // Catch: org.json.JSONException -> L183
            java.lang.String r3 = com.mbridge.msdk.foundation.tools.t.a(r3)     // Catch: org.json.JSONException -> L183
            r0.put(r1, r3)     // Catch: org.json.JSONException -> L183
            java.lang.String r1 = com.mbridge.msdk.foundation.same.net.g.d.h     // Catch: org.json.JSONException -> L183
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L183
            r3.<init>()     // Catch: org.json.JSONException -> L183
            com.mbridge.msdk.foundation.controller.authoritycontroller.a r4 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.a()     // Catch: org.json.JSONException -> L183
            int r4 = r4.f()     // Catch: org.json.JSONException -> L183
            r3.append(r4)     // Catch: org.json.JSONException -> L183
            r3.append(r2)     // Catch: org.json.JSONException -> L183
            java.lang.String r2 = r3.toString()     // Catch: org.json.JSONException -> L183
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L183
            boolean r1 = com.mbridge.msdk.foundation.controller.authoritycontroller.a.h()     // Catch: org.json.JSONException -> L183
            if (r1 != 0) goto L187
            java.lang.String r1 = "dev_source"
            java.lang.String r2 = "2"
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L183
            goto L187
        L183:
            r1 = move-exception
            r1.printStackTrace()
        L187:
            return r0
    }
}
