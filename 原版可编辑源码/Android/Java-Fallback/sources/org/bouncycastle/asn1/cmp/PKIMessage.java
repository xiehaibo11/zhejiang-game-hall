package org.bouncycastle.asn1.cmp;

public class PKIMessage extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.cmp.PKIBody body;
    private org.bouncycastle.asn1.ASN1Sequence extraCerts;
    private org.bouncycastle.asn1.cmp.PKIHeader header;
    private org.bouncycastle.asn1.DERBitString protection;

    private PKIMessage(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            java.util.Enumeration r4 = r4.getObjects()
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.cmp.PKIHeader r0 = org.bouncycastle.asn1.cmp.PKIHeader.getInstance(r0)
            r3.header = r0
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.cmp.PKIBody r0 = org.bouncycastle.asn1.cmp.PKIBody.getInstance(r0)
            r3.body = r0
        L1b:
            boolean r0 = r4.hasMoreElements()
            if (r0 == 0) goto L3c
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            int r1 = r0.getTagNo()
            r2 = 1
            if (r1 != 0) goto L35
            org.bouncycastle.asn1.DERBitString r0 = org.bouncycastle.asn1.DERBitString.getInstance(r0, r2)
            r3.protection = r0
            goto L1b
        L35:
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r2)
            r3.extraCerts = r0
            goto L1b
        L3c:
            return
    }

    private void addOptional(org.bouncycastle.asn1.ASN1EncodableVector r3, int r4, org.bouncycastle.asn1.ASN1Encodable r5) {
            r2 = this;
            if (r5 == 0) goto Lb
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r1 = 1
            r0.<init>(r1, r4, r5)
            r3.add(r0)
        Lb:
            return
    }

    public static org.bouncycastle.asn1.cmp.PKIMessage getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.PKIMessage
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.PKIMessage r3 = (org.bouncycastle.asn1.cmp.PKIMessage) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.PKIMessage r0 = new org.bouncycastle.asn1.cmp.PKIMessage
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
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.cmp.PKIHeader r1 = r3.header
            r0.add(r1)
            org.bouncycastle.asn1.cmp.PKIBody r1 = r3.body
            r0.add(r1)
            org.bouncycastle.asn1.DERBitString r1 = r3.protection
            r2 = 0
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r3.extraCerts
            r2 = 1
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
