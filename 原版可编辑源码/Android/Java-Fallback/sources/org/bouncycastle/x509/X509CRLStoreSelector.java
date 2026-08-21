package org.bouncycastle.x509;

public class X509CRLStoreSelector extends java.security.cert.X509CRLSelector implements org.bouncycastle.util.Selector {
    private org.bouncycastle.x509.X509AttributeCertificate attrCertChecking;
    private boolean completeCRLEnabled;
    private boolean deltaCRLIndicator;
    private byte[] issuingDistributionPoint;
    private boolean issuingDistributionPointEnabled;
    private java.math.BigInteger maxBaseCRLNumber;

    public X509CRLStoreSelector() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.deltaCRLIndicator = r0
            r2.completeCRLEnabled = r0
            r1 = 0
            r2.maxBaseCRLNumber = r1
            r2.issuingDistributionPoint = r1
            r2.issuingDistributionPointEnabled = r0
            return
    }

    public static org.bouncycastle.x509.X509CRLStoreSelector getInstance(java.security.cert.X509CRLSelector r2) {
            if (r2 == 0) goto L3d
            org.bouncycastle.x509.X509CRLStoreSelector r0 = new org.bouncycastle.x509.X509CRLStoreSelector
            r0.<init>()
            java.security.cert.X509Certificate r1 = r2.getCertificateChecking()
            r0.setCertificateChecking(r1)
            java.util.Date r1 = r2.getDateAndTime()
            r0.setDateAndTime(r1)
            java.util.Collection r1 = r2.getIssuerNames()     // Catch: java.io.IOException -> L32
            r0.setIssuerNames(r1)     // Catch: java.io.IOException -> L32
            java.util.Collection r1 = r2.getIssuers()
            r0.setIssuers(r1)
            java.math.BigInteger r1 = r2.getMaxCRL()
            r0.setMaxCRLNumber(r1)
            java.math.BigInteger r2 = r2.getMinCRL()
            r0.setMinCRLNumber(r2)
            return r0
        L32:
            r2 = move-exception
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r2 = r2.getMessage()
            r0.<init>(r2)
            throw r0
        L3d:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "cannot create from null selector"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public java.lang.Object clone() {
            r2 = this;
            org.bouncycastle.x509.X509CRLStoreSelector r0 = getInstance(r2)
            boolean r1 = r2.deltaCRLIndicator
            r0.deltaCRLIndicator = r1
            boolean r1 = r2.completeCRLEnabled
            r0.completeCRLEnabled = r1
            java.math.BigInteger r1 = r2.maxBaseCRLNumber
            r0.maxBaseCRLNumber = r1
            org.bouncycastle.x509.X509AttributeCertificate r1 = r2.attrCertChecking
            r0.attrCertChecking = r1
            boolean r1 = r2.issuingDistributionPointEnabled
            r0.issuingDistributionPointEnabled = r1
            byte[] r1 = r2.issuingDistributionPoint
            byte[] r1 = org.bouncycastle.util.Arrays.clone(r1)
            r0.issuingDistributionPoint = r1
            return r0
    }

    public org.bouncycastle.x509.X509AttributeCertificate getAttrCertificateChecking() {
            r1 = this;
            org.bouncycastle.x509.X509AttributeCertificate r0 = r1.attrCertChecking
            return r0
    }

    public byte[] getIssuingDistributionPoint() {
            r1 = this;
            byte[] r0 = r1.issuingDistributionPoint
            byte[] r0 = org.bouncycastle.util.Arrays.clone(r0)
            return r0
    }

    public java.math.BigInteger getMaxBaseCRLNumber() {
            r1 = this;
            java.math.BigInteger r0 = r1.maxBaseCRLNumber
            return r0
    }

    public boolean isCompleteCRLEnabled() {
            r1 = this;
            boolean r0 = r1.completeCRLEnabled
            return r0
    }

    public boolean isDeltaCRLIndicatorEnabled() {
            r1 = this;
            boolean r0 = r1.deltaCRLIndicator
            return r0
    }

    public boolean isIssuingDistributionPointEnabled() {
            r1 = this;
            boolean r0 = r1.issuingDistributionPointEnabled
            return r0
    }

    @Override
    public boolean match(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof java.security.cert.X509CRL
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            java.security.cert.X509CRL r4 = (java.security.cert.X509CRL) r4
            r0 = 0
            org.bouncycastle.asn1.DERObjectIdentifier r2 = org.bouncycastle.asn1.x509.X509Extensions.DeltaCRLIndicator     // Catch: java.lang.Exception -> L64
            java.lang.String r2 = r2.getId()     // Catch: java.lang.Exception -> L64
            byte[] r2 = r4.getExtensionValue(r2)     // Catch: java.lang.Exception -> L64
            if (r2 == 0) goto L1d
            org.bouncycastle.asn1.ASN1Object r0 = org.bouncycastle.x509.extension.X509ExtensionUtil.fromExtensionValue(r2)     // Catch: java.lang.Exception -> L64
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)     // Catch: java.lang.Exception -> L64
        L1d:
            boolean r2 = r3.isDeltaCRLIndicatorEnabled()
            if (r2 == 0) goto L26
            if (r0 != 0) goto L26
            return r1
        L26:
            boolean r2 = r3.isCompleteCRLEnabled()
            if (r2 == 0) goto L2f
            if (r0 == 0) goto L2f
            return r1
        L2f:
            if (r0 == 0) goto L43
            java.math.BigInteger r2 = r3.maxBaseCRLNumber
            if (r2 == 0) goto L43
            java.math.BigInteger r0 = r0.getPositiveValue()
            java.math.BigInteger r2 = r3.maxBaseCRLNumber
            int r0 = r0.compareTo(r2)
            r2 = 1
            if (r0 != r2) goto L43
            return r1
        L43:
            boolean r0 = r3.issuingDistributionPointEnabled
            if (r0 == 0) goto L5f
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.IssuingDistributionPoint
            java.lang.String r0 = r0.getId()
            byte[] r0 = r4.getExtensionValue(r0)
            byte[] r2 = r3.issuingDistributionPoint
            if (r2 != 0) goto L58
            if (r0 == 0) goto L5f
            return r1
        L58:
            boolean r0 = org.bouncycastle.util.Arrays.areEqual(r0, r2)
            if (r0 != 0) goto L5f
            return r1
        L5f:
            boolean r4 = super.match(r4)
            return r4
        L64:
            return r1
    }

    @Override
    public boolean match(java.security.cert.CRL r1) {
            r0 = this;
            boolean r1 = r0.match(r1)
            return r1
    }

    public void setAttrCertificateChecking(org.bouncycastle.x509.X509AttributeCertificate r1) {
            r0 = this;
            r0.attrCertChecking = r1
            return
    }

    public void setCompleteCRLEnabled(boolean r1) {
            r0 = this;
            r0.completeCRLEnabled = r1
            return
    }

    public void setDeltaCRLIndicatorEnabled(boolean r1) {
            r0 = this;
            r0.deltaCRLIndicator = r1
            return
    }

    public void setIssuingDistributionPoint(byte[] r1) {
            r0 = this;
            byte[] r1 = org.bouncycastle.util.Arrays.clone(r1)
            r0.issuingDistributionPoint = r1
            return
    }

    public void setIssuingDistributionPointEnabled(boolean r1) {
            r0 = this;
            r0.issuingDistributionPointEnabled = r1
            return
    }

    public void setMaxBaseCRLNumber(java.math.BigInteger r1) {
            r0 = this;
            r0.maxBaseCRLNumber = r1
            return
    }
}
