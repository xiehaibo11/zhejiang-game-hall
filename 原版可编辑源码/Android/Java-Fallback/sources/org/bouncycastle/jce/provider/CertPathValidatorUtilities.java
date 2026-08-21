package org.bouncycastle.jce.provider;

public class CertPathValidatorUtilities {
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
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.CERTIFICATE_POLICIES = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.BasicConstraints
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.BASIC_CONSTRAINTS = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.PolicyMappings
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.POLICY_MAPPINGS = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.SubjectAlternativeName
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.SUBJECT_ALTERNATIVE_NAME = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.NameConstraints
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.NAME_CONSTRAINTS = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.KeyUsage
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.KEY_USAGE = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.InhibitAnyPolicy
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.INHIBIT_ANY_POLICY = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.IssuingDistributionPoint
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.ISSUING_DISTRIBUTION_POINT = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.DeltaCRLIndicator
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.DELTA_CRL_INDICATOR = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.PolicyConstraints
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.POLICY_CONSTRAINTS = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.FreshestCRL
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.FRESHEST_CRL = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.CRLDistributionPoints
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.CRL_DISTRIBUTION_POINTS = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.AuthorityKeyIdentifier
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.AUTHORITY_KEY_IDENTIFIER = r0
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.x509.X509Extensions.CRLNumber
            java.lang.String r0 = r0.getId()
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.CRL_NUMBER = r0
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
            org.bouncycastle.jce.provider.CertPathValidatorUtilities.crlReasons = r0
            return
    }

    public CertPathValidatorUtilities() {
            r0 = this;
            r0.<init>()
            return
    }

    protected static void addAdditionalStoreFromLocation(java.lang.String r6, org.bouncycastle.x509.ExtendedPKIXParameters r7) {
            java.lang.String r0 = "/"
            java.lang.String r1 = "ldap://"
            java.lang.String r2 = "BC"
            boolean r3 = r7.isAdditionalLocationsEnabled()
            if (r3 == 0) goto L85
            boolean r3 = r6.startsWith(r1)     // Catch: java.lang.Exception -> L7d
            if (r3 == 0) goto L85
            r3 = 7
            java.lang.String r6 = r6.substring(r3)     // Catch: java.lang.Exception -> L7d
            r3 = 0
            int r4 = r6.indexOf(r0)     // Catch: java.lang.Exception -> L7d
            r5 = -1
            if (r4 == r5) goto L40
            int r3 = r6.indexOf(r0)     // Catch: java.lang.Exception -> L7d
            java.lang.String r3 = r6.substring(r3)     // Catch: java.lang.Exception -> L7d
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7d
            r4.<init>()     // Catch: java.lang.Exception -> L7d
            r4.append(r1)     // Catch: java.lang.Exception -> L7d
            r1 = 0
            int r0 = r6.indexOf(r0)     // Catch: java.lang.Exception -> L7d
            java.lang.String r6 = r6.substring(r1, r0)     // Catch: java.lang.Exception -> L7d
            r4.append(r6)     // Catch: java.lang.Exception -> L7d
            java.lang.String r6 = r4.toString()     // Catch: java.lang.Exception -> L7d
            goto L4f
        L40:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7d
            r0.<init>()     // Catch: java.lang.Exception -> L7d
            r0.append(r1)     // Catch: java.lang.Exception -> L7d
            r0.append(r6)     // Catch: java.lang.Exception -> L7d
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Exception -> L7d
        L4f:
            org.bouncycastle.jce.X509LDAPCertStoreParameters$Builder r0 = new org.bouncycastle.jce.X509LDAPCertStoreParameters$Builder     // Catch: java.lang.Exception -> L7d
            r0.<init>(r6, r3)     // Catch: java.lang.Exception -> L7d
            org.bouncycastle.jce.X509LDAPCertStoreParameters r6 = r0.build()     // Catch: java.lang.Exception -> L7d
            java.lang.String r0 = "CERTIFICATE/LDAP"
            org.bouncycastle.x509.X509Store r0 = org.bouncycastle.x509.X509Store.getInstance(r0, r6, r2)     // Catch: java.lang.Exception -> L7d
            r7.addAddionalStore(r0)     // Catch: java.lang.Exception -> L7d
            java.lang.String r0 = "CRL/LDAP"
            org.bouncycastle.x509.X509Store r0 = org.bouncycastle.x509.X509Store.getInstance(r0, r6, r2)     // Catch: java.lang.Exception -> L7d
            r7.addAddionalStore(r0)     // Catch: java.lang.Exception -> L7d
            java.lang.String r0 = "ATTRIBUTECERTIFICATE/LDAP"
            org.bouncycastle.x509.X509Store r0 = org.bouncycastle.x509.X509Store.getInstance(r0, r6, r2)     // Catch: java.lang.Exception -> L7d
            r7.addAddionalStore(r0)     // Catch: java.lang.Exception -> L7d
            java.lang.String r0 = "CERTIFICATEPAIR/LDAP"
            org.bouncycastle.x509.X509Store r6 = org.bouncycastle.x509.X509Store.getInstance(r0, r6, r2)     // Catch: java.lang.Exception -> L7d
            r7.addAddionalStore(r6)     // Catch: java.lang.Exception -> L7d
            goto L85
        L7d:
            java.lang.RuntimeException r6 = new java.lang.RuntimeException
            java.lang.String r7 = "Exception adding X.509 stores."
            r6.<init>(r7)
            throw r6
        L85:
            return
    }

    protected static void addAdditionalStoresFromAltNames(java.security.cert.X509Certificate r4, org.bouncycastle.x509.ExtendedPKIXParameters r5) throws java.security.cert.CertificateParsingException {
            java.util.Collection r0 = r4.getIssuerAlternativeNames()
            if (r0 == 0) goto L36
            java.util.Collection r4 = r4.getIssuerAlternativeNames()
            java.util.Iterator r4 = r4.iterator()
        Le:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L36
            java.lang.Object r0 = r4.next()
            java.util.List r0 = (java.util.List) r0
            r1 = 0
            java.lang.Object r1 = r0.get(r1)
            java.lang.Integer r2 = new java.lang.Integer
            r3 = 6
            r2.<init>(r3)
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto Le
            r1 = 1
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r0 = (java.lang.String) r0
            addAdditionalStoreFromLocation(r0, r5)
            goto Le
        L36:
            return
    }

    protected static void addAdditionalStoresFromCRLDistributionPoint(org.bouncycastle.asn1.x509.CRLDistPoint r6, org.bouncycastle.x509.ExtendedPKIXParameters r7) throws org.bouncycastle.jce.provider.AnnotatedException {
            if (r6 == 0) goto L52
            org.bouncycastle.asn1.x509.DistributionPoint[] r6 = r6.getDistributionPoints()     // Catch: java.lang.Exception -> L49
            r0 = 0
            r1 = 0
        L8:
            int r2 = r6.length
            if (r1 >= r2) goto L52
            r2 = r6[r1]
            org.bouncycastle.asn1.x509.DistributionPointName r2 = r2.getDistributionPoint()
            if (r2 == 0) goto L46
            int r3 = r2.getType()
            if (r3 != 0) goto L46
            org.bouncycastle.asn1.ASN1Encodable r2 = r2.getName()
            org.bouncycastle.asn1.x509.GeneralNames r2 = org.bouncycastle.asn1.x509.GeneralNames.getInstance(r2)
            org.bouncycastle.asn1.x509.GeneralName[] r2 = r2.getNames()
            r3 = 0
        L26:
            int r4 = r2.length
            if (r3 >= r4) goto L46
            r4 = r2[r3]
            int r4 = r4.getTagNo()
            r5 = 6
            if (r4 != r5) goto L43
            r4 = r2[r3]
            org.bouncycastle.asn1.DEREncodable r4 = r4.getName()
            org.bouncycastle.asn1.DERIA5String r4 = org.bouncycastle.asn1.DERIA5String.getInstance(r4)
            java.lang.String r4 = r4.getString()
            addAdditionalStoreFromLocation(r4, r7)
        L43:
            int r3 = r3 + 1
            goto L26
        L46:
            int r1 = r1 + 1
            goto L8
        L49:
            r6 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r7 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r0 = "Distribution points could not be read."
            r7.<init>(r0, r6)
            throw r7
        L52:
            return
    }

    protected static final java.util.Collection findCRLs(org.bouncycastle.x509.X509CRLStoreSelector r7, java.util.List r8) throws org.bouncycastle.jce.provider.AnnotatedException {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Iterator r8 = r8.iterator()
            r1 = 0
            r2 = 0
        Lb:
            boolean r3 = r8.hasNext()
            if (r3 == 0) goto L40
            java.lang.Object r3 = r8.next()
            boolean r4 = r3 instanceof org.bouncycastle.x509.X509Store
            r5 = 1
            java.lang.String r6 = "Exception searching in X.509 CRL store."
            if (r4 == 0) goto L2f
            org.bouncycastle.x509.X509Store r3 = (org.bouncycastle.x509.X509Store) r3
            java.util.Collection r3 = r3.getMatches(r7)     // Catch: org.bouncycastle.util.StoreException -> L27
            r0.addAll(r3)     // Catch: org.bouncycastle.util.StoreException -> L27
        L25:
            r2 = 1
            goto Lb
        L27:
            r1 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r3 = new org.bouncycastle.jce.provider.AnnotatedException
            r3.<init>(r6, r1)
        L2d:
            r1 = r3
            goto Lb
        L2f:
            java.security.cert.CertStore r3 = (java.security.cert.CertStore) r3
            java.util.Collection r3 = r3.getCRLs(r7)     // Catch: java.security.cert.CertStoreException -> L39
            r0.addAll(r3)     // Catch: java.security.cert.CertStoreException -> L39
            goto L25
        L39:
            r1 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r3 = new org.bouncycastle.jce.provider.AnnotatedException
            r3.<init>(r6, r1)
            goto L2d
        L40:
            if (r2 != 0) goto L46
            if (r1 != 0) goto L45
            goto L46
        L45:
            throw r1
        L46:
            return r0
    }

    protected static java.util.Collection findCertificates(org.bouncycastle.x509.X509AttributeCertStoreSelector r3, java.util.List r4) throws org.bouncycastle.jce.provider.AnnotatedException {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Iterator r4 = r4.iterator()
        L9:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L2a
            java.lang.Object r1 = r4.next()
            boolean r2 = r1 instanceof org.bouncycastle.x509.X509Store
            if (r2 == 0) goto L9
            org.bouncycastle.x509.X509Store r1 = (org.bouncycastle.x509.X509Store) r1
            java.util.Collection r1 = r1.getMatches(r3)     // Catch: org.bouncycastle.util.StoreException -> L21
            r0.addAll(r1)     // Catch: org.bouncycastle.util.StoreException -> L21
            goto L9
        L21:
            r3 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r4 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r0 = "Problem while picking certificates from X.509 store."
            r4.<init>(r0, r3)
            throw r4
        L2a:
            return r0
    }

    protected static java.util.Collection findCertificates(org.bouncycastle.x509.X509CertStoreSelector r3, java.util.List r4) throws org.bouncycastle.jce.provider.AnnotatedException {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Iterator r4 = r4.iterator()
        L9:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L3d
            java.lang.Object r1 = r4.next()
            boolean r2 = r1 instanceof org.bouncycastle.x509.X509Store
            if (r2 == 0) goto L2a
            org.bouncycastle.x509.X509Store r1 = (org.bouncycastle.x509.X509Store) r1
            java.util.Collection r1 = r1.getMatches(r3)     // Catch: org.bouncycastle.util.StoreException -> L21
            r0.addAll(r1)     // Catch: org.bouncycastle.util.StoreException -> L21
            goto L9
        L21:
            r3 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r4 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r0 = "Problem while picking certificates from X.509 store."
            r4.<init>(r0, r3)
            throw r4
        L2a:
            java.security.cert.CertStore r1 = (java.security.cert.CertStore) r1
            java.util.Collection r1 = r1.getCertificates(r3)     // Catch: java.security.cert.CertStoreException -> L34
            r0.addAll(r1)     // Catch: java.security.cert.CertStoreException -> L34
            goto L9
        L34:
            r3 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r4 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r0 = "Problem while picking certificates from certificate store."
            r4.<init>(r0, r3)
            throw r4
        L3d:
            return r0
    }

    protected static java.util.Collection findIssuerCerts(java.security.cert.X509Certificate r3, org.bouncycastle.x509.ExtendedPKIXBuilderParameters r4) throws org.bouncycastle.jce.provider.AnnotatedException {
            org.bouncycastle.x509.X509CertStoreSelector r0 = new org.bouncycastle.x509.X509CertStoreSelector
            r0.<init>()
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            javax.security.auth.x500.X500Principal r3 = r3.getIssuerX500Principal()     // Catch: java.io.IOException -> L59
            byte[] r3 = r3.getEncoded()     // Catch: java.io.IOException -> L59
            r0.setSubject(r3)     // Catch: java.io.IOException -> L59
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L50
            r3.<init>()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L50
            java.util.List r2 = r4.getCertStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L50
            java.util.Collection r2 = findCertificates(r0, r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L50
            r3.addAll(r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L50
            java.util.List r2 = r4.getStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L50
            java.util.Collection r2 = findCertificates(r0, r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L50
            r3.addAll(r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L50
            java.util.List r4 = r4.getAdditionalStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L50
            java.util.Collection r4 = findCertificates(r0, r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L50
            r3.addAll(r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L50
            java.util.Iterator r3 = r3.iterator()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L50
        L3f:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L4f
            java.lang.Object r4 = r3.next()
            java.security.cert.X509Certificate r4 = (java.security.cert.X509Certificate) r4
            r1.add(r4)
            goto L3f
        L4f:
            return r1
        L50:
            r3 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r4 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r0 = "Issuer certificate cannot be searched."
            r4.<init>(r0, r3)
            throw r4
        L59:
            r3 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r4 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r0 = "Subject criteria for certificate selector to find issuer certificate could not be set."
            r4.<init>(r0, r3)
            throw r4
    }

    protected static java.security.cert.TrustAnchor findTrustAnchor(java.security.cert.X509Certificate r8, java.util.Set r9) throws org.bouncycastle.jce.provider.AnnotatedException {
            java.util.Iterator r9 = r9.iterator()
            java.security.cert.X509CertSelector r0 = new java.security.cert.X509CertSelector
            r0.<init>()
            javax.security.auth.x500.X500Principal r1 = getEncodedIssuerPrincipal(r8)     // Catch: java.io.IOException -> L7b
            byte[] r1 = r1.getEncoded()     // Catch: java.io.IOException -> L7b
            r0.setSubject(r1)     // Catch: java.io.IOException -> L7b
            r1 = 0
            r2 = r1
            r3 = r2
            r4 = r3
        L18:
            boolean r5 = r9.hasNext()
            if (r5 == 0) goto L6d
            if (r2 != 0) goto L6d
            java.lang.Object r2 = r9.next()
            java.security.cert.TrustAnchor r2 = (java.security.cert.TrustAnchor) r2
            java.security.cert.X509Certificate r5 = r2.getTrustedCert()
            if (r5 == 0) goto L3f
            java.security.cert.X509Certificate r5 = r2.getTrustedCert()
            boolean r5 = r0.match(r5)
            if (r5 == 0) goto L63
            java.security.cert.X509Certificate r4 = r2.getTrustedCert()
            java.security.PublicKey r4 = r4.getPublicKey()
            goto L64
        L3f:
            java.lang.String r5 = r2.getCAName()
            if (r5 == 0) goto L63
            java.security.PublicKey r5 = r2.getCAPublicKey()
            if (r5 == 0) goto L63
            javax.security.auth.x500.X500Principal r5 = getEncodedIssuerPrincipal(r8)     // Catch: java.lang.IllegalArgumentException -> L63
            javax.security.auth.x500.X500Principal r6 = new javax.security.auth.x500.X500Principal     // Catch: java.lang.IllegalArgumentException -> L63
            java.lang.String r7 = r2.getCAName()     // Catch: java.lang.IllegalArgumentException -> L63
            r6.<init>(r7)     // Catch: java.lang.IllegalArgumentException -> L63
            boolean r5 = r5.equals(r6)     // Catch: java.lang.IllegalArgumentException -> L63
            if (r5 == 0) goto L63
            java.security.PublicKey r4 = r2.getCAPublicKey()     // Catch: java.lang.IllegalArgumentException -> L63
            goto L64
        L63:
            r2 = r1
        L64:
            if (r4 == 0) goto L18
            r8.verify(r4)     // Catch: java.lang.Exception -> L6a
            goto L18
        L6a:
            r3 = move-exception
            r2 = r1
            goto L18
        L6d:
            if (r2 != 0) goto L7a
            if (r3 != 0) goto L72
            goto L7a
        L72:
            org.bouncycastle.jce.provider.AnnotatedException r8 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r9 = "TrustAnchor found but certificate validation failed."
            r8.<init>(r9, r3)
            throw r8
        L7a:
            return r2
        L7b:
            r8 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r9 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r0 = "Cannot set subject search criteria for trust anchor."
            r9.<init>(r0, r8)
            throw r9
    }

    protected static org.bouncycastle.asn1.x509.AlgorithmIdentifier getAlgorithmIdentifier(java.security.PublicKey r2) throws java.security.cert.CertPathValidatorException {
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L16
            byte[] r2 = r2.getEncoded()     // Catch: java.lang.Exception -> L16
            r0.<init>(r2)     // Catch: java.lang.Exception -> L16
            org.bouncycastle.asn1.DERObject r2 = r0.readObject()     // Catch: java.lang.Exception -> L16
            org.bouncycastle.asn1.x509.SubjectPublicKeyInfo r2 = org.bouncycastle.asn1.x509.SubjectPublicKeyInfo.getInstance(r2)     // Catch: java.lang.Exception -> L16
            org.bouncycastle.asn1.x509.AlgorithmIdentifier r2 = r2.getAlgorithmId()     // Catch: java.lang.Exception -> L16
            return r2
        L16:
            r2 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r0 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r1 = "Subject public key cannot be decoded."
            r0.<init>(r1, r2)
            throw r0
    }

    protected static void getCRLIssuersFromDistributionPoint(org.bouncycastle.asn1.x509.DistributionPoint r2, java.util.Collection r3, java.security.cert.X509CRLSelector r4, org.bouncycastle.x509.ExtendedPKIXParameters r5) throws org.bouncycastle.jce.provider.AnnotatedException {
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            org.bouncycastle.asn1.x509.GeneralNames r0 = r2.getCRLIssuer()
            if (r0 == 0) goto L43
            org.bouncycastle.asn1.x509.GeneralNames r2 = r2.getCRLIssuer()
            org.bouncycastle.asn1.x509.GeneralName[] r2 = r2.getNames()
            r3 = 0
        L14:
            int r0 = r2.length
            if (r3 >= r0) goto L5d
            r0 = r2[r3]
            int r0 = r0.getTagNo()
            r1 = 4
            if (r0 != r1) goto L40
            javax.security.auth.x500.X500Principal r0 = new javax.security.auth.x500.X500Principal     // Catch: java.io.IOException -> L37
            r1 = r2[r3]     // Catch: java.io.IOException -> L37
            org.bouncycastle.asn1.DEREncodable r1 = r1.getName()     // Catch: java.io.IOException -> L37
            org.bouncycastle.asn1.DERObject r1 = r1.getDERObject()     // Catch: java.io.IOException -> L37
            byte[] r1 = r1.getEncoded()     // Catch: java.io.IOException -> L37
            r0.<init>(r1)     // Catch: java.io.IOException -> L37
            r5.add(r0)     // Catch: java.io.IOException -> L37
            goto L40
        L37:
            r2 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r3 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r4 = "CRL issuer information from distribution point cannot be decoded."
            r3.<init>(r4, r2)
            throw r3
        L40:
            int r3 = r3 + 1
            goto L14
        L43:
            org.bouncycastle.asn1.x509.DistributionPointName r2 = r2.getDistributionPoint()
            if (r2 == 0) goto L7f
            java.util.Iterator r2 = r3.iterator()
        L4d:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L5d
            java.lang.Object r3 = r2.next()
            javax.security.auth.x500.X500Principal r3 = (javax.security.auth.x500.X500Principal) r3
            r5.add(r3)
            goto L4d
        L5d:
            java.util.Iterator r2 = r5.iterator()
        L61:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L7e
            java.lang.Object r3 = r2.next()     // Catch: java.io.IOException -> L75
            javax.security.auth.x500.X500Principal r3 = (javax.security.auth.x500.X500Principal) r3     // Catch: java.io.IOException -> L75
            byte[] r3 = r3.getEncoded()     // Catch: java.io.IOException -> L75
            r4.addIssuerName(r3)     // Catch: java.io.IOException -> L75
            goto L61
        L75:
            r2 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r3 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r4 = "Cannot decode CRL issuer information."
            r3.<init>(r4, r2)
            throw r3
        L7e:
            return
        L7f:
            org.bouncycastle.jce.provider.AnnotatedException r2 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r3 = "CRL issuer is omitted from distribution point but no distributionPoint field present."
            r2.<init>(r3)
            throw r2
    }

    protected static void getCertStatus(java.util.Date r5, java.security.cert.X509CRL r6, java.lang.Object r7, org.bouncycastle.jce.provider.CertStatus r8) throws org.bouncycastle.jce.provider.AnnotatedException {
            org.bouncycastle.jce.provider.X509CRLObject r0 = new org.bouncycastle.jce.provider.X509CRLObject     // Catch: java.lang.Exception -> Laf
            org.bouncycastle.asn1.x509.CertificateList r1 = new org.bouncycastle.asn1.x509.CertificateList     // Catch: java.lang.Exception -> Laf
            byte[] r2 = r6.getEncoded()     // Catch: java.lang.Exception -> Laf
            org.bouncycastle.asn1.ASN1Object r2 = org.bouncycastle.asn1.ASN1Sequence.fromByteArray(r2)     // Catch: java.lang.Exception -> Laf
            org.bouncycastle.asn1.ASN1Sequence r2 = (org.bouncycastle.asn1.ASN1Sequence) r2     // Catch: java.lang.Exception -> Laf
            r1.<init>(r2)     // Catch: java.lang.Exception -> Laf
            r0.<init>(r1)     // Catch: java.lang.Exception -> Laf
            java.math.BigInteger r1 = getSerialNumber(r7)
            java.security.cert.X509CRLEntry r0 = r0.getRevokedCertificate(r1)
            org.bouncycastle.jce.provider.X509CRLEntryObject r0 = (org.bouncycastle.jce.provider.X509CRLEntryObject) r0
            if (r0 == 0) goto Lae
            javax.security.auth.x500.X500Principal r1 = getEncodedIssuerPrincipal(r7)
            javax.security.auth.x500.X500Principal r2 = r0.getCertificateIssuer()
            boolean r1 = r1.equals(r2)
            if (r1 != 0) goto L3c
            javax.security.auth.x500.X500Principal r7 = getEncodedIssuerPrincipal(r7)
            javax.security.auth.x500.X500Principal r6 = getIssuerPrincipal(r6)
            boolean r6 = r7.equals(r6)
            if (r6 == 0) goto Lae
        L3c:
            r6 = 0
            boolean r7 = r0.hasExtensions()
            if (r7 == 0) goto L5a
            org.bouncycastle.asn1.DERObjectIdentifier r7 = org.bouncycastle.asn1.x509.X509Extensions.ReasonCode     // Catch: java.lang.Exception -> L52
            java.lang.String r7 = r7.getId()     // Catch: java.lang.Exception -> L52
            org.bouncycastle.asn1.DERObject r7 = getExtensionValue(r0, r7)     // Catch: java.lang.Exception -> L52
            org.bouncycastle.asn1.DEREnumerated r6 = org.bouncycastle.asn1.DEREnumerated.getInstance(r7)     // Catch: java.lang.Exception -> L52
            goto L5a
        L52:
            r7 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r1 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r2 = "Reason code CRL entry extension could not be decoded."
            r1.<init>(r2, r7)
        L5a:
            long r1 = r5.getTime()
            java.util.Date r5 = r0.getRevocationDate()
            long r3 = r5.getTime()
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 >= 0) goto L98
            if (r6 == 0) goto L98
            java.math.BigInteger r5 = r6.getValue()
            int r5 = r5.intValue()
            if (r5 == 0) goto L98
            java.math.BigInteger r5 = r6.getValue()
            int r5 = r5.intValue()
            r7 = 1
            if (r5 == r7) goto L98
            java.math.BigInteger r5 = r6.getValue()
            int r5 = r5.intValue()
            r7 = 2
            if (r5 == r7) goto L98
            java.math.BigInteger r5 = r6.getValue()
            int r5 = r5.intValue()
            r7 = 8
            if (r5 != r7) goto Lae
        L98:
            if (r6 == 0) goto La3
            java.math.BigInteger r5 = r6.getValue()
            int r5 = r5.intValue()
            goto La4
        La3:
            r5 = 0
        La4:
            r8.setCertStatus(r5)
            java.util.Date r5 = r0.getRevocationDate()
            r8.setRevocationDate(r5)
        Lae:
            return
        Laf:
            r5 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r6 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r7 = "Bouncy Castle X509CRLObject could not be created."
            r6.<init>(r7, r5)
            throw r6
    }

    protected static java.util.Set getCompleteCRLs(org.bouncycastle.asn1.x509.DistributionPoint r4, java.lang.Object r5, java.util.Date r6, org.bouncycastle.x509.ExtendedPKIXParameters r7) throws org.bouncycastle.jce.provider.AnnotatedException {
            org.bouncycastle.x509.X509CRLStoreSelector r0 = new org.bouncycastle.x509.X509CRLStoreSelector
            r0.<init>()
            java.util.HashSet r1 = new java.util.HashSet     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L29
            r1.<init>()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L29
            boolean r2 = r5 instanceof org.bouncycastle.x509.X509AttributeCertificate     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L29
            if (r2 == 0) goto L20
            r2 = r5
            org.bouncycastle.x509.X509AttributeCertificate r2 = (org.bouncycastle.x509.X509AttributeCertificate) r2     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L29
            org.bouncycastle.x509.AttributeCertificateIssuer r2 = r2.getIssuer()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L29
            java.security.Principal[] r2 = r2.getPrincipals()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L29
            r3 = 0
            r2 = r2[r3]     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L29
        L1c:
            r1.add(r2)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L29
            goto L25
        L20:
            javax.security.auth.x500.X500Principal r2 = getEncodedIssuerPrincipal(r5)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L29
            goto L1c
        L25:
            getCRLIssuersFromDistributionPoint(r4, r1, r0, r7)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L29
            goto L31
        L29:
            r4 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r1 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r2 = "Could not get issuer information from distribution point."
            r1.<init>(r2, r4)
        L31:
            boolean r4 = r5 instanceof java.security.cert.X509Certificate
            if (r4 == 0) goto L3b
            java.security.cert.X509Certificate r5 = (java.security.cert.X509Certificate) r5
            r0.setCertificateChecking(r5)
            goto L44
        L3b:
            boolean r4 = r5 instanceof org.bouncycastle.x509.X509AttributeCertificate
            if (r4 == 0) goto L44
            org.bouncycastle.x509.X509AttributeCertificate r5 = (org.bouncycastle.x509.X509AttributeCertificate) r5
            r0.setAttrCertificateChecking(r5)
        L44:
            java.util.Date r4 = r7.getDate()
            if (r4 == 0) goto L52
            java.util.Date r4 = r7.getDate()
            r0.setDateAndTime(r4)
            goto L55
        L52:
            r0.setDateAndTime(r6)
        L55:
            r4 = 1
            r0.setCompleteCRLEnabled(r4)
            java.util.HashSet r4 = new java.util.HashSet
            r4.<init>()
            java.util.List r5 = r7.getStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            java.util.Collection r5 = findCRLs(r0, r5)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            r4.addAll(r5)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            java.util.List r5 = r7.getAdditionalStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            java.util.Collection r5 = findCRLs(r0, r5)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            r4.addAll(r5)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            java.util.List r5 = r7.getCertStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            java.util.Collection r5 = findCRLs(r0, r5)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            r4.addAll(r5)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L8e
            boolean r5 = r4.isEmpty()
            if (r5 != 0) goto L86
            return r4
        L86:
            org.bouncycastle.jce.provider.AnnotatedException r4 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r5 = "No CRLs found."
            r4.<init>(r5)
            throw r4
        L8e:
            r4 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r5 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r6 = "Could not search for CRLs."
            r5.<init>(r6, r4)
            throw r5
    }

    protected static java.util.Set getDeltaCRLs(java.util.Date r3, org.bouncycastle.x509.ExtendedPKIXParameters r4, java.security.cert.X509CRL r5) throws org.bouncycastle.jce.provider.AnnotatedException {
            org.bouncycastle.x509.X509CRLStoreSelector r0 = new org.bouncycastle.x509.X509CRLStoreSelector
            r0.<init>()
            java.util.Date r1 = r4.getDate()
            if (r1 == 0) goto Lf
            java.util.Date r3 = r4.getDate()
        Lf:
            r0.setDateAndTime(r3)
            javax.security.auth.x500.X500Principal r3 = getIssuerPrincipal(r5)     // Catch: java.io.IOException -> L1e
            byte[] r3 = r3.getEncoded()     // Catch: java.io.IOException -> L1e
            r0.addIssuerName(r3)     // Catch: java.io.IOException -> L1e
            goto L26
        L1e:
            r3 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r1 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r2 = "Cannot extract issuer from CRL."
            r1.<init>(r2, r3)
        L26:
            java.lang.String r3 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.CRL_NUMBER     // Catch: java.lang.Exception -> L92
            org.bouncycastle.asn1.DERObject r3 = getExtensionValue(r5, r3)     // Catch: java.lang.Exception -> L92
            r1 = 0
            if (r3 == 0) goto L38
            org.bouncycastle.asn1.DERInteger r3 = org.bouncycastle.asn1.x509.CRLNumber.getInstance(r3)     // Catch: java.lang.Exception -> L92
            java.math.BigInteger r3 = r3.getPositiveValue()     // Catch: java.lang.Exception -> L92
            goto L39
        L38:
            r3 = r1
        L39:
            java.lang.String r2 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.ISSUING_DISTRIBUTION_POINT     // Catch: java.lang.Exception -> L89
            byte[] r5 = r5.getExtensionValue(r2)     // Catch: java.lang.Exception -> L89
            if (r3 != 0) goto L42
            goto L4c
        L42:
            r1 = 1
            java.math.BigInteger r1 = java.math.BigInteger.valueOf(r1)
            java.math.BigInteger r1 = r3.add(r1)
        L4c:
            r0.setMinCRLNumber(r1)
            r0.setIssuingDistributionPoint(r5)
            r5 = 1
            r0.setIssuingDistributionPointEnabled(r5)
            r0.setMaxBaseCRLNumber(r3)
            java.util.HashSet r3 = new java.util.HashSet
            r3.<init>()
            java.util.List r5 = r4.getAdditionalStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L80
            java.util.Collection r5 = findCRLs(r0, r5)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L80
            r3.addAll(r5)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L80
            java.util.List r5 = r4.getStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L80
            java.util.Collection r5 = findCRLs(r0, r5)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L80
            r3.addAll(r5)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L80
            java.util.List r4 = r4.getCertStores()     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L80
            java.util.Collection r4 = findCRLs(r0, r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L80
            r3.addAll(r4)     // Catch: org.bouncycastle.jce.provider.AnnotatedException -> L80
            return r3
        L80:
            r3 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r4 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r5 = "Could not search for delta CRLs."
            r4.<init>(r5, r3)
            throw r4
        L89:
            r3 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r4 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r5 = "Issuing distribution point extension value could not be read."
            r4.<init>(r5, r3)
            throw r4
        L92:
            r3 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r4 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r5 = "CRL number extension could not be extracted from CRL."
            r4.<init>(r5, r3)
            throw r4
    }

    protected static javax.security.auth.x500.X500Principal getEncodedIssuerPrincipal(java.lang.Object r1) {
            boolean r0 = r1 instanceof java.security.cert.X509Certificate
            if (r0 == 0) goto Lb
            java.security.cert.X509Certificate r1 = (java.security.cert.X509Certificate) r1
            javax.security.auth.x500.X500Principal r1 = r1.getIssuerX500Principal()
            return r1
        Lb:
            org.bouncycastle.x509.X509AttributeCertificate r1 = (org.bouncycastle.x509.X509AttributeCertificate) r1
            org.bouncycastle.x509.AttributeCertificateIssuer r1 = r1.getIssuer()
            java.security.Principal[] r1 = r1.getPrincipals()
            r0 = 0
            r1 = r1[r0]
            javax.security.auth.x500.X500Principal r1 = (javax.security.auth.x500.X500Principal) r1
            return r1
    }

    protected static org.bouncycastle.asn1.DERObject getExtensionValue(java.security.cert.X509Extension r0, java.lang.String r1) throws org.bouncycastle.jce.provider.AnnotatedException {
            byte[] r0 = r0.getExtensionValue(r1)
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            org.bouncycastle.asn1.DERObject r0 = getObject(r1, r0)
            return r0
    }

    protected static javax.security.auth.x500.X500Principal getIssuerPrincipal(java.security.cert.X509CRL r0) {
            javax.security.auth.x500.X500Principal r0 = r0.getIssuerX500Principal()
            return r0
    }

    protected static java.security.PublicKey getNextWorkingKey(java.util.List r4, int r5) throws java.security.cert.CertPathValidatorException {
            java.lang.Object r0 = r4.get(r5)
            java.security.cert.Certificate r0 = (java.security.cert.Certificate) r0
            java.security.PublicKey r0 = r0.getPublicKey()
            boolean r1 = r0 instanceof java.security.interfaces.DSAPublicKey
            if (r1 != 0) goto Lf
            return r0
        Lf:
            java.security.interfaces.DSAPublicKey r0 = (java.security.interfaces.DSAPublicKey) r0
            java.security.interfaces.DSAParams r1 = r0.getParams()
            if (r1 == 0) goto L18
            return r0
        L18:
            int r5 = r5 + 1
            int r1 = r4.size()
            java.lang.String r2 = "DSA parameters cannot be inherited from previous certificate."
            if (r5 >= r1) goto L70
            java.lang.Object r1 = r4.get(r5)
            java.security.cert.X509Certificate r1 = (java.security.cert.X509Certificate) r1
            java.security.PublicKey r1 = r1.getPublicKey()
            boolean r3 = r1 instanceof java.security.interfaces.DSAPublicKey
            if (r3 == 0) goto L6a
            java.security.interfaces.DSAPublicKey r1 = (java.security.interfaces.DSAPublicKey) r1
            java.security.interfaces.DSAParams r2 = r1.getParams()
            if (r2 != 0) goto L39
            goto L18
        L39:
            java.security.interfaces.DSAParams r4 = r1.getParams()
            java.security.spec.DSAPublicKeySpec r5 = new java.security.spec.DSAPublicKeySpec
            java.math.BigInteger r0 = r0.getY()
            java.math.BigInteger r1 = r4.getP()
            java.math.BigInteger r2 = r4.getQ()
            java.math.BigInteger r4 = r4.getG()
            r5.<init>(r0, r1, r2, r4)
            java.lang.String r4 = "DSA"
            java.lang.String r0 = "BC"
            java.security.KeyFactory r4 = java.security.KeyFactory.getInstance(r4, r0)     // Catch: java.lang.Exception -> L5f
            java.security.PublicKey r4 = r4.generatePublic(r5)     // Catch: java.lang.Exception -> L5f
            return r4
        L5f:
            r4 = move-exception
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            java.lang.String r4 = r4.getMessage()
            r5.<init>(r4)
            throw r5
        L6a:
            java.security.cert.CertPathValidatorException r4 = new java.security.cert.CertPathValidatorException
            r4.<init>(r2)
            throw r4
        L70:
            java.security.cert.CertPathValidatorException r4 = new java.security.cert.CertPathValidatorException
            r4.<init>(r2)
            throw r4
    }

    private static org.bouncycastle.asn1.DERObject getObject(java.lang.String r3, byte[] r4) throws org.bouncycastle.jce.provider.AnnotatedException {
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L19
            r0.<init>(r4)     // Catch: java.lang.Exception -> L19
            org.bouncycastle.asn1.DERObject r4 = r0.readObject()     // Catch: java.lang.Exception -> L19
            org.bouncycastle.asn1.ASN1OctetString r4 = (org.bouncycastle.asn1.ASN1OctetString) r4     // Catch: java.lang.Exception -> L19
            org.bouncycastle.asn1.ASN1InputStream r0 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Exception -> L19
            byte[] r4 = r4.getOctets()     // Catch: java.lang.Exception -> L19
            r0.<init>(r4)     // Catch: java.lang.Exception -> L19
            org.bouncycastle.asn1.DERObject r3 = r0.readObject()     // Catch: java.lang.Exception -> L19
            return r3
        L19:
            r4 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r0 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "exception processing extension "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3, r4)
            throw r0
    }

    protected static final java.util.Set getQualifierSet(org.bouncycastle.asn1.ASN1Sequence r5) throws java.security.cert.CertPathValidatorException {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            if (r5 != 0) goto L8
            return r0
        L8:
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
            org.bouncycastle.asn1.ASN1OutputStream r2 = new org.bouncycastle.asn1.ASN1OutputStream
            r2.<init>(r1)
            java.util.Enumeration r5 = r5.getObjects()
        L16:
            boolean r3 = r5.hasMoreElements()
            if (r3 == 0) goto L3c
            java.lang.Object r3 = r5.nextElement()     // Catch: java.io.IOException -> L33
            r2.writeObject(r3)     // Catch: java.io.IOException -> L33
            java.security.cert.PolicyQualifierInfo r3 = new java.security.cert.PolicyQualifierInfo     // Catch: java.io.IOException -> L33
            byte[] r4 = r1.toByteArray()     // Catch: java.io.IOException -> L33
            r3.<init>(r4)     // Catch: java.io.IOException -> L33
            r0.add(r3)     // Catch: java.io.IOException -> L33
            r1.reset()
            goto L16
        L33:
            r5 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r0 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r1 = "Policy qualifier info cannot be decoded."
            r0.<init>(r1, r5)
            throw r0
        L3c:
            return r0
    }

    private static java.math.BigInteger getSerialNumber(java.lang.Object r1) {
            boolean r0 = r1 instanceof java.security.cert.X509Certificate
            if (r0 == 0) goto Lb
            java.security.cert.X509Certificate r1 = (java.security.cert.X509Certificate) r1
            java.math.BigInteger r1 = r1.getSerialNumber()
            return r1
        Lb:
            org.bouncycastle.x509.X509AttributeCertificate r1 = (org.bouncycastle.x509.X509AttributeCertificate) r1
            java.math.BigInteger r1 = r1.getSerialNumber()
            return r1
    }

    protected static javax.security.auth.x500.X500Principal getSubjectPrincipal(java.security.cert.X509Certificate r0) {
            javax.security.auth.x500.X500Principal r0 = r0.getSubjectX500Principal()
            return r0
    }

    protected static java.util.Date getValidCertDateFromValidityModel(org.bouncycastle.x509.ExtendedPKIXParameters r2, java.security.cert.CertPath r3, int r4) throws org.bouncycastle.jce.provider.AnnotatedException {
            int r0 = r2.getValidityModel()
            r1 = 1
            if (r0 != r1) goto L50
            if (r4 > 0) goto Le
            java.util.Date r2 = getValidDate(r2)
            return r2
        Le:
            int r4 = r4 - r1
            if (r4 != 0) goto L39
            java.util.List r2 = r3.getCertificates()     // Catch: java.lang.IllegalArgumentException -> L48
            java.lang.Object r2 = r2.get(r4)     // Catch: java.lang.IllegalArgumentException -> L48
            java.security.cert.X509Certificate r2 = (java.security.cert.X509Certificate) r2     // Catch: java.lang.IllegalArgumentException -> L48
            org.bouncycastle.asn1.DERObjectIdentifier r0 = org.bouncycastle.asn1.isismtt.ISISMTTObjectIdentifiers.id_isismtt_at_dateOfCertGen     // Catch: java.lang.IllegalArgumentException -> L48
            java.lang.String r0 = r0.getId()     // Catch: java.lang.IllegalArgumentException -> L48
            byte[] r2 = r2.getExtensionValue(r0)     // Catch: java.lang.IllegalArgumentException -> L48
            org.bouncycastle.asn1.DERGeneralizedTime r2 = org.bouncycastle.asn1.DERGeneralizedTime.getInstance(r2)     // Catch: java.lang.IllegalArgumentException -> L48
            if (r2 == 0) goto L39
            java.util.Date r2 = r2.getDate()     // Catch: java.text.ParseException -> L30
            return r2
        L30:
            r2 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r3 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r4 = "Date from dat of cert gen extension could not be parsed."
            r3.<init>(r4, r2)
            throw r3
        L39:
            java.util.List r2 = r3.getCertificates()
            java.lang.Object r2 = r2.get(r4)
            java.security.cert.X509Certificate r2 = (java.security.cert.X509Certificate) r2
            java.util.Date r2 = r2.getNotBefore()
            return r2
        L48:
            org.bouncycastle.jce.provider.AnnotatedException r2 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r3 = "Date of cert gen extension could not be read."
            r2.<init>(r3)
            throw r2
        L50:
            java.util.Date r2 = getValidDate(r2)
            return r2
    }

    protected static java.util.Date getValidDate(java.security.cert.PKIXParameters r0) {
            java.util.Date r0 = r0.getDate()
            if (r0 != 0) goto Lb
            java.util.Date r0 = new java.util.Date
            r0.<init>()
        Lb:
            return r0
    }

    protected static boolean isAnyPolicy(java.util.Set r1) {
            if (r1 == 0) goto L13
            java.lang.String r0 = "2.5.29.32.0"
            boolean r0 = r1.contains(r0)
            if (r0 != 0) goto L13
            boolean r1 = r1.isEmpty()
            if (r1 == 0) goto L11
            goto L13
        L11:
            r1 = 0
            goto L14
        L13:
            r1 = 1
        L14:
            return r1
    }

    protected static boolean isSelfIssued(java.security.cert.X509Certificate r1) {
            java.security.Principal r0 = r1.getSubjectDN()
            java.security.Principal r1 = r1.getIssuerDN()
            boolean r1 = r0.equals(r1)
            return r1
    }

    protected static void prepareNextCertB1(int r9, java.util.List[] r10, java.lang.String r11, java.util.Map r12, java.security.cert.X509Certificate r13) throws org.bouncycastle.jce.provider.AnnotatedException, java.security.cert.CertPathValidatorException {
            r0 = r10[r9]
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            r2 = 0
            if (r1 == 0) goto L27
            java.lang.Object r1 = r0.next()
            org.bouncycastle.jce.provider.PKIXPolicyNode r1 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r1
            java.lang.String r3 = r1.getValidPolicy()
            boolean r3 = r3.equals(r11)
            if (r3 == 0) goto L6
            r0 = 1
            java.lang.Object r3 = r12.get(r11)
            java.util.Set r3 = (java.util.Set) r3
            r1.expectedPolicies = r3
            goto L28
        L27:
            r0 = 0
        L28:
            if (r0 != 0) goto Ld9
            r0 = r10[r9]
            java.util.Iterator r0 = r0.iterator()
        L30:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto Ld9
            java.lang.Object r1 = r0.next()
            org.bouncycastle.jce.provider.PKIXPolicyNode r1 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r1
            java.lang.String r3 = r1.getValidPolicy()
            java.lang.String r4 = "2.5.29.32.0"
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L30
            r0 = 0
            java.lang.String r3 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.CERTIFICATE_POLICIES     // Catch: java.lang.Exception -> Ld0
            org.bouncycastle.asn1.DERObject r3 = getExtensionValue(r13, r3)     // Catch: java.lang.Exception -> Ld0
            org.bouncycastle.asn1.ASN1Sequence r3 = org.bouncycastle.asn1.DERSequence.getInstance(r3)     // Catch: java.lang.Exception -> Ld0
            java.util.Enumeration r3 = r3.getObjects()
        L57:
            boolean r5 = r3.hasMoreElements()
            if (r5 == 0) goto L8e
            java.lang.Object r5 = r3.nextElement()     // Catch: java.lang.Exception -> L85
            org.bouncycastle.asn1.x509.PolicyInformation r5 = org.bouncycastle.asn1.x509.PolicyInformation.getInstance(r5)     // Catch: java.lang.Exception -> L85
            org.bouncycastle.asn1.DERObjectIdentifier r6 = r5.getPolicyIdentifier()
            java.lang.String r6 = r6.getId()
            boolean r6 = r4.equals(r6)
            if (r6 == 0) goto L57
            org.bouncycastle.asn1.ASN1Sequence r0 = r5.getPolicyQualifiers()     // Catch: java.security.cert.CertPathValidatorException -> L7c
            java.util.Set r0 = getQualifierSet(r0)     // Catch: java.security.cert.CertPathValidatorException -> L7c
            goto L8e
        L7c:
            r9 = move-exception
            org.bouncycastle.jce.exception.ExtCertPathValidatorException r10 = new org.bouncycastle.jce.exception.ExtCertPathValidatorException
            java.lang.String r11 = "Policy qualifier info set could not be built."
            r10.<init>(r11, r9)
            throw r10
        L85:
            r9 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r10 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r11 = "Policy information cannot be decoded."
            r10.<init>(r11, r9)
            throw r10
        L8e:
            r5 = r0
            java.util.Set r0 = r13.getCriticalExtensionOIDs()
            if (r0 == 0) goto La1
            java.util.Set r13 = r13.getCriticalExtensionOIDs()
            java.lang.String r0 = org.bouncycastle.jce.provider.CertPathValidatorUtilities.CERTIFICATE_POLICIES
            boolean r2 = r13.contains(r0)
            r7 = r2
            goto La2
        La1:
            r7 = 0
        La2:
            java.security.cert.PolicyNode r13 = r1.getParent()
            org.bouncycastle.jce.provider.PKIXPolicyNode r13 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r13
            java.lang.String r0 = r13.getValidPolicy()
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto Ld9
            org.bouncycastle.jce.provider.PKIXPolicyNode r8 = new org.bouncycastle.jce.provider.PKIXPolicyNode
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.lang.Object r12 = r12.get(r11)
            r3 = r12
            java.util.Set r3 = (java.util.Set) r3
            r0 = r8
            r2 = r9
            r4 = r13
            r6 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            r13.addChild(r8)
            r9 = r10[r9]
            r9.add(r8)
            goto Ld9
        Ld0:
            r9 = move-exception
            org.bouncycastle.jce.provider.AnnotatedException r10 = new org.bouncycastle.jce.provider.AnnotatedException
            java.lang.String r11 = "Certificate policies cannot be decoded."
            r10.<init>(r11, r9)
            throw r10
        Ld9:
            return
    }

    protected static org.bouncycastle.jce.provider.PKIXPolicyNode prepareNextCertB2(int r6, java.util.List[] r7, java.lang.String r8, org.bouncycastle.jce.provider.PKIXPolicyNode r9) {
            r0 = r7[r6]
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L4e
            java.lang.Object r1 = r0.next()
            org.bouncycastle.jce.provider.PKIXPolicyNode r1 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r1
            java.lang.String r2 = r1.getValidPolicy()
            boolean r2 = r2.equals(r8)
            if (r2 == 0) goto L6
            java.security.cert.PolicyNode r2 = r1.getParent()
            org.bouncycastle.jce.provider.PKIXPolicyNode r2 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r2
            r2.removeChild(r1)
            r0.remove()
            int r1 = r6 + (-1)
        L2a:
            if (r1 < 0) goto L6
            r2 = r7[r1]
            r3 = 0
        L2f:
            int r4 = r2.size()
            if (r3 >= r4) goto L4b
            java.lang.Object r4 = r2.get(r3)
            org.bouncycastle.jce.provider.PKIXPolicyNode r4 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r4
            boolean r5 = r4.hasChildren()
            if (r5 != 0) goto L48
            org.bouncycastle.jce.provider.PKIXPolicyNode r9 = removePolicyNode(r9, r7, r4)
            if (r9 != 0) goto L48
            goto L4b
        L48:
            int r3 = r3 + 1
            goto L2f
        L4b:
            int r1 = r1 + (-1)
            goto L2a
        L4e:
            return r9
    }

    protected static boolean processCertD1i(int r12, java.util.List[] r13, org.bouncycastle.asn1.DERObjectIdentifier r14, java.util.Set r15) {
            int r0 = r12 + (-1)
            r0 = r13[r0]
            r1 = 0
            r2 = 0
        L6:
            int r3 = r0.size()
            if (r2 >= r3) goto L4c
            java.lang.Object r3 = r0.get(r2)
            org.bouncycastle.jce.provider.PKIXPolicyNode r3 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r3
            java.util.Set r4 = r3.getExpectedPolicies()
            java.lang.String r5 = r14.getId()
            boolean r4 = r4.contains(r5)
            if (r4 == 0) goto L49
            java.util.HashSet r7 = new java.util.HashSet
            r7.<init>()
            java.lang.String r0 = r14.getId()
            r7.add(r0)
            org.bouncycastle.jce.provider.PKIXPolicyNode r0 = new org.bouncycastle.jce.provider.PKIXPolicyNode
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            java.lang.String r10 = r14.getId()
            r11 = 0
            r4 = r0
            r6 = r12
            r8 = r3
            r9 = r15
            r4.<init>(r5, r6, r7, r8, r9, r10, r11)
            r3.addChild(r0)
            r12 = r13[r12]
            r12.add(r0)
            r12 = 1
            return r12
        L49:
            int r2 = r2 + 1
            goto L6
        L4c:
            return r1
    }

    protected static void processCertD1ii(int r11, java.util.List[] r12, org.bouncycastle.asn1.DERObjectIdentifier r13, java.util.Set r14) {
            int r0 = r11 + (-1)
            r0 = r12[r0]
            r1 = 0
        L5:
            int r2 = r0.size()
            if (r1 >= r2) goto L4b
            java.lang.Object r2 = r0.get(r1)
            org.bouncycastle.jce.provider.PKIXPolicyNode r2 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r2
            r2.getExpectedPolicies()
            java.lang.String r3 = r2.getValidPolicy()
            java.lang.String r4 = "2.5.29.32.0"
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L48
            java.util.HashSet r6 = new java.util.HashSet
            r6.<init>()
            java.lang.String r0 = r13.getId()
            r6.add(r0)
            org.bouncycastle.jce.provider.PKIXPolicyNode r0 = new org.bouncycastle.jce.provider.PKIXPolicyNode
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            java.lang.String r9 = r13.getId()
            r10 = 0
            r3 = r0
            r5 = r11
            r7 = r2
            r8 = r14
            r3.<init>(r4, r5, r6, r7, r8, r9, r10)
            r2.addChild(r0)
            r11 = r12[r11]
            r11.add(r0)
            return
        L48:
            int r1 = r1 + 1
            goto L5
        L4b:
            return
    }

    protected static org.bouncycastle.jce.provider.PKIXPolicyNode removePolicyNode(org.bouncycastle.jce.provider.PKIXPolicyNode r2, java.util.List[] r3, org.bouncycastle.jce.provider.PKIXPolicyNode r4) {
            java.security.cert.PolicyNode r0 = r4.getParent()
            org.bouncycastle.jce.provider.PKIXPolicyNode r0 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r0
            r1 = 0
            if (r2 != 0) goto La
            return r1
        La:
            if (r0 != 0) goto L1b
            r2 = 0
        Ld:
            int r4 = r3.length
            if (r2 >= r4) goto L1a
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            r3[r2] = r4
            int r2 = r2 + 1
            goto Ld
        L1a:
            return r1
        L1b:
            r0.removeChild(r4)
            removePolicyNodeRecurse(r3, r4)
            return r2
    }

    private static void removePolicyNodeRecurse(java.util.List[] r1, org.bouncycastle.jce.provider.PKIXPolicyNode r2) {
            int r0 = r2.getDepth()
            r0 = r1[r0]
            r0.remove(r2)
            boolean r0 = r2.hasChildren()
            if (r0 == 0) goto L23
            java.util.Iterator r2 = r2.getChildren()
        L13:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L23
            java.lang.Object r0 = r2.next()
            org.bouncycastle.jce.provider.PKIXPolicyNode r0 = (org.bouncycastle.jce.provider.PKIXPolicyNode) r0
            removePolicyNodeRecurse(r1, r0)
            goto L13
        L23:
            return
    }
}
