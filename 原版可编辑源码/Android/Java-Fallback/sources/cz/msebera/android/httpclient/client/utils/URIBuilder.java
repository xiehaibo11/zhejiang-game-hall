package cz.msebera.android.httpclient.client.utils;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class URIBuilder {
    private java.nio.charset.Charset charset;
    private java.lang.String encodedAuthority;
    private java.lang.String encodedFragment;
    private java.lang.String encodedPath;
    private java.lang.String encodedQuery;
    private java.lang.String encodedSchemeSpecificPart;
    private java.lang.String encodedUserInfo;
    private java.lang.String fragment;
    private java.lang.String host;
    private java.lang.String path;
    private int port;
    private java.lang.String query;
    private java.util.List<cz.msebera.android.httpclient.NameValuePair> queryParams;
    private java.lang.String scheme;
    private java.lang.String userInfo;

    public URIBuilder() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.port = r0
            return
    }

    public URIBuilder(java.lang.String r2) throws java.net.URISyntaxException {
            r1 = this;
            r1.<init>()
            java.net.URI r0 = new java.net.URI
            r0.<init>(r2)
            r1.digestURI(r0)
            return
    }

    public URIBuilder(java.net.URI r1) {
            r0 = this;
            r0.<init>()
            r0.digestURI(r1)
            return
    }

    private java.lang.String buildString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.scheme
            if (r1 == 0) goto L11
            r0.append(r1)
            r1 = 58
            r0.append(r1)
        L11:
            java.lang.String r1 = r3.encodedSchemeSpecificPart
            if (r1 == 0) goto L1a
            r0.append(r1)
            goto Lc1
        L1a:
            java.lang.String r1 = r3.encodedAuthority
            java.lang.String r2 = "//"
            if (r1 == 0) goto L29
            r0.append(r2)
            java.lang.String r1 = r3.encodedAuthority
            r0.append(r1)
            goto L76
        L29:
            java.lang.String r1 = r3.host
            if (r1 == 0) goto L76
            r0.append(r2)
            java.lang.String r1 = r3.encodedUserInfo
            java.lang.String r2 = "@"
            if (r1 == 0) goto L3d
            r0.append(r1)
            r0.append(r2)
            goto L4b
        L3d:
            java.lang.String r1 = r3.userInfo
            if (r1 == 0) goto L4b
            java.lang.String r1 = r3.encodeUserInfo(r1)
            r0.append(r1)
            r0.append(r2)
        L4b:
            java.lang.String r1 = r3.host
            boolean r1 = cz.msebera.android.httpclient.conn.util.InetAddressUtils.isIPv6Address(r1)
            if (r1 == 0) goto L63
            java.lang.String r1 = "["
            r0.append(r1)
            java.lang.String r1 = r3.host
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            goto L68
        L63:
            java.lang.String r1 = r3.host
            r0.append(r1)
        L68:
            int r1 = r3.port
            if (r1 < 0) goto L76
            java.lang.String r1 = ":"
            r0.append(r1)
            int r1 = r3.port
            r0.append(r1)
        L76:
            java.lang.String r1 = r3.encodedPath
            if (r1 == 0) goto L82
            java.lang.String r1 = normalizePath(r1)
            r0.append(r1)
            goto L91
        L82:
            java.lang.String r1 = r3.path
            if (r1 == 0) goto L91
            java.lang.String r1 = normalizePath(r1)
            java.lang.String r1 = r3.encodePath(r1)
            r0.append(r1)
        L91:
            java.lang.String r1 = r3.encodedQuery
            java.lang.String r2 = "?"
            if (r1 == 0) goto La0
            r0.append(r2)
            java.lang.String r1 = r3.encodedQuery
            r0.append(r1)
            goto Lc1
        La0:
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r1 = r3.queryParams
            if (r1 == 0) goto Lb1
            r0.append(r2)
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r1 = r3.queryParams
            java.lang.String r1 = r3.encodeUrlForm(r1)
            r0.append(r1)
            goto Lc1
        Lb1:
            java.lang.String r1 = r3.query
            if (r1 == 0) goto Lc1
            r0.append(r2)
            java.lang.String r1 = r3.query
            java.lang.String r1 = r3.encodeUric(r1)
            r0.append(r1)
        Lc1:
            java.lang.String r1 = r3.encodedFragment
            java.lang.String r2 = "#"
            if (r1 == 0) goto Ld0
            r0.append(r2)
            java.lang.String r1 = r3.encodedFragment
            r0.append(r1)
            goto Le0
        Ld0:
            java.lang.String r1 = r3.fragment
            if (r1 == 0) goto Le0
            r0.append(r2)
            java.lang.String r1 = r3.fragment
            java.lang.String r1 = r3.encodeUric(r1)
            r0.append(r1)
        Le0:
            java.lang.String r0 = r0.toString()
            return r0
    }

    private void digestURI(java.net.URI r3) {
            r2 = this;
            java.lang.String r0 = r3.getScheme()
            r2.scheme = r0
            java.lang.String r0 = r3.getRawSchemeSpecificPart()
            r2.encodedSchemeSpecificPart = r0
            java.lang.String r0 = r3.getRawAuthority()
            r2.encodedAuthority = r0
            java.lang.String r0 = r3.getHost()
            r2.host = r0
            int r0 = r3.getPort()
            r2.port = r0
            java.lang.String r0 = r3.getRawUserInfo()
            r2.encodedUserInfo = r0
            java.lang.String r0 = r3.getUserInfo()
            r2.userInfo = r0
            java.lang.String r0 = r3.getRawPath()
            r2.encodedPath = r0
            java.lang.String r0 = r3.getPath()
            r2.path = r0
            java.lang.String r0 = r3.getRawQuery()
            r2.encodedQuery = r0
            java.lang.String r0 = r3.getRawQuery()
            java.nio.charset.Charset r1 = r2.charset
            if (r1 == 0) goto L45
            goto L47
        L45:
            java.nio.charset.Charset r1 = cz.msebera.android.httpclient.Consts.UTF_8
        L47:
            java.util.List r0 = r2.parseQuery(r0, r1)
            r2.queryParams = r0
            java.lang.String r0 = r3.getRawFragment()
            r2.encodedFragment = r0
            java.lang.String r3 = r3.getFragment()
            r2.fragment = r3
            return
    }

    private java.lang.String encodePath(java.lang.String r2) {
            r1 = this;
            java.nio.charset.Charset r0 = r1.charset
            if (r0 == 0) goto L5
            goto L7
        L5:
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.UTF_8
        L7:
            java.lang.String r2 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.encPath(r2, r0)
            return r2
    }

    private java.lang.String encodeUric(java.lang.String r2) {
            r1 = this;
            java.nio.charset.Charset r0 = r1.charset
            if (r0 == 0) goto L5
            goto L7
        L5:
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.UTF_8
        L7:
            java.lang.String r2 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.encUric(r2, r0)
            return r2
    }

    private java.lang.String encodeUrlForm(java.util.List<cz.msebera.android.httpclient.NameValuePair> r2) {
            r1 = this;
            java.nio.charset.Charset r0 = r1.charset
            if (r0 == 0) goto L5
            goto L7
        L5:
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.UTF_8
        L7:
            java.lang.String r2 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.format(r2, r0)
            return r2
    }

    private java.lang.String encodeUserInfo(java.lang.String r2) {
            r1 = this;
            java.nio.charset.Charset r0 = r1.charset
            if (r0 == 0) goto L5
            goto L7
        L5:
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.UTF_8
        L7:
            java.lang.String r2 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.encUserInfo(r2, r0)
            return r2
    }

    private static java.lang.String normalizePath(java.lang.String r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            r0 = 0
        L5:
            int r1 = r3.length()
            if (r0 >= r1) goto L17
            char r1 = r3.charAt(r0)
            r2 = 47
            if (r1 == r2) goto L14
            goto L17
        L14:
            int r0 = r0 + 1
            goto L5
        L17:
            r1 = 1
            if (r0 <= r1) goto L1f
            int r0 = r0 - r1
            java.lang.String r3 = r3.substring(r0)
        L1f:
            return r3
    }

    private java.util.List<cz.msebera.android.httpclient.NameValuePair> parseQuery(java.lang.String r2, java.nio.charset.Charset r3) {
            r1 = this;
            if (r2 == 0) goto Ld
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto Ld
            java.util.List r2 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.parse(r2, r3)
            return r2
        Ld:
            r2 = 0
            return r2
    }

    public cz.msebera.android.httpclient.client.utils.URIBuilder addParameter(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r0 = r2.queryParams
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.queryParams = r0
        Lb:
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r0 = r2.queryParams
            cz.msebera.android.httpclient.message.BasicNameValuePair r1 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            r1.<init>(r3, r4)
            r0.add(r1)
            r3 = 0
            r2.encodedQuery = r3
            r2.encodedSchemeSpecificPart = r3
            r2.query = r3
            return r2
    }

    public cz.msebera.android.httpclient.client.utils.URIBuilder addParameters(java.util.List<cz.msebera.android.httpclient.NameValuePair> r2) {
            r1 = this;
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r0 = r1.queryParams
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.queryParams = r0
        Lb:
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r0 = r1.queryParams
            r0.addAll(r2)
            r2 = 0
            r1.encodedQuery = r2
            r1.encodedSchemeSpecificPart = r2
            r1.query = r2
            return r1
    }

    public java.net.URI build() throws java.net.URISyntaxException {
            r2 = this;
            java.net.URI r0 = new java.net.URI
            java.lang.String r1 = r2.buildString()
            r0.<init>(r1)
            return r0
    }

    public cz.msebera.android.httpclient.client.utils.URIBuilder clearParameters() {
            r1 = this;
            r0 = 0
            r1.queryParams = r0
            r1.encodedQuery = r0
            r1.encodedSchemeSpecificPart = r0
            return r1
    }

    public java.nio.charset.Charset getCharset() {
            r1 = this;
            java.nio.charset.Charset r0 = r1.charset
            return r0
    }

    public java.lang.String getFragment() {
            r1 = this;
            java.lang.String r0 = r1.fragment
            return r0
    }

    public java.lang.String getHost() {
            r1 = this;
            java.lang.String r0 = r1.host
            return r0
    }

    public java.lang.String getPath() {
            r1 = this;
            java.lang.String r0 = r1.path
            return r0
    }

    public int getPort() {
            r1 = this;
            int r0 = r1.port
            return r0
    }

    public java.util.List<cz.msebera.android.httpclient.NameValuePair> getQueryParams() {
            r2 = this;
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r0 = r2.queryParams
            if (r0 == 0) goto La
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r0)
            return r1
        La:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            return r0
    }

    public java.lang.String getScheme() {
            r1 = this;
            java.lang.String r0 = r1.scheme
            return r0
    }

    public java.lang.String getUserInfo() {
            r1 = this;
            java.lang.String r0 = r1.userInfo
            return r0
    }

    public boolean isAbsolute() {
            r1 = this;
            java.lang.String r0 = r1.scheme
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean isOpaque() {
            r1 = this;
            java.lang.String r0 = r1.path
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public cz.msebera.android.httpclient.client.utils.URIBuilder removeQuery() {
            r1 = this;
            r0 = 0
            r1.queryParams = r0
            r1.query = r0
            r1.encodedQuery = r0
            r1.encodedSchemeSpecificPart = r0
            return r1
    }

    public cz.msebera.android.httpclient.client.utils.URIBuilder setCharset(java.nio.charset.Charset r1) {
            r0 = this;
            r0.charset = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.utils.URIBuilder setCustomQuery(java.lang.String r1) {
            r0 = this;
            r0.query = r1
            r1 = 0
            r0.encodedQuery = r1
            r0.encodedSchemeSpecificPart = r1
            r0.queryParams = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.utils.URIBuilder setFragment(java.lang.String r1) {
            r0 = this;
            r0.fragment = r1
            r1 = 0
            r0.encodedFragment = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.utils.URIBuilder setHost(java.lang.String r1) {
            r0 = this;
            r0.host = r1
            r1 = 0
            r0.encodedSchemeSpecificPart = r1
            r0.encodedAuthority = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.utils.URIBuilder setParameter(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r0 = r2.queryParams
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.queryParams = r0
        Lb:
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r0 = r2.queryParams
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L33
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r0 = r2.queryParams
            java.util.Iterator r0 = r0.iterator()
        L19:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L33
            java.lang.Object r1 = r0.next()
            cz.msebera.android.httpclient.NameValuePair r1 = (cz.msebera.android.httpclient.NameValuePair) r1
            java.lang.String r1 = r1.getName()
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L19
            r0.remove()
            goto L19
        L33:
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r0 = r2.queryParams
            cz.msebera.android.httpclient.message.BasicNameValuePair r1 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            r1.<init>(r3, r4)
            r0.add(r1)
            r3 = 0
            r2.encodedQuery = r3
            r2.encodedSchemeSpecificPart = r3
            r2.query = r3
            return r2
    }

    public cz.msebera.android.httpclient.client.utils.URIBuilder setParameters(java.util.List<cz.msebera.android.httpclient.NameValuePair> r2) {
            r1 = this;
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r0 = r1.queryParams
            if (r0 != 0) goto Lc
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.queryParams = r0
            goto Lf
        Lc:
            r0.clear()
        Lf:
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r0 = r1.queryParams
            r0.addAll(r2)
            r2 = 0
            r1.encodedQuery = r2
            r1.encodedSchemeSpecificPart = r2
            r1.query = r2
            return r1
    }

    public cz.msebera.android.httpclient.client.utils.URIBuilder setParameters(cz.msebera.android.httpclient.NameValuePair... r5) {
            r4 = this;
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r0 = r4.queryParams
            if (r0 != 0) goto Lc
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r4.queryParams = r0
            goto Lf
        Lc:
            r0.clear()
        Lf:
            int r0 = r5.length
            r1 = 0
        L11:
            if (r1 >= r0) goto L1d
            r2 = r5[r1]
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r3 = r4.queryParams
            r3.add(r2)
            int r1 = r1 + 1
            goto L11
        L1d:
            r5 = 0
            r4.encodedQuery = r5
            r4.encodedSchemeSpecificPart = r5
            r4.query = r5
            return r4
    }

    public cz.msebera.android.httpclient.client.utils.URIBuilder setPath(java.lang.String r1) {
            r0 = this;
            r0.path = r1
            r1 = 0
            r0.encodedSchemeSpecificPart = r1
            r0.encodedPath = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.utils.URIBuilder setPort(int r1) {
            r0 = this;
            if (r1 >= 0) goto L3
            r1 = -1
        L3:
            r0.port = r1
            r1 = 0
            r0.encodedSchemeSpecificPart = r1
            r0.encodedAuthority = r1
            return r0
    }

    @java.lang.Deprecated
    public cz.msebera.android.httpclient.client.utils.URIBuilder setQuery(java.lang.String r2) {
            r1 = this;
            java.nio.charset.Charset r0 = r1.charset
            if (r0 == 0) goto L5
            goto L7
        L5:
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.UTF_8
        L7:
            java.util.List r2 = r1.parseQuery(r2, r0)
            r1.queryParams = r2
            r2 = 0
            r1.query = r2
            r1.encodedQuery = r2
            r1.encodedSchemeSpecificPart = r2
            return r1
    }

    public cz.msebera.android.httpclient.client.utils.URIBuilder setScheme(java.lang.String r1) {
            r0 = this;
            r0.scheme = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.utils.URIBuilder setUserInfo(java.lang.String r1) {
            r0 = this;
            r0.userInfo = r1
            r1 = 0
            r0.encodedSchemeSpecificPart = r1
            r0.encodedAuthority = r1
            r0.encodedUserInfo = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.utils.URIBuilder setUserInfo(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            r2 = 58
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = r0.toString()
            cz.msebera.android.httpclient.client.utils.URIBuilder r2 = r1.setUserInfo(r2)
            return r2
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.buildString()
            return r0
    }
}
