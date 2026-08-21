package com.kwad.framework.filedownloader;

final class o implements com.kwad.framework.filedownloader.services.e.a, com.kwad.framework.filedownloader.u {
    private static java.lang.Class<?> abp;
    private final java.util.ArrayList<java.lang.Runnable> abq;
    private com.kwad.framework.filedownloader.services.e abr;

    static {
            return
    }

    o() {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.abq = r0
            return
    }

    private void a(android.content.Context r2, java.lang.Runnable r3) {
            r1 = this;
            android.content.Intent r3 = new android.content.Intent
            java.lang.Class r0 = tR()
            r3.<init>(r2, r0)
            r2.startService(r3)
            return
    }

    private static java.lang.Class<?> tR() {
            java.lang.Class<?> r0 = com.kwad.framework.filedownloader.o.abp
            if (r0 != 0) goto L8
            java.lang.Class<com.kwad.sdk.api.proxy.app.FileDownloadService$SharedMainProcessService> r0 = com.kwad.sdk.api.proxy.app.FileDownloadService.SharedMainProcessService.class
            com.kwad.framework.filedownloader.o.abp = r0
        L8:
            java.lang.Class<?> r0 = com.kwad.framework.filedownloader.o.abp
            return r0
    }

    @Override
    public final void a(com.kwad.framework.filedownloader.services.e r4) {
            r3 = this;
            r3.abr = r4
            java.util.ArrayList<java.lang.Runnable> r4 = r3.abq
            java.lang.Object r4 = r4.clone()
            java.util.List r4 = (java.util.List) r4
            java.util.ArrayList<java.lang.Runnable> r0 = r3.abq
            r0.clear()
            java.util.Iterator r4 = r4.iterator()
        L13:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L23
            java.lang.Object r0 = r4.next()
            java.lang.Runnable r0 = (java.lang.Runnable) r0
            r0.run()
            goto L13
        L23:
            com.kwad.framework.filedownloader.f r4 = com.kwad.framework.filedownloader.f.tB()
            com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent r0 = new com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent
            com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus r1 = com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus.connected
            java.lang.Class r2 = tR()
            r0.<init>(r1, r2)
            r4.c(r0)
            return
    }

    @Override
    public final boolean a(java.lang.String r12, java.lang.String r13, boolean r14, int r15, int r16, int r17, boolean r18, com.kwad.framework.filedownloader.d.b r19, boolean r20) {
            r11 = this;
            boolean r0 = r11.isConnected()
            if (r0 != 0) goto Lb
            boolean r0 = com.kwad.framework.filedownloader.f.a.h(r12, r13, r14)
            return r0
        Lb:
            r0 = r11
            com.kwad.framework.filedownloader.services.e r1 = r0.abr
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
            r1 = 1
            return r1
    }

    @Override
    public final boolean aY(int r2) {
            r1 = this;
            boolean r0 = r1.isConnected()
            if (r0 != 0) goto Lb
            boolean r2 = com.kwad.framework.filedownloader.f.a.aY(r2)
            return r2
        Lb:
            com.kwad.framework.filedownloader.services.e r0 = r1.abr
            boolean r2 = r0.aY(r2)
            return r2
    }

    @Override
    public final byte aZ(int r2) {
            r1 = this;
            boolean r0 = r1.isConnected()
            if (r0 != 0) goto Lb
            byte r2 = com.kwad.framework.filedownloader.f.a.aZ(r2)
            return r2
        Lb:
            com.kwad.framework.filedownloader.services.e r0 = r1.abr
            byte r2 = r0.aZ(r2)
            return r2
    }

    @Override
    public final void an(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.a(r2, r0)
            return
    }

    @Override
    public final boolean ba(int r2) {
            r1 = this;
            boolean r0 = r1.isConnected()
            if (r0 != 0) goto Lb
            boolean r2 = com.kwad.framework.filedownloader.f.a.ba(r2)
            return r2
        Lb:
            com.kwad.framework.filedownloader.services.e r0 = r1.abr
            boolean r2 = r0.ba(r2)
            return r2
    }

    @Override
    public final boolean isConnected() {
            r1 = this;
            com.kwad.framework.filedownloader.services.e r0 = r1.abr
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    @Override
    public final void onDisconnected() {
            r4 = this;
            r0 = 0
            r4.abr = r0
            com.kwad.framework.filedownloader.f r0 = com.kwad.framework.filedownloader.f.tB()
            com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent r1 = new com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent
            com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus r2 = com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus.disconnected
            java.lang.Class r3 = tR()
            r1.<init>(r2, r3)
            r0.c(r1)
            return
    }
}
