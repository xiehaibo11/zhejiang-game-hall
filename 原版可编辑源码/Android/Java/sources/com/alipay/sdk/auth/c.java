package com.alipay.sdk.auth;

import com.github.lzyzsd.jsbridge.BridgeUtil;

class c implements Runnable {
    final String a;
    final AuthActivity b;

    c(AuthActivity authActivity, String str) {
        this.b = authActivity;
        this.a = str;
    }

    @Override
    public void run() {
        try {
            this.b.c.loadUrl(BridgeUtil.JAVASCRIPT_STR + this.a);
        } catch (Exception unused) {
        }
    }
}
