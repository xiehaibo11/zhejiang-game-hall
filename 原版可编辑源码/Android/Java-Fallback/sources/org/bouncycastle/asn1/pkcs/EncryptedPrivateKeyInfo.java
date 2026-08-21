package org.bouncycastle.asn1.pkcs;

public class EncryptedPrivateKeyInfo extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier algId;
    private org.bouncycastle.asn1.ASN1OctetString data;

    public EncryptedPrivateKeyInfo(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            java.util.Enumeration r2 = r2.getObjects()
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r0)
            r1.algId = r0
            java.lang.Object r2 = r2.nextElement()
            org.bouncycastle.asn1.ASN1OctetString r2 = (org.bouncycastle.asn1.ASN1OctetString) r2
            r1.data = r2
            return
    }

    public EncryptedPrivateKeyInfo(org.bouncycastle.asn1.x509.AlgorithmIdentifier r1, byte[] r2) {
            r0 = this;
            r0.<init>()
            r0.algId = r1
            org.bouncycastle.asn1.DEROctetString r1 = new org.bouncycastle.asn1.DEROctetString
            r1.<init>(r2)
            r0.data = r1
            return
    }

    public static org.bouncycastle.asn1.pkcs.EncryptedPrivateKeyInfo getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.pkcs.EncryptedData
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.pkcs.EncryptedPrivateKeyInfo r3 = (org.bouncycastle.asn1.pkcs.EncryptedPrivateKeyInfo) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.pkcs.EncryptedPrivateKeyInfo r0 = new org.bouncycastle.asn1.pkcs.EncryptedPrivateKeyInfo
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

    public byte[] getEncryptedData() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.data
            byte[] r0 = r0.getOctets()
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getEncryptionAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.algId
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r2.algId
            r0.add(r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.data
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
