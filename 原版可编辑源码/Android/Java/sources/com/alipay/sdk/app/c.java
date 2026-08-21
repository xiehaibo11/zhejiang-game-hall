package com.alipay.sdk.app;

import android.app.Activity;
import android.webkit.SslErrorHandler;

class c implements Runnable {
    final Activity a;
    final SslErrorHandler b;
    final b c;

    c(b bVar, Activity activity, SslErrorHandler sslErrorHandler) {
        this.c = bVar;
        this.a = activity;
        this.b = sslErrorHandler;
    }

    @Override
    public void run() {
        com.alipay.sdk.widget.e.a(this.a, "安全警告", "安全连接证书校验无效，将无法保证访问数据的安全性，可能存在风险，请选择是否继续？", "继续", new d(this), "退出", new e(this));
    }
}
