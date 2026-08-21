package org.bouncycastle.asn1.cmp;

public class PKIFreeText extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ASN1Sequence strings;

    public PKIFreeText(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            java.util.Enumeration r0 = r3.getObjects()
        L7:
            boolean r1 = r0.hasMoreElements()
            if (r1 == 0) goto L1e
            java.lang.Object r1 = r0.nextElement()
            boolean r1 = r1 instanceof org.bouncycastle.asn1.DERUTF8String
            if (r1 == 0) goto L16
            goto L7
        L16:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "attempt to insert non UTF8 STRING into PKIFreeText"
            r3.<init>(r0)
            throw r3
        L1e:
            r2.strings = r3
            return
    }

    public PKIFreeText(org.bouncycastle.asn1.DERUTF8String r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DERSequence r0 = new org.bouncycastle.asn1.DERSequence
            r0.<init>(r2)
            r1.strings = r0
            return
    }

    public static org.bouncycastle.asn1.cmp.PKIFreeText getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.PKIFreeText
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.PKIFreeText r3 = (org.bouncycastle.asn1.cmp.PKIFreeText) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.PKIFreeText r0 = new org.bouncycastle.asn1.cmp.PKIFreeText
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unknown object in factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public static org.bouncycastle.asn1.cmp.PKIFreeText getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.cmp.PKIFreeText r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.DERUTF8String getStringAt(int r2) {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.strings
            org.bouncycastle.asn1.DEREncodable r2 = r0.getObjectAt(r2)
            org.bouncycastle.asn1.DERUTF8String r2 = (org.bouncycastle.asn1.DERUTF8String) r2
            return r2
    }

    public int size() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.strings
            int r0 = r0.size()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.strings
            return r0
    }
}
