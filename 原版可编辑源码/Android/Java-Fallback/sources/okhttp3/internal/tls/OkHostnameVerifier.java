package okhttp3.internal.tls;

@kotlin.Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\b\bÆ\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0014\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\t\u001a\u00020\nJ\u001e\u0010\u000b\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\f\u001a\u00020\u0004H\u0002J\u0016\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\nJ\u0018\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\b2\u0006\u0010\u0010\u001a\u00020\u0011H\u0016J\u0018\u0010\u0012\u001a\u00020\u000e2\u0006\u0010\u0013\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\nH\u0002J\u001c\u0010\u0012\u001a\u00020\u000e2\b\u0010\u0013\u001a\u0004\u0018\u00010\b2\b\u0010\u0014\u001a\u0004\u0018\u00010\bH\u0002J\u0018\u0010\u0015\u001a\u00020\u000e2\u0006\u0010\u0016\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\nH\u0002J\f\u0010\u0017\u001a\u00020\b*\u00020\bH\u0002J\f\u0010\u0018\u001a\u00020\u000e*\u00020\bH\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0019"}, d2 = {"Lokhttp3/internal/tls/OkHostnameVerifier;", "Ljavax/net/ssl/HostnameVerifier;", "()V", "ALT_DNS_NAME", "", "ALT_IPA_NAME", "allSubjectAltNames", "", "", "certificate", "Ljava/security/cert/X509Certificate;", "getSubjectAltNames", "type", "verify", "", "host", "session", "Ljavax/net/ssl/SSLSession;", "verifyHostname", "hostname", "pattern", "verifyIpAddress", "ipAddress", "asciiToLowercase", "isAscii", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class OkHostnameVerifier implements javax.net.ssl.HostnameVerifier {
    private static final int ALT_DNS_NAME = 2;
    private static final int ALT_IPA_NAME = 7;
    public static final okhttp3.internal.tls.OkHostnameVerifier INSTANCE = null;

    static {
            okhttp3.internal.tls.OkHostnameVerifier r0 = new okhttp3.internal.tls.OkHostnameVerifier
            r0.<init>()
            okhttp3.internal.tls.OkHostnameVerifier.INSTANCE = r0
            return
    }

    private OkHostnameVerifier() {
            r0 = this;
            r0.<init>()
            return
    }

    private final java.lang.String asciiToLowercase(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.isAscii(r3)
            if (r0 == 0) goto L16
            java.util.Locale r0 = java.util.Locale.US
            java.lang.String r1 = "US"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            java.lang.String r3 = r3.toLowerCase(r0)
            java.lang.String r0 = "this as java.lang.String).toLowerCase(locale)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r0)
        L16:
            return r3
    }

    private final java.util.List<java.lang.String> getSubjectAltNames(java.security.cert.X509Certificate r5, int r6) {
            r4 = this;
            java.util.Collection r5 = r5.getSubjectAlternativeNames()     // Catch: java.security.cert.CertificateParsingException -> L4b
            if (r5 != 0) goto Lb
            java.util.List r5 = kotlin.collections.CollectionsKt.emptyList()     // Catch: java.security.cert.CertificateParsingException -> L4b
            return r5
        Lb:
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.security.cert.CertificateParsingException -> L4b
            r0.<init>()     // Catch: java.security.cert.CertificateParsingException -> L4b
            java.util.List r0 = (java.util.List) r0     // Catch: java.security.cert.CertificateParsingException -> L4b
            java.util.Iterator r5 = r5.iterator()     // Catch: java.security.cert.CertificateParsingException -> L4b
        L16:
            boolean r1 = r5.hasNext()     // Catch: java.security.cert.CertificateParsingException -> L4b
            if (r1 == 0) goto L4a
            java.lang.Object r1 = r5.next()     // Catch: java.security.cert.CertificateParsingException -> L4b
            java.util.List r1 = (java.util.List) r1     // Catch: java.security.cert.CertificateParsingException -> L4b
            if (r1 == 0) goto L16
            int r2 = r1.size()     // Catch: java.security.cert.CertificateParsingException -> L4b
            r3 = 2
            if (r2 >= r3) goto L2c
            goto L16
        L2c:
            r2 = 0
            java.lang.Object r2 = r1.get(r2)     // Catch: java.security.cert.CertificateParsingException -> L4b
            java.lang.Integer r3 = java.lang.Integer.valueOf(r6)     // Catch: java.security.cert.CertificateParsingException -> L4b
            boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r2, r3)     // Catch: java.security.cert.CertificateParsingException -> L4b
            if (r2 != 0) goto L3c
            goto L16
        L3c:
            r2 = 1
            java.lang.Object r1 = r1.get(r2)     // Catch: java.security.cert.CertificateParsingException -> L4b
            if (r1 != 0) goto L44
            goto L16
        L44:
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.security.cert.CertificateParsingException -> L4b
            r0.add(r1)     // Catch: java.security.cert.CertificateParsingException -> L4b
            goto L16
        L4a:
            return r0
        L4b:
            java.util.List r5 = kotlin.collections.CollectionsKt.emptyList()
            return r5
    }

    private final boolean isAscii(java.lang.String r5) {
            r4 = this;
            int r0 = r5.length()
            r1 = 0
            r2 = 3
            r3 = 0
            long r2 = okio.Utf8.size$default(r5, r1, r1, r2, r3)
            int r5 = (int) r2
            if (r0 != r5) goto Lf
            r1 = 1
        Lf:
            return r1
    }

    private final boolean verifyHostname(java.lang.String r14, java.lang.String r15) {
            r13 = this;
            r0 = r14
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L10
            int r0 = r0.length()
            if (r0 != 0) goto Le
            goto L10
        Le:
            r0 = r2
            goto L11
        L10:
            r0 = r1
        L11:
            if (r0 != 0) goto Lc5
            java.lang.String r0 = "."
            r3 = 0
            r4 = 2
            boolean r5 = kotlin.text.StringsKt.startsWith$default(r14, r0, r2, r4, r3)
            if (r5 != 0) goto Lc5
            java.lang.String r5 = ".."
            boolean r6 = kotlin.text.StringsKt.endsWith$default(r14, r5, r2, r4, r3)
            if (r6 == 0) goto L27
            goto Lc5
        L27:
            r6 = r15
            java.lang.CharSequence r6 = (java.lang.CharSequence) r6
            if (r6 == 0) goto L35
            int r6 = r6.length()
            if (r6 != 0) goto L33
            goto L35
        L33:
            r6 = r2
            goto L36
        L35:
            r6 = r1
        L36:
            if (r6 != 0) goto Lc5
            boolean r6 = kotlin.text.StringsKt.startsWith$default(r15, r0, r2, r4, r3)
            if (r6 != 0) goto Lc5
            boolean r5 = kotlin.text.StringsKt.endsWith$default(r15, r5, r2, r4, r3)
            if (r5 == 0) goto L46
            goto Lc5
        L46:
            boolean r5 = kotlin.text.StringsKt.endsWith$default(r14, r0, r2, r4, r3)
            if (r5 != 0) goto L50
            java.lang.String r14 = kotlin.jvm.internal.Intrinsics.stringPlus(r14, r0)
        L50:
            boolean r5 = kotlin.text.StringsKt.endsWith$default(r15, r0, r2, r4, r3)
            if (r5 != 0) goto L5a
            java.lang.String r15 = kotlin.jvm.internal.Intrinsics.stringPlus(r15, r0)
        L5a:
            java.lang.String r15 = r13.asciiToLowercase(r15)
            r5 = r15
            java.lang.CharSequence r5 = (java.lang.CharSequence) r5
            java.lang.String r0 = "*"
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            boolean r0 = kotlin.text.StringsKt.contains$default(r5, r0, r2, r4, r3)
            if (r0 != 0) goto L70
            boolean r14 = kotlin.jvm.internal.Intrinsics.areEqual(r14, r15)
            return r14
        L70:
            java.lang.String r0 = "*."
            boolean r6 = kotlin.text.StringsKt.startsWith$default(r15, r0, r2, r4, r3)
            if (r6 == 0) goto Lc5
            r6 = 42
            r7 = 1
            r8 = 0
            r9 = 4
            r10 = 0
            int r5 = kotlin.text.StringsKt.indexOf$default(r5, r6, r7, r8, r9, r10)
            r6 = -1
            if (r5 == r6) goto L86
            goto Lc5
        L86:
            int r5 = r14.length()
            int r7 = r15.length()
            if (r5 >= r7) goto L91
            return r2
        L91:
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r15)
            if (r0 == 0) goto L98
            return r2
        L98:
            java.lang.String r15 = r15.substring(r1)
            java.lang.String r0 = "this as java.lang.String).substring(startIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r15, r0)
            boolean r0 = kotlin.text.StringsKt.endsWith$default(r14, r15, r2, r4, r3)
            if (r0 != 0) goto La8
            return r2
        La8:
            int r0 = r14.length()
            int r15 = r15.length()
            int r0 = r0 - r15
            if (r0 <= 0) goto Lc4
            r7 = r14
            java.lang.CharSequence r7 = (java.lang.CharSequence) r7
            r8 = 46
            int r9 = r0 + (-1)
            r10 = 0
            r11 = 4
            r12 = 0
            int r14 = kotlin.text.StringsKt.lastIndexOf$default(r7, r8, r9, r10, r11, r12)
            if (r14 == r6) goto Lc4
            return r2
        Lc4:
            return r1
        Lc5:
            return r2
    }

    private final boolean verifyHostname(java.lang.String r4, java.security.cert.X509Certificate r5) {
            r3 = this;
            java.lang.String r4 = r3.asciiToLowercase(r4)
            r0 = 2
            java.util.List r5 = r3.getSubjectAltNames(r5, r0)
            java.lang.Iterable r5 = (java.lang.Iterable) r5
            boolean r0 = r5 instanceof java.util.Collection
            r1 = 0
            if (r0 == 0) goto L1a
            r0 = r5
            java.util.Collection r0 = (java.util.Collection) r0
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L1a
            goto L33
        L1a:
            java.util.Iterator r5 = r5.iterator()
        L1e:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L33
            java.lang.Object r0 = r5.next()
            java.lang.String r0 = (java.lang.String) r0
            okhttp3.internal.tls.OkHostnameVerifier r2 = okhttp3.internal.tls.OkHostnameVerifier.INSTANCE
            boolean r0 = r2.verifyHostname(r4, r0)
            if (r0 == 0) goto L1e
            r1 = 1
        L33:
            return r1
    }

    private final boolean verifyIpAddress(java.lang.String r3, java.security.cert.X509Certificate r4) {
            r2 = this;
            java.lang.String r3 = okhttp3.internal.HostnamesKt.toCanonicalHost(r3)
            r0 = 7
            java.util.List r4 = r2.getSubjectAltNames(r4, r0)
            java.lang.Iterable r4 = (java.lang.Iterable) r4
            boolean r0 = r4 instanceof java.util.Collection
            r1 = 0
            if (r0 == 0) goto L1a
            r0 = r4
            java.util.Collection r0 = (java.util.Collection) r0
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L1a
            goto L35
        L1a:
            java.util.Iterator r4 = r4.iterator()
        L1e:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L35
            java.lang.Object r0 = r4.next()
            java.lang.String r0 = (java.lang.String) r0
            java.lang.String r0 = okhttp3.internal.HostnamesKt.toCanonicalHost(r0)
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r0)
            if (r0 == 0) goto L1e
            r1 = 1
        L35:
            return r1
    }

    public final java.util.List<java.lang.String> allSubjectAltNames(java.security.cert.X509Certificate r3) {
            r2 = this;
            java.lang.String r0 = "certificate"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r0 = 7
            java.util.List r0 = r2.getSubjectAltNames(r3, r0)
            r1 = 2
            java.util.List r3 = r2.getSubjectAltNames(r3, r1)
            java.util.Collection r0 = (java.util.Collection) r0
            java.lang.Iterable r3 = (java.lang.Iterable) r3
            java.util.List r3 = kotlin.collections.CollectionsKt.plus(r0, r3)
            return r3
    }

    public final boolean verify(java.lang.String r2, java.security.cert.X509Certificate r3) {
            r1 = this;
            java.lang.String r0 = "host"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "certificate"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            boolean r0 = okhttp3.internal.Util.canParseAsIpAddress(r2)
            if (r0 == 0) goto L15
            boolean r2 = r1.verifyIpAddress(r2, r3)
            goto L19
        L15:
            boolean r2 = r1.verifyHostname(r2, r3)
        L19:
            return r2
    }

    @Override
    public boolean verify(java.lang.String r3, javax.net.ssl.SSLSession r4) {
            r2 = this;
            java.lang.String r0 = "host"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "session"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            boolean r0 = r2.isAscii(r3)
            r1 = 0
            if (r0 != 0) goto L12
            goto L2a
        L12:
            java.security.cert.Certificate[] r4 = r4.getPeerCertificates()     // Catch: javax.net.ssl.SSLException -> L2a
            r4 = r4[r1]     // Catch: javax.net.ssl.SSLException -> L2a
            if (r4 == 0) goto L22
            java.security.cert.X509Certificate r4 = (java.security.cert.X509Certificate) r4     // Catch: javax.net.ssl.SSLException -> L2a
            boolean r3 = r2.verify(r3, r4)     // Catch: javax.net.ssl.SSLException -> L2a
            r1 = r3
            goto L2a
        L22:
            java.lang.NullPointerException r3 = new java.lang.NullPointerException     // Catch: javax.net.ssl.SSLException -> L2a
            java.lang.String r4 = "null cannot be cast to non-null type java.security.cert.X509Certificate"
            r3.<init>(r4)     // Catch: javax.net.ssl.SSLException -> L2a
            throw r3     // Catch: javax.net.ssl.SSLException -> L2a
        L2a:
            return r1
    }
}
