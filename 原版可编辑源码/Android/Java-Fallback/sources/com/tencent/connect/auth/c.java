package com.tencent.connect.auth;

public class c {
    private com.tencent.connect.auth.AuthAgent a;
    private com.tencent.connect.auth.QQToken b;

    private c(java.lang.String r3, android.content.Context r4) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "openSDK_LOG.QQAuth"
            java.lang.String r1 = "new QQAuth() --start"
            com.tencent.open.log.SLog.i(r0, r1)
            com.tencent.connect.auth.QQToken r1 = new com.tencent.connect.auth.QQToken
            r1.<init>(r3)
            r2.b = r1
            com.tencent.connect.auth.AuthAgent r3 = new com.tencent.connect.auth.AuthAgent
            com.tencent.connect.auth.QQToken r1 = r2.b
            r3.<init>(r1)
            r2.a = r3
            com.tencent.connect.auth.QQToken r3 = r2.b
            com.tencent.connect.a.a.c(r4, r3)
            java.lang.String r3 = "3.5.14.lite"
            a(r4, r3)
            java.lang.String r3 = "new QQAuth() --end"
            com.tencent.open.log.SLog.i(r0, r3)
            return
    }

    private int a(android.app.Activity r8, android.support.v4.app.Fragment r9, java.lang.String r10, com.tencent.tauth.IUiListener r11, java.lang.String r12) {
            r7 = this;
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            int r8 = r0.a(r1, r2, r3, r4, r5, r6)
            return r8
    }

    private int a(android.app.Activity r9, android.support.v4.app.Fragment r10, java.lang.String r11, com.tencent.tauth.IUiListener r12, java.lang.String r13, boolean r14) {
            r8 = this;
            r7 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            int r9 = r0.a(r1, r2, r3, r4, r5, r6, r7)
            return r9
    }

    private int a(android.app.Activity r12, android.support.v4.app.Fragment r13, java.lang.String r14, com.tencent.tauth.IUiListener r15, java.lang.String r16, boolean r17, java.util.Map<java.lang.String, java.lang.Object> r18) {
            r11 = this;
            java.lang.String r1 = "openSDK_LOG.QQAuth"
            java.lang.String r0 = com.tencent.open.utils.k.a(r12)     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L3f
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> L39
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L39
            java.lang.String r9 = com.tencent.open.utils.b.a(r2)     // Catch: java.lang.Throwable -> L39
            boolean r0 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L39
            if (r0 != 0) goto L3f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L39
            r0.<init>()     // Catch: java.lang.Throwable -> L39
            java.lang.String r2 = "-->login channelId: "
            r0.append(r2)     // Catch: java.lang.Throwable -> L39
            r0.append(r9)     // Catch: java.lang.Throwable -> L39
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L39
            com.tencent.open.log.SLog.v(r1, r0)     // Catch: java.lang.Throwable -> L39
            java.lang.String r10 = ""
            r3 = r11
            r4 = r12
            r5 = r14
            r6 = r15
            r7 = r17
            r8 = r9
            int r0 = r3.a(r4, r5, r6, r7, r8, r9, r10)     // Catch: java.lang.Throwable -> L39
            return r0
        L39:
            r0 = move-exception
            java.lang.String r2 = "-->login get channel id exception."
            com.tencent.open.log.SLog.e(r1, r2, r0)
        L3f:
            java.lang.String r0 = "-->login channelId is null "
            com.tencent.open.log.SLog.d(r1, r0)
            r0 = 0
            com.tencent.connect.common.BaseApi.isOEM = r0
            r1 = r11
            com.tencent.connect.auth.AuthAgent r2 = r1.a
            r6 = 0
            r3 = r12
            r4 = r14
            r5 = r15
            r7 = r13
            r8 = r17
            r9 = r18
            int r0 = r2.doLogin(r3, r4, r5, r6, r7, r8, r9)
            return r0
    }

    public static com.tencent.connect.auth.c a(java.lang.String r2, android.content.Context r3) {
            android.content.Context r0 = r3.getApplicationContext()
            com.tencent.open.utils.g.a(r0)
            java.lang.String r0 = "openSDK_LOG.QQAuth"
            java.lang.String r1 = "QQAuth -- createInstance() --start"
            com.tencent.open.log.SLog.i(r0, r1)
            com.tencent.connect.auth.c r1 = new com.tencent.connect.auth.c
            r1.<init>(r2, r3)
            java.lang.String r2 = "QQAuth -- createInstance()  --end"
            com.tencent.open.log.SLog.i(r0, r2)
            return r1
    }

    public static void a(android.content.Context r2, java.lang.String r3) {
            java.lang.String r0 = "BuglySdkInfos"
            r1 = 0
            android.content.SharedPreferences r2 = r2.getSharedPreferences(r0, r1)
            android.content.SharedPreferences$Editor r2 = r2.edit()
            java.lang.String r0 = "bcb3903995"
            r2.putString(r0, r3)
            r2.apply()
            return
    }

    public int a(android.app.Activity r11, com.tencent.tauth.IUiListener r12, java.util.Map<java.lang.String, java.lang.Object> r13) {
            r10 = this;
            java.lang.String r0 = "openSDK_LOG.QQAuth"
            java.lang.String r1 = "login--params"
            com.tencent.open.log.SLog.i(r0, r1)
            java.lang.String r0 = com.tencent.connect.common.Constants.KEY_QRCODE
            r1 = 0
            boolean r8 = com.tencent.open.utils.m.a(r13, r0, r1)
            java.lang.String r0 = com.tencent.connect.common.Constants.KEY_SCOPE
            java.lang.String r1 = "all"
            java.lang.String r5 = com.tencent.open.utils.m.a(r13, r0, r1)
            r4 = 0
            java.lang.String r7 = ""
            r2 = r10
            r3 = r11
            r6 = r12
            r9 = r13
            int r11 = r2.a(r3, r4, r5, r6, r7, r8, r9)
            return r11
    }

    public int a(android.app.Activity r3, java.lang.String r4, com.tencent.tauth.IUiListener r5) {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.QQAuth"
            java.lang.String r1 = "login()"
            com.tencent.open.log.SLog.i(r0, r1)
            java.lang.String r0 = ""
            int r3 = r2.a(r3, r4, r5, r0)
            return r3
    }

    public int a(android.app.Activity r9, java.lang.String r10, com.tencent.tauth.IUiListener r11, java.lang.String r12) {
            r8 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "-->login activity: "
            r0.append(r1)
            r0.append(r9)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.QQAuth"
            com.tencent.open.log.SLog.i(r1, r0)
            r4 = 0
            r2 = r8
            r3 = r9
            r5 = r10
            r6 = r11
            r7 = r12
            int r9 = r2.a(r3, r4, r5, r6, r7)
            return r9
    }

    public int a(android.app.Activity r10, java.lang.String r11, com.tencent.tauth.IUiListener r12, boolean r13) {
            r9 = this;
            java.lang.String r0 = "openSDK_LOG.QQAuth"
            java.lang.String r1 = "login()"
            com.tencent.open.log.SLog.i(r0, r1)
            r4 = 0
            java.lang.String r7 = ""
            r2 = r9
            r3 = r10
            r5 = r11
            r6 = r12
            r8 = r13
            int r10 = r2.a(r3, r4, r5, r6, r7, r8)
            return r10
    }

    @java.lang.Deprecated
    public int a(android.app.Activity r8, java.lang.String r9, com.tencent.tauth.IUiListener r10, boolean r11, java.lang.String r12, java.lang.String r13, java.lang.String r14) {
            r7 = this;
            java.lang.String r0 = "openSDK_LOG.QQAuth"
            java.lang.String r1 = "loginWithOEM"
            com.tencent.open.log.SLog.i(r0, r1)
            r0 = 1
            com.tencent.connect.common.BaseApi.isOEM = r0
            java.lang.String r0 = ""
            boolean r1 = r12.equals(r0)
            java.lang.String r2 = "null"
            if (r1 == 0) goto L15
            r12 = r2
        L15:
            boolean r1 = r13.equals(r0)
            if (r1 == 0) goto L1c
            r13 = r2
        L1c:
            boolean r0 = r14.equals(r0)
            if (r0 == 0) goto L23
            r14 = r2
        L23:
            com.tencent.connect.common.BaseApi.installChannel = r13
            com.tencent.connect.common.BaseApi.registerChannel = r12
            com.tencent.connect.common.BaseApi.businessId = r14
            com.tencent.connect.auth.AuthAgent r0 = r7.a
            r4 = 0
            r5 = 0
            r1 = r8
            r2 = r9
            r3 = r10
            r6 = r11
            int r8 = r0.a(r1, r2, r3, r4, r5, r6)
            return r8
    }

    public int a(android.support.v4.app.Fragment r7, java.lang.String r8, com.tencent.tauth.IUiListener r9, java.lang.String r10) {
            r6 = this;
            android.support.v4.app.FragmentActivity r1 = r7.getActivity()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "-->login activity: "
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "openSDK_LOG.QQAuth"
            com.tencent.open.log.SLog.i(r2, r0)
            r0 = r6
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            int r7 = r0.a(r1, r2, r3, r4, r5)
            return r7
    }

    public int a(android.support.v4.app.Fragment r8, java.lang.String r9, com.tencent.tauth.IUiListener r10, java.lang.String r11, boolean r12) {
            r7 = this;
            android.support.v4.app.FragmentActivity r1 = r8.getActivity()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "-->login activity: "
            r0.append(r2)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r2 = "openSDK_LOG.QQAuth"
            com.tencent.open.log.SLog.i(r2, r0)
            r0 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            int r8 = r0.a(r1, r2, r3, r4, r5, r6)
            return r8
    }

    public void a() {
            r2 = this;
            com.tencent.connect.auth.AuthAgent r0 = r2.a
            r1 = 0
            r0.a(r1)
            return
    }

    public void a(com.tencent.tauth.IUiListener r2) {
            r1 = this;
            com.tencent.connect.auth.AuthAgent r0 = r1.a
            r0.b(r2)
            return
    }

    public void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setAccessToken(), validTimeInSecond = "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r1 = ""
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.QQAuth"
            com.tencent.open.log.SLog.i(r1, r0)
            com.tencent.connect.auth.QQToken r0 = r2.b
            r0.setAccessToken(r3, r4)
            return
    }

    public int b(android.app.Activity r10, java.lang.String r11, com.tencent.tauth.IUiListener r12) {
            r9 = this;
            java.lang.String r0 = "openSDK_LOG.QQAuth"
            java.lang.String r1 = "reAuth()"
            com.tencent.open.log.SLog.i(r0, r1)
            com.tencent.connect.auth.AuthAgent r2 = r9.a
            r6 = 1
            r7 = 0
            r8 = 0
            r3 = r10
            r4 = r11
            r5 = r12
            int r10 = r2.a(r3, r4, r5, r6, r7, r8)
            return r10
    }

    public com.tencent.connect.auth.QQToken b() {
            r1 = this;
            com.tencent.connect.auth.QQToken r0 = r1.b
            return r0
    }

    public void b(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            java.lang.String r0 = "openSDK_LOG.QQAuth"
            java.lang.String r1 = "setOpenId() --start"
            com.tencent.open.log.SLog.i(r0, r1)
            com.tencent.connect.auth.QQToken r1 = r2.b
            r1.setOpenId(r4)
            com.tencent.connect.auth.QQToken r4 = r2.b
            com.tencent.connect.a.a.d(r3, r4)
            java.lang.String r3 = "setOpenId() --end"
            com.tencent.open.log.SLog.i(r0, r3)
            return
    }

    public boolean c() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "isSessionValid(), result = "
            r0.append(r1)
            com.tencent.connect.auth.QQToken r1 = r2.b
            boolean r1 = r1.isSessionValid()
            if (r1 == 0) goto L15
            java.lang.String r1 = "true"
            goto L17
        L15:
            java.lang.String r1 = "false"
        L17:
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "openSDK_LOG.QQAuth"
            com.tencent.open.log.SLog.i(r1, r0)
            com.tencent.connect.auth.QQToken r0 = r2.b
            boolean r0 = r0.isSessionValid()
            return r0
    }
}
