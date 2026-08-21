package org.bouncycastle.asn1.x9;

public class X9IntegerConverter {
    public X9IntegerConverter() {
            r0 = this;
            r0.<init>()
            return
    }

    public int getByteLength(org.bouncycastle.math.ec.ECCurve r1) {
            r0 = this;
            int r1 = r1.getFieldSize()
            int r1 = r1 + 7
            int r1 = r1 / 8
            return r1
    }

    public int getByteLength(org.bouncycastle.math.ec.ECFieldElement r1) {
            r0 = this;
            int r1 = r1.getFieldSize()
            int r1 = r1 + 7
            int r1 = r1 / 8
            return r1
    }

    public byte[] integerToBytes(java.math.BigInteger r4, int r5) {
            r3 = this;
            byte[] r4 = r4.toByteArray()
            int r0 = r4.length
            r1 = 0
            if (r5 >= r0) goto L10
            byte[] r0 = new byte[r5]
            int r2 = r4.length
            int r2 = r2 - r5
            java.lang.System.arraycopy(r4, r2, r0, r1, r5)
            return r0
        L10:
            int r0 = r4.length
            if (r5 <= r0) goto L1c
            byte[] r0 = new byte[r5]
            int r2 = r4.length
            int r5 = r5 - r2
            int r2 = r4.length
            java.lang.System.arraycopy(r4, r1, r0, r5, r2)
            return r0
        L1c:
            return r4
    }
}
