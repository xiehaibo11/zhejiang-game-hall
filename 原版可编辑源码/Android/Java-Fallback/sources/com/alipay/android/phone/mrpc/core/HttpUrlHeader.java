package com.alipay.android.phone.mrpc.core;

public class HttpUrlHeader implements java.io.Serializable {
    public static final long serialVersionUID = -6098125857367743614L;
    public java.util.Map<java.lang.String, java.lang.String> headers;

    public HttpUrlHeader() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.headers = r0
            return
    }

    public java.lang.String getHead(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.headers
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    public java.util.Map<java.lang.String, java.lang.String> getHeaders() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.headers
            return r0
    }

    public void setHead(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.headers
            r0.put(r2, r3)
            return
    }

    public void setHeaders(java.util.Map<java.lang.String, java.lang.String> r1) {
            r0 = this;
            r0.headers = r1
            return
    }
}
