package com.igexin.b.a.d;

import java.util.concurrent.TimeUnit;
import java.util.concurrent.locks.Condition;
import java.util.concurrent.locks.ReentrantLock;

/* JADX INFO: loaded from: classes2.dex */
public abstract class e extends a {
    protected static f E;
    public int A;
    public Exception B;
    public Object C;
    public com.igexin.b.a.d.a.f D;
    protected final ReentrantLock F;
    protected final Condition G;
    Thread H;
    protected volatile boolean I;
    int J;
    protected com.igexin.b.a.d.a.c K;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private byte f2454a;
    protected volatile boolean k;
    protected volatile boolean m;
    protected volatile boolean n;
    protected volatile boolean o;
    protected volatile boolean p;
    protected volatile boolean q;
    protected volatile boolean r;
    protected volatile boolean s;
    protected volatile boolean t;
    protected volatile long u;
    volatile int v;
    public long w;
    public int x;
    public int y;
    public int z;

    public e(int i) {
        this(i, null);
    }

    public e(int i, com.igexin.b.a.d.a.c cVar) {
        this.z = i;
        this.K = cVar;
        ReentrantLock reentrantLock = new ReentrantLock();
        this.F = reentrantLock;
        this.G = reentrantLock.newCondition();
    }

    public final int a(long j, TimeUnit timeUnit) {
        if (j > 0) {
            int iA = E.k.a(this, j, timeUnit);
            if (iA == -2) {
                return -2;
            }
            if (iA == -1) {
                this.u = System.currentTimeMillis() + TimeUnit.MILLISECONDS.convert(j, timeUnit);
                return -1;
            }
            if (iA == 1) {
                return 1;
            }
        }
        return 0;
    }

    public long a(TimeUnit timeUnit) {
        return timeUnit.convert(o(), TimeUnit.MILLISECONDS);
    }

    public final void a(int i) {
        byte b = (byte) (this.f2454a & 15);
        this.f2454a = b;
        this.f2454a = (byte) (((i & 15) << 4) | b);
    }

    public final void a(int i, com.igexin.b.a.d.a.f fVar) {
        if (i < 0) {
            throw new IllegalArgumentException("second must > 0");
        }
        this.y = i;
        this.D = fVar;
    }

    public final void a(com.igexin.b.a.d.a.c cVar) {
        this.K = cVar;
    }

    public void b() {
        this.H = Thread.currentThread();
        this.p = true;
    }

    public final void b(long j) {
        this.w = j;
    }

    public void c() {
        if (this.k || this.m) {
            f();
        }
    }

    public void d() {
        this.s = true;
    }

    protected abstract void e();

    protected void e_() {
        if (!this.o && !this.q && !this.r) {
            this.k = true;
        } else if ((!this.q || this.k) && (!this.o || this.n || this.k)) {
            return;
        }
        this.p = false;
    }

    public void f() {
        this.C = null;
        this.B = null;
        this.H = null;
    }

    protected void g() {
    }

    final void n() {
        int i = this.J + 1;
        this.J = i;
        this.J = i & 1090519038;
    }

    long o() {
        return this.u - System.currentTimeMillis();
    }

    public final void p() {
        this.k = true;
    }

    public final boolean q() {
        return this.n;
    }

    public final boolean r() {
        return this.m;
    }

    public final Thread s() {
        return this.H;
    }

    protected void t() {
        com.igexin.b.a.d.a.c cVar = this.K;
        if (cVar != null) {
            cVar.a(com.igexin.b.a.d.a.d.error);
        }
    }
}
