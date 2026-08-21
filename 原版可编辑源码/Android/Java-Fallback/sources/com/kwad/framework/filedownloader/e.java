package com.kwad.framework.filedownloader;

public abstract class e extends com.kwad.framework.filedownloader.event.c {
    private com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus aaV;

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final boolean a(com.kwad.framework.filedownloader.event.b r2) {
            r1 = this;
            boolean r0 = r2 instanceof com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent
            if (r0 == 0) goto L17
            com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent r2 = (com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent) r2
            com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus r2 = r2.uU()
            r1.aaV = r2
            com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus r0 = com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus.connected
            if (r2 != r0) goto L14
            r1.ty()
            goto L17
        L14:
            r1.tz()
        L17:
            r2 = 0
            return r2
    }

    public final com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus tA() {
            r1 = this;
            com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus r0 = r1.aaV
            return r0
    }

    public abstract void ty();

    public abstract void tz();
}
