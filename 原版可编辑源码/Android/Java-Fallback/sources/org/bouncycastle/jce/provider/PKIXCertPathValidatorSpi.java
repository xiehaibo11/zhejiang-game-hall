package org.bouncycastle.jce.provider;

public class PKIXCertPathValidatorSpi extends java.security.cert.CertPathValidatorSpi {
    public PKIXCertPathValidatorSpi() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.security.cert.CertPathValidatorResult engineValidate(java.security.cert.CertPath r30, java.security.cert.CertPathParameters r31) throws java.security.cert.CertPathValidatorException, java.security.InvalidAlgorithmParameterException {
            r29 = this;
            r8 = r30
            r0 = r31
            boolean r1 = r0 instanceof java.security.cert.PKIXParameters
            if (r1 == 0) goto L2e3
            boolean r1 = r0 instanceof org.bouncycastle.x509.ExtendedPKIXParameters
            if (r1 == 0) goto Lf
            org.bouncycastle.x509.ExtendedPKIXParameters r0 = (org.bouncycastle.x509.ExtendedPKIXParameters) r0
            goto L15
        Lf:
            java.security.cert.PKIXParameters r0 = (java.security.cert.PKIXParameters) r0
            org.bouncycastle.x509.ExtendedPKIXParameters r0 = org.bouncycastle.x509.ExtendedPKIXParameters.getInstance(r0)
        L15:
            java.util.Set r1 = r0.getTrustAnchors()
            if (r1 == 0) goto L2db
            java.util.List r7 = r30.getCertificates()
            int r9 = r7.size()
            boolean r1 = r7.isEmpty()
            r10 = 0
            r2 = 0
            if (r1 != 0) goto L2d1
            java.util.Set r11 = r0.getInitialPolicies()
            r12 = 1
            int r1 = r7.size()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L2be
            int r1 = r1 - r12
            java.lang.Object r1 = r7.get(r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L2be
            java.security.cert.X509Certificate r1 = (java.security.cert.X509Certificate) r1     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L2be
            java.util.Set r3 = r0.getTrustAnchors()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L2be
            java.security.cert.TrustAnchor r13 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.findTrustAnchor(r1, r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L2be
            if (r13 == 0) goto L2b4
            int r3 = r9 + 1
            java.util.ArrayList[] r14 = new java.util.ArrayList[r3]
            r4 = 0
        L4a:
            if (r4 >= r3) goto L56
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r14[r4] = r5
            int r4 = r4 + 1
            goto L4a
        L56:
            java.util.HashSet r4 = new java.util.HashSet
            r4.<init>()
            java.lang.String r5 = "2.5.29.32.0"
            r4.add(r5)
            org.bouncycastle.jce.provider.PKIXPolicyNode r5 = new org.bouncycastle.jce.provider.PKIXPolicyNode
            java.util.ArrayList r16 = new java.util.ArrayList
            r16.<init>()
            r17 = 0
            r19 = 0
            java.util.HashSet r20 = new java.util.HashSet
            r20.<init>()
            r22 = 0
            java.lang.String r21 = "2.5.29.32.0"
            r15 = r5
            r18 = r4
            r15.<init>(r16, r17, r18, r19, r20, r21, r22)
            r4 = r14[r2]
            r4.add(r5)
            org.bouncycastle.jce.provider.PKIXNameConstraintValidator r15 = new org.bouncycastle.jce.provider.PKIXNameConstraintValidator
            r15.<init>()
            java.util.HashSet r16 = new java.util.HashSet
            r16.<init>()
            boolean r4 = r0.isExplicitPolicyRequired()
            if (r4 == 0) goto L91
            r4 = 0
            goto L92
        L91:
            r4 = r3
        L92:
            boolean r6 = r0.isAnyPolicyInhibited()
            if (r6 == 0) goto L9a
            r6 = 0
            goto L9b
        L9a:
            r6 = r3
        L9b:
            boolean r17 = r0.isPolicyMappingInhibited()
            if (r17 == 0) goto La2
            r3 = 0
        La2:
            java.security.cert.X509Certificate r17 = r13.getTrustedCert()
            if (r17 == 0) goto Lb3
            javax.security.auth.x500.X500Principal r18 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getSubjectPrincipal(r17)     // Catch: java.lang.IllegalArgumentException -> L2aa
            java.security.PublicKey r19 = r17.getPublicKey()     // Catch: java.lang.IllegalArgumentException -> L2aa
            r1 = r18
            goto Lc0
        Lb3:
            javax.security.auth.x500.X500Principal r1 = new javax.security.auth.x500.X500Principal     // Catch: java.lang.IllegalArgumentException -> L2aa
            java.lang.String r12 = r13.getCAName()     // Catch: java.lang.IllegalArgumentException -> L2aa
            r1.<init>(r12)     // Catch: java.lang.IllegalArgumentException -> L2aa
            java.security.PublicKey r19 = r13.getCAPublicKey()     // Catch: java.lang.IllegalArgumentException -> L2aa
        Lc0:
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r12 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getAlgorithmIdentifier(r19)     // Catch: java.security.cert.CertPathValidatorException -> L29f
            r12.getObjectId()
            r12.getParameters()
            org.bouncycastle.util.Selector r12 = r0.getTargetConstraints()
            if (r12 == 0) goto Led
            org.bouncycastle.util.Selector r12 = r0.getTargetConstraints()
            java.lang.Object r20 = r7.get(r2)
            r2 = r20
            java.security.cert.X509Certificate r2 = (java.security.cert.X509Certificate) r2
            boolean r2 = r12.match(r2)
            if (r2 == 0) goto Le4
            r2 = 0
            goto Led
        Le4:
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r0 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r1 = "Target certificate in certification path does not match targetConstraints."
            r2 = 0
            r0.<init>(r1, r10, r8, r2)
            throw r0
        Led:
            java.util.List r12 = r0.getCertPathCheckers()
            java.util.Iterator r20 = r12.iterator()
        Lf5:
            boolean r21 = r20.hasNext()
            if (r21 == 0) goto L108
            java.lang.Object r21 = r20.next()
            r10 = r21
            java.security.cert.PKIXCertPathChecker r10 = (java.security.cert.PKIXCertPathChecker) r10
            r10.init(r2)
            r10 = 0
            goto Lf5
        L108:
            int r2 = r7.size()
            r10 = 1
            int r2 = r2 - r10
            r10 = r1
            r20 = r13
            r1 = 0
            r13 = r9
            r28 = r6
            r6 = r2
            r2 = r19
            r19 = r17
            r17 = r5
            r5 = r3
            r3 = r28
        L11f:
            if (r6 < 0) goto L21d
            int r1 = r9 - r6
            java.lang.Object r21 = r7.get(r6)
            java.security.cert.X509Certificate r21 = (java.security.cert.X509Certificate) r21
            r23 = r7
            r7 = r1
            r1 = r30
            r31 = r2
            r2 = r0
            r24 = r3
            r3 = r6
            r25 = r11
            r11 = r4
            r4 = r31
            r26 = r0
            r0 = r5
            r5 = r10
            r27 = r10
            r10 = r6
            r6 = r19
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.processCertA(r1, r2, r3, r4, r5, r6)
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.processCertBC(r8, r10, r15)
            r2 = r10
            r3 = r16
            r4 = r17
            r5 = r14
            r6 = r24
            org.bouncycastle.jce.provider.PKIXPolicyNode r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.processCertD(r1, r2, r3, r4, r5, r6)
            org.bouncycastle.jce.provider.PKIXPolicyNode r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.processCertE(r8, r10, r1)
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.processCertF(r8, r10, r1, r11)
            if (r7 == r9) goto L206
            if (r21 == 0) goto L170
            int r2 = r21.getVersion()
            r3 = 1
            if (r2 == r3) goto L167
            goto L170
        L167:
            java.security.cert.CertPathValidatorException r0 = new java.security.cert.CertPathValidatorException
            java.lang.String r1 = "Version 1 certificates can't be used as CA ones."
            r2 = 0
            r0.<init>(r1, r2, r8, r10)
            throw r0
        L170:
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.prepareNextCertA(r8, r10)
            org.bouncycastle.jce.provider.PKIXPolicyNode r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.prepareCertB(r8, r10, r14, r1, r0)
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.prepareNextCertG(r8, r10, r15)
            int r2 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.prepareNextCertH1(r8, r10, r11)
            int r0 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.prepareNextCertH2(r8, r10, r0)
            r6 = r24
            int r3 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.prepareNextCertH3(r8, r10, r6)
            int r2 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.prepareNextCertI1(r8, r10, r2)
            int r0 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.prepareNextCertI2(r8, r10, r0)
            int r3 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.prepareNextCertJ(r8, r10, r3)
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.prepareNextCertK(r8, r10)
            int r4 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.prepareNextCertL(r8, r10, r13)
            int r13 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.prepareNextCertM(r8, r10, r4)
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.prepareNextCertN(r8, r10)
            java.util.HashSet r4 = new java.util.HashSet
            java.util.Set r5 = r21.getCriticalExtensionOIDs()
            r4.<init>(r5)
            java.lang.String r5 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.KEY_USAGE
            r4.remove(r5)
            java.lang.String r5 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.CERTIFICATE_POLICIES
            r4.remove(r5)
            java.lang.String r5 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.POLICY_MAPPINGS
            r4.remove(r5)
            java.lang.String r5 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.INHIBIT_ANY_POLICY
            r4.remove(r5)
            java.lang.String r5 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.ISSUING_DISTRIBUTION_POINT
            r4.remove(r5)
            java.lang.String r5 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.DELTA_CRL_INDICATOR
            r4.remove(r5)
            java.lang.String r5 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.POLICY_CONSTRAINTS
            r4.remove(r5)
            java.lang.String r5 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.BASIC_CONSTRAINTS
            r4.remove(r5)
            java.lang.String r5 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.SUBJECT_ALTERNATIVE_NAME
            r4.remove(r5)
            java.lang.String r5 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.NAME_CONSTRAINTS
            r4.remove(r5)
            javax.security.auth.x500.X500Principal r4 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getSubjectPrincipal(r21)
            java.util.List r5 = r30.getCertificates()     // Catch: java.security.cert.CertPathValidatorException -> L1fd
            java.security.PublicKey r5 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getNextWorkingKey(r5, r10)     // Catch: java.security.cert.CertPathValidatorException -> L1fd
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r6 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getAlgorithmIdentifier(r5)
            r6.getObjectId()
            r6.getParameters()
            r17 = r1
            r27 = r4
            r19 = r21
            r4 = r2
            r2 = r5
            r5 = r0
            goto L20f
        L1fd:
            r0 = move-exception
            java.security.cert.CertPathValidatorException r1 = new java.security.cert.CertPathValidatorException
            java.lang.String r2 = "Next working key could not be retrieved."
            r1.<init>(r2, r0, r8, r10)
            throw r1
        L206:
            r6 = r24
            r2 = r31
            r5 = r0
            r17 = r1
            r3 = r6
            r4 = r11
        L20f:
            int r6 = r10 + (-1)
            r1 = r21
            r7 = r23
            r11 = r25
            r0 = r26
            r10 = r27
            goto L11f
        L21d:
            r26 = r0
            r31 = r2
            r10 = r6
            r25 = r11
            r11 = r4
            int r0 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.wrapupCertA(r11, r1)
            int r4 = r10 + 1
            int r0 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.wrapupCertB(r8, r4, r0)
            java.util.Set r1 = r1.getCriticalExtensionOIDs()
            java.util.HashSet r2 = new java.util.HashSet
            if (r1 == 0) goto L272
            r2.<init>(r1)
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.KEY_USAGE
            r2.remove(r1)
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.CERTIFICATE_POLICIES
            r2.remove(r1)
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.POLICY_MAPPINGS
            r2.remove(r1)
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.INHIBIT_ANY_POLICY
            r2.remove(r1)
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.ISSUING_DISTRIBUTION_POINT
            r2.remove(r1)
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.DELTA_CRL_INDICATOR
            r2.remove(r1)
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.POLICY_CONSTRAINTS
            r2.remove(r1)
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.BASIC_CONSTRAINTS
            r2.remove(r1)
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.SUBJECT_ALTERNATIVE_NAME
            r2.remove(r1)
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.NAME_CONSTRAINTS
            r2.remove(r1)
            java.lang.String r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.CRL_DISTRIBUTION_POINTS
            r2.remove(r1)
            goto L275
        L272:
            r2.<init>()
        L275:
            org.bouncycastle.jce.provider.RFC3280CertPathUtilities.wrapupCertF(r8, r4, r12, r2)
            r1 = r30
            r2 = r26
            r3 = r25
            r5 = r14
            r6 = r17
            r7 = r16
            org.bouncycastle.jce.provider.PKIXPolicyNode r1 = org.bouncycastle.jce.provider.RFC3280CertPathUtilities.wrapupCertG(r1, r2, r3, r4, r5, r6, r7)
            if (r0 > 0) goto L295
            if (r1 == 0) goto L28c
            goto L295
        L28c:
            java.security.cert.CertPathValidatorException r0 = new java.security.cert.CertPathValidatorException
            java.lang.String r1 = "Path processing failed on policy."
            r2 = 0
            r0.<init>(r1, r2, r8, r10)
            throw r0
        L295:
            java.security.cert.PKIXCertPathValidatorResult r0 = new java.security.cert.PKIXCertPathValidatorResult
            r3 = r31
            r2 = r20
            r0.<init>(r2, r1, r3)
            return r0
        L29f:
            r0 = move-exception
            r1 = r0
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r0 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r2 = "Algorithm identifier of public key of trust anchor could not be read."
            r3 = -1
            r0.<init>(r2, r1, r8, r3)
            throw r0
        L2aa:
            r0 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r1 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r2 = "Subject of trust anchor could not be (re)encoded."
            r3 = -1
            r1.<init>(r2, r0, r8, r3)
            throw r1
        L2b4:
            r3 = -1
            java.security.cert.CertPathValidatorException r0 = new java.security.cert.CertPathValidatorException
            java.lang.String r1 = "Trust anchor for certification path not found."
            r2 = 0
            r0.<init>(r1, r2, r8, r3)
            throw r0
        L2be:
            r0 = move-exception
            r23 = r7
            java.security.cert.CertPathValidatorException r1 = new java.security.cert.CertPathValidatorException
            java.lang.String r2 = r0.getMessage()
            int r3 = r23.size()
            r4 = 1
            int r3 = r3 - r4
            r1.<init>(r2, r0, r8, r3)
            throw r1
        L2d1:
            java.security.cert.CertPathValidatorException r0 = new java.security.cert.CertPathValidatorException
            java.lang.String r1 = "Certification path is empty."
            r2 = 0
            r3 = 0
            r0.<init>(r1, r2, r8, r3)
            throw r0
        L2db:
            java.security.InvalidAlgorithmParameterException r0 = new java.security.InvalidAlgorithmParameterException
            java.lang.String r1 = "trustAnchors is null, this is not allowed for certification path validation."
            r0.<init>(r1)
            throw r0
        L2e3:
            java.security.InvalidAlgorithmParameterException r0 = new java.security.InvalidAlgorithmParameterException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Parameters must be a "
            r1.append(r2)
            java.lang.Class<java.security.cert.PKIXParameters> r2 = java.security.cert.PKIXParameters.class
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = " instance."
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }
}
