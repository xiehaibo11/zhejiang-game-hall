package okhttp3.internal.connection;

@kotlin.Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0000\u0018\u00002\u00020\u0001B\u0013\u0012\f\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003¢\u0006\u0002\u0010\u0005J\u000e\u0010\u000b\u001a\u00020\u00042\u0006\u0010\f\u001a\u00020\rJ\u000e\u0010\u000e\u001a\u00020\u00072\u0006\u0010\u000f\u001a\u00020\u0010J\u0010\u0010\b\u001a\u00020\u00072\u0006\u0010\u0011\u001a\u00020\rH\u0002R\u0014\u0010\u0002\u001a\b\u0012\u0004\u0012\u00020\u00040\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\nX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0012"}, d2 = {"Lokhttp3/internal/connection/ConnectionSpecSelector;", "", "connectionSpecs", "", "Lokhttp3/ConnectionSpec;", "(Ljava/util/List;)V", "isFallback", "", "isFallbackPossible", "nextModeIndex", "", "configureSecureSocket", "sslSocket", "Ljavax/net/ssl/SSLSocket;", "connectionFailed", "e", "Ljava/io/IOException;", "socket", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class ConnectionSpecSelector {
    private final java.util.List<okhttp3.ConnectionSpec> connectionSpecs;
    private boolean isFallback;
    private boolean isFallbackPossible;
    private int nextModeIndex;

    public ConnectionSpecSelector(java.util.List<okhttp3.ConnectionSpec> r2) {
            r1 = this;
            java.lang.String r0 = "connectionSpecs"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.connectionSpecs = r2
            return
    }

    private final boolean isFallbackPossible(javax.net.ssl.SSLSocket r5) {
            r4 = this;
            int r0 = r4.nextModeIndex
            java.util.List<okhttp3.ConnectionSpec> r1 = r4.connectionSpecs
            int r1 = r1.size()
        L8:
            if (r0 >= r1) goto L1e
            int r2 = r0 + 1
            java.util.List<okhttp3.ConnectionSpec> r3 = r4.connectionSpecs
            java.lang.Object r0 = r3.get(r0)
            okhttp3.ConnectionSpec r0 = (okhttp3.ConnectionSpec) r0
            boolean r0 = r0.isCompatible(r5)
            if (r0 == 0) goto L1c
            r5 = 1
            return r5
        L1c:
            r0 = r2
            goto L8
        L1e:
            r5 = 0
            return r5
    }

    public final okhttp3.ConnectionSpec configureSecureSocket(javax.net.ssl.SSLSocket r5) throws java.io.IOException {
            r4 = this;
            java.lang.String r0 = "sslSocket"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            int r0 = r4.nextModeIndex
            java.util.List<okhttp3.ConnectionSpec> r1 = r4.connectionSpecs
            int r1 = r1.size()
        Ld:
            if (r0 >= r1) goto L24
            int r2 = r0 + 1
            java.util.List<okhttp3.ConnectionSpec> r3 = r4.connectionSpecs
            java.lang.Object r0 = r3.get(r0)
            okhttp3.ConnectionSpec r0 = (okhttp3.ConnectionSpec) r0
            boolean r3 = r0.isCompatible(r5)
            if (r3 == 0) goto L22
            r4.nextModeIndex = r2
            goto L25
        L22:
            r0 = r2
            goto Ld
        L24:
            r0 = 0
        L25:
            if (r0 == 0) goto L33
            boolean r1 = r4.isFallbackPossible(r5)
            r4.isFallbackPossible = r1
            boolean r1 = r4.isFallback
            r0.apply$okhttp(r5, r1)
            return r0
        L33:
            java.net.UnknownServiceException r0 = new java.net.UnknownServiceException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Unable to find acceptable protocols. isFallback="
            r1.append(r2)
            boolean r2 = r4.isFallback
            r1.append(r2)
            java.lang.String r2 = ", modes="
            r1.append(r2)
            java.util.List<okhttp3.ConnectionSpec> r2 = r4.connectionSpecs
            r1.append(r2)
            java.lang.String r2 = ", supported protocols="
            r1.append(r2)
            java.lang.String[] r5 = r5.getEnabledProtocols()
            kotlin.jvm.internal.Intrinsics.checkNotNull(r5)
            java.lang.String r5 = java.util.Arrays.toString(r5)
            java.lang.String r2 = "toString(this)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r2)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }

    public final boolean connectionFailed(java.io.IOException r4) {
            r3 = this;
            java.lang.String r0 = "e"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r0 = 1
            r3.isFallback = r0
            boolean r1 = r3.isFallbackPossible
            r2 = 0
            if (r1 != 0) goto Lf
        Ld:
            r0 = r2
            goto L2f
        Lf:
            boolean r1 = r4 instanceof java.net.ProtocolException
            if (r1 == 0) goto L14
            goto Ld
        L14:
            boolean r1 = r4 instanceof java.io.InterruptedIOException
            if (r1 == 0) goto L19
            goto Ld
        L19:
            boolean r1 = r4 instanceof javax.net.ssl.SSLHandshakeException
            if (r1 == 0) goto L26
            java.lang.Throwable r1 = r4.getCause()
            boolean r1 = r1 instanceof java.security.cert.CertificateException
            if (r1 == 0) goto L26
            goto Ld
        L26:
            boolean r1 = r4 instanceof javax.net.ssl.SSLPeerUnverifiedException
            if (r1 == 0) goto L2b
            goto Ld
        L2b:
            boolean r4 = r4 instanceof javax.net.ssl.SSLException
            if (r4 == 0) goto Ld
        L2f:
            return r0
    }
}
