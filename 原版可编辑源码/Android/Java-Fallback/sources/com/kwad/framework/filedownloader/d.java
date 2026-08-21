package com.kwad.framework.filedownloader;

public final class d implements com.kwad.framework.filedownloader.a.c, com.kwad.framework.filedownloader.x, com.kwad.framework.filedownloader.x.a, com.kwad.framework.filedownloader.x.b {
    private final java.lang.Object aaD;
    private com.kwad.framework.filedownloader.t aaH;
    private final com.kwad.framework.filedownloader.d.a aaI;
    private volatile byte aaJ;
    private volatile long aaK;
    private java.lang.Throwable aaL;
    private final com.kwad.framework.filedownloader.s.b aaM;
    private final com.kwad.framework.filedownloader.s.a aaN;
    private long aaO;
    private long aaP;
    private int aaQ;
    private boolean aaR;
    private boolean aaS;
    private java.lang.String aaT;
    private boolean aaU;

    interface a {
        void aW(java.lang.String r1);

        com.kwad.framework.filedownloader.d.b ts();

        com.kwad.framework.filedownloader.a.a tt();

        java.util.ArrayList<java.lang.Object> tu();
    }

    d(com.kwad.framework.filedownloader.d.a r3, java.lang.Object r4) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.aaJ = r0
            r1 = 0
            r2.aaL = r1
            r2.aaU = r0
            r2.aaD = r4
            r2.aaI = r3
            com.kwad.framework.filedownloader.b r4 = new com.kwad.framework.filedownloader.b
            r4.<init>()
            r2.aaM = r4
            r2.aaN = r4
            com.kwad.framework.filedownloader.k r4 = new com.kwad.framework.filedownloader.k
            com.kwad.framework.filedownloader.a$a r3 = r3.tt()
            r4.<init>(r3, r2)
            r2.aaH = r4
            return
    }

    private void b(byte r3) {
            r2 = this;
            r2.aaJ = r3
            long r0 = java.lang.System.currentTimeMillis()
            r2.aaK = r0
            return
    }

    private void e(com.kwad.framework.filedownloader.message.MessageSnapshot r9) {
            r8 = this;
            com.kwad.framework.filedownloader.d$a r0 = r8.aaI
            com.kwad.framework.filedownloader.a$a r0 = r0.tt()
            com.kwad.framework.filedownloader.a r0 = r0.tf()
            byte r1 = r9.sX()
            r8.b(r1)
            boolean r2 = r9.td()
            r8.aaR = r2
            r2 = -4
            r3 = 0
            r4 = 2
            r5 = 1
            if (r1 == r2) goto Lf5
            r2 = -3
            if (r1 == r2) goto Ld5
            r2 = -1
            if (r1 == r2) goto Lbb
            if (r1 == r5) goto La9
            if (r1 == r4) goto L6a
            r0 = 3
            if (r1 == r0) goto L55
            r0 = 5
            if (r1 == r0) goto L38
            r0 = 6
            if (r1 == r0) goto L32
            goto L17d
        L32:
            com.kwad.framework.filedownloader.t r0 = r8.aaH
            r0.g(r9)
            return
        L38:
            long r0 = r9.vd()
            r8.aaO = r0
            java.lang.Throwable r0 = r9.ve()
            r8.aaL = r0
            int r0 = r9.tb()
            r8.aaQ = r0
            com.kwad.framework.filedownloader.s$b r0 = r8.aaM
            r0.reset()
            com.kwad.framework.filedownloader.t r0 = r8.aaH
            r0.k(r9)
            return
        L55:
            long r0 = r9.vd()
            r8.aaO = r0
            com.kwad.framework.filedownloader.s$b r0 = r8.aaM
            long r1 = r9.vd()
            r0.G(r1)
            com.kwad.framework.filedownloader.t r0 = r8.aaH
            r0.i(r9)
            return
        L6a:
            long r1 = r9.vb()
            r8.aaP = r1
            boolean r1 = r9.uR()
            r8.aaS = r1
            java.lang.String r1 = r9.getEtag()
            r8.aaT = r1
            java.lang.String r1 = r9.getFileName()
            if (r1 == 0) goto L9c
            java.lang.String r2 = r0.getFilename()
            if (r2 == 0) goto L97
            java.lang.Object[] r2 = new java.lang.Object[r4]
            java.lang.String r0 = r0.getFilename()
            r2[r3] = r0
            r2[r5] = r1
            java.lang.String r0 = "already has mFilename[%s], but assign mFilename[%s] again"
            com.kwad.framework.filedownloader.f.d.d(r8, r0, r2)
        L97:
            com.kwad.framework.filedownloader.d$a r0 = r8.aaI
            r0.aW(r1)
        L9c:
            com.kwad.framework.filedownloader.s$b r0 = r8.aaM
            long r1 = r8.aaO
            r0.start(r1)
            com.kwad.framework.filedownloader.t r0 = r8.aaH
            r0.h(r9)
            return
        La9:
            long r0 = r9.vd()
            r8.aaO = r0
            long r0 = r9.vb()
            r8.aaP = r0
            com.kwad.framework.filedownloader.t r0 = r8.aaH
            r0.f(r9)
            return
        Lbb:
            java.lang.Throwable r0 = r9.ve()
            r8.aaL = r0
            long r0 = r9.vd()
            r8.aaO = r0
            com.kwad.framework.filedownloader.h r0 = com.kwad.framework.filedownloader.h.tD()
            com.kwad.framework.filedownloader.d$a r1 = r8.aaI
            com.kwad.framework.filedownloader.a$a r1 = r1.tt()
            r0.a(r1, r9)
            return
        Ld5:
            boolean r0 = r9.vc()
            r8.aaU = r0
            long r0 = r9.vb()
            r8.aaO = r0
            long r0 = r9.vb()
            r8.aaP = r0
            com.kwad.framework.filedownloader.h r0 = com.kwad.framework.filedownloader.h.tD()
            com.kwad.framework.filedownloader.d$a r1 = r8.aaI
            com.kwad.framework.filedownloader.a$a r1 = r1.tt()
            r0.a(r1, r9)
            return
        Lf5:
            com.kwad.framework.filedownloader.s$b r1 = r8.aaM
            r1.reset()
            com.kwad.framework.filedownloader.h r1 = com.kwad.framework.filedownloader.h.tD()
            int r2 = r0.getId()
            int r1 = r1.aU(r2)
            if (r1 > r5) goto L123
            boolean r2 = r0.sT()
            if (r2 == 0) goto L123
            com.kwad.framework.filedownloader.h r2 = com.kwad.framework.filedownloader.h.tD()
            java.lang.String r6 = r0.getUrl()
            java.lang.String r7 = r0.getTargetFilePath()
            int r6 = com.kwad.framework.filedownloader.f.f.r(r6, r7)
            int r2 = r2.aU(r6)
            goto L124
        L123:
            r2 = r3
        L124:
            int r1 = r1 + r2
            if (r1 > r5) goto L170
            com.kwad.framework.filedownloader.n r1 = com.kwad.framework.filedownloader.n.tO()
            int r2 = r0.getId()
            byte r1 = r1.aZ(r2)
            java.lang.Object[] r2 = new java.lang.Object[r4]
            int r0 = r0.getId()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r2[r3] = r0
            java.lang.Integer r0 = java.lang.Integer.valueOf(r1)
            r2[r5] = r0
            java.lang.String r0 = "warn, but no mListener to receive, switch to pending %d %d"
            com.kwad.framework.filedownloader.f.d.d(r8, r0, r2)
            boolean r0 = com.kwad.framework.filedownloader.d.d.bB(r1)
            if (r0 == 0) goto L170
            r8.b(r5)
            long r0 = r9.vb()
            r8.aaP = r0
            long r0 = r9.vd()
            r8.aaO = r0
            com.kwad.framework.filedownloader.s$b r2 = r8.aaM
            r2.start(r0)
            com.kwad.framework.filedownloader.t r0 = r8.aaH
            com.kwad.framework.filedownloader.message.MessageSnapshot$a r9 = (com.kwad.framework.filedownloader.message.MessageSnapshot.a) r9
            com.kwad.framework.filedownloader.message.MessageSnapshot r9 = r9.vf()
            r0.f(r9)
            return
        L170:
            com.kwad.framework.filedownloader.h r0 = com.kwad.framework.filedownloader.h.tD()
            com.kwad.framework.filedownloader.d$a r1 = r8.aaI
            com.kwad.framework.filedownloader.a$a r1 = r1.tt()
            r0.a(r1, r9)
        L17d:
            return
    }

    private int getId() {
            r1 = this;
            com.kwad.framework.filedownloader.d$a r0 = r1.aaI
            com.kwad.framework.filedownloader.a$a r0 = r0.tt()
            com.kwad.framework.filedownloader.a r0 = r0.tf()
            int r0 = r0.getId()
            return r0
    }

    private void prepare() {
            r5 = this;
            com.kwad.framework.filedownloader.d$a r0 = r5.aaI
            com.kwad.framework.filedownloader.a$a r0 = r0.tt()
            com.kwad.framework.filedownloader.a r0 = r0.tf()
            java.lang.String r1 = r0.getPath()
            r2 = 0
            r3 = 1
            if (r1 != 0) goto L2e
            java.lang.String r1 = r0.getUrl()
            java.lang.String r1 = com.kwad.framework.filedownloader.f.f.bm(r1)
            r0.aU(r1)
            boolean r1 = com.kwad.framework.filedownloader.f.d.aeI
            if (r1 == 0) goto L2e
            java.lang.Object[] r1 = new java.lang.Object[r3]
            java.lang.String r4 = r0.getPath()
            r1[r2] = r4
            java.lang.String r4 = "save Path is null to %s"
            com.kwad.framework.filedownloader.f.d.c(r5, r4, r1)
        L2e:
            boolean r1 = r0.sT()
            if (r1 == 0) goto L3e
            java.io.File r1 = new java.io.File
            java.lang.String r0 = r0.getPath()
            r1.<init>(r0)
            goto L4e
        L3e:
            java.lang.String r1 = r0.getPath()
            java.lang.String r1 = com.kwad.framework.filedownloader.f.f.br(r1)
            if (r1 == 0) goto L76
            java.io.File r0 = new java.io.File
            r0.<init>(r1)
            r1 = r0
        L4e:
            boolean r0 = r1.exists()
            if (r0 != 0) goto L75
            boolean r0 = r1.mkdirs()
            if (r0 != 0) goto L75
            boolean r0 = r1.exists()
            if (r0 == 0) goto L61
            goto L75
        L61:
            java.io.IOException r0 = new java.io.IOException
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r1 = r1.getAbsolutePath()
            r3[r2] = r1
            java.lang.String r1 = "Create parent directory failed, please make sure you have permission to create file or directory on the path: %s"
            java.lang.String r1 = com.kwad.framework.filedownloader.f.f.b(r1, r3)
            r0.<init>(r1)
            throw r0
        L75:
            return
        L76:
            java.security.InvalidParameterException r1 = new java.security.InvalidParameterException
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r0 = r0.getPath()
            r3[r2] = r0
            java.lang.String r0 = "the provided mPath[%s] is invalid, can't find its directory"
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.b(r0, r3)
            r1.<init>(r0)
            throw r1
    }

    @Override
    public final boolean a(com.kwad.framework.filedownloader.message.MessageSnapshot r4) {
            r3 = this;
            byte r0 = r3.sX()
            byte r1 = r4.sX()
            boolean r0 = com.kwad.framework.filedownloader.d.d.r(r0, r1)
            r1 = 1
            if (r0 != 0) goto L3a
            boolean r4 = com.kwad.framework.filedownloader.f.d.aeI
            r0 = 0
            if (r4 == 0) goto L39
            r4 = 3
            java.lang.Object[] r4 = new java.lang.Object[r4]
            byte r2 = r3.aaJ
            java.lang.Byte r2 = java.lang.Byte.valueOf(r2)
            r4[r0] = r2
            byte r2 = r3.sX()
            java.lang.Byte r2 = java.lang.Byte.valueOf(r2)
            r4[r1] = r2
            r1 = 2
            int r2 = r3.getId()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r4[r1] = r2
            java.lang.String r1 = "can't update mStatus change by keep ahead, %d, but the current mStatus is %d, %d"
            com.kwad.framework.filedownloader.f.d.c(r3, r1, r4)
        L39:
            return r0
        L3a:
            r3.e(r4)
            return r1
    }

    @Override
    public final boolean b(com.kwad.framework.filedownloader.message.MessageSnapshot r6) {
            r5 = this;
            byte r0 = r5.sX()
            byte r1 = r6.sX()
            r2 = 0
            r3 = 1
            r4 = -2
            if (r4 != r0) goto L29
            boolean r4 = com.kwad.framework.filedownloader.d.d.bB(r1)
            if (r4 == 0) goto L29
            boolean r6 = com.kwad.framework.filedownloader.f.d.aeI
            if (r6 == 0) goto L28
            java.lang.Object[] r6 = new java.lang.Object[r3]
            int r0 = r5.getId()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r6[r2] = r0
            java.lang.String r0 = "High concurrent cause, callback pending, but has already be paused %d"
            com.kwad.framework.filedownloader.f.d.c(r5, r0, r6)
        L28:
            return r3
        L29:
            boolean r0 = com.kwad.framework.filedownloader.d.d.s(r0, r1)
            if (r0 != 0) goto L59
            boolean r6 = com.kwad.framework.filedownloader.f.d.aeI
            if (r6 == 0) goto L58
            r6 = 3
            java.lang.Object[] r6 = new java.lang.Object[r6]
            byte r0 = r5.aaJ
            java.lang.Byte r0 = java.lang.Byte.valueOf(r0)
            r6[r2] = r0
            byte r0 = r5.sX()
            java.lang.Byte r0 = java.lang.Byte.valueOf(r0)
            r6[r3] = r0
            r0 = 2
            int r1 = r5.getId()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r6[r0] = r1
            java.lang.String r0 = "can't update mStatus change by keep flow, %d, but the current mStatus is %d, %d"
            com.kwad.framework.filedownloader.f.d.c(r5, r0, r6)
        L58:
            return r2
        L59:
            r5.e(r6)
            return r3
    }

    @Override
    public final boolean c(com.kwad.framework.filedownloader.message.MessageSnapshot r2) {
            r1 = this;
            com.kwad.framework.filedownloader.d$a r0 = r1.aaI
            com.kwad.framework.filedownloader.a$a r0 = r0.tt()
            com.kwad.framework.filedownloader.a r0 = r0.tf()
            boolean r0 = com.kwad.framework.filedownloader.d.d.f(r0)
            if (r0 != 0) goto L12
            r2 = 0
            return r2
        L12:
            r1.e(r2)
            r2 = 1
            return r2
    }

    @Override
    public final boolean d(com.kwad.framework.filedownloader.message.MessageSnapshot r4) {
            r3 = this;
            com.kwad.framework.filedownloader.d$a r0 = r3.aaI
            com.kwad.framework.filedownloader.a$a r0 = r0.tt()
            com.kwad.framework.filedownloader.a r0 = r0.tf()
            boolean r0 = r0.sT()
            r1 = 0
            if (r0 != 0) goto L12
            return r1
        L12:
            byte r0 = r4.sX()
            r2 = -4
            if (r0 != r2) goto L26
            byte r0 = r3.sX()
            r2 = 2
            if (r0 == r2) goto L21
            goto L26
        L21:
            r3.e(r4)
            r4 = 1
            return r4
        L26:
            return r1
    }

    @Override
    public final void free() {
            r4 = this;
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            r1 = 0
            if (r0 == 0) goto L20
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            int r2 = r4.getId()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0[r1] = r2
            r2 = 1
            byte r3 = r4.aaJ
            java.lang.Byte r3 = java.lang.Byte.valueOf(r3)
            r0[r2] = r3
            java.lang.String r2 = "free the task %d, when the status is %d"
            com.kwad.framework.filedownloader.f.d.c(r4, r2, r0)
        L20:
            r4.b(r1)
            return
    }

    @Override
    public final com.kwad.framework.filedownloader.message.MessageSnapshot g(java.lang.Throwable r4) {
            r3 = this;
            r0 = -1
            r3.b(r0)
            r3.aaL = r4
            int r0 = r3.getId()
            long r1 = r3.tx()
            com.kwad.framework.filedownloader.message.MessageSnapshot r4 = com.kwad.framework.filedownloader.message.f.a(r0, r1, r4)
            return r4
    }

    @Override
    public final int getSpeed() {
            r1 = this;
            com.kwad.framework.filedownloader.s$a r0 = r1.aaN
            int r0 = r0.getSpeed()
            return r0
    }

    @Override
    public final long getStatusUpdateTime() {
            r2 = this;
            long r0 = r2.aaK
            return r0
    }

    @Override
    public final long getTotalBytes() {
            r2 = this;
            long r0 = r2.aaP
            return r0
    }

    @Override
    public final void onBegin() {
            r3 = this;
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L1e
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.String r2 = r3.toString()
            r0[r1] = r2
            r1 = 1
            byte r2 = r3.sX()
            java.lang.Byte r2 = java.lang.Byte.valueOf(r2)
            r0[r1] = r2
            java.lang.String r1 = "filedownloader:lifecycle:start %s by %d "
            com.kwad.framework.filedownloader.f.d.e(r3, r1, r0)
        L1e:
            return
    }

    @Override
    public final boolean pause() {
            r6 = this;
            byte r0 = r6.sX()
            boolean r0 = com.kwad.framework.filedownloader.d.d.bA(r0)
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L37
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L36
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            byte r3 = r6.sX()
            java.lang.Byte r3 = java.lang.Byte.valueOf(r3)
            r0[r1] = r3
            com.kwad.framework.filedownloader.d$a r3 = r6.aaI
            com.kwad.framework.filedownloader.a$a r3 = r3.tt()
            com.kwad.framework.filedownloader.a r3 = r3.tf()
            int r3 = r3.getId()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r0[r2] = r3
            java.lang.String r2 = "High concurrent cause, Already is over, can't pause again, %d %d"
            com.kwad.framework.filedownloader.f.d.c(r6, r2, r0)
        L36:
            return r1
        L37:
            r0 = -2
            r6.b(r0)
            com.kwad.framework.filedownloader.d$a r0 = r6.aaI
            com.kwad.framework.filedownloader.a$a r0 = r0.tt()
            com.kwad.framework.filedownloader.a r3 = r0.tf()
            com.kwad.framework.filedownloader.q r4 = com.kwad.framework.filedownloader.q.tU()
            r4.b(r6)
            boolean r4 = com.kwad.framework.filedownloader.f.d.aeI
            if (r4 == 0) goto L61
            java.lang.Object[] r4 = new java.lang.Object[r2]
            int r5 = r6.getId()
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r4[r1] = r5
            java.lang.String r5 = "the task[%d] has been expired from the launch pool."
            com.kwad.framework.filedownloader.f.d.e(r6, r5, r4)
        L61:
            com.kwad.framework.filedownloader.r.tW()
            boolean r4 = com.kwad.framework.filedownloader.r.tY()
            if (r4 != 0) goto L80
            boolean r4 = com.kwad.framework.filedownloader.f.d.aeI
            if (r4 == 0) goto L8b
            java.lang.Object[] r4 = new java.lang.Object[r2]
            int r5 = r3.getId()
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r4[r1] = r5
            java.lang.String r1 = "request pause the task[%d] to the download service, but the download service isn't connected yet."
            com.kwad.framework.filedownloader.f.d.c(r6, r1, r4)
            goto L8b
        L80:
            com.kwad.framework.filedownloader.n r1 = com.kwad.framework.filedownloader.n.tO()
            int r4 = r3.getId()
            r1.aY(r4)
        L8b:
            com.kwad.framework.filedownloader.h r1 = com.kwad.framework.filedownloader.h.tD()
            r1.b(r0)
            com.kwad.framework.filedownloader.h r1 = com.kwad.framework.filedownloader.h.tD()
            com.kwad.framework.filedownloader.message.MessageSnapshot r3 = com.kwad.framework.filedownloader.message.f.e(r3)
            r1.a(r0, r3)
            com.kwad.framework.filedownloader.r r1 = com.kwad.framework.filedownloader.r.tW()
            com.kwad.framework.filedownloader.v r1 = r1.ua()
            r1.e(r0)
            return r2
    }

    @Override
    public final void reset() {
            r3 = this;
            r0 = 0
            r3.aaL = r0
            r3.aaT = r0
            r0 = 0
            r3.aaS = r0
            r3.aaQ = r0
            r3.aaU = r0
            r3.aaR = r0
            r1 = 0
            r3.aaO = r1
            r3.aaP = r1
            com.kwad.framework.filedownloader.s$b r1 = r3.aaM
            r1.reset()
            byte r1 = r3.aaJ
            boolean r1 = com.kwad.framework.filedownloader.d.d.bA(r1)
            if (r1 == 0) goto L34
            com.kwad.framework.filedownloader.t r1 = r3.aaH
            r1.tM()
            com.kwad.framework.filedownloader.k r1 = new com.kwad.framework.filedownloader.k
            com.kwad.framework.filedownloader.d$a r2 = r3.aaI
            com.kwad.framework.filedownloader.a$a r2 = r2.tt()
            r1.<init>(r2, r3)
            r3.aaH = r1
            goto L3f
        L34:
            com.kwad.framework.filedownloader.t r1 = r3.aaH
            com.kwad.framework.filedownloader.d$a r2 = r3.aaI
            com.kwad.framework.filedownloader.a$a r2 = r2.tt()
            r1.b(r2, r3)
        L3f:
            r3.b(r0)
            return
    }

    @Override
    public final byte sX() {
            r1 = this;
            byte r0 = r1.aaJ
            return r0
    }

    @Override
    public final java.lang.Throwable sZ() {
            r1 = this;
            java.lang.Throwable r0 = r1.aaL
            return r0
    }

    @Override
    public final void start() {
            r18 = this;
            r1 = r18
            byte r0 = r1.aaJ
            r2 = 2
            r3 = 10
            r4 = 0
            r5 = 1
            if (r0 == r3) goto L25
            java.lang.Object[] r0 = new java.lang.Object[r2]
            int r2 = r18.getId()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0[r4] = r2
            byte r2 = r1.aaJ
            java.lang.Byte r2 = java.lang.Byte.valueOf(r2)
            r0[r5] = r2
            java.lang.String r2 = "High concurrent cause, this task %d will not start, because the of status isn't toLaunchPool: %d"
            com.kwad.framework.filedownloader.f.d.d(r1, r2, r0)
            return
        L25:
            com.kwad.framework.filedownloader.d$a r0 = r1.aaI
            com.kwad.framework.filedownloader.a$a r6 = r0.tt()
            com.kwad.framework.filedownloader.a r0 = r6.tf()
            com.kwad.framework.filedownloader.r r7 = com.kwad.framework.filedownloader.r.tW()
            com.kwad.framework.filedownloader.v r7 = r7.ua()
            boolean r8 = r7.f(r6)     // Catch: java.lang.Throwable -> L108
            if (r8 == 0) goto L3e
            return
        L3e:
            java.lang.Object r8 = r1.aaD     // Catch: java.lang.Throwable -> L108
            monitor-enter(r8)     // Catch: java.lang.Throwable -> L108
            byte r9 = r1.aaJ     // Catch: java.lang.Throwable -> L105
            if (r9 == r3) goto L60
            java.lang.String r0 = "High concurrent cause, this task %d will not start, the status can't assign to toFileDownloadService, because the status isn't toLaunchPool: %d"
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L105
            int r3 = r18.getId()     // Catch: java.lang.Throwable -> L105
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L105
            r2[r4] = r3     // Catch: java.lang.Throwable -> L105
            byte r3 = r1.aaJ     // Catch: java.lang.Throwable -> L105
            java.lang.Byte r3 = java.lang.Byte.valueOf(r3)     // Catch: java.lang.Throwable -> L105
            r2[r5] = r3     // Catch: java.lang.Throwable -> L105
            com.kwad.framework.filedownloader.f.d.d(r1, r0, r2)     // Catch: java.lang.Throwable -> L105
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L105
            return
        L60:
            r2 = 11
            r1.b(r2)     // Catch: java.lang.Throwable -> L105
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L105
            com.kwad.framework.filedownloader.h r2 = com.kwad.framework.filedownloader.h.tD()     // Catch: java.lang.Throwable -> L108
            r2.b(r6)     // Catch: java.lang.Throwable -> L108
            int r2 = r0.getId()     // Catch: java.lang.Throwable -> L108
            java.lang.String r3 = r0.getTargetFilePath()     // Catch: java.lang.Throwable -> L108
            boolean r8 = r0.sY()     // Catch: java.lang.Throwable -> L108
            boolean r2 = com.kwad.framework.filedownloader.f.c.a(r2, r3, r8, r5)     // Catch: java.lang.Throwable -> L108
            if (r2 == 0) goto L80
            return
        L80:
            com.kwad.framework.filedownloader.n r8 = com.kwad.framework.filedownloader.n.tO()     // Catch: java.lang.Throwable -> L108
            java.lang.String r9 = r0.getUrl()     // Catch: java.lang.Throwable -> L108
            java.lang.String r10 = r0.getPath()     // Catch: java.lang.Throwable -> L108
            boolean r11 = r0.sT()     // Catch: java.lang.Throwable -> L108
            int r12 = r0.sR()     // Catch: java.lang.Throwable -> L108
            int r13 = r0.sS()     // Catch: java.lang.Throwable -> L108
            int r14 = r0.ta()     // Catch: java.lang.Throwable -> L108
            boolean r15 = r0.sY()     // Catch: java.lang.Throwable -> L108
            com.kwad.framework.filedownloader.d$a r2 = r1.aaI     // Catch: java.lang.Throwable -> L108
            com.kwad.framework.filedownloader.d.b r16 = r2.ts()     // Catch: java.lang.Throwable -> L108
            boolean r17 = r0.te()     // Catch: java.lang.Throwable -> L108
            boolean r0 = r8.a(r9, r10, r11, r12, r13, r14, r15, r16, r17)     // Catch: java.lang.Throwable -> L108
            byte r2 = r1.aaJ     // Catch: java.lang.Throwable -> L108
            r3 = -2
            if (r2 != r3) goto Ld2
            java.lang.String r2 = "High concurrent cause, this task %d will be paused,because of the status is paused, so the pause action must be applied"
            java.lang.Object[] r3 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L108
            int r5 = r18.getId()     // Catch: java.lang.Throwable -> L108
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L108
            r3[r4] = r5     // Catch: java.lang.Throwable -> L108
            com.kwad.framework.filedownloader.f.d.d(r1, r2, r3)     // Catch: java.lang.Throwable -> L108
            if (r0 == 0) goto Ld1
            com.kwad.framework.filedownloader.n r0 = com.kwad.framework.filedownloader.n.tO()     // Catch: java.lang.Throwable -> L108
            int r2 = r18.getId()     // Catch: java.lang.Throwable -> L108
            r0.aY(r2)     // Catch: java.lang.Throwable -> L108
        Ld1:
            return
        Ld2:
            if (r0 != 0) goto L101
            boolean r0 = r7.f(r6)     // Catch: java.lang.Throwable -> L108
            if (r0 != 0) goto L104
            java.lang.RuntimeException r0 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> L108
            java.lang.String r2 = "Occur Unknown Error, when request to start maybe some problem in binder, maybe the process was killed in unexpected."
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L108
            com.kwad.framework.filedownloader.message.MessageSnapshot r0 = r1.g(r0)     // Catch: java.lang.Throwable -> L108
            com.kwad.framework.filedownloader.h r2 = com.kwad.framework.filedownloader.h.tD()     // Catch: java.lang.Throwable -> L108
            boolean r2 = r2.a(r6)     // Catch: java.lang.Throwable -> L108
            if (r2 == 0) goto Lf9
            r7.e(r6)     // Catch: java.lang.Throwable -> L108
            com.kwad.framework.filedownloader.h r2 = com.kwad.framework.filedownloader.h.tD()     // Catch: java.lang.Throwable -> L108
            r2.b(r6)     // Catch: java.lang.Throwable -> L108
        Lf9:
            com.kwad.framework.filedownloader.h r2 = com.kwad.framework.filedownloader.h.tD()     // Catch: java.lang.Throwable -> L108
            r2.a(r6, r0)     // Catch: java.lang.Throwable -> L108
            goto L117
        L101:
            r7.e(r6)     // Catch: java.lang.Throwable -> L108
        L104:
            return
        L105:
            r0 = move-exception
            monitor-exit(r8)     // Catch: java.lang.Throwable -> L105
            throw r0     // Catch: java.lang.Throwable -> L108
        L108:
            r0 = move-exception
            r0.printStackTrace()
            com.kwad.framework.filedownloader.h r2 = com.kwad.framework.filedownloader.h.tD()
            com.kwad.framework.filedownloader.message.MessageSnapshot r0 = r1.g(r0)
            r2.a(r6, r0)
        L117:
            return
    }

    @Override
    public final int tb() {
            r1 = this;
            int r0 = r1.aaQ
            return r0
    }

    @Override
    public final boolean td() {
            r1 = this;
            boolean r0 = r1.aaR
            return r0
    }

    @Override
    public final void to() {
            r4 = this;
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            r1 = 0
            if (r0 == 0) goto L1e
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r2 = r4.toString()
            r0[r1] = r2
            byte r2 = r4.sX()
            java.lang.Byte r2 = java.lang.Byte.valueOf(r2)
            r3 = 1
            r0[r3] = r2
            java.lang.String r2 = "filedownloader:lifecycle:over %s by %d "
            com.kwad.framework.filedownloader.f.d.e(r4, r2, r0)
        L1e:
            com.kwad.framework.filedownloader.s$b r0 = r4.aaM
            long r2 = r4.aaO
            r0.end(r2)
            com.kwad.framework.filedownloader.d$a r0 = r4.aaI
            java.util.ArrayList r0 = r0.tu()
            if (r0 == 0) goto L45
            com.kwad.framework.filedownloader.d$a r0 = r4.aaI
            java.util.ArrayList r0 = r0.tu()
            java.lang.Object r0 = r0.clone()
            java.util.ArrayList r0 = (java.util.ArrayList) r0
            int r2 = r0.size()
        L3d:
            if (r1 >= r2) goto L45
            r0.get(r1)
            int r1 = r1 + 1
            goto L3d
        L45:
            com.kwad.framework.filedownloader.r r0 = com.kwad.framework.filedownloader.r.tW()
            com.kwad.framework.filedownloader.v r0 = r0.ua()
            com.kwad.framework.filedownloader.d$a r1 = r4.aaI
            com.kwad.framework.filedownloader.a$a r1 = r1.tt()
            r0.e(r1)
            return
    }

    @Override
    public final com.kwad.framework.filedownloader.t tv() {
            r1 = this;
            com.kwad.framework.filedownloader.t r0 = r1.aaH
            return r0
    }

    @Override
    public final void tw() {
            r7 = this;
            java.lang.Object r0 = r7.aaD
            monitor-enter(r0)
            byte r1 = r7.aaJ     // Catch: java.lang.Throwable -> L92
            r2 = 2
            r3 = 1
            r4 = 0
            if (r1 == 0) goto L25
            java.lang.String r1 = "High concurrent cause, this task %d will not input to launch pool, because of the status isn't idle : %d"
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L92
            int r5 = r7.getId()     // Catch: java.lang.Throwable -> L92
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> L92
            r2[r4] = r5     // Catch: java.lang.Throwable -> L92
            byte r4 = r7.aaJ     // Catch: java.lang.Throwable -> L92
            java.lang.Byte r4 = java.lang.Byte.valueOf(r4)     // Catch: java.lang.Throwable -> L92
            r2[r3] = r4     // Catch: java.lang.Throwable -> L92
            com.kwad.framework.filedownloader.f.d.d(r7, r1, r2)     // Catch: java.lang.Throwable -> L92
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L92
            return
        L25:
            r1 = 10
            r7.b(r1)     // Catch: java.lang.Throwable -> L92
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L92
            com.kwad.framework.filedownloader.d$a r0 = r7.aaI
            com.kwad.framework.filedownloader.a$a r0 = r0.tt()
            com.kwad.framework.filedownloader.a r1 = r0.tf()
            boolean r5 = com.kwad.framework.filedownloader.f.d.aeI
            if (r5 == 0) goto L5a
            r5 = 4
            java.lang.Object[] r5 = new java.lang.Object[r5]
            java.lang.String r6 = r1.getUrl()
            r5[r4] = r6
            java.lang.String r6 = r1.getPath()
            r5[r3] = r6
            com.kwad.framework.filedownloader.i r6 = r1.sU()
            r5[r2] = r6
            r2 = 3
            java.lang.Object r1 = r1.getTag()
            r5[r2] = r1
            java.lang.String r1 = "call start Url[%s], Path[%s] Listener[%s], Tag[%s]"
            com.kwad.framework.filedownloader.f.d.e(r7, r1, r5)
        L5a:
            r7.prepare()     // Catch: java.lang.Throwable -> L5f
            r0 = r3
            goto L73
        L5f:
            r1 = move-exception
            com.kwad.framework.filedownloader.h r2 = com.kwad.framework.filedownloader.h.tD()
            r2.b(r0)
            com.kwad.framework.filedownloader.h r2 = com.kwad.framework.filedownloader.h.tD()
            com.kwad.framework.filedownloader.message.MessageSnapshot r1 = r7.g(r1)
            r2.a(r0, r1)
            r0 = r4
        L73:
            if (r0 == 0) goto L7c
            com.kwad.framework.filedownloader.q r0 = com.kwad.framework.filedownloader.q.tU()
            r0.a(r7)
        L7c:
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L91
            java.lang.Object[] r0 = new java.lang.Object[r3]
            int r1 = r7.getId()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0[r4] = r1
            java.lang.String r1 = "the task[%d] has been into the launch pool."
            com.kwad.framework.filedownloader.f.d.e(r7, r1, r0)
        L91:
            return
        L92:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L92
            throw r1
    }

    @Override
    public final long tx() {
            r2 = this;
            long r0 = r2.aaO
            return r0
    }
}
