package org.bouncycastle.asn1;

public class DERApplicationSpecific extends org.bouncycastle.asn1.ASN1Object {
    private final boolean isConstructed;
    private final byte[] octets;
    private final int tag;

    public DERApplicationSpecific(int r2, org.bouncycastle.asn1.DEREncodable r3) throws java.io.IOException {
            r1 = this;
            r0 = 1
            r1.<init>(r0, r2, r3)
            return
    }

    public DERApplicationSpecific(int r2, byte[] r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r0, r2, r3)
            return
    }

    public DERApplicationSpecific(boolean r3, int r4, org.bouncycastle.asn1.DEREncodable r5) throws java.io.IOException {
            r2 = this;
            r2.<init>()
            r0 = 31
            if (r4 >= r0) goto L27
            org.bouncycastle.asn1.DERObject r5 = r5.getDERObject()
            byte[] r5 = r5.getDEREncoded()
            r2.isConstructed = r3
            r2.tag = r4
            if (r3 == 0) goto L18
            r2.octets = r5
            goto L26
        L18:
            int r3 = r2.getLengthOfLength(r5)
            int r4 = r5.length
            int r4 = r4 - r3
            byte[] r0 = new byte[r4]
            r1 = 0
            java.lang.System.arraycopy(r5, r3, r0, r1, r4)
            r2.octets = r0
        L26:
            return
        L27:
            java.io.IOException r3 = new java.io.IOException
            java.lang.String r4 = "unsupported tag number"
            r3.<init>(r4)
            throw r3
    }

    DERApplicationSpecific(boolean r1, int r2, byte[] r3) {
            r0 = this;
            r0.<init>()
            r0.isConstructed = r1
            r0.tag = r2
            r0.octets = r3
            return
    }

    private int getLengthOfLength(byte[] r3) {
            r2 = this;
            r0 = 2
        L1:
            int r1 = r0 + (-1)
            r1 = r3[r1]
            r1 = r1 & 128(0x80, float:1.8E-43)
            if (r1 == 0) goto Lc
            int r0 = r0 + 1
            goto L1
        Lc:
            return r0
    }

    @Override
    boolean asn1Equals(org.bouncycastle.asn1.DERObject r4) {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.asn1.DERApplicationSpecific
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.asn1.DERApplicationSpecific r4 = (org.bouncycastle.asn1.DERApplicationSpecific) r4
            boolean r0 = r3.isConstructed
            boolean r2 = r4.isConstructed
            if (r0 != r2) goto L1f
            int r0 = r3.tag
            int r2 = r4.tag
            if (r0 != r2) goto L1f
            byte[] r0 = r3.octets
            byte[] r4 = r4.octets
            boolean r4 = org.bouncycastle.util.Arrays.areEqual(r0, r4)
            if (r4 == 0) goto L1f
            r1 = 1
        L1f:
            return r1
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r4) throws java.io.IOException {
            r3 = this;
            boolean r0 = r3.isConstructed
            if (r0 == 0) goto L7
            r0 = 96
            goto L9
        L7:
            r0 = 64
        L9:
            int r1 = r3.tag
            r2 = 31
            if (r1 >= r2) goto L16
            r0 = r0 | r1
            byte[] r1 = r3.octets
            r4.writeEncoded(r0, r1)
            goto L1c
        L16:
            r0 = r0 | r2
            byte[] r2 = r3.octets
            r4.writeEncodedHigh(r0, r1, r2)
        L1c:
            return
    }

    public int getApplicationTag() {
            r1 = this;
            int r0 = r1.tag
            return r0
    }

    public byte[] getContents() {
            r1 = this;
            byte[] r0 = r1.octets
            return r0
    }

    public org.bouncycastle.asn1.DERObject getObject() throws java.io.IOException {
            r2 = this;
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            byte[] r1 = r2.getContents()
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r0 = r0.readObject()
            return r0
    }

    public org.bouncycastle.asn1.DERObject getObject(int r3) throws java.io.IOException {
            r2 = this;
            int r0 = r2.tag
            r1 = 31
            if (r0 >= r1) goto L18
            byte[] r0 = r2.getEncoded()
            r1 = 0
            byte r3 = (byte) r3
            r0[r1] = r3
            org.bouncycastle.asn1.ASN1InputStream r3 = new org.bouncycastle.asn1.ASN1InputStream
            r3.<init>(r0)
            org.bouncycastle.asn1.DERObject r3 = r3.readObject()
            return r3
        L18:
            java.io.IOException r3 = new java.io.IOException
            java.lang.String r0 = "unsupported tag number"
            r3.<init>(r0)
            throw r3
    }

    @Override
    public int hashCode() {
            r2 = this;
            boolean r0 = r2.isConstructed
            int r1 = r2.tag
            r0 = r0 ^ r1
            byte[] r1 = r2.octets
            int r1 = org.bouncycastle.util.Arrays.hashCode(r1)
            r0 = r0 ^ r1
            return r0
    }

    public boolean isConstructed() {
            r1 = this;
            boolean r0 = r1.isConstructed
            return r0
    }
}
