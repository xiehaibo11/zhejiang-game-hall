package com.reyun.tracking.sdk;

class c extends Thread {
    final long a;
    final Runnable b;
    final a c;

    c(a aVar, long j, Runnable runnable) {
        this.c = aVar;
        this.a = j;
        this.b = runnable;
    }

    @Override
    public void run() {
        try {
            Thread.sleep(this.a);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        this.b.run();
    }
}
