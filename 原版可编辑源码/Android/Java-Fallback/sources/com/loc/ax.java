package com.loc;

public final class ax extends com.loc.r {
    public org.json.JSONObject a;
    public android.content.Context b;

    public ax() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.b = r0
            return
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> a() {
            r4 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "Content-Type"
            java.lang.String r2 = "application/x-www-form-urlencoded"
            r0.put(r1, r2)
            java.lang.String r1 = "Accept-Encoding"
            java.lang.String r2 = "gzip"
            r0.put(r1, r2)
            java.lang.String r1 = "User-Agent"
            java.lang.String r2 = "AMAP SDK Android core 4.3.6"
            r0.put(r1, r2)
            android.content.Context r1 = r4.b
            java.lang.String r1 = com.loc.n.a(r1)
            java.lang.String r2 = "X-INFO"
            r0.put(r2, r1)
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
            java.lang.String r0 = "https://restsdk.amap.com/sdk/compliance/params"
            return r0
        Ld:
            java.lang.String r0 = "http://restsdk.amap.com/sdk/compliance/params"
            return r0
    }

    @Override
    public final java.lang.String c_() {
            r1 = this;
            java.lang.String r0 = "core"
            return r0
    }

    @Override
    public final byte[] d() {
            r7 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L9b
            r0.<init>()     // Catch: java.lang.Throwable -> L9b
            org.json.JSONObject r1 = r7.a     // Catch: java.lang.Throwable -> L9b
            java.lang.String r2 = "utf-8"
            if (r1 == 0) goto L48
            org.json.JSONObject r1 = r7.a     // Catch: java.lang.Throwable -> L9b
            java.util.Iterator r1 = r1.keys()     // Catch: java.lang.Throwable -> L9b
        L11:
            boolean r3 = r1.hasNext()     // Catch: java.lang.Throwable -> L9b
            if (r3 == 0) goto L48
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Throwable -> L9b
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L9b
            org.json.JSONObject r4 = r7.a     // Catch: java.lang.Throwable -> L9b
            java.lang.Object r4 = r4.get(r3)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L9b
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9b
            r5.<init>()     // Catch: java.lang.Throwable -> L9b
            r5.append(r3)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r3 = "="
            r5.append(r3)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r3 = java.net.URLEncoder.encode(r4, r2)     // Catch: java.lang.Throwable -> L9b
            r5.append(r3)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r3 = "&"
            r5.append(r3)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> L9b
            r0.append(r3)     // Catch: java.lang.Throwable -> L9b
            goto L11
        L48:
            java.lang.String r1 = "output=json"
            r0.append(r1)     // Catch: java.lang.Throwable -> L9b
            android.content.Context r1 = r7.b     // Catch: java.lang.Throwable -> L9b
            java.lang.String r1 = com.loc.l.f(r1)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r3 = "&key="
            java.lang.String r4 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r3 = r3.concat(r4)     // Catch: java.lang.Throwable -> L9b
            r0.append(r3)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r3 = com.loc.n.a()     // Catch: java.lang.Throwable -> L9b
            java.lang.String r4 = "&ts="
            java.lang.String r5 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r4 = r4.concat(r5)     // Catch: java.lang.Throwable -> L9b
            r0.append(r4)     // Catch: java.lang.Throwable -> L9b
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9b
            java.lang.String r5 = "&scode="
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L9b
            android.content.Context r5 = r7.b     // Catch: java.lang.Throwable -> L9b
            java.lang.String r6 = "key="
            java.lang.String r1 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r1 = r6.concat(r1)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r1 = com.loc.n.a(r5, r3, r1)     // Catch: java.lang.Throwable -> L9b
            r4.append(r1)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> L9b
            r0.append(r1)     // Catch: java.lang.Throwable -> L9b
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L9b
            byte[] r0 = r0.getBytes(r2)     // Catch: java.lang.Throwable -> L9b
            goto La0
        L9b:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
        La0:
            return r0
    }

    @Override
    public final java.util.Map<java.lang.String, java.lang.String> e() {
            r1 = this;
            r0 = 0
            return r0
    }
}
