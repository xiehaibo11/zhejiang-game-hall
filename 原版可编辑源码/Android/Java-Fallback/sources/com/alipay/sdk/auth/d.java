package com.alipay.sdk.auth;

class d implements java.lang.Runnable {
    final android.webkit.SslErrorHandler a;
    final com.alipay.sdk.auth.AuthActivity.c b;

    d(com.alipay.sdk.auth.AuthActivity.c r1, android.webkit.SslErrorHandler r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r8 = this;
            com.alipay.sdk.auth.AuthActivity$c r0 = r8.b
            com.alipay.sdk.auth.AuthActivity r1 = r0.a
            com.alipay.sdk.auth.e r5 = new com.alipay.sdk.auth.e
            r5.<init>(r8)
            com.alipay.sdk.auth.f r7 = new com.alipay.sdk.auth.f
            r7.<init>(r8)
            java.lang.String r2 = "安全警告"
            java.lang.String r3 = "由于您的设备缺少根证书，将无法校验该访问站点的安全性，可能存在风险，请选择是否继续？"
            java.lang.String r4 = "继续"
            java.lang.String r6 = "退出"
            com.alipay.sdk.widget.e.a(r1, r2, r3, r4, r5, r6, r7)
            return
    }
}
