package com.tkay.expressad.exoplayer.d;

import android.os.Handler;
import java.util.concurrent.CopyOnWriteArrayList;

public interface c {
    void a(Exception exc);

    void d();

    void e();

    void f();

    public static final class a {
        private final CopyOnWriteArrayList<a> a = new CopyOnWriteArrayList<>();

        public final void a(Handler handler, c cVar) {
            com.tkay.expressad.exoplayer.k.a.a((handler == null || cVar == null) ? false : true);
            this.a.add(new a(handler, cVar));
        }

        public final void a(c cVar) {
            for (a aVar : this.a) {
                if (aVar.b == cVar) {
                    this.a.remove(aVar);
                }
            }
        }

        public final void a() {
            for (a aVar : this.a) {
                final c cVar = aVar.b;
                aVar.a.post(new Runnable() {
                    @Override
                    public final void run() {
                        cVar.d();
                    }
                });
            }
        }

        public final void a(final Exception exc) {
            for (a aVar : this.a) {
                final c cVar = aVar.b;
                aVar.a.post(new Runnable() {
                    @Override
                    public final void run() {
                        cVar.a(exc);
                    }
                });
            }
        }

        public final void b() {
            for (a aVar : this.a) {
                final c cVar = aVar.b;
                aVar.a.post(new Runnable() {
                    @Override
                    public final void run() {
                        cVar.e();
                    }
                });
            }
        }

        public final void c() {
            for (a aVar : this.a) {
                final c cVar = aVar.b;
                aVar.a.post(new Runnable() {
                    @Override
                    public final void run() {
                        cVar.f();
                    }
                });
            }
        }

        private static final class a {
            public final Handler a;
            public final c b;

            public a(Handler handler, c cVar) {
                this.a = handler;
                this.b = cVar;
            }
        }
    }
}
