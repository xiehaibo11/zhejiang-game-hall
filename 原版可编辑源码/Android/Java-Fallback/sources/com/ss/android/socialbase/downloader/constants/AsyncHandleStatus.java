package com.ss.android.socialbase.downloader.constants;

public enum AsyncHandleStatus extends java.lang.Enum<com.ss.android.socialbase.downloader.constants.AsyncHandleStatus> {
    private static final com.ss.android.socialbase.downloader.constants.AsyncHandleStatus[] $VALUES = null;
    public static final com.ss.android.socialbase.downloader.constants.AsyncHandleStatus ASYNC_HANDLE_DOWNLOADED = null;
    public static final com.ss.android.socialbase.downloader.constants.AsyncHandleStatus ASYNC_HANDLE_DOWNLOADING = null;
    public static final com.ss.android.socialbase.downloader.constants.AsyncHandleStatus ASYNC_HANDLE_NONE = null;
    public static final com.ss.android.socialbase.downloader.constants.AsyncHandleStatus ASYNC_HANDLE_RESTART = null;
    public static final com.ss.android.socialbase.downloader.constants.AsyncHandleStatus ASYNC_HANDLE_WAITING = null;

    static {
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r0 = new com.ss.android.socialbase.downloader.constants.AsyncHandleStatus
            r1 = 0
            java.lang.String r2 = "ASYNC_HANDLE_NONE"
            r0.<init>(r2, r1)
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_NONE = r0
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r0 = new com.ss.android.socialbase.downloader.constants.AsyncHandleStatus
            r2 = 1
            java.lang.String r3 = "ASYNC_HANDLE_WAITING"
            r0.<init>(r3, r2)
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_WAITING = r0
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r0 = new com.ss.android.socialbase.downloader.constants.AsyncHandleStatus
            r3 = 2
            java.lang.String r4 = "ASYNC_HANDLE_RESTART"
            r0.<init>(r4, r3)
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_RESTART = r0
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r0 = new com.ss.android.socialbase.downloader.constants.AsyncHandleStatus
            r4 = 3
            java.lang.String r5 = "ASYNC_HANDLE_DOWNLOADING"
            r0.<init>(r5, r4)
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_DOWNLOADING = r0
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r0 = new com.ss.android.socialbase.downloader.constants.AsyncHandleStatus
            r5 = 4
            java.lang.String r6 = "ASYNC_HANDLE_DOWNLOADED"
            r0.<init>(r6, r5)
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_DOWNLOADED = r0
            r6 = 5
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus[] r6 = new com.ss.android.socialbase.downloader.constants.AsyncHandleStatus[r6]
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r7 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_NONE
            r6[r1] = r7
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r1 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_WAITING
            r6[r2] = r1
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r1 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_RESTART
            r6[r3] = r1
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r1 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.ASYNC_HANDLE_DOWNLOADING
            r6[r4] = r1
            r6[r5] = r0
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.$VALUES = r6
            return
    }

    AsyncHandleStatus(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.ss.android.socialbase.downloader.constants.AsyncHandleStatus valueOf(java.lang.String r1) {
            java.lang.Class<com.ss.android.socialbase.downloader.constants.AsyncHandleStatus> r0 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus r1 = (com.ss.android.socialbase.downloader.constants.AsyncHandleStatus) r1
            return r1
    }

    public static com.ss.android.socialbase.downloader.constants.AsyncHandleStatus[] values() {
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus[] r0 = com.ss.android.socialbase.downloader.constants.AsyncHandleStatus.$VALUES
            java.lang.Object r0 = r0.clone()
            com.ss.android.socialbase.downloader.constants.AsyncHandleStatus[] r0 = (com.ss.android.socialbase.downloader.constants.AsyncHandleStatus[]) r0
            return r0
    }
}
