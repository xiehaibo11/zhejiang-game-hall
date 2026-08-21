package com.kwad.framework.filedownloader;

public final class z extends com.kwad.framework.filedownloader.e implements com.kwad.framework.filedownloader.v {
    private final java.util.ArrayList<com.kwad.framework.filedownloader.a.a> abD;

    public z() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.abD = r0
            return
    }

    @Override
    public final boolean d(com.kwad.framework.filedownloader.a.a r2) {
            r1 = this;
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r0 = r1.abD
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L12
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r0 = r1.abD
            boolean r2 = r0.contains(r2)
            if (r2 == 0) goto L12
            r2 = 1
            return r2
        L12:
            r2 = 0
            return r2
    }

    @Override
    public final void e(com.kwad.framework.filedownloader.a.a r3) {
            r2 = this;
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r0 = r2.abD
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L15
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r0 = r2.abD
            monitor-enter(r0)
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r1 = r2.abD     // Catch: java.lang.Throwable -> L12
            r1.remove(r3)     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            return
        L12:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L12
            throw r3
        L15:
            return
    }

    @Override
    public final boolean f(com.kwad.framework.filedownloader.a.a r7) {
            r6 = this;
            com.kwad.framework.filedownloader.r.tW()
            boolean r0 = com.kwad.framework.filedownloader.r.tY()
            r1 = 0
            if (r0 != 0) goto L52
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r0 = r6.abD
            monitor-enter(r0)
            com.kwad.framework.filedownloader.r.tW()     // Catch: java.lang.Throwable -> L4f
            boolean r2 = com.kwad.framework.filedownloader.r.tY()     // Catch: java.lang.Throwable -> L4f
            if (r2 != 0) goto L4d
            boolean r2 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> L4f
            r3 = 1
            if (r2 == 0) goto L30
            java.lang.String r2 = "Waiting for connecting with the downloader service... %d"
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L4f
            com.kwad.framework.filedownloader.a r5 = r7.tf()     // Catch: java.lang.Throwable -> L4f
            int r5 = r5.getId()     // Catch: java.lang.Throwable -> L4f
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L4f
            r4[r1] = r5     // Catch: java.lang.Throwable -> L4f
            com.kwad.framework.filedownloader.f.d.c(r6, r2, r4)     // Catch: java.lang.Throwable -> L4f
        L30:
            com.kwad.framework.filedownloader.n r1 = com.kwad.framework.filedownloader.n.tO()     // Catch: java.lang.Throwable -> L4f
            android.content.Context r2 = com.kwad.framework.filedownloader.f.c.vM()     // Catch: java.lang.Throwable -> L4f
            r1.an(r2)     // Catch: java.lang.Throwable -> L4f
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r1 = r6.abD     // Catch: java.lang.Throwable -> L4f
            boolean r1 = r1.contains(r7)     // Catch: java.lang.Throwable -> L4f
            if (r1 != 0) goto L4b
            r7.free()     // Catch: java.lang.Throwable -> L4f
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r1 = r6.abD     // Catch: java.lang.Throwable -> L4f
            r1.add(r7)     // Catch: java.lang.Throwable -> L4f
        L4b:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4f
            return r3
        L4d:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4f
            goto L52
        L4f:
            r7 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L4f
            throw r7
        L52:
            r6.e(r7)
            return r1
    }

    @Override
    public final void ty() {
            r7 = this;
            com.kwad.framework.filedownloader.r r0 = com.kwad.framework.filedownloader.r.tW()
            com.kwad.framework.filedownloader.w r0 = r0.tZ()
            boolean r1 = com.kwad.framework.filedownloader.f.d.aeI
            if (r1 == 0) goto L14
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = "The downloader service is connected."
            com.kwad.framework.filedownloader.f.d.c(r7, r2, r1)
        L14:
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r1 = r7.abD
            monitor-enter(r1)
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r2 = r7.abD     // Catch: java.lang.Throwable -> L6d
            java.lang.Object r2 = r2.clone()     // Catch: java.lang.Throwable -> L6d
            java.util.List r2 = (java.util.List) r2     // Catch: java.lang.Throwable -> L6d
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r3 = r7.abD     // Catch: java.lang.Throwable -> L6d
            r3.clear()     // Catch: java.lang.Throwable -> L6d
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L6d
            int r4 = r0.ud()     // Catch: java.lang.Throwable -> L6d
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L6d
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L6d
        L31:
            boolean r4 = r2.hasNext()     // Catch: java.lang.Throwable -> L6d
            if (r4 == 0) goto L68
            java.lang.Object r4 = r2.next()     // Catch: java.lang.Throwable -> L6d
            com.kwad.framework.filedownloader.a$a r4 = (com.kwad.framework.filedownloader.a.a) r4     // Catch: java.lang.Throwable -> L6d
            int r5 = r4.th()     // Catch: java.lang.Throwable -> L6d
            boolean r6 = r0.bc(r5)     // Catch: java.lang.Throwable -> L6d
            if (r6 == 0) goto L64
            com.kwad.framework.filedownloader.a r4 = r4.tf()     // Catch: java.lang.Throwable -> L6d
            com.kwad.framework.filedownloader.a$b r4 = r4.sO()     // Catch: java.lang.Throwable -> L6d
            r4.tn()     // Catch: java.lang.Throwable -> L6d
            java.lang.Integer r4 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L6d
            boolean r4 = r3.contains(r4)     // Catch: java.lang.Throwable -> L6d
            if (r4 != 0) goto L31
            java.lang.Integer r4 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L6d
            r3.add(r4)     // Catch: java.lang.Throwable -> L6d
            goto L31
        L64:
            r4.tl()     // Catch: java.lang.Throwable -> L6d
            goto L31
        L68:
            r0.m(r3)     // Catch: java.lang.Throwable -> L6d
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L6d
            return
        L6d:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L6d
            throw r0
    }

    @Override
    public final void tz() {
            r4 = this;
            com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus r0 = r4.tA()
            com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus r1 = com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus.lost
            r2 = 0
            r3 = 1
            if (r0 != r1) goto L67
            com.kwad.framework.filedownloader.r r0 = com.kwad.framework.filedownloader.r.tW()
            com.kwad.framework.filedownloader.w r0 = r0.tZ()
            boolean r1 = com.kwad.framework.filedownloader.f.d.aeI
            if (r1 == 0) goto L2b
            java.lang.Object[] r1 = new java.lang.Object[r3]
            com.kwad.framework.filedownloader.h r3 = com.kwad.framework.filedownloader.h.tD()
            int r3 = r3.size()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            java.lang.String r2 = "lost the connection to the file download service, and current active task size is %d"
            com.kwad.framework.filedownloader.f.d.c(r4, r2, r1)
        L2b:
            com.kwad.framework.filedownloader.h r1 = com.kwad.framework.filedownloader.h.tD()
            int r1 = r1.size()
            if (r1 <= 0) goto L66
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r1 = r4.abD
            monitor-enter(r1)
            com.kwad.framework.filedownloader.h r2 = com.kwad.framework.filedownloader.h.tD()     // Catch: java.lang.Throwable -> L63
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r3 = r4.abD     // Catch: java.lang.Throwable -> L63
            r2.l(r3)     // Catch: java.lang.Throwable -> L63
            java.util.ArrayList<com.kwad.framework.filedownloader.a$a> r2 = r4.abD     // Catch: java.lang.Throwable -> L63
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L63
        L47:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L63
            if (r3 == 0) goto L57
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L63
            com.kwad.framework.filedownloader.a$a r3 = (com.kwad.framework.filedownloader.a.a) r3     // Catch: java.lang.Throwable -> L63
            r3.free()     // Catch: java.lang.Throwable -> L63
            goto L47
        L57:
            r0.uc()     // Catch: java.lang.Throwable -> L63
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L63
            com.kwad.framework.filedownloader.r r0 = com.kwad.framework.filedownloader.r.tW()
            r0.tX()
            goto L66
        L63:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L63
            throw r0
        L66:
            return
        L67:
            com.kwad.framework.filedownloader.h r0 = com.kwad.framework.filedownloader.h.tD()
            int r0 = r0.size()
            if (r0 <= 0) goto L86
            java.lang.Object[] r0 = new java.lang.Object[r3]
            com.kwad.framework.filedownloader.h r1 = com.kwad.framework.filedownloader.h.tD()
            int r1 = r1.size()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0[r2] = r1
            java.lang.String r1 = "file download service has be unbound but the size of active tasks are not empty %d "
            com.kwad.framework.filedownloader.f.d.d(r4, r1, r0)
        L86:
            return
    }
}
