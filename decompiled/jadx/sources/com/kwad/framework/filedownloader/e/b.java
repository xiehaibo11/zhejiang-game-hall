package com.kwad.framework.filedownloader.e;

import com.kwad.framework.filedownloader.f.c;
import java.io.BufferedOutputStream;
import java.io.File;
import java.io.FileDescriptor;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.RandomAccessFile;

/* JADX INFO: loaded from: classes2.dex */
public final class b implements com.kwad.framework.filedownloader.e.a {
    private final BufferedOutputStream aeD;
    private final RandomAccessFile aeE;
    private final FileDescriptor fd;

    public static class a implements c.e {
        @Override // com.kwad.framework.filedownloader.f.c.e
        public final com.kwad.framework.filedownloader.e.a c(File file) {
            return new b(file);
        }
    }

    b(File file) {
        RandomAccessFile randomAccessFile = new RandomAccessFile(file, "rw");
        this.aeE = randomAccessFile;
        this.fd = randomAccessFile.getFD();
        this.aeD = new BufferedOutputStream(new FileOutputStream(this.aeE.getFD()));
    }

    @Override // com.kwad.framework.filedownloader.e.a, java.io.Closeable, java.lang.AutoCloseable
    public final void close() throws IOException {
        this.aeD.close();
        this.aeE.close();
    }

    @Override // com.kwad.framework.filedownloader.e.a
    public final void seek(long j) throws IOException {
        this.aeE.seek(j);
    }

    @Override // com.kwad.framework.filedownloader.e.a
    public final void setLength(long j) throws IOException {
        this.aeE.setLength(j);
    }

    @Override // com.kwad.framework.filedownloader.e.a
    public final void vJ() throws IOException {
        this.aeD.flush();
        this.fd.sync();
    }

    @Override // com.kwad.framework.filedownloader.e.a
    public final void write(byte[] bArr, int i, int i2) throws IOException {
        this.aeD.write(bArr, 0, i2);
    }
}
