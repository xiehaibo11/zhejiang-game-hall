package com.ss.android.ttmd5;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.RandomAccessFile;

public class FileRandomAccess implements IRandomAccess {
    private final RandomAccessFile accessFile;

    public FileRandomAccess(File file) throws FileNotFoundException {
        this.accessFile = new RandomAccessFile(file, "r");
    }

    @Override
    public long length() throws IOException {
        return this.accessFile.length();
    }

    @Override
    public int read(byte[] bArr, int i, int i2) throws IOException {
        return this.accessFile.read(bArr, i, i2);
    }

    @Override
    public void seek(long j, long j2) throws IOException {
        this.accessFile.seek(j);
    }

    @Override
    public void close() throws IOException {
        this.accessFile.close();
    }
}
