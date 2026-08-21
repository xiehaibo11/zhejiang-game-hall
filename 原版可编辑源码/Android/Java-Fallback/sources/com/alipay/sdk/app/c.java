package com.alipay.sdk.app;

class c implements java.lang.Runnable {
    final android.app.Activity a;
    final android.webkit.SslErrorHandler b;
    final com.alipay.sdk.app.b c;

    c(com.alipay.sdk.app.b r1, android.app.Activity r2, android.webkit.SslErrorHandler r3) {
            r0 = this;
            r0.c = r1
            r0.a = r2
            r0.b = r3
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r7 = this;
            android.app.Activity r0 = r7.a
            com.alipay.sdk.app.d r4 = new com.alipay.sdk.app.d
            r4.<init>(r7)
            com.alipay.sdk.app.e r6 = new com.alipay.sdk.app.e
            r6.<init>(r7)
            java.lang.String r1 = "安全警告"
            java.lang.String r2 = "安全连接证书校验无效，将无法保证访问数据的安全性，可能存在风险，请选择是否继续？"
            java.lang.String r3 = "继续"
            java.lang.String r5 = "退出"
            com.alipay.sdk.widget.e.a(r0, r1, r2, r3, r4, r5, r6)
            return
    }
}
