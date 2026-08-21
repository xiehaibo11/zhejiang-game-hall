package com.kwad.framework.filedownloader;

import com.kwad.framework.filedownloader.x;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.ThreadPoolExecutor;

/* JADX INFO: loaded from: classes2.dex */
final class q {
    private final b abs = new b();

    static class a {
        private static final q abt = new q();

        static {
            com.kwad.framework.filedownloader.message.e.vg().a(new aa());
        }
    }

    static class b {
        private ThreadPoolExecutor abu;
        private LinkedBlockingQueue<Runnable> abv;

        b() {
            init();
        }

        private void init() {
            LinkedBlockingQueue<Runnable> linkedBlockingQueue = new LinkedBlockingQueue<>();
            this.abv = linkedBlockingQueue;
            this.abu = com.kwad.framework.filedownloader.f.b.a(3, linkedBlockingQueue, "LauncherTask");
        }

        public final void b(x.b bVar) {
            this.abv.remove(bVar);
        }

        public final void c(x.b bVar) {
            this.abu.execute(new c(bVar));
        }
    }

    static class c implements Runnable {
        private final x.b abw;
        private boolean abx = false;

        c(x.b bVar) {
            this.abw = bVar;
        }

        public final boolean equals(Object obj) {
            return super.equals(obj) || obj == this.abw;
        }

        @Override // java.lang.Runnable
        public final void run() {
            if (this.abx) {
                return;
            }
            this.abw.start();
        }
    }

    q() {
    }

    public static q tU() {
        return a.abt;
    }

    final synchronized void a(x.b bVar) {
        this.abs.c(bVar);
    }

    final synchronized void b(x.b bVar) {
        this.abs.b(bVar);
    }
}
