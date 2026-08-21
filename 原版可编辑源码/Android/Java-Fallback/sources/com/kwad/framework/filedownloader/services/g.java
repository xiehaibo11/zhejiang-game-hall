package com.kwad.framework.filedownloader.services;

final class g implements com.kwad.framework.filedownloader.y {
    private final com.kwad.framework.filedownloader.b.a aew;
    private final com.kwad.framework.filedownloader.services.h aex;

    g() {
            r2 = this;
            r2.<init>()
            com.kwad.framework.filedownloader.download.b r0 = com.kwad.framework.filedownloader.download.b.up()
            com.kwad.framework.filedownloader.b.a r1 = r0.ur()
            r2.aew = r1
            com.kwad.framework.filedownloader.services.h r1 = new com.kwad.framework.filedownloader.services.h
            int r0 = r0.us()
            r1.<init>(r0)
            r2.aex = r1
            return
    }

    private boolean bD(int r2) {
            r1 = this;
            com.kwad.framework.filedownloader.b.a r0 = r1.aew
            com.kwad.framework.filedownloader.d.c r2 = r0.bf(r2)
            boolean r2 = r1.a(r2)
            return r2
    }

    @Override
    public final boolean a(com.kwad.framework.filedownloader.d.c r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            com.kwad.framework.filedownloader.services.h r1 = r4.aex
            int r2 = r5.getId()
            boolean r1 = r1.bF(r2)
            byte r2 = r5.sX()
            boolean r2 = com.kwad.framework.filedownloader.d.d.bA(r2)
            r3 = 1
            if (r2 == 0) goto L1c
            if (r1 == 0) goto L3c
            goto L1e
        L1c:
            if (r1 == 0) goto L20
        L1e:
            r0 = r3
            goto L3c
        L20:
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            int r2 = r5.getId()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1[r0] = r2
            byte r5 = r5.sX()
            java.lang.Byte r5 = java.lang.Byte.valueOf(r5)
            r1[r3] = r5
            java.lang.String r5 = "%d status is[%s](not finish) & but not in the pool"
            com.kwad.framework.filedownloader.f.d.a(r4, r5, r1)
        L3c:
            return r0
    }

    public final boolean aY(int r5) {
            r4 = this;
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L13
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.Integer r3 = java.lang.Integer.valueOf(r5)
            r0[r1] = r3
            java.lang.String r3 = "request pause the task %d"
            com.kwad.framework.filedownloader.f.d.c(r4, r3, r0)
        L13:
            com.kwad.framework.filedownloader.b.a r0 = r4.aew
            com.kwad.framework.filedownloader.d.c r0 = r0.bf(r5)
            if (r0 != 0) goto L1c
            return r1
        L1c:
            r1 = -2
            r0.d(r1)
            com.kwad.framework.filedownloader.services.h r0 = r4.aex
            r0.cancel(r5)
            return r2
    }

    public final byte aZ(int r2) {
            r1 = this;
            com.kwad.framework.filedownloader.b.a r0 = r1.aew
            com.kwad.framework.filedownloader.d.c r2 = r0.bf(r2)
            if (r2 != 0) goto La
            r2 = 0
            return r2
        La:
            byte r2 = r2.sX()
            return r2
    }

    public final synchronized void b(java.lang.String r19, java.lang.String r20, boolean r21, int r22, int r23, int r24, boolean r25, com.kwad.framework.filedownloader.d.b r26, boolean r27) {
            r18 = this;
            r7 = r18
            r0 = r19
            r8 = r20
            r9 = r21
            monitor-enter(r18)
            boolean r1 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> L1cb
            r10 = 2
            r11 = 0
            r12 = 1
            if (r1 == 0) goto L22
            java.lang.String r1 = "request start the task with url(%s) path(%s) isDirectory(%B)"
            r2 = 3
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L1cb
            r2[r11] = r0     // Catch: java.lang.Throwable -> L1cb
            r2[r12] = r8     // Catch: java.lang.Throwable -> L1cb
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r21)     // Catch: java.lang.Throwable -> L1cb
            r2[r10] = r3     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.f.d.c(r7, r1, r2)     // Catch: java.lang.Throwable -> L1cb
        L22:
            int r13 = com.kwad.framework.filedownloader.f.f.g(r19, r20, r21)     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.b.a r1 = r7.aew     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.d.c r1 = r1.bf(r13)     // Catch: java.lang.Throwable -> L1cb
            r2 = 0
            if (r9 != 0) goto L6d
            if (r1 != 0) goto L6d
            java.lang.String r1 = com.kwad.framework.filedownloader.f.f.br(r20)     // Catch: java.lang.Throwable -> L1cb
            int r1 = com.kwad.framework.filedownloader.f.f.g(r0, r1, r12)     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.b.a r3 = r7.aew     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.d.c r3 = r3.bf(r1)     // Catch: java.lang.Throwable -> L1cb
            if (r3 == 0) goto L6a
            java.lang.String r4 = r3.getTargetFilePath()     // Catch: java.lang.Throwable -> L1cb
            boolean r4 = r8.equals(r4)     // Catch: java.lang.Throwable -> L1cb
            if (r4 == 0) goto L6a
            boolean r4 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> L1cb
            if (r4 == 0) goto L62
            java.lang.String r4 = "task[%d] find model by dirCaseId[%d]"
            java.lang.Object[] r5 = new java.lang.Object[r10]     // Catch: java.lang.Throwable -> L1cb
            java.lang.Integer r6 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Throwable -> L1cb
            r5[r11] = r6     // Catch: java.lang.Throwable -> L1cb
            java.lang.Integer r6 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L1cb
            r5[r12] = r6     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.f.d.c(r7, r4, r5)     // Catch: java.lang.Throwable -> L1cb
        L62:
            com.kwad.framework.filedownloader.b.a r4 = r7.aew     // Catch: java.lang.Throwable -> L1cb
            java.util.List r1 = r4.bg(r1)     // Catch: java.lang.Throwable -> L1cb
            r15 = r1
            goto L6b
        L6a:
            r15 = r2
        L6b:
            r14 = r3
            goto L6f
        L6d:
            r14 = r1
            r15 = r2
        L6f:
            boolean r1 = com.kwad.framework.filedownloader.f.c.a(r13, r14, r7, r12)     // Catch: java.lang.Throwable -> L1cb
            if (r1 == 0) goto L88
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> L1cb
            if (r0 == 0) goto L86
            java.lang.String r0 = "has already started download %d"
            java.lang.Object[] r1 = new java.lang.Object[r12]     // Catch: java.lang.Throwable -> L1cb
            java.lang.Integer r2 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Throwable -> L1cb
            r1[r11] = r2     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.f.d.c(r7, r0, r1)     // Catch: java.lang.Throwable -> L1cb
        L86:
            monitor-exit(r18)
            return
        L88:
            if (r14 == 0) goto L8f
            java.lang.String r1 = r14.getTargetFilePath()     // Catch: java.lang.Throwable -> L1cb
            goto L93
        L8f:
            java.lang.String r1 = com.kwad.framework.filedownloader.f.f.a(r8, r9, r2)     // Catch: java.lang.Throwable -> L1cb
        L93:
            r5 = r25
            r6 = r1
            boolean r1 = com.kwad.framework.filedownloader.f.c.a(r13, r6, r5, r12)     // Catch: java.lang.Throwable -> L1cb
            if (r1 == 0) goto Laf
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> L1cb
            if (r0 == 0) goto Lad
            java.lang.String r0 = "has already completed downloading %d"
            java.lang.Object[] r1 = new java.lang.Object[r12]     // Catch: java.lang.Throwable -> L1cb
            java.lang.Integer r2 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Throwable -> L1cb
            r1[r11] = r2     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.f.d.c(r7, r0, r1)     // Catch: java.lang.Throwable -> L1cb
        Lad:
            monitor-exit(r18)
            return
        Laf:
            r2 = 0
            if (r14 == 0) goto Lb8
            long r16 = r14.vm()     // Catch: java.lang.Throwable -> L1cb
            goto Lba
        Lb8:
            r16 = r2
        Lba:
            if (r14 == 0) goto Lc1
            java.lang.String r1 = r14.uE()     // Catch: java.lang.Throwable -> L1cb
            goto Lc5
        Lc1:
            java.lang.String r1 = com.kwad.framework.filedownloader.f.f.bo(r6)     // Catch: java.lang.Throwable -> L1cb
        Lc5:
            r4 = r1
            r1 = r13
            r2 = r16
            r5 = r6
            r16 = r6
            r6 = r18
            boolean r1 = com.kwad.framework.filedownloader.f.c.a(r1, r2, r4, r5, r6)     // Catch: java.lang.Throwable -> L1cb
            if (r1 == 0) goto Lf5
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> L1cb
            if (r0 == 0) goto Lf3
            java.lang.String r0 = "there is an another task with the same target-file-path %d %s"
            java.lang.Object[] r1 = new java.lang.Object[r10]     // Catch: java.lang.Throwable -> L1cb
            java.lang.Integer r2 = java.lang.Integer.valueOf(r13)     // Catch: java.lang.Throwable -> L1cb
            r1[r11] = r2     // Catch: java.lang.Throwable -> L1cb
            r1[r12] = r16     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.f.d.c(r7, r0, r1)     // Catch: java.lang.Throwable -> L1cb
            if (r14 == 0) goto Lf3
            com.kwad.framework.filedownloader.b.a r0 = r7.aew     // Catch: java.lang.Throwable -> L1cb
            r0.bi(r13)     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.b.a r0 = r7.aew     // Catch: java.lang.Throwable -> L1cb
            r0.bh(r13)     // Catch: java.lang.Throwable -> L1cb
        Lf3:
            monitor-exit(r18)
            return
        Lf5:
            if (r14 == 0) goto L15f
            byte r1 = r14.sX()     // Catch: java.lang.Throwable -> L1cb
            r2 = -2
            if (r1 == r2) goto L118
            byte r1 = r14.sX()     // Catch: java.lang.Throwable -> L1cb
            r2 = -1
            if (r1 == r2) goto L118
            byte r1 = r14.sX()     // Catch: java.lang.Throwable -> L1cb
            if (r1 == r12) goto L118
            byte r1 = r14.sX()     // Catch: java.lang.Throwable -> L1cb
            r2 = 6
            if (r1 == r2) goto L118
            byte r1 = r14.sX()     // Catch: java.lang.Throwable -> L1cb
            if (r1 != r10) goto L15f
        L118:
            int r1 = r14.getId()     // Catch: java.lang.Throwable -> L1cb
            if (r1 == r13) goto L151
            com.kwad.framework.filedownloader.b.a r0 = r7.aew     // Catch: java.lang.Throwable -> L1cb
            int r1 = r14.getId()     // Catch: java.lang.Throwable -> L1cb
            r0.bi(r1)     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.b.a r0 = r7.aew     // Catch: java.lang.Throwable -> L1cb
            int r1 = r14.getId()     // Catch: java.lang.Throwable -> L1cb
            r0.bh(r1)     // Catch: java.lang.Throwable -> L1cb
            r14.setId(r13)     // Catch: java.lang.Throwable -> L1cb
            r14.c(r8, r9)     // Catch: java.lang.Throwable -> L1cb
            if (r15 == 0) goto L17d
            java.util.Iterator r0 = r15.iterator()     // Catch: java.lang.Throwable -> L1cb
        L13c:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L1cb
            if (r1 == 0) goto L17d
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.d.a r1 = (com.kwad.framework.filedownloader.d.a) r1     // Catch: java.lang.Throwable -> L1cb
            r1.setId(r13)     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.b.a r2 = r7.aew     // Catch: java.lang.Throwable -> L1cb
            r2.a(r1)     // Catch: java.lang.Throwable -> L1cb
            goto L13c
        L151:
            java.lang.String r1 = r14.getUrl()     // Catch: java.lang.Throwable -> L1cb
            boolean r1 = android.text.TextUtils.equals(r0, r1)     // Catch: java.lang.Throwable -> L1cb
            if (r1 != 0) goto L17e
            r14.setUrl(r0)     // Catch: java.lang.Throwable -> L1cb
            goto L17d
        L15f:
            if (r14 != 0) goto L166
            com.kwad.framework.filedownloader.d.c r14 = new com.kwad.framework.filedownloader.d.c     // Catch: java.lang.Throwable -> L1cb
            r14.<init>()     // Catch: java.lang.Throwable -> L1cb
        L166:
            r14.setUrl(r0)     // Catch: java.lang.Throwable -> L1cb
            r14.c(r8, r9)     // Catch: java.lang.Throwable -> L1cb
            r14.setId(r13)     // Catch: java.lang.Throwable -> L1cb
            r0 = 0
            r14.L(r0)     // Catch: java.lang.Throwable -> L1cb
            r14.N(r0)     // Catch: java.lang.Throwable -> L1cb
            r14.d(r12)     // Catch: java.lang.Throwable -> L1cb
            r14.by(r12)     // Catch: java.lang.Throwable -> L1cb
        L17d:
            r11 = r12
        L17e:
            if (r11 == 0) goto L185
            com.kwad.framework.filedownloader.b.a r0 = r7.aew     // Catch: java.lang.Throwable -> L1cb
            r0.b(r14)     // Catch: java.lang.Throwable -> L1cb
        L185:
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$a r0 = new com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$a     // Catch: java.lang.Throwable -> L1cb
            r0.<init>()     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$a r0 = r0.e(r14)     // Catch: java.lang.Throwable -> L1cb
            r1 = r26
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$a r0 = r0.b(r1)     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$a r0 = r0.a(r7)     // Catch: java.lang.Throwable -> L1cb
            java.lang.Integer r1 = java.lang.Integer.valueOf(r23)     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$a r0 = r0.a(r1)     // Catch: java.lang.Throwable -> L1cb
            java.lang.Integer r1 = java.lang.Integer.valueOf(r22)     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$a r0 = r0.b(r1)     // Catch: java.lang.Throwable -> L1cb
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r25)     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$a r0 = r0.a(r1)     // Catch: java.lang.Throwable -> L1cb
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r27)     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$a r0 = r0.b(r1)     // Catch: java.lang.Throwable -> L1cb
            java.lang.Integer r1 = java.lang.Integer.valueOf(r24)     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable$a r0 = r0.c(r1)     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.download.DownloadLaunchRunnable r0 = r0.uF()     // Catch: java.lang.Throwable -> L1cb
            com.kwad.framework.filedownloader.services.h r1 = r7.aex     // Catch: java.lang.Throwable -> L1cb
            r1.a(r0)     // Catch: java.lang.Throwable -> L1cb
            monitor-exit(r18)
            return
        L1cb:
            r0 = move-exception
            monitor-exit(r18)
            throw r0
    }

    public final long bE(int r6) {
            r5 = this;
            com.kwad.framework.filedownloader.b.a r0 = r5.aew
            com.kwad.framework.filedownloader.d.c r0 = r0.bf(r6)
            r1 = 0
            if (r0 != 0) goto Lb
            return r1
        Lb:
            int r3 = r0.vp()
            r4 = 1
            if (r3 > r4) goto L17
            long r0 = r0.vm()
            return r0
        L17:
            com.kwad.framework.filedownloader.b.a r0 = r5.aew
            java.util.List r6 = r0.bg(r6)
            if (r6 == 0) goto L2b
            int r0 = r6.size()
            if (r0 == r3) goto L26
            goto L2b
        L26:
            long r0 = com.kwad.framework.filedownloader.d.a.o(r6)
            return r0
        L2b:
            return r1
    }

    public final boolean ba(int r4) {
            r3 = this;
            r0 = 1
            r1 = 0
            if (r4 != 0) goto L12
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r0[r1] = r4
            java.lang.String r4 = "The task[%d] id is invalid, can't clear it."
            com.kwad.framework.filedownloader.f.d.d(r3, r4, r0)
            return r1
        L12:
            boolean r2 = r3.bD(r4)
            if (r2 == 0) goto L26
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r0[r1] = r4
            java.lang.String r4 = "The task[%d] is downloading, can't clear it."
            com.kwad.framework.filedownloader.f.d.d(r3, r4, r0)
            return r1
        L26:
            com.kwad.framework.filedownloader.b.a r1 = r3.aew
            r1.bi(r4)
            com.kwad.framework.filedownloader.b.a r1 = r3.aew
            r1.bh(r4)
            return r0
    }

    public final synchronized boolean bs(int r2) {
            r1 = this;
            monitor-enter(r1)
            com.kwad.framework.filedownloader.services.h r0 = r1.aex     // Catch: java.lang.Throwable -> L9
            boolean r2 = r0.bs(r2)     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r2
        L9:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final long bu(int r3) {
            r2 = this;
            com.kwad.framework.filedownloader.b.a r0 = r2.aew
            com.kwad.framework.filedownloader.d.c r3 = r0.bf(r3)
            if (r3 != 0) goto Lb
            r0 = 0
            return r0
        Lb:
            long r0 = r3.getTotal()
            return r0
    }

    public final boolean isIdle() {
            r1 = this;
            com.kwad.framework.filedownloader.services.h r0 = r1.aex
            int r0 = r0.vH()
            if (r0 > 0) goto La
            r0 = 1
            return r0
        La:
            r0 = 0
            return r0
    }

    @Override
    public final int l(java.lang.String r2, int r3) {
            r1 = this;
            com.kwad.framework.filedownloader.services.h r0 = r1.aex
            int r2 = r0.l(r2, r3)
            return r2
    }

    public final boolean p(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            int r1 = com.kwad.framework.filedownloader.f.f.r(r1, r2)
            boolean r1 = r0.bD(r1)
            return r1
    }

    public final void uW() {
            r1 = this;
            com.kwad.framework.filedownloader.b.a r0 = r1.aew
            r0.clear()
            return
    }

    public final void vF() {
            r4 = this;
            com.kwad.framework.filedownloader.services.h r0 = r4.aex
            java.util.List r0 = r0.vI()
            boolean r1 = com.kwad.framework.filedownloader.f.d.aeI
            if (r1 == 0) goto L1d
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            int r3 = r0.size()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            java.lang.String r2 = "pause all tasks %d"
            com.kwad.framework.filedownloader.f.d.c(r4, r2, r1)
        L1d:
            java.util.Iterator r0 = r0.iterator()
        L21:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L35
            java.lang.Object r1 = r0.next()
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            r4.aY(r1)
            goto L21
        L35:
            return
    }
}
