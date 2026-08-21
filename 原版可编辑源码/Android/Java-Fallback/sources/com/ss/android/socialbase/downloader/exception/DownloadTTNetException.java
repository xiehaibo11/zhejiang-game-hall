package com.ss.android.socialbase.downloader.exception;

public class DownloadTTNetException extends com.ss.android.socialbase.downloader.exception.BaseException {
    public DownloadTTNetException(int r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public DownloadTTNetException(int r1, java.lang.Throwable r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    public java.lang.String getRequestLog() {
            r1 = this;
            java.lang.String r0 = r1.getExtraInfo()
            return r0
    }

    public com.ss.android.socialbase.downloader.exception.DownloadTTNetException setRequestLog(java.lang.String r1) {
            r0 = this;
            r0.setExtraInfo(r1)
            return r0
    }
}
