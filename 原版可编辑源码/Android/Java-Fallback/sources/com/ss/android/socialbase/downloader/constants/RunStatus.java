package com.ss.android.socialbase.downloader.constants;

public enum RunStatus extends java.lang.Enum<com.ss.android.socialbase.downloader.constants.RunStatus> {
    private static final com.ss.android.socialbase.downloader.constants.RunStatus[] $VALUES = null;
    public static final com.ss.android.socialbase.downloader.constants.RunStatus RUN_STATUS_ALL_CHUNK_RETRY_WITH_RESET = null;
    public static final com.ss.android.socialbase.downloader.constants.RunStatus RUN_STATUS_CANCELED = null;
    public static final com.ss.android.socialbase.downloader.constants.RunStatus RUN_STATUS_END_FOR_FILE_EXIST = null;
    public static final com.ss.android.socialbase.downloader.constants.RunStatus RUN_STATUS_END_RIGHT_NOW = null;
    public static final com.ss.android.socialbase.downloader.constants.RunStatus RUN_STATUS_ERROR = null;
    public static final com.ss.android.socialbase.downloader.constants.RunStatus RUN_STATUS_NONE = null;
    public static final com.ss.android.socialbase.downloader.constants.RunStatus RUN_STATUS_PAUSE = null;

    @java.lang.Deprecated
    public static final com.ss.android.socialbase.downloader.constants.RunStatus RUN_STATUS_RETRY_DELAY = null;
    public static final com.ss.android.socialbase.downloader.constants.RunStatus RUN_STATUS_WAITING_ASYNC_HANDLER = null;

    static {
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = new com.ss.android.socialbase.downloader.constants.RunStatus
            r1 = 0
            java.lang.String r2 = "RUN_STATUS_NONE"
            r0.<init>(r2, r1)
            com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_NONE = r0
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = new com.ss.android.socialbase.downloader.constants.RunStatus
            r2 = 1
            java.lang.String r3 = "RUN_STATUS_PAUSE"
            r0.<init>(r3, r2)
            com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_PAUSE = r0
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = new com.ss.android.socialbase.downloader.constants.RunStatus
            r3 = 2
            java.lang.String r4 = "RUN_STATUS_CANCELED"
            r0.<init>(r4, r3)
            com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_CANCELED = r0
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = new com.ss.android.socialbase.downloader.constants.RunStatus
            r4 = 3
            java.lang.String r5 = "RUN_STATUS_ERROR"
            r0.<init>(r5, r4)
            com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_ERROR = r0
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = new com.ss.android.socialbase.downloader.constants.RunStatus
            r5 = 4
            java.lang.String r6 = "RUN_STATUS_END_RIGHT_NOW"
            r0.<init>(r6, r5)
            com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_END_RIGHT_NOW = r0
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = new com.ss.android.socialbase.downloader.constants.RunStatus
            r6 = 5
            java.lang.String r7 = "RUN_STATUS_RETRY_DELAY"
            r0.<init>(r7, r6)
            com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_RETRY_DELAY = r0
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = new com.ss.android.socialbase.downloader.constants.RunStatus
            r7 = 6
            java.lang.String r8 = "RUN_STATUS_WAITING_ASYNC_HANDLER"
            r0.<init>(r8, r7)
            com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_WAITING_ASYNC_HANDLER = r0
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = new com.ss.android.socialbase.downloader.constants.RunStatus
            r8 = 7
            java.lang.String r9 = "RUN_STATUS_END_FOR_FILE_EXIST"
            r0.<init>(r9, r8)
            com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_END_FOR_FILE_EXIST = r0
            com.ss.android.socialbase.downloader.constants.RunStatus r0 = new com.ss.android.socialbase.downloader.constants.RunStatus
            r9 = 8
            java.lang.String r10 = "RUN_STATUS_ALL_CHUNK_RETRY_WITH_RESET"
            r0.<init>(r10, r9)
            com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_ALL_CHUNK_RETRY_WITH_RESET = r0
            r10 = 9
            com.ss.android.socialbase.downloader.constants.RunStatus[] r10 = new com.ss.android.socialbase.downloader.constants.RunStatus[r10]
            com.ss.android.socialbase.downloader.constants.RunStatus r11 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_NONE
            r10[r1] = r11
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_PAUSE
            r10[r2] = r1
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_CANCELED
            r10[r3] = r1
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_ERROR
            r10[r4] = r1
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_END_RIGHT_NOW
            r10[r5] = r1
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_RETRY_DELAY
            r10[r6] = r1
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_WAITING_ASYNC_HANDLER
            r10[r7] = r1
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = com.ss.android.socialbase.downloader.constants.RunStatus.RUN_STATUS_END_FOR_FILE_EXIST
            r10[r8] = r1
            r10[r9] = r0
            com.ss.android.socialbase.downloader.constants.RunStatus.$VALUES = r10
            return
    }

    RunStatus(java.lang.String r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public static com.ss.android.socialbase.downloader.constants.RunStatus valueOf(java.lang.String r1) {
            java.lang.Class<com.ss.android.socialbase.downloader.constants.RunStatus> r0 = com.ss.android.socialbase.downloader.constants.RunStatus.class
            java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
            com.ss.android.socialbase.downloader.constants.RunStatus r1 = (com.ss.android.socialbase.downloader.constants.RunStatus) r1
            return r1
    }

    public static com.ss.android.socialbase.downloader.constants.RunStatus[] values() {
            com.ss.android.socialbase.downloader.constants.RunStatus[] r0 = com.ss.android.socialbase.downloader.constants.RunStatus.$VALUES
            java.lang.Object r0 = r0.clone()
            com.ss.android.socialbase.downloader.constants.RunStatus[] r0 = (com.ss.android.socialbase.downloader.constants.RunStatus[]) r0
            return r0
    }
}
