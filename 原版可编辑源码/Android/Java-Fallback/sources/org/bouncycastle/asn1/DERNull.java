package org.bouncycastle.asn1;

public class DERNull extends org.bouncycastle.asn1.ASN1Null {
    public static final org.bouncycastle.asn1.DERNull INSTANCE = null;
    byte[] zeroBytes;

    static {
            org.bouncycastle.asn1.DERNull r0 = new org.bouncycastle.asn1.DERNull
            r0.<init>()
            org.bouncycastle.asn1.DERNull.INSTANCE = r0
            return
    }

    public DERNull() {
            r1 = this;
            r1.<init>()
            r0 = 0
            byte[] r0 = new byte[r0]
            r1.zeroBytes = r0
            return
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r3) throws java.io.IOException {
            r2 = this;
            byte[] r0 = r2.zeroBytes
            r1 = 5
            r3.writeEncoded(r1, r0)
            return
    }
}
