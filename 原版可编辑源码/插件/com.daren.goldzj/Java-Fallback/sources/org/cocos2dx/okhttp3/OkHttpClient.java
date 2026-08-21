package org.cocos2dx.okhttp3;

import java.net.Proxy;
import java.net.ProxySelector;
import java.security.GeneralSecurityException;
import java.time.Duration;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Random;
import java.util.concurrent.TimeUnit;
import javax.annotation.Nullable;
import javax.net.SocketFactory;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLSocketFactory;
import javax.net.ssl.TrustManager;
import javax.net.ssl.X509TrustManager;
import org.cocos2dx.okhttp3.Call;
import org.cocos2dx.okhttp3.EventListener;
import org.cocos2dx.okhttp3.WebSocket;
import org.cocos2dx.okhttp3.internal.Internal;
import org.cocos2dx.okhttp3.internal.Util;
import org.cocos2dx.okhttp3.internal.cache.InternalCache;
import org.cocos2dx.okhttp3.internal.platform.Platform;
import org.cocos2dx.okhttp3.internal.proxy.NullProxySelector;
import org.cocos2dx.okhttp3.internal.tls.CertificateChainCleaner;
import org.cocos2dx.okhttp3.internal.tls.OkHostnameVerifier;
import org.cocos2dx.okhttp3.internal.ws.RealWebSocket;
import org.codehaus.mojo.animal_sniffer.IgnoreJRERequirement;

public class OkHttpClient implements Cloneable, Call.Factory, WebSocket.Factory {
    static final List<ConnectionSpec> DEFAULT_CONNECTION_SPECS = null;
    static final List<Protocol> DEFAULT_PROTOCOLS = null;
    final Authenticator authenticator;

    @Nullable
    final Cache cache;
    final int callTimeout;
    final CertificateChainCleaner certificateChainCleaner;
    final CertificatePinner certificatePinner;
    final int connectTimeout;
    final ConnectionPool connectionPool;
    final List<ConnectionSpec> connectionSpecs;
    final CookieJar cookieJar;
    final Dispatcher dispatcher;
    final Dns dns;
    final EventListener.Factory eventListenerFactory;
    final boolean followRedirects;
    final boolean followSslRedirects;
    final HostnameVerifier hostnameVerifier;
    final List<Interceptor> interceptors;

    @Nullable
    final InternalCache internalCache;
    final List<Interceptor> networkInterceptors;
    final int pingInterval;
    final List<Protocol> protocols;

    @Nullable
    final Proxy proxy;
    final Authenticator proxyAuthenticator;
    final ProxySelector proxySelector;
    final int readTimeout;
    final boolean retryOnConnectionFailure;
    final SocketFactory socketFactory;
    final SSLSocketFactory sslSocketFactory;
    final int writeTimeout;

    public static final class Builder {
        Authenticator authenticator;

        @Nullable
        Cache cache;
        int callTimeout;

        @Nullable
        CertificateChainCleaner certificateChainCleaner;
        CertificatePinner certificatePinner;
        int connectTimeout;
        ConnectionPool connectionPool;
        List<ConnectionSpec> connectionSpecs;
        CookieJar cookieJar;
        Dispatcher dispatcher;
        Dns dns;
        EventListener.Factory eventListenerFactory;
        boolean followRedirects;
        boolean followSslRedirects;
        HostnameVerifier hostnameVerifier;
        final List<Interceptor> interceptors;

        @Nullable
        InternalCache internalCache;
        final List<Interceptor> networkInterceptors;
        int pingInterval;
        List<Protocol> protocols;

        @Nullable
        Proxy proxy;
        Authenticator proxyAuthenticator;
        ProxySelector proxySelector;
        int readTimeout;
        boolean retryOnConnectionFailure;
        SocketFactory socketFactory;

        @Nullable
        SSLSocketFactory sslSocketFactory;
        int writeTimeout;

        public Builder() {
            this.interceptors = new ArrayList();
            this.networkInterceptors = new ArrayList();
            this.dispatcher = new Dispatcher();
            this.protocols = OkHttpClient.DEFAULT_PROTOCOLS;
            this.connectionSpecs = OkHttpClient.DEFAULT_CONNECTION_SPECS;
            this.eventListenerFactory = EventListener.factory(EventListener.NONE);
            this.proxySelector = ProxySelector.getDefault();
            if (this.proxySelector != null) goto L5;
            this.proxySelector = new NullProxySelector();
        L5:
            this.cookieJar = CookieJar.NO_COOKIES;
            this.socketFactory = SocketFactory.getDefault();
            this.hostnameVerifier = OkHostnameVerifier.INSTANCE;
            this.certificatePinner = CertificatePinner.DEFAULT;
            this.proxyAuthenticator = Authenticator.NONE;
            this.authenticator = Authenticator.NONE;
            this.connectionPool = new ConnectionPool();
            this.dns = Dns.SYSTEM;
            this.followSslRedirects = true;
            this.followRedirects = true;
            this.retryOnConnectionFailure = true;
            this.callTimeout = 0;
            this.connectTimeout = 10000;
            this.readTimeout = 10000;
            this.writeTimeout = 10000;
            this.pingInterval = 0;
        }

        Builder(OkHttpClient r3) {
            this.interceptors = new ArrayList();
            this.networkInterceptors = new ArrayList();
            this.dispatcher = r3.dispatcher;
            this.proxy = r3.proxy;
            this.protocols = r3.protocols;
            this.connectionSpecs = r3.connectionSpecs;
            this.interceptors.addAll(r3.interceptors);
            this.networkInterceptors.addAll(r3.networkInterceptors);
            this.eventListenerFactory = r3.eventListenerFactory;
            this.proxySelector = r3.proxySelector;
            this.cookieJar = r3.cookieJar;
            this.internalCache = r3.internalCache;
            this.cache = r3.cache;
            this.socketFactory = r3.socketFactory;
            this.sslSocketFactory = r3.sslSocketFactory;
            this.certificateChainCleaner = r3.certificateChainCleaner;
            this.hostnameVerifier = r3.hostnameVerifier;
            this.certificatePinner = r3.certificatePinner;
            this.proxyAuthenticator = r3.proxyAuthenticator;
            this.authenticator = r3.authenticator;
            this.connectionPool = r3.connectionPool;
            this.dns = r3.dns;
            this.followSslRedirects = r3.followSslRedirects;
            this.followRedirects = r3.followRedirects;
            this.retryOnConnectionFailure = r3.retryOnConnectionFailure;
            this.callTimeout = r3.callTimeout;
            this.connectTimeout = r3.connectTimeout;
            this.readTimeout = r3.readTimeout;
            this.writeTimeout = r3.writeTimeout;
            this.pingInterval = r3.pingInterval;
        }

        public Builder callTimeout(long r2, TimeUnit r4) {
            this.callTimeout = Util.checkDuration("timeout", r2, r4);
            return this;
        }

        @IgnoreJRERequirement
        public Builder callTimeout(Duration r4) {
            this.callTimeout = Util.checkDuration("timeout", r4.toMillis(), TimeUnit.MILLISECONDS);
            return this;
        }

        public Builder connectTimeout(long r2, TimeUnit r4) {
            this.connectTimeout = Util.checkDuration("timeout", r2, r4);
            return this;
        }

        @IgnoreJRERequirement
        public Builder connectTimeout(Duration r4) {
            this.connectTimeout = Util.checkDuration("timeout", r4.toMillis(), TimeUnit.MILLISECONDS);
            return this;
        }

        public Builder readTimeout(long r2, TimeUnit r4) {
            this.readTimeout = Util.checkDuration("timeout", r2, r4);
            return this;
        }

        @IgnoreJRERequirement
        public Builder readTimeout(Duration r4) {
            this.readTimeout = Util.checkDuration("timeout", r4.toMillis(), TimeUnit.MILLISECONDS);
            return this;
        }

        public Builder writeTimeout(long r2, TimeUnit r4) {
            this.writeTimeout = Util.checkDuration("timeout", r2, r4);
            return this;
        }

        @IgnoreJRERequirement
        public Builder writeTimeout(Duration r4) {
            this.writeTimeout = Util.checkDuration("timeout", r4.toMillis(), TimeUnit.MILLISECONDS);
            return this;
        }

        public Builder pingInterval(long r2, TimeUnit r4) {
            this.pingInterval = Util.checkDuration("interval", r2, r4);
            return this;
        }

        @IgnoreJRERequirement
        public Builder pingInterval(Duration r4) {
            this.pingInterval = Util.checkDuration("timeout", r4.toMillis(), TimeUnit.MILLISECONDS);
            return this;
        }

        public Builder proxy(@Nullable Proxy r1) {
            this.proxy = r1;
            return this;
        }

        public Builder proxySelector(ProxySelector r2) {
            if (r2 == null) goto L6;
            this.proxySelector = r2;
            return this;
        L6:
            throw new NullPointerException("proxySelector == null");
        }

        public Builder cookieJar(CookieJar r2) {
            if (r2 == null) goto L6;
            this.cookieJar = r2;
            return this;
        L6:
            throw new NullPointerException("cookieJar == null");
        }

        void setInternalCache(@Nullable InternalCache r1) {
            this.internalCache = r1;
            this.cache = null;
        }

        public Builder cache(@Nullable Cache r1) {
            this.cache = r1;
            this.internalCache = null;
            return this;
        }

        public Builder dns(Dns r2) {
            if (r2 == null) goto L6;
            this.dns = r2;
            return this;
        L6:
            throw new NullPointerException("dns == null");
        }

        public Builder socketFactory(SocketFactory r2) {
            if (r2 == null) goto L6;
            this.socketFactory = r2;
            return this;
        L6:
            throw new NullPointerException("socketFactory == null");
        }

        public Builder sslSocketFactory(SSLSocketFactory r2) {
            if (r2 == null) goto L6;
            this.sslSocketFactory = r2;
            this.certificateChainCleaner = Platform.get().buildCertificateChainCleaner(r2);
            return this;
        L6:
            throw new NullPointerException("sslSocketFactory == null");
        }

        public Builder sslSocketFactory(SSLSocketFactory r1, X509TrustManager r2) {
            if (r1 == null) goto L9;
            if (r2 == null) goto L7;
            this.sslSocketFactory = r1;
            this.certificateChainCleaner = CertificateChainCleaner.get(r2);
            return this;
        L7:
            throw new NullPointerException("trustManager == null");
        L9:
            throw new NullPointerException("sslSocketFactory == null");
        }

        public Builder hostnameVerifier(HostnameVerifier r2) {
            if (r2 == null) goto L6;
            this.hostnameVerifier = r2;
            return this;
        L6:
            throw new NullPointerException("hostnameVerifier == null");
        }

        public Builder certificatePinner(CertificatePinner r2) {
            if (r2 == null) goto L6;
            this.certificatePinner = r2;
            return this;
        L6:
            throw new NullPointerException("certificatePinner == null");
        }

        public Builder authenticator(Authenticator r2) {
            if (r2 == null) goto L6;
            this.authenticator = r2;
            return this;
        L6:
            throw new NullPointerException("authenticator == null");
        }

        public Builder proxyAuthenticator(Authenticator r2) {
            if (r2 == null) goto L6;
            this.proxyAuthenticator = r2;
            return this;
        L6:
            throw new NullPointerException("proxyAuthenticator == null");
        }

        public Builder connectionPool(ConnectionPool r2) {
            if (r2 == null) goto L6;
            this.connectionPool = r2;
            return this;
        L6:
            throw new NullPointerException("connectionPool == null");
        }

        public Builder followSslRedirects(boolean r1) {
            this.followSslRedirects = r1;
            return this;
        }

        public Builder followRedirects(boolean r1) {
            this.followRedirects = r1;
            return this;
        }

        public Builder retryOnConnectionFailure(boolean r1) {
            this.retryOnConnectionFailure = r1;
            return this;
        }

        public Builder dispatcher(Dispatcher r2) {
            if (r2 == null) goto L6;
            this.dispatcher = r2;
            return this;
        L6:
            throw new IllegalArgumentException("dispatcher == null");
        }

        public Builder protocols(List<Protocol> r4) {
            ArrayList r0 = new ArrayList(r4);
            if (r0.contains(Protocol.H2_PRIOR_KNOWLEDGE) == true) goto L10;
            if (r0.contains(Protocol.HTTP_1_1) == true) goto L10;
            throw new IllegalArgumentException("protocols must contain h2_prior_knowledge or http/1.1: " + r0);
        L10:
            if (r0.contains(Protocol.H2_PRIOR_KNOWLEDGE) == false) goto L17;
            if (r0.size() <= 1) goto L17;
            throw new IllegalArgumentException("protocols containing h2_prior_knowledge cannot use other protocols: " + r0);
        L17:
            if (r0.contains(Protocol.HTTP_1_0) == true) goto L25;
            if (r0.contains(null) == true) goto L23;
            r0.remove(Protocol.SPDY_3);
            this.protocols = Collections.unmodifiableList(r0);
            return this;
        L23:
            throw new IllegalArgumentException("protocols must not contain null");
        L25:
            throw new IllegalArgumentException("protocols must not contain http/1.0: " + r0);
        }

        public Builder connectionSpecs(List<ConnectionSpec> r1) {
            this.connectionSpecs = Util.immutableList(r1);
            return this;
        }

        public List<Interceptor> interceptors() {
            return this.interceptors;
        }

        public Builder addInterceptor(Interceptor r2) {
            if (r2 == null) goto L6;
            this.interceptors.add(r2);
            return this;
        L6:
            throw new IllegalArgumentException("interceptor == null");
        }

        public List<Interceptor> networkInterceptors() {
            return this.networkInterceptors;
        }

        public Builder addNetworkInterceptor(Interceptor r2) {
            if (r2 == null) goto L6;
            this.networkInterceptors.add(r2);
            return this;
        L6:
            throw new IllegalArgumentException("interceptor == null");
        }

        public Builder eventListener(EventListener r2) {
            if (r2 == null) goto L6;
            this.eventListenerFactory = EventListener.factory(r2);
            return this;
        L6:
            throw new NullPointerException("eventListener == null");
        }

        public Builder eventListenerFactory(EventListener.Factory r2) {
            if (r2 == null) goto L6;
            this.eventListenerFactory = r2;
            return this;
        L6:
            throw new NullPointerException("eventListenerFactory == null");
        }

        public OkHttpClient build() {
            return new OkHttpClient(this);
        }
    }

    static {
        DEFAULT_PROTOCOLS = Util.immutableList(new Protocol[]{Protocol.HTTP_2, Protocol.HTTP_1_1});
        DEFAULT_CONNECTION_SPECS = Util.immutableList(new ConnectionSpec[]{ConnectionSpec.MODERN_TLS, ConnectionSpec.CLEARTEXT});
        Internal.instance = new 1();
    }

    public OkHttpClient() {
        this(new Builder());
    }

    OkHttpClient(Builder r5) {
        this.dispatcher = r5.dispatcher;
        this.proxy = r5.proxy;
        this.protocols = r5.protocols;
        this.connectionSpecs = r5.connectionSpecs;
        this.interceptors = Util.immutableList(r5.interceptors);
        this.networkInterceptors = Util.immutableList(r5.networkInterceptors);
        this.eventListenerFactory = r5.eventListenerFactory;
        this.proxySelector = r5.proxySelector;
        this.cookieJar = r5.cookieJar;
        this.cache = r5.cache;
        this.internalCache = r5.internalCache;
        this.socketFactory = r5.socketFactory;
        Iterator<ConnectionSpec> r0 = this.connectionSpecs.iterator();
    L3:
        boolean r2 = false;
    L5:
        if (r0.hasNext() == false) goto L12;
        ConnectionSpec r3 = r0.next();
        if (r2 == true) goto L10;
        if (r3.isTls() == false) goto L3;
    L10:
        r2 = true;
        goto L5
    L12:
        if (r5.sslSocketFactory != null) goto L16;
        if (r2 == false) goto L16;
        X509TrustManager r02 = Util.platformTrustManager();
        this.sslSocketFactory = newSslSocketFactory(r02);
        this.certificateChainCleaner = CertificateChainCleaner.get(r02);
    L18:
        if (this.sslSocketFactory == null) goto L20;
        Platform.get().configureSslSocketFactory(this.sslSocketFactory);
    L20:
        this.hostnameVerifier = r5.hostnameVerifier;
        this.certificatePinner = r5.certificatePinner.withCertificateChainCleaner(this.certificateChainCleaner);
        this.proxyAuthenticator = r5.proxyAuthenticator;
        this.authenticator = r5.authenticator;
        this.connectionPool = r5.connectionPool;
        this.dns = r5.dns;
        this.followSslRedirects = r5.followSslRedirects;
        this.followRedirects = r5.followRedirects;
        this.retryOnConnectionFailure = r5.retryOnConnectionFailure;
        this.callTimeout = r5.callTimeout;
        this.connectTimeout = r5.connectTimeout;
        this.readTimeout = r5.readTimeout;
        this.writeTimeout = r5.writeTimeout;
        this.pingInterval = r5.pingInterval;
        if (this.interceptors.contains(null) == true) goto L28;
        if (this.networkInterceptors.contains(null) == true) goto L26;
        return;
    L26:
        throw new IllegalStateException("Null network interceptor: " + this.networkInterceptors);
    L28:
        throw new IllegalStateException("Null interceptor: " + this.interceptors);
    L16:
        this.sslSocketFactory = r5.sslSocketFactory;
        this.certificateChainCleaner = r5.certificateChainCleaner;
        goto L18
    }

    private static SSLSocketFactory newSslSocketFactory(X509TrustManager r3) {
        SSLContext r0 = Platform.get().getSSLContext();     // Catch: GeneralSecurityException -> L4
        r0.init(null, new TrustManager[]{r3}, null);     // Catch: GeneralSecurityException -> L4
        return r0.getSocketFactory();
    L4:
        e = move-exception;
        throw Util.assertionError("No System TLS", e);
    }

    public int callTimeoutMillis() {
        return this.callTimeout;
    }

    public int connectTimeoutMillis() {
        return this.connectTimeout;
    }

    public int readTimeoutMillis() {
        return this.readTimeout;
    }

    public int writeTimeoutMillis() {
        return this.writeTimeout;
    }

    public int pingIntervalMillis() {
        return this.pingInterval;
    }

    @Nullable
    public Proxy proxy() {
        return this.proxy;
    }

    public ProxySelector proxySelector() {
        return this.proxySelector;
    }

    public CookieJar cookieJar() {
        return this.cookieJar;
    }

    @Nullable
    public Cache cache() {
        return this.cache;
    }

    InternalCache internalCache() {
        Cache r0 = this.cache;
        if (r0 == null) goto L6;
        return r0.internalCache;
    L6:
        return this.internalCache;
    }

    public Dns dns() {
        return this.dns;
    }

    public SocketFactory socketFactory() {
        return this.socketFactory;
    }

    public SSLSocketFactory sslSocketFactory() {
        return this.sslSocketFactory;
    }

    public HostnameVerifier hostnameVerifier() {
        return this.hostnameVerifier;
    }

    public CertificatePinner certificatePinner() {
        return this.certificatePinner;
    }

    public Authenticator authenticator() {
        return this.authenticator;
    }

    public Authenticator proxyAuthenticator() {
        return this.proxyAuthenticator;
    }

    public ConnectionPool connectionPool() {
        return this.connectionPool;
    }

    public boolean followSslRedirects() {
        return this.followSslRedirects;
    }

    public boolean followRedirects() {
        return this.followRedirects;
    }

    public boolean retryOnConnectionFailure() {
        return this.retryOnConnectionFailure;
    }

    public Dispatcher dispatcher() {
        return this.dispatcher;
    }

    public List<Protocol> protocols() {
        return this.protocols;
    }

    public List<ConnectionSpec> connectionSpecs() {
        return this.connectionSpecs;
    }

    public List<Interceptor> interceptors() {
        return this.interceptors;
    }

    public List<Interceptor> networkInterceptors() {
        return this.networkInterceptors;
    }

    public EventListener.Factory eventListenerFactory() {
        return this.eventListenerFactory;
    }

    @Override
    public Call newCall(Request r2) {
        return RealCall.newRealCall(this, r2, false);
    }

    @Override
    public WebSocket newWebSocket(Request r8, WebSocketListener r9) {
        RealWebSocket r6 = new RealWebSocket(r8, r9, new Random(), this.pingInterval);
        r6.connect(this);
        return r6;
    }

    public Builder newBuilder() {
        return new Builder(this);
    }
}
