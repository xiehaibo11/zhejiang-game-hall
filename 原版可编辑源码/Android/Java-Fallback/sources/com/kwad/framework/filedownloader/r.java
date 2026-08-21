package com.kwad.framework.filedownloader;

public class r {
    private static final java.lang.Object abA = null;
    private static final java.lang.Object aby = null;
    private volatile com.kwad.framework.filedownloader.v abB;
    private com.kwad.framework.filedownloader.w abz;

    static final class a {
        private static final com.kwad.framework.filedownloader.r abC = null;

        static {
                com.kwad.framework.filedownloader.r r0 = new com.kwad.framework.filedownloader.r
                r0.<init>()
                com.kwad.framework.filedownloader.r.a.abC = r0
                return
        }

        static com.kwad.framework.filedownloader.r ub() {
                com.kwad.framework.filedownloader.r r0 = com.kwad.framework.filedownloader.r.a.abC
                return r0
        }
    }

    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.kwad.framework.filedownloader.r.aby = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.kwad.framework.filedownloader.r.abA = r0
            return
    }

    public r() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(android.content.Context r3, com.kwad.framework.filedownloader.services.c.b r4) {
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L14
            java.lang.Class<com.kwad.framework.filedownloader.r> r0 = com.kwad.framework.filedownloader.r.class
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            r1[r2] = r3
            r2 = 1
            r1[r2] = r4
            java.lang.String r2 = "init Downloader with params: %s %s"
            com.kwad.framework.filedownloader.f.d.c(r0, r2, r1)
        L14:
            if (r3 == 0) goto L25
            android.content.Context r3 = r3.getApplicationContext()
            com.kwad.framework.filedownloader.f.c.ap(r3)
            com.kwad.framework.filedownloader.download.b r3 = com.kwad.framework.filedownloader.download.b.up()
            r3.a(r4)
            return
        L25:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "the provided context must not be null!"
            r3.<init>(r4)
            throw r3
    }

    private static void a(com.kwad.framework.filedownloader.e r2) {
            com.kwad.framework.filedownloader.f r0 = com.kwad.framework.filedownloader.f.tB()
            java.lang.String r1 = "event.service.connect.changed"
            r0.a(r1, r2)
            return
    }

    public static com.kwad.framework.filedownloader.a aX(java.lang.String r1) {
            com.kwad.framework.filedownloader.c r0 = new com.kwad.framework.filedownloader.c
            r0.<init>(r1)
            return r0
    }

    public static void ao(android.content.Context r0) {
            android.content.Context r0 = r0.getApplicationContext()
            com.kwad.framework.filedownloader.f.c.ap(r0)
            return
    }

    private int bb(int r3) {
            r2 = this;
            com.kwad.framework.filedownloader.h r0 = com.kwad.framework.filedownloader.h.tD()
            java.util.List r0 = r0.aW(r3)
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L1e
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1 = 0
            r0[r1] = r3
            java.lang.String r3 = "request pause but not exist %d"
            com.kwad.framework.filedownloader.f.d.d(r2, r3, r0)
            return r1
        L1e:
            java.util.Iterator r3 = r0.iterator()
        L22:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L36
            java.lang.Object r1 = r3.next()
            com.kwad.framework.filedownloader.a$a r1 = (com.kwad.framework.filedownloader.a.a) r1
            com.kwad.framework.filedownloader.a r1 = r1.tf()
            r1.pause()
            goto L22
        L36:
            int r3 = r0.size()
            return r3
    }

    public static com.kwad.framework.filedownloader.r tW() {
            com.kwad.framework.filedownloader.r r0 = com.kwad.framework.filedownloader.r.a.ub()
            return r0
    }

    public static boolean tY() {
            com.kwad.framework.filedownloader.n r0 = com.kwad.framework.filedownloader.n.tO()
            boolean r0 = r0.isConnected()
            return r0
    }

    public final boolean i(int r3, java.lang.String r4) {
            r2 = this;
            r2.bb(r3)
            com.kwad.framework.filedownloader.n r0 = com.kwad.framework.filedownloader.n.tO()
            boolean r3 = r0.ba(r3)
            if (r3 == 0) goto L36
            boolean r3 = android.text.TextUtils.isEmpty(r4)
            r0 = 1
            if (r3 == 0) goto L15
            return r0
        L15:
            java.io.File r3 = new java.io.File
            java.lang.String r1 = com.kwad.framework.filedownloader.f.f.bo(r4)
            r3.<init>(r1)
            boolean r1 = r3.exists()
            if (r1 == 0) goto L27
            r3.delete()
        L27:
            java.io.File r3 = new java.io.File
            r3.<init>(r4)
            boolean r4 = r3.exists()
            if (r4 == 0) goto L35
            r3.delete()
        L35:
            return r0
        L36:
            r3 = 0
            return r3
    }

    public final void tX() {
            r2 = this;
            boolean r0 = tY()
            if (r0 != 0) goto L11
            com.kwad.framework.filedownloader.n r0 = com.kwad.framework.filedownloader.n.tO()
            android.content.Context r1 = com.kwad.framework.filedownloader.f.c.vM()
            r0.an(r1)
        L11:
            return
    }

    final com.kwad.framework.filedownloader.w tZ() {
            r2 = this;
            com.kwad.framework.filedownloader.w r0 = r2.abz
            if (r0 != 0) goto L17
            java.lang.Object r0 = com.kwad.framework.filedownloader.r.aby
            monitor-enter(r0)
            com.kwad.framework.filedownloader.w r1 = r2.abz     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.framework.filedownloader.ab r1 = new com.kwad.framework.filedownloader.ab     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            r2.abz = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.framework.filedownloader.w r0 = r2.abz
            return r0
    }

    final com.kwad.framework.filedownloader.v ua() {
            r2 = this;
            com.kwad.framework.filedownloader.v r0 = r2.abB
            if (r0 != 0) goto L1e
            java.lang.Object r0 = com.kwad.framework.filedownloader.r.abA
            monitor-enter(r0)
            com.kwad.framework.filedownloader.v r1 = r2.abB     // Catch: java.lang.Throwable -> L1b
            if (r1 != 0) goto L19
            com.kwad.framework.filedownloader.z r1 = new com.kwad.framework.filedownloader.z     // Catch: java.lang.Throwable -> L1b
            r1.<init>()     // Catch: java.lang.Throwable -> L1b
            r2.abB = r1     // Catch: java.lang.Throwable -> L1b
            com.kwad.framework.filedownloader.v r1 = r2.abB     // Catch: java.lang.Throwable -> L1b
            com.kwad.framework.filedownloader.e r1 = (com.kwad.framework.filedownloader.e) r1     // Catch: java.lang.Throwable -> L1b
            a(r1)     // Catch: java.lang.Throwable -> L1b
        L19:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            goto L1e
        L1b:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1b
            throw r1
        L1e:
            com.kwad.framework.filedownloader.v r0 = r2.abB
            return r0
    }
}
