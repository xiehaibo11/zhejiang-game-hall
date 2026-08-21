package org.bouncycastle.jce.provider;

public class PKIXAttrCertPathValidatorSpi extends java.security.cert.CertPathValidatorSpi {
    public PKIXAttrCertPathValidatorSpi() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public java.security.cert.CertPathValidatorResult engineValidate(java.security.cert.CertPath r6, java.security.cert.CertPathParameters r7) throws java.security.cert.CertPathValidatorException, java.security.InvalidAlgorithmParameterException {
            r5 = this;
            boolean r0 = r7 instanceof org.bouncycastle.x509.ExtendedPKIXParameters
            if (r0 == 0) goto L7f
            org.bouncycastle.x509.ExtendedPKIXParameters r7 = (org.bouncycastle.x509.ExtendedPKIXParameters) r7
            org.bouncycastle.util.Selector r0 = r7.getTargetConstraints()
            boolean r1 = r0 instanceof org.bouncycastle.x509.X509AttributeCertStoreSelector
            if (r1 == 0) goto L4d
            org.bouncycastle.x509.X509AttributeCertStoreSelector r0 = (org.bouncycastle.x509.X509AttributeCertStoreSelector) r0
            org.bouncycastle.x509.X509AttributeCertificate r0 = r0.getAttributeCert()
            java.security.cert.CertPath r1 = org.bouncycastle.jce.provider.RFC3281CertPathUtilities.processAttrCert1(r0, r7)
            java.security.cert.CertPathValidatorResult r2 = org.bouncycastle.jce.provider.RFC3281CertPathUtilities.processAttrCert2(r6, r7)
            java.util.List r3 = r6.getCertificates()
            r4 = 0
            java.lang.Object r3 = r3.get(r4)
            java.security.cert.X509Certificate r3 = (java.security.cert.X509Certificate) r3
            org.bouncycastle.jce.provider.RFC3281CertPathUtilities.processAttrCert3(r3, r7)
            org.bouncycastle.jce.provider.RFC3281CertPathUtilities.processAttrCert4(r3, r7)
            org.bouncycastle.jce.provider.RFC3281CertPathUtilities.processAttrCert5(r0, r7)
            org.bouncycastle.jce.provider.RFC3281CertPathUtilities.processAttrCert7(r0, r6, r1, r7)
            org.bouncycastle.jce.provider.RFC3281CertPathUtilities.additionalChecks(r0, r7)
            r1 = 0
            r4 = -1
            java.util.Date r1 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.getValidCertDateFromValidityModel(r7, r1, r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L44
            java.util.List r6 = r6.getCertificates()
            org.bouncycastle.jce.provider.RFC3281CertPathUtilities.checkCRLs(r0, r7, r3, r1, r6)
            return r2
        L44:
            r6 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r7 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r0 = "Could not get validity date from attribute certificate."
            r7.<init>(r0, r6)
            throw r7
        L4d:
            java.security.InvalidAlgorithmParameterException r6 = new java.security.InvalidAlgorithmParameterException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "TargetConstraints must be an instance of "
            r7.append(r0)
            java.lang.Class<org.bouncycastle.x509.X509AttributeCertStoreSelector> r0 = org.bouncycastle.x509.X509AttributeCertStoreSelector.class
            java.lang.String r0 = r0.getName()
            r7.append(r0)
            java.lang.String r0 = " for "
            r7.append(r0)
            java.lang.Class r0 = r5.getClass()
            java.lang.String r0 = r0.getName()
            r7.append(r0)
            java.lang.String r0 = " class."
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            r6.<init>(r7)
            throw r6
        L7f:
            java.security.InvalidAlgorithmParameterException r6 = new java.security.InvalidAlgorithmParameterException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "Parameters must be a "
            r7.append(r0)
            java.lang.Class<org.bouncycastle.x509.ExtendedPKIXParameters> r0 = org.bouncycastle.x509.ExtendedPKIXParameters.class
            java.lang.String r0 = r0.getName()
            r7.append(r0)
            java.lang.String r0 = " instance."
            r7.append(r0)
            java.lang.String r7 = r7.toString()
            r6.<init>(r7)
            throw r6
    }
}
