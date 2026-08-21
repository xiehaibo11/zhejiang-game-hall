package com.tkay.expressad.exoplayer.k;

import android.util.Log;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;

/* JADX INFO: loaded from: classes3.dex */
public final class b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f6756a = "AtomicFile";
    private final File b;
    private final File c;

    public b(File file) {
        this.b = file;
        this.c = new File(file.getPath() + ".bak");
    }

    public final void a() {
        this.b.delete();
        this.c.delete();
    }

    public final OutputStream b() throws IOException {
        if (this.b.exists()) {
            if (!this.c.exists()) {
                if (!this.b.renameTo(this.c)) {
                    Log.w(f6756a, "Couldn't rename file " + this.b + " to backup file " + this.c);
                }
            } else {
                this.b.delete();
            }
        }
        try {
            return new a(this.b);
        } catch (FileNotFoundException e) {
            if (!this.b.getParentFile().mkdirs()) {
                throw new IOException("Couldn't create directory " + this.b, e);
            }
            try {
                return new a(this.b);
            } catch (FileNotFoundException e2) {
                throw new IOException("Couldn't create " + this.b, e2);
            }
        }
    }

    public final void a(OutputStream outputStream) throws IOException {
        outputStream.close();
        this.c.delete();
    }

    private void d() {
        if (this.c.exists()) {
            this.b.delete();
            this.c.renameTo(this.b);
        }
    }

    private static final class a extends OutputStream {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final FileOutputStream f6757a;
        private boolean b = false;

        public a(File file) {
            this.f6757a = new FileOutputStream(file);
        }

        @Override // java.io.OutputStream, java.io.Closeable, java.lang.AutoCloseable
        public final void close() throws IOException {
            if (this.b) {
                return;
            }
            this.b = true;
            flush();
            try {
                this.f6757a.getFD().sync();
            } catch (IOException e) {
                Log.w(b.f6756a, "Failed to sync file descriptor:", e);
            }
            this.f6757a.close();
        }

        @Override // java.io.OutputStream, java.io.Flushable
        public final void flush() {
            this.f6757a.flush();
        }

        @Override // java.io.OutputStream
        public final void write(int i) throws IOException {
            this.f6757a.write(i);
        }

        @Override // java.io.OutputStream
        public final void write(byte[] bArr) throws IOException {
            this.f6757a.write(bArr);
        }

        @Override // java.io.OutputStream
        public final void write(byte[] bArr, int i, int i2) throws IOException {
            this.f6757a.write(bArr, i, i2);
        }
    }

    public final InputStream c() {
        if (this.c.exists()) {
            this.b.delete();
            this.c.renameTo(this.b);
        }
        return new FileInputStream(this.b);
    }
}
