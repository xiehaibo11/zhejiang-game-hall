package com.vivo.push;

final class h implements Runnable {
    final com.vivo.push.b.b a;
    final String b;
    final e c;

    h(e eVar, com.vivo.push.b.b bVar, String str) {
        this.c = eVar;
        this.a = bVar;
        this.b = str;
    }

    @Override
    public final void run() {
        this.c.a(this.a);
        this.c.e(this.b);
    }
}
