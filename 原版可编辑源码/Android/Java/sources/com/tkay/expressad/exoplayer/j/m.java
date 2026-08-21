package com.tkay.expressad.exoplayer.j;

import android.os.Handler;
import com.tkay.expressad.exoplayer.j.d;

public final class m implements aa<Object>, d {
    public static final long a = 1000000;
    public static final int b = 2000;
    private static final int c = 2000;
    private static final int d = 524288;
    private final Handler e;
    private final d.a f;
    private final com.tkay.expressad.exoplayer.k.y g;
    private final com.tkay.expressad.exoplayer.k.c h;
    private int i;
    private long j;
    private long k;
    private long l;
    private long m;
    private long n;

    m(Handler handler, d.a aVar, long j, int i, com.tkay.expressad.exoplayer.k.c cVar, byte b2) {
        this(handler, aVar, j, i, cVar);
    }

    public static final class a {
        private Handler a;
        private d.a b;
        private long c = 1000000;
        private int d = 2000;
        private com.tkay.expressad.exoplayer.k.c e = com.tkay.expressad.exoplayer.k.c.a;

        private a a(Handler handler, d.a aVar) {
            com.tkay.expressad.exoplayer.k.a.a((handler == null || aVar == null) ? false : true);
            this.a = handler;
            this.b = aVar;
            return this;
        }

        private a a(int i) {
            this.d = i;
            return this;
        }

        private a a(long j) {
            this.c = j;
            return this;
        }

        private a a(com.tkay.expressad.exoplayer.k.c cVar) {
            this.e = cVar;
            return this;
        }

        private m a() {
            return new m(this.a, this.b, this.c, this.d, this.e, (byte) 0);
        }
    }

    public m() {
        this(null, null, 1000000L, 2000, com.tkay.expressad.exoplayer.k.c.a);
    }

    @Deprecated
    private m(Handler handler, d.a aVar) {
        this(handler, aVar, 1000000L, 2000, com.tkay.expressad.exoplayer.k.c.a);
    }

    @Deprecated
    private m(Handler handler, d.a aVar, int i) {
        this(handler, aVar, 1000000L, i, com.tkay.expressad.exoplayer.k.c.a);
    }

    private m(Handler handler, d.a aVar, long j, int i, com.tkay.expressad.exoplayer.k.c cVar) {
        this.e = handler;
        this.f = aVar;
        this.g = new com.tkay.expressad.exoplayer.k.y(i);
        this.h = cVar;
        this.n = j;
    }

    @Override
    public final synchronized long a() {
        return this.n;
    }

    @Override
    public final synchronized void b() {
        if (this.i == 0) {
            this.j = this.h.a();
        }
        this.i++;
    }

    @Override
    public final synchronized void a(int i) {
        this.k += (long) i;
    }

    @Override
    public final synchronized void c() {
        com.tkay.expressad.exoplayer.k.a.b(this.i > 0);
        long jA = this.h.a();
        int i = (int) (jA - this.j);
        this.l += i;
        this.m += this.k;
        if (i > 0) {
            this.g.a((int) Math.sqrt(this.k), (this.k * 8000) / r6);
            if (this.l >= 2000 || this.m >= 524288) {
                this.n = (long) this.g.a();
            }
        }
        long j = this.k;
        long j2 = this.n;
        if (this.e != null && this.f != null) {
            this.e.post(new 1(i, j, j2));
        }
        int i2 = this.i - 1;
        this.i = i2;
        if (i2 > 0) {
            this.j = jA;
        }
        this.k = 0L;
    }

    final class 1 implements Runnable {
        final int a;
        final long b;
        final long c;

        1(int i, long j, long j2) {
            this.a = i;
            this.b = j;
            this.c = j2;
        }

        @Override
        public final void run() {
            m.this.f.c();
        }
    }

    private void a(int i, long j, long j2) {
        Handler handler = this.e;
        if (handler == null || this.f == null) {
            return;
        }
        handler.post(new 1(i, j, j2));
    }
}
