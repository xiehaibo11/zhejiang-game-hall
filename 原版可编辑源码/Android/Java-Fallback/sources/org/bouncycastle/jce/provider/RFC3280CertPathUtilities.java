package org.bouncycastle.jce.provider;

public class RFC3280CertPathUtilities {
    protected static final java.lang.String ANY_POLICY = "2.5.29.32.0";
    protected static final java.lang.String AUTHORITY_KEY_IDENTIFIER = null;
    protected static final java.lang.String BASIC_CONSTRAINTS = null;
    protected static final java.lang.String CERTIFICATE_POLICIES = null;
    protected static final java.lang.String CRL_DISTRIBUTION_POINTS = null;
    protected static final java.lang.String CRL_NUMBER = null;
    protected static final int CRL_SIGN = 6;
    protected static final java.lang.String DELTA_CRL_INDICATOR = null;
    protected static final java.lang.String FRESHEST_CRL = null;
    protected static final java.lang.String INHIBIT_ANY_POLICY = null;
    protected static final java.lang.String ISSUING_DISTRIBUTION_POINT = null;
    protected static final int KEY_CERT_SIGN = 5;
    protected static final java.lang.String KEY_USAGE = null;
    protected static final java.lang.String NAME_CONSTRAINTS = null;
    protected static final java.lang.String POLICY_CONSTRAINTS = null;
    protected static final java.lang.String POLICY_MAPPINGS = null;
    protected static final java.lang.String SUBJECT_ALTERNATIVE_NAME = null;
    protected static final java.lang.String[] crlReasons = null;

    static {
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.CertificatePolicies
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.CERTIFICATE_POLICIES = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.PolicyMappings
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.POLICY_MAPPINGS = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.InhibitAnyPolicy
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.INHIBIT_ANY_POLICY = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.IssuingDistributionPoint
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.ISSUING_DISTRIBUTION_POINT = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.FreshestCRL
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.FRESHEST_CRL = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.DeltaCRLIndicator
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.DELTA_CRL_INDICATOR = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.PolicyConstraints
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.POLICY_CONSTRAINTS = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.BasicConstraints
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.BASIC_CONSTRAINTS = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.CRLDistributionPoints
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.CRL_DISTRIBUTION_POINTS = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.SubjectAlternativeName
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.SUBJECT_ALTERNATIVE_NAME = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.NameConstraints
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.NAME_CONSTRAINTS = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.AuthorityKeyIdentifier
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.AUTHORITY_KEY_IDENTIFIER = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.KeyUsage
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.KEY_USAGE = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.CRLNumber
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.CRL_NUMBER = r0
            java.lang.String r1 = "unspecified"
            java.lang.String r2 = "keyCompromise"
            java.lang.String r3 = "cACompromise"
            java.lang.String r4 = "affiliationChanged"
            java.lang.String r5 = "superseded"
            java.lang.String r6 = "cessationOfOperation"
            java.lang.String r7 = "certificateHold"
            java.lang.String r8 = "unknown"
            java.lang.String r9 = "removeFromCRL"
            java.lang.String r10 = "privilegeWithdrawn"
            java.lang.String r11 = "aACompromise"
            java.lang.String[] r0 = new java.lang.String[]{r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11}
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.crlReasons = r0
            return
    }

    public RFC3280CertPathUtilities() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void checkCRL(org.bouncycastle.asn1.x509.DistributionPoint r22, org.bouncycastle.x509.ExtendedPKIXParameters r23, java.security.cert.X509Certificate r24, java.util.Date r25, java.security.cert.X509Certificate r26, java.security.PublicKey r27, org.bouncycastle.jce.provider.CertStatus r28, org.bouncycastle.jce.provider.ReasonsMask r29, java.util.List r30) throws org.bouncycastle.jce.provider.AnnotatedException {
            r1 = r22
            r8 = r23
            r9 = r24
            r10 = r25
            r11 = r28
            r12 = r29
            java.util.Date r13 = new java.util.Date
            long r2 = java.lang.System.currentTimeMillis()
            r13.<init>(r2)
            long r2 = r25.getTime()
            long r4 = r13.getTime()
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 > 0) goto L134
            java.util.Set r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getCompleteCRLs(r1, r9, r13, r8)
            r2 = 0
            java.util.Iterator r14 = r0.iterator()
            r16 = 0
            r0 = r16
            r17 = 0
        L30:
            boolean r2 = r14.hasNext()
            if (r2 == 0) goto L130
            int r2 = r28.getCertStatus()
            r7 = 11
            if (r2 != r7) goto L130
            boolean r2 = r29.isAllReasons()
            if (r2 != 0) goto L130
            java.lang.Object r2 = r14.next()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L128
            r6 = r2
            java.security.cert.X509CRL r6 = (java.security.cert.X509CRL) r6     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L128
            org.bouncycastle.jce.provider.ReasonsMask r5 = processCRLD(r6, r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L128
            boolean r2 = r5.hasNewReasons(r12)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L128
            if (r2 != 0) goto L56
            goto L30
        L56:
            r2 = r6
            r3 = r24
            r4 = r26
            r18 = r5
            r5 = r27
            r15 = r6
            r6 = r23
            r19 = r14
            r14 = 11
            r7 = r30
            java.util.Set r2 = processCRLF(r2, r3, r4, r5, r6, r7)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L126
            java.security.PublicKey r2 = processCRLG(r15, r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L126
            boolean r3 = r23.isUseDeltasEnabled()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L126
            if (r3 == 0) goto L7f
            java.util.Set r3 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getDeltaCRLs(r13, r8, r15)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L126
            java.security.cert.X509CRL r2 = processCRLH(r3, r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L126
            goto L81
        L7f:
            r2 = r16
        L81:
            int r3 = r23.getValidityModel()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L126
            r4 = 1
            if (r3 == r4) goto La5
            java.util.Date r3 = r24.getNotAfter()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            long r5 = r3.getTime()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            java.util.Date r3 = r15.getThisUpdate()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            long r20 = r3.getTime()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            int r3 = (r5 > r20 ? 1 : (r5 == r20 ? 0 : -1))
            if (r3 < 0) goto L9d
            goto La5
        L9d:
            org.bouncycastle.jce.provider.AnnotatedException r0 = new org.bouncycastle.jce.provider.AnnotatedException     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            java.lang.String r2 = "No valid CRL for current time found."
            r0.<init>(r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            throw r0     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
        La5:
            processCRLB1(r1, r9, r15)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            processCRLB2(r1, r9, r15)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            processCRLC(r2, r15, r8)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            processCRLI(r10, r2, r9, r11, r8)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            processCRLJ(r10, r15, r9, r11)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            int r3 = r28.getCertStatus()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            r5 = 8
            if (r3 != r5) goto Lbf
            r11.setCertStatus(r14)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
        Lbf:
            r3 = r18
            r12.addReasons(r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            java.util.Set r3 = r15.getCriticalExtensionOIDs()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            if (r3 == 0) goto Lf0
            java.util.HashSet r5 = new java.util.HashSet     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            r5.<init>(r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.x509.X509Extensions.IssuingDistributionPoint     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            java.lang.String r3 = r3.getId()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            r5.remove(r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.x509.X509Extensions.DeltaCRLIndicator     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            java.lang.String r3 = r3.getId()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            r5.remove(r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            boolean r3 = r5.isEmpty()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            if (r3 == 0) goto Le8
            goto Lf0
        Le8:
            org.bouncycastle.jce.provider.AnnotatedException r0 = new org.bouncycastle.jce.provider.AnnotatedException     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            java.lang.String r2 = "CRL contains unsupported critical extensions."
            r0.<init>(r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            throw r0     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
        Lf0:
            if (r2 == 0) goto L11e
            java.util.Set r2 = r2.getCriticalExtensionOIDs()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            if (r2 == 0) goto L11e
            java.util.HashSet r3 = new java.util.HashSet     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            r3.<init>(r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.x509.X509Extensions.IssuingDistributionPoint     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            java.lang.String r2 = r2.getId()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            r3.remove(r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.x509.X509Extensions.DeltaCRLIndicator     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            java.lang.String r2 = r2.getId()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            r3.remove(r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            boolean r2 = r3.isEmpty()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            if (r2 == 0) goto L116
            goto L11e
        L116:
            org.bouncycastle.jce.provider.AnnotatedException r0 = new org.bouncycastle.jce.provider.AnnotatedException     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            java.lang.String r2 = "Delta CRL contains unsupported critical extension."
            r0.<init>(r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
            throw r0     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L124
        L11e:
            r14 = r19
            r17 = 1
            goto L30
        L124:
            r0 = move-exception
            goto L12c
        L126:
            r0 = move-exception
            goto L12b
        L128:
            r0 = move-exception
            r19 = r14
        L12b:
            r4 = 1
        L12c:
            r14 = r19
            goto L30
        L130:
            if (r17 == 0) goto L133
            return
        L133:
            throw r0
        L134:
            org.bouncycastle.jce.provider.AnnotatedException r0 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r1 = "Validation time is in future."
            r0.<init>(r1)
            throw r0
    }

    protected static void checkCRLs(org.bouncycastle.x509.ExtendedPKIXParameters r19, java.security.cert.X509Certificate r20, java.util.Date r21, java.security.cert.X509Certificate r22, java.security.PublicKey r23, java.util.List r24) throws org.bouncycastle.jce.provider.AnnotatedException {
            java.lang.String r0 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.CRL_DISTRIBUTION_POINTS     // Catch: java.lang.Exception -> L14d
            r10 = r20
            org.bouncycastle.asn1.DERObject r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r10, r0)     // Catch: java.lang.Exception -> L14d
            org.bouncycastle.asn1.x509.CRLDistPoint r0 = org.bouncycastle.asn1.x509.CRLDistPoint.getInstance(r0)     // Catch: java.lang.Exception -> L14d
            r11 = r19
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.addAdditionalStoresFromCRLDistributionPoint(r0, r11)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L143
            org.bouncycastle.jce.provider.CertStatus r12 = new org.bouncycastle.jce.provider.CertStatus
            r12.<init>()
            org.bouncycastle.jce.provider.ReasonsMask r13 = new org.bouncycastle.jce.provider.ReasonsMask
            r13.<init>()
            r15 = 0
            r9 = 0
            r8 = 11
            if (r0 == 0) goto L79
            org.bouncycastle.asn1.x509.DistributionPoint[] r7 = r0.getDistributionPoints()     // Catch: java.lang.Exception -> L6f
            if (r7 == 0) goto L79
            r0 = r9
            r6 = 0
            r16 = 0
        L2b:
            int r1 = r7.length
            if (r6 >= r1) goto L6c
            int r1 = r12.getCertStatus()
            if (r1 != r8) goto L6c
            boolean r1 = r13.isAllReasons()
            if (r1 != 0) goto L6c
            java.lang.Object r1 = r19.clone()
            r2 = r1
            org.bouncycastle.x509.ExtendedPKIXParameters r2 = (org.bouncycastle.x509.ExtendedPKIXParameters) r2
            r1 = r7[r6]     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L5d
            r3 = r20
            r4 = r21
            r5 = r22
            r17 = r6
            r6 = r23
            r18 = r7
            r7 = r12
            r14 = 11
            r8 = r13
            r9 = r24
            checkCRL(r1, r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L5b
            r16 = 1
            goto L64
        L5b:
            r0 = move-exception
            goto L64
        L5d:
            r0 = move-exception
            r17 = r6
            r18 = r7
            r14 = 11
        L64:
            int r6 = r17 + 1
            r7 = r18
            r8 = 11
            r9 = 0
            goto L2b
        L6c:
            r14 = 11
            goto L7e
        L6f:
            r0 = move-exception
            r1 = r0
            org.bouncycastle.jce.provider.AnnotatedException r0 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r2 = "Distribution points could not be read."
            r0.<init>(r2, r1)
            throw r0
        L79:
            r14 = 11
            r0 = 0
            r16 = 0
        L7e:
            int r1 = r12.getCertStatus()
            if (r1 != r14) goto Ld7
            boolean r1 = r13.isAllReasons()
            if (r1 != 0) goto Ld7
            org.bouncycastle.asn1.ASN1InputStream r1 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc java.lang.Exception -> Lce
            javax.security.auth.x500.X500Principal r2 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getEncodedIssuerPrincipal(r20)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc java.lang.Exception -> Lce
            byte[] r2 = r2.getEncoded()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc java.lang.Exception -> Lce
            r1.<init>(r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc java.lang.Exception -> Lce
            org.bouncycastle.asn1.DERObject r1 = r1.readObject()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc java.lang.Exception -> Lce
            org.bouncycastle.asn1.x509.DistributionPoint r2 = new org.bouncycastle.asn1.x509.DistributionPoint     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc
            org.bouncycastle.asn1.x509.DistributionPointName r3 = new org.bouncycastle.asn1.x509.DistributionPointName     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc
            org.bouncycastle.asn1.x509.GeneralNames r4 = new org.bouncycastle.asn1.x509.GeneralNames     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc
            org.bouncycastle.asn1.x509.GeneralName r5 = new org.bouncycastle.asn1.x509.GeneralName     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc
            r6 = 4
            r5.<init>(r6, r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc
            r4.<init>(r5)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc
            r3.<init>(r15, r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc
            r1 = 0
            r2.<init>(r3, r1, r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc
            java.lang.Object r1 = r19.clone()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc
            r3 = r1
            org.bouncycastle.x509.ExtendedPKIXParameters r3 = (org.bouncycastle.x509.ExtendedPKIXParameters) r3     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc
            r1 = r2
            r2 = r3
            r3 = r20
            r4 = r21
            r5 = r22
            r6 = r23
            r7 = r12
            r8 = r13
            r9 = r24
            checkCRL(r1, r2, r3, r4, r5, r6, r7, r8, r9)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc
            r16 = 1
            goto Ld7
        Lcc:
            r0 = move-exception
            goto Ld7
        Lce:
            r0 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r1 = new org.bouncycastle.jce.provider.AnnotatedException     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc
            java.lang.String r2 = "Issuer from certificate for CRL could not be reencoded."
            r1.<init>(r2, r0)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc
            throw r1     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lcc
        Ld7:
            if (r16 != 0) goto Le6
            boolean r1 = r0 instanceof org.bouncycastle.jce.provider.AnnotatedException
            if (r1 == 0) goto Lde
            throw r0
        Lde:
            org.bouncycastle.jce.provider.AnnotatedException r1 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r2 = "No valid CRL found."
            r1.<init>(r2, r0)
            throw r1
        Le6:
            int r0 = r12.getCertStatus()
            if (r0 != r14) goto L10c
            boolean r0 = r13.isAllReasons()
            r1 = 12
            if (r0 != 0) goto Lfd
            int r0 = r12.getCertStatus()
            if (r0 != r14) goto Lfd
            r12.setCertStatus(r1)
        Lfd:
            int r0 = r12.getCertStatus()
            if (r0 == r1) goto L104
            return
        L104:
            org.bouncycastle.jce.provider.AnnotatedException r0 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r1 = "Certificate status could not be determined."
            r0.<init>(r1)
            throw r0
        L10c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Certificate revocation after "
            r0.append(r1)
            java.util.Date r1 = r12.getRevocationDate()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = ", reason: "
            r1.append(r0)
            java.lang.String[] r0 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.crlReasons
            int r2 = r12.getCertStatus()
            r0 = r0[r2]
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            org.bouncycastle.jce.provider.AnnotatedException r1 = new org.bouncycastle.jce.provider.AnnotatedException
            r1.<init>(r0)
            throw r1
        L143:
            r0 = move-exception
            r1 = r0
            org.bouncycastle.jce.provider.AnnotatedException r0 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r2 = "No additional CRL locations could be decoded from CRL distribution point extension."
            r0.<init>(r2, r1)
            throw r0
        L14d:
            r0 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r1 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r2 = "CRL distribution point extension could not be read."
            r1.<init>(r2, r0)
            throw r1
    }

    protected static org.bouncycastle.jce.provider.PKIXPolicyNode prepareCertB(java.security.cert.CertPath r19, int r20, java.util.List[] r21, org.bouncycastle.jce.provider.PKIXPolicyNode r22, int r23) throws java.security.cert.CertPathValidatorException {
            r1 = r19
            r2 = r20
            r0 = r21
            java.util.List r3 = r19.getCertificates()
            java.lang.Object r4 = r3.get(r2)
            java.security.cert.X509Certificate r4 = (java.security.cert.X509Certificate) r4
            int r3 = r3.size()
            int r3 = r3 - r2
            java.lang.String r5 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.POLICY_MAPPINGS     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L1bb
            org.bouncycastle.asn1.DERObject r5 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r4, r5)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L1bb
            org.bouncycastle.asn1.ASN1Sequence r5 = org.bouncycastle.asn1.DERSequence.getInstance(r5)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L1bb
            if (r5 == 0) goto L1b8
            java.util.HashMap r13 = new java.util.HashMap
            r13.<init>()
            java.util.HashSet r6 = new java.util.HashSet
            r6.<init>()
            r14 = 0
            r7 = 0
        L2d:
            int r8 = r5.size()
            r15 = 1
            if (r7 >= r8) goto L6f
            org.bouncycastle.asn1.DEREncodable r8 = r5.getObjectAt(r7)
            org.bouncycastle.asn1.ASN1Sequence r8 = (org.bouncycastle.asn1.ASN1Sequence) r8
            org.bouncycastle.asn1.DEREncodable r9 = r8.getObjectAt(r14)
            org.bouncycastle.asn1.DERObjectIdentifier r9 = (org.bouncycastle.asn1.DERObjectIdentifier) r9
            java.lang.String r9 = r9.getId()
            org.bouncycastle.asn1.DEREncodable r8 = r8.getObjectAt(r15)
            org.bouncycastle.asn1.DERObjectIdentifier r8 = (org.bouncycastle.asn1.DERObjectIdentifier) r8
            java.lang.String r8 = r8.getId()
            boolean r10 = r13.containsKey(r9)
            if (r10 != 0) goto L63
            java.util.HashSet r10 = new java.util.HashSet
            r10.<init>()
            r10.add(r8)
            r13.put(r9, r10)
            r6.add(r9)
            goto L6c
        L63:
            java.lang.Object r9 = r13.get(r9)
            java.util.Set r9 = (java.util.Set) r9
            r9.add(r8)
        L6c:
            int r7 = r7 + 1
            goto L2d
        L6f:
            java.util.Iterator r16 = r6.iterator()
            r17 = r22
        L75:
            boolean r5 = r16.hasNext()
            if (r5 == 0) goto L1ba
            java.lang.Object r5 = r16.next()
            r11 = r5
            java.lang.String r11 = (java.lang.String) r11
            if (r23 <= 0) goto L161
            r5 = r0[r3]
            java.util.Iterator r5 = r5.iterator()
        L8a:
            boolean r6 = r5.hasNext()
            if (r6 == 0) goto Laa
            java.lang.Object r6 = r5.next()
            org.bouncycastle.jce.provider.PKIXPolicyNode r6 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r6
            java.lang.String r7 = r6.getValidPolicy()
            boolean r7 = r7.equals(r11)
            if (r7 == 0) goto L8a
            java.lang.Object r5 = r13.get(r11)
            java.util.Set r5 = (java.util.Set) r5
            r6.expectedPolicies = r5
            r5 = 1
            goto Lab
        Laa:
            r5 = 0
        Lab:
            if (r5 != 0) goto L1b5
            r5 = r0[r3]
            java.util.Iterator r5 = r5.iterator()
        Lb3:
            boolean r6 = r5.hasNext()
            if (r6 == 0) goto L1b5
            java.lang.Object r6 = r5.next()
            org.bouncycastle.jce.provider.PKIXPolicyNode r6 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r6
            java.lang.String r7 = r6.getValidPolicy()
            java.lang.String r8 = "2.5.29.32.0"
            boolean r7 = r8.equals(r7)
            if (r7 == 0) goto Lb3
            r5 = 0
            java.lang.String r7 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.CERTIFICATE_POLICIES     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L158
            org.bouncycastle.asn1.DERObject r7 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r4, r7)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L158
            org.bouncycastle.asn1.ASN1Sequence r7 = (org.bouncycastle.asn1.ASN1Sequence) r7     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L158
            java.util.Enumeration r7 = r7.getObjects()
        Ld8:
            boolean r9 = r7.hasMoreElements()
            if (r9 == 0) goto L10f
            java.lang.Object r9 = r7.nextElement()     // Catch: java.lang.Exception -> L106
            org.bouncycastle.asn1.x509.PolicyInformation r9 = org.bouncycastle.asn1.x509.PolicyInformation.getInstance(r9)     // Catch: java.lang.Exception -> L106
            org.bouncycastle.asn1.DERObjectIdentifier r10 = r9.getPolicyIdentifier()
            java.lang.String r10 = r10.getId()
            boolean r10 = r8.equals(r10)
            if (r10 == 0) goto Ld8
            org.bouncycastle.asn1.ASN1Sequence r5 = r9.getPolicyQualifiers()     // Catch: java.security.cert.CertPathValidatorException -> Lfd
            java.util.Set r5 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getQualifierSet(r5)     // Catch: java.security.cert.CertPathValidatorException -> Lfd
            goto L10f
        Lfd:
            r0 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r3 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r4 = "Policy qualifier info set could not be decoded."
            r3.<init>(r4, r0, r1, r2)
            throw r3
        L106:
            r0 = move-exception
            java.security.cert.CertPathValidatorException r3 = new java.security.cert.CertPathValidatorException
            java.lang.String r4 = "Policy information could not be decoded."
            r3.<init>(r4, r0, r1, r2)
            throw r3
        L10f:
            r10 = r5
            java.util.Set r5 = r4.getCriticalExtensionOIDs()
            if (r5 == 0) goto L122
            java.util.Set r5 = r4.getCriticalExtensionOIDs()
            java.lang.String r7 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.CERTIFICATE_POLICIES
            boolean r5 = r5.contains(r7)
            r12 = r5
            goto L123
        L122:
            r12 = 0
        L123:
            java.security.cert.PolicyNode r5 = r6.getParent()
            r9 = r5
            org.bouncycastle.jce.provider.PKIXPolicyNode r9 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r9
            java.lang.String r5 = r9.getValidPolicy()
            boolean r5 = r8.equals(r5)
            if (r5 == 0) goto L1b5
            org.bouncycastle.jce.provider.PKIXPolicyNode r8 = new org.bouncycastle.jce.provider.PKIXPolicyNode
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            java.lang.Object r5 = r13.get(r11)
            r18 = r5
            java.util.Set r18 = (java.util.Set) r18
            r5 = r8
            r7 = r3
            r14 = r8
            r8 = r18
            r22 = r9
            r5.<init>(r6, r7, r8, r9, r10, r11, r12)
            r5 = r22
            r5.addChild(r14)
            r5 = r0[r3]
            r5.add(r14)
            goto L1b5
        L158:
            r0 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r3 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r4 = "Certificate policies extension could not be decoded."
            r3.<init>(r4, r0, r1, r2)
            throw r3
        L161:
            if (r23 > 0) goto L1b5
            r5 = r0[r3]
            java.util.Iterator r5 = r5.iterator()
        L169:
            boolean r6 = r5.hasNext()
            if (r6 == 0) goto L1b5
            java.lang.Object r6 = r5.next()
            org.bouncycastle.jce.provider.PKIXPolicyNode r6 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r6
            java.lang.String r7 = r6.getValidPolicy()
            boolean r7 = r7.equals(r11)
            if (r7 == 0) goto L169
            java.security.cert.PolicyNode r7 = r6.getParent()
            org.bouncycastle.jce.provider.PKIXPolicyNode r7 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r7
            r7.removeChild(r6)
            r5.remove()
            int r6 = r3 + (-1)
        L18d:
            if (r6 < 0) goto L169
            r7 = r0[r6]
            r8 = r17
            r9 = 0
        L194:
            int r10 = r7.size()
            if (r9 >= r10) goto L1b0
            java.lang.Object r10 = r7.get(r9)
            org.bouncycastle.jce.provider.PKIXPolicyNode r10 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r10
            boolean r12 = r10.hasChildren()
            if (r12 != 0) goto L1ad
            org.bouncycastle.jce.provider.PKIXPolicyNode r8 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.removePolicyNode(r8, r0, r10)
            if (r8 != 0) goto L1ad
            goto L1b0
        L1ad:
            int r9 = r9 + 1
            goto L194
        L1b0:
            r17 = r8
            int r6 = r6 + (-1)
            goto L18d
        L1b5:
            r14 = 0
            goto L75
        L1b8:
            r17 = r22
        L1ba:
            return r17
        L1bb:
            r0 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r3 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r4 = "Policy mappings extension could not be decoded."
            r3.<init>(r4, r0, r1, r2)
            throw r3
    }

    protected static void prepareNextCertA(java.security.cert.CertPath r7, int r8) throws java.security.cert.CertPathValidatorException {
            java.util.List r0 = r7.getCertificates()
            java.lang.Object r0 = r0.get(r8)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.POLICY_MAPPINGS     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L6b
            org.bouncycastle.asn1.DERObject r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r0, r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L6b
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.DERSequence.getInstance(r0)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L6b
            if (r0 == 0) goto L6a
            r1 = 0
            r2 = 0
        L18:
            int r3 = r0.size()
            if (r2 >= r3) goto L6a
            org.bouncycastle.asn1.DEREncodable r3 = r0.getObjectAt(r2)     // Catch: java.lang.Exception -> L61
            org.bouncycastle.asn1.ASN1Sequence r3 = org.bouncycastle.asn1.DERSequence.getInstance(r3)     // Catch: java.lang.Exception -> L61
            org.bouncycastle.asn1.DEREncodable r4 = r3.getObjectAt(r1)     // Catch: java.lang.Exception -> L61
            org.bouncycastle.asn1.DERObjectIdentifier r4 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r4)     // Catch: java.lang.Exception -> L61
            r5 = 1
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r5)     // Catch: java.lang.Exception -> L61
            org.bouncycastle.asn1.DERObjectIdentifier r3 = org.bouncycastle.asn1.DERObjectIdentifier.getInstance(r3)     // Catch: java.lang.Exception -> L61
            java.lang.String r4 = r4.getId()
            java.lang.String r5 = "2.5.29.32.0"
            boolean r4 = r5.equals(r4)
            r6 = 0
            if (r4 != 0) goto L59
            java.lang.String r3 = r3.getId()
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto L51
            int r2 = r2 + 1
            goto L18
        L51:
            java.security.cert.CertPathValidatorException r0 = new java.security.cert.CertPathValidatorException
            java.lang.String r1 = "SubjectDomainPolicy is anyPolicy,"
            r0.<init>(r1, r6, r7, r8)
            throw r0
        L59:
            java.security.cert.CertPathValidatorException r0 = new java.security.cert.CertPathValidatorException
            java.lang.String r1 = "IssuerDomainPolicy is anyPolicy"
            r0.<init>(r1, r6, r7, r8)
            throw r0
        L61:
            r0 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r1 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r2 = "Policy mappings extension contents could not be decoded."
            r1.<init>(r2, r0, r7, r8)
            throw r1
        L6a:
            return
        L6b:
            r0 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r1 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r2 = "Policy mappings extension could not be decoded."
            r1.<init>(r2, r0, r7, r8)
            throw r1
    }

    protected static void prepareNextCertG(java.security.cert.CertPath r2, int r3, org.bouncycastle.jce.provider.PKIXNameConstraintValidator r4) throws java.security.cert.CertPathValidatorException {
            java.util.List r0 = r2.getCertificates()
            java.lang.Object r0 = r0.get(r3)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.NAME_CONSTRAINTS     // Catch: java.lang.Exception -> L58
            org.bouncycastle.asn1.DERObject r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r0, r1)     // Catch: java.lang.Exception -> L58
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.DERSequence.getInstance(r0)     // Catch: java.lang.Exception -> L58
            if (r0 == 0) goto L1c
            org.bouncycastle.asn1.x509.NameConstraints r1 = new org.bouncycastle.asn1.x509.NameConstraints     // Catch: java.lang.Exception -> L58
            r1.<init>(r0)     // Catch: java.lang.Exception -> L58
            goto L1d
        L1c:
            r1 = 0
        L1d:
            if (r1 == 0) goto L57
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.getPermittedSubtrees()
            if (r0 == 0) goto L32
            r4.intersectPermittedSubtree(r0)     // Catch: java.lang.Exception -> L29
            goto L32
        L29:
            r4 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r0 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r1 = "Permitted subtrees cannot be build from name constraints extension."
            r0.<init>(r1, r4, r2, r3)
            throw r0
        L32:
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.getExcludedSubtrees()
            if (r0 == 0) goto L57
            java.util.Enumeration r0 = r0.getObjects()
        L3c:
            boolean r1 = r0.hasMoreElements()     // Catch: java.lang.Exception -> L4e
            if (r1 == 0) goto L57
            java.lang.Object r1 = r0.nextElement()     // Catch: java.lang.Exception -> L4e
            org.bouncycastle.asn1.x509.GeneralSubtree r1 = org.bouncycastle.asn1.x509.GeneralSubtree.getInstance(r1)     // Catch: java.lang.Exception -> L4e
            r4.addExcludedSubtree(r1)     // Catch: java.lang.Exception -> L4e
            goto L3c
        L4e:
            r4 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r0 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r1 = "Excluded subtrees cannot be build from name constraints extension."
            r0.<init>(r1, r4, r2, r3)
            throw r0
        L57:
            return
        L58:
            r4 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r0 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r1 = "Name constraints extension could not be decoded."
            r0.<init>(r1, r4, r2, r3)
            throw r0
    }

    protected static int prepareNextCertH1(java.security.cert.CertPath r0, int r1, int r2) {
            java.util.List r0 = r0.getCertificates()
            java.lang.Object r0 = r0.get(r1)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            boolean r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.isSelfIssued(r0)
            if (r0 != 0) goto L14
            if (r2 == 0) goto L14
            int r2 = r2 + (-1)
        L14:
            return r2
    }

    protected static int prepareNextCertH2(java.security.cert.CertPath r0, int r1, int r2) {
            java.util.List r0 = r0.getCertificates()
            java.lang.Object r0 = r0.get(r1)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            boolean r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.isSelfIssued(r0)
            if (r0 != 0) goto L14
            if (r2 == 0) goto L14
            int r2 = r2 + (-1)
        L14:
            return r2
    }

    protected static int prepareNextCertH3(java.security.cert.CertPath r0, int r1, int r2) {
            java.util.List r0 = r0.getCertificates()
            java.lang.Object r0 = r0.get(r1)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            boolean r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.isSelfIssued(r0)
            if (r0 != 0) goto L14
            if (r2 == 0) goto L14
            int r2 = r2 + (-1)
        L14:
            return r2
    }

    protected static int prepareNextCertI1(java.security.cert.CertPath r3, int r4, int r5) throws java.security.cert.CertPathValidatorException {
            java.util.List r0 = r3.getCertificates()
            java.lang.Object r0 = r0.get(r4)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.POLICY_CONSTRAINTS     // Catch: java.lang.Exception -> L47
            org.bouncycastle.asn1.DERObject r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r0, r1)     // Catch: java.lang.Exception -> L47
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.DERSequence.getInstance(r0)     // Catch: java.lang.Exception -> L47
            if (r0 == 0) goto L46
            java.util.Enumeration r0 = r0.getObjects()
        L1a:
            boolean r1 = r0.hasMoreElements()
            if (r1 == 0) goto L46
            java.lang.Object r1 = r0.nextElement()     // Catch: java.lang.IllegalArgumentException -> L3d
            org.bouncycastle.asn1.ASN1TaggedObject r1 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r1)     // Catch: java.lang.IllegalArgumentException -> L3d
            int r2 = r1.getTagNo()     // Catch: java.lang.IllegalArgumentException -> L3d
            if (r2 != 0) goto L1a
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r1)     // Catch: java.lang.IllegalArgumentException -> L3d
            java.math.BigInteger r0 = r0.getValue()     // Catch: java.lang.IllegalArgumentException -> L3d
            int r3 = r0.intValue()     // Catch: java.lang.IllegalArgumentException -> L3d
            if (r3 >= r5) goto L46
            return r3
        L3d:
            r5 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r0 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r1 = "Policy constraints extension contents cannot be decoded."
            r0.<init>(r1, r5, r3, r4)
            throw r0
        L46:
            return r5
        L47:
            r5 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r0 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r1 = "Policy constraints extension cannot be decoded."
            r0.<init>(r1, r5, r3, r4)
            throw r0
    }

    protected static int prepareNextCertI2(java.security.cert.CertPath r4, int r5, int r6) throws java.security.cert.CertPathValidatorException {
            java.util.List r0 = r4.getCertificates()
            java.lang.Object r0 = r0.get(r5)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.POLICY_CONSTRAINTS     // Catch: java.lang.Exception -> L48
            org.bouncycastle.asn1.DERObject r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r0, r1)     // Catch: java.lang.Exception -> L48
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.DERSequence.getInstance(r0)     // Catch: java.lang.Exception -> L48
            if (r0 == 0) goto L47
            java.util.Enumeration r0 = r0.getObjects()
        L1a:
            boolean r1 = r0.hasMoreElements()
            if (r1 == 0) goto L47
            java.lang.Object r1 = r0.nextElement()     // Catch: java.lang.IllegalArgumentException -> L3e
            org.bouncycastle.asn1.ASN1TaggedObject r1 = org.bouncycastle.asn1.ASN1TaggedObject.getInstance(r1)     // Catch: java.lang.IllegalArgumentException -> L3e
            int r2 = r1.getTagNo()     // Catch: java.lang.IllegalArgumentException -> L3e
            r3 = 1
            if (r2 != r3) goto L1a
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r1)     // Catch: java.lang.IllegalArgumentException -> L3e
            java.math.BigInteger r0 = r0.getValue()     // Catch: java.lang.IllegalArgumentException -> L3e
            int r4 = r0.intValue()     // Catch: java.lang.IllegalArgumentException -> L3e
            if (r4 >= r6) goto L47
            return r4
        L3e:
            r6 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r0 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r1 = "Policy constraints extension contents cannot be decoded."
            r0.<init>(r1, r6, r4, r5)
            throw r0
        L47:
            return r6
        L48:
            r6 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r0 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r1 = "Policy constraints extension cannot be decoded."
            r0.<init>(r1, r6, r4, r5)
            throw r0
    }

    protected static int prepareNextCertJ(java.security.cert.CertPath r2, int r3, int r4) throws java.security.cert.CertPathValidatorException {
            java.util.List r0 = r2.getCertificates()
            java.lang.Object r0 = r0.get(r3)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.INHIBIT_ANY_POLICY     // Catch: java.lang.Exception -> L22
            org.bouncycastle.asn1.DERObject r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r0, r1)     // Catch: java.lang.Exception -> L22
            org.bouncycastle.asn1.DERInteger r2 = org.bouncycastle.asn1.DERInteger.getInstance(r0)     // Catch: java.lang.Exception -> L22
            if (r2 == 0) goto L21
            java.math.BigInteger r2 = r2.getValue()
            int r2 = r2.intValue()
            if (r2 >= r4) goto L21
            return r2
        L21:
            return r4
        L22:
            r4 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r0 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r1 = "Inhibit any-policy extension cannot be decoded."
            r0.<init>(r1, r4, r2, r3)
            throw r0
    }

    protected static void prepareNextCertK(java.security.cert.CertPath r3, int r4) throws java.security.cert.CertPathValidatorException {
            java.util.List r0 = r3.getCertificates()
            java.lang.Object r0 = r0.get(r4)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.BASIC_CONSTRAINTS     // Catch: java.lang.Exception -> L2d
            org.bouncycastle.asn1.DERObject r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r0, r1)     // Catch: java.lang.Exception -> L2d
            org.bouncycastle.asn1.x509.BasicConstraints r3 = org.bouncycastle.asn1.x509.BasicConstraints.getInstance(r0)     // Catch: java.lang.Exception -> L2d
            if (r3 == 0) goto L25
            boolean r3 = r3.isCA()
            if (r3 == 0) goto L1d
            return
        L1d:
            java.security.cert.CertPathValidatorException r3 = new java.security.cert.CertPathValidatorException
            java.lang.String r4 = "Not a CA certificate"
            r3.<init>(r4)
            throw r3
        L25:
            java.security.cert.CertPathValidatorException r3 = new java.security.cert.CertPathValidatorException
            java.lang.String r4 = "Intermediate certificate lacks BasicConstraints"
            r3.<init>(r4)
            throw r3
        L2d:
            r0 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r1 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r2 = "Basic constraints extension cannot be decoded."
            r1.<init>(r2, r0, r3, r4)
            throw r1
    }

    protected static int prepareNextCertL(java.security.cert.CertPath r2, int r3, int r4) throws java.security.cert.CertPathValidatorException {
            java.util.List r0 = r2.getCertificates()
            java.lang.Object r0 = r0.get(r3)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            boolean r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.isSelfIssued(r0)
            if (r0 != 0) goto L1e
            if (r4 <= 0) goto L15
            int r4 = r4 + (-1)
            return r4
        L15:
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r4 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r0 = 0
            java.lang.String r1 = "Max path length not greater than zero"
            r4.<init>(r1, r0, r2, r3)
            throw r4
        L1e:
            return r4
    }

    protected static int prepareNextCertM(java.security.cert.CertPath r2, int r3, int r4) throws java.security.cert.CertPathValidatorException {
            java.util.List r0 = r2.getCertificates()
            java.lang.Object r0 = r0.get(r3)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.BASIC_CONSTRAINTS     // Catch: java.lang.Exception -> L24
            org.bouncycastle.asn1.DERObject r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r0, r1)     // Catch: java.lang.Exception -> L24
            org.bouncycastle.asn1.x509.BasicConstraints r2 = org.bouncycastle.asn1.x509.BasicConstraints.getInstance(r0)     // Catch: java.lang.Exception -> L24
            if (r2 == 0) goto L23
            java.math.BigInteger r2 = r2.getPathLenConstraint()
            if (r2 == 0) goto L23
            int r2 = r2.intValue()
            if (r2 >= r4) goto L23
            return r2
        L23:
            return r4
        L24:
            r4 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r0 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r1 = "Basic constraints extension cannot be decoded."
            r0.<init>(r1, r4, r2, r3)
            throw r0
    }

    protected static void prepareNextCertN(java.security.cert.CertPath r3, int r4) throws java.security.cert.CertPathValidatorException {
            java.util.List r0 = r3.getCertificates()
            java.lang.Object r0 = r0.get(r4)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            boolean[] r0 = r0.getKeyUsage()
            if (r0 == 0) goto L1f
            r1 = 5
            boolean r0 = r0[r1]
            if (r0 == 0) goto L16
            goto L1f
        L16:
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r0 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r1 = 0
            java.lang.String r2 = "Issuer certificate keyusage extension is critical and does not permit key signing."
            r0.<init>(r2, r1, r3, r4)
            throw r0
        L1f:
            return
    }

    protected static void prepareNextCertO(java.security.cert.CertPath r2, int r3, java.util.Set r4, java.util.List r5) throws java.security.cert.CertPathValidatorException {
            java.util.List r0 = r2.getCertificates()
            java.lang.Object r0 = r0.get(r3)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            java.util.Iterator r5 = r5.iterator()
        Le:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L2d
            java.lang.Object r1 = r5.next()     // Catch: java.security.cert.CertPathValidatorException -> L1e
            java.security.cert.PKIXCertPathChecker r1 = (java.security.cert.PKIXCertPathChecker) r1     // Catch: java.security.cert.CertPathValidatorException -> L1e
            r1.check(r0, r4)     // Catch: java.security.cert.CertPathValidatorException -> L1e
            goto Le
        L1e:
            r4 = move-exception
            java.security.cert.CertPathValidatorException r5 = new java.security.cert.CertPathValidatorException
            java.lang.String r0 = r4.getMessage()
            java.lang.Throwable r4 = r4.getCause()
            r5.<init>(r0, r4, r2, r3)
            throw r5
        L2d:
            boolean r4 = r4.isEmpty()
            if (r4 == 0) goto L34
            return
        L34:
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r4 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r5 = 0
            java.lang.String r0 = "Certificate has unsupported critical extension."
            r4.<init>(r0, r5, r2, r3)
            throw r4
    }

    protected static java.util.Set processCRLA1i(java.util.Date r2, org.bouncycastle.x509.ExtendedPKIXParameters r3, java.security.cert.X509Certificate r4, java.security.cert.X509CRL r5) throws org.bouncycastle.jce.provider.AnnotatedException {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            boolean r1 = r3.isUseDeltasEnabled()
            if (r1 == 0) goto L53
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.FRESHEST_CRL     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L4a
            org.bouncycastle.asn1.DERObject r4 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r4, r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L4a
            org.bouncycastle.asn1.x509.CRLDistPoint r4 = org.bouncycastle.asn1.x509.CRLDistPoint.getInstance(r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L4a
            if (r4 != 0) goto L2b
            java.lang.String r4 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.FRESHEST_CRL     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L22
            org.bouncycastle.asn1.DERObject r4 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r5, r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L22
            org.bouncycastle.asn1.x509.CRLDistPoint r4 = org.bouncycastle.asn1.x509.CRLDistPoint.getInstance(r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L22
            goto L2b
        L22:
            r2 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r3 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r4 = "Freshest CRL extension could not be decoded from CRL."
            r3.<init>(r4, r2)
            throw r3
        L2b:
            if (r4 == 0) goto L53
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.addAdditionalStoresFromCRLDistributionPoint(r4, r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L41
            java.util.Set r2 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getDeltaCRLs(r2, r3, r5)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L38
            r0.addAll(r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L38
            goto L53
        L38:
            r2 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r3 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r4 = "Exception obtaining delta CRLs."
            r3.<init>(r4, r2)
            throw r3
        L41:
            r2 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r3 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r4 = "No new delta CRL locations could be added from Freshest CRL extension."
            r3.<init>(r4, r2)
            throw r3
        L4a:
            r2 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r3 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r4 = "Freshest CRL extension could not be decoded from certificate."
            r3.<init>(r4, r2)
            throw r3
        L53:
            return r0
    }

    protected static java.util.Set[] processCRLA1ii(java.util.Date r4, org.bouncycastle.x509.ExtendedPKIXParameters r5, java.security.cert.X509Certificate r6, java.security.cert.X509CRL r7) throws org.bouncycastle.jce.provider.AnnotatedException {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            org.bouncycastle.x509.X509CRLStoreSelector r2 = new org.bouncycastle.x509.X509CRLStoreSelector
            r2.<init>()
            r2.setCertificateChecking(r6)
            java.util.Date r6 = r5.getDate()
            if (r6 == 0) goto L20
            java.util.Date r6 = r5.getDate()
            r2.setDateAndTime(r6)
            goto L23
        L20:
            r2.setDateAndTime(r4)
        L23:
            javax.security.auth.x500.X500Principal r6 = r7.getIssuerX500Principal()     // Catch: java.io.IOException -> L7c
            byte[] r6 = r6.getEncoded()     // Catch: java.io.IOException -> L7c
            r2.addIssuerName(r6)     // Catch: java.io.IOException -> L7c
            r6 = 1
            r2.setCompleteCRLEnabled(r6)
            java.util.List r3 = r5.getAdditionalStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L73
            java.util.Collection r3 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.findCRLs(r2, r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L73
            r0.addAll(r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L73
            java.util.List r3 = r5.getStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L73
            java.util.Collection r3 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.findCRLs(r2, r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L73
            r0.addAll(r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L73
            java.util.List r3 = r5.getCertStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L73
            java.util.Collection r2 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.findCRLs(r2, r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L73
            r0.addAll(r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L73
            boolean r2 = r5.isUseDeltasEnabled()
            if (r2 == 0) goto L6a
            java.util.Set r4 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getDeltaCRLs(r4, r5, r7)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L61
            r1.addAll(r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L61
            goto L6a
        L61:
            r4 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r5 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r6 = "Exception obtaining delta CRLs."
            r5.<init>(r6, r4)
            throw r5
        L6a:
            r4 = 2
            java.util.Set[] r4 = new java.util.Set[r4]
            r5 = 0
            r4[r5] = r0
            r4[r6] = r1
            return r4
        L73:
            r4 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r5 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r6 = "Exception obtaining complete CRLs."
            r5.<init>(r6, r4)
            throw r5
        L7c:
            r4 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r5 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "Cannot extract issuer from CRL."
            r6.append(r7)
            r6.append(r4)
            java.lang.String r6 = r6.toString()
            r5.<init>(r6, r4)
            throw r5
    }

    protected static void processCRLB1(org.bouncycastle.asn1.x509.DistributionPoint r5, java.lang.Object r6, java.security.cert.X509CRL r7) throws org.bouncycastle.jce.provider.AnnotatedException {
            java.lang.String r0 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.ISSUING_DISTRIBUTION_POINT
            org.bouncycastle.asn1.DERObject r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r7, r0)
            r1 = 0
            r2 = 1
            if (r0 == 0) goto L16
            org.bouncycastle.asn1.x509.IssuingDistributionPoint r0 = org.bouncycastle.asn1.x509.IssuingDistributionPoint.getInstance(r0)
            boolean r0 = r0.isIndirectCRL()
            if (r0 == 0) goto L16
            r0 = 1
            goto L17
        L16:
            r0 = 0
        L17:
            javax.security.auth.x500.X500Principal r3 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getIssuerPrincipal(r7)
            byte[] r3 = r3.getEncoded()
            org.bouncycastle.asn1.x509.GeneralNames r4 = r5.getCRLIssuer()
            if (r4 == 0) goto L75
            org.bouncycastle.asn1.x509.GeneralNames r5 = r5.getCRLIssuer()
            org.bouncycastle.asn1.x509.GeneralName[] r5 = r5.getNames()
            r6 = 0
        L2e:
            int r7 = r5.length
            if (r1 >= r7) goto L5c
            r7 = r5[r1]
            int r7 = r7.getTagNo()
            r4 = 4
            if (r7 != r4) goto L59
            r7 = r5[r1]     // Catch: java.io.IOException -> L50
            org.bouncycastle.asn1.DEREncodable r7 = r7.getName()     // Catch: java.io.IOException -> L50
            org.bouncycastle.asn1.DERObject r7 = r7.getDERObject()     // Catch: java.io.IOException -> L50
            byte[] r7 = r7.getEncoded()     // Catch: java.io.IOException -> L50
            boolean r7 = org.bouncycastle.util.Arrays.areEqual(r7, r3)     // Catch: java.io.IOException -> L50
            if (r7 == 0) goto L59
            r6 = 1
            goto L59
        L50:
            r5 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r6 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r7 = "CRL issuer information from distribution point cannot be decoded."
            r6.<init>(r7, r5)
            throw r6
        L59:
            int r1 = r1 + 1
            goto L2e
        L5c:
            if (r6 == 0) goto L69
            if (r0 == 0) goto L61
            goto L69
        L61:
            org.bouncycastle.jce.provider.AnnotatedException r5 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r6 = "Distribution point contains cRLIssuer field but CRL is not indirect."
            r5.<init>(r6)
            throw r5
        L69:
            if (r6 == 0) goto L6d
            r1 = r6
            goto L84
        L6d:
            org.bouncycastle.jce.provider.AnnotatedException r5 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r6 = "CRL issuer of CRL does not match CRL issuer of distribution point."
            r5.<init>(r6)
            throw r5
        L75:
            javax.security.auth.x500.X500Principal r5 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getIssuerPrincipal(r7)
            javax.security.auth.x500.X500Principal r6 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getEncodedIssuerPrincipal(r6)
            boolean r5 = r5.equals(r6)
            if (r5 == 0) goto L84
            r1 = 1
        L84:
            if (r1 == 0) goto L87
            return
        L87:
            org.bouncycastle.jce.provider.AnnotatedException r5 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r6 = "Cannot find matching CRL issuer for certificate."
            r5.<init>(r6)
            throw r5
    }

    protected static void processCRLB2(org.bouncycastle.asn1.x509.DistributionPoint r10, java.lang.Object r11, java.security.cert.X509CRL r12) throws org.bouncycastle.jce.provider.AnnotatedException {
            java.lang.String r0 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.ISSUING_DISTRIBUTION_POINT     // Catch: java.lang.Exception -> L1d5
            org.bouncycastle.asn1.DERObject r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r12, r0)     // Catch: java.lang.Exception -> L1d5
            org.bouncycastle.asn1.x509.IssuingDistributionPoint r0 = org.bouncycastle.asn1.x509.IssuingDistributionPoint.getInstance(r0)     // Catch: java.lang.Exception -> L1d5
            if (r0 == 0) goto L1d4
            org.bouncycastle.asn1.x509.DistributionPointName r1 = r0.getDistributionPoint()
            if (r1 == 0) goto L17d
            org.bouncycastle.asn1.x509.IssuingDistributionPoint r1 = org.bouncycastle.asn1.x509.IssuingDistributionPoint.getInstance(r0)
            org.bouncycastle.asn1.x509.DistributionPointName r1 = r1.getDistributionPoint()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            int r3 = r1.getType()
            r4 = 0
            if (r3 != 0) goto L3e
            org.bouncycastle.asn1.ASN1Encodable r3 = r1.getName()
            org.bouncycastle.asn1.x509.GeneralNames r3 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r3)
            org.bouncycastle.asn1.x509.GeneralName[] r3 = r3.getNames()
            r5 = 0
        L33:
            int r6 = r3.length
            if (r5 >= r6) goto L3e
            r6 = r3[r5]
            r2.add(r6)
            int r5 = r5 + 1
            goto L33
        L3e:
            int r3 = r1.getType()
            r5 = 1
            if (r3 != r5) goto L90
            org.bouncycastle.asn1.ASN1EncodableVector r3 = new org.bouncycastle.asn1.ASN1EncodableVector
            r3.<init>()
            javax.security.auth.x500.X500Principal r12 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getIssuerPrincipal(r12)     // Catch: java.io.IOException -> L87
            byte[] r12 = r12.getEncoded()     // Catch: java.io.IOException -> L87
            org.bouncycastle.asn1.ASN1Object r12 = org.bouncycastle.asn1.ASN1Sequence.fromByteArray(r12)     // Catch: java.io.IOException -> L87
            org.bouncycastle.asn1.ASN1Sequence r12 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r12)     // Catch: java.io.IOException -> L87
            java.util.Enumeration r12 = r12.getObjects()     // Catch: java.io.IOException -> L87
        L5e:
            boolean r6 = r12.hasMoreElements()     // Catch: java.io.IOException -> L87
            if (r6 == 0) goto L6e
            java.lang.Object r6 = r12.nextElement()     // Catch: java.io.IOException -> L87
            org.bouncycastle.asn1.DEREncodable r6 = (org.bouncycastle.asn1.DEREncodable) r6     // Catch: java.io.IOException -> L87
            r3.add(r6)     // Catch: java.io.IOException -> L87
            goto L5e
        L6e:
            org.bouncycastle.asn1.ASN1Encodable r12 = r1.getName()
            r3.add(r12)
            org.bouncycastle.asn1.x509.GeneralName r12 = new org.bouncycastle.asn1.x509.GeneralName
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r3)
            org.bouncycastle.asn1.x509.X509Name r1 = org.bouncycastle.asn1.x509.X509Name.getInstance(r1)
            r12.<init>(r1)
            r2.add(r12)
            goto L90
        L87:
            r10 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r11 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r12 = "Could not read CRL issuer."
            r11.<init>(r12, r10)
            throw r11
        L90:
            org.bouncycastle.asn1.x509.DistributionPointName r12 = r10.getDistributionPoint()
            java.lang.String r1 = "No match for certificate CRL issuing distribution point name to cRLIssuer CRL distribution point."
            if (r12 == 0) goto L14d
            org.bouncycastle.asn1.x509.DistributionPointName r12 = r10.getDistributionPoint()
            r3 = 0
            int r6 = r12.getType()
            if (r6 != 0) goto Laf
            org.bouncycastle.asn1.ASN1Encodable r3 = r12.getName()
            org.bouncycastle.asn1.x509.GeneralNames r3 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r3)
            org.bouncycastle.asn1.x509.GeneralName[] r3 = r3.getNames()
        Laf:
            int r6 = r12.getType()
            if (r6 != r5) goto L131
            org.bouncycastle.asn1.x509.GeneralNames r3 = r10.getCRLIssuer()
            if (r3 == 0) goto Lc5
            org.bouncycastle.asn1.x509.GeneralNames r10 = r10.getCRLIssuer()
            org.bouncycastle.asn1.x509.GeneralName[] r10 = r10.getNames()
        Lc3:
            r3 = r10
            goto Le2
        Lc5:
            org.bouncycastle.asn1.x509.GeneralName[] r10 = new org.bouncycastle.asn1.x509.GeneralName[r5]
            org.bouncycastle.asn1.x509.GeneralName r3 = new org.bouncycastle.asn1.x509.GeneralName     // Catch: java.io.IOException -> L128
            org.bouncycastle.asn1.x509.X509Name r6 = new org.bouncycastle.asn1.x509.X509Name     // Catch: java.io.IOException -> L128
            javax.security.auth.x500.X500Principal r7 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getEncodedIssuerPrincipal(r11)     // Catch: java.io.IOException -> L128
            byte[] r7 = r7.getEncoded()     // Catch: java.io.IOException -> L128
            org.bouncycastle.asn1.ASN1Object r7 = org.bouncycastle.asn1.ASN1Sequence.fromByteArray(r7)     // Catch: java.io.IOException -> L128
            org.bouncycastle.asn1.ASN1Sequence r7 = (org.bouncycastle.asn1.ASN1Sequence) r7     // Catch: java.io.IOException -> L128
            r6.<init>(r7)     // Catch: java.io.IOException -> L128
            r3.<init>(r6)     // Catch: java.io.IOException -> L128
            r10[r4] = r3     // Catch: java.io.IOException -> L128
            goto Lc3
        Le2:
            r10 = 0
        Le3:
            int r6 = r3.length
            if (r10 >= r6) goto L131
            r6 = r3[r10]
            org.bouncycastle.asn1.DEREncodable r6 = r6.getName()
            org.bouncycastle.asn1.DERObject r6 = r6.getDERObject()
            org.bouncycastle.asn1.ASN1Sequence r6 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r6)
            java.util.Enumeration r6 = r6.getObjects()
            org.bouncycastle.asn1.ASN1EncodableVector r7 = new org.bouncycastle.asn1.ASN1EncodableVector
            r7.<init>()
        Lfd:
            boolean r8 = r6.hasMoreElements()
            if (r8 == 0) goto L10d
            java.lang.Object r8 = r6.nextElement()
            org.bouncycastle.asn1.DEREncodable r8 = (org.bouncycastle.asn1.DEREncodable) r8
            r7.add(r8)
            goto Lfd
        L10d:
            org.bouncycastle.asn1.ASN1Encodable r6 = r12.getName()
            r7.add(r6)
            org.bouncycastle.asn1.x509.GeneralName r6 = new org.bouncycastle.asn1.x509.GeneralName
            org.bouncycastle.asn1.x509.X509Name r8 = new org.bouncycastle.asn1.x509.X509Name
            org.bouncycastle.asn1.DERSequence r9 = new org.bouncycastle.asn1.DERSequence
            r9.<init>(r7)
            r8.<init>(r9)
            r6.<init>(r8)
            r3[r10] = r6
            int r10 = r10 + 1
            goto Le3
        L128:
            r10 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r11 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r12 = "Could not read certificate issuer."
            r11.<init>(r12, r10)
            throw r11
        L131:
            if (r3 == 0) goto L144
            r10 = 0
        L134:
            int r12 = r3.length
            if (r10 >= r12) goto L144
            r12 = r3[r10]
            boolean r12 = r2.contains(r12)
            if (r12 == 0) goto L141
            r4 = 1
            goto L144
        L141:
            int r10 = r10 + 1
            goto L134
        L144:
            if (r4 == 0) goto L147
            goto L17d
        L147:
            org.bouncycastle.jce.provider.AnnotatedException r10 = new org.bouncycastle.jce.provider.AnnotatedException
            r10.<init>(r1)
            throw r10
        L14d:
            org.bouncycastle.asn1.x509.GeneralNames r12 = r10.getCRLIssuer()
            if (r12 == 0) goto L175
            org.bouncycastle.asn1.x509.GeneralNames r10 = r10.getCRLIssuer()
            org.bouncycastle.asn1.x509.GeneralName[] r10 = r10.getNames()
            r12 = 0
        L15c:
            int r3 = r10.length
            if (r12 >= r3) goto L16c
            r3 = r10[r12]
            boolean r3 = r2.contains(r3)
            if (r3 == 0) goto L169
            r4 = 1
            goto L16c
        L169:
            int r12 = r12 + 1
            goto L15c
        L16c:
            if (r4 == 0) goto L16f
            goto L17d
        L16f:
            org.bouncycastle.jce.provider.AnnotatedException r10 = new org.bouncycastle.jce.provider.AnnotatedException
            r10.<init>(r1)
            throw r10
        L175:
            org.bouncycastle.jce.provider.AnnotatedException r10 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r11 = "Either the cRLIssuer or the distributionPoint field must be contained in DistributionPoint."
            r10.<init>(r11)
            throw r10
        L17d:
            r10 = r11
            java.security.cert.X509Extension r10 = (java.security.cert.X509Extension) r10     // Catch: java.lang.Exception -> L1cb
            java.lang.String r12 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.BASIC_CONSTRAINTS     // Catch: java.lang.Exception -> L1cb
            org.bouncycastle.asn1.DERObject r10 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r10, r12)     // Catch: java.lang.Exception -> L1cb
            org.bouncycastle.asn1.x509.BasicConstraints r10 = org.bouncycastle.asn1.x509.BasicConstraints.getInstance(r10)     // Catch: java.lang.Exception -> L1cb
            boolean r11 = r11 instanceof java.security.cert.X509Certificate
            if (r11 == 0) goto L1bc
            boolean r11 = r0.onlyContainsUserCerts()
            if (r11 == 0) goto L1a5
            if (r10 == 0) goto L1a5
            boolean r11 = r10.isCA()
            if (r11 != 0) goto L19d
            goto L1a5
        L19d:
            org.bouncycastle.jce.provider.AnnotatedException r10 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r11 = "CA Cert CRL only contains user certificates."
            r10.<init>(r11)
            throw r10
        L1a5:
            boolean r11 = r0.onlyContainsCACerts()
            if (r11 == 0) goto L1bc
            if (r10 == 0) goto L1b4
            boolean r10 = r10.isCA()
            if (r10 == 0) goto L1b4
            goto L1bc
        L1b4:
            org.bouncycastle.jce.provider.AnnotatedException r10 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r11 = "End CRL only contains CA certificates."
            r10.<init>(r11)
            throw r10
        L1bc:
            boolean r10 = r0.onlyContainsAttributeCerts()
            if (r10 != 0) goto L1c3
            goto L1d4
        L1c3:
            org.bouncycastle.jce.provider.AnnotatedException r10 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r11 = "onlyContainsAttributeCerts boolean is asserted."
            r10.<init>(r11)
            throw r10
        L1cb:
            r10 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r11 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r12 = "Basic constraints extension could not be decoded."
            r11.<init>(r12, r10)
            throw r11
        L1d4:
            return
        L1d5:
            r10 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r11 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r12 = "Issuing distribution point extension could not be decoded."
            r11.<init>(r12, r10)
            throw r11
    }

    protected static void processCRLC(java.security.cert.X509CRL r2, java.security.cert.X509CRL r3, org.bouncycastle.x509.ExtendedPKIXParameters r4) throws org.bouncycastle.jce.provider.AnnotatedException {
            if (r2 != 0) goto L3
            return
        L3:
            java.lang.String r0 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.ISSUING_DISTRIBUTION_POINT     // Catch: java.lang.Exception -> L89
            org.bouncycastle.asn1.DERObject r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r3, r0)     // Catch: java.lang.Exception -> L89
            org.bouncycastle.asn1.x509.IssuingDistributionPoint r0 = org.bouncycastle.asn1.x509.IssuingDistributionPoint.getInstance(r0)     // Catch: java.lang.Exception -> L89
            boolean r4 = r4.isUseDeltasEnabled()
            if (r4 == 0) goto L88
            javax.security.auth.x500.X500Principal r4 = r2.getIssuerX500Principal()
            javax.security.auth.x500.X500Principal r3 = r3.getIssuerX500Principal()
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L80
            if (r0 == 0) goto L4f
            java.lang.String r3 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.ISSUING_DISTRIBUTION_POINT     // Catch: java.lang.Exception -> L46
            org.bouncycastle.asn1.DERObject r3 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r2, r3)     // Catch: java.lang.Exception -> L46
            org.bouncycastle.asn1.x509.IssuingDistributionPoint r3 = org.bouncycastle.asn1.x509.IssuingDistributionPoint.getInstance(r3)     // Catch: java.lang.Exception -> L46
            r4 = 0
            r1 = 1
            if (r0 != 0) goto L34
            if (r3 != 0) goto L3b
            goto L3a
        L34:
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L3b
        L3a:
            r4 = 1
        L3b:
            if (r4 == 0) goto L3e
            goto L4f
        L3e:
            org.bouncycastle.jce.provider.AnnotatedException r2 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r3 = "Issuing distribution point extension from delta CRL and complete CRL does not match."
            r2.<init>(r3)
            throw r2
        L46:
            r2 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r3 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r4 = "Issuing distribution point extension from delta CRL could not be decoded."
            r3.<init>(r4, r2)
            throw r3
        L4f:
            java.lang.String r3 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.AUTHORITY_KEY_IDENTIFIER     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L77
            org.bouncycastle.asn1.DERObject r3 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r2, r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L77
            java.lang.String r4 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.AUTHORITY_KEY_IDENTIFIER     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L6e
            org.bouncycastle.asn1.DERObject r2 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r2, r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L6e
            if (r3 != 0) goto L5f
            if (r2 == 0) goto L88
        L5f:
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L66
            goto L88
        L66:
            org.bouncycastle.jce.provider.AnnotatedException r2 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r3 = "Delta CRL authority key identifier does not match complete CRL authority key identifier."
            r2.<init>(r3)
            throw r2
        L6e:
            r2 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r3 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r4 = "Authority key identifier extension could not be extracted from delta CRL."
            r3.<init>(r4, r2)
            throw r3
        L77:
            r2 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r3 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r4 = "Authority key identifier extension could not be extracted from complete CRL."
            r3.<init>(r4, r2)
            throw r3
        L80:
            org.bouncycastle.jce.provider.AnnotatedException r2 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r3 = "Complete CRL issuer does not match delta CRL issuer."
            r2.<init>(r3)
            throw r2
        L88:
            return
        L89:
            r2 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r3 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r4 = "Issuing distribution point extension could not be decoded."
            r3.<init>(r4, r2)
            throw r3
    }

    protected static org.bouncycastle.jce.provider.ReasonsMask processCRLD(java.security.cert.X509CRL r1, org.bouncycastle.asn1.x509.DistributionPoint r2) throws org.bouncycastle.jce.provider.AnnotatedException {
            java.lang.String r0 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.ISSUING_DISTRIBUTION_POINT     // Catch: java.lang.Exception -> L77
            org.bouncycastle.asn1.DERObject r1 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r1, r0)     // Catch: java.lang.Exception -> L77
            org.bouncycastle.asn1.x509.IssuingDistributionPoint r1 = org.bouncycastle.asn1.x509.IssuingDistributionPoint.getInstance(r1)     // Catch: java.lang.Exception -> L77
            if (r1 == 0) goto L37
            org.bouncycastle.asn1.x509.ReasonFlags r0 = r1.getOnlySomeReasons()
            if (r0 == 0) goto L37
            org.bouncycastle.asn1.x509.ReasonFlags r0 = r2.getReasons()
            if (r0 == 0) goto L37
            org.bouncycastle.jce.provider.ReasonsMask r0 = new org.bouncycastle.jce.provider.ReasonsMask
            org.bouncycastle.asn1.x509.ReasonFlags r2 = r2.getReasons()
            int r2 = r2.intValue()
            r0.<init>(r2)
            org.bouncycastle.jce.provider.ReasonsMask r2 = new org.bouncycastle.jce.provider.ReasonsMask
            org.bouncycastle.asn1.x509.ReasonFlags r1 = r1.getOnlySomeReasons()
            int r1 = r1.intValue()
            r2.<init>(r1)
            org.bouncycastle.jce.provider.ReasonsMask r1 = r0.intersect(r2)
            return r1
        L37:
            if (r1 == 0) goto L3f
            org.bouncycastle.asn1.x509.ReasonFlags r0 = r1.getOnlySomeReasons()
            if (r0 != 0) goto L48
        L3f:
            org.bouncycastle.asn1.x509.ReasonFlags r0 = r2.getReasons()
            if (r0 != 0) goto L48
            org.bouncycastle.jce.provider.ReasonsMask r1 = org.bouncycastle.jce.provider.ReasonsMask.allReasons
            return r1
        L48:
            org.bouncycastle.asn1.x509.ReasonFlags r0 = r2.getReasons()
            if (r0 != 0) goto L51
            org.bouncycastle.jce.provider.ReasonsMask r2 = org.bouncycastle.jce.provider.ReasonsMask.allReasons
            goto L5f
        L51:
            org.bouncycastle.jce.provider.ReasonsMask r0 = new org.bouncycastle.jce.provider.ReasonsMask
            org.bouncycastle.asn1.x509.ReasonFlags r2 = r2.getReasons()
            int r2 = r2.intValue()
            r0.<init>(r2)
            r2 = r0
        L5f:
            if (r1 != 0) goto L64
            org.bouncycastle.jce.provider.ReasonsMask r1 = org.bouncycastle.jce.provider.ReasonsMask.allReasons
            goto L72
        L64:
            org.bouncycastle.jce.provider.ReasonsMask r0 = new org.bouncycastle.jce.provider.ReasonsMask
            org.bouncycastle.asn1.x509.ReasonFlags r1 = r1.getOnlySomeReasons()
            int r1 = r1.intValue()
            r0.<init>(r1)
            r1 = r0
        L72:
            org.bouncycastle.jce.provider.ReasonsMask r1 = r2.intersect(r1)
            return r1
        L77:
            r1 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r2 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r0 = "Issuing distribution point extension could not be decoded."
            r2.<init>(r0, r1)
            throw r2
    }

    protected static java.util.Set processCRLF(java.security.cert.X509CRL r6, java.lang.Object r7, java.security.cert.X509Certificate r8, java.security.PublicKey r9, org.bouncycastle.x509.ExtendedPKIXParameters r10, java.util.List r11) throws org.bouncycastle.jce.provider.AnnotatedException {
            org.bouncycastle.x509.X509CertStoreSelector r7 = new org.bouncycastle.x509.X509CertStoreSelector
            r7.<init>()
            javax.security.auth.x500.X500Principal r6 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getIssuerPrincipal(r6)     // Catch: java.io.IOException -> L112
            byte[] r6 = r6.getEncoded()     // Catch: java.io.IOException -> L112
            r7.setSubject(r6)     // Catch: java.io.IOException -> L112
            java.util.List r6 = r10.getStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L109
            java.util.Collection r6 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.findCertificates(r7, r6)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L109
            java.util.List r0 = r10.getAdditionalStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L109
            java.util.Collection r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.findCertificates(r7, r0)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L109
            r6.addAll(r0)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L109
            java.util.List r0 = r10.getCertStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L109
            java.util.Collection r7 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.findCertificates(r7, r0)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L109
            r6.addAll(r7)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L109
            r6.add(r8)
            java.util.Iterator r6 = r6.iterator()
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        L3f:
            boolean r1 = r6.hasNext()
            r2 = 0
            if (r1 == 0) goto Lba
            java.lang.Object r1 = r6.next()
            java.security.cert.X509Certificate r1 = (java.security.cert.X509Certificate) r1
            boolean r3 = r1.equals(r8)
            if (r3 == 0) goto L59
            r7.add(r1)
            r0.add(r9)
            goto L3f
        L59:
            java.lang.String r3 = "PKIX"
            java.lang.String r4 = "BC"
            java.security.cert.CertPathBuilder r3 = java.security.cert.CertPathBuilder.getInstance(r3, r4)     // Catch: java.lang.Exception -> L9d java.security.cert.CertPathValidatorException -> La8 java.security.cert.CertPathBuilderException -> Lb1
            org.bouncycastle.x509.X509CertStoreSelector r4 = new org.bouncycastle.x509.X509CertStoreSelector     // Catch: java.lang.Exception -> L9d java.security.cert.CertPathValidatorException -> La8 java.security.cert.CertPathBuilderException -> Lb1
            r4.<init>()     // Catch: java.lang.Exception -> L9d java.security.cert.CertPathValidatorException -> La8 java.security.cert.CertPathBuilderException -> Lb1
            r4.setCertificate(r1)     // Catch: java.lang.Exception -> L9d java.security.cert.CertPathValidatorException -> La8 java.security.cert.CertPathBuilderException -> Lb1
            java.lang.Object r5 = r10.clone()     // Catch: java.lang.Exception -> L9d java.security.cert.CertPathValidatorException -> La8 java.security.cert.CertPathBuilderException -> Lb1
            org.bouncycastle.x509.ExtendedPKIXParameters r5 = (org.bouncycastle.x509.ExtendedPKIXParameters) r5     // Catch: java.lang.Exception -> L9d java.security.cert.CertPathValidatorException -> La8 java.security.cert.CertPathBuilderException -> Lb1
            r5.setTargetCertConstraints(r4)     // Catch: java.lang.Exception -> L9d java.security.cert.CertPathValidatorException -> La8 java.security.cert.CertPathBuilderException -> Lb1
            org.bouncycastle.x509.ExtendedPKIXParameters r4 = org.bouncycastle.x509.ExtendedPKIXBuilderParameters.getInstance(r5)     // Catch: java.lang.Exception -> L9d java.security.cert.CertPathValidatorException -> La8 java.security.cert.CertPathBuilderException -> Lb1
            org.bouncycastle.x509.ExtendedPKIXBuilderParameters r4 = (org.bouncycastle.x509.ExtendedPKIXBuilderParameters) r4     // Catch: java.lang.Exception -> L9d java.security.cert.CertPathValidatorException -> La8 java.security.cert.CertPathBuilderException -> Lb1
            boolean r5 = r11.contains(r1)     // Catch: java.lang.Exception -> L9d java.security.cert.CertPathValidatorException -> La8 java.security.cert.CertPathBuilderException -> Lb1
            if (r5 == 0) goto L82
            r4.setRevocationEnabled(r2)     // Catch: java.lang.Exception -> L9d java.security.cert.CertPathValidatorException -> La8 java.security.cert.CertPathBuilderException -> Lb1
            goto L86
        L82:
            r5 = 1
            r4.setRevocationEnabled(r5)     // Catch: java.lang.Exception -> L9d java.security.cert.CertPathValidatorException -> La8 java.security.cert.CertPathBuilderException -> Lb1
        L86:
            java.security.cert.CertPathBuilderResult r3 = r3.build(r4)     // Catch: java.lang.Exception -> L9d java.security.cert.CertPathValidatorException -> La8 java.security.cert.CertPathBuilderException -> Lb1
            java.security.cert.CertPath r3 = r3.getCertPath()     // Catch: java.lang.Exception -> L9d java.security.cert.CertPathValidatorException -> La8 java.security.cert.CertPathBuilderException -> Lb1
            java.util.List r3 = r3.getCertificates()     // Catch: java.lang.Exception -> L9d java.security.cert.CertPathValidatorException -> La8 java.security.cert.CertPathBuilderException -> Lb1
            r7.add(r1)     // Catch: java.lang.Exception -> L9d java.security.cert.CertPathValidatorException -> La8 java.security.cert.CertPathBuilderException -> Lb1
            java.security.PublicKey r1 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getNextWorkingKey(r3, r2)     // Catch: java.lang.Exception -> L9d java.security.cert.CertPathValidatorException -> La8 java.security.cert.CertPathBuilderException -> Lb1
            r0.add(r1)     // Catch: java.lang.Exception -> L9d java.security.cert.CertPathValidatorException -> La8 java.security.cert.CertPathBuilderException -> Lb1
            goto L3f
        L9d:
            r6 = move-exception
            java.lang.RuntimeException r7 = new java.lang.RuntimeException
            java.lang.String r6 = r6.getMessage()
            r7.<init>(r6)
            throw r7
        La8:
            r6 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r7 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r8 = "Public key of issuer certificate of CRL could not be retrieved."
            r7.<init>(r8, r6)
            throw r7
        Lb1:
            r6 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r7 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r8 = "Internal error."
            r7.<init>(r8, r6)
            throw r7
        Lba:
            java.util.HashSet r6 = new java.util.HashSet
            r6.<init>()
            r8 = 0
        Lc0:
            int r9 = r7.size()
            if (r2 >= r9) goto Led
            java.lang.Object r9 = r7.get(r2)
            java.security.cert.X509Certificate r9 = (java.security.cert.X509Certificate) r9
            boolean[] r9 = r9.getKeyUsage()
            if (r9 == 0) goto Le3
            int r10 = r9.length
            r11 = 7
            if (r10 < r11) goto Ldb
            r10 = 6
            boolean r9 = r9[r10]
            if (r9 != 0) goto Le3
        Ldb:
            org.bouncycastle.jce.provider.AnnotatedException r8 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r9 = "Issuer certificate key usage extension does not permit CRL signing."
            r8.<init>(r9)
            goto Lea
        Le3:
            java.lang.Object r9 = r0.get(r2)
            r6.add(r9)
        Lea:
            int r2 = r2 + 1
            goto Lc0
        Led:
            boolean r7 = r6.isEmpty()
            if (r7 == 0) goto Lfe
            if (r8 == 0) goto Lf6
            goto Lfe
        Lf6:
            org.bouncycastle.jce.provider.AnnotatedException r6 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r7 = "Cannot find a valid issuer certificate."
            r6.<init>(r7)
            throw r6
        Lfe:
            boolean r7 = r6.isEmpty()
            if (r7 == 0) goto L108
            if (r8 != 0) goto L107
            goto L108
        L107:
            throw r8
        L108:
            return r6
        L109:
            r6 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r7 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r8 = "Issuer certificate for CRL cannot be searched."
            r7.<init>(r8, r6)
            throw r7
        L112:
            r6 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r7 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r8 = "Subject criteria for certificate selector to find issuer certificate for CRL could not be set."
            r7.<init>(r8, r6)
            throw r7
    }

    protected static java.security.PublicKey processCRLG(java.security.cert.X509CRL r2, java.util.Set r3) throws org.bouncycastle.jce.provider.AnnotatedException {
            java.util.Iterator r3 = r3.iterator()
            r0 = 0
        L5:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L17
            java.lang.Object r0 = r3.next()
            java.security.PublicKey r0 = (java.security.PublicKey) r0
            r2.verify(r0)     // Catch: java.lang.Exception -> L15
            return r0
        L15:
            r0 = move-exception
            goto L5
        L17:
            org.bouncycastle.jce.provider.AnnotatedException r2 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r3 = "Cannot verify CRL."
            r2.<init>(r3, r0)
            throw r2
    }

    protected static java.security.cert.X509CRL processCRLH(java.util.Set r2, java.security.PublicKey r3) throws org.bouncycastle.jce.provider.AnnotatedException {
            r0 = 0
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L17
            boolean r1 = r2.hasNext()     // Catch: java.lang.Exception -> L17
            if (r1 == 0) goto L15
            java.lang.Object r2 = r2.next()     // Catch: java.lang.Exception -> L17
            java.security.cert.X509CRL r2 = (java.security.cert.X509CRL) r2     // Catch: java.lang.Exception -> L17
            r2.verify(r3)     // Catch: java.lang.Exception -> L17
            return r2
        L15:
            r2 = r0
            goto L18
        L17:
            r2 = move-exception
        L18:
            if (r2 != 0) goto L1b
            return r0
        L1b:
            org.bouncycastle.jce.provider.AnnotatedException r3 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r0 = "Cannot verify delta CRL."
            r3.<init>(r0, r2)
            throw r3
    }

    protected static void processCRLI(java.util.Date r0, java.security.cert.X509CRL r1, java.lang.Object r2, org.bouncycastle.jce.provider.CertStatus r3, org.bouncycastle.x509.ExtendedPKIXParameters r4) throws org.bouncycastle.jce.provider.AnnotatedException {
            boolean r4 = r4.isUseDeltasEnabled()
            if (r4 == 0) goto Lb
            if (r1 == 0) goto Lb
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.getCertStatus(r0, r1, r2, r3)
        Lb:
            return
    }

    protected static void processCRLJ(java.util.Date r2, java.security.cert.X509CRL r3, java.lang.Object r4, org.bouncycastle.jce.provider.CertStatus r5) throws org.bouncycastle.jce.provider.AnnotatedException {
            int r0 = r5.getCertStatus()
            r1 = 11
            if (r0 != r1) goto Lb
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.getCertStatus(r2, r3, r4, r5)
        Lb:
            return
    }

    protected static void processCertA(java.security.cert.CertPath r8, org.bouncycastle.x509.ExtendedPKIXParameters r9, int r10, java.security.PublicKey r11, javax.security.auth.x500.X500Principal r12, java.security.cert.X509Certificate r13) throws org.bouncycastle.jce.exception.ExtCertPathValidatorException {
            java.lang.String r0 = "Could not validate certificate: "
            java.util.List r6 = r8.getCertificates()
            java.lang.Object r1 = r6.get(r10)
            r7 = r1
            java.security.cert.X509Certificate r7 = (java.security.cert.X509Certificate) r7
            java.lang.String r1 = "BC"
            r7.verify(r11, r1)     // Catch: java.security.GeneralSecurityException -> Lab
            java.util.Date r1 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getValidCertDateFromValidityModel(r9, r8, r10)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L6e java.security.cert.CertificateNotYetValidException -> L77 java.security.cert.CertificateExpiredException -> L91
            r7.checkValidity(r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L6e java.security.cert.CertificateNotYetValidException -> L77 java.security.cert.CertificateExpiredException -> L91
            boolean r0 = r9.isRevocationEnabled()
            if (r0 == 0) goto L3a
            java.util.Date r3 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getValidCertDateFromValidityModel(r9, r8, r10)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L2b
            r1 = r9
            r2 = r7
            r4 = r13
            r5 = r11
            checkCRLs(r1, r2, r3, r4, r5, r6)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L2b
            goto L3a
        L2b:
            r9 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r11 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r12 = r9.getMessage()
            java.lang.Throwable r9 = r9.getCause()
            r11.<init>(r12, r9, r8, r10)
            throw r11
        L3a:
            javax.security.auth.x500.X500Principal r9 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getEncodedIssuerPrincipal(r7)
            boolean r9 = r9.equals(r12)
            if (r9 == 0) goto L45
            return
        L45:
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r9 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r13 = "IssuerName("
            r11.append(r13)
            javax.security.auth.x500.X500Principal r13 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getEncodedIssuerPrincipal(r7)
            r11.append(r13)
            java.lang.String r13 = ") does not match SubjectName("
            r11.append(r13)
            r11.append(r12)
            java.lang.String r12 = ") of signing certificate."
            r11.append(r12)
            java.lang.String r11 = r11.toString()
            r12 = 0
            r9.<init>(r11, r12, r8, r10)
            throw r9
        L6e:
            r9 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r11 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r12 = "Could not validate time of certificate."
            r11.<init>(r12, r9, r8, r10)
            throw r11
        L77:
            r9 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r11 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            r12.append(r0)
            java.lang.String r13 = r9.getMessage()
            r12.append(r13)
            java.lang.String r12 = r12.toString()
            r11.<init>(r12, r9, r8, r10)
            throw r11
        L91:
            r9 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r11 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            r12.append(r0)
            java.lang.String r13 = r9.getMessage()
            r12.append(r13)
            java.lang.String r12 = r12.toString()
            r11.<init>(r12, r9, r8, r10)
            throw r11
        Lab:
            r9 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r11 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r12 = "Could not validate certificate signature."
            r11.<init>(r12, r9, r8, r10)
            throw r11
    }

    protected static void processCertBC(java.security.cert.CertPath r5, int r6, org.bouncycastle.jce.provider.PKIXNameConstraintValidator r7) throws java.security.cert.CertPathValidatorException {
            java.util.List r0 = r5.getCertificates()
            java.lang.Object r1 = r0.get(r6)
            java.security.cert.X509Certificate r1 = (java.security.cert.X509Certificate) r1
            int r0 = r0.size()
            int r2 = r0 - r6
            boolean r3 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.isSelfIssued(r1)
            if (r3 == 0) goto L18
            if (r2 < r0) goto L97
        L18:
            javax.security.auth.x500.X500Principal r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getSubjectPrincipal(r1)
            org.bouncycastle.asn1.ASN1InputStream r2 = new org.bouncycastle.asn1.ASN1InputStream
            byte[] r0 = r0.getEncoded()
            r2.<init>(r0)
            org.bouncycastle.asn1.DERObject r0 = r2.readObject()     // Catch: java.lang.Exception -> Laa
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.DERSequence.getInstance(r0)     // Catch: java.lang.Exception -> Laa
            r7.checkPermittedDN(r0)     // Catch: org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException -> La1
            r7.checkExcludedDN(r0)     // Catch: org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException -> La1
            java.lang.String r2 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.SUBJECT_ALTERNATIVE_NAME     // Catch: java.lang.Exception -> L98
            org.bouncycastle.asn1.DERObject r1 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r1, r2)     // Catch: java.lang.Exception -> L98
            org.bouncycastle.asn1.x509.GeneralNames r1 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r1)     // Catch: java.lang.Exception -> L98
            org.bouncycastle.asn1.x509.X509Name r2 = new org.bouncycastle.asn1.x509.X509Name
            r2.<init>(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Name.EmailAddress
            java.util.Vector r0 = r2.getValues(r0)
            java.util.Enumeration r0 = r0.elements()
        L4c:
            boolean r2 = r0.hasMoreElements()
            if (r2 == 0) goto L6e
            java.lang.Object r2 = r0.nextElement()
            java.lang.String r2 = (java.lang.String) r2
            org.bouncycastle.asn1.x509.GeneralName r3 = new org.bouncycastle.asn1.x509.GeneralName
            r4 = 1
            r3.<init>(r4, r2)
            r7.checkPermitted(r3)     // Catch: org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException -> L65
            r7.checkExcluded(r3)     // Catch: org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException -> L65
            goto L4c
        L65:
            r7 = move-exception
            java.security.cert.CertPathValidatorException r0 = new java.security.cert.CertPathValidatorException
            java.lang.String r1 = "Subtree check for certificate subject alternative email failed."
            r0.<init>(r1, r7, r5, r6)
            throw r0
        L6e:
            if (r1 == 0) goto L97
            org.bouncycastle.asn1.x509.GeneralName[] r0 = r1.getNames()     // Catch: java.lang.Exception -> L8e
            r1 = 0
        L75:
            int r2 = r0.length
            if (r1 >= r2) goto L97
            r2 = r0[r1]     // Catch: org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException -> L85
            r7.checkPermitted(r2)     // Catch: org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException -> L85
            r2 = r0[r1]     // Catch: org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException -> L85
            r7.checkExcluded(r2)     // Catch: org.bouncycastle.jce.provider.PKIXNameConstraintValidatorException -> L85
            int r1 = r1 + 1
            goto L75
        L85:
            r7 = move-exception
            java.security.cert.CertPathValidatorException r0 = new java.security.cert.CertPathValidatorException
            java.lang.String r1 = "Subtree check for certificate subject alternative name failed."
            r0.<init>(r1, r7, r5, r6)
            throw r0
        L8e:
            r7 = move-exception
            java.security.cert.CertPathValidatorException r0 = new java.security.cert.CertPathValidatorException
            java.lang.String r1 = "Subject alternative name contents could not be decoded."
            r0.<init>(r1, r7, r5, r6)
            throw r0
        L97:
            return
        L98:
            r7 = move-exception
            java.security.cert.CertPathValidatorException r0 = new java.security.cert.CertPathValidatorException
            java.lang.String r1 = "Subject alternative name extension could not be decoded."
            r0.<init>(r1, r7, r5, r6)
            throw r0
        La1:
            r7 = move-exception
            java.security.cert.CertPathValidatorException r0 = new java.security.cert.CertPathValidatorException
            java.lang.String r1 = "Subtree check for certificate subject failed."
            r0.<init>(r1, r7, r5, r6)
            throw r0
        Laa:
            r7 = move-exception
            java.security.cert.CertPathValidatorException r0 = new java.security.cert.CertPathValidatorException
            java.lang.String r1 = "Exception extracting subject name when checking subtrees."
            r0.<init>(r1, r7, r5, r6)
            throw r0
    }

    protected static org.bouncycastle.jce.provider.PKIXPolicyNode processCertD(java.security.cert.CertPath r18, int r19, java.util.Set r20, org.bouncycastle.jce.provider.PKIXPolicyNode r21, java.util.List[] r22, int r23) throws java.security.cert.CertPathValidatorException {
            r1 = r18
            r2 = r19
            r0 = r20
            r3 = r22
            java.util.List r4 = r18.getCertificates()
            java.lang.Object r5 = r4.get(r2)
            java.security.cert.X509Certificate r5 = (java.security.cert.X509Certificate) r5
            int r4 = r4.size()
            int r14 = r4 - r2
            java.lang.String r6 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.CERTIFICATE_POLICIES     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L1a2
            org.bouncycastle.asn1.DERObject r6 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r5, r6)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L1a2
            org.bouncycastle.asn1.ASN1Sequence r6 = org.bouncycastle.asn1.DERSequence.getInstance(r6)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L1a2
            if (r6 == 0) goto L1a0
            if (r21 == 0) goto L1a0
            java.util.Enumeration r7 = r6.getObjects()
            java.util.HashSet r8 = new java.util.HashSet
            r8.<init>()
        L2f:
            boolean r9 = r7.hasMoreElements()
            java.lang.String r10 = "2.5.29.32.0"
            if (r9 == 0) goto L6f
            java.lang.Object r9 = r7.nextElement()
            org.bouncycastle.asn1.x509.PolicyInformation r9 = org.bouncycastle.asn1.x509.PolicyInformation.getInstance(r9)
            org.bouncycastle.asn1.DERObjectIdentifier r11 = r9.getPolicyIdentifier()
            java.lang.String r12 = r11.getId()
            r8.add(r12)
            java.lang.String r12 = r11.getId()
            boolean r10 = r10.equals(r12)
            if (r10 != 0) goto L2f
            org.bouncycastle.asn1.ASN1Sequence r9 = r9.getPolicyQualifiers()     // Catch: java.security.cert.CertPathValidatorException -> L66
            java.util.Set r9 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getQualifierSet(r9)     // Catch: java.security.cert.CertPathValidatorException -> L66
            boolean r10 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.processCertD1i(r14, r3, r11, r9)
            if (r10 != 0) goto L2f
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.processCertD1ii(r14, r3, r11, r9)
            goto L2f
        L66:
            r0 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r3 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r4 = "Policy qualifier info set could not be build."
            r3.<init>(r4, r0, r1, r2)
            throw r3
        L6f:
            boolean r1 = r20.isEmpty()
            if (r1 != 0) goto La0
            boolean r1 = r0.contains(r10)
            if (r1 == 0) goto L7c
            goto La0
        L7c:
            java.util.Iterator r1 = r20.iterator()
            java.util.HashSet r2 = new java.util.HashSet
            r2.<init>()
        L85:
            boolean r7 = r1.hasNext()
            if (r7 == 0) goto L99
            java.lang.Object r7 = r1.next()
            boolean r9 = r8.contains(r7)
            if (r9 == 0) goto L85
            r2.add(r7)
            goto L85
        L99:
            r20.clear()
            r0.addAll(r2)
            goto La6
        La0:
            r20.clear()
            r0.addAll(r8)
        La6:
            if (r23 > 0) goto Lb0
            if (r14 >= r4) goto L155
            boolean r1 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.isSelfIssued(r5)
            if (r1 == 0) goto L155
        Lb0:
            java.util.Enumeration r1 = r6.getObjects()
        Lb4:
            boolean r2 = r1.hasMoreElements()
            if (r2 == 0) goto L155
            java.lang.Object r2 = r1.nextElement()
            org.bouncycastle.asn1.x509.PolicyInformation r2 = org.bouncycastle.asn1.x509.PolicyInformation.getInstance(r2)
            org.bouncycastle.asn1.DERObjectIdentifier r4 = r2.getPolicyIdentifier()
            java.lang.String r4 = r4.getId()
            boolean r4 = r10.equals(r4)
            if (r4 == 0) goto Lb4
            org.bouncycastle.asn1.ASN1Sequence r1 = r2.getPolicyQualifiers()
            java.util.Set r1 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getQualifierSet(r1)
            int r2 = r14 + (-1)
            r2 = r3[r2]
            r4 = 0
        Ldd:
            int r6 = r2.size()
            if (r4 >= r6) goto L155
            java.lang.Object r6 = r2.get(r4)
            r15 = r6
            org.bouncycastle.jce.provider.PKIXPolicyNode r15 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r15
            java.util.Set r6 = r15.getExpectedPolicies()
            java.util.Iterator r16 = r6.iterator()
        Lf2:
            boolean r6 = r16.hasNext()
            if (r6 == 0) goto L152
            java.lang.Object r6 = r16.next()
            boolean r7 = r6 instanceof java.lang.String
            if (r7 == 0) goto L104
            java.lang.String r6 = (java.lang.String) r6
        L102:
            r12 = r6
            goto L10f
        L104:
            boolean r7 = r6 instanceof org.bouncycastle.asn1.DERObjectIdentifier
            if (r7 == 0) goto Lf2
            org.bouncycastle.asn1.DERObjectIdentifier r6 = (org.bouncycastle.asn1.DERObjectIdentifier) r6
            java.lang.String r6 = r6.getId()
            goto L102
        L10f:
            java.util.Iterator r6 = r15.getChildren()
            r7 = 0
        L114:
            boolean r8 = r6.hasNext()
            if (r8 == 0) goto L12c
            java.lang.Object r8 = r6.next()
            org.bouncycastle.jce.provider.PKIXPolicyNode r8 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r8
            java.lang.String r8 = r8.getValidPolicy()
            boolean r8 = r12.equals(r8)
            if (r8 == 0) goto L114
            r7 = 1
            goto L114
        L12c:
            if (r7 != 0) goto Lf2
            java.util.HashSet r9 = new java.util.HashSet
            r9.<init>()
            r9.add(r12)
            org.bouncycastle.jce.provider.PKIXPolicyNode r13 = new org.bouncycastle.jce.provider.PKIXPolicyNode
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>()
            r17 = 0
            r6 = r13
            r8 = r14
            r10 = r15
            r11 = r1
            r0 = r13
            r13 = r17
            r6.<init>(r7, r8, r9, r10, r11, r12, r13)
            r15.addChild(r0)
            r6 = r3[r14]
            r6.add(r0)
            goto Lf2
        L152:
            int r4 = r4 + 1
            goto Ldd
        L155:
            int r0 = r14 + (-1)
            r1 = r0
            r0 = r21
        L15a:
            if (r1 < 0) goto L17e
            r2 = r3[r1]
            r4 = 0
        L15f:
            int r6 = r2.size()
            if (r4 >= r6) goto L17b
            java.lang.Object r6 = r2.get(r4)
            org.bouncycastle.jce.provider.PKIXPolicyNode r6 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r6
            boolean r7 = r6.hasChildren()
            if (r7 != 0) goto L178
            org.bouncycastle.jce.provider.PKIXPolicyNode r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.removePolicyNode(r0, r3, r6)
            if (r0 != 0) goto L178
            goto L17b
        L178:
            int r4 = r4 + 1
            goto L15f
        L17b:
            int r1 = r1 + (-1)
            goto L15a
        L17e:
            java.util.Set r1 = r5.getCriticalExtensionOIDs()
            if (r1 == 0) goto L19f
            java.lang.String r2 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.CERTIFICATE_POLICIES
            boolean r1 = r1.contains(r2)
            r2 = r3[r14]
            r3 = 0
        L18d:
            int r4 = r2.size()
            if (r3 >= r4) goto L19f
            java.lang.Object r4 = r2.get(r3)
            org.bouncycastle.jce.provider.PKIXPolicyNode r4 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r4
            r4.setCritical(r1)
            int r3 = r3 + 1
            goto L18d
        L19f:
            return r0
        L1a0:
            r0 = 0
            return r0
        L1a2:
            r0 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r3 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r4 = "Could not read certificate policies extension from certificate."
            r3.<init>(r4, r0, r1, r2)
            throw r3
    }

    protected static org.bouncycastle.jce.provider.PKIXPolicyNode processCertE(java.security.cert.CertPath r2, int r3, org.bouncycastle.jce.provider.PKIXPolicyNode r4) throws java.security.cert.CertPathValidatorException {
            java.util.List r0 = r2.getCertificates()
            java.lang.Object r0 = r0.get(r3)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.CERTIFICATE_POLICIES     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L18
            org.bouncycastle.asn1.DERObject r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r0, r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L18
            org.bouncycastle.asn1.ASN1Sequence r2 = org.bouncycastle.asn1.DERSequence.getInstance(r0)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L18
            if (r2 != 0) goto L17
            r4 = 0
        L17:
            return r4
        L18:
            r4 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r0 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r1 = "Could not read certificate policies extension from certificate."
            r0.<init>(r1, r4, r2, r3)
            throw r0
    }

    protected static void processCertF(java.security.cert.CertPath r1, int r2, org.bouncycastle.jce.provider.PKIXPolicyNode r3, int r4) throws java.security.cert.CertPathValidatorException {
            if (r4 > 0) goto Le
            if (r3 == 0) goto L5
            goto Le
        L5:
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r3 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r4 = 0
            java.lang.String r0 = "No valid policy tree found when one expected."
            r3.<init>(r0, r4, r1, r2)
            throw r3
        Le:
            return
    }

    protected static int wrapupCertA(int r0, java.security.cert.X509Certificate r1) {
            boolean r1 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.isSelfIssued(r1)
            if (r1 != 0) goto La
            if (r0 == 0) goto La
            int r0 = r0 + (-1)
        La:
            return r0
    }

    protected static int wrapupCertB(java.security.cert.CertPath r3, int r4, int r5) throws java.security.cert.CertPathValidatorException {
            java.util.List r0 = r3.getCertificates()
            java.lang.Object r0 = r0.get(r4)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.POLICY_CONSTRAINTS     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L47
            org.bouncycastle.asn1.DERObject r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getExtensionValue(r0, r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L47
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.DERSequence.getInstance(r0)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L47
            if (r0 == 0) goto L46
            java.util.Enumeration r0 = r0.getObjects()
        L1a:
            boolean r1 = r0.hasMoreElements()
            if (r1 == 0) goto L46
            java.lang.Object r1 = r0.nextElement()
            org.bouncycastle.asn1.ASN1TaggedObject r1 = (org.bouncycastle.asn1.ASN1TaggedObject) r1
            int r2 = r1.getTagNo()
            if (r2 == 0) goto L2d
            goto L1a
        L2d:
            org.bouncycastle.asn1.DERInteger r1 = org.bouncycastle.asn1.DERInteger.getInstance(r1)     // Catch: java.lang.Exception -> L3d
            java.math.BigInteger r1 = r1.getValue()     // Catch: java.lang.Exception -> L3d
            int r1 = r1.intValue()     // Catch: java.lang.Exception -> L3d
            if (r1 != 0) goto L1a
            r3 = 0
            return r3
        L3d:
            r5 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r0 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r1 = "Policy constraints requireExplicitPolicy field could no be decoded."
            r0.<init>(r1, r5, r3, r4)
            throw r0
        L46:
            return r5
        L47:
            r5 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r0 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r1 = "Policy constraints could no be decoded."
            r0.<init>(r1, r5, r3, r4)
            throw r0
    }

    protected static void wrapupCertF(java.security.cert.CertPath r2, int r3, java.util.List r4, java.util.Set r5) throws java.security.cert.CertPathValidatorException {
            java.util.List r0 = r2.getCertificates()
            java.lang.Object r0 = r0.get(r3)
            java.security.cert.X509Certificate r0 = (java.security.cert.X509Certificate) r0
            java.util.Iterator r4 = r4.iterator()
        Le:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L27
            java.lang.Object r1 = r4.next()     // Catch: java.security.cert.CertPathValidatorException -> L1e
            java.security.cert.PKIXCertPathChecker r1 = (java.security.cert.PKIXCertPathChecker) r1     // Catch: java.security.cert.CertPathValidatorException -> L1e
            r1.check(r0, r5)     // Catch: java.security.cert.CertPathValidatorException -> L1e
            goto Le
        L1e:
            r4 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r5 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r0 = "Additional certificate path checker failed."
            r5.<init>(r0, r4, r2, r3)
            throw r5
        L27:
            boolean r4 = r5.isEmpty()
            if (r4 == 0) goto L2e
            return
        L2e:
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r4 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r5 = 0
            java.lang.String r0 = "Certificate has unsupported critical extension"
            r4.<init>(r0, r5, r2, r3)
            throw r4
    }

    protected static org.bouncycastle.jce.provider.PKIXPolicyNode wrapupCertG(java.security.cert.CertPath r6, org.bouncycastle.x509.ExtendedPKIXParameters r7, java.util.Set r8, int r9, java.util.List[] r10, org.bouncycastle.jce.provider.PKIXPolicyNode r11, java.util.Set r12) throws java.security.cert.CertPathValidatorException {
            java.util.List r0 = r6.getCertificates()
            int r0 = r0.size()
            java.lang.String r1 = "Explicit policy requested but none available."
            r2 = 0
            if (r11 != 0) goto L1b
            boolean r7 = r7.isExplicitPolicyRequired()
            if (r7 != 0) goto L15
            goto L13c
        L15:
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r7 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r7.<init>(r1, r2, r6, r9)
            throw r7
        L1b:
            boolean r3 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.isAnyPolicy(r8)
            java.lang.String r4 = "2.5.29.32.0"
            r5 = 0
            if (r3 == 0) goto Lb1
            boolean r7 = r7.isExplicitPolicyRequired()
            if (r7 == 0) goto Lae
            boolean r7 = r12.isEmpty()
            if (r7 != 0) goto La8
            java.util.HashSet r6 = new java.util.HashSet
            r6.<init>()
            r7 = 0
        L36:
            int r8 = r10.length
            if (r7 >= r8) goto L6a
            r8 = r10[r7]
            r9 = 0
        L3c:
            int r1 = r8.size()
            if (r9 >= r1) goto L67
            java.lang.Object r1 = r8.get(r9)
            org.bouncycastle.jce.provider.PKIXPolicyNode r1 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r1
            java.lang.String r2 = r1.getValidPolicy()
            boolean r2 = r4.equals(r2)
            if (r2 == 0) goto L64
            java.util.Iterator r1 = r1.getChildren()
        L56:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L64
            java.lang.Object r2 = r1.next()
            r6.add(r2)
            goto L56
        L64:
            int r9 = r9 + 1
            goto L3c
        L67:
            int r7 = r7 + 1
            goto L36
        L6a:
            java.util.Iterator r6 = r6.iterator()
        L6e:
            boolean r7 = r6.hasNext()
            if (r7 == 0) goto L82
            java.lang.Object r7 = r6.next()
            org.bouncycastle.jce.provider.PKIXPolicyNode r7 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r7
            java.lang.String r7 = r7.getValidPolicy()
            r12.contains(r7)
            goto L6e
        L82:
            if (r11 == 0) goto Lae
            int r0 = r0 + (-1)
        L86:
            if (r0 < 0) goto Lae
            r6 = r10[r0]
            r7 = 0
        L8b:
            int r8 = r6.size()
            if (r7 >= r8) goto La5
            java.lang.Object r8 = r6.get(r7)
            org.bouncycastle.jce.provider.PKIXPolicyNode r8 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r8
            boolean r9 = r8.hasChildren()
            if (r9 != 0) goto La2
            org.bouncycastle.jce.provider.PKIXPolicyNode r8 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.removePolicyNode(r11, r10, r8)
            r11 = r8
        La2:
            int r7 = r7 + 1
            goto L8b
        La5:
            int r0 = r0 + (-1)
            goto L86
        La8:
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r7 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            r7.<init>(r1, r2, r6, r9)
            throw r7
        Lae:
            r2 = r11
            goto L13c
        Lb1:
            java.util.HashSet r6 = new java.util.HashSet
            r6.<init>()
            r7 = 0
        Lb7:
            int r9 = r10.length
            if (r7 >= r9) goto Lf7
            r9 = r10[r7]
            r12 = 0
        Lbd:
            int r1 = r9.size()
            if (r12 >= r1) goto Lf4
            java.lang.Object r1 = r9.get(r12)
            org.bouncycastle.jce.provider.PKIXPolicyNode r1 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r1
            java.lang.String r2 = r1.getValidPolicy()
            boolean r2 = r4.equals(r2)
            if (r2 == 0) goto Lf1
            java.util.Iterator r1 = r1.getChildren()
        Ld7:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto Lf1
            java.lang.Object r2 = r1.next()
            org.bouncycastle.jce.provider.PKIXPolicyNode r2 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r2
            java.lang.String r3 = r2.getValidPolicy()
            boolean r3 = r4.equals(r3)
            if (r3 != 0) goto Ld7
            r6.add(r2)
            goto Ld7
        Lf1:
            int r12 = r12 + 1
            goto Lbd
        Lf4:
            int r7 = r7 + 1
            goto Lb7
        Lf7:
            java.util.Iterator r6 = r6.iterator()
        Lfb:
            boolean r7 = r6.hasNext()
            if (r7 == 0) goto L117
            java.lang.Object r7 = r6.next()
            org.bouncycastle.jce.provider.PKIXPolicyNode r7 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r7
            java.lang.String r9 = r7.getValidPolicy()
            boolean r9 = r8.contains(r9)
            if (r9 != 0) goto Lfb
            org.bouncycastle.jce.provider.PKIXPolicyNode r7 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.removePolicyNode(r11, r10, r7)
            r11 = r7
            goto Lfb
        L117:
            if (r11 == 0) goto Lae
            int r0 = r0 + (-1)
        L11b:
            if (r0 < 0) goto Lae
            r6 = r10[r0]
            r7 = 0
        L120:
            int r8 = r6.size()
            if (r7 >= r8) goto L139
            java.lang.Object r8 = r6.get(r7)
            org.bouncycastle.jce.provider.PKIXPolicyNode r8 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r8
            boolean r9 = r8.hasChildren()
            if (r9 != 0) goto L136
            org.bouncycastle.jce.provider.PKIXPolicyNode r11 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.removePolicyNode(r11, r10, r8)
        L136:
            int r7 = r7 + 1
            goto L120
        L139:
            int r0 = r0 + (-1)
            goto L11b
        L13c:
            return r2
    }
}
