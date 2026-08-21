package com.tkay.expressad.exoplayer.b;

import android.os.Handler;

/* JADX INFO: loaded from: classes3.dex */
public interface g {
    void a(int i);

    void a(int i, long j, long j2);

    void b(com.tkay.expressad.exoplayer.m mVar);

    void b(String str, long j, long j2);

    void c(com.tkay.expressad.exoplayer.c.d dVar);

    void d(com.tkay.expressad.exoplayer.c.d dVar);

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final Handler f6489a;
        private final g b;

        public a(Handler handler, g gVar) {
            this.f6489a = gVar != null ? (Handler) com.tkay.expressad.exoplayer.k.a.a(handler) : null;
            this.b = gVar;
        }

        public final void a(final com.tkay.expressad.exoplayer.c.d dVar) {
            if (this.b != null) {
                this.f6489a.post(new Runnable() { // from class: com.tkay.expressad.exoplayer.b.g.a.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        a.this.b.c(dVar);
                    }
                });
            }
        }

        public final void a(final String str, final long j, final long j2) {
            if (this.b != null) {
                this.f6489a.post(new Runnable() { // from class: com.tkay.expressad.exoplayer.b.g.a.2
                    @Override // java.lang.Runnable
                    public final void run() {
                        a.this.b.b(str, j, j2);
                    }
                });
            }
        }

        public final void a(final com.tkay.expressad.exoplayer.m mVar) {
            if (this.b != null) {
                this.f6489a.post(new Runnable() { // from class: com.tkay.expressad.exoplayer.b.g.a.3
                    @Override // java.lang.Runnable
                    public final void run() {
                        a.this.b.b(mVar);
                    }
                });
            }
        }

        public final void a(final int i, final long j, final long j2) {
            if (this.b != null) {
                this.f6489a.post(new Runnable() { // from class: com.tkay.expressad.exoplayer.b.g.a.4
                    @Override // java.lang.Runnable
                    public final void run() {
                        a.this.b.a(i, j, j2);
                    }
                });
            }
        }

        public final void b(final com.tkay.expressad.exoplayer.c.d dVar) {
            if (this.b != null) {
                this.f6489a.post(new Runnable() { // from class: com.tkay.expressad.exoplayer.b.g.a.5
                    @Override // java.lang.Runnable
                    public final void run() {
                        a.this.b.d(dVar);
                    }
                });
            }
        }

        public final void a(final int i) {
            if (this.b != null) {
                this.f6489a.post(new Runnable() { // from class: com.tkay.expressad.exoplayer.b.g.a.6
                    @Override // java.lang.Runnable
                    public final void run() {
                        a.this.b.a(i);
                    }
                });
            }
        }
    }
}
