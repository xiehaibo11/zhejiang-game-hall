package com.huawei.hms.common.api;

public class CommonStatusCodes {
    public static final int API_NOT_CONNECTED = 17;
    public static final int CANCELED = 16;
    public static final int DEVELOPER_ERROR = 10;
    public static final int ERROR = 13;
    public static final int INTERNAL_ERROR = 8;
    public static final int INTERRUPTED = 14;
    public static final int INVALID_ACCOUNT = 5;
    public static final int NETWORK_ERROR = 7;
    public static final int RESOLUTION_REQUIRED = 6;

    @java.lang.Deprecated
    public static final int SERVICE_DISABLED = 3;

    @java.lang.Deprecated
    public static final int SERVICE_VERSION_UPDATE_REQUIRED = 2;
    public static final int SIGN_IN_REQUIRED = 4;
    public static final int SUCCESS = 0;
    public static final int SUCCESS_CACHE = -1;
    public static final int TIMEOUT = 15;

    protected CommonStatusCodes() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getStatusCodeString(int r2) {
            r0 = -1
            if (r2 == r0) goto L52
            if (r2 == 0) goto L4f
            r0 = 10
            if (r2 == r0) goto L4c
            r0 = 9004(0x232c, float:1.2617E-41)
            if (r2 == r0) goto L49
            switch(r2) {
                case 2: goto L37;
                case 3: goto L34;
                case 4: goto L31;
                case 5: goto L2e;
                case 6: goto L2b;
                case 7: goto L28;
                case 8: goto L25;
                default: goto L10;
            }
        L10:
            switch(r2) {
                case 13: goto L46;
                case 14: goto L43;
                case 15: goto L40;
                case 16: goto L3d;
                case 17: goto L3a;
                default: goto L13;
            }
        L13:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "unknown status code: "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
        L25:
            java.lang.String r2 = "INTERNAL_ERROR"
            return r2
        L28:
            java.lang.String r2 = "NETWORK_ERROR"
            return r2
        L2b:
            java.lang.String r2 = "RESOLUTION_REQUIRED"
            return r2
        L2e:
            java.lang.String r2 = "INVALID_ACCOUNT"
            return r2
        L31:
            java.lang.String r2 = "SIGN_IN_REQUIRED"
            return r2
        L34:
            java.lang.String r2 = "SERVICE_DISABLED"
            return r2
        L37:
            java.lang.String r2 = "SERVICE_VERSION_UPDATE_REQUIRED"
            return r2
        L3a:
            java.lang.String r2 = "API_NOT_CONNECTED"
            return r2
        L3d:
            java.lang.String r2 = "CANCELED"
            return r2
        L40:
            java.lang.String r2 = "TIMEOUT"
            return r2
        L43:
            java.lang.String r2 = "INTERRUPTED"
            return r2
        L46:
            java.lang.String r2 = "ERROR"
            return r2
        L49:
            java.lang.String r2 = "DEAD_CLIENT"
            return r2
        L4c:
            java.lang.String r2 = "DEVELOPER_ERROR"
            return r2
        L4f:
            java.lang.String r2 = "SUCCESS"
            return r2
        L52:
            java.lang.String r2 = "SUCCESS_CACHE"
            return r2
    }
}
