package com.ss.android.socialbase.downloader.model;

public class RandomAccessOutputStream implements java.io.Closeable {
    private static final int MAX_FLUSH_BUFFER_SIZE = 131072;
    private static final int MIN_FLUSH_BUFFER_SIZE = 8192;
    private java.io.FileDescriptor fd;
    private java.io.BufferedOutputStream outputStream;
    private java.io.RandomAccessFile randomAccess;

    public RandomAccessOutputStream(java.io.File r3, int r4) throws com.ss.android.socialbase.downloader.exception.BaseException {
            r2 = this;
            r2.<init>()
            java.io.RandomAccessFile r0 = new java.io.RandomAccessFile     // Catch: java.io.IOException -> L45
            java.lang.String r1 = "rw"
            r0.<init>(r3, r1)     // Catch: java.io.IOException -> L45
            r2.randomAccess = r0     // Catch: java.io.IOException -> L45
            java.io.FileDescriptor r3 = r0.getFD()     // Catch: java.io.IOException -> L45
            r2.fd = r3     // Catch: java.io.IOException -> L45
            if (r4 <= 0) goto L32
            r3 = 131072(0x20000, float:1.83671E-40)
            r0 = 8192(0x2000, float:1.148E-41)
            if (r4 >= r0) goto L1c
            r4 = r0
            goto L1f
        L1c:
            if (r4 <= r3) goto L1f
            r4 = r3
        L1f:
            java.io.BufferedOutputStream r3 = new java.io.BufferedOutputStream     // Catch: java.io.IOException -> L45
            java.io.FileOutputStream r0 = new java.io.FileOutputStream     // Catch: java.io.IOException -> L45
            java.io.RandomAccessFile r1 = r2.randomAccess     // Catch: java.io.IOException -> L45
            java.io.FileDescriptor r1 = r1.getFD()     // Catch: java.io.IOException -> L45
            r0.<init>(r1)     // Catch: java.io.IOException -> L45
            r3.<init>(r0, r4)     // Catch: java.io.IOException -> L45
            r2.outputStream = r3     // Catch: java.io.IOException -> L45
            goto L44
        L32:
            java.io.BufferedOutputStream r3 = new java.io.BufferedOutputStream     // Catch: java.io.IOException -> L45
            java.io.FileOutputStream r4 = new java.io.FileOutputStream     // Catch: java.io.IOException -> L45
            java.io.RandomAccessFile r0 = r2.randomAccess     // Catch: java.io.IOException -> L45
            java.io.FileDescriptor r0 = r0.getFD()     // Catch: java.io.IOException -> L45
            r4.<init>(r0)     // Catch: java.io.IOException -> L45
            r3.<init>(r4)     // Catch: java.io.IOException -> L45
            r2.outputStream = r3     // Catch: java.io.IOException -> L45
        L44:
            return
        L45:
            r3 = move-exception
            com.ss.android.socialbase.downloader.exception.BaseException r4 = new com.ss.android.socialbase.downloader.exception.BaseException
            r0 = 1039(0x40f, float:1.456E-42)
            r4.<init>(r0, r3)
            throw r4
    }

    @Override
    public void close() throws java.io.IOException {
            r3 = this;
            r0 = 2
            java.io.Closeable[] r0 = new java.io.Closeable[r0]
            java.io.RandomAccessFile r1 = r3.randomAccess
            r2 = 0
            r0[r2] = r1
            java.io.BufferedOutputStream r1 = r3.outputStream
            r2 = 1
            r0[r2] = r1
            com.ss.android.socialbase.downloader.utils.DownloadUtils.safeClose(r0)
            return
    }

    public void flush() throws java.io.IOException {
            r1 = this;
            java.io.BufferedOutputStream r0 = r1.outputStream
            if (r0 == 0) goto L7
            r0.flush()
        L7:
            return
    }

    public void flushAndSync() throws java.io.IOException {
            r1 = this;
            java.io.BufferedOutputStream r0 = r1.outputStream
            if (r0 == 0) goto L7
            r0.flush()
        L7:
            java.io.FileDescriptor r0 = r1.fd
            if (r0 == 0) goto Le
            r0.sync()
        Le:
            return
    }

    public void seek(long r2) throws java.io.IOException {
            r1 = this;
            java.io.RandomAccessFile r0 = r1.randomAccess
            r0.seek(r2)
            return
    }

    public void setLength(long r2) throws java.io.IOException {
            r1 = this;
            java.io.RandomAccessFile r0 = r1.randomAccess
            r0.setLength(r2)
            return
    }

    public void sync() throws java.io.IOException {
            r1 = this;
            java.io.FileDescriptor r0 = r1.fd
            if (r0 == 0) goto L7
            r0.sync()
        L7:
            return
    }

    public void write(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            java.io.BufferedOutputStream r0 = r1.outputStream
            r0.write(r2, r3, r4)
            return
    }
}
