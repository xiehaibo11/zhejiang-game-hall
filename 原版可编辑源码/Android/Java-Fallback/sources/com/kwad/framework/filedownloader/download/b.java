package com.kwad.framework.filedownloader.download;

public final class b {
    private com.kwad.framework.filedownloader.services.c acn;
    private com.kwad.framework.filedownloader.f.c.a aco;
    private com.kwad.framework.filedownloader.f.c.b acp;
    private com.kwad.framework.filedownloader.f.c.e acq;
    private volatile com.kwad.framework.filedownloader.b.a acr;
    private com.kwad.framework.filedownloader.f.c.d acs;

    static final class a {
        private static final com.kwad.framework.filedownloader.download.b act = null;

        static {
                com.kwad.framework.filedownloader.download.b r0 = new com.kwad.framework.filedownloader.download.b
                r0.<init>()
                com.kwad.framework.filedownloader.download.b.a.act = r0
                return
        }

        static com.kwad.framework.filedownloader.download.b uy() {
                com.kwad.framework.filedownloader.download.b r0 = com.kwad.framework.filedownloader.download.b.a.act
                return r0
        }
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(com.kwad.framework.filedownloader.b.a.a r25) {
            r1 = r25
            java.lang.String r2 = "refreshed data count: %d , delete data count: %d, reset id count: %d. consume %d"
            java.util.Iterator r0 = r25.iterator()
            com.kwad.framework.filedownloader.download.b r3 = up()
            com.kwad.framework.filedownloader.f.c$d r3 = r3.uq()
            long r4 = java.lang.System.currentTimeMillis()
            r8 = 0
            r10 = 0
            r12 = 0
        L1a:
            r15 = 3
            r16 = 0
            boolean r7 = r0.hasNext()     // Catch: java.lang.Throwable -> L18f
            if (r7 == 0) goto L14f
            java.lang.Object r7 = r0.next()     // Catch: java.lang.Throwable -> L18f
            com.kwad.framework.filedownloader.d.c r7 = (com.kwad.framework.filedownloader.d.c) r7     // Catch: java.lang.Throwable -> L18f
            byte r6 = r7.sX()     // Catch: java.lang.Throwable -> L18f
            r14 = -2
            if (r6 == r15) goto L4f
            byte r6 = r7.sX()     // Catch: java.lang.Throwable -> L18f
            r15 = 2
            if (r6 == r15) goto L4f
            byte r6 = r7.sX()     // Catch: java.lang.Throwable -> L18f
            r15 = -1
            if (r6 == r15) goto L4f
            byte r6 = r7.sX()     // Catch: java.lang.Throwable -> L18f
            r15 = 1
            if (r6 != r15) goto L52
            long r20 = r7.vm()     // Catch: java.lang.Throwable -> L18f
            r17 = 0
            int r6 = (r20 > r17 ? 1 : (r20 == r17 ? 0 : -1))
            if (r6 <= 0) goto L52
        L4f:
            r7.d(r14)     // Catch: java.lang.Throwable -> L18f
        L52:
            java.lang.String r6 = r7.getTargetFilePath()     // Catch: java.lang.Throwable -> L18f
            if (r6 != 0) goto L63
            r20 = r2
            r21 = r4
            r23 = r8
            r2 = 1
            r8 = 0
            goto Lf7
        L63:
            java.io.File r15 = new java.io.File     // Catch: java.lang.Throwable -> L18f
            r15.<init>(r6)     // Catch: java.lang.Throwable -> L18f
            byte r6 = r7.sX()     // Catch: java.lang.Throwable -> L18f
            if (r6 != r14) goto Lc8
            int r6 = r7.getId()     // Catch: java.lang.Throwable -> L18f
            java.lang.String r14 = r7.getPath()     // Catch: java.lang.Throwable -> L18f
            r20 = r2
            r2 = 0
            boolean r2 = com.kwad.framework.filedownloader.f.f.a(r6, r7, r14, r2)     // Catch: java.lang.Throwable -> Lc1
            if (r2 == 0) goto Lca
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r6 = r7.uE()     // Catch: java.lang.Throwable -> Lc1
            r2.<init>(r6)     // Catch: java.lang.Throwable -> Lc1
            boolean r6 = r2.exists()     // Catch: java.lang.Throwable -> Lc1
            if (r6 != 0) goto Lca
            boolean r6 = r15.exists()     // Catch: java.lang.Throwable -> Lc1
            if (r6 == 0) goto Lca
            boolean r6 = r15.renameTo(r2)     // Catch: java.lang.Throwable -> Lc1
            boolean r14 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> Lc1
            if (r14 == 0) goto Lca
            java.lang.Class<com.kwad.framework.filedownloader.b.a> r14 = com.kwad.framework.filedownloader.b.a.class
            r21 = r4
            java.lang.String r4 = "resume from the old no-temp-file architecture [%B], [%s]->[%s]"
            r23 = r8
            r5 = 3
            java.lang.Object[] r8 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L14b
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r6)     // Catch: java.lang.Throwable -> L14b
            r8[r16] = r5     // Catch: java.lang.Throwable -> L14b
            java.lang.String r5 = r15.getPath()     // Catch: java.lang.Throwable -> L14b
            r6 = 1
            r8[r6] = r5     // Catch: java.lang.Throwable -> L14b
            java.lang.String r2 = r2.getPath()     // Catch: java.lang.Throwable -> L14b
            r5 = 2
            r8[r5] = r2     // Catch: java.lang.Throwable -> L14b
            com.kwad.framework.filedownloader.f.d.c(r14, r4, r8)     // Catch: java.lang.Throwable -> L14b
            goto Lce
        Lbf:
            r0 = move-exception
            goto Lc4
        Lc1:
            r0 = move-exception
            r21 = r4
        Lc4:
            r23 = r8
            goto L14c
        Lc8:
            r20 = r2
        Lca:
            r21 = r4
            r23 = r8
        Lce:
            byte r2 = r7.sX()     // Catch: java.lang.Throwable -> L14b
            r4 = 1
            if (r2 != r4) goto Le1
            long r4 = r7.vm()     // Catch: java.lang.Throwable -> L14b
            r8 = 0
            int r2 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r2 > 0) goto Le3
        Ldf:
            r2 = 1
            goto Lf7
        Le1:
            r8 = 0
        Le3:
            int r2 = r7.getId()     // Catch: java.lang.Throwable -> L14b
            boolean r2 = com.kwad.framework.filedownloader.f.f.b(r2, r7)     // Catch: java.lang.Throwable -> L14b
            if (r2 != 0) goto Lee
            goto Ldf
        Lee:
            boolean r2 = r15.exists()     // Catch: java.lang.Throwable -> L14b
            if (r2 == 0) goto Lf5
            goto Ldf
        Lf5:
            r2 = r16
        Lf7:
            r4 = 1
            if (r2 == 0) goto L107
            r0.remove()     // Catch: java.lang.Throwable -> L14b
            long r10 = r10 + r4
            r2 = r20
            r4 = r21
            r8 = r23
            goto L1a
        L107:
            int r2 = r7.getId()     // Catch: java.lang.Throwable -> L14b
            java.lang.String r6 = r7.getUrl()     // Catch: java.lang.Throwable -> L14b
            java.lang.String r14 = r7.getPath()     // Catch: java.lang.Throwable -> L14b
            boolean r15 = r7.sT()     // Catch: java.lang.Throwable -> L14b
            int r6 = r3.f(r6, r14, r15)     // Catch: java.lang.Throwable -> L14b
            if (r6 == r2) goto L140
            boolean r14 = com.kwad.framework.filedownloader.f.d.aeI     // Catch: java.lang.Throwable -> L14b
            if (r14 == 0) goto L139
            java.lang.Class<com.kwad.framework.filedownloader.b.a> r14 = com.kwad.framework.filedownloader.b.a.class
            java.lang.String r15 = "the id is changed on restoring from db: old[%d] -> new[%d]"
            r8 = 2
            java.lang.Object[] r9 = new java.lang.Object[r8]     // Catch: java.lang.Throwable -> L14b
            java.lang.Integer r8 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L14b
            r9[r16] = r8     // Catch: java.lang.Throwable -> L14b
            java.lang.Integer r8 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> L14b
            r19 = 1
            r9[r19] = r8     // Catch: java.lang.Throwable -> L14b
            com.kwad.framework.filedownloader.f.d.c(r14, r15, r9)     // Catch: java.lang.Throwable -> L14b
        L139:
            r7.setId(r6)     // Catch: java.lang.Throwable -> L14b
            r1.a(r2, r7)     // Catch: java.lang.Throwable -> L14b
            long r12 = r12 + r4
        L140:
            r1.c(r7)     // Catch: java.lang.Throwable -> L14b
            long r8 = r23 + r4
            r2 = r20
            r4 = r21
            goto L1a
        L14b:
            r0 = move-exception
        L14c:
            r2 = r20
            goto L194
        L14f:
            r20 = r2
            r21 = r4
            r23 = r8
            android.content.Context r0 = com.kwad.framework.filedownloader.f.c.vM()
            com.kwad.framework.filedownloader.f.f.ar(r0)
            r25.ui()
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L18e
            java.lang.Class<com.kwad.framework.filedownloader.b.a> r0 = com.kwad.framework.filedownloader.b.a.class
            r1 = 4
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Long r2 = java.lang.Long.valueOf(r23)
            r1[r16] = r2
            java.lang.Long r2 = java.lang.Long.valueOf(r10)
            r3 = 1
            r1[r3] = r2
            java.lang.Long r2 = java.lang.Long.valueOf(r12)
            r3 = 2
            r1[r3] = r2
            long r2 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r21
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r3 = 3
            r1[r3] = r2
            r2 = r20
            com.kwad.framework.filedownloader.f.d.c(r0, r2, r1)
        L18e:
            return
        L18f:
            r0 = move-exception
            r21 = r4
            r23 = r8
        L194:
            android.content.Context r3 = com.kwad.framework.filedownloader.f.c.vM()
            com.kwad.framework.filedownloader.f.f.ar(r3)
            r25.ui()
            boolean r1 = com.kwad.framework.filedownloader.f.d.aeI
            if (r1 == 0) goto L1cb
            java.lang.Class<com.kwad.framework.filedownloader.b.a> r1 = com.kwad.framework.filedownloader.b.a.class
            r3 = 4
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.Long r4 = java.lang.Long.valueOf(r23)
            r3[r16] = r4
            java.lang.Long r4 = java.lang.Long.valueOf(r10)
            r5 = 1
            r3[r5] = r4
            java.lang.Long r4 = java.lang.Long.valueOf(r12)
            r5 = 2
            r3[r5] = r4
            long r4 = java.lang.System.currentTimeMillis()
            long r4 = r4 - r21
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            r5 = 3
            r3[r5] = r4
            com.kwad.framework.filedownloader.f.d.c(r1, r2, r3)
        L1cb:
            throw r0
    }

    public static com.kwad.framework.filedownloader.download.b up() {
            com.kwad.framework.filedownloader.download.b r0 = com.kwad.framework.filedownloader.download.b.a.uy()
            return r0
    }

    private com.kwad.framework.filedownloader.f.c.a uu() {
            r1 = this;
            com.kwad.framework.filedownloader.f.c$a r0 = r1.aco
            if (r0 == 0) goto L5
            return r0
        L5:
            monitor-enter(r1)
            com.kwad.framework.filedownloader.f.c$a r0 = r1.aco     // Catch: java.lang.Throwable -> L18
            if (r0 != 0) goto L14
            com.kwad.framework.filedownloader.services.c r0 = r1.ux()     // Catch: java.lang.Throwable -> L18
            com.kwad.framework.filedownloader.f.c$a r0 = r0.vv()     // Catch: java.lang.Throwable -> L18
            r1.aco = r0     // Catch: java.lang.Throwable -> L18
        L14:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L18
            com.kwad.framework.filedownloader.f.c$a r0 = r1.aco
            return r0
        L18:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L18
            throw r0
    }

    private com.kwad.framework.filedownloader.f.c.b uv() {
            r1 = this;
            com.kwad.framework.filedownloader.f.c$b r0 = r1.acp
            if (r0 == 0) goto L5
            return r0
        L5:
            monitor-enter(r1)
            com.kwad.framework.filedownloader.f.c$b r0 = r1.acp     // Catch: java.lang.Throwable -> L18
            if (r0 != 0) goto L14
            com.kwad.framework.filedownloader.services.c r0 = r1.ux()     // Catch: java.lang.Throwable -> L18
            com.kwad.framework.filedownloader.f.c$b r0 = r0.vu()     // Catch: java.lang.Throwable -> L18
            r1.acp = r0     // Catch: java.lang.Throwable -> L18
        L14:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L18
            com.kwad.framework.filedownloader.f.c$b r0 = r1.acp
            return r0
        L18:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L18
            throw r0
    }

    private com.kwad.framework.filedownloader.f.c.e uw() {
            r1 = this;
            com.kwad.framework.filedownloader.f.c$e r0 = r1.acq
            if (r0 == 0) goto L5
            return r0
        L5:
            monitor-enter(r1)
            com.kwad.framework.filedownloader.f.c$e r0 = r1.acq     // Catch: java.lang.Throwable -> L18
            if (r0 != 0) goto L14
            com.kwad.framework.filedownloader.services.c r0 = r1.ux()     // Catch: java.lang.Throwable -> L18
            com.kwad.framework.filedownloader.f.c$e r0 = r0.vt()     // Catch: java.lang.Throwable -> L18
            r1.acq = r0     // Catch: java.lang.Throwable -> L18
        L14:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L18
            com.kwad.framework.filedownloader.f.c$e r0 = r1.acq
            return r0
        L18:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L18
            throw r0
    }

    private com.kwad.framework.filedownloader.services.c ux() {
            r1 = this;
            com.kwad.framework.filedownloader.services.c r0 = r1.acn
            if (r0 == 0) goto L5
            return r0
        L5:
            monitor-enter(r1)
            com.kwad.framework.filedownloader.services.c r0 = r1.acn     // Catch: java.lang.Throwable -> L15
            if (r0 != 0) goto L11
            com.kwad.framework.filedownloader.services.c r0 = new com.kwad.framework.filedownloader.services.c     // Catch: java.lang.Throwable -> L15
            r0.<init>()     // Catch: java.lang.Throwable -> L15
            r1.acn = r0     // Catch: java.lang.Throwable -> L15
        L11:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L15
            com.kwad.framework.filedownloader.services.c r0 = r1.acn
            return r0
        L15:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L15
            throw r0
    }

    public final int a(int r1, java.lang.String r2, java.lang.String r3, long r4) {
            r0 = this;
            com.kwad.framework.filedownloader.f.c$a r1 = r0.uu()
            int r1 = r1.H(r4)
            return r1
    }

    public final void a(com.kwad.framework.filedownloader.services.c.b r2) {
            r1 = this;
            monitor-enter(r1)
            com.kwad.framework.filedownloader.services.c r0 = new com.kwad.framework.filedownloader.services.c     // Catch: java.lang.Throwable -> L13
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L13
            r1.acn = r0     // Catch: java.lang.Throwable -> L13
            r2 = 0
            r1.acp = r2     // Catch: java.lang.Throwable -> L13
            r1.acq = r2     // Catch: java.lang.Throwable -> L13
            r1.acr = r2     // Catch: java.lang.Throwable -> L13
            r1.acs = r2     // Catch: java.lang.Throwable -> L13
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L13
            return
        L13:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L13
            throw r2
    }

    public final com.kwad.framework.filedownloader.e.a b(java.io.File r2) {
            r1 = this;
            com.kwad.framework.filedownloader.f.c$e r0 = r1.uw()
            com.kwad.framework.filedownloader.e.a r2 = r0.c(r2)
            return r2
    }

    public final void b(com.kwad.framework.filedownloader.services.c.b r2) {
            r1 = this;
            monitor-enter(r1)
            com.kwad.framework.filedownloader.services.c r0 = new com.kwad.framework.filedownloader.services.c     // Catch: java.lang.Throwable -> La
            r0.<init>(r2)     // Catch: java.lang.Throwable -> La
            r1.acn = r0     // Catch: java.lang.Throwable -> La
            monitor-exit(r1)     // Catch: java.lang.Throwable -> La
            return
        La:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> La
            throw r2
    }

    public final com.kwad.framework.filedownloader.a.b bc(java.lang.String r2) {
            r1 = this;
            com.kwad.framework.filedownloader.f.c$b r0 = r1.uv()     // Catch: java.lang.Throwable -> L9
            com.kwad.framework.filedownloader.a.b r2 = r0.aZ(r2)     // Catch: java.lang.Throwable -> L9
            goto L14
        L9:
            com.kwad.framework.filedownloader.a.c$b r0 = new com.kwad.framework.filedownloader.a.c$b
            r0.<init>()
            r1.acp = r0
            com.kwad.framework.filedownloader.a.b r2 = r0.aZ(r2)
        L14:
            return r2
    }

    public final com.kwad.framework.filedownloader.f.c.d uq() {
            r1 = this;
            com.kwad.framework.filedownloader.f.c$d r0 = r1.acs
            if (r0 == 0) goto L5
            return r0
        L5:
            monitor-enter(r1)
            com.kwad.framework.filedownloader.f.c$d r0 = r1.acs     // Catch: java.lang.Throwable -> L18
            if (r0 != 0) goto L14
            com.kwad.framework.filedownloader.services.c r0 = r1.ux()     // Catch: java.lang.Throwable -> L18
            com.kwad.framework.filedownloader.f.c$d r0 = r0.vw()     // Catch: java.lang.Throwable -> L18
            r1.acs = r0     // Catch: java.lang.Throwable -> L18
        L14:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L18
            com.kwad.framework.filedownloader.f.c$d r0 = r1.acs
            return r0
        L18:
            r0 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L18
            throw r0
    }

    public final synchronized com.kwad.framework.filedownloader.b.a ur() {
            r1 = this;
            monitor-enter(r1)
            com.kwad.framework.filedownloader.b.a r0 = r1.acr     // Catch: java.lang.Throwable -> L20
            if (r0 == 0) goto L9
            com.kwad.framework.filedownloader.b.a r0 = r1.acr     // Catch: java.lang.Throwable -> L20
            monitor-exit(r1)
            return r0
        L9:
            com.kwad.framework.filedownloader.services.c r0 = r1.ux()     // Catch: java.lang.Throwable -> L20
            com.kwad.framework.filedownloader.b.a r0 = r0.vs()     // Catch: java.lang.Throwable -> L20
            r1.acr = r0     // Catch: java.lang.Throwable -> L20
            com.kwad.framework.filedownloader.b.a r0 = r1.acr     // Catch: java.lang.Throwable -> L20
            com.kwad.framework.filedownloader.b.a$a r0 = r0.uh()     // Catch: java.lang.Throwable -> L20
            a(r0)     // Catch: java.lang.Throwable -> L20
            com.kwad.framework.filedownloader.b.a r0 = r1.acr     // Catch: java.lang.Throwable -> L20
            monitor-exit(r1)
            return r0
        L20:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final int us() {
            r1 = this;
            com.kwad.framework.filedownloader.services.c r0 = r1.ux()
            int r0 = r0.us()
            return r0
    }

    public final boolean ut() {
            r1 = this;
            r1.uw()
            r0 = 1
            return r0
    }
}
