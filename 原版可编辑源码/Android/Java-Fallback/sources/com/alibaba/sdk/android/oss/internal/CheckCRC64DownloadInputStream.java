package com.alibaba.sdk.android.oss.internal;

public class CheckCRC64DownloadInputStream extends java.util.zip.CheckedInputStream {
    private long mClientCRC64;
    private java.lang.String mRequestId;
    private long mServerCRC64;
    private long mTotalBytesRead;
    private long mTotalLength;

    public CheckCRC64DownloadInputStream(java.io.InputStream r1, java.util.zip.Checksum r2, long r3, long r5, java.lang.String r7) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.mTotalLength = r3
            r0.mServerCRC64 = r5
            r0.mRequestId = r7
            return
    }

    private void checkCRC64(int r5) throws java.io.IOException {
            r4 = this;
            long r0 = r4.mTotalBytesRead
            long r2 = (long) r5
            long r0 = r0 + r2
            r4.mTotalBytesRead = r0
            long r2 = r4.mTotalLength
            int r5 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r5 < 0) goto L25
            java.util.zip.Checksum r5 = r4.getChecksum()
            long r0 = r5.getValue()
            r4.mClientCRC64 = r0
            java.lang.Long r5 = java.lang.Long.valueOf(r0)
            long r0 = r4.mServerCRC64
            java.lang.Long r0 = java.lang.Long.valueOf(r0)
            java.lang.String r1 = r4.mRequestId
            com.alibaba.sdk.android.oss.common.utils.OSSUtils.checkChecksum(r5, r0, r1)
        L25:
            return
    }

    public long getClientCRC64() {
            r2 = this;
            long r0 = r2.mClientCRC64
            return r0
    }

    @Override
    public int read() throws java.io.IOException {
            r1 = this;
            int r0 = super.read()
            r1.checkCRC64(r0)
            return r0
    }

    @Override
    public int read(byte[] r1, int r2, int r3) throws java.io.IOException {
            r0 = this;
            int r1 = super.read(r1, r2, r3)
            r0.checkCRC64(r1)
            return r1
    }
}
