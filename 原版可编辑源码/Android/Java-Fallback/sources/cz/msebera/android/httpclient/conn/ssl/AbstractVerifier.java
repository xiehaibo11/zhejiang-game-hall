package cz.msebera.android.httpclient.conn.ssl;

@java.lang.Deprecated
public abstract class AbstractVerifier implements cz.msebera.android.httpclient.conn.ssl.X509HostnameVerifier {
    static final java.lang.String[] BAD_COUNTRY_2LDS = null;
    public cz.msebera.android.httpclient.extras.HttpClientAndroidLog log;

    static {
            java.lang.String r0 = "ac"
            java.lang.String r1 = "co"
            java.lang.String r2 = "com"
            java.lang.String r3 = "ed"
            java.lang.String r4 = "edu"
            java.lang.String r5 = "go"
            java.lang.String r6 = "gouv"
            java.lang.String r7 = "gov"
            java.lang.String r8 = "info"
            java.lang.String r9 = "lg"
            java.lang.String r10 = "ne"
            java.lang.String r11 = "net"
            java.lang.String r12 = "or"
            java.lang.String r13 = "org"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13}
            cz.msebera.android.httpclient.conn.ssl.AbstractVerifier.BAD_COUNTRY_2LDS = r0
            java.lang.String[] r0 = cz.msebera.android.httpclient.conn.ssl.AbstractVerifier.BAD_COUNTRY_2LDS
            java.util.Arrays.sort(r0)
            return
    }

    public AbstractVerifier() {
            r2 = this;
            r2.<init>()
            cz.msebera.android.httpclient.extras.HttpClientAndroidLog r0 = new cz.msebera.android.httpclient.extras.HttpClientAndroidLog
            java.lang.Class r1 = r2.getClass()
            r0.<init>(r1)
            r2.log = r0
            return
    }

    public static boolean acceptableCountryWildcard(java.lang.String r1) {
            java.lang.String r0 = "\\."
            java.lang.String[] r1 = r1.split(r0)
            boolean r1 = validCountryWildcard(r1)
            return r1
    }

    public static int countDots(java.lang.String r4) {
            r0 = 0
            r1 = 0
        L2:
            int r2 = r4.length()
            if (r0 >= r2) goto L15
            char r2 = r4.charAt(r0)
            r3 = 46
            if (r2 != r3) goto L12
            int r1 = r1 + 1
        L12:
            int r0 = r0 + 1
            goto L2
        L15:
            return r1
    }

    public static java.lang.String[] getCNs(java.security.cert.X509Certificate r2) {
            cz.msebera.android.httpclient.conn.ssl.DistinguishedNameParser r0 = new cz.msebera.android.httpclient.conn.ssl.DistinguishedNameParser
            javax.security.auth.x500.X500Principal r2 = r2.getSubjectX500Principal()
            r0.<init>(r2)
            java.lang.String r2 = "cn"
            java.lang.String r2 = r0.findMostSpecific(r2)
            if (r2 == 0) goto L18
            r0 = 1
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            r0[r1] = r2
            goto L19
        L18:
            r0 = 0
        L19:
            return r0
    }

    public static java.lang.String[] getDNSSubjectAlts(java.security.cert.X509Certificate r1) {
            r0 = 2
            java.util.List r1 = cz.msebera.android.httpclient.conn.ssl.DefaultHostnameVerifier.extractSubjectAlts(r1, r0)
            if (r1 == 0) goto L1a
            boolean r0 = r1.isEmpty()
            if (r0 != 0) goto L1a
            int r0 = r1.size()
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.Object[] r1 = r1.toArray(r0)
            java.lang.String[] r1 = (java.lang.String[]) r1
            goto L1b
        L1a:
            r1 = 0
        L1b:
            return r1
    }

    private static boolean matchIdentity(java.lang.String r5, java.lang.String r6, boolean r7) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r5 = r5.toLowerCase(r1)
            java.util.Locale r1 = java.util.Locale.ROOT
            java.lang.String r6 = r6.toLowerCase(r1)
            java.lang.String r1 = "\\."
            java.lang.String[] r1 = r6.split(r1)
            int r2 = r1.length
            r3 = 3
            r4 = 1
            if (r2 < r3) goto L2f
            r2 = r1[r0]
            java.lang.String r3 = "*"
            boolean r2 = r2.endsWith(r3)
            if (r2 == 0) goto L2f
            if (r7 == 0) goto L2d
            boolean r2 = validCountryWildcard(r1)
            if (r2 == 0) goto L2f
        L2d:
            r2 = 1
            goto L30
        L2f:
            r2 = 0
        L30:
            if (r2 == 0) goto L7b
            r1 = r1[r0]
            int r2 = r1.length()
            if (r2 <= r4) goto L63
            int r2 = r1.length()
            int r2 = r2 - r4
            java.lang.String r2 = r1.substring(r0, r2)
            int r1 = r1.length()
            java.lang.String r1 = r6.substring(r1)
            int r3 = r2.length()
            java.lang.String r3 = r5.substring(r3)
            boolean r2 = r5.startsWith(r2)
            if (r2 == 0) goto L61
            boolean r1 = r3.endsWith(r1)
            if (r1 == 0) goto L61
            r1 = 1
            goto L6b
        L61:
            r1 = 0
            goto L6b
        L63:
            java.lang.String r1 = r6.substring(r4)
            boolean r1 = r5.endsWith(r1)
        L6b:
            if (r1 == 0) goto L7a
            if (r7 == 0) goto L79
            int r5 = countDots(r5)
            int r6 = countDots(r6)
            if (r5 != r6) goto L7a
        L79:
            r0 = 1
        L7a:
            return r0
        L7b:
            boolean r5 = r5.equals(r6)
            return r5
    }

    private static boolean validCountryWildcard(java.lang.String[] r3) {
            int r0 = r3.length
            r1 = 1
            r2 = 3
            if (r0 != r2) goto L1b
            r0 = 2
            r2 = r3[r0]
            int r2 = r2.length()
            if (r2 == r0) goto Lf
            goto L1b
        Lf:
            java.lang.String[] r0 = cz.msebera.android.httpclient.conn.ssl.AbstractVerifier.BAD_COUNTRY_2LDS
            r3 = r3[r1]
            int r3 = java.util.Arrays.binarySearch(r0, r3)
            if (r3 >= 0) goto L1a
            goto L1b
        L1a:
            r1 = 0
        L1b:
            return r1
    }

    @Override
    public final void verify(java.lang.String r5, java.security.cert.X509Certificate r6) throws javax.net.ssl.SSLException {
            r4 = this;
            boolean r0 = cz.msebera.android.httpclient.conn.util.InetAddressUtils.isIPv4Address(r5)
            boolean r1 = cz.msebera.android.httpclient.conn.util.InetAddressUtils.isIPv6Address(r5)
            if (r0 != 0) goto Lf
            if (r1 == 0) goto Ld
            goto Lf
        Ld:
            r0 = 2
            goto L10
        Lf:
            r0 = 7
        L10:
            java.util.List r0 = cz.msebera.android.httpclient.conn.ssl.DefaultHostnameVerifier.extractSubjectAlts(r6, r0)
            javax.security.auth.x500.X500Principal r6 = r6.getSubjectX500Principal()
            cz.msebera.android.httpclient.conn.ssl.DistinguishedNameParser r1 = new cz.msebera.android.httpclient.conn.ssl.DistinguishedNameParser
            r1.<init>(r6)
            java.lang.String r6 = "cn"
            java.lang.String r6 = r1.findMostSpecific(r6)
            r1 = 0
            if (r6 == 0) goto L2d
            r2 = 1
            java.lang.String[] r2 = new java.lang.String[r2]
            r3 = 0
            r2[r3] = r6
            goto L2e
        L2d:
            r2 = r1
        L2e:
            if (r0 == 0) goto L43
            boolean r6 = r0.isEmpty()
            if (r6 != 0) goto L43
            int r6 = r0.size()
            java.lang.String[] r6 = new java.lang.String[r6]
            java.lang.Object[] r6 = r0.toArray(r6)
            r1 = r6
            java.lang.String[] r1 = (java.lang.String[]) r1
        L43:
            r4.verify(r5, r2, r1)
            return
    }

    @Override
    public final void verify(java.lang.String r2, javax.net.ssl.SSLSocket r3) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "Host"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            javax.net.ssl.SSLSession r0 = r3.getSession()
            if (r0 != 0) goto L1f
            java.io.InputStream r0 = r3.getInputStream()
            r0.available()
            javax.net.ssl.SSLSession r0 = r3.getSession()
            if (r0 != 0) goto L1f
            r3.startHandshake()
            javax.net.ssl.SSLSession r0 = r3.getSession()
        L1f:
            java.security.cert.Certificate[] r3 = r0.getPeerCertificates()
            r0 = 0
            r3 = r3[r0]
            java.security.cert.X509Certificate r3 = (java.security.cert.X509Certificate) r3
            r1.verify(r2, r3)
            return
    }

    public final void verify(java.lang.String r5, java.lang.String[] r6, java.lang.String[] r7, boolean r8) throws javax.net.ssl.SSLException {
            r4 = this;
            r0 = 0
            if (r6 == 0) goto La
            int r1 = r6.length
            if (r1 <= 0) goto La
            r1 = 0
            r6 = r6[r1]
            goto Lb
        La:
            r6 = r0
        Lb:
            if (r7 == 0) goto L14
            int r1 = r7.length
            if (r1 <= 0) goto L14
            java.util.List r0 = java.util.Arrays.asList(r7)
        L14:
            boolean r7 = cz.msebera.android.httpclient.conn.util.InetAddressUtils.isIPv6Address(r5)
            if (r7 == 0) goto L25
            java.util.Locale r7 = java.util.Locale.ROOT
            java.lang.String r7 = r5.toLowerCase(r7)
            java.lang.String r7 = cz.msebera.android.httpclient.conn.ssl.DefaultHostnameVerifier.normaliseAddress(r7)
            goto L26
        L25:
            r7 = r5
        L26:
            java.lang.String r1 = "Certificate for <"
            if (r0 == 0) goto L6d
            java.util.Iterator r6 = r0.iterator()
        L2e:
            boolean r2 = r6.hasNext()
            if (r2 == 0) goto L4b
            java.lang.Object r2 = r6.next()
            java.lang.String r2 = (java.lang.String) r2
            boolean r3 = cz.msebera.android.httpclient.conn.util.InetAddressUtils.isIPv6Address(r2)
            if (r3 == 0) goto L44
            java.lang.String r2 = cz.msebera.android.httpclient.conn.ssl.DefaultHostnameVerifier.normaliseAddress(r2)
        L44:
            boolean r2 = matchIdentity(r7, r2, r8)
            if (r2 == 0) goto L2e
            return
        L4b:
            javax.net.ssl.SSLException r6 = new javax.net.ssl.SSLException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r1)
            r7.append(r5)
            java.lang.String r5 = "> doesn't match any "
            r7.append(r5)
            java.lang.String r5 = "of the subject alternative names: "
            r7.append(r5)
            r7.append(r0)
            java.lang.String r5 = r7.toString()
            r6.<init>(r5)
            throw r6
        L6d:
            if (r6 == 0) goto La4
            boolean r0 = cz.msebera.android.httpclient.conn.util.InetAddressUtils.isIPv6Address(r6)
            if (r0 == 0) goto L7a
            java.lang.String r0 = cz.msebera.android.httpclient.conn.ssl.DefaultHostnameVerifier.normaliseAddress(r6)
            goto L7b
        L7a:
            r0 = r6
        L7b:
            boolean r7 = matchIdentity(r7, r0, r8)
            if (r7 == 0) goto L82
            return
        L82:
            javax.net.ssl.SSLException r7 = new javax.net.ssl.SSLException
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r1)
            r8.append(r5)
            java.lang.String r5 = "> doesn't match "
            r8.append(r5)
            java.lang.String r5 = "common name of the certificate subject: "
            r8.append(r5)
            r8.append(r6)
            java.lang.String r5 = r8.toString()
            r7.<init>(r5)
            throw r7
        La4:
            javax.net.ssl.SSLException r6 = new javax.net.ssl.SSLException
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Certificate subject for <"
            r7.append(r8)
            r7.append(r5)
            java.lang.String r5 = "> doesn't contain "
            r7.append(r5)
            java.lang.String r5 = "a common name and does not have alternative names"
            r7.append(r5)
            java.lang.String r5 = r7.toString()
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
