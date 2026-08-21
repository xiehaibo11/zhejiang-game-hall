package com.kwad.library.solder.lib;

public final class i extends com.kwad.library.solder.lib.j {
    private static volatile com.kwad.library.solder.lib.i afB;
    private com.kwad.library.solder.lib.j afC;
    private java.util.concurrent.ExecutorService afD;
    private java.util.Map<java.lang.String, com.kwad.library.solder.lib.i.a> afE;
    private volatile boolean mHasInit;



    public static class a {
        private final com.kwad.library.solder.lib.a.f afH;
        private final java.util.concurrent.Future<com.kwad.library.solder.lib.a.f> afI;

        public a(com.kwad.library.solder.lib.a.f r1, java.util.concurrent.Future<com.kwad.library.solder.lib.a.f> r2) {
                r0 = this;
                r0.<init>()
                r0.afH = r1
                r0.afI = r2
                return
        }

        public final void cancel() {
                r2 = this;
                com.kwad.library.solder.lib.a.f r0 = r2.afH
                r0.cancel()
                java.util.concurrent.Future<com.kwad.library.solder.lib.a.f> r0 = r2.afI
                r1 = 1
                r0.cancel(r1)
                return
        }
    }

    private i() {
            r7 = this;
            r1 = 0
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r0 = r7
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r0 = 0
            r7.mHasInit = r0
            return
    }

    private synchronized void a(java.lang.String r2, com.kwad.library.solder.lib.i.a r3) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.mHasInit     // Catch: java.lang.Throwable -> L1c
            if (r0 == 0) goto L14
            java.util.Map<java.lang.String, com.kwad.library.solder.lib.i$a> r0 = r1.afE     // Catch: java.lang.Throwable -> L1c
            java.util.Map r0 = c(r0)     // Catch: java.lang.Throwable -> L1c
            r1.afE = r0     // Catch: java.lang.Throwable -> L1c
            if (r2 == 0) goto L12
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> L1c
        L12:
            monitor-exit(r1)
            return
        L14:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L1c
            java.lang.String r3 = "Sodler has not yet been init."
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L1c
            throw r2     // Catch: java.lang.Throwable -> L1c
        L1c:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    private com.kwad.library.solder.lib.i.a b(com.kwad.library.solder.lib.a.f r3, com.kwad.library.solder.lib.j.a r4) {
            r2 = this;
            boolean r0 = r2.mHasInit
            if (r0 == 0) goto L2c
            java.lang.String r0 = r3.getId()
            com.kwad.library.solder.lib.i$a r0 = r2.bC(r0)
            if (r0 == 0) goto L11
            r0.cancel()
        L11:
            r3.a(r2)
            java.util.concurrent.ExecutorService r0 = r2.afD
            com.kwad.library.solder.lib.i$2 r1 = new com.kwad.library.solder.lib.i$2
            r1.<init>(r2, r3, r4)
            java.util.concurrent.Future r4 = r0.submit(r1)
            com.kwad.library.solder.lib.i$a r0 = new com.kwad.library.solder.lib.i$a
            r0.<init>(r3, r4)
            java.lang.String r3 = r3.getId()
            r2.a(r3, r0)
            return r0
        L2c:
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.String r4 = "Sodler has not yet been init."
            r3.<init>(r4)
            throw r3
    }

    private synchronized com.kwad.library.solder.lib.i.a bC(java.lang.String r2) {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.mHasInit     // Catch: java.lang.Throwable -> L22
            if (r0 == 0) goto L1a
            java.util.Map<java.lang.String, com.kwad.library.solder.lib.i$a> r0 = r1.afE     // Catch: java.lang.Throwable -> L22
            java.util.Map r0 = c(r0)     // Catch: java.lang.Throwable -> L22
            r1.afE = r0     // Catch: java.lang.Throwable -> L22
            if (r2 == 0) goto L17
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L22
            com.kwad.library.solder.lib.i$a r2 = (com.kwad.library.solder.lib.i.a) r2     // Catch: java.lang.Throwable -> L22
            monitor-exit(r1)
            return r2
        L17:
            r2 = 0
            monitor-exit(r1)
            return r2
        L1a:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L22
            java.lang.String r0 = "Sodler has not yet been init."
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L22
            throw r2     // Catch: java.lang.Throwable -> L22
        L22:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public static com.kwad.library.solder.lib.i wb() {
            com.kwad.library.solder.lib.i r0 = com.kwad.library.solder.lib.i.afB
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.library.solder.lib.i> r0 = com.kwad.library.solder.lib.i.class
            monitor-enter(r0)
            com.kwad.library.solder.lib.i r1 = com.kwad.library.solder.lib.i.afB     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.library.solder.lib.i r1 = new com.kwad.library.solder.lib.i     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.library.solder.lib.i.afB = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.library.solder.lib.i r0 = com.kwad.library.solder.lib.i.afB
            return r0
    }

    private static java.util.concurrent.ExecutorService wc() {
            java.util.concurrent.ThreadPoolExecutor r8 = new java.util.concurrent.ThreadPoolExecutor
            java.util.concurrent.TimeUnit r5 = java.util.concurrent.TimeUnit.SECONDS
            java.util.concurrent.LinkedBlockingQueue r6 = new java.util.concurrent.LinkedBlockingQueue
            r6.<init>()
            com.kwad.library.solder.lib.i$1 r7 = new com.kwad.library.solder.lib.i$1
            r7.<init>()
            r1 = 0
            r2 = 3
            r3 = 60
            r0 = r8
            r0.<init>(r1, r2, r3, r5, r6, r7)
            return r8
    }

    private void wj() {
            r2 = this;
            boolean r0 = r2.mHasInit
            if (r0 == 0) goto L5
            return
        L5:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Sodler has not yet been init."
            r0.<init>(r1)
            throw r0
    }

    @Override
    public final com.kwad.library.solder.lib.a.f a(com.kwad.library.solder.lib.a.f r3, com.kwad.library.solder.lib.j.a r4) {
            r2 = this;
            boolean r0 = r2.mHasInit
            if (r0 == 0) goto L16
            com.kwad.library.solder.lib.a.e r0 = r3.wp()
            com.kwad.library.solder.lib.j r1 = r2.afC
            if (r0 != 0) goto Ld
            r0 = r1
        Ld:
            com.kwad.library.solder.lib.a.f r3 = r3.a(r0)
            com.kwad.library.solder.lib.a.f r3 = r1.a(r3, r4)
            return r3
        L16:
            java.lang.RuntimeException r3 = new java.lang.RuntimeException
            java.lang.String r4 = "Sodler has not yet been init."
            r3.<init>(r4)
            throw r3
    }

    public final com.kwad.library.solder.lib.i.a a(com.kwad.library.solder.lib.a.f r1, int r2) {
            r0 = this;
            r2 = 16
            com.kwad.library.solder.lib.j$a r2 = com.kwad.library.solder.lib.j.a.a(r0, r2)
            com.kwad.library.solder.lib.i$a r1 = r0.b(r1, r2)
            return r1
    }

    public final synchronized void a(android.content.Context r9, com.kwad.library.solder.lib.ext.c r10) {
            r8 = this;
            monitor-enter(r8)
            boolean r0 = r8.mHasInit     // Catch: java.lang.Throwable -> L35
            if (r0 != 0) goto L33
            com.kwad.library.solder.lib.d r2 = new com.kwad.library.solder.lib.d     // Catch: java.lang.Throwable -> L35
            r2.<init>(r9)     // Catch: java.lang.Throwable -> L35
            com.kwad.library.solder.lib.e r3 = new com.kwad.library.solder.lib.e     // Catch: java.lang.Throwable -> L35
            r3.<init>(r9)     // Catch: java.lang.Throwable -> L35
            com.kwad.library.solder.lib.c r4 = new com.kwad.library.solder.lib.c     // Catch: java.lang.Throwable -> L35
            r4.<init>(r9, r10)     // Catch: java.lang.Throwable -> L35
            com.kwad.library.solder.lib.b r5 = new com.kwad.library.solder.lib.b     // Catch: java.lang.Throwable -> L35
            r5.<init>()     // Catch: java.lang.Throwable -> L35
            java.util.concurrent.ExecutorService r9 = wc()     // Catch: java.lang.Throwable -> L35
            r8.afD = r9     // Catch: java.lang.Throwable -> L35
            com.kwad.library.solder.lib.j r9 = new com.kwad.library.solder.lib.j     // Catch: java.lang.Throwable -> L35
            com.kwad.library.solder.lib.ext.a r7 = new com.kwad.library.solder.lib.ext.a     // Catch: java.lang.Throwable -> L35
            r7.<init>()     // Catch: java.lang.Throwable -> L35
            r1 = r9
            r6 = r10
            r1.<init>(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L35
            r8.afC = r9     // Catch: java.lang.Throwable -> L35
            r9 = 1
            r8.mHasInit = r9     // Catch: java.lang.Throwable -> L35
            r8.wj()     // Catch: java.lang.Throwable -> L35
        L33:
            monitor-exit(r8)
            return
        L35:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    public final void l(com.kwad.library.solder.lib.a.f r2) {
            r1 = this;
            java.lang.String r0 = r2.getId()
            com.kwad.library.solder.lib.i$a r0 = r1.bC(r0)
            if (r0 == 0) goto Ld
            r0.cancel()
        Ld:
            java.lang.String r2 = r2.getId()
            r0 = 0
            r1.a(r2, r0)
            return
    }

    @Override
    public final com.kwad.library.solder.lib.ext.c wd() {
            r2 = this;
            boolean r0 = r2.mHasInit
            if (r0 == 0) goto Lb
            com.kwad.library.solder.lib.j r0 = r2.afC
            com.kwad.library.solder.lib.ext.c r0 = r0.wd()
            return r0
        Lb:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Sodler has not yet been init."
            r0.<init>(r1)
            throw r0
    }

    @Override
    public final com.kwad.library.solder.lib.a.d we() {
            r2 = this;
            boolean r0 = r2.mHasInit
            if (r0 == 0) goto Lb
            com.kwad.library.solder.lib.j r0 = r2.afC
            com.kwad.library.solder.lib.a.d r0 = r0.we()
            return r0
        Lb:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Sodler has not yet been init."
            r0.<init>(r1)
            throw r0
    }

    @Override
    public final com.kwad.library.solder.lib.a.g wf() {
            r2 = this;
            boolean r0 = r2.mHasInit
            if (r0 == 0) goto Lb
            com.kwad.library.solder.lib.j r0 = r2.afC
            com.kwad.library.solder.lib.a.g r0 = r0.wf()
            return r0
        Lb:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Sodler has not yet been init."
            r0.<init>(r1)
            throw r0
    }

    @Override
    public final com.kwad.library.solder.lib.a.c wg() {
            r2 = this;
            boolean r0 = r2.mHasInit
            if (r0 == 0) goto Lb
            com.kwad.library.solder.lib.j r0 = r2.afC
            com.kwad.library.solder.lib.a.c r0 = r0.wg()
            return r0
        Lb:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Sodler has not yet been init."
            r0.<init>(r1)
            throw r0
    }

    @Override
    public final com.kwad.library.solder.lib.a.b wh() {
            r2 = this;
            boolean r0 = r2.mHasInit
            if (r0 == 0) goto Lb
            com.kwad.library.solder.lib.j r0 = r2.afC
            com.kwad.library.solder.lib.a.b r0 = r0.wh()
            return r0
        Lb:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Sodler has not yet been init."
            r0.<init>(r1)
            throw r0
    }

    @Override
    public final com.kwad.library.solder.lib.ext.a wi() {
            r2 = this;
            boolean r0 = r2.mHasInit
            if (r0 == 0) goto Lb
            com.kwad.library.solder.lib.j r0 = r2.afC
            com.kwad.library.solder.lib.ext.a r0 = r0.wi()
            return r0
        Lb:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "Sodler has not yet been init."
            r0.<init>(r1)
            throw r0
    }
}
