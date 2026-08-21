package com.alipay.sdk.m.q;

public class e extends com.alipay.sdk.m.p.e {
    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.alipay.sdk.m.p.b a(com.alipay.sdk.m.s.a r5, android.content.Context r6, java.lang.String r7) throws java.lang.Throwable {
            r4 = this;
            java.lang.String r5 = "mspl"
            java.lang.String r0 = "mdap post"
            com.alipay.sdk.m.u.e.d(r5, r0)
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r1 = java.nio.charset.Charset.forName(r0)
            byte[] r7 = r7.getBytes(r1)
            byte[] r7 = com.alipay.sdk.m.n.b.a(r7)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            com.alipay.sdk.m.s.b r2 = com.alipay.sdk.m.s.b.d()
            java.lang.String r2 = r2.c()
            java.lang.String r3 = "utdId"
            r1.put(r3, r2)
            java.lang.String r2 = "logHeader"
            java.lang.String r3 = "RAW"
            r1.put(r2, r3)
            java.lang.String r2 = "bizCode"
            java.lang.String r3 = "alipaysdk"
            r1.put(r2, r3)
            java.lang.String r2 = "productId"
            java.lang.String r3 = "alipaysdk_android"
            r1.put(r2, r3)
            java.lang.String r2 = "Content-Encoding"
            java.lang.String r3 = "Gzip"
            r1.put(r2, r3)
            java.lang.String r2 = "productVersion"
            java.lang.String r3 = "15.8.15"
            r1.put(r2, r3)
            com.alipay.sdk.m.o.a$a r2 = new com.alipay.sdk.m.o.a$a
            java.lang.String r3 = "https://loggw-exsdk.alipay.com/loggw/logUpload.do"
            r2.<init>(r3, r1, r7)
            com.alipay.sdk.m.o.a$b r6 = com.alipay.sdk.m.o.a.a(r6, r2)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r1 = "mdap got "
            r7.append(r1)
            r7.append(r6)
            java.lang.String r7 = r7.toString()
            com.alipay.sdk.m.u.e.d(r5, r7)
            if (r6 == 0) goto L8e
            boolean r5 = com.alipay.sdk.m.p.e.a(r6)
            byte[] r6 = r6.c     // Catch: java.lang.Exception -> L88
            if (r5 == 0) goto L77
            byte[] r6 = com.alipay.sdk.m.n.b.b(r6)     // Catch: java.lang.Exception -> L88
        L77:
            java.lang.String r5 = new java.lang.String     // Catch: java.lang.Exception -> L88
            java.nio.charset.Charset r7 = java.nio.charset.Charset.forName(r0)     // Catch: java.lang.Exception -> L88
            r5.<init>(r6, r7)     // Catch: java.lang.Exception -> L88
            com.alipay.sdk.m.p.b r6 = new com.alipay.sdk.m.p.b
            java.lang.String r7 = ""
            r6.<init>(r7, r5)
            return r6
        L88:
            r5 = move-exception
            com.alipay.sdk.m.u.e.a(r5)
            r5 = 0
            return r5
        L8e:
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            java.lang.String r6 = "Response is null"
            r5.<init>(r6)
            throw r5
    }

    @Override
    public java.lang.String a(com.alipay.sdk.m.s.a r1, java.lang.String r2, org.json.JSONObject r3) {
            r0 = this;
            return r2
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> a(boolean r1, java.lang.String r2) {
            r0 = this;
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            return r1
    }

    @Override
    public org.json.JSONObject a() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean c() {
            r1 = this;
            r0 = 0
            return r0
    }
}
