package com.bianfeng.datafunsdk.net;

public class RequestHeaders {
    public java.lang.String headers;

    public RequestHeaders(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.headers = r1
            return
    }

    public java.util.Map<java.lang.String, java.lang.String> getHeaderMap() {
            r1 = this;
            java.lang.String r0 = r1.headers
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Le
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            return r0
        Le:
            java.lang.String r0 = r1.headers
            java.util.Map r0 = com.bianfeng.datafunsdk.w.a(r0)
            return r0
    }
}
