package org.bouncycastle.asn1.cms;

public class CompressedDataParser {
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier _compressionAlgorithm;
    private org.bouncycastle.asn1.cms.ContentInfoParser _encapContentInfo;
    private org.bouncycastle.asn1.DERInteger _version;

    public CompressedDataParser(org.bouncycastle.asn1.ASN1SequenceParser r2) throws java.io.IOException {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DEREncodable r0 = r2.readObject()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            r1._version = r0
            org.bouncycastle.asn1.DEREncodable r0 = r2.readObject()
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r1._compressionAlgorithm = r0
            org.bouncycastle.asn1.cms.ContentInfoParser r0 = new org.bouncycastle.asn1.cms.ContentInfoParser
            org.bouncycastle.asn1.DEREncodable r2 = r2.readObject()
            org.bouncycastle.asn1.ASN1SequenceParser r2 = (org.bouncycastle.asn1.ASN1SequenceParser) r2
            r0.<init>(r2)
            r1._encapContentInfo = r0
            return
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getCompressionAlgorithmIdentifier() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1._compressionAlgorithm
            return r0
    }

    public org.bouncycastle.asn1.cms.ContentInfoParser getEncapContentInfo() {
            r1 = this;
            org.bouncycastle.asn1.cms.ContentInfoParser r0 = r1._encapContentInfo
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getVersion() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1._version
            return r0
    }
}
