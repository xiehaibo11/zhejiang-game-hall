package com.igexin.push.core.a;

class f implements Runnable {
    final String a;
    final e b;

    f(e eVar, String str) {
        this.b = eVar;
        this.a = str;
    }

    @Override
    public void run() {
        this.b.b(this.a);
    }
}
