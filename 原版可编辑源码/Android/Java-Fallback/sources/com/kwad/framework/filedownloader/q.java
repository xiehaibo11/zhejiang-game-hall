package com.kwad.framework.filedownloader;

final class q {
    private final com.kwad.framework.filedownloader.q.b abs;

    static class a {
        private static final com.kwad.framework.filedownloader.q abt = null;

        static {
                com.kwad.framework.filedownloader.q r0 = new com.kwad.framework.filedownloader.q
                r0.<init>()
                com.kwad.framework.filedownloader.q.a.abt = r0
                com.kwad.framework.filedownloader.message.e r0 = com.kwad.framework.filedownloader.message.e.vg()
                com.kwad.framework.filedownloader.aa r1 = new com.kwad.framework.filedownloader.aa
                r1.<init>()
                r0.a(r1)
                return
        }

        static com.kwad.framework.filedownloader.q tV() {
                com.kwad.framework.filedownloader.q r0 = com.kwad.framework.filedownloader.q.a.abt
                return r0
        }
    }

    static class b {
        private java.util.concurrent.ThreadPoolExecutor abu;
        private java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> abv;

        b() {
                r0 = this;
                r0.<init>()
                r0.init()
                return
        }

        private void init() {
                r3 = this;
                java.util.concurrent.LinkedBlockingQueue r0 = new java.util.concurrent.LinkedBlockingQueue
                r0.<init>()
                r3.abv = r0
                r1 = 3
                java.lang.String r2 = "LauncherTask"
                java.util.concurrent.ThreadPoolExecutor r0 = com.kwad.framework.filedownloader.f.b.a(r1, r0, r2)
                r3.abu = r0
                return
        }

        public final void b(com.kwad.framework.filedownloader.x.b r2) {
                r1 = this;
                java.util.concurrent.LinkedBlockingQueue<java.lang.Runnable> r0 = r1.abv
                r0.remove(r2)
                return
        }

        public final void c(com.kwad.framework.filedownloader.x.b r3) {
                r2 = this;
                java.util.concurrent.ThreadPoolExecutor r0 = r2.abu
                com.kwad.framework.filedownloader.q$c r1 = new com.kwad.framework.filedownloader.q$c
                r1.<init>(r3)
                r0.execute(r1)
                return
        }
    }

    static class c implements java.lang.Runnable {
        private final com.kwad.framework.filedownloader.x.b abw;
        private boolean abx;

        c(com.kwad.framework.filedownloader.x.b r1) {
                r0 = this;
                r0.<init>()
                r0.abw = r1
                r1 = 0
                r0.abx = r1
                return
        }

        public final boolean equals(java.lang.Object r2) {
                r1 = this;
                boolean r0 = super.equals(r2)
                if (r0 != 0) goto Ld
                com.kwad.framework.filedownloader.x$b r0 = r1.abw
                if (r2 != r0) goto Lb
                goto Ld
            Lb:
                r2 = 0
                return r2
            Ld:
                r2 = 1
                return r2
        }

        @Override
        public final void run() {
                r1 = this;
                boolean r0 = r1.abx
                if (r0 == 0) goto L5
                return
            L5:
                com.kwad.framework.filedownloader.x$b r0 = r1.abw
                r0.start()
                return
        }
    }

    q() {
            r1 = this;
            r1.<init>()
            com.kwad.framework.filedownloader.q$b r0 = new com.kwad.framework.filedownloader.q$b
            r0.<init>()
            r1.abs = r0
            return
    }

    public static com.kwad.framework.filedownloader.q tU() {
            com.kwad.framework.filedownloader.q r0 = com.kwad.framework.filedownloader.q.a.tV()
            return r0
    }

    final synchronized void a(com.kwad.framework.filedownloader.x.b r2) {
            r1 = this;
            monitor-enter(r1)
            com.kwad.framework.filedownloader.q$b r0 = r1.abs     // Catch: java.lang.Throwable -> L8
            r0.c(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    final synchronized void b(com.kwad.framework.filedownloader.x.b r2) {
            r1 = this;
            monitor-enter(r1)
            com.kwad.framework.filedownloader.q$b r0 = r1.abs     // Catch: java.lang.Throwable -> L8
            r0.b(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
