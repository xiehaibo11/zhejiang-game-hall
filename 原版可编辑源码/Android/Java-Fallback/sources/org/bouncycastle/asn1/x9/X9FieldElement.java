package org.bouncycastle.asn1.x9;

public class X9FieldElement extends org.bouncycastle.asn1.ASN1Encodable {
    private static org.bouncycastle.asn1.x9.X9IntegerConverter converter;
    protected org.bouncycastle.math.ec.ECFieldElement f;

    static {
            org.bouncycastle.asn1.x9.X9IntegerConverter r0 = new org.bouncycastle.asn1.x9.X9IntegerConverter
            r0.<init>()
            org.bouncycastle.asn1.x9.X9FieldElement.converter = r0
            return
    }

    public X9FieldElement(int r8, int r9, int r10, int r11, org.bouncycastle.asn1.ASN1OctetString r12) {
            r7 = this;
            org.bouncycastle.math.ec.ECFieldElement$F2m r6 = new org.bouncycastle.math.ec.ECFieldElement$F2m
            java.math.BigInteger r5 = new java.math.BigInteger
            byte[] r12 = r12.getOctets()
            r0 = 1
            r5.<init>(r0, r12)
            r0 = r6
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r0.<init>(r1, r2, r3, r4, r5)
            r7.<init>(r6)
            return
    }

    public X9FieldElement(java.math.BigInteger r4, org.bouncycastle.asn1.ASN1OctetString r5) {
            r3 = this;
            org.bouncycastle.math.ec.ECFieldElement$Fp r0 = new org.bouncycastle.math.ec.ECFieldElement$Fp
            java.math.BigInteger r1 = new java.math.BigInteger
            byte[] r5 = r5.getOctets()
            r2 = 1
            r1.<init>(r2, r5)
            r0.<init>(r4, r1)
            r3.<init>(r0)
            return
    }

    public X9FieldElement(org.bouncycastle.math.ec.ECFieldElement r1) {
            r0 = this;
            r0.<init>()
            r0.f = r1
            return
    }

    public org.bouncycastle.math.ec.ECFieldElement getValue() {
            r1 = this;
            org.bouncycastle.math.ec.ECFieldElement r0 = r1.f
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r3 = this;
            org.bouncycastle.asn1.x9.X9IntegerConverter r0 = org.bouncycastle.asn1.x9.X9FieldElement.converter
            org.bouncycastle.math.ec.ECFieldElement r1 = r3.f
            int r0 = r0.getByteLength(r1)
            org.bouncycastle.asn1.x9.X9IntegerConverter r1 = org.bouncycastle.asn1.x9.X9FieldElement.converter
            org.bouncycastle.math.ec.ECFieldElement r2 = r3.f
            java.math.BigInteger r2 = r2.toBigInteger()
            byte[] r0 = r1.integerToBytes(r2, r0)
            org.bouncycastle.asn1.DEROctetString r1 = new org.bouncycastle.asn1.DEROctetString
            r1.<init>(r0)
            return r1
    }
}
