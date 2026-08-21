package org.bouncycastle.x509.util;

public class LDAPStoreHelper {
    private static java.lang.String LDAP_PROVIDER = "com.sun.jndi.ldap.LdapCtxFactory";
    private static java.lang.String REFERRALS_IGNORE = "ignore";
    private static final java.lang.String SEARCH_SECURITY_LEVEL = "none";
    private static final java.lang.String URL_CONTEXT_PREFIX = "com.sun.jndi.url";
    private static int cacheSize = 32;
    private static long lifeTime = 60000;
    private java.util.Map cacheMap;
    private org.bouncycastle.jce.X509LDAPCertStoreParameters params;

    static {
            return
    }

    public LDAPStoreHelper(org.bouncycastle.jce.X509LDAPCertStoreParameters r3) {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            int r1 = org.bouncycastle.x509.util.LDAPStoreHelper.cacheSize
            r0.<init>(r1)
            r2.cacheMap = r0
            r2.params = r3
            return
    }

    private synchronized void addToCache(java.lang.String r9, java.util.List r10) {
            r8 = this;
            monitor-enter(r8)
            java.sql.Date r0 = new java.sql.Date     // Catch: java.lang.Throwable -> L6d
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L6d
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L6d
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L6d
            r1.<init>()     // Catch: java.lang.Throwable -> L6d
            r1.add(r0)     // Catch: java.lang.Throwable -> L6d
            r1.add(r10)     // Catch: java.lang.Throwable -> L6d
            java.util.Map r10 = r8.cacheMap     // Catch: java.lang.Throwable -> L6d
            boolean r10 = r10.containsKey(r9)     // Catch: java.lang.Throwable -> L6d
            if (r10 == 0) goto L23
            java.util.Map r10 = r8.cacheMap     // Catch: java.lang.Throwable -> L6d
        L1f:
            r10.put(r9, r1)     // Catch: java.lang.Throwable -> L6d
            goto L6b
        L23:
            java.util.Map r10 = r8.cacheMap     // Catch: java.lang.Throwable -> L6d
            int r10 = r10.size()     // Catch: java.lang.Throwable -> L6d
            int r2 = org.bouncycastle.x509.util.LDAPStoreHelper.cacheSize     // Catch: java.lang.Throwable -> L6d
            if (r10 < r2) goto L68
            java.util.Map r10 = r8.cacheMap     // Catch: java.lang.Throwable -> L6d
            java.util.Set r10 = r10.entrySet()     // Catch: java.lang.Throwable -> L6d
            java.util.Iterator r10 = r10.iterator()     // Catch: java.lang.Throwable -> L6d
            long r2 = r0.getTime()     // Catch: java.lang.Throwable -> L6d
            r0 = 0
        L3c:
            boolean r4 = r10.hasNext()     // Catch: java.lang.Throwable -> L6d
            if (r4 == 0) goto L63
            java.lang.Object r4 = r10.next()     // Catch: java.lang.Throwable -> L6d
            java.util.Map$Entry r4 = (java.util.Map.Entry) r4     // Catch: java.lang.Throwable -> L6d
            java.lang.Object r5 = r4.getValue()     // Catch: java.lang.Throwable -> L6d
            java.util.List r5 = (java.util.List) r5     // Catch: java.lang.Throwable -> L6d
            r6 = 0
            java.lang.Object r5 = r5.get(r6)     // Catch: java.lang.Throwable -> L6d
            java.sql.Date r5 = (java.sql.Date) r5     // Catch: java.lang.Throwable -> L6d
            long r5 = r5.getTime()     // Catch: java.lang.Throwable -> L6d
            int r7 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r7 >= 0) goto L3c
            java.lang.Object r0 = r4.getKey()     // Catch: java.lang.Throwable -> L6d
            r2 = r5
            goto L3c
        L63:
            java.util.Map r10 = r8.cacheMap     // Catch: java.lang.Throwable -> L6d
            r10.remove(r0)     // Catch: java.lang.Throwable -> L6d
        L68:
            java.util.Map r10 = r8.cacheMap     // Catch: java.lang.Throwable -> L6d
            goto L1f
        L6b:
            monitor-exit(r8)
            return
        L6d:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    private java.util.List attrCertSubjectSerialSearch(org.bouncycastle.x509.X509AttributeCertStoreSelector r7, java.lang.String[] r8, java.lang.String[] r9, java.lang.String[] r10) throws org.bouncycastle.util.StoreException {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            org.bouncycastle.x509.AttributeCertificateHolder r2 = r7.getHolder()
            r3 = 0
            if (r2 == 0) goto L3d
            org.bouncycastle.x509.AttributeCertificateHolder r2 = r7.getHolder()
            java.math.BigInteger r2 = r2.getSerialNumber()
            if (r2 == 0) goto L2a
            org.bouncycastle.x509.AttributeCertificateHolder r2 = r7.getHolder()
            java.math.BigInteger r2 = r2.getSerialNumber()
            java.lang.String r2 = r2.toString()
            r1.add(r2)
        L2a:
            org.bouncycastle.x509.AttributeCertificateHolder r2 = r7.getHolder()
            java.security.Principal[] r2 = r2.getEntityNames()
            if (r2 == 0) goto L3d
            org.bouncycastle.x509.AttributeCertificateHolder r2 = r7.getHolder()
            java.security.Principal[] r2 = r2.getEntityNames()
            goto L3e
        L3d:
            r2 = r3
        L3e:
            org.bouncycastle.x509.X509AttributeCertificate r4 = r7.getAttributeCert()
            if (r4 == 0) goto L6d
            org.bouncycastle.x509.X509AttributeCertificate r4 = r7.getAttributeCert()
            org.bouncycastle.x509.AttributeCertificateHolder r4 = r4.getHolder()
            java.security.Principal[] r4 = r4.getEntityNames()
            if (r4 == 0) goto L5e
            org.bouncycastle.x509.X509AttributeCertificate r2 = r7.getAttributeCert()
            org.bouncycastle.x509.AttributeCertificateHolder r2 = r2.getHolder()
            java.security.Principal[] r2 = r2.getEntityNames()
        L5e:
            org.bouncycastle.x509.X509AttributeCertificate r4 = r7.getAttributeCert()
            java.math.BigInteger r4 = r4.getSerialNumber()
            java.lang.String r4 = r4.toString()
            r1.add(r4)
        L6d:
            r4 = 0
            if (r2 == 0) goto L87
            r3 = r2[r4]
            boolean r3 = r3 instanceof javax.security.auth.x500.X500Principal
            if (r3 == 0) goto L81
            r2 = r2[r4]
            javax.security.auth.x500.X500Principal r2 = (javax.security.auth.x500.X500Principal) r2
            java.lang.String r3 = "RFC1779"
            java.lang.String r3 = r2.getName(r3)
            goto L87
        L81:
            r2 = r2[r4]
            java.lang.String r3 = r2.getName()
        L87:
            java.math.BigInteger r2 = r7.getSerialNumber()
            if (r2 == 0) goto L98
            java.math.BigInteger r7 = r7.getSerialNumber()
            java.lang.String r7 = r7.toString()
            r1.add(r7)
        L98:
            java.lang.String r7 = "*"
            if (r3 == 0) goto Lc1
        L9c:
            int r2 = r10.length
            if (r4 >= r2) goto Lc1
            r2 = r10[r4]
            java.lang.String r2 = r6.parseDN(r3, r2)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r7)
            r5.append(r2)
            r5.append(r7)
            java.lang.String r2 = r5.toString()
            java.util.List r2 = r6.search(r9, r2, r8)
            r0.addAll(r2)
            int r4 = r4 + 1
            goto L9c
        Lc1:
            int r10 = r1.size()
            if (r10 <= 0) goto Lf1
            org.bouncycastle.jce.X509LDAPCertStoreParameters r10 = r6.params
            java.lang.String r10 = r10.getSearchForSerialNumberIn()
            if (r10 == 0) goto Lf1
            java.util.Iterator r10 = r1.iterator()
        Ld3:
            boolean r2 = r10.hasNext()
            if (r2 == 0) goto Lf1
            java.lang.Object r2 = r10.next()
            java.lang.String r2 = (java.lang.String) r2
            org.bouncycastle.jce.X509LDAPCertStoreParameters r4 = r6.params
            java.lang.String r4 = r4.getSearchForSerialNumberIn()
            java.lang.String[] r4 = r6.splitString(r4)
            java.util.List r2 = r6.search(r4, r2, r8)
            r0.addAll(r2)
            goto Ld3
        Lf1:
            int r10 = r1.size()
            if (r10 != 0) goto L100
            if (r3 != 0) goto L100
            java.util.List r7 = r6.search(r9, r7, r8)
            r0.addAll(r7)
        L100:
            return r0
    }

    private java.util.List cRLIssuerSearch(org.bouncycastle.x509.X509CRLStoreSelector r8, java.lang.String[] r9, java.lang.String[] r10, java.lang.String[] r11) throws org.bouncycastle.util.StoreException {
            r7 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.HashSet r1 = new java.util.HashSet
            r1.<init>()
            java.util.Collection r2 = r8.getIssuers()
            if (r2 == 0) goto L17
            java.util.Collection r2 = r8.getIssuers()
            r1.addAll(r2)
        L17:
            java.security.cert.X509Certificate r2 = r8.getCertificateChecking()
            if (r2 == 0) goto L28
            java.security.cert.X509Certificate r2 = r8.getCertificateChecking()
            javax.security.auth.x500.X500Principal r2 = r7.getCertificateIssuer(r2)
            r1.add(r2)
        L28:
            org.bouncycastle.x509.X509AttributeCertificate r2 = r8.getAttrCertificateChecking()
            r3 = 0
            if (r2 == 0) goto L4d
            org.bouncycastle.x509.X509AttributeCertificate r8 = r8.getAttrCertificateChecking()
            org.bouncycastle.x509.AttributeCertificateIssuer r8 = r8.getIssuer()
            java.security.Principal[] r8 = r8.getPrincipals()
            r2 = 0
        L3c:
            int r4 = r8.length
            if (r2 >= r4) goto L4d
            r4 = r8[r2]
            boolean r4 = r4 instanceof javax.security.auth.x500.X500Principal
            if (r4 == 0) goto L4a
            r4 = r8[r2]
            r1.add(r4)
        L4a:
            int r2 = r2 + 1
            goto L3c
        L4d:
            java.util.Iterator r8 = r1.iterator()
            r1 = 0
        L52:
            boolean r2 = r8.hasNext()
            java.lang.String r4 = "*"
            if (r2 == 0) goto L8c
            java.lang.Object r1 = r8.next()
            javax.security.auth.x500.X500Principal r1 = (javax.security.auth.x500.X500Principal) r1
            java.lang.String r2 = "RFC1779"
            java.lang.String r1 = r1.getName(r2)
            r2 = 0
        L67:
            int r5 = r11.length
            if (r2 >= r5) goto L52
            r5 = r11[r2]
            java.lang.String r5 = r7.parseDN(r1, r5)
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r4)
            r6.append(r5)
            r6.append(r4)
            java.lang.String r5 = r6.toString()
            java.util.List r5 = r7.search(r10, r5, r9)
            r0.addAll(r5)
            int r2 = r2 + 1
            goto L67
        L8c:
            if (r1 != 0) goto L95
            java.util.List r8 = r7.search(r10, r4, r9)
            r0.addAll(r8)
        L95:
            return r0
    }

    private java.util.List certSubjectSerialSearch(org.bouncycastle.x509.X509CertStoreSelector r7, java.lang.String[] r8, java.lang.String[] r9, java.lang.String[] r10) throws org.bouncycastle.util.StoreException {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = r6.getSubjectAsString(r7)
            java.math.BigInteger r2 = r7.getSerialNumber()
            if (r2 == 0) goto L18
            java.math.BigInteger r2 = r7.getSerialNumber()
            java.lang.String r2 = r2.toString()
            goto L19
        L18:
            r2 = 0
        L19:
            java.security.cert.X509Certificate r3 = r7.getCertificate()
            if (r3 == 0) goto L39
            java.security.cert.X509Certificate r1 = r7.getCertificate()
            javax.security.auth.x500.X500Principal r1 = r1.getSubjectX500Principal()
            java.lang.String r2 = "RFC1779"
            java.lang.String r1 = r1.getName(r2)
            java.security.cert.X509Certificate r7 = r7.getCertificate()
            java.math.BigInteger r7 = r7.getSerialNumber()
            java.lang.String r2 = r7.toString()
        L39:
            java.lang.String r7 = "*"
            if (r1 == 0) goto L63
            r3 = 0
        L3e:
            int r4 = r10.length
            if (r3 >= r4) goto L63
            r4 = r10[r3]
            java.lang.String r4 = r6.parseDN(r1, r4)
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r7)
            r5.append(r4)
            r5.append(r7)
            java.lang.String r4 = r5.toString()
            java.util.List r4 = r6.search(r9, r4, r8)
            r0.addAll(r4)
            int r3 = r3 + 1
            goto L3e
        L63:
            if (r2 == 0) goto L7e
            org.bouncycastle.jce.X509LDAPCertStoreParameters r10 = r6.params
            java.lang.String r10 = r10.getSearchForSerialNumberIn()
            if (r10 == 0) goto L7e
            org.bouncycastle.jce.X509LDAPCertStoreParameters r10 = r6.params
            java.lang.String r10 = r10.getSearchForSerialNumberIn()
            java.lang.String[] r10 = r6.splitString(r10)
            java.util.List r10 = r6.search(r10, r2, r8)
            r0.addAll(r10)
        L7e:
            if (r2 != 0) goto L89
            if (r1 != 0) goto L89
            java.util.List r7 = r6.search(r9, r7, r8)
            r0.addAll(r7)
        L89:
            return r0
    }

    private javax.naming.directory.DirContext connectLDAP() throws javax.naming.NamingException {
            r3 = this;
            java.util.Properties r0 = new java.util.Properties
            r0.<init>()
            java.lang.String r1 = org.bouncycastle.x509.util.LDAPStoreHelper.LDAP_PROVIDER
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
            java.lang.String r1 = org.bouncycastle.x509.util.LDAPStoreHelper.REFERRALS_IGNORE
            java.lang.String r2 = "java.naming.referral"
            r0.setProperty(r2, r1)
            java.lang.String r1 = "java.naming.security.authentication"
            java.lang.String r2 = "none"
            r0.setProperty(r1, r2)
            javax.naming.directory.InitialDirContext r1 = new javax.naming.directory.InitialDirContext
            r1.<init>(r0)
            return r1
    }

    private java.util.Set createAttributeCertificates(java.util.List r5, org.bouncycastle.x509.X509AttributeCertStoreSelector r6) throws org.bouncycastle.util.StoreException {
            r4 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Iterator r5 = r5.iterator()
            org.bouncycastle.jce.provider.X509AttrCertParser r1 = new org.bouncycastle.jce.provider.X509AttrCertParser
            r1.<init>()
        Le:
            boolean r2 = r5.hasNext()
            if (r2 == 0) goto L36
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            java.lang.Object r3 = r5.next()     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            byte[] r3 = (byte[]) r3     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            byte[] r3 = (byte[]) r3     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            r2.<init>(r3)     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            r1.engineInit(r2)     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            java.lang.Object r2 = r1.engineRead()     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            org.bouncycastle.x509.X509AttributeCertificate r2 = (org.bouncycastle.x509.X509AttributeCertificate) r2     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            boolean r3 = r6.match(r2)     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            if (r3 == 0) goto Le
            r0.add(r2)     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            goto Le
        L34:
            goto Le
        L36:
            return r0
    }

    private java.util.Set createCRLs(java.util.List r5, org.bouncycastle.x509.X509CRLStoreSelector r6) throws org.bouncycastle.util.StoreException {
            r4 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            org.bouncycastle.jce.provider.X509CRLParser r1 = new org.bouncycastle.jce.provider.X509CRLParser
            r1.<init>()
            java.util.Iterator r5 = r5.iterator()
        Le:
            boolean r2 = r5.hasNext()
            if (r2 == 0) goto L36
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            java.lang.Object r3 = r5.next()     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            byte[] r3 = (byte[]) r3     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            byte[] r3 = (byte[]) r3     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            r2.<init>(r3)     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            r1.engineInit(r2)     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            java.lang.Object r2 = r1.engineRead()     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            java.security.cert.X509CRL r2 = (java.security.cert.X509CRL) r2     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            boolean r3 = r6.match(r2)     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            if (r3 == 0) goto Le
            r0.add(r2)     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L34
            goto Le
        L34:
            goto Le
        L36:
            return r0
    }

    private java.util.Set createCerts(java.util.List r5, org.bouncycastle.x509.X509CertStoreSelector r6) throws org.bouncycastle.util.StoreException {
            r4 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            java.util.Iterator r5 = r5.iterator()
            org.bouncycastle.jce.provider.X509CertParser r1 = new org.bouncycastle.jce.provider.X509CertParser
            r1.<init>()
        Le:
            boolean r2 = r5.hasNext()
            if (r2 == 0) goto L36
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream     // Catch: java.lang.Exception -> L34
            java.lang.Object r3 = r5.next()     // Catch: java.lang.Exception -> L34
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Exception -> L34
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Exception -> L34
            r2.<init>(r3)     // Catch: java.lang.Exception -> L34
            r1.engineInit(r2)     // Catch: java.lang.Exception -> L34
            java.lang.Object r2 = r1.engineRead()     // Catch: java.lang.Exception -> L34
            java.security.cert.X509Certificate r2 = (java.security.cert.X509Certificate) r2     // Catch: java.lang.Exception -> L34
            boolean r3 = r6.match(r2)     // Catch: java.lang.Exception -> L34
            if (r3 == 0) goto Le
            r0.add(r2)     // Catch: java.lang.Exception -> L34
            goto Le
        L34:
            goto Le
        L36:
            return r0
    }

    private java.util.Set createCrossCertificatePairs(java.util.List r9, org.bouncycastle.x509.X509CertPairStoreSelector r10) throws org.bouncycastle.util.StoreException {
            r8 = this;
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1 = 0
        L6:
            int r2 = r9.size()
            if (r1 >= r2) goto L6c
            org.bouncycastle.jce.provider.X509CertPairParser r2 = new org.bouncycastle.jce.provider.X509CertPairParser     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L28 java.lang.Throwable -> L69
            r2.<init>()     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L28 java.lang.Throwable -> L69
            java.io.ByteArrayInputStream r3 = new java.io.ByteArrayInputStream     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L28 java.lang.Throwable -> L69
            java.lang.Object r4 = r9.get(r1)     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L28 java.lang.Throwable -> L69
            byte[] r4 = (byte[]) r4     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L28 java.lang.Throwable -> L69
            byte[] r4 = (byte[]) r4     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L28 java.lang.Throwable -> L69
            r3.<init>(r4)     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L28 java.lang.Throwable -> L69
            r2.engineInit(r3)     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L28 java.lang.Throwable -> L69
            java.lang.Object r2 = r2.engineRead()     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L28 java.lang.Throwable -> L69
            org.bouncycastle.x509.X509CertificatePair r2 = (org.bouncycastle.x509.X509CertificatePair) r2     // Catch: org.bouncycastle.x509.util.StreamParsingException -> L28 java.lang.Throwable -> L69
            goto L60
        L28:
            java.lang.Object r2 = r9.get(r1)     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            byte[] r2 = (byte[]) r2     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            byte[] r2 = (byte[]) r2     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            int r3 = r1 + 1
            java.lang.Object r4 = r9.get(r3)     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            byte[] r4 = (byte[]) r4     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            byte[] r4 = (byte[]) r4     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            org.bouncycastle.x509.X509CertificatePair r5 = new org.bouncycastle.x509.X509CertificatePair     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            org.bouncycastle.asn1.x509.CertificatePair r6 = new org.bouncycastle.asn1.x509.CertificatePair     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            org.bouncycastle.asn1.ASN1InputStream r7 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            r7.<init>(r2)     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            org.bouncycastle.asn1.DERObject r2 = r7.readObject()     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            org.bouncycastle.asn1.x509.X509CertificateStructure r2 = org.bouncycastle.asn1.x509.X509CertificateStructure.getInstance(r2)     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            org.bouncycastle.asn1.ASN1InputStream r7 = new org.bouncycastle.asn1.ASN1InputStream     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            r7.<init>(r4)     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            org.bouncycastle.asn1.DERObject r4 = r7.readObject()     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            org.bouncycastle.asn1.x509.X509CertificateStructure r4 = org.bouncycastle.asn1.x509.X509CertificateStructure.getInstance(r4)     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            r6.<init>(r2, r4)     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            r1 = r3
            r2 = r5
        L60:
            boolean r3 = r10.match(r2)     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
            if (r3 == 0) goto L69
            r0.add(r2)     // Catch: java.lang.Throwable -> L69 java.lang.Throwable -> L69
        L69:
            int r1 = r1 + 1
            goto L6
        L6c:
            return r0
    }

    private java.util.List crossCertificatePairSubjectSearch(org.bouncycastle.x509.X509CertPairStoreSelector r6, java.lang.String[] r7, java.lang.String[] r8, java.lang.String[] r9) throws org.bouncycastle.util.StoreException {
            r5 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            org.bouncycastle.x509.X509CertStoreSelector r1 = r6.getForwardSelector()
            if (r1 == 0) goto L14
            org.bouncycastle.x509.X509CertStoreSelector r1 = r6.getForwardSelector()
            java.lang.String r1 = r5.getSubjectAsString(r1)
            goto L15
        L14:
            r1 = 0
        L15:
            org.bouncycastle.x509.X509CertificatePair r2 = r6.getCertPair()
            if (r2 == 0) goto L37
            org.bouncycastle.x509.X509CertificatePair r2 = r6.getCertPair()
            java.security.cert.X509Certificate r2 = r2.getForward()
            if (r2 == 0) goto L37
            org.bouncycastle.x509.X509CertificatePair r6 = r6.getCertPair()
            java.security.cert.X509Certificate r6 = r6.getForward()
            javax.security.auth.x500.X500Principal r6 = r6.getSubjectX500Principal()
            java.lang.String r1 = "RFC1779"
            java.lang.String r1 = r6.getName(r1)
        L37:
            java.lang.String r6 = "*"
            if (r1 == 0) goto L61
            r2 = 0
        L3c:
            int r3 = r9.length
            if (r2 >= r3) goto L61
            r3 = r9[r2]
            java.lang.String r3 = r5.parseDN(r1, r3)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r6)
            r4.append(r3)
            r4.append(r6)
            java.lang.String r3 = r4.toString()
            java.util.List r3 = r5.search(r8, r3, r7)
            r0.addAll(r3)
            int r2 = r2 + 1
            goto L3c
        L61:
            if (r1 != 0) goto L6a
            java.util.List r6 = r5.search(r8, r6, r7)
            r0.addAll(r6)
        L6a:
            return r0
    }

    private javax.security.auth.x500.X500Principal getCertificateIssuer(java.security.cert.X509Certificate r1) {
            r0 = this;
            javax.security.auth.x500.X500Principal r1 = r1.getIssuerX500Principal()
            return r1
    }

    private java.util.List getFromCache(java.lang.String r8) {
            r7 = this;
            java.util.Map r0 = r7.cacheMap
            java.lang.Object r8 = r0.get(r8)
            java.util.List r8 = (java.util.List) r8
            long r0 = java.lang.System.currentTimeMillis()
            r2 = 0
            if (r8 == 0) goto L2a
            r3 = 0
            java.lang.Object r3 = r8.get(r3)
            java.sql.Date r3 = (java.sql.Date) r3
            long r3 = r3.getTime()
            long r5 = org.bouncycastle.x509.util.LDAPStoreHelper.lifeTime
            long r0 = r0 - r5
            int r5 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r5 >= 0) goto L22
            return r2
        L22:
            r0 = 1
            java.lang.Object r8 = r8.get(r0)
            java.util.List r8 = (java.util.List) r8
            return r8
        L2a:
            return r2
    }

    private java.lang.String getSubjectAsString(org.bouncycastle.x509.X509CertStoreSelector r4) {
            r3 = this;
            byte[] r4 = r4.getSubjectAsBytes()     // Catch: java.io.IOException -> L14
            if (r4 == 0) goto L12
            javax.security.auth.x500.X500Principal r0 = new javax.security.auth.x500.X500Principal     // Catch: java.io.IOException -> L14
            r0.<init>(r4)     // Catch: java.io.IOException -> L14
            java.lang.String r4 = "RFC1779"
            java.lang.String r4 = r0.getName(r4)     // Catch: java.io.IOException -> L14
            return r4
        L12:
            r4 = 0
            return r4
        L14:
            r4 = move-exception
            org.bouncycastle.util.StoreException r0 = new org.bouncycastle.util.StoreException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "exception processing name: "
            r1.append(r2)
            java.lang.String r2 = r4.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1, r4)
            throw r0
    }

    private java.lang.String parseDN(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = r5.toLowerCase()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r6.toLowerCase()
            r1.append(r2)
            java.lang.String r2 = "="
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            int r0 = r0.indexOf(r1)
            r1 = -1
            if (r0 != r1) goto L23
            java.lang.String r5 = ""
            return r5
        L23:
            int r6 = r6.length()
            int r0 = r0 + r6
            java.lang.String r5 = r5.substring(r0)
            r6 = 44
            int r0 = r5.indexOf(r6)
            if (r0 != r1) goto L38
        L34:
            int r0 = r5.length()
        L38:
            int r2 = r0 + (-1)
            char r2 = r5.charAt(r2)
            r3 = 92
            if (r2 != r3) goto L4b
            int r0 = r0 + 1
            int r0 = r5.indexOf(r6, r0)
            if (r0 != r1) goto L38
            goto L34
        L4b:
            r6 = 0
            java.lang.String r5 = r5.substring(r6, r0)
            r0 = 61
            int r0 = r5.indexOf(r0)
            r1 = 1
            int r0 = r0 + r1
            java.lang.String r5 = r5.substring(r0)
            char r0 = r5.charAt(r6)
            r2 = 32
            if (r0 != r2) goto L68
            java.lang.String r5 = r5.substring(r1)
        L68:
            java.lang.String r0 = "\""
            boolean r2 = r5.startsWith(r0)
            if (r2 == 0) goto L74
            java.lang.String r5 = r5.substring(r1)
        L74:
            boolean r0 = r5.endsWith(r0)
            if (r0 == 0) goto L83
            int r0 = r5.length()
            int r0 = r0 - r1
            java.lang.String r5 = r5.substring(r6, r0)
        L83:
            return r5
    }

    private java.util.List search(java.lang.String[] r10, java.lang.String r11, java.lang.String[] r12) throws org.bouncycastle.util.StoreException {
            r9 = this;
            java.lang.String r0 = "("
            java.lang.String r1 = "(|"
            r2 = 0
            r3 = 0
            java.lang.String r4 = ""
            java.lang.String r5 = ")"
            if (r10 != 0) goto Le
            r10 = r3
            goto L51
        Le:
            java.lang.String r6 = "**"
            boolean r6 = r11.equals(r6)
            if (r6 == 0) goto L18
            java.lang.String r11 = "*"
        L18:
            r7 = r4
            r6 = 0
        L1a:
            int r8 = r10.length
            if (r6 >= r8) goto L3f
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r7)
            r8.append(r0)
            r7 = r10[r6]
            r8.append(r7)
            java.lang.String r7 = "="
            r8.append(r7)
            r8.append(r11)
            r8.append(r5)
            java.lang.String r7 = r8.toString()
            int r6 = r6 + 1
            goto L1a
        L3f:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            r10.append(r1)
            r10.append(r7)
            r10.append(r5)
            java.lang.String r10 = r10.toString()
        L51:
            r11 = r4
        L52:
            int r6 = r12.length
            if (r2 >= r6) goto L71
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r11)
            r6.append(r0)
            r11 = r12[r2]
            r6.append(r11)
            java.lang.String r11 = "=*)"
            r6.append(r11)
            java.lang.String r11 = r6.toString()
            int r2 = r2 + 1
            goto L52
        L71:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            r0.append(r11)
            r0.append(r5)
            java.lang.String r11 = r0.toString()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "(&"
            r0.append(r1)
            r0.append(r10)
            r0.append(r4)
            r0.append(r11)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            if (r10 != 0) goto La0
            goto La1
        La0:
            r11 = r0
        La1:
            java.util.List r10 = r9.getFromCache(r11)
            if (r10 == 0) goto La8
            return r10
        La8:
            java.util.ArrayList r10 = new java.util.ArrayList
            r10.<init>()
            javax.naming.directory.DirContext r3 = r9.connectLDAP()     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            javax.naming.directory.SearchControls r0 = new javax.naming.directory.SearchControls     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            r0.<init>()     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            r1 = 2
            r0.setSearchScope(r1)     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            r1 = 0
            r0.setCountLimit(r1)     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            r0.setReturningAttributes(r12)     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            org.bouncycastle.jce.X509LDAPCertStoreParameters r12 = r9.params     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            java.lang.String r12 = r12.getBaseDN()     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            javax.naming.NamingEnumeration r12 = r3.search(r12, r11, r0)     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
        Lcc:
            boolean r0 = r12.hasMoreElements()     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            if (r0 == 0) goto Lf8
            java.lang.Object r0 = r12.next()     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            javax.naming.directory.SearchResult r0 = (javax.naming.directory.SearchResult) r0     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            javax.naming.directory.Attributes r0 = r0.getAttributes()     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            javax.naming.NamingEnumeration r0 = r0.getAll()     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            java.lang.Object r0 = r0.next()     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            javax.naming.directory.Attribute r0 = (javax.naming.directory.Attribute) r0     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            javax.naming.NamingEnumeration r0 = r0.getAll()     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
        Lea:
            boolean r1 = r0.hasMore()     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            if (r1 == 0) goto Lcc
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            r10.add(r1)     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            goto Lea
        Lf8:
            r9.addToCache(r11, r10)     // Catch: java.lang.Throwable -> L101 javax.naming.NamingException -> L108
            if (r3 == 0) goto L10b
        Lfd:
            r3.close()     // Catch: java.lang.Exception -> L10b
            goto L10b
        L101:
            r10 = move-exception
            if (r3 == 0) goto L107
            r3.close()     // Catch: java.lang.Exception -> L107
        L107:
            throw r10
        L108:
            if (r3 == 0) goto L10b
            goto Lfd
        L10b:
            return r10
    }

    private java.lang.String[] splitString(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "\\s+"
            java.lang.String[] r2 = r2.split(r0)
            return r2
    }

    public java.util.Collection getAACertificates(org.bouncycastle.x509.X509AttributeCertStoreSelector r6) throws org.bouncycastle.util.StoreException {
            r5 = this;
            org.bouncycastle.jce.X509LDAPCertStoreParameters r0 = r5.params
            java.lang.String r0 = r0.getAACertificateAttribute()
            java.lang.String[] r0 = r5.splitString(r0)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r5.params
            java.lang.String r1 = r1.getLdapAACertificateAttributeName()
            java.lang.String[] r1 = r5.splitString(r1)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r2 = r5.params
            java.lang.String r2 = r2.getAACertificateSubjectAttributeName()
            java.lang.String[] r2 = r5.splitString(r2)
            java.util.List r3 = r5.attrCertSubjectSerialSearch(r6, r0, r1, r2)
            java.util.Set r3 = r5.createAttributeCertificates(r3, r6)
            int r4 = r3.size()
            if (r4 != 0) goto L3c
            org.bouncycastle.x509.X509AttributeCertStoreSelector r4 = new org.bouncycastle.x509.X509AttributeCertStoreSelector
            r4.<init>()
            java.util.List r0 = r5.attrCertSubjectSerialSearch(r4, r0, r1, r2)
            java.util.Set r6 = r5.createAttributeCertificates(r0, r6)
            r3.addAll(r6)
        L3c:
            return r3
    }

    public java.util.Collection getAttributeAuthorityRevocationLists(org.bouncycastle.x509.X509CRLStoreSelector r6) throws org.bouncycastle.util.StoreException {
            r5 = this;
            org.bouncycastle.jce.X509LDAPCertStoreParameters r0 = r5.params
            java.lang.String r0 = r0.getAttributeAuthorityRevocationListAttribute()
            java.lang.String[] r0 = r5.splitString(r0)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r5.params
            java.lang.String r1 = r1.getLdapAttributeAuthorityRevocationListAttributeName()
            java.lang.String[] r1 = r5.splitString(r1)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r2 = r5.params
            java.lang.String r2 = r2.getAttributeAuthorityRevocationListIssuerAttributeName()
            java.lang.String[] r2 = r5.splitString(r2)
            java.util.List r3 = r5.cRLIssuerSearch(r6, r0, r1, r2)
            java.util.Set r3 = r5.createCRLs(r3, r6)
            int r4 = r3.size()
            if (r4 != 0) goto L3c
            org.bouncycastle.x509.X509CRLStoreSelector r4 = new org.bouncycastle.x509.X509CRLStoreSelector
            r4.<init>()
            java.util.List r0 = r5.cRLIssuerSearch(r4, r0, r1, r2)
            java.util.Set r6 = r5.createCRLs(r0, r6)
            r3.addAll(r6)
        L3c:
            return r3
    }

    public java.util.Collection getAttributeCertificateAttributes(org.bouncycastle.x509.X509AttributeCertStoreSelector r6) throws org.bouncycastle.util.StoreException {
            r5 = this;
            org.bouncycastle.jce.X509LDAPCertStoreParameters r0 = r5.params
            java.lang.String r0 = r0.getAttributeCertificateAttributeAttribute()
            java.lang.String[] r0 = r5.splitString(r0)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r5.params
            java.lang.String r1 = r1.getLdapAttributeCertificateAttributeAttributeName()
            java.lang.String[] r1 = r5.splitString(r1)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r2 = r5.params
            java.lang.String r2 = r2.getAttributeCertificateAttributeSubjectAttributeName()
            java.lang.String[] r2 = r5.splitString(r2)
            java.util.List r3 = r5.attrCertSubjectSerialSearch(r6, r0, r1, r2)
            java.util.Set r3 = r5.createAttributeCertificates(r3, r6)
            int r4 = r3.size()
            if (r4 != 0) goto L3c
            org.bouncycastle.x509.X509AttributeCertStoreSelector r4 = new org.bouncycastle.x509.X509AttributeCertStoreSelector
            r4.<init>()
            java.util.List r0 = r5.attrCertSubjectSerialSearch(r4, r0, r1, r2)
            java.util.Set r6 = r5.createAttributeCertificates(r0, r6)
            r3.addAll(r6)
        L3c:
            return r3
    }

    public java.util.Collection getAttributeCertificateRevocationLists(org.bouncycastle.x509.X509CRLStoreSelector r6) throws org.bouncycastle.util.StoreException {
            r5 = this;
            org.bouncycastle.jce.X509LDAPCertStoreParameters r0 = r5.params
            java.lang.String r0 = r0.getAttributeCertificateRevocationListAttribute()
            java.lang.String[] r0 = r5.splitString(r0)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r5.params
            java.lang.String r1 = r1.getLdapAttributeCertificateRevocationListAttributeName()
            java.lang.String[] r1 = r5.splitString(r1)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r2 = r5.params
            java.lang.String r2 = r2.getAttributeCertificateRevocationListIssuerAttributeName()
            java.lang.String[] r2 = r5.splitString(r2)
            java.util.List r3 = r5.cRLIssuerSearch(r6, r0, r1, r2)
            java.util.Set r3 = r5.createCRLs(r3, r6)
            int r4 = r3.size()
            if (r4 != 0) goto L3c
            org.bouncycastle.x509.X509CRLStoreSelector r4 = new org.bouncycastle.x509.X509CRLStoreSelector
            r4.<init>()
            java.util.List r0 = r5.cRLIssuerSearch(r4, r0, r1, r2)
            java.util.Set r6 = r5.createCRLs(r0, r6)
            r3.addAll(r6)
        L3c:
            return r3
    }

    public java.util.Collection getAttributeDescriptorCertificates(org.bouncycastle.x509.X509AttributeCertStoreSelector r6) throws org.bouncycastle.util.StoreException {
            r5 = this;
            org.bouncycastle.jce.X509LDAPCertStoreParameters r0 = r5.params
            java.lang.String r0 = r0.getAttributeDescriptorCertificateAttribute()
            java.lang.String[] r0 = r5.splitString(r0)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r5.params
            java.lang.String r1 = r1.getLdapAttributeDescriptorCertificateAttributeName()
            java.lang.String[] r1 = r5.splitString(r1)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r2 = r5.params
            java.lang.String r2 = r2.getAttributeDescriptorCertificateSubjectAttributeName()
            java.lang.String[] r2 = r5.splitString(r2)
            java.util.List r3 = r5.attrCertSubjectSerialSearch(r6, r0, r1, r2)
            java.util.Set r3 = r5.createAttributeCertificates(r3, r6)
            int r4 = r3.size()
            if (r4 != 0) goto L3c
            org.bouncycastle.x509.X509AttributeCertStoreSelector r4 = new org.bouncycastle.x509.X509AttributeCertStoreSelector
            r4.<init>()
            java.util.List r0 = r5.attrCertSubjectSerialSearch(r4, r0, r1, r2)
            java.util.Set r6 = r5.createAttributeCertificates(r0, r6)
            r3.addAll(r6)
        L3c:
            return r3
    }

    public java.util.Collection getAuthorityRevocationLists(org.bouncycastle.x509.X509CRLStoreSelector r6) throws org.bouncycastle.util.StoreException {
            r5 = this;
            org.bouncycastle.jce.X509LDAPCertStoreParameters r0 = r5.params
            java.lang.String r0 = r0.getAuthorityRevocationListAttribute()
            java.lang.String[] r0 = r5.splitString(r0)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r5.params
            java.lang.String r1 = r1.getLdapAuthorityRevocationListAttributeName()
            java.lang.String[] r1 = r5.splitString(r1)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r2 = r5.params
            java.lang.String r2 = r2.getAuthorityRevocationListIssuerAttributeName()
            java.lang.String[] r2 = r5.splitString(r2)
            java.util.List r3 = r5.cRLIssuerSearch(r6, r0, r1, r2)
            java.util.Set r3 = r5.createCRLs(r3, r6)
            int r4 = r3.size()
            if (r4 != 0) goto L3c
            org.bouncycastle.x509.X509CRLStoreSelector r4 = new org.bouncycastle.x509.X509CRLStoreSelector
            r4.<init>()
            java.util.List r0 = r5.cRLIssuerSearch(r4, r0, r1, r2)
            java.util.Set r6 = r5.createCRLs(r0, r6)
            r3.addAll(r6)
        L3c:
            return r3
    }

    public java.util.Collection getCACertificates(org.bouncycastle.x509.X509CertStoreSelector r6) throws org.bouncycastle.util.StoreException {
            r5 = this;
            org.bouncycastle.jce.X509LDAPCertStoreParameters r0 = r5.params
            java.lang.String r0 = r0.getCACertificateAttribute()
            java.lang.String[] r0 = r5.splitString(r0)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r5.params
            java.lang.String r1 = r1.getLdapCACertificateAttributeName()
            java.lang.String[] r1 = r5.splitString(r1)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r2 = r5.params
            java.lang.String r2 = r2.getCACertificateSubjectAttributeName()
            java.lang.String[] r2 = r5.splitString(r2)
            java.util.List r3 = r5.certSubjectSerialSearch(r6, r0, r1, r2)
            java.util.Set r3 = r5.createCerts(r3, r6)
            int r4 = r3.size()
            if (r4 != 0) goto L3c
            org.bouncycastle.x509.X509CertStoreSelector r4 = new org.bouncycastle.x509.X509CertStoreSelector
            r4.<init>()
            java.util.List r0 = r5.certSubjectSerialSearch(r4, r0, r1, r2)
            java.util.Set r6 = r5.createCerts(r0, r6)
            r3.addAll(r6)
        L3c:
            return r3
    }

    public java.util.Collection getCertificateRevocationLists(org.bouncycastle.x509.X509CRLStoreSelector r6) throws org.bouncycastle.util.StoreException {
            r5 = this;
            org.bouncycastle.jce.X509LDAPCertStoreParameters r0 = r5.params
            java.lang.String r0 = r0.getCertificateRevocationListAttribute()
            java.lang.String[] r0 = r5.splitString(r0)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r5.params
            java.lang.String r1 = r1.getLdapCertificateRevocationListAttributeName()
            java.lang.String[] r1 = r5.splitString(r1)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r2 = r5.params
            java.lang.String r2 = r2.getCertificateRevocationListIssuerAttributeName()
            java.lang.String[] r2 = r5.splitString(r2)
            java.util.List r3 = r5.cRLIssuerSearch(r6, r0, r1, r2)
            java.util.Set r3 = r5.createCRLs(r3, r6)
            int r4 = r3.size()
            if (r4 != 0) goto L3c
            org.bouncycastle.x509.X509CRLStoreSelector r4 = new org.bouncycastle.x509.X509CRLStoreSelector
            r4.<init>()
            java.util.List r0 = r5.cRLIssuerSearch(r4, r0, r1, r2)
            java.util.Set r6 = r5.createCRLs(r0, r6)
            r3.addAll(r6)
        L3c:
            return r3
    }

    public java.util.Collection getCrossCertificatePairs(org.bouncycastle.x509.X509CertPairStoreSelector r7) throws org.bouncycastle.util.StoreException {
            r6 = this;
            org.bouncycastle.jce.X509LDAPCertStoreParameters r0 = r6.params
            java.lang.String r0 = r0.getCrossCertificateAttribute()
            java.lang.String[] r0 = r6.splitString(r0)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r6.params
            java.lang.String r1 = r1.getLdapCrossCertificateAttributeName()
            java.lang.String[] r1 = r6.splitString(r1)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r2 = r6.params
            java.lang.String r2 = r2.getCrossCertificateSubjectAttributeName()
            java.lang.String[] r2 = r6.splitString(r2)
            java.util.List r3 = r6.crossCertificatePairSubjectSearch(r7, r0, r1, r2)
            java.util.Set r3 = r6.createCrossCertificatePairs(r3, r7)
            int r4 = r3.size()
            if (r4 != 0) goto L47
            org.bouncycastle.x509.X509CertStoreSelector r4 = new org.bouncycastle.x509.X509CertStoreSelector
            r4.<init>()
            org.bouncycastle.x509.X509CertPairStoreSelector r5 = new org.bouncycastle.x509.X509CertPairStoreSelector
            r5.<init>()
            r5.setForwardSelector(r4)
            r5.setReverseSelector(r4)
            java.util.List r0 = r6.crossCertificatePairSubjectSearch(r5, r0, r1, r2)
            java.util.Set r7 = r6.createCrossCertificatePairs(r0, r7)
            r3.addAll(r7)
        L47:
            return r3
    }

    public java.util.Collection getDeltaCertificateRevocationLists(org.bouncycastle.x509.X509CRLStoreSelector r6) throws org.bouncycastle.util.StoreException {
            r5 = this;
            org.bouncycastle.jce.X509LDAPCertStoreParameters r0 = r5.params
            java.lang.String r0 = r0.getDeltaRevocationListAttribute()
            java.lang.String[] r0 = r5.splitString(r0)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r5.params
            java.lang.String r1 = r1.getLdapDeltaRevocationListAttributeName()
            java.lang.String[] r1 = r5.splitString(r1)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r2 = r5.params
            java.lang.String r2 = r2.getDeltaRevocationListIssuerAttributeName()
            java.lang.String[] r2 = r5.splitString(r2)
            java.util.List r3 = r5.cRLIssuerSearch(r6, r0, r1, r2)
            java.util.Set r3 = r5.createCRLs(r3, r6)
            int r4 = r3.size()
            if (r4 != 0) goto L3c
            org.bouncycastle.x509.X509CRLStoreSelector r4 = new org.bouncycastle.x509.X509CRLStoreSelector
            r4.<init>()
            java.util.List r0 = r5.cRLIssuerSearch(r4, r0, r1, r2)
            java.util.Set r6 = r5.createCRLs(r0, r6)
            r3.addAll(r6)
        L3c:
            return r3
    }

    public java.util.Collection getUserCertificates(org.bouncycastle.x509.X509CertStoreSelector r6) throws org.bouncycastle.util.StoreException {
            r5 = this;
            org.bouncycastle.jce.X509LDAPCertStoreParameters r0 = r5.params
            java.lang.String r0 = r0.getUserCertificateAttribute()
            java.lang.String[] r0 = r5.splitString(r0)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r1 = r5.params
            java.lang.String r1 = r1.getLdapUserCertificateAttributeName()
            java.lang.String[] r1 = r5.splitString(r1)
            org.bouncycastle.jce.X509LDAPCertStoreParameters r2 = r5.params
            java.lang.String r2 = r2.getUserCertificateSubjectAttributeName()
            java.lang.String[] r2 = r5.splitString(r2)
            java.util.List r3 = r5.certSubjectSerialSearch(r6, r0, r1, r2)
            java.util.Set r3 = r5.createCerts(r3, r6)
            int r4 = r3.size()
            if (r4 != 0) goto L3c
            org.bouncycastle.x509.X509CertStoreSelector r4 = new org.bouncycastle.x509.X509CertStoreSelector
            r4.<init>()
            java.util.List r0 = r5.certSubjectSerialSearch(r4, r0, r1, r2)
            java.util.Set r6 = r5.createCerts(r0, r6)
            r3.addAll(r6)
        L3c:
            return r3
    }
}
