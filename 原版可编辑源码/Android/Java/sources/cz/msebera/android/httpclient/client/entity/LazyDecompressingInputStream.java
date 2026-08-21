package cz.msebera.android.httpclient.client.entity;

import cz.msebera.android.httpclient.annotation.NotThreadSafe;
import java.io.IOException;
import java.io.InputStream;

@NotThreadSafe
class LazyDecompressingInputStream extends InputStream {
    private final InputStreamFactory inputStreamFactory;
    private final InputStream wrappedStream;
    private InputStream wrapperStream;

    @Override
    public boolean markSupported() {
        return false;
    }

    public LazyDecompressingInputStream(InputStream inputStream, InputStreamFactory inputStreamFactory) {
        this.wrappedStream = inputStream;
        this.inputStreamFactory = inputStreamFactory;
    }

    private void initWrapper() throws IOException {
        if (this.wrapperStream == null) {
            this.wrapperStream = this.inputStreamFactory.create(this.wrappedStream);
        }
    }

    @Override
    public int read() throws IOException {
        initWrapper();
        return this.wrapperStream.read();
    }

    @Override
    public int read(byte[] bArr) throws IOException {
        initWrapper();
        return this.wrapperStream.read(bArr);
    }

    @Override
    public int read(byte[] bArr, int i, int i2) throws IOException {
        initWrapper();
        return this.wrapperStream.read(bArr, i, i2);
    }

    @Override
    public long skip(long j) throws IOException {
        initWrapper();
        return this.wrapperStream.skip(j);
    }

    @Override
    public int available() throws IOException {
        initWrapper();
        return this.wrapperStream.available();
    }

    @Override
    public void close() throws IOException {
        try {
            if (this.wrapperStream != null) {
                this.wrapperStream.close();
            }
        } finally {
            this.wrappedStream.close();
        }
    }
}
