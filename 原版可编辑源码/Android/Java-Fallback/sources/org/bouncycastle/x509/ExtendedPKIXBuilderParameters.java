package org.bouncycastle.x509;

public class ExtendedPKIXBuilderParameters extends org.bouncycastle.x509.ExtendedPKIXParameters {
    private java.util.Set excludedCerts;
    private int maxPathLength;

    public ExtendedPKIXBuilderParameters(java.util.Set r1, org.bouncycastle.util.Selector r2) throws java.security.InvalidAlgorithmParameterException {
            r0 = this;
            r0.<init>(r1)
            r1 = 5
            r0.maxPathLength = r1
            java.util.Set r1 = java.util.Collections.EMPTY_SET
            r0.excludedCerts = r1
            r0.setTargetConstraints(r2)
            return
    }

    public static org.bouncycastle.x509.ExtendedPKIXParameters getInstance(java.security.cert.PKIXParameters r3) {
            org.bouncycastle.x509.ExtendedPKIXBuilderParameters r0 = new org.bouncycastle.x509.ExtendedPKIXBuilderParameters     // Catch: java.lang.Exception -> L17
            java.util.Set r1 = r3.getTrustAnchors()     // Catch: java.lang.Exception -> L17
            java.security.cert.CertSelector r2 = r3.getTargetCertConstraints()     // Catch: java.lang.Exception -> L17
            java.security.cert.X509CertSelector r2 = (java.security.cert.X509CertSelector) r2     // Catch: java.lang.Exception -> L17
            org.bouncycastle.x509.X509CertStoreSelector r2 = org.bouncycastle.x509.X509CertStoreSelector.getInstance(r2)     // Catch: java.lang.Exception -> L17
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L17
            r0.setParams(r3)
            return r0
        L17:
            r3 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r3 = r3.getMessage()
            r0.<init>(r3)
            throw r0
    }

    @Override
    public java.lang.Object clone() {
            r3 = this;
            org.bouncycastle.x509.ExtendedPKIXBuilderParameters r0 = new org.bouncycastle.x509.ExtendedPKIXBuilderParameters     // Catch: java.lang.Exception -> L11
            java.util.Set r1 = r3.getTrustAnchors()     // Catch: java.lang.Exception -> L11
            org.bouncycastle.util.Selector r2 = r3.getTargetConstraints()     // Catch: java.lang.Exception -> L11
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L11
            r0.setParams(r3)
            return r0
        L11:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r0 = r0.getMessage()
            r1.<init>(r0)
            throw r1
    }

    public java.util.Set getExcludedCerts() {
            r1 = this;
            java.util.Set r0 = r1.excludedCerts
            java.util.Set r0 = java.util.Collections.unmodifiableSet(r0)
            return r0
    }

    public int getMaxPathLength() {
            r1 = this;
            int r0 = r1.maxPathLength
            return r0
    }

    public void setExcludedCerts(java.util.Set r2) {
            r1 = this;
            if (r2 != 0) goto L5
            java.util.Set r2 = java.util.Collections.EMPTY_SET
            goto Lc
        L5:
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>(r2)
            r1.excludedCerts = r0
        Lc:
            return
    }

    public void setMaxPathLength(int r2) {
            r1 = this;
            r0 = -1
            if (r2 < r0) goto L6
            r1.maxPathLength = r2
            return
        L6:
            java.security.InvalidParameterException r2 = new java.security.InvalidParameterException
            java.lang.String r0 = "The maximum path length parameter can not be less than -1."
            r2.<init>(r0)
            throw r2
    }

    @Override
    protected void setParams(java.security.cert.PKIXParameters r3) {
            r2 = this;
            super.setParams(r3)
            boolean r0 = r3 instanceof org.bouncycastle.x509.ExtendedPKIXBuilderParameters
            if (r0 == 0) goto L17
            r0 = r3
            org.bouncycastle.x509.ExtendedPKIXBuilderParameters r0 = (org.bouncycastle.x509.ExtendedPKIXBuilderParameters) r0
            int r1 = r0.maxPathLength
            r2.maxPathLength = r1
            java.util.HashSet r1 = new java.util.HashSet
            java.util.Set r0 = r0.excludedCerts
            r1.<init>(r0)
            r2.excludedCerts = r1
        L17:
            boolean r0 = r3 instanceof java.security.cert.PKIXBuilderParameters
            if (r0 == 0) goto L23
            java.security.cert.PKIXBuilderParameters r3 = (java.security.cert.PKIXBuilderParameters) r3
            int r3 = r3.getMaxPathLength()
            r2.maxPathLength = r3
        L23:
            return
    }
}
