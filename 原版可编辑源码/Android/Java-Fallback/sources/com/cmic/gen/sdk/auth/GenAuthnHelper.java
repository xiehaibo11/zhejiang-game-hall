package com.cmic.gen.sdk.auth;

public class GenAuthnHelper extends com.cmic.gen.sdk.auth.c {
    private static com.cmic.gen.sdk.auth.GenAuthnHelper f;
    private com.cmic.gen.sdk.view.GenAuthThemeConfig g;
    private com.cmic.gen.sdk.view.GenLoginPageInListener h;





    static {
            return
    }

    private GenAuthnHelper(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.h = r1
            return
    }

    private GenAuthnHelper(android.content.Context r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.h = r1
            r0.e = r2
            return
    }

    static void a(android.content.Context r0, com.cmic.gen.sdk.a r1) {
            b(r0, r1)
            return
    }

    static void a(com.cmic.gen.sdk.auth.GenAuthnHelper r0, com.cmic.gen.sdk.a r1) {
            super.a(r1)
            return
    }

    private static void b(android.content.Context r3, com.cmic.gen.sdk.a r4) {
            java.lang.String r0 = "traceId"
            java.lang.String r1 = r4.b(r0)
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            r2.putExtra(r0, r1)
            java.lang.String r0 = r4.b(r0)
            com.cmic.gen.sdk.e.e.a(r0, r4)
            java.lang.String r4 = "com.cmic.gen.sdk.view.GenLoginAuthActivity"
            r2.setClassName(r3, r4)
            r4 = 268435456(0x10000000, float:2.524355E-29)
            r2.setFlags(r4)
            r3.startActivity(r2)
            return
    }

    static void b(com.cmic.gen.sdk.auth.GenAuthnHelper r0, com.cmic.gen.sdk.a r1) {
            super.a(r1)
            return
    }

    public static com.cmic.gen.sdk.auth.GenAuthnHelper getInstance(android.content.Context r2) {
            com.cmic.gen.sdk.auth.GenAuthnHelper r0 = com.cmic.gen.sdk.auth.GenAuthnHelper.f
            if (r0 != 0) goto L17
            java.lang.Class<com.cmic.gen.sdk.auth.GenAuthnHelper> r0 = com.cmic.gen.sdk.auth.GenAuthnHelper.class
            monitor-enter(r0)
            com.cmic.gen.sdk.auth.GenAuthnHelper r1 = com.cmic.gen.sdk.auth.GenAuthnHelper.f     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.cmic.gen.sdk.auth.GenAuthnHelper r1 = new com.cmic.gen.sdk.auth.GenAuthnHelper     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.cmic.gen.sdk.auth.GenAuthnHelper.f = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.cmic.gen.sdk.auth.GenAuthnHelper r2 = com.cmic.gen.sdk.auth.GenAuthnHelper.f
            return r2
    }

    public static com.cmic.gen.sdk.auth.GenAuthnHelper getInstance(android.content.Context r2, java.lang.String r3) {
            com.cmic.gen.sdk.auth.GenAuthnHelper r0 = com.cmic.gen.sdk.auth.GenAuthnHelper.f
            if (r0 != 0) goto L17
            java.lang.Class<com.cmic.gen.sdk.auth.GenAuthnHelper> r0 = com.cmic.gen.sdk.auth.GenAuthnHelper.class
            monitor-enter(r0)
            com.cmic.gen.sdk.auth.GenAuthnHelper r1 = com.cmic.gen.sdk.auth.GenAuthnHelper.f     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.cmic.gen.sdk.auth.GenAuthnHelper r1 = new com.cmic.gen.sdk.auth.GenAuthnHelper     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L14
            com.cmic.gen.sdk.auth.GenAuthnHelper.f = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            com.cmic.gen.sdk.auth.GenAuthnHelper r2 = com.cmic.gen.sdk.auth.GenAuthnHelper.f
            return r2
    }

    @Override
    protected void a(com.cmic.gen.sdk.a r5) {
            r4 = this;
            com.cmic.gen.sdk.auth.c$a r0 = new com.cmic.gen.sdk.auth.c$a
            r0.<init>(r4, r5)
            android.os.Handler r1 = r4.d
            long r2 = r4.c
            r1.postDelayed(r0, r2)
            com.cmic.gen.sdk.auth.a r1 = r4.a
            com.cmic.gen.sdk.auth.GenAuthnHelper$4 r2 = new com.cmic.gen.sdk.auth.GenAuthnHelper$4
            r2.<init>(r4, r0)
            r1.a(r5, r2)
            return
    }

    public com.cmic.gen.sdk.view.GenAuthThemeConfig getAuthThemeConfig() {
            r1 = this;
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r1.g
            if (r0 != 0) goto Lf
            com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder r0 = new com.cmic.gen.sdk.view.GenAuthThemeConfig$Builder
            r0.<init>()
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r0.build()
            r1.g = r0
        Lf:
            com.cmic.gen.sdk.view.GenAuthThemeConfig r0 = r1.g
            return r0
    }

    public long getOverTime() {
            r2 = this;
            long r0 = r2.c
            return r0
    }

    @Override
    public void getPhoneInfo(java.lang.String r2, java.lang.String r3, com.cmic.gen.sdk.auth.GenTokenListener r4) {
            r1 = this;
            r0 = -1
            r1.getPhoneInfo(r2, r3, r4, r0)
            return
    }

    public void getPhoneInfo(java.lang.String r9, java.lang.String r10, com.cmic.gen.sdk.auth.GenTokenListener r11, int r12) {
            r8 = this;
            com.cmic.gen.sdk.a r4 = r8.a(r11)
            java.lang.String r0 = "SDKRequestCode"
            r4.a(r0, r12)
            com.cmic.gen.sdk.auth.GenAuthnHelper$1 r12 = new com.cmic.gen.sdk.auth.GenAuthnHelper$1
            android.content.Context r2 = r8.b
            r0 = r12
            r1 = r8
            r3 = r4
            r5 = r9
            r6 = r10
            r7 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            com.cmic.gen.sdk.e.n.a(r12)
            return
    }

    @Override
    public void loginAuth(java.lang.String r2, java.lang.String r3, com.cmic.gen.sdk.auth.GenTokenListener r4) {
            r1 = this;
            r0 = -1
            r1.loginAuth(r2, r3, r4, r0)
            return
    }

    public void loginAuth(java.lang.String r9, java.lang.String r10, com.cmic.gen.sdk.auth.GenTokenListener r11, int r12) {
            r8 = this;
            com.cmic.gen.sdk.a r4 = r8.a(r11)
            java.lang.String r0 = "SDKRequestCode"
            r4.a(r0, r12)
            com.cmic.gen.sdk.auth.GenAuthnHelper$2 r12 = new com.cmic.gen.sdk.auth.GenAuthnHelper$2
            android.content.Context r2 = r8.b
            r0 = r12
            r1 = r8
            r3 = r4
            r5 = r9
            r6 = r10
            r7 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            com.cmic.gen.sdk.e.n.a(r12)
            return
    }

    public void loginPageInCallBack(java.lang.String r2, org.json.JSONObject r3) {
            r1 = this;
            com.cmic.gen.sdk.view.GenLoginPageInListener r0 = r1.h
            if (r0 == 0) goto L7
            r0.onLoginPageInComplete(r2, r3)
        L7:
            return
    }

    @Override
    public void mobileAuth(java.lang.String r2, java.lang.String r3, com.cmic.gen.sdk.auth.GenTokenListener r4) {
            r1 = this;
            r0 = -1
            r1.mobileAuth(r2, r3, r4, r0)
            return
    }

    public void mobileAuth(java.lang.String r9, java.lang.String r10, com.cmic.gen.sdk.auth.GenTokenListener r11, int r12) {
            r8 = this;
            com.cmic.gen.sdk.a r4 = r8.a(r11)
            java.lang.String r0 = "SDKRequestCode"
            r4.a(r0, r12)
            com.cmic.gen.sdk.auth.GenAuthnHelper$3 r12 = new com.cmic.gen.sdk.auth.GenAuthnHelper$3
            android.content.Context r2 = r8.b
            r0 = r12
            r1 = r8
            r3 = r4
            r5 = r9
            r6 = r10
            r7 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            com.cmic.gen.sdk.e.n.a(r12)
            return
    }

    public void quitAuthActivity() {
            r2 = this;
            com.cmic.gen.sdk.view.b r0 = com.cmic.gen.sdk.view.b.a()     // Catch: java.lang.Exception -> L1d
            com.cmic.gen.sdk.view.b$a r0 = r0.b()     // Catch: java.lang.Exception -> L1d
            if (r0 == 0) goto L28
            com.cmic.gen.sdk.view.b r0 = com.cmic.gen.sdk.view.b.a()     // Catch: java.lang.Exception -> L1d
            r1 = 0
            r0.a = r1     // Catch: java.lang.Exception -> L1d
            com.cmic.gen.sdk.view.b r0 = com.cmic.gen.sdk.view.b.a()     // Catch: java.lang.Exception -> L1d
            com.cmic.gen.sdk.view.b$a r0 = r0.b()     // Catch: java.lang.Exception -> L1d
            r0.a()     // Catch: java.lang.Exception -> L1d
            goto L28
        L1d:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = "AuthnHelper"
            java.lang.String r1 = "关闭授权页失败"
            com.cmic.gen.sdk.e.c.a(r0, r1)
        L28:
            return
    }

    public void setAuthThemeConfig(com.cmic.gen.sdk.view.GenAuthThemeConfig r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void setPageInListener(com.cmic.gen.sdk.view.GenLoginPageInListener r1) {
            r0 = this;
            r0.h = r1
            return
    }
}
