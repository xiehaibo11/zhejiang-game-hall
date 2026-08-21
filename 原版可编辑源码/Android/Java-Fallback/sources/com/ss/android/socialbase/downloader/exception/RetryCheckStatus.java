package com.ss.android.socialbase.downloader.exception;

public enum RetryCheckStatus extends java.lang.Enum<com.ss.android.socialbase.downloader.exception.RetryCheckStatus> {
    private static final com.ss.android.socialbase.downloader.exception.RetryCheckStatus[] $VALUES = null;
    public static final com.ss.android.socialbase.downloader.exception.RetryCheckStatus CONTINUE = null;
    public static final com.ss.android.socialbase.downloader.exception.RetryCheckStatus RETURN = null;

    static {
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r0 = new com.ss.android.socialbase.downloader.exception.RetryCheckStatus
            r1 = 0
            java.lang.String r2 = "RETURN"
            r0.<init>(r2, r1)
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus.RETURN = r0
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r0 = new com.ss.android.socialbase.downloader.exception.RetryCheckStatus
            r2 = 1
            java.lang.String r3 = "CONTINUE"
            r0.<init>(r3, r2)
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus.CONTINUE = r0
            r3 = 2
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus[] r3 = new com.ss.android.socialbase.downloader.exception.RetryCheckStatus[r3]
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r4 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.RETURN
            r3[r1] = r4
            r3[r2] = r0
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus.$VALUES = r3
            return
    }

    RetryCheckStatus(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.ss.android.socialbase.downloader.exception.RetryCheckStatus valueOf(java.lang.String r1) {
            java.lang.Class<com.ss.android.socialbase.downloader.exception.RetryCheckStatus> r0 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus r1 = (com.ss.android.socialbase.downloader.exception.RetryCheckStatus) r1
            return r1
    }

    public static com.ss.android.socialbase.downloader.exception.RetryCheckStatus[] values() {
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus[] r0 = com.ss.android.socialbase.downloader.exception.RetryCheckStatus.$VALUES
            java.lang.Object r0 = r0.clone()
            com.ss.android.socialbase.downloader.exception.RetryCheckStatus[] r0 = (com.ss.android.socialbase.downloader.exception.RetryCheckStatus[]) r0
            return r0
    }
}
