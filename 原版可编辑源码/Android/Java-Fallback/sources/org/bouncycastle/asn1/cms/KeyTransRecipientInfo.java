package org.bouncycastle.asn1.cms;

public class KeyTransRecipientInfo extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ASN1OctetString encryptedKey;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier keyEncryptionAlgorithm;
    private org.bouncycastle.asn1.cms.RecipientIdentifier rid;
    private org.bouncycastle.asn1.DERInteger version;

    public KeyTransRecipientInfo(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            r1.version = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.cms.RecipientIdentifier r0 = org.bouncycastle.asn1.cms.RecipientIdentifier.getInstance(r0)
            r1.rid = r0
            r0 = 2
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r1.keyEncryptionAlgorithm = r0
            r0 = 3
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1OctetString r2 = (org.bouncycastle.asn1.ASN1OctetString) r2
            r1.encryptedKey = r2
            return
    }

    public KeyTransRecipientInfo(org.bouncycastle.asn1.cms.RecipientIdentifier r3, org.bouncycastle.asn1.x509.AlgorithmIdentifier r4, org.bouncycastle.asn1.ASN1OctetString r5) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERObject r0 = r3.getDERObject()
            boolean r0 = r0 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L12
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 2
            r0.<init>(r1)
            goto L18
        L12:
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 0
            r0.<init>(r1)
        L18:
            r2.version = r0
            r2.rid = r3
            r2.keyEncryptionAlgorithm = r4
            r2.encryptedKey = r5
            return
    }

    public static org.bouncycastle.asn1.cms.KeyTransRecipientInfo getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.KeyTransRecipientInfo
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cms.KeyTransRecipientInfo r0 = new org.bouncycastle.asn1.cms.KeyTransRecipientInfo
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Illegal object in KeyTransRecipientInfo: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.cms.KeyTransRecipientInfo r3 = (org.bouncycastle.asn1.cms.KeyTransRecipientInfo) r3
            return r3
    }

    public org.bouncycastle.asn1.ASN1OctetString getEncryptedKey() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.encryptedKey
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getKeyEncryptionAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.keyEncryptionAlgorithm
            return r0
    }

    public org.bouncycastle.asn1.cms.RecipientIdentifier getRecipientIdentifier() {
            r1 = this;
            org.bouncycastle.asn1.cms.RecipientIdentifier r0 = r1.rid
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
            org.bouncycastle.asn1.cms.RecipientIdentifier r1 = r2.rid
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r2.keyEncryptionAlgorithm
            r0.add(r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.encryptedKey
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
