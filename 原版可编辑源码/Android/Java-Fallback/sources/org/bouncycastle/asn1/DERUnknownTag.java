package org.bouncycastle.asn1;

public class DERUnknownTag extends org.bouncycastle.asn1.DERObject {
    byte[] data;
    int tag;

    public DERUnknownTag(int r1, byte[] r2) {
            r0 = this;
            r0.<init>()
            r0.tag = r1
            r0.data = r2
            return
    }

    @Override
    void encode(org.bouncycastle.asn1.DEROutputStream r3) throws java.io.IOException {
            r2 = this;
            int r0 = r2.tag
            byte[] r1 = r2.data
            r3.writeEncoded(r0, r1)
            return
    }

    @Override
    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.asn1.DERUnknownTag
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.asn1.DERUnknownTag r4 = (org.bouncycastle.asn1.DERUnknownTag) r4
            int r0 = r3.tag
            int r2 = r4.tag
            if (r0 != r2) goto L19
            byte[] r0 = r3.data
            byte[] r4 = r4.data
            boolean r4 = org.bouncycastle.util.Arrays.areEqual(r0, r4)
            if (r4 == 0) goto L19
            r1 = 1
        L19:
            return r1
    }

    public byte[] getData() {
            r1 = this;
            byte[] r0 = r1.data
            return r0
    }

    public int getTag() {
            r1 = this;
            int r0 = r1.tag
            return r0
    }

    @Override
    public int hashCode() {
            r2 = this;
            int r0 = r2.tag
            byte[] r1 = r2.data
            int r1 = org.bouncycastle.util.Arrays.hashCode(r1)
            r0 = r0 ^ r1
            return r0
    }
}
