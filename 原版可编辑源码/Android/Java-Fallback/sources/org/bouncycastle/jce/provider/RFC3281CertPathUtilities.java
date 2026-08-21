package org.bouncycastle.jce.provider;

class RFC3281CertPathUtilities {
    private static final java.lang.String AUTHORITY_INFO_ACCESS = null;
    private static final java.lang.String CRL_DISTRIBUTION_POINTS = null;
    private static final java.lang.String NO_REV_AVAIL = null;
    private static final java.lang.String TARGET_INFORMATION = null;

    static {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.TargetInformation
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.RFC3281CertPathUtilities.TARGET_INFORMATION = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.NoRevAvail
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.RFC3281CertPathUtilities.NO_REV_AVAIL = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.CRLDistributionPoints
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.RFC3281CertPathUtilities.CRL_DISTRIBUTION_POINTS = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.AuthorityInfoAccess
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.RFC3281CertPathUtilities.AUTHORITY_INFO_ACCESS = r0
            return
    }

    RFC3281CertPathUtilities() {
            r0 = this;
            r0.<init>()
            return
    }

    protected static void additionalChecks(org.bouncycastle.x509.X509AttributeCertificate r4, org.bouncycastle.x509.ExtendedPKIXParameters r5) throws java.security.cert.CertPathValidatorException {
            java.util.Set r0 = r5.getProhibitedACAttributes()
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            java.lang.String r2 = "."
            if (r1 == 0) goto L37
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            org.bouncycastle.x509.X509Attribute[] r3 = r4.getAttributes(r1)
            if (r3 != 0) goto L1d
            goto L8
        L1d:
            java.security.cert.CertPathValidatorException r4 = new java.security.cert.CertPathValidatorException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "Attribute certificate contains prohibited attribute: "
            r5.append(r0)
            r5.append(r1)
            r5.append(r2)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
        L37:
            java.util.Set r5 = r5.getNecessaryACAttributes()
            java.util.Iterator r5 = r5.iterator()
        L3f:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L6c
            java.lang.Object r0 = r5.next()
            java.lang.String r0 = (java.lang.String) r0
            org.bouncycastle.x509.X509Attribute[] r1 = r4.getAttributes(r0)
            if (r1 == 0) goto L52
            goto L3f
        L52:
            java.security.cert.CertPathValidatorException r4 = new java.security.cert.CertPathValidatorException
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "Attribute certificate does not contain necessary attribute: "
            r5.append(r1)
            r5.append(r0)
            r5.append(r2)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
        L6c:
            return
    }

    private static void checkCRL(org.bouncycastle.asn1.x509.DistributionPoint r22, org.bouncycastle.x509.X509AttributeCertificate r23, org.bouncycastle.x509.ExtendedPKIXParameters r24, java.util.Date r25, java.security.cert.X509Certificate r26, org.bouncycastle.jce.provider.CertStatus r27, org.bouncycastle.jce.provider.ReasonsMask r28, java.util.List r29) throws org.bouncycastle.jce.provider.AnnotatedException {
            r1 = r22
            r8 = r23
            r9 = r24
            r10 = r25
            r11 = r27
            r12 = r28
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.NoRevAvail
            java.lang.String r0 = r0.getId()
            byte[] r0 = r8.getExtensionValue(r0)
            if (r0 == 0) goto L19
            return
        L19:
            java.util.Date r13 = new java.util.Date
            long r2 = java.lang.System.currentTimeMillis()
            r13.<init>(r2)
            long r2 = r25.getTime()
            long r4 = r13.getTime()
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 > 0) goto Le8
            java.util.Set r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getCompleteCRLs(r1, r8, r13, r9)
            r2 = 0
            java.util.Iterator r14 = r0.iterator()
            r16 = 0
            r0 = r16
            r17 = 0
        L3d:
            boolean r2 = r14.hasNext()
            if (r2 == 0) goto Le4
            int r2 = r27.getCertStatus()
            r7 = 11
            if (r2 != r7) goto Le4
            boolean r2 = r28.isAllReasons()
            if (r2 != 0) goto Le4
            java.lang.Object r2 = r14.next()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldc
            r6 = r2
            java.security.cert.X509CRL r6 = (java.security.cert.X509CRL) r6     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldc
            org.bouncycastle.jce.provider.ReasonsMask r5 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.processCRLD(r6, r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldc
            boolean r2 = r5.hasNewReasons(r12)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldc
            if (r2 != 0) goto L63
            goto L3d
        L63:
            r4 = 0
            r18 = 0
            r2 = r6
            r3 = r23
            r19 = r5
            r5 = r18
            r15 = r6
            r6 = r24
            r18 = r14
            r14 = 11
            r7 = r29
            java.util.Set r2 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.processCRLF(r2, r3, r4, r5, r6, r7)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lda
            java.security.PublicKey r2 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.processCRLG(r15, r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lda
            boolean r3 = r24.isUseDeltasEnabled()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lda
            if (r3 == 0) goto L8d
            java.util.Set r3 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getDeltaCRLs(r13, r9, r15)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lda
            java.security.cert.X509CRL r2 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.processCRLH(r3, r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lda
            goto L8f
        L8d:
            r2 = r16
        L8f:
            int r3 = r24.getValidityModel()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lda
            r4 = 1
            if (r3 == r4) goto Lb3
            java.util.Date r3 = r23.getNotAfter()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ld8
            long r5 = r3.getTime()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ld8
            java.util.Date r3 = r15.getThisUpdate()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ld8
            long r20 = r3.getTime()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ld8
            int r3 = (r5 > r20 ? 1 : (r5 == r20 ? 0 : -1))
            if (r3 < 0) goto Lab
            goto Lb3
        Lab:
            org.bouncycastle.jce.provider.AnnotatedException r0 = new org.bouncycastle.jce.provider.AnnotatedException     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ld8
            java.lang.String r2 = "No valid CRL for current time found."
            r0.<init>(r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ld8
            throw r0     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ld8
        Lb3:
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.processCRLB1(r1, r8, r15)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ld8
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.processCRLB2(r1, r8, r15)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ld8
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.processCRLC(r2, r15, r9)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ld8
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.processCRLI(r10, r2, r8, r11, r9)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ld8
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.processCRLJ(r10, r15, r8, r11)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ld8
            int r2 = r27.getCertStatus()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ld8
            r3 = 8
            if (r2 != r3) goto Lcd
            r11.setCertStatus(r14)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ld8
        Lcd:
            r2 = r19
            r12.addReasons(r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ld8
            r14 = r18
            r17 = 1
            goto L3d
        Ld8:
            r0 = move-exception
            goto Le0
        Lda:
            r0 = move-exception
            goto Ldf
        Ldc:
            r0 = move-exception
            r18 = r14
        Ldf:
            r4 = 1
        Le0:
            r14 = r18
            goto L3d
        Le4:
            if (r17 == 0) goto Le7
            return
        Le7:
            throw r0
        Le8:
            org.bouncycastle.jce.provider.AnnotatedException r0 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r1 = "Validation time is in future."
            r0.<init>(r1)
            throw r0
    }

    protected static void checkCRLs(org.bouncycastle.x509.X509AttributeCertificate r18, org.bouncycastle.x509.ExtendedPKIXParameters r19, java.security.cert.X509Certificate r20, java.util.Date r21, java.util.List r22) throws java.security.cert.CertPathValidatorException {
            r9 = r18
            boolean r0 = r19.isRevocationEnabled()
            if (r0 == 0) goto L183
            java.lang.String r0 = org.bouncycastle.jce.provider.RFC3281CertPathUtilities.NO_REV_AVAIL
            byte[] r0 = r9.getExtensionValue(r0)
            if (r0 != 0) goto L16a
            java.lang.String r0 = org.bouncycastle.jce.provider.RFC3281CertPathUtilities.CRL_DISTRIBUTION_POINTS     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L161
            org.bouncycastle.asn1.DERObject r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r9, r0)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L161
            org.bouncycastle.asn1.x509.CRLDistPoint r0 = org.bouncycastle.asn1.x509.CRLDistPoint.getInstance(r0)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L161
            r10 = r19
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.addAdditionalStoresFromCRLDistributionPoint(r0, r10)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L157
            org.bouncycastle.jce.provider.CertStatus r11 = new org.bouncycastle.jce.provider.CertStatus
            r11.<init>()
            org.bouncycastle.jce.provider.ReasonsMask r12 = new org.bouncycastle.jce.provider.ReasonsMask
            r12.<init>()
            java.lang.String r13 = "No valid CRL for distribution point found."
            r8 = 11
            r7 = 0
            if (r0 == 0) goto L85
            org.bouncycastle.asn1.x509.DistributionPoint[] r0 = r0.getDistributionPoints()     // Catch: java.lang.Exception -> L7b
            r6 = 0
            r16 = 0
        L37:
            int r1 = r0.length     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L70
            if (r6 >= r1) goto L6b
            int r1 = r11.getCertStatus()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L70
            if (r1 != r8) goto L6b
            boolean r1 = r12.isAllReasons()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L70
            if (r1 != 0) goto L6b
            java.lang.Object r1 = r19.clone()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L70
            r3 = r1
            org.bouncycastle.x509.ExtendedPKIXParameters r3 = (org.bouncycastle.x509.ExtendedPKIXParameters) r3     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L70
            r1 = r0[r6]     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L70
            r2 = r18
            r4 = r21
            r5 = r20
            r17 = r6
            r6 = r11
            r14 = 0
            r7 = r12
            r15 = 11
            r8 = r22
            checkCRL(r1, r2, r3, r4, r5, r6, r7, r8)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L69
            int r6 = r17 + 1
            r7 = 0
            r8 = 11
            r16 = 1
            goto L37
        L69:
            r0 = move-exception
            goto L74
        L6b:
            r14 = 0
            r15 = 11
            r0 = 0
            goto L8b
        L70:
            r0 = move-exception
            r14 = 0
            r15 = 11
        L74:
            org.bouncycastle.jce.provider.AnnotatedException r1 = new org.bouncycastle.jce.provider.AnnotatedException
            r1.<init>(r13, r0)
            r0 = r1
            goto L8b
        L7b:
            r0 = move-exception
            r1 = r0
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r0 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r2 = "Distribution points could not be read."
            r0.<init>(r2, r1)
            throw r0
        L85:
            r14 = 0
            r15 = 11
            r0 = 0
            r16 = 0
        L8b:
            int r1 = r11.getCertStatus()
            if (r1 != r15) goto Lee
            boolean r1 = r12.isAllReasons()
            if (r1 != 0) goto Lee
            org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd java.lang.Exception -> Ldf
            org.bouncycastle.x509.AttributeCertificateIssuer r2 = r18.getIssuer()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd java.lang.Exception -> Ldf
            java.security.Principal[] r2 = r2.getPrincipals()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd java.lang.Exception -> Ldf
            r2 = r2[r14]     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd java.lang.Exception -> Ldf
            javax.security.auth.x500.X500Principal r2 = (javax.security.auth.x500.X500Principal) r2     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd java.lang.Exception -> Ldf
            byte[] r2 = r2.getEncoded()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd java.lang.Exception -> Ldf
            r1.<init>(r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd java.lang.Exception -> Ldf
            org.bouncycastle.asn1.DERObject r1 = r1.readObject()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd java.lang.Exception -> Ldf
            org.bouncycastle.asn1.x509.DistributionPoint r2 = new org.bouncycastle.asn1.x509.DistributionPoint     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd
            org.bouncycastle.asn1.x509.DistributionPointName r3 = new org.bouncycastle.asn1.x509.DistributionPointName     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd
            org.bouncycastle.asn1.x509.GeneralNames r4 = new org.bouncycastle.asn1.x509.GeneralNames     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd
            org.bouncycastle.asn1.x509.GeneralName r5 = new org.bouncycastle.asn1.x509.GeneralName     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd
            r6 = 4
            r5.<init>(r6, r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd
            r4.<init>(r5)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd
            r3.<init>(r14, r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd
            r1 = 0
            r2.<init>(r3, r1, r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd
            java.lang.Object r1 = r19.clone()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd
            r3 = r1
            org.bouncycastle.x509.ExtendedPKIXParameters r3 = (org.bouncycastle.x509.ExtendedPKIXParameters) r3     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd
            r1 = r2
            r2 = r18
            r4 = r21
            r5 = r20
            r6 = r11
            r7 = r12
            r8 = r22
            checkCRL(r1, r2, r3, r4, r5, r6, r7, r8)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd
            r14 = 1
            goto Lf0
        Ldd:
            r0 = move-exception
            goto Le8
        Ldf:
            r0 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r1 = new org.bouncycastle.jce.provider.AnnotatedException     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd
            java.lang.String r2 = "Issuer from certificate for CRL could not be reencoded."
            r1.<init>(r2, r0)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd
            throw r1     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Ldd
        Le8:
            org.bouncycastle.jce.provider.AnnotatedException r1 = new org.bouncycastle.jce.provider.AnnotatedException
            r1.<init>(r13, r0)
            r0 = r1
        Lee:
            r14 = r16
        Lf0:
            if (r14 == 0) goto L14f
            int r0 = r11.getCertStatus()
            if (r0 != r15) goto L118
            boolean r0 = r12.isAllReasons()
            r1 = 12
            if (r0 != 0) goto L109
            int r0 = r11.getCertStatus()
            if (r0 != r15) goto L109
            r11.setCertStatus(r1)
        L109:
            int r0 = r11.getCertStatus()
            if (r0 == r1) goto L110
            goto L183
        L110:
            java.security.cert.CertPathValidatorException r0 = new java.security.cert.CertPathValidatorException
            java.lang.String r1 = "Attribute certificate status could not be determined."
            r0.<init>(r1)
            throw r0
        L118:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Attribute certificate revocation after "
            r0.append(r1)
            java.util.Date r1 = r11.getRevocationDate()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = ", reason: "
            r1.append(r0)
            java.lang.String[] r0 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.crlReasons
            int r2 = r11.getCertStatus()
            r0 = r0[r2]
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.security.cert.CertPathValidatorException r1 = new java.security.cert.CertPathValidatorException
            r1.<init>(r0)
            throw r1
        L14f:
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r1 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r2 = "No valid CRL found."
            r1.<init>(r2, r0)
            throw r1
        L157:
            r0 = move-exception
            r1 = r0
            java.security.cert.CertPathValidatorException r0 = new java.security.cert.CertPathValidatorException
            java.lang.String r2 = "No additional CRL locations could be decoded from CRL distribution point extension."
            r0.<init>(r2, r1)
            throw r0
        L161:
            r0 = move-exception
            java.security.cert.CertPathValidatorException r1 = new java.security.cert.CertPathValidatorException
            java.lang.String r2 = "CRL distribution point extension could not be read."
            r1.<init>(r2, r0)
            throw r1
        L16a:
            java.lang.String r0 = org.bouncycastle.jce.provider.RFC3281CertPathUtilities.CRL_DISTRIBUTION_POINTS
            byte[] r0 = r9.getExtensionValue(r0)
            if (r0 != 0) goto L17b
            java.lang.String r0 = org.bouncycastle.jce.provider.RFC3281CertPathUtilities.AUTHORITY_INFO_ACCESS
            byte[] r0 = r9.getExtensionValue(r0)
            if (r0 != 0) goto L17b
            goto L183
        L17b:
            java.security.cert.CertPathValidatorException r0 = new java.security.cert.CertPathValidatorException
            java.lang.String r1 = "No rev avail extension is set, but also an AC revocation pointer."
            r0.<init>(r1)
            throw r0
        L183:
            return
    }

    protected static java.security.cert.CertPath processAttrCert1(org.bouncycastle.x509.X509AttributeCertificate r9, org.bouncycastle.x509.ExtendedPKIXParameters r10) throws java.security.cert.CertPathValidatorException {
            java.lang.String r0 = "Support class could not be created."
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            org.bouncycastle.x509.AttributeCertificateHolder r2 = r9.getHolder()
            java.security.Principal[] r2 = r2.getIssuer()
            java.lang.String r3 = "Unable to encode X500 principal."
            java.lang.String r4 = "Public key certificate for attribute certificate cannot be searched."
            r5 = 0
            if (r2 == 0) goto L6e
            org.bouncycastle.x509.X509CertStoreSelector r2 = new org.bouncycastle.x509.X509CertStoreSelector
            r2.<init>()
            org.bouncycastle.x509.AttributeCertificateHolder r6 = r9.getHolder()
            java.math.BigInteger r6 = r6.getSerialNumber()
            r2.setSerialNumber(r6)
            org.bouncycastle.x509.AttributeCertificateHolder r6 = r9.getHolder()
            java.security.Principal[] r6 = r6.getIssuer()
            r7 = 0
        L2f:
            int r8 = r6.length
            if (r7 >= r8) goto L5f
            r8 = r6[r7]     // Catch: java.io.IOException -> L51 org.bouncycastle.jce.provider.AnnotatedException -> L58
            boolean r8 = r8 instanceof javax.security.auth.x500.X500Principal     // Catch: java.io.IOException -> L51 org.bouncycastle.jce.provider.AnnotatedException -> L58
            if (r8 == 0) goto L43
            r8 = r6[r7]     // Catch: java.io.IOException -> L51 org.bouncycastle.jce.provider.AnnotatedException -> L58
            javax.security.auth.x500.X500Principal r8 = (javax.security.auth.x500.X500Principal) r8     // Catch: java.io.IOException -> L51 org.bouncycastle.jce.provider.AnnotatedException -> L58
            byte[] r8 = r8.getEncoded()     // Catch: java.io.IOException -> L51 org.bouncycastle.jce.provider.AnnotatedException -> L58
            r2.setIssuer(r8)     // Catch: java.io.IOException -> L51 org.bouncycastle.jce.provider.AnnotatedException -> L58
        L43:
            java.util.List r8 = r10.getStores()     // Catch: java.io.IOException -> L51 org.bouncycastle.jce.provider.AnnotatedException -> L58
            java.util.Collection r8 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.findCertificates(r2, r8)     // Catch: java.io.IOException -> L51 org.bouncycastle.jce.provider.AnnotatedException -> L58
            r1.addAll(r8)     // Catch: java.io.IOException -> L51 org.bouncycastle.jce.provider.AnnotatedException -> L58
            int r7 = r7 + 1
            goto L2f
        L51:
            r9 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r10 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r10.<init>(r3, r9)
            throw r10
        L58:
            r9 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r10 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r10.<init>(r4, r9)
            throw r10
        L5f:
            boolean r2 = r1.isEmpty()
            if (r2 != 0) goto L66
            goto L6e
        L66:
            java.security.cert.CertPathValidatorException r9 = new java.security.cert.CertPathValidatorException
            java.lang.String r10 = "Public key certificate specified in base certificate ID for attribute certificate cannot be found."
            r9.<init>(r10)
            throw r9
        L6e:
            org.bouncycastle.x509.AttributeCertificateHolder r2 = r9.getHolder()
            java.security.Principal[] r2 = r2.getEntityNames()
            if (r2 == 0) goto Lc4
            org.bouncycastle.x509.X509CertStoreSelector r2 = new org.bouncycastle.x509.X509CertStoreSelector
            r2.<init>()
            org.bouncycastle.x509.AttributeCertificateHolder r9 = r9.getHolder()
            java.security.Principal[] r9 = r9.getEntityNames()
        L85:
            int r6 = r9.length
            if (r5 >= r6) goto Lb5
            r6 = r9[r5]     // Catch: java.io.IOException -> La7 org.bouncycastle.jce.provider.AnnotatedException -> Lae
            boolean r6 = r6 instanceof javax.security.auth.x500.X500Principal     // Catch: java.io.IOException -> La7 org.bouncycastle.jce.provider.AnnotatedException -> Lae
            if (r6 == 0) goto L99
            r6 = r9[r5]     // Catch: java.io.IOException -> La7 org.bouncycastle.jce.provider.AnnotatedException -> Lae
            javax.security.auth.x500.X500Principal r6 = (javax.security.auth.x500.X500Principal) r6     // Catch: java.io.IOException -> La7 org.bouncycastle.jce.provider.AnnotatedException -> Lae
            byte[] r6 = r6.getEncoded()     // Catch: java.io.IOException -> La7 org.bouncycastle.jce.provider.AnnotatedException -> Lae
            r2.setIssuer(r6)     // Catch: java.io.IOException -> La7 org.bouncycastle.jce.provider.AnnotatedException -> Lae
        L99:
            java.util.List r6 = r10.getStores()     // Catch: java.io.IOException -> La7 org.bouncycastle.jce.provider.AnnotatedException -> Lae
            java.util.Collection r6 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.findCertificates(r2, r6)     // Catch: java.io.IOException -> La7 org.bouncycastle.jce.provider.AnnotatedException -> Lae
            r1.addAll(r6)     // Catch: java.io.IOException -> La7 org.bouncycastle.jce.provider.AnnotatedException -> Lae
            int r5 = r5 + 1
            goto L85
        La7:
            r9 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r10 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r10.<init>(r3, r9)
            throw r10
        Lae:
            r9 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r10 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r10.<init>(r4, r9)
            throw r10
        Lb5:
            boolean r9 = r1.isEmpty()
            if (r9 != 0) goto Lbc
            goto Lc4
        Lbc:
            java.security.cert.CertPathValidatorException r9 = new java.security.cert.CertPathValidatorException
            java.lang.String r10 = "Public key certificate specified in entity name for attribute certificate cannot be found."
            r9.<init>(r10)
            throw r9
        Lc4:
            org.bouncycastle.x509.ExtendedPKIXParameters r9 = org.bouncycastle.x509.ExtendedPKIXBuilderParameters.getInstance(r10)
            org.bouncycastle.x509.ExtendedPKIXBuilderParameters r9 = (org.bouncycastle.x509.ExtendedPKIXBuilderParameters) r9
            java.util.Iterator r10 = r1.iterator()
            r1 = 0
            r2 = r1
        Ld0:
            boolean r3 = r10.hasNext()
            if (r3 == 0) goto L11b
            org.bouncycastle.x509.X509CertStoreSelector r3 = new org.bouncycastle.x509.X509CertStoreSelector
            r3.<init>()
            java.lang.Object r4 = r10.next()
            java.security.cert.X509Certificate r4 = (java.security.cert.X509Certificate) r4
            r3.setCertificate(r4)
            r9.setTargetConstraints(r3)
            java.lang.String r3 = "PKIX"
            java.lang.String r4 = "BC"
            java.security.cert.CertPathBuilder r3 = java.security.cert.CertPathBuilder.getInstance(r3, r4)     // Catch: java.security.NoSuchAlgorithmException -> L10d java.security.NoSuchProviderException -> L114
            org.bouncycastle.x509.ExtendedPKIXParameters r4 = org.bouncycastle.x509.ExtendedPKIXBuilderParameters.getInstance(r9)     // Catch: java.security.InvalidAlgorithmParameterException -> Lf8 java.security.cert.CertPathBuilderException -> L103
            java.security.cert.CertPathBuilderResult r2 = r3.build(r4)     // Catch: java.security.InvalidAlgorithmParameterException -> Lf8 java.security.cert.CertPathBuilderException -> L103
            goto Ld0
        Lf8:
            r9 = move-exception
            java.lang.RuntimeException r10 = new java.lang.RuntimeException
            java.lang.String r9 = r9.getMessage()
            r10.<init>(r9)
            throw r10
        L103:
            r1 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r3 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r4 = "Certification path for public key certificate of attribute certificate could not be build."
            r3.<init>(r4, r1)
            r1 = r3
            goto Ld0
        L10d:
            r9 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r10 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r10.<init>(r0, r9)
            throw r10
        L114:
            r9 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r10 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r10.<init>(r0, r9)
            throw r10
        L11b:
            if (r1 != 0) goto L122
            java.security.cert.CertPath r9 = r2.getCertPath()
            return r9
        L122:
            throw r1
    }

    protected static java.security.cert.CertPathValidatorResult processAttrCert2(java.security.cert.CertPath r3, org.bouncycastle.x509.ExtendedPKIXParameters r4) throws java.security.cert.CertPathValidatorException {
            java.lang.String r0 = "Support class could not be created."
            java.lang.String r1 = "PKIX"
            java.lang.String r2 = "BC"
            java.security.cert.CertPathValidator r0 = java.security.cert.CertPathValidator.getInstance(r1, r2)     // Catch: java.security.NoSuchAlgorithmException -> L23 java.security.NoSuchProviderException -> L2a
            java.security.cert.CertPathValidatorResult r3 = r0.validate(r3, r4)     // Catch: java.security.InvalidAlgorithmParameterException -> Lf java.security.cert.CertPathValidatorException -> L1a
            return r3
        Lf:
            r3 = move-exception
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            java.lang.String r3 = r3.getMessage()
            r4.<init>(r3)
            throw r4
        L1a:
            r3 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r4 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r0 = "Certification path for issuer certificate of attribute certificate could not be validated."
            r4.<init>(r0, r3)
            throw r4
        L23:
            r3 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r4 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r4.<init>(r0, r3)
            throw r4
        L2a:
            r3 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r4 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r4.<init>(r0, r3)
            throw r4
    }

    protected static void processAttrCert3(java.security.cert.X509Certificate r1, org.bouncycastle.x509.ExtendedPKIXParameters r2) throws java.security.cert.CertPathValidatorException {
            boolean[] r2 = r1.getKeyUsage()
            if (r2 == 0) goto L21
            boolean[] r2 = r1.getKeyUsage()
            r0 = 0
            boolean r2 = r2[r0]
            if (r2 != 0) goto L21
            boolean[] r2 = r1.getKeyUsage()
            r0 = 1
            boolean r2 = r2[r0]
            if (r2 == 0) goto L19
            goto L21
        L19:
            java.security.cert.CertPathValidatorException r1 = new java.security.cert.CertPathValidatorException
            java.lang.String r2 = "Attribute certificate issuer public key cannot be used to validate digital signatures."
            r1.<init>(r2)
            throw r1
        L21:
            int r1 = r1.getBasicConstraints()
            r2 = -1
            if (r1 != r2) goto L29
            return
        L29:
            java.security.cert.CertPathValidatorException r1 = new java.security.cert.CertPathValidatorException
            java.lang.String r2 = "Attribute certificate issuer is also a public key certificate issuer."
            r1.<init>(r2)
            throw r1
    }

    protected static void processAttrCert4(java.security.cert.X509Certificate r4, org.bouncycastle.x509.ExtendedPKIXParameters r5) throws java.security.cert.CertPathValidatorException {
            java.util.Set r5 = r5.getTrustedACIssuers()
            java.util.Iterator r5 = r5.iterator()
            r0 = 0
        L9:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L35
            java.lang.Object r1 = r5.next()
            java.security.cert.TrustAnchor r1 = (java.security.cert.TrustAnchor) r1
            javax.security.auth.x500.X500Principal r2 = r4.getSubjectX500Principal()
            java.lang.String r3 = "RFC2253"
            java.lang.String r2 = r2.getName(r3)
            java.lang.String r3 = r1.getCAName()
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L33
            java.security.cert.X509Certificate r1 = r1.getTrustedCert()
            boolean r1 = r4.equals(r1)
            if (r1 == 0) goto L9
        L33:
            r0 = 1
            goto L9
        L35:
            if (r0 == 0) goto L38
            return
        L38:
            java.security.cert.CertPathValidatorException r4 = new java.security.cert.CertPathValidatorException
            java.lang.String r5 = "Attribute certificate issuer is not directly trusted."
            r4.<init>(r5)
            throw r4
    }

    protected static void processAttrCert5(org.bouncycastle.x509.X509AttributeCertificate r1, org.bouncycastle.x509.ExtendedPKIXParameters r2) throws java.security.cert.CertPathValidatorException {
            java.lang.String r0 = "Attribute certificate is not valid."
            java.util.Date r2 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getValidDate(r2)     // Catch: java.security.cert.CertificateNotYetValidException -> La java.security.cert.CertificateExpiredException -> L11
            r1.checkValidity(r2)     // Catch: java.security.cert.CertificateNotYetValidException -> La java.security.cert.CertificateExpiredException -> L11
            return
        La:
            r1 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r2 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r2.<init>(r0, r1)
            throw r2
        L11:
            r1 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r2 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r2.<init>(r0, r1)
            throw r2
    }

    protected static void processAttrCert7(org.bouncycastle.x509.X509AttributeCertificate r3, java.security.cert.CertPath r4, java.security.cert.CertPath r5, org.bouncycastle.x509.ExtendedPKIXParameters r6) throws java.security.cert.CertPathValidatorException {
            java.lang.String r0 = "Target information extension could not be read."
            java.util.Set r1 = r3.getCriticalExtensionOIDs()
            java.lang.String r2 = org.bouncycastle.jce.provider.RFC3281CertPathUtilities.TARGET_INFORMATION
            boolean r2 = r1.contains(r2)
            if (r2 == 0) goto L26
            java.lang.String r2 = org.bouncycastle.jce.provider.RFC3281CertPathUtilities.TARGET_INFORMATION     // Catch: java.lang.IllegalArgumentException -> L18 org.bouncycastle.jce.provider.AnnotatedException -> L1f
            org.bouncycastle.asn1.DERObject r2 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r3, r2)     // Catch: java.lang.IllegalArgumentException -> L18 org.bouncycastle.jce.provider.AnnotatedException -> L1f
            org.bouncycastle.asn1.x509.TargetInformation.getInstance(r2)     // Catch: java.lang.IllegalArgumentException -> L18 org.bouncycastle.jce.provider.AnnotatedException -> L1f
            goto L26
        L18:
            r3 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r4 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r4.<init>(r0, r3)
            throw r4
        L1f:
            r3 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r4 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r4.<init>(r0, r3)
            throw r4
        L26:
            java.lang.String r0 = org.bouncycastle.jce.provider.RFC3281CertPathUtilities.TARGET_INFORMATION
            r1.remove(r0)
            java.util.Set r6 = r6.getAttrCertCheckers()
            java.util.Iterator r6 = r6.iterator()
        L33:
            boolean r0 = r6.hasNext()
            if (r0 == 0) goto L43
            java.lang.Object r0 = r6.next()
            org.bouncycastle.x509.PKIXAttrCertChecker r0 = (org.bouncycastle.x509.PKIXAttrCertChecker) r0
            r0.check(r3, r4, r5, r1)
            goto L33
        L43:
            boolean r3 = r1.isEmpty()
            if (r3 == 0) goto L4a
            return
        L4a:
            java.security.cert.CertPathValidatorException r3 = new java.security.cert.CertPathValidatorException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "Attribute certificate contains unsupported critical extensions: "
            r4.append(r5)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            r3.<init>(r4)
            throw r3
    }
}
