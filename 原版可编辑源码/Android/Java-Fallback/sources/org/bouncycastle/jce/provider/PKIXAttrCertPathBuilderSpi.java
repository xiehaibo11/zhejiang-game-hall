package org.bouncycastle.jce.provider;

public class PKIXAttrCertPathBuilderSpi extends java.security.cert.CertPathBuilderSpi {
    private java.lang.Exception certPathException;

    public PKIXAttrCertPathBuilderSpi() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.security.cert.CertPathBuilderResult build(org.bouncycastle.x509.X509AttributeCertificate r6, java.security.cert.X509Certificate r7, org.bouncycastle.x509.ExtendedPKIXBuilderParameters r8, java.util.List r9) {
            r5 = this;
            java.lang.String r0 = "BC"
            boolean r1 = r9.contains(r7)
            r2 = 0
            if (r1 == 0) goto La
            return r2
        La:
            java.util.Set r1 = r8.getExcludedCerts()
            boolean r1 = r1.contains(r7)
            if (r1 == 0) goto L15
            return r2
        L15:
            int r1 = r8.getMaxPathLength()
            r3 = -1
            if (r1 == r3) goto L29
            int r1 = r9.size()
            int r1 = r1 + (-1)
            int r3 = r8.getMaxPathLength()
            if (r1 <= r3) goto L29
            return r2
        L29:
            r9.add(r7)
            java.lang.String r1 = "X.509"
            java.security.cert.CertificateFactory r1 = java.security.cert.CertificateFactory.getInstance(r1, r0)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r3 = "RFC3281"
            java.security.cert.CertPathValidator r0 = java.security.cert.CertPathValidator.getInstance(r3, r0)     // Catch: java.lang.Exception -> Ld5
            java.util.Set r3 = r8.getTrustAnchors()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            java.security.cert.TrustAnchor r3 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.findTrustAnchor(r7, r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            if (r3 == 0) goto L70
            java.security.cert.CertPath r6 = r1.generateCertPath(r9)     // Catch: java.lang.Exception -> L67 org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            java.security.cert.CertPathValidatorResult r8 = r0.validate(r6, r8)     // Catch: java.lang.Exception -> L5e org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            java.security.cert.PKIXCertPathValidatorResult r8 = (java.security.cert.PKIXCertPathValidatorResult) r8     // Catch: java.lang.Exception -> L5e org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            java.security.cert.PKIXCertPathBuilderResult r0 = new java.security.cert.PKIXCertPathBuilderResult     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            java.security.cert.TrustAnchor r1 = r8.getTrustAnchor()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            java.security.cert.PolicyNode r3 = r8.getPolicyTree()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            java.security.PublicKey r8 = r8.getPublicKey()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            r0.<init>(r6, r1, r3, r8)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            return r0
        L5e:
            r6 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r8 = new org.bouncycastle.jce.provider.AnnotatedException     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            java.lang.String r0 = "Certification path could not be validated."
            r8.<init>(r0, r6)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            throw r8     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
        L67:
            r6 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r8 = new org.bouncycastle.jce.provider.AnnotatedException     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            java.lang.String r0 = "Certification path could not be constructed from certificate list."
            r8.<init>(r0, r6)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            throw r8     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
        L70:
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.addAdditionalStoresFromAltNames(r7, r8)     // Catch: java.security.cert.CertificateParsingException -> Lbc org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            java.util.HashSet r0 = new java.util.HashSet     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            r0.<init>()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            java.util.Collection r1 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.findIssuerCerts(r7, r8)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb3
            r0.addAll(r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb3
            boolean r1 = r0.isEmpty()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            if (r1 != 0) goto Lab
            java.util.Iterator r0 = r0.iterator()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
        L89:
            boolean r1 = r0.hasNext()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            if (r1 == 0) goto Lcf
            if (r2 != 0) goto Lcf
            java.lang.Object r1 = r0.next()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            java.security.cert.X509Certificate r1 = (java.security.cert.X509Certificate) r1     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            javax.security.auth.x500.X500Principal r3 = r1.getIssuerX500Principal()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            javax.security.auth.x500.X500Principal r4 = r1.getSubjectX500Principal()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            boolean r3 = r3.equals(r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            if (r3 == 0) goto La6
            goto L89
        La6:
            java.security.cert.CertPathBuilderResult r2 = r5.build(r6, r1, r8, r9)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            goto L89
        Lab:
            org.bouncycastle.jce.provider.AnnotatedException r6 = new org.bouncycastle.jce.provider.AnnotatedException     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            java.lang.String r8 = "No issuer certificate for certificate in certification path found."
            r6.<init>(r8)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            throw r6     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
        Lb3:
            r6 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r8 = new org.bouncycastle.jce.provider.AnnotatedException     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            java.lang.String r0 = "Cannot find issuer certificate for certificate in certification path."
            r8.<init>(r0, r6)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            throw r8     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
        Lbc:
            r6 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r8 = new org.bouncycastle.jce.provider.AnnotatedException     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            java.lang.String r0 = "No additiontal X.509 stores can be added from certificate locations."
            r8.<init>(r0, r6)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
            throw r8     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc5
        Lc5:
            r6 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r8 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r0 = "No valid certification path could be build."
            r8.<init>(r0, r6)
            r5.certPathException = r8
        Lcf:
            if (r2 != 0) goto Ld4
            r9.remove(r7)
        Ld4:
            return r2
        Ld5:
            java.lang.RuntimeException r6 = new java.lang.RuntimeException
            java.lang.String r7 = "Exception creating support classes."
            r6.<init>(r7)
            throw r6
    }

    @Override
    public java.security.cert.CertPathBuilderResult engineBuild(java.security.cert.CertPathParameters r10) throws java.security.cert.CertPathBuilderException, java.security.InvalidAlgorithmParameterException {
            r9 = this;
            boolean r0 = r10 instanceof java.security.cert.PKIXBuilderParameters
            if (r0 != 0) goto L39
            boolean r0 = r10 instanceof org.bouncycastle.x509.ExtendedPKIXBuilderParameters
            if (r0 == 0) goto L9
            goto L39
        L9:
            java.security.InvalidAlgorithmParameterException r10 = new java.security.InvalidAlgorithmParameterException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Parameters must be an instance of "
            r0.append(r1)
            java.lang.Class<java.security.cert.PKIXBuilderParameters> r1 = java.security.cert.PKIXBuilderParameters.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = " or "
            r0.append(r1)
            java.lang.Class<org.bouncycastle.x509.ExtendedPKIXBuilderParameters> r1 = org.bouncycastle.x509.ExtendedPKIXBuilderParameters.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = "."
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r10.<init>(r0)
            throw r10
        L39:
            boolean r0 = r10 instanceof org.bouncycastle.x509.ExtendedPKIXBuilderParameters
            if (r0 == 0) goto L3e
            goto L44
        L3e:
            java.security.cert.PKIXBuilderParameters r10 = (java.security.cert.PKIXBuilderParameters) r10
            org.bouncycastle.x509.ExtendedPKIXParameters r10 = org.bouncycastle.x509.ExtendedPKIXBuilderParameters.getInstance(r10)
        L44:
            org.bouncycastle.x509.ExtendedPKIXBuilderParameters r10 = (org.bouncycastle.x509.ExtendedPKIXBuilderParameters) r10
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            org.bouncycastle.util.Selector r1 = r10.getTargetConstraints()
            boolean r2 = r1 instanceof org.bouncycastle.x509.X509AttributeCertStoreSelector
            if (r2 == 0) goto L11f
            org.bouncycastle.x509.X509AttributeCertStoreSelector r1 = (org.bouncycastle.x509.X509AttributeCertStoreSelector) r1     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L116
            java.util.List r2 = r10.getStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L116
            java.util.Collection r1 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.findCertificates(r1, r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L116
            boolean r2 = r1.isEmpty()
            if (r2 != 0) goto L10e
            r2 = 0
            java.util.Iterator r1 = r1.iterator()
        L68:
            boolean r3 = r1.hasNext()
            if (r3 == 0) goto Led
            if (r2 != 0) goto Led
            java.lang.Object r3 = r1.next()
            org.bouncycastle.x509.X509AttributeCertificate r3 = (org.bouncycastle.x509.X509AttributeCertificate) r3
            org.bouncycastle.x509.X509CertStoreSelector r4 = new org.bouncycastle.x509.X509CertStoreSelector
            r4.<init>()
            org.bouncycastle.x509.AttributeCertificateIssuer r5 = r3.getIssuer()
            java.security.Principal[] r5 = r5.getPrincipals()
            java.util.HashSet r6 = new java.util.HashSet
            r6.<init>()
            r7 = 0
        L89:
            int r8 = r5.length
            if (r7 >= r8) goto Lc8
            r8 = r5[r7]     // Catch: java.io.IOException -> Lb6 org.bouncycastle.jce.provider.AnnotatedException -> Lbf
            boolean r8 = r8 instanceof javax.security.auth.x500.X500Principal     // Catch: java.io.IOException -> Lb6 org.bouncycastle.jce.provider.AnnotatedException -> Lbf
            if (r8 == 0) goto L9d
            r8 = r5[r7]     // Catch: java.io.IOException -> Lb6 org.bouncycastle.jce.provider.AnnotatedException -> Lbf
            javax.security.auth.x500.X500Principal r8 = (javax.security.auth.x500.X500Principal) r8     // Catch: java.io.IOException -> Lb6 org.bouncycastle.jce.provider.AnnotatedException -> Lbf
            byte[] r8 = r8.getEncoded()     // Catch: java.io.IOException -> Lb6 org.bouncycastle.jce.provider.AnnotatedException -> Lbf
            r4.setSubject(r8)     // Catch: java.io.IOException -> Lb6 org.bouncycastle.jce.provider.AnnotatedException -> Lbf
        L9d:
            java.util.List r8 = r10.getStores()     // Catch: java.io.IOException -> Lb6 org.bouncycastle.jce.provider.AnnotatedException -> Lbf
            java.util.Collection r8 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.findCertificates(r4, r8)     // Catch: java.io.IOException -> Lb6 org.bouncycastle.jce.provider.AnnotatedException -> Lbf
            r6.addAll(r8)     // Catch: java.io.IOException -> Lb6 org.bouncycastle.jce.provider.AnnotatedException -> Lbf
            java.util.List r8 = r10.getCertStores()     // Catch: java.io.IOException -> Lb6 org.bouncycastle.jce.provider.AnnotatedException -> Lbf
            java.util.Collection r8 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.findCertificates(r4, r8)     // Catch: java.io.IOException -> Lb6 org.bouncycastle.jce.provider.AnnotatedException -> Lbf
            r6.addAll(r8)     // Catch: java.io.IOException -> Lb6 org.bouncycastle.jce.provider.AnnotatedException -> Lbf
            int r7 = r7 + 1
            goto L89
        Lb6:
            r10 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathBuilderException r0 = new org.bouncycastle.jce.exception.ExtCertPathBuilderException
            java.lang.String r1 = "cannot encode X500Proncipal."
            r0.<init>(r1, r10)
            throw r0
        Lbf:
            r10 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathBuilderException r0 = new org.bouncycastle.jce.exception.ExtCertPathBuilderException
            java.lang.String r1 = "Public key certificate for attribute certificate cannot be searched."
            r0.<init>(r1, r10)
            throw r0
        Lc8:
            boolean r4 = r6.isEmpty()
            if (r4 != 0) goto Le5
            java.util.Iterator r4 = r6.iterator()
        Ld2:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L68
            if (r2 != 0) goto L68
            java.lang.Object r2 = r4.next()
            java.security.cert.X509Certificate r2 = (java.security.cert.X509Certificate) r2
            java.security.cert.CertPathBuilderResult r2 = r9.build(r3, r2, r10, r0)
            goto Ld2
        Le5:
            java.security.cert.CertPathBuilderException r10 = new java.security.cert.CertPathBuilderException
            java.lang.String r0 = "Public key certificate for attribute certificate cannot be found."
            r10.<init>(r0)
            throw r10
        Led:
            if (r2 != 0) goto Lfe
            java.lang.Exception r10 = r9.certPathException
            if (r10 != 0) goto Lf4
            goto Lfe
        Lf4:
            org.bouncycastle.jce.exception.ExtCertPathBuilderException r10 = new org.bouncycastle.jce.exception.ExtCertPathBuilderException
            java.lang.Exception r0 = r9.certPathException
            java.lang.String r1 = "Possible certificate chain could not be validated."
            r10.<init>(r1, r0)
            throw r10
        Lfe:
            if (r2 != 0) goto L10d
            java.lang.Exception r10 = r9.certPathException
            if (r10 == 0) goto L105
            goto L10d
        L105:
            java.security.cert.CertPathBuilderException r10 = new java.security.cert.CertPathBuilderException
            java.lang.String r0 = "Unable to find certificate chain."
            r10.<init>(r0)
            throw r10
        L10d:
            return r2
        L10e:
            java.security.cert.CertPathBuilderException r10 = new java.security.cert.CertPathBuilderException
            java.lang.String r0 = "No attribute certificate found matching targetContraints."
            r10.<init>(r0)
            throw r10
        L116:
            r10 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathBuilderException r0 = new org.bouncycastle.jce.exception.ExtCertPathBuilderException
            java.lang.String r1 = "Error finding target attribute certificate."
            r0.<init>(r1, r10)
            throw r0
        L11f:
            java.security.cert.CertPathBuilderException r10 = new java.security.cert.CertPathBuilderException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "TargetConstraints must be an instance of "
            r0.append(r1)
            java.lang.Class<org.bouncycastle.x509.X509AttributeCertStoreSelector> r1 = org.bouncycastle.x509.X509AttributeCertStoreSelector.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = " for "
            r0.append(r1)
            java.lang.Class r1 = r9.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = " class."
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r10.<init>(r0)
            throw r10
    }
}
