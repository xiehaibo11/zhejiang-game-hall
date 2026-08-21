package cz.msebera.android.httpclient.impl.auth;

class HttpEntityDigester extends java.io.OutputStream {
    private boolean closed;
    private byte[] digest;
    private final java.security.MessageDigest digester;

    HttpEntityDigester(java.security.MessageDigest r1) {
            r0 = this;
            r0.<init>()
            r0.digester = r1
            java.security.MessageDigest r1 = r0.digester
            r1.reset()
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r1.closed = r0
            java.security.MessageDigest r0 = r1.digester
            byte[] r0 = r0.digest()
            r1.digest = r0
            super.close()
            return
    }

    public byte[] getDigest() {
            r1 = this;
            byte[] r0 = r1.digest
            return r0
    }

    @Override
    public void write(int r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Lb
            java.security.MessageDigest r0 = r1.digester
            byte r2 = (byte) r2
            r0.update(r2)
            return
        Lb:
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r0 = "Stream has been already closed"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void write(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto La
            java.security.MessageDigest r0 = r1.digester
            r0.update(r2, r3, r4)
            return
        La:
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r3 = "Stream has been already closed"
            r2.<init>(r3)
            throw r2
    }
}
