package com.vivo.push.util;

public class VivoPushException extends java.lang.Exception {
    public static final int REASON_CODE_ACCESS = 10000;
    private int mReasonCode;

    public VivoPushException(int r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r2)
            r0.mReasonCode = r1
            return
    }

    public VivoPushException(java.lang.String r2) {
            r1 = this;
            r0 = 10000(0x2710, float:1.4013E-41)
            r1.<init>(r0, r2)
            return
    }

    public int getCode() {
            r1 = this;
            int r0 = r1.mReasonCode
            return r0
    }
}
