package com.tkay.core.common.l.b;

public abstract class b implements Runnable {
    public static final int d = 1;
    public static final int e = 2;
    public static final int f = 3;
    protected c h;
    protected boolean g = true;
    protected int i = 1;
    private long a = 0;
    private String b = "topon-default-thread";

    public abstract void a();

    public final void a(long j) {
        this.a = j;
    }

    public final long b() {
        return this.a;
    }

    private void a(c cVar) {
        this.h = cVar;
    }

    public final void a(String str) {
        this.b = str;
    }

    private String c() {
        return this.b;
    }

    @Override
    public void run() {
        Thread.currentThread().setName(this.b);
        a();
    }
}
