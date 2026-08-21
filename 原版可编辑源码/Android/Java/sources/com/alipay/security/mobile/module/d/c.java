package com.alipay.security.mobile.module.d;

final class c implements Runnable {
    final b a;

    c(b bVar) {
        this.a = bVar;
    }

    @Override
    public final void run() {
        try {
            this.a.b();
        } catch (Exception e) {
            d.a(e);
        }
    }
}
