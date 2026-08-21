package org.bouncycastle.asn1.cryptopro;

public class GOST28147Parameters extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ASN1OctetString iv;
    org.bouncycastle.asn1.DERObjectIdentifier paramSet;

    public GOST28147Parameters(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            java.util.Enumeration r2 = r2.getObjects()
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.ASN1OctetString r0 = (org.bouncycastle.asn1.ASN1OctetString) r0
            r1.iv = r0
            java.lang.Object r2 = r2.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = (org.bouncycastle.asn1.DERObjectIdentifier) r2
            r1.paramSet = r2
            return
    }

    public static org.bouncycastle.asn1.cryptopro.GOST28147Parameters getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cryptopro.GOST28147Parameters
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cryptopro.GOST28147Parameters r0 = new org.bouncycastle.asn1.cryptopro.GOST28147Parameters
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid GOST3410Parameter: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.cryptopro.GOST28147Parameters r3 = (org.bouncycastle.asn1.cryptopro.GOST28147Parameters) r3
            return r3
    }

    public static org.bouncycastle.asn1.cryptopro.GOST28147Parameters getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.cryptopro.GOST28147Parameters r0 = getInstance(r0)
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.iv
            r0.add(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.paramSet
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
