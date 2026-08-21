package com.tkay.core.common.l.b;

public abstract class b implements java.lang.Runnable {
    public static final int d = 1;
    public static final int e = 2;
    public static final int f = 3;
    private long a;
    private java.lang.String b;
    protected boolean g;
    protected com.tkay.core.common.l.b.c h;
    protected int i;

    public b() {
            r2 = this;
            r2.<init>()
            r0 = 1
            r2.g = r0
            r2.i = r0
            r0 = 0
            r2.a = r0
            java.lang.String r0 = "topon-default-thread"
            r2.b = r0
            return
    }

    private void a(com.tkay.core.common.l.b.c r1) {
            r0 = this;
            r0.h = r1
            return
    }

    private java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public abstract void a();

    public final void a(long r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final long b() {
            r2 = this;
            long r0 = r2.a
            return r0
    }

    @Override
    public void run() {
            r2 = this;
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            java.lang.String r1 = r2.b
            r0.setName(r1)
            r2.a()
            return
    }
}
