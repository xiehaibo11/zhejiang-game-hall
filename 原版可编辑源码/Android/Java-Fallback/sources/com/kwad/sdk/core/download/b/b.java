package com.kwad.sdk.core.download.b;

public final class b {
    private com.kwad.sdk.api.core.ICompletedRemoteView aod;

    private b(com.kwad.sdk.api.core.ICompletedRemoteView r1) {
            r0 = this;
            r0.<init>()
            r0.aod = r1
            return
    }

    public static com.kwad.sdk.core.download.b.b aW(android.content.Context r1) {
            com.kwad.sdk.core.download.b.b r0 = new com.kwad.sdk.core.download.b.b     // Catch: java.lang.Throwable -> La
            com.kwad.sdk.api.core.ICompletedRemoteView r1 = com.kwad.sdk.api.core.RemoteViewBuilder.createCompletedView(r1)     // Catch: java.lang.Throwable -> La
            r0.<init>(r1)     // Catch: java.lang.Throwable -> La
            return r0
        La:
            r1 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r1)
            r1 = 0
            return r1
    }

    final android.widget.RemoteViews build() {
            r1 = this;
            com.kwad.sdk.api.core.ICompletedRemoteView r0 = r1.aod
            if (r0 == 0) goto L9
            android.widget.RemoteViews r0 = r0.build()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public final void setIcon(android.graphics.Bitmap r2) {
            r1 = this;
            com.kwad.sdk.api.core.ICompletedRemoteView r0 = r1.aod
            if (r0 == 0) goto L7
            r0.setIcon(r2)
        L7:
            return
    }

    public final void setInstallText(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.api.core.ICompletedRemoteView r0 = r1.aod
            if (r0 == 0) goto L7
            r0.setInstallText(r2)
        L7:
            return
    }

    public final void setName(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.api.core.ICompletedRemoteView r0 = r1.aod
            if (r0 == 0) goto L7
            r0.setName(r2)
        L7:
            return
    }

    public final void setSize(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.api.core.ICompletedRemoteView r0 = r1.aod
            if (r0 == 0) goto L7
            r0.setSize(r2)
        L7:
            return
    }

    public final void setStatus(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.api.core.ICompletedRemoteView r0 = r1.aod
            if (r0 == 0) goto L7
            r0.setStatus(r2)
        L7:
            return
    }
}
