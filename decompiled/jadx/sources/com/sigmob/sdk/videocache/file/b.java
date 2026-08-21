package com.sigmob.sdk.videocache.file;

import com.sigmob.sdk.videocache.p;
import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;

/* JADX INFO: loaded from: classes3.dex */
public class b implements com.sigmob.sdk.videocache.c {
    private static final String b = ".download";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public File f5216a;
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
            this.f5216a = file2;
            this.d = new RandomAccessFile(this.f5216a, zExists ? "r" : "rw");
        } catch (IOException e) {
            throw new p("Error using file " + file + " as disc cache", e);
        }
    }

    private boolean a(File file) {
        return file.getName().endsWith(b);
    }

    @Override // com.sigmob.sdk.videocache.c
    public synchronized int a(byte[] bArr, long j, int i) throws p {
        try {
            this.d.seek(j);
        } catch (IOException e) {
            throw new p(String.format("Error reading %d bytes with offset %d from file[%d bytes] to buffer[%d bytes]", Integer.valueOf(i), Long.valueOf(j), Long.valueOf(a()), Integer.valueOf(bArr.length)), e);
        }
        return this.d.read(bArr, 0, i);
    }

    @Override // com.sigmob.sdk.videocache.c
    public synchronized long a() throws p {
        try {
        } catch (IOException e) {
            throw new p("Error reading length of file " + this.f5216a, e);
        }
        return (int) this.d.length();
    }

    @Override // com.sigmob.sdk.videocache.c
    public synchronized void a(byte[] bArr, int i) throws p {
        try {
            if (d()) {
                throw new p("Error append cache: cache file " + this.f5216a + " is completed!");
            }
            this.d.seek(a());
            this.d.write(bArr, 0, i);
        } catch (IOException e) {
            throw new p(String.format("Error writing %d bytes to %s from buffer with size %d", Integer.valueOf(i), this.d, Integer.valueOf(bArr.length)), e);
        }
    }

    @Override // com.sigmob.sdk.videocache.c
    public synchronized void b() throws p {
        try {
            this.d.close();
            this.c.a(this.f5216a);
        } catch (IOException e) {
            throw new p("Error closing file " + this.f5216a, e);
        }
    }

    @Override // com.sigmob.sdk.videocache.c
    public synchronized void c() throws p {
        if (d()) {
            return;
        }
        b();
        File file = new File(this.f5216a.getParentFile(), this.f5216a.getName().substring(0, this.f5216a.getName().length() - 9));
        if (!this.f5216a.renameTo(file)) {
            throw new p("Error renaming file " + this.f5216a + " to " + file + " for completion!");
        }
        this.f5216a = file;
        try {
            this.d = new RandomAccessFile(this.f5216a, "r");
            this.c.a(this.f5216a);
        } catch (IOException e) {
            throw new p("Error opening " + this.f5216a + " as disc cache", e);
        }
    }

    @Override // com.sigmob.sdk.videocache.c
    public synchronized boolean d() {
        return !a(this.f5216a);
    }

    public File e() {
        return this.f5216a;
    }
}
