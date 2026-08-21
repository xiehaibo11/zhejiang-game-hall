package com.kwad.sdk.core.videocache.a;

import com.kwad.sdk.core.videocache.ProxyCacheException;
import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;

public final class b implements com.kwad.sdk.core.videocache.a {
    private RandomAccessFile awX;
    private final a awj;
    public File file;

    public b(File file, a aVar) throws ProxyCacheException {
        File file2;
        try {
            if (aVar == null) {
                throw new NullPointerException();
            }
            this.awj = aVar;
            d.u(file.getParentFile());
            boolean zExists = file.exists();
            if (zExists) {
                file2 = file;
            } else {
                file2 = new File(file.getParentFile(), file.getName() + ".download");
            }
            this.file = file2;
            this.awX = new RandomAccessFile(this.file, zExists ? "r" : "rw");
        } catch (IOException e) {
            throw new ProxyCacheException("Error using file " + file + " as disc cache", e);
        }
    }

    private static boolean t(File file) {
        return file.getName().endsWith(".download");
    }

    @Override
    public final synchronized long DB() {
        try {
        } catch (IOException e) {
            throw new ProxyCacheException("Error reading length of file " + this.file, e);
        }
        return (int) this.awX.length();
    }

    @Override
    public final synchronized int a(byte[] bArr, long j, int i) {
        try {
            this.awX.seek(j);
        } catch (IOException e) {
            throw new ProxyCacheException(String.format("Error reading %d bytes with offset %d from file[%d bytes] to buffer[%d bytes]", Integer.valueOf(i), Long.valueOf(j), Long.valueOf(DB()), Integer.valueOf(bArr.length)), e);
        }
        return this.awX.read(bArr, 0, i);
    }

    @Override
    public final synchronized void close() {
        try {
            this.awX.close();
            this.awj.s(this.file);
        } catch (IOException e) {
            throw new ProxyCacheException("Error closing file " + this.file, e);
        }
    }

    @Override
    public final synchronized void complete() {
        if (isCompleted()) {
            return;
        }
        close();
        File file = new File(this.file.getParentFile(), this.file.getName().substring(0, this.file.getName().length() - 9));
        if (!this.file.renameTo(file)) {
            throw new ProxyCacheException("Error renaming file " + this.file + " to " + file + " for completion!");
        }
        this.file = file;
        try {
            this.awX = new RandomAccessFile(this.file, "r");
            this.awj.s(this.file);
        } catch (IOException e) {
            throw new ProxyCacheException("Error opening " + this.file + " as disc cache", e);
        }
    }

    @Override
    public final synchronized void d(byte[] bArr, int i) {
        try {
            if (isCompleted()) {
                throw new ProxyCacheException("Error append cache: cache file " + this.file + " is completed!");
            }
            this.awX.seek(DB());
            this.awX.write(bArr, 0, i);
        } catch (IOException e) {
            throw new ProxyCacheException(String.format("Error writing %d bytes to %s from buffer with size %d", Integer.valueOf(i), this.awX, 8192), e);
        }
    }

    @Override
    public final synchronized boolean isCompleted() {
        return !t(this.file);
    }
}
