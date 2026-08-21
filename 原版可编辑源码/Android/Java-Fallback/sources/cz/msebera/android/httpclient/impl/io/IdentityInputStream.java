package cz.msebera.android.httpclient.impl.io;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class IdentityInputStream extends java.io.InputStream {
    private boolean closed;
    private final cz.msebera.android.httpclient.io.SessionInputBuffer in;

    public IdentityInputStream(cz.msebera.android.httpclient.io.SessionInputBuffer r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.closed = r0
            java.lang.String r0 = "Session input buffer"
            java.lang.Object r2 = cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            cz.msebera.android.httpclient.io.SessionInputBuffer r2 = (cz.msebera.android.httpclient.io.SessionInputBuffer) r2
            r1.in = r2
            return
    }

    @Override
    public int available() throws java.io.IOException {
            r2 = this;
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r2.in
            boolean r1 = r0 instanceof cz.msebera.android.httpclient.io.BufferInfo
            if (r1 == 0) goto Ld
            cz.msebera.android.httpclient.io.BufferInfo r0 = (cz.msebera.android.httpclient.io.BufferInfo) r0
            int r0 = r0.length()
            return r0
        Ld:
            r0 = 0
            return r0
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            r0 = 1
            r1.closed = r0
            return
    }

    @Override
    public int read() throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 == 0) goto L6
            r0 = -1
            return r0
        L6:
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r1.in
            int r0 = r0.read()
            return r0
    }

    @Override
    public int read(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 == 0) goto L6
            r2 = -1
            return r2
        L6:
            cz.msebera.android.httpclient.io.SessionInputBuffer r0 = r1.in
            int r2 = r0.read(r2, r3, r4)
            return r2
    }
}
