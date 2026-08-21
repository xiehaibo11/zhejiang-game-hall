package org.bouncycastle.asn1.cms;

public class PasswordRecipientInfo extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ASN1OctetString encryptedKey;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier keyDerivationAlgorithm;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier keyEncryptionAlgorithm;
    private org.bouncycastle.asn1.DERInteger version;

    public PasswordRecipientInfo(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r1 = r5.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r1 = (org.bouncycastle.asn1.DERInteger) r1
            r4.version = r1
            r1 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r5.getObjectAt(r1)
            boolean r2 = r2 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            r3 = 2
            if (r2 == 0) goto L32
            org.bouncycastle.asn1.DEREncodable r1 = r5.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1TaggedObject r1 = (org.bouncycastle.asn1.ASN1TaggedObject) r1
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r1, r0)
            r4.keyDerivationAlgorithm = r0
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r3)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r4.keyEncryptionAlgorithm = r0
            r0 = 3
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r0)
            goto L40
        L32:
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r4.keyEncryptionAlgorithm = r0
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r3)
        L40:
            org.bouncycastle.asn1.ASN1OctetString r5 = (org.bouncycastle.asn1.ASN1OctetString) r5
            r4.encryptedKey = r5
            return
    }

    public PasswordRecipientInfo(org.bouncycastle.asn1.x509.AlgorithmIdentifier r3, org.bouncycastle.asn1.ASN1OctetString r4) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 0
            r0.<init>(r1)
            r2.version = r0
            r2.keyEncryptionAlgorithm = r3
            r2.encryptedKey = r4
            return
    }

    public PasswordRecipientInfo(org.bouncycastle.asn1.x509.AlgorithmIdentifier r3, org.bouncycastle.asn1.x509.AlgorithmIdentifier r4, org.bouncycastle.asn1.ASN1OctetString r5) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 0
            r0.<init>(r1)
            r2.version = r0
            r2.keyDerivationAlgorithm = r3
            r2.keyEncryptionAlgorithm = r4
            r2.encryptedKey = r5
            return
    }

    public static org.bouncycastle.asn1.cms.PasswordRecipientInfo getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.PasswordRecipientInfo
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cms.PasswordRecipientInfo r0 = new org.bouncycastle.asn1.cms.PasswordRecipientInfo
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid PasswordRecipientInfo: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.cms.PasswordRecipientInfo r3 = (org.bouncycastle.asn1.cms.PasswordRecipientInfo) r3
            return r3
    }

    public static org.bouncycastle.asn1.cms.PasswordRecipientInfo getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.cms.PasswordRecipientInfo r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.ASN1OctetString getEncryptedKey() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.encryptedKey
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getKeyDerivationAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.keyDerivationAlgorithm
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getKeyEncryptionAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.keyEncryptionAlgorithm
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getVersion() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.version
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r4.version
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r4.keyDerivationAlgorithm
            if (r1 == 0) goto L19
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = r4.keyDerivationAlgorithm
            r3 = 0
            r1.<init>(r3, r3, r2)
            r0.add(r1)
        L19:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r4.keyEncryptionAlgorithm
            r0.add(r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r4.encryptedKey
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
