package com.kwad.framework.filedownloader;

final class k implements com.kwad.framework.filedownloader.t {
    private com.kwad.framework.filedownloader.a.a abi;
    private com.kwad.framework.filedownloader.a.c abj;
    private java.util.Queue<com.kwad.framework.filedownloader.message.MessageSnapshot> abk;
    private boolean abl;

    k(com.kwad.framework.filedownloader.a.a r2, com.kwad.framework.filedownloader.a.c r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.abl = r0
            r1.a(r2, r3)
            return
    }

    private void a(com.kwad.framework.filedownloader.a.a r1, com.kwad.framework.filedownloader.a.c r2) {
            r0 = this;
            r0.abi = r1
            r0.abj = r2
            java.util.concurrent.LinkedBlockingQueue r1 = new java.util.concurrent.LinkedBlockingQueue
            r1.<init>()
            r0.abk = r1
            return
    }

    private void aX(int r4) {
            r3 = this;
            boolean r4 = com.kwad.framework.filedownloader.d.d.bA(r4)
            if (r4 == 0) goto L47
            java.util.Queue<com.kwad.framework.filedownloader.message.MessageSnapshot> r4 = r3.abk
            boolean r4 = r4.isEmpty()
            if (r4 != 0) goto L44
            java.util.Queue<com.kwad.framework.filedownloader.message.MessageSnapshot> r4 = r3.abk
            java.lang.Object r4 = r4.peek()
            com.kwad.framework.filedownloader.message.MessageSnapshot r4 = (com.kwad.framework.filedownloader.message.MessageSnapshot) r4
            r0 = 4
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            r1 = 1
            int r2 = r4.getId()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0[r1] = r2
            r1 = 2
            java.util.Queue<com.kwad.framework.filedownloader.message.MessageSnapshot> r2 = r3.abk
            int r2 = r2.size()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0[r1] = r2
            r1 = 3
            byte r4 = r4.sX()
            java.lang.Byte r4 = java.lang.Byte.valueOf(r4)
            r0[r1] = r4
            java.lang.String r4 = "the messenger[%s](with id[%d]) has already accomplished all his job, but there still are some messages in parcel queue[%d] queue-top-status[%d]"
            com.kwad.framework.filedownloader.f.d.d(r3, r4, r0)
        L44:
            r4 = 0
            r3.abi = r4
        L47:
            return
    }

    private void o(com.kwad.framework.filedownloader.message.MessageSnapshot r4) {
            r3 = this;
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L11
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            com.kwad.framework.filedownloader.a$a r2 = r3.abi
            r0[r1] = r2
            java.lang.String r1 = "notify completed %s"
            com.kwad.framework.filedownloader.f.d.c(r3, r1, r0)
        L11:
            com.kwad.framework.filedownloader.a$c r0 = r3.abj
            r0.to()
            r3.p(r4)
            return
    }

    private void p(com.kwad.framework.filedownloader.message.MessageSnapshot r4) {
            r3 = this;
            com.kwad.framework.filedownloader.a$a r0 = r3.abi
            if (r0 != 0) goto L27
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L26
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            int r2 = r4.getId()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0[r1] = r2
            r1 = 1
            byte r4 = r4.sX()
            java.lang.Byte r4 = java.lang.Byte.valueOf(r4)
            r0[r1] = r4
            java.lang.String r4 = "occur this case, it would be the host task of this messenger has been over(paused/warn/completed/error) on the other thread before receiving the snapshot(id[%d], status[%d])"
            com.kwad.framework.filedownloader.f.d.c(r3, r4, r0)
        L26:
            return
        L27:
            boolean r1 = r3.abl
            if (r1 != 0) goto L43
            com.kwad.framework.filedownloader.a r0 = r0.tf()
            com.kwad.framework.filedownloader.i r0 = r0.sU()
            if (r0 != 0) goto L36
            goto L43
        L36:
            java.util.Queue<com.kwad.framework.filedownloader.message.MessageSnapshot> r0 = r3.abk
            r0.offer(r4)
            com.kwad.framework.filedownloader.j r4 = com.kwad.framework.filedownloader.j.tF()
            r4.a(r3)
            return
        L43:
            boolean r0 = com.kwad.framework.filedownloader.l.isValid()
            if (r0 != 0) goto L51
            com.kwad.framework.filedownloader.a$a r0 = r3.abi
            boolean r0 = r0.tm()
            if (r0 == 0) goto L5d
        L51:
            byte r0 = r4.sX()
            r1 = 4
            if (r0 != r1) goto L5d
            com.kwad.framework.filedownloader.a$c r0 = r3.abj
            r0.to()
        L5d:
            byte r4 = r4.sX()
            r3.aX(r4)
            return
    }

    @Override
    public final void b(com.kwad.framework.filedownloader.a.a r3, com.kwad.framework.filedownloader.a.c r4) {
            r2 = this;
            com.kwad.framework.filedownloader.a$a r0 = r2.abi
            if (r0 != 0) goto L8
            r2.a(r3, r4)
            return
        L8:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            java.lang.String r3 = "the messenger is working, can't re-appointment for %s"
            java.lang.String r3 = com.kwad.framework.filedownloader.f.f.b(r3, r0)
            r4.<init>(r3)
            throw r4
    }

    @Override
    public final void f(com.kwad.framework.filedownloader.message.MessageSnapshot r4) {
            r3 = this;
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L11
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            com.kwad.framework.filedownloader.a$a r2 = r3.abi
            r0[r1] = r2
            java.lang.String r1 = "notify pending %s"
            com.kwad.framework.filedownloader.f.d.c(r3, r1, r0)
        L11:
            r3.p(r4)
            return
    }

    @Override
    public final void g(com.kwad.framework.filedownloader.message.MessageSnapshot r4) {
            r3 = this;
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L11
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            com.kwad.framework.filedownloader.a$a r2 = r3.abi
            r0[r1] = r2
            java.lang.String r1 = "notify started %s"
            com.kwad.framework.filedownloader.f.d.c(r3, r1, r0)
        L11:
            r3.p(r4)
            return
    }

    @Override
    public final void h(com.kwad.framework.filedownloader.message.MessageSnapshot r4) {
            r3 = this;
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L11
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            com.kwad.framework.filedownloader.a$a r2 = r3.abi
            r0[r1] = r2
            java.lang.String r1 = "notify connected %s"
            com.kwad.framework.filedownloader.f.d.c(r3, r1, r0)
        L11:
            r3.p(r4)
            return
    }

    @Override
    public final void i(com.kwad.framework.filedownloader.message.MessageSnapshot r8) {
            r7 = this;
            com.kwad.framework.filedownloader.a$a r0 = r7.abi
            com.kwad.framework.filedownloader.a r0 = r0.tf()
            boolean r1 = com.kwad.framework.filedownloader.f.d.aeI
            r2 = 1
            r3 = 0
            if (r1 == 0) goto L2b
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r1[r3] = r0
            long r4 = r0.sV()
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            r1[r2] = r4
            r4 = 2
            long r5 = r0.sW()
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            r1[r4] = r5
            java.lang.String r4 = "notify progress %s %d %d"
            com.kwad.framework.filedownloader.f.d.c(r7, r4, r1)
        L2b:
            int r0 = r0.sR()
            if (r0 > 0) goto L41
            boolean r8 = com.kwad.framework.filedownloader.f.d.aeI
            if (r8 == 0) goto L40
            java.lang.Object[] r8 = new java.lang.Object[r2]
            com.kwad.framework.filedownloader.a$a r0 = r7.abi
            r8[r3] = r0
            java.lang.String r0 = "notify progress but client not request notify %s"
            com.kwad.framework.filedownloader.f.d.c(r7, r0, r8)
        L40:
            return
        L41:
            r7.p(r8)
            return
    }

    @Override
    public final void j(com.kwad.framework.filedownloader.message.MessageSnapshot r4) {
            r3 = this;
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L1c
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            com.kwad.framework.filedownloader.a$a r2 = r3.abi
            r0[r1] = r2
            r1 = 1
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            java.lang.String r2 = r2.getName()
            r0[r1] = r2
            java.lang.String r1 = "notify block completed %s %s"
            com.kwad.framework.filedownloader.f.d.c(r3, r1, r0)
        L1c:
            r3.p(r4)
            return
    }

    @Override
    public final void k(com.kwad.framework.filedownloader.message.MessageSnapshot r5) {
            r4 = this;
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L34
            com.kwad.framework.filedownloader.a$a r0 = r4.abi
            com.kwad.framework.filedownloader.a r0 = r0.tf()
            r1 = 4
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            com.kwad.framework.filedownloader.a$a r3 = r4.abi
            r1[r2] = r3
            r2 = 1
            int r3 = r0.ta()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 2
            int r3 = r0.tb()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r1[r2] = r3
            r2 = 3
            java.lang.Throwable r0 = r0.sZ()
            r1[r2] = r0
            java.lang.String r0 = "notify retry %s %d %d %s"
            com.kwad.framework.filedownloader.f.d.c(r4, r0, r1)
        L34:
            r4.p(r5)
            return
    }

    @Override
    public final void l(com.kwad.framework.filedownloader.message.MessageSnapshot r4) {
            r3 = this;
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L11
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            com.kwad.framework.filedownloader.a$a r2 = r3.abi
            r0[r1] = r2
            java.lang.String r1 = "notify warn %s"
            com.kwad.framework.filedownloader.f.d.c(r3, r1, r0)
        L11:
            com.kwad.framework.filedownloader.a$c r0 = r3.abj
            r0.to()
            r3.p(r4)
            return
    }

    @Override
    public final void m(com.kwad.framework.filedownloader.message.MessageSnapshot r4) {
            r3 = this;
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L1c
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            com.kwad.framework.filedownloader.a$a r2 = r3.abi
            r0[r1] = r2
            r1 = 1
            com.kwad.framework.filedownloader.a r2 = r2.tf()
            java.lang.Throwable r2 = r2.sZ()
            r0[r1] = r2
            java.lang.String r1 = "notify error %s %s"
            com.kwad.framework.filedownloader.f.d.c(r3, r1, r0)
        L1c:
            com.kwad.framework.filedownloader.a$c r0 = r3.abj
            r0.to()
            r3.p(r4)
            return
    }

    @Override
    public final void n(com.kwad.framework.filedownloader.message.MessageSnapshot r4) {
            r3 = this;
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            if (r0 == 0) goto L11
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            com.kwad.framework.filedownloader.a$a r2 = r3.abi
            r0[r1] = r2
            java.lang.String r1 = "notify paused %s"
            com.kwad.framework.filedownloader.f.d.c(r3, r1, r0)
        L11:
            com.kwad.framework.filedownloader.a$c r0 = r3.abj
            r0.to()
            r3.p(r4)
            return
    }

    @Override
    public final boolean tI() {
            r4 = this;
            boolean r0 = com.kwad.framework.filedownloader.f.d.aeI
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L11
            java.lang.Object[] r0 = new java.lang.Object[r2]
            com.kwad.framework.filedownloader.a$a r3 = r4.abi
            r0[r1] = r3
            java.lang.String r3 = "notify begin %s"
            com.kwad.framework.filedownloader.f.d.c(r4, r3, r0)
        L11:
            com.kwad.framework.filedownloader.a$a r0 = r4.abi
            if (r0 != 0) goto L29
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.util.Queue<com.kwad.framework.filedownloader.message.MessageSnapshot> r2 = r4.abk
            int r2 = r2.size()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0[r1] = r2
            java.lang.String r2 = "can't begin the task, the holder fo the messenger is nil, %d"
            com.kwad.framework.filedownloader.f.d.d(r4, r2, r0)
            return r1
        L29:
            com.kwad.framework.filedownloader.a$c r0 = r4.abj
            r0.onBegin()
            return r2
    }

    @Override
    public final void tJ() {
            r9 = this;
            boolean r0 = r9.abl
            if (r0 == 0) goto L5
            return
        L5:
            java.util.Queue<com.kwad.framework.filedownloader.message.MessageSnapshot> r0 = r9.abk
            java.lang.Object r0 = r0.poll()
            com.kwad.framework.filedownloader.message.MessageSnapshot r0 = (com.kwad.framework.filedownloader.message.MessageSnapshot) r0
            byte r1 = r0.sX()
            com.kwad.framework.filedownloader.a$a r2 = r9.abi
            if (r2 != 0) goto L16
            return
        L16:
            com.kwad.framework.filedownloader.a r4 = r2.tf()
            com.kwad.framework.filedownloader.i r3 = r4.sU()
            com.kwad.framework.filedownloader.x$a r2 = r2.tg()
            r9.aX(r1)
            if (r3 != 0) goto L28
            return
        L28:
            r5 = 4
            if (r1 != r5) goto L41
            r3.b(r4)     // Catch: java.lang.Throwable -> L38
            com.kwad.framework.filedownloader.message.a r0 = (com.kwad.framework.filedownloader.message.a) r0     // Catch: java.lang.Throwable -> L38
            com.kwad.framework.filedownloader.message.MessageSnapshot r0 = r0.uY()     // Catch: java.lang.Throwable -> L38
            r9.o(r0)     // Catch: java.lang.Throwable -> L38
            return
        L38:
            r0 = move-exception
            com.kwad.framework.filedownloader.message.MessageSnapshot r0 = r2.g(r0)
            r9.m(r0)
            return
        L41:
            r2 = 0
            boolean r5 = r3 instanceof com.kwad.framework.filedownloader.g
            if (r5 == 0) goto L49
            r2 = r3
            com.kwad.framework.filedownloader.g r2 = (com.kwad.framework.filedownloader.g) r2
        L49:
            r5 = -4
            if (r1 == r5) goto Le2
            r5 = -3
            if (r1 == r5) goto Lde
            r5 = -2
            if (r1 == r5) goto Lc9
            r5 = -1
            if (r1 == r5) goto Lc1
            r5 = 1
            if (r1 == r5) goto Lac
            r5 = 2
            if (r1 == r5) goto L8c
            r5 = 3
            if (r1 == r5) goto L7a
            r5 = 5
            if (r1 == r5) goto L6a
            r0 = 6
            if (r1 == r0) goto L66
            goto Le5
        L66:
            r3.a(r4)
            return
        L6a:
            r0.ve()
            r0.tb()
            if (r2 == 0) goto L76
            r0.vd()
            return
        L76:
            r0.uZ()
            return
        L7a:
            if (r2 == 0) goto L80
            r0.vd()
            return
        L80:
            int r0 = r0.uZ()
            int r1 = r4.getSmallFileTotalBytes()
            r3.b(r4, r0, r1)
            return
        L8c:
            if (r2 == 0) goto L98
            r0.getEtag()
            r0.uR()
            r0.vb()
            return
        L98:
            java.lang.String r5 = r0.getEtag()
            boolean r6 = r0.uR()
            int r7 = r4.getSmallFileSoFarBytes()
            int r8 = r0.va()
            r3.a(r4, r5, r6, r7, r8)
            return
        Lac:
            if (r2 == 0) goto Lb5
            r0.vd()
            r0.vb()
            return
        Lb5:
            int r1 = r0.uZ()
            int r0 = r0.va()
            r3.a(r4, r1, r0)
            return
        Lc1:
            java.lang.Throwable r0 = r0.ve()
            r3.a(r4, r0)
            return
        Lc9:
            if (r2 == 0) goto Ld2
            r0.vd()
            r0.vb()
            return
        Ld2:
            int r1 = r0.uZ()
            int r0 = r0.va()
            r3.c(r4, r1, r0)
            return
        Lde:
            r3.c(r4)
            return
        Le2:
            r3.d(r4)
        Le5:
            return
    }

    @Override
    public final boolean tK() {
            r1 = this;
            com.kwad.framework.filedownloader.a$a r0 = r1.abi
            com.kwad.framework.filedownloader.a r0 = r0.tf()
            boolean r0 = r0.tc()
            return r0
    }

    @Override
    public final boolean tL() {
            r2 = this;
            java.util.Queue<com.kwad.framework.filedownloader.message.MessageSnapshot> r0 = r2.abk
            java.lang.Object r0 = r0.peek()
            com.kwad.framework.filedownloader.message.MessageSnapshot r0 = (com.kwad.framework.filedownloader.message.MessageSnapshot) r0
            byte r0 = r0.sX()
            r1 = 4
            if (r0 != r1) goto L11
            r0 = 1
            return r0
        L11:
            r0 = 0
            return r0
    }

    @Override
    public final void tM() {
            r1 = this;
            r0 = 1
            r1.abl = r0
            return
    }

    public final java.lang.String toString() {
            r3 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.kwad.framework.filedownloader.a$a r1 = r3.abi
            if (r1 != 0) goto L9
            r1 = -1
            goto L11
        L9:
            com.kwad.framework.filedownloader.a r1 = r1.tf()
            int r1 = r1.getId()
        L11:
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2 = 0
            r0[r2] = r1
            r1 = 1
            java.lang.String r2 = super.toString()
            r0[r1] = r2
            java.lang.String r1 = "%d:%s"
            java.lang.String r0 = com.kwad.framework.filedownloader.f.f.b(r1, r0)
            return r0
    }
}
