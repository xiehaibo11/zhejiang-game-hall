package com.alipay.sdk.m.c0;

public final class c implements Runnable {
    public final b a;

    public c(b bVar) {
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
