package cz.msebera.android.httpclient.conn.ssl;

@cz.msebera.android.httpclient.annotation.Immutable
public final class DefaultHostnameVerifier implements javax.net.ssl.HostnameVerifier {
    static final int DNS_NAME_TYPE = 2;
    static final int IP_ADDRESS_TYPE = 7;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;
    private final cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher publicSuffixMatcher;

    public DefaultHostnameVerifier() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public DefaultHostnameVerifier(cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r3) {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            r2.publicSuffixMatcher = r3
            return
    }

    static java.util.List<java.lang.String> extractSubjectAlts(java.security.cert.X509Certificate r3, int r4) {
            r0 = 0
            java.util.Collection r3 = r3.getSubjectAlternativeNames()     // Catch: java.security.cert.CertificateParsingException -> L6
            goto L7
        L6:
            r3 = r0
        L7:
            if (r3 == 0) goto L38
            java.util.Iterator r3 = r3.iterator()
        Ld:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L38
            java.lang.Object r1 = r3.next()
            java.util.List r1 = (java.util.List) r1
            r2 = 0
            java.lang.Object r2 = r1.get(r2)
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            if (r2 != r4) goto Ld
            r2 = 1
            java.lang.Object r1 = r1.get(r2)
            java.lang.String r1 = (java.lang.String) r1
            if (r0 != 0) goto L34
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
        L34:
            r0.add(r1)
            goto Ld
        L38:
            return r0
    }

    static void matchCN(java.lang.String r2, java.lang.String r3, cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r4) throws javax.net.ssl.SSLException {
            boolean r4 = matchIdentityStrict(r2, r3, r4)
            if (r4 == 0) goto L7
            return
        L7:
            javax.net.ssl.SSLException r4 = new javax.net.ssl.SSLException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Certificate for <"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = "> doesn't match "
            r0.append(r2)
            java.lang.String r2 = "common name of the certificate subject: "
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            r4.<init>(r2)
            throw r4
    }

    static void matchDNSName(java.lang.String r4, java.util.List<java.lang.String> r5, cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r6) throws javax.net.ssl.SSLException {
            java.util.Locale r0 = java.util.Locale.ROOT
            java.lang.String r0 = r4.toLowerCase(r0)
            r1 = 0
        L7:
            int r2 = r5.size()
            if (r1 >= r2) goto L23
            java.lang.Object r2 = r5.get(r1)
            java.lang.String r2 = (java.lang.String) r2
            java.util.Locale r3 = java.util.Locale.ROOT
            java.lang.String r2 = r2.toLowerCase(r3)
            boolean r2 = matchIdentityStrict(r0, r2, r6)
            if (r2 == 0) goto L20
            return
        L20:
            int r1 = r1 + 1
            goto L7
        L23:
            javax.net.ssl.SSLException r6 = new javax.net.ssl.SSLException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Certificate for <"
            r0.append(r1)
            r0.append(r4)
            java.lang.String r4 = "> doesn't match any "
            r0.append(r4)
            java.lang.String r4 = "of the subject alternative names: "
            r0.append(r4)
            r0.append(r5)
            java.lang.String r4 = r0.toString()
            r6.<init>(r4)
            throw r6
    }

    static boolean matchDomainRoot(java.lang.String r4, java.lang.String r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            boolean r1 = r4.endsWith(r5)
            r2 = 1
            if (r1 == 0) goto L28
            int r1 = r4.length()
            int r3 = r5.length()
            if (r1 == r3) goto L27
            int r1 = r4.length()
            int r5 = r5.length()
            int r1 = r1 - r5
            int r1 = r1 - r2
            char r4 = r4.charAt(r1)
            r5 = 46
            if (r4 != r5) goto L28
        L27:
            r0 = 1
        L28:
            return r0
    }

    static void matchIPAddress(java.lang.String r3, java.util.List<java.lang.String> r4) throws javax.net.ssl.SSLException {
            r0 = 0
        L1:
            int r1 = r4.size()
            if (r0 >= r1) goto L17
            java.lang.Object r1 = r4.get(r0)
            java.lang.String r1 = (java.lang.String) r1
            boolean r1 = r3.equals(r1)
            if (r1 == 0) goto L14
            return
        L14:
            int r0 = r0 + 1
            goto L1
        L17:
            javax.net.ssl.SSLException r0 = new javax.net.ssl.SSLException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Certificate for <"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = "> doesn't match any "
            r1.append(r3)
            java.lang.String r3 = "of the subject alternative names: "
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    static void matchIPv6Address(java.lang.String r3, java.util.List<java.lang.String> r4) throws javax.net.ssl.SSLException {
            java.lang.String r0 = normaliseAddress(r3)
            r1 = 0
        L5:
            int r2 = r4.size()
            if (r1 >= r2) goto L1f
            java.lang.Object r2 = r4.get(r1)
            java.lang.String r2 = (java.lang.String) r2
            java.lang.String r2 = normaliseAddress(r2)
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L1c
            return
        L1c:
            int r1 = r1 + 1
            goto L5
        L1f:
            javax.net.ssl.SSLException r0 = new javax.net.ssl.SSLException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Certificate for <"
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = "> doesn't match any "
            r1.append(r3)
            java.lang.String r3 = "of the subject alternative names: "
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    static boolean matchIdentity(java.lang.String r2, java.lang.String r3) {
            r0 = 0
            r1 = 0
            boolean r2 = matchIdentity(r2, r3, r0, r1)
            return r2
    }

    static boolean matchIdentity(java.lang.String r1, java.lang.String r2, cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r3) {
            r0 = 0
            boolean r1 = matchIdentity(r1, r2, r3, r0)
            return r1
    }

    private static boolean matchIdentity(java.lang.String r4, java.lang.String r5, cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r6, boolean r7) {
            java.lang.String r0 = "."
            r1 = 0
            if (r6 == 0) goto L16
            boolean r2 = r4.contains(r0)
            if (r2 == 0) goto L16
            java.lang.String r6 = r6.getDomainRoot(r5)
            boolean r6 = matchDomainRoot(r4, r6)
            if (r6 != 0) goto L16
            return r1
        L16:
            r6 = 42
            int r6 = r5.indexOf(r6)
            r2 = -1
            if (r6 == r2) goto L5e
            java.lang.String r2 = r5.substring(r1, r6)
            r3 = 1
            int r6 = r6 + r3
            java.lang.String r5 = r5.substring(r6)
            boolean r6 = r2.isEmpty()
            if (r6 != 0) goto L36
            boolean r6 = r4.startsWith(r2)
            if (r6 != 0) goto L36
            return r1
        L36:
            boolean r6 = r5.isEmpty()
            if (r6 != 0) goto L43
            boolean r6 = r4.endsWith(r5)
            if (r6 != 0) goto L43
            return r1
        L43:
            if (r7 == 0) goto L5d
            int r6 = r2.length()
            int r7 = r4.length()
            int r5 = r5.length()
            int r7 = r7 - r5
            java.lang.String r4 = r4.substring(r6, r7)
            boolean r4 = r4.contains(r0)
            if (r4 == 0) goto L5d
            return r1
        L5d:
            return r3
        L5e:
            boolean r4 = r4.equalsIgnoreCase(r5)
            return r4
    }

    static boolean matchIdentityStrict(java.lang.String r2, java.lang.String r3) {
            r0 = 0
            r1 = 1
            boolean r2 = matchIdentity(r2, r3, r0, r1)
            return r2
    }

    static boolean matchIdentityStrict(java.lang.String r1, java.lang.String r2, cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r3) {
            r0 = 1
            boolean r1 = matchIdentity(r1, r2, r3, r0)
            return r1
    }

    static java.lang.String normaliseAddress(java.lang.String r1) {
            if (r1 != 0) goto L3
            return r1
        L3:
            java.net.InetAddress r0 = java.net.InetAddress.getByName(r1)     // Catch: java.net.UnknownHostException -> Lb
            java.lang.String r1 = r0.getHostAddress()     // Catch: java.net.UnknownHostException -> Lb
        Lb:
            return r1
    }

    public final void verify(java.lang.String r5, java.security.cert.X509Certificate r6) throws javax.net.ssl.SSLException {
            r4 = this;
            boolean r0 = cz.msebera.android.httpclient.conn.util.InetAddressUtils.isIPv4Address(r5)
            boolean r1 = cz.msebera.android.httpclient.conn.util.InetAddressUtils.isIPv6Address(r5)
            if (r0 != 0) goto Lf
            if (r1 == 0) goto Ld
            goto Lf
        Ld:
            r2 = 2
            goto L10
        Lf:
            r2 = 7
        L10:
            java.util.List r2 = extractSubjectAlts(r6, r2)
            if (r2 == 0) goto L2e
            boolean r3 = r2.isEmpty()
            if (r3 != 0) goto L2e
            if (r0 == 0) goto L22
            matchIPAddress(r5, r2)
            goto L44
        L22:
            if (r1 == 0) goto L28
            matchIPv6Address(r5, r2)
            goto L44
        L28:
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r6 = r4.publicSuffixMatcher
            matchDNSName(r5, r2, r6)
            goto L44
        L2e:
            javax.security.auth.x500.X500Principal r6 = r6.getSubjectX500Principal()
            cz.msebera.android.httpclient.conn.ssl.DistinguishedNameParser r0 = new cz.msebera.android.httpclient.conn.ssl.DistinguishedNameParser
            r0.<init>(r6)
            java.lang.String r6 = "cn"
            java.lang.String r6 = r0.findMostSpecific(r6)
            if (r6 == 0) goto L45
            cz.msebera.android.httpclient.conn.util.PublicSuffixMatcher r0 = r4.publicSuffixMatcher
            matchCN(r5, r6, r0)
        L44:
            return
        L45:
            javax.net.ssl.SSLException r6 = new javax.net.ssl.SSLException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Certificate subject for <"
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = "> doesn't contain "
            r0.append(r5)
            java.lang.String r5 = "a common name and does not have alternative names"
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r6.<init>(r5)
            throw r6
    }

    @Override
    public final boolean verify(java.lang.String r3, javax.net.ssl.SSLSession r4) {
            r2 = this;
            r0 = 0
            java.security.cert.Certificate[] r4 = r4.getPeerCertificates()     // Catch: javax.net.ssl.SSLException -> Le
            r4 = r4[r0]     // Catch: javax.net.ssl.SSLException -> Le
            java.security.cert.X509Certificate r4 = (java.security.cert.X509Certificate) r4     // Catch: javax.net.ssl.SSLException -> Le
            r2.verify(r3, r4)     // Catch: javax.net.ssl.SSLException -> Le
            r3 = 1
            return r3
        Le:
            r3 = move-exception
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r2.log
            boolean r4 = r4.isDebugEnabled()
            if (r4 == 0) goto L20
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r4 = r2.log
            java.lang.String r1 = r3.getMessage()
            r4.debug(r1, r3)
        L20:
            return r0
    }
}
