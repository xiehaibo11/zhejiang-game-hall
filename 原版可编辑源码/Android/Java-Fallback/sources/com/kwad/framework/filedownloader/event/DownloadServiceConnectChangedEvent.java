package com.kwad.framework.filedownloader.event;

public final class DownloadServiceConnectChangedEvent extends com.kwad.framework.filedownloader.event.b {
    private final com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus adB;
    private final java.lang.Class<?> adC;

    public enum ConnectStatus extends java.lang.Enum<com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus> {
        private static final com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus[] $VALUES = null;
        public static final com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus connected = null;
        public static final com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus disconnected = null;
        public static final com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus lost = null;

        static {
                com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus r0 = new com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus
                r1 = 0
                java.lang.String r2 = "connected"
                r0.<init>(r2, r1)
                com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus.connected = r0
                com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus r0 = new com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus
                r2 = 1
                java.lang.String r3 = "disconnected"
                r0.<init>(r3, r2)
                com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus.disconnected = r0
                com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus r0 = new com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus
                r3 = 2
                java.lang.String r4 = "lost"
                r0.<init>(r4, r3)
                com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus.lost = r0
                r4 = 3
                com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus[] r4 = new com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus[r4]
                com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus r5 = com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus.connected
                r4[r1] = r5
                com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus r1 = com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus.disconnected
                r4[r2] = r1
                r4[r3] = r0
                com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus.$VALUES = r4
                return
        }

        ConnectStatus(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus> r0 = com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus r1 = (com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus) r1
                return r1
        }

        public static com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus[] values() {
                com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus[] r0 = com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus[] r0 = (com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus[]) r0
                return r0
        }
    }

    public DownloadServiceConnectChangedEvent(com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus r2, java.lang.Class<?> r3) {
            r1 = this;
            java.lang.String r0 = "event.service.connect.changed"
            r1.<init>(r0)
            r1.adB = r2
            r1.adC = r3
            return
    }

    public final com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent.ConnectStatus uU() {
            r1 = this;
            com.kwad.framework.filedownloader.event.DownloadServiceConnectChangedEvent$ConnectStatus r0 = r1.adB
            return r0
    }
}
