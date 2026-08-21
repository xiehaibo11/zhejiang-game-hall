package com.alipay.sdk.widget;

class r implements java.lang.Runnable {
    final android.view.View a;
    final com.alipay.sdk.widget.q b;

    r(com.alipay.sdk.widget.q r1, android.view.View r2) {
            r0 = this;
            r0.b = r1
            r0.a = r2
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r2 = this;
            android.view.View r0 = r2.a
            r1 = 1
            r0.setEnabled(r1)
            return
    }
}
