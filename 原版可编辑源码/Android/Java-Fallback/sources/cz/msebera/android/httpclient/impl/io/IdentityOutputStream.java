package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class IdentityOutputStream extends java.io.OutputStream {
    private boolean closed;
    private final cz.msebera.android.httpclient.io.SessionOutputBuffer out;

    public IdentityOutputStream(cz.msebera.android.httpclient.io.SessionOutputBuffer r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.closed = r0
            java.lang.String r0 = "Session output buffer"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.io.SessionOutputBuffer r2 = (cz.msebera.android.httpclient.io.SessionOutputBuffer) r2
            r1.out = r2
            return
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto Lc
            r0 = 1
            r1.closed = r0
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r1.out
            r0.flush()
        Lc:
            return
    }

    @Override
    public void flush() throws java.io.IOException {
            r1 = this;
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r1.out
            r0.flush()
            return
    }

    @Override
    public void write(int r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto La
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r1.out
            r0.write(r2)
            return
        La:
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r0 = "Attempted write to closed stream."
            r2.<init>(r0)
            throw r2
    }

    @Override
    public void write(byte[] r3) throws java.io.IOException {
            r2 = this;
            int r0 = r3.length
            r1 = 0
            r2.write(r3, r1, r0)
            return
    }

    @Override
    public void write(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 != 0) goto La
            cz.msebera.android.httpclient.io.SessionOutputBuffer r0 = r1.out
            r0.write(r2, r3, r4)
            return
        La:
            java.io.IOException r2 = new java.io.IOException
            java.lang.String r3 = "Attempted write to closed stream."
            r2.<init>(r3)
            throw r2
    }
}
