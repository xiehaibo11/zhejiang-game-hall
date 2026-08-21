package com.mbridge.msdk.foundation.download;

public enum DownloadStatus extends java.lang.Enum<com.mbridge.msdk.foundation.download.DownloadStatus> {
    private static final com.mbridge.msdk.foundation.download.DownloadStatus[] $VALUES = null;
    public static final com.mbridge.msdk.foundation.download.DownloadStatus CANCELLED = null;
    public static final com.mbridge.msdk.foundation.download.DownloadStatus COMPLETED = null;
    public static final com.mbridge.msdk.foundation.download.DownloadStatus DELAY = null;
    public static final com.mbridge.msdk.foundation.download.DownloadStatus FAILED = null;
    public static final com.mbridge.msdk.foundation.download.DownloadStatus PAUSED = null;
    public static final com.mbridge.msdk.foundation.download.DownloadStatus QUEUED = null;
    public static final com.mbridge.msdk.foundation.download.DownloadStatus RETRY = null;
    public static final com.mbridge.msdk.foundation.download.DownloadStatus RUNNING = null;
    public static final com.mbridge.msdk.foundation.download.DownloadStatus UNKNOWN = null;

    static {
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = new com.mbridge.msdk.foundation.download.DownloadStatus
            r1 = 0
            java.lang.String r2 = "QUEUED"
            r0.<init>(r2, r1)
            com.mbridge.msdk.foundation.download.DownloadStatus.QUEUED = r0
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = new com.mbridge.msdk.foundation.download.DownloadStatus
            r2 = 1
            java.lang.String r3 = "RUNNING"
            r0.<init>(r3, r2)
            com.mbridge.msdk.foundation.download.DownloadStatus.RUNNING = r0
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = new com.mbridge.msdk.foundation.download.DownloadStatus
            r3 = 2
            java.lang.String r4 = "PAUSED"
            r0.<init>(r4, r3)
            com.mbridge.msdk.foundation.download.DownloadStatus.PAUSED = r0
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = new com.mbridge.msdk.foundation.download.DownloadStatus
            r4 = 3
            java.lang.String r5 = "COMPLETED"
            r0.<init>(r5, r4)
            com.mbridge.msdk.foundation.download.DownloadStatus.COMPLETED = r0
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = new com.mbridge.msdk.foundation.download.DownloadStatus
            r5 = 4
            java.lang.String r6 = "CANCELLED"
            r0.<init>(r6, r5)
            com.mbridge.msdk.foundation.download.DownloadStatus.CANCELLED = r0
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = new com.mbridge.msdk.foundation.download.DownloadStatus
            r6 = 5
            java.lang.String r7 = "FAILED"
            r0.<init>(r7, r6)
            com.mbridge.msdk.foundation.download.DownloadStatus.FAILED = r0
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = new com.mbridge.msdk.foundation.download.DownloadStatus
            r7 = 6
            java.lang.String r8 = "DELAY"
            r0.<init>(r8, r7)
            com.mbridge.msdk.foundation.download.DownloadStatus.DELAY = r0
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = new com.mbridge.msdk.foundation.download.DownloadStatus
            r8 = 7
            java.lang.String r9 = "RETRY"
            r0.<init>(r9, r8)
            com.mbridge.msdk.foundation.download.DownloadStatus.RETRY = r0
            com.mbridge.msdk.foundation.download.DownloadStatus r0 = new com.mbridge.msdk.foundation.download.DownloadStatus
            r9 = 8
            java.lang.String r10 = "UNKNOWN"
            r0.<init>(r10, r9)
            com.mbridge.msdk.foundation.download.DownloadStatus.UNKNOWN = r0
            r10 = 9
            com.mbridge.msdk.foundation.download.DownloadStatus[] r10 = new com.mbridge.msdk.foundation.download.DownloadStatus[r10]
            com.mbridge.msdk.foundation.download.DownloadStatus r11 = com.mbridge.msdk.foundation.download.DownloadStatus.QUEUED
            r10[r1] = r11
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.RUNNING
            r10[r2] = r1
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.PAUSED
            r10[r3] = r1
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.COMPLETED
            r10[r4] = r1
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.CANCELLED
            r10[r5] = r1
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.FAILED
            r10[r6] = r1
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.DELAY
            r10[r7] = r1
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = com.mbridge.msdk.foundation.download.DownloadStatus.RETRY
            r10[r8] = r1
            r10[r9] = r0
            com.mbridge.msdk.foundation.download.DownloadStatus.$VALUES = r10
            return
    }

    DownloadStatus(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.mbridge.msdk.foundation.download.DownloadStatus valueOf(java.lang.String r1) {
            java.lang.Class<com.mbridge.msdk.foundation.download.DownloadStatus> r0 = com.mbridge.msdk.foundation.download.DownloadStatus.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.mbridge.msdk.foundation.download.DownloadStatus r1 = (com.mbridge.msdk.foundation.download.DownloadStatus) r1
            return r1
    }

    public static com.mbridge.msdk.foundation.download.DownloadStatus[] values() {
            com.mbridge.msdk.foundation.download.DownloadStatus[] r0 = com.mbridge.msdk.foundation.download.DownloadStatus.$VALUES
            java.lang.Object r0 = r0.clone()
            com.mbridge.msdk.foundation.download.DownloadStatus[] r0 = (com.mbridge.msdk.foundation.download.DownloadStatus[]) r0
            return r0
    }
}
