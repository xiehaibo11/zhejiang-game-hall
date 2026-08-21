package cz.msebera.android.httpclient.impl.io;

import java.io.InputStream;

public final class EmptyInputStream extends InputStream {
    public static final EmptyInputStream INSTANCE = new EmptyInputStream();

    @Override
    public int available() {
        return 0;
    }

    @Override
    public void close() {
    }

    @Override
    public void mark(int i) {
    }

    @Override
    public boolean markSupported() {
        return true;
    }

    @Override
    public int read() {
        return -1;
    }

    @Override
    public int read(byte[] bArr) {
        return -1;
    }

    @Override
    public int read(byte[] bArr, int i, int i2) {
        return -1;
    }

    @Override
    public void reset() {
    }

    @Override
    public long skip(long j) {
        return 0L;
    }

    private EmptyInputStream() {
    }
}
