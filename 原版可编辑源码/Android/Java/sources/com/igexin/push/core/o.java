package com.igexin.push.core;

class o implements Runnable {
    final n a;

    o(n nVar) {
        this.a = nVar;
    }

    @Override
    public void run() throws Throwable {
        this.a.c();
    }
}
