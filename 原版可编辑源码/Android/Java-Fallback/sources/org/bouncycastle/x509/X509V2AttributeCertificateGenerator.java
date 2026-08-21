package org.bouncycastle.x509;

public class X509V2AttributeCertificateGenerator {
    private org.bouncycastle.asn1.x509.V2AttributeCertificateInfoGenerator acInfoGen;
    private org.bouncycastle.asn1.x509.X509ExtensionsGenerator extGenerator;
    private org.bouncycastle.asn1.x509.AlgorithmIdentifier sigAlgId;
    private org.bouncycastle.asn1.DERObjectIdentifier sigOID;
    private java.lang.String signatureAlgorithm;

    public X509V2AttributeCertificateGenerator() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.x509.V2AttributeCertificateInfoGenerator r0 = new org.bouncycastle.asn1.x509.V2AttributeCertificateInfoGenerator
            r0.<init>()
            r1.acInfoGen = r0
            org.bouncycastle.asn1.x509.X509ExtensionsGenerator r0 = new org.bouncycastle.asn1.x509.X509ExtensionsGenerator
            r0.<init>()
            r1.extGenerator = r0
            return
    }

    public void addAttribute(org.bouncycastle.x509.X509Attribute r2) {
            r1 = this;
            org.bouncycastle.asn1.x509.V2AttributeCertificateInfoGenerator r0 = r1.acInfoGen
            org.bouncycastle.asn1.DERObject r2 = r2.toASN1Object()
            org.bouncycastle.asn1.x509.Attribute r2 = org.bouncycastle.asn1.x509.Attribute.getInstance(r2)
            r0.addAttribute(r2)
            return
    }

    public void addExtension(java.lang.String r3, boolean r4, org.bouncycastle.asn1.ASN1Encodable r5) throws java.io.IOException {
            r2 = this;
            org.bouncycastle.asn1.x509.X509ExtensionsGenerator r0 = r2.extGenerator
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r3)
            r0.addExtension(r1, r4, r5)
            return
    }

    public void addExtension(java.lang.String r3, boolean r4, byte[] r5) {
            r2 = this;
            org.bouncycastle.asn1.x509.X509ExtensionsGenerator r0 = r2.extGenerator
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r3)
            r0.addExtension(r1, r4, r5)
            return
    }

    public org.bouncycastle.x509.X509AttributeCertificate generate(java.security.PrivateKey r2, java.lang.String r3) throws java.security.cert.CertificateEncodingException, java.lang.IllegalStateException, java.security.NoSuchProviderException, java.security.SignatureException, java.security.InvalidKeyException, java.security.NoSuchAlgorithmException {
            r1 = this;
            r0 = 0
            org.bouncycastle.x509.X509AttributeCertificate r2 = r1.generate(r2, r3, r0)
            return r2
    }

    public org.bouncycastle.x509.X509AttributeCertificate generate(java.security.PrivateKey r9, java.lang.String r10, java.security.SecureRandom r11) throws java.security.cert.CertificateEncodingException, java.lang.IllegalStateException, java.security.NoSuchProviderException, java.security.NoSuchAlgorithmException, java.security.SignatureException, java.security.InvalidKeyException {
            r8 = this;
            org.bouncycastle.asn1.x509.X509ExtensionsGenerator r0 = r8.extGenerator
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L13
            org.bouncycastle.asn1.x509.V2AttributeCertificateInfoGenerator r0 = r8.acInfoGen
            org.bouncycastle.asn1.x509.X509ExtensionsGenerator r1 = r8.extGenerator
            org.bouncycastle.asn1.x509.X509Extensions r1 = r1.generate()
            r0.setExtensions(r1)
        L13:
            org.bouncycastle.asn1.x509.V2AttributeCertificateInfoGenerator r0 = r8.acInfoGen
            org.bouncycastle.asn1.x509.AttributeCertificateInfo r6 = r0.generateAttributeCertificateInfo()
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            r0.add(r6)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r1 = r8.sigAlgId
            r0.add(r1)
            org.bouncycastle.asn1.DERBitString r7 = new org.bouncycastle.asn1.DERBitString     // Catch: java.io.IOException -> L49
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r8.sigOID     // Catch: java.io.IOException -> L49
            java.lang.String r2 = r8.signatureAlgorithm     // Catch: java.io.IOException -> L49
            r3 = r10
            r4 = r9
            r5 = r11
            byte[] r9 = org.bouncycastle.x509.X509Util.calculateSignature(r1, r2, r3, r4, r5, r6)     // Catch: java.io.IOException -> L49
            r7.<init>(r9)     // Catch: java.io.IOException -> L49
            r0.add(r7)     // Catch: java.io.IOException -> L49
            org.bouncycastle.x509.X509V2AttributeCertificate r9 = new org.bouncycastle.x509.X509V2AttributeCertificate     // Catch: java.io.IOException -> L49
            org.bouncycastle.asn1.x509.AttributeCertificate r10 = new org.bouncycastle.asn1.x509.AttributeCertificate     // Catch: java.io.IOException -> L49
            org.bouncycastle.asn1.DERSequence r11 = new org.bouncycastle.asn1.DERSequence     // Catch: java.io.IOException -> L49
            r11.<init>(r0)     // Catch: java.io.IOException -> L49
            r10.<init>(r11)     // Catch: java.io.IOException -> L49
            r9.<init>(r10)     // Catch: java.io.IOException -> L49
            return r9
        L49:
            r9 = move-exception
            org.bouncycastle.x509.ExtCertificateEncodingException r10 = new org.bouncycastle.x509.ExtCertificateEncodingException
            java.lang.String r11 = "constructed invalid certificate"
            r10.<init>(r11, r9)
            throw r10
    }

    public org.bouncycastle.x509.X509AttributeCertificate generateCertificate(java.security.PrivateKey r2, java.lang.String r3) throws java.security.NoSuchProviderException, java.lang.SecurityException, java.security.SignatureException, java.security.InvalidKeyException {
            r1 = this;
            r0 = 0
            org.bouncycastle.x509.X509AttributeCertificate r2 = r1.generateCertificate(r2, r3, r0)
            return r2
    }

    public org.bouncycastle.x509.X509AttributeCertificate generateCertificate(java.security.PrivateKey r2, java.lang.String r3, java.security.SecureRandom r4) throws java.security.NoSuchProviderException, java.lang.SecurityException, java.security.SignatureException, java.security.InvalidKeyException {
            r1 = this;
            org.bouncycastle.x509.X509AttributeCertificate r2 = r1.generate(r2, r3, r4)     // Catch: java.security.GeneralSecurityException -> L5 java.security.InvalidKeyException -> L1d java.security.SignatureException -> L1f java.security.NoSuchProviderException -> L21
            return r2
        L5:
            r2 = move-exception
            java.lang.SecurityException r3 = new java.lang.SecurityException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "exception creating certificate: "
            r4.append(r0)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            r3.<init>(r2)
            throw r3
        L1d:
            r2 = move-exception
            throw r2
        L1f:
            r2 = move-exception
            throw r2
        L21:
            r2 = move-exception
            throw r2
    }

    public java.util.Iterator getSignatureAlgNames() {
            r1 = this;
            java.util.Iterator r0 = org.bouncycastle.x509.X509Util.getAlgNames()
            return r0
    }

    public void reset() {
            r1 = this;
            org.bouncycastle.asn1.x509.V2AttributeCertificateInfoGenerator r0 = new org.bouncycastle.asn1.x509.V2AttributeCertificateInfoGenerator
            r0.<init>()
            r1.acInfoGen = r0
            org.bouncycastle.asn1.x509.X509ExtensionsGenerator r0 = r1.extGenerator
            r0.reset()
            return
    }

    public void setHolder(org.bouncycastle.x509.AttributeCertificateHolder r2) {
            r1 = this;
            org.bouncycastle.asn1.x509.V2AttributeCertificateInfoGenerator r0 = r1.acInfoGen
            org.bouncycastle.asn1.x509.Holder r2 = r2.holder
            r0.setHolder(r2)
            return
    }

    public void setIssuer(org.bouncycastle.x509.AttributeCertificateIssuer r2) {
            r1 = this;
            org.bouncycastle.asn1.x509.V2AttributeCertificateInfoGenerator r0 = r1.acInfoGen
            org.bouncycastle.asn1.ASN1Encodable r2 = r2.form
            org.bouncycastle.asn1.x509.AttCertIssuer r2 = org.bouncycastle.asn1.x509.AttCertIssuer.getInstance(r2)
            r0.setIssuer(r2)
            return
    }

    public void setIssuerUniqueId(boolean[] r2) {
            r1 = this;
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r0 = "not implemented (yet)"
            r2.<init>(r0)
            throw r2
    }

    public void setNotAfter(java.util.Date r3) {
            r2 = this;
            org.bouncycastle.asn1.x509.V2AttributeCertificateInfoGenerator r0 = r2.acInfoGen
            org.bouncycastle.asn1.DERGeneralizedTime r1 = new org.bouncycastle.asn1.DERGeneralizedTime
            r1.<init>(r3)
            r0.setEndDate(r1)
            return
    }

    public void setNotBefore(java.util.Date r3) {
            r2 = this;
            org.bouncycastle.asn1.x509.V2AttributeCertificateInfoGenerator r0 = r2.acInfoGen
            org.bouncycastle.asn1.DERGeneralizedTime r1 = new org.bouncycastle.asn1.DERGeneralizedTime
            r1.<init>(r3)
            r0.setStartDate(r1)
            return
    }

    public void setSerialNumber(java.math.BigInteger r3) {
            r2 = this;
            org.bouncycastle.asn1.x509.V2AttributeCertificateInfoGenerator r0 = r2.acInfoGen
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r3)
            r0.setSerialNumber(r1)
            return
    }

    public void setSignatureAlgorithm(java.lang.String r2) {
            r1 = this;
            r1.signatureAlgorithm = r2
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.x509.X509Util.getAlgorithmOID(r2)     // Catch: java.lang.Exception -> L14
            r1.sigOID = r0     // Catch: java.lang.Exception -> L14
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = org.bouncycastle.x509.X509Util.getSigAlgID(r0, r2)
            r1.sigAlgId = r2
            org.bouncycastle.asn1.x509.V2AttributeCertificateInfoGenerator r0 = r1.acInfoGen
            r0.setSignature(r2)
            return
        L14:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Unknown signature type requested"
            r2.<init>(r0)
            throw r2
    }
}
