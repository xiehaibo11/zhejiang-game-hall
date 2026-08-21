package com.alipay.android.phone.mrpc.core;

public class HttpException extends java.lang.Exception {
    public static final int NETWORK_AUTH_ERROR = 8;
    public static final int NETWORK_CONNECTION_EXCEPTION = 3;
    public static final int NETWORK_DNS_ERROR = 9;
    public static final int NETWORK_IO_EXCEPTION = 6;
    public static final int NETWORK_SCHEDULE_ERROR = 7;
    public static final int NETWORK_SERVER_EXCEPTION = 5;
    public static final int NETWORK_SOCKET_EXCEPTION = 4;
    public static final int NETWORK_SSL_EXCEPTION = 2;
    public static final int NETWORK_UNAVAILABLE = 1;
    public static final int NETWORK_UNKNOWN_ERROR = 0;
    public static final long serialVersionUID = -6320569206365033676L;
    public int mCode;
    public java.lang.String mMsg;

    public HttpException(java.lang.Integer r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Http Transport error"
            r0.append(r1)
            if (r3 == 0) goto L19
            java.lang.String r1 = "["
            r0.append(r1)
            r0.append(r3)
            java.lang.String r1 = "]"
            r0.append(r1)
        L19:
            java.lang.String r1 = " : "
            r0.append(r1)
            if (r4 == 0) goto L23
            r0.append(r4)
        L23:
            java.lang.String r0 = r0.toString()
            r2.<init>(r0)
            int r3 = r3.intValue()
            r2.mCode = r3
            r2.mMsg = r4
            return
    }

    public HttpException(java.lang.String r2) {
            r1 = this;
            r1.<init>(r2)
            r0 = 0
            r1.mCode = r0
            r1.mMsg = r2
            return
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
}
