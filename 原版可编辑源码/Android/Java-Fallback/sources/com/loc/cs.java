package com.loc;

public abstract class cs implements java.lang.Runnable {
    com.loc.cs.a e;

    interface a {
        void a(com.loc.cs r1);
    }

    public cs() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract void a();

    @Override
    public final void run() {
            r3 = this;
            boolean r0 = java.lang.Thread.interrupted()     // Catch: java.lang.Throwable -> L1b
            if (r0 == 0) goto L7
            return
        L7:
            r3.a()     // Catch: java.lang.Throwable -> L1b
            boolean r0 = java.lang.Thread.interrupted()     // Catch: java.lang.Throwable -> L1b
            if (r0 == 0) goto L11
            return
        L11:
            com.loc.cs$a r0 = r3.e     // Catch: java.lang.Throwable -> L1b
            if (r0 == 0) goto L1a
            com.loc.cs$a r0 = r3.e     // Catch: java.lang.Throwable -> L1b
            r0.a(r3)     // Catch: java.lang.Throwable -> L1b
        L1a:
            return
        L1b:
            r0 = move-exception
            java.lang.String r1 = "ThreadTask"
            java.lang.String r2 = "run"
            com.loc.av.b(r0, r1, r2)
            r0.printStackTrace()
            return
    }
}
