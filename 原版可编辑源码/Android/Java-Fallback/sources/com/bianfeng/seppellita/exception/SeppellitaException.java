package com.bianfeng.seppellita.exception;

public class SeppellitaException extends com.bianfeng.ymnsdk.utilslib.exception.YmnException {
    public SeppellitaException() {
            r0 = this;
            r0.<init>()
            return
    }

    public SeppellitaException(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "seppellita--->"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            return
    }

    public SeppellitaException(java.lang.String r3, java.lang.Throwable r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "seppellita--->"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3, r4)
            return
    }

    public SeppellitaException(java.lang.Throwable r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }
}
