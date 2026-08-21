package okhttp3.internal.tls;

@kotlin.Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\u0018\u0000 \u00152\u00020\u0001:\u0001\u0015B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J$\u0010\u0005\u001a\b\u0012\u0004\u0012\u00020\u00070\u00062\f\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00070\u00062\u0006\u0010\t\u001a\u00020\nH\u0016J\u0013\u0010\u000b\u001a\u00020\f2\b\u0010\r\u001a\u0004\u0018\u00010\u000eH\u0096\u0002J\b\u0010\u000f\u001a\u00020\u0010H\u0016J\u0018\u0010\u0011\u001a\u00020\f2\u0006\u0010\u0012\u001a\u00020\u00132\u0006\u0010\u0014\u001a\u00020\u0013H\u0002R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u0016"}, d2 = {"Lokhttp3/internal/tls/BasicCertificateChainCleaner;", "Lokhttp3/internal/tls/CertificateChainCleaner;", "trustRootIndex", "Lokhttp3/internal/tls/TrustRootIndex;", "(Lokhttp3/internal/tls/TrustRootIndex;)V", "clean", "", "Ljava/security/cert/Certificate;", "chain", "hostname", "", "equals", "", "other", "", "hashCode", "", "verifySignature", "toVerify", "Ljava/security/cert/X509Certificate;", "signingCert", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class BasicCertificateChainCleaner extends okhttp3.internal.tls.CertificateChainCleaner {
    public static final okhttp3.internal.tls.BasicCertificateChainCleaner.Companion Companion = null;
    private static final int MAX_SIGNERS = 9;
    private final okhttp3.internal.tls.TrustRootIndex trustRootIndex;

    @kotlin.Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0005"}, d2 = {"Lokhttp3/internal/tls/BasicCertificateChainCleaner$Companion;", "", "()V", "MAX_SIGNERS", "", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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
    }

    static {
            okhttp3.internal.tls.BasicCertificateChainCleaner$Companion r0 = new okhttp3.internal.tls.BasicCertificateChainCleaner$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.tls.BasicCertificateChainCleaner.Companion = r0
            return
    }

    public BasicCertificateChainCleaner(okhttp3.internal.tls.TrustRootIndex r2) {
            r1 = this;
            java.lang.String r0 = "trustRootIndex"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.trustRootIndex = r2
            return
    }

    private final boolean verifySignature(java.security.cert.X509Certificate r3, java.security.cert.X509Certificate r4) {
            r2 = this;
            java.security.Principal r0 = r3.getIssuerDN()
            java.security.Principal r1 = r4.getSubjectDN()
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            r1 = 0
            if (r0 != 0) goto L10
            return r1
        L10:
            java.security.PublicKey r4 = r4.getPublicKey()     // Catch: java.security.GeneralSecurityException -> L18
            r3.verify(r4)     // Catch: java.security.GeneralSecurityException -> L18
            r1 = 1
        L18:
            return r1
    }

    @Override
    public java.util.List<java.security.cert.Certificate> clean(java.util.List<? extends java.security.cert.Certificate> r8, java.lang.String r9) throws javax.net.ssl.SSLPeerUnverifiedException {
            r7 = this;
            java.lang.String r0 = "chain"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.lang.String r0 = "hostname"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            java.util.ArrayDeque r9 = new java.util.ArrayDeque
            java.util.Collection r8 = (java.util.Collection) r8
            r9.<init>(r8)
            java.util.Deque r9 = (java.util.Deque) r9
            java.util.ArrayList r8 = new java.util.ArrayList
            r8.<init>()
            java.util.List r8 = (java.util.List) r8
            java.lang.Object r0 = r9.removeFirst()
            java.lang.String r1 = "queue.removeFirst()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            r8.add(r0)
            r0 = 0
            r1 = 1
            r2 = r0
        L29:
            r3 = 9
            if (r0 >= r3) goto L95
            int r0 = r0 + 1
            int r3 = r8.size()
            int r3 = r3 - r1
            java.lang.Object r3 = r8.get(r3)
            java.security.cert.X509Certificate r3 = (java.security.cert.X509Certificate) r3
            okhttp3.internal.tls.TrustRootIndex r4 = r7.trustRootIndex
            java.security.cert.X509Certificate r4 = r4.findByIssuerAndSignature(r3)
            if (r4 == 0) goto L5a
            int r2 = r8.size()
            if (r2 > r1) goto L4e
            boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r4)
            if (r2 != 0) goto L51
        L4e:
            r8.add(r4)
        L51:
            boolean r2 = r7.verifySignature(r4, r4)
            if (r2 == 0) goto L58
            return r8
        L58:
            r2 = r1
            goto L29
        L5a:
            java.util.Iterator r4 = r9.iterator()
            java.lang.String r5 = "queue.iterator()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r4, r5)
        L63:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L86
            java.lang.Object r5 = r4.next()
            if (r5 == 0) goto L7e
            java.security.cert.X509Certificate r5 = (java.security.cert.X509Certificate) r5
            boolean r6 = r7.verifySignature(r3, r5)
            if (r6 == 0) goto L63
            r4.remove()
            r8.add(r5)
            goto L29
        L7e:
            java.lang.NullPointerException r8 = new java.lang.NullPointerException
            java.lang.String r9 = "null cannot be cast to non-null type java.security.cert.X509Certificate"
            r8.<init>(r9)
            throw r8
        L86:
            if (r2 == 0) goto L89
            return r8
        L89:
            javax.net.ssl.SSLPeerUnverifiedException r8 = new javax.net.ssl.SSLPeerUnverifiedException
            java.lang.String r9 = "Failed to find a trusted cert that signed "
            java.lang.String r9 = kotlin.jvm.internal.Intrinsics.stringPlus(r9, r3)
            r8.<init>(r9)
            throw r8
        L95:
            javax.net.ssl.SSLPeerUnverifiedException r9 = new javax.net.ssl.SSLPeerUnverifiedException
            java.lang.String r0 = "Certificate chain too long: "
            java.lang.String r8 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r8)
            r9.<init>(r8)
            throw r9
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            r0 = 1
            if (r3 != r2) goto L4
            goto L16
        L4:
            boolean r1 = r3 instanceof okhttp3.internal.tls.BasicCertificateChainCleaner
            if (r1 == 0) goto L15
            okhttp3.internal.tls.BasicCertificateChainCleaner r3 = (okhttp3.internal.tls.BasicCertificateChainCleaner) r3
            okhttp3.internal.tls.TrustRootIndex r3 = r3.trustRootIndex
            okhttp3.internal.tls.TrustRootIndex r1 = r2.trustRootIndex
            boolean r3 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r1)
            if (r3 == 0) goto L15
            goto L16
        L15:
            r0 = 0
        L16:
            return r0
    }

    public int hashCode() {
            r1 = this;
            okhttp3.internal.tls.TrustRootIndex r0 = r1.trustRootIndex
            int r0 = r0.hashCode()
            return r0
    }
}
