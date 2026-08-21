package org.bouncycastle.asn1.ocsp;

public class ServiceLocator extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.x509.X509Name issuer;
    org.bouncycastle.asn1.DERObject locator;

    public ServiceLocator() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.X509Name r1 = r2.issuer
            r0.add(r1)
            org.bouncycastle.asn1.DERObject r1 = r2.locator
            if (r1 == 0) goto L11
            r0.add(r1)
        L11:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
