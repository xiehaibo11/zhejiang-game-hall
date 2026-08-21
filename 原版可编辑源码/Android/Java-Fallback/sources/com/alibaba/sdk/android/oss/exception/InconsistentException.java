package com.alibaba.sdk.android.oss.exception;

public class InconsistentException extends java.io.IOException {
    private java.lang.Long clientChecksum;
    private java.lang.String requestId;
    private java.lang.Long serverChecksum;

    public InconsistentException(java.lang.Long r1, java.lang.Long r2, java.lang.String r3) {
            r0 = this;
            r0.<init>()
            r0.clientChecksum = r1
            r0.serverChecksum = r2
            r0.requestId = r3
            return
    }

    @Override
    public java.lang.String getMessage() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "InconsistentException: inconsistent object\n[RequestId]: "
            r0.append(r1)
            java.lang.String r1 = r2.requestId
            r0.append(r1)
            java.lang.String r1 = "\n[ClientChecksum]: "
            r0.append(r1)
            java.lang.Long r1 = r2.clientChecksum
            r0.append(r1)
            java.lang.String r1 = "\n[ServerChecksum]: "
            r0.append(r1)
            java.lang.Long r1 = r2.serverChecksum
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
