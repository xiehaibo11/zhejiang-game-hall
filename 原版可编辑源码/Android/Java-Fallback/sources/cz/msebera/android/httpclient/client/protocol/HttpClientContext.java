package cz.msebera.android.httpclient.client.protocol;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class HttpClientContext extends cz.msebera.android.httpclient.protocol.HttpCoreContext {
    public static final java.lang.String AUTHSCHEME_REGISTRY = "http.authscheme-registry";
    public static final java.lang.String AUTH_CACHE = "http.auth.auth-cache";
    public static final java.lang.String COOKIESPEC_REGISTRY = "http.cookiespec-registry";
    public static final java.lang.String COOKIE_ORIGIN = "http.cookie-origin";
    public static final java.lang.String COOKIE_SPEC = "http.cookie-spec";
    public static final java.lang.String COOKIE_STORE = "http.cookie-store";
    public static final java.lang.String CREDS_PROVIDER = "http.auth.credentials-provider";
    public static final java.lang.String HTTP_ROUTE = "http.route";
    public static final java.lang.String PROXY_AUTH_STATE = "http.auth.proxy-scope";
    public static final java.lang.String REDIRECT_LOCATIONS = "http.protocol.redirect-locations";
    public static final java.lang.String REQUEST_CONFIG = "http.request-config";
    public static final java.lang.String TARGET_AUTH_STATE = "http.auth.target-scope";
    public static final java.lang.String USER_TOKEN = "http.user-token";

    public HttpClientContext() {
            r0 = this;
            r0.<init>()
            return
    }

    public HttpClientContext(cz.msebera.android.httpclient.protocol.HttpContext r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static cz.msebera.android.httpclient.client.protocol.HttpClientContext adapt(cz.msebera.android.httpclient.protocol.HttpContext r1) {
            boolean r0 = r1 instanceof cz.msebera.android.httpclient.client.protocol.HttpClientContext
            if (r0 == 0) goto L7
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r1 = (cz.msebera.android.httpclient.client.protocol.HttpClientContext) r1
            return r1
        L7:
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r0 = new cz.msebera.android.httpclient.client.protocol.HttpClientContext
            r0.<init>(r1)
            return r0
    }

    public static cz.msebera.android.httpclient.client.protocol.HttpClientContext create() {
            cz.msebera.android.httpclient.client.protocol.HttpClientContext r0 = new cz.msebera.android.httpclient.client.protocol.HttpClientContext
            cz.msebera.android.httpclient.protocol.BasicHttpContext r1 = new cz.msebera.android.httpclient.protocol.BasicHttpContext
            r1.<init>()
            r0.<init>(r1)
            return r0
    }

    private <T> cz.msebera.android.httpclient.config.Lookup<T> getLookup(java.lang.String r1, java.lang.Class<T> r2) {
            r0 = this;
            java.lang.Class<cz.msebera.android.httpclient.config.Lookup> r2 = cz.msebera.android.httpclient.config.Lookup.class
            java.lang.Object r1 = r0.getAttribute(r1, r2)
            cz.msebera.android.httpclient.config.Lookup r1 = (cz.msebera.android.httpclient.config.Lookup) r1
            return r1
    }

    public cz.msebera.android.httpclient.client.AuthCache getAuthCache() {
            r2 = this;
            java.lang.Class<cz.msebera.android.httpclient.client.AuthCache> r0 = cz.msebera.android.httpclient.client.AuthCache.class
            java.lang.String r1 = "http.auth.auth-cache"
            java.lang.Object r0 = r2.getAttribute(r1, r0)
            cz.msebera.android.httpclient.client.AuthCache r0 = (cz.msebera.android.httpclient.client.AuthCache) r0
            return r0
    }

    public cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.auth.AuthSchemeProvider> getAuthSchemeRegistry() {
            r2 = this;
            java.lang.Class<cz.msebera.android.httpclient.auth.AuthSchemeProvider> r0 = cz.msebera.android.httpclient.auth.AuthSchemeProvider.class
            java.lang.String r1 = "http.authscheme-registry"
            cz.msebera.android.httpclient.config.Lookup r0 = r2.getLookup(r1, r0)
            return r0
    }

    public cz.msebera.android.httpclient.cookie.CookieOrigin getCookieOrigin() {
            r2 = this;
            java.lang.Class<cz.msebera.android.httpclient.cookie.CookieOrigin> r0 = cz.msebera.android.httpclient.cookie.CookieOrigin.class
            java.lang.String r1 = "http.cookie-origin"
            java.lang.Object r0 = r2.getAttribute(r1, r0)
            cz.msebera.android.httpclient.cookie.CookieOrigin r0 = (cz.msebera.android.httpclient.cookie.CookieOrigin) r0
            return r0
    }

    public cz.msebera.android.httpclient.cookie.CookieSpec getCookieSpec() {
            r2 = this;
            java.lang.Class<cz.msebera.android.httpclient.cookie.CookieSpec> r0 = cz.msebera.android.httpclient.cookie.CookieSpec.class
            java.lang.String r1 = "http.cookie-spec"
            java.lang.Object r0 = r2.getAttribute(r1, r0)
            cz.msebera.android.httpclient.cookie.CookieSpec r0 = (cz.msebera.android.httpclient.cookie.CookieSpec) r0
            return r0
    }

    public cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.cookie.CookieSpecProvider> getCookieSpecRegistry() {
            r2 = this;
            java.lang.Class<cz.msebera.android.httpclient.cookie.CookieSpecProvider> r0 = cz.msebera.android.httpclient.cookie.CookieSpecProvider.class
            java.lang.String r1 = "http.cookiespec-registry"
            cz.msebera.android.httpclient.config.Lookup r0 = r2.getLookup(r1, r0)
            return r0
    }

    public cz.msebera.android.httpclient.client.CookieStore getCookieStore() {
            r2 = this;
            java.lang.Class<cz.msebera.android.httpclient.client.CookieStore> r0 = cz.msebera.android.httpclient.client.CookieStore.class
            java.lang.String r1 = "http.cookie-store"
            java.lang.Object r0 = r2.getAttribute(r1, r0)
            cz.msebera.android.httpclient.client.CookieStore r0 = (cz.msebera.android.httpclient.client.CookieStore) r0
            return r0
    }

    public cz.msebera.android.httpclient.client.CredentialsProvider getCredentialsProvider() {
            r2 = this;
            java.lang.Class<cz.msebera.android.httpclient.client.CredentialsProvider> r0 = cz.msebera.android.httpclient.client.CredentialsProvider.class
            java.lang.String r1 = "http.auth.credentials-provider"
            java.lang.Object r0 = r2.getAttribute(r1, r0)
            cz.msebera.android.httpclient.client.CredentialsProvider r0 = (cz.msebera.android.httpclient.client.CredentialsProvider) r0
            return r0
    }

    public cz.msebera.android.httpclient.conn.routing.RouteInfo getHttpRoute() {
            r2 = this;
            java.lang.Class<cz.msebera.android.httpclient.conn.routing.HttpRoute> r0 = cz.msebera.android.httpclient.conn.routing.HttpRoute.class
            java.lang.String r1 = "http.route"
            java.lang.Object r0 = r2.getAttribute(r1, r0)
            cz.msebera.android.httpclient.conn.routing.RouteInfo r0 = (cz.msebera.android.httpclient.conn.routing.RouteInfo) r0
            return r0
    }

    public cz.msebera.android.httpclient.auth.AuthState getProxyAuthState() {
            r2 = this;
            java.lang.Class<cz.msebera.android.httpclient.auth.AuthState> r0 = cz.msebera.android.httpclient.auth.AuthState.class
            java.lang.String r1 = "http.auth.proxy-scope"
            java.lang.Object r0 = r2.getAttribute(r1, r0)
            cz.msebera.android.httpclient.auth.AuthState r0 = (cz.msebera.android.httpclient.auth.AuthState) r0
            return r0
    }

    public java.util.List<java.net.URI> getRedirectLocations() {
            r2 = this;
            java.lang.Class<java.util.List> r0 = java.util.List.class
            java.lang.String r1 = "http.protocol.redirect-locations"
            java.lang.Object r0 = r2.getAttribute(r1, r0)
            java.util.List r0 = (java.util.List) r0
            return r0
    }

    public cz.msebera.android.httpclient.client.config.RequestConfig getRequestConfig() {
            r2 = this;
            java.lang.Class<cz.msebera.android.httpclient.client.config.RequestConfig> r0 = cz.msebera.android.httpclient.client.config.RequestConfig.class
            java.lang.String r1 = "http.request-config"
            java.lang.Object r0 = r2.getAttribute(r1, r0)
            cz.msebera.android.httpclient.client.config.RequestConfig r0 = (cz.msebera.android.httpclient.client.config.RequestConfig) r0
            if (r0 == 0) goto Ld
            goto Lf
        Ld:
            cz.msebera.android.httpclient.client.config.RequestConfig r0 = cz.msebera.android.httpclient.client.config.RequestConfig.DEFAULT
        Lf:
            return r0
    }

    public cz.msebera.android.httpclient.auth.AuthState getTargetAuthState() {
            r2 = this;
            java.lang.Class<cz.msebera.android.httpclient.auth.AuthState> r0 = cz.msebera.android.httpclient.auth.AuthState.class
            java.lang.String r1 = "http.auth.target-scope"
            java.lang.Object r0 = r2.getAttribute(r1, r0)
            cz.msebera.android.httpclient.auth.AuthState r0 = (cz.msebera.android.httpclient.auth.AuthState) r0
            return r0
    }

    public java.lang.Object getUserToken() {
            r1 = this;
            java.lang.String r0 = "http.user-token"
            java.lang.Object r0 = r1.getAttribute(r0)
            return r0
    }

    public <T> T getUserToken(java.lang.Class<T> r2) {
            r1 = this;
            java.lang.String r0 = "http.user-token"
            java.lang.Object r2 = r1.getAttribute(r0, r2)
            return r2
    }

    public void setAuthCache(cz.msebera.android.httpclient.client.AuthCache r2) {
            r1 = this;
            java.lang.String r0 = "http.auth.auth-cache"
            r1.setAttribute(r0, r2)
            return
    }

    public void setAuthSchemeRegistry(cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.auth.AuthSchemeProvider> r2) {
            r1 = this;
            java.lang.String r0 = "http.authscheme-registry"
            r1.setAttribute(r0, r2)
            return
    }

    public void setCookieSpecRegistry(cz.msebera.android.httpclient.config.Lookup<cz.msebera.android.httpclient.cookie.CookieSpecProvider> r2) {
            r1 = this;
            java.lang.String r0 = "http.cookiespec-registry"
            r1.setAttribute(r0, r2)
            return
    }

    public void setCookieStore(cz.msebera.android.httpclient.client.CookieStore r2) {
            r1 = this;
            java.lang.String r0 = "http.cookie-store"
            r1.setAttribute(r0, r2)
            return
    }

    public void setCredentialsProvider(cz.msebera.android.httpclient.client.CredentialsProvider r2) {
            r1 = this;
            java.lang.String r0 = "http.auth.credentials-provider"
            r1.setAttribute(r0, r2)
            return
    }

    public void setRequestConfig(cz.msebera.android.httpclient.client.config.RequestConfig r2) {
            r1 = this;
            java.lang.String r0 = "http.request-config"
            r1.setAttribute(r0, r2)
            return
    }

    public void setUserToken(java.lang.Object r2) {
            r1 = this;
            java.lang.String r0 = "http.user-token"
            r1.setAttribute(r0, r2)
            return
    }
}
