package com.ss.android.socialbase.downloader.constants;

public enum DownloadCacheSyncStatus extends java.lang.Enum<com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus> {
    private static final com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus[] $VALUES = null;
    public static final com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus SYNC_NONE = null;
    public static final com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus SYNC_START = null;
    public static final com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus SYNC_SUCCESS = null;

    static {
            com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus r0 = new com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus
            r1 = 0
            java.lang.String r2 = "SYNC_NONE"
            r0.<init>(r2, r1)
            com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus.SYNC_NONE = r0
            com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus r0 = new com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus
            r2 = 1
            java.lang.String r3 = "SYNC_START"
            r0.<init>(r3, r2)
            com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus.SYNC_START = r0
            com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus r0 = new com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus
            r3 = 2
            java.lang.String r4 = "SYNC_SUCCESS"
            r0.<init>(r4, r3)
            com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus.SYNC_SUCCESS = r0
            r4 = 3
            com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus[] r4 = new com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus[r4]
            com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus r5 = com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus.SYNC_NONE
            r4[r1] = r5
            com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus r1 = com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus.SYNC_START
            r4[r2] = r1
            r4[r3] = r0
            com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus.$VALUES = r4
            return
    }

    DownloadCacheSyncStatus(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus valueOf(java.lang.String r1) {
            java.lang.Class<com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus> r0 = com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus r1 = (com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus) r1
            return r1
    }

    public static com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus[] values() {
            com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus[] r0 = com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus.$VALUES
            java.lang.Object r0 = r0.clone()
            com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus[] r0 = (com.ss.android.socialbase.downloader.constants.DownloadCacheSyncStatus[]) r0
            return r0
    }
}
