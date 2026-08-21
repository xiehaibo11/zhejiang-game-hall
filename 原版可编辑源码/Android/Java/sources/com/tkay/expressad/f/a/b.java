package com.tkay.expressad.f.a;

import android.os.CountDownTimer;

public final class b {
    private static final long a = 1000;
    private long b = 0;
    private long c;
    private com.tkay.expressad.f.a.a d;
    private a e;

    private b a(long j) {
        if (j < 0) {
            j = 1000;
        }
        this.c = j;
        return this;
    }

    private b a(com.tkay.expressad.f.a.a aVar) {
        this.d = aVar;
        return this;
    }

    private b b(long j) {
        this.b = j;
        return this;
    }

    private void a() {
        a aVar = this.e;
        if (aVar != null) {
            aVar.cancel();
            this.e = null;
        }
        if (this.c <= 0) {
            this.c = this.b + 1000;
        }
        a aVar2 = new a(this.b, this.c);
        this.e = aVar2;
        aVar2.a(this.d);
    }

    private void b() {
        a aVar = this.e;
        if (aVar == null) {
            if (aVar != null) {
                aVar.cancel();
                this.e = null;
            }
            if (this.c <= 0) {
                this.c = this.b + 1000;
            }
            a aVar2 = new a(this.b, this.c);
            this.e = aVar2;
            aVar2.a(this.d);
        }
        this.e.start();
    }

    private void c() {
        a aVar = this.e;
        if (aVar != null) {
            aVar.cancel();
            this.e = null;
        }
    }

    private static class a extends CountDownTimer {
        private com.tkay.expressad.f.a.a a;

        @Override
        public final void onFinish() {
        }

        @Override
        public final void onTick(long j) {
        }

        public a(long j, long j2) {
            super(j, j2);
        }

        final void a(com.tkay.expressad.f.a.a aVar) {
            this.a = aVar;
        }
    }
}
