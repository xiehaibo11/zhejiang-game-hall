package cz.msebera.android.httpclient.client.methods;

import cz.msebera.android.httpclient.Header;
import cz.msebera.android.httpclient.HttpEntity;
import cz.msebera.android.httpclient.HttpEntityEnclosingRequest;
import cz.msebera.android.httpclient.HttpHost;
import cz.msebera.android.httpclient.HttpRequest;
import cz.msebera.android.httpclient.ProtocolVersion;
import cz.msebera.android.httpclient.RequestLine;
import cz.msebera.android.httpclient.annotation.NotThreadSafe;
import cz.msebera.android.httpclient.message.AbstractHttpMessage;
import cz.msebera.android.httpclient.message.BasicRequestLine;
import cz.msebera.android.httpclient.params.HttpParams;
import cz.msebera.android.httpclient.protocol.HTTP;
import cz.msebera.android.httpclient.util.Args;
import java.net.URI;

@NotThreadSafe
public class HttpRequestWrapper extends AbstractHttpMessage implements HttpUriRequest {
    private final String method;
    private final HttpRequest original;
    private final HttpHost target;
    private URI uri;
    private ProtocolVersion version;

    @Override
    public boolean isAborted() {
        return false;
    }

    private HttpRequestWrapper(HttpRequest httpRequest, HttpHost httpHost) {
        this.original = (HttpRequest) Args.notNull(httpRequest, "HTTP request");
        this.target = httpHost;
        this.version = this.original.getRequestLine().getProtocolVersion();
        this.method = this.original.getRequestLine().getMethod();
        if (httpRequest instanceof HttpUriRequest) {
            this.uri = ((HttpUriRequest) httpRequest).getURI();
        } else {
            this.uri = null;
        }
        setHeaders(httpRequest.getAllHeaders());
    }

    @Override
    public ProtocolVersion getProtocolVersion() {
        ProtocolVersion protocolVersion = this.version;
        return protocolVersion != null ? protocolVersion : this.original.getProtocolVersion();
    }

    public void setProtocolVersion(ProtocolVersion protocolVersion) {
        this.version = protocolVersion;
    }

    @Override
    public URI getURI() {
        return this.uri;
    }

    public void setURI(URI uri) {
        this.uri = uri;
    }

    @Override
    public String getMethod() {
        return this.method;
    }

    @Override
    public void abort() throws UnsupportedOperationException {
        throw new UnsupportedOperationException();
    }

    @Override
    public RequestLine getRequestLine() {
        String uri;
        URI uri2 = this.uri;
        if (uri2 != null) {
            uri = uri2.toASCIIString();
        } else {
            uri = this.original.getRequestLine().getUri();
        }
        if (uri == null || uri.isEmpty()) {
            uri = "/";
        }
        return new BasicRequestLine(this.method, uri, getProtocolVersion());
    }

    public HttpRequest getOriginal() {
        return this.original;
    }

    public HttpHost getTarget() {
        return this.target;
    }

    public String toString() {
        return getRequestLine() + " " + this.headergroup;
    }

    static class HttpEntityEnclosingRequestWrapper extends HttpRequestWrapper implements HttpEntityEnclosingRequest {
        private HttpEntity entity;

        HttpEntityEnclosingRequestWrapper(HttpEntityEnclosingRequest httpEntityEnclosingRequest, HttpHost httpHost) {
            super(httpEntityEnclosingRequest, httpHost);
            this.entity = httpEntityEnclosingRequest.getEntity();
        }

        @Override
        public HttpEntity getEntity() {
            return this.entity;
        }

        @Override
        public void setEntity(HttpEntity httpEntity) {
            this.entity = httpEntity;
        }

        @Override
        public boolean expectContinue() {
            Header firstHeader = getFirstHeader("Expect");
            return firstHeader != null && HTTP.EXPECT_CONTINUE.equalsIgnoreCase(firstHeader.getValue());
        }
    }

    public static HttpRequestWrapper wrap(HttpRequest httpRequest) {
        return wrap(httpRequest, null);
    }

    public static HttpRequestWrapper wrap(HttpRequest httpRequest, HttpHost httpHost) {
        Args.notNull(httpRequest, "HTTP request");
        if (httpRequest instanceof HttpEntityEnclosingRequest) {
            return new HttpEntityEnclosingRequestWrapper((HttpEntityEnclosingRequest) httpRequest, httpHost);
        }
        return new HttpRequestWrapper(httpRequest, httpHost);
    }

    @Override
    @Deprecated
    public HttpParams getParams() {
        if (this.params == null) {
            this.params = this.original.getParams().copy();
        }
        return this.params;
    }
}
