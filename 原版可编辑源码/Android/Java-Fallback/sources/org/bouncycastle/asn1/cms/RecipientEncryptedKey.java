package org.bouncycastle.asn1.cms;

public class RecipientEncryptedKey extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ASN1OctetString encryptedKey;
    private org.bouncycastle.asn1.cms.KeyAgreeRecipientIdentifier identifier;

    private RecipientEncryptedKey(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.cms.KeyAgreeRecipientIdentifier r0 = org.bouncycastle.asn1.cms.KeyAgreeRecipientIdentifier.getInstance(r0)
            r1.identifier = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1OctetString r2 = (org.bouncycastle.asn1.ASN1OctetString) r2
            r1.encryptedKey = r2
            return
    }

    public RecipientEncryptedKey(org.bouncycastle.asn1.cms.KeyAgreeRecipientIdentifier r1, org.bouncycastle.asn1.ASN1OctetString r2) {
            r0 = this;
            r0.<init>()
            r0.identifier = r1
            r0.encryptedKey = r2
            return
    }

    public static org.bouncycastle.asn1.cms.RecipientEncryptedKey getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.RecipientEncryptedKey
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cms.RecipientEncryptedKey r0 = new org.bouncycastle.asn1.cms.RecipientEncryptedKey
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid RecipientEncryptedKey: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.cms.RecipientEncryptedKey r3 = (org.bouncycastle.asn1.cms.RecipientEncryptedKey) r3
            return r3
    }

    public static org.bouncycastle.asn1.cms.RecipientEncryptedKey getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.cms.RecipientEncryptedKey r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.ASN1OctetString getEncryptedKey() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.encryptedKey
            return r0
    }

    public org.bouncycastle.asn1.cms.KeyAgreeRecipientIdentifier getIdentifier() {
            r1 = this;
            org.bouncycastle.asn1.cms.KeyAgreeRecipientIdentifier r0 = r1.identifier
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.cms.KeyAgreeRecipientIdentifier r1 = r2.identifier
            r0.add(r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.encryptedKey
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
