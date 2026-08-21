package cz.msebera.android.httpclient.client.entity;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
class LazyDecompressingInputStream extends java.io.InputStream {
    private final cz.msebera.android.httpclient.client.entity.InputStreamFactory inputStreamFactory;
    private final java.io.InputStream wrappedStream;
    private java.io.InputStream wrapperStream;

    public LazyDecompressingInputStream(java.io.InputStream r1, cz.msebera.android.httpclient.client.entity.InputStreamFactory r2) {
            r0 = this;
            r0.<init>()
            r0.wrappedStream = r1
            r0.inputStreamFactory = r2
            return
    }

    private void initWrapper() throws java.io.IOException {
            r2 = this;
            java.io.InputStream r0 = r2.wrapperStream
            if (r0 != 0) goto Le
            cz.msebera.android.httpclient.client.entity.InputStreamFactory r0 = r2.inputStreamFactory
            java.io.InputStream r1 = r2.wrappedStream
            java.io.InputStream r0 = r0.create(r1)
            r2.wrapperStream = r0
        Le:
            return
    }

    @Override
    public int available() throws java.io.IOException {
            r1 = this;
            r1.initWrapper()
            java.io.InputStream r0 = r1.wrapperStream
            int r0 = r0.available()
            return r0
    }

    @Override
    public void close() throws java.io.IOException {
            r2 = this;
            java.io.InputStream r0 = r2.wrapperStream     // Catch: java.lang.Throwable -> Lf
            if (r0 == 0) goto L9
            java.io.InputStream r0 = r2.wrapperStream     // Catch: java.lang.Throwable -> Lf
            r0.close()     // Catch: java.lang.Throwable -> Lf
        L9:
            java.io.InputStream r0 = r2.wrappedStream
            r0.close()
            return
        Lf:
            r0 = move-exception
            java.io.InputStream r1 = r2.wrappedStream
            r1.close()
            throw r0
    }

    @Override
    public boolean markSupported() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public int read() throws java.io.IOException {
            r1 = this;
            r1.initWrapper()
            java.io.InputStream r0 = r1.wrapperStream
            int r0 = r0.read()
            return r0
    }

    @Override
    public int read(byte[] r2) throws java.io.IOException {
            r1 = this;
            r1.initWrapper()
            java.io.InputStream r0 = r1.wrapperStream
            int r2 = r0.read(r2)
            return r2
    }

    @Override
    public int read(byte[] r2, int r3, int r4) throws java.io.IOException {
            r1 = this;
            r1.initWrapper()
            java.io.InputStream r0 = r1.wrapperStream
            int r2 = r0.read(r2, r3, r4)
            return r2
    }

    @Override
    public long skip(long r2) throws java.io.IOException {
            r1 = this;
            r1.initWrapper()
            java.io.InputStream r0 = r1.wrapperStream
            long r2 = r0.skip(r2)
            return r2
    }
}
