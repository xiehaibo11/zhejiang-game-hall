package org.bouncycastle.asn1.x509;

public class PrivateKeyUsagePeriod extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERGeneralizedTime _notAfter;
    private org.bouncycastle.asn1.DERGeneralizedTime _notBefore;

    private PrivateKeyUsagePeriod(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            java.util.Enumeration r5 = r5.getObjects()
        L7:
            boolean r0 = r5.hasMoreElements()
            if (r0 == 0) goto L2f
            java.lang.Object r0 = r5.nextElement()
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            int r1 = r0.getTagNo()
            r2 = 0
            if (r1 != 0) goto L21
            org.bouncycastle.asn1.DERGeneralizedTime r0 = org.bouncycastle.asn1.DERGeneralizedTime.getInstance(r0, r2)
            r4._notBefore = r0
            goto L7
        L21:
            int r1 = r0.getTagNo()
            r3 = 1
            if (r1 != r3) goto L7
            org.bouncycastle.asn1.DERGeneralizedTime r0 = org.bouncycastle.asn1.DERGeneralizedTime.getInstance(r0, r2)
            r4._notAfter = r0
            goto L7
        L2f:
            return
    }

    public static org.bouncycastle.asn1.x509.PrivateKeyUsagePeriod getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.PrivateKeyUsagePeriod
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.PrivateKeyUsagePeriod r3 = (org.bouncycastle.asn1.x509.PrivateKeyUsagePeriod) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.PrivateKeyUsagePeriod r0 = new org.bouncycastle.asn1.x509.PrivateKeyUsagePeriod
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.X509Extension
            if (r0 == 0) goto L22
            org.bouncycastle.asn1.x509.X509Extension r3 = (org.bouncycastle.asn1.x509.X509Extension) r3
            org.bouncycastle.asn1.ASN1Object r3 = org.bouncycastle.asn1.x509.X509Extension.convertValueToObject(r3)
            org.bouncycastle.asn1.x509.PrivateKeyUsagePeriod r3 = getInstance(r3)
            return r3
        L22:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in getInstance: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public org.bouncycastle.asn1.DERGeneralizedTime getNotAfter() {
            r1 = this;
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r1._notAfter
            return r0
    }

    public org.bouncycastle.asn1.DERGeneralizedTime getNotBefore() {
            r1 = this;
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r1._notBefore
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERGeneralizedTime r1 = r5._notBefore
            r2 = 0
            if (r1 == 0) goto L14
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DERGeneralizedTime r3 = r5._notBefore
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L14:
            org.bouncycastle.asn1.DERGeneralizedTime r1 = r5._notAfter
            if (r1 == 0) goto L23
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 1
            org.bouncycastle.asn1.DERGeneralizedTime r4 = r5._notAfter
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L23:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
