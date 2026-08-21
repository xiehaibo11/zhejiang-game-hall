package com.xiaomi.push;

class ds implements Runnable {
    final dr a;

    ds(dr drVar) {
        this.a = drVar;
    }

    @Override
    public void run() {
        this.a.b();
    }
}
