package com.mbridge.msdk.foundation.download.resource.stream;

public class FileDownloadRandomAccessDownloadFile implements com.mbridge.msdk.foundation.download.resource.stream.DownloadFileOutputStream {
    private final java.io.BufferedOutputStream bufferedOutputStream;
    private final java.io.FileDescriptor fileDescriptor;
    private final java.io.RandomAccessFile randomAccess;

    public FileDownloadRandomAccessDownloadFile(java.io.File r3) throws java.io.IOException {
            r2 = this;
            r2.<init>()
            java.io.RandomAccessFile r0 = new java.io.RandomAccessFile
            java.lang.String r1 = "rw"
            r0.<init>(r3, r1)
            r2.randomAccess = r0
            java.io.FileDescriptor r3 = r0.getFD()
            r2.fileDescriptor = r3
            java.io.BufferedOutputStream r3 = new java.io.BufferedOutputStream
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            java.io.RandomAccessFile r1 = r2.randomAccess
            java.io.FileDescriptor r1 = r1.getFD()
            r0.<init>(r1)
            r3.<init>(r0)
            r2.bufferedOutputStream = r3
            return
    }

    public static com.mbridge.msdk.foundation.download.resource.stream.DownloadFileOutputStream create(java.io.File r1) throws java.io.IOException {
            com.mbridge.msdk.foundation.download.resource.stream.FileDownloadRandomAccessDownloadFile r0 = new com.mbridge.msdk.foundation.download.resource.stream.FileDownloadRandomAccessDownloadFile
            r0.<init>(r1)
            return r0
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            java.io.BufferedOutputStream r0 = r1.bufferedOutputStream
            r0.close()
            java.io.RandomAccessFile r0 = r1.randomAccess
            r0.close()
            return
    }

    @Override
    public void flushAndSync() throws java.io.IOException {
            r1 = this;
            java.io.BufferedOutputStream r0 = r1.bufferedOutputStream
            r0.flush()
            java.io.FileDescriptor r0 = r1.fileDescriptor
            r0.sync()
            return
    }

    @Override
    public void seek(long r2) throws java.io.IOException {
            r1 = this;
            java.io.RandomAccessFile r0 = r1.randomAccess
            r0.seek(r2)
            return
    }

    @Override
    public void setLength(long r2) throws java.io.IOException {
            r1 = this;
            java.io.RandomAccessFile r0 = r1.randomAccess
            r0.setLength(r2)
            return
    }

    @Override
    public void write(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            java.io.BufferedOutputStream r0 = r1.bufferedOutputStream
            r0.write(r2, r3, r4)
            return
    }
}
