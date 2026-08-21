package com.czhj.wire.okio;

import java.io.EOFException;
import java.io.IOException;
import java.io.InputStream;
import java.nio.charset.Charset;
import kotlin.UByte;

final class RealBufferedSource implements BufferedSource {
    boolean a;
    public final Buffer buffer = new Buffer();
    public final Source source;

    RealBufferedSource(Source source) {
        if (source == null) {
            throw new IllegalArgumentException("source == null");
        }
        this.source = source;
    }

    @Override
    public Buffer buffer() {
        return this.buffer;
    }

    @Override
    public void close() throws IOException {
        if (this.a) {
            return;
        }
        this.a = true;
        this.source.close();
        this.buffer.clear();
    }

    @Override
    public boolean exhausted() throws IOException {
        if (this.a) {
            throw new IllegalStateException("closed");
        }
        return this.buffer.exhausted() && this.source.read(this.buffer, 8192L) == -1;
    }

    @Override
    public long indexOf(byte b) throws IOException {
        return indexOf(b, 0L);
    }

    @Override
    public long indexOf(byte b, long j) throws IOException {
        if (this.a) {
            throw new IllegalStateException("closed");
        }
        while (true) {
            long jIndexOf = this.buffer.indexOf(b, j);
            if (jIndexOf != -1) {
                return jIndexOf;
            }
            long j2 = this.buffer.c;
            if (this.source.read(this.buffer, 8192L) == -1) {
                return -1L;
            }
            j = Math.max(j, j2);
        }
    }

    @Override
    public long indexOf(ByteString byteString) throws IOException {
        return indexOf(byteString, 0L);
    }

    @Override
    public long indexOf(ByteString byteString, long j) throws IOException {
        if (this.a) {
            throw new IllegalStateException("closed");
        }
        while (true) {
            long jIndexOf = this.buffer.indexOf(byteString, j);
            if (jIndexOf != -1) {
                return jIndexOf;
            }
            long j2 = this.buffer.c;
            if (this.source.read(this.buffer, 8192L) == -1) {
                return -1L;
            }
            j = Math.max(j, (j2 - ((long) byteString.size())) + 1);
        }
    }

    @Override
    public long indexOfElement(ByteString byteString) throws IOException {
        return indexOfElement(byteString, 0L);
    }

    @Override
    public long indexOfElement(ByteString byteString, long j) throws IOException {
        if (this.a) {
            throw new IllegalStateException("closed");
        }
        while (true) {
            long jIndexOfElement = this.buffer.indexOfElement(byteString, j);
            if (jIndexOfElement != -1) {
                return jIndexOfElement;
            }
            long j2 = this.buffer.c;
            if (this.source.read(this.buffer, 8192L) == -1) {
                return -1L;
            }
            j = Math.max(j, j2);
        }
    }

    @Override
    public InputStream inputStream() {
        return new InputStream() {
            @Override
            public int available() throws IOException {
                if (RealBufferedSource.this.a) {
                    throw new IOException("closed");
                }
                return (int) Math.min(RealBufferedSource.this.buffer.c, 2147483647L);
            }

            @Override
            public void close() throws IOException {
                RealBufferedSource.this.close();
            }

            @Override
            public int read() throws IOException {
                if (RealBufferedSource.this.a) {
                    throw new IOException("closed");
                }
                if (RealBufferedSource.this.buffer.c == 0 && RealBufferedSource.this.source.read(RealBufferedSource.this.buffer, 8192L) == -1) {
                    return -1;
                }
                return RealBufferedSource.this.buffer.readByte() & UByte.MAX_VALUE;
            }

            @Override
            public int read(byte[] bArr, int i, int i2) throws IOException {
                if (RealBufferedSource.this.a) {
                    throw new IOException("closed");
                }
                Util.checkOffsetAndCount(bArr.length, i, i2);
                if (RealBufferedSource.this.buffer.c == 0 && RealBufferedSource.this.source.read(RealBufferedSource.this.buffer, 8192L) == -1) {
                    return -1;
                }
                return RealBufferedSource.this.buffer.read(bArr, i, i2);
            }

            public String toString() {
                return RealBufferedSource.this + ".inputStream()";
            }
        };
    }

    @Override
    public int read(byte[] bArr) throws IOException {
        return read(bArr, 0, bArr.length);
    }

    @Override
    public int read(byte[] bArr, int i, int i2) throws IOException {
        long j = i2;
        Util.checkOffsetAndCount(bArr.length, i, j);
        if (this.buffer.c == 0 && this.source.read(this.buffer, 8192L) == -1) {
            return -1;
        }
        return this.buffer.read(bArr, i, (int) Math.min(j, this.buffer.c));
    }

    @Override
    public long read(Buffer buffer, long j) throws IOException {
        if (buffer == null) {
            throw new IllegalArgumentException("sink == null");
        }
        if (j < 0) {
            throw new IllegalArgumentException("byteCount < 0: " + j);
        }
        if (this.a) {
            throw new IllegalStateException("closed");
        }
        if (this.buffer.c == 0 && this.source.read(this.buffer, 8192L) == -1) {
            return -1L;
        }
        return this.buffer.read(buffer, Math.min(j, this.buffer.c));
    }

    @Override
    public long readAll(Sink sink) throws IOException {
        if (sink == null) {
            throw new IllegalArgumentException("sink == null");
        }
        long j = 0;
        while (this.source.read(this.buffer, 8192L) != -1) {
            long jCompleteSegmentByteCount = this.buffer.completeSegmentByteCount();
            if (jCompleteSegmentByteCount > 0) {
                j += jCompleteSegmentByteCount;
                sink.write(this.buffer, jCompleteSegmentByteCount);
            }
        }
        if (this.buffer.size() <= 0) {
            return j;
        }
        long size = j + this.buffer.size();
        Buffer buffer = this.buffer;
        sink.write(buffer, buffer.size());
        return size;
    }

    @Override
    public byte readByte() throws IOException {
        require(1L);
        return this.buffer.readByte();
    }

    @Override
    public byte[] readByteArray() throws IOException {
        this.buffer.writeAll(this.source);
        return this.buffer.readByteArray();
    }

    @Override
    public byte[] readByteArray(long j) throws IOException {
        require(j);
        return this.buffer.readByteArray(j);
    }

    @Override
    public ByteString readByteString() throws IOException {
        this.buffer.writeAll(this.source);
        return this.buffer.readByteString();
    }

    @Override
    public ByteString readByteString(long j) throws IOException {
        require(j);
        return this.buffer.readByteString(j);
    }

    @Override
    public long readDecimalLong() throws IOException {
        byte b;
        require(1L);
        int i = 0;
        while (true) {
            int i2 = i + 1;
            if (!request(i2)) {
                break;
            }
            b = this.buffer.getByte(i);
            if ((b < 48 || b > 57) && !(i == 0 && b == 45)) {
                break;
            }
            i = i2;
        }
        if (i == 0) {
            throw new NumberFormatException(String.format("Expected leading [0-9] or '-' character but was %#x", Byte.valueOf(b)));
        }
        return this.buffer.readDecimalLong();
    }

    @Override
    public void readFully(Buffer buffer, long j) throws IOException {
        try {
            require(j);
            this.buffer.readFully(buffer, j);
        } catch (EOFException e) {
            buffer.writeAll(this.buffer);
            throw e;
        }
    }

    @Override
    public void readFully(byte[] bArr) throws IOException {
        try {
            require(bArr.length);
            this.buffer.readFully(bArr);
        } catch (Throwable th) {
            int i = 0;
            while (this.buffer.c > 0) {
                Buffer buffer = this.buffer;
                int i2 = buffer.read(bArr, i, (int) buffer.c);
                if (i2 == -1) {
                    throw new AssertionError();
                }
                i += i2;
            }
            throw th;
        }
    }

    @Override
    public long readHexadecimalUnsignedLong() throws IOException {
        byte b;
        require(1L);
        int i = 0;
        while (true) {
            int i2 = i + 1;
            if (!request(i2)) {
                break;
            }
            b = this.buffer.getByte(i);
            if ((b < 48 || b > 57) && ((b < 97 || b > 102) && (b < 65 || b > 70))) {
                break;
            }
            i = i2;
        }
        if (i == 0) {
            throw new NumberFormatException(String.format("Expected leading [0-9a-fA-F] character but was %#x", Byte.valueOf(b)));
        }
        return this.buffer.readHexadecimalUnsignedLong();
    }

    @Override
    public int readInt() throws IOException {
        require(4L);
        return this.buffer.readInt();
    }

    @Override
    public int readIntLe() throws IOException {
        require(4L);
        return this.buffer.readIntLe();
    }

    @Override
    public long readLong() throws IOException {
        require(8L);
        return this.buffer.readLong();
    }

    @Override
    public long readLongLe() throws IOException {
        require(8L);
        return this.buffer.readLongLe();
    }

    @Override
    public short readShort() throws IOException {
        require(2L);
        return this.buffer.readShort();
    }

    @Override
    public short readShortLe() throws IOException {
        require(2L);
        return this.buffer.readShortLe();
    }

    @Override
    public String readString(long j, Charset charset) throws IOException {
        require(j);
        if (charset != null) {
            return this.buffer.readString(j, charset);
        }
        throw new IllegalArgumentException("charset == null");
    }

    @Override
    public String readString(Charset charset) throws IOException {
        if (charset == null) {
            throw new IllegalArgumentException("charset == null");
        }
        this.buffer.writeAll(this.source);
        return this.buffer.readString(charset);
    }

    @Override
    public String readUtf8() throws IOException {
        this.buffer.writeAll(this.source);
        return this.buffer.readUtf8();
    }

    @Override
    public String readUtf8(long j) throws IOException {
        require(j);
        return this.buffer.readUtf8(j);
    }

    @Override
    public int readUtf8CodePoint() throws IOException {
        long j;
        require(1L);
        byte b = this.buffer.getByte(0L);
        if ((b & 224) == 192) {
            j = 2;
        } else {
            if ((b & 240) != 224) {
                if ((b & 248) == 240) {
                    j = 4;
                }
                return this.buffer.readUtf8CodePoint();
            }
            j = 3;
        }
        require(j);
        return this.buffer.readUtf8CodePoint();
    }

    @Override
    public String readUtf8Line() throws IOException {
        long jIndexOf = indexOf((byte) 10);
        if (jIndexOf != -1) {
            return this.buffer.a(jIndexOf);
        }
        if (this.buffer.c != 0) {
            return readUtf8(this.buffer.c);
        }
        return null;
    }

    @Override
    public String readUtf8LineStrict() throws IOException {
        long jIndexOf = indexOf((byte) 10);
        if (jIndexOf != -1) {
            return this.buffer.a(jIndexOf);
        }
        Buffer buffer = new Buffer();
        Buffer buffer2 = this.buffer;
        buffer2.copyTo(buffer, 0L, Math.min(32L, buffer2.size()));
        throw new EOFException("\\n not found: size=" + this.buffer.size() + " content=" + buffer.readByteString().hex() + "…");
    }

    @Override
    public boolean request(long j) throws IOException {
        if (j < 0) {
            throw new IllegalArgumentException("byteCount < 0: " + j);
        }
        if (this.a) {
            throw new IllegalStateException("closed");
        }
        while (this.buffer.c < j) {
            if (this.source.read(this.buffer, 8192L) == -1) {
                return false;
            }
        }
        return true;
    }

    @Override
    public void require(long j) throws IOException {
        if (!request(j)) {
            throw new EOFException();
        }
    }

    @Override
    public int select(Options options) throws IOException {
        if (this.a) {
            throw new IllegalStateException("closed");
        }
        do {
            int iA = this.buffer.a(options);
            if (iA == -1) {
                return -1;
            }
            long size = options.a[iA].size();
            if (size <= this.buffer.c) {
                this.buffer.skip(size);
                return iA;
            }
        } while (this.source.read(this.buffer, 8192L) != -1);
        return -1;
    }

    @Override
    public void skip(long j) throws IOException {
        if (this.a) {
            throw new IllegalStateException("closed");
        }
        while (j > 0) {
            if (this.buffer.c == 0 && this.source.read(this.buffer, 8192L) == -1) {
                throw new EOFException();
            }
            long jMin = Math.min(j, this.buffer.size());
            this.buffer.skip(jMin);
            j -= jMin;
        }
    }

    @Override
    public Timeout timeout() {
        return this.source.timeout();
    }

    public String toString() {
        return "buffer(" + this.source + ")";
    }
}
