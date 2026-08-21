package org.bouncycastle.asn1.smime;

public class SMIMEEncryptionKeyPreferenceAttribute extends org.bouncycastle.asn1.cms.Attribute {
    public SMIMEEncryptionKeyPreferenceAttribute(org.bouncycastle.asn1.ASN1OctetString r6) {
            r5 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.smime.SMIMEAttributes.encrypKeyPref
            org.bouncycastle.asn1.DERSet r1 = new org.bouncycastle.asn1.DERSet
            org.bouncycastle.asn1.DERTaggedObject r2 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 0
            r4 = 2
            r2.<init>(r3, r4, r6)
            r1.<init>(r2)
            r5.<init>(r0, r1)
            return
    }

    public SMIMEEncryptionKeyPreferenceAttribute(org.bouncycastle.asn1.cms.IssuerAndSerialNumber r5) {
            r4 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.smime.SMIMEAttributes.encrypKeyPref
            org.bouncycastle.asn1.DERSet r1 = new org.bouncycastle.asn1.DERSet
            org.bouncycastle.asn1.DERTaggedObject r2 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 0
            r2.<init>(r3, r3, r5)
            r1.<init>(r2)
            r4.<init>(r0, r1)
            return
    }

    public SMIMEEncryptionKeyPreferenceAttribute(org.bouncycastle.asn1.cms.RecipientKeyIdentifier r6) {
            r5 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.smime.SMIMEAttributes.encrypKeyPref
            org.bouncycastle.asn1.DERSet r1 = new org.bouncycastle.asn1.DERSet
            org.bouncycastle.asn1.DERTaggedObject r2 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 0
            r4 = 1
            r2.<init>(r3, r4, r6)
            r1.<init>(r2)
            r5.<init>(r0, r1)
            return
    }
}
