package com.ss.android.socialbase.downloader.exception;

public class DownloadHttpException extends com.ss.android.socialbase.downloader.exception.BaseException {
    private final int httpStatusCode;

    public DownloadHttpException(int r1, int r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r1, r3)
            r0.httpStatusCode = r2
            return
    }

    public int getHttpStatusCode() {
            r1 = this;
            int r0 = r1.httpStatusCode
            return r0
    }
}
