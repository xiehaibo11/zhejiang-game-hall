package com.tkay.expressad.advanced.a;

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

    public a(android.content.Context r5) {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "android"
            r4.c = r0
            java.lang.String r0 = com.tkay.expressad.foundation.h.k.b()
            r4.a = r0
            java.lang.String r0 = com.tkay.expressad.foundation.h.k.c()
            r4.b = r0
            java.lang.String r0 = com.tkay.core.common.l.d.d(r5)
            r4.e = r0
            java.lang.String r0 = com.tkay.core.common.l.d.f()
            r4.f = r0
            int r0 = com.tkay.expressad.foundation.h.k.a()
            java.lang.String r1 = java.lang.String.valueOf(r0)
            r4.h = r1
            java.lang.String r0 = com.tkay.expressad.foundation.h.k.a(r5, r0)
            r4.i = r0
            java.lang.String r0 = com.tkay.core.common.l.d.i()
            r4.j = r0
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r0 = r0.f()
            r4.k = r0
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r0 = r0.e()
            r4.l = r0
            int r0 = com.tkay.expressad.foundation.h.t.f(r5)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r4.m = r0
            int r0 = com.tkay.expressad.foundation.h.t.e(r5)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r4.n = r0
            float r0 = com.tkay.expressad.foundation.h.t.c(r5)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r4.p = r0
            android.content.res.Resources r5 = r5.getResources()
            android.content.res.Configuration r5 = r5.getConfiguration()
            int r5 = r5.orientation
            r0 = 2
            if (r5 != r0) goto L79
            java.lang.String r5 = "landscape"
            r4.o = r5
            goto L7d
        L79:
            java.lang.String r5 = "portrait"
            r4.o = r5
        L7d:
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()
            com.tkay.core.api.IExHandler r5 = r5.b()
            java.lang.String r1 = ""
            if (r5 == 0) goto La1
            java.lang.String r2 = "at_device1|||at_device2|||at_device3"
            java.lang.String r5 = r5.fillCDataParam(r2)
            java.lang.String r2 = "at_device1"
            java.lang.String r2 = r5.replace(r2, r1)
            java.lang.String r3 = "at_device2"
            java.lang.String r2 = r2.replace(r3, r1)
            java.lang.String r3 = "at_device3"
            r2.replace(r3, r1)
            goto La2
        La1:
            r5 = r1
        La2:
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            if (r2 == 0) goto Lad
            r4.d = r1
            r4.g = r1
            return
        Lad:
            java.lang.String r1 = "\\|\\|\\|"
            java.lang.String[] r5 = r5.split(r1)
            r1 = 0
            r1 = r5[r1]     // Catch: java.lang.Throwable -> Lb8
            r4.d = r1     // Catch: java.lang.Throwable -> Lb8
        Lb8:
            r5 = r5[r0]     // Catch: java.lang.Throwable -> Lbc
            r4.g = r5     // Catch: java.lang.Throwable -> Lbc
        Lbc:
            return
    }

    public final org.json.JSONObject a() {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "device"
            java.lang.String r2 = r5.a     // Catch: org.json.JSONException -> Lc0
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r1 = "system_version"
            java.lang.String r2 = r5.b     // Catch: org.json.JSONException -> Lc0
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r1 = "network_type"
            java.lang.String r2 = r5.h     // Catch: org.json.JSONException -> Lc0
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r1 = "network_type_str"
            java.lang.String r2 = r5.i     // Catch: org.json.JSONException -> Lc0
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r1 = "device_ua"
            java.lang.String r2 = r5.j     // Catch: org.json.JSONException -> Lc0
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lc0
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: org.json.JSONException -> Lc0
            com.tkay.core.common.f.al r1 = r1.K()     // Catch: org.json.JSONException -> Lc0
            if (r1 == 0) goto L6e
            java.lang.String r2 = "has_wx"
            int r3 = r1.a()     // Catch: org.json.JSONException -> Lc0
            r0.put(r2, r3)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r2 = "integrated_wx"
            int r3 = r1.b()     // Catch: org.json.JSONException -> Lc0
            r0.put(r2, r3)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r2 = "opensdk_ver"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> Lc0
            r3.<init>()     // Catch: org.json.JSONException -> Lc0
            int r4 = r1.c()     // Catch: org.json.JSONException -> Lc0
            r3.append(r4)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r3 = r3.toString()     // Catch: org.json.JSONException -> Lc0
            r0.put(r2, r3)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r2 = "wx_api_ver"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> Lc0
            r3.<init>()     // Catch: org.json.JSONException -> Lc0
            int r1 = r1.d()     // Catch: org.json.JSONException -> Lc0
            r3.append(r1)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r1 = r3.toString()     // Catch: org.json.JSONException -> Lc0
            r0.put(r2, r1)     // Catch: org.json.JSONException -> Lc0
        L6e:
            java.lang.String r1 = "plantform"
            java.lang.String r2 = r5.c     // Catch: org.json.JSONException -> Lc0
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r1 = "ZGV2aWNlX2ltZWk="
            java.lang.String r1 = com.tkay.core.common.l.c.b(r1)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r2 = r5.d     // Catch: org.json.JSONException -> Lc0
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r1 = "android_id"
            java.lang.String r2 = r5.e     // Catch: org.json.JSONException -> Lc0
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r1 = "google_ad_id"
            java.lang.String r2 = r5.f     // Catch: org.json.JSONException -> Lc0
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r1 = "oaid"
            java.lang.String r2 = r5.g     // Catch: org.json.JSONException -> Lc0
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r1 = "appkey"
            java.lang.String r2 = r5.k     // Catch: org.json.JSONException -> Lc0
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r1 = "appId"
            java.lang.String r2 = r5.l     // Catch: org.json.JSONException -> Lc0
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r1 = "screen_width"
            java.lang.String r2 = r5.m     // Catch: org.json.JSONException -> Lc0
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r1 = "screen_height"
            java.lang.String r2 = r5.n     // Catch: org.json.JSONException -> Lc0
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r1 = "orientation"
            java.lang.String r2 = r5.o     // Catch: org.json.JSONException -> Lc0
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lc0
            java.lang.String r1 = "scale"
            java.lang.String r2 = r5.p     // Catch: org.json.JSONException -> Lc0
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lc0
            goto Lc4
        Lc0:
            r1 = move-exception
            r1.printStackTrace()
        Lc4:
            return r0
    }
}
