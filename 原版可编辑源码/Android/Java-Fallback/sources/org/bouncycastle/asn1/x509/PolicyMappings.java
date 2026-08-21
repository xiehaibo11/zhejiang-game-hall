package org.bouncycastle.asn1.x509;

public class PolicyMappings extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ASN1Sequence seq;

    public PolicyMappings(java.util.Hashtable r7) {
            r6 = this;
            r6.<init>()
            r0 = 0
            r6.seq = r0
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            java.util.Enumeration r1 = r7.keys()
        Lf:
            boolean r2 = r1.hasMoreElements()
            if (r2 == 0) goto L3f
            java.lang.Object r2 = r1.nextElement()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r7.get(r2)
            java.lang.String r3 = (java.lang.String) r3
            org.bouncycastle.asn1.ASN1EncodableVector r4 = new org.bouncycastle.asn1.ASN1EncodableVector
            r4.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r5 = new org.bouncycastle.asn1.DERObjectIdentifier
            r5.<init>(r2)
            r4.add(r5)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = new org.bouncycastle.asn1.DERObjectIdentifier
            r2.<init>(r3)
            r4.add(r2)
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r4)
            r0.add(r2)
            goto Lf
        L3f:
            org.bouncycastle.asn1.DERSequence r7 = new org.bouncycastle.asn1.DERSequence
            r7.<init>(r0)
            r6.seq = r7
            return
    }

    public PolicyMappings(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.seq = r0
            r1.seq = r2
            return
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.seq
            return r0
    }
}
