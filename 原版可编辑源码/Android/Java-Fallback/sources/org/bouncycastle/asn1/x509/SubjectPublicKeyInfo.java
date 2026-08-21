package org.bouncycastle.asn1.x509;

public class SubjectPublicKeyInfo extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier algId;
    private org.bouncycastle.asn1.DERBitString keyData;

    public SubjectPublicKeyInfo(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 2
            if (r0 != r1) goto L23
            java.util.Enumeration r4 = r4.getObjects()
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r3.algId = r0
            java.lang.Object r4 = r4.nextElement()
            org.bouncycastle.asn1.DERBitString r4 = org.bouncycastle.asn1.DERBitString.getInstance(r4)
            r3.keyData = r4
            return
        L23:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad sequence size: "
            r1.append(r2)
            int r4 = r4.size()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public SubjectPublicKeyInfo(org.bouncycastle.asn1.x509.AlgorithmIdentifier r2, org.bouncycastle.asn1.DEREncodable r3) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DERBitString r0 = new org.bouncycastle.asn1.DERBitString
            r0.<init>(r3)
            r1.keyData = r0
            r1.algId = r2
            return
    }

    public SubjectPublicKeyInfo(org.bouncycastle.asn1.x509.AlgorithmIdentifier r2, byte[] r3) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DERBitString r0 = new org.bouncycastle.asn1.DERBitString
            r0.<init>(r3)
            r1.keyData = r0
            r1.algId = r2
            return
    }

    public static org.bouncycastle.asn1.x509.SubjectPublicKeyInfo getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.SubjectPublicKeyInfo
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r3 = (org.bouncycastle.asn1.x509.SubjectPublicKeyInfo) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo
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

    public static org.bouncycastle.asn1.x509.SubjectPublicKeyInfo getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getAlgorithmId() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.algId
            return r0
    }

    public org.bouncycastle.asn1.DERObject getPublicKey() throws java.io.IOException {
            r2 = this;
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            org.bouncycastle.asn1.DERBitString r1 = r2.keyData
            byte[] r1 = r1.getBytes()
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r0 = r0.readObject()
            return r0
    }

    public org.bouncycastle.asn1.DERBitString getPublicKeyData() {
            r1 = this;
            org.bouncycastle.asn1.DERBitString r0 = r1.keyData
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r2.algId
            r0.add(r1)
            org.bouncycastle.asn1.DERBitString r1 = r2.keyData
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
