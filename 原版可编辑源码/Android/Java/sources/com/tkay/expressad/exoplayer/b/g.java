package com.tkay.expressad.exoplayer.b;

import android.os.Handler;

public interface g {
    void a(int i);

    void a(int i, long j, long j2);

    void b(com.tkay.expressad.exoplayer.m mVar);

    void b(String str, long j, long j2);

    void c(com.tkay.expressad.exoplayer.c.d dVar);

    void d(com.tkay.expressad.exoplayer.c.d dVar);

    public static final class a {
        private final Handler a;
        private final g b;

        public a(Handler handler, g gVar) {
            this.a = gVar != null ? (Handler) com.tkay.expressad.exoplayer.k.a.a(handler) : null;
            this.b = gVar;
        }

        public final void a(final com.tkay.expressad.exoplayer.c.d dVar) {
            if (this.b != null) {
                this.a.post(new Runnable() {
                    @Override
                    public final void run() {
                        a.this.b.c(dVar);
                    }
                });
            }
        }

        public final void a(final String str, final long j, final long j2) {
            if (this.b != null) {
                this.a.post(new Runnable() {
                    @Override
                    public final void run() {
                        a.this.b.b(str, j, j2);
                    }
                });
            }
        }

        public final void a(final com.tkay.expressad.exoplayer.m mVar) {
            if (this.b != null) {
                this.a.post(new Runnable() {
                    @Override
                    public final void run() {
                        a.this.b.b(mVar);
                    }
                });
            }
        }

        public final void a(final int i, final long j, final long j2) {
            if (this.b != null) {
                this.a.post(new Runnable() {
                    @Override
                    public final void run() {
                        a.this.b.a(i, j, j2);
                    }
                });
            }
        }

        public final void b(final com.tkay.expressad.exoplayer.c.d dVar) {
            if (this.b != null) {
                this.a.post(new Runnable() {
                    @Override
                    public final void run() {
                        a.this.b.d(dVar);
                    }
                });
            }
        }

        public final void a(final int i) {
            if (this.b != null) {
                this.a.post(new Runnable() {
                    @Override
                    public final void run() {
                        a.this.b.a(i);
                    }
                });
            }
        }
    }
}
