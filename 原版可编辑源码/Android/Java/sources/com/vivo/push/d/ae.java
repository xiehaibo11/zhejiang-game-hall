package com.vivo.push.d;

final class ae implements Runnable {
    final com.vivo.push.b.i a;
    final ad b;

    ae(ad adVar, com.vivo.push.b.i iVar) {
        this.b = adVar;
        this.a = iVar;
    }

    @Override
    public final void run() {
        this.b.b.onUnBind(this.b.a, this.a.h(), this.a.d());
    }
}
