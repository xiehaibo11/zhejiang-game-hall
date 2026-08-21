package cz.msebera.android.httpclient.protocol;

public final class HTTP {

    @java.lang.Deprecated
    public static final java.lang.String ASCII = "ASCII";

    @java.lang.Deprecated
    public static final java.lang.String CHARSET_PARAM = "; charset=";
    public static final java.lang.String CHUNK_CODING = "chunked";
    public static final java.lang.String CONN_CLOSE = "Close";
    public static final java.lang.String CONN_DIRECTIVE = "Connection";
    public static final java.lang.String CONN_KEEP_ALIVE = "Keep-Alive";
    public static final java.lang.String CONTENT_ENCODING = "Content-Encoding";
    public static final java.lang.String CONTENT_LEN = "Content-Length";
    public static final java.lang.String CONTENT_TYPE = "Content-Type";
    public static final int CR = 13;
    public static final java.lang.String DATE_HEADER = "Date";

    @java.lang.Deprecated
    public static final java.lang.String DEFAULT_CONTENT_CHARSET = "ISO-8859-1";

    @java.lang.Deprecated
    public static final java.lang.String DEFAULT_CONTENT_TYPE = "application/octet-stream";

    @java.lang.Deprecated
    public static final java.lang.String DEFAULT_PROTOCOL_CHARSET = "US-ASCII";
    public static final java.nio.charset.Charset DEF_CONTENT_CHARSET = null;
    public static final java.nio.charset.Charset DEF_PROTOCOL_CHARSET = null;
    public static final java.lang.String EXPECT_CONTINUE = "100-continue";
    public static final java.lang.String EXPECT_DIRECTIVE = "Expect";
    public static final int HT = 9;
    public static final java.lang.String IDENTITY_CODING = "identity";

    @java.lang.Deprecated
    public static final java.lang.String ISO_8859_1 = "ISO-8859-1";
    public static final int LF = 10;

    @java.lang.Deprecated
    public static final java.lang.String OCTET_STREAM_TYPE = "application/octet-stream";

    @java.lang.Deprecated
    public static final java.lang.String PLAIN_TEXT_TYPE = "text/plain";
    public static final java.lang.String SERVER_HEADER = "Server";
    public static final int SP = 32;
    public static final java.lang.String TARGET_HOST = "Host";
    public static final java.lang.String TRANSFER_ENCODING = "Transfer-Encoding";
    public static final java.lang.String USER_AGENT = "User-Agent";

    @java.lang.Deprecated
    public static final java.lang.String US_ASCII = "US-ASCII";

    @java.lang.Deprecated
    public static final java.lang.String UTF_16 = "UTF-16";

    @java.lang.Deprecated
    public static final java.lang.String UTF_8 = "UTF-8";

    static {
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.ISO_8859_1
            cz.msebera.android.httpclient.protocol.HTTP.DEF_CONTENT_CHARSET = r0
            java.nio.charset.Charset r0 = cz.msebera.android.httpclient.Consts.ASCII
            cz.msebera.android.httpclient.protocol.HTTP.DEF_PROTOCOL_CHARSET = r0
            return
    }

    private HTTP() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean isWhitespace(char r1) {
            r0 = 32
            if (r1 == r0) goto L13
            r0 = 9
            if (r1 == r0) goto L13
            r0 = 13
            if (r1 == r0) goto L13
            r0 = 10
            if (r1 != r0) goto L11
            goto L13
        L11:
            r1 = 0
            goto L14
        L13:
            r1 = 1
        L14:
            return r1
    }
}
