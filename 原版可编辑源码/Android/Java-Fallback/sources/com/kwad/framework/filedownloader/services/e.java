package com.kwad.framework.filedownloader.services;

public final class e extends com.kwad.framework.filedownloader.c.b.a implements com.kwad.framework.filedownloader.services.i {
    private final com.kwad.framework.filedownloader.services.g aeu;
    private final java.lang.ref.WeakReference<com.kwad.framework.filedownloader.services.FileDownloadServiceProxy> aev;

    public interface a {
        void a(com.kwad.framework.filedownloader.services.e r1);

        void onDisconnected();
    }

    e(java.lang.ref.WeakReference<com.kwad.framework.filedownloader.services.FileDownloadServiceProxy> r1, com.kwad.framework.filedownloader.services.g r2) {
            r0 = this;
            r0.<init>()
            r0.aev = r1
            r0.aeu = r2
            return
    }

    @Override
    public final void a(com.kwad.framework.filedownloader.c.a r1) {
            r0 = this;
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
    public final void b(com.kwad.framework.filedownloader.c.a r1) {
            r0 = this;
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
            r1 = this;
            com.kwad.framework.filedownloader.services.e$a r0 = com.kwad.framework.filedownloader.n.tP()
            r0.onDisconnected()
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
            r1 = this;
            com.kwad.framework.filedownloader.services.e$a r0 = com.kwad.framework.filedownloader.n.tP()
            r0.a(r1)
            return
    }

    @Override
    public final android.os.IBinder vE() {
            r1 = this;
            r0 = 0
            return r0
    }
}
