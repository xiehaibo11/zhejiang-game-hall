package com.vivo.push;

public abstract class l implements java.lang.Runnable {
    protected android.content.Context a;
    private int b;
    private com.vivo.push.o c;

    public l(com.vivo.push.o r2) {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.b = r0
            r1.c = r2
            int r2 = r2.b()
            r1.b = r2
            if (r2 < 0) goto L1b
            com.vivo.push.e r2 = com.vivo.push.e.a()
            android.content.Context r2 = r2.h()
            r1.a = r2
            return
        L1b:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "PushTask need a > 0 task id."
            r2.<init>(r0)
            throw r2
    }

    public final int a() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    protected abstract void a(com.vivo.push.o r1);

    @Override
    public final void run() {
            r3 = this;
            android.content.Context r0 = r3.a
            if (r0 == 0) goto L1d
            com.vivo.push.o r1 = r3.c
            boolean r1 = r1 instanceof com.vivo.push.b.n
            if (r1 != 0) goto L1d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "[执行指令]"
            r1.<init>(r2)
            com.vivo.push.o r2 = r3.c
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.vivo.push.util.p.a(r0, r1)
        L1d:
            com.vivo.push.o r0 = r3.c
            r3.a(r0)
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            java.lang.String r1 = "{"
            r0.append(r1)
            com.vivo.push.o r1 = r2.c
            if (r1 != 0) goto L1c
            java.lang.String r1 = "[null]"
            goto L20
        L1c:
            java.lang.String r1 = r1.toString()
        L20:
            r0.append(r1)
            java.lang.String r1 = "}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
