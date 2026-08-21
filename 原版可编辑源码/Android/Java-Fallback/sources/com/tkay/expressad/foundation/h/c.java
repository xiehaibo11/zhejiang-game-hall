package com.tkay.expressad.foundation.h;

public class c {
    private static final java.lang.String y = "portrait";
    private static final java.lang.String z = "landscape";
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
    public java.lang.String w;
    public org.json.JSONObject x;

    public c(android.content.Context r5) {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "android"
            r4.c = r0
            java.lang.String r0 = com.tkay.expressad.foundation.h.k.b()
            r4.a = r0
            java.lang.String r0 = com.tkay.expressad.foundation.h.k.c()
            r4.b = r0
            java.lang.String r0 = com.tkay.core.common.l.d.d(r5)
            r4.d = r0
            java.lang.String r0 = com.tkay.core.common.l.d.f()
            r4.f = r0
            int r0 = com.tkay.expressad.foundation.h.k.a()
            java.lang.String r1 = java.lang.String.valueOf(r0)
            r4.g = r1
            java.lang.String r0 = com.tkay.expressad.foundation.h.k.a(r5, r0)
            r4.h = r0
            java.lang.String r0 = com.tkay.core.common.l.d.i()
            r4.i = r0
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r0 = r0.f()
            r4.j = r0
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r0 = r0.e()
            r4.k = r0
            int r0 = com.tkay.expressad.foundation.h.t.f(r5)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r4.l = r0
            int r0 = com.tkay.expressad.foundation.h.t.e(r5)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r4.m = r0
            float r0 = com.tkay.expressad.foundation.h.t.c(r5)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r4.r = r0
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            org.json.JSONObject r0 = r0.i()
            java.lang.String r0 = r0.toString()
            r4.s = r0
            java.lang.String r0 = com.tkay.core.common.l.d.b()
            r4.u = r0
            com.tkay.core.common.p r0 = com.tkay.core.common.p.a()
            int r0 = r0.c()
            r4.v = r0
            android.content.res.Resources r5 = r5.getResources()
            android.content.res.Configuration r5 = r5.getConfiguration()
            int r5 = r5.orientation
            r0 = 2
            if (r5 != r0) goto L97
            java.lang.String r5 = "landscape"
            r4.n = r5
            goto L9b
        L97:
            java.lang.String r5 = "portrait"
            r4.n = r5
        L9b:
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
            com.tkay.core.api.IExHandler r5 = r5.b()
            if (r5 == 0) goto Lac
            java.lang.String r1 = "at_device1|||at_device12|||at_device3"
            java.lang.String r5 = r5.fillCDataParam(r1)
            goto Lae
        Lac:
            java.lang.String r5 = "|||"
        Lae:
            java.lang.String r1 = "\\|\\|\\|"
            java.lang.String[] r5 = r5.split(r1)
            if (r5 == 0) goto Ld3
            int r1 = r5.length
            java.lang.String r2 = ""
            if (r1 <= 0) goto Lbf
            r1 = 0
            r1 = r5[r1]
            goto Lc0
        Lbf:
            r1 = r2
        Lc0:
            r4.e = r1
            int r1 = r5.length
            r3 = 1
            if (r1 <= r3) goto Lc9
            r1 = r5[r3]
            goto Lca
        Lc9:
            r1 = r2
        Lca:
            r4.w = r1
            int r1 = r5.length
            if (r1 <= r0) goto Ld1
            r2 = r5[r0]
        Ld1:
            r4.q = r2
        Ld3:
            java.lang.String r5 = com.tkay.expressad.foundation.g.a.co
            r4.o = r5
            java.lang.String r5 = com.tkay.expressad.foundation.g.a.cp
            r4.p = r5
            java.lang.String r5 = com.tkay.expressad.foundation.h.k.e()
            r4.t = r5
            org.json.JSONObject r5 = r4.b()
            r4.x = r5
            return
    }

    private org.json.JSONObject b() {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "cid"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L65
            r2.<init>()     // Catch: org.json.JSONException -> L65
            int r3 = com.tkay.expressad.foundation.h.k.i()     // Catch: org.json.JSONException -> L65
            r2.append(r3)     // Catch: org.json.JSONException -> L65
            java.lang.String r2 = r2.toString()     // Catch: org.json.JSONException -> L65
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L65
            java.lang.String r1 = "dmt"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L65
            r2.<init>()     // Catch: org.json.JSONException -> L65
            int r3 = com.tkay.expressad.foundation.h.k.f()     // Catch: org.json.JSONException -> L65
            r2.append(r3)     // Catch: org.json.JSONException -> L65
            java.lang.String r2 = r2.toString()     // Catch: org.json.JSONException -> L65
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L65
            java.lang.String r1 = "dmf"
            int r2 = com.tkay.expressad.foundation.h.k.g()     // Catch: org.json.JSONException -> L65
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L65
            java.lang.String r1 = "ct"
            java.lang.String r2 = com.tkay.expressad.foundation.h.k.h()     // Catch: org.json.JSONException -> L65
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L65
            java.lang.String r1 = "aW1laQ=="
            java.lang.String r1 = com.tkay.core.common.l.c.b(r1)     // Catch: org.json.JSONException -> L65
            java.lang.String r2 = r4.e     // Catch: org.json.JSONException -> L65
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L65
            java.lang.String r1 = "bWFj"
            java.lang.String r1 = com.tkay.core.common.l.c.b(r1)     // Catch: org.json.JSONException -> L65
            java.lang.String r2 = r4.w     // Catch: org.json.JSONException -> L65
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L65
            java.lang.String r1 = "oaid"
            java.lang.String r2 = r4.q     // Catch: org.json.JSONException -> L65
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L65
            java.lang.String r1 = "android_id"
            java.lang.String r2 = r4.d     // Catch: org.json.JSONException -> L65
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L65
        L65:
            return r0
    }

    public org.json.JSONObject a() {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "device"
            java.lang.String r2 = r5.a     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "system_version"
            java.lang.String r2 = r5.b     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "network_type"
            java.lang.String r2 = r5.g     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "network_type_str"
            java.lang.String r2 = r5.h     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "device_ua"
            java.lang.String r2 = r5.i     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: org.json.JSONException -> Lf9
            com.tkay.core.common.f.al r1 = r1.K()     // Catch: org.json.JSONException -> Lf9
            if (r1 == 0) goto L6e
            java.lang.String r2 = "has_wx"
            int r3 = r1.a()     // Catch: org.json.JSONException -> Lf9
            r0.put(r2, r3)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r2 = "integrated_wx"
            int r3 = r1.b()     // Catch: org.json.JSONException -> Lf9
            r0.put(r2, r3)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r2 = "opensdk_ver"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> Lf9
            r3.<init>()     // Catch: org.json.JSONException -> Lf9
            int r4 = r1.c()     // Catch: org.json.JSONException -> Lf9
            r3.append(r4)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r3 = r3.toString()     // Catch: org.json.JSONException -> Lf9
            r0.put(r2, r3)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r2 = "wx_api_ver"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> Lf9
            r3.<init>()     // Catch: org.json.JSONException -> Lf9
            int r1 = r1.d()     // Catch: org.json.JSONException -> Lf9
            r3.append(r1)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = r3.toString()     // Catch: org.json.JSONException -> Lf9
            r0.put(r2, r1)     // Catch: org.json.JSONException -> Lf9
        L6e:
            java.lang.String r1 = "brand"
            java.lang.String r2 = r5.u     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "plantform"
            java.lang.String r2 = r5.c     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "ZGV2aWNlX2ltZWk="
            java.lang.String r1 = com.tkay.core.common.l.c.b(r1)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r2 = r5.e     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "android_id"
            java.lang.String r2 = r5.d     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "google_ad_id"
            java.lang.String r2 = r5.f     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "oaid"
            java.lang.String r2 = r5.q     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "appkey"
            java.lang.String r2 = r5.j     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "appId"
            java.lang.String r2 = r5.k     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "screen_width"
            java.lang.String r2 = r5.l     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "screen_height"
            java.lang.String r2 = r5.m     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "orientation"
            java.lang.String r2 = r5.n     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "scale"
            java.lang.String r2 = r5.r     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "b"
            java.lang.String r2 = r5.o     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "c"
            java.lang.String r2 = r5.p     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "web_env"
            java.lang.String r2 = r5.s     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "f"
            java.lang.String r2 = r5.t     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "misk_spt"
            int r2 = r5.v     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            java.lang.String r1 = "dvi"
            org.json.JSONObject r2 = r5.x     // Catch: org.json.JSONException -> Lf9
            java.lang.String r2 = r2.toString()     // Catch: org.json.JSONException -> Lf9
            java.lang.String r2 = com.tkay.expressad.foundation.h.j.a(r2)     // Catch: org.json.JSONException -> Lf9
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lf9
            goto Lfd
        Lf9:
            r1 = move-exception
            r1.printStackTrace()
        Lfd:
            return r0
    }
}
