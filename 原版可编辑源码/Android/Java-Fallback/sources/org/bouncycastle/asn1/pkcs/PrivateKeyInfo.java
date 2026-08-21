package org.bouncycastle.asn1.pkcs;

public class PrivateKeyInfo extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier algId;
    private org.bouncycastle.asn1.ASN1Set attributes;
    private org.bouncycastle.asn1.DERObject privKey;

    public PrivateKeyInfo(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            java.util.Enumeration r3 = r3.getObjects()
            java.lang.Object r0 = r3.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            if (r0 != 0) goto L55
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            java.lang.Object r1 = r3.nextElement()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            r2.algId = r0
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.io.IOException -> L4d
            java.lang.Object r1 = r3.nextElement()     // Catch: java.io.IOException -> L4d
            org.bouncycastle.asn1.ASN1OctetString r1 = (org.bouncycastle.asn1.ASN1OctetString) r1     // Catch: java.io.IOException -> L4d
            byte[] r1 = r1.getOctets()     // Catch: java.io.IOException -> L4d
            r0.<init>(r1)     // Catch: java.io.IOException -> L4d
            org.bouncycastle.asn1.DERObject r0 = r0.readObject()     // Catch: java.io.IOException -> L4d
            r2.privKey = r0     // Catch: java.io.IOException -> L4d
            boolean r0 = r3.hasMoreElements()
            if (r0 == 0) goto L4c
            java.lang.Object r3 = r3.nextElement()
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            r0 = 0
            org.bouncycastle.asn1.ASN1Set r3 = org.bouncycastle.asn1.ASN1Set.getInstance(r3, r0)
            r2.attributes = r3
        L4c:
            return
        L4d:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Error recoverying private key from sequence"
            r3.<init>(r0)
            throw r3
        L55:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "wrong version for private key info"
            r3.<init>(r0)
            throw r3
    }

    public PrivateKeyInfo(org.bouncycastle.asn1.x509.AlgorithmIdentifier r2, org.bouncycastle.asn1.DERObject r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public PrivateKeyInfo(org.bouncycastle.asn1.x509.AlgorithmIdentifier r1, org.bouncycastle.asn1.DERObject r2, org.bouncycastle.asn1.ASN1Set r3) {
            r0 = this;
            r0.<init>()
            r0.privKey = r2
            r0.algId = r1
            r0.attributes = r3
            return
    }

    public static org.bouncycastle.asn1.pkcs.PrivateKeyInfo getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.pkcs.PrivateKeyInfo
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.pkcs.PrivateKeyInfo r3 = (org.bouncycastle.asn1.pkcs.PrivateKeyInfo) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.pkcs.PrivateKeyInfo r0 = new org.bouncycastle.asn1.pkcs.PrivateKeyInfo
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

    public static org.bouncycastle.asn1.pkcs.PrivateKeyInfo getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.pkcs.PrivateKeyInfo r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getAlgorithmId() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.algId
            return r0
    }

    public org.bouncycastle.asn1.ASN1Set getAttributes() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Set r0 = r1.attributes
            return r0
    }

    public org.bouncycastle.asn1.DERObject getPrivateKey() {
            r1 = this;
            org.bouncycastle.asn1.DERObject r0 = r1.privKey
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r2 = 0
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r4.algId
            r0.add(r1)
            org.bouncycastle.asn1.DEROctetString r1 = new org.bouncycastle.asn1.DEROctetString
            org.bouncycastle.asn1.DERObject r3 = r4.privKey
            r1.<init>(r3)
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Set r1 = r4.attributes
            if (r1 == 0) goto L2b
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.ASN1Set r3 = r4.attributes
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L2b:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
