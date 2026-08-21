package com.ss.android.socialbase.downloader.exception;

public class DownloadOutOfSpaceException extends com.ss.android.socialbase.downloader.exception.BaseException {
    private final long avaliableSpaceBytes;
    private final long requiredSpaceBytes;

    public DownloadOutOfSpaceException(long r4, long r6) {
            r3 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = java.lang.String.valueOf(r6)
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = java.lang.String.valueOf(r4)
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = "space is not enough required space is : %s but available space is :%s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            r1 = 1006(0x3ee, float:1.41E-42)
            r3.<init>(r1, r0)
            r3.avaliableSpaceBytes = r4
            r3.requiredSpaceBytes = r6
            return
    }

    public long getAvaliableSpaceBytes() {
            r2 = this;
            long r0 = r2.avaliableSpaceBytes
            return r0
    }

    public long getRequiredSpaceBytes() {
            r2 = this;
            long r0 = r2.requiredSpaceBytes
            return r0
    }
}
