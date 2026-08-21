package com.reyun.tracking.sdk;

class c extends java.lang.Thread {
    final long a;
    final java.lang.Runnable b;
    final com.reyun.tracking.sdk.a c;

    c(com.reyun.tracking.sdk.a r1, long r2, java.lang.Runnable r4) {
            r0 = this;
            r0.c = r1
            r0.a = r2
            r0.b = r4
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r2 = this;
            long r0 = r2.a     // Catch: java.lang.InterruptedException -> L6
            java.lang.Thread.sleep(r0)     // Catch: java.lang.InterruptedException -> L6
            goto La
        L6:
            r0 = move-exception
            r0.printStackTrace()
        La:
            java.lang.Runnable r0 = r2.b
            r0.run()
            return
    }
}
