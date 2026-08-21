package org.bouncycastle.asn1.cms;

public class KeyAgreeRecipientIdentifier extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.cms.IssuerAndSerialNumber issuerSerial;
    private org.bouncycastle.asn1.cms.RecipientKeyIdentifier rKeyID;

    private KeyAgreeRecipientIdentifier(org.bouncycastle.asn1.ASN1Sequence r1) {
            r0 = this;
            r0.<init>()
            org.bouncycastle.asn1.cms.IssuerAndSerialNumber r1 = org.bouncycastle.asn1.cms.IssuerAndSerialNumber.getInstance(r1)
            r0.issuerSerial = r1
            r1 = 0
            r0.rKeyID = r1
            return
    }

    public KeyAgreeRecipientIdentifier(org.bouncycastle.asn1.cms.IssuerAndSerialNumber r1) {
            r0 = this;
            r0.<init>()
            r0.issuerSerial = r1
            r1 = 0
            r0.rKeyID = r1
            return
    }

    public static org.bouncycastle.asn1.cms.KeyAgreeRecipientIdentifier getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cms.KeyAgreeRecipientIdentifier
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cms.KeyAgreeRecipientIdentifier r0 = new org.bouncycastle.asn1.cms.KeyAgreeRecipientIdentifier
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid KeyAgreeRecipientIdentifier: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.cms.KeyAgreeRecipientIdentifier r3 = (org.bouncycastle.asn1.cms.KeyAgreeRecipientIdentifier) r3
            return r3
    }

    public static org.bouncycastle.asn1.cms.KeyAgreeRecipientIdentifier getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.cms.KeyAgreeRecipientIdentifier r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.cms.IssuerAndSerialNumber getIssuerAndSerialNumber() {
            r1 = this;
            org.bouncycastle.asn1.cms.IssuerAndSerialNumber r0 = r1.issuerSerial
            return r0
    }

    public org.bouncycastle.asn1.cms.RecipientKeyIdentifier getRKeyID() {
            r1 = this;
            org.bouncycastle.asn1.cms.RecipientKeyIdentifier r0 = r1.rKeyID
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r3 = this;
            org.bouncycastle.asn1.cms.IssuerAndSerialNumber r0 = r3.issuerSerial
            if (r0 == 0) goto L9
            org.bouncycastle.asn1.DERObject r0 = r0.toASN1Object()
            return r0
        L9:
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.cms.RecipientKeyIdentifier r1 = r3.rKeyID
            r2 = 0
            r0.<init>(r2, r2, r1)
            return r0
    }
}
