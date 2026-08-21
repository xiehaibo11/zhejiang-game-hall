package com.vivo.push.d;

final class o implements Runnable {
    final com.vivo.push.b.n a;
    final n b;

    o(n nVar, com.vivo.push.b.n nVar2) {
        this.b = nVar;
        this.a = nVar2;
    }

    @Override
    public final void run() {
        this.b.b.onLog(this.b.a, this.a.d(), this.a.e(), this.a.f());
    }
}
