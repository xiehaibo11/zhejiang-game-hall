package com.bianfeng.datafunsdk;

public final class s {
    public java.lang.String a;
    public com.bianfeng.datafunsdk.p b;
    public com.bianfeng.datafunsdk.net.RequestHeaders c;
    public com.bianfeng.datafunsdk.net.ResponseHeaders d;
    public com.bianfeng.datafunsdk.net.ResponseData e;
    public com.bianfeng.datafunsdk.q f;

    public s(com.bianfeng.datafunsdk.bean.DataFunBean r5) {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = r5.getUrl()
            r4.a = r0
            com.bianfeng.datafunsdk.p r0 = new com.bianfeng.datafunsdk.p
            java.lang.String r1 = r5.getHttpMethod()
            r0.<init>(r1)
            r4.b = r0
            com.bianfeng.datafunsdk.q r0 = new com.bianfeng.datafunsdk.q
            java.lang.String r1 = r4.a
            java.lang.String r2 = r5.getData()
            byte[] r2 = r2.getBytes()
            com.bianfeng.datafunsdk.p r3 = r4.b
            r0.<init>(r1, r2, r3)
            r4.f = r0
            java.lang.String r0 = r5.getRequestHeaders()
            r4.a(r0)
            java.lang.String r0 = r5.getResponseData()
            r4.b(r0)
            java.lang.String r5 = r5.getResponseHeaders()
            r4.c(r5)
            return
    }

    public int a() {
            r1 = this;
            com.bianfeng.datafunsdk.q r0 = r1.f
            int r0 = r0.a()
            return r0
    }

    public final void a(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.String r0 = "NULL"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L10
            return
        L10:
            java.lang.Class<com.bianfeng.datafunsdk.net.RequestHeaders> r0 = com.bianfeng.datafunsdk.net.RequestHeaders.class
            java.lang.Object r3 = com.bianfeng.datafunsdk.w.a(r3, r0)     // Catch: java.lang.Exception -> L20
            com.bianfeng.datafunsdk.net.RequestHeaders r3 = (com.bianfeng.datafunsdk.net.RequestHeaders) r3     // Catch: java.lang.Exception -> L20
            r2.c = r3     // Catch: java.lang.Exception -> L20
            com.bianfeng.datafunsdk.q r0 = r2.f     // Catch: java.lang.Exception -> L20
            r0.a(r3)     // Catch: java.lang.Exception -> L20
            goto L39
        L20:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "requestHeader==="
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.bianfeng.datafunsdk.x.a(r3)
        L39:
            return
    }

    public final void b(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.String r0 = "NULL"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L10
            return
        L10:
            java.lang.Class<com.bianfeng.datafunsdk.net.ResponseData> r0 = com.bianfeng.datafunsdk.net.ResponseData.class
            java.lang.Object r3 = com.bianfeng.datafunsdk.w.a(r3, r0)     // Catch: java.lang.Exception -> L20
            com.bianfeng.datafunsdk.net.ResponseData r3 = (com.bianfeng.datafunsdk.net.ResponseData) r3     // Catch: java.lang.Exception -> L20
            r2.e = r3     // Catch: java.lang.Exception -> L20
            com.bianfeng.datafunsdk.q r0 = r2.f     // Catch: java.lang.Exception -> L20
            r0.a(r3)     // Catch: java.lang.Exception -> L20
            goto L39
        L20:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "responseData==="
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.bianfeng.datafunsdk.x.a(r3)
        L39:
            return
    }

    public final void c(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return
        L7:
            java.lang.String r0 = "NULL"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L10
            return
        L10:
            java.lang.Class<com.bianfeng.datafunsdk.net.ResponseHeaders> r0 = com.bianfeng.datafunsdk.net.ResponseHeaders.class
            java.lang.Object r3 = com.bianfeng.datafunsdk.w.a(r3, r0)     // Catch: java.lang.Exception -> L20
            com.bianfeng.datafunsdk.net.ResponseHeaders r3 = (com.bianfeng.datafunsdk.net.ResponseHeaders) r3     // Catch: java.lang.Exception -> L20
            r2.d = r3     // Catch: java.lang.Exception -> L20
            com.bianfeng.datafunsdk.q r0 = r2.f     // Catch: java.lang.Exception -> L20
            r0.a(r3)     // Catch: java.lang.Exception -> L20
            goto L39
        L20:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "responseHeader==="
            r0.append(r1)
            java.lang.String r3 = r3.getMessage()
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            com.bianfeng.datafunsdk.x.a(r3)
        L39:
            return
    }
}
