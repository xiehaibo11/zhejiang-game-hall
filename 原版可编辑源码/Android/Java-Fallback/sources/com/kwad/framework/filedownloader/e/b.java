package com.kwad.framework.filedownloader.e;

public final class b implements com.kwad.framework.filedownloader.e.a {
    private final java.io.BufferedOutputStream aeD;
    private final java.io.RandomAccessFile aeE;
    private final java.io.FileDescriptor fd;

    public static class a implements com.kwad.framework.filedownloader.f.c.e {
        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final com.kwad.framework.filedownloader.e.a c(java.io.File r2) {
                r1 = this;
                com.kwad.framework.filedownloader.e.b r0 = new com.kwad.framework.filedownloader.e.b
                r0.<init>(r2)
                return r0
        }
    }

    b(java.io.File r3) {
            r2 = this;
            r2.<init>()
            java.io.RandomAccessFile r0 = new java.io.RandomAccessFile
            java.lang.String r1 = "rw"
            r0.<init>(r3, r1)
            r2.aeE = r0
            java.io.FileDescriptor r3 = r0.getFD()
            r2.fd = r3
            java.io.BufferedOutputStream r3 = new java.io.BufferedOutputStream
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            java.io.RandomAccessFile r1 = r2.aeE
            java.io.FileDescriptor r1 = r1.getFD()
            r0.<init>(r1)
            r3.<init>(r0)
            r2.aeD = r3
            return
    }

    @Override
    public final void close() {
            r1 = this;
            java.io.BufferedOutputStream r0 = r1.aeD
            r0.close()
            java.io.RandomAccessFile r0 = r1.aeE
            r0.close()
            return
    }

    @Override
    public final void seek(long r2) {
            r1 = this;
            java.io.RandomAccessFile r0 = r1.aeE
            r0.seek(r2)
            return
    }

    @Override
    public final void setLength(long r2) {
            r1 = this;
            java.io.RandomAccessFile r0 = r1.aeE
            r0.setLength(r2)
            return
    }

    @Override
    public final void vJ() {
            r1 = this;
            java.io.BufferedOutputStream r0 = r1.aeD
            r0.flush()
            java.io.FileDescriptor r0 = r1.fd
            r0.sync()
            return
    }

    @Override
    public final void write(byte[] r2, int r3, int r4) {
            r1 = this;
            java.io.BufferedOutputStream r3 = r1.aeD
            r0 = 0
            r3.write(r2, r0, r4)
            return
    }
}
