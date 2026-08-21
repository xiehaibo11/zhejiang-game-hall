package com.ss.android.socialbase.downloader.exception;

public class DownloadFileExistException extends com.ss.android.socialbase.downloader.exception.BaseException {
    private java.lang.String existTargetFileName;

    public DownloadFileExistException(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.existTargetFileName = r1
            return
    }

    public java.lang.String getExistTargetFileName() {
            r1 = this;
            java.lang.String r0 = r1.existTargetFileName
            return r0
    }
}
