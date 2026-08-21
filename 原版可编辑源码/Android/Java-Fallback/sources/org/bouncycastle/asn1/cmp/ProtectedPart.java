package org.bouncycastle.asn1.cmp;

public class ProtectedPart extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.cmp.PKIBody body;
    private org.bouncycastle.asn1.cmp.PKIHeader header;

    private ProtectedPart(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.cmp.PKIHeader r0 = org.bouncycastle.asn1.cmp.PKIHeader.getInstance(r0)
            r1.header = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.cmp.PKIBody r2 = org.bouncycastle.asn1.cmp.PKIBody.getInstance(r2)
            r1.body = r2
            return
    }

    public static org.bouncycastle.asn1.cmp.ProtectedPart getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.ProtectedPart
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.ProtectedPart r3 = (org.bouncycastle.asn1.cmp.ProtectedPart) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.ProtectedPart r0 = new org.bouncycastle.asn1.cmp.ProtectedPart
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid object: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public org.bouncycastle.asn1.cmp.PKIBody getBody() {
            r1 = this;
            org.bouncycastle.asn1.cmp.PKIBody r0 = r1.body
            return r0
    }

    public org.bouncycastle.asn1.cmp.PKIHeader getHeader() {
            r1 = this;
            org.bouncycastle.asn1.cmp.PKIHeader r0 = r1.header
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.cmp.PKIHeader r1 = r2.header
            r0.add(r1)
            org.bouncycastle.asn1.cmp.PKIBody r1 = r2.body
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
