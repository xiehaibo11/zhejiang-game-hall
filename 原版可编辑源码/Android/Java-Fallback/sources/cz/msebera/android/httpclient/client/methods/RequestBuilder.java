package cz.msebera.android.httpclient.client.methods;

@cz.msebera.android.httpclient.annotation.NotThreadSafe
public class RequestBuilder {
    private java.nio.charset.Charset charset;
    private cz.msebera.android.httpclient.client.config.RequestConfig config;
    private cz.msebera.android.httpclient.HttpEntity entity;
    private cz.msebera.android.httpclient.message.HeaderGroup headergroup;
    private java.lang.String method;
    private java.util.List<cz.msebera.android.httpclient.NameValuePair> parameters;
    private java.net.URI uri;
    private cz.msebera.android.httpclient.ProtocolVersion version;

    static class InternalEntityEclosingRequest extends cz.msebera.android.httpclient.client.methods.HttpEntityEnclosingRequestBase {
        private final java.lang.String method;

        InternalEntityEclosingRequest(java.lang.String r1) {
                r0 = this;
                r0.<init>()
                r0.method = r1
                return
        }

        @Override
        public java.lang.String getMethod() {
                r1 = this;
                java.lang.String r0 = r1.method
                return r0
        }
    }

    static class InternalRequest extends cz.msebera.android.httpclient.client.methods.HttpRequestBase {
        private final java.lang.String method;

        InternalRequest(java.lang.String r1) {
                r0 = this;
                r0.<init>()
                r0.method = r1
                return
        }

        @Override
        public java.lang.String getMethod() {
                r1 = this;
                java.lang.String r0 = r1.method
                return r0
        }
    }

    RequestBuilder() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    RequestBuilder(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.UTF_8
            r1.charset = r0
            r1.method = r2
            return
    }

    RequestBuilder(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.method = r1
            if (r2 == 0) goto Lc
            java.net.URI r1 = java.net.URI.create(r2)
            goto Ld
        Lc:
            r1 = 0
        Ld:
            r0.uri = r1
            return
    }

    RequestBuilder(java.lang.String r1, java.net.URI r2) {
            r0 = this;
            r0.<init>()
            r0.method = r1
            r0.uri = r2
            return
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder copy(cz.msebera.android.httpclient.HttpRequest r1) {
            java.lang.String r0 = "HTTP request"
            cz.msebera.android.httpclient.util.Args.notNull(r1, r0)
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            r0.<init>()
            cz.msebera.android.httpclient.client.methods.RequestBuilder r1 = r0.doCopy(r1)
            return r1
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder create(java.lang.String r1) {
            java.lang.String r0 = "HTTP method"
            cz.msebera.android.httpclient.util.Args.notBlank(r1, r0)
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            r0.<init>(r1)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder delete() {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "DELETE"
            r0.<init>(r1)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder delete(java.lang.String r2) {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "DELETE"
            r0.<init>(r1, r2)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder delete(java.net.URI r2) {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "DELETE"
            r0.<init>(r1, r2)
            return r0
    }

    private cz.msebera.android.httpclient.client.methods.RequestBuilder doCopy(cz.msebera.android.httpclient.HttpRequest r6) {
            r5 = this;
            if (r6 != 0) goto L3
            return r5
        L3:
            cz.msebera.android.httpclient.RequestLine r0 = r6.getRequestLine()
            java.lang.String r0 = r0.getMethod()
            r5.method = r0
            cz.msebera.android.httpclient.RequestLine r0 = r6.getRequestLine()
            cz.msebera.android.httpclient.ProtocolVersion r0 = r0.getProtocolVersion()
            r5.version = r0
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r5.headergroup
            if (r0 != 0) goto L22
            cz.msebera.android.httpclient.message.HeaderGroup r0 = new cz.msebera.android.httpclient.message.HeaderGroup
            r0.<init>()
            r5.headergroup = r0
        L22:
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r5.headergroup
            r0.clear()
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r5.headergroup
            cz.msebera.android.httpclient.Header[] r1 = r6.getAllHeaders()
            r0.setHeaders(r1)
            r0 = 0
            r5.parameters = r0
            r5.entity = r0
            boolean r1 = r6 instanceof cz.msebera.android.httpclient.HttpEntityEnclosingRequest
            if (r1 == 0) goto L67
            r1 = r6
            cz.msebera.android.httpclient.HttpEntityEnclosingRequest r1 = (cz.msebera.android.httpclient.HttpEntityEnclosingRequest) r1
            cz.msebera.android.httpclient.HttpEntity r1 = r1.getEntity()
            cz.msebera.android.httpclient.entity.ContentType r2 = cz.msebera.android.httpclient.entity.ContentType.get(r1)
            if (r2 == 0) goto L65
            java.lang.String r2 = r2.getMimeType()
            cz.msebera.android.httpclient.entity.ContentType r3 = cz.msebera.android.httpclient.entity.ContentType.APPLICATION_FORM_URLENCODED
            java.lang.String r3 = r3.getMimeType()
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L65
            java.util.List r1 = cz.msebera.android.httpclient.client.utils.URLEncodedUtils.parse(r1)     // Catch: java.io.IOException -> L63
            boolean r2 = r1.isEmpty()     // Catch: java.io.IOException -> L63
            if (r2 != 0) goto L67
            r5.parameters = r1     // Catch: java.io.IOException -> L63
            goto L67
        L63:
            goto L67
        L65:
            r5.entity = r1
        L67:
            boolean r1 = r6 instanceof cz.msebera.android.httpclient.client.methods.HttpUriRequest
            if (r1 == 0) goto L73
            r1 = r6
            cz.msebera.android.httpclient.client.methods.HttpUriRequest r1 = (cz.msebera.android.httpclient.client.methods.HttpUriRequest) r1
            java.net.URI r1 = r1.getURI()
            goto L7f
        L73:
            cz.msebera.android.httpclient.RequestLine r1 = r6.getRequestLine()
            java.lang.String r1 = r1.getUri()
            java.net.URI r1 = java.net.URI.create(r1)
        L7f:
            cz.msebera.android.httpclient.client.utils.URIBuilder r2 = new cz.msebera.android.httpclient.client.utils.URIBuilder
            r2.<init>(r1)
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r3 = r5.parameters
            if (r3 != 0) goto L9a
            java.util.List r3 = r2.getQueryParams()
            boolean r4 = r3.isEmpty()
            if (r4 != 0) goto L98
            r5.parameters = r3
            r2.clearParameters()
            goto L9a
        L98:
            r5.parameters = r0
        L9a:
            java.net.URI r2 = r2.build()     // Catch: java.net.URISyntaxException -> La1
            r5.uri = r2     // Catch: java.net.URISyntaxException -> La1
            goto La3
        La1:
            r5.uri = r1
        La3:
            boolean r1 = r6 instanceof cz.msebera.android.httpclient.client.methods.Configurable
            if (r1 == 0) goto Lb0
            cz.msebera.android.httpclient.client.methods.Configurable r6 = (cz.msebera.android.httpclient.client.methods.Configurable) r6
            cz.msebera.android.httpclient.client.config.RequestConfig r6 = r6.getConfig()
            r5.config = r6
            goto Lb2
        Lb0:
            r5.config = r0
        Lb2:
            return r5
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder get() {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "GET"
            r0.<init>(r1)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder get(java.lang.String r2) {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "GET"
            r0.<init>(r1, r2)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder get(java.net.URI r2) {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "GET"
            r0.<init>(r1, r2)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder head() {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "HEAD"
            r0.<init>(r1)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder head(java.lang.String r2) {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "HEAD"
            r0.<init>(r1, r2)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder head(java.net.URI r2) {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "HEAD"
            r0.<init>(r1, r2)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder options() {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "OPTIONS"
            r0.<init>(r1)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder options(java.lang.String r2) {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "OPTIONS"
            r0.<init>(r1, r2)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder options(java.net.URI r2) {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "OPTIONS"
            r0.<init>(r1, r2)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder patch() {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "PATCH"
            r0.<init>(r1)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder patch(java.lang.String r2) {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "PATCH"
            r0.<init>(r1, r2)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder patch(java.net.URI r2) {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "PATCH"
            r0.<init>(r1, r2)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder post() {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "POST"
            r0.<init>(r1)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder post(java.lang.String r2) {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "POST"
            r0.<init>(r1, r2)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder post(java.net.URI r2) {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "POST"
            r0.<init>(r1, r2)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder put() {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "PUT"
            r0.<init>(r1)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder put(java.lang.String r2) {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "PUT"
            r0.<init>(r1, r2)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder put(java.net.URI r2) {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "PUT"
            r0.<init>(r1, r2)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder trace() {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "TRACE"
            r0.<init>(r1)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder trace(java.lang.String r2) {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "TRACE"
            r0.<init>(r1, r2)
            return r0
    }

    public static cz.msebera.android.httpclient.client.methods.RequestBuilder trace(java.net.URI r2) {
            cz.msebera.android.httpclient.client.methods.RequestBuilder r0 = new cz.msebera.android.httpclient.client.methods.RequestBuilder
            java.lang.String r1 = "TRACE"
            r0.<init>(r1, r2)
            return r0
    }

    public cz.msebera.android.httpclient.client.methods.RequestBuilder addHeader(cz.msebera.android.httpclient.Header r2) {
            r1 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.message.HeaderGroup r0 = new cz.msebera.android.httpclient.message.HeaderGroup
            r0.<init>()
            r1.headergroup = r0
        Lb:
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            r0.addHeader(r2)
            return r1
    }

    public cz.msebera.android.httpclient.client.methods.RequestBuilder addHeader(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r2.headergroup
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.message.HeaderGroup r0 = new cz.msebera.android.httpclient.message.HeaderGroup
            r0.<init>()
            r2.headergroup = r0
        Lb:
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r2.headergroup
            cz.msebera.android.httpclient.message.BasicHeader r1 = new cz.msebera.android.httpclient.message.BasicHeader
            r1.<init>(r3, r4)
            r0.addHeader(r1)
            return r2
    }

    public cz.msebera.android.httpclient.client.methods.RequestBuilder addParameter(cz.msebera.android.httpclient.NameValuePair r2) {
            r1 = this;
            java.lang.String r0 = "Name value pair"
            cz.msebera.android.httpclient.util.Args.notNull(r2, r0)
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r0 = r1.parameters
            if (r0 != 0) goto L10
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r1.parameters = r0
        L10:
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r0 = r1.parameters
            r0.add(r2)
            return r1
    }

    public cz.msebera.android.httpclient.client.methods.RequestBuilder addParameter(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            cz.msebera.android.httpclient.message.BasicNameValuePair r0 = new cz.msebera.android.httpclient.message.BasicNameValuePair
            r0.<init>(r2, r3)
            cz.msebera.android.httpclient.client.methods.RequestBuilder r2 = r1.addParameter(r0)
            return r2
    }

    public cz.msebera.android.httpclient.client.methods.RequestBuilder addParameters(cz.msebera.android.httpclient.NameValuePair... r4) {
            r3 = this;
            int r0 = r4.length
            r1 = 0
        L2:
            if (r1 >= r0) goto Lc
            r2 = r4[r1]
            r3.addParameter(r2)
            int r1 = r1 + 1
            goto L2
        Lc:
            return r3
    }

    public cz.msebera.android.httpclient.client.methods.HttpUriRequest build() {
            r4 = this;
            java.net.URI r0 = r4.uri
            if (r0 == 0) goto L5
            goto Lb
        L5:
            java.lang.String r0 = "/"
            java.net.URI r0 = java.net.URI.create(r0)
        Lb:
            cz.msebera.android.httpclient.HttpEntity r1 = r4.entity
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r2 = r4.parameters
            if (r2 == 0) goto L4e
            boolean r2 = r2.isEmpty()
            if (r2 != 0) goto L4e
            if (r1 != 0) goto L37
            java.lang.String r2 = r4.method
            java.lang.String r3 = "POST"
            boolean r2 = r3.equalsIgnoreCase(r2)
            if (r2 != 0) goto L2d
            java.lang.String r2 = r4.method
            java.lang.String r3 = "PUT"
            boolean r2 = r3.equalsIgnoreCase(r2)
            if (r2 == 0) goto L37
        L2d:
            cz.msebera.android.httpclient.client.entity.UrlEncodedFormEntity r1 = new cz.msebera.android.httpclient.client.entity.UrlEncodedFormEntity
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r2 = r4.parameters
            java.nio.charset.Charset r3 = cz.msebera.android.httpclient.protocol.HTTP.DEF_CONTENT_CHARSET
            r1.<init>(r2, r3)
            goto L4e
        L37:
            cz.msebera.android.httpclient.client.utils.URIBuilder r2 = new cz.msebera.android.httpclient.client.utils.URIBuilder     // Catch: java.net.URISyntaxException -> L4d
            r2.<init>(r0)     // Catch: java.net.URISyntaxException -> L4d
            java.nio.charset.Charset r3 = r4.charset     // Catch: java.net.URISyntaxException -> L4d
            cz.msebera.android.httpclient.client.utils.URIBuilder r2 = r2.setCharset(r3)     // Catch: java.net.URISyntaxException -> L4d
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r3 = r4.parameters     // Catch: java.net.URISyntaxException -> L4d
            cz.msebera.android.httpclient.client.utils.URIBuilder r2 = r2.addParameters(r3)     // Catch: java.net.URISyntaxException -> L4d
            java.net.URI r0 = r2.build()     // Catch: java.net.URISyntaxException -> L4d
            goto L4e
        L4d:
        L4e:
            if (r1 != 0) goto L58
            cz.msebera.android.httpclient.client.methods.RequestBuilder$InternalRequest r1 = new cz.msebera.android.httpclient.client.methods.RequestBuilder$InternalRequest
            java.lang.String r2 = r4.method
            r1.<init>(r2)
            goto L63
        L58:
            cz.msebera.android.httpclient.client.methods.RequestBuilder$InternalEntityEclosingRequest r2 = new cz.msebera.android.httpclient.client.methods.RequestBuilder$InternalEntityEclosingRequest
            java.lang.String r3 = r4.method
            r2.<init>(r3)
            r2.setEntity(r1)
            r1 = r2
        L63:
            cz.msebera.android.httpclient.ProtocolVersion r2 = r4.version
            r1.setProtocolVersion(r2)
            r1.setURI(r0)
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r4.headergroup
            if (r0 == 0) goto L76
            cz.msebera.android.httpclient.Header[] r0 = r0.getAllHeaders()
            r1.setHeaders(r0)
        L76:
            cz.msebera.android.httpclient.client.config.RequestConfig r0 = r4.config
            r1.setConfig(r0)
            return r1
    }

    public java.nio.charset.Charset getCharset() {
            r1 = this;
            java.nio.charset.Charset r0 = r1.charset
            return r0
    }

    public cz.msebera.android.httpclient.client.config.RequestConfig getConfig() {
            r1 = this;
            cz.msebera.android.httpclient.client.config.RequestConfig r0 = r1.config
            return r0
    }

    public cz.msebera.android.httpclient.HttpEntity getEntity() {
            r1 = this;
            cz.msebera.android.httpclient.HttpEntity r0 = r1.entity
            return r0
    }

    public cz.msebera.android.httpclient.Header getFirstHeader(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            if (r0 == 0) goto L9
            cz.msebera.android.httpclient.Header r2 = r0.getFirstHeader(r2)
            goto La
        L9:
            r2 = 0
        La:
            return r2
    }

    public cz.msebera.android.httpclient.Header[] getHeaders(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            if (r0 == 0) goto L9
            cz.msebera.android.httpclient.Header[] r2 = r0.getHeaders(r2)
            goto La
        L9:
            r2 = 0
        La:
            return r2
    }

    public cz.msebera.android.httpclient.Header getLastHeader(java.lang.String r2) {
            r1 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            if (r0 == 0) goto L9
            cz.msebera.android.httpclient.Header r2 = r0.getLastHeader(r2)
            goto La
        L9:
            r2 = 0
        La:
            return r2
    }

    public java.lang.String getMethod() {
            r1 = this;
            java.lang.String r0 = r1.method
            return r0
    }

    public java.util.List<cz.msebera.android.httpclient.NameValuePair> getParameters() {
            r2 = this;
            java.util.List<cz.msebera.android.httpclient.NameValuePair> r0 = r2.parameters
            if (r0 == 0) goto La
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r0)
            goto Lf
        La:
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
        Lf:
            return r1
    }

    public java.net.URI getUri() {
            r1 = this;
            java.net.URI r0 = r1.uri
            return r0
    }

    public cz.msebera.android.httpclient.ProtocolVersion getVersion() {
            r1 = this;
            cz.msebera.android.httpclient.ProtocolVersion r0 = r1.version
            return r0
    }

    public cz.msebera.android.httpclient.client.methods.RequestBuilder removeHeader(cz.msebera.android.httpclient.Header r2) {
            r1 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.message.HeaderGroup r0 = new cz.msebera.android.httpclient.message.HeaderGroup
            r0.<init>()
            r1.headergroup = r0
        Lb:
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            r0.removeHeader(r2)
            return r1
    }

    public cz.msebera.android.httpclient.client.methods.RequestBuilder removeHeaders(java.lang.String r3) {
            r2 = this;
            if (r3 == 0) goto L23
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r2.headergroup
            if (r0 != 0) goto L7
            goto L23
        L7:
            cz.msebera.android.httpclient.HeaderIterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            cz.msebera.android.httpclient.Header r1 = r0.nextHeader()
            java.lang.String r1 = r1.getName()
            boolean r1 = r3.equalsIgnoreCase(r1)
            if (r1 == 0) goto Lb
            r0.remove()
            goto Lb
        L23:
            return r2
    }

    public cz.msebera.android.httpclient.client.methods.RequestBuilder setCharset(java.nio.charset.Charset r1) {
            r0 = this;
            r0.charset = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.methods.RequestBuilder setConfig(cz.msebera.android.httpclient.client.config.RequestConfig r1) {
            r0 = this;
            r0.config = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.methods.RequestBuilder setEntity(cz.msebera.android.httpclient.HttpEntity r1) {
            r0 = this;
            r0.entity = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.methods.RequestBuilder setHeader(cz.msebera.android.httpclient.Header r2) {
            r1 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.message.HeaderGroup r0 = new cz.msebera.android.httpclient.message.HeaderGroup
            r0.<init>()
            r1.headergroup = r0
        Lb:
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r1.headergroup
            r0.updateHeader(r2)
            return r1
    }

    public cz.msebera.android.httpclient.client.methods.RequestBuilder setHeader(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r2.headergroup
            if (r0 != 0) goto Lb
            cz.msebera.android.httpclient.message.HeaderGroup r0 = new cz.msebera.android.httpclient.message.HeaderGroup
            r0.<init>()
            r2.headergroup = r0
        Lb:
            cz.msebera.android.httpclient.message.HeaderGroup r0 = r2.headergroup
            cz.msebera.android.httpclient.message.BasicHeader r1 = new cz.msebera.android.httpclient.message.BasicHeader
            r1.<init>(r3, r4)
            r0.updateHeader(r1)
            return r2
    }

    public cz.msebera.android.httpclient.client.methods.RequestBuilder setUri(java.lang.String r1) {
            r0 = this;
            if (r1 == 0) goto L7
            java.net.URI r1 = java.net.URI.create(r1)
            goto L8
        L7:
            r1 = 0
        L8:
            r0.uri = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.methods.RequestBuilder setUri(java.net.URI r1) {
            r0 = this;
            r0.uri = r1
            return r0
    }

    public cz.msebera.android.httpclient.client.methods.RequestBuilder setVersion(cz.msebera.android.httpclient.ProtocolVersion r1) {
            r0 = this;
            r0.version = r1
            return r0
    }
}
