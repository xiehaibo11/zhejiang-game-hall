package com.kwad.framework.filedownloader;

public final class n implements com.kwad.framework.filedownloader.u {
    private final com.kwad.framework.filedownloader.u abn;

    static final class a {
        private static final com.kwad.framework.filedownloader.n abo = null;

        static {
                com.kwad.framework.filedownloader.n r0 = new com.kwad.framework.filedownloader.n
                r1 = 0
                r0.<init>(r1)
                com.kwad.framework.filedownloader.n.a.abo = r0
                return
        }

        static com.kwad.framework.filedownloader.n tQ() {
                com.kwad.framework.filedownloader.n r0 = com.kwad.framework.filedownloader.n.a.abo
                return r0
        }
    }

    private n() {
            r2 = this;
            r2.<init>()
            com.kwad.framework.filedownloader.f.e r0 = com.kwad.framework.filedownloader.f.e.vO()
            boolean r0 = r0.aeM
            if (r0 == 0) goto L11
            com.kwad.framework.filedownloader.o r0 = new com.kwad.framework.filedownloader.o
            r0.<init>()
            goto L18
        L11:
            com.kwad.framework.filedownloader.p r0 = new com.kwad.framework.filedownloader.p
            java.lang.Class<com.kwad.sdk.api.proxy.app.FileDownloadService$SeparateProcessService> r1 = com.kwad.sdk.api.proxy.app.FileDownloadService.SeparateProcessService.class
            r0.<init>(r1)
        L18:
            r2.abn = r0
            return
    }

    n(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.framework.filedownloader.n tO() {
            com.kwad.framework.filedownloader.n r0 = com.kwad.framework.filedownloader.n.a.tQ()
            return r0
    }

    public static com.kwad.framework.filedownloader.services.e.a tP() {
            com.kwad.framework.filedownloader.n r0 = tO()
            com.kwad.framework.filedownloader.u r0 = r0.abn
            boolean r0 = r0 instanceof com.kwad.framework.filedownloader.o
            if (r0 == 0) goto L13
            com.kwad.framework.filedownloader.n r0 = tO()
            com.kwad.framework.filedownloader.u r0 = r0.abn
            com.kwad.framework.filedownloader.services.e$a r0 = (com.kwad.framework.filedownloader.services.e.a) r0
            return r0
        L13:
            r0 = 0
            return r0
    }

    @Override
    public final boolean a(java.lang.String r12, java.lang.String r13, boolean r14, int r15, int r16, int r17, boolean r18, com.kwad.framework.filedownloader.d.b r19, boolean r20) {
            r11 = this;
            r0 = r11
            com.kwad.framework.filedownloader.u r1 = r0.abn
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r7 = r17
            r8 = r18
            r9 = r19
            r10 = r20
            boolean r1 = r1.a(r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return r1
    }

    @Override
    public final boolean aY(int r2) {
            r1 = this;
            com.kwad.framework.filedownloader.u r0 = r1.abn
            boolean r2 = r0.aY(r2)
            return r2
    }

    @Override
    public final byte aZ(int r2) {
            r1 = this;
            com.kwad.framework.filedownloader.u r0 = r1.abn
            byte r2 = r0.aZ(r2)
            return r2
    }

    @Override
    public final void an(android.content.Context r2) {
            r1 = this;
            com.kwad.framework.filedownloader.u r0 = r1.abn
            r0.an(r2)
            return
    }

    @Override
    public final boolean ba(int r2) {
            r1 = this;
            com.kwad.framework.filedownloader.u r0 = r1.abn
            boolean r2 = r0.ba(r2)
            return r2
    }

    @Override
    public final boolean isConnected() {
            r1 = this;
            com.kwad.framework.filedownloader.u r0 = r1.abn
            boolean r0 = r0.isConnected()
            return r0
    }
}
