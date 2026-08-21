package cz.msebera.android.httpclient.client.config;

@cz.msebera.android.httpclient.annotation.Immutable
public class RequestConfig implements java.lang.Cloneable {
    public static final cz.msebera.android.httpclient.client.config.RequestConfig DEFAULT = null;
    private final boolean authenticationEnabled;
    private final boolean circularRedirectsAllowed;
    private final int connectTimeout;
    private final int connectionRequestTimeout;
    private final java.lang.String cookieSpec;
    private final boolean decompressionEnabled;
    private final boolean expectContinueEnabled;
    private final java.net.InetAddress localAddress;
    private final int maxRedirects;
    private final cz.msebera.android.httpclient.HttpHost proxy;
    private final java.util.Collection<java.lang.String> proxyPreferredAuthSchemes;
    private final boolean redirectsEnabled;
    private final boolean relativeRedirectsAllowed;
    private final int socketTimeout;
    private final boolean staleConnectionCheckEnabled;
    private final java.util.Collection<java.lang.String> targetPreferredAuthSchemes;

    public static class Builder {
        private boolean authenticationEnabled;
        private boolean circularRedirectsAllowed;
        private int connectTimeout;
        private int connectionRequestTimeout;
        private java.lang.String cookieSpec;
        private boolean decompressionEnabled;
        private boolean expectContinueEnabled;
        private java.net.InetAddress localAddress;
        private int maxRedirects;
        private cz.msebera.android.httpclient.HttpHost proxy;
        private java.util.Collection<java.lang.String> proxyPreferredAuthSchemes;
        private boolean redirectsEnabled;
        private boolean relativeRedirectsAllowed;
        private int socketTimeout;
        private boolean staleConnectionCheckEnabled;
        private java.util.Collection<java.lang.String> targetPreferredAuthSchemes;

        Builder() {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.staleConnectionCheckEnabled = r0
                r0 = 1
                r2.redirectsEnabled = r0
                r1 = 50
                r2.maxRedirects = r1
                r2.relativeRedirectsAllowed = r0
                r2.authenticationEnabled = r0
                r1 = -1
                r2.connectionRequestTimeout = r1
                r2.connectTimeout = r1
                r2.socketTimeout = r1
                r2.decompressionEnabled = r0
                return
        }

        public cz.msebera.android.httpclient.client.config.RequestConfig build() {
                r20 = this;
                r0 = r20
                cz.msebera.android.httpclient.client.config.RequestConfig r18 = new cz.msebera.android.httpclient.client.config.RequestConfig
                r1 = r18
                boolean r2 = r0.expectContinueEnabled
                cz.msebera.android.httpclient.HttpHost r3 = r0.proxy
                java.net.InetAddress r4 = r0.localAddress
                boolean r5 = r0.staleConnectionCheckEnabled
                java.lang.String r6 = r0.cookieSpec
                boolean r7 = r0.redirectsEnabled
                boolean r8 = r0.relativeRedirectsAllowed
                boolean r9 = r0.circularRedirectsAllowed
                int r10 = r0.maxRedirects
                boolean r11 = r0.authenticationEnabled
                java.util.Collection<java.lang.String> r12 = r0.targetPreferredAuthSchemes
                java.util.Collection<java.lang.String> r13 = r0.proxyPreferredAuthSchemes
                int r14 = r0.connectionRequestTimeout
                int r15 = r0.connectTimeout
                r19 = r1
                int r1 = r0.socketTimeout
                r16 = r1
                boolean r1 = r0.decompressionEnabled
                r17 = r1
                r1 = r19
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17)
                return r18
        }

        public cz.msebera.android.httpclient.client.config.RequestConfig.Builder setAuthenticationEnabled(boolean r1) {
                r0 = this;
                r0.authenticationEnabled = r1
                return r0
        }

        public cz.msebera.android.httpclient.client.config.RequestConfig.Builder setCircularRedirectsAllowed(boolean r1) {
                r0 = this;
                r0.circularRedirectsAllowed = r1
                return r0
        }

        public cz.msebera.android.httpclient.client.config.RequestConfig.Builder setConnectTimeout(int r1) {
                r0 = this;
                r0.connectTimeout = r1
                return r0
        }

        public cz.msebera.android.httpclient.client.config.RequestConfig.Builder setConnectionRequestTimeout(int r1) {
                r0 = this;
                r0.connectionRequestTimeout = r1
                return r0
        }

        public cz.msebera.android.httpclient.client.config.RequestConfig.Builder setCookieSpec(java.lang.String r1) {
                r0 = this;
                r0.cookieSpec = r1
                return r0
        }

        public cz.msebera.android.httpclient.client.config.RequestConfig.Builder setDecompressionEnabled(boolean r1) {
                r0 = this;
                r0.decompressionEnabled = r1
                return r0
        }

        public cz.msebera.android.httpclient.client.config.RequestConfig.Builder setExpectContinueEnabled(boolean r1) {
                r0 = this;
                r0.expectContinueEnabled = r1
                return r0
        }

        public cz.msebera.android.httpclient.client.config.RequestConfig.Builder setLocalAddress(java.net.InetAddress r1) {
                r0 = this;
                r0.localAddress = r1
                return r0
        }

        public cz.msebera.android.httpclient.client.config.RequestConfig.Builder setMaxRedirects(int r1) {
                r0 = this;
                r0.maxRedirects = r1
                return r0
        }

        public cz.msebera.android.httpclient.client.config.RequestConfig.Builder setProxy(cz.msebera.android.httpclient.HttpHost r1) {
                r0 = this;
                r0.proxy = r1
                return r0
        }

        public cz.msebera.android.httpclient.client.config.RequestConfig.Builder setProxyPreferredAuthSchemes(java.util.Collection<java.lang.String> r1) {
                r0 = this;
                r0.proxyPreferredAuthSchemes = r1
                return r0
        }

        public cz.msebera.android.httpclient.client.config.RequestConfig.Builder setRedirectsEnabled(boolean r1) {
                r0 = this;
                r0.redirectsEnabled = r1
                return r0
        }

        public cz.msebera.android.httpclient.client.config.RequestConfig.Builder setRelativeRedirectsAllowed(boolean r1) {
                r0 = this;
                r0.relativeRedirectsAllowed = r1
                return r0
        }

        public cz.msebera.android.httpclient.client.config.RequestConfig.Builder setSocketTimeout(int r1) {
                r0 = this;
                r0.socketTimeout = r1
                return r0
        }

        @java.lang.Deprecated
        public cz.msebera.android.httpclient.client.config.RequestConfig.Builder setStaleConnectionCheckEnabled(boolean r1) {
                r0 = this;
                r0.staleConnectionCheckEnabled = r1
                return r0
        }

        public cz.msebera.android.httpclient.client.config.RequestConfig.Builder setTargetPreferredAuthSchemes(java.util.Collection<java.lang.String> r1) {
                r0 = this;
                r0.targetPreferredAuthSchemes = r1
                return r0
        }
    }

    static {
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = new cz.msebera.android.httpclient.client.config.RequestConfig$Builder
            r0.<init>()
            cz.msebera.android.httpclient.client.config.RequestConfig r0 = r0.build()
            cz.msebera.android.httpclient.client.config.RequestConfig.DEFAULT = r0
            return
    }

    RequestConfig(boolean r3, cz.msebera.android.httpclient.HttpHost r4, java.net.InetAddress r5, boolean r6, java.lang.String r7, boolean r8, boolean r9, boolean r10, int r11, boolean r12, java.util.Collection<java.lang.String> r13, java.util.Collection<java.lang.String> r14, int r15, int r16, int r17, boolean r18) {
            r2 = this;
            r0 = r2
            r2.<init>()
            r1 = r3
            r0.expectContinueEnabled = r1
            r1 = r4
            r0.proxy = r1
            r1 = r5
            r0.localAddress = r1
            r1 = r6
            r0.staleConnectionCheckEnabled = r1
            r1 = r7
            r0.cookieSpec = r1
            r1 = r8
            r0.redirectsEnabled = r1
            r1 = r9
            r0.relativeRedirectsAllowed = r1
            r1 = r10
            r0.circularRedirectsAllowed = r1
            r1 = r11
            r0.maxRedirects = r1
            r1 = r12
            r0.authenticationEnabled = r1
            r1 = r13
            r0.targetPreferredAuthSchemes = r1
            r1 = r14
            r0.proxyPreferredAuthSchemes = r1
            r1 = r15
            r0.connectionRequestTimeout = r1
            r1 = r16
            r0.connectTimeout = r1
            r1 = r17
            r0.socketTimeout = r1
            r1 = r18
            r0.decompressionEnabled = r1
            return
    }

    public static cz.msebera.android.httpclient.client.config.RequestConfig.Builder copy(cz.msebera.android.httpclient.client.config.RequestConfig r2) {
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = new cz.msebera.android.httpclient.client.config.RequestConfig$Builder
            r0.<init>()
            boolean r1 = r2.isExpectContinueEnabled()
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setExpectContinueEnabled(r1)
            cz.msebera.android.httpclient.HttpHost r1 = r2.getProxy()
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setProxy(r1)
            java.net.InetAddress r1 = r2.getLocalAddress()
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setLocalAddress(r1)
            boolean r1 = r2.isStaleConnectionCheckEnabled()
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setStaleConnectionCheckEnabled(r1)
            java.lang.String r1 = r2.getCookieSpec()
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setCookieSpec(r1)
            boolean r1 = r2.isRedirectsEnabled()
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setRedirectsEnabled(r1)
            boolean r1 = r2.isRelativeRedirectsAllowed()
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setRelativeRedirectsAllowed(r1)
            boolean r1 = r2.isCircularRedirectsAllowed()
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setCircularRedirectsAllowed(r1)
            int r1 = r2.getMaxRedirects()
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setMaxRedirects(r1)
            boolean r1 = r2.isAuthenticationEnabled()
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setAuthenticationEnabled(r1)
            java.util.Collection r1 = r2.getTargetPreferredAuthSchemes()
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setTargetPreferredAuthSchemes(r1)
            java.util.Collection r1 = r2.getProxyPreferredAuthSchemes()
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setProxyPreferredAuthSchemes(r1)
            int r1 = r2.getConnectionRequestTimeout()
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setConnectionRequestTimeout(r1)
            int r1 = r2.getConnectTimeout()
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setConnectTimeout(r1)
            int r1 = r2.getSocketTimeout()
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = r0.setSocketTimeout(r1)
            boolean r2 = r2.isDecompressionEnabled()
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r2 = r0.setDecompressionEnabled(r2)
            return r2
    }

    public static cz.msebera.android.httpclient.client.config.RequestConfig.Builder custom() {
            cz.msebera.android.httpclient.client.config.RequestConfig$Builder r0 = new cz.msebera.android.httpclient.client.config.RequestConfig$Builder
            r0.<init>()
            return r0
    }

    protected cz.msebera.android.httpclient.client.config.RequestConfig clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            java.lang.Object r0 = super.clone()
            cz.msebera.android.httpclient.client.config.RequestConfig r0 = (cz.msebera.android.httpclient.client.config.RequestConfig) r0
            return r0
    }

    protected java.lang.Object clone() throws java.lang.CloneNotSupportedException {
            r1 = this;
            cz.msebera.android.httpclient.client.config.RequestConfig r0 = r1.clone()
            return r0
    }

    public int getConnectTimeout() {
            r1 = this;
            int r0 = r1.connectTimeout
            return r0
    }

    public int getConnectionRequestTimeout() {
            r1 = this;
            int r0 = r1.connectionRequestTimeout
            return r0
    }

    public java.lang.String getCookieSpec() {
            r1 = this;
            java.lang.String r0 = r1.cookieSpec
            return r0
    }

    public java.net.InetAddress getLocalAddress() {
            r1 = this;
            java.net.InetAddress r0 = r1.localAddress
            return r0
    }

    public int getMaxRedirects() {
            r1 = this;
            int r0 = r1.maxRedirects
            return r0
    }

    public cz.msebera.android.httpclient.HttpHost getProxy() {
            r1 = this;
            cz.msebera.android.httpclient.HttpHost r0 = r1.proxy
            return r0
    }

    public java.util.Collection<java.lang.String> getProxyPreferredAuthSchemes() {
            r1 = this;
            java.util.Collection<java.lang.String> r0 = r1.proxyPreferredAuthSchemes
            return r0
    }

    public int getSocketTimeout() {
            r1 = this;
            int r0 = r1.socketTimeout
            return r0
    }

    public java.util.Collection<java.lang.String> getTargetPreferredAuthSchemes() {
            r1 = this;
            java.util.Collection<java.lang.String> r0 = r1.targetPreferredAuthSchemes
            return r0
    }

    public boolean isAuthenticationEnabled() {
            r1 = this;
            boolean r0 = r1.authenticationEnabled
            return r0
    }

    public boolean isCircularRedirectsAllowed() {
            r1 = this;
            boolean r0 = r1.circularRedirectsAllowed
            return r0
    }

    public boolean isDecompressionEnabled() {
            r1 = this;
            boolean r0 = r1.decompressionEnabled
            return r0
    }

    public boolean isExpectContinueEnabled() {
            r1 = this;
            boolean r0 = r1.expectContinueEnabled
            return r0
    }

    public boolean isRedirectsEnabled() {
            r1 = this;
            boolean r0 = r1.redirectsEnabled
            return r0
    }

    public boolean isRelativeRedirectsAllowed() {
            r1 = this;
            boolean r0 = r1.relativeRedirectsAllowed
            return r0
    }

    @java.lang.Deprecated
    public boolean isStaleConnectionCheckEnabled() {
            r1 = this;
            boolean r0 = r1.staleConnectionCheckEnabled
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "["
            r0.append(r1)
            java.lang.String r1 = "expectContinueEnabled="
            r0.append(r1)
            boolean r1 = r2.expectContinueEnabled
            r0.append(r1)
            java.lang.String r1 = ", proxy="
            r0.append(r1)
            cz.msebera.android.httpclient.HttpHost r1 = r2.proxy
            r0.append(r1)
            java.lang.String r1 = ", localAddress="
            r0.append(r1)
            java.net.InetAddress r1 = r2.localAddress
            r0.append(r1)
            java.lang.String r1 = ", cookieSpec="
            r0.append(r1)
            java.lang.String r1 = r2.cookieSpec
            r0.append(r1)
            java.lang.String r1 = ", redirectsEnabled="
            r0.append(r1)
            boolean r1 = r2.redirectsEnabled
            r0.append(r1)
            java.lang.String r1 = ", relativeRedirectsAllowed="
            r0.append(r1)
            boolean r1 = r2.relativeRedirectsAllowed
            r0.append(r1)
            java.lang.String r1 = ", maxRedirects="
            r0.append(r1)
            int r1 = r2.maxRedirects
            r0.append(r1)
            java.lang.String r1 = ", circularRedirectsAllowed="
            r0.append(r1)
            boolean r1 = r2.circularRedirectsAllowed
            r0.append(r1)
            java.lang.String r1 = ", authenticationEnabled="
            r0.append(r1)
            boolean r1 = r2.authenticationEnabled
            r0.append(r1)
            java.lang.String r1 = ", targetPreferredAuthSchemes="
            r0.append(r1)
            java.util.Collection<java.lang.String> r1 = r2.targetPreferredAuthSchemes
            r0.append(r1)
            java.lang.String r1 = ", proxyPreferredAuthSchemes="
            r0.append(r1)
            java.util.Collection<java.lang.String> r1 = r2.proxyPreferredAuthSchemes
            r0.append(r1)
            java.lang.String r1 = ", connectionRequestTimeout="
            r0.append(r1)
            int r1 = r2.connectionRequestTimeout
            r0.append(r1)
            java.lang.String r1 = ", connectTimeout="
            r0.append(r1)
            int r1 = r2.connectTimeout
            r0.append(r1)
            java.lang.String r1 = ", socketTimeout="
            r0.append(r1)
            int r1 = r2.socketTimeout
            r0.append(r1)
            java.lang.String r1 = ", decompressionEnabled="
            r0.append(r1)
            boolean r1 = r2.decompressionEnabled
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
