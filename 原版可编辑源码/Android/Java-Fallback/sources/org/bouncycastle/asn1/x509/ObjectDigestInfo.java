package org.bouncycastle.asn1.x509;

public class ObjectDigestInfo extends org.bouncycastle.asn1.ASN1Encodable {
    public static final int otherObjectDigest = 2;
    public static final int publicKey = 0;
    public static final int publicKeyCert = 1;
    org.bouncycastle.asn1.x509.AlgorithmIdentifier digestAlgorithm;
    org.bouncycastle.asn1.DEREnumerated digestedObjectType;
    org.bouncycastle.asn1.DERBitString objectDigest;
    org.bouncycastle.asn1.DERObjectIdentifier otherObjectTypeID;

    public ObjectDigestInfo(int r2, java.lang.String r3, org.bouncycastle.asn1.x509.AlgorithmIdentifier r4, byte[] r5) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DEREnumerated r0 = new org.bouncycastle.asn1.DEREnumerated
            r0.<init>(r2)
            r1.digestedObjectType = r0
            r0 = 2
            if (r2 != r0) goto L14
            org.bouncycastle.asn1.DERObjectIdentifier r2 = new org.bouncycastle.asn1.DERObjectIdentifier
            r2.<init>(r3)
            r1.otherObjectTypeID = r2
        L14:
            r1.digestAlgorithm = r4
            org.bouncycastle.asn1.DERBitString r2 = new org.bouncycastle.asn1.DERBitString
            r2.<init>(r5)
            r1.objectDigest = r2
            return
    }

    private ObjectDigestInfo(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            int r0 = r5.size()
            r1 = 4
            if (r0 > r1) goto L47
            int r0 = r5.size()
            r2 = 3
            if (r0 < r2) goto L47
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r2 = r5.getObjectAt(r0)
            org.bouncycastle.asn1.DEREnumerated r2 = org.bouncycastle.asn1.DEREnumerated.getInstance(r2)
            r4.digestedObjectType = r2
            int r2 = r5.size()
            r3 = 1
            if (r2 != r1) goto L2e
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r3)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r0)
            r4.otherObjectTypeID = r0
            r0 = 1
        L2e:
            int r1 = r0 + 1
            org.bouncycastle.asn1.DEREncodable r1 = r5.getObjectAt(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r1)
            r4.digestAlgorithm = r1
            int r0 = r0 + 2
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r0)
            org.bouncycastle.asn1.DERBitString r5 = org.bouncycastle.asn1.DERBitString.getInstance(r5)
            r4.objectDigest = r5
            return
        L47:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad sequence size: "
            r1.append(r2)
            int r5 = r5.size()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }

    public static org.bouncycastle.asn1.x509.ObjectDigestInfo getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.ObjectDigestInfo
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.ObjectDigestInfo r0 = new org.bouncycastle.asn1.x509.ObjectDigestInfo
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "illegal object in getInstance: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.x509.ObjectDigestInfo r3 = (org.bouncycastle.asn1.x509.ObjectDigestInfo) r3
            return r3
    }

    public static org.bouncycastle.asn1.x509.ObjectDigestInfo getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.ObjectDigestInfo r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getDigestAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.digestAlgorithm
            return r0
    }

    public org.bouncycastle.asn1.DEREnumerated getDigestedObjectType() {
            r1 = this;
            org.bouncycastle.asn1.DEREnumerated r0 = r1.digestedObjectType
            return r0
    }

    public org.bouncycastle.asn1.DERBitString getObjectDigest() {
            r1 = this;
            org.bouncycastle.asn1.DERBitString r0 = r1.objectDigest
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getOtherObjectTypeID() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.otherObjectTypeID
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DEREnumerated r1 = r2.digestedObjectType
            r0.add(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.otherObjectTypeID
            if (r1 == 0) goto L11
            r0.add(r1)
        L11:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r2.digestAlgorithm
            r0.add(r1)
            org.bouncycastle.asn1.DERBitString r1 = r2.objectDigest
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
