package com.kwad.sdk.core.imageloader.core.assist;

public class ContentLengthInputStream extends java.io.InputStream {
    private final int length;
    private final java.io.InputStream stream;

    public ContentLengthInputStream(java.io.InputStream r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.stream = r1
            r0.length = r2
            return
    }

    @Override
    public int available() {
            r1 = this;
            int r0 = r1.length
            return r0
    }

    @Override
    public void close() {
            r1 = this;
            java.io.InputStream r0 = r1.stream
            r0.close()
            return
    }

    @Override
    public void mark(int r2) {
            r1 = this;
            java.io.InputStream r0 = r1.stream
            r0.mark(r2)
            return
    }

    @Override
    public boolean markSupported() {
            r1 = this;
            java.io.InputStream r0 = r1.stream
            boolean r0 = r0.markSupported()
            return r0
    }

    @Override
    public int read() {
            r1 = this;
            java.io.InputStream r0 = r1.stream
            int r0 = r0.read()
            return r0
    }

    @Override
    public int read(byte[] r2) {
            r1 = this;
            java.io.InputStream r0 = r1.stream
            int r2 = r0.read(r2)
            return r2
    }

    @Override
    public int read(byte[] r2, int r3, int r4) {
            r1 = this;
            java.io.InputStream r0 = r1.stream
            int r2 = r0.read(r2, r3, r4)
            return r2
    }

    @Override
    public void reset() {
            r1 = this;
            java.io.InputStream r0 = r1.stream
            r0.reset()
            return
    }

    @Override
    public long skip(long r2) {
            r1 = this;
            java.io.InputStream r0 = r1.stream
            long r2 = r0.skip(r2)
            return r2
    }
}
