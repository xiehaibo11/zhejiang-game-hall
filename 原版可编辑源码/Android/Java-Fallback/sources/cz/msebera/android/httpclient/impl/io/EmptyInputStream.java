package cz.msebera.android.httpclient.impl.io;

public final class EmptyInputStream extends java.io.InputStream {
    public static final cz.msebera.android.httpclient.impl.io.EmptyInputStream INSTANCE = null;

    static {
            cz.msebera.android.httpclient.impl.io.EmptyInputStream r0 = new cz.msebera.android.httpclient.impl.io.EmptyInputStream
            r0.<init>()
            cz.msebera.android.httpclient.impl.io.EmptyInputStream.INSTANCE = r0
            return
    }

    private EmptyInputStream() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public int available() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public void close() {
            r0 = this;
            return
    }

    @Override
    public void mark(int r1) {
            r0 = this;
            return
    }

    @Override
    public boolean markSupported() {
            r1 = this;
            r0 = 1
            return r0
    }

    @Override
    public int read() {
            r1 = this;
            r0 = -1
            return r0
    }

    @Override
    public int read(byte[] r1) {
            r0 = this;
            r1 = -1
            return r1
    }

    @Override
    public int read(byte[] r1, int r2, int r3) {
            r0 = this;
            r1 = -1
            return r1
    }

    @Override
    public void reset() {
            r0 = this;
            return
    }

    @Override
    public long skip(long r1) {
            r0 = this;
            r1 = 0
            return r1
    }
}
