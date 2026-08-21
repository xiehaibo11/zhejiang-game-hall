package com.tencent.open.apireq;

public class BaseResp {
    public static final int CODE_ERROR_PARAMS = -2000;
    public static final int CODE_NOT_LOGIN = -2001;
    public static final int CODE_PERMISSION_NOT_GRANTED = -1003;
    public static final int CODE_QQ_LOW_VERSION = -1001;
    public static final int CODE_QQ_NOT_INSTALLED = -1000;
    public static final int CODE_SUCCESS = 0;
    public static final int CODE_UNSUPPORTED_BRANCH = -1002;
    private int a;
    private java.lang.String b;

    public BaseResp() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            java.lang.String r0 = ""
            r1.b = r0
            return
    }

    protected java.lang.String a(int r1) {
            r0 = this;
            java.lang.String r1 = "Api call failed."
            return r1
    }

    public int getCode() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public java.lang.String getErrorMsg() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public boolean isSuccess() {
            r1 = this;
            int r0 = r1.a
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public void setCode(int r2) {
            r1 = this;
            r1.a = r2
            r0 = -2001(0xfffffffffffff82f, float:NaN)
            if (r2 == r0) goto L23
            r0 = -2000(0xfffffffffffff830, float:NaN)
            if (r2 == r0) goto L20
            if (r2 == 0) goto L1d
            switch(r2) {
                case -1002: goto L1a;
                case -1001: goto L17;
                case -1000: goto L14;
                default: goto Lf;
            }
        Lf:
            java.lang.String r2 = r1.a(r2)
            goto L25
        L14:
            java.lang.String r2 = "QQ is not installed."
            goto L25
        L17:
            java.lang.String r2 = "QQ version is too low."
            goto L25
        L1a:
            java.lang.String r2 = "The QQ branch (e.g. TIM) is not supported"
            goto L25
        L1d:
            java.lang.String r2 = ""
            goto L25
        L20:
            java.lang.String r2 = "The given params check failed."
            goto L25
        L23:
            java.lang.String r2 = "Not login."
        L25:
            r1.setErrorMsg(r2)
            return
    }

    public void setErrorMsg(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "BaseResp{mCode="
            r0.append(r1)
            int r1 = r2.a
            r0.append(r1)
            java.lang.String r1 = ", mErrorMsg='"
            r0.append(r1)
            java.lang.String r1 = r2.b
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
