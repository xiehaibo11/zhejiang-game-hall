package com.kwad.framework.filedownloader;

import com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent;

public abstract class e extends com.kwad.framework.filedownloader.event.c {
    private DownloadServiceConnectChangedEvent.ConnectStatus aaV;

    @Override
    public final boolean a(com.kwad.framework.filedownloader.event.b bVar) {
        if (!(bVar instanceof DownloadServiceConnectChangedEvent)) {
            return false;
        }
        DownloadServiceConnectChangedEvent.ConnectStatus connectStatusUU = ((DownloadServiceConnectChangedEvent) bVar).uU();
        this.aaV = connectStatusUU;
        if (connectStatusUU == DownloadServiceConnectChangedEvent.ConnectStatus.connected) {
            ty();
            return false;
        }
        tz();
        return false;
    }

    public final DownloadServiceConnectChangedEvent.ConnectStatus tA() {
        return this.aaV;
    }

    public abstract void ty();

    public abstract void tz();
}
