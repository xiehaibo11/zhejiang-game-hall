package com.kwad.framework.filedownloader.event;

public final class DownloadServiceConnectChangedEvent extends b {
    private final ConnectStatus adB;
    private final Class<?> adC;

    public enum ConnectStatus {
        connected,
        disconnected,
        lost
    }

    public DownloadServiceConnectChangedEvent(ConnectStatus connectStatus, Class<?> cls) {
        super("event.service.connect.changed");
        this.adB = connectStatus;
        this.adC = cls;
    }

    public final ConnectStatus uU() {
        return this.adB;
    }
}
