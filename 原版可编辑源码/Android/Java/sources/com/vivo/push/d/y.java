package com.vivo.push.d;

final class y implements Runnable {
    final com.vivo.push.b.r a;
    final x b;

    y(x xVar, com.vivo.push.b.r rVar) {
        this.b = xVar;
        this.a = rVar;
    }

    @Override
    public final void run() {
        this.b.b.onPublish(this.b.a, this.a.h(), this.a.g());
    }
}
