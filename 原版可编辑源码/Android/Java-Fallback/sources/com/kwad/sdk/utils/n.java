package com.kwad.sdk.utils;

public final class n {
    public static com.kwad.sdk.k.a.d aIg;

    static class a extends com.kwad.sdk.k.a.a {



        public a() {
                r0 = this;
                r0.<init>()
                r0.HW()
                return
        }

        private void HW() {
                r3 = this;
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r3.aGk = r0
                java.util.List<com.kwad.sdk.k.a.c> r0 = r3.aGk
                com.kwad.sdk.utils.n$a$1 r1 = new com.kwad.sdk.utils.n$a$1
                boolean r2 = r3.enabled
                r1.<init>(r3, r2)
                r0.add(r1)
                java.util.List<com.kwad.sdk.k.a.c> r0 = r3.aGk
                com.kwad.sdk.utils.n$a$2 r1 = new com.kwad.sdk.utils.n$a$2
                boolean r2 = r3.enabled
                r1.<init>(r3, r2)
                r0.add(r1)
                return
        }
    }

    static class b extends com.kwad.sdk.k.a.a {
        public b() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static class c extends com.kwad.sdk.k.a.a {
        public c() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static class d extends com.kwad.sdk.k.a.a {





        public d() {
                r0 = this;
                r0.<init>()
                r0.HW()
                return
        }

        private void HW() {
                r3 = this;
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r3.aGk = r0
                java.util.List<com.kwad.sdk.k.a.c> r0 = r3.aGk
                com.kwad.sdk.utils.n$d$1 r1 = new com.kwad.sdk.utils.n$d$1
                boolean r2 = r3.enabled
                r1.<init>(r3, r2)
                r0.add(r1)
                java.util.List<com.kwad.sdk.k.a.c> r0 = r3.aGk
                com.kwad.sdk.utils.n$d$2 r1 = new com.kwad.sdk.utils.n$d$2
                boolean r2 = r3.enabled
                r1.<init>(r3, r2)
                r0.add(r1)
                java.util.List<com.kwad.sdk.k.a.c> r0 = r3.aGk
                com.kwad.sdk.utils.n$d$3 r1 = new com.kwad.sdk.utils.n$d$3
                boolean r2 = r3.enabled
                r1.<init>(r3, r2)
                r0.add(r1)
                java.util.List<com.kwad.sdk.k.a.c> r0 = r3.aGk
                com.kwad.sdk.utils.n$d$4 r1 = new com.kwad.sdk.utils.n$d$4
                boolean r2 = r3.enabled
                r1.<init>(r3, r2)
                r0.add(r1)
                return
        }
    }

    static class e extends com.kwad.sdk.k.a.a {




        public e() {
                r0 = this;
                r0.<init>()
                r0.HW()
                return
        }

        private void HW() {
                r3 = this;
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r3.aGk = r0
                java.util.List<com.kwad.sdk.k.a.c> r0 = r3.aGk
                com.kwad.sdk.utils.n$e$1 r1 = new com.kwad.sdk.utils.n$e$1
                boolean r2 = r3.enabled
                r1.<init>(r3, r2)
                r0.add(r1)
                java.util.List<com.kwad.sdk.k.a.c> r0 = r3.aGk
                com.kwad.sdk.utils.n$e$2 r1 = new com.kwad.sdk.utils.n$e$2
                boolean r2 = r3.enabled
                r1.<init>(r3, r2)
                r0.add(r1)
                java.util.List<com.kwad.sdk.k.a.c> r0 = r3.aGk
                com.kwad.sdk.utils.n$e$3 r1 = new com.kwad.sdk.utils.n$e$3
                boolean r2 = r3.enabled
                r1.<init>(r3, r2)
                r0.add(r1)
                return
        }
    }

    public static synchronized com.kwad.sdk.k.a.d HV() {
            java.lang.Class<com.kwad.sdk.utils.n> r0 = com.kwad.sdk.utils.n.class
            monitor-enter(r0)
            java.lang.Class<com.kwad.sdk.service.a.f> r1 = com.kwad.sdk.service.a.f.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)     // Catch: java.lang.Throwable -> L69
            com.kwad.sdk.service.a.f r1 = (com.kwad.sdk.service.a.f) r1     // Catch: java.lang.Throwable -> L69
            boolean r1 = r1.xx()     // Catch: java.lang.Throwable -> L69
            if (r1 != 0) goto L14
            r1 = 0
            monitor-exit(r0)
            return r1
        L14:
            com.kwad.sdk.k.a.d r1 = com.kwad.sdk.utils.n.aIg     // Catch: java.lang.Throwable -> L69
            if (r1 == 0) goto L1c
            com.kwad.sdk.k.a.d r1 = com.kwad.sdk.utils.n.aIg     // Catch: java.lang.Throwable -> L69
            monitor-exit(r0)
            return r1
        L1c:
            android.content.Context r1 = com.kwad.sdk.service.ServiceProvider.getContext()     // Catch: java.lang.Throwable -> L69
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> L69
            com.kwad.sdk.k.a.d r2 = new com.kwad.sdk.k.a.d     // Catch: java.lang.Throwable -> L69
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L69
            com.kwad.sdk.utils.n$d r3 = new com.kwad.sdk.utils.n$d     // Catch: java.lang.Throwable -> L69
            r3.<init>()     // Catch: java.lang.Throwable -> L69
            boolean r3 = r3.bA(r1)     // Catch: java.lang.Throwable -> L69
            com.kwad.sdk.utils.n$e r4 = new com.kwad.sdk.utils.n$e     // Catch: java.lang.Throwable -> L69
            r4.<init>()     // Catch: java.lang.Throwable -> L69
            boolean r4 = r4.bA(r1)     // Catch: java.lang.Throwable -> L69
            com.kwad.sdk.utils.n$b r5 = new com.kwad.sdk.utils.n$b     // Catch: java.lang.Throwable -> L69
            r5.<init>()     // Catch: java.lang.Throwable -> L69
            boolean r5 = r5.bA(r1)     // Catch: java.lang.Throwable -> L69
            com.kwad.sdk.utils.n$a r6 = new com.kwad.sdk.utils.n$a     // Catch: java.lang.Throwable -> L69
            r6.<init>()     // Catch: java.lang.Throwable -> L69
            boolean r6 = r6.bA(r1)     // Catch: java.lang.Throwable -> L69
            com.kwad.sdk.utils.n$c r7 = new com.kwad.sdk.utils.n$c     // Catch: java.lang.Throwable -> L69
            r7.<init>()     // Catch: java.lang.Throwable -> L69
            boolean r1 = r7.bA(r1)     // Catch: java.lang.Throwable -> L69
            r2.bx(r3)     // Catch: java.lang.Throwable -> L69
            r2.by(r4)     // Catch: java.lang.Throwable -> L69
            r2.bz(r5)     // Catch: java.lang.Throwable -> L69
            r2.bB(r6)     // Catch: java.lang.Throwable -> L69
            r2.bC(r1)     // Catch: java.lang.Throwable -> L69
            com.kwad.sdk.utils.n.aIg = r2     // Catch: java.lang.Throwable -> L69
            monitor-exit(r0)
            return r2
        L69:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public static java.lang.String g(java.lang.String[] r1) {
            java.lang.Runtime r0 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Exception -> L11
            java.lang.Process r1 = r0.exec(r1)     // Catch: java.lang.Exception -> L11
            java.io.InputStream r1 = r1.getInputStream()     // Catch: java.lang.Exception -> L11
            java.lang.String r1 = com.kwad.sdk.crash.utils.h.c(r1)     // Catch: java.lang.Exception -> L11
            return r1
        L11:
            r1 = 0
            return r1
    }
}
