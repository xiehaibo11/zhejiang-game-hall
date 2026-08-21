package com.tkay.expressad.foundation.g.f;

import android.os.Handler;
import java.util.concurrent.Executor;

public class d implements c {
    private final String a = d.class.getSimpleName();
    private final Executor b;

    public d(final Handler handler) {
        this.b = new Executor() {
            @Override
            public final void execute(Runnable runnable) {
                handler.post(runnable);
            }
        };
    }

    @Override
    public final void a(i<?> iVar, k<?> kVar) {
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new a(iVar, kVar));
        }
    }

    @Override
    public final void a(i<?> iVar, com.tkay.expressad.foundation.g.f.a.a aVar) {
        if (this.b != null) {
            this.b.execute(new a(iVar, k.a(aVar)));
        }
    }

    @Override
    public final void a(final i<?> iVar) {
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new Runnable() {
                @Override
                public final void run() {
                    iVar.o();
                }
            });
        }
    }

    @Override
    public final void b(final i<?> iVar) {
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new Runnable() {
                @Override
                public final void run() {
                    iVar.m();
                }
            });
        }
    }

    @Override
    public final void c(final i<?> iVar) {
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new Runnable() {
                @Override
                public final void run() {
                    iVar.n();
                }
            });
        }
    }

    @Override
    public final void d(final i<?> iVar) {
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new Runnable() {
                @Override
                public final void run() {
                }
            });
        }
    }

    @Override
    public final void e(final i<?> iVar) {
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new Runnable() {
                @Override
                public final void run() {
                }
            });
        }
    }

    @Override
    public final void a(final i<?> iVar, final long j, final long j2) {
        Executor executor = this.b;
        if (executor != null) {
            executor.execute(new Runnable() {
                @Override
                public final void run() {
                    iVar.a(j, j2);
                }
            });
        }
    }

    private class a implements Runnable {
        private final i b;
        private final k c;

        public a(i iVar, k kVar) {
            this.b = iVar;
            this.c = kVar;
        }

        @Override
        public final void run() {
            if (this.b.f()) {
                this.b.c();
                this.b.m();
                return;
            }
            if (this.c.b == null) {
                this.b.a(this.c);
            } else {
                this.b.b(this.c.b);
            }
            this.b.c();
            this.b.o();
        }
    }
}
