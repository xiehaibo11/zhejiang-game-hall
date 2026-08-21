package org.bouncycastle.x509;

public class ExtendedPKIXParameters extends java.security.cert.PKIXParameters {
    public static final int CHAIN_VALIDITY_MODEL = 1;
    public static final int PKIX_VALIDITY_MODEL = 0;
    private boolean additionalLocationsEnabled;
    private java.util.List additionalStores;
    private java.util.Set attrCertCheckers;
    private java.util.Set necessaryACAttributes;
    private java.util.Set prohibitedACAttributes;
    private org.bouncycastle.util.Selector selector;
    private java.util.List stores;
    private java.util.Set trustedACIssuers;
    private boolean useDeltas;
    private int validityModel;

    public ExtendedPKIXParameters(java.util.Set r1) throws java.security.InvalidAlgorithmParameterException {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.validityModel = r1
            r1 = 1
            r0.useDeltas = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.stores = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.additionalStores = r1
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            r0.trustedACIssuers = r1
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            r0.necessaryACAttributes = r1
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            r0.prohibitedACAttributes = r1
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            r0.attrCertCheckers = r1
            return
    }

    public static org.bouncycastle.x509.ExtendedPKIXParameters getInstance(java.security.cert.PKIXParameters r2) {
            org.bouncycastle.x509.ExtendedPKIXParameters r0 = new org.bouncycastle.x509.ExtendedPKIXParameters     // Catch: java.lang.Exception -> Ld
            java.util.Set r1 = r2.getTrustAnchors()     // Catch: java.lang.Exception -> Ld
            r0.<init>(r1)     // Catch: java.lang.Exception -> Ld
            r0.setParams(r2)
            return r0
        Ld:
            r2 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r2 = r2.getMessage()
            r0.<init>(r2)
            throw r0
    }

    public void addAddionalStore(org.bouncycastle.util.Store r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.List r0 = r1.additionalStores
            r0.add(r2)
        L7:
            return
    }

    public void addStore(org.bouncycastle.util.Store r2) {
            r1 = this;
            java.util.List r0 = r1.stores
            if (r0 == 0) goto L7
            r0.add(r2)
        L7:
            return
    }

    @Override
    public java.lang.Object clone() {
            r2 = this;
            org.bouncycastle.x509.ExtendedPKIXParameters r0 = new org.bouncycastle.x509.ExtendedPKIXParameters     // Catch: java.lang.Exception -> Ld
            java.util.Set r1 = r2.getTrustAnchors()     // Catch: java.lang.Exception -> Ld
            r0.<init>(r1)     // Catch: java.lang.Exception -> Ld
            r0.setParams(r2)
            return r0
        Ld:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r0 = r0.getMessage()
            r1.<init>(r0)
            throw r1
    }

    public java.util.List getAdditionalStores() {
            r1 = this;
            java.util.List r0 = r1.additionalStores
            java.util.List r0 = java.util.Collections.unmodifiableList(r0)
            return r0
    }

    public java.util.Set getAttrCertCheckers() {
            r1 = this;
            java.util.Set r0 = r1.attrCertCheckers
            java.util.Set r0 = java.util.Collections.unmodifiableSet(r0)
            return r0
    }

    public java.util.Set getNecessaryACAttributes() {
            r1 = this;
            java.util.Set r0 = r1.necessaryACAttributes
            java.util.Set r0 = java.util.Collections.unmodifiableSet(r0)
            return r0
    }

    public java.util.Set getProhibitedACAttributes() {
            r1 = this;
            java.util.Set r0 = r1.prohibitedACAttributes
            return r0
    }

    public java.util.List getStores() {
            r2 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List r1 = r2.stores
            r0.<init>(r1)
            java.util.List r0 = java.util.Collections.unmodifiableList(r0)
            return r0
    }

    public org.bouncycastle.util.Selector getTargetConstraints() {
            r1 = this;
            org.bouncycastle.util.Selector r0 = r1.selector
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r0.clone()
            org.bouncycastle.util.Selector r0 = (org.bouncycastle.util.Selector) r0
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public java.util.Set getTrustedACIssuers() {
            r1 = this;
            java.util.Set r0 = r1.trustedACIssuers
            java.util.Set r0 = java.util.Collections.unmodifiableSet(r0)
            return r0
    }

    public int getValidityModel() {
            r1 = this;
            int r0 = r1.validityModel
            return r0
    }

    public boolean isAdditionalLocationsEnabled() {
            r1 = this;
            boolean r0 = r1.additionalLocationsEnabled
            return r0
    }

    public boolean isUseDeltasEnabled() {
            r1 = this;
            boolean r0 = r1.useDeltas
            return r0
    }

    public void setAdditionalLocationsEnabled(boolean r1) {
            r0 = this;
            r0.additionalLocationsEnabled = r1
            return
    }

    public void setAttrCertCheckers(java.util.Set r3) {
            r2 = this;
            if (r3 != 0) goto L8
            java.util.Set r3 = r2.attrCertCheckers
            r3.clear()
            return
        L8:
            java.util.Iterator r0 = r3.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3d
            java.lang.Object r1 = r0.next()
            boolean r1 = r1 instanceof org.bouncycastle.x509.PKIXAttrCertChecker
            if (r1 == 0) goto L1b
            goto Lc
        L1b:
            java.lang.ClassCastException r3 = new java.lang.ClassCastException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "All elements of set must be of type "
            r0.append(r1)
            java.lang.Class<org.bouncycastle.x509.PKIXAttrCertChecker> r1 = org.bouncycastle.x509.PKIXAttrCertChecker.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = "."
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
        L3d:
            java.util.Set r0 = r2.attrCertCheckers
            r0.clear()
            java.util.Set r0 = r2.attrCertCheckers
            r0.addAll(r3)
            return
    }

    @Override
    public void setCertStores(java.util.List r2) {
            r1 = this;
            if (r2 == 0) goto L16
            java.util.Iterator r2 = r2.iterator()
        L6:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L16
            java.lang.Object r0 = r2.next()
            java.security.cert.CertStore r0 = (java.security.cert.CertStore) r0
            r1.addCertStore(r0)
            goto L6
        L16:
            return
    }

    public void setNecessaryACAttributes(java.util.Set r3) {
            r2 = this;
            if (r3 != 0) goto L8
            java.util.Set r3 = r2.necessaryACAttributes
            r3.clear()
            return
        L8:
            java.util.Iterator r0 = r3.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()
            boolean r1 = r1 instanceof java.lang.String
            if (r1 == 0) goto L1b
            goto Lc
        L1b:
            java.lang.ClassCastException r3 = new java.lang.ClassCastException
            java.lang.String r0 = "All elements of set must be of type String."
            r3.<init>(r0)
            throw r3
        L23:
            java.util.Set r0 = r2.necessaryACAttributes
            r0.clear()
            java.util.Set r0 = r2.necessaryACAttributes
            r0.addAll(r3)
            return
    }

    protected void setParams(java.security.cert.PKIXParameters r3) {
            r2 = this;
            java.util.Date r0 = r3.getDate()
            r2.setDate(r0)
            java.util.List r0 = r3.getCertPathCheckers()
            r2.setCertPathCheckers(r0)
            java.util.List r0 = r3.getCertStores()
            r2.setCertStores(r0)
            boolean r0 = r3.isAnyPolicyInhibited()
            r2.setAnyPolicyInhibited(r0)
            boolean r0 = r3.isExplicitPolicyRequired()
            r2.setExplicitPolicyRequired(r0)
            boolean r0 = r3.isPolicyMappingInhibited()
            r2.setPolicyMappingInhibited(r0)
            boolean r0 = r3.isRevocationEnabled()
            r2.setRevocationEnabled(r0)
            java.util.Set r0 = r3.getInitialPolicies()
            r2.setInitialPolicies(r0)
            boolean r0 = r3.getPolicyQualifiersRejected()
            r2.setPolicyQualifiersRejected(r0)
            java.lang.String r0 = r3.getSigProvider()
            r2.setSigProvider(r0)
            java.security.cert.CertSelector r0 = r3.getTargetCertConstraints()
            r2.setTargetCertConstraints(r0)
            java.util.Set r0 = r3.getTrustAnchors()     // Catch: java.lang.Exception -> Lab
            r2.setTrustAnchors(r0)     // Catch: java.lang.Exception -> Lab
            boolean r0 = r3 instanceof org.bouncycastle.x509.ExtendedPKIXParameters
            if (r0 == 0) goto Laa
            org.bouncycastle.x509.ExtendedPKIXParameters r3 = (org.bouncycastle.x509.ExtendedPKIXParameters) r3
            int r0 = r3.validityModel
            r2.validityModel = r0
            boolean r0 = r3.useDeltas
            r2.useDeltas = r0
            boolean r0 = r3.additionalLocationsEnabled
            r2.additionalLocationsEnabled = r0
            org.bouncycastle.util.Selector r0 = r3.selector
            if (r0 != 0) goto L6c
            r0 = 0
            goto L72
        L6c:
            java.lang.Object r0 = r0.clone()
            org.bouncycastle.util.Selector r0 = (org.bouncycastle.util.Selector) r0
        L72:
            r2.selector = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List r1 = r3.stores
            r0.<init>(r1)
            r2.stores = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List r1 = r3.additionalStores
            r0.<init>(r1)
            r2.additionalStores = r0
            java.util.HashSet r0 = new java.util.HashSet
            java.util.Set r1 = r3.trustedACIssuers
            r0.<init>(r1)
            r2.trustedACIssuers = r0
            java.util.HashSet r0 = new java.util.HashSet
            java.util.Set r1 = r3.prohibitedACAttributes
            r0.<init>(r1)
            r2.prohibitedACAttributes = r0
            java.util.HashSet r0 = new java.util.HashSet
            java.util.Set r1 = r3.necessaryACAttributes
            r0.<init>(r1)
            r2.necessaryACAttributes = r0
            java.util.HashSet r0 = new java.util.HashSet
            java.util.Set r3 = r3.attrCertCheckers
            r0.<init>(r3)
            r2.attrCertCheckers = r0
        Laa:
            return
        Lab:
            r3 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r3 = r3.getMessage()
            r0.<init>(r3)
            throw r0
    }

    public void setProhibitedACAttributes(java.util.Set r3) {
            r2 = this;
            if (r3 != 0) goto L8
            java.util.Set r3 = r2.prohibitedACAttributes
            r3.clear()
            return
        L8:
            java.util.Iterator r0 = r3.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()
            boolean r1 = r1 instanceof java.lang.String
            if (r1 == 0) goto L1b
            goto Lc
        L1b:
            java.lang.ClassCastException r3 = new java.lang.ClassCastException
            java.lang.String r0 = "All elements of set must be of type String."
            r3.<init>(r0)
            throw r3
        L23:
            java.util.Set r0 = r2.prohibitedACAttributes
            r0.clear()
            java.util.Set r0 = r2.prohibitedACAttributes
            r0.addAll(r3)
            return
    }

    public void setStores(java.util.List r3) {
            r2 = this;
            if (r3 != 0) goto La
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r2.stores = r3
            goto L2c
        La:
            java.util.Iterator r0 = r3.iterator()
        Le:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L25
            java.lang.Object r1 = r0.next()
            boolean r1 = r1 instanceof org.bouncycastle.util.Store
            if (r1 == 0) goto L1d
            goto Le
        L1d:
            java.lang.ClassCastException r3 = new java.lang.ClassCastException
            java.lang.String r0 = "All elements of list must be of type org.bouncycastle.util.Store."
            r3.<init>(r0)
            throw r3
        L25:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>(r3)
            r2.stores = r0
        L2c:
            return
    }

    @Override
    public void setTargetCertConstraints(java.security.cert.CertSelector r1) {
            r0 = this;
            super.setTargetCertConstraints(r1)
            if (r1 == 0) goto Lc
            java.security.cert.X509CertSelector r1 = (java.security.cert.X509CertSelector) r1
            org.bouncycastle.x509.X509CertStoreSelector r1 = org.bouncycastle.x509.X509CertStoreSelector.getInstance(r1)
            goto Ld
        Lc:
            r1 = 0
        Ld:
            r0.selector = r1
            return
    }

    public void setTargetConstraints(org.bouncycastle.util.Selector r1) {
            r0 = this;
            if (r1 == 0) goto L9
            java.lang.Object r1 = r1.clone()
            org.bouncycastle.util.Selector r1 = (org.bouncycastle.util.Selector) r1
            goto La
        L9:
            r1 = 0
        La:
            r0.selector = r1
            return
    }

    public void setTrustedACIssuers(java.util.Set r3) {
            r2 = this;
            if (r3 != 0) goto L6
            r3.clear()
            return
        L6:
            java.util.Iterator r0 = r3.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3b
            java.lang.Object r1 = r0.next()
            boolean r1 = r1 instanceof java.security.cert.TrustAnchor
            if (r1 == 0) goto L19
            goto La
        L19:
            java.lang.ClassCastException r3 = new java.lang.ClassCastException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "All elements of set must be of type "
            r0.append(r1)
            java.lang.Class<java.security.cert.TrustAnchor> r1 = java.security.cert.TrustAnchor.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r1 = "."
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r3.<init>(r0)
            throw r3
        L3b:
            java.util.Set r0 = r2.trustedACIssuers
            r0.clear()
            java.util.Set r0 = r2.trustedACIssuers
            r0.addAll(r3)
            return
    }

    public void setUseDeltasEnabled(boolean r1) {
            r0 = this;
            r0.useDeltas = r1
            return
    }

    public void setValidityModel(int r1) {
            r0 = this;
            r0.validityModel = r1
            return
    }
}
