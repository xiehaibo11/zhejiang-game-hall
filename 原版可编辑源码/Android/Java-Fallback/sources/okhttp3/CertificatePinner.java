package okhttp3;

@kotlin.Metadata(d1 = {"\u0000T\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\"\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0006\u0018\u0000 \"2\u00020\u0001:\u0003!\"#B!\b\u0000\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003\u0012\n\b\u0002\u0010\u0005\u001a\u0004\u0018\u00010\u0006¢\u0006\u0002\u0010\u0007J)\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f2\u0012\u0010\u0010\u001a\u000e\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00130\u00120\u0011H\u0000¢\u0006\u0002\b\u0014J)\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f2\u0012\u0010\u0015\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00170\u0016\"\u00020\u0017H\u0007¢\u0006\u0002\u0010\u0018J\u001c\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f2\f\u0010\u0015\u001a\b\u0012\u0004\u0012\u00020\u00170\u0012J\u0013\u0010\u0019\u001a\u00020\u001a2\b\u0010\u001b\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\u0014\u0010\u001c\u001a\b\u0012\u0004\u0012\u00020\u00040\u00122\u0006\u0010\u000e\u001a\u00020\u000fJ\b\u0010\u001d\u001a\u00020\u001eH\u0016J\u0015\u0010\u001f\u001a\u00020\u00002\u0006\u0010\u0005\u001a\u00020\u0006H\u0000¢\u0006\u0002\b R\u0016\u0010\u0005\u001a\u0004\u0018\u00010\u0006X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0017\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000b¨\u0006$"}, d2 = {"Lokhttp3/CertificatePinner;", "", "pins", "", "Lokhttp3/CertificatePinner$Pin;", "certificateChainCleaner", "Lokhttp3/internal/tls/CertificateChainCleaner;", "(Ljava/util/Set;Lokhttp3/internal/tls/CertificateChainCleaner;)V", "getCertificateChainCleaner$okhttp", "()Lokhttp3/internal/tls/CertificateChainCleaner;", "getPins", "()Ljava/util/Set;", "check", "", "hostname", "", "cleanedPeerCertificatesFn", "Lkotlin/Function0;", "", "Ljava/security/cert/X509Certificate;", "check$okhttp", "peerCertificates", "", "Ljava/security/cert/Certificate;", "(Ljava/lang/String;[Ljava/security/cert/Certificate;)V", "equals", "", "other", "findMatchingPins", "hashCode", "", "withCertificateChainCleaner", "withCertificateChainCleaner$okhttp", "Builder", "Companion", "Pin", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class CertificatePinner {
    public static final okhttp3.CertificatePinner.Companion Companion = null;
    public static final okhttp3.CertificatePinner DEFAULT = null;
    private final okhttp3.internal.tls.CertificateChainCleaner certificateChainCleaner;
    private final java.util.Set<okhttp3.CertificatePinner.Pin> pins;

    @kotlin.Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010!\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u000e\n\u0002\u0010\u0011\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J'\u0010\b\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\n2\u0012\u0010\u0003\u001a\n\u0012\u0006\b\u0001\u0012\u00020\n0\u000b\"\u00020\n¢\u0006\u0002\u0010\fJ\u0006\u0010\r\u001a\u00020\u000eR\u0017\u0010\u0003\u001a\b\u0012\u0004\u0012\u00020\u00050\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0007¨\u0006\u000f"}, d2 = {"Lokhttp3/CertificatePinner$Builder;", "", "()V", "pins", "", "Lokhttp3/CertificatePinner$Pin;", "getPins", "()Ljava/util/List;", "add", "pattern", "", "", "(Ljava/lang/String;[Ljava/lang/String;)Lokhttp3/CertificatePinner$Builder;", "build", "Lokhttp3/CertificatePinner;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Builder {
        private final java.util.List<okhttp3.CertificatePinner.Pin> pins;

        public Builder() {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                java.util.List r0 = (java.util.List) r0
                r1.pins = r0
                return
        }

        public final okhttp3.CertificatePinner.Builder add(java.lang.String r7, java.lang.String... r8) {
                r6 = this;
                java.lang.String r0 = "pattern"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
                java.lang.String r0 = "pins"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                r0 = r6
                okhttp3.CertificatePinner$Builder r0 = (okhttp3.CertificatePinner.Builder) r0
                int r1 = r8.length
                r2 = 0
            Lf:
                if (r2 >= r1) goto L22
                r3 = r8[r2]
                int r2 = r2 + 1
                java.util.List r4 = r0.getPins()
                okhttp3.CertificatePinner$Pin r5 = new okhttp3.CertificatePinner$Pin
                r5.<init>(r7, r3)
                r4.add(r5)
                goto Lf
            L22:
                return r0
        }

        public final okhttp3.CertificatePinner build() {
                r4 = this;
                okhttp3.CertificatePinner r0 = new okhttp3.CertificatePinner
                java.util.List<okhttp3.CertificatePinner$Pin> r1 = r4.pins
                java.lang.Iterable r1 = (java.lang.Iterable) r1
                java.util.Set r1 = kotlin.collections.CollectionsKt.toSet(r1)
                r2 = 0
                r3 = 2
                r0.<init>(r1, r2, r3, r2)
                return r0
        }

        public final java.util.List<okhttp3.CertificatePinner.Pin> getPins() {
                r1 = this;
                java.util.List<okhttp3.CertificatePinner$Pin> r0 = r1.pins
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000*\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0010\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\bH\u0007J\f\u0010\t\u001a\u00020\n*\u00020\u000bH\u0007J\f\u0010\f\u001a\u00020\n*\u00020\u000bH\u0007R\u0010\u0010\u0003\u001a\u00020\u00048\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"Lokhttp3/CertificatePinner$Companion;", "", "()V", "DEFAULT", "Lokhttp3/CertificatePinner;", "pin", "", "certificate", "Ljava/security/cert/Certificate;", "sha1Hash", "Lokio/ByteString;", "Ljava/security/cert/X509Certificate;", "sha256Hash", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @kotlin.jvm.JvmStatic
        public final java.lang.String pin(java.security.cert.Certificate r2) {
                r1 = this;
                java.lang.String r0 = "certificate"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                boolean r0 = r2 instanceof java.security.cert.X509Certificate
                if (r0 == 0) goto L1a
                java.security.cert.X509Certificate r2 = (java.security.cert.X509Certificate) r2
                okio.ByteString r2 = r1.sha256Hash(r2)
                java.lang.String r2 = r2.base64()
                java.lang.String r0 = "sha256/"
                java.lang.String r2 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r2)
                return r2
            L1a:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "Certificate pinning requires X509 certificates"
                java.lang.String r0 = r0.toString()
                r2.<init>(r0)
                throw r2
        }

        @kotlin.jvm.JvmStatic
        public final okio.ByteString sha1Hash(java.security.cert.X509Certificate r8) {
                r7 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                okio.ByteString$Companion r1 = okio.ByteString.Companion
                java.security.PublicKey r8 = r8.getPublicKey()
                byte[] r2 = r8.getEncoded()
                java.lang.String r8 = "publicKey.encoded"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r8)
                r3 = 0
                r4 = 0
                r5 = 3
                r6 = 0
                okio.ByteString r8 = okio.ByteString.Companion.of$default(r1, r2, r3, r4, r5, r6)
                okio.ByteString r8 = r8.sha1()
                return r8
        }

        @kotlin.jvm.JvmStatic
        public final okio.ByteString sha256Hash(java.security.cert.X509Certificate r8) {
                r7 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                okio.ByteString$Companion r1 = okio.ByteString.Companion
                java.security.PublicKey r8 = r8.getPublicKey()
                byte[] r2 = r8.getEncoded()
                java.lang.String r8 = "publicKey.encoded"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r8)
                r3 = 0
                r4 = 0
                r5 = 3
                r6 = 0
                okio.ByteString r8 = okio.ByteString.Companion.of$default(r1, r2, r3, r4, r5, r6)
                okio.ByteString r8 = r8.sha256()
                return r8
        }
    }

    @kotlin.Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u00002\u00020\u0001B\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003¢\u0006\u0002\u0010\u0005J\u0013\u0010\u000e\u001a\u00020\u000f2\b\u0010\u0010\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\b\u0010\u0011\u001a\u00020\u0012H\u0016J\u000e\u0010\u0013\u001a\u00020\u000f2\u0006\u0010\u0014\u001a\u00020\u0015J\u000e\u0010\u0016\u001a\u00020\u000f2\u0006\u0010\u0017\u001a\u00020\u0003J\b\u0010\u0018\u001a\u00020\u0003H\u0016R\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010\tR\u0011\u0010\n\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\f¨\u0006\u0019"}, d2 = {"Lokhttp3/CertificatePinner$Pin;", "", "pattern", "", "pin", "(Ljava/lang/String;Ljava/lang/String;)V", "hash", "Lokio/ByteString;", "getHash", "()Lokio/ByteString;", "hashAlgorithm", "getHashAlgorithm", "()Ljava/lang/String;", "getPattern", "equals", "", "other", "hashCode", "", "matchesCertificate", "certificate", "Ljava/security/cert/X509Certificate;", "matchesHostname", "hostname", "toString", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Pin {
        private final okio.ByteString hash;
        private final java.lang.String hashAlgorithm;
        private final java.lang.String pattern;

        public Pin(java.lang.String r12, java.lang.String r13) {
                r11 = this;
                java.lang.String r0 = "pattern"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
                java.lang.String r0 = "pin"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r13, r0)
                r11.<init>()
                r0 = 0
                r1 = 2
                r2 = 0
                java.lang.String r3 = "*."
                boolean r3 = kotlin.text.StringsKt.startsWith$default(r12, r3, r2, r1, r0)
                r4 = -1
                if (r3 == 0) goto L28
                r5 = r12
                java.lang.CharSequence r5 = (java.lang.CharSequence) r5
                r7 = 1
                r8 = 0
                r9 = 4
                r10 = 0
                java.lang.String r6 = "*"
                int r3 = kotlin.text.StringsKt.indexOf$default(r5, r6, r7, r8, r9, r10)
                if (r3 == r4) goto L4e
            L28:
                java.lang.String r3 = "**."
                boolean r3 = kotlin.text.StringsKt.startsWith$default(r12, r3, r2, r1, r0)
                if (r3 == 0) goto L3f
                r5 = r12
                java.lang.CharSequence r5 = (java.lang.CharSequence) r5
                r7 = 2
                r8 = 0
                r9 = 4
                r10 = 0
                java.lang.String r6 = "*"
                int r3 = kotlin.text.StringsKt.indexOf$default(r5, r6, r7, r8, r9, r10)
                if (r3 == r4) goto L4e
            L3f:
                r5 = r12
                java.lang.CharSequence r5 = (java.lang.CharSequence) r5
                r7 = 0
                r8 = 0
                r9 = 6
                r10 = 0
                java.lang.String r6 = "*"
                int r3 = kotlin.text.StringsKt.indexOf$default(r5, r6, r7, r8, r9, r10)
                if (r3 != r4) goto L50
            L4e:
                r3 = 1
                goto L51
            L50:
                r3 = r2
            L51:
                if (r3 == 0) goto Lc9
                java.lang.String r3 = okhttp3.internal.HostnamesKt.toCanonicalHost(r12)
                if (r3 == 0) goto Lbd
                r11.pattern = r3
                java.lang.String r12 = "sha1/"
                boolean r12 = kotlin.text.StringsKt.startsWith$default(r13, r12, r2, r1, r0)
                java.lang.String r3 = "Invalid pin hash: "
                java.lang.String r4 = "this as java.lang.String).substring(startIndex)"
                if (r12 == 0) goto L88
                java.lang.String r12 = "sha1"
                r11.hashAlgorithm = r12
                okio.ByteString$Companion r12 = okio.ByteString.Companion
                r0 = 5
                java.lang.String r0 = r13.substring(r0)
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r4)
                okio.ByteString r12 = r12.decodeBase64(r0)
                if (r12 == 0) goto L7e
                r11.hash = r12
                goto La6
            L7e:
                java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
                java.lang.String r13 = kotlin.jvm.internal.Intrinsics.stringPlus(r3, r13)
                r12.<init>(r13)
                throw r12
            L88:
                java.lang.String r12 = "sha256/"
                boolean r12 = kotlin.text.StringsKt.startsWith$default(r13, r12, r2, r1, r0)
                if (r12 == 0) goto Lb1
                java.lang.String r12 = "sha256"
                r11.hashAlgorithm = r12
                okio.ByteString$Companion r12 = okio.ByteString.Companion
                r0 = 7
                java.lang.String r0 = r13.substring(r0)
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r4)
                okio.ByteString r12 = r12.decodeBase64(r0)
                if (r12 == 0) goto La7
                r11.hash = r12
            La6:
                return
            La7:
                java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
                java.lang.String r13 = kotlin.jvm.internal.Intrinsics.stringPlus(r3, r13)
                r12.<init>(r13)
                throw r12
            Lb1:
                java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "pins must start with 'sha256/' or 'sha1/': "
                java.lang.String r13 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r13)
                r12.<init>(r13)
                throw r12
            Lbd:
                java.lang.IllegalArgumentException r13 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "Invalid pattern: "
                java.lang.String r12 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r12)
                r13.<init>(r12)
                throw r13
            Lc9:
                java.lang.String r13 = "Unexpected pattern: "
                java.lang.String r12 = kotlin.jvm.internal.Intrinsics.stringPlus(r13, r12)
                java.lang.IllegalArgumentException r13 = new java.lang.IllegalArgumentException
                java.lang.String r12 = r12.toString()
                r13.<init>(r12)
                throw r13
        }

        public boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                boolean r1 = r5 instanceof okhttp3.CertificatePinner.Pin
                r2 = 0
                if (r1 != 0) goto La
                return r2
            La:
                java.lang.String r1 = r4.pattern
                okhttp3.CertificatePinner$Pin r5 = (okhttp3.CertificatePinner.Pin) r5
                java.lang.String r3 = r5.pattern
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r3)
                if (r1 != 0) goto L17
                return r2
            L17:
                java.lang.String r1 = r4.hashAlgorithm
                java.lang.String r3 = r5.hashAlgorithm
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r3)
                if (r1 != 0) goto L22
                return r2
            L22:
                okio.ByteString r1 = r4.hash
                okio.ByteString r5 = r5.hash
                boolean r5 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r5)
                if (r5 != 0) goto L2d
                return r2
            L2d:
                return r0
        }

        public final okio.ByteString getHash() {
                r1 = this;
                okio.ByteString r0 = r1.hash
                return r0
        }

        public final java.lang.String getHashAlgorithm() {
                r1 = this;
                java.lang.String r0 = r1.hashAlgorithm
                return r0
        }

        public final java.lang.String getPattern() {
                r1 = this;
                java.lang.String r0 = r1.pattern
                return r0
        }

        public int hashCode() {
                r2 = this;
                java.lang.String r0 = r2.pattern
                int r0 = r0.hashCode()
                int r0 = r0 * 31
                java.lang.String r1 = r2.hashAlgorithm
                int r1 = r1.hashCode()
                int r0 = r0 + r1
                int r0 = r0 * 31
                okio.ByteString r1 = r2.hash
                int r1 = r1.hashCode()
                int r0 = r0 + r1
                return r0
        }

        public final boolean matchesCertificate(java.security.cert.X509Certificate r3) {
                r2 = this;
                java.lang.String r0 = "certificate"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                java.lang.String r0 = r2.hashAlgorithm
                java.lang.String r1 = "sha256"
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
                if (r1 == 0) goto L1c
                okio.ByteString r0 = r2.hash
                okhttp3.CertificatePinner$Companion r1 = okhttp3.CertificatePinner.Companion
                okio.ByteString r3 = r1.sha256Hash(r3)
                boolean r3 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r3)
                goto L32
            L1c:
                java.lang.String r1 = "sha1"
                boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
                if (r0 == 0) goto L31
                okio.ByteString r0 = r2.hash
                okhttp3.CertificatePinner$Companion r1 = okhttp3.CertificatePinner.Companion
                okio.ByteString r3 = r1.sha1Hash(r3)
                boolean r3 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r3)
                goto L32
            L31:
                r3 = 0
            L32:
                return r3
        }

        public final boolean matchesHostname(java.lang.String r14) {
                r13 = this;
                java.lang.String r0 = "hostname"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r14, r0)
                java.lang.String r0 = r13.pattern
                r1 = 0
                r2 = 2
                r3 = 0
                java.lang.String r4 = "**."
                boolean r0 = kotlin.text.StringsKt.startsWith$default(r0, r4, r3, r2, r1)
                r4 = 1
                if (r0 == 0) goto L41
                java.lang.String r0 = r13.pattern
                int r0 = r0.length()
                int r9 = r0 + (-3)
                int r0 = r14.length()
                int r0 = r0 - r9
                int r1 = r14.length()
                int r6 = r1 - r9
                java.lang.String r7 = r13.pattern
                r8 = 3
                r10 = 0
                r11 = 16
                r12 = 0
                r5 = r14
                boolean r1 = kotlin.text.StringsKt.regionMatches$default(r5, r6, r7, r8, r9, r10, r11, r12)
                if (r1 == 0) goto L84
                if (r0 == 0) goto L3f
                int r0 = r0 - r4
                char r14 = r14.charAt(r0)
                r0 = 46
                if (r14 != r0) goto L84
            L3f:
                r3 = r4
                goto L84
            L41:
                java.lang.String r0 = r13.pattern
                java.lang.String r5 = "*."
                boolean r0 = kotlin.text.StringsKt.startsWith$default(r0, r5, r3, r2, r1)
                if (r0 == 0) goto L7e
                java.lang.String r0 = r13.pattern
                int r0 = r0.length()
                int r9 = r0 + (-1)
                int r0 = r14.length()
                int r0 = r0 - r9
                int r1 = r14.length()
                int r6 = r1 - r9
                java.lang.String r7 = r13.pattern
                r8 = 1
                r10 = 0
                r11 = 16
                r12 = 0
                r5 = r14
                boolean r1 = kotlin.text.StringsKt.regionMatches$default(r5, r6, r7, r8, r9, r10, r11, r12)
                if (r1 == 0) goto L84
                r5 = r14
                java.lang.CharSequence r5 = (java.lang.CharSequence) r5
                r6 = 46
                int r7 = r0 + (-1)
                r8 = 0
                r9 = 4
                r10 = 0
                int r14 = kotlin.text.StringsKt.lastIndexOf$default(r5, r6, r7, r8, r9, r10)
                r0 = -1
                if (r14 != r0) goto L84
                goto L3f
            L7e:
                java.lang.String r0 = r13.pattern
                boolean r3 = kotlin.jvm.internal.Intrinsics.areEqual(r14, r0)
            L84:
                return r3
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = r2.hashAlgorithm
                r0.append(r1)
                r1 = 47
                r0.append(r1)
                okio.ByteString r1 = r2.hash
                java.lang.String r1 = r1.base64()
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }


    static {
            okhttp3.CertificatePinner$Companion r0 = new okhttp3.CertificatePinner$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.CertificatePinner.Companion = r0
            okhttp3.CertificatePinner$Builder r0 = new okhttp3.CertificatePinner$Builder
            r0.<init>()
            okhttp3.CertificatePinner r0 = r0.build()
            okhttp3.CertificatePinner.DEFAULT = r0
            return
    }

    public CertificatePinner(java.util.Set<okhttp3.CertificatePinner.Pin> r2, okhttp3.internal.tls.CertificateChainCleaner r3) {
            r1 = this;
            java.lang.String r0 = "pins"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.pins = r2
            r1.certificateChainCleaner = r3
            return
    }

    public CertificatePinner(java.util.Set r1, okhttp3.internal.tls.CertificateChainCleaner r2, int r3, kotlin.jvm.internal.DefaultConstructorMarker r4) {
            r0 = this;
            r3 = r3 & 2
            if (r3 == 0) goto L5
            r2 = 0
        L5:
            r0.<init>(r1, r2)
            return
    }

    @kotlin.jvm.JvmStatic
    public static final java.lang.String pin(java.security.cert.Certificate r1) {
            okhttp3.CertificatePinner$Companion r0 = okhttp3.CertificatePinner.Companion
            java.lang.String r1 = r0.pin(r1)
            return r1
    }

    @kotlin.jvm.JvmStatic
    public static final okio.ByteString sha1Hash(java.security.cert.X509Certificate r1) {
            okhttp3.CertificatePinner$Companion r0 = okhttp3.CertificatePinner.Companion
            okio.ByteString r1 = r0.sha1Hash(r1)
            return r1
    }

    @kotlin.jvm.JvmStatic
    public static final okio.ByteString sha256Hash(java.security.cert.X509Certificate r1) {
            okhttp3.CertificatePinner$Companion r0 = okhttp3.CertificatePinner.Companion
            okio.ByteString r1 = r0.sha256Hash(r1)
            return r1
    }

    public final void check(java.lang.String r2, java.util.List<? extends java.security.cert.Certificate> r3) throws javax.net.ssl.SSLPeerUnverifiedException {
            r1 = this;
            java.lang.String r0 = "hostname"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "peerCertificates"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okhttp3.CertificatePinner$check$1 r0 = new okhttp3.CertificatePinner$check$1
            r0.<init>(r1, r3, r2)
            kotlin.jvm.functions.Function0 r0 = (kotlin.jvm.functions.Function0) r0
            r1.check$okhttp(r2, r0)
            return
    }

    @kotlin.Deprecated(message = "replaced with {@link #check(String, List)}.", replaceWith = @kotlin.ReplaceWith(expression = "check(hostname, peerCertificates.toList())", imports = {}))
    public final void check(java.lang.String r2, java.security.cert.Certificate... r3) throws javax.net.ssl.SSLPeerUnverifiedException {
            r1 = this;
            java.lang.String r0 = "hostname"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "peerCertificates"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.util.List r3 = kotlin.collections.ArraysKt.toList(r3)
            r1.check(r2, r3)
            return
    }

    public final void check$okhttp(java.lang.String r10, kotlin.jvm.functions.Function0<? extends java.util.List<? extends java.security.cert.X509Certificate>> r11) {
            r9 = this;
            java.lang.String r0 = "hostname"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            java.lang.String r0 = "cleanedPeerCertificatesFn"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            java.util.List r0 = r9.findMatchingPins(r10)
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto L15
            return
        L15:
            java.lang.Object r11 = r11.invoke()
            java.util.List r11 = (java.util.List) r11
            java.util.Iterator r1 = r11.iterator()
        L1f:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L87
            java.lang.Object r2 = r1.next()
            java.security.cert.X509Certificate r2 = (java.security.cert.X509Certificate) r2
            java.util.Iterator r3 = r0.iterator()
            r4 = 0
            r5 = r4
        L31:
            boolean r6 = r3.hasNext()
            if (r6 == 0) goto L1f
            java.lang.Object r6 = r3.next()
            okhttp3.CertificatePinner$Pin r6 = (okhttp3.CertificatePinner.Pin) r6
            java.lang.String r7 = r6.getHashAlgorithm()
            java.lang.String r8 = "sha256"
            boolean r8 = kotlin.jvm.internal.Intrinsics.areEqual(r7, r8)
            if (r8 == 0) goto L5c
            if (r4 != 0) goto L51
            okhttp3.CertificatePinner$Companion r4 = okhttp3.CertificatePinner.Companion
            okio.ByteString r4 = r4.sha256Hash(r2)
        L51:
            okio.ByteString r6 = r6.getHash()
            boolean r6 = kotlin.jvm.internal.Intrinsics.areEqual(r6, r4)
            if (r6 == 0) goto L31
            return
        L5c:
            java.lang.String r8 = "sha1"
            boolean r7 = kotlin.jvm.internal.Intrinsics.areEqual(r7, r8)
            if (r7 == 0) goto L77
            if (r5 != 0) goto L6c
            okhttp3.CertificatePinner$Companion r5 = okhttp3.CertificatePinner.Companion
            okio.ByteString r5 = r5.sha1Hash(r2)
        L6c:
            okio.ByteString r6 = r6.getHash()
            boolean r6 = kotlin.jvm.internal.Intrinsics.areEqual(r6, r5)
            if (r6 == 0) goto L31
            return
        L77:
            java.lang.AssertionError r10 = new java.lang.AssertionError
            java.lang.String r11 = r6.getHashAlgorithm()
            java.lang.String r0 = "unsupported hashAlgorithm: "
            java.lang.String r11 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r11)
            r10.<init>(r11)
            throw r10
        L87:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Certificate pinning failure!"
            r1.append(r2)
            java.lang.String r2 = "\n  Peer certificate chain:"
            r1.append(r2)
            java.util.Iterator r11 = r11.iterator()
        L9a:
            boolean r2 = r11.hasNext()
            java.lang.String r3 = "\n    "
            if (r2 == 0) goto Lc8
            java.lang.Object r2 = r11.next()
            java.security.cert.X509Certificate r2 = (java.security.cert.X509Certificate) r2
            r1.append(r3)
            okhttp3.CertificatePinner$Companion r3 = okhttp3.CertificatePinner.Companion
            r4 = r2
            java.security.cert.Certificate r4 = (java.security.cert.Certificate) r4
            java.lang.String r3 = r3.pin(r4)
            r1.append(r3)
            java.lang.String r3 = ": "
            r1.append(r3)
            java.security.Principal r2 = r2.getSubjectDN()
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            goto L9a
        Lc8:
            java.lang.String r11 = "\n  Pinned certificates for "
            r1.append(r11)
            r1.append(r10)
            java.lang.String r10 = ":"
            r1.append(r10)
            java.util.Iterator r10 = r0.iterator()
        Ld9:
            boolean r11 = r10.hasNext()
            if (r11 == 0) goto Lec
            java.lang.Object r11 = r10.next()
            okhttp3.CertificatePinner$Pin r11 = (okhttp3.CertificatePinner.Pin) r11
            r1.append(r3)
            r1.append(r11)
            goto Ld9
        Lec:
            java.lang.String r10 = r1.toString()
            java.lang.String r11 = "StringBuilder().apply(builderAction).toString()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r10, r11)
            javax.net.ssl.SSLPeerUnverifiedException r11 = new javax.net.ssl.SSLPeerUnverifiedException
            r11.<init>(r10)
            throw r11
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            boolean r0 = r3 instanceof okhttp3.CertificatePinner
            if (r0 == 0) goto L1c
            okhttp3.CertificatePinner r3 = (okhttp3.CertificatePinner) r3
            java.util.Set<okhttp3.CertificatePinner$Pin> r0 = r3.pins
            java.util.Set<okhttp3.CertificatePinner$Pin> r1 = r2.pins
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            if (r0 == 0) goto L1c
            okhttp3.internal.tls.CertificateChainCleaner r3 = r3.certificateChainCleaner
            okhttp3.internal.tls.CertificateChainCleaner r0 = r2.certificateChainCleaner
            boolean r3 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r0)
            if (r3 == 0) goto L1c
            r3 = 1
            goto L1d
        L1c:
            r3 = 0
        L1d:
            return r3
    }

    public final java.util.List<okhttp3.CertificatePinner.Pin> findMatchingPins(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = "hostname"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.util.Set<okhttp3.CertificatePinner$Pin> r0 = r4.pins
            java.lang.Iterable r0 = (java.lang.Iterable) r0
            java.util.List r1 = kotlin.collections.CollectionsKt.emptyList()
            java.util.Iterator r0 = r0.iterator()
        L11:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L39
            java.lang.Object r2 = r0.next()
            r3 = r2
            okhttp3.CertificatePinner$Pin r3 = (okhttp3.CertificatePinner.Pin) r3
            boolean r3 = r3.matchesHostname(r5)
            if (r3 == 0) goto L11
            boolean r3 = r1.isEmpty()
            if (r3 == 0) goto L31
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            java.util.List r1 = (java.util.List) r1
        L31:
            java.util.List r3 = kotlin.jvm.internal.TypeIntrinsics.asMutableList(r1)
            r3.add(r2)
            goto L11
        L39:
            return r1
    }

    public final okhttp3.internal.tls.CertificateChainCleaner getCertificateChainCleaner$okhttp() {
            r1 = this;
            okhttp3.internal.tls.CertificateChainCleaner r0 = r1.certificateChainCleaner
            return r0
    }

    public final java.util.Set<okhttp3.CertificatePinner.Pin> getPins() {
            r1 = this;
            java.util.Set<okhttp3.CertificatePinner$Pin> r0 = r1.pins
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.util.Set<okhttp3.CertificatePinner$Pin> r0 = r2.pins
            int r0 = r0.hashCode()
            r1 = 1517(0x5ed, float:2.126E-42)
            int r1 = r1 + r0
            int r1 = r1 * 41
            okhttp3.internal.tls.CertificateChainCleaner r0 = r2.certificateChainCleaner
            if (r0 == 0) goto L14
            int r0 = r0.hashCode()
            goto L15
        L14:
            r0 = 0
        L15:
            int r1 = r1 + r0
            return r1
    }

    public final okhttp3.CertificatePinner withCertificateChainCleaner$okhttp(okhttp3.internal.tls.CertificateChainCleaner r3) {
            r2 = this;
            java.lang.String r0 = "certificateChainCleaner"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okhttp3.internal.tls.CertificateChainCleaner r0 = r2.certificateChainCleaner
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r3)
            if (r0 == 0) goto Lf
            r0 = r2
            goto L16
        Lf:
            okhttp3.CertificatePinner r0 = new okhttp3.CertificatePinner
            java.util.Set<okhttp3.CertificatePinner$Pin> r1 = r2.pins
            r0.<init>(r1, r3)
        L16:
            return r0
    }
}
