package org.bouncycastle.asn1.pkcs;

public class Pfx extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers {
    private org.bouncycastle.asn1.pkcs.ContentInfo contentInfo;
    private org.bouncycastle.asn1.pkcs.MacData macData;

    public Pfx(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.macData = r0
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            r1 = 3
            if (r0 != r1) goto L35
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.pkcs.ContentInfo r0 = org.bouncycastle.asn1.pkcs.ContentInfo.getInstance(r0)
            r2.contentInfo = r0
            int r0 = r3.size()
            if (r0 != r1) goto L34
            r0 = 2
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.pkcs.MacData r3 = org.bouncycastle.asn1.pkcs.MacData.getInstance(r3)
            r2.macData = r3
        L34:
            return
        L35:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "wrong version for PFX PDU"
            r3.<init>(r0)
            throw r3
    }

    public Pfx(org.bouncycastle.asn1.pkcs.ContentInfo r2, org.bouncycastle.asn1.pkcs.MacData r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.macData = r0
            r1.contentInfo = r2
            r1.macData = r3
            return
    }

    public org.bouncycastle.asn1.pkcs.ContentInfo getAuthSafe() {
            r1 = this;
            org.bouncycastle.asn1.pkcs.ContentInfo r0 = r1.contentInfo
            return r0
    }

    public org.bouncycastle.asn1.pkcs.MacData getMacData() {
            r1 = this;
            org.bouncycastle.asn1.pkcs.MacData r0 = r1.macData
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r2 = 3
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.pkcs.ContentInfo r1 = r3.contentInfo
            r0.add(r1)
            org.bouncycastle.asn1.pkcs.MacData r1 = r3.macData
            if (r1 == 0) goto L1a
            r0.add(r1)
        L1a:
            org.bouncycastle.asn1.BERSequence r1 = new org.bouncycastle.asn1.BERSequence
            r1.<init>(r0)
            return r1
    }
}
