package com.tkay.expressad.exoplayer.d;

import android.os.Handler;
import java.util.concurrent.CopyOnWriteArrayList;

/* JADX INFO: loaded from: classes3.dex */
public interface c {
    void a(Exception exc);

    void d();

    void e();

    void f();

    public static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final CopyOnWriteArrayList<C0440a> f6525a = new CopyOnWriteArrayList<>();

        public final void a(Handler handler, c cVar) {
            com.tkay.expressad.exoplayer.k.a.a((handler == null || cVar == null) ? false : true);
            this.f6525a.add(new C0440a(handler, cVar));
        }

        public final void a(c cVar) {
            for (C0440a c0440a : this.f6525a) {
                if (c0440a.b == cVar) {
                    this.f6525a.remove(c0440a);
                }
            }
        }

        public final void a() {
            for (C0440a c0440a : this.f6525a) {
                final c cVar = c0440a.b;
                c0440a.f6530a.post(new Runnable() { // from class: com.tkay.expressad.exoplayer.d.c.a.1
                    @Override // java.lang.Runnable
                    public final void run() {
                        cVar.d();
                    }
                });
            }
        }

        public final void a(final Exception exc) {
            for (C0440a c0440a : this.f6525a) {
                final c cVar = c0440a.b;
                c0440a.f6530a.post(new Runnable() { // from class: com.tkay.expressad.exoplayer.d.c.a.2
                    @Override // java.lang.Runnable
                    public final void run() {
                        cVar.a(exc);
                    }
                });
            }
        }

        public final void b() {
            for (C0440a c0440a : this.f6525a) {
                final c cVar = c0440a.b;
                c0440a.f6530a.post(new Runnable() { // from class: com.tkay.expressad.exoplayer.d.c.a.3
                    @Override // java.lang.Runnable
                    public final void run() {
                        cVar.e();
                    }
                });
            }
        }

        public final void c() {
            for (C0440a c0440a : this.f6525a) {
                final c cVar = c0440a.b;
                c0440a.f6530a.post(new Runnable() { // from class: com.tkay.expressad.exoplayer.d.c.a.4
                    @Override // java.lang.Runnable
                    public final void run() {
                        cVar.f();
                    }
                });
            }
        }

        /* JADX INFO: renamed from: com.tkay.expressad.exoplayer.d.c$a$a, reason: collision with other inner class name */
        private static final class C0440a {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            public final Handler f6530a;
            public final c b;

            public C0440a(Handler handler, c cVar) {
                this.f6530a = handler;
                this.b = cVar;
            }
        }
    }
}
