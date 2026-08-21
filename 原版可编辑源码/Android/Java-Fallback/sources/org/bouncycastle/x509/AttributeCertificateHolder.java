package org.bouncycastle.x509;

public class AttributeCertificateHolder implements java.security.cert.CertSelector, org.bouncycastle.util.Selector {
    final org.bouncycastle.asn1.x509.Holder holder;

    public AttributeCertificateHolder(int r4, java.lang.String r5, java.lang.String r6, byte[] r7) {
            r3 = this;
            r3.<init>()
            org.bouncycastle.asn1.x509.Holder r0 = new org.bouncycastle.asn1.x509.Holder
            org.bouncycastle.asn1.x509.ObjectDigestInfo r1 = new org.bouncycastle.asn1.x509.ObjectDigestInfo
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = new org.bouncycastle.asn1.x509.AlgorithmIdentifier
            r2.<init>(r5)
            byte[] r5 = org.bouncycastle.util.Arrays.clone(r7)
            r1.<init>(r4, r6, r2, r5)
            r0.<init>(r1)
            r3.holder = r0
            return
    }

    public AttributeCertificateHolder(java.security.cert.X509Certificate r5) throws java.security.cert.CertificateParsingException {
            r4 = this;
            r4.<init>()
            org.bouncycastle.jce.X509Principal r0 = org.bouncycastle.jce.PrincipalUtil.getIssuerX509Principal(r5)     // Catch: java.lang.Exception -> L21
            org.bouncycastle.asn1.x509.Holder r1 = new org.bouncycastle.asn1.x509.Holder
            org.bouncycastle.asn1.x509.IssuerSerial r2 = new org.bouncycastle.asn1.x509.IssuerSerial
            org.bouncycastle.asn1.x509.GeneralNames r0 = r4.generateGeneralNames(r0)
            org.bouncycastle.asn1.DERInteger r3 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r5 = r5.getSerialNumber()
            r3.<init>(r5)
            r2.<init>(r0, r3)
            r1.<init>(r2)
            r4.holder = r1
            return
        L21:
            r5 = move-exception
            java.security.cert.CertificateParsingException r0 = new java.security.cert.CertificateParsingException
            java.lang.String r5 = r5.getMessage()
            r0.<init>(r5)
            throw r0
    }

    public AttributeCertificateHolder(javax.security.auth.x500.X500Principal r1) {
            r0 = this;
            org.bouncycastle.jce.X509Principal r1 = org.bouncycastle.x509.X509Util.convertPrincipal(r1)
            r0.<init>(r1)
            return
    }

    public AttributeCertificateHolder(javax.security.auth.x500.X500Principal r1, java.math.BigInteger r2) {
            r0 = this;
            org.bouncycastle.jce.X509Principal r1 = org.bouncycastle.x509.X509Util.convertPrincipal(r1)
            r0.<init>(r1, r2)
            return
    }

    AttributeCertificateHolder(org.bouncycastle.asn1.ASN1Sequence r1) {
            r0 = this;
            r0.<init>()
            org.bouncycastle.asn1.x509.Holder r1 = org.bouncycastle.asn1.x509.Holder.getInstance(r1)
            r0.holder = r1
            return
    }

    public AttributeCertificateHolder(org.bouncycastle.jce.X509Principal r2) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.x509.Holder r0 = new org.bouncycastle.asn1.x509.Holder
            org.bouncycastle.asn1.x509.GeneralNames r2 = r1.generateGeneralNames(r2)
            r0.<init>(r2)
            r1.holder = r0
            return
    }

    public AttributeCertificateHolder(org.bouncycastle.jce.X509Principal r6, java.math.BigInteger r7) {
            r5 = this;
            r5.<init>()
            org.bouncycastle.asn1.x509.Holder r0 = new org.bouncycastle.asn1.x509.Holder
            org.bouncycastle.asn1.x509.IssuerSerial r1 = new org.bouncycastle.asn1.x509.IssuerSerial
            org.bouncycastle.asn1.x509.GeneralNames r2 = new org.bouncycastle.asn1.x509.GeneralNames
            org.bouncycastle.asn1.DERSequence r3 = new org.bouncycastle.asn1.DERSequence
            org.bouncycastle.asn1.x509.GeneralName r4 = new org.bouncycastle.asn1.x509.GeneralName
            r4.<init>(r6)
            r3.<init>(r4)
            r2.<init>(r3)
            org.bouncycastle.asn1.DERInteger r6 = new org.bouncycastle.asn1.DERInteger
            r6.<init>(r7)
            r1.<init>(r2, r6)
            r0.<init>(r1)
            r5.holder = r0
            return
    }

    private org.bouncycastle.asn1.x509.GeneralNames generateGeneralNames(org.bouncycastle.jce.X509Principal r4) {
            r3 = this;
            org.bouncycastle.asn1.x509.GeneralNames r0 = new org.bouncycastle.asn1.x509.GeneralNames
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            org.bouncycastle.asn1.x509.GeneralName r2 = new org.bouncycastle.asn1.x509.GeneralName
            r2.<init>(r4)
            r1.<init>(r2)
            r0.<init>(r1)
            return r0
    }

    private java.lang.Object[] getNames(org.bouncycastle.asn1.x509.GeneralName[] r5) {
            r4 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r5.length
            r0.<init>(r1)
            r1 = 0
        L7:
            int r2 = r5.length
            if (r1 == r2) goto L33
            r2 = r5[r1]
            int r2 = r2.getTagNo()
            r3 = 4
            if (r2 != r3) goto L30
            javax.security.auth.x500.X500Principal r2 = new javax.security.auth.x500.X500Principal     // Catch: java.io.IOException -> L28
            r3 = r5[r1]     // Catch: java.io.IOException -> L28
            org.bouncycastle.asn1.DEREncodable r3 = r3.getName()     // Catch: java.io.IOException -> L28
            org.bouncycastle.asn1.ASN1Encodable r3 = (org.bouncycastle.asn1.ASN1Encodable) r3     // Catch: java.io.IOException -> L28
            byte[] r3 = r3.getEncoded()     // Catch: java.io.IOException -> L28
            r2.<init>(r3)     // Catch: java.io.IOException -> L28
            r0.add(r2)     // Catch: java.io.IOException -> L28
            goto L30
        L28:
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            java.lang.String r0 = "badly formed Name object"
            r5.<init>(r0)
            throw r5
        L30:
            int r1 = r1 + 1
            goto L7
        L33:
            int r5 = r0.size()
            java.lang.Object[] r5 = new java.lang.Object[r5]
            java.lang.Object[] r5 = r0.toArray(r5)
            return r5
    }

    private java.security.Principal[] getPrincipals(org.bouncycastle.asn1.x509.GeneralNames r4) {
            r3 = this;
            org.bouncycastle.asn1.x509.GeneralName[] r4 = r4.getNames()
            java.lang.Object[] r4 = r3.getNames(r4)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
        Le:
            int r2 = r4.length
            if (r1 == r2) goto L1f
            r2 = r4[r1]
            boolean r2 = r2 instanceof java.security.Principal
            if (r2 == 0) goto L1c
            r2 = r4[r1]
            r0.add(r2)
        L1c:
            int r1 = r1 + 1
            goto Le
        L1f:
            int r4 = r0.size()
            java.security.Principal[] r4 = new java.security.Principal[r4]
            java.lang.Object[] r4 = r0.toArray(r4)
            java.security.Principal[] r4 = (java.security.Principal[]) r4
            java.security.Principal[] r4 = (java.security.Principal[]) r4
            return r4
    }

    private boolean matchesDN(org.bouncycastle.jce.X509Principal r6, org.bouncycastle.asn1.x509.GeneralNames r7) {
            r5 = this;
            org.bouncycastle.asn1.x509.GeneralName[] r7 = r7.getNames()
            r0 = 0
            r1 = 0
        L6:
            int r2 = r7.length
            if (r1 == r2) goto L2c
            r2 = r7[r1]
            int r3 = r2.getTagNo()
            r4 = 4
            if (r3 != r4) goto L29
            org.bouncycastle.jce.X509Principal r3 = new org.bouncycastle.jce.X509Principal     // Catch: java.io.IOException -> L29
            org.bouncycastle.asn1.DEREncodable r2 = r2.getName()     // Catch: java.io.IOException -> L29
            org.bouncycastle.asn1.ASN1Encodable r2 = (org.bouncycastle.asn1.ASN1Encodable) r2     // Catch: java.io.IOException -> L29
            byte[] r2 = r2.getEncoded()     // Catch: java.io.IOException -> L29
            r3.<init>(r2)     // Catch: java.io.IOException -> L29
            boolean r2 = r3.equals(r6)     // Catch: java.io.IOException -> L29
            if (r2 == 0) goto L29
            r6 = 1
            return r6
        L29:
            int r1 = r1 + 1
            goto L6
        L2c:
            return r0
    }

    @Override
    public java.lang.Object clone() {
            r2 = this;
            org.bouncycastle.x509.AttributeCertificateHolder r0 = new org.bouncycastle.x509.AttributeCertificateHolder
            org.bouncycastle.asn1.x509.Holder r1 = r2.holder
            org.bouncycastle.asn1.DERObject r1 = r1.toASN1Object()
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            return r0
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            if (r2 != r1) goto L4
            r2 = 1
            return r2
        L4:
            boolean r0 = r2 instanceof org.bouncycastle.x509.AttributeCertificateHolder
            if (r0 != 0) goto La
            r2 = 0
            return r2
        La:
            org.bouncycastle.x509.AttributeCertificateHolder r2 = (org.bouncycastle.x509.AttributeCertificateHolder) r2
            org.bouncycastle.asn1.x509.Holder r0 = r1.holder
            org.bouncycastle.asn1.x509.Holder r2 = r2.holder
            boolean r2 = r0.equals(r2)
            return r2
    }

    public java.lang.String getDigestAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.x509.Holder r0 = r1.holder
            org.bouncycastle.asn1.x509.ObjectDigestInfo r0 = r0.getObjectDigestInfo()
            if (r0 == 0) goto L19
            org.bouncycastle.asn1.x509.Holder r0 = r1.holder
            org.bouncycastle.asn1.x509.ObjectDigestInfo r0 = r0.getObjectDigestInfo()
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r0 = r0.getDigestAlgorithm()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getObjectId()
            r0.getId()
        L19:
            r0 = 0
            return r0
    }

    public int getDigestedObjectType() {
            r1 = this;
            org.bouncycastle.asn1.x509.Holder r0 = r1.holder
            org.bouncycastle.asn1.x509.ObjectDigestInfo r0 = r0.getObjectDigestInfo()
            if (r0 == 0) goto L1b
            org.bouncycastle.asn1.x509.Holder r0 = r1.holder
            org.bouncycastle.asn1.x509.ObjectDigestInfo r0 = r0.getObjectDigestInfo()
            org.bouncycastle.asn1.DEREnumerated r0 = r0.getDigestedObjectType()
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            return r0
        L1b:
            r0 = -1
            return r0
    }

    public java.security.Principal[] getEntityNames() {
            r1 = this;
            org.bouncycastle.asn1.x509.Holder r0 = r1.holder
            org.bouncycastle.asn1.x509.GeneralNames r0 = r0.getEntityName()
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.Holder r0 = r1.holder
            org.bouncycastle.asn1.x509.GeneralNames r0 = r0.getEntityName()
            java.security.Principal[] r0 = r1.getPrincipals(r0)
            return r0
        L13:
            r0 = 0
            return r0
    }

    public java.security.Principal[] getIssuer() {
            r1 = this;
            org.bouncycastle.asn1.x509.Holder r0 = r1.holder
            org.bouncycastle.asn1.x509.IssuerSerial r0 = r0.getBaseCertificateID()
            if (r0 == 0) goto L17
            org.bouncycastle.asn1.x509.Holder r0 = r1.holder
            org.bouncycastle.asn1.x509.IssuerSerial r0 = r0.getBaseCertificateID()
            org.bouncycastle.asn1.x509.GeneralNames r0 = r0.getIssuer()
            java.security.Principal[] r0 = r1.getPrincipals(r0)
            return r0
        L17:
            r0 = 0
            return r0
    }

    public byte[] getObjectDigest() {
            r1 = this;
            org.bouncycastle.asn1.x509.Holder r0 = r1.holder
            org.bouncycastle.asn1.x509.ObjectDigestInfo r0 = r0.getObjectDigestInfo()
            if (r0 == 0) goto L15
            org.bouncycastle.asn1.x509.Holder r0 = r1.holder
            org.bouncycastle.asn1.x509.ObjectDigestInfo r0 = r0.getObjectDigestInfo()
            org.bouncycastle.asn1.DERBitString r0 = r0.getObjectDigest()
            r0.getBytes()
        L15:
            r0 = 0
            return r0
    }

    public java.lang.String getOtherObjectTypeID() {
            r1 = this;
            org.bouncycastle.asn1.x509.Holder r0 = r1.holder
            org.bouncycastle.asn1.x509.ObjectDigestInfo r0 = r0.getObjectDigestInfo()
            if (r0 == 0) goto L15
            org.bouncycastle.asn1.x509.Holder r0 = r1.holder
            org.bouncycastle.asn1.x509.ObjectDigestInfo r0 = r0.getObjectDigestInfo()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getOtherObjectTypeID()
            r0.getId()
        L15:
            r0 = 0
            return r0
    }

    public java.math.BigInteger getSerialNumber() {
            r1 = this;
            org.bouncycastle.asn1.x509.Holder r0 = r1.holder
            org.bouncycastle.asn1.x509.IssuerSerial r0 = r0.getBaseCertificateID()
            if (r0 == 0) goto L17
            org.bouncycastle.asn1.x509.Holder r0 = r1.holder
            org.bouncycastle.asn1.x509.IssuerSerial r0 = r0.getBaseCertificateID()
            org.bouncycastle.asn1.DERInteger r0 = r0.getSerial()
            java.math.BigInteger r0 = r0.getValue()
            return r0
        L17:
            r0 = 0
            return r0
    }

    public int hashCode() {
            r1 = this;
            org.bouncycastle.asn1.x509.Holder r0 = r1.holder
            int r0 = r0.hashCode()
            return r0
    }

    @Override
    public boolean match(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof java.security.cert.X509Certificate
            if (r0 != 0) goto L6
            r2 = 0
            return r2
        L6:
            java.security.cert.Certificate r2 = (java.security.cert.Certificate) r2
            boolean r2 = r1.match(r2)
            return r2
    }

    @Override
    public boolean match(java.security.cert.Certificate r5) {
            r4 = this;
            boolean r0 = r5 instanceof java.security.cert.X509Certificate
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            r0 = r5
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            org.bouncycastle.asn1.x509.Holder r2 = r4.holder     // Catch: java.lang.Throwable -> L95
            org.bouncycastle.asn1.x509.IssuerSerial r2 = r2.getBaseCertificateID()     // Catch: java.lang.Throwable -> L95
            r3 = 1
            if (r2 == 0) goto L40
            org.bouncycastle.asn1.x509.Holder r5 = r4.holder     // Catch: java.lang.Throwable -> L95
            org.bouncycastle.asn1.x509.IssuerSerial r5 = r5.getBaseCertificateID()     // Catch: java.lang.Throwable -> L95
            org.bouncycastle.asn1.DERInteger r5 = r5.getSerial()     // Catch: java.lang.Throwable -> L95
            java.math.BigInteger r5 = r5.getValue()     // Catch: java.lang.Throwable -> L95
            java.math.BigInteger r2 = r0.getSerialNumber()     // Catch: java.lang.Throwable -> L95
            boolean r5 = r5.equals(r2)     // Catch: java.lang.Throwable -> L95
            if (r5 == 0) goto L3f
            org.bouncycastle.jce.X509Principal r5 = org.bouncycastle.jce.PrincipalUtil.getIssuerX509Principal(r0)     // Catch: java.lang.Throwable -> L95
            org.bouncycastle.asn1.x509.Holder r0 = r4.holder     // Catch: java.lang.Throwable -> L95
            org.bouncycastle.asn1.x509.IssuerSerial r0 = r0.getBaseCertificateID()     // Catch: java.lang.Throwable -> L95
            org.bouncycastle.asn1.x509.GeneralNames r0 = r0.getIssuer()     // Catch: java.lang.Throwable -> L95
            boolean r5 = r4.matchesDN(r5, r0)     // Catch: java.lang.Throwable -> L95
            if (r5 == 0) goto L3f
            r1 = 1
        L3f:
            return r1
        L40:
            org.bouncycastle.asn1.x509.Holder r2 = r4.holder     // Catch: java.lang.Throwable -> L95
            org.bouncycastle.asn1.x509.GeneralNames r2 = r2.getEntityName()     // Catch: java.lang.Throwable -> L95
            if (r2 == 0) goto L59
            org.bouncycastle.jce.X509Principal r0 = org.bouncycastle.jce.PrincipalUtil.getSubjectX509Principal(r0)     // Catch: java.lang.Throwable -> L95
            org.bouncycastle.asn1.x509.Holder r2 = r4.holder     // Catch: java.lang.Throwable -> L95
            org.bouncycastle.asn1.x509.GeneralNames r2 = r2.getEntityName()     // Catch: java.lang.Throwable -> L95
            boolean r0 = r4.matchesDN(r0, r2)     // Catch: java.lang.Throwable -> L95
            if (r0 == 0) goto L59
            return r3
        L59:
            org.bouncycastle.asn1.x509.Holder r0 = r4.holder     // Catch: java.lang.Throwable -> L95
            org.bouncycastle.asn1.x509.ObjectDigestInfo r0 = r0.getObjectDigestInfo()     // Catch: java.lang.Throwable -> L95
            if (r0 == 0) goto L95
            java.lang.String r0 = r4.getDigestAlgorithm()     // Catch: java.lang.Throwable -> L95
            java.lang.String r2 = "BC"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0, r2)     // Catch: java.lang.Throwable -> L95
            int r2 = r4.getDigestedObjectType()     // Catch: java.lang.Throwable -> L95
            if (r2 == 0) goto L7c
            if (r2 == r3) goto L74
            goto L87
        L74:
            byte[] r5 = r5.getEncoded()     // Catch: java.lang.Throwable -> L95
            r0.update(r5)     // Catch: java.lang.Throwable -> L95
            goto L87
        L7c:
            java.security.PublicKey r5 = r5.getPublicKey()     // Catch: java.lang.Throwable -> L95
            byte[] r5 = r5.getEncoded()     // Catch: java.lang.Throwable -> L95
            r0.update(r5)     // Catch: java.lang.Throwable -> L95
        L87:
            byte[] r5 = r0.digest()     // Catch: java.lang.Throwable -> L95
            byte[] r0 = r4.getObjectDigest()     // Catch: java.lang.Throwable -> L95
            boolean r5 = org.bouncycastle.util.Arrays.areEqual(r5, r0)     // Catch: java.lang.Throwable -> L95
            if (r5 != 0) goto L95
        L95:
            return r1
    }
}
