package org.bouncycastle.jce.netscape;

public class NetscapeCertRequest extends org.bouncycastle.asn1.ASN1Encodable {
    java.lang.String challenge;
    org.bouncycastle.asn1.DERBitString content;
    org.bouncycastle.asn1.x509.AlgorithmIdentifier keyAlg;
    java.security.PublicKey pubkey;
    org.bouncycastle.asn1.x509.AlgorithmIdentifier sigAlg;
    byte[] sigBits;

    public NetscapeCertRequest(java.lang.String r1, org.bouncycastle.asn1.x509.AlgorithmIdentifier r2, java.security.PublicKey r3) throws java.security.NoSuchAlgorithmException, java.security.spec.InvalidKeySpecException, java.security.NoSuchProviderException {
            r0 = this;
            r0.<init>()
            r0.challenge = r1
            r0.sigAlg = r2
            r0.pubkey = r3
            org.bouncycastle.asn1.ASN1EncodableVector r2 = new org.bouncycastle.asn1.ASN1EncodableVector
            r2.<init>()
            org.bouncycastle.asn1.DERObject r3 = r0.getKeySpec()
            r2.add(r3)
            org.bouncycastle.asn1.DERIA5String r3 = new org.bouncycastle.asn1.DERIA5String
            r3.<init>(r1)
            r2.add(r3)
            org.bouncycastle.asn1.DERBitString r1 = new org.bouncycastle.asn1.DERBitString
            org.bouncycastle.asn1.DERSequence r3 = new org.bouncycastle.asn1.DERSequence
            r3.<init>(r2)
            r1.<init>(r3)
            r0.content = r1
            return
    }

    public NetscapeCertRequest(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            int r0 = r5.size()     // Catch: java.lang.Exception -> Laf
            r1 = 3
            if (r0 != r1) goto L94
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier     // Catch: java.lang.Exception -> Laf
            r1 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r5.getObjectAt(r1)     // Catch: java.lang.Exception -> Laf
            org.bouncycastle.asn1.ASN1Sequence r2 = (org.bouncycastle.asn1.ASN1Sequence) r2     // Catch: java.lang.Exception -> Laf
            r0.<init>(r2)     // Catch: java.lang.Exception -> Laf
            r4.sigAlg = r0     // Catch: java.lang.Exception -> Laf
            r0 = 2
            org.bouncycastle.asn1.DEREncodable r2 = r5.getObjectAt(r0)     // Catch: java.lang.Exception -> Laf
            org.bouncycastle.asn1.DERBitString r2 = (org.bouncycastle.asn1.DERBitString) r2     // Catch: java.lang.Exception -> Laf
            byte[] r2 = r2.getBytes()     // Catch: java.lang.Exception -> Laf
            r4.sigBits = r2     // Catch: java.lang.Exception -> Laf
            r2 = 0
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r2)     // Catch: java.lang.Exception -> Laf
            org.bouncycastle.asn1.ASN1Sequence r5 = (org.bouncycastle.asn1.ASN1Sequence) r5     // Catch: java.lang.Exception -> Laf
            int r3 = r5.size()     // Catch: java.lang.Exception -> Laf
            if (r3 != r0) goto L79
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r1)     // Catch: java.lang.Exception -> Laf
            org.bouncycastle.asn1.DERIA5String r0 = (org.bouncycastle.asn1.DERIA5String) r0     // Catch: java.lang.Exception -> Laf
            java.lang.String r0 = r0.getString()     // Catch: java.lang.Exception -> Laf
            r4.challenge = r0     // Catch: java.lang.Exception -> Laf
            org.bouncycastle.asn1.DERBitString r0 = new org.bouncycastle.asn1.DERBitString     // Catch: java.lang.Exception -> Laf
            r0.<init>(r5)     // Catch: java.lang.Exception -> Laf
            r4.content = r0     // Catch: java.lang.Exception -> Laf
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo     // Catch: java.lang.Exception -> Laf
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r2)     // Catch: java.lang.Exception -> Laf
            org.bouncycastle.asn1.ASN1Sequence r5 = (org.bouncycastle.asn1.ASN1Sequence) r5     // Catch: java.lang.Exception -> Laf
            r0.<init>(r5)     // Catch: java.lang.Exception -> Laf
            java.security.spec.X509EncodedKeySpec r5 = new java.security.spec.X509EncodedKeySpec     // Catch: java.lang.Exception -> Laf
            org.bouncycastle.asn1.DERBitString r1 = new org.bouncycastle.asn1.DERBitString     // Catch: java.lang.Exception -> Laf
            r1.<init>(r0)     // Catch: java.lang.Exception -> Laf
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Exception -> Laf
            r5.<init>(r1)     // Catch: java.lang.Exception -> Laf
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getAlgorithmId()     // Catch: java.lang.Exception -> Laf
            r4.keyAlg = r0     // Catch: java.lang.Exception -> Laf
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getObjectId()     // Catch: java.lang.Exception -> Laf
            java.lang.String r0 = r0.getId()     // Catch: java.lang.Exception -> Laf
            java.lang.String r1 = "BC"
            java.security.KeyFactory r0 = java.security.KeyFactory.getInstance(r0, r1)     // Catch: java.lang.Exception -> Laf
            java.security.PublicKey r5 = r0.generatePublic(r5)     // Catch: java.lang.Exception -> Laf
            r4.pubkey = r5     // Catch: java.lang.Exception -> Laf
            return
        L79:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException     // Catch: java.lang.Exception -> Laf
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Laf
            r1.<init>()     // Catch: java.lang.Exception -> Laf
            java.lang.String r2 = "invalid PKAC (len): "
            r1.append(r2)     // Catch: java.lang.Exception -> Laf
            int r5 = r5.size()     // Catch: java.lang.Exception -> Laf
            r1.append(r5)     // Catch: java.lang.Exception -> Laf
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Exception -> Laf
            r0.<init>(r5)     // Catch: java.lang.Exception -> Laf
            throw r0     // Catch: java.lang.Exception -> Laf
        L94:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException     // Catch: java.lang.Exception -> Laf
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Laf
            r1.<init>()     // Catch: java.lang.Exception -> Laf
            java.lang.String r2 = "invalid SPKAC (size):"
            r1.append(r2)     // Catch: java.lang.Exception -> Laf
            int r5 = r5.size()     // Catch: java.lang.Exception -> Laf
            r1.append(r5)     // Catch: java.lang.Exception -> Laf
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Exception -> Laf
            r0.<init>(r5)     // Catch: java.lang.Exception -> Laf
            throw r0     // Catch: java.lang.Exception -> Laf
        Laf:
            r5 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r5 = r5.toString()
            r0.<init>(r5)
            throw r0
    }

    public NetscapeCertRequest(byte[] r1) throws java.io.IOException {
            r0 = this;
            org.bouncycastle.asn1.ASN1Sequence r1 = getReq(r1)
            r0.<init>(r1)
            return
    }

    private org.bouncycastle.asn1.DERObject getKeySpec() throws java.security.NoSuchAlgorithmException, java.security.spec.InvalidKeySpecException, java.security.NoSuchProviderException {
            r3 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            java.security.PublicKey r1 = r3.pubkey     // Catch: java.io.IOException -> L24
            byte[] r1 = r1.getEncoded()     // Catch: java.io.IOException -> L24
            r0.write(r1)     // Catch: java.io.IOException -> L24
            r0.close()     // Catch: java.io.IOException -> L24
            org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.io.IOException -> L24
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream     // Catch: java.io.IOException -> L24
            byte[] r0 = r0.toByteArray()     // Catch: java.io.IOException -> L24
            r2.<init>(r0)     // Catch: java.io.IOException -> L24
            r1.<init>(r2)     // Catch: java.io.IOException -> L24
            org.bouncycastle.asn1.DERObject r0 = r1.readObject()     // Catch: java.io.IOException -> L24
            return r0
        L24:
            r0 = move-exception
            java.security.spec.InvalidKeySpecException r1 = new java.security.spec.InvalidKeySpecException
            java.lang.String r0 = r0.getMessage()
            r1.<init>(r0)
            throw r1
    }

    private static org.bouncycastle.asn1.ASN1Sequence getReq(byte[] r2) throws java.io.IOException {
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream
            r1.<init>(r2)
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r2 = r0.readObject()
            org.bouncycastle.asn1.ASN1Sequence r2 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r2)
            return r2
    }

    public java.lang.String getChallenge() {
            r1 = this;
            java.lang.String r0 = r1.challenge
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getKeyAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.keyAlg
            return r0
    }

    public java.security.PublicKey getPublicKey() {
            r1 = this;
            java.security.PublicKey r0 = r1.pubkey
            return r0
    }

    public org.bouncycastle.asn1.x509.AlgorithmIdentifier getSigningAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r1.sigAlg
            return r0
    }

    public void setChallenge(java.lang.String r1) {
            r0 = this;
            r0.challenge = r1
            return
    }

    public void setKeyAlgorithm(org.bouncycastle.asn1.x509.AlgorithmIdentifier r1) {
            r0 = this;
            r0.keyAlg = r1
            return
    }

    public void setPublicKey(java.security.PublicKey r1) {
            r0 = this;
            r0.pubkey = r1
            return
    }

    public void setSigningAlgorithm(org.bouncycastle.asn1.x509.AlgorithmIdentifier r1) {
            r0 = this;
            r0.sigAlg = r1
            return
    }

    public void sign(java.security.PrivateKey r2) throws java.security.NoSuchAlgorithmException, java.security.InvalidKeyException, java.security.SignatureException, java.security.NoSuchProviderException, java.security.spec.InvalidKeySpecException {
            r1 = this;
            r0 = 0
            r1.sign(r2, r0)
            return
    }

    public void sign(java.security.PrivateKey r5, java.security.SecureRandom r6) throws java.security.NoSuchAlgorithmException, java.security.InvalidKeyException, java.security.SignatureException, java.security.NoSuchProviderException, java.security.spec.InvalidKeySpecException {
            r4 = this;
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r4.sigAlg
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getObjectId()
            java.lang.String r0 = r0.getId()
            java.lang.String r1 = "BC"
            java.security.Signature r0 = java.security.Signature.getInstance(r0, r1)
            if (r6 == 0) goto L16
            r0.initSign(r5, r6)
            goto L19
        L16:
            r0.initSign(r5)
        L19:
            java.io.ByteArrayOutputStream r5 = new java.io.ByteArrayOutputStream
            r5.<init>()
            org.bouncycastle.asn1.DEROutputStream r6 = new org.bouncycastle.asn1.DEROutputStream
            r6.<init>(r5)
            org.bouncycastle.asn1.ASN1EncodableVector r1 = new org.bouncycastle.asn1.ASN1EncodableVector
            r1.<init>()
            org.bouncycastle.asn1.DERObject r2 = r4.getKeySpec()
            r1.add(r2)
            org.bouncycastle.asn1.DERIA5String r2 = new org.bouncycastle.asn1.DERIA5String
            java.lang.String r3 = r4.challenge
            r2.<init>(r3)
            r1.add(r2)
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence     // Catch: java.io.IOException -> L52
            r2.<init>(r1)     // Catch: java.io.IOException -> L52
            r6.writeObject(r2)     // Catch: java.io.IOException -> L52
            r6.close()     // Catch: java.io.IOException -> L52
            byte[] r5 = r5.toByteArray()
            r0.update(r5)
            byte[] r5 = r0.sign()
            r4.sigBits = r5
            return
        L52:
            r5 = move-exception
            java.security.SignatureException r6 = new java.security.SignatureException
            java.lang.String r5 = r5.getMessage()
            r6.<init>(r5)
            throw r6
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ASN1EncodableVector r1 = new org.bouncycastle.asn1.ASN1EncodableVector
            r1.<init>()
            org.bouncycastle.asn1.DERObject r2 = r4.getKeySpec()     // Catch: java.lang.Exception -> L11
            r1.add(r2)     // Catch: java.lang.Exception -> L11
        L11:
            org.bouncycastle.asn1.DERIA5String r2 = new org.bouncycastle.asn1.DERIA5String
            java.lang.String r3 = r4.challenge
            r2.<init>(r3)
            r1.add(r2)
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r1)
            r0.add(r2)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r4.sigAlg
            r0.add(r1)
            org.bouncycastle.asn1.DERBitString r1 = new org.bouncycastle.asn1.DERBitString
            byte[] r2 = r4.sigBits
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }

    public boolean verify(java.lang.String r2) throws java.security.NoSuchAlgorithmException, java.security.InvalidKeyException, java.security.SignatureException, java.security.NoSuchProviderException {
            r1 = this;
            java.lang.String r0 = r1.challenge
            boolean r2 = r2.equals(r0)
            if (r2 != 0) goto La
            r2 = 0
            return r2
        La:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = r1.sigAlg
            org.bouncycastle.asn1.DERObjectIdentifier r2 = r2.getObjectId()
            java.lang.String r2 = r2.getId()
            java.lang.String r0 = "BC"
            java.security.Signature r2 = java.security.Signature.getInstance(r2, r0)
            java.security.PublicKey r0 = r1.pubkey
            r2.initVerify(r0)
            org.bouncycastle.asn1.DERBitString r0 = r1.content
            byte[] r0 = r0.getBytes()
            r2.update(r0)
            byte[] r0 = r1.sigBits
            boolean r2 = r2.verify(r0)
            return r2
    }
}
