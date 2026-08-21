package com.alipay.sdk.widget;

class d extends android.os.Handler {
    final com.alipay.sdk.widget.a a;

    d(com.alipay.sdk.widget.a r1, android.os.Looper r2) {
            r0 = this;
            r0.a = r1
            r0.<init>(r2)
            return
    }

    @Override
    public void dispatchMessage(android.os.Message r1) {
            r0 = this;
            com.alipay.sdk.widget.a r1 = r0.a
            r1.c()
            return
    }
}
