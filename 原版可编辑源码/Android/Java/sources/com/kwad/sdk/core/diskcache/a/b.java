package com.kwad.sdk.core.diskcache.a;

import java.io.ByteArrayOutputStream;
import java.io.Closeable;
import java.io.EOFException;
import java.io.IOException;
import java.io.InputStream;
import java.io.UnsupportedEncodingException;
import java.nio.charset.Charset;

public final class b implements Closeable {
    private final Charset anw;
    private byte[] buf;
    private int end;
    private final InputStream in;
    private int pos;

    private b(InputStream inputStream, int i, Charset charset) {
        if (inputStream == null || charset == null) {
            throw null;
        }
        if (!charset.equals(com.kwad.sdk.crash.utils.a.US_ASCII)) {
            throw new IllegalArgumentException("Unsupported encoding");
        }
        this.in = inputStream;
        this.anw = charset;
        this.buf = new byte[8192];
    }

    public b(InputStream inputStream, Charset charset) {
        this(inputStream, 8192, charset);
    }

    private void At() throws IOException {
        InputStream inputStream = this.in;
        byte[] bArr = this.buf;
        int i = inputStream.read(bArr, 0, bArr.length);
        if (i == -1) {
            throw new EOFException();
        }
        this.pos = 0;
        this.end = i;
    }

    @Override
    public final void close() {
        synchronized (this.in) {
            if (this.buf != null) {
                this.buf = null;
                com.kwad.sdk.crash.utils.b.closeQuietly(this.in);
            }
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x002d  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final String readLine() {
        int i;
        int i2;
        synchronized (this.in) {
            if (this.buf == null) {
                throw new IOException("LineReader is closed");
            }
            if (this.pos >= this.end) {
                At();
            }
            for (int i3 = this.pos; i3 != this.end; i3++) {
                if (this.buf[i3] == 10) {
                    if (i3 != this.pos) {
                        i2 = i3 - 1;
                        if (this.buf[i2] != 13) {
                            i2 = i3;
                        }
                    }
                    String str = new String(this.buf, this.pos, i2 - this.pos, this.anw.name());
                    this.pos = i3 + 1;
                    return str;
                }
            }
            ByteArrayOutputStream byteArrayOutputStream = new ByteArrayOutputStream((this.end - this.pos) + 80) {
                @Override
                public final String toString() {
                    try {
                        return new String(this.buf, 0, (this.count <= 0 || this.buf[this.count + (-1)] != 13) ? this.count : this.count - 1, b.this.anw.name());
                    } catch (UnsupportedEncodingException e) {
                        throw new AssertionError(e);
                    }
                }
            };
            loop1: while (true) {
                byteArrayOutputStream.write(this.buf, this.pos, this.end - this.pos);
                this.end = -1;
                At();
                i = this.pos;
                while (i != this.end) {
                    if (this.buf[i] == 10) {
                        break loop1;
                    }
                    i++;
                }
            }
            if (i != this.pos) {
                byteArrayOutputStream.write(this.buf, this.pos, i - this.pos);
            }
            this.pos = i + 1;
            return byteArrayOutputStream.toString();
        }
    }
}
