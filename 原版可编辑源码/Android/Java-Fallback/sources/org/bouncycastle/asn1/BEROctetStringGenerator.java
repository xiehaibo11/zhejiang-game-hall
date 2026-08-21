package org.bouncycastle.asn1;

public class BEROctetStringGenerator extends org.bouncycastle.asn1.BERGenerator {

    private class BufferedBEROctetStream extends java.io.OutputStream {
        private byte[] _buf;
        private int _off;
        final org.bouncycastle.asn1.BEROctetStringGenerator this$0;

        BufferedBEROctetStream(org.bouncycastle.asn1.BEROctetStringGenerator r1, byte[] r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0._buf = r2
                r1 = 0
                r0._off = r1
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r4 = this;
                int r0 = r4._off
                if (r0 == 0) goto L1c
                byte[] r1 = new byte[r0]
                byte[] r2 = r4._buf
                r3 = 0
                java.lang.System.arraycopy(r2, r3, r1, r3, r0)
                org.bouncycastle.asn1.BEROctetStringGenerator r0 = r4.this$0
                java.io.OutputStream r0 = r0._out
                org.bouncycastle.asn1.DEROctetString r2 = new org.bouncycastle.asn1.DEROctetString
                r2.<init>(r1)
                byte[] r1 = r2.getEncoded()
                r0.write(r1)
            L1c:
                org.bouncycastle.asn1.BEROctetStringGenerator r0 = r4.this$0
                r0.writeBEREnd()
                return
        }

        @Override
        public void write(int r4) throws java.io.IOException {
                r3 = this;
                byte[] r0 = r3._buf
                int r1 = r3._off
                int r2 = r1 + 1
                r3._off = r2
                byte r4 = (byte) r4
                r0[r1] = r4
                int r4 = r0.length
                if (r2 != r4) goto L23
                org.bouncycastle.asn1.BEROctetStringGenerator r4 = r3.this$0
                java.io.OutputStream r4 = r4._out
                org.bouncycastle.asn1.DEROctetString r0 = new org.bouncycastle.asn1.DEROctetString
                byte[] r1 = r3._buf
                r0.<init>(r1)
                byte[] r0 = r0.getEncoded()
                r4.write(r0)
                r4 = 0
                r3._off = r4
            L23:
                return
        }

        @Override
        public void write(byte[] r5, int r6, int r7) throws java.io.IOException {
                r4 = this;
            L0:
                if (r7 <= 0) goto L36
                byte[] r0 = r4._buf
                int r0 = r0.length
                int r1 = r4._off
                int r0 = r0 - r1
                int r0 = java.lang.Math.min(r7, r0)
                byte[] r1 = r4._buf
                int r2 = r4._off
                java.lang.System.arraycopy(r5, r6, r1, r2, r0)
                int r1 = r4._off
                int r1 = r1 + r0
                r4._off = r1
                byte[] r2 = r4._buf
                int r2 = r2.length
                if (r1 >= r2) goto L1e
                goto L36
            L1e:
                org.bouncycastle.asn1.BEROctetStringGenerator r1 = r4.this$0
                java.io.OutputStream r1 = r1._out
                org.bouncycastle.asn1.DEROctetString r2 = new org.bouncycastle.asn1.DEROctetString
                byte[] r3 = r4._buf
                r2.<init>(r3)
                byte[] r2 = r2.getEncoded()
                r1.write(r2)
                r1 = 0
                r4._off = r1
                int r6 = r6 + r0
                int r7 = r7 - r0
                goto L0
            L36:
                return
        }
    }

    public BEROctetStringGenerator(java.io.OutputStream r1) throws java.io.IOException {
            r0 = this;
            r0.<init>(r1)
            r1 = 36
            r0.writeBERHeader(r1)
            return
    }

    public BEROctetStringGenerator(java.io.OutputStream r1, int r2, boolean r3) throws java.io.IOException {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r1 = 36
            r0.writeBERHeader(r1)
            return
    }

    public java.io.OutputStream getOctetOutputStream() {
            r1 = this;
            r0 = 1000(0x3e8, float:1.401E-42)
            byte[] r0 = new byte[r0]
            java.io.OutputStream r0 = r1.getOctetOutputStream(r0)
            return r0
    }

    public java.io.OutputStream getOctetOutputStream(byte[] r2) {
            r1 = this;
            org.bouncycastle.asn1.BEROctetStringGenerator$BufferedBEROctetStream r0 = new org.bouncycastle.asn1.BEROctetStringGenerator$BufferedBEROctetStream
            r0.<init>(r1, r2)
            return r0
    }
}
