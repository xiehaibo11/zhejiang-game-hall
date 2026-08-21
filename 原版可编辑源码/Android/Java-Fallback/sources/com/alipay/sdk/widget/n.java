package com.alipay.sdk.widget;

class n implements java.lang.Runnable {
    final android.webkit.SslErrorHandler a;
    final com.alipay.sdk.widget.j b;

    n(com.alipay.sdk.widget.j r1, android.webkit.SslErrorHandler r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r8 = this;
            com.alipay.sdk.widget.j r0 = r8.b
            android.app.Activity r1 = r0.a
            com.alipay.sdk.widget.o r5 = new com.alipay.sdk.widget.o
            r5.<init>(r8)
            com.alipay.sdk.widget.p r7 = new com.alipay.sdk.widget.p
            r7.<init>(r8)
            java.lang.String r2 = "安全警告"
            java.lang.String r3 = "安全連接證書校驗無效，將無法保證訪問資料的安全性，可能存在風險，請選擇是否繼續？"
            java.lang.String r4 = "繼續"
            java.lang.String r6 = "退出"
            com.alipay.sdk.widget.e.a(r1, r2, r3, r4, r5, r6, r7)
            return
    }
}
