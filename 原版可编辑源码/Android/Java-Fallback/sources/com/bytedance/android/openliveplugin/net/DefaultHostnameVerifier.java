package com.bytedance.android.openliveplugin.net;

public final class DefaultHostnameVerifier implements javax.net.ssl.HostnameVerifier {
    private static final int ALT_DNS_NAME = 2;
    private static final int ALT_IPA_NAME = 7;
    public static final com.bytedance.android.openliveplugin.net.DefaultHostnameVerifier INSTANCE = null;
    private static final java.util.regex.Pattern VERIFY_AS_IP_ADDRESS = null;

    static {
            com.bytedance.android.openliveplugin.net.DefaultHostnameVerifier r0 = new com.bytedance.android.openliveplugin.net.DefaultHostnameVerifier
            r0.<init>()
            com.bytedance.android.openliveplugin.net.DefaultHostnameVerifier.INSTANCE = r0
            java.lang.String r0 = "([0-9a-fA-F]*:[0-9a-fA-F:.]*)|([\\d.]+)"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.bytedance.android.openliveplugin.net.DefaultHostnameVerifier.VERIFY_AS_IP_ADDRESS = r0
            return
    }

    private DefaultHostnameVerifier() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.util.List<java.lang.String> getSubjectAltNames(java.security.cert.X509Certificate r4, int r5) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Collection r4 = r4.getSubjectAlternativeNames()     // Catch: java.security.cert.CertificateParsingException -> L48
            if (r4 != 0) goto L10
            java.util.List r4 = java.util.Collections.emptyList()     // Catch: java.security.cert.CertificateParsingException -> L48
            return r4
        L10:
            java.util.Iterator r4 = r4.iterator()     // Catch: java.security.cert.CertificateParsingException -> L48
        L14:
            boolean r1 = r4.hasNext()     // Catch: java.security.cert.CertificateParsingException -> L48
            if (r1 == 0) goto L47
            java.lang.Object r1 = r4.next()     // Catch: java.security.cert.CertificateParsingException -> L48
            java.util.List r1 = (java.util.List) r1     // Catch: java.security.cert.CertificateParsingException -> L48
            if (r1 == 0) goto L14
            int r2 = r1.size()     // Catch: java.security.cert.CertificateParsingException -> L48
            r3 = 2
            if (r2 >= r3) goto L2a
            goto L14
        L2a:
            r2 = 0
            java.lang.Object r2 = r1.get(r2)     // Catch: java.security.cert.CertificateParsingException -> L48
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.security.cert.CertificateParsingException -> L48
            if (r2 != 0) goto L34
            goto L14
        L34:
            int r2 = r2.intValue()     // Catch: java.security.cert.CertificateParsingException -> L48
            if (r2 != r5) goto L14
            r2 = 1
            java.lang.Object r1 = r1.get(r2)     // Catch: java.security.cert.CertificateParsingException -> L48
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.security.cert.CertificateParsingException -> L48
            if (r1 == 0) goto L14
            r0.add(r1)     // Catch: java.security.cert.CertificateParsingException -> L48
            goto L14
        L47:
            return r0
        L48:
            java.util.List r4 = java.util.Collections.emptyList()
            return r4
    }

    private boolean verify(java.lang.String r2, java.security.cert.X509Certificate r3) {
            r1 = this;
            boolean r0 = verifyAsIpAddress(r2)
            if (r0 == 0) goto Lb
            boolean r2 = r1.verifyIpAddress(r2, r3)
            goto Lf
        Lb:
            boolean r2 = r1.verifyHostname(r2, r3)
        Lf:
            return r2
    }

    private static boolean verifyAsIpAddress(java.lang.String r1) {
            java.util.regex.Pattern r0 = com.bytedance.android.openliveplugin.net.DefaultHostnameVerifier.VERIFY_AS_IP_ADDRESS
            java.util.regex.Matcher r1 = r0.matcher(r1)
            boolean r1 = r1.matches()
            return r1
    }

    private boolean verifyHostname(java.lang.String r8, java.lang.String r9) {
            r7 = this;
            r0 = 0
            if (r8 == 0) goto Lb4
            int r1 = r8.length()
            if (r1 == 0) goto Lb4
            java.lang.String r1 = "."
            boolean r2 = r8.startsWith(r1)
            if (r2 != 0) goto Lb4
            java.lang.String r2 = ".."
            boolean r3 = r8.endsWith(r2)
            if (r3 == 0) goto L1b
            goto Lb4
        L1b:
            if (r9 == 0) goto Lb4
            int r3 = r9.length()
            if (r3 == 0) goto Lb4
            boolean r3 = r9.startsWith(r1)
            if (r3 != 0) goto Lb4
            boolean r2 = r9.endsWith(r2)
            if (r2 == 0) goto L31
            goto Lb4
        L31:
            boolean r2 = r8.endsWith(r1)
            r3 = 46
            if (r2 != 0) goto L48
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r8)
            r2.append(r3)
            java.lang.String r8 = r2.toString()
        L48:
            boolean r1 = r9.endsWith(r1)
            if (r1 != 0) goto L5d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r9)
            r1.append(r3)
            java.lang.String r9 = r1.toString()
        L5d:
            java.util.Locale r1 = java.util.Locale.US
            java.lang.String r9 = r9.toLowerCase(r1)
            java.lang.String r1 = "*"
            boolean r1 = r9.contains(r1)
            if (r1 != 0) goto L70
            boolean r8 = r8.equals(r9)
            return r8
        L70:
            java.lang.String r1 = "*."
            boolean r2 = r9.startsWith(r1)
            if (r2 == 0) goto Lb4
            r2 = 42
            r4 = 1
            int r2 = r9.indexOf(r2, r4)
            r5 = -1
            if (r2 == r5) goto L83
            goto Lb4
        L83:
            int r2 = r8.length()
            int r6 = r9.length()
            if (r2 >= r6) goto L8e
            return r0
        L8e:
            boolean r1 = r1.equals(r9)
            if (r1 == 0) goto L95
            return r0
        L95:
            java.lang.String r9 = r9.substring(r4)
            boolean r1 = r8.endsWith(r9)
            if (r1 != 0) goto La0
            return r0
        La0:
            int r1 = r8.length()
            int r9 = r9.length()
            int r1 = r1 - r9
            if (r1 <= 0) goto Lb3
            int r1 = r1 - r4
            int r8 = r8.lastIndexOf(r3, r1)
            if (r8 == r5) goto Lb3
            return r0
        Lb3:
            return r4
        Lb4:
            return r0
    }

    private boolean verifyHostname(java.lang.String r7, java.security.cert.X509Certificate r8) {
            r6 = this;
            java.util.Locale r0 = java.util.Locale.US
            java.lang.String r7 = r7.toLowerCase(r0)
            r0 = 2
            java.util.List r0 = getSubjectAltNames(r8, r0)
            int r1 = r0.size()
            r2 = 1
            r3 = 0
            r4 = r3
            r5 = r4
        L13:
            if (r4 >= r1) goto L26
            java.lang.Object r5 = r0.get(r4)
            java.lang.String r5 = (java.lang.String) r5
            boolean r5 = r6.verifyHostname(r7, r5)
            if (r5 == 0) goto L22
            return r2
        L22:
            int r4 = r4 + 1
            r5 = r2
            goto L13
        L26:
            if (r5 != 0) goto L3e
            javax.security.auth.x500.X500Principal r8 = r8.getSubjectX500Principal()
            com.bytedance.android.openliveplugin.net.DistinguishedNameParser r0 = new com.bytedance.android.openliveplugin.net.DistinguishedNameParser
            r0.<init>(r8)
            java.lang.String r8 = "cn"
            java.lang.String r8 = r0.findMostSpecific(r8)
            if (r8 == 0) goto L3e
            boolean r7 = r6.verifyHostname(r7, r8)
            return r7
        L3e:
            return r3
    }

    private boolean verifyIpAddress(java.lang.String r5, java.security.cert.X509Certificate r6) {
            r4 = this;
            r0 = 7
            java.util.List r6 = getSubjectAltNames(r6, r0)
            int r0 = r6.size()
            r1 = 0
            r2 = r1
        Lb:
            if (r2 >= r0) goto L1e
            java.lang.Object r3 = r6.get(r2)
            java.lang.String r3 = (java.lang.String) r3
            boolean r3 = r5.equalsIgnoreCase(r3)
            if (r3 == 0) goto L1b
            r5 = 1
            return r5
        L1b:
            int r2 = r2 + 1
            goto Lb
        L1e:
            return r1
    }

    @Override
    public boolean verify(java.lang.String r2, javax.net.ssl.SSLSession r3) {
            r1 = this;
            r0 = 0
            java.security.cert.Certificate[] r3 = r3.getPeerCertificates()     // Catch: javax.net.ssl.SSLException -> Le
            r3 = r3[r0]     // Catch: javax.net.ssl.SSLException -> Le
            java.security.cert.X509Certificate r3 = (java.security.cert.X509Certificate) r3     // Catch: javax.net.ssl.SSLException -> Le
            boolean r2 = r1.verify(r2, r3)     // Catch: javax.net.ssl.SSLException -> Le
            return r2
        Le:
            return r0
    }
}
