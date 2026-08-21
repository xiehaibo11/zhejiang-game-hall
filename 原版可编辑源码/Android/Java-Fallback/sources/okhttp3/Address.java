package okhttp3;

@kotlin.Metadata(d1 = {"\u0000h\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\u000f\u0018\u00002\u00020\u0001By\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\b\u0010\n\u001a\u0004\u0018\u00010\u000b\u0012\b\u0010\f\u001a\u0004\u0018\u00010\r\u0012\b\u0010\u000e\u001a\u0004\u0018\u00010\u000f\u0012\u0006\u0010\u0010\u001a\u00020\u0011\u0012\b\u0010\u0012\u001a\u0004\u0018\u00010\u0013\u0012\f\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\u00160\u0015\u0012\f\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00180\u0015\u0012\u0006\u0010\u0019\u001a\u00020\u001a¢\u0006\u0002\u0010\u001bJ\u000f\u0010\u000e\u001a\u0004\u0018\u00010\u000fH\u0007¢\u0006\u0002\b(J\u0013\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00180\u0015H\u0007¢\u0006\u0002\b)J\r\u0010\u0006\u001a\u00020\u0007H\u0007¢\u0006\u0002\b*J\u0013\u0010+\u001a\u00020,2\b\u0010-\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\u0015\u0010.\u001a\u00020,2\u0006\u0010/\u001a\u00020\u0000H\u0000¢\u0006\u0002\b0J\b\u00101\u001a\u00020\u0005H\u0016J\u000f\u0010\f\u001a\u0004\u0018\u00010\rH\u0007¢\u0006\u0002\b2J\u0013\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\u00160\u0015H\u0007¢\u0006\u0002\b3J\u000f\u0010\u0012\u001a\u0004\u0018\u00010\u0013H\u0007¢\u0006\u0002\b4J\r\u0010\u0010\u001a\u00020\u0011H\u0007¢\u0006\u0002\b5J\r\u0010\u0019\u001a\u00020\u001aH\u0007¢\u0006\u0002\b6J\r\u0010\b\u001a\u00020\tH\u0007¢\u0006\u0002\b7J\u000f\u0010\n\u001a\u0004\u0018\u00010\u000bH\u0007¢\u0006\u0002\b8J\b\u00109\u001a\u00020\u0003H\u0016J\r\u0010%\u001a\u00020&H\u0007¢\u0006\u0002\b:R\u0015\u0010\u000e\u001a\u0004\u0018\u00010\u000f8\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u001cR\u0019\u0010\u0017\u001a\b\u0012\u0004\u0012\u00020\u00180\u00158G¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u001dR\u0013\u0010\u0006\u001a\u00020\u00078\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u001eR\u0015\u0010\f\u001a\u0004\u0018\u00010\r8\u0007¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\u001fR\u0019\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\u00160\u00158G¢\u0006\b\n\u0000\u001a\u0004\b\u0014\u0010\u001dR\u0015\u0010\u0012\u001a\u0004\u0018\u00010\u00138\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010 R\u0013\u0010\u0010\u001a\u00020\u00118\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010!R\u0013\u0010\u0019\u001a\u00020\u001a8\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\"R\u0013\u0010\b\u001a\u00020\t8\u0007¢\u0006\b\n\u0000\u001a\u0004\b\b\u0010#R\u0015\u0010\n\u001a\u0004\u0018\u00010\u000b8\u0007¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010$R\u0013\u0010%\u001a\u00020&8G¢\u0006\b\n\u0000\u001a\u0004\b%\u0010'¨\u0006;"}, d2 = {"Lokhttp3/Address;", "", "uriHost", "", "uriPort", "", "dns", "Lokhttp3/Dns;", "socketFactory", "Ljavax/net/SocketFactory;", "sslSocketFactory", "Ljavax/net/ssl/SSLSocketFactory;", "hostnameVerifier", "Ljavax/net/ssl/HostnameVerifier;", "certificatePinner", "Lokhttp3/CertificatePinner;", "proxyAuthenticator", "Lokhttp3/Authenticator;", "proxy", "Ljava/net/Proxy;", "protocols", "", "Lokhttp3/Protocol;", "connectionSpecs", "Lokhttp3/ConnectionSpec;", "proxySelector", "Ljava/net/ProxySelector;", "(Ljava/lang/String;ILokhttp3/Dns;Ljavax/net/SocketFactory;Ljavax/net/ssl/SSLSocketFactory;Ljavax/net/ssl/HostnameVerifier;Lokhttp3/CertificatePinner;Lokhttp3/Authenticator;Ljava/net/Proxy;Ljava/util/List;Ljava/util/List;Ljava/net/ProxySelector;)V", "()Lokhttp3/CertificatePinner;", "()Ljava/util/List;", "()Lokhttp3/Dns;", "()Ljavax/net/ssl/HostnameVerifier;", "()Ljava/net/Proxy;", "()Lokhttp3/Authenticator;", "()Ljava/net/ProxySelector;", "()Ljavax/net/SocketFactory;", "()Ljavax/net/ssl/SSLSocketFactory;", "url", "Lokhttp3/HttpUrl;", "()Lokhttp3/HttpUrl;", "-deprecated_certificatePinner", "-deprecated_connectionSpecs", "-deprecated_dns", "equals", "", "other", "equalsNonHost", "that", "equalsNonHost$okhttp", "hashCode", "-deprecated_hostnameVerifier", "-deprecated_protocols", "-deprecated_proxy", "-deprecated_proxyAuthenticator", "-deprecated_proxySelector", "-deprecated_socketFactory", "-deprecated_sslSocketFactory", "toString", "-deprecated_url", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class Address {
    private final okhttp3.CertificatePinner certificatePinner;
    private final java.util.List<okhttp3.ConnectionSpec> connectionSpecs;
    private final okhttp3.Dns dns;
    private final javax.net.ssl.HostnameVerifier hostnameVerifier;
    private final java.util.List<okhttp3.Protocol> protocols;
    private final java.net.Proxy proxy;
    private final okhttp3.Authenticator proxyAuthenticator;
    private final java.net.ProxySelector proxySelector;
    private final javax.net.SocketFactory socketFactory;
    private final javax.net.ssl.SSLSocketFactory sslSocketFactory;
    private final okhttp3.HttpUrl url;

    public Address(java.lang.String r2, int r3, okhttp3.Dns r4, javax.net.SocketFactory r5, javax.net.ssl.SSLSocketFactory r6, javax.net.ssl.HostnameVerifier r7, okhttp3.CertificatePinner r8, okhttp3.Authenticator r9, java.net.Proxy r10, java.util.List<? extends okhttp3.Protocol> r11, java.util.List<okhttp3.ConnectionSpec> r12, java.net.ProxySelector r13) {
            r1 = this;
            java.lang.String r0 = "uriHost"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "dns"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "socketFactory"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = "proxyAuthenticator"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            java.lang.String r0 = "protocols"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            java.lang.String r0 = "connectionSpecs"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            java.lang.String r0 = "proxySelector"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r13, r0)
            r1.<init>()
            r1.dns = r4
            r1.socketFactory = r5
            r1.sslSocketFactory = r6
            r1.hostnameVerifier = r7
            r1.certificatePinner = r8
            r1.proxyAuthenticator = r9
            r1.proxy = r10
            r1.proxySelector = r13
            okhttp3.HttpUrl$Builder r4 = new okhttp3.HttpUrl$Builder
            r4.<init>()
            javax.net.ssl.SSLSocketFactory r5 = r1.sslSocketFactory
            if (r5 == 0) goto L42
            java.lang.String r5 = "https"
            goto L44
        L42:
            java.lang.String r5 = "http"
        L44:
            okhttp3.HttpUrl$Builder r4 = r4.scheme(r5)
            okhttp3.HttpUrl$Builder r2 = r4.host(r2)
            okhttp3.HttpUrl$Builder r2 = r2.port(r3)
            okhttp3.HttpUrl r2 = r2.build()
            r1.url = r2
            java.util.List r2 = okhttp3.internal.Util.toImmutableList(r11)
            r1.protocols = r2
            java.util.List r2 = okhttp3.internal.Util.toImmutableList(r12)
            r1.connectionSpecs = r2
            return
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "certificatePinner", imports = {}))
    public final okhttp3.CertificatePinner -deprecated_certificatePinner() {
            r1 = this;
            okhttp3.CertificatePinner r0 = r1.certificatePinner
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "connectionSpecs", imports = {}))
    public final java.util.List<okhttp3.ConnectionSpec> -deprecated_connectionSpecs() {
            r1 = this;
            java.util.List<okhttp3.ConnectionSpec> r0 = r1.connectionSpecs
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "dns", imports = {}))
    public final okhttp3.Dns -deprecated_dns() {
            r1 = this;
            okhttp3.Dns r0 = r1.dns
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "hostnameVerifier", imports = {}))
    public final javax.net.ssl.HostnameVerifier -deprecated_hostnameVerifier() {
            r1 = this;
            javax.net.ssl.HostnameVerifier r0 = r1.hostnameVerifier
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "protocols", imports = {}))
    public final java.util.List<okhttp3.Protocol> -deprecated_protocols() {
            r1 = this;
            java.util.List<okhttp3.Protocol> r0 = r1.protocols
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "proxy", imports = {}))
    public final java.net.Proxy -deprecated_proxy() {
            r1 = this;
            java.net.Proxy r0 = r1.proxy
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "proxyAuthenticator", imports = {}))
    public final okhttp3.Authenticator -deprecated_proxyAuthenticator() {
            r1 = this;
            okhttp3.Authenticator r0 = r1.proxyAuthenticator
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "proxySelector", imports = {}))
    public final java.net.ProxySelector -deprecated_proxySelector() {
            r1 = this;
            java.net.ProxySelector r0 = r1.proxySelector
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "socketFactory", imports = {}))
    public final javax.net.SocketFactory -deprecated_socketFactory() {
            r1 = this;
            javax.net.SocketFactory r0 = r1.socketFactory
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "sslSocketFactory", imports = {}))
    public final javax.net.ssl.SSLSocketFactory -deprecated_sslSocketFactory() {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.sslSocketFactory
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "url", imports = {}))
    public final okhttp3.HttpUrl -deprecated_url() {
            r1 = this;
            okhttp3.HttpUrl r0 = r1.url
            return r0
    }

    public final okhttp3.CertificatePinner certificatePinner() {
            r1 = this;
            okhttp3.CertificatePinner r0 = r1.certificatePinner
            return r0
    }

    public final java.util.List<okhttp3.ConnectionSpec> connectionSpecs() {
            r1 = this;
            java.util.List<okhttp3.ConnectionSpec> r0 = r1.connectionSpecs
            return r0
    }

    public final okhttp3.Dns dns() {
            r1 = this;
            okhttp3.Dns r0 = r1.dns
            return r0
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            boolean r0 = r3 instanceof okhttp3.Address
            if (r0 == 0) goto L18
            okhttp3.HttpUrl r0 = r2.url
            okhttp3.Address r3 = (okhttp3.Address) r3
            okhttp3.HttpUrl r1 = r3.url
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            if (r0 == 0) goto L18
            boolean r3 = r2.equalsNonHost$okhttp(r3)
            if (r3 == 0) goto L18
            r3 = 1
            goto L19
        L18:
            r3 = 0
        L19:
            return r3
    }

    public final boolean equalsNonHost$okhttp(okhttp3.Address r3) {
            r2 = this;
            java.lang.String r0 = "that"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okhttp3.Dns r0 = r2.dns
            okhttp3.Dns r1 = r3.dns
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            if (r0 == 0) goto L6f
            okhttp3.Authenticator r0 = r2.proxyAuthenticator
            okhttp3.Authenticator r1 = r3.proxyAuthenticator
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            if (r0 == 0) goto L6f
            java.util.List<okhttp3.Protocol> r0 = r2.protocols
            java.util.List<okhttp3.Protocol> r1 = r3.protocols
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            if (r0 == 0) goto L6f
            java.util.List<okhttp3.ConnectionSpec> r0 = r2.connectionSpecs
            java.util.List<okhttp3.ConnectionSpec> r1 = r3.connectionSpecs
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            if (r0 == 0) goto L6f
            java.net.ProxySelector r0 = r2.proxySelector
            java.net.ProxySelector r1 = r3.proxySelector
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            if (r0 == 0) goto L6f
            java.net.Proxy r0 = r2.proxy
            java.net.Proxy r1 = r3.proxy
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            if (r0 == 0) goto L6f
            javax.net.ssl.SSLSocketFactory r0 = r2.sslSocketFactory
            javax.net.ssl.SSLSocketFactory r1 = r3.sslSocketFactory
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            if (r0 == 0) goto L6f
            javax.net.ssl.HostnameVerifier r0 = r2.hostnameVerifier
            javax.net.ssl.HostnameVerifier r1 = r3.hostnameVerifier
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            if (r0 == 0) goto L6f
            okhttp3.CertificatePinner r0 = r2.certificatePinner
            okhttp3.CertificatePinner r1 = r3.certificatePinner
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            if (r0 == 0) goto L6f
            okhttp3.HttpUrl r0 = r2.url
            int r0 = r0.port()
            okhttp3.HttpUrl r3 = r3.url
            int r3 = r3.port()
            if (r0 != r3) goto L6f
            r3 = 1
            goto L70
        L6f:
            r3 = 0
        L70:
            return r3
    }

    public int hashCode() {
            r2 = this;
            okhttp3.HttpUrl r0 = r2.url
            int r0 = r0.hashCode()
            r1 = 527(0x20f, float:7.38E-43)
            int r1 = r1 + r0
            int r1 = r1 * 31
            okhttp3.Dns r0 = r2.dns
            int r0 = r0.hashCode()
            int r1 = r1 + r0
            int r1 = r1 * 31
            okhttp3.Authenticator r0 = r2.proxyAuthenticator
            int r0 = r0.hashCode()
            int r1 = r1 + r0
            int r1 = r1 * 31
            java.util.List<okhttp3.Protocol> r0 = r2.protocols
            int r0 = r0.hashCode()
            int r1 = r1 + r0
            int r1 = r1 * 31
            java.util.List<okhttp3.ConnectionSpec> r0 = r2.connectionSpecs
            int r0 = r0.hashCode()
            int r1 = r1 + r0
            int r1 = r1 * 31
            java.net.ProxySelector r0 = r2.proxySelector
            int r0 = r0.hashCode()
            int r1 = r1 + r0
            int r1 = r1 * 31
            java.net.Proxy r0 = r2.proxy
            int r0 = java.util.Objects.hashCode(r0)
            int r1 = r1 + r0
            int r1 = r1 * 31
            javax.net.ssl.SSLSocketFactory r0 = r2.sslSocketFactory
            int r0 = java.util.Objects.hashCode(r0)
            int r1 = r1 + r0
            int r1 = r1 * 31
            javax.net.ssl.HostnameVerifier r0 = r2.hostnameVerifier
            int r0 = java.util.Objects.hashCode(r0)
            int r1 = r1 + r0
            int r1 = r1 * 31
            okhttp3.CertificatePinner r0 = r2.certificatePinner
            int r0 = java.util.Objects.hashCode(r0)
            int r1 = r1 + r0
            return r1
    }

    public final javax.net.ssl.HostnameVerifier hostnameVerifier() {
            r1 = this;
            javax.net.ssl.HostnameVerifier r0 = r1.hostnameVerifier
            return r0
    }

    public final java.util.List<okhttp3.Protocol> protocols() {
            r1 = this;
            java.util.List<okhttp3.Protocol> r0 = r1.protocols
            return r0
    }

    public final java.net.Proxy proxy() {
            r1 = this;
            java.net.Proxy r0 = r1.proxy
            return r0
    }

    public final okhttp3.Authenticator proxyAuthenticator() {
            r1 = this;
            okhttp3.Authenticator r0 = r1.proxyAuthenticator
            return r0
    }

    public final java.net.ProxySelector proxySelector() {
            r1 = this;
            java.net.ProxySelector r0 = r1.proxySelector
            return r0
    }

    public final javax.net.SocketFactory socketFactory() {
            r1 = this;
            javax.net.SocketFactory r0 = r1.socketFactory
            return r0
    }

    public final javax.net.ssl.SSLSocketFactory sslSocketFactory() {
            r1 = this;
            javax.net.ssl.SSLSocketFactory r0 = r1.sslSocketFactory
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Address{"
            r0.append(r1)
            okhttp3.HttpUrl r1 = r3.url
            java.lang.String r1 = r1.host()
            r0.append(r1)
            r1 = 58
            r0.append(r1)
            okhttp3.HttpUrl r1 = r3.url
            int r1 = r1.port()
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            java.net.Proxy r1 = r3.proxy
            if (r1 == 0) goto L2d
            java.lang.String r2 = "proxy="
            goto L31
        L2d:
            java.net.ProxySelector r1 = r3.proxySelector
            java.lang.String r2 = "proxySelector="
        L31:
            java.lang.String r1 = kotlin.jvm.internal.Intrinsics.stringPlus(r2, r1)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final okhttp3.HttpUrl url() {
            r1 = this;
            okhttp3.HttpUrl r0 = r1.url
            return r0
    }
}
