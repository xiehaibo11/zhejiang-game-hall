package com.kwad.framework.filedownloader.services;

public final class d extends com.kwad.framework.filedownloader.c.b.a implements com.kwad.framework.filedownloader.message.e.b, com.kwad.framework.filedownloader.services.i {
    private final android.os.RemoteCallbackList<com.kwad.framework.filedownloader.c.a> aet;
    private final com.kwad.framework.filedownloader.services.g aeu;
    private final java.lang.ref.WeakReference<com.kwad.framework.filedownloader.services.FileDownloadServiceProxy> aev;

    d(java.lang.ref.WeakReference<com.kwad.framework.filedownloader.services.FileDownloadServiceProxy> r2, com.kwad.framework.filedownloader.services.g r3) {
            r1 = this;
            r1.<init>()
            android.os.RemoteCallbackList r0 = new android.os.RemoteCallbackList
            r0.<init>()
            r1.aet = r0
            r1.aev = r2
            r1.aeu = r3
            com.kwad.framework.filedownloader.message.e r2 = com.kwad.framework.filedownloader.message.e.vg()
            r2.a(r1)
            return
    }

    private synchronized int v(com.kwad.framework.filedownloader.message.MessageSnapshot r5) {
            r4 = this;
            monitor-enter(r4)
            android.os.RemoteCallbackList<com.kwad.framework.filedownloader.c.a> r0 = r4.aet     // Catch: java.lang.Throwable -> L34
            int r0 = r0.beginBroadcast()     // Catch: java.lang.Throwable -> L34
            r1 = 0
            r2 = r1
        L9:
            if (r2 >= r0) goto L2f
            android.os.RemoteCallbackList<com.kwad.framework.filedownloader.c.a> r3 = r4.aet     // Catch: java.lang.Throwable -> L19 android.os.RemoteException -> L1b
            android.os.IInterface r3 = r3.getBroadcastItem(r2)     // Catch: java.lang.Throwable -> L19 android.os.RemoteException -> L1b
            com.kwad.framework.filedownloader.c.a r3 = (com.kwad.framework.filedownloader.c.a) r3     // Catch: java.lang.Throwable -> L19 android.os.RemoteException -> L1b
            r3.q(r5)     // Catch: java.lang.Throwable -> L19 android.os.RemoteException -> L1b
            int r2 = r2 + 1
            goto L9
        L19:
            r5 = move-exception
            goto L29
        L1b:
            r5 = move-exception
            java.lang.String r2 = "callback error"
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L19
            com.kwad.framework.filedownloader.f.d.a(r4, r5, r2, r1)     // Catch: java.lang.Throwable -> L19
            android.os.RemoteCallbackList<com.kwad.framework.filedownloader.c.a> r5 = r4.aet     // Catch: java.lang.Throwable -> L34
        L25:
            r5.finishBroadcast()     // Catch: java.lang.Throwable -> L34
            goto L32
        L29:
            android.os.RemoteCallbackList<com.kwad.framework.filedownloader.c.a> r0 = r4.aet     // Catch: java.lang.Throwable -> L34
            r0.finishBroadcast()     // Catch: java.lang.Throwable -> L34
            throw r5     // Catch: java.lang.Throwable -> L34
        L2f:
            android.os.RemoteCallbackList<com.kwad.framework.filedownloader.c.a> r5 = r4.aet     // Catch: java.lang.Throwable -> L34
            goto L25
        L32:
            monitor-exit(r4)
            return r0
        L34:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    @Override
    public final void a(com.kwad.framework.filedownloader.c.a r2) {
            r1 = this;
            android.os.RemoteCallbackList<com.kwad.framework.filedownloader.c.a> r0 = r1.aet
            r0.register(r2)
            return
    }

    @Override
    public final boolean aY(int r2) {
            r1 = this;
            com.kwad.framework.filedownloader.services.g r0 = r1.aeu
            boolean r2 = r0.aY(r2)
            return r2
    }

    @Override
    public final byte aZ(int r2) {
            r1 = this;
            com.kwad.framework.filedownloader.services.g r0 = r1.aeu
            byte r2 = r0.aZ(r2)
            return r2
    }

    @Override
    public final void b(com.kwad.framework.filedownloader.c.a r2) {
            r1 = this;
            android.os.RemoteCallbackList<com.kwad.framework.filedownloader.c.a> r0 = r1.aet
            r0.unregister(r2)
            return
    }

    @Override
    public final void b(java.lang.String r12, java.lang.String r13, boolean r14, int r15, int r16, int r17, boolean r18, com.kwad.framework.filedownloader.d.b r19, boolean r20) {
            r11 = this;
            r0 = r11
            com.kwad.framework.filedownloader.services.g r1 = r0.aeu
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r7 = r17
            r8 = r18
            r9 = r19
            r10 = r20
            r1.b(r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return
    }

    @Override
    public final boolean ba(int r2) {
            r1 = this;
            com.kwad.framework.filedownloader.services.g r0 = r1.aeu
            boolean r2 = r0.ba(r2)
            return r2
    }

    @Override
    public final boolean bs(int r2) {
            r1 = this;
            com.kwad.framework.filedownloader.services.g r0 = r1.aeu
            boolean r2 = r0.bs(r2)
            return r2
    }

    @Override
    public final long bt(int r3) {
            r2 = this;
            com.kwad.framework.filedownloader.services.g r0 = r2.aeu
            long r0 = r0.bE(r3)
            return r0
    }

    @Override
    public final long bu(int r3) {
            r2 = this;
            com.kwad.framework.filedownloader.services.g r0 = r2.aeu
            long r0 = r0.bu(r3)
            return r0
    }

    @Override
    public final boolean isIdle() {
            r1 = this;
            com.kwad.framework.filedownloader.services.g r0 = r1.aeu
            boolean r0 = r0.isIdle()
            return r0
    }

    @Override
    public final boolean n(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.kwad.framework.filedownloader.services.g r0 = r1.aeu
            boolean r2 = r0.p(r2, r3)
            return r2
    }

    @Override
    public final void onDestroy() {
            r2 = this;
            com.kwad.framework.filedownloader.message.e r0 = com.kwad.framework.filedownloader.message.e.vg()
            r1 = 0
            r0.a(r1)
            return
    }

    @Override
    public final void pauseAllTasks() {
            r1 = this;
            com.kwad.framework.filedownloader.services.g r0 = r1.aeu
            r0.vF()
            return
    }

    @Override
    public final void r(com.kwad.framework.filedownloader.message.MessageSnapshot r1) {
            r0 = this;
            r0.v(r1)
            return
    }

    @Override
    public final void startForeground(int r2, android.app.Notification r3) {
            r1 = this;
            java.lang.ref.WeakReference<com.kwad.framework.filedownloader.services.FileDownloadServiceProxy> r0 = r1.aev
            if (r0 == 0) goto L17
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L17
            java.lang.ref.WeakReference<com.kwad.framework.filedownloader.services.FileDownloadServiceProxy> r0 = r1.aev
            java.lang.Object r0 = r0.get()
            com.kwad.framework.filedownloader.services.FileDownloadServiceProxy r0 = (com.kwad.framework.filedownloader.services.FileDownloadServiceProxy) r0
            android.app.Service r0 = r0.context
            r0.startForeground(r2, r3)
        L17:
            return
    }

    @Override
    public final void stopForeground(boolean r2) {
            r1 = this;
            java.lang.ref.WeakReference<com.kwad.framework.filedownloader.services.FileDownloadServiceProxy> r0 = r1.aev
            if (r0 == 0) goto L17
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L17
            java.lang.ref.WeakReference<com.kwad.framework.filedownloader.services.FileDownloadServiceProxy> r0 = r1.aev
            java.lang.Object r0 = r0.get()
            com.kwad.framework.filedownloader.services.FileDownloadServiceProxy r0 = (com.kwad.framework.filedownloader.services.FileDownloadServiceProxy) r0
            android.app.Service r0 = r0.context
            r0.stopForeground(r2)
        L17:
            return
    }

    @Override
    public final void uW() {
            r1 = this;
            com.kwad.framework.filedownloader.services.g r0 = r1.aeu
            r0.uW()
            return
    }

    @Override
    public final void vD() {
            r0 = this;
            return
    }

    @Override
    public final android.os.IBinder vE() {
            r0 = this;
            return r0
    }
}
