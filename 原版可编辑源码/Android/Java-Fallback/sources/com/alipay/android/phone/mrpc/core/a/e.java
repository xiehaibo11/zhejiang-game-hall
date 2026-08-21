package com.alipay.android.phone.mrpc.core.a;

public final class e extends com.alipay.android.phone.mrpc.core.a.b {
    public int c;
    public java.lang.Object d;

    public e(int r1, java.lang.String r2, java.lang.Object r3) {
            r0 = this;
            r0.<init>(r2, r3)
            r0.c = r1
            return
    }

    @Override
    public final void a(java.lang.Object r1) {
            r0 = this;
            r0.d = r1
            return
    }

    @Override
    public final byte[] a() {
            r5 = this;
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Exception -> L6b
            r0.<init>()     // Catch: java.lang.Exception -> L6b
            java.lang.Object r1 = r5.d     // Catch: java.lang.Exception -> L6b
            if (r1 == 0) goto L19
            org.apache.http.message.BasicNameValuePair r1 = new org.apache.http.message.BasicNameValuePair     // Catch: java.lang.Exception -> L6b
            java.lang.String r2 = "extParam"
            java.lang.Object r3 = r5.d     // Catch: java.lang.Exception -> L6b
            java.lang.String r3 = com.alipay.sdk.m.e.f.a(r3)     // Catch: java.lang.Exception -> L6b
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> L6b
            r0.add(r1)     // Catch: java.lang.Exception -> L6b
        L19:
            org.apache.http.message.BasicNameValuePair r1 = new org.apache.http.message.BasicNameValuePair     // Catch: java.lang.Exception -> L6b
            java.lang.String r2 = "operationType"
            java.lang.String r3 = r5.a     // Catch: java.lang.Exception -> L6b
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> L6b
            r0.add(r1)     // Catch: java.lang.Exception -> L6b
            org.apache.http.message.BasicNameValuePair r1 = new org.apache.http.message.BasicNameValuePair     // Catch: java.lang.Exception -> L6b
            java.lang.String r2 = "id"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6b
            r3.<init>()     // Catch: java.lang.Exception -> L6b
            int r4 = r5.c     // Catch: java.lang.Exception -> L6b
            r3.append(r4)     // Catch: java.lang.Exception -> L6b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L6b
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> L6b
            r0.add(r1)     // Catch: java.lang.Exception -> L6b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6b
            java.lang.String r2 = "mParams is:"
            r1.<init>(r2)     // Catch: java.lang.Exception -> L6b
            java.lang.Object r2 = r5.b     // Catch: java.lang.Exception -> L6b
            r1.append(r2)     // Catch: java.lang.Exception -> L6b
            org.apache.http.message.BasicNameValuePair r1 = new org.apache.http.message.BasicNameValuePair     // Catch: java.lang.Exception -> L6b
            java.lang.String r2 = "requestData"
            java.lang.Object r3 = r5.b     // Catch: java.lang.Exception -> L6b
            if (r3 != 0) goto L54
            java.lang.String r3 = "[]"
            goto L5a
        L54:
            java.lang.Object r3 = r5.b     // Catch: java.lang.Exception -> L6b
            java.lang.String r3 = com.alipay.sdk.m.e.f.a(r3)     // Catch: java.lang.Exception -> L6b
        L5a:
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> L6b
            r0.add(r1)     // Catch: java.lang.Exception -> L6b
            java.lang.String r1 = "utf-8"
            java.lang.String r0 = org.apache.http.client.utils.URLEncodedUtils.format(r0, r1)     // Catch: java.lang.Exception -> L6b
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L6b
            return r0
        L6b:
            r0 = move-exception
            com.alipay.android.phone.mrpc.core.RpcException r1 = new com.alipay.android.phone.mrpc.core.RpcException
            r2 = 9
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "request  ="
            r3.<init>(r4)
            java.lang.Object r4 = r5.b
            r3.append(r4)
            java.lang.String r4 = ":"
            r3.append(r4)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            if (r3 != 0) goto L91
            java.lang.String r3 = ""
            goto L95
        L91:
            java.lang.String r3 = r0.getMessage()
        L95:
            r1.<init>(r2, r3, r0)
            throw r1
    }
}
