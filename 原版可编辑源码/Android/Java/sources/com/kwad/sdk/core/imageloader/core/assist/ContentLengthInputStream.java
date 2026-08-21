package com.kwad.sdk.core.imageloader.core.assist;

import java.io.IOException;
import java.io.InputStream;

public class ContentLengthInputStream extends InputStream {
    private final int length;
    private final InputStream stream;

    public ContentLengthInputStream(InputStream inputStream, int i) {
        this.stream = inputStream;
        this.length = i;
    }

    @Override
    public int available() {
        return this.length;
    }

    @Override
    public void close() throws IOException {
        this.stream.close();
    }

    @Override
    public void mark(int i) {
        this.stream.mark(i);
    }

    @Override
    public boolean markSupported() {
        return this.stream.markSupported();
    }

    @Override
    public int read() {
        return this.stream.read();
    }

    @Override
    public int read(byte[] bArr) {
        return this.stream.read(bArr);
    }

    @Override
    public int read(byte[] bArr, int i, int i2) {
        return this.stream.read(bArr, i, i2);
    }

    @Override
    public void reset() throws IOException {
        this.stream.reset();
    }

    @Override
    public long skip(long j) {
        return this.stream.skip(j);
    }
}
