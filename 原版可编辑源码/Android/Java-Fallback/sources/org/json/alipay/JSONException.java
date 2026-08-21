package org.json.alipay;

public class JSONException extends java.lang.Exception {
    public java.lang.Throwable cause;

    public JSONException(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public JSONException(java.lang.Throwable r2) {
            r1 = this;
            java.lang.String r0 = r2.getMessage()
            r1.<init>(r0)
            r1.cause = r2
            return
    }

    @Override
    public java.lang.Throwable getCause() {
            r1 = this;
            java.lang.Throwable r0 = r1.cause
            return r0
    }
}
