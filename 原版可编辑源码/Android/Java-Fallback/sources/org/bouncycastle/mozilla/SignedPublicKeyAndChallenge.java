package org.bouncycastle.mozilla;

public class SignedPublicKeyAndChallenge extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.mozilla.PublicKeyAndChallenge pkac;
    private org.bouncycastle.asn1.DERBitString signature;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier signatureAlgorithm;
    private org.bouncycastle.asn1.ASN1Sequence spkacSeq;

    public SignedPublicKeyAndChallenge(byte[] r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.ASN1Sequence r2 = toDERSequence(r2)
            r1.spkacSeq = r2
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.mozilla.PublicKeyAndChallenge r2 = org.bouncycastle.asn1.mozilla.PublicKeyAndChallenge.getInstance(r2)
            r1.pkac = r2
            org.bouncycastle.asn1.ASN1Sequence r2 = r1.spkacSeq
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = org.bouncycastle.asn1.x509.AlgorithmIdentifier.getInstance(r2)
            r1.signatureAlgorithm = r2
            org.bouncycastle.asn1.ASN1Sequence r2 = r1.spkacSeq
            r0 = 2
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERBitString r2 = (org.bouncycastle.asn1.DERBitString) r2
            r1.signature = r2
            return
    }

    private static org.bouncycastle.asn1.ASN1Sequence toDERSequence(byte[] r1) {
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream     // Catch: java.lang.Exception -> L11
            r0.<init>(r1)     // Catch: java.lang.Exception -> L11
            org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L11
            r1.<init>(r0)     // Catch: java.lang.Exception -> L11
            org.bouncycastle.asn1.DERObject r1 = r1.readObject()     // Catch: java.lang.Exception -> L11
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1     // Catch: java.lang.Exception -> L11
            return r1
        L11:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "badly encoded request"
            r1.<init>(r0)
            throw r1
    }

    public java.security.PublicKey getPublicKey(java.lang.String r4) throws java.security.NoSuchAlgorithmException, java.security.NoSuchProviderException, java.security.InvalidKeyException {
            r3 = this;
            org.bouncycastle.asn1.mozilla.PublicKeyAndChallenge r0 = r3.pkac
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = r0.getSubjectPublicKeyInfo()
            org.bouncycastle.asn1.DERBitString r1 = new org.bouncycastle.asn1.DERBitString     // Catch: java.security.spec.InvalidKeySpecException -> L29
            r1.<init>(r0)     // Catch: java.security.spec.InvalidKeySpecException -> L29
            java.security.spec.X509EncodedKeySpec r2 = new java.security.spec.X509EncodedKeySpec     // Catch: java.security.spec.InvalidKeySpecException -> L29
            byte[] r1 = r1.getBytes()     // Catch: java.security.spec.InvalidKeySpecException -> L29
            r2.<init>(r1)     // Catch: java.security.spec.InvalidKeySpecException -> L29
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getAlgorithmId()     // Catch: java.security.spec.InvalidKeySpecException -> L29
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getObjectId()     // Catch: java.security.spec.InvalidKeySpecException -> L29
            java.lang.String r0 = r0.getId()     // Catch: java.security.spec.InvalidKeySpecException -> L29
            java.security.KeyFactory r4 = java.security.KeyFactory.getInstance(r0, r4)     // Catch: java.security.spec.InvalidKeySpecException -> L29
            java.security.PublicKey r4 = r4.generatePublic(r2)     // Catch: java.security.spec.InvalidKeySpecException -> L29
            return r4
        L29:
            java.security.InvalidKeyException r4 = new java.security.InvalidKeyException
            java.lang.String r0 = "error encoding public key"
            r4.<init>(r0)
            throw r4
    }

    public org.bouncycastle.asn1.mozilla.PublicKeyAndChallenge getPublicKeyAndChallenge() {
            r1 = this;
            org.bouncycastle.asn1.mozilla.PublicKeyAndChallenge r0 = r1.pkac
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.spkacSeq
            return r0
    }

    public boolean verify(java.lang.String r3) throws java.security.NoSuchAlgorithmException, java.security.SignatureException, java.security.NoSuchProviderException, java.security.InvalidKeyException {
            r2 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r2.signatureAlgorithm
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getObjectId()
            java.lang.String r0 = r0.getId()
            java.security.Signature r0 = java.security.Signature.getInstance(r0, r3)
            java.security.PublicKey r3 = r2.getPublicKey(r3)
            r0.initVerify(r3)
            org.bouncycastle.asn1.DERBitString r3 = new org.bouncycastle.asn1.DERBitString
            org.bouncycastle.asn1.mozilla.PublicKeyAndChallenge r1 = r2.pkac
            r3.<init>(r1)
            byte[] r3 = r3.getBytes()
            r0.update(r3)
            org.bouncycastle.asn1.DERBitString r3 = r2.signature
            byte[] r3 = r3.getBytes()
            boolean r3 = r0.verify(r3)
            return r3
    }
}
