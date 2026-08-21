package org.bouncycastle.asn1.x509;

public class BasicConstraints extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.DERBoolean cA;
    org.bouncycastle.asn1.DERInteger pathLenConstraint;

    public BasicConstraints(int r3) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERBoolean r0 = new org.bouncycastle.asn1.DERBoolean
            r1 = 0
            r0.<init>(r1)
            r2.cA = r0
            r0 = 0
            r2.pathLenConstraint = r0
            org.bouncycastle.asn1.DERBoolean r0 = new org.bouncycastle.asn1.DERBoolean
            r1 = 1
            r0.<init>(r1)
            r2.cA = r0
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r0.<init>(r3)
            r2.pathLenConstraint = r0
            return
    }

    public BasicConstraints(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.asn1.DERBoolean r0 = new org.bouncycastle.asn1.DERBoolean
            r1 = 0
            r0.<init>(r1)
            r3.cA = r0
            r0 = 0
            r3.pathLenConstraint = r0
            int r2 = r4.size()
            if (r2 != 0) goto L19
            r3.cA = r0
            r3.pathLenConstraint = r0
            goto L56
        L19:
            org.bouncycastle.asn1.DEREncodable r2 = r4.getObjectAt(r1)
            boolean r2 = r2 instanceof org.bouncycastle.asn1.DERBoolean
            if (r2 == 0) goto L2c
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.DERBoolean r0 = org.bouncycastle.asn1.DERBoolean.getInstance(r0)
            r3.cA = r0
            goto L38
        L2c:
            r3.cA = r0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r3.pathLenConstraint = r0
        L38:
            int r0 = r4.size()
            r1 = 1
            if (r0 <= r1) goto L56
            org.bouncycastle.asn1.DERBoolean r0 = r3.cA
            if (r0 == 0) goto L4e
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.DERInteger r4 = org.bouncycastle.asn1.DERInteger.getInstance(r4)
            r3.pathLenConstraint = r4
            goto L56
        L4e:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "wrong sequence in constructor"
            r4.<init>(r0)
            throw r4
        L56:
            return
    }

    public BasicConstraints(boolean r3) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERBoolean r0 = new org.bouncycastle.asn1.DERBoolean
            r1 = 0
            r0.<init>(r1)
            r2.cA = r0
            r0 = 0
            r2.pathLenConstraint = r0
            if (r3 == 0) goto L19
            org.bouncycastle.asn1.DERBoolean r3 = new org.bouncycastle.asn1.DERBoolean
            r1 = 1
            r3.<init>(r1)
            r2.cA = r3
            goto L1b
        L19:
            r2.cA = r0
        L1b:
            r2.pathLenConstraint = r0
            return
    }

    public BasicConstraints(boolean r3, int r4) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERBoolean r0 = new org.bouncycastle.asn1.DERBoolean
            r1 = 0
            r0.<init>(r1)
            r2.cA = r0
            r0 = 0
            r2.pathLenConstraint = r0
            if (r3 == 0) goto L1f
            org.bouncycastle.asn1.DERBoolean r0 = new org.bouncycastle.asn1.DERBoolean
            r0.<init>(r3)
            r2.cA = r0
            org.bouncycastle.asn1.DERInteger r3 = new org.bouncycastle.asn1.DERInteger
            r3.<init>(r4)
            r2.pathLenConstraint = r3
            goto L23
        L1f:
            r2.cA = r0
            r2.pathLenConstraint = r0
        L23:
            return
    }

    public static org.bouncycastle.asn1.x509.BasicConstraints getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L41
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.BasicConstraints
            if (r0 == 0) goto L7
            goto L41
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.BasicConstraints r0 = new org.bouncycastle.asn1.x509.BasicConstraints
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.X509Extension
            if (r0 == 0) goto L22
            org.bouncycastle.asn1.x509.X509Extension r3 = (org.bouncycastle.asn1.x509.X509Extension) r3
            org.bouncycastle.asn1.ASN1Object r3 = org.bouncycastle.asn1.x509.X509Extension.convertValueToObject(r3)
            org.bouncycastle.asn1.x509.BasicConstraints r3 = getInstance(r3)
            return r3
        L22:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L41:
            org.bouncycastle.asn1.x509.BasicConstraints r3 = (org.bouncycastle.asn1.x509.BasicConstraints) r3
            return r3
    }

    public static org.bouncycastle.asn1.x509.BasicConstraints getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.BasicConstraints r0 = getInstance(r0)
            return r0
    }

    public java.math.BigInteger getPathLenConstraint() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.pathLenConstraint
            if (r0 == 0) goto L9
            java.math.BigInteger r0 = r0.getValue()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public boolean isCA() {
            r1 = this;
            org.bouncycastle.asn1.DERBoolean r0 = r1.cA
            if (r0 == 0) goto Lc
            boolean r0 = r0.isTrue()
            if (r0 == 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERBoolean r1 = r2.cA
            if (r1 == 0) goto Lc
            r0.add(r1)
        Lc:
            org.bouncycastle.asn1.DERInteger r1 = r2.pathLenConstraint
            if (r1 == 0) goto L13
            r0.add(r1)
        L13:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }

    public java.lang.String toString() {
            r2 = this;
            org.bouncycastle.asn1.DERInteger r0 = r2.pathLenConstraint
            java.lang.String r1 = "BasicConstraints: isCa("
            if (r0 != 0) goto L26
            org.bouncycastle.asn1.DERBoolean r0 = r2.cA
            if (r0 != 0) goto Ld
            java.lang.String r0 = "BasicConstraints: isCa(false)"
            return r0
        Ld:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            boolean r1 = r2.isCA()
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
        L21:
            java.lang.String r0 = r0.toString()
            return r0
        L26:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            boolean r1 = r2.isCA()
            r0.append(r1)
            java.lang.String r1 = "), pathLenConstraint = "
            r0.append(r1)
            org.bouncycastle.asn1.DERInteger r1 = r2.pathLenConstraint
            java.math.BigInteger r1 = r1.getValue()
            r0.append(r1)
            goto L21
    }
}
