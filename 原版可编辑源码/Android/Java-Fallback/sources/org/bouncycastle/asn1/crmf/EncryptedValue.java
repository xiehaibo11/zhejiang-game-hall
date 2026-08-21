package org.bouncycastle.asn1.crmf;

public class EncryptedValue extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERBitString encSymmKey;
    private org.bouncycastle.asn1.DERBitString encValue;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier intendedAlg;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier keyAlg;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier symmAlg;
    private org.bouncycastle.asn1.ASN1OctetString valueHint;

    private EncryptedValue(org.bouncycastle.asn1.ASN1Sequence r6) {
            r5 = this;
            r5.<init>()
            r0 = 0
            r1 = 0
        L5:
            org.bouncycastle.asn1.DEREncodable r2 = r6.getObjectAt(r1)
            boolean r2 = r2 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r2 == 0) goto L4b
            org.bouncycastle.asn1.DEREncodable r2 = r6.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1TaggedObject r2 = (org.bouncycastle.asn1.ASN1TaggedObject) r2
            int r3 = r2.getTagNo()
            if (r3 == 0) goto L42
            r4 = 1
            if (r3 == r4) goto L3b
            r4 = 2
            if (r3 == r4) goto L34
            r4 = 3
            if (r3 == r4) goto L2d
            r4 = 4
            if (r3 == r4) goto L26
            goto L48
        L26:
            org.bouncycastle.asn1.ASN1OctetString r2 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r2, r0)
            r5.valueHint = r2
            goto L48
        L2d:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r2, r0)
            r5.keyAlg = r2
            goto L48
        L34:
            org.bouncycastle.asn1.DERBitString r2 = org.bouncycastle.asn1.DERBitString.getInstance(r2, r0)
            r5.encSymmKey = r2
            goto L48
        L3b:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r2, r0)
            r5.symmAlg = r2
            goto L48
        L42:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r2, r0)
            r5.intendedAlg = r2
        L48:
            int r1 = r1 + 1
            goto L5
        L4b:
            org.bouncycastle.asn1.DEREncodable r6 = r6.getObjectAt(r1)
            org.bouncycastle.asn1.DERBitString r6 = org.bouncycastle.asn1.DERBitString.getInstance(r6)
            r5.encValue = r6
            return
    }

    private void addOptional(org.bouncycastle.asn1.ASN1EncodableVector r3, int r4, org.bouncycastle.asn1.ASN1Encodable r5) {
            r2 = this;
            if (r5 == 0) goto Lb
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r1 = 0
            r0.<init>(r1, r4, r5)
            r3.add(r0)
        Lb:
            return
    }

    public static org.bouncycastle.asn1.crmf.EncryptedValue getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.crmf.EncryptedValue
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.crmf.EncryptedValue r3 = (org.bouncycastle.asn1.crmf.EncryptedValue) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.crmf.EncryptedValue r0 = new org.bouncycastle.asn1.crmf.EncryptedValue
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid object: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r3.intendedAlg
            r2 = 0
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r3.symmAlg
            r2 = 1
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.DERBitString r1 = r3.encSymmKey
            r2 = 2
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r3.keyAlg
            r2 = 3
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r3.valueHint
            r2 = 4
            r3.addOptional(r0, r2, r1)
            org.bouncycastle.asn1.DERBitString r1 = r3.encValue
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
