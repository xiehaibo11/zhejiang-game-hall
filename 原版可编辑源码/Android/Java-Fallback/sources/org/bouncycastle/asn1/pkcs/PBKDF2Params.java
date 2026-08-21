package org.bouncycastle.asn1.pkcs;

public class PBKDF2Params extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.DERInteger iterationCount;
    org.bouncycastle.asn1.DERInteger keyLength;
    org.bouncycastle.asn1.ASN1OctetString octStr;

    public PBKDF2Params(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            java.util.Enumeration r2 = r2.getObjects()
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.ASN1OctetString r0 = (org.bouncycastle.asn1.ASN1OctetString) r0
            r1.octStr = r0
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            r1.iterationCount = r0
            boolean r0 = r2.hasMoreElements()
            if (r0 == 0) goto L24
            java.lang.Object r2 = r2.nextElement()
            org.bouncycastle.asn1.DERInteger r2 = (org.bouncycastle.asn1.DERInteger) r2
            goto L25
        L24:
            r2 = 0
        L25:
            r1.keyLength = r2
            return
    }

    public PBKDF2Params(byte[] r2, int r3) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DEROctetString r0 = new org.bouncycastle.asn1.DEROctetString
            r0.<init>(r2)
            r1.octStr = r0
            org.bouncycastle.asn1.DERInteger r2 = new org.bouncycastle.asn1.DERInteger
            r2.<init>(r3)
            r1.iterationCount = r2
            return
    }

    public static org.bouncycastle.asn1.pkcs.PBKDF2Params getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.pkcs.PBKDF2Params
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.pkcs.PBKDF2Params r3 = (org.bouncycastle.asn1.pkcs.PBKDF2Params) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.pkcs.PBKDF2Params r0 = new org.bouncycastle.asn1.pkcs.PBKDF2Params
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

    public java.math.BigInteger getIterationCount() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.iterationCount
            java.math.BigInteger r0 = r0.getValue()
            return r0
    }

    public java.math.BigInteger getKeyLength() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.keyLength
            if (r0 == 0) goto L9
            java.math.BigInteger r0 = r0.getValue()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public byte[] getSalt() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.octStr
            byte[] r0 = r0.getOctets()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.octStr
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r2.iterationCount
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r2.keyLength
            if (r1 == 0) goto L16
            r0.add(r1)
        L16:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
