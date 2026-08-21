package org.bouncycastle.asn1.x9;

public class X962Parameters extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    private org.bouncycastle.asn1.DERObject params;

    public X962Parameters(org.bouncycastle.asn1.DERObject r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.params = r0
            r1.params = r2
            return
    }

    public X962Parameters(org.bouncycastle.asn1.DERObjectIdentifier r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.params = r0
            r1.params = r2
            return
    }

    public X962Parameters(org.bouncycastle.asn1.x9.X9ECParameters r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.params = r0
            org.bouncycastle.asn1.DERObject r2 = r2.getDERObject()
            r1.params = r2
            return
    }

    public static org.bouncycastle.asn1.x9.X962Parameters getInstance(java.lang.Object r1) {
            if (r1 == 0) goto L1b
            boolean r0 = r1 instanceof org.bouncycastle.asn1.x9.X962Parameters
            if (r0 == 0) goto L7
            goto L1b
        L7:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.DERObject
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x9.X962Parameters r0 = new org.bouncycastle.asn1.x9.X962Parameters
            org.bouncycastle.asn1.DERObject r1 = (org.bouncycastle.asn1.DERObject) r1
            r0.<init>(r1)
            return r0
        L13:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown object in getInstance()"
            r1.<init>(r0)
            throw r1
        L1b:
            org.bouncycastle.asn1.x9.X962Parameters r1 = (org.bouncycastle.asn1.x9.X962Parameters) r1
            return r1
    }

    public static org.bouncycastle.asn1.x9.X962Parameters getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.x9.X962Parameters r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.DERObject getParameters() {
            r1 = this;
            org.bouncycastle.asn1.DERObject r0 = r1.params
            return r0
    }

    public boolean isImplicitlyCA() {
            r1 = this;
            org.bouncycastle.asn1.DERObject r0 = r1.params
            boolean r0 = r0 instanceof org.bouncycastle.asn1.ASN1Null
            return r0
    }

    public boolean isNamedCurve() {
            r1 = this;
            org.bouncycastle.asn1.DERObject r0 = r1.params
            boolean r0 = r0 instanceof org.bouncycastle.asn1.DERObjectIdentifier
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.DERObject r0 = r1.params
            return r0
    }
}
