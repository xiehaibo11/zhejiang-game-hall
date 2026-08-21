package com.ss.android.socialbase.downloader.constants;

public class DownloadStatus {
    public static final int CANCELED = -4;
    public static final int CONNECTED = 3;
    public static final int DOWNLOAD_COMPLETE_HANDLE = 11;
    public static final int FAILED = -1;
    public static final int FIRST_START = 6;
    public static final int FIRST_SUCCESS = -6;
    public static final int IDLE_STATUS = 0;
    public static final int INTERCEPT = -7;
    public static final int PAUSED = -2;
    public static final int PAUSED_BY_DB_INIT = -5;
    public static final int PREPARE = 1;
    public static final int PROGRESS = 4;
    public static final int RETRY = 5;
    public static final int RETRY_DELAY = 7;
    public static final int SINGLE_CHUNK_DELAY_RETRY = 10;
    public static final int SINGLE_CHUNK_RETRY = 9;
    public static final int START = 2;
    public static final int SUCCESSED = -3;
    public static final int WAITING_ASYNC_HANDLER = 8;

    public DownloadStatus() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean isDownloadOver(int r1) {
            if (r1 >= 0) goto La
            r0 = -2
            if (r1 == r0) goto La
            r0 = -5
            if (r1 == r0) goto La
            r1 = 1
            goto Lb
        La:
            r1 = 0
        Lb:
            return r1
    }

    public static boolean isDownloading(int r1) {
            if (r1 <= 0) goto Lf
            r0 = 7
            if (r1 == r0) goto Lf
            r0 = 8
            if (r1 == r0) goto Lf
            r0 = 10
            if (r1 == r0) goto Lf
            r1 = 1
            goto L10
        Lf:
            r1 = 0
        L10:
            return r1
    }

    public static boolean isFailedStatus(int r1) {
            r0 = -1
            if (r1 == r0) goto L9
            r0 = -7
            if (r1 != r0) goto L7
            goto L9
        L7:
            r1 = 0
            goto La
        L9:
            r1 = 1
        La:
            return r1
    }

    public static boolean isMonitorStatus(int r1) {
            r0 = 2
            if (r1 == r0) goto L17
            r0 = -3
            if (r1 == r0) goto L17
            r0 = -1
            if (r1 == r0) goto L17
            r0 = -4
            if (r1 == r0) goto L17
            r0 = -2
            if (r1 == r0) goto L17
            r0 = 6
            if (r1 == r0) goto L17
            if (r1 != 0) goto L15
            goto L17
        L15:
            r1 = 0
            goto L18
        L17:
            r1 = 1
        L18:
            return r1
    }

    public static boolean isRealTimeUploadStatus(int r1) {
            r0 = -3
            if (r1 == r0) goto L19
            r0 = -1
            if (r1 == r0) goto L19
            r0 = -4
            if (r1 == r0) goto L19
            r0 = -2
            if (r1 == r0) goto L19
            r0 = 5
            if (r1 == r0) goto L19
            r0 = 7
            if (r1 == r0) goto L19
            r0 = 8
            if (r1 != r0) goto L17
            goto L19
        L17:
            r1 = 0
            goto L1a
        L19:
            r1 = 1
        L1a:
            return r1
    }

    public static boolean isTimeUploadStatus(int r1) {
            r0 = -3
            if (r1 == r0) goto Lc
            r0 = -1
            if (r1 == r0) goto Lc
            r0 = -4
            if (r1 != r0) goto La
            goto Lc
        La:
            r1 = 0
            goto Ld
        Lc:
            r1 = 1
        Ld:
            return r1
    }

    public static boolean isUnCompletedStatus(int r1) {
            r0 = -1
            if (r1 == r0) goto L12
            r0 = -2
            if (r1 == r0) goto L12
            r0 = -7
            if (r1 == r0) goto L12
            r0 = -4
            if (r1 == r0) goto L12
            r0 = -5
            if (r1 != r0) goto L10
            goto L12
        L10:
            r1 = 0
            goto L13
        L12:
            r1 = 1
        L13:
            return r1
    }
}
