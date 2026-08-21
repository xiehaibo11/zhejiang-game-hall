package com.alipay.sdk.widget;

class k implements Runnable {
    final j a;

    k(j jVar) {
        this.a = jVar;
    }

    @Override
    public void run() {
        this.a.a.finish();
    }
}
