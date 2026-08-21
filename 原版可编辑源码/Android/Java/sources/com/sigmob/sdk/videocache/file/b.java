package com.sigmob.sdk.videocache.file;

import com.sigmob.sdk.videocache.p;
import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;

public class b implements com.sigmob.sdk.videocache.c {
    private static final String b = ".download";
    public File a;
    private final a c;
    private RandomAccessFile d;

    public b(File file) throws p {
        this(file, new i());
    }

    public b(File file, a aVar) throws p {
        File file2;
        try {
            if (aVar == null) {
                throw new NullPointerException();
            }
            this.c = aVar;
            d.a(file.getParentFile());
            boolean zExists = file.exists();
            if (zExists) {
                file2 = file;
            } else {
                file2 = new File(file.getParentFile(), file.getName() + b);
            }
            this.a = file2;
            this.d = new RandomAccessFile(this.a, zExists ? "r" : "rw");
        } catch (IOException e) {
            throw new p("Error using file " + file + " as disc cache", e);
        }
    }

    private boolean a(File file) {
        return file.getName().endsWith(b);
    }

    @Override
    public synchronized int a(byte[] bArr, long j, int i) throws p {
        try {
            this.d.seek(j);
        } catch (IOException e) {
            throw new p(String.format("Error reading %d bytes with offset %d from file[%d bytes] to buffer[%d bytes]", Integer.valueOf(i), Long.valueOf(j), Long.valueOf(a()), Integer.valueOf(bArr.length)), e);
        }
        return this.d.read(bArr, 0, i);
    }

    @Override
    public synchronized long a() throws p {
        try {
        } catch (IOException e) {
            throw new p("Error reading length of file " + this.a, e);
        }
        return (int) this.d.length();
    }

    @Override
    public synchronized void a(byte[] bArr, int i) throws p {
        try {
            if (d()) {
                throw new p("Error append cache: cache file " + this.a + " is completed!");
            }
            this.d.seek(a());
            this.d.write(bArr, 0, i);
        } catch (IOException e) {
            throw new p(String.format("Error writing %d bytes to %s from buffer with size %d", Integer.valueOf(i), this.d, Integer.valueOf(bArr.length)), e);
        }
    }

    @Override
    public synchronized void b() throws p {
        try {
            this.d.close();
            this.c.a(this.a);
        } catch (IOException e) {
            throw new p("Error closing file " + this.a, e);
        }
    }

    @Override
    public synchronized void c() throws p {
        if (d()) {
            return;
        }
        b();
        File file = new File(this.a.getParentFile(), this.a.getName().substring(0, this.a.getName().length() - 9));
        if (!this.a.renameTo(file)) {
            throw new p("Error renaming file " + this.a + " to " + file + " for completion!");
        }
        this.a = file;
        try {
            this.d = new RandomAccessFile(this.a, "r");
            this.c.a(this.a);
        } catch (IOException e) {
            throw new p("Error opening " + this.a + " as disc cache", e);
        }
    }

    @Override
    public synchronized boolean d() {
        return !a(this.a);
    }

    public File e() {
        return this.a;
    }
}
