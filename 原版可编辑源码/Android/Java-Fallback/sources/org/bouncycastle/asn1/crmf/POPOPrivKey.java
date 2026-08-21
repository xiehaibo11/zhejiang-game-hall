package org.bouncycastle.asn1.crmf;

public class POPOPrivKey extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    private org.bouncycastle.asn1.DERObject obj;

    private POPOPrivKey(org.bouncycastle.asn1.DERObject r1) {
            r0 = this;
            r0.<init>()
            r0.obj = r1
            return
    }

    public static org.bouncycastle.asn1.ASN1Encodable getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.crmf.POPOPrivKey r1 = new org.bouncycastle.asn1.crmf.POPOPrivKey
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            r1.<init>(r0)
            return r1
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.DERObject r0 = r1.obj
            return r0
    }
}
