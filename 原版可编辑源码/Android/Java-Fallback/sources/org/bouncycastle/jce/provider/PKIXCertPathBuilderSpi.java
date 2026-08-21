package org.bouncycastle.jce.provider;

public class PKIXCertPathBuilderSpi extends java.security.cert.CertPathBuilderSpi {
    private java.lang.Exception certPathException;

    public PKIXCertPathBuilderSpi() {
            r0 = this;
            r0.<init>()
            return
    }

    protected java.security.cert.CertPathBuilderResult build(java.security.cert.X509Certificate r6, org.bouncycastle.x509.ExtendedPKIXBuilderParameters r7, java.util.List r8) {
            r5 = this;
            java.lang.String r0 = "BC"
            boolean r1 = r8.contains(r6)
            r2 = 0
            if (r1 == 0) goto La
            return r2
        La:
            java.util.Set r1 = r7.getExcludedCerts()
            boolean r1 = r1.contains(r6)
            if (r1 == 0) goto L15
            return r2
        L15:
            int r1 = r7.getMaxPathLength()
            r3 = -1
            if (r1 == r3) goto L29
            int r1 = r8.size()
            int r1 = r1 + (-1)
            int r3 = r7.getMaxPathLength()
            if (r1 <= r3) goto L29
            return r2
        L29:
            r8.add(r6)
            java.lang.String r1 = "X.509"
            java.security.cert.CertificateFactory r1 = java.security.cert.CertificateFactory.getInstance(r1, r0)     // Catch: java.lang.Exception -> Lbf
            java.lang.String r3 = "PKIX"
            java.security.cert.CertPathValidator r0 = java.security.cert.CertPathValidator.getInstance(r3, r0)     // Catch: java.lang.Exception -> Lbf
            java.util.Set r3 = r7.getTrustAnchors()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            java.security.cert.TrustAnchor r3 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.findTrustAnchor(r6, r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            if (r3 == 0) goto L70
            java.security.cert.CertPath r1 = r1.generateCertPath(r8)     // Catch: java.lang.Exception -> L67 org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            java.security.cert.CertPathValidatorResult r7 = r0.validate(r1, r7)     // Catch: java.lang.Exception -> L5e org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            java.security.cert.PKIXCertPathValidatorResult r7 = (java.security.cert.PKIXCertPathValidatorResult) r7     // Catch: java.lang.Exception -> L5e org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            java.security.cert.PKIXCertPathBuilderResult r0 = new java.security.cert.PKIXCertPathBuilderResult     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            java.security.cert.TrustAnchor r3 = r7.getTrustAnchor()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            java.security.cert.PolicyNode r4 = r7.getPolicyTree()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            java.security.PublicKey r7 = r7.getPublicKey()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            r0.<init>(r1, r3, r4, r7)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            return r0
        L5e:
            r7 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r0 = new org.bouncycastle.jce.provider.AnnotatedException     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            java.lang.String r1 = "Certification path could not be validated."
            r0.<init>(r1, r7)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            throw r0     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
        L67:
            r7 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r0 = new org.bouncycastle.jce.provider.AnnotatedException     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            java.lang.String r1 = "Certification path could not be constructed from certificate list."
            r0.<init>(r1, r7)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            throw r0     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
        L70:
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.addAdditionalStoresFromAltNames(r6, r7)     // Catch: java.security.cert.CertificateParsingException -> Lad org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            java.util.HashSet r0 = new java.util.HashSet     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            r0.<init>()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            java.util.Collection r1 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.findIssuerCerts(r6, r7)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> La4
            r0.addAll(r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> La4
            boolean r1 = r0.isEmpty()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            if (r1 != 0) goto L9c
            java.util.Iterator r0 = r0.iterator()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
        L89:
            boolean r1 = r0.hasNext()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            if (r1 == 0) goto Lb9
            if (r2 != 0) goto Lb9
            java.lang.Object r1 = r0.next()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            java.security.cert.X509Certificate r1 = (java.security.cert.X509Certificate) r1     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            java.security.cert.CertPathBuilderResult r2 = r5.build(r1, r7, r8)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            goto L89
        L9c:
            org.bouncycastle.jce.provider.AnnotatedException r7 = new org.bouncycastle.jce.provider.AnnotatedException     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            java.lang.String r0 = "No issuer certificate for certificate in certification path found."
            r7.<init>(r0)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            throw r7     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
        La4:
            r7 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r0 = new org.bouncycastle.jce.provider.AnnotatedException     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            java.lang.String r1 = "Cannot find issuer certificate for certificate in certification path."
            r0.<init>(r1, r7)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            throw r0     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
        Lad:
            r7 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r0 = new org.bouncycastle.jce.provider.AnnotatedException     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            java.lang.String r1 = "No additiontal X.509 stores can be added from certificate locations."
            r0.<init>(r1, r7)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
            throw r0     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lb6
        Lb6:
            r7 = move-exception
            r5.certPathException = r7
        Lb9:
            if (r2 != 0) goto Lbe
            r8.remove(r6)
        Lbe:
            return r2
        Lbf:
            java.lang.RuntimeException r6 = new java.lang.RuntimeException
            java.lang.String r7 = "Exception creating support classes."
            r6.<init>(r7)
            throw r6
    }

    @Override
    public java.security.cert.CertPathBuilderResult engineBuild(java.security.cert.CertPathParameters r5) throws java.security.cert.CertPathBuilderException, java.security.InvalidAlgorithmParameterException {
            r4 = this;
            boolean r0 = r5 instanceof java.security.cert.PKIXBuilderParameters
            if (r0 != 0) goto L39
            boolean r0 = r5 instanceof org.bouncycastle.x509.ExtendedPKIXBuilderParameters
            if (r0 == 0) goto L9
            goto L39
        L9:
            java.security.InvalidAlgorithmParameterException r5 = new java.security.InvalidAlgorithmParameterException
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
            r5.<init>(r0)
            throw r5
        L39:
            boolean r0 = r5 instanceof org.bouncycastle.x509.ExtendedPKIXBuilderParameters
            if (r0 == 0) goto L3e
            goto L44
        L3e:
            java.security.cert.PKIXBuilderParameters r5 = (java.security.cert.PKIXBuilderParameters) r5
            org.bouncycastle.x509.ExtendedPKIXParameters r5 = org.bouncycastle.x509.ExtendedPKIXBuilderParameters.getInstance(r5)
        L44:
            org.bouncycastle.x509.ExtendedPKIXBuilderParameters r5 = (org.bouncycastle.x509.ExtendedPKIXBuilderParameters) r5
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            org.bouncycastle.util.Selector r1 = r5.getTargetConstraints()
            boolean r2 = r1 instanceof org.bouncycastle.x509.X509CertStoreSelector
            if (r2 == 0) goto Ld0
            r2 = r1
            org.bouncycastle.x509.X509CertStoreSelector r2 = (org.bouncycastle.x509.X509CertStoreSelector) r2     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc7
            java.util.List r3 = r5.getStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc7
            java.util.Collection r2 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.findCertificates(r2, r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc7
            org.bouncycastle.x509.X509CertStoreSelector r1 = (org.bouncycastle.x509.X509CertStoreSelector) r1     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc7
            java.util.List r3 = r5.getCertStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc7
            java.util.Collection r1 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.findCertificates(r1, r3)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc7
            r2.addAll(r1)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> Lc7
            boolean r1 = r2.isEmpty()
            if (r1 != 0) goto Lbf
            r1 = 0
            java.util.Iterator r2 = r2.iterator()
        L76:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L89
            if (r1 != 0) goto L89
            java.lang.Object r1 = r2.next()
            java.security.cert.X509Certificate r1 = (java.security.cert.X509Certificate) r1
            java.security.cert.CertPathBuilderResult r1 = r4.build(r1, r5, r0)
            goto L76
        L89:
            if (r1 != 0) goto Laf
            java.lang.Exception r5 = r4.certPathException
            if (r5 == 0) goto Laf
            boolean r5 = r5 instanceof org.bouncycastle.jce.provider.AnnotatedException
            if (r5 == 0) goto La5
            java.security.cert.CertPathBuilderException r5 = new java.security.cert.CertPathBuilderException
            java.lang.Exception r0 = r4.certPathException
            java.lang.String r0 = r0.getMessage()
            java.lang.Exception r1 = r4.certPathException
            java.lang.Throwable r1 = r1.getCause()
            r5.<init>(r0, r1)
            throw r5
        La5:
            java.security.cert.CertPathBuilderException r5 = new java.security.cert.CertPathBuilderException
            java.lang.Exception r0 = r4.certPathException
            java.lang.String r1 = "Possible certificate chain could not be validated."
            r5.<init>(r1, r0)
            throw r5
        Laf:
            if (r1 != 0) goto Lbe
            java.lang.Exception r5 = r4.certPathException
            if (r5 == 0) goto Lb6
            goto Lbe
        Lb6:
            java.security.cert.CertPathBuilderException r5 = new java.security.cert.CertPathBuilderException
            java.lang.String r0 = "Unable to find certificate chain."
            r5.<init>(r0)
            throw r5
        Lbe:
            return r1
        Lbf:
            java.security.cert.CertPathBuilderException r5 = new java.security.cert.CertPathBuilderException
            java.lang.String r0 = "No certificate found matching targetContraints."
            r5.<init>(r0)
            throw r5
        Lc7:
            r5 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathBuilderException r0 = new org.bouncycastle.jce.exception.ExtCertPathBuilderException
            java.lang.String r1 = "Error finding target certificate."
            r0.<init>(r1, r5)
            throw r0
        Ld0:
            java.security.cert.CertPathBuilderException r5 = new java.security.cert.CertPathBuilderException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "TargetConstraints must be an instance of "
            r0.append(r1)
            java.lang.Class<org.bouncycastle.x509.X509CertStoreSelector> r1 = org.bouncycastle.x509.X509CertStoreSelector.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = " for "
            r0.append(r1)
            java.lang.Class r1 = r4.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = " class."
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.<init>(r0)
            throw r5
    }
}
