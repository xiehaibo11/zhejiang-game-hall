package org.bouncycastle.asn1.cms;

public class KeyAgreeRecipientInfo extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier keyEncryptionAlgorithm;
    private org.bouncycastle.asn1.cms.OriginatorIdentifierOrKey originator;
    private org.bouncycastle.asn1.ASN1Sequence recipientEncryptedKeys;
    private org.bouncycastle.asn1.ASN1OctetString ukm;
    private org.bouncycastle.asn1.DERInteger version;

    public KeyAgreeRecipientInfo(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            r3.version = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r1 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1TaggedObject r1 = (org.bouncycastle.asn1.ASN1TaggedObject) r1
            org.bouncycastle.asn1.cms.OriginatorIdentifierOrKey r1 = org.bouncycastle.asn1.cms.OriginatorIdentifierOrKey.getInstance(r1, r0)
            r3.originator = r1
            r1 = 2
            org.bouncycastle.asn1.DEREncodable r2 = r4.getObjectAt(r1)
            boolean r2 = r2 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r2 == 0) goto L30
            r2 = 3
            org.bouncycastle.asn1.DEREncodable r1 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1TaggedObject r1 = (org.bouncycastle.asn1.ASN1TaggedObject) r1
            org.bouncycastle.asn1.ASN1OctetString r0 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r1, r0)
            r3.ukm = r0
            r1 = 3
        L30:
            int r0 = r1 + 1
            org.bouncycastle.asn1.DEREncodable r1 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r1)
            r3.keyEncryptionAlgorithm = r1
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4
            r3.recipientEncryptedKeys = r4
            return
    }

    public KeyAgreeRecipientInfo(org.bouncycastle.asn1.cms.OriginatorIdentifierOrKey r3, org.bouncycastle.asn1.ASN1OctetString r4, org.bouncycastle.asn1.x509.AlgorithmIdentifier r5, org.bouncycastle.asn1.ASN1Sequence r6) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 3
            r0.<init>(r1)
            r2.version = r0
            r2.originator = r3
            r2.ukm = r4
            r2.keyEncryptionAlgorithm = r5
            r2.recipientEncryptedKeys = r6
            return
    }

    public static org.bouncycastle.asn1.cms.KeyAgreeRecipientInfo getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.KeyAgreeRecipientInfo
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cms.KeyAgreeRecipientInfo r0 = new org.bouncycastle.asn1.cms.KeyAgreeRecipientInfo
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Illegal object in KeyAgreeRecipientInfo: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.cms.KeyAgreeRecipientInfo r3 = (org.bouncycastle.asn1.cms.KeyAgreeRecipientInfo) r3
            return r3
    }

    public static org.bouncycastle.asn1.cms.KeyAgreeRecipientInfo getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.cms.KeyAgreeRecipientInfo r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getKeyEncryptionAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.keyEncryptionAlgorithm
            return r0
    }

    public org.bouncycastle.asn1.cms.OriginatorIdentifierOrKey getOriginator() {
            r1 = this;
            org.bouncycastle.asn1.cms.OriginatorIdentifierOrKey r0 = r1.originator
            return r0
    }

    public org.bouncycastle.asn1.ASN1Sequence getRecipientEncryptedKeys() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.recipientEncryptedKeys
            return r0
    }

    public org.bouncycastle.asn1.ASN1OctetString getUserKeyingMaterial() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.ukm
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getVersion() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.version
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r5.version
            r0.add(r1)
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.cms.OriginatorIdentifierOrKey r2 = r5.originator
            r3 = 1
            r4 = 0
            r1.<init>(r3, r4, r2)
            r0.add(r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r5.ukm
            if (r1 == 0) goto L24
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.ASN1OctetString r2 = r5.ukm
            r1.<init>(r3, r3, r2)
            r0.add(r1)
        L24:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r5.keyEncryptionAlgorithm
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r5.recipientEncryptedKeys
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
