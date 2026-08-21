package org.bouncycastle.asn1;

public class BERNull extends org.bouncycastle.asn1.DERNull {
    public static final org.bouncycastle.asn1.BERNull INSTANCE = null;

    static {
            org.bouncycastle.asn1.BERNull r0 = new org.bouncycastle.asn1.BERNull
            r0.<init>()
            org.bouncycastle.asn1.BERNull.INSTANCE = r0
            return
    }

    public BERNull() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r2 instanceof org.bouncycastle.asn1.ASN1OutputStream
            if (r0 != 0) goto Ld
            boolean r0 = r2 instanceof org.bouncycastle.asn1.BEROutputStream
            if (r0 == 0) goto L9
            goto Ld
        L9:
            super.encode(r2)
            goto L11
        Ld:
            r0 = 5
            r2.write(r0)
        L11:
            return
    }
}
