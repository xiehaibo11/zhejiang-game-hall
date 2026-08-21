package com.ss.android.socialbase.downloader.constants;

public enum RetryDelayStatus extends java.lang.Enum<com.ss.android.socialbase.downloader.constants.RetryDelayStatus> {
    private static final com.ss.android.socialbase.downloader.constants.RetryDelayStatus[] $VALUES = null;
    public static final com.ss.android.socialbase.downloader.constants.RetryDelayStatus DELAY_RETRY_DOWNLOADED = null;
    public static final com.ss.android.socialbase.downloader.constants.RetryDelayStatus DELAY_RETRY_DOWNLOADING = null;
    public static final com.ss.android.socialbase.downloader.constants.RetryDelayStatus DELAY_RETRY_NONE = null;
    public static final com.ss.android.socialbase.downloader.constants.RetryDelayStatus DELAY_RETRY_WAITING = null;

    static {
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r0 = new com.ss.android.socialbase.downloader.constants.RetryDelayStatus
            r1 = 0
            java.lang.String r2 = "DELAY_RETRY_NONE"
            r0.<init>(r2, r1)
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_NONE = r0
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r0 = new com.ss.android.socialbase.downloader.constants.RetryDelayStatus
            r2 = 1
            java.lang.String r3 = "DELAY_RETRY_WAITING"
            r0.<init>(r3, r2)
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_WAITING = r0
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r0 = new com.ss.android.socialbase.downloader.constants.RetryDelayStatus
            r3 = 2
            java.lang.String r4 = "DELAY_RETRY_DOWNLOADING"
            r0.<init>(r4, r3)
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_DOWNLOADING = r0
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r0 = new com.ss.android.socialbase.downloader.constants.RetryDelayStatus
            r4 = 3
            java.lang.String r5 = "DELAY_RETRY_DOWNLOADED"
            r0.<init>(r5, r4)
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_DOWNLOADED = r0
            r5 = 4
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus[] r5 = new com.ss.android.socialbase.downloader.constants.RetryDelayStatus[r5]
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r6 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_NONE
            r5[r1] = r6
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r1 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_WAITING
            r5[r2] = r1
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r1 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.DELAY_RETRY_DOWNLOADING
            r5[r3] = r1
            r5[r4] = r0
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus.$VALUES = r5
            return
    }

    RetryDelayStatus(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.ss.android.socialbase.downloader.constants.RetryDelayStatus valueOf(java.lang.String r1) {
            java.lang.Class<com.ss.android.socialbase.downloader.constants.RetryDelayStatus> r0 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus r1 = (com.ss.android.socialbase.downloader.constants.RetryDelayStatus) r1
            return r1
    }

    public static com.ss.android.socialbase.downloader.constants.RetryDelayStatus[] values() {
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus[] r0 = com.ss.android.socialbase.downloader.constants.RetryDelayStatus.$VALUES
            java.lang.Object r0 = r0.clone()
            com.ss.android.socialbase.downloader.constants.RetryDelayStatus[] r0 = (com.ss.android.socialbase.downloader.constants.RetryDelayStatus[]) r0
            return r0
    }
}
