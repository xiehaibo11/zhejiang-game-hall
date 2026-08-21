package org.bouncycastle.asn1.smime;

public class SMIMECapabilitiesAttribute extends org.bouncycastle.asn1.cms.Attribute {
    public SMIMECapabilitiesAttribute(org.bouncycastle.asn1.smime.SMIMECapabilityVector r4) {
            r3 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.smime.SMIMEAttributes.smimeCapabilities
            org.bouncycastle.asn1.DERSet r1 = new org.bouncycastle.asn1.DERSet
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            org.bouncycastle.asn1.DEREncodableVector r4 = r4.toDEREncodableVector()
            r2.<init>(r4)
            r1.<init>(r2)
            r3.<init>(r0, r1)
            return
    }
}
