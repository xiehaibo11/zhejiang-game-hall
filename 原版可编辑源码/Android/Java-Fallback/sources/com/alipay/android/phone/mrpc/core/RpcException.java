package com.alipay.android.phone.mrpc.core;

public class RpcException extends java.lang.RuntimeException {
    public static final long serialVersionUID = -2875437994101380406L;
    public int mCode;
    public java.lang.String mMsg;
    public java.lang.String mOperationType;

    public RpcException(java.lang.Integer r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = a(r2, r3)
            r1.<init>(r0)
            int r2 = r2.intValue()
            r1.mCode = r2
            r1.mMsg = r3
            return
    }

    public RpcException(java.lang.Integer r2, java.lang.String r3, java.lang.Throwable r4) {
            r1 = this;
            java.lang.String r0 = a(r2, r3)
            r1.<init>(r0, r4)
            int r2 = r2.intValue()
            r1.mCode = r2
            r1.mMsg = r3
            return
    }

    public RpcException(java.lang.Integer r1, java.lang.Throwable r2) {
            r0 = this;
            r0.<init>(r2)
            int r1 = r1.intValue()
            r0.mCode = r1
            return
    }

    public RpcException(java.lang.String r2) {
            r1 = this;
            r1.<init>(r2)
            r0 = 0
            r1.mCode = r0
            r1.mMsg = r2
            return
    }

    public static java.lang.String a(java.lang.Integer r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "RPCException: "
            r0.append(r1)
            if (r2 == 0) goto L19
            java.lang.String r1 = "["
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = "]"
            r0.append(r2)
        L19:
            java.lang.String r2 = " : "
            r0.append(r2)
            if (r3 == 0) goto L23
            r0.append(r3)
        L23:
            java.lang.String r2 = r0.toString()
            return r2
    }

    public int getCode() {
            r1 = this;
            int r0 = r1.mCode
            return r0
    }

    public java.lang.String getMsg() {
            r1 = this;
            java.lang.String r0 = r1.mMsg
            return r0
    }

    public java.lang.String getOperationType() {
            r1 = this;
            java.lang.String r0 = r1.mOperationType
            return r0
    }

    public void setOperationType(java.lang.String r1) {
            r0 = this;
            r0.mOperationType = r1
            return
    }
}
