package org.bouncycastle.asn1.pkcs;

public class MacData extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.x509.DigestInfo digInfo;
    java.math.BigInteger iterationCount;
    byte[] salt;

    public MacData(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.x509.DigestInfo r0 = org.bouncycastle.asn1.x509.DigestInfo.getInstance(r0)
            r2.digInfo = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1OctetString r0 = (org.bouncycastle.asn1.ASN1OctetString) r0
            byte[] r0 = r0.getOctets()
            r2.salt = r0
            int r0 = r3.size()
            r1 = 3
            if (r0 != r1) goto L2e
            r0 = 2
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r3 = (org.bouncycastle.asn1.DERInteger) r3
            java.math.BigInteger r3 = r3.getValue()
            goto L34
        L2e:
            r0 = 1
            java.math.BigInteger r3 = java.math.BigInteger.valueOf(r0)
        L34:
            r2.iterationCount = r3
            return
    }

    public MacData(org.bouncycastle.asn1.x509.DigestInfo r1, byte[] r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.digInfo = r1
            r0.salt = r2
            long r1 = (long) r3
            java.math.BigInteger r1 = java.math.BigInteger.valueOf(r1)
            r0.iterationCount = r1
            return
    }

    public static org.bouncycastle.asn1.pkcs.MacData getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.pkcs.MacData
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.pkcs.MacData r3 = (org.bouncycastle.asn1.pkcs.MacData) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.pkcs.MacData r0 = new org.bouncycastle.asn1.pkcs.MacData
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
            java.math.BigInteger r0 = r1.iterationCount
            return r0
    }

    public org.bouncycastle.asn1.x509.DigestInfo getMac() {
            r1 = this;
            org.bouncycastle.asn1.x509.DigestInfo r0 = r1.digInfo
            return r0
    }

    public byte[] getSalt() {
            r1 = this;
            byte[] r0 = r1.salt
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.DigestInfo r1 = r3.digInfo
            r0.add(r1)
            org.bouncycastle.asn1.DEROctetString r1 = new org.bouncycastle.asn1.DEROctetString
            byte[] r2 = r3.salt
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r2 = r3.iterationCount
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
