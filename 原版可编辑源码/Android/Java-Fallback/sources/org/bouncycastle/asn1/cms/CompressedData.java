package org.bouncycastle.asn1.cms;

public class CompressedData extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier compressionAlgorithm;
    private org.bouncycastle.asn1.cms.ContentInfo encapContentInfo;
    private org.bouncycastle.asn1.DERInteger version;

    public CompressedData(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            r1.version = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r1.compressionAlgorithm = r0
            r0 = 2
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.cms.ContentInfo r2 = org.bouncycastle.asn1.cms.ContentInfo.getInstance(r2)
            r1.encapContentInfo = r2
            return
    }

    public CompressedData(org.bouncycastle.asn1.x509.AlgorithmIdentifier r3, org.bouncycastle.asn1.cms.ContentInfo r4) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 0
            r0.<init>(r1)
            r2.version = r0
            r2.compressionAlgorithm = r3
            r2.encapContentInfo = r4
            return
    }

    public static org.bouncycastle.asn1.cms.CompressedData getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.CompressedData
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cms.CompressedData r0 = new org.bouncycastle.asn1.cms.CompressedData
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid CompressedData: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.cms.CompressedData r3 = (org.bouncycastle.asn1.cms.CompressedData) r3
            return r3
    }

    public static org.bouncycastle.asn1.cms.CompressedData getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.cms.CompressedData r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getCompressionAlgorithmIdentifier() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.compressionAlgorithm
            return r0
    }

    public org.bouncycastle.asn1.cms.ContentInfo getEncapContentInfo() {
            r1 = this;
            org.bouncycastle.asn1.cms.ContentInfo r0 = r1.encapContentInfo
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getVersion() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.version
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r2.version
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r2.compressionAlgorithm
            r0.add(r1)
            org.bouncycastle.asn1.cms.ContentInfo r1 = r2.encapContentInfo
            r0.add(r1)
            org.bouncycastle.asn1.BERSequence r1 = new org.bouncycastle.asn1.BERSequence
            r1.<init>(r0)
            return r1
    }
}
