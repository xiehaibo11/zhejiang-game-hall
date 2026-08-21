package com.tencent.open.web.security;

public class SecureJsInterface extends com.tencent.open.b.b {
    public static boolean isPWDEdit;
    private java.lang.String a;

    static {
            return
    }

    public SecureJsInterface() {
            r0 = this;
            r0.<init>()
            return
    }

    public void clearAllEdit() {
            r4 = this;
            java.lang.String r0 = "openSDK_LOG.SecureJsInterface"
            java.lang.String r1 = "-->clear all edit."
            com.tencent.open.log.SLog.i(r0, r1)
            com.tencent.open.web.security.JniInterface.clearAllPWD()     // Catch: java.lang.Exception -> Lb
            return
        Lb:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "-->clear all edit exception: "
            r2.append(r3)
            java.lang.String r3 = r1.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.tencent.open.log.SLog.e(r0, r2)
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r1)
            throw r0
    }

    public void curPosFromJS(java.lang.String r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "-->curPosFromJS: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.SecureJsInterface"
            com.tencent.open.log.SLog.d(r1, r0)
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.NumberFormatException -> L1b
            goto L22
        L1b:
            r4 = move-exception
            java.lang.String r0 = "-->curPosFromJS number format exception."
            com.tencent.open.log.SLog.e(r1, r0, r4)
            r4 = -1
        L22:
            if (r4 < 0) goto L60
            boolean r0 = com.tencent.open.web.security.a.c
            boolean r0 = com.tencent.open.web.security.a.b
            if (r0 == 0) goto L3e
            boolean r0 = com.tencent.open.web.security.a.b
            boolean r4 = com.tencent.open.web.security.JniInterface.BackSpaceChar(r0, r4)
            java.lang.Boolean r4 = java.lang.Boolean.valueOf(r4)
            boolean r4 = r4.booleanValue()
            if (r4 == 0) goto L5f
            r4 = 0
            com.tencent.open.web.security.a.b = r4
            goto L5f
        L3e:
            java.lang.String r0 = com.tencent.open.web.security.a.a
            r3.a = r0
            int r2 = r0.length()
            com.tencent.open.web.security.JniInterface.insetTextToArray(r4, r0, r2)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "curPosFromJS mKey: "
            r4.append(r0)
            java.lang.String r0 = r3.a
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            com.tencent.open.log.SLog.v(r1, r4)
        L5f:
            return
        L60:
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            java.lang.String r0 = "position is illegal."
            r4.<init>(r0)
            throw r4
    }

    @Override
    public boolean customCallback() {
            r1 = this;
            r0 = 1
            return r0
    }

    public java.lang.String getMD5FromNative() {
            r4 = this;
            java.lang.String r0 = "openSDK_LOG.SecureJsInterface"
            java.lang.String r1 = "-->get md5 form native"
            com.tencent.open.log.SLog.i(r0, r1)
            r1 = 0
            java.lang.String r1 = com.tencent.open.web.security.JniInterface.getPWDKeyToMD5(r1)     // Catch: java.lang.Exception -> L21
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "-->getMD5FromNative, MD5= "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.tencent.open.log.SLog.v(r0, r2)
            return r1
        L21:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "-->get md5 form native exception: "
            r2.append(r3)
            java.lang.String r3 = r1.getMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.tencent.open.log.SLog.e(r0, r2)
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r1)
            throw r0
    }

    public void isPasswordEdit(java.lang.String r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "-->is pswd edit, flag: "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.SecureJsInterface"
            com.tencent.open.log.SLog.i(r1, r0)
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Exception -> L1b
            goto L35
        L1b:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "-->is pswd edit exception: "
            r0.append(r2)
            java.lang.String r4 = r4.getMessage()
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            com.tencent.open.log.SLog.e(r1, r4)
            r4 = -1
        L35:
            r0 = 1
            if (r4 == 0) goto L43
            if (r4 != r0) goto L3b
            goto L43
        L3b:
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            java.lang.String r0 = "is pswd edit flag is illegal."
            r4.<init>(r0)
            throw r4
        L43:
            if (r4 != 0) goto L49
            r4 = 0
            com.tencent.open.web.security.SecureJsInterface.isPWDEdit = r4
            goto L4d
        L49:
            if (r4 != r0) goto L4d
            com.tencent.open.web.security.SecureJsInterface.isPWDEdit = r0
        L4d:
            return
    }
}
