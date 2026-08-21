package org.bouncycastle.asn1;

import java.io.IOException;
import java.io.OutputStream;

public class BEROctetStringGenerator extends BERGenerator {

    private class BufferedBEROctetStream extends OutputStream {
        private byte[] _buf;
        private int _off = 0;

        BufferedBEROctetStream(byte[] bArr) {
            this._buf = bArr;
        }

        @Override
        public void close() throws IOException {
            int i = this._off;
            if (i != 0) {
                byte[] bArr = new byte[i];
                System.arraycopy(this._buf, 0, bArr, 0, i);
                BEROctetStringGenerator.this._out.write(new DEROctetString(bArr).getEncoded());
            }
            BEROctetStringGenerator.this.writeBEREnd();
        }

        @Override
        public void write(int i) throws IOException {
            byte[] bArr = this._buf;
            int i2 = this._off;
            int i3 = i2 + 1;
            this._off = i3;
            bArr[i2] = (byte) i;
            if (i3 == bArr.length) {
                BEROctetStringGenerator.this._out.write(new DEROctetString(this._buf).getEncoded());
                this._off = 0;
            }
        }

        @Override
        public void write(byte[] bArr, int i, int i2) throws IOException {
            while (i2 > 0) {
                int iMin = Math.min(i2, this._buf.length - this._off);
                System.arraycopy(bArr, i, this._buf, this._off, iMin);
                int i3 = this._off + iMin;
                this._off = i3;
                if (i3 < this._buf.length) {
                    return;
                }
                BEROctetStringGenerator.this._out.write(new DEROctetString(this._buf).getEncoded());
                this._off = 0;
                i += iMin;
                i2 -= iMin;
            }
        }
    }

    public BEROctetStringGenerator(OutputStream outputStream) throws IOException {
        super(outputStream);
        writeBERHeader(36);
    }

    public BEROctetStringGenerator(OutputStream outputStream, int i, boolean z) throws IOException {
        super(outputStream, i, z);
        writeBERHeader(36);
    }

    public OutputStream getOctetOutputStream() {
        return getOctetOutputStream(new byte[1000]);
    }

    public OutputStream getOctetOutputStream(byte[] bArr) {
        return new BufferedBEROctetStream(bArr);
    }
}
