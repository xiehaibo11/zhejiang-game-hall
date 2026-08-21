package org.bouncycastle.jce.provider;

public class JDKPKCS12KeyStore extends java.security.KeyStoreSpi implements org.bouncycastle.asn1.pkcs.PKCSObjectIdentifiers, org.bouncycastle.asn1.x509.X509ObjectIdentifiers, org.bouncycastle.jce.interfaces.BCKeyStore {
    static final int CERTIFICATE = 1;
    private static final org.bouncycastle.asn1.DERObjectIdentifier CERT_ALGORITHM = null;
    static final int KEY = 2;
    private static final org.bouncycastle.asn1.DERObjectIdentifier KEY_ALGORITHM = null;
    static final int KEY_PRIVATE = 0;
    static final int KEY_PUBLIC = 1;
    static final int KEY_SECRET = 2;
    private static final int MIN_ITERATIONS = 1024;
    static final int NULL = 0;
    private static final int SALT_SIZE = 20;
    static final int SEALED = 4;
    static final int SECRET = 3;
    private java.security.cert.CertificateFactory certFact;
    private org.bouncycastle.jce.provider.JDKPKCS12KeyStore.IgnoresCaseHashtable certs;
    private java.util.Hashtable chainCerts;
    private java.util.Hashtable keyCerts;
    private org.bouncycastle.jce.provider.JDKPKCS12KeyStore.IgnoresCaseHashtable keys;
    private java.util.Hashtable localIds;
    protected java.security.SecureRandom random;

    static class 1 {
    }

    public static class BCPKCS12KeyStore extends org.bouncycastle.jce.provider.JDKPKCS12KeyStore {
        public BCPKCS12KeyStore() {
                r1 = this;
                java.lang.String r0 = "BC"
                r1.<init>(r0)
                return
        }
    }

    private class CertId {
        byte[] id;
        final org.bouncycastle.jce.provider.JDKPKCS12KeyStore this$0;

        CertId(org.bouncycastle.jce.provider.JDKPKCS12KeyStore r1, java.security.PublicKey r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                org.bouncycastle.asn1.x509.SubjectKeyIdentifier r1 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.access$100(r1, r2)
                byte[] r1 = r1.getKeyIdentifier()
                r0.id = r1
                return
        }

        CertId(org.bouncycastle.jce.provider.JDKPKCS12KeyStore r1, byte[] r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.id = r2
                return
        }

        public boolean equals(java.lang.Object r2) {
                r1 = this;
                if (r2 != r1) goto L4
                r2 = 1
                return r2
            L4:
                boolean r0 = r2 instanceof org.bouncycastle.jce.provider.JDKPKCS12KeyStore.CertId
                if (r0 != 0) goto La
                r2 = 0
                return r2
            La:
                org.bouncycastle.jce.provider.JDKPKCS12KeyStore$CertId r2 = (org.bouncycastle.jce.provider.JDKPKCS12KeyStore.CertId) r2
                byte[] r0 = r1.id
                byte[] r2 = r2.id
                boolean r2 = org.bouncycastle.util.Arrays.areEqual(r0, r2)
                return r2
        }

        public int hashCode() {
                r1 = this;
                byte[] r0 = r1.id
                int r0 = org.bouncycastle.util.Arrays.hashCode(r0)
                return r0
        }
    }

    public static class DefPKCS12KeyStore extends org.bouncycastle.jce.provider.JDKPKCS12KeyStore {
        public DefPKCS12KeyStore() {
                r1 = this;
                r0 = 0
                r1.<init>(r0)
                return
        }
    }

    private static class IgnoresCaseHashtable {
        private java.util.Hashtable keys;
        private java.util.Hashtable orig;

        private IgnoresCaseHashtable() {
                r1 = this;
                r1.<init>()
                java.util.Hashtable r0 = new java.util.Hashtable
                r0.<init>()
                r1.orig = r0
                java.util.Hashtable r0 = new java.util.Hashtable
                r0.<init>()
                r1.keys = r0
                return
        }

        IgnoresCaseHashtable(org.bouncycastle.jce.provider.JDKPKCS12KeyStore.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public java.util.Enumeration elements() {
                r1 = this;
                java.util.Hashtable r0 = r1.orig
                java.util.Enumeration r0 = r0.elements()
                return r0
        }

        public java.lang.Object get(java.lang.String r2) {
                r1 = this;
                java.util.Hashtable r0 = r1.keys
                java.lang.String r2 = org.bouncycastle.util.Strings.toLowerCase(r2)
                java.lang.Object r2 = r0.get(r2)
                java.lang.String r2 = (java.lang.String) r2
                if (r2 != 0) goto L10
                r2 = 0
                return r2
            L10:
                java.util.Hashtable r0 = r1.orig
                java.lang.Object r2 = r0.get(r2)
                return r2
        }

        public java.util.Enumeration keys() {
                r1 = this;
                java.util.Hashtable r0 = r1.orig
                java.util.Enumeration r0 = r0.keys()
                return r0
        }

        public void put(java.lang.String r4, java.lang.Object r5) {
                r3 = this;
                java.lang.String r0 = org.bouncycastle.util.Strings.toLowerCase(r4)
                java.util.Hashtable r1 = r3.keys
                java.lang.Object r1 = r1.get(r0)
                java.lang.String r1 = (java.lang.String) r1
                if (r1 == 0) goto L13
                java.util.Hashtable r2 = r3.orig
                r2.remove(r1)
            L13:
                java.util.Hashtable r1 = r3.keys
                r1.put(r0, r4)
                java.util.Hashtable r0 = r3.orig
                r0.put(r4, r5)
                return
        }

        public java.lang.Object remove(java.lang.String r2) {
                r1 = this;
                java.util.Hashtable r0 = r1.keys
                java.lang.String r2 = org.bouncycastle.util.Strings.toLowerCase(r2)
                java.lang.Object r2 = r0.remove(r2)
                java.lang.String r2 = (java.lang.String) r2
                if (r2 != 0) goto L10
                r2 = 0
                return r2
            L10:
                java.util.Hashtable r0 = r1.orig
                java.lang.Object r2 = r0.remove(r2)
                return r2
        }
    }

    static {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pbeWithSHAAnd3_KeyTripleDES_CBC
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore.KEY_ALGORITHM = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pbewithSHAAnd40BitRC2_CBC
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore.CERT_ALGORITHM = r0
            return
    }

    public JDKPKCS12KeyStore(java.lang.String r4) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r0 = new org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable
            r1 = 0
            r0.<init>(r1)
            r3.keys = r0
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r3.localIds = r0
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r0 = new org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable
            r0.<init>(r1)
            r3.certs = r0
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r3.chainCerts = r0
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r3.keyCerts = r0
            java.security.SecureRandom r0 = new java.security.SecureRandom
            r0.<init>()
            r3.random = r0
            r3.certFact = r1
            java.lang.String r0 = "X.509"
            if (r4 == 0) goto L3b
            java.security.cert.CertificateFactory r4 = java.security.cert.CertificateFactory.getInstance(r0, r4)     // Catch: java.lang.Exception -> L41
        L38:
            r3.certFact = r4     // Catch: java.lang.Exception -> L41
            goto L40
        L3b:
            java.security.cert.CertificateFactory r4 = java.security.cert.CertificateFactory.getInstance(r0)     // Catch: java.lang.Exception -> L41
            goto L38
        L40:
            return
        L41:
            r4 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "can't create cert factory - "
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    static org.bouncycastle.asn1.x509.SubjectKeyIdentifier access$100(org.bouncycastle.jce.provider.JDKPKCS12KeyStore r0, java.security.PublicKey r1) {
            org.bouncycastle.asn1.x509.SubjectKeyIdentifier r0 = r0.createSubjectKeyId(r1)
            return r0
    }

    private static byte[] calculatePbeMac(org.bouncycastle.asn1.DERObjectIdentifier r3, byte[] r4, int r5, char[] r6, boolean r7, byte[] r8) throws java.lang.Exception {
            java.lang.String r0 = r3.getId()
            java.lang.String r1 = "BC"
            javax.crypto.SecretKeyFactory r0 = javax.crypto.SecretKeyFactory.getInstance(r0, r1)
            javax.crypto.spec.PBEParameterSpec r2 = new javax.crypto.spec.PBEParameterSpec
            r2.<init>(r4, r5)
            javax.crypto.spec.PBEKeySpec r4 = new javax.crypto.spec.PBEKeySpec
            r4.<init>(r6)
            javax.crypto.SecretKey r4 = r0.generateSecret(r4)
            org.bouncycastle.jce.provider.JCEPBEKey r4 = (org.bouncycastle.jce.provider.JCEPBEKey) r4
            r4.setTryWrongPKCS12Zero(r7)
            java.lang.String r3 = r3.getId()
            javax.crypto.Mac r3 = javax.crypto.Mac.getInstance(r3, r1)
            r3.init(r4, r2)
            r3.update(r8)
            byte[] r3 = r3.doFinal()
            return r3
    }

    private org.bouncycastle.asn1.x509.SubjectKeyIdentifier createSubjectKeyId(java.security.PublicKey r2) {
            r1 = this;
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r0 = new org.bouncycastle.asn1.x509.SubjectPublicKeyInfo     // Catch: java.lang.Exception -> L15
            byte[] r2 = r2.getEncoded()     // Catch: java.lang.Exception -> L15
            org.bouncycastle.asn1.ASN1Object r2 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r2)     // Catch: java.lang.Exception -> L15
            org.bouncycastle.asn1.ASN1Sequence r2 = (org.bouncycastle.asn1.ASN1Sequence) r2     // Catch: java.lang.Exception -> L15
            r0.<init>(r2)     // Catch: java.lang.Exception -> L15
            org.bouncycastle.asn1.x509.SubjectKeyIdentifier r2 = new org.bouncycastle.asn1.x509.SubjectKeyIdentifier     // Catch: java.lang.Exception -> L15
            r2.<init>(r0)     // Catch: java.lang.Exception -> L15
            return r2
        L15:
            java.lang.RuntimeException r2 = new java.lang.RuntimeException
            java.lang.String r0 = "error creating key"
            r2.<init>(r0)
            throw r2
    }

    protected byte[] cryptData(boolean r6, org.bouncycastle.asn1.x509.AlgorithmIdentifier r7, char[] r8, boolean r9, byte[] r10) throws java.io.IOException {
            r5 = this;
            java.lang.String r0 = "BC"
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r7.getObjectId()
            java.lang.String r1 = r1.getId()
            org.bouncycastle.asn1.pkcs.PKCS12PBEParams r2 = new org.bouncycastle.asn1.pkcs.PKCS12PBEParams
            org.bouncycastle.asn1.DEREncodable r7 = r7.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r7 = (org.bouncycastle.asn1.ASN1Sequence) r7
            r2.<init>(r7)
            javax.crypto.spec.PBEKeySpec r7 = new javax.crypto.spec.PBEKeySpec
            r7.<init>(r8)
            javax.crypto.SecretKeyFactory r8 = javax.crypto.SecretKeyFactory.getInstance(r1, r0)     // Catch: java.lang.Exception -> L49
            javax.crypto.spec.PBEParameterSpec r3 = new javax.crypto.spec.PBEParameterSpec     // Catch: java.lang.Exception -> L49
            byte[] r4 = r2.getIV()     // Catch: java.lang.Exception -> L49
            java.math.BigInteger r2 = r2.getIterations()     // Catch: java.lang.Exception -> L49
            int r2 = r2.intValue()     // Catch: java.lang.Exception -> L49
            r3.<init>(r4, r2)     // Catch: java.lang.Exception -> L49
            javax.crypto.SecretKey r7 = r8.generateSecret(r7)     // Catch: java.lang.Exception -> L49
            org.bouncycastle.jce.provider.JCEPBEKey r7 = (org.bouncycastle.jce.provider.JCEPBEKey) r7     // Catch: java.lang.Exception -> L49
            r7.setTryWrongPKCS12Zero(r9)     // Catch: java.lang.Exception -> L49
            javax.crypto.Cipher r8 = javax.crypto.Cipher.getInstance(r1, r0)     // Catch: java.lang.Exception -> L49
            if (r6 == 0) goto L40
            r6 = 1
            goto L41
        L40:
            r6 = 2
        L41:
            r8.init(r6, r7, r3)     // Catch: java.lang.Exception -> L49
            byte[] r6 = r8.doFinal(r10)     // Catch: java.lang.Exception -> L49
            return r6
        L49:
            r6 = move-exception
            java.io.IOException r7 = new java.io.IOException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "exception decrypting data - "
            r8.append(r9)
            java.lang.String r6 = r6.toString()
            r8.append(r6)
            java.lang.String r6 = r8.toString()
            r7.<init>(r6)
            throw r7
    }

    @Override
    public java.util.Enumeration engineAliases() {
            r4 = this;
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r1 = r4.certs
            java.util.Enumeration r1 = r1.keys()
        Lb:
            boolean r2 = r1.hasMoreElements()
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.nextElement()
            java.lang.String r3 = "cert"
            r0.put(r2, r3)
            goto Lb
        L1b:
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r1 = r4.keys
            java.util.Enumeration r1 = r1.keys()
        L21:
            boolean r2 = r1.hasMoreElements()
            if (r2 == 0) goto L39
            java.lang.Object r2 = r1.nextElement()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r0.get(r2)
            if (r3 != 0) goto L21
            java.lang.String r3 = "key"
            r0.put(r2, r3)
            goto L21
        L39:
            java.util.Enumeration r0 = r0.keys()
            return r0
    }

    @Override
    public boolean engineContainsAlias(java.lang.String r2) {
            r1 = this;
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r0 = r1.certs
            java.lang.Object r0 = r0.get(r2)
            if (r0 != 0) goto L13
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r0 = r1.keys
            java.lang.Object r2 = r0.get(r2)
            if (r2 == 0) goto L11
            goto L13
        L11:
            r2 = 0
            goto L14
        L13:
            r2 = 1
        L14:
            return r2
    }

    @Override
    public void engineDeleteEntry(java.lang.String r6) throws java.security.KeyStoreException {
            r5 = this;
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r0 = r5.keys
            java.lang.Object r0 = r0.remove(r6)
            java.security.Key r0 = (java.security.Key) r0
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r1 = r5.certs
            java.lang.Object r1 = r1.remove(r6)
            java.security.cert.Certificate r1 = (java.security.cert.Certificate) r1
            if (r1 == 0) goto L20
            java.util.Hashtable r2 = r5.chainCerts
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$CertId r3 = new org.bouncycastle.jce.provider.JDKPKCS12KeyStore$CertId
            java.security.PublicKey r4 = r1.getPublicKey()
            r3.<init>(r5, r4)
            r2.remove(r3)
        L20:
            if (r0 == 0) goto L44
            java.util.Hashtable r2 = r5.localIds
            java.lang.Object r2 = r2.remove(r6)
            java.lang.String r2 = (java.lang.String) r2
            if (r2 == 0) goto L34
            java.util.Hashtable r1 = r5.keyCerts
            java.lang.Object r1 = r1.remove(r2)
            java.security.cert.Certificate r1 = (java.security.cert.Certificate) r1
        L34:
            if (r1 == 0) goto L44
            java.util.Hashtable r2 = r5.chainCerts
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$CertId r3 = new org.bouncycastle.jce.provider.JDKPKCS12KeyStore$CertId
            java.security.PublicKey r4 = r1.getPublicKey()
            r3.<init>(r5, r4)
            r2.remove(r3)
        L44:
            if (r1 != 0) goto L60
            if (r0 == 0) goto L49
            goto L60
        L49:
            java.security.KeyStoreException r0 = new java.security.KeyStoreException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "no such entry as "
            r1.append(r2)
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            r0.<init>(r6)
            throw r0
        L60:
            return
    }

    @Override
    public java.security.cert.Certificate engineGetCertificate(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto L27
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r0 = r1.certs
            java.lang.Object r0 = r0.get(r2)
            java.security.cert.Certificate r0 = (java.security.cert.Certificate) r0
            if (r0 != 0) goto L26
            java.util.Hashtable r0 = r1.localIds
            java.lang.Object r0 = r0.get(r2)
            java.lang.String r0 = (java.lang.String) r0
            if (r0 == 0) goto L1d
            java.util.Hashtable r2 = r1.keyCerts
            java.lang.Object r2 = r2.get(r0)
            goto L23
        L1d:
            java.util.Hashtable r0 = r1.keyCerts
            java.lang.Object r2 = r0.get(r2)
        L23:
            r0 = r2
            java.security.cert.Certificate r0 = (java.security.cert.Certificate) r0
        L26:
            return r0
        L27:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "null alias passed to getCertificate."
            r2.<init>(r0)
            throw r2
    }

    @Override
    public java.lang.String engineGetCertificateAlias(java.security.cert.Certificate r5) {
            r4 = this;
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r0 = r4.certs
            java.util.Enumeration r0 = r0.elements()
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r1 = r4.certs
            java.util.Enumeration r1 = r1.keys()
        Lc:
            boolean r2 = r0.hasMoreElements()
            if (r2 == 0) goto L25
            java.lang.Object r2 = r0.nextElement()
            java.security.cert.Certificate r2 = (java.security.cert.Certificate) r2
            java.lang.Object r3 = r1.nextElement()
            java.lang.String r3 = (java.lang.String) r3
            boolean r2 = r2.equals(r5)
            if (r2 == 0) goto Lc
            return r3
        L25:
            java.util.Hashtable r0 = r4.keyCerts
            java.util.Enumeration r0 = r0.elements()
            java.util.Hashtable r1 = r4.keyCerts
            java.util.Enumeration r1 = r1.keys()
        L31:
            boolean r2 = r0.hasMoreElements()
            if (r2 == 0) goto L4a
            java.lang.Object r2 = r0.nextElement()
            java.security.cert.Certificate r2 = (java.security.cert.Certificate) r2
            java.lang.Object r3 = r1.nextElement()
            java.lang.String r3 = (java.lang.String) r3
            boolean r2 = r2.equals(r5)
            if (r2 == 0) goto L31
            return r3
        L4a:
            r5 = 0
            return r5
    }

    @Override
    public java.security.cert.Certificate[] engineGetCertificateChain(java.lang.String r9) {
            r8 = this;
            if (r9 == 0) goto Lc6
            boolean r0 = r8.engineIsKeyEntry(r9)
            r1 = 0
            if (r0 != 0) goto La
            return r1
        La:
            java.security.cert.Certificate r9 = r8.engineGetCertificate(r9)
            if (r9 == 0) goto Lc5
            java.util.Vector r0 = new java.util.Vector
            r0.<init>()
        L15:
            if (r9 == 0) goto Lb1
            r2 = r9
            java.security.cert.X509Certificate r2 = (java.security.cert.X509Certificate) r2
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.x509.X509Extensions.AuthorityKeyIdentifier
            java.lang.String r3 = r3.getId()
            byte[] r3 = r2.getExtensionValue(r3)
            if (r3 == 0) goto L68
            org.bouncycastle.asn1.ASN1InputStream r4 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.io.IOException -> L5d
            r4.<init>(r3)     // Catch: java.io.IOException -> L5d
            org.bouncycastle.asn1.DERObject r3 = r4.readObject()     // Catch: java.io.IOException -> L5d
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3     // Catch: java.io.IOException -> L5d
            byte[] r3 = r3.getOctets()     // Catch: java.io.IOException -> L5d
            org.bouncycastle.asn1.ASN1InputStream r4 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.io.IOException -> L5d
            r4.<init>(r3)     // Catch: java.io.IOException -> L5d
            org.bouncycastle.asn1.x509.AuthorityKeyIdentifier r3 = new org.bouncycastle.asn1.x509.AuthorityKeyIdentifier     // Catch: java.io.IOException -> L5d
            org.bouncycastle.asn1.DERObject r4 = r4.readObject()     // Catch: java.io.IOException -> L5d
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4     // Catch: java.io.IOException -> L5d
            r3.<init>(r4)     // Catch: java.io.IOException -> L5d
            byte[] r4 = r3.getKeyIdentifier()     // Catch: java.io.IOException -> L5d
            if (r4 == 0) goto L68
            java.util.Hashtable r4 = r8.chainCerts     // Catch: java.io.IOException -> L5d
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$CertId r5 = new org.bouncycastle.jce.provider.JDKPKCS12KeyStore$CertId     // Catch: java.io.IOException -> L5d
            byte[] r3 = r3.getKeyIdentifier()     // Catch: java.io.IOException -> L5d
            r5.<init>(r8, r3)     // Catch: java.io.IOException -> L5d
            java.lang.Object r3 = r4.get(r5)     // Catch: java.io.IOException -> L5d
            java.security.cert.Certificate r3 = (java.security.cert.Certificate) r3     // Catch: java.io.IOException -> L5d
            goto L69
        L5d:
            r9 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r9 = r9.toString()
            r0.<init>(r9)
            throw r0
        L68:
            r3 = r1
        L69:
            if (r3 != 0) goto La6
            java.security.Principal r4 = r2.getIssuerDN()
            java.security.Principal r5 = r2.getSubjectDN()
            boolean r5 = r4.equals(r5)
            if (r5 != 0) goto La6
            java.util.Hashtable r5 = r8.chainCerts
            java.util.Enumeration r5 = r5.keys()
        L7f:
            boolean r6 = r5.hasMoreElements()
            if (r6 == 0) goto La6
            java.util.Hashtable r6 = r8.chainCerts
            java.lang.Object r7 = r5.nextElement()
            java.lang.Object r6 = r6.get(r7)
            java.security.cert.X509Certificate r6 = (java.security.cert.X509Certificate) r6
            java.security.Principal r7 = r6.getSubjectDN()
            boolean r7 = r7.equals(r4)
            if (r7 == 0) goto L7f
            java.security.PublicKey r7 = r6.getPublicKey()     // Catch: java.lang.Exception -> La4
            r2.verify(r7)     // Catch: java.lang.Exception -> La4
            r3 = r6
            goto La6
        La4:
            goto L7f
        La6:
            r0.addElement(r9)
            if (r3 == r9) goto Lae
            r9 = r3
            goto L15
        Lae:
            r9 = r1
            goto L15
        Lb1:
            int r9 = r0.size()
            java.security.cert.Certificate[] r1 = new java.security.cert.Certificate[r9]
            r2 = 0
        Lb8:
            if (r2 == r9) goto Lc5
            java.lang.Object r3 = r0.elementAt(r2)
            java.security.cert.Certificate r3 = (java.security.cert.Certificate) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto Lb8
        Lc5:
            return r1
        Lc6:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "null alias passed to getCertificateChain."
            r9.<init>(r0)
            throw r9
    }

    @Override
    public java.util.Date engineGetCreationDate(java.lang.String r1) {
            r0 = this;
            java.util.Date r1 = new java.util.Date
            r1.<init>()
            return r1
    }

    @Override
    public java.security.Key engineGetKey(java.lang.String r1, char[] r2) throws java.security.NoSuchAlgorithmException, java.security.UnrecoverableKeyException {
            r0 = this;
            if (r1 == 0) goto Lb
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r2 = r0.keys
            java.lang.Object r1 = r2.get(r1)
            java.security.Key r1 = (java.security.Key) r1
            return r1
        Lb:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "null alias passed to getKey."
            r1.<init>(r2)
            throw r1
    }

    @Override
    public boolean engineIsCertificateEntry(java.lang.String r2) {
            r1 = this;
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r0 = r1.certs
            java.lang.Object r0 = r0.get(r2)
            if (r0 == 0) goto L12
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r0 = r1.keys
            java.lang.Object r2 = r0.get(r2)
            if (r2 != 0) goto L12
            r2 = 1
            goto L13
        L12:
            r2 = 0
        L13:
            return r2
    }

    @Override
    public boolean engineIsKeyEntry(java.lang.String r2) {
            r1 = this;
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r0 = r1.keys
            java.lang.Object r2 = r0.get(r2)
            if (r2 == 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }

    @Override
    public void engineLoad(java.io.InputStream r20, char[] r21) throws java.io.IOException {
            r19 = this;
            r7 = r19
            r0 = r20
            r8 = r21
            if (r0 != 0) goto L9
            return
        L9:
            if (r8 == 0) goto L563
            java.io.BufferedInputStream r1 = new java.io.BufferedInputStream
            r1.<init>(r0)
            r0 = 10
            r1.mark(r0)
            int r0 = r1.read()
            r2 = 48
            if (r0 != r2) goto L55b
            r1.reset()
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream
            r0.<init>(r1)
            org.bouncycastle.asn1.DERObject r0 = r0.readObject()
            org.bouncycastle.asn1.ASN1Sequence r0 = (org.bouncycastle.asn1.ASN1Sequence) r0
            org.bouncycastle.asn1.pkcs.Pfx r1 = new org.bouncycastle.asn1.pkcs.Pfx
            r1.<init>(r0)
            org.bouncycastle.asn1.pkcs.ContentInfo r6 = r1.getAuthSafe()
            java.util.Vector r9 = new java.util.Vector
            r9.<init>()
            org.bouncycastle.asn1.pkcs.MacData r0 = r1.getMacData()
            r10 = 1
            r11 = 0
            if (r0 == 0) goto Lc4
            org.bouncycastle.asn1.pkcs.MacData r0 = r1.getMacData()
            org.bouncycastle.asn1.x509.DigestInfo r12 = r0.getMac()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r13 = r12.getAlgorithmId()
            byte[] r14 = r0.getSalt()
            java.math.BigInteger r0 = r0.getIterationCount()
            int r15 = r0.intValue()
            org.bouncycastle.asn1.DEREncodable r0 = r6.getContent()
            org.bouncycastle.asn1.ASN1OctetString r0 = (org.bouncycastle.asn1.ASN1OctetString) r0
            byte[] r16 = r0.getOctets()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r13.getObjectId()     // Catch: java.lang.Exception -> La6 java.io.IOException -> Lc2
            r4 = 0
            r1 = r14
            r2 = r15
            r3 = r21
            r5 = r16
            byte[] r0 = calculatePbeMac(r0, r1, r2, r3, r4, r5)     // Catch: java.lang.Exception -> La6 java.io.IOException -> Lc2
            byte[] r12 = r12.getDigest()     // Catch: java.lang.Exception -> La6 java.io.IOException -> Lc2
            boolean r0 = org.bouncycastle.util.Arrays.areEqual(r0, r12)     // Catch: java.lang.Exception -> La6 java.io.IOException -> Lc2
            if (r0 != 0) goto Lc4
            int r0 = r8.length     // Catch: java.lang.Exception -> La6 java.io.IOException -> Lc2
            java.lang.String r5 = "PKCS12 key store mac invalid - wrong password or corrupted file."
            if (r0 > 0) goto L9f
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r13.getObjectId()     // Catch: java.lang.Exception -> La6 java.io.IOException -> Lc2
            r4 = 1
            r1 = r14
            r2 = r15
            r3 = r21
            r13 = r5
            r5 = r16
            byte[] r0 = calculatePbeMac(r0, r1, r2, r3, r4, r5)     // Catch: java.lang.Exception -> La6 java.io.IOException -> Lc2
            boolean r0 = org.bouncycastle.util.Arrays.areEqual(r0, r12)     // Catch: java.lang.Exception -> La6 java.io.IOException -> Lc2
            if (r0 == 0) goto L99
            r0 = 1
            goto Lc5
        L99:
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Exception -> La6 java.io.IOException -> Lc2
            r0.<init>(r13)     // Catch: java.lang.Exception -> La6 java.io.IOException -> Lc2
            throw r0     // Catch: java.lang.Exception -> La6 java.io.IOException -> Lc2
        L9f:
            r13 = r5
            java.io.IOException r0 = new java.io.IOException     // Catch: java.lang.Exception -> La6 java.io.IOException -> Lc2
            r0.<init>(r13)     // Catch: java.lang.Exception -> La6 java.io.IOException -> Lc2
            throw r0     // Catch: java.lang.Exception -> La6 java.io.IOException -> Lc2
        La6:
            r0 = move-exception
            java.io.IOException r1 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "error constructing MAC: "
            r2.append(r3)
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        Lc2:
            r0 = move-exception
            throw r0
        Lc4:
            r0 = 0
        Lc5:
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r1 = new org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable
            r12 = 0
            r1.<init>(r12)
            r7.keys = r1
            java.util.Hashtable r1 = new java.util.Hashtable
            r1.<init>()
            r7.localIds = r1
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r6.getContentType()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.data
            boolean r1 = r1.equals(r2)
            java.lang.String r13 = "unmarked"
            if (r1 == 0) goto L42c
            org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream
            org.bouncycastle.asn1.DEREncodable r2 = r6.getContent()
            org.bouncycastle.asn1.ASN1OctetString r2 = (org.bouncycastle.asn1.ASN1OctetString) r2
            byte[] r2 = r2.getOctets()
            r1.<init>(r2)
            org.bouncycastle.asn1.pkcs.AuthenticatedSafe r2 = new org.bouncycastle.asn1.pkcs.AuthenticatedSafe
            org.bouncycastle.asn1.DERObject r1 = r1.readObject()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r2.<init>(r1)
            org.bouncycastle.asn1.pkcs.ContentInfo[] r14 = r2.getContentInfo()
            r15 = 0
            r16 = 0
        L103:
            int r1 = r14.length
            if (r15 == r1) goto L42e
            r1 = r14[r15]
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r1.getContentType()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.data
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L22c
            org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream
            r2 = r14[r15]
            org.bouncycastle.asn1.DEREncodable r2 = r2.getContent()
            org.bouncycastle.asn1.ASN1OctetString r2 = (org.bouncycastle.asn1.ASN1OctetString) r2
            byte[] r2 = r2.getOctets()
            r1.<init>(r2)
            org.bouncycastle.asn1.DERObject r1 = r1.readObject()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r2 = 0
        L12c:
            int r3 = r1.size()
            if (r2 == r3) goto L228
            org.bouncycastle.asn1.pkcs.SafeBag r3 = new org.bouncycastle.asn1.pkcs.SafeBag
            org.bouncycastle.asn1.DEREncodable r4 = r1.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4
            r3.<init>(r4)
            org.bouncycastle.asn1.DERObjectIdentifier r4 = r3.getBagId()
            org.bouncycastle.asn1.DERObjectIdentifier r5 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs8ShroudedKeyBag
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L1ee
            org.bouncycastle.asn1.pkcs.EncryptedPrivateKeyInfo r4 = new org.bouncycastle.asn1.pkcs.EncryptedPrivateKeyInfo
            org.bouncycastle.asn1.DERObject r5 = r3.getBagValue()
            org.bouncycastle.asn1.ASN1Sequence r5 = (org.bouncycastle.asn1.ASN1Sequence) r5
            r4.<init>(r5)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r5 = r4.getEncryptionAlgorithm()
            byte[] r4 = r4.getEncryptedData()
            java.security.PrivateKey r4 = r7.unwrapKey(r5, r4, r8, r0)
            r5 = r4
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r5 = (org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier) r5
            org.bouncycastle.asn1.ASN1Set r6 = r3.getBagAttributes()
            if (r6 == 0) goto L1c6
            org.bouncycastle.asn1.ASN1Set r3 = r3.getBagAttributes()
            java.util.Enumeration r3 = r3.getObjects()
            r6 = r12
            r17 = r6
        L174:
            boolean r18 = r3.hasMoreElements()
            if (r18 == 0) goto L1c9
            java.lang.Object r18 = r3.nextElement()
            r12 = r18
            org.bouncycastle.asn1.ASN1Sequence r12 = (org.bouncycastle.asn1.ASN1Sequence) r12
            org.bouncycastle.asn1.DEREncodable r18 = r12.getObjectAt(r11)
            r11 = r18
            org.bouncycastle.asn1.DERObjectIdentifier r11 = (org.bouncycastle.asn1.DERObjectIdentifier) r11
            org.bouncycastle.asn1.DEREncodable r12 = r12.getObjectAt(r10)
            org.bouncycastle.asn1.ASN1Set r12 = (org.bouncycastle.asn1.ASN1Set) r12
            int r18 = r12.size()
            if (r18 <= 0) goto L1a1
            r10 = 0
            org.bouncycastle.asn1.DEREncodable r12 = r12.getObjectAt(r10)
            org.bouncycastle.asn1.DERObject r12 = (org.bouncycastle.asn1.DERObject) r12
            r5.setBagAttribute(r11, r12)
            goto L1a2
        L1a1:
            r12 = 0
        L1a2:
            org.bouncycastle.asn1.DERObjectIdentifier r10 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_friendlyName
            boolean r10 = r11.equals(r10)
            if (r10 == 0) goto L1b6
            org.bouncycastle.asn1.DERBMPString r12 = (org.bouncycastle.asn1.DERBMPString) r12
            java.lang.String r6 = r12.getString()
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r10 = r7.keys
            r10.put(r6, r4)
            goto L1c2
        L1b6:
            org.bouncycastle.asn1.DERObjectIdentifier r10 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_localKeyId
            boolean r10 = r11.equals(r10)
            if (r10 == 0) goto L1c2
            r17 = r12
            org.bouncycastle.asn1.ASN1OctetString r17 = (org.bouncycastle.asn1.ASN1OctetString) r17
        L1c2:
            r10 = 1
            r11 = 0
            r12 = 0
            goto L174
        L1c6:
            r6 = 0
            r17 = 0
        L1c9:
            if (r17 == 0) goto L1e6
            java.lang.String r3 = new java.lang.String
            byte[] r5 = r17.getOctets()
            byte[] r5 = org.bouncycastle.util.encoders.Hex.encode(r5)
            r3.<init>(r5)
            if (r6 != 0) goto L1e0
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r5 = r7.keys
            r5.put(r3, r4)
            goto L221
        L1e0:
            java.util.Hashtable r4 = r7.localIds
            r4.put(r6, r3)
            goto L221
        L1e6:
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r3 = r7.keys
            r3.put(r13, r4)
            r16 = 1
            goto L221
        L1ee:
            org.bouncycastle.asn1.DERObjectIdentifier r4 = r3.getBagId()
            org.bouncycastle.asn1.DERObjectIdentifier r5 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.certBag
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L1fe
            r9.addElement(r3)
            goto L221
        L1fe:
            java.io.PrintStream r4 = java.lang.System.out
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "extra in data "
            r5.append(r6)
            org.bouncycastle.asn1.DERObjectIdentifier r6 = r3.getBagId()
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            r4.println(r5)
            java.io.PrintStream r4 = java.lang.System.out
            java.lang.String r3 = org.bouncycastle.asn1.util.ASN1Dump.dumpAsString(r3)
            r4.println(r3)
        L221:
            int r2 = r2 + 1
            r10 = 1
            r11 = 0
            r12 = 0
            goto L12c
        L228:
            r17 = r0
            goto L423
        L22c:
            r1 = r14[r15]
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r1.getContentType()
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.encryptedData
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L3e3
            org.bouncycastle.asn1.pkcs.EncryptedData r1 = new org.bouncycastle.asn1.pkcs.EncryptedData
            r2 = r14[r15]
            org.bouncycastle.asn1.DEREncodable r2 = r2.getContent()
            org.bouncycastle.asn1.ASN1Sequence r2 = (org.bouncycastle.asn1.ASN1Sequence) r2
            r1.<init>(r2)
            r2 = 0
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r3 = r1.getEncryptionAlgorithm()
            org.bouncycastle.asn1.ASN1OctetString r1 = r1.getContent()
            byte[] r6 = r1.getOctets()
            r1 = r19
            r4 = r21
            r5 = r0
            byte[] r1 = r1.cryptData(r2, r3, r4, r5, r6)
            org.bouncycastle.asn1.ASN1Object r1 = org.bouncycastle.asn1.ASN1Object.fromByteArray(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r10 = 0
        L264:
            int r2 = r1.size()
            if (r10 == r2) goto L228
            org.bouncycastle.asn1.pkcs.SafeBag r2 = new org.bouncycastle.asn1.pkcs.SafeBag
            org.bouncycastle.asn1.DEREncodable r3 = r1.getObjectAt(r10)
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r2.<init>(r3)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = r2.getBagId()
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.certBag
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L288
            r9.addElement(r2)
            r17 = r0
            goto L3dd
        L288:
            org.bouncycastle.asn1.DERObjectIdentifier r3 = r2.getBagId()
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs8ShroudedKeyBag
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L329
            org.bouncycastle.asn1.pkcs.EncryptedPrivateKeyInfo r3 = new org.bouncycastle.asn1.pkcs.EncryptedPrivateKeyInfo
            org.bouncycastle.asn1.DERObject r4 = r2.getBagValue()
            org.bouncycastle.asn1.ASN1Sequence r4 = (org.bouncycastle.asn1.ASN1Sequence) r4
            r3.<init>(r4)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r4 = r3.getEncryptionAlgorithm()
            byte[] r3 = r3.getEncryptedData()
            java.security.PrivateKey r3 = r7.unwrapKey(r4, r3, r8, r0)
            r4 = r3
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r4 = (org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier) r4
            org.bouncycastle.asn1.ASN1Set r2 = r2.getBagAttributes()
            java.util.Enumeration r2 = r2.getObjects()
            r5 = 0
            r6 = 0
        L2b8:
            boolean r11 = r2.hasMoreElements()
            if (r11 == 0) goto L30a
            java.lang.Object r11 = r2.nextElement()
            org.bouncycastle.asn1.ASN1Sequence r11 = (org.bouncycastle.asn1.ASN1Sequence) r11
            r12 = 0
            org.bouncycastle.asn1.DEREncodable r17 = r11.getObjectAt(r12)
            r12 = r17
            org.bouncycastle.asn1.DERObjectIdentifier r12 = (org.bouncycastle.asn1.DERObjectIdentifier) r12
            r17 = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r11 = r11.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1Set r11 = (org.bouncycastle.asn1.ASN1Set) r11
            int r0 = r11.size()
            if (r0 <= 0) goto L2e7
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r11 = r11.getObjectAt(r0)
            org.bouncycastle.asn1.DERObject r11 = (org.bouncycastle.asn1.DERObject) r11
            r4.setBagAttribute(r12, r11)
            goto L2e8
        L2e7:
            r11 = 0
        L2e8:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_friendlyName
            boolean r0 = r12.equals(r0)
            if (r0 == 0) goto L2fc
            org.bouncycastle.asn1.DERBMPString r11 = (org.bouncycastle.asn1.DERBMPString) r11
            java.lang.String r6 = r11.getString()
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r0 = r7.keys
            r0.put(r6, r3)
            goto L307
        L2fc:
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_localKeyId
            boolean r0 = r12.equals(r0)
            if (r0 == 0) goto L307
            r5 = r11
            org.bouncycastle.asn1.ASN1OctetString r5 = (org.bouncycastle.asn1.ASN1OctetString) r5
        L307:
            r0 = r17
            goto L2b8
        L30a:
            r17 = r0
            java.lang.String r0 = new java.lang.String
            byte[] r2 = r5.getOctets()
            byte[] r2 = org.bouncycastle.util.encoders.Hex.encode(r2)
            r0.<init>(r2)
            if (r6 != 0) goto L322
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r2 = r7.keys
            r2.put(r0, r3)
            goto L3dd
        L322:
            java.util.Hashtable r2 = r7.localIds
            r2.put(r6, r0)
            goto L3dd
        L329:
            r17 = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r2.getBagId()
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.keyBag
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L3ba
            org.bouncycastle.asn1.pkcs.PrivateKeyInfo r0 = new org.bouncycastle.asn1.pkcs.PrivateKeyInfo
            org.bouncycastle.asn1.DERObject r3 = r2.getBagValue()
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            java.security.PrivateKey r0 = org.bouncycastle.jce.provider.JDKKeyFactory.createPrivateKeyFromPrivateKeyInfo(r0)
            r3 = r0
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r3 = (org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier) r3
            org.bouncycastle.asn1.ASN1Set r2 = r2.getBagAttributes()
            java.util.Enumeration r2 = r2.getObjects()
            r4 = 0
            r5 = 0
        L353:
            boolean r6 = r2.hasMoreElements()
            if (r6 == 0) goto L39f
            java.lang.Object r6 = r2.nextElement()
            org.bouncycastle.asn1.ASN1Sequence r6 = (org.bouncycastle.asn1.ASN1Sequence) r6
            r11 = 0
            org.bouncycastle.asn1.DEREncodable r12 = r6.getObjectAt(r11)
            org.bouncycastle.asn1.DERObjectIdentifier r12 = (org.bouncycastle.asn1.DERObjectIdentifier) r12
            r11 = 1
            org.bouncycastle.asn1.DEREncodable r6 = r6.getObjectAt(r11)
            org.bouncycastle.asn1.ASN1Set r6 = (org.bouncycastle.asn1.ASN1Set) r6
            int r11 = r6.size()
            if (r11 <= 0) goto L37e
            r11 = 0
            org.bouncycastle.asn1.DEREncodable r6 = r6.getObjectAt(r11)
            org.bouncycastle.asn1.DERObject r6 = (org.bouncycastle.asn1.DERObject) r6
            r3.setBagAttribute(r12, r6)
            goto L37f
        L37e:
            r6 = 0
        L37f:
            org.bouncycastle.asn1.DERObjectIdentifier r11 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_friendlyName
            boolean r11 = r12.equals(r11)
            if (r11 == 0) goto L393
            org.bouncycastle.asn1.DERBMPString r6 = (org.bouncycastle.asn1.DERBMPString) r6
            java.lang.String r5 = r6.getString()
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r6 = r7.keys
            r6.put(r5, r0)
            goto L353
        L393:
            org.bouncycastle.asn1.DERObjectIdentifier r11 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_localKeyId
            boolean r11 = r12.equals(r11)
            if (r11 == 0) goto L353
            r4 = r6
            org.bouncycastle.asn1.ASN1OctetString r4 = (org.bouncycastle.asn1.ASN1OctetString) r4
            goto L353
        L39f:
            java.lang.String r2 = new java.lang.String
            byte[] r3 = r4.getOctets()
            byte[] r3 = org.bouncycastle.util.encoders.Hex.encode(r3)
            r2.<init>(r3)
            if (r5 != 0) goto L3b4
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r3 = r7.keys
            r3.put(r2, r0)
            goto L3dd
        L3b4:
            java.util.Hashtable r0 = r7.localIds
            r0.put(r5, r2)
            goto L3dd
        L3ba:
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "extra in encryptedData "
            r3.append(r4)
            org.bouncycastle.asn1.DERObjectIdentifier r4 = r2.getBagId()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r0.println(r3)
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.String r2 = org.bouncycastle.asn1.util.ASN1Dump.dumpAsString(r2)
            r0.println(r2)
        L3dd:
            int r10 = r10 + 1
            r0 = r17
            goto L264
        L3e3:
            r17 = r0
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "extra "
            r1.append(r2)
            r3 = r14[r15]
            org.bouncycastle.asn1.DERObjectIdentifier r3 = r3.getContentType()
            java.lang.String r3 = r3.getId()
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            r0.println(r1)
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            r2 = r14[r15]
            org.bouncycastle.asn1.DEREncodable r2 = r2.getContent()
            java.lang.String r2 = org.bouncycastle.asn1.util.ASN1Dump.dumpAsString(r2)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.println(r1)
        L423:
            int r15 = r15 + 1
            r0 = r17
            r10 = 1
            r11 = 0
            r12 = 0
            goto L103
        L42c:
            r16 = 0
        L42e:
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r0 = new org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable
            r1 = 0
            r0.<init>(r1)
            r7.certs = r0
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r7.chainCerts = r0
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            r7.keyCerts = r0
            r10 = 0
        L445:
            int r0 = r9.size()
            if (r10 == r0) goto L55a
            java.lang.Object r0 = r9.elementAt(r10)
            org.bouncycastle.asn1.pkcs.SafeBag r0 = (org.bouncycastle.asn1.pkcs.SafeBag) r0
            org.bouncycastle.asn1.pkcs.CertBag r2 = new org.bouncycastle.asn1.pkcs.CertBag
            org.bouncycastle.asn1.DERObject r3 = r0.getBagValue()
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r2.<init>(r3)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = r2.getCertId()
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.x509Certificate
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L53f
            java.io.ByteArrayInputStream r3 = new java.io.ByteArrayInputStream     // Catch: java.lang.Exception -> L534
            org.bouncycastle.asn1.DERObject r2 = r2.getCertValue()     // Catch: java.lang.Exception -> L534
            org.bouncycastle.asn1.ASN1OctetString r2 = (org.bouncycastle.asn1.ASN1OctetString) r2     // Catch: java.lang.Exception -> L534
            byte[] r2 = r2.getOctets()     // Catch: java.lang.Exception -> L534
            r3.<init>(r2)     // Catch: java.lang.Exception -> L534
            java.security.cert.CertificateFactory r2 = r7.certFact     // Catch: java.lang.Exception -> L534
            java.security.cert.Certificate r2 = r2.generateCertificate(r3)     // Catch: java.lang.Exception -> L534
            org.bouncycastle.asn1.ASN1Set r3 = r0.getBagAttributes()
            if (r3 == 0) goto L4d5
            org.bouncycastle.asn1.ASN1Set r0 = r0.getBagAttributes()
            java.util.Enumeration r0 = r0.getObjects()
            r3 = r1
            r4 = r3
        L48d:
            boolean r5 = r0.hasMoreElements()
            if (r5 == 0) goto L4d2
            java.lang.Object r5 = r0.nextElement()
            org.bouncycastle.asn1.ASN1Sequence r5 = (org.bouncycastle.asn1.ASN1Sequence) r5
            r6 = 0
            org.bouncycastle.asn1.DEREncodable r8 = r5.getObjectAt(r6)
            org.bouncycastle.asn1.DERObjectIdentifier r8 = (org.bouncycastle.asn1.DERObjectIdentifier) r8
            r11 = 1
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r11)
            org.bouncycastle.asn1.ASN1Set r5 = (org.bouncycastle.asn1.ASN1Set) r5
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r6)
            org.bouncycastle.asn1.DERObject r5 = (org.bouncycastle.asn1.DERObject) r5
            boolean r12 = r2 instanceof org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier
            if (r12 == 0) goto L4b7
            r12 = r2
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r12 = (org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier) r12
            r12.setBagAttribute(r8, r5)
        L4b7:
            org.bouncycastle.asn1.DERObjectIdentifier r12 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_friendlyName
            boolean r12 = r8.equals(r12)
            if (r12 == 0) goto L4c6
            org.bouncycastle.asn1.DERBMPString r5 = (org.bouncycastle.asn1.DERBMPString) r5
            java.lang.String r4 = r5.getString()
            goto L48d
        L4c6:
            org.bouncycastle.asn1.DERObjectIdentifier r12 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_localKeyId
            boolean r8 = r8.equals(r12)
            if (r8 == 0) goto L48d
            r3 = r5
            org.bouncycastle.asn1.ASN1OctetString r3 = (org.bouncycastle.asn1.ASN1OctetString) r3
            goto L48d
        L4d2:
            r6 = 0
            r11 = 1
            goto L4d9
        L4d5:
            r6 = 0
            r11 = 1
            r3 = r1
            r4 = r3
        L4d9:
            java.util.Hashtable r0 = r7.chainCerts
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$CertId r5 = new org.bouncycastle.jce.provider.JDKPKCS12KeyStore$CertId
            java.security.PublicKey r8 = r2.getPublicKey()
            r5.<init>(r7, r8)
            r0.put(r5, r2)
            if (r16 == 0) goto L515
            java.util.Hashtable r0 = r7.keyCerts
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L530
            java.lang.String r0 = new java.lang.String
            java.security.PublicKey r3 = r2.getPublicKey()
            org.bouncycastle.asn1.x509.SubjectKeyIdentifier r3 = r7.createSubjectKeyId(r3)
            byte[] r3 = r3.getKeyIdentifier()
            byte[] r3 = org.bouncycastle.util.encoders.Hex.encode(r3)
            r0.<init>(r3)
            java.util.Hashtable r3 = r7.keyCerts
            r3.put(r0, r2)
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r2 = r7.keys
            java.lang.Object r3 = r2.remove(r13)
            r2.put(r0, r3)
            goto L530
        L515:
            if (r3 == 0) goto L529
            java.lang.String r0 = new java.lang.String
            byte[] r3 = r3.getOctets()
            byte[] r3 = org.bouncycastle.util.encoders.Hex.encode(r3)
            r0.<init>(r3)
            java.util.Hashtable r3 = r7.keyCerts
            r3.put(r0, r2)
        L529:
            if (r4 == 0) goto L530
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r0 = r7.certs
            r0.put(r4, r2)
        L530:
            int r10 = r10 + 1
            goto L445
        L534:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            throw r1
        L53f:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "Unsupported certificate type: "
            r1.append(r3)
            org.bouncycastle.asn1.DERObjectIdentifier r2 = r2.getCertId()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L55a:
            return
        L55b:
            java.io.IOException r0 = new java.io.IOException
            java.lang.String r1 = "stream does not represent a PKCS12 key store"
            r0.<init>(r1)
            throw r0
        L563:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = "No password supplied for PKCS#12 KeyStore."
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void engineSetCertificateEntry(java.lang.String r3, java.security.cert.Certificate r4) throws java.security.KeyStoreException {
            r2 = this;
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r0 = r2.keys
            java.lang.Object r0 = r0.get(r3)
            if (r0 != 0) goto L1c
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r0 = r2.certs
            r0.put(r3, r4)
            java.util.Hashtable r3 = r2.chainCerts
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$CertId r0 = new org.bouncycastle.jce.provider.JDKPKCS12KeyStore$CertId
            java.security.PublicKey r1 = r4.getPublicKey()
            r0.<init>(r2, r1)
            r3.put(r0, r4)
            return
        L1c:
            java.security.KeyStoreException r4 = new java.security.KeyStoreException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "There is a key entry with the name "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "."
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r4.<init>(r3)
            throw r4
    }

    @Override
    public void engineSetKeyEntry(java.lang.String r2, java.security.Key r3, char[] r4, java.security.cert.Certificate[] r5) throws java.security.KeyStoreException {
            r1 = this;
            boolean r4 = r3 instanceof java.security.PrivateKey
            if (r4 == 0) goto Lf
            if (r5 == 0) goto L7
            goto Lf
        L7:
            java.security.KeyStoreException r2 = new java.security.KeyStoreException
            java.lang.String r3 = "no certificate chain for private key"
            r2.<init>(r3)
            throw r2
        Lf:
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r4 = r1.keys
            java.lang.Object r4 = r4.get(r2)
            if (r4 == 0) goto L1a
            r1.engineDeleteEntry(r2)
        L1a:
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r4 = r1.keys
            r4.put(r2, r3)
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r3 = r1.certs
            r4 = 0
            r0 = r5[r4]
            r3.put(r2, r0)
        L27:
            int r2 = r5.length
            if (r4 == r2) goto L3f
            java.util.Hashtable r2 = r1.chainCerts
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$CertId r3 = new org.bouncycastle.jce.provider.JDKPKCS12KeyStore$CertId
            r0 = r5[r4]
            java.security.PublicKey r0 = r0.getPublicKey()
            r3.<init>(r1, r0)
            r0 = r5[r4]
            r2.put(r3, r0)
            int r4 = r4 + 1
            goto L27
        L3f:
            return
    }

    @Override
    public void engineSetKeyEntry(java.lang.String r1, byte[] r2, java.security.cert.Certificate[] r3) throws java.security.KeyStoreException {
            r0 = this;
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "operation not supported"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public int engineSize() {
            r4 = this;
            java.util.Hashtable r0 = new java.util.Hashtable
            r0.<init>()
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r1 = r4.certs
            java.util.Enumeration r1 = r1.keys()
        Lb:
            boolean r2 = r1.hasMoreElements()
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.nextElement()
            java.lang.String r3 = "cert"
            r0.put(r2, r3)
            goto Lb
        L1b:
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r1 = r4.keys
            java.util.Enumeration r1 = r1.keys()
        L21:
            boolean r2 = r1.hasMoreElements()
            if (r2 == 0) goto L39
            java.lang.Object r2 = r1.nextElement()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r0.get(r2)
            if (r3 != 0) goto L21
            java.lang.String r3 = "key"
            r0.put(r2, r3)
            goto L21
        L39:
            int r0 = r0.size()
            return r0
    }

    @Override
    public void engineStore(java.io.OutputStream r18, char[] r19) throws java.io.IOException {
            r17 = this;
            r7 = r17
            r0 = r19
            if (r0 == 0) goto L497
            org.bouncycastle.asn1.ASN1EncodableVector r1 = new org.bouncycastle.asn1.ASN1EncodableVector
            r1.<init>()
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r2 = r7.keys
            java.util.Enumeration r2 = r2.keys()
        L11:
            boolean r3 = r2.hasMoreElements()
            r8 = 1024(0x400, float:1.435E-42)
            r9 = 20
            if (r3 == 0) goto L11d
            byte[] r3 = new byte[r9]
            java.security.SecureRandom r4 = r7.random
            r4.nextBytes(r3)
            java.lang.Object r4 = r2.nextElement()
            java.lang.String r4 = (java.lang.String) r4
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r5 = r7.keys
            java.lang.Object r5 = r5.get(r4)
            java.security.PrivateKey r5 = (java.security.PrivateKey) r5
            org.bouncycastle.asn1.pkcs.PKCS12PBEParams r6 = new org.bouncycastle.asn1.pkcs.PKCS12PBEParams
            r6.<init>(r3, r8)
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.KEY_ALGORITHM
            java.lang.String r3 = r3.getId()
            byte[] r3 = r7.wrapKey(r3, r5, r6, r0)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r8 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r9 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.KEY_ALGORITHM
            org.bouncycastle.asn1.DERObject r6 = r6.getDERObject()
            r8.<init>(r9, r6)
            org.bouncycastle.asn1.pkcs.EncryptedPrivateKeyInfo r6 = new org.bouncycastle.asn1.pkcs.EncryptedPrivateKeyInfo
            r6.<init>(r8, r3)
            org.bouncycastle.asn1.ASN1EncodableVector r3 = new org.bouncycastle.asn1.ASN1EncodableVector
            r3.<init>()
            boolean r8 = r5 instanceof org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier
            if (r8 == 0) goto Lc0
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r5 = (org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier) r5
            org.bouncycastle.asn1.DERObjectIdentifier r8 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_friendlyName
            org.bouncycastle.asn1.DEREncodable r8 = r5.getBagAttribute(r8)
            org.bouncycastle.asn1.DERBMPString r8 = (org.bouncycastle.asn1.DERBMPString) r8
            if (r8 == 0) goto L6e
            java.lang.String r8 = r8.getString()
            boolean r8 = r8.equals(r4)
            if (r8 != 0) goto L78
        L6e:
            org.bouncycastle.asn1.DERObjectIdentifier r8 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_friendlyName
            org.bouncycastle.asn1.DERBMPString r9 = new org.bouncycastle.asn1.DERBMPString
            r9.<init>(r4)
            r5.setBagAttribute(r8, r9)
        L78:
            org.bouncycastle.asn1.DERObjectIdentifier r8 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_localKeyId
            org.bouncycastle.asn1.DEREncodable r8 = r5.getBagAttribute(r8)
            if (r8 != 0) goto L91
            java.security.cert.Certificate r8 = r7.engineGetCertificate(r4)
            org.bouncycastle.asn1.DERObjectIdentifier r9 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_localKeyId
            java.security.PublicKey r8 = r8.getPublicKey()
            org.bouncycastle.asn1.x509.SubjectKeyIdentifier r8 = r7.createSubjectKeyId(r8)
            r5.setBagAttribute(r9, r8)
        L91:
            java.util.Enumeration r8 = r5.getBagAttributeKeys()
            r11 = 0
        L96:
            boolean r9 = r8.hasMoreElements()
            if (r9 == 0) goto Lc1
            java.lang.Object r9 = r8.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r9 = (org.bouncycastle.asn1.DERObjectIdentifier) r9
            org.bouncycastle.asn1.ASN1EncodableVector r11 = new org.bouncycastle.asn1.ASN1EncodableVector
            r11.<init>()
            r11.add(r9)
            org.bouncycastle.asn1.DERSet r12 = new org.bouncycastle.asn1.DERSet
            org.bouncycastle.asn1.DEREncodable r9 = r5.getBagAttribute(r9)
            r12.<init>(r9)
            r11.add(r12)
            org.bouncycastle.asn1.DERSequence r9 = new org.bouncycastle.asn1.DERSequence
            r9.<init>(r11)
            r3.add(r9)
            r11 = 1
            goto L96
        Lc0:
            r11 = 0
        Lc1:
            if (r11 != 0) goto L108
            org.bouncycastle.asn1.ASN1EncodableVector r5 = new org.bouncycastle.asn1.ASN1EncodableVector
            r5.<init>()
            java.security.cert.Certificate r8 = r7.engineGetCertificate(r4)
            org.bouncycastle.asn1.DERObjectIdentifier r9 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_localKeyId
            r5.add(r9)
            org.bouncycastle.asn1.DERSet r9 = new org.bouncycastle.asn1.DERSet
            java.security.PublicKey r8 = r8.getPublicKey()
            org.bouncycastle.asn1.x509.SubjectKeyIdentifier r8 = r7.createSubjectKeyId(r8)
            r9.<init>(r8)
            r5.add(r9)
            org.bouncycastle.asn1.DERSequence r8 = new org.bouncycastle.asn1.DERSequence
            r8.<init>(r5)
            r3.add(r8)
            org.bouncycastle.asn1.ASN1EncodableVector r5 = new org.bouncycastle.asn1.ASN1EncodableVector
            r5.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r8 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_friendlyName
            r5.add(r8)
            org.bouncycastle.asn1.DERSet r8 = new org.bouncycastle.asn1.DERSet
            org.bouncycastle.asn1.DERBMPString r9 = new org.bouncycastle.asn1.DERBMPString
            r9.<init>(r4)
            r8.<init>(r9)
            r5.add(r8)
            org.bouncycastle.asn1.DERSequence r4 = new org.bouncycastle.asn1.DERSequence
            r4.<init>(r5)
            r3.add(r4)
        L108:
            org.bouncycastle.asn1.pkcs.SafeBag r4 = new org.bouncycastle.asn1.pkcs.SafeBag
            org.bouncycastle.asn1.DERObjectIdentifier r5 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs8ShroudedKeyBag
            org.bouncycastle.asn1.DERObject r6 = r6.getDERObject()
            org.bouncycastle.asn1.DERSet r8 = new org.bouncycastle.asn1.DERSet
            r8.<init>(r3)
            r4.<init>(r5, r6, r8)
            r1.add(r4)
            goto L11
        L11d:
            org.bouncycastle.asn1.DERSequence r2 = new org.bouncycastle.asn1.DERSequence
            r2.<init>(r1)
            byte[] r1 = r2.getDEREncoded()
            org.bouncycastle.asn1.BERConstructedOctetString r12 = new org.bouncycastle.asn1.BERConstructedOctetString
            r12.<init>(r1)
            byte[] r1 = new byte[r9]
            java.security.SecureRandom r2 = r7.random
            r2.nextBytes(r1)
            org.bouncycastle.asn1.ASN1EncodableVector r2 = new org.bouncycastle.asn1.ASN1EncodableVector
            r2.<init>()
            org.bouncycastle.asn1.pkcs.PKCS12PBEParams r3 = new org.bouncycastle.asn1.pkcs.PKCS12PBEParams
            r3.<init>(r1, r8)
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r13 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.CERT_ALGORITHM
            org.bouncycastle.asn1.DERObject r3 = r3.getDERObject()
            r13.<init>(r1, r3)
            java.util.Hashtable r1 = new java.util.Hashtable
            r1.<init>()
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r3 = r7.keys
            java.util.Enumeration r3 = r3.keys()
        L152:
            boolean r4 = r3.hasMoreElements()
            java.lang.String r5 = "Error encoding certificate: "
            if (r4 == 0) goto L260
            java.lang.Object r4 = r3.nextElement()     // Catch: java.security.cert.CertificateEncodingException -> L246
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.security.cert.CertificateEncodingException -> L246
            java.security.cert.Certificate r6 = r7.engineGetCertificate(r4)     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.pkcs.CertBag r14 = new org.bouncycastle.asn1.pkcs.CertBag     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DERObjectIdentifier r15 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.x509Certificate     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DEROctetString r8 = new org.bouncycastle.asn1.DEROctetString     // Catch: java.security.cert.CertificateEncodingException -> L246
            byte[] r9 = r6.getEncoded()     // Catch: java.security.cert.CertificateEncodingException -> L246
            r8.<init>(r9)     // Catch: java.security.cert.CertificateEncodingException -> L246
            r14.<init>(r15, r8)     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.ASN1EncodableVector r8 = new org.bouncycastle.asn1.ASN1EncodableVector     // Catch: java.security.cert.CertificateEncodingException -> L246
            r8.<init>()     // Catch: java.security.cert.CertificateEncodingException -> L246
            boolean r9 = r6 instanceof org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier     // Catch: java.security.cert.CertificateEncodingException -> L246
            if (r9 == 0) goto L1e4
            r9 = r6
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r9 = (org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier) r9     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DERObjectIdentifier r15 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_friendlyName     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DEREncodable r15 = r9.getBagAttribute(r15)     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DERBMPString r15 = (org.bouncycastle.asn1.DERBMPString) r15     // Catch: java.security.cert.CertificateEncodingException -> L246
            if (r15 == 0) goto L194
            java.lang.String r15 = r15.getString()     // Catch: java.security.cert.CertificateEncodingException -> L246
            boolean r15 = r15.equals(r4)     // Catch: java.security.cert.CertificateEncodingException -> L246
            if (r15 != 0) goto L19e
        L194:
            org.bouncycastle.asn1.DERObjectIdentifier r15 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_friendlyName     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DERBMPString r10 = new org.bouncycastle.asn1.DERBMPString     // Catch: java.security.cert.CertificateEncodingException -> L246
            r10.<init>(r4)     // Catch: java.security.cert.CertificateEncodingException -> L246
            r9.setBagAttribute(r15, r10)     // Catch: java.security.cert.CertificateEncodingException -> L246
        L19e:
            org.bouncycastle.asn1.DERObjectIdentifier r10 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_localKeyId     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DEREncodable r10 = r9.getBagAttribute(r10)     // Catch: java.security.cert.CertificateEncodingException -> L246
            if (r10 != 0) goto L1b3
            org.bouncycastle.asn1.DERObjectIdentifier r10 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_localKeyId     // Catch: java.security.cert.CertificateEncodingException -> L246
            java.security.PublicKey r15 = r6.getPublicKey()     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.x509.SubjectKeyIdentifier r15 = r7.createSubjectKeyId(r15)     // Catch: java.security.cert.CertificateEncodingException -> L246
            r9.setBagAttribute(r10, r15)     // Catch: java.security.cert.CertificateEncodingException -> L246
        L1b3:
            java.util.Enumeration r10 = r9.getBagAttributeKeys()     // Catch: java.security.cert.CertificateEncodingException -> L246
            r15 = 0
        L1b8:
            boolean r16 = r10.hasMoreElements()     // Catch: java.security.cert.CertificateEncodingException -> L246
            if (r16 == 0) goto L1e5
            java.lang.Object r15 = r10.nextElement()     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DERObjectIdentifier r15 = (org.bouncycastle.asn1.DERObjectIdentifier) r15     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.ASN1EncodableVector r11 = new org.bouncycastle.asn1.ASN1EncodableVector     // Catch: java.security.cert.CertificateEncodingException -> L246
            r11.<init>()     // Catch: java.security.cert.CertificateEncodingException -> L246
            r11.add(r15)     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DERSet r0 = new org.bouncycastle.asn1.DERSet     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DEREncodable r15 = r9.getBagAttribute(r15)     // Catch: java.security.cert.CertificateEncodingException -> L246
            r0.<init>(r15)     // Catch: java.security.cert.CertificateEncodingException -> L246
            r11.add(r0)     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DERSequence r0 = new org.bouncycastle.asn1.DERSequence     // Catch: java.security.cert.CertificateEncodingException -> L246
            r0.<init>(r11)     // Catch: java.security.cert.CertificateEncodingException -> L246
            r8.add(r0)     // Catch: java.security.cert.CertificateEncodingException -> L246
            r0 = r19
            r15 = 1
            goto L1b8
        L1e4:
            r15 = 0
        L1e5:
            if (r15 != 0) goto L228
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector     // Catch: java.security.cert.CertificateEncodingException -> L246
            r0.<init>()     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DERObjectIdentifier r9 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_localKeyId     // Catch: java.security.cert.CertificateEncodingException -> L246
            r0.add(r9)     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DERSet r9 = new org.bouncycastle.asn1.DERSet     // Catch: java.security.cert.CertificateEncodingException -> L246
            java.security.PublicKey r10 = r6.getPublicKey()     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.x509.SubjectKeyIdentifier r10 = r7.createSubjectKeyId(r10)     // Catch: java.security.cert.CertificateEncodingException -> L246
            r9.<init>(r10)     // Catch: java.security.cert.CertificateEncodingException -> L246
            r0.add(r9)     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DERSequence r9 = new org.bouncycastle.asn1.DERSequence     // Catch: java.security.cert.CertificateEncodingException -> L246
            r9.<init>(r0)     // Catch: java.security.cert.CertificateEncodingException -> L246
            r8.add(r9)     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector     // Catch: java.security.cert.CertificateEncodingException -> L246
            r0.<init>()     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DERObjectIdentifier r9 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_friendlyName     // Catch: java.security.cert.CertificateEncodingException -> L246
            r0.add(r9)     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DERSet r9 = new org.bouncycastle.asn1.DERSet     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DERBMPString r10 = new org.bouncycastle.asn1.DERBMPString     // Catch: java.security.cert.CertificateEncodingException -> L246
            r10.<init>(r4)     // Catch: java.security.cert.CertificateEncodingException -> L246
            r9.<init>(r10)     // Catch: java.security.cert.CertificateEncodingException -> L246
            r0.add(r9)     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DERSequence r4 = new org.bouncycastle.asn1.DERSequence     // Catch: java.security.cert.CertificateEncodingException -> L246
            r4.<init>(r0)     // Catch: java.security.cert.CertificateEncodingException -> L246
            r8.add(r4)     // Catch: java.security.cert.CertificateEncodingException -> L246
        L228:
            org.bouncycastle.asn1.pkcs.SafeBag r0 = new org.bouncycastle.asn1.pkcs.SafeBag     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.certBag     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DERObject r9 = r14.getDERObject()     // Catch: java.security.cert.CertificateEncodingException -> L246
            org.bouncycastle.asn1.DERSet r10 = new org.bouncycastle.asn1.DERSet     // Catch: java.security.cert.CertificateEncodingException -> L246
            r10.<init>(r8)     // Catch: java.security.cert.CertificateEncodingException -> L246
            r0.<init>(r4, r9, r10)     // Catch: java.security.cert.CertificateEncodingException -> L246
            r2.add(r0)     // Catch: java.security.cert.CertificateEncodingException -> L246
            r1.put(r6, r6)     // Catch: java.security.cert.CertificateEncodingException -> L246
            r0 = r19
            r8 = 1024(0x400, float:1.435E-42)
            r9 = 20
            goto L152
        L246:
            r0 = move-exception
            java.io.IOException r1 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L260:
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r0 = r7.certs
            java.util.Enumeration r0 = r0.keys()
        L266:
            boolean r3 = r0.hasMoreElements()
            if (r3 == 0) goto L340
            java.lang.Object r3 = r0.nextElement()     // Catch: java.security.cert.CertificateEncodingException -> L326
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r4 = r7.certs     // Catch: java.security.cert.CertificateEncodingException -> L326
            java.lang.Object r4 = r4.get(r3)     // Catch: java.security.cert.CertificateEncodingException -> L326
            java.security.cert.Certificate r4 = (java.security.cert.Certificate) r4     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$IgnoresCaseHashtable r6 = r7.keys     // Catch: java.security.cert.CertificateEncodingException -> L326
            java.lang.Object r6 = r6.get(r3)     // Catch: java.security.cert.CertificateEncodingException -> L326
            if (r6 == 0) goto L283
            goto L266
        L283:
            org.bouncycastle.asn1.pkcs.CertBag r6 = new org.bouncycastle.asn1.pkcs.CertBag     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.DERObjectIdentifier r8 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.x509Certificate     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.DEROctetString r9 = new org.bouncycastle.asn1.DEROctetString     // Catch: java.security.cert.CertificateEncodingException -> L326
            byte[] r10 = r4.getEncoded()     // Catch: java.security.cert.CertificateEncodingException -> L326
            r9.<init>(r10)     // Catch: java.security.cert.CertificateEncodingException -> L326
            r6.<init>(r8, r9)     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.ASN1EncodableVector r8 = new org.bouncycastle.asn1.ASN1EncodableVector     // Catch: java.security.cert.CertificateEncodingException -> L326
            r8.<init>()     // Catch: java.security.cert.CertificateEncodingException -> L326
            boolean r9 = r4 instanceof org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier     // Catch: java.security.cert.CertificateEncodingException -> L326
            if (r9 == 0) goto L2ec
            r9 = r4
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r9 = (org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier) r9     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.DERObjectIdentifier r10 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_friendlyName     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.DEREncodable r10 = r9.getBagAttribute(r10)     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.DERBMPString r10 = (org.bouncycastle.asn1.DERBMPString) r10     // Catch: java.security.cert.CertificateEncodingException -> L326
            if (r10 == 0) goto L2b3
            java.lang.String r10 = r10.getString()     // Catch: java.security.cert.CertificateEncodingException -> L326
            boolean r10 = r10.equals(r3)     // Catch: java.security.cert.CertificateEncodingException -> L326
            if (r10 != 0) goto L2bd
        L2b3:
            org.bouncycastle.asn1.DERObjectIdentifier r10 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_friendlyName     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.DERBMPString r11 = new org.bouncycastle.asn1.DERBMPString     // Catch: java.security.cert.CertificateEncodingException -> L326
            r11.<init>(r3)     // Catch: java.security.cert.CertificateEncodingException -> L326
            r9.setBagAttribute(r10, r11)     // Catch: java.security.cert.CertificateEncodingException -> L326
        L2bd:
            java.util.Enumeration r10 = r9.getBagAttributeKeys()     // Catch: java.security.cert.CertificateEncodingException -> L326
            r11 = 0
        L2c2:
            boolean r14 = r10.hasMoreElements()     // Catch: java.security.cert.CertificateEncodingException -> L326
            if (r14 == 0) goto L2ed
            java.lang.Object r11 = r10.nextElement()     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.DERObjectIdentifier r11 = (org.bouncycastle.asn1.DERObjectIdentifier) r11     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.ASN1EncodableVector r14 = new org.bouncycastle.asn1.ASN1EncodableVector     // Catch: java.security.cert.CertificateEncodingException -> L326
            r14.<init>()     // Catch: java.security.cert.CertificateEncodingException -> L326
            r14.add(r11)     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.DERSet r15 = new org.bouncycastle.asn1.DERSet     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.DEREncodable r11 = r9.getBagAttribute(r11)     // Catch: java.security.cert.CertificateEncodingException -> L326
            r15.<init>(r11)     // Catch: java.security.cert.CertificateEncodingException -> L326
            r14.add(r15)     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.DERSequence r11 = new org.bouncycastle.asn1.DERSequence     // Catch: java.security.cert.CertificateEncodingException -> L326
            r11.<init>(r14)     // Catch: java.security.cert.CertificateEncodingException -> L326
            r8.add(r11)     // Catch: java.security.cert.CertificateEncodingException -> L326
            r11 = 1
            goto L2c2
        L2ec:
            r11 = 0
        L2ed:
            if (r11 != 0) goto L30e
            org.bouncycastle.asn1.ASN1EncodableVector r9 = new org.bouncycastle.asn1.ASN1EncodableVector     // Catch: java.security.cert.CertificateEncodingException -> L326
            r9.<init>()     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.DERObjectIdentifier r10 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.pkcs_9_at_friendlyName     // Catch: java.security.cert.CertificateEncodingException -> L326
            r9.add(r10)     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.DERSet r10 = new org.bouncycastle.asn1.DERSet     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.DERBMPString r11 = new org.bouncycastle.asn1.DERBMPString     // Catch: java.security.cert.CertificateEncodingException -> L326
            r11.<init>(r3)     // Catch: java.security.cert.CertificateEncodingException -> L326
            r10.<init>(r11)     // Catch: java.security.cert.CertificateEncodingException -> L326
            r9.add(r10)     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.DERSequence r3 = new org.bouncycastle.asn1.DERSequence     // Catch: java.security.cert.CertificateEncodingException -> L326
            r3.<init>(r9)     // Catch: java.security.cert.CertificateEncodingException -> L326
            r8.add(r3)     // Catch: java.security.cert.CertificateEncodingException -> L326
        L30e:
            org.bouncycastle.asn1.pkcs.SafeBag r3 = new org.bouncycastle.asn1.pkcs.SafeBag     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.DERObjectIdentifier r9 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.certBag     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.DERObject r6 = r6.getDERObject()     // Catch: java.security.cert.CertificateEncodingException -> L326
            org.bouncycastle.asn1.DERSet r10 = new org.bouncycastle.asn1.DERSet     // Catch: java.security.cert.CertificateEncodingException -> L326
            r10.<init>(r8)     // Catch: java.security.cert.CertificateEncodingException -> L326
            r3.<init>(r9, r6, r10)     // Catch: java.security.cert.CertificateEncodingException -> L326
            r2.add(r3)     // Catch: java.security.cert.CertificateEncodingException -> L326
            r1.put(r4, r4)     // Catch: java.security.cert.CertificateEncodingException -> L326
            goto L266
        L326:
            r0 = move-exception
            java.io.IOException r1 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L340:
            java.util.Hashtable r0 = r7.chainCerts
            java.util.Enumeration r0 = r0.keys()
        L346:
            boolean r3 = r0.hasMoreElements()
            if (r3 == 0) goto L3d7
            java.lang.Object r3 = r0.nextElement()     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            org.bouncycastle.jce.provider.JDKPKCS12KeyStore$CertId r3 = (org.bouncycastle.jce.provider.JDKPKCS12KeyStore.CertId) r3     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            java.util.Hashtable r4 = r7.chainCerts     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            java.lang.Object r3 = r4.get(r3)     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            java.security.cert.Certificate r3 = (java.security.cert.Certificate) r3     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            java.lang.Object r4 = r1.get(r3)     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            if (r4 == 0) goto L361
            goto L346
        L361:
            org.bouncycastle.asn1.pkcs.CertBag r4 = new org.bouncycastle.asn1.pkcs.CertBag     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            org.bouncycastle.asn1.DERObjectIdentifier r6 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.x509Certificate     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            org.bouncycastle.asn1.DEROctetString r8 = new org.bouncycastle.asn1.DEROctetString     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            byte[] r9 = r3.getEncoded()     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            r8.<init>(r9)     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            r4.<init>(r6, r8)     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            org.bouncycastle.asn1.ASN1EncodableVector r6 = new org.bouncycastle.asn1.ASN1EncodableVector     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            r6.<init>()     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            boolean r8 = r3 instanceof org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            if (r8 == 0) goto L3a9
            org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier r3 = (org.bouncycastle.jce.interfaces.PKCS12BagAttributeCarrier) r3     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            java.util.Enumeration r8 = r3.getBagAttributeKeys()     // Catch: java.security.cert.CertificateEncodingException -> L3bd
        L380:
            boolean r9 = r8.hasMoreElements()     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            if (r9 == 0) goto L3a9
            java.lang.Object r9 = r8.nextElement()     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            org.bouncycastle.asn1.DERObjectIdentifier r9 = (org.bouncycastle.asn1.DERObjectIdentifier) r9     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            org.bouncycastle.asn1.ASN1EncodableVector r10 = new org.bouncycastle.asn1.ASN1EncodableVector     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            r10.<init>()     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            r10.add(r9)     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            org.bouncycastle.asn1.DERSet r11 = new org.bouncycastle.asn1.DERSet     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            org.bouncycastle.asn1.DEREncodable r9 = r3.getBagAttribute(r9)     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            r11.<init>(r9)     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            r10.add(r11)     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            org.bouncycastle.asn1.DERSequence r9 = new org.bouncycastle.asn1.DERSequence     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            r9.<init>(r10)     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            r6.add(r9)     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            goto L380
        L3a9:
            org.bouncycastle.asn1.pkcs.SafeBag r3 = new org.bouncycastle.asn1.pkcs.SafeBag     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            org.bouncycastle.asn1.DERObjectIdentifier r8 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.certBag     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            org.bouncycastle.asn1.DERObject r4 = r4.getDERObject()     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            org.bouncycastle.asn1.DERSet r9 = new org.bouncycastle.asn1.DERSet     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            r9.<init>(r6)     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            r3.<init>(r8, r4, r9)     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            r2.add(r3)     // Catch: java.security.cert.CertificateEncodingException -> L3bd
            goto L346
        L3bd:
            r0 = move-exception
            java.io.IOException r1 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L3d7:
            org.bouncycastle.asn1.DERSequence r0 = new org.bouncycastle.asn1.DERSequence
            r0.<init>(r2)
            byte[] r6 = r0.getDEREncoded()
            r2 = 1
            r5 = 0
            r1 = r17
            r3 = r13
            r4 = r19
            byte[] r0 = r1.cryptData(r2, r3, r4, r5, r6)
            org.bouncycastle.asn1.pkcs.EncryptedData r1 = new org.bouncycastle.asn1.pkcs.EncryptedData
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.data
            org.bouncycastle.asn1.BERConstructedOctetString r3 = new org.bouncycastle.asn1.BERConstructedOctetString
            r3.<init>(r0)
            r1.<init>(r2, r13, r3)
            r0 = 2
            org.bouncycastle.asn1.pkcs.ContentInfo[] r0 = new org.bouncycastle.asn1.pkcs.ContentInfo[r0]
            org.bouncycastle.asn1.pkcs.ContentInfo r2 = new org.bouncycastle.asn1.pkcs.ContentInfo
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.data
            r2.<init>(r3, r12)
            r3 = 0
            r0[r3] = r2
            org.bouncycastle.asn1.pkcs.ContentInfo r2 = new org.bouncycastle.asn1.pkcs.ContentInfo
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.encryptedData
            org.bouncycastle.asn1.DERObject r1 = r1.getDERObject()
            r2.<init>(r3, r1)
            r1 = 1
            r0[r1] = r2
            org.bouncycastle.asn1.pkcs.AuthenticatedSafe r1 = new org.bouncycastle.asn1.pkcs.AuthenticatedSafe
            r1.<init>(r0)
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            org.bouncycastle.asn1.BEROutputStream r2 = new org.bouncycastle.asn1.BEROutputStream
            r2.<init>(r0)
            r2.writeObject(r1)
            byte[] r0 = r0.toByteArray()
            org.bouncycastle.asn1.pkcs.ContentInfo r8 = new org.bouncycastle.asn1.pkcs.ContentInfo
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.data
            org.bouncycastle.asn1.BERConstructedOctetString r2 = new org.bouncycastle.asn1.BERConstructedOctetString
            r2.<init>(r0)
            r8.<init>(r1, r2)
            r0 = 20
            byte[] r0 = new byte[r0]
            java.security.SecureRandom r1 = r7.random
            r1.nextBytes(r0)
            org.bouncycastle.asn1.DEREncodable r1 = r8.getContent()
            org.bouncycastle.asn1.ASN1OctetString r1 = (org.bouncycastle.asn1.ASN1OctetString) r1
            byte[] r6 = r1.getOctets()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.id_SHA1     // Catch: java.lang.Exception -> L47b
            r5 = 0
            r3 = 1024(0x400, float:1.435E-42)
            r2 = r0
            r4 = r19
            byte[] r1 = calculatePbeMac(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L47b
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier     // Catch: java.lang.Exception -> L47b
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.jce.provider.JDKPKCS12KeyStore.id_SHA1     // Catch: java.lang.Exception -> L47b
            org.bouncycastle.asn1.DERNull r4 = new org.bouncycastle.asn1.DERNull     // Catch: java.lang.Exception -> L47b
            r4.<init>()     // Catch: java.lang.Exception -> L47b
            r2.<init>(r3, r4)     // Catch: java.lang.Exception -> L47b
            org.bouncycastle.asn1.x509.DigestInfo r3 = new org.bouncycastle.asn1.x509.DigestInfo     // Catch: java.lang.Exception -> L47b
            r3.<init>(r2, r1)     // Catch: java.lang.Exception -> L47b
            org.bouncycastle.asn1.pkcs.MacData r1 = new org.bouncycastle.asn1.pkcs.MacData     // Catch: java.lang.Exception -> L47b
            r2 = 1024(0x400, float:1.435E-42)
            r1.<init>(r3, r0, r2)     // Catch: java.lang.Exception -> L47b
            org.bouncycastle.asn1.pkcs.Pfx r0 = new org.bouncycastle.asn1.pkcs.Pfx
            r0.<init>(r8, r1)
            org.bouncycastle.asn1.BEROutputStream r1 = new org.bouncycastle.asn1.BEROutputStream
            r2 = r18
            r1.<init>(r2)
            r1.writeObject(r0)
            return
        L47b:
            r0 = move-exception
            java.io.IOException r1 = new java.io.IOException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "error constructing MAC: "
            r2.append(r3)
            java.lang.String r0 = r0.toString()
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r1.<init>(r0)
            throw r1
        L497:
            java.lang.NullPointerException r0 = new java.lang.NullPointerException
            java.lang.String r1 = "No password supplied for PKCS#12 KeyStore."
            r0.<init>(r1)
            throw r0
    }

    @Override
    public void setRandom(java.security.SecureRandom r1) {
            r0 = this;
            r0.random = r1
            return
    }

    protected java.security.PrivateKey unwrapKey(org.bouncycastle.asn1.x509.AlgorithmIdentifier r6, byte[] r7, char[] r8, boolean r9) throws java.io.IOException {
            r5 = this;
            java.lang.String r0 = "BC"
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r6.getObjectId()
            java.lang.String r1 = r1.getId()
            org.bouncycastle.asn1.pkcs.PKCS12PBEParams r2 = new org.bouncycastle.asn1.pkcs.PKCS12PBEParams
            org.bouncycastle.asn1.DEREncodable r6 = r6.getParameters()
            org.bouncycastle.asn1.ASN1Sequence r6 = (org.bouncycastle.asn1.ASN1Sequence) r6
            r2.<init>(r6)
            javax.crypto.spec.PBEKeySpec r6 = new javax.crypto.spec.PBEKeySpec
            r6.<init>(r8)
            javax.crypto.SecretKeyFactory r8 = javax.crypto.SecretKeyFactory.getInstance(r1, r0)     // Catch: java.lang.Exception -> L4b
            javax.crypto.spec.PBEParameterSpec r3 = new javax.crypto.spec.PBEParameterSpec     // Catch: java.lang.Exception -> L4b
            byte[] r4 = r2.getIV()     // Catch: java.lang.Exception -> L4b
            java.math.BigInteger r2 = r2.getIterations()     // Catch: java.lang.Exception -> L4b
            int r2 = r2.intValue()     // Catch: java.lang.Exception -> L4b
            r3.<init>(r4, r2)     // Catch: java.lang.Exception -> L4b
            javax.crypto.SecretKey r6 = r8.generateSecret(r6)     // Catch: java.lang.Exception -> L4b
            r8 = r6
            org.bouncycastle.jce.provider.JCEPBEKey r8 = (org.bouncycastle.jce.provider.JCEPBEKey) r8     // Catch: java.lang.Exception -> L4b
            r8.setTryWrongPKCS12Zero(r9)     // Catch: java.lang.Exception -> L4b
            javax.crypto.Cipher r8 = javax.crypto.Cipher.getInstance(r1, r0)     // Catch: java.lang.Exception -> L4b
            r9 = 4
            r8.init(r9, r6, r3)     // Catch: java.lang.Exception -> L4b
            java.lang.String r6 = ""
            r9 = 2
            java.security.Key r6 = r8.unwrap(r7, r6, r9)     // Catch: java.lang.Exception -> L4b
            java.security.PrivateKey r6 = (java.security.PrivateKey) r6     // Catch: java.lang.Exception -> L4b
            return r6
        L4b:
            r6 = move-exception
            java.io.IOException r7 = new java.io.IOException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "exception unwrapping private key - "
            r8.append(r9)
            java.lang.String r6 = r6.toString()
            r8.append(r6)
            java.lang.String r6 = r8.toString()
            r7.<init>(r6)
            throw r7
    }

    protected byte[] wrapKey(java.lang.String r5, java.security.Key r6, org.bouncycastle.asn1.pkcs.PKCS12PBEParams r7, char[] r8) throws java.io.IOException {
            r4 = this;
            java.lang.String r0 = "BC"
            javax.crypto.spec.PBEKeySpec r1 = new javax.crypto.spec.PBEKeySpec
            r1.<init>(r8)
            javax.crypto.SecretKeyFactory r8 = javax.crypto.SecretKeyFactory.getInstance(r5, r0)     // Catch: java.lang.Exception -> L2d
            javax.crypto.spec.PBEParameterSpec r2 = new javax.crypto.spec.PBEParameterSpec     // Catch: java.lang.Exception -> L2d
            byte[] r3 = r7.getIV()     // Catch: java.lang.Exception -> L2d
            java.math.BigInteger r7 = r7.getIterations()     // Catch: java.lang.Exception -> L2d
            int r7 = r7.intValue()     // Catch: java.lang.Exception -> L2d
            r2.<init>(r3, r7)     // Catch: java.lang.Exception -> L2d
            javax.crypto.Cipher r5 = javax.crypto.Cipher.getInstance(r5, r0)     // Catch: java.lang.Exception -> L2d
            r7 = 3
            javax.crypto.SecretKey r8 = r8.generateSecret(r1)     // Catch: java.lang.Exception -> L2d
            r5.init(r7, r8, r2)     // Catch: java.lang.Exception -> L2d
            byte[] r5 = r5.wrap(r6)     // Catch: java.lang.Exception -> L2d
            return r5
        L2d:
            r5 = move-exception
            java.io.IOException r6 = new java.io.IOException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "exception encrypting data - "
            r7.append(r8)
            java.lang.String r5 = r5.toString()
            r7.append(r5)
            java.lang.String r5 = r7.toString()
            r6.<init>(r5)
            throw r6
    }
}
