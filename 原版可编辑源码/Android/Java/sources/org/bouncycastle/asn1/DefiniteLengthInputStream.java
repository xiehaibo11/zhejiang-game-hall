package org.bouncycastle.asn1;

import java.io.EOFException;
import java.io.IOException;
import java.io.InputStream;
import org.bouncycastle.util.io.Streams;

class DefiniteLengthInputStream extends LimitedInputStream {
    private static final byte[] EMPTY_BYTES = new byte[0];
    private int _length;

    DefiniteLengthInputStream(InputStream inputStream, int i) {
        super(inputStream);
        if (i < 0) {
            throw new IllegalArgumentException("negative lengths not allowed");
        }
        this._length = i;
    }

    @Override
    public int read() throws IOException {
        if (this._length <= 0) {
            setParentEofDetect(true);
            return -1;
        }
        int i = this._in.read();
        if (i < 0) {
            throw new EOFException();
        }
        this._length--;
        return i;
    }

    @Override
    public int read(byte[] bArr, int i, int i2) throws IOException {
        int i3 = this._length;
        if (i3 <= 0) {
            setParentEofDetect(true);
            return -1;
        }
        int i4 = this._in.read(bArr, i, Math.min(i2, i3));
        if (i4 < 0) {
            throw new EOFException();
        }
        this._length -= i4;
        return i4;
    }

    byte[] toByteArray() throws IOException {
        byte[] bArr;
        int i = this._length;
        if (i > 0) {
            bArr = new byte[i];
            if (Streams.readFully(this._in, bArr) < this._length) {
                throw new EOFException();
            }
            this._length = 0;
        } else {
            bArr = EMPTY_BYTES;
        }
        setParentEofDetect(true);
        return bArr;
    }
}
