package com.mbridge.msdk.foundation.download;

public enum DownloadPriority extends java.lang.Enum<com.mbridge.msdk.foundation.download.DownloadPriority> {
    private static final com.mbridge.msdk.foundation.download.DownloadPriority[] $VALUES = null;
    public static final com.mbridge.msdk.foundation.download.DownloadPriority HIGH = null;
    public static final com.mbridge.msdk.foundation.download.DownloadPriority IMMEDIATE = null;
    public static final com.mbridge.msdk.foundation.download.DownloadPriority LOW = null;
    public static final com.mbridge.msdk.foundation.download.DownloadPriority MEDIUM = null;

    static {
            com.mbridge.msdk.foundation.download.DownloadPriority r0 = new com.mbridge.msdk.foundation.download.DownloadPriority
            r1 = 0
            java.lang.String r2 = "LOW"
            r0.<init>(r2, r1)
            com.mbridge.msdk.foundation.download.DownloadPriority.LOW = r0
            com.mbridge.msdk.foundation.download.DownloadPriority r0 = new com.mbridge.msdk.foundation.download.DownloadPriority
            r2 = 1
            java.lang.String r3 = "MEDIUM"
            r0.<init>(r3, r2)
            com.mbridge.msdk.foundation.download.DownloadPriority.MEDIUM = r0
            com.mbridge.msdk.foundation.download.DownloadPriority r0 = new com.mbridge.msdk.foundation.download.DownloadPriority
            r3 = 2
            java.lang.String r4 = "HIGH"
            r0.<init>(r4, r3)
            com.mbridge.msdk.foundation.download.DownloadPriority.HIGH = r0
            com.mbridge.msdk.foundation.download.DownloadPriority r0 = new com.mbridge.msdk.foundation.download.DownloadPriority
            r4 = 3
            java.lang.String r5 = "IMMEDIATE"
            r0.<init>(r5, r4)
            com.mbridge.msdk.foundation.download.DownloadPriority.IMMEDIATE = r0
            r5 = 4
            com.mbridge.msdk.foundation.download.DownloadPriority[] r5 = new com.mbridge.msdk.foundation.download.DownloadPriority[r5]
            com.mbridge.msdk.foundation.download.DownloadPriority r6 = com.mbridge.msdk.foundation.download.DownloadPriority.LOW
            r5[r1] = r6
            com.mbridge.msdk.foundation.download.DownloadPriority r1 = com.mbridge.msdk.foundation.download.DownloadPriority.MEDIUM
            r5[r2] = r1
            com.mbridge.msdk.foundation.download.DownloadPriority r1 = com.mbridge.msdk.foundation.download.DownloadPriority.HIGH
            r5[r3] = r1
            r5[r4] = r0
            com.mbridge.msdk.foundation.download.DownloadPriority.$VALUES = r5
            return
    }

    DownloadPriority(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.mbridge.msdk.foundation.download.DownloadPriority valueOf(java.lang.String r1) {
            java.lang.Class<com.mbridge.msdk.foundation.download.DownloadPriority> r0 = com.mbridge.msdk.foundation.download.DownloadPriority.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.mbridge.msdk.foundation.download.DownloadPriority r1 = (com.mbridge.msdk.foundation.download.DownloadPriority) r1
            return r1
    }

    public static com.mbridge.msdk.foundation.download.DownloadPriority[] values() {
            com.mbridge.msdk.foundation.download.DownloadPriority[] r0 = com.mbridge.msdk.foundation.download.DownloadPriority.$VALUES
            java.lang.Object r0 = r0.clone()
            com.mbridge.msdk.foundation.download.DownloadPriority[] r0 = (com.mbridge.msdk.foundation.download.DownloadPriority[]) r0
            return r0
    }
}
