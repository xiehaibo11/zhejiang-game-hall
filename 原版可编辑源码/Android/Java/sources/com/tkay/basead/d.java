package com.tkay.basead;

import android.os.SystemClock;
import com.tkay.core.common.b.m;

public final class d {
    long a;
    long b;
    Runnable c;
    boolean d = false;
    private final com.tkay.core.common.j.a f = com.tkay.core.common.j.c.a();
    com.tkay.core.common.j.b e = new com.tkay.core.common.j.b() {
        @Override
        public final void run() {
            d.this.d = false;
            d.this.b = -1L;
            m.a().a(d.this.c);
        }
    };

    public d(long j, Runnable runnable) {
        this.b = j;
        this.c = runnable;
    }

    public final synchronized void a() {
        if (this.b >= 0 && !this.d) {
            this.d = true;
            this.a = SystemClock.elapsedRealtime();
            this.f.a(this.e, this.b);
        }
    }

    public final synchronized void b() {
        if (this.d) {
            this.d = false;
            this.b -= SystemClock.elapsedRealtime() - this.a;
            this.f.a(this.e);
        }
    }

    public final synchronized void c() {
        this.d = false;
        this.f.a(this.e);
        this.b = -1L;
    }
}
