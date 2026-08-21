package org.bouncycastle.asn1.isismtt.x509;

public class DeclarationOfMajority extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    public static final int dateOfBirth = 2;
    public static final int fullAgeAtCountry = 1;
    public static final int notYoungerThan = 0;
    private org.bouncycastle.asn1.ASN1TaggedObject declaration;

    public DeclarationOfMajority(int r3) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r3)
            r3 = 0
            r0.<init>(r3, r3, r1)
            r2.declaration = r0
            return
    }

    private DeclarationOfMajority(org.bouncycastle.asn1.ASN1TaggedObject r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.getTagNo()
            r1 = 2
            if (r0 > r1) goto Ld
            r3.declaration = r4
            return
        Ld:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad tag number: "
            r1.append(r2)
            int r4 = r4.getTagNo()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public DeclarationOfMajority(org.bouncycastle.asn1.DERGeneralizedTime r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r1 = 0
            r2 = 2
            r0.<init>(r1, r2, r4)
            r3.declaration = r0
            return
    }

    public DeclarationOfMajority(boolean r5, java.lang.String r6) {
            r4 = this;
            r4.<init>()
            int r0 = r6.length()
            r1 = 2
            if (r0 > r1) goto L3f
            r0 = 0
            r1 = 1
            if (r5 == 0) goto L20
            org.bouncycastle.asn1.DERTaggedObject r5 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            org.bouncycastle.asn1.DERPrintableString r3 = new org.bouncycastle.asn1.DERPrintableString
            r3.<init>(r6, r1)
            r2.<init>(r3)
            r5.<init>(r0, r1, r2)
            r4.declaration = r5
            goto L3e
        L20:
            org.bouncycastle.asn1.ASN1EncodableVector r5 = new org.bouncycastle.asn1.ASN1EncodableVector
            r5.<init>()
            org.bouncycastle.asn1.DERBoolean r2 = org.bouncycastle.asn1.DERBoolean.FALSE
            r5.add(r2)
            org.bouncycastle.asn1.DERPrintableString r2 = new org.bouncycastle.asn1.DERPrintableString
            r2.<init>(r6, r1)
            r5.add(r2)
            org.bouncycastle.asn1.DERTaggedObject r6 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r5)
            r6.<init>(r0, r1, r2)
            r4.declaration = r6
        L3e:
            return
        L3f:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "country can only be 2 characters"
            r5.<init>(r6)
            throw r5
    }

    public static org.bouncycastle.asn1.isismtt.x509.DeclarationOfMajority getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.isismtt.x509.DeclarationOfMajority
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.isismtt.x509.DeclarationOfMajority r0 = new org.bouncycastle.asn1.isismtt.x509.DeclarationOfMajority
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "illegal object in getInstance: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.isismtt.x509.DeclarationOfMajority r3 = (org.bouncycastle.asn1.isismtt.x509.DeclarationOfMajority) r3
            return r3
    }

    public org.bouncycastle.asn1.ASN1Sequence fullAgeAtCountry() {
            r2 = this;
            org.bouncycastle.asn1.ASN1TaggedObject r0 = r2.declaration
            int r0 = r0.getTagNo()
            r1 = 1
            if (r0 == r1) goto Lb
            r0 = 0
            return r0
        Lb:
            org.bouncycastle.asn1.ASN1TaggedObject r0 = r2.declaration
            r1 = 0
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            return r0
    }

    public org.bouncycastle.asn1.DERGeneralizedTime getDateOfBirth() {
            r2 = this;
            org.bouncycastle.asn1.ASN1TaggedObject r0 = r2.declaration
            int r0 = r0.getTagNo()
            r1 = 2
            if (r0 == r1) goto Lb
            r0 = 0
            return r0
        Lb:
            org.bouncycastle.asn1.ASN1TaggedObject r0 = r2.declaration
            r1 = 0
            org.bouncycastle.asn1.DERGeneralizedTime r0 = org.bouncycastle.asn1.DERGeneralizedTime.getInstance(r0, r1)
            return r0
    }

    public int getType() {
            r1 = this;
            org.bouncycastle.asn1.ASN1TaggedObject r0 = r1.declaration
            int r0 = r0.getTagNo()
            return r0
    }

    public int notYoungerThan() {
            r2 = this;
            org.bouncycastle.asn1.ASN1TaggedObject r0 = r2.declaration
            int r0 = r0.getTagNo()
            if (r0 == 0) goto La
            r0 = -1
            return r0
        La:
            org.bouncycastle.asn1.ASN1TaggedObject r0 = r2.declaration
            r1 = 0
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0, r1)
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ASN1TaggedObject r0 = r1.declaration
            return r0
    }
}
