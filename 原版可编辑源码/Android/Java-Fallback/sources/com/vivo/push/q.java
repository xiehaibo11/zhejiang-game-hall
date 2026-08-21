package com.vivo.push;

public abstract class q {
    protected android.content.Context a;
    protected android.os.Handler b;
    private final java.lang.Object c;

    final class a extends android.os.Handler {
        final com.vivo.push.q a;

        public a(com.vivo.push.q r1, android.os.Looper r2) {
                r0 = this;
                r0.a = r1
                r0.<init>(r2)
                return
        }

        @Override
        public final void handleMessage(android.os.Message r2) {
                r1 = this;
                com.vivo.push.q r0 = r1.a
                r0.b(r2)
                return
        }
    }

    public q() {
            r3 = this;
            r3.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r3.c = r0
            android.os.HandlerThread r0 = new android.os.HandlerThread
            java.lang.Class r1 = r3.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r2 = 1
            r0.<init>(r1, r2)
            r0.start()
            com.vivo.push.q$a r1 = new com.vivo.push.q$a
            android.os.Looper r0 = r0.getLooper()
            r1.<init>(r3, r0)
            r3.b = r1
            return
    }

    public final void a(android.content.Context r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final void a(android.os.Message r6) {
            r5 = this;
            java.lang.Object r0 = r5.c
            monitor-enter(r0)
            android.os.Handler r1 = r5.b     // Catch: java.lang.Throwable -> L4b
            if (r1 != 0) goto L44
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4b
            java.lang.String r2 = "Dead worker dropping a message: "
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L4b
            int r6 = r6.what     // Catch: java.lang.Throwable -> L4b
            r1.append(r6)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Throwable -> L4b
            java.lang.Class r1 = r5.getClass()     // Catch: java.lang.Throwable -> L4b
            java.lang.String r1 = r1.getSimpleName()     // Catch: java.lang.Throwable -> L4b
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4b
            r2.<init>()     // Catch: java.lang.Throwable -> L4b
            r2.append(r6)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r6 = " (Thread "
            r2.append(r6)     // Catch: java.lang.Throwable -> L4b
            java.lang.Thread r6 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L4b
            long r3 = r6.getId()     // Catch: java.lang.Throwable -> L4b
            r2.append(r3)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r6 = ")"
            r2.append(r6)     // Catch: java.lang.Throwable -> L4b
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> L4b
            com.vivo.push.util.p.e(r1, r6)     // Catch: java.lang.Throwable -> L4b
            goto L49
        L44:
            android.os.Handler r1 = r5.b     // Catch: java.lang.Throwable -> L4b
            r1.sendMessage(r6)     // Catch: java.lang.Throwable -> L4b
        L49:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4b
            return
        L4b:
            r6 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4b
            throw r6
    }

    public abstract void b(android.os.Message r1);
}
