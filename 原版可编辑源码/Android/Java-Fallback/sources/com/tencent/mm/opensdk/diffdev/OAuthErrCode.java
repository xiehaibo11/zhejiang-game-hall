package com.tencent.mm.opensdk.diffdev;

public enum OAuthErrCode extends java.lang.Enum<com.tencent.mm.opensdk.diffdev.OAuthErrCode> {
    private static final com.tencent.mm.opensdk.diffdev.OAuthErrCode[] $VALUES = null;
    public static final com.tencent.mm.opensdk.diffdev.OAuthErrCode WechatAuth_Err_Auth_Stopped = null;
    public static final com.tencent.mm.opensdk.diffdev.OAuthErrCode WechatAuth_Err_Cancel = null;
    public static final com.tencent.mm.opensdk.diffdev.OAuthErrCode WechatAuth_Err_JsonDecodeErr = null;
    public static final com.tencent.mm.opensdk.diffdev.OAuthErrCode WechatAuth_Err_NetworkErr = null;
    public static final com.tencent.mm.opensdk.diffdev.OAuthErrCode WechatAuth_Err_NormalErr = null;
    public static final com.tencent.mm.opensdk.diffdev.OAuthErrCode WechatAuth_Err_OK = null;
    public static final com.tencent.mm.opensdk.diffdev.OAuthErrCode WechatAuth_Err_Timeout = null;
    private int code;

    static {
            com.tencent.mm.opensdk.diffdev.OAuthErrCode r0 = new com.tencent.mm.opensdk.diffdev.OAuthErrCode
            r1 = 0
            java.lang.String r2 = "WechatAuth_Err_OK"
            r0.<init>(r2, r1, r1)
            com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_OK = r0
            com.tencent.mm.opensdk.diffdev.OAuthErrCode r0 = new com.tencent.mm.opensdk.diffdev.OAuthErrCode
            r2 = 1
            java.lang.String r3 = "WechatAuth_Err_NormalErr"
            r4 = -1
            r0.<init>(r3, r2, r4)
            com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_NormalErr = r0
            com.tencent.mm.opensdk.diffdev.OAuthErrCode r0 = new com.tencent.mm.opensdk.diffdev.OAuthErrCode
            r3 = 2
            java.lang.String r4 = "WechatAuth_Err_NetworkErr"
            r5 = -2
            r0.<init>(r4, r3, r5)
            com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_NetworkErr = r0
            com.tencent.mm.opensdk.diffdev.OAuthErrCode r0 = new com.tencent.mm.opensdk.diffdev.OAuthErrCode
            r4 = 3
            java.lang.String r5 = "WechatAuth_Err_JsonDecodeErr"
            r6 = -3
            r0.<init>(r5, r4, r6)
            com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_JsonDecodeErr = r0
            com.tencent.mm.opensdk.diffdev.OAuthErrCode r0 = new com.tencent.mm.opensdk.diffdev.OAuthErrCode
            r5 = 4
            java.lang.String r6 = "WechatAuth_Err_Cancel"
            r7 = -4
            r0.<init>(r6, r5, r7)
            com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_Cancel = r0
            com.tencent.mm.opensdk.diffdev.OAuthErrCode r0 = new com.tencent.mm.opensdk.diffdev.OAuthErrCode
            r6 = 5
            java.lang.String r7 = "WechatAuth_Err_Timeout"
            r8 = -5
            r0.<init>(r7, r6, r8)
            com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_Timeout = r0
            com.tencent.mm.opensdk.diffdev.OAuthErrCode r0 = new com.tencent.mm.opensdk.diffdev.OAuthErrCode
            r7 = 6
            java.lang.String r8 = "WechatAuth_Err_Auth_Stopped"
            r9 = -6
            r0.<init>(r8, r7, r9)
            com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_Auth_Stopped = r0
            r8 = 7
            com.tencent.mm.opensdk.diffdev.OAuthErrCode[] r8 = new com.tencent.mm.opensdk.diffdev.OAuthErrCode[r8]
            com.tencent.mm.opensdk.diffdev.OAuthErrCode r9 = com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_OK
            r8[r1] = r9
            com.tencent.mm.opensdk.diffdev.OAuthErrCode r1 = com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_NormalErr
            r8[r2] = r1
            com.tencent.mm.opensdk.diffdev.OAuthErrCode r1 = com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_NetworkErr
            r8[r3] = r1
            com.tencent.mm.opensdk.diffdev.OAuthErrCode r1 = com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_JsonDecodeErr
            r8[r4] = r1
            com.tencent.mm.opensdk.diffdev.OAuthErrCode r1 = com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_Cancel
            r8[r5] = r1
            com.tencent.mm.opensdk.diffdev.OAuthErrCode r1 = com.tencent.mm.opensdk.diffdev.OAuthErrCode.WechatAuth_Err_Timeout
            r8[r6] = r1
            r8[r7] = r0
            com.tencent.mm.opensdk.diffdev.OAuthErrCode.$VALUES = r8
            return
    }

    OAuthErrCode(java.lang.String r1, int r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.code = r3
            return
    }

    public static com.tencent.mm.opensdk.diffdev.OAuthErrCode valueOf(java.lang.String r1) {
            java.lang.Class<com.tencent.mm.opensdk.diffdev.OAuthErrCode> r0 = com.tencent.mm.opensdk.diffdev.OAuthErrCode.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.tencent.mm.opensdk.diffdev.OAuthErrCode r1 = (com.tencent.mm.opensdk.diffdev.OAuthErrCode) r1
            return r1
    }

    public static com.tencent.mm.opensdk.diffdev.OAuthErrCode[] values() {
            com.tencent.mm.opensdk.diffdev.OAuthErrCode[] r0 = com.tencent.mm.opensdk.diffdev.OAuthErrCode.$VALUES
            java.lang.Object r0 = r0.clone()
            com.tencent.mm.opensdk.diffdev.OAuthErrCode[] r0 = (com.tencent.mm.opensdk.diffdev.OAuthErrCode[]) r0
            return r0
    }

    public int getCode() {
            r1 = this;
            int r0 = r1.code
            return r0
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "OAuthErrCode:"
            r0.append(r1)
            int r1 = r2.code
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
