package org.bouncycastle.asn1.pkcs;

public class PKCS12PBEParams extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.DERInteger iterations;
    org.bouncycastle.asn1.ASN1OctetString iv;

    public PKCS12PBEParams(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1OctetString r0 = (org.bouncycastle.asn1.ASN1OctetString) r0
            r1.iv = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r2 = (org.bouncycastle.asn1.DERInteger) r2
            r1.iterations = r2
            return
    }

    public PKCS12PBEParams(byte[] r2, int r3) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DEROctetString r0 = new org.bouncycastle.asn1.DEROctetString
            r0.<init>(r2)
            r1.iv = r0
            org.bouncycastle.asn1.DERInteger r2 = new org.bouncycastle.asn1.DERInteger
            r2.<init>(r3)
            r1.iterations = r2
            return
    }

    public static org.bouncycastle.asn1.pkcs.PKCS12PBEParams getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.pkcs.PKCS12PBEParams
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.pkcs.PKCS12PBEParams r3 = (org.bouncycastle.asn1.pkcs.PKCS12PBEParams) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.pkcs.PKCS12PBEParams r0 = new org.bouncycastle.asn1.pkcs.PKCS12PBEParams
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
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
    }

    public byte[] getIV() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.iv
            byte[] r0 = r0.getOctets()
            return r0
    }

    public java.math.BigInteger getIterations() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.iterations
            java.math.BigInteger r0 = r0.getValue()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.iv
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r2.iterations
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
