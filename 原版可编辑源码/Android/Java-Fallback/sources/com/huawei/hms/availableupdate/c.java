package com.huawei.hms.availableupdate;

public class c extends java.io.OutputStream {
    public java.io.RandomAccessFile a;

    public c(java.io.File r5, int r6) {
            r4 = this;
            java.lang.String r0 = "create  file stream failed"
            java.lang.String r1 = "RandomFileOutputStream"
            r4.<init>()
            java.io.RandomAccessFile r2 = new java.io.RandomAccessFile     // Catch: java.io.IOException -> L15 java.io.FileNotFoundException -> L1e
            java.lang.String r3 = "rwd"
            r2.<init>(r5, r3)     // Catch: java.io.IOException -> L15 java.io.FileNotFoundException -> L1e
            r4.a = r2     // Catch: java.io.IOException -> L15 java.io.FileNotFoundException -> L1e
            long r5 = (long) r6     // Catch: java.io.IOException -> L15 java.io.FileNotFoundException -> L1e
            r2.setLength(r5)     // Catch: java.io.IOException -> L15 java.io.FileNotFoundException -> L1e
            goto L21
        L15:
            java.io.RandomAccessFile r5 = r4.a
            com.huawei.hms.utils.IOUtils.closeQuietly(r5)
            com.huawei.hms.support.log.HMSLog.e(r1, r0)
            goto L21
        L1e:
            com.huawei.hms.support.log.HMSLog.e(r1, r0)
        L21:
            return
    }

    public void a(long r2) throws java.io.IOException {
            r1 = this;
            java.io.RandomAccessFile r0 = r1.a
            if (r0 == 0) goto L7
            r0.seek(r2)
        L7:
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            java.io.RandomAccessFile r0 = r1.a
            if (r0 == 0) goto L7
            r0.close()
        L7:
            return
    }

    @Override
    public void write(int r4) throws java.io.IOException {
            r3 = this;
            r0 = 1
            byte[] r1 = new byte[r0]
            byte r4 = (byte) r4
            r2 = 0
            r1[r2] = r4
            r3.write(r1, r2, r0)
            return
    }

    @Override
    public void write(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            java.io.RandomAccessFile r0 = r1.a
            if (r0 == 0) goto L7
            r0.write(r2, r3, r4)
        L7:
            return
    }
}
