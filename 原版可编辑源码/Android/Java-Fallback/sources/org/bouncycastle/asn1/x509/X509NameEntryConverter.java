package org.bouncycastle.asn1.x509;

public abstract class X509NameEntryConverter {
    public X509NameEntryConverter() {
            r0 = this;
            r0.<init>()
            return
    }

    protected boolean canBePrintable(java.lang.String r1) {
            r0 = this;
            boolean r1 = org.bouncycastle.asn1.DERPrintableString.isPrintableString(r1)
            return r1
    }

    protected org.bouncycastle.asn1.DERObject convertHexEncoded(java.lang.String r7, int r8) throws java.io.IOException {
            r6 = this;
            java.lang.String r7 = org.bouncycastle.util.Strings.toLowerCase(r7)
            int r0 = r7.length()
            int r0 = r0 - r8
            int r0 = r0 / 2
            byte[] r1 = new byte[r0]
            r2 = 0
        Le:
            if (r2 == r0) goto L4c
            int r3 = r2 * 2
            int r3 = r3 + r8
            char r4 = r7.charAt(r3)
            int r3 = r3 + 1
            char r3 = r7.charAt(r3)
            r5 = 97
            if (r4 >= r5) goto L29
            int r4 = r4 + (-48)
            int r4 = r4 << 4
            byte r4 = (byte) r4
            r1[r2] = r4
            goto L32
        L29:
            int r4 = r4 + (-97)
            int r4 = r4 + 10
            int r4 = r4 << 4
            byte r4 = (byte) r4
            r1[r2] = r4
        L32:
            if (r3 >= r5) goto L3e
            r4 = r1[r2]
            int r3 = r3 + (-48)
            byte r3 = (byte) r3
            r3 = r3 | r4
            byte r3 = (byte) r3
            r1[r2] = r3
            goto L49
        L3e:
            r4 = r1[r2]
            int r3 = r3 + (-97)
            int r3 = r3 + 10
            byte r3 = (byte) r3
            r3 = r3 | r4
            byte r3 = (byte) r3
            r1[r2] = r3
        L49:
            int r2 = r2 + 1
            goto Le
        L4c:
            org.bouncycastle.asn1.ASN1InputStream r7 = new org.bouncycastle.asn1.ASN1InputStream
            r7.<init>(r1)
            org.bouncycastle.asn1.DERObject r7 = r7.readObject()
            return r7
    }

    public abstract org.bouncycastle.asn1.DERObject getConvertedValue(org.bouncycastle.asn1.DERObjectIdentifier r1, java.lang.String r2);
}
