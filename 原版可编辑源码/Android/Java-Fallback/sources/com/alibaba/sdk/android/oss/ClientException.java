package com.alibaba.sdk.android.oss;

public class ClientException extends java.lang.Exception {
    private java.lang.Boolean canceled;

    public ClientException() {
            r1 = this;
            r1.<init>()
            r0 = 0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            r1.canceled = r0
            return
    }

    public ClientException(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[ErrorMessage]: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            r3 = 0
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r2.canceled = r3
            return
    }

    public ClientException(java.lang.String r2, java.lang.Throwable r3) {
            r1 = this;
            r0 = 0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            r1.<init>(r2, r3, r0)
            return
    }

    public ClientException(java.lang.String r3, java.lang.Throwable r4, java.lang.Boolean r5) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[ErrorMessage]: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3, r4)
            r3 = 0
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r2.canceled = r3
            r2.canceled = r5
            com.alibaba.sdk.android.oss.common.OSSLog.logThrowable2Local(r2)
            return
    }

    public ClientException(java.lang.Throwable r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r0.canceled = r1
            return
    }

    @Override
    public java.lang.String getMessage() {
            r3 = this;
            java.lang.String r0 = super.getMessage()
            java.lang.Throwable r1 = r3.getCause()
            if (r1 != 0) goto Lb
            goto L27
        Lb:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.Throwable r2 = r3.getCause()
            java.lang.String r2 = r2.getMessage()
            r1.append(r2)
            java.lang.String r2 = "\n"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
        L27:
            return r0
    }

    public java.lang.Boolean isCanceledException() {
            r1 = this;
            java.lang.Boolean r0 = r1.canceled
            return r0
    }
}
