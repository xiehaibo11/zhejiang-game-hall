package com.kwad.sdk.core.download.b;

public final class c {
    private com.kwad.sdk.api.core.IProgressRemoteView aoe;

    private c(com.kwad.sdk.api.core.IProgressRemoteView r1) {
            r0 = this;
            r0.<init>()
            r0.aoe = r1
            return
    }

    public static com.kwad.sdk.core.download.b.c a(android.content.Context r2, int r3, boolean r4) {
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            int r0 = r0.getApiVersionCode()
            r1 = 3031000(0x2e3fd8, float:4.247336E-39)
            if (r0 < r1) goto L13
            r0 = 1
            goto L14
        L13:
            r0 = 0
        L14:
            if (r0 == 0) goto L20
            com.kwad.sdk.api.core.IProgressRemoteView r3 = com.kwad.sdk.api.core.RemoteViewBuilder.createProgressView(r2, r3, r4)     // Catch: java.lang.Throwable -> L2a
            com.kwad.sdk.core.download.b.c r4 = new com.kwad.sdk.core.download.b.c     // Catch: java.lang.Throwable -> L2a
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L2a
            goto L2f
        L20:
            com.kwad.sdk.api.core.IProgressRemoteView r3 = com.kwad.sdk.api.core.RemoteViewBuilder.createProgressView(r2)     // Catch: java.lang.Throwable -> L2a
            com.kwad.sdk.core.download.b.c r4 = new com.kwad.sdk.core.download.b.c     // Catch: java.lang.Throwable -> L2a
            r4.<init>(r3)     // Catch: java.lang.Throwable -> L2a
            goto L2f
        L2a:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
            r4 = 0
        L2f:
            if (r4 != 0) goto L40
            com.kwad.sdk.api.core.IProgressRemoteView r2 = com.kwad.sdk.api.core.RemoteViewBuilder.createProgressView(r2)     // Catch: java.lang.Throwable -> L3c
            com.kwad.sdk.core.download.b.c r3 = new com.kwad.sdk.core.download.b.c     // Catch: java.lang.Throwable -> L3c
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L3c
            r4 = r3
            goto L40
        L3c:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
        L40:
            return r4
    }

    final android.widget.RemoteViews build() {
            r1 = this;
            com.kwad.sdk.api.core.IProgressRemoteView r0 = r1.aoe
            if (r0 == 0) goto L9
            android.widget.RemoteViews r0 = r0.build()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public final void setControlBtnPaused(boolean r2) {
            r1 = this;
            com.kwad.sdk.api.core.IProgressRemoteView r0 = r1.aoe     // Catch: java.lang.Throwable -> La
            if (r0 == 0) goto L9
            com.kwad.sdk.api.core.IProgressRemoteView r0 = r1.aoe     // Catch: java.lang.Throwable -> La
            r0.setControlBtnPaused(r2)     // Catch: java.lang.Throwable -> La
        L9:
            return
        La:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
            return
    }

    public final void setIcon(android.graphics.Bitmap r2) {
            r1 = this;
            com.kwad.sdk.api.core.IProgressRemoteView r0 = r1.aoe
            if (r0 == 0) goto L7
            r0.setIcon(r2)
        L7:
            return
    }

    public final void setName(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.api.core.IProgressRemoteView r0 = r1.aoe
            if (r0 == 0) goto L7
            r0.setName(r2)
        L7:
            return
    }

    public final void setPercentNum(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.api.core.IProgressRemoteView r0 = r1.aoe
            if (r0 == 0) goto L7
            r0.setPercentNum(r2)
        L7:
            return
    }

    public final void setProgress(int r2, int r3, boolean r4) {
            r1 = this;
            com.kwad.sdk.api.core.IProgressRemoteView r2 = r1.aoe
            if (r2 == 0) goto La
            r4 = 100
            r0 = 0
            r2.setProgress(r4, r3, r0)
        La:
            return
    }

    public final void setSize(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.api.core.IProgressRemoteView r0 = r1.aoe
            if (r0 == 0) goto L7
            r0.setSize(r2)
        L7:
            return
    }

    public final void setStatus(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.api.core.IProgressRemoteView r0 = r1.aoe
            if (r0 == 0) goto L7
            r0.setStatus(r2)
        L7:
            return
    }
}
