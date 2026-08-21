package org.bouncycastle.jce.provider;

public class X509LDAPCertStoreSpi extends java.security.cert.CertStoreSpi {
    private static java.lang.String LDAP_PROVIDER = "com.sun.jndi.ldap.LdapCtxFactory";
    private static java.lang.String REFERRALS_IGNORE = "ignore";
    private static final java.lang.String SEARCH_SECURITY_LEVEL = "none";
    private static final java.lang.String URL_CONTEXT_PREFIX = "com.sun.jndi.url";
    private org.bouncycastle.jce.X509LDAPCertStoreParameters params;

    static {
            return
    }

    public X509LDAPCertStoreSpi(java.security.cert.CertStoreParameters r4) throws java.security.InvalidAlgorithmParameterException {
            r3 = this;
            r3.<init>(r4)
            boolean r0 = r4 instanceof org.bouncycastle.jce.X509LDAPCertStoreParameters
            if (r0 == 0) goto Lc
            org.bouncycastle.jce.X509LDAPCertStoreParameters r4 = (org.bouncycastle.jce.X509LDAPCertStoreParameters) r4
            r3.params = r4
            return
        Lc:
            java.security.InvalidAlgorithmParameterException r0 = new java.security.InvalidAlgorithmParameterException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "org.bouncycastle.jce.provider.LDAPCertStoreSpi: parameter must be a LDAPCertStoreParameters object\n"
            r1.append(r2)
            java.lang.String r4 = r4.toString()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    private java.util.Set certSubjectSerialSearch(java.security.cert.X509CertSelector r7, java.lang.String[] r8, java.lang.String r9, java.lang.String r10) throws java.security.cert.CertStoreException {
            r6 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            byte[] r1 = r7.getSubjectAsBytes()     // Catch: java.io.IOException -> La6
            java.lang.String r2 = "*"
            if (r1 != 0) goto L23
            java.lang.String r1 = r7.getSubjectAsString()     // Catch: java.io.IOException -> La6
            if (r1 != 0) goto L23
            java.security.cert.X509Certificate r1 = r7.getCertificate()     // Catch: java.io.IOException -> La6
            if (r1 == 0) goto L1a
            goto L23
        L1a:
            java.util.Set r7 = r6.search(r9, r2, r8)     // Catch: java.io.IOException -> La6
        L1e:
            r0.addAll(r7)     // Catch: java.io.IOException -> La6
            goto La5
        L23:
            r1 = 0
            java.security.cert.X509Certificate r3 = r7.getCertificate()     // Catch: java.io.IOException -> La6
            java.lang.String r4 = "RFC1779"
            if (r3 == 0) goto L45
            java.security.cert.X509Certificate r1 = r7.getCertificate()     // Catch: java.io.IOException -> La6
            javax.security.auth.x500.X500Principal r1 = r1.getSubjectX500Principal()     // Catch: java.io.IOException -> La6
            java.lang.String r1 = r1.getName(r4)     // Catch: java.io.IOException -> La6
            java.security.cert.X509Certificate r7 = r7.getCertificate()     // Catch: java.io.IOException -> La6
            java.math.BigInteger r7 = r7.getSerialNumber()     // Catch: java.io.IOException -> La6
            java.lang.String r7 = r7.toString()     // Catch: java.io.IOException -> La6
            goto L60
        L45:
            byte[] r3 = r7.getSubjectAsBytes()     // Catch: java.io.IOException -> La6
            if (r3 == 0) goto L59
            javax.security.auth.x500.X500Principal r3 = new javax.security.auth.x500.X500Principal     // Catch: java.io.IOException -> La6
            byte[] r7 = r7.getSubjectAsBytes()     // Catch: java.io.IOException -> La6
            r3.<init>(r7)     // Catch: java.io.IOException -> La6
            java.lang.String r7 = r3.getName(r4)     // Catch: java.io.IOException -> La6
            goto L5d
        L59:
            java.lang.String r7 = r7.getSubjectAsString()     // Catch: java.io.IOException -> La6
        L5d:
            r5 = r1
            r1 = r7
            r7 = r5
        L60:
            java.lang.String r10 = r6.parseDN(r1, r10)     // Catch: java.io.IOException -> La6
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.io.IOException -> La6
            r1.<init>()     // Catch: java.io.IOException -> La6
            r1.append(r2)     // Catch: java.io.IOException -> La6
            r1.append(r10)     // Catch: java.io.IOException -> La6
            r1.append(r2)     // Catch: java.io.IOException -> La6
            java.lang.String r10 = r1.toString()     // Catch: java.io.IOException -> La6
            java.util.Set r9 = r6.search(r9, r10, r8)     // Catch: java.io.IOException -> La6
            r0.addAll(r9)     // Catch: java.io.IOException -> La6
            if (r7 == 0) goto La5
            org.bouncycastle.jce.X509LDAPCertStoreParameters r9 = r6.params     // Catch: java.io.IOException -> La6
            java.lang.String r9 = r9.getSearchForSerialNumberIn()     // Catch: java.io.IOException -> La6
            if (r9 == 0) goto La5
            org.bouncycastle.jce.X509LDAPCertStoreParameters r9 = r6.params     // Catch: java.io.IOException -> La6
            java.lang.String r9 = r9.getSearchForSerialNumberIn()     // Catch: java.io.IOException -> La6
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.io.IOException -> La6
            r10.<init>()     // Catch: java.io.IOException -> La6
            r10.append(r2)     // Catch: java.io.IOException -> La6
            r10.append(r7)     // Catch: java.io.IOException -> La6
            r10.append(r2)     // Catch: java.io.IOException -> La6
            java.lang.String r7 = r10.toString()     // Catch: java.io.IOException -> La6
            java.util.Set r7 = r6.search(r9, r7, r8)     // Catch: java.io.IOException -> La6
            goto L1e
        La5:
            return r0
        La6:
            r7 = move-exception
            java.security.cert.CertStoreException r8 = new java.security.cert.CertStoreException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "exception processing selector: "
            r9.append(r10)
            r9.append(r7)
            java.lang.String r7 = r9.toString()
            r8.<init>(r7)
            throw r8
    }

    private javax.naming.directory.DirContext connectLDAP() throws javax.naming.NamingException {
            r3 = this;
            java.util.Properties r0 = new java.util.Properties
            r0.<init>()
            java.lang.String r1 = org.bouncycastle.jce.provider.X509LDAPCertStoreSpi.LDAP_PROVIDER
            java.lang.String r2 = "java.naming.factory.initial"
            r0.setProperty(r2, r1)
            java.lang.String r1 = "java.naming.batchsize"
            java.lang.String r2 = "0"
            r0.setProperty(r1, r2)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r3.params
            java.lang.String r1 = r1.getLdapURL()
            java.lang.String r2 = "java.naming.provider.url"
            r0.setProperty(r2, r1)
            java.lang.String r1 = "java.naming.factory.url.pkgs"
            java.lang.String r2 = "com.sun.jndi.url"
            r0.setProperty(r1, r2)
            java.lang.String r1 = org.bouncycastle.jce.provider.X509LDAPCertStoreSpi.REFERRALS_IGNORE
            java.lang.String r2 = "java.naming.referral"
            r0.setProperty(r2, r1)
            java.lang.String r1 = "java.naming.security.authentication"
            java.lang.String r2 = "none"
            r0.setProperty(r1, r2)
            javax.naming.directory.InitialDirContext r1 = new javax.naming.directory.InitialDirContext
            r1.<init>(r0)
            return r1
    }

    private java.util.Set getCACertificates(java.security.cert.X509CertSelector r4) throws java.security.cert.CertStoreException {
            r3 = this;
            r0 = 1
            java.lang.String[] r0 = new java.lang.String[r0]
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r3.params
            java.lang.String r1 = r1.getCACertificateAttribute()
            r2 = 0
            r0[r2] = r1
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r3.params
            java.lang.String r1 = r1.getLdapCACertificateAttributeName()
            org.bouncycastle.jce.X509LDAPCertStoreParameters r2 = r3.params
            java.lang.String r2 = r2.getCACertificateSubjectAttributeName()
            java.util.Set r4 = r3.certSubjectSerialSearch(r4, r0, r1, r2)
            boolean r1 = r4.isEmpty()
            if (r1 == 0) goto L2c
            r1 = 0
            java.lang.String r2 = "*"
            java.util.Set r0 = r3.search(r1, r2, r0)
            r4.addAll(r0)
        L2c:
            return r4
    }

    private java.util.Set getCrossCertificates(java.security.cert.X509CertSelector r4) throws java.security.cert.CertStoreException {
            r3 = this;
            r0 = 1
            java.lang.String[] r0 = new java.lang.String[r0]
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r3.params
            java.lang.String r1 = r1.getCrossCertificateAttribute()
            r2 = 0
            r0[r2] = r1
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r3.params
            java.lang.String r1 = r1.getLdapCrossCertificateAttributeName()
            org.bouncycastle.jce.X509LDAPCertStoreParameters r2 = r3.params
            java.lang.String r2 = r2.getCrossCertificateSubjectAttributeName()
            java.util.Set r4 = r3.certSubjectSerialSearch(r4, r0, r1, r2)
            boolean r1 = r4.isEmpty()
            if (r1 == 0) goto L2c
            r1 = 0
            java.lang.String r2 = "*"
            java.util.Set r0 = r3.search(r1, r2, r0)
            r4.addAll(r0)
        L2c:
            return r4
    }

    private java.util.Set getEndCertificates(java.security.cert.X509CertSelector r4) throws java.security.cert.CertStoreException {
            r3 = this;
            r0 = 1
            java.lang.String[] r0 = new java.lang.String[r0]
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r3.params
            java.lang.String r1 = r1.getUserCertificateAttribute()
            r2 = 0
            r0[r2] = r1
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r3.params
            java.lang.String r1 = r1.getLdapUserCertificateAttributeName()
            org.bouncycastle.jce.X509LDAPCertStoreParameters r2 = r3.params
            java.lang.String r2 = r2.getUserCertificateSubjectAttributeName()
            java.util.Set r4 = r3.certSubjectSerialSearch(r4, r0, r1, r2)
            return r4
    }

    private java.lang.String parseDN(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = r5.toLowerCase()
            java.lang.String r1 = r6.toLowerCase()
            int r0 = r0.indexOf(r1)
            int r6 = r6.length()
            int r0 = r0 + r6
            java.lang.String r5 = r5.substring(r0)
            r6 = 44
            int r0 = r5.indexOf(r6)
            r1 = -1
            if (r0 != r1) goto L22
        L1e:
            int r0 = r5.length()
        L22:
            int r2 = r0 + (-1)
            char r2 = r5.charAt(r2)
            r3 = 92
            if (r2 != r3) goto L35
            int r0 = r0 + 1
            int r0 = r5.indexOf(r6, r0)
            if (r0 != r1) goto L22
            goto L1e
        L35:
            r6 = 0
            java.lang.String r5 = r5.substring(r6, r0)
            r0 = 61
            int r0 = r5.indexOf(r0)
            r1 = 1
            int r0 = r0 + r1
            java.lang.String r5 = r5.substring(r0)
            char r0 = r5.charAt(r6)
            r2 = 32
            if (r0 != r2) goto L52
            java.lang.String r5 = r5.substring(r1)
        L52:
            java.lang.String r0 = "\""
            boolean r2 = r5.startsWith(r0)
            if (r2 == 0) goto L5e
            java.lang.String r5 = r5.substring(r1)
        L5e:
            boolean r0 = r5.endsWith(r0)
            if (r0 == 0) goto L6d
            int r0 = r5.length()
            int r0 = r0 - r1
            java.lang.String r5 = r5.substring(r6, r0)
        L6d:
            return r5
    }

    private java.util.Set search(java.lang.String r8, java.lang.String r9, java.lang.String[] r10) throws java.security.cert.CertStoreException {
            r7 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r8)
            java.lang.String r1 = "="
            r0.append(r1)
            r0.append(r9)
            java.lang.String r9 = r0.toString()
            r0 = 0
            if (r8 != 0) goto L18
            r9 = r0
        L18:
            java.util.HashSet r8 = new java.util.HashSet
            r8.<init>()
            javax.naming.directory.DirContext r0 = r7.connectLDAP()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            javax.naming.directory.SearchControls r1 = new javax.naming.directory.SearchControls     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            r1.<init>()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            r2 = 2
            r1.setSearchScope(r2)     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            r2 = 0
            r1.setCountLimit(r2)     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            r2 = 0
            r3 = 0
        L31:
            int r4 = r10.length     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            if (r3 >= r4) goto Lb1
            r4 = 1
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            r5 = r10[r3]     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            r4[r2] = r5     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            r1.setReturningAttributes(r4)     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            r5.<init>()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            java.lang.String r6 = "(&("
            r5.append(r6)     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            r5.append(r9)     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            java.lang.String r6 = ")("
            r5.append(r6)     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            r6 = r4[r2]     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            r5.append(r6)     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            java.lang.String r6 = "=*))"
            r5.append(r6)     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            if (r9 != 0) goto L78
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            r5.<init>()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            java.lang.String r6 = "("
            r5.append(r6)     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            r4 = r4[r2]     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            r5.append(r4)     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            java.lang.String r4 = "=*)"
            r5.append(r4)     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
        L78:
            org.bouncycastle.jce.X509LDAPCertStoreParameters r4 = r7.params     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            java.lang.String r4 = r4.getBaseDN()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            javax.naming.NamingEnumeration r4 = r0.search(r4, r5, r1)     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
        L82:
            boolean r5 = r4.hasMoreElements()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            if (r5 == 0) goto Lae
            java.lang.Object r5 = r4.next()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            javax.naming.directory.SearchResult r5 = (javax.naming.directory.SearchResult) r5     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            javax.naming.directory.Attributes r5 = r5.getAttributes()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            javax.naming.NamingEnumeration r5 = r5.getAll()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            java.lang.Object r5 = r5.next()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            javax.naming.directory.Attribute r5 = (javax.naming.directory.Attribute) r5     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            javax.naming.NamingEnumeration r5 = r5.getAll()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
        La0:
            boolean r6 = r5.hasMore()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            if (r6 == 0) goto L82
            java.lang.Object r6 = r5.next()     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            r8.add(r6)     // Catch: java.lang.Throwable -> Lb7 java.lang.Exception -> Lb9
            goto La0
        Lae:
            int r3 = r3 + 1
            goto L31
        Lb1:
            if (r0 == 0) goto Lb6
            r0.close()     // Catch: java.lang.Exception -> Lb6
        Lb6:
            return r8
        Lb7:
            r8 = move-exception
            goto Ld1
        Lb9:
            r8 = move-exception
            java.security.cert.CertStoreException r9 = new java.security.cert.CertStoreException     // Catch: java.lang.Throwable -> Lb7
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lb7
            r10.<init>()     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r1 = "Error getting results from LDAP directory "
            r10.append(r1)     // Catch: java.lang.Throwable -> Lb7
            r10.append(r8)     // Catch: java.lang.Throwable -> Lb7
            java.lang.String r8 = r10.toString()     // Catch: java.lang.Throwable -> Lb7
            r9.<init>(r8)     // Catch: java.lang.Throwable -> Lb7
            throw r9     // Catch: java.lang.Throwable -> Lb7
        Ld1:
            if (r0 == 0) goto Ld6
            r0.close()     // Catch: java.lang.Exception -> Ld6
        Ld6:
            throw r8
    }

    @Override
    public java.util.Collection engineGetCRLs(java.security.cert.CRLSelector r10) throws java.security.cert.CertStoreException {
            r9 = this;
            r0 = 1
            java.lang.String[] r0 = new java.lang.String[r0]
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r9.params
            java.lang.String r1 = r1.getCertificateRevocationListAttribute()
            r2 = 0
            r0[r2] = r1
            boolean r1 = r10 instanceof java.security.cert.X509CRLSelector
            if (r1 == 0) goto Ld1
            java.security.cert.X509CRLSelector r10 = (java.security.cert.X509CRLSelector) r10
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            org.bouncycastle.jce.X509LDAPCertStoreParameters r2 = r9.params
            java.lang.String r2 = r2.getLdapCertificateRevocationListAttributeName()
            java.util.HashSet r3 = new java.util.HashSet
            r3.<init>()
            java.util.Collection r4 = r10.getIssuerNames()
            java.lang.String r5 = "*"
            if (r4 == 0) goto L7c
            java.util.Collection r4 = r10.getIssuerNames()
            java.util.Iterator r4 = r4.iterator()
        L32:
            boolean r6 = r4.hasNext()
            if (r6 == 0) goto L83
            java.lang.Object r6 = r4.next()
            boolean r7 = r6 instanceof java.lang.String
            if (r7 == 0) goto L49
            org.bouncycastle.jce.X509LDAPCertStoreParameters r7 = r9.params
            java.lang.String r7 = r7.getCertificateRevocationListIssuerAttributeName()
            java.lang.String r6 = (java.lang.String) r6
            goto L5e
        L49:
            org.bouncycastle.jce.X509LDAPCertStoreParameters r7 = r9.params
            java.lang.String r7 = r7.getCertificateRevocationListIssuerAttributeName()
            javax.security.auth.x500.X500Principal r8 = new javax.security.auth.x500.X500Principal
            byte[] r6 = (byte[]) r6
            byte[] r6 = (byte[]) r6
            r8.<init>(r6)
            java.lang.String r6 = "RFC1779"
            java.lang.String r6 = r8.getName(r6)
        L5e:
            java.lang.String r6 = r9.parseDN(r6, r7)
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r5)
            r7.append(r6)
            r7.append(r5)
            java.lang.String r6 = r7.toString()
            java.util.Set r6 = r9.search(r2, r6, r0)
            r3.addAll(r6)
            goto L32
        L7c:
            java.util.Set r2 = r9.search(r2, r5, r0)
            r3.addAll(r2)
        L83:
            r2 = 0
            java.util.Set r0 = r9.search(r2, r5, r0)
            r3.addAll(r0)
            java.util.Iterator r0 = r3.iterator()
            java.lang.String r2 = "X.509"
            java.lang.String r3 = "BC"
            java.security.cert.CertificateFactory r2 = java.security.cert.CertificateFactory.getInstance(r2, r3)     // Catch: java.lang.Exception -> Lb9
        L97:
            boolean r3 = r0.hasNext()     // Catch: java.lang.Exception -> Lb9
            if (r3 == 0) goto Lb8
            java.io.ByteArrayInputStream r3 = new java.io.ByteArrayInputStream     // Catch: java.lang.Exception -> Lb9
            java.lang.Object r4 = r0.next()     // Catch: java.lang.Exception -> Lb9
            byte[] r4 = (byte[]) r4     // Catch: java.lang.Exception -> Lb9
            byte[] r4 = (byte[]) r4     // Catch: java.lang.Exception -> Lb9
            r3.<init>(r4)     // Catch: java.lang.Exception -> Lb9
            java.security.cert.CRL r3 = r2.generateCRL(r3)     // Catch: java.lang.Exception -> Lb9
            boolean r4 = r10.match(r3)     // Catch: java.lang.Exception -> Lb9
            if (r4 == 0) goto L97
            r1.add(r3)     // Catch: java.lang.Exception -> Lb9
            goto L97
        Lb8:
            return r1
        Lb9:
            r10 = move-exception
            java.security.cert.CertStoreException r0 = new java.security.cert.CertStoreException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "CRL cannot be constructed from LDAP result "
            r1.append(r2)
            r1.append(r10)
            java.lang.String r10 = r1.toString()
            r0.<init>(r10)
            throw r0
        Ld1:
            java.security.cert.CertStoreException r10 = new java.security.cert.CertStoreException
            java.lang.String r0 = "selector is not a X509CRLSelector"
            r10.<init>(r0)
            throw r10
    }

    @Override
    public java.util.Collection engineGetCertificates(java.security.cert.CertSelector r7) throws java.security.cert.CertStoreException {
            r6 = this;
            boolean r0 = r7 instanceof java.security.cert.X509CertSelector
            if (r0 == 0) goto Laf
            java.security.cert.X509CertSelector r7 = (java.security.cert.X509CertSelector) r7
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Set r1 = r6.getEndCertificates(r7)
            java.util.Set r2 = r6.getCACertificates(r7)
            r1.addAll(r2)
            java.util.Set r2 = r6.getCrossCertificates(r7)
            r1.addAll(r2)
            java.util.Iterator r1 = r1.iterator()
            java.lang.String r2 = "X.509"
            java.lang.String r3 = "BC"
            java.security.cert.CertificateFactory r2 = java.security.cert.CertificateFactory.getInstance(r2, r3)     // Catch: java.lang.Exception -> L97
        L29:
            boolean r3 = r1.hasNext()     // Catch: java.lang.Exception -> L97
            if (r3 == 0) goto L96
            java.lang.Object r3 = r1.next()     // Catch: java.lang.Exception -> L97
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Exception -> L97
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Exception -> L97
            java.util.ArrayList r4 = new java.util.ArrayList     // Catch: java.lang.Exception -> L97
            r4.<init>()     // Catch: java.lang.Exception -> L97
            r4.add(r3)     // Catch: java.lang.Exception -> L97
            org.bouncycastle.asn1.ASN1InputStream r5 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L97
            r5.<init>(r3)     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L97
            org.bouncycastle.asn1.DERObject r3 = r5.readObject()     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L97
            org.bouncycastle.asn1.x509.CertificatePair r3 = org.bouncycastle.asn1.x509.CertificatePair.getInstance(r3)     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L97
            r4.clear()     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L97
            org.bouncycastle.asn1.x509.X509CertificateStructure r5 = r3.getForward()     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L97
            if (r5 == 0) goto L60
            org.bouncycastle.asn1.x509.X509CertificateStructure r5 = r3.getForward()     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L97
            byte[] r5 = r5.getEncoded()     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L97
            r4.add(r5)     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L97
        L60:
            org.bouncycastle.asn1.x509.X509CertificateStructure r5 = r3.getReverse()     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L97
            if (r5 == 0) goto L71
            org.bouncycastle.asn1.x509.X509CertificateStructure r3 = r3.getReverse()     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L97
            byte[] r3 = r3.getEncoded()     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L97
            r4.add(r3)     // Catch: java.lang.Throwable -> L71 java.lang.Exception -> L97
        L71:
            java.util.Iterator r3 = r4.iterator()     // Catch: java.lang.Exception -> L97
        L75:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Exception -> L97
            if (r4 == 0) goto L29
            java.io.ByteArrayInputStream r4 = new java.io.ByteArrayInputStream     // Catch: java.lang.Exception -> L97
            java.lang.Object r5 = r3.next()     // Catch: java.lang.Exception -> L97
            byte[] r5 = (byte[]) r5     // Catch: java.lang.Exception -> L97
            byte[] r5 = (byte[]) r5     // Catch: java.lang.Exception -> L97
            r4.<init>(r5)     // Catch: java.lang.Exception -> L97
            java.security.cert.Certificate r4 = r2.generateCertificate(r4)     // Catch: java.lang.Exception -> L75
            boolean r5 = r7.match(r4)     // Catch: java.lang.Exception -> L75
            if (r5 == 0) goto L75
            r0.add(r4)     // Catch: java.lang.Exception -> L75
            goto L75
        L96:
            return r0
        L97:
            r7 = move-exception
            java.security.cert.CertStoreException r0 = new java.security.cert.CertStoreException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "certificate cannot be constructed from LDAP result: "
            r1.append(r2)
            r1.append(r7)
            java.lang.String r7 = r1.toString()
            r0.<init>(r7)
            throw r0
        Laf:
            java.security.cert.CertStoreException r7 = new java.security.cert.CertStoreException
            java.lang.String r0 = "selector is not a X509CertSelector"
            r7.<init>(r0)
            throw r7
    }
}
