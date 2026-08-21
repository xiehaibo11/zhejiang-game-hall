package com.ss.android.socialbase.downloader.constants;

public enum ByteInvalidRetryStatus extends java.lang.Enum<com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus> {
    private static final com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus[] $VALUES = null;
    public static final com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus BYTE_INVALID_RETRY_STATUS_DOWNLOADED = null;
    public static final com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus BYTE_INVALID_RETRY_STATUS_DOWNLOADING = null;
    public static final com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus BYTE_INVALID_RETRY_STATUS_NONE = null;
    public static final com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus BYTE_INVALID_RETRY_STATUS_RESTART = null;

    static {
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r0 = new com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus
            r1 = 0
            java.lang.String r2 = "BYTE_INVALID_RETRY_STATUS_NONE"
            r0.<init>(r2, r1)
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.BYTE_INVALID_RETRY_STATUS_NONE = r0
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r0 = new com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus
            r2 = 1
            java.lang.String r3 = "BYTE_INVALID_RETRY_STATUS_RESTART"
            r0.<init>(r3, r2)
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.BYTE_INVALID_RETRY_STATUS_RESTART = r0
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r0 = new com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus
            r3 = 2
            java.lang.String r4 = "BYTE_INVALID_RETRY_STATUS_DOWNLOADING"
            r0.<init>(r4, r3)
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.BYTE_INVALID_RETRY_STATUS_DOWNLOADING = r0
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r0 = new com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus
            r4 = 3
            java.lang.String r5 = "BYTE_INVALID_RETRY_STATUS_DOWNLOADED"
            r0.<init>(r5, r4)
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.BYTE_INVALID_RETRY_STATUS_DOWNLOADED = r0
            r5 = 4
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus[] r5 = new com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus[r5]
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r6 = com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.BYTE_INVALID_RETRY_STATUS_NONE
            r5[r1] = r6
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r1 = com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.BYTE_INVALID_RETRY_STATUS_RESTART
            r5[r2] = r1
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r1 = com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.BYTE_INVALID_RETRY_STATUS_DOWNLOADING
            r5[r3] = r1
            r5[r4] = r0
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.$VALUES = r5
            return
    }

    ByteInvalidRetryStatus(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus valueOf(java.lang.String r1) {
            java.lang.Class<com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus> r0 = com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus r1 = (com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus) r1
            return r1
    }

    public static com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus[] values() {
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus[] r0 = com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus.$VALUES
            java.lang.Object r0 = r0.clone()
            com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus[] r0 = (com.ss.android.socialbase.downloader.constants.ByteInvalidRetryStatus[]) r0
            return r0
    }
}
