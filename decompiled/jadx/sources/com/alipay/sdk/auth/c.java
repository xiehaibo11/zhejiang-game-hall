package com.alipay.sdk.auth;

import com.github.lzyzsd.jsbridge.BridgeUtil;

/* JADX INFO: loaded from: classes.dex */
class c implements Runnable {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ String f1125a;
    final /* synthetic */ AuthActivity b;

    c(AuthActivity authActivity, String str) {
        this.b = authActivity;
        this.f1125a = str;
    }

    @Override // java.lang.Runnable
    public void run() {
        try {
            this.b.c.loadUrl(BridgeUtil.JAVASCRIPT_STR + this.f1125a);
        } catch (Exception unused) {
        }
    }
}
