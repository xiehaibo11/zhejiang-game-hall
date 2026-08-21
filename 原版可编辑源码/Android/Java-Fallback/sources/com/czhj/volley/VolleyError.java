package com.czhj.volley;

public class VolleyError extends java.lang.Exception {
    private long a;
    protected java.lang.String errorMsg;
    public final com.czhj.volley.NetworkResponse networkResponse;

    public VolleyError() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.networkResponse = r0
            return
    }

    public VolleyError(com.czhj.volley.NetworkResponse r3) {
            r2 = this;
            r2.<init>()
            r2.networkResponse = r3
            if (r3 == 0) goto L23
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "http request error status code "
            r0.append(r1)
            int r3 = r3.statusCode
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r3 = java.lang.String.format(r3, r0)
            r2.errorMsg = r3
        L23:
            return
    }

    public VolleyError(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.networkResponse = r1
            return
    }

    public VolleyError(java.lang.String r1, java.lang.Throwable r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.networkResponse = r1
            return
    }

    public VolleyError(java.lang.Throwable r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.networkResponse = r1
            return
    }

    void a(long r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public java.lang.String getMessage() {
            r1 = this;
            java.lang.String r0 = r1.errorMsg
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = r1.errorMsg
            return r0
        Lb:
            java.lang.String r0 = super.getMessage()
            return r0
    }

    public long getNetworkTimeMs() {
            r2 = this;
            long r0 = r2.a
            return r0
    }
}
