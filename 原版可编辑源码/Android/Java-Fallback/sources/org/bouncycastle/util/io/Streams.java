package org.bouncycastle.util.io;

public final class Streams {
    private static int BUFFER_SIZE = 512;

    static {
            return
    }

    public Streams() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void pipeAll(java.io.InputStream r4, java.io.OutputStream r5) throws java.io.IOException {
            int r0 = org.bouncycastle.util.io.Streams.BUFFER_SIZE
            byte[] r1 = new byte[r0]
        L4:
            r2 = 0
            int r3 = r4.read(r1, r2, r0)
            if (r3 < 0) goto Lf
            r5.write(r1, r2, r3)
            goto L4
        Lf:
            return
    }

    public static byte[] readAll(java.io.InputStream r1) throws java.io.IOException {
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            pipeAll(r1, r0)
            byte[] r1 = r0.toByteArray()
            return r1
    }

    public static int readFully(java.io.InputStream r2, byte[] r3) throws java.io.IOException {
            int r0 = r3.length
            r1 = 0
            int r2 = readFully(r2, r3, r1, r0)
            return r2
    }

    public static int readFully(java.io.InputStream r3, byte[] r4, int r5, int r6) throws java.io.IOException {
            r0 = 0
        L1:
            if (r0 >= r6) goto L10
            int r1 = r5 + r0
            int r2 = r6 - r0
            int r1 = r3.read(r4, r1, r2)
            if (r1 >= 0) goto Le
            goto L10
        Le:
            int r0 = r0 + r1
            goto L1
        L10:
            return r0
    }
}
