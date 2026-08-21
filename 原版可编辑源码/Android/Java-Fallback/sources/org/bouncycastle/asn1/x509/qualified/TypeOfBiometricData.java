package org.bouncycastle.asn1.x509.qualified;

public class TypeOfBiometricData extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    public static final int HANDWRITTEN_SIGNATURE = 1;
    public static final int PICTURE = 0;
    org.bouncycastle.asn1.DEREncodable obj;

    public TypeOfBiometricData(int r4) {
            r3 = this;
            r3.<init>()
            if (r4 == 0) goto L20
            r0 = 1
            if (r4 != r0) goto L9
            goto L20
        L9:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknow PredefinedBiometricType : "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
        L20:
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r0.<init>(r4)
            r3.obj = r0
            return
    }

    public TypeOfBiometricData(org.bouncycastle.asn1.DERObjectIdentifier r1) {
            r0 = this;
            r0.<init>()
            r0.obj = r1
            return
    }

    public static org.bouncycastle.asn1.x509.qualified.TypeOfBiometricData getInstance(java.lang.Object r1) {
            if (r1 == 0) goto L33
            boolean r0 = r1 instanceof org.bouncycastle.asn1.x509.qualified.TypeOfBiometricData
            if (r0 == 0) goto L7
            goto L33
        L7:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.DERInteger
            if (r0 == 0) goto L1d
            org.bouncycastle.asn1.DERInteger r1 = org.bouncycastle.asn1.DERInteger.getInstance(r1)
            java.math.BigInteger r1 = r1.getValue()
            int r1 = r1.intValue()
            org.bouncycastle.asn1.x509.qualified.TypeOfBiometricData r0 = new org.bouncycastle.asn1.x509.qualified.TypeOfBiometricData
            r0.<init>(r1)
            return r0
        L1d:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.DERObjectIdentifier
            if (r0 == 0) goto L2b
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r1)
            org.bouncycastle.asn1.x509.qualified.TypeOfBiometricData r0 = new org.bouncycastle.asn1.x509.qualified.TypeOfBiometricData
            r0.<init>(r1)
            return r0
        L2b:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown object in getInstance"
            r1.<init>(r0)
            throw r1
        L33:
            org.bouncycastle.asn1.x509.qualified.TypeOfBiometricData r1 = (org.bouncycastle.asn1.x509.qualified.TypeOfBiometricData) r1
            return r1
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getBiometricDataOid() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.obj
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            return r0
    }

    public int getPredefinedBiometricType() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.obj
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            return r0
    }

    public boolean isPredefined() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.obj
            boolean r0 = r0 instanceof org.bouncycastle.asn1.DERInteger
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r1.obj
            org.bouncycastle.asn1.DERObject r0 = r0.getDERObject()
            return r0
    }
}
