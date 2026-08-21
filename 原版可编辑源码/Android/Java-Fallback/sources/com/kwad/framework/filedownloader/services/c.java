package com.kwad.framework.filedownloader.services;

public final class c {
    private final com.kwad.framework.filedownloader.services.c.b ael;

    public interface a {
        com.kwad.framework.filedownloader.f.c.b uv();
    }

    public static class b {
        com.kwad.framework.filedownloader.f.c.c aem;
        java.lang.Integer aen;
        com.kwad.framework.filedownloader.f.c.e aeo;
        com.kwad.framework.filedownloader.f.c.b aep;
        com.kwad.framework.filedownloader.services.c.a aeq;
        com.kwad.framework.filedownloader.f.c.a aer;
        com.kwad.framework.filedownloader.f.c.d aes;

        public b() {
                r0 = this;
                r0.<init>()
                return
        }

        public final com.kwad.framework.filedownloader.services.c.b a(com.kwad.framework.filedownloader.f.c.b r1) {
                r0 = this;
                r0.aep = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.services.c.b a(com.kwad.framework.filedownloader.services.c.a r1) {
                r0 = this;
                r0.aeq = r1
                return r0
        }

        public final com.kwad.framework.filedownloader.services.c.b bC(int r1) {
                r0 = this;
                r1 = 2147483647(0x7fffffff, float:NaN)
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
                r0.aen = r1
                return r0
        }

        public final java.lang.String toString() {
                r3 = this;
                r0 = 5
                java.lang.Object[] r0 = new java.lang.Object[r0]
                com.kwad.framework.filedownloader.f.c$c r1 = r3.aem
                r2 = 0
                r0[r2] = r1
                java.lang.Integer r1 = r3.aen
                r2 = 1
                r0[r2] = r1
                com.kwad.framework.filedownloader.f.c$e r1 = r3.aeo
                r2 = 2
                r0[r2] = r1
                com.kwad.framework.filedownloader.f.c$b r1 = r3.aep
                r2 = 3
                r0[r2] = r1
                com.kwad.framework.filedownloader.f.c$a r1 = r3.aer
                r2 = 4
                r0[r2] = r1
                java.lang.String r1 = "component: database[%s], maxNetworkCount[%s], outputStream[%s], connection[%s], connectionCountAdapter[%s]"
                java.lang.String r0 = com.kwad.framework.filedownloader.f.f.b(r1, r0)
                return r0
        }
    }

    public c() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.ael = r0
            return
    }

    public c(com.kwad.framework.filedownloader.services.c.b r1) {
            r0 = this;
            r0.<init>()
            r0.ael = r1
            return
    }

    private static com.kwad.framework.filedownloader.f.c.e vA() {
            com.kwad.framework.filedownloader.e.b$a r0 = new com.kwad.framework.filedownloader.e.b$a
            r0.<init>()
            return r0
    }

    private static com.kwad.framework.filedownloader.f.c.b vB() {
            com.kwad.framework.filedownloader.a.c$b r0 = new com.kwad.framework.filedownloader.a.c$b
            r0.<init>()
            return r0
    }

    private static com.kwad.framework.filedownloader.f.c.a vC() {
            com.kwad.framework.filedownloader.a.a r0 = new com.kwad.framework.filedownloader.a.a
            r0.<init>()
            return r0
    }

    private static com.kwad.framework.filedownloader.f.c.d vx() {
            com.kwad.framework.filedownloader.services.b r0 = new com.kwad.framework.filedownloader.services.b
            r0.<init>()
            return r0
    }

    private static int vy() {
            com.kwad.framework.filedownloader.f.e r0 = com.kwad.framework.filedownloader.f.e.vO()
            int r0 = r0.aeN
            return r0
    }

    private static com.kwad.framework.filedownloader.b.a vz() {
            com.kwad.framework.filedownloader.b.c r0 = new com.kwad.framework.filedownloader.b.c
            r0.<init>()
            return r0
    }

    public final int us() {
            r3 = this;
            com.kwad.framework.filedownloader.services.c$b r0 = r3.ael
            if (r0 != 0) goto L9
            int r0 = vy()
            return r0
        L9:
            java.lang.Integer r0 = r0.aen
            if (r0 == 0) goto L25
            boolean r1 = com.kwad.framework.filedownloader.f.d.aeI
            if (r1 == 0) goto L1c
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r0
            java.lang.String r2 = "initial FileDownloader manager with the customize maxNetworkThreadCount: %d"
            com.kwad.framework.filedownloader.f.d.c(r3, r2, r1)
        L1c:
            int r0 = r0.intValue()
            int r0 = com.kwad.framework.filedownloader.f.e.bG(r0)
            return r0
        L25:
            int r0 = vy()
            return r0
    }

    public final com.kwad.framework.filedownloader.b.a vs() {
            r3 = this;
            com.kwad.framework.filedownloader.services.c$b r0 = r3.ael
            if (r0 == 0) goto L28
            com.kwad.framework.filedownloader.f.c$c r0 = r0.aem
            if (r0 != 0) goto L9
            goto L28
        L9:
            com.kwad.framework.filedownloader.services.c$b r0 = r3.ael
            com.kwad.framework.filedownloader.f.c$c r0 = r0.aem
            com.kwad.framework.filedownloader.b.a r0 = r0.vN()
            if (r0 == 0) goto L23
            boolean r1 = com.kwad.framework.filedownloader.f.d.aeI
            if (r1 == 0) goto L22
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r0
            java.lang.String r2 = "initial FileDownloader manager with the customize database: %s"
            com.kwad.framework.filedownloader.f.d.c(r3, r2, r1)
        L22:
            return r0
        L23:
            com.kwad.framework.filedownloader.b.a r0 = vz()
            return r0
        L28:
            com.kwad.framework.filedownloader.b.a r0 = vz()
            return r0
    }

    public final com.kwad.framework.filedownloader.f.c.e vt() {
            r3 = this;
            com.kwad.framework.filedownloader.services.c$b r0 = r3.ael
            if (r0 != 0) goto L9
            com.kwad.framework.filedownloader.f.c$e r0 = vA()
            return r0
        L9:
            com.kwad.framework.filedownloader.f.c$e r0 = r0.aeo
            if (r0 == 0) goto L1d
            boolean r1 = com.kwad.framework.filedownloader.f.d.aeI
            if (r1 == 0) goto L1c
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r0
            java.lang.String r2 = "initial FileDownloader manager with the customize output stream: %s"
            com.kwad.framework.filedownloader.f.d.c(r3, r2, r1)
        L1c:
            return r0
        L1d:
            com.kwad.framework.filedownloader.f.c$e r0 = vA()
            return r0
    }

    public final com.kwad.framework.filedownloader.f.c.b vu() {
            r1 = this;
            com.kwad.framework.filedownloader.services.c$b r0 = r1.ael
            if (r0 != 0) goto L9
            com.kwad.framework.filedownloader.f.c$b r0 = vB()
            return r0
        L9:
            com.kwad.framework.filedownloader.services.c$a r0 = r0.aeq
            if (r0 == 0) goto L14
            com.kwad.framework.filedownloader.f.c$b r0 = r0.uv()
            if (r0 == 0) goto L14
            return r0
        L14:
            com.kwad.framework.filedownloader.f.c$b r0 = vB()
            return r0
    }

    public final com.kwad.framework.filedownloader.f.c.a vv() {
            r3 = this;
            com.kwad.framework.filedownloader.services.c$b r0 = r3.ael
            if (r0 != 0) goto L9
            com.kwad.framework.filedownloader.f.c$a r0 = vC()
            return r0
        L9:
            com.kwad.framework.filedownloader.f.c$a r0 = r0.aer
            if (r0 == 0) goto L1d
            boolean r1 = com.kwad.framework.filedownloader.f.d.aeI
            if (r1 == 0) goto L1c
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r0
            java.lang.String r2 = "initial FileDownloader manager with the customize connection count adapter: %s"
            com.kwad.framework.filedownloader.f.d.c(r3, r2, r1)
        L1c:
            return r0
        L1d:
            com.kwad.framework.filedownloader.f.c$a r0 = vC()
            return r0
    }

    public final com.kwad.framework.filedownloader.f.c.d vw() {
            r3 = this;
            com.kwad.framework.filedownloader.services.c$b r0 = r3.ael
            if (r0 != 0) goto L9
            com.kwad.framework.filedownloader.f.c$d r0 = vx()
            return r0
        L9:
            com.kwad.framework.filedownloader.f.c$d r0 = r0.aes
            if (r0 == 0) goto L1d
            boolean r1 = com.kwad.framework.filedownloader.f.d.aeI
            if (r1 == 0) goto L1c
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r0
            java.lang.String r2 = "initial FileDownloader manager with the customize id generator: %s"
            com.kwad.framework.filedownloader.f.d.c(r3, r2, r1)
        L1c:
            return r0
        L1d:
            com.kwad.framework.filedownloader.f.c$d r0 = vx()
            return r0
    }
}
