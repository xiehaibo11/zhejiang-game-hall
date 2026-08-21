package com.loc;

public abstract class cs implements Runnable {
    a e;

    interface a {
        void a(cs csVar);
    }

    public abstract void a();

    @Override
    public final void run() {
        try {
            if (Thread.interrupted()) {
                return;
            }
            a();
            if (Thread.interrupted() || this.e == null) {
                return;
            }
            this.e.a(this);
        } catch (Throwable th) {
            av.b(th, "ThreadTask", "run");
            th.printStackTrace();
        }
    }
}
