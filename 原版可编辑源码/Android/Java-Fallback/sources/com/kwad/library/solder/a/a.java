package com.kwad.library.solder.a;

public final class a {
    private static com.kwad.library.solder.a.a.a afq;
    private static final android.os.Handler handler = null;
    private static volatile boolean hasInit;



    public interface a {
        void a(com.kwad.library.solder.lib.a.f r1, java.io.File r2);

        int getMaxRetryCount();

        boolean vY();
    }

    static class b<P extends com.kwad.library.solder.lib.a.a, R extends com.kwad.library.solder.lib.a.f<P>> extends com.kwad.library.solder.lib.ext.b.b<P, R> {
        com.kwad.library.solder.lib.ext.b<P, R> aft;
        com.kwad.library.solder.a.a.c<P, R> afu;

        protected b(com.kwad.library.solder.lib.ext.b<P, R> r1, com.kwad.library.solder.a.a.c<P, R> r2) {
                r0 = this;
                r0.<init>()
                r0.aft = r1
                r0.afu = r2
                return
        }

        @Override
        public final void a(R r2) {
                r1 = this;
                com.kwad.library.solder.lib.ext.b<P extends com.kwad.library.solder.lib.a.a, R extends com.kwad.library.solder.lib.a.f<P>> r0 = r1.aft
                if (r0 == 0) goto L7
                r0.a(r2)
            L7:
                return
        }

        @Override
        public final void a(R r2, P r3) {
                r1 = this;
                com.kwad.library.solder.lib.ext.b<P extends com.kwad.library.solder.lib.a.a, R extends com.kwad.library.solder.lib.a.f<P>> r0 = r1.aft
                if (r0 == 0) goto L7
                r0.a(r2, r3)
            L7:
                return
        }

        @Override
        public final void a(R r3, com.kwad.library.solder.lib.ext.PluginError r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "load failed:"
                r0.<init>(r1)
                int r1 = r4.getCode()
                r0.append(r1)
                java.lang.String r1 = ":"
                r0.append(r1)
                java.lang.String r1 = r4.getMessage()
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "Sodler.helper"
                com.kwad.library.solder.lib.a.e(r1, r0)
                com.kwad.library.solder.lib.ext.b<P extends com.kwad.library.solder.lib.a.a, R extends com.kwad.library.solder.lib.a.f<P>> r0 = r2.aft
                if (r0 == 0) goto L2a
                r0.a(r3, r4)
            L2a:
                com.kwad.library.solder.a.a$c<P extends com.kwad.library.solder.lib.a.a, R extends com.kwad.library.solder.lib.a.f<P>> r4 = r2.afu
                if (r4 == 0) goto L31
                r4.d(r3)
            L31:
                return
        }

        @Override
        public final void b(R r2) {
                r1 = this;
                com.kwad.library.solder.lib.ext.b<P extends com.kwad.library.solder.lib.a.a, R extends com.kwad.library.solder.lib.a.f<P>> r0 = r1.aft
                if (r0 == 0) goto L7
                r0.b(r2)
            L7:
                return
        }

        @Override
        public final void c(R r2) {
                r1 = this;
                com.kwad.library.solder.lib.ext.b<P extends com.kwad.library.solder.lib.a.a, R extends com.kwad.library.solder.lib.a.f<P>> r0 = r1.aft
                if (r0 == 0) goto L7
                r0.c(r2)
            L7:
                return
        }
    }

    interface c<P extends com.kwad.library.solder.lib.a.a, R extends com.kwad.library.solder.lib.a.f<P>> {
        void d(R r1);
    }

    static {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.kwad.library.solder.a.a.handler = r0
            return
    }

    private static <P extends com.kwad.library.solder.lib.a.a, R extends com.kwad.library.solder.lib.a.f<P>> void a(android.content.Context r1, R r2, com.kwad.library.solder.lib.ext.b<P, R> r3) {
            init(r1)
            com.kwad.library.solder.lib.i r1 = com.kwad.library.solder.lib.i.wb()
            com.kwad.library.solder.lib.ext.c r1 = r1.wd()
            int r1 = r1.getRetryCount()
            r2.bJ(r1)
            com.kwad.library.solder.a.a$b r1 = new com.kwad.library.solder.a.a$b
            com.kwad.library.solder.a.a$1 r0 = new com.kwad.library.solder.a.a$1
            r0.<init>()
            r1.<init>(r3, r0)
            r2.a(r1)
            com.kwad.library.solder.lib.i r1 = com.kwad.library.solder.lib.i.wb()
            r3 = 16
            r1.a(r2, r3)
            return
    }

    public static void a(android.content.Context r1, com.kwad.library.solder.lib.c.b r2, com.kwad.library.solder.lib.ext.b.a r3) {
            com.kwad.library.solder.lib.b.a r0 = new com.kwad.library.solder.lib.b.a
            r0.<init>(r2)
            a(r1, r0, r3)
            return
    }

    public static void a(android.content.Context r1, com.kwad.library.solder.lib.c.b r2, com.kwad.library.solder.lib.ext.b.c r3) {
            com.kwad.library.solder.lib.b.c r0 = new com.kwad.library.solder.lib.b.c
            r0.<init>(r2)
            a(r1, r0, r3)
            return
    }

    public static void a(com.kwad.library.solder.a.a.a r0) {
            com.kwad.library.solder.a.a.afq = r0
            return
    }

    public static <T extends com.kwad.library.solder.lib.a.a> T h(android.content.Context r0, java.lang.String r1) {
            init(r0)
            com.kwad.library.solder.lib.i r0 = com.kwad.library.solder.lib.i.wb()
            com.kwad.library.solder.lib.a.d r0 = r0.we()
            com.kwad.library.solder.lib.a.a r0 = r0.bB(r1)
            return r0
    }

    private static synchronized void init(android.content.Context r7) {
            java.lang.Class<com.kwad.library.solder.a.a> r0 = com.kwad.library.solder.a.a.class
            monitor-enter(r0)
            boolean r1 = com.kwad.library.solder.a.a.hasInit     // Catch: java.lang.Throwable -> L58
            if (r1 == 0) goto L9
            monitor-exit(r0)
            return
        L9:
            com.kwad.library.solder.a.a$a r1 = com.kwad.library.solder.a.a.afq     // Catch: java.lang.Throwable -> L58
            r2 = 0
            r3 = 1
            if (r1 == 0) goto L1c
            com.kwad.library.solder.a.a$a r1 = com.kwad.library.solder.a.a.afq     // Catch: java.lang.Throwable -> L58
            int r1 = r1.getMaxRetryCount()     // Catch: java.lang.Throwable -> L58
            com.kwad.library.solder.a.a$a r4 = com.kwad.library.solder.a.a.afq     // Catch: java.lang.Throwable -> L58
            boolean r4 = r4.vY()     // Catch: java.lang.Throwable -> L58
            goto L1e
        L1c:
            r4 = r2
            r1 = r3
        L1e:
            com.kwad.library.solder.lib.ext.c$a r5 = new com.kwad.library.solder.lib.ext.c$a     // Catch: java.lang.Throwable -> L58
            r5.<init>()     // Catch: java.lang.Throwable -> L58
            java.lang.String r6 = "sodler"
            com.kwad.library.solder.lib.ext.c$a r5 = r5.bM(r6)     // Catch: java.lang.Throwable -> L58
            com.kwad.library.solder.lib.ext.c$a r1 = r5.bK(r1)     // Catch: java.lang.Throwable -> L58
            com.kwad.library.solder.lib.ext.c$a r1 = r1.ba(r2)     // Catch: java.lang.Throwable -> L58
            com.kwad.library.solder.lib.ext.c$a r1 = r1.bb(r4)     // Catch: java.lang.Throwable -> L58
            com.kwad.library.solder.lib.ext.c r1 = r1.wN()     // Catch: java.lang.Throwable -> L58
            com.kwad.library.solder.lib.i r2 = com.kwad.library.solder.lib.i.wb()     // Catch: java.lang.Throwable -> L58
            r2.a(r7, r1)     // Catch: java.lang.Throwable -> L58
            com.kwad.library.solder.a.a$a r7 = com.kwad.library.solder.a.a.afq     // Catch: java.lang.Throwable -> L58
            if (r7 == 0) goto L54
            com.kwad.library.solder.lib.i r7 = com.kwad.library.solder.lib.i.wb()     // Catch: java.lang.Throwable -> L58
            com.kwad.library.solder.lib.a.g r7 = r7.wf()     // Catch: java.lang.Throwable -> L58
            com.kwad.library.solder.a.a$2 r1 = new com.kwad.library.solder.a.a$2     // Catch: java.lang.Throwable -> L58
            r1.<init>()     // Catch: java.lang.Throwable -> L58
            r7.a(r1)     // Catch: java.lang.Throwable -> L58
        L54:
            com.kwad.library.solder.a.a.hasInit = r3     // Catch: java.lang.Throwable -> L58
            monitor-exit(r0)
            return
        L58:
            r7 = move-exception
            monitor-exit(r0)
            throw r7
    }

    static android.os.Handler vW() {
            android.os.Handler r0 = com.kwad.library.solder.a.a.handler
            return r0
    }

    static com.kwad.library.solder.a.a.a vX() {
            com.kwad.library.solder.a.a$a r0 = com.kwad.library.solder.a.a.afq
            return r0
    }
}
