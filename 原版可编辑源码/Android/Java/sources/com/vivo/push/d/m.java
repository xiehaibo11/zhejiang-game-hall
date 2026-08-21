package com.vivo.push.d;

final class m implements Runnable {
    final com.vivo.push.b.m a;
    final l b;

    m(l lVar, com.vivo.push.b.m mVar) {
        this.b = lVar;
        this.a = mVar;
    }

    @Override
    public final void run() {
        this.b.b.onListTags(this.b.a, this.a.h(), this.a.d(), this.a.g());
    }
}
