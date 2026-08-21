package org.bouncycastle.asn1.cmp;

public class PKIStatusInfo extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.DERBitString failInfo;
    org.bouncycastle.asn1.DERInteger status;
    org.bouncycastle.asn1.cmp.PKIFreeText statusString;

    public PKIStatusInfo(int r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r0.<init>(r2)
            r1.status = r0
            return
    }

    public PKIStatusInfo(int r2, org.bouncycastle.asn1.cmp.PKIFreeText r3) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r0.<init>(r2)
            r1.status = r0
            r1.statusString = r3
            return
    }

    public PKIStatusInfo(int r2, org.bouncycastle.asn1.cmp.PKIFreeText r3, org.bouncycastle.asn1.cmp.PKIFailureInfo r4) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r0.<init>(r2)
            r1.status = r0
            r1.statusString = r3
            r1.failInfo = r4
            return
    }

    public PKIStatusInfo(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r3.status = r0
            r0 = 0
            r3.statusString = r0
            r3.failInfo = r0
            int r0 = r4.size()
            r1 = 2
            r2 = 1
            if (r0 <= r1) goto L30
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r2)
            org.bouncycastle.asn1.cmp.PKIFreeText r0 = org.bouncycastle.asn1.cmp.PKIFreeText.getInstance(r0)
            r3.statusString = r0
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
        L29:
            org.bouncycastle.asn1.DERBitString r4 = org.bouncycastle.asn1.DERBitString.getInstance(r4)
            r3.failInfo = r4
            goto L45
        L30:
            int r0 = r4.size()
            if (r0 <= r2) goto L45
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r2)
            boolean r0 = r4 instanceof org.bouncycastle.asn1.DERBitString
            if (r0 == 0) goto L3f
            goto L29
        L3f:
            org.bouncycastle.asn1.cmp.PKIFreeText r4 = org.bouncycastle.asn1.cmp.PKIFreeText.getInstance(r4)
            r3.statusString = r4
        L45:
            return
    }

    public static org.bouncycastle.asn1.cmp.PKIStatusInfo getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.PKIStatusInfo
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.PKIStatusInfo r3 = (org.bouncycastle.asn1.cmp.PKIStatusInfo) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.PKIStatusInfo r0 = new org.bouncycastle.asn1.cmp.PKIStatusInfo
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public static org.bouncycastle.asn1.cmp.PKIStatusInfo getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.cmp.PKIStatusInfo r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.DERBitString getFailInfo() {
            r1 = this;
            org.bouncycastle.asn1.DERBitString r0 = r1.failInfo
            return r0
    }

    public java.math.BigInteger getStatus() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.status
            java.math.BigInteger r0 = r0.getValue()
            return r0
    }

    public org.bouncycastle.asn1.cmp.PKIFreeText getStatusString() {
            r1 = this;
            org.bouncycastle.asn1.cmp.PKIFreeText r0 = r1.statusString
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r2.status
            r0.add(r1)
            org.bouncycastle.asn1.cmp.PKIFreeText r1 = r2.statusString
            if (r1 == 0) goto L11
            r0.add(r1)
        L11:
            org.bouncycastle.asn1.DERBitString r1 = r2.failInfo
            if (r1 == 0) goto L18
            r0.add(r1)
        L18:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
