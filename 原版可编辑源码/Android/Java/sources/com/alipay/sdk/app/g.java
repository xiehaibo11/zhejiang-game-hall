package com.alipay.sdk.app;

class g implements Runnable {
    final String a;
    final boolean b;
    final H5PayCallback c;
    final PayTask d;

    g(PayTask payTask, String str, boolean z, H5PayCallback h5PayCallback) {
        this.d = payTask;
        this.a = str;
        this.b = z;
        this.c = h5PayCallback;
    }

    @Override
    public void run() {
        this.c.onPayResult(this.d.h5Pay(this.a, this.b));
    }
}
