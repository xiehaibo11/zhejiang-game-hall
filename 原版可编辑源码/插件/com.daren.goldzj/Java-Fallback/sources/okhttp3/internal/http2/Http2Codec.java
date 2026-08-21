package okhttp3.internal.http2;

import java.io.IOException;
import java.net.ProtocolException;
import java.util.ArrayList;
import java.util.List;
import java.util.Locale;
import java.util.concurrent.TimeUnit;
import okhttp3.Headers;
import okhttp3.Interceptor;
import okhttp3.OkHttpClient;
import okhttp3.Protocol;
import okhttp3.Request;
import okhttp3.Response;
import okhttp3.ResponseBody;
import okhttp3.internal.Internal;
import okhttp3.internal.Util;
import okhttp3.internal.connection.StreamAllocation;
import okhttp3.internal.http.HttpCodec;
import okhttp3.internal.http.HttpHeaders;
import okhttp3.internal.http.RealResponseBody;
import okhttp3.internal.http.RequestLine;
import okhttp3.internal.http.StatusLine;
import okio.Buffer;
import okio.ByteString;
import okio.ForwardingSource;
import okio.Okio;
import okio.Sink;
import okio.Source;

public final class Http2Codec implements HttpCodec {
    private static final String CONNECTION = "connection";
    private static final String ENCODING = "encoding";
    private static final String HOST = "host";
    private static final List<String> HTTP_2_SKIPPED_REQUEST_HEADERS = null;
    private static final List<String> HTTP_2_SKIPPED_RESPONSE_HEADERS = null;
    private static final String KEEP_ALIVE = "keep-alive";
    private static final String PROXY_CONNECTION = "proxy-connection";
    private static final String TE = "te";
    private static final String TRANSFER_ENCODING = "transfer-encoding";
    private static final String UPGRADE = "upgrade";
    private final Interceptor.Chain chain;
    private final Http2Connection connection;
    private final Protocol protocol;
    private Http2Stream stream;
    final StreamAllocation streamAllocation;

    class StreamFinishingSource extends ForwardingSource {
        long bytesRead;
        boolean completed;
        final Http2Codec this$0;

        StreamFinishingSource(Http2Codec r1, Source r2) {
            this.this$0 = r1;
            super(r2);
            this.completed = false;
            this.bytesRead = 0;
        }

        public long read(Buffer r3, long r4) throws IOException {
            long r32 = delegate().read(r3, r4);     // Catch: IOException -> L6
            if (r32 <= 0) goto L5;
            this.bytesRead += r32;
        L5:
            return r32;
        L6:
            e = move-exception;
            endOfInput(e);
            throw e;
        }

        public void close() throws IOException {
            super.close();
            endOfInput(null);
        }

        private void endOfInput(IOException r8) {
            if (this.completed == false) goto L5;
            return;
        L5:
            this.completed = true;
            this.this$0.streamAllocation.streamFinished(false, this.this$0, this.bytesRead, r8);
        }
    }

    static {
        HTTP_2_SKIPPED_REQUEST_HEADERS = Util.immutableList(new String[]{CONNECTION, HOST, KEEP_ALIVE, PROXY_CONNECTION, TE, TRANSFER_ENCODING, ENCODING, UPGRADE, ":method", ":path", ":scheme", ":authority"});
        HTTP_2_SKIPPED_RESPONSE_HEADERS = Util.immutableList(new String[]{CONNECTION, HOST, KEEP_ALIVE, PROXY_CONNECTION, TE, TRANSFER_ENCODING, ENCODING, UPGRADE});
    }

    public Http2Codec(OkHttpClient r1, Interceptor.Chain r2, StreamAllocation r3, Http2Connection r4) {
        this.chain = r2;
        this.streamAllocation = r3;
        this.connection = r4;
        if (r1.protocols().contains(Protocol.H2_PRIOR_KNOWLEDGE) == false) goto L5;
        Protocol r12 = Protocol.H2_PRIOR_KNOWLEDGE;
    L6:
        this.protocol = r12;
        return;
    L5:
        r12 = Protocol.HTTP_2;
        goto L6
    }

    @Override
    public Sink createRequestBody(Request r1, long r2) {
        return this.stream.getSink();
    }

    @Override
    public void writeRequestHeaders(Request r4) throws IOException {
        if (this.stream == null) goto L6;
        return;
    L6:
        if (r4.body() == null) goto L8;
        boolean r0 = true;
    L9:
        this.stream = this.connection.newStream(http2HeadersList(r4), r0);
        this.stream.readTimeout().timeout(this.chain.readTimeoutMillis(), TimeUnit.MILLISECONDS);
        this.stream.writeTimeout().timeout(this.chain.writeTimeoutMillis(), TimeUnit.MILLISECONDS);
        return;
    L8:
        r0 = false;
        goto L9
    }

    @Override
    public void flushRequest() throws IOException {
        this.connection.flush();
    }

    @Override
    public void finishRequest() throws IOException {
        this.stream.getSink().close();
    }

    @Override
    public Response.Builder readResponseHeaders(boolean r3) throws IOException {
        Response.Builder r0 = readHttp2HeadersList(this.stream.takeHeaders(), this.protocol);
        if (r3 == true) goto L5;
    L8:
        return r0;
    L5:
        if (Internal.instance.code(r0) != 100) goto L8;
        return null;
    }

    public static List<Header> http2HeadersList(Request r6) {
        Headers r0 = r6.headers();
        ArrayList r1 = new ArrayList(r0.size() + 4);
        r1.add(new Header(Header.TARGET_METHOD, r6.method()));
        r1.add(new Header(Header.TARGET_PATH, RequestLine.requestPath(r6.url())));
        String r2 = r6.header("Host");
        if (r2 == null) goto L5;
        r1.add(new Header(Header.TARGET_AUTHORITY, r2));
    L5:
        r1.add(new Header(Header.TARGET_SCHEME, r6.url().scheme()));
        int r62 = 0;
        int r22 = r0.size();
    L6:
        if (r62 >= r22) goto L11;
        ByteString r3 = ByteString.encodeUtf8(r0.name(r62).toLowerCase(Locale.US));
        if (HTTP_2_SKIPPED_REQUEST_HEADERS.contains(r3.utf8()) == true) goto L10;
        r1.add(new Header(r3, r0.value(r62)));
    L10:
        r62 = r62 + 1;
        goto L6
    L11:
        return r1;
    }

    public static Response.Builder readHttp2HeadersList(Headers r7, Protocol r8) throws IOException {
        Headers.Builder r0 = new Headers.Builder();
        int r1 = r7.size();
        StatusLine r2 = null;
        int r3 = 0;
    L3:
        if (r3 >= r1) goto L11;
        String r4 = r7.name(r3);
        String r5 = r7.value(r3);
        if (r4.equals(":status") == false) goto L8;
        r2 = StatusLine.parse("HTTP/1.1 " + r5);
    L10:
        r3 = r3 + 1;
        goto L3
    L8:
        if (HTTP_2_SKIPPED_RESPONSE_HEADERS.contains(r4) == true) goto L10;
        Internal.instance.addLenient(r0, r4, r5);
        goto L10
    L11:
        if (r2 == null) goto L15;
        return new Response.Builder().protocol(r8).code(r2.code).message(r2.message).headers(r0.build());
    L15:
        throw new ProtocolException("Expected ':status' header not present");
    }

    @Override
    public ResponseBody openResponseBody(Response r5) throws IOException {
        this.streamAllocation.eventListener.responseBodyStart(this.streamAllocation.call);
        return new RealResponseBody(r5.header("Content-Type"), HttpHeaders.contentLength(r5), Okio.buffer(new StreamFinishingSource(this, this.stream.getSource())));
    }

    @Override
    public void cancel() {
        Http2Stream r0 = this.stream;
        if (r0 == null) goto L6;
        r0.closeLater(ErrorCode.CANCEL);
        return;
    }
}
