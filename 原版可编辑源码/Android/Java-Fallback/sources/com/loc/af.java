package com.loc;

public class af extends com.loc.r {
    public android.content.Context k;

    public af(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.k = r1
            r1 = 5000(0x1388, float:7.006E-42)
            r0.a(r1)
            r0.b(r1)
            return
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> a() {
            r4 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "Content-Type"
            java.lang.String r2 = "application/json"
            r0.put(r1, r2)
            java.lang.String r1 = "Accept-Encoding"
            java.lang.String r2 = "gzip"
            r0.put(r1, r2)
            java.lang.String r1 = "User-Agent"
            java.lang.String r2 = "AMAP SDK Android core 4.3.6"
            r0.put(r1, r2)
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.String r3 = "4.3.6"
            r1[r2] = r3
            r2 = 1
            java.lang.String r3 = "core"
            r1[r2] = r3
            java.lang.String r2 = "platform=Android&sdkversion=%s&product=%s"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            java.lang.String r2 = "platinfo"
            r0.put(r2, r1)
            java.lang.String r1 = "logversion"
            java.lang.String r2 = "2.1"
            r0.put(r1, r2)
            return r0
    }

    @Override
    public final java.lang.String b() {
            r1 = this;
            com.loc.q r0 = com.loc.q.a()
            boolean r0 = r0.b()
            if (r0 == 0) goto Ld
            java.lang.String r0 = "https://restapi.amap.com/rest/aaid/get"
            return r0
        Ld:
            java.lang.String r0 = "http://restapi.amap.com/rest/aaid/get"
            return r0
    }

    @Override
    public final java.lang.String c_() {
            r1 = this;
            java.lang.String r0 = "core"
            return r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> e() {
            r4 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            android.content.Context r1 = r4.k
            java.lang.String r1 = com.loc.l.f(r1)
            java.lang.String r2 = "key"
            r0.put(r2, r1)
            java.lang.String r1 = com.loc.n.a()
            android.content.Context r2 = r4.k
            java.lang.String r3 = com.loc.x.b(r0)
            java.lang.String r2 = com.loc.n.a(r2, r1, r3)
            java.lang.String r3 = "ts"
            r0.put(r3, r1)
            java.lang.String r1 = "scode"
            r0.put(r1, r2)
            return r0
    }
}
