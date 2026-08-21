package org.bouncycastle.asn1.x9;

public class X9Curve extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.x9.X9ObjectIdentifiers {
    private org.bouncycastle.math.ec.ECCurve curve;
    private org.bouncycastle.asn1.DERObjectIdentifier fieldIdentifier;
    private byte[] seed;

    public X9Curve(org.bouncycastle.asn1.x9.X9FieldID r14, org.bouncycastle.asn1.ASN1Sequence r15) {
            r13 = this;
            r13.<init>()
            r0 = 0
            r13.fieldIdentifier = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r14.getIdentifier()
            r13.fieldIdentifier = r0
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.asn1.x9.X9Curve.prime_field
            boolean r0 = r0.equals(r1)
            r1 = 2
            r2 = 1
            r3 = 0
            if (r0 == 0) goto L50
            org.bouncycastle.asn1.DERObject r14 = r14.getParameters()
            org.bouncycastle.asn1.DERInteger r14 = (org.bouncycastle.asn1.DERInteger) r14
            java.math.BigInteger r14 = r14.getValue()
            org.bouncycastle.asn1.x9.X9FieldElement r0 = new org.bouncycastle.asn1.x9.X9FieldElement
            org.bouncycastle.asn1.DEREncodable r3 = r15.getObjectAt(r3)
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3
            r0.<init>(r14, r3)
            org.bouncycastle.asn1.x9.X9FieldElement r3 = new org.bouncycastle.asn1.x9.X9FieldElement
            org.bouncycastle.asn1.DEREncodable r2 = r15.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1OctetString r2 = (org.bouncycastle.asn1.ASN1OctetString) r2
            r3.<init>(r14, r2)
            org.bouncycastle.math.ec.ECCurve$Fp r2 = new org.bouncycastle.math.ec.ECCurve$Fp
            org.bouncycastle.math.ec.ECFieldElement r0 = r0.getValue()
            java.math.BigInteger r0 = r0.toBigInteger()
            org.bouncycastle.math.ec.ECFieldElement r3 = r3.getValue()
            java.math.BigInteger r3 = r3.toBigInteger()
            r2.<init>(r14, r0, r3)
        L4c:
            r13.curve = r2
            goto Lf3
        L50:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r13.fieldIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.x9.X9Curve.characteristic_two_field
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto Lf3
            org.bouncycastle.asn1.DERObject r14 = r14.getParameters()
            org.bouncycastle.asn1.DERSequence r14 = (org.bouncycastle.asn1.DERSequence) r14
            org.bouncycastle.asn1.DEREncodable r0 = r14.getObjectAt(r3)
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            org.bouncycastle.asn1.DEREncodable r4 = r14.getObjectAt(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r4 = (org.bouncycastle.asn1.DERObjectIdentifier) r4
            org.bouncycastle.asn1.DERObjectIdentifier r5 = org.bouncycastle.asn1.x9.X9Curve.tpBasis
            boolean r4 = r4.equals(r5)
            org.bouncycastle.asn1.DEREncodable r14 = r14.getObjectAt(r1)
            if (r4 == 0) goto L8d
            org.bouncycastle.asn1.DERInteger r14 = (org.bouncycastle.asn1.DERInteger) r14
            java.math.BigInteger r14 = r14.getValue()
            int r14 = r14.intValue()
            r10 = 0
            r11 = 0
            goto Lbc
        L8d:
            org.bouncycastle.asn1.DERSequence r14 = (org.bouncycastle.asn1.DERSequence) r14
            org.bouncycastle.asn1.DEREncodable r4 = r14.getObjectAt(r3)
            org.bouncycastle.asn1.DERInteger r4 = (org.bouncycastle.asn1.DERInteger) r4
            java.math.BigInteger r4 = r4.getValue()
            int r4 = r4.intValue()
            org.bouncycastle.asn1.DEREncodable r5 = r14.getObjectAt(r2)
            org.bouncycastle.asn1.DERInteger r5 = (org.bouncycastle.asn1.DERInteger) r5
            java.math.BigInteger r5 = r5.getValue()
            int r5 = r5.intValue()
            org.bouncycastle.asn1.DEREncodable r14 = r14.getObjectAt(r1)
            org.bouncycastle.asn1.DERInteger r14 = (org.bouncycastle.asn1.DERInteger) r14
            java.math.BigInteger r14 = r14.getValue()
            int r14 = r14.intValue()
            r11 = r14
            r14 = r4
            r10 = r5
        Lbc:
            org.bouncycastle.asn1.x9.X9FieldElement r12 = new org.bouncycastle.asn1.x9.X9FieldElement
            org.bouncycastle.asn1.DEREncodable r3 = r15.getObjectAt(r3)
            r9 = r3
            org.bouncycastle.asn1.ASN1OctetString r9 = (org.bouncycastle.asn1.ASN1OctetString) r9
            r4 = r12
            r5 = r0
            r6 = r14
            r7 = r10
            r8 = r11
            r4.<init>(r5, r6, r7, r8, r9)
            org.bouncycastle.asn1.x9.X9FieldElement r3 = new org.bouncycastle.asn1.x9.X9FieldElement
            org.bouncycastle.asn1.DEREncodable r2 = r15.getObjectAt(r2)
            r9 = r2
            org.bouncycastle.asn1.ASN1OctetString r9 = (org.bouncycastle.asn1.ASN1OctetString) r9
            r4 = r3
            r4.<init>(r5, r6, r7, r8, r9)
            org.bouncycastle.math.ec.ECCurve$F2m r2 = new org.bouncycastle.math.ec.ECCurve$F2m
            org.bouncycastle.math.ec.ECFieldElement r4 = r12.getValue()
            java.math.BigInteger r9 = r4.toBigInteger()
            org.bouncycastle.math.ec.ECFieldElement r3 = r3.getValue()
            java.math.BigInteger r3 = r3.toBigInteger()
            r4 = r2
            r10 = r3
            r4.<init>(r5, r6, r7, r8, r9, r10)
            goto L4c
        Lf3:
            int r14 = r15.size()
            r0 = 3
            if (r14 != r0) goto L106
            org.bouncycastle.asn1.DEREncodable r14 = r15.getObjectAt(r1)
            org.bouncycastle.asn1.DERBitString r14 = (org.bouncycastle.asn1.DERBitString) r14
            byte[] r14 = r14.getBytes()
            r13.seed = r14
        L106:
            return
    }

    public X9Curve(org.bouncycastle.math.ec.ECCurve r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.fieldIdentifier = r0
            r1.curve = r2
            r1.seed = r0
            r1.setFieldIdentifier()
            return
    }

    public X9Curve(org.bouncycastle.math.ec.ECCurve r2, byte[] r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.fieldIdentifier = r0
            r1.curve = r2
            r1.seed = r3
            r1.setFieldIdentifier()
            return
    }

    private void setFieldIdentifier() {
            r2 = this;
            org.bouncycastle.math.ec.ECCurve r0 = r2.curve
            boolean r1 = r0 instanceof org.bouncycastle.math.ec.ECCurve.Fp
            if (r1 == 0) goto Lb
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x9.X9Curve.prime_field
        L8:
            r2.fieldIdentifier = r0
            goto L12
        Lb:
            boolean r0 = r0 instanceof org.bouncycastle.math.ec.ECCurve.F2m
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x9.X9Curve.characteristic_two_field
            goto L8
        L12:
            return
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "This type of ECCurve is not implemented"
            r0.<init>(r1)
            throw r0
    }

    public org.bouncycastle.math.ec.ECCurve getCurve() {
            r1 = this;
            org.bouncycastle.math.ec.ECCurve r0 = r1.curve
            return r0
    }

    public byte[] getSeed() {
            r1 = this;
            byte[] r0 = r1.seed
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r3.fieldIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.x9.X9Curve.prime_field
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L34
            org.bouncycastle.asn1.x9.X9FieldElement r1 = new org.bouncycastle.asn1.x9.X9FieldElement
            org.bouncycastle.math.ec.ECCurve r2 = r3.curve
            org.bouncycastle.math.ec.ECFieldElement r2 = r2.getA()
            r1.<init>(r2)
            org.bouncycastle.asn1.DERObject r1 = r1.getDERObject()
            r0.add(r1)
            org.bouncycastle.asn1.x9.X9FieldElement r1 = new org.bouncycastle.asn1.x9.X9FieldElement
            org.bouncycastle.math.ec.ECCurve r2 = r3.curve
            org.bouncycastle.math.ec.ECFieldElement r2 = r2.getB()
            r1.<init>(r2)
        L2c:
            org.bouncycastle.asn1.DERObject r1 = r1.getDERObject()
            r0.add(r1)
            goto L5c
        L34:
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r3.fieldIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.x9.X9Curve.characteristic_two_field
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L5c
            org.bouncycastle.asn1.x9.X9FieldElement r1 = new org.bouncycastle.asn1.x9.X9FieldElement
            org.bouncycastle.math.ec.ECCurve r2 = r3.curve
            org.bouncycastle.math.ec.ECFieldElement r2 = r2.getA()
            r1.<init>(r2)
            org.bouncycastle.asn1.DERObject r1 = r1.getDERObject()
            r0.add(r1)
            org.bouncycastle.asn1.x9.X9FieldElement r1 = new org.bouncycastle.asn1.x9.X9FieldElement
            org.bouncycastle.math.ec.ECCurve r2 = r3.curve
            org.bouncycastle.math.ec.ECFieldElement r2 = r2.getB()
            r1.<init>(r2)
            goto L2c
        L5c:
            byte[] r1 = r3.seed
            if (r1 == 0) goto L6a
            org.bouncycastle.asn1.DERBitString r1 = new org.bouncycastle.asn1.DERBitString
            byte[] r2 = r3.seed
            r1.<init>(r2)
            r0.add(r1)
        L6a:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
