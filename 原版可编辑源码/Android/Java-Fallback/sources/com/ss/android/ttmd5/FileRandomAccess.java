package com.ss.android.ttmd5;

public class FileRandomAccess implements com.ss.android.ttmd5.IRandomAccess {
    private final java.io.RandomAccessFile accessFile;

    public FileRandomAccess(java.io.File r3) throws java.io.FileNotFoundException {
            r2 = this;
            r2.<init>()
            java.io.RandomAccessFile r0 = new java.io.RandomAccessFile
            java.lang.String r1 = "r"
            r0.<init>(r3, r1)
            r2.accessFile = r0
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            java.io.RandomAccessFile r0 = r1.accessFile
            r0.close()
            return
    }

    @Override
    public long length() throws java.io.IOException {
            r2 = this;
            java.io.RandomAccessFile r0 = r2.accessFile
            long r0 = r0.length()
            return r0
    }

    @Override
    public int read(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            java.io.RandomAccessFile r0 = r1.accessFile
            int r2 = r0.read(r2, r3, r4)
            return r2
    }

    @Override
    public void seek(long r1, long r3) throws java.io.IOException {
            r0 = this;
            java.io.RandomAccessFile r3 = r0.accessFile
            r3.seek(r1)
            return
    }
}
