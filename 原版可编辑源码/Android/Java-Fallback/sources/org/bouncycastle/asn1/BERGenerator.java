package org.bouncycastle.asn1;

public class BERGenerator extends org.bouncycastle.asn1.ASN1Generator {
    private boolean _isExplicit;
    private int _tagNo;
    private boolean _tagged;

    protected BERGenerator(java.io.OutputStream r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0._tagged = r1
            return
    }

    public BERGenerator(java.io.OutputStream r1, int r2, boolean r3) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0._tagged = r1
            r1 = 1
            r0._tagged = r1
            r0._isExplicit = r3
            r0._tagNo = r2
            return
    }

    private void writeHdr(int r2) throws java.io.IOException {
            r1 = this;
            java.io.OutputStream r0 = r1._out
            r0.write(r2)
            java.io.OutputStream r2 = r1._out
            r0 = 128(0x80, float:1.8E-43)
            r2.write(r0)
            return
    }

    @Override
    public java.io.OutputStream getRawOutputStream() {
            r1 = this;
            java.io.OutputStream r0 = r1._out
            return r0
    }

    protected void writeBERBody(java.io.InputStream r3) throws java.io.IOException {
            r2 = this;
        L0:
            int r0 = r3.read()
            if (r0 < 0) goto Lc
            java.io.OutputStream r1 = r2._out
            r1.write(r0)
            goto L0
        Lc:
            return
    }

    protected void writeBEREnd() throws java.io.IOException {
            r2 = this;
            java.io.OutputStream r0 = r2._out
            r1 = 0
            r0.write(r1)
            java.io.OutputStream r0 = r2._out
            r0.write(r1)
            boolean r0 = r2._tagged
            if (r0 == 0) goto L1d
            boolean r0 = r2._isExplicit
            if (r0 == 0) goto L1d
            java.io.OutputStream r0 = r2._out
            r0.write(r1)
            java.io.OutputStream r0 = r2._out
            r0.write(r1)
        L1d:
            return
    }

    protected void writeBERHeader(int r3) throws java.io.IOException {
            r2 = this;
            boolean r0 = r2._tagged
            if (r0 == 0) goto L1d
            int r0 = r2._tagNo
            r0 = r0 | 128(0x80, float:1.8E-43)
            boolean r1 = r2._isExplicit
            if (r1 == 0) goto L12
            r0 = r0 | 32
            r2.writeHdr(r0)
            goto L1d
        L12:
            r3 = r3 & 32
            if (r3 == 0) goto L19
            r3 = r0 | 32
            goto L1d
        L19:
            r2.writeHdr(r0)
            goto L20
        L1d:
            r2.writeHdr(r3)
        L20:
            return
    }
}
