package org.bouncycastle.asn1.cms;

public class EncryptedContentInfoParser {
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier _contentEncryptionAlgorithm;
    private org.bouncycastle.asn1.DERObjectIdentifier _contentType;
    private org.bouncycastle.asn1.ASN1TaggedObjectParser _encryptedContent;

    public EncryptedContentInfoParser(org.bouncycastle.asn1.ASN1SequenceParser r2) throws java.io.IOException {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DEREncodable r0 = r2.readObject()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            r1._contentType = r0
            org.bouncycastle.asn1.DEREncodable r0 = r2.readObject()
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r1._contentEncryptionAlgorithm = r0
            org.bouncycastle.asn1.DEREncodable r2 = r2.readObject()
            org.bouncycastle.asn1.ASN1TaggedObjectParser r2 = (org.bouncycastle.asn1.ASN1TaggedObjectParser) r2
            r1._encryptedContent = r2
            return
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getContentEncryptionAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1._contentEncryptionAlgorithm
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getContentType() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1._contentType
            return r0
    }

    public org.bouncycastle.asn1.DEREncodable getEncryptedContent(int r3) throws java.io.IOException {
            r2 = this;
            org.bouncycastle.asn1.ASN1TaggedObjectParser r0 = r2._encryptedContent
            r1 = 0
            org.bouncycastle.asn1.DEREncodable r3 = r0.getObjectParser(r3, r1)
            return r3
    }
}
