package org.bouncycastle.asn1.pkcs;

public class EncryptedData extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.DERObjectIdentifier bagId;
    org.bouncycastle.asn1.DERObject bagValue;
    org.bouncycastle.asn1.ASN1Sequence data;

    public EncryptedData(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            if (r0 != 0) goto L1e
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1Sequence r2 = (org.bouncycastle.asn1.ASN1Sequence) r2
            r1.data = r2
            return
        L1e:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "sequence not version 0"
            r2.<init>(r0)
            throw r2
    }

    public EncryptedData(org.bouncycastle.asn1.DERObjectIdentifier r2, org.bouncycastle.asn1.x509.AlgorithmIdentifier r3, org.bouncycastle.asn1.DEREncodable r4) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            r0.add(r2)
            org.bouncycastle.asn1.DERObject r2 = r3.getDERObject()
            r0.add(r2)
            org.bouncycastle.asn1.BERTaggedObject r2 = new org.bouncycastle.asn1.BERTaggedObject
            r3 = 0
            r2.<init>(r3, r3, r4)
            r0.add(r2)
            org.bouncycastle.asn1.BERSequence r2 = new org.bouncycastle.asn1.BERSequence
            r2.<init>(r0)
            r1.data = r2
            return
    }

    public static org.bouncycastle.asn1.pkcs.EncryptedData getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.pkcs.EncryptedData
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.pkcs.EncryptedData r3 = (org.bouncycastle.asn1.pkcs.EncryptedData) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.pkcs.EncryptedData r0 = new org.bouncycastle.asn1.pkcs.EncryptedData
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

    public org.bouncycastle.asn1.ASN1OctetString getContent() {
            r2 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r2.data
            int r0 = r0.size()
            r1 = 3
            if (r0 != r1) goto L1b
            org.bouncycastle.asn1.ASN1Sequence r0 = r2.data
            r1 = 2
            org.bouncycastle.asn1.DEREncodable r0 = r0.getObjectAt(r1)
            org.bouncycastle.asn1.DERTaggedObject r0 = (org.bouncycastle.asn1.DERTaggedObject) r0
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.ASN1OctetString r0 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r0)
            return r0
        L1b:
            r0 = 0
            return r0
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getContentType() {
            r2 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r2.data
            r1 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r0.getObjectAt(r1)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getEncryptionAlgorithm() {
            r2 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r2.data
            r1 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r0.getObjectAt(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r2 = 0
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r3.data
            r0.add(r1)
            org.bouncycastle.asn1.BERSequence r1 = new org.bouncycastle.asn1.BERSequence
            r1.<init>(r0)
            return r1
    }
}
