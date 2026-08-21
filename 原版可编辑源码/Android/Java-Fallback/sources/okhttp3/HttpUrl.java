package okhttp3;

@kotlin.Metadata(d1 = {"\u0000H\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0004\n\u0002\u0010\b\n\u0000\n\u0002\u0010 \n\u0002\b\r\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0010\"\n\u0002\b\u000e\n\u0002\u0018\u0002\n\u0002\b\u0013\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\u0018\u0000 J2\u00020\u0001:\u0002IJBa\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0005\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0003\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\f\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u00030\n\u0012\u0010\u0010\u000b\u001a\f\u0012\u0006\u0012\u0004\u0018\u00010\u0003\u0018\u00010\n\u0012\b\u0010\f\u001a\u0004\u0018\u00010\u0003\u0012\u0006\u0010\r\u001a\u00020\u0003¢\u0006\u0002\u0010\u000eJ\u000f\u0010\u000f\u001a\u0004\u0018\u00010\u0003H\u0007¢\u0006\u0002\b!J\r\u0010\u0011\u001a\u00020\u0003H\u0007¢\u0006\u0002\b\"J\r\u0010\u0012\u001a\u00020\u0003H\u0007¢\u0006\u0002\b#J\u0013\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\u00030\nH\u0007¢\u0006\u0002\b$J\u000f\u0010\u0015\u001a\u0004\u0018\u00010\u0003H\u0007¢\u0006\u0002\b%J\r\u0010\u0016\u001a\u00020\u0003H\u0007¢\u0006\u0002\b&J\u0013\u0010'\u001a\u00020\u00182\b\u0010(\u001a\u0004\u0018\u00010\u0001H\u0096\u0002J\u000f\u0010\f\u001a\u0004\u0018\u00010\u0003H\u0007¢\u0006\u0002\b)J\b\u0010*\u001a\u00020\bH\u0016J\r\u0010\u0006\u001a\u00020\u0003H\u0007¢\u0006\u0002\b+J\u0006\u0010,\u001a\u00020-J\u0010\u0010,\u001a\u0004\u0018\u00010-2\u0006\u0010.\u001a\u00020\u0003J\r\u0010\u0005\u001a\u00020\u0003H\u0007¢\u0006\u0002\b/J\u0013\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u00030\nH\u0007¢\u0006\u0002\b0J\r\u0010\u001a\u001a\u00020\bH\u0007¢\u0006\u0002\b1J\r\u0010\u0007\u001a\u00020\bH\u0007¢\u0006\u0002\b2J\u000f\u0010\u001c\u001a\u0004\u0018\u00010\u0003H\u0007¢\u0006\u0002\b3J\u0010\u00104\u001a\u0004\u0018\u00010\u00032\u0006\u00105\u001a\u00020\u0003J\u000e\u00106\u001a\u00020\u00032\u0006\u00107\u001a\u00020\bJ\u0013\u0010\u001d\u001a\b\u0012\u0004\u0012\u00020\u00030\u001eH\u0007¢\u0006\u0002\b8J\u0010\u00109\u001a\u0004\u0018\u00010\u00032\u0006\u00107\u001a\u00020\bJ\u0016\u0010:\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u00030\n2\u0006\u00105\u001a\u00020\u0003J\r\u0010 \u001a\u00020\bH\u0007¢\u0006\u0002\b;J\u0006\u0010<\u001a\u00020\u0003J\u0010\u0010=\u001a\u0004\u0018\u00010\u00002\u0006\u0010.\u001a\u00020\u0003J\r\u0010\u0002\u001a\u00020\u0003H\u0007¢\u0006\u0002\b>J\b\u0010?\u001a\u00020\u0003H\u0016J\r\u0010@\u001a\u00020AH\u0007¢\u0006\u0002\bBJ\r\u0010C\u001a\u00020DH\u0007¢\u0006\u0002\b\rJ\b\u0010E\u001a\u0004\u0018\u00010\u0003J\r\u0010B\u001a\u00020AH\u0007¢\u0006\u0002\bFJ\r\u0010\r\u001a\u00020DH\u0007¢\u0006\u0002\bGJ\r\u0010\u0004\u001a\u00020\u0003H\u0007¢\u0006\u0002\bHR\u0013\u0010\u000f\u001a\u0004\u0018\u00010\u00038G¢\u0006\u0006\u001a\u0004\b\u000f\u0010\u0010R\u0011\u0010\u0011\u001a\u00020\u00038G¢\u0006\u0006\u001a\u0004\b\u0011\u0010\u0010R\u0011\u0010\u0012\u001a\u00020\u00038G¢\u0006\u0006\u001a\u0004\b\u0012\u0010\u0010R\u0017\u0010\u0013\u001a\b\u0012\u0004\u0012\u00020\u00030\n8G¢\u0006\u0006\u001a\u0004\b\u0013\u0010\u0014R\u0013\u0010\u0015\u001a\u0004\u0018\u00010\u00038G¢\u0006\u0006\u001a\u0004\b\u0015\u0010\u0010R\u0011\u0010\u0016\u001a\u00020\u00038G¢\u0006\u0006\u001a\u0004\b\u0016\u0010\u0010R\u0015\u0010\f\u001a\u0004\u0018\u00010\u00038\u0007¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\u0010R\u0013\u0010\u0006\u001a\u00020\u00038\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0006\u0010\u0010R\u0011\u0010\u0017\u001a\u00020\u0018¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0019R\u0013\u0010\u0005\u001a\u00020\u00038\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0010R\u0019\u0010\t\u001a\b\u0012\u0004\u0012\u00020\u00030\n8\u0007¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\u0014R\u0011\u0010\u001a\u001a\u00020\b8G¢\u0006\u0006\u001a\u0004\b\u001a\u0010\u001bR\u0013\u0010\u0007\u001a\u00020\b8\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\u001bR\u0013\u0010\u001c\u001a\u0004\u0018\u00010\u00038G¢\u0006\u0006\u001a\u0004\b\u001c\u0010\u0010R\u0018\u0010\u000b\u001a\f\u0012\u0006\u0012\u0004\u0018\u00010\u0003\u0018\u00010\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u0017\u0010\u001d\u001a\b\u0012\u0004\u0012\u00020\u00030\u001e8G¢\u0006\u0006\u001a\u0004\b\u001d\u0010\u001fR\u0011\u0010 \u001a\u00020\b8G¢\u0006\u0006\u001a\u0004\b \u0010\u001bR\u0013\u0010\u0002\u001a\u00020\u00038\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\u0010R\u000e\u0010\r\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0013\u0010\u0004\u001a\u00020\u00038\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0004\u0010\u0010¨\u0006K"}, d2 = {"Lokhttp3/HttpUrl;", "", "scheme", "", "username", "password", "host", "port", "", "pathSegments", "", "queryNamesAndValues", "fragment", "url", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/util/List;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)V", "encodedFragment", "()Ljava/lang/String;", "encodedPassword", "encodedPath", "encodedPathSegments", "()Ljava/util/List;", "encodedQuery", "encodedUsername", "isHttps", "", "()Z", "pathSize", "()I", "query", "queryParameterNames", "", "()Ljava/util/Set;", "querySize", "-deprecated_encodedFragment", "-deprecated_encodedPassword", "-deprecated_encodedPath", "-deprecated_encodedPathSegments", "-deprecated_encodedQuery", "-deprecated_encodedUsername", "equals", "other", "-deprecated_fragment", "hashCode", "-deprecated_host", "newBuilder", "Lokhttp3/HttpUrl$Builder;", "link", "-deprecated_password", "-deprecated_pathSegments", "-deprecated_pathSize", "-deprecated_port", "-deprecated_query", "queryParameter", "name", "queryParameterName", "index", "-deprecated_queryParameterNames", "queryParameterValue", "queryParameterValues", "-deprecated_querySize", "redact", "resolve", "-deprecated_scheme", "toString", "toUri", "Ljava/net/URI;", "uri", "toUrl", "Ljava/net/URL;", "topPrivateDomain", "-deprecated_uri", "-deprecated_url", "-deprecated_username", "Builder", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class HttpUrl {
    public static final okhttp3.HttpUrl.Companion Companion = null;
    public static final java.lang.String FORM_ENCODE_SET = " \"':;<=>@[]^`{}|/\\?#&!$(),~";
    public static final java.lang.String FRAGMENT_ENCODE_SET = "";
    public static final java.lang.String FRAGMENT_ENCODE_SET_URI = " \"#<>\\^`{|}";
    private static final char[] HEX_DIGITS = null;
    public static final java.lang.String PASSWORD_ENCODE_SET = " \"':;<=>@[]^`{}|/\\?#";
    public static final java.lang.String PATH_SEGMENT_ENCODE_SET = " \"<>^`{}|/\\?#";
    public static final java.lang.String PATH_SEGMENT_ENCODE_SET_URI = "[]";
    public static final java.lang.String QUERY_COMPONENT_ENCODE_SET = " !\"#$&'(),/:;<=>?@[]\\^`{|}~";
    public static final java.lang.String QUERY_COMPONENT_ENCODE_SET_URI = "\\^`{|}";
    public static final java.lang.String QUERY_COMPONENT_REENCODE_SET = " \"'<>#&=";
    public static final java.lang.String QUERY_ENCODE_SET = " \"'<>#";
    public static final java.lang.String USERNAME_ENCODE_SET = " \"':;<=>@[]^`{}|/\\?#";
    private final java.lang.String fragment;
    private final java.lang.String host;
    private final boolean isHttps;
    private final java.lang.String password;
    private final java.util.List<java.lang.String> pathSegments;
    private final int port;
    private final java.util.List<java.lang.String> queryNamesAndValues;
    private final java.lang.String scheme;
    private final java.lang.String url;
    private final java.lang.String username;

    @kotlin.Metadata(d1 = {"\u0000<\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\b\n\u0002\u0010!\n\u0002\b\r\n\u0002\u0010\b\n\u0002\b\u0012\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\f\n\u0002\u0010\u0002\n\u0002\b\u0017\u0018\u0000 V2\u00020\u0001:\u0001VB\u0005¢\u0006\u0002\u0010\u0002J\u000e\u0010#\u001a\u00020\u00002\u0006\u0010$\u001a\u00020\u0004J\u000e\u0010%\u001a\u00020\u00002\u0006\u0010\f\u001a\u00020\u0004J\u0018\u0010&\u001a\u00020\u00002\u0006\u0010'\u001a\u00020\u00042\b\u0010(\u001a\u0004\u0018\u00010\u0004J\u000e\u0010)\u001a\u00020\u00002\u0006\u0010*\u001a\u00020\u0004J\u000e\u0010+\u001a\u00020\u00002\u0006\u0010,\u001a\u00020\u0004J\u0018\u0010+\u001a\u00020\u00002\u0006\u0010,\u001a\u00020\u00042\u0006\u0010-\u001a\u00020.H\u0002J\u0018\u0010/\u001a\u00020\u00002\u0006\u00100\u001a\u00020\u00042\b\u00101\u001a\u0004\u0018\u00010\u0004J\u0006\u00102\u001a\u000203J\b\u00104\u001a\u00020\u001bH\u0002J\u0010\u0010\u0003\u001a\u00020\u00002\b\u0010\u0003\u001a\u0004\u0018\u00010\u0004J\u000e\u0010\t\u001a\u00020\u00002\u0006\u0010\t\u001a\u00020\u0004J\u000e\u00105\u001a\u00020\u00002\u0006\u00105\u001a\u00020\u0004J\u0010\u00106\u001a\u00020\u00002\b\u00106\u001a\u0004\u0018\u00010\u0004J\u000e\u0010\u0014\u001a\u00020\u00002\u0006\u0010\u0014\u001a\u00020\u0004J\u0010\u00107\u001a\u00020\u00002\b\u00107\u001a\u0004\u0018\u00010\u0004J\u000e\u0010\u0017\u001a\u00020\u00002\u0006\u0010\u0017\u001a\u00020\u0004J\u0010\u00108\u001a\u00020.2\u0006\u00109\u001a\u00020\u0004H\u0002J\u0010\u0010:\u001a\u00020.2\u0006\u00109\u001a\u00020\u0004H\u0002J\u001f\u0010;\u001a\u00020\u00002\b\u0010<\u001a\u0004\u0018\u0001032\u0006\u00109\u001a\u00020\u0004H\u0000¢\u0006\u0002\b=J\u000e\u0010>\u001a\u00020\u00002\u0006\u0010>\u001a\u00020\u0004J\b\u0010?\u001a\u00020@H\u0002J\u000e\u0010\u001a\u001a\u00020\u00002\u0006\u0010\u001a\u001a\u00020\u001bJ0\u0010A\u001a\u00020@2\u0006\u00109\u001a\u00020\u00042\u0006\u0010B\u001a\u00020\u001b2\u0006\u0010C\u001a\u00020\u001b2\u0006\u0010D\u001a\u00020.2\u0006\u0010-\u001a\u00020.H\u0002J\u0010\u0010E\u001a\u00020\u00002\b\u0010E\u001a\u0004\u0018\u00010\u0004J\r\u0010F\u001a\u00020\u0000H\u0000¢\u0006\u0002\bGJ\u0010\u0010H\u001a\u00020@2\u0006\u0010I\u001a\u00020\u0004H\u0002J\u000e\u0010J\u001a\u00020\u00002\u0006\u0010'\u001a\u00020\u0004J\u000e\u0010K\u001a\u00020\u00002\u0006\u00100\u001a\u00020\u0004J\u000e\u0010L\u001a\u00020\u00002\u0006\u0010M\u001a\u00020\u001bJ \u0010N\u001a\u00020@2\u0006\u00109\u001a\u00020\u00042\u0006\u0010O\u001a\u00020\u001b2\u0006\u0010C\u001a\u00020\u001bH\u0002J\u000e\u0010 \u001a\u00020\u00002\u0006\u0010 \u001a\u00020\u0004J\u0016\u0010P\u001a\u00020\u00002\u0006\u0010M\u001a\u00020\u001b2\u0006\u0010$\u001a\u00020\u0004J\u0018\u0010Q\u001a\u00020\u00002\u0006\u0010'\u001a\u00020\u00042\b\u0010(\u001a\u0004\u0018\u00010\u0004J\u0016\u0010R\u001a\u00020\u00002\u0006\u0010M\u001a\u00020\u001b2\u0006\u0010*\u001a\u00020\u0004J\u0018\u0010S\u001a\u00020\u00002\u0006\u00100\u001a\u00020\u00042\b\u00101\u001a\u0004\u0018\u00010\u0004J\b\u0010T\u001a\u00020\u0004H\u0016J\u000e\u0010U\u001a\u00020\u00002\u0006\u0010U\u001a\u00020\u0004R\u001c\u0010\u0003\u001a\u0004\u0018\u00010\u0004X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0005\u0010\u0006\"\u0004\b\u0007\u0010\bR\u001a\u0010\t\u001a\u00020\u0004X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\n\u0010\u0006\"\u0004\b\u000b\u0010\bR\u001a\u0010\f\u001a\b\u0012\u0004\u0012\u00020\u00040\rX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR$\u0010\u0010\u001a\f\u0012\u0006\u0012\u0004\u0018\u00010\u0004\u0018\u00010\rX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0011\u0010\u000f\"\u0004\b\u0012\u0010\u0013R\u001a\u0010\u0014\u001a\u00020\u0004X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0015\u0010\u0006\"\u0004\b\u0016\u0010\bR\u001c\u0010\u0017\u001a\u0004\u0018\u00010\u0004X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0018\u0010\u0006\"\u0004\b\u0019\u0010\bR\u001a\u0010\u001a\u001a\u00020\u001bX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001c\u0010\u001d\"\u0004\b\u001e\u0010\u001fR\u001c\u0010 \u001a\u0004\u0018\u00010\u0004X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b!\u0010\u0006\"\u0004\b\"\u0010\b¨\u0006W"}, d2 = {"Lokhttp3/HttpUrl$Builder;", "", "()V", "encodedFragment", "", "getEncodedFragment$okhttp", "()Ljava/lang/String;", "setEncodedFragment$okhttp", "(Ljava/lang/String;)V", "encodedPassword", "getEncodedPassword$okhttp", "setEncodedPassword$okhttp", "encodedPathSegments", "", "getEncodedPathSegments$okhttp", "()Ljava/util/List;", "encodedQueryNamesAndValues", "getEncodedQueryNamesAndValues$okhttp", "setEncodedQueryNamesAndValues$okhttp", "(Ljava/util/List;)V", "encodedUsername", "getEncodedUsername$okhttp", "setEncodedUsername$okhttp", "host", "getHost$okhttp", "setHost$okhttp", "port", "", "getPort$okhttp", "()I", "setPort$okhttp", "(I)V", "scheme", "getScheme$okhttp", "setScheme$okhttp", "addEncodedPathSegment", "encodedPathSegment", "addEncodedPathSegments", "addEncodedQueryParameter", "encodedName", "encodedValue", "addPathSegment", "pathSegment", "addPathSegments", "pathSegments", "alreadyEncoded", "", "addQueryParameter", "name", "value", "build", "Lokhttp3/HttpUrl;", "effectivePort", "encodedPath", "encodedQuery", "fragment", "isDot", "input", "isDotDot", "parse", "base", "parse$okhttp", "password", "pop", "", "push", "pos", "limit", "addTrailingSlash", "query", "reencodeForUri", "reencodeForUri$okhttp", "removeAllCanonicalQueryParameters", "canonicalName", "removeAllEncodedQueryParameters", "removeAllQueryParameters", "removePathSegment", "index", "resolvePath", "startPos", "setEncodedPathSegment", "setEncodedQueryParameter", "setPathSegment", "setQueryParameter", "toString", "username", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Builder {
        public static final okhttp3.HttpUrl.Builder.Companion Companion = null;
        public static final java.lang.String INVALID_HOST = "Invalid URL host";
        private java.lang.String encodedFragment;
        private java.lang.String encodedPassword;
        private final java.util.List<java.lang.String> encodedPathSegments;
        private java.util.List<java.lang.String> encodedQueryNamesAndValues;
        private java.lang.String encodedUsername;
        private java.lang.String host;
        private int port;
        private java.lang.String scheme;

        @kotlin.Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0002\b\u0007\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J \u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\u00042\u0006\u0010\b\u001a\u00020\u00062\u0006\u0010\t\u001a\u00020\u0006H\u0002J \u0010\n\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\u00042\u0006\u0010\b\u001a\u00020\u00062\u0006\u0010\t\u001a\u00020\u0006H\u0002J \u0010\u000b\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\u00042\u0006\u0010\b\u001a\u00020\u00062\u0006\u0010\t\u001a\u00020\u0006H\u0002J\u001c\u0010\f\u001a\u00020\u0006*\u00020\u00042\u0006\u0010\b\u001a\u00020\u00062\u0006\u0010\t\u001a\u00020\u0006H\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0080T¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"Lokhttp3/HttpUrl$Builder$Companion;", "", "()V", "INVALID_HOST", "", "parsePort", "", "input", "pos", "limit", "portColonOffset", "schemeDelimiterOffset", "slashCount", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
        public static final class Companion {
            private Companion() {
                    r0 = this;
                    r0.<init>()
                    return
            }

            public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                    r0 = this;
                    r0.<init>()
                    return
            }

            public static final int access$parsePort(okhttp3.HttpUrl.Builder.Companion r0, java.lang.String r1, int r2, int r3) {
                    int r0 = r0.parsePort(r1, r2, r3)
                    return r0
            }

            public static final int access$portColonOffset(okhttp3.HttpUrl.Builder.Companion r0, java.lang.String r1, int r2, int r3) {
                    int r0 = r0.portColonOffset(r1, r2, r3)
                    return r0
            }

            public static final int access$schemeDelimiterOffset(okhttp3.HttpUrl.Builder.Companion r0, java.lang.String r1, int r2, int r3) {
                    int r0 = r0.schemeDelimiterOffset(r1, r2, r3)
                    return r0
            }

            public static final int access$slashCount(okhttp3.HttpUrl.Builder.Companion r0, java.lang.String r1, int r2, int r3) {
                    int r0 = r0.slashCount(r1, r2, r3)
                    return r0
            }

            private final int parsePort(java.lang.String r14, int r15, int r16) {
                    r13 = this;
                    r0 = -1
                    okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion     // Catch: java.lang.NumberFormatException -> L25
                    java.lang.String r5 = ""
                    r6 = 0
                    r7 = 0
                    r8 = 0
                    r9 = 0
                    r10 = 0
                    r11 = 248(0xf8, float:3.48E-43)
                    r12 = 0
                    r2 = r14
                    r3 = r15
                    r4 = r16
                    java.lang.String r1 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)     // Catch: java.lang.NumberFormatException -> L25
                    int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.NumberFormatException -> L25
                    r2 = 0
                    r3 = 1
                    if (r3 > r1) goto L22
                    r4 = 65536(0x10000, float:9.1835E-41)
                    if (r1 >= r4) goto L22
                    r2 = r3
                L22:
                    if (r2 == 0) goto L25
                    r0 = r1
                L25:
                    return r0
            }

            private final int portColonOffset(java.lang.String r3, int r4, int r5) {
                    r2 = this;
                L0:
                    if (r4 >= r5) goto L1f
                    char r0 = r3.charAt(r4)
                    r1 = 91
                    if (r0 != r1) goto L17
                La:
                    int r4 = r4 + 1
                    if (r4 >= r5) goto L1c
                    char r0 = r3.charAt(r4)
                    r1 = 93
                    if (r0 != r1) goto La
                    goto L1c
                L17:
                    r1 = 58
                    if (r0 != r1) goto L1c
                    return r4
                L1c:
                    int r4 = r4 + 1
                    goto L0
                L1f:
                    return r5
            }

            private final int schemeDelimiterOffset(java.lang.String r10, int r11, int r12) {
                    r9 = this;
                    int r0 = r12 - r11
                    r1 = -1
                    r2 = 2
                    if (r0 >= r2) goto L7
                    return r1
                L7:
                    char r0 = r10.charAt(r11)
                    r2 = 97
                    int r3 = kotlin.jvm.internal.Intrinsics.compare(r0, r2)
                    r4 = 65
                    if (r3 < 0) goto L1d
                    r3 = 122(0x7a, float:1.71E-43)
                    int r3 = kotlin.jvm.internal.Intrinsics.compare(r0, r3)
                    if (r3 <= 0) goto L2d
                L1d:
                    int r3 = kotlin.jvm.internal.Intrinsics.compare(r0, r4)
                    if (r3 < 0) goto L7f
                    r3 = 90
                    int r0 = kotlin.jvm.internal.Intrinsics.compare(r0, r3)
                    if (r0 <= 0) goto L2d
                    goto L7f
                L2d:
                    r0 = 1
                    int r11 = r11 + r0
                L2f:
                    if (r11 >= r12) goto L7f
                    int r3 = r11 + 1
                    char r5 = r10.charAt(r11)
                    r6 = 0
                    if (r2 > r5) goto L40
                    r7 = 123(0x7b, float:1.72E-43)
                    if (r5 >= r7) goto L40
                    r7 = r0
                    goto L41
                L40:
                    r7 = r6
                L41:
                    if (r7 == 0) goto L45
                L43:
                    r7 = r0
                    goto L4d
                L45:
                    if (r4 > r5) goto L4c
                    r7 = 91
                    if (r5 >= r7) goto L4c
                    goto L43
                L4c:
                    r7 = r6
                L4d:
                    r8 = 58
                    if (r7 == 0) goto L53
                L51:
                    r7 = r0
                    goto L5b
                L53:
                    r7 = 48
                    if (r7 > r5) goto L5a
                    if (r5 >= r8) goto L5a
                    goto L51
                L5a:
                    r7 = r6
                L5b:
                    if (r7 == 0) goto L5f
                L5d:
                    r7 = r0
                    goto L65
                L5f:
                    r7 = 43
                    if (r5 != r7) goto L64
                    goto L5d
                L64:
                    r7 = r6
                L65:
                    if (r7 == 0) goto L69
                L67:
                    r7 = r0
                    goto L6f
                L69:
                    r7 = 45
                    if (r5 != r7) goto L6e
                    goto L67
                L6e:
                    r7 = r6
                L6f:
                    if (r7 == 0) goto L73
                L71:
                    r6 = r0
                    goto L78
                L73:
                    r7 = 46
                    if (r5 != r7) goto L78
                    goto L71
                L78:
                    if (r6 == 0) goto L7c
                    r11 = r3
                    goto L2f
                L7c:
                    if (r5 != r8) goto L7f
                    r1 = r11
                L7f:
                    return r1
            }

            private final int slashCount(java.lang.String r4, int r5, int r6) {
                    r3 = this;
                    r0 = 0
                L1:
                    if (r5 >= r6) goto L15
                    int r1 = r5 + 1
                    char r5 = r4.charAt(r5)
                    r2 = 92
                    if (r5 == r2) goto L11
                    r2 = 47
                    if (r5 != r2) goto L15
                L11:
                    int r0 = r0 + 1
                    r5 = r1
                    goto L1
                L15:
                    return r0
            }
        }

        static {
                okhttp3.HttpUrl$Builder$Companion r0 = new okhttp3.HttpUrl$Builder$Companion
                r1 = 0
                r0.<init>(r1)
                okhttp3.HttpUrl.Builder.Companion = r0
                return
        }

        public Builder() {
                r2 = this;
                r2.<init>()
                java.lang.String r0 = ""
                r2.encodedUsername = r0
                r2.encodedPassword = r0
                r1 = -1
                r2.port = r1
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                java.util.List r1 = (java.util.List) r1
                r2.encodedPathSegments = r1
                r1.add(r0)
                return
        }

        private final okhttp3.HttpUrl.Builder addPathSegments(java.lang.String r10, boolean r11) {
                r9 = this;
                r6 = r9
                okhttp3.HttpUrl$Builder r6 = (okhttp3.HttpUrl.Builder) r6
                r7 = 0
                r2 = r7
            L5:
                int r0 = r10.length()
                java.lang.String r1 = "/\\"
                int r8 = okhttp3.internal.Util.delimiterOffset(r10, r1, r2, r0)
                int r0 = r10.length()
                if (r8 >= r0) goto L18
                r0 = 1
                r4 = r0
                goto L19
            L18:
                r4 = r7
            L19:
                r0 = r6
                r1 = r10
                r3 = r8
                r5 = r11
                r0.push(r1, r2, r3, r4, r5)
                int r2 = r8 + 1
                int r0 = r10.length()
                if (r2 <= r0) goto L5
                return r6
        }

        private final int effectivePort() {
                r2 = this;
                int r0 = r2.port
                r1 = -1
                if (r0 == r1) goto L6
                goto L11
            L6:
                okhttp3.HttpUrl$Companion r0 = okhttp3.HttpUrl.Companion
                java.lang.String r1 = r2.scheme
                kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
                int r0 = r0.defaultPort(r1)
            L11:
                return r0
        }

        private final boolean isDot(java.lang.String r3) {
                r2 = this;
                java.lang.String r0 = "."
                boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r0)
                r1 = 1
                if (r0 != 0) goto L13
                java.lang.String r0 = "%2e"
                boolean r3 = kotlin.text.StringsKt.equals(r3, r0, r1)
                if (r3 == 0) goto L12
                goto L13
            L12:
                r1 = 0
            L13:
                return r1
        }

        private final boolean isDotDot(java.lang.String r3) {
                r2 = this;
                java.lang.String r0 = ".."
                boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r0)
                r1 = 1
                if (r0 != 0) goto L23
                java.lang.String r0 = "%2e."
                boolean r0 = kotlin.text.StringsKt.equals(r3, r0, r1)
                if (r0 != 0) goto L23
                java.lang.String r0 = ".%2e"
                boolean r0 = kotlin.text.StringsKt.equals(r3, r0, r1)
                if (r0 != 0) goto L23
                java.lang.String r0 = "%2e%2e"
                boolean r3 = kotlin.text.StringsKt.equals(r3, r0, r1)
                if (r3 == 0) goto L22
                goto L23
            L22:
                r1 = 0
            L23:
                return r1
        }

        private final void pop() {
                r4 = this;
                java.util.List<java.lang.String> r0 = r4.encodedPathSegments
                int r1 = r0.size()
                r2 = 1
                int r1 = r1 - r2
                java.lang.Object r0 = r0.remove(r1)
                java.lang.String r0 = (java.lang.String) r0
                java.lang.CharSequence r0 = (java.lang.CharSequence) r0
                int r0 = r0.length()
                if (r0 != 0) goto L18
                r0 = r2
                goto L19
            L18:
                r0 = 0
            L19:
                java.lang.String r1 = ""
                if (r0 == 0) goto L33
                java.util.List<java.lang.String> r0 = r4.encodedPathSegments
                java.util.Collection r0 = (java.util.Collection) r0
                boolean r0 = r0.isEmpty()
                r0 = r0 ^ r2
                if (r0 == 0) goto L33
                java.util.List<java.lang.String> r0 = r4.encodedPathSegments
                int r3 = r0.size()
                int r3 = r3 - r2
                r0.set(r3, r1)
                goto L38
            L33:
                java.util.List<java.lang.String> r0 = r4.encodedPathSegments
                r0.add(r1)
            L38:
                return
        }

        private final void push(java.lang.String r14, int r15, int r16, boolean r17, boolean r18) {
                r13 = this;
                r0 = r13
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                java.lang.String r5 = " \"<>^`{}|/\\?#"
                r7 = 0
                r8 = 0
                r9 = 0
                r10 = 0
                r11 = 240(0xf0, float:3.36E-43)
                r12 = 0
                r2 = r14
                r3 = r15
                r4 = r16
                r6 = r18
                java.lang.String r1 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                boolean r2 = r13.isDot(r1)
                if (r2 == 0) goto L1d
                return
            L1d:
                boolean r2 = r13.isDotDot(r1)
                if (r2 == 0) goto L27
                r13.pop()
                return
            L27:
                java.util.List<java.lang.String> r2 = r0.encodedPathSegments
                int r3 = r2.size()
                r4 = 1
                int r3 = r3 - r4
                java.lang.Object r2 = r2.get(r3)
                java.lang.CharSequence r2 = (java.lang.CharSequence) r2
                int r2 = r2.length()
                if (r2 != 0) goto L3d
                r2 = r4
                goto L3e
            L3d:
                r2 = 0
            L3e:
                if (r2 == 0) goto L4b
                java.util.List<java.lang.String> r2 = r0.encodedPathSegments
                int r3 = r2.size()
                int r3 = r3 - r4
                r2.set(r3, r1)
                goto L50
            L4b:
                java.util.List<java.lang.String> r2 = r0.encodedPathSegments
                r2.add(r1)
            L50:
                if (r17 == 0) goto L59
                java.util.List<java.lang.String> r1 = r0.encodedPathSegments
                java.lang.String r2 = ""
                r1.add(r2)
            L59:
                return
        }

        private final void removeAllCanonicalQueryParameters(java.lang.String r6) {
                r5 = this;
                java.util.List<java.lang.String> r0 = r5.encodedQueryNamesAndValues
                kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
                int r0 = r0.size()
                int r0 = r0 + (-2)
                r1 = -2
                r2 = 0
                int r1 = kotlin.internal.ProgressionUtilKt.getProgressionLastElement(r0, r2, r1)
                if (r1 > r0) goto L4a
            L13:
                int r2 = r0 + (-2)
                java.util.List<java.lang.String> r3 = r5.encodedQueryNamesAndValues
                kotlin.jvm.internal.Intrinsics.checkNotNull(r3)
                java.lang.Object r3 = r3.get(r0)
                boolean r3 = kotlin.jvm.internal.Intrinsics.areEqual(r6, r3)
                if (r3 == 0) goto L45
                java.util.List<java.lang.String> r3 = r5.encodedQueryNamesAndValues
                kotlin.jvm.internal.Intrinsics.checkNotNull(r3)
                int r4 = r0 + 1
                r3.remove(r4)
                java.util.List<java.lang.String> r3 = r5.encodedQueryNamesAndValues
                kotlin.jvm.internal.Intrinsics.checkNotNull(r3)
                r3.remove(r0)
                java.util.List<java.lang.String> r3 = r5.encodedQueryNamesAndValues
                kotlin.jvm.internal.Intrinsics.checkNotNull(r3)
                boolean r3 = r3.isEmpty()
                if (r3 == 0) goto L45
                r6 = 0
                r5.encodedQueryNamesAndValues = r6
                return
            L45:
                if (r0 != r1) goto L48
                goto L4a
            L48:
                r0 = r2
                goto L13
            L4a:
                return
        }

        private final void resolvePath(java.lang.String r11, int r12, int r13) {
                r10 = this;
                if (r12 != r13) goto L3
                return
            L3:
                char r0 = r11.charAt(r12)
                r1 = 47
                java.lang.String r2 = ""
                r3 = 1
                if (r0 == r1) goto L1e
                r1 = 92
                if (r0 != r1) goto L13
                goto L1e
            L13:
                java.util.List<java.lang.String> r0 = r10.encodedPathSegments
                int r1 = r0.size()
                int r1 = r1 - r3
                r0.set(r1, r2)
                goto L2a
            L1e:
                java.util.List<java.lang.String> r0 = r10.encodedPathSegments
                r0.clear()
                java.util.List<java.lang.String> r0 = r10.encodedPathSegments
                r0.add(r2)
                int r12 = r12 + 1
            L2a:
                r6 = r12
            L2b:
                if (r6 >= r13) goto L45
                java.lang.String r12 = "/\\"
                int r12 = okhttp3.internal.Util.delimiterOffset(r11, r12, r6, r13)
                if (r12 >= r13) goto L37
                r0 = r3
                goto L38
            L37:
                r0 = 0
            L38:
                r9 = 1
                r4 = r10
                r5 = r11
                r7 = r12
                r8 = r0
                r4.push(r5, r6, r7, r8, r9)
                if (r0 == 0) goto L2a
                int r6 = r12 + 1
                goto L2b
            L45:
                return
        }

        public final okhttp3.HttpUrl.Builder addEncodedPathSegment(java.lang.String r8) {
                r7 = this;
                java.lang.String r0 = "encodedPathSegment"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                r0 = r7
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                int r4 = r8.length()
                r3 = 0
                r5 = 0
                r6 = 1
                r1 = r0
                r2 = r8
                r1.push(r2, r3, r4, r5, r6)
                return r0
        }

        public final okhttp3.HttpUrl.Builder addEncodedPathSegments(java.lang.String r2) {
                r1 = this;
                java.lang.String r0 = "encodedPathSegments"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r0 = 1
                okhttp3.HttpUrl$Builder r2 = r1.addPathSegments(r2, r0)
                return r2
        }

        public final okhttp3.HttpUrl.Builder addEncodedQueryParameter(java.lang.String r15, java.lang.String r16) {
                r14 = this;
                java.lang.String r0 = "encodedName"
                r2 = r15
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r15, r0)
                r0 = r14
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                java.util.List r1 = r0.getEncodedQueryNamesAndValues$okhttp()
                if (r1 != 0) goto L19
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                java.util.List r1 = (java.util.List) r1
                r0.setEncodedQueryNamesAndValues$okhttp(r1)
            L19:
                java.util.List r13 = r0.getEncodedQueryNamesAndValues$okhttp()
                kotlin.jvm.internal.Intrinsics.checkNotNull(r13)
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                r3 = 0
                r4 = 0
                r6 = 1
                r7 = 0
                r8 = 1
                r9 = 0
                r10 = 0
                r11 = 211(0xd3, float:2.96E-43)
                r12 = 0
                java.lang.String r5 = " \"'<>#&="
                r2 = r15
                java.lang.String r1 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                r13.add(r1)
                java.util.List r1 = r0.getEncodedQueryNamesAndValues$okhttp()
                kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
                if (r16 != 0) goto L41
                r2 = 0
                goto L55
            L41:
                okhttp3.HttpUrl$Companion r2 = okhttp3.HttpUrl.Companion
                r4 = 0
                r5 = 0
                r7 = 1
                r8 = 0
                r9 = 1
                r10 = 0
                r11 = 0
                r12 = 211(0xd3, float:2.96E-43)
                r13 = 0
                java.lang.String r6 = " \"'<>#&="
                r3 = r16
                java.lang.String r2 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
            L55:
                r1.add(r2)
                return r0
        }

        public final okhttp3.HttpUrl.Builder addPathSegment(java.lang.String r8) {
                r7 = this;
                java.lang.String r0 = "pathSegment"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                r0 = r7
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                int r4 = r8.length()
                r3 = 0
                r5 = 0
                r6 = 0
                r1 = r0
                r2 = r8
                r1.push(r2, r3, r4, r5, r6)
                return r0
        }

        public final okhttp3.HttpUrl.Builder addPathSegments(java.lang.String r2) {
                r1 = this;
                java.lang.String r0 = "pathSegments"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r0 = 0
                okhttp3.HttpUrl$Builder r2 = r1.addPathSegments(r2, r0)
                return r2
        }

        public final okhttp3.HttpUrl.Builder addQueryParameter(java.lang.String r15, java.lang.String r16) {
                r14 = this;
                java.lang.String r0 = "name"
                r2 = r15
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r15, r0)
                r0 = r14
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                java.util.List r1 = r0.getEncodedQueryNamesAndValues$okhttp()
                if (r1 != 0) goto L19
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                java.util.List r1 = (java.util.List) r1
                r0.setEncodedQueryNamesAndValues$okhttp(r1)
            L19:
                java.util.List r13 = r0.getEncodedQueryNamesAndValues$okhttp()
                kotlin.jvm.internal.Intrinsics.checkNotNull(r13)
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                r3 = 0
                r4 = 0
                r6 = 0
                r7 = 0
                r8 = 1
                r9 = 0
                r10 = 0
                r11 = 219(0xdb, float:3.07E-43)
                r12 = 0
                java.lang.String r5 = " !\"#$&'(),/:;<=>?@[]\\^`{|}~"
                r2 = r15
                java.lang.String r1 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                r13.add(r1)
                java.util.List r1 = r0.getEncodedQueryNamesAndValues$okhttp()
                kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
                if (r16 != 0) goto L41
                r2 = 0
                goto L55
            L41:
                okhttp3.HttpUrl$Companion r2 = okhttp3.HttpUrl.Companion
                r4 = 0
                r5 = 0
                r7 = 0
                r8 = 0
                r9 = 1
                r10 = 0
                r11 = 0
                r12 = 219(0xdb, float:3.07E-43)
                r13 = 0
                java.lang.String r6 = " !\"#$&'(),/:;<=>?@[]\\^`{|}~"
                r3 = r16
                java.lang.String r2 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
            L55:
                r1.add(r2)
                return r0
        }

        public final okhttp3.HttpUrl build() {
                r18 = this;
                r0 = r18
                java.lang.String r2 = r0.scheme
                if (r2 == 0) goto Lbc
                okhttp3.HttpUrl$Companion r3 = okhttp3.HttpUrl.Companion
                java.lang.String r4 = r0.encodedUsername
                r5 = 0
                r6 = 0
                r7 = 0
                r8 = 7
                r9 = 0
                java.lang.String r3 = okhttp3.HttpUrl.Companion.percentDecode$okhttp$default(r3, r4, r5, r6, r7, r8, r9)
                okhttp3.HttpUrl$Companion r4 = okhttp3.HttpUrl.Companion
                java.lang.String r5 = r0.encodedPassword
                r8 = 0
                r9 = 7
                r10 = 0
                java.lang.String r4 = okhttp3.HttpUrl.Companion.percentDecode$okhttp$default(r4, r5, r6, r7, r8, r9, r10)
                java.lang.String r5 = r0.host
                if (r5 == 0) goto Lb4
                int r6 = r18.effectivePort()
                java.util.List<java.lang.String> r1 = r0.encodedPathSegments
                java.lang.Iterable r1 = (java.lang.Iterable) r1
                java.util.ArrayList r7 = new java.util.ArrayList
                r8 = 10
                int r9 = kotlin.collections.CollectionsKt.collectionSizeOrDefault(r1, r8)
                r7.<init>(r9)
                java.util.Collection r7 = (java.util.Collection) r7
                java.util.Iterator r1 = r1.iterator()
            L3b:
                boolean r9 = r1.hasNext()
                if (r9 == 0) goto L58
                java.lang.Object r9 = r1.next()
                r11 = r9
                java.lang.String r11 = (java.lang.String) r11
                okhttp3.HttpUrl$Companion r10 = okhttp3.HttpUrl.Companion
                r12 = 0
                r13 = 0
                r14 = 0
                r15 = 7
                r16 = 0
                java.lang.String r9 = okhttp3.HttpUrl.Companion.percentDecode$okhttp$default(r10, r11, r12, r13, r14, r15, r16)
                r7.add(r9)
                goto L3b
            L58:
                java.util.List r7 = (java.util.List) r7
                java.util.List<java.lang.String> r1 = r0.encodedQueryNamesAndValues
                r9 = 0
                if (r1 != 0) goto L61
                r8 = r9
                goto L97
            L61:
                java.lang.Iterable r1 = (java.lang.Iterable) r1
                java.util.ArrayList r10 = new java.util.ArrayList
                int r8 = kotlin.collections.CollectionsKt.collectionSizeOrDefault(r1, r8)
                r10.<init>(r8)
                java.util.Collection r10 = (java.util.Collection) r10
                java.util.Iterator r1 = r1.iterator()
            L72:
                boolean r8 = r1.hasNext()
                if (r8 == 0) goto L94
                java.lang.Object r8 = r1.next()
                r12 = r8
                java.lang.String r12 = (java.lang.String) r12
                if (r12 != 0) goto L83
                r8 = r9
                goto L90
            L83:
                okhttp3.HttpUrl$Companion r11 = okhttp3.HttpUrl.Companion
                r13 = 0
                r14 = 0
                r15 = 1
                r16 = 3
                r17 = 0
                java.lang.String r8 = okhttp3.HttpUrl.Companion.percentDecode$okhttp$default(r11, r12, r13, r14, r15, r16, r17)
            L90:
                r10.add(r8)
                goto L72
            L94:
                java.util.List r10 = (java.util.List) r10
                r8 = r10
            L97:
                java.lang.String r11 = r0.encodedFragment
                if (r11 != 0) goto L9c
                goto La9
            L9c:
                okhttp3.HttpUrl$Companion r10 = okhttp3.HttpUrl.Companion
                r12 = 0
                r13 = 0
                r14 = 0
                r15 = 7
                r16 = 0
                java.lang.String r1 = okhttp3.HttpUrl.Companion.percentDecode$okhttp$default(r10, r11, r12, r13, r14, r15, r16)
                r9 = r1
            La9:
                java.lang.String r10 = r18.toString()
                okhttp3.HttpUrl r11 = new okhttp3.HttpUrl
                r1 = r11
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10)
                return r11
            Lb4:
                java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
                java.lang.String r2 = "host == null"
                r1.<init>(r2)
                throw r1
            Lbc:
                java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
                java.lang.String r2 = "scheme == null"
                r1.<init>(r2)
                throw r1
        }

        public final okhttp3.HttpUrl.Builder encodedFragment(java.lang.String r14) {
                r13 = this;
                r0 = r13
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                if (r14 != 0) goto L7
                r14 = 0
                goto L1a
            L7:
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                r3 = 0
                r4 = 0
                r6 = 1
                r7 = 0
                r8 = 0
                r9 = 1
                r10 = 0
                r11 = 179(0xb3, float:2.51E-43)
                r12 = 0
                java.lang.String r5 = ""
                r2 = r14
                java.lang.String r14 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
            L1a:
                r0.setEncodedFragment$okhttp(r14)
                return r0
        }

        public final okhttp3.HttpUrl.Builder encodedPassword(java.lang.String r14) {
                r13 = this;
                java.lang.String r0 = "encodedPassword"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r14, r0)
                r0 = r13
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                r3 = 0
                r4 = 0
                java.lang.String r5 = " \"':;<=>@[]^`{}|/\\?#"
                r6 = 1
                r7 = 0
                r8 = 0
                r9 = 0
                r10 = 0
                r11 = 243(0xf3, float:3.4E-43)
                r12 = 0
                r2 = r14
                java.lang.String r14 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                r0.setEncodedPassword$okhttp(r14)
                return r0
        }

        public final okhttp3.HttpUrl.Builder encodedPath(java.lang.String r6) {
                r5 = this;
                java.lang.String r0 = "encodedPath"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
                r0 = r5
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                r1 = 0
                java.lang.String r2 = "/"
                r3 = 2
                r4 = 0
                boolean r2 = kotlin.text.StringsKt.startsWith$default(r6, r2, r1, r3, r4)
                if (r2 == 0) goto L1b
                int r2 = r6.length()
                r0.resolvePath(r6, r1, r2)
                return r0
            L1b:
                java.lang.String r0 = "unexpected encodedPath: "
                java.lang.String r6 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r6)
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r6 = r6.toString()
                r0.<init>(r6)
                throw r0
        }

        public final okhttp3.HttpUrl.Builder encodedQuery(java.lang.String r15) {
                r14 = this;
                r0 = r14
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                r1 = 0
                if (r15 != 0) goto L7
                goto L23
            L7:
                okhttp3.HttpUrl$Companion r2 = okhttp3.HttpUrl.Companion
                r4 = 0
                r5 = 0
                r7 = 1
                r8 = 0
                r9 = 1
                r10 = 0
                r11 = 0
                r12 = 211(0xd3, float:2.96E-43)
                r13 = 0
                java.lang.String r6 = " \"'<>#"
                r3 = r15
                java.lang.String r15 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
                if (r15 != 0) goto L1d
                goto L23
            L1d:
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                java.util.List r1 = r1.toQueryNamesAndValues$okhttp(r15)
            L23:
                r0.setEncodedQueryNamesAndValues$okhttp(r1)
                return r0
        }

        public final okhttp3.HttpUrl.Builder encodedUsername(java.lang.String r14) {
                r13 = this;
                java.lang.String r0 = "encodedUsername"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r14, r0)
                r0 = r13
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                r3 = 0
                r4 = 0
                java.lang.String r5 = " \"':;<=>@[]^`{}|/\\?#"
                r6 = 1
                r7 = 0
                r8 = 0
                r9 = 0
                r10 = 0
                r11 = 243(0xf3, float:3.4E-43)
                r12 = 0
                r2 = r14
                java.lang.String r14 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                r0.setEncodedUsername$okhttp(r14)
                return r0
        }

        public final okhttp3.HttpUrl.Builder fragment(java.lang.String r14) {
                r13 = this;
                r0 = r13
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                if (r14 != 0) goto L7
                r14 = 0
                goto L1a
            L7:
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                r3 = 0
                r4 = 0
                r6 = 0
                r7 = 0
                r8 = 0
                r9 = 1
                r10 = 0
                r11 = 187(0xbb, float:2.62E-43)
                r12 = 0
                java.lang.String r5 = ""
                r2 = r14
                java.lang.String r14 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
            L1a:
                r0.setEncodedFragment$okhttp(r14)
                return r0
        }

        public final java.lang.String getEncodedFragment$okhttp() {
                r1 = this;
                java.lang.String r0 = r1.encodedFragment
                return r0
        }

        public final java.lang.String getEncodedPassword$okhttp() {
                r1 = this;
                java.lang.String r0 = r1.encodedPassword
                return r0
        }

        public final java.util.List<java.lang.String> getEncodedPathSegments$okhttp() {
                r1 = this;
                java.util.List<java.lang.String> r0 = r1.encodedPathSegments
                return r0
        }

        public final java.util.List<java.lang.String> getEncodedQueryNamesAndValues$okhttp() {
                r1 = this;
                java.util.List<java.lang.String> r0 = r1.encodedQueryNamesAndValues
                return r0
        }

        public final java.lang.String getEncodedUsername$okhttp() {
                r1 = this;
                java.lang.String r0 = r1.encodedUsername
                return r0
        }

        public final java.lang.String getHost$okhttp() {
                r1 = this;
                java.lang.String r0 = r1.host
                return r0
        }

        public final int getPort$okhttp() {
                r1 = this;
                int r0 = r1.port
                return r0
        }

        public final java.lang.String getScheme$okhttp() {
                r1 = this;
                java.lang.String r0 = r1.scheme
                return r0
        }

        public final okhttp3.HttpUrl.Builder host(java.lang.String r9) {
                r8 = this;
                java.lang.String r0 = "host"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
                r0 = r8
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                r3 = 0
                r4 = 0
                r5 = 0
                r6 = 7
                r7 = 0
                r2 = r9
                java.lang.String r1 = okhttp3.HttpUrl.Companion.percentDecode$okhttp$default(r1, r2, r3, r4, r5, r6, r7)
                java.lang.String r1 = okhttp3.internal.HostnamesKt.toCanonicalHost(r1)
                if (r1 == 0) goto L1e
                r0.setHost$okhttp(r1)
                return r0
            L1e:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r1 = "unexpected host: "
                java.lang.String r9 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r9)
                r0.<init>(r9)
                throw r0
        }

        public final okhttp3.HttpUrl.Builder parse$okhttp(okhttp3.HttpUrl r29, java.lang.String r30) {
                r28 = this;
                r0 = r28
                r13 = r30
                java.lang.String r1 = "input"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r13, r1)
                r1 = 0
                r14 = 0
                r2 = 3
                int r2 = okhttp3.internal.Util.indexOfFirstNonAsciiWhitespace$default(r13, r14, r14, r2, r1)
                r3 = 2
                int r15 = okhttp3.internal.Util.indexOfLastNonAsciiWhitespace$default(r13, r2, r14, r3, r1)
                okhttp3.HttpUrl$Builder$Companion r1 = okhttp3.HttpUrl.Builder.Companion
                int r1 = okhttp3.HttpUrl.Builder.Companion.access$schemeDelimiterOffset(r1, r13, r2, r15)
                java.lang.String r12 = "this as java.lang.String…ing(startIndex, endIndex)"
                r11 = -1
                r10 = 1
                if (r1 == r11) goto L62
                java.lang.String r4 = "https:"
                boolean r4 = kotlin.text.StringsKt.startsWith(r13, r4, r2, r10)
                if (r4 == 0) goto L30
                java.lang.String r1 = "https"
                r0.scheme = r1
                int r2 = r2 + 6
                goto L6a
            L30:
                java.lang.String r4 = "http:"
                boolean r4 = kotlin.text.StringsKt.startsWith(r13, r4, r2, r10)
                if (r4 == 0) goto L3f
                java.lang.String r1 = "http"
                r0.scheme = r1
                int r2 = r2 + 5
                goto L6a
            L3f:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r4 = "Expected URL scheme 'http' or 'https' but was '"
                r3.append(r4)
                java.lang.String r1 = r13.substring(r14, r1)
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r12)
                r3.append(r1)
                r1 = 39
                r3.append(r1)
                java.lang.String r1 = r3.toString()
                r2.<init>(r1)
                throw r2
            L62:
                if (r29 == 0) goto L2d1
                java.lang.String r1 = r29.scheme()
                r0.scheme = r1
            L6a:
                okhttp3.HttpUrl$Builder$Companion r1 = okhttp3.HttpUrl.Builder.Companion
                int r1 = okhttp3.HttpUrl.Builder.Companion.access$slashCount(r1, r13, r2, r15)
                r9 = 63
                r8 = 35
                if (r1 >= r3) goto Lc2
                if (r29 == 0) goto Lc2
                java.lang.String r3 = r29.scheme()
                java.lang.String r4 = r0.scheme
                boolean r3 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r4)
                if (r3 != 0) goto L85
                goto Lc2
            L85:
                java.lang.String r1 = r29.encodedUsername()
                r0.encodedUsername = r1
                java.lang.String r1 = r29.encodedPassword()
                r0.encodedPassword = r1
                java.lang.String r1 = r29.host()
                r0.host = r1
                int r1 = r29.port()
                r0.port = r1
                java.util.List<java.lang.String> r1 = r0.encodedPathSegments
                r1.clear()
                java.util.List<java.lang.String> r1 = r0.encodedPathSegments
                java.util.List r3 = r29.encodedPathSegments()
                java.util.Collection r3 = (java.util.Collection) r3
                r1.addAll(r3)
                if (r2 == r15) goto Lb5
                char r1 = r13.charAt(r2)
                if (r1 != r8) goto Lbc
            Lb5:
                java.lang.String r1 = r29.encodedQuery()
                r0.encodedQuery(r1)
            Lbc:
                r18 = r10
                r19 = r15
                goto L249
            Lc2:
                int r2 = r2 + r1
                r7 = r2
                r16 = r14
                r17 = r16
            Lc8:
                java.lang.String r1 = "@/\\?#"
                int r6 = okhttp3.internal.Util.delimiterOffset(r13, r1, r7, r15)
                if (r6 == r15) goto Ld5
                char r1 = r13.charAt(r6)
                goto Ld6
            Ld5:
                r1 = r11
            Ld6:
                if (r1 == r11) goto L1b8
                if (r1 == r8) goto L1b8
                r2 = 47
                if (r1 == r2) goto L1b8
                r2 = 92
                if (r1 == r2) goto L1b8
                if (r1 == r9) goto L1b8
                r2 = 64
                if (r1 == r2) goto Le9
                goto Lc8
            Le9:
                java.lang.String r5 = "%40"
                if (r16 != 0) goto L16a
                r1 = 58
                int r4 = okhttp3.internal.Util.delimiterOffset(r13, r1, r7, r6)
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                r18 = 1
                r19 = 0
                r20 = 0
                r21 = 0
                r22 = 0
                r23 = 240(0xf0, float:3.36E-43)
                r24 = 0
                java.lang.String r25 = " \"':;<=>@[]^`{}|/\\?#"
                r2 = r30
                r3 = r7
                r7 = r4
                r14 = r5
                r5 = r25
                r26 = r6
                r6 = r18
                r27 = r7
                r7 = r19
                r8 = r20
                r9 = r21
                r18 = r10
                r10 = r22
                r11 = r23
                r19 = r15
                r15 = r12
                r12 = r24
                java.lang.String r1 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                if (r17 == 0) goto L13d
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = r0.encodedUsername
                r2.append(r3)
                r2.append(r14)
                r2.append(r1)
                java.lang.String r1 = r2.toString()
            L13d:
                r0.encodedUsername = r1
                r14 = r26
                r1 = r27
                if (r1 == r14) goto L160
                okhttp3.HttpUrl$Companion r2 = okhttp3.HttpUrl.Companion
                int r3 = r1 + 1
                r6 = 1
                r7 = 0
                r8 = 0
                r9 = 0
                r10 = 0
                r11 = 240(0xf0, float:3.36E-43)
                r12 = 0
                java.lang.String r5 = " \"':;<=>@[]^`{}|/\\?#"
                r1 = r2
                r2 = r30
                r4 = r14
                java.lang.String r1 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                r0.encodedPassword = r1
                r10 = r18
                goto L162
            L160:
                r10 = r16
            L162:
                r16 = r10
                r20 = r15
                r17 = r18
                r15 = r14
                goto L1a8
            L16a:
                r14 = r5
                r18 = r10
                r19 = r15
                r15 = r12
                r12 = r6
                java.lang.StringBuilder r11 = new java.lang.StringBuilder
                r11.<init>()
                java.lang.String r1 = r0.encodedPassword
                r11.append(r1)
                r11.append(r14)
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                r6 = 1
                r8 = 0
                r9 = 0
                r10 = 0
                r14 = 0
                r20 = 240(0xf0, float:3.36E-43)
                r21 = 0
                java.lang.String r5 = " \"':;<=>@[]^`{}|/\\?#"
                r2 = r30
                r3 = r7
                r4 = r12
                r7 = r8
                r8 = r9
                r9 = r10
                r10 = r14
                r14 = r11
                r11 = r20
                r20 = r15
                r15 = r12
                r12 = r21
                java.lang.String r1 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                r14.append(r1)
                java.lang.String r1 = r14.toString()
                r0.encodedPassword = r1
            L1a8:
                int r7 = r15 + 1
                r10 = r18
                r15 = r19
                r12 = r20
                r8 = 35
                r9 = 63
                r11 = -1
                r14 = 0
                goto Lc8
            L1b8:
                r18 = r10
                r20 = r12
                r19 = r15
                r15 = r6
                okhttp3.HttpUrl$Builder$Companion r1 = okhttp3.HttpUrl.Builder.Companion
                int r8 = okhttp3.HttpUrl.Builder.Companion.access$portColonOffset(r1, r13, r7, r15)
                int r9 = r8 + 1
                r10 = 34
                if (r9 >= r15) goto L21b
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                r5 = 0
                r6 = 4
                r11 = 0
                r2 = r30
                r3 = r7
                r4 = r8
                r12 = r7
                r7 = r11
                java.lang.String r1 = okhttp3.HttpUrl.Companion.percentDecode$okhttp$default(r1, r2, r3, r4, r5, r6, r7)
                java.lang.String r1 = okhttp3.internal.HostnamesKt.toCanonicalHost(r1)
                r0.host = r1
                okhttp3.HttpUrl$Builder$Companion r1 = okhttp3.HttpUrl.Builder.Companion
                int r1 = okhttp3.HttpUrl.Builder.Companion.access$parsePort(r1, r13, r9, r15)
                r0.port = r1
                r2 = -1
                if (r1 == r2) goto L1ee
                r1 = r18
                goto L1ef
            L1ee:
                r1 = 0
            L1ef:
                if (r1 == 0) goto L1f4
                r9 = r20
                goto L23e
            L1f4:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Invalid URL port: \""
                r1.append(r2)
                java.lang.String r2 = r13.substring(r9, r15)
                r9 = r20
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r9)
                r1.append(r2)
                r1.append(r10)
                java.lang.String r1 = r1.toString()
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r1 = r1.toString()
                r2.<init>(r1)
                throw r2
            L21b:
                r12 = r7
                r9 = r20
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                r5 = 0
                r6 = 4
                r7 = 0
                r2 = r30
                r3 = r12
                r4 = r8
                java.lang.String r1 = okhttp3.HttpUrl.Companion.percentDecode$okhttp$default(r1, r2, r3, r4, r5, r6, r7)
                java.lang.String r1 = okhttp3.internal.HostnamesKt.toCanonicalHost(r1)
                r0.host = r1
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                java.lang.String r2 = r0.scheme
                kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
                int r1 = r1.defaultPort(r2)
                r0.port = r1
            L23e:
                java.lang.String r1 = r0.host
                if (r1 == 0) goto L245
                r14 = r18
                goto L246
            L245:
                r14 = 0
            L246:
                if (r14 == 0) goto L2ac
                r2 = r15
            L249:
                java.lang.String r1 = "?#"
                r14 = r19
                int r1 = okhttp3.internal.Util.delimiterOffset(r13, r1, r2, r14)
                r0.resolvePath(r13, r2, r1)
                if (r1 >= r14) goto L289
                char r2 = r13.charAt(r1)
                r3 = 63
                if (r2 != r3) goto L289
                r15 = 35
                int r16 = okhttp3.internal.Util.delimiterOffset(r13, r15, r1, r14)
                okhttp3.HttpUrl$Companion r12 = okhttp3.HttpUrl.Companion
                okhttp3.HttpUrl$Companion r2 = okhttp3.HttpUrl.Companion
                int r3 = r1 + 1
                r6 = 1
                r7 = 0
                r8 = 1
                r9 = 0
                r10 = 0
                r11 = 208(0xd0, float:2.91E-43)
                r17 = 0
                java.lang.String r5 = " \"'<>#"
                r1 = r2
                r2 = r30
                r4 = r16
                r15 = r12
                r12 = r17
                java.lang.String r1 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                java.util.List r1 = r15.toQueryNamesAndValues$okhttp(r1)
                r0.encodedQueryNamesAndValues = r1
                r1 = r16
            L289:
                if (r1 >= r14) goto L2ab
                char r2 = r13.charAt(r1)
                r3 = 35
                if (r2 != r3) goto L2ab
                okhttp3.HttpUrl$Companion r2 = okhttp3.HttpUrl.Companion
                int r3 = r1 + 1
                r6 = 1
                r7 = 0
                r8 = 0
                r9 = 1
                r10 = 0
                r11 = 176(0xb0, float:2.47E-43)
                r12 = 0
                java.lang.String r5 = ""
                r1 = r2
                r2 = r30
                r4 = r14
                java.lang.String r1 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                r0.encodedFragment = r1
            L2ab:
                return r0
            L2ac:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Invalid URL host: \""
                r1.append(r2)
                java.lang.String r2 = r13.substring(r12, r8)
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r9)
                r1.append(r2)
                r1.append(r10)
                java.lang.String r1 = r1.toString()
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r1 = r1.toString()
                r2.<init>(r1)
                throw r2
            L2d1:
                int r1 = r30.length()
                r2 = 6
                if (r1 <= r2) goto L2e3
                java.lang.String r1 = kotlin.text.StringsKt.take(r13, r2)
                java.lang.String r2 = "..."
                java.lang.String r1 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r2)
                r13 = r1
            L2e3:
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r2 = "Expected URL scheme 'http' or 'https' but no scheme was found for "
                java.lang.String r2 = kotlin.jvm.internal.Intrinsics.stringPlus(r2, r13)
                r1.<init>(r2)
                throw r1
        }

        public final okhttp3.HttpUrl.Builder password(java.lang.String r14) {
                r13 = this;
                java.lang.String r0 = "password"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r14, r0)
                r0 = r13
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                r3 = 0
                r4 = 0
                java.lang.String r5 = " \"':;<=>@[]^`{}|/\\?#"
                r6 = 0
                r7 = 0
                r8 = 0
                r9 = 0
                r10 = 0
                r11 = 251(0xfb, float:3.52E-43)
                r12 = 0
                r2 = r14
                java.lang.String r14 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                r0.setEncodedPassword$okhttp(r14)
                return r0
        }

        public final okhttp3.HttpUrl.Builder port(int r5) {
                r4 = this;
                r0 = r4
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                r1 = 0
                r2 = 1
                if (r2 > r5) goto Lc
                r3 = 65536(0x10000, float:9.1835E-41)
                if (r5 >= r3) goto Lc
                r1 = r2
            Lc:
                if (r1 == 0) goto L12
                r0.setPort$okhttp(r5)
                return r0
            L12:
                java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
                java.lang.String r0 = "unexpected port: "
                java.lang.String r5 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r5)
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r5 = r5.toString()
                r0.<init>(r5)
                throw r0
        }

        public final okhttp3.HttpUrl.Builder query(java.lang.String r15) {
                r14 = this;
                r0 = r14
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                r1 = 0
                if (r15 != 0) goto L7
                goto L23
            L7:
                okhttp3.HttpUrl$Companion r2 = okhttp3.HttpUrl.Companion
                r4 = 0
                r5 = 0
                r7 = 0
                r8 = 0
                r9 = 1
                r10 = 0
                r11 = 0
                r12 = 219(0xdb, float:3.07E-43)
                r13 = 0
                java.lang.String r6 = " \"'<>#"
                r3 = r15
                java.lang.String r15 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
                if (r15 != 0) goto L1d
                goto L23
            L1d:
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                java.util.List r1 = r1.toQueryNamesAndValues$okhttp(r15)
            L23:
                r0.setEncodedQueryNamesAndValues$okhttp(r1)
                return r0
        }

        public final okhttp3.HttpUrl.Builder reencodeForUri$okhttp() {
                r19 = this;
                r0 = r19
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                java.lang.String r1 = r0.getHost$okhttp()
                r2 = 0
                if (r1 != 0) goto Ld
                r1 = r2
                goto L1c
            Ld:
                java.lang.CharSequence r1 = (java.lang.CharSequence) r1
                kotlin.text.Regex r3 = new kotlin.text.Regex
                java.lang.String r4 = "[\"<>^`{|}]"
                r3.<init>(r4)
                java.lang.String r4 = ""
                java.lang.String r1 = r3.replace(r1, r4)
            L1c:
                r0.setHost$okhttp(r1)
                java.util.List r1 = r0.getEncodedPathSegments$okhttp()
                int r1 = r1.size()
                r3 = 0
                r4 = r3
            L29:
                if (r4 >= r1) goto L54
                int r5 = r4 + 1
                java.util.List r6 = r0.getEncodedPathSegments$okhttp()
                okhttp3.HttpUrl$Companion r7 = okhttp3.HttpUrl.Companion
                java.util.List r8 = r0.getEncodedPathSegments$okhttp()
                java.lang.Object r8 = r8.get(r4)
                java.lang.String r8 = (java.lang.String) r8
                r9 = 0
                r10 = 0
                r12 = 1
                r13 = 1
                r14 = 0
                r15 = 0
                r16 = 0
                r17 = 227(0xe3, float:3.18E-43)
                r18 = 0
                java.lang.String r11 = "[]"
                java.lang.String r7 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18)
                r6.set(r4, r7)
                r4 = r5
                goto L29
            L54:
                java.util.List r1 = r0.getEncodedQueryNamesAndValues$okhttp()
                if (r1 == 0) goto L86
                int r4 = r1.size()
            L5e:
                if (r3 >= r4) goto L86
                int r5 = r3 + 1
                java.lang.Object r6 = r1.get(r3)
                r8 = r6
                java.lang.String r8 = (java.lang.String) r8
                if (r8 != 0) goto L6d
                r6 = r2
                goto L81
            L6d:
                okhttp3.HttpUrl$Companion r7 = okhttp3.HttpUrl.Companion
                r9 = 0
                r10 = 0
                r12 = 1
                r13 = 1
                r14 = 1
                r15 = 0
                r16 = 0
                r17 = 195(0xc3, float:2.73E-43)
                r18 = 0
                java.lang.String r11 = "\\^`{|}"
                java.lang.String r6 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18)
            L81:
                r1.set(r3, r6)
                r3 = r5
                goto L5e
            L86:
                java.lang.String r8 = r0.getEncodedFragment$okhttp()
                if (r8 != 0) goto L8d
                goto La1
            L8d:
                okhttp3.HttpUrl$Companion r7 = okhttp3.HttpUrl.Companion
                r9 = 0
                r10 = 0
                r12 = 1
                r13 = 1
                r14 = 0
                r15 = 1
                r16 = 0
                r17 = 163(0xa3, float:2.28E-43)
                r18 = 0
                java.lang.String r11 = " \"#<>\\^`{|}"
                java.lang.String r2 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18)
            La1:
                r0.setEncodedFragment$okhttp(r2)
                return r0
        }

        public final okhttp3.HttpUrl.Builder removeAllEncodedQueryParameters(java.lang.String r15) {
                r14 = this;
                java.lang.String r0 = "encodedName"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r15, r0)
                r0 = r14
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                java.util.List r1 = r0.getEncodedQueryNamesAndValues$okhttp()
                if (r1 != 0) goto Lf
                return r0
            Lf:
                okhttp3.HttpUrl$Companion r2 = okhttp3.HttpUrl.Companion
                r4 = 0
                r5 = 0
                r7 = 1
                r8 = 0
                r9 = 1
                r10 = 0
                r11 = 0
                r12 = 211(0xd3, float:2.96E-43)
                r13 = 0
                java.lang.String r6 = " \"'<>#&="
                r3 = r15
                java.lang.String r15 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
                r0.removeAllCanonicalQueryParameters(r15)
                return r0
        }

        public final okhttp3.HttpUrl.Builder removeAllQueryParameters(java.lang.String r15) {
                r14 = this;
                java.lang.String r0 = "name"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r15, r0)
                r0 = r14
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                java.util.List r1 = r0.getEncodedQueryNamesAndValues$okhttp()
                if (r1 != 0) goto Lf
                return r0
            Lf:
                okhttp3.HttpUrl$Companion r2 = okhttp3.HttpUrl.Companion
                r4 = 0
                r5 = 0
                r7 = 0
                r8 = 0
                r9 = 1
                r10 = 0
                r11 = 0
                r12 = 219(0xdb, float:3.07E-43)
                r13 = 0
                java.lang.String r6 = " !\"#$&'(),/:;<=>?@[]\\^`{|}~"
                r3 = r15
                java.lang.String r15 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
                r0.removeAllCanonicalQueryParameters(r15)
                return r0
        }

        public final okhttp3.HttpUrl.Builder removePathSegment(int r3) {
                r2 = this;
                r0 = r2
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                java.util.List r1 = r0.getEncodedPathSegments$okhttp()
                r1.remove(r3)
                java.util.List r3 = r0.getEncodedPathSegments$okhttp()
                boolean r3 = r3.isEmpty()
                if (r3 == 0) goto L1d
                java.util.List r3 = r0.getEncodedPathSegments$okhttp()
                java.lang.String r1 = ""
                r3.add(r1)
            L1d:
                return r0
        }

        public final okhttp3.HttpUrl.Builder scheme(java.lang.String r5) {
                r4 = this;
                java.lang.String r0 = "scheme"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                r0 = r4
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                r1 = 1
                java.lang.String r2 = "http"
                boolean r3 = kotlin.text.StringsKt.equals(r5, r2, r1)
                if (r3 == 0) goto L15
                r0.setScheme$okhttp(r2)
                goto L20
            L15:
                java.lang.String r2 = "https"
                boolean r1 = kotlin.text.StringsKt.equals(r5, r2, r1)
                if (r1 == 0) goto L21
                r0.setScheme$okhttp(r2)
            L20:
                return r0
            L21:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r1 = "unexpected scheme: "
                java.lang.String r5 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r5)
                r0.<init>(r5)
                throw r0
        }

        public final void setEncodedFragment$okhttp(java.lang.String r1) {
                r0 = this;
                r0.encodedFragment = r1
                return
        }

        public final void setEncodedPassword$okhttp(java.lang.String r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.encodedPassword = r2
                return
        }

        public final okhttp3.HttpUrl.Builder setEncodedPathSegment(int r14, java.lang.String r15) {
                r13 = this;
                java.lang.String r0 = "encodedPathSegment"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r15, r0)
                r0 = r13
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                r3 = 0
                r4 = 0
                java.lang.String r5 = " \"<>^`{}|/\\?#"
                r6 = 1
                r7 = 0
                r8 = 0
                r9 = 0
                r10 = 0
                r11 = 243(0xf3, float:3.4E-43)
                r12 = 0
                r2 = r15
                java.lang.String r1 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                java.util.List r2 = r0.getEncodedPathSegments$okhttp()
                r2.set(r14, r1)
                boolean r14 = r0.isDot(r1)
                if (r14 != 0) goto L30
                boolean r14 = r0.isDotDot(r1)
                if (r14 != 0) goto L30
                r14 = 1
                goto L31
            L30:
                r14 = 0
            L31:
                if (r14 == 0) goto L34
                return r0
            L34:
                java.lang.String r14 = "unexpected path segment: "
                java.lang.String r14 = kotlin.jvm.internal.Intrinsics.stringPlus(r14, r15)
                java.lang.IllegalArgumentException r15 = new java.lang.IllegalArgumentException
                java.lang.String r14 = r14.toString()
                r15.<init>(r14)
                throw r15
        }

        public final void setEncodedQueryNamesAndValues$okhttp(java.util.List<java.lang.String> r1) {
                r0 = this;
                r0.encodedQueryNamesAndValues = r1
                return
        }

        public final okhttp3.HttpUrl.Builder setEncodedQueryParameter(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                java.lang.String r0 = "encodedName"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r0 = r1
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                r0.removeAllEncodedQueryParameters(r2)
                r0.addEncodedQueryParameter(r2, r3)
                return r0
        }

        public final void setEncodedUsername$okhttp(java.lang.String r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.encodedUsername = r2
                return
        }

        public final void setHost$okhttp(java.lang.String r1) {
                r0 = this;
                r0.host = r1
                return
        }

        public final okhttp3.HttpUrl.Builder setPathSegment(int r14, java.lang.String r15) {
                r13 = this;
                java.lang.String r0 = "pathSegment"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r15, r0)
                r0 = r13
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                r3 = 0
                r4 = 0
                java.lang.String r5 = " \"<>^`{}|/\\?#"
                r6 = 0
                r7 = 0
                r8 = 0
                r9 = 0
                r10 = 0
                r11 = 251(0xfb, float:3.52E-43)
                r12 = 0
                r2 = r15
                java.lang.String r1 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                boolean r2 = r0.isDot(r1)
                if (r2 != 0) goto L29
                boolean r2 = r0.isDotDot(r1)
                if (r2 != 0) goto L29
                r2 = 1
                goto L2a
            L29:
                r2 = 0
            L2a:
                if (r2 == 0) goto L34
                java.util.List r15 = r0.getEncodedPathSegments$okhttp()
                r15.set(r14, r1)
                return r0
            L34:
                java.lang.String r14 = "unexpected path segment: "
                java.lang.String r14 = kotlin.jvm.internal.Intrinsics.stringPlus(r14, r15)
                java.lang.IllegalArgumentException r15 = new java.lang.IllegalArgumentException
                java.lang.String r14 = r14.toString()
                r15.<init>(r14)
                throw r15
        }

        public final void setPort$okhttp(int r1) {
                r0 = this;
                r0.port = r1
                return
        }

        public final okhttp3.HttpUrl.Builder setQueryParameter(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                java.lang.String r0 = "name"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r0 = r1
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                r0.removeAllQueryParameters(r2)
                r0.addQueryParameter(r2, r3)
                return r0
        }

        public final void setScheme$okhttp(java.lang.String r1) {
                r0 = this;
                r0.scheme = r1
                return
        }

        public java.lang.String toString() {
                r6 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = r6.getScheme$okhttp()
                if (r1 == 0) goto L18
                java.lang.String r1 = r6.getScheme$okhttp()
                r0.append(r1)
                java.lang.String r1 = "://"
                r0.append(r1)
                goto L1d
            L18:
                java.lang.String r1 = "//"
                r0.append(r1)
            L1d:
                java.lang.String r1 = r6.getEncodedUsername$okhttp()
                java.lang.CharSequence r1 = (java.lang.CharSequence) r1
                int r1 = r1.length()
                r2 = 1
                r3 = 0
                if (r1 <= 0) goto L2d
                r1 = r2
                goto L2e
            L2d:
                r1 = r3
            L2e:
                r4 = 58
                if (r1 != 0) goto L43
                java.lang.String r1 = r6.getEncodedPassword$okhttp()
                java.lang.CharSequence r1 = (java.lang.CharSequence) r1
                int r1 = r1.length()
                if (r1 <= 0) goto L40
                r1 = r2
                goto L41
            L40:
                r1 = r3
            L41:
                if (r1 == 0) goto L69
            L43:
                java.lang.String r1 = r6.getEncodedUsername$okhttp()
                r0.append(r1)
                java.lang.String r1 = r6.getEncodedPassword$okhttp()
                java.lang.CharSequence r1 = (java.lang.CharSequence) r1
                int r1 = r1.length()
                if (r1 <= 0) goto L57
                goto L58
            L57:
                r2 = r3
            L58:
                if (r2 == 0) goto L64
                r0.append(r4)
                java.lang.String r1 = r6.getEncodedPassword$okhttp()
                r0.append(r1)
            L64:
                r1 = 64
                r0.append(r1)
            L69:
                java.lang.String r1 = r6.getHost$okhttp()
                if (r1 == 0) goto L99
                java.lang.String r1 = r6.getHost$okhttp()
                kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
                java.lang.CharSequence r1 = (java.lang.CharSequence) r1
                r2 = 2
                r5 = 0
                boolean r1 = kotlin.text.StringsKt.contains$default(r1, r4, r3, r2, r5)
                if (r1 == 0) goto L92
                r1 = 91
                r0.append(r1)
                java.lang.String r1 = r6.getHost$okhttp()
                r0.append(r1)
                r1 = 93
                r0.append(r1)
                goto L99
            L92:
                java.lang.String r1 = r6.getHost$okhttp()
                r0.append(r1)
            L99:
                int r1 = r6.getPort$okhttp()
                r2 = -1
                if (r1 != r2) goto La6
                java.lang.String r1 = r6.getScheme$okhttp()
                if (r1 == 0) goto Lc5
            La6:
                int r1 = r6.effectivePort()
                java.lang.String r2 = r6.getScheme$okhttp()
                if (r2 == 0) goto Lbf
                okhttp3.HttpUrl$Companion r2 = okhttp3.HttpUrl.Companion
                java.lang.String r3 = r6.getScheme$okhttp()
                kotlin.jvm.internal.Intrinsics.checkNotNull(r3)
                int r2 = r2.defaultPort(r3)
                if (r1 == r2) goto Lc5
            Lbf:
                r0.append(r4)
                r0.append(r1)
            Lc5:
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                java.util.List r2 = r6.getEncodedPathSegments$okhttp()
                r1.toPathString$okhttp(r2, r0)
                java.util.List r1 = r6.getEncodedQueryNamesAndValues$okhttp()
                if (r1 == 0) goto Le5
                r1 = 63
                r0.append(r1)
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                java.util.List r2 = r6.getEncodedQueryNamesAndValues$okhttp()
                kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
                r1.toQueryString$okhttp(r2, r0)
            Le5:
                java.lang.String r1 = r6.getEncodedFragment$okhttp()
                if (r1 == 0) goto Lf7
                r1 = 35
                r0.append(r1)
                java.lang.String r1 = r6.getEncodedFragment$okhttp()
                r0.append(r1)
            Lf7:
                java.lang.String r0 = r0.toString()
                java.lang.String r1 = "StringBuilder().apply(builderAction).toString()"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
                return r0
        }

        public final okhttp3.HttpUrl.Builder username(java.lang.String r14) {
                r13 = this;
                java.lang.String r0 = "username"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r14, r0)
                r0 = r13
                okhttp3.HttpUrl$Builder r0 = (okhttp3.HttpUrl.Builder) r0
                okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
                r3 = 0
                r4 = 0
                java.lang.String r5 = " \"':;<=>@[]^`{}|/\\?#"
                r6 = 0
                r7 = 0
                r8 = 0
                r9 = 0
                r10 = 0
                r11 = 251(0xfb, float:3.52E-43)
                r12 = 0
                r2 = r14
                java.lang.String r14 = okhttp3.HttpUrl.Companion.canonicalize$okhttp$default(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                r0.setEncodedUsername$okhttp(r14)
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000p\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u0019\n\u0002\b\t\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u000b\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\u0002\n\u0002\u0010 \n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010!\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0010\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u0004H\u0007J\u0017\u0010\u0014\u001a\u0004\u0018\u00010\u00152\u0006\u0010\u0016\u001a\u00020\u0017H\u0007¢\u0006\u0002\b\u0018J\u0017\u0010\u0014\u001a\u0004\u0018\u00010\u00152\u0006\u0010\u0019\u001a\u00020\u001aH\u0007¢\u0006\u0002\b\u0018J\u0015\u0010\u0014\u001a\u00020\u00152\u0006\u0010\u0019\u001a\u00020\u0004H\u0007¢\u0006\u0002\b\u0018J\u0017\u0010\u001b\u001a\u0004\u0018\u00010\u00152\u0006\u0010\u0019\u001a\u00020\u0004H\u0007¢\u0006\u0002\b\u001cJa\u0010\u001d\u001a\u00020\u0004*\u00020\u00042\b\b\u0002\u0010\u001e\u001a\u00020\u00122\b\b\u0002\u0010\u001f\u001a\u00020\u00122\u0006\u0010 \u001a\u00020\u00042\b\b\u0002\u0010!\u001a\u00020\"2\b\b\u0002\u0010#\u001a\u00020\"2\b\b\u0002\u0010$\u001a\u00020\"2\b\b\u0002\u0010%\u001a\u00020\"2\n\b\u0002\u0010&\u001a\u0004\u0018\u00010'H\u0000¢\u0006\u0002\b(J\u001c\u0010)\u001a\u00020\"*\u00020\u00042\u0006\u0010\u001e\u001a\u00020\u00122\u0006\u0010\u001f\u001a\u00020\u0012H\u0002J/\u0010*\u001a\u00020\u0004*\u00020\u00042\b\b\u0002\u0010\u001e\u001a\u00020\u00122\b\b\u0002\u0010\u001f\u001a\u00020\u00122\b\b\u0002\u0010$\u001a\u00020\"H\u0000¢\u0006\u0002\b+J\u0011\u0010,\u001a\u00020\u0015*\u00020\u0004H\u0007¢\u0006\u0002\b\u0014J\u0013\u0010-\u001a\u0004\u0018\u00010\u0015*\u00020\u0017H\u0007¢\u0006\u0002\b\u0014J\u0013\u0010-\u001a\u0004\u0018\u00010\u0015*\u00020\u001aH\u0007¢\u0006\u0002\b\u0014J\u0013\u0010-\u001a\u0004\u0018\u00010\u0015*\u00020\u0004H\u0007¢\u0006\u0002\b\u001bJ#\u0010.\u001a\u00020/*\b\u0012\u0004\u0012\u00020\u0004002\n\u00101\u001a\u000602j\u0002`3H\u0000¢\u0006\u0002\b4J\u0019\u00105\u001a\n\u0012\u0006\u0012\u0004\u0018\u00010\u000406*\u00020\u0004H\u0000¢\u0006\u0002\b7J%\u00108\u001a\u00020/*\n\u0012\u0006\u0012\u0004\u0018\u00010\u0004002\n\u00101\u001a\u000602j\u0002`3H\u0000¢\u0006\u0002\b9JV\u0010:\u001a\u00020/*\u00020;2\u0006\u0010<\u001a\u00020\u00042\u0006\u0010\u001e\u001a\u00020\u00122\u0006\u0010\u001f\u001a\u00020\u00122\u0006\u0010 \u001a\u00020\u00042\u0006\u0010!\u001a\u00020\"2\u0006\u0010#\u001a\u00020\"2\u0006\u0010$\u001a\u00020\"2\u0006\u0010%\u001a\u00020\"2\b\u0010&\u001a\u0004\u0018\u00010'H\u0002J,\u0010=\u001a\u00020/*\u00020;2\u0006\u0010>\u001a\u00020\u00042\u0006\u0010\u001e\u001a\u00020\u00122\u0006\u0010\u001f\u001a\u00020\u00122\u0006\u0010$\u001a\u00020\"H\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0080T¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0004X\u0080T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0004X\u0080T¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\u0004X\u0080T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0004X\u0080T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0004X\u0080T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0004X\u0080T¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u0004X\u0080T¢\u0006\u0002\n\u0000R\u000e\u0010\u000e\u001a\u00020\u0004X\u0080T¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\u0004X\u0080T¢\u0006\u0002\n\u0000R\u000e\u0010\u0010\u001a\u00020\u0004X\u0080T¢\u0006\u0002\n\u0000¨\u0006?"}, d2 = {"Lokhttp3/HttpUrl$Companion;", "", "()V", "FORM_ENCODE_SET", "", "FRAGMENT_ENCODE_SET", "FRAGMENT_ENCODE_SET_URI", "HEX_DIGITS", "", "PASSWORD_ENCODE_SET", "PATH_SEGMENT_ENCODE_SET", "PATH_SEGMENT_ENCODE_SET_URI", "QUERY_COMPONENT_ENCODE_SET", "QUERY_COMPONENT_ENCODE_SET_URI", "QUERY_COMPONENT_REENCODE_SET", "QUERY_ENCODE_SET", "USERNAME_ENCODE_SET", "defaultPort", "", "scheme", "get", "Lokhttp3/HttpUrl;", "uri", "Ljava/net/URI;", "-deprecated_get", "url", "Ljava/net/URL;", "parse", "-deprecated_parse", "canonicalize", "pos", "limit", "encodeSet", "alreadyEncoded", "", "strict", "plusIsSpace", "unicodeAllowed", "charset", "Ljava/nio/charset/Charset;", "canonicalize$okhttp", "isPercentEncoded", "percentDecode", "percentDecode$okhttp", "toHttpUrl", "toHttpUrlOrNull", "toPathString", "", "", "out", "Ljava/lang/StringBuilder;", "Lkotlin/text/StringBuilder;", "toPathString$okhttp", "toQueryNamesAndValues", "", "toQueryNamesAndValues$okhttp", "toQueryString", "toQueryString$okhttp", "writeCanonicalized", "Lokio/Buffer;", "input", "writePercentDecoded", "encoded", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public static java.lang.String canonicalize$okhttp$default(okhttp3.HttpUrl.Companion r13, java.lang.String r14, int r15, int r16, java.lang.String r17, boolean r18, boolean r19, boolean r20, boolean r21, java.nio.charset.Charset r22, int r23, java.lang.Object r24) {
                r0 = r23
                r1 = r0 & 1
                r2 = 0
                if (r1 == 0) goto L9
                r5 = r2
                goto La
            L9:
                r5 = r15
            La:
                r1 = r0 & 2
                if (r1 == 0) goto L14
                int r1 = r14.length()
                r6 = r1
                goto L16
            L14:
                r6 = r16
            L16:
                r1 = r0 & 8
                if (r1 == 0) goto L1c
                r8 = r2
                goto L1e
            L1c:
                r8 = r18
            L1e:
                r1 = r0 & 16
                if (r1 == 0) goto L24
                r9 = r2
                goto L26
            L24:
                r9 = r19
            L26:
                r1 = r0 & 32
                if (r1 == 0) goto L2c
                r10 = r2
                goto L2e
            L2c:
                r10 = r20
            L2e:
                r1 = r0 & 64
                if (r1 == 0) goto L34
                r11 = r2
                goto L36
            L34:
                r11 = r21
            L36:
                r0 = r0 & 128(0x80, float:1.8E-43)
                if (r0 == 0) goto L3d
                r0 = 0
                r12 = r0
                goto L3f
            L3d:
                r12 = r22
            L3f:
                r3 = r13
                r4 = r14
                r7 = r17
                java.lang.String r0 = r3.canonicalize$okhttp(r4, r5, r6, r7, r8, r9, r10, r11, r12)
                return r0
        }

        private final boolean isPercentEncoded(java.lang.String r4, int r5, int r6) {
                r3 = this;
                int r0 = r5 + 2
                r1 = 1
                if (r0 >= r6) goto L24
                char r6 = r4.charAt(r5)
                r2 = 37
                if (r6 != r2) goto L24
                int r5 = r5 + r1
                char r5 = r4.charAt(r5)
                int r5 = okhttp3.internal.Util.parseHexDigit(r5)
                r6 = -1
                if (r5 == r6) goto L24
                char r4 = r4.charAt(r0)
                int r4 = okhttp3.internal.Util.parseHexDigit(r4)
                if (r4 == r6) goto L24
                goto L25
            L24:
                r1 = 0
            L25:
                return r1
        }

        public static java.lang.String percentDecode$okhttp$default(okhttp3.HttpUrl.Companion r1, java.lang.String r2, int r3, int r4, boolean r5, int r6, java.lang.Object r7) {
                r7 = r6 & 1
                r0 = 0
                if (r7 == 0) goto L6
                r3 = r0
            L6:
                r7 = r6 & 2
                if (r7 == 0) goto Le
                int r4 = r2.length()
            Le:
                r6 = r6 & 4
                if (r6 == 0) goto L13
                r5 = r0
            L13:
                java.lang.String r1 = r1.percentDecode$okhttp(r2, r3, r4, r5)
                return r1
        }

        private final void writeCanonicalized(okio.Buffer r14, java.lang.String r15, int r16, int r17, java.lang.String r18, boolean r19, boolean r20, boolean r21, boolean r22, java.nio.charset.Charset r23) {
                r13 = this;
                r0 = r14
                r1 = r15
                r2 = r17
                r3 = r23
                r4 = 0
                r5 = r16
                r6 = r4
            La:
                if (r5 >= r2) goto Lb4
                int r7 = r15.codePointAt(r5)
                if (r19 == 0) goto L25
                r8 = 9
                if (r7 == r8) goto L22
                r8 = 10
                if (r7 == r8) goto L22
                r8 = 12
                if (r7 == r8) goto L22
                r8 = 13
                if (r7 != r8) goto L25
            L22:
                r8 = r13
                goto Lad
            L25:
                r8 = 43
                if (r7 != r8) goto L36
                if (r21 == 0) goto L36
                if (r19 == 0) goto L30
                java.lang.String r8 = "+"
                goto L32
            L30:
                java.lang.String r8 = "%2B"
            L32:
                r14.writeUtf8(r8)
                goto L22
            L36:
                r8 = 32
                r9 = 37
                if (r7 < r8) goto L66
                r8 = 127(0x7f, float:1.78E-43)
                if (r7 == r8) goto L66
                r8 = 128(0x80, float:1.8E-43)
                if (r7 < r8) goto L46
                if (r22 == 0) goto L66
            L46:
                r8 = r18
                java.lang.CharSequence r8 = (java.lang.CharSequence) r8
                char r10 = (char) r7
                r11 = 0
                r12 = 2
                boolean r8 = kotlin.text.StringsKt.contains$default(r8, r10, r11, r12, r4)
                if (r8 != 0) goto L66
                if (r7 != r9) goto L61
                if (r19 == 0) goto L66
                if (r20 == 0) goto L61
                r8 = r13
                boolean r10 = r13.isPercentEncoded(r15, r5, r2)
                if (r10 != 0) goto L62
                goto L67
            L61:
                r8 = r13
            L62:
                r14.writeUtf8CodePoint(r7)
                goto Lad
            L66:
                r8 = r13
            L67:
                if (r6 != 0) goto L6e
                okio.Buffer r6 = new okio.Buffer
                r6.<init>()
            L6e:
                if (r3 == 0) goto L82
                java.nio.charset.Charset r10 = java.nio.charset.StandardCharsets.UTF_8
                boolean r10 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r10)
                if (r10 == 0) goto L79
                goto L82
            L79:
                int r10 = java.lang.Character.charCount(r7)
                int r10 = r10 + r5
                r6.writeString(r15, r5, r10, r3)
                goto L85
            L82:
                r6.writeUtf8CodePoint(r7)
            L85:
                boolean r10 = r6.exhausted()
                if (r10 != 0) goto Lad
                byte r10 = r6.readByte()
                r10 = r10 & 255(0xff, float:3.57E-43)
                r14.writeByte(r9)
                char[] r11 = okhttp3.HttpUrl.access$getHEX_DIGITS$cp()
                int r12 = r10 >> 4
                r12 = r12 & 15
                char r11 = r11[r12]
                r14.writeByte(r11)
                char[] r11 = okhttp3.HttpUrl.access$getHEX_DIGITS$cp()
                r10 = r10 & 15
                char r10 = r11[r10]
                r14.writeByte(r10)
                goto L85
            Lad:
                int r7 = java.lang.Character.charCount(r7)
                int r5 = r5 + r7
                goto La
            Lb4:
                r8 = r13
                return
        }

        private final void writePercentDecoded(okio.Buffer r6, java.lang.String r7, int r8, int r9, boolean r10) {
                r5 = this;
            L0:
                if (r8 >= r9) goto L48
                int r0 = r7.codePointAt(r8)
                r1 = 37
                if (r0 != r1) goto L31
                int r1 = r8 + 2
                if (r1 >= r9) goto L31
                int r2 = r8 + 1
                char r2 = r7.charAt(r2)
                int r2 = okhttp3.internal.Util.parseHexDigit(r2)
                char r3 = r7.charAt(r1)
                int r3 = okhttp3.internal.Util.parseHexDigit(r3)
                r4 = -1
                if (r2 == r4) goto L3f
                if (r3 == r4) goto L3f
                int r8 = r2 << 4
                int r8 = r8 + r3
                r6.writeByte(r8)
                int r8 = java.lang.Character.charCount(r0)
                int r8 = r8 + r1
                goto L0
            L31:
                r1 = 43
                if (r0 != r1) goto L3f
                if (r10 == 0) goto L3f
                r0 = 32
                r6.writeByte(r0)
                int r8 = r8 + 1
                goto L0
            L3f:
                r6.writeUtf8CodePoint(r0)
                int r0 = java.lang.Character.charCount(r0)
                int r8 = r8 + r0
                goto L0
            L48:
                return
        }

        @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to extension function", replaceWith = @kotlin.ReplaceWith(expression = "url.toHttpUrl()", imports = {"okhttp3.HttpUrl.Companion.toHttpUrl"}))
        public final okhttp3.HttpUrl -deprecated_get(java.lang.String r2) {
                r1 = this;
                java.lang.String r0 = "url"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                okhttp3.HttpUrl r2 = r1.get(r2)
                return r2
        }

        @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to extension function", replaceWith = @kotlin.ReplaceWith(expression = "uri.toHttpUrlOrNull()", imports = {"okhttp3.HttpUrl.Companion.toHttpUrlOrNull"}))
        public final okhttp3.HttpUrl -deprecated_get(java.net.URI r2) {
                r1 = this;
                java.lang.String r0 = "uri"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                okhttp3.HttpUrl r2 = r1.get(r2)
                return r2
        }

        @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to extension function", replaceWith = @kotlin.ReplaceWith(expression = "url.toHttpUrlOrNull()", imports = {"okhttp3.HttpUrl.Companion.toHttpUrlOrNull"}))
        public final okhttp3.HttpUrl -deprecated_get(java.net.URL r2) {
                r1 = this;
                java.lang.String r0 = "url"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                okhttp3.HttpUrl r2 = r1.get(r2)
                return r2
        }

        @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to extension function", replaceWith = @kotlin.ReplaceWith(expression = "url.toHttpUrlOrNull()", imports = {"okhttp3.HttpUrl.Companion.toHttpUrlOrNull"}))
        public final okhttp3.HttpUrl -deprecated_parse(java.lang.String r2) {
                r1 = this;
                java.lang.String r0 = "url"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                okhttp3.HttpUrl r2 = r1.parse(r2)
                return r2
        }

        public final java.lang.String canonicalize$okhttp(java.lang.String r14, int r15, int r16, java.lang.String r17, boolean r18, boolean r19, boolean r20, boolean r21, java.nio.charset.Charset r22) {
                r13 = this;
                r2 = r14
                r4 = r16
                r5 = r17
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r14, r0)
                java.lang.String r0 = "encodeSet"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                r3 = r15
            L10:
                if (r3 >= r4) goto L72
                int r0 = r14.codePointAt(r3)
                r1 = 32
                if (r0 < r1) goto L4f
                r1 = 127(0x7f, float:1.78E-43)
                if (r0 == r1) goto L4f
                r1 = 128(0x80, float:1.8E-43)
                if (r0 < r1) goto L24
                if (r21 == 0) goto L4f
            L24:
                r1 = r5
                java.lang.CharSequence r1 = (java.lang.CharSequence) r1
                char r6 = (char) r0
                r7 = 0
                r8 = 2
                r9 = 0
                boolean r1 = kotlin.text.StringsKt.contains$default(r1, r6, r7, r8, r9)
                if (r1 != 0) goto L4f
                r1 = 37
                if (r0 != r1) goto L41
                if (r18 == 0) goto L4f
                if (r19 == 0) goto L41
                r11 = r13
                boolean r1 = r13.isPercentEncoded(r14, r3, r4)
                if (r1 == 0) goto L50
                goto L42
            L41:
                r11 = r13
            L42:
                r1 = 43
                if (r0 != r1) goto L49
                if (r20 == 0) goto L49
                goto L50
            L49:
                int r0 = java.lang.Character.charCount(r0)
                int r3 = r3 + r0
                goto L10
            L4f:
                r11 = r13
            L50:
                okio.Buffer r12 = new okio.Buffer
                r12.<init>()
                r0 = r15
                r12.writeUtf8(r14, r15, r3)
                r0 = r13
                r1 = r12
                r2 = r14
                r4 = r16
                r5 = r17
                r6 = r18
                r7 = r19
                r8 = r20
                r9 = r21
                r10 = r22
                r0.writeCanonicalized(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
                java.lang.String r0 = r12.readUtf8()
                return r0
            L72:
                r11 = r13
                r0 = r15
                java.lang.String r0 = r14.substring(r15, r16)
                java.lang.String r1 = "this as java.lang.String…ing(startIndex, endIndex)"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
                return r0
        }

        @kotlin.jvm.JvmStatic
        public final int defaultPort(java.lang.String r2) {
                r1 = this;
                java.lang.String r0 = "scheme"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                java.lang.String r0 = "http"
                boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r2, r0)
                if (r0 == 0) goto L10
                r2 = 80
                goto L1c
            L10:
                java.lang.String r0 = "https"
                boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r2, r0)
                if (r2 == 0) goto L1b
                r2 = 443(0x1bb, float:6.21E-43)
                goto L1c
            L1b:
                r2 = -1
            L1c:
                return r2
        }

        @kotlin.jvm.JvmStatic
        public final okhttp3.HttpUrl get(java.lang.String r3) {
                r2 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                okhttp3.HttpUrl$Builder r0 = new okhttp3.HttpUrl$Builder
                r0.<init>()
                r1 = 0
                okhttp3.HttpUrl$Builder r3 = r0.parse$okhttp(r1, r3)
                okhttp3.HttpUrl r3 = r3.build()
                return r3
        }

        @kotlin.jvm.JvmStatic
        public final okhttp3.HttpUrl get(java.net.URI r2) {
                r1 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                java.lang.String r2 = r2.toString()
                java.lang.String r0 = "toString()"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r0)
                okhttp3.HttpUrl r2 = r1.parse(r2)
                return r2
        }

        @kotlin.jvm.JvmStatic
        public final okhttp3.HttpUrl get(java.net.URL r2) {
                r1 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                java.lang.String r2 = r2.toString()
                java.lang.String r0 = "toString()"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r0)
                okhttp3.HttpUrl r2 = r1.parse(r2)
                return r2
        }

        @kotlin.jvm.JvmStatic
        public final okhttp3.HttpUrl parse(java.lang.String r2) {
                r1 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                okhttp3.HttpUrl r2 = r1.get(r2)     // Catch: java.lang.IllegalArgumentException -> La
                goto Ld
            La:
                r2 = 0
                okhttp3.HttpUrl r2 = (okhttp3.HttpUrl) r2
            Ld:
                return r2
        }

        public final java.lang.String percentDecode$okhttp(java.lang.String r8, int r9, int r10, boolean r11) {
                r7 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                r4 = r9
            L6:
                if (r4 >= r10) goto L30
                int r0 = r4 + 1
                char r1 = r8.charAt(r4)
                r2 = 37
                if (r1 == r2) goto L1b
                r2 = 43
                if (r1 != r2) goto L19
                if (r11 == 0) goto L19
                goto L1b
            L19:
                r4 = r0
                goto L6
            L1b:
                okio.Buffer r0 = new okio.Buffer
                r0.<init>()
                r0.writeUtf8(r8, r9, r4)
                r1 = r7
                r2 = r0
                r3 = r8
                r5 = r10
                r6 = r11
                r1.writePercentDecoded(r2, r3, r4, r5, r6)
                java.lang.String r8 = r0.readUtf8()
                return r8
            L30:
                java.lang.String r8 = r8.substring(r9, r10)
                java.lang.String r9 = "this as java.lang.String…ing(startIndex, endIndex)"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r8, r9)
                return r8
        }

        public final void toPathString$okhttp(java.util.List<java.lang.String> r5, java.lang.StringBuilder r6) {
                r4 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                java.lang.String r0 = "out"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
                int r0 = r5.size()
                r1 = 0
            Lf:
                if (r1 >= r0) goto L23
                int r2 = r1 + 1
                r3 = 47
                r6.append(r3)
                java.lang.Object r1 = r5.get(r1)
                java.lang.String r1 = (java.lang.String) r1
                r6.append(r1)
                r1 = r2
                goto Lf
            L23:
                return
        }

        public final java.util.List<java.lang.String> toQueryNamesAndValues$okhttp(java.lang.String r12) {
                r11 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                java.util.List r0 = (java.util.List) r0
                r1 = 0
            Ld:
                int r2 = r12.length()
                if (r1 > r2) goto L63
                r8 = r12
                java.lang.CharSequence r8 = (java.lang.CharSequence) r8
                r3 = 38
                r5 = 0
                r6 = 4
                r7 = 0
                r2 = r8
                r4 = r1
                int r2 = kotlin.text.StringsKt.indexOf$default(r2, r3, r4, r5, r6, r7)
                r9 = -1
                if (r2 != r9) goto L28
                int r2 = r12.length()
            L28:
                r10 = r2
                r3 = 61
                r5 = 0
                r6 = 4
                r7 = 0
                r2 = r8
                r4 = r1
                int r2 = kotlin.text.StringsKt.indexOf$default(r2, r3, r4, r5, r6, r7)
                java.lang.String r3 = "this as java.lang.String…ing(startIndex, endIndex)"
                if (r2 == r9) goto L52
                if (r2 <= r10) goto L3b
                goto L52
            L3b:
                java.lang.String r1 = r12.substring(r1, r2)
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r3)
                r0.add(r1)
                int r2 = r2 + 1
                java.lang.String r1 = r12.substring(r2, r10)
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r3)
                r0.add(r1)
                goto L60
            L52:
                java.lang.String r1 = r12.substring(r1, r10)
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r3)
                r0.add(r1)
                r1 = 0
                r0.add(r1)
            L60:
                int r1 = r10 + 1
                goto Ld
            L63:
                return r0
        }

        public final void toQueryString$okhttp(java.util.List<java.lang.String> r8, java.lang.StringBuilder r9) {
                r7 = this;
                java.lang.String r0 = "<this>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                java.lang.String r0 = "out"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
                int r0 = r8.size()
                r1 = 0
                kotlin.ranges.IntRange r0 = kotlin.ranges.RangesKt.until(r1, r0)
                kotlin.ranges.IntProgression r0 = (kotlin.ranges.IntProgression) r0
                r1 = 2
                kotlin.ranges.IntProgression r0 = kotlin.ranges.RangesKt.step(r0, r1)
                int r1 = r0.getFirst()
                int r2 = r0.getLast()
                int r0 = r0.getStep()
                if (r0 <= 0) goto L2a
                if (r1 <= r2) goto L2e
            L2a:
                if (r0 >= 0) goto L57
                if (r2 > r1) goto L57
            L2e:
                int r3 = r1 + r0
                java.lang.Object r4 = r8.get(r1)
                java.lang.String r4 = (java.lang.String) r4
                int r5 = r1 + 1
                java.lang.Object r5 = r8.get(r5)
                java.lang.String r5 = (java.lang.String) r5
                if (r1 <= 0) goto L45
                r6 = 38
                r9.append(r6)
            L45:
                r9.append(r4)
                if (r5 == 0) goto L52
                r4 = 61
                r9.append(r4)
                r9.append(r5)
            L52:
                if (r1 != r2) goto L55
                goto L57
            L55:
                r1 = r3
                goto L2e
            L57:
                return
        }
    }

    static {
            okhttp3.HttpUrl$Companion r0 = new okhttp3.HttpUrl$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.HttpUrl.Companion = r0
            r0 = 16
            char[] r0 = new char[r0]
            r0 = {x0012: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70} // fill-array
            okhttp3.HttpUrl.HEX_DIGITS = r0
            return
    }

    public HttpUrl(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, int r6, java.util.List<java.lang.String> r7, java.util.List<java.lang.String> r8, java.lang.String r9, java.lang.String r10) {
            r1 = this;
            java.lang.String r0 = "scheme"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "username"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "password"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "host"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = "pathSegments"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            java.lang.String r0 = "url"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            r1.<init>()
            r1.scheme = r2
            r1.username = r3
            r1.password = r4
            r1.host = r5
            r1.port = r6
            r1.pathSegments = r7
            r1.queryNamesAndValues = r8
            r1.fragment = r9
            r1.url = r10
            java.lang.String r3 = "https"
            boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r2, r3)
            r1.isHttps = r2
            return
    }

    public static final char[] access$getHEX_DIGITS$cp() {
            char[] r0 = okhttp3.HttpUrl.HEX_DIGITS
            return r0
    }

    @kotlin.jvm.JvmStatic
    public static final int defaultPort(java.lang.String r1) {
            okhttp3.HttpUrl$Companion r0 = okhttp3.HttpUrl.Companion
            int r1 = r0.defaultPort(r1)
            return r1
    }

    @kotlin.jvm.JvmStatic
    public static final okhttp3.HttpUrl get(java.lang.String r1) {
            okhttp3.HttpUrl$Companion r0 = okhttp3.HttpUrl.Companion
            okhttp3.HttpUrl r1 = r0.get(r1)
            return r1
    }

    @kotlin.jvm.JvmStatic
    public static final okhttp3.HttpUrl get(java.net.URI r1) {
            okhttp3.HttpUrl$Companion r0 = okhttp3.HttpUrl.Companion
            okhttp3.HttpUrl r1 = r0.get(r1)
            return r1
    }

    @kotlin.jvm.JvmStatic
    public static final okhttp3.HttpUrl get(java.net.URL r1) {
            okhttp3.HttpUrl$Companion r0 = okhttp3.HttpUrl.Companion
            okhttp3.HttpUrl r1 = r0.get(r1)
            return r1
    }

    @kotlin.jvm.JvmStatic
    public static final okhttp3.HttpUrl parse(java.lang.String r1) {
            okhttp3.HttpUrl$Companion r0 = okhttp3.HttpUrl.Companion
            okhttp3.HttpUrl r1 = r0.parse(r1)
            return r1
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "encodedFragment", imports = {}))
    public final java.lang.String -deprecated_encodedFragment() {
            r1 = this;
            java.lang.String r0 = r1.encodedFragment()
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "encodedPassword", imports = {}))
    public final java.lang.String -deprecated_encodedPassword() {
            r1 = this;
            java.lang.String r0 = r1.encodedPassword()
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "encodedPath", imports = {}))
    public final java.lang.String -deprecated_encodedPath() {
            r1 = this;
            java.lang.String r0 = r1.encodedPath()
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "encodedPathSegments", imports = {}))
    public final java.util.List<java.lang.String> -deprecated_encodedPathSegments() {
            r1 = this;
            java.util.List r0 = r1.encodedPathSegments()
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "encodedQuery", imports = {}))
    public final java.lang.String -deprecated_encodedQuery() {
            r1 = this;
            java.lang.String r0 = r1.encodedQuery()
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "encodedUsername", imports = {}))
    public final java.lang.String -deprecated_encodedUsername() {
            r1 = this;
            java.lang.String r0 = r1.encodedUsername()
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "fragment", imports = {}))
    public final java.lang.String -deprecated_fragment() {
            r1 = this;
            java.lang.String r0 = r1.fragment
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "host", imports = {}))
    public final java.lang.String -deprecated_host() {
            r1 = this;
            java.lang.String r0 = r1.host
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "password", imports = {}))
    public final java.lang.String -deprecated_password() {
            r1 = this;
            java.lang.String r0 = r1.password
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "pathSegments", imports = {}))
    public final java.util.List<java.lang.String> -deprecated_pathSegments() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.pathSegments
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "pathSize", imports = {}))
    public final int -deprecated_pathSize() {
            r1 = this;
            int r0 = r1.pathSize()
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "port", imports = {}))
    public final int -deprecated_port() {
            r1 = this;
            int r0 = r1.port
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "query", imports = {}))
    public final java.lang.String -deprecated_query() {
            r1 = this;
            java.lang.String r0 = r1.query()
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "queryParameterNames", imports = {}))
    public final java.util.Set<java.lang.String> -deprecated_queryParameterNames() {
            r1 = this;
            java.util.Set r0 = r1.queryParameterNames()
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "querySize", imports = {}))
    public final int -deprecated_querySize() {
            r1 = this;
            int r0 = r1.querySize()
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "scheme", imports = {}))
    public final java.lang.String -deprecated_scheme() {
            r1 = this;
            java.lang.String r0 = r1.scheme
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to toUri()", replaceWith = @kotlin.ReplaceWith(expression = "toUri()", imports = {}))
    public final java.net.URI -deprecated_uri() {
            r1 = this;
            java.net.URI r0 = r1.uri()
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to toUrl()", replaceWith = @kotlin.ReplaceWith(expression = "toUrl()", imports = {}))
    public final java.net.URL -deprecated_url() {
            r1 = this;
            java.net.URL r0 = r1.url()
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "username", imports = {}))
    public final java.lang.String -deprecated_username() {
            r1 = this;
            java.lang.String r0 = r1.username
            return r0
    }

    public final java.lang.String encodedFragment() {
            r7 = this;
            java.lang.String r0 = r7.fragment
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.String r0 = r7.url
            r1 = r0
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            r2 = 35
            r3 = 0
            r4 = 0
            r5 = 6
            r6 = 0
            int r0 = kotlin.text.StringsKt.indexOf$default(r1, r2, r3, r4, r5, r6)
            int r0 = r0 + 1
            java.lang.String r1 = r7.url
            java.lang.String r0 = r1.substring(r0)
            java.lang.String r1 = "this as java.lang.String).substring(startIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    public final java.lang.String encodedPassword() {
            r8 = this;
            java.lang.String r0 = r8.password
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            int r0 = r0.length()
            r1 = 1
            if (r0 != 0) goto Ld
            r0 = r1
            goto Le
        Ld:
            r0 = 0
        Le:
            if (r0 == 0) goto L13
            java.lang.String r0 = ""
            return r0
        L13:
            java.lang.String r0 = r8.url
            r2 = r0
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2
            r3 = 58
            java.lang.String r0 = r8.scheme
            int r0 = r0.length()
            int r4 = r0 + 3
            r5 = 0
            r6 = 4
            r7 = 0
            int r0 = kotlin.text.StringsKt.indexOf$default(r2, r3, r4, r5, r6, r7)
            int r0 = r0 + r1
            java.lang.String r1 = r8.url
            r2 = r1
            java.lang.CharSequence r2 = (java.lang.CharSequence) r2
            r3 = 64
            r4 = 0
            r6 = 6
            int r1 = kotlin.text.StringsKt.indexOf$default(r2, r3, r4, r5, r6, r7)
            java.lang.String r2 = r8.url
            java.lang.String r0 = r2.substring(r0, r1)
            java.lang.String r1 = "this as java.lang.String…ing(startIndex, endIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    public final java.lang.String encodedPath() {
            r7 = this;
            java.lang.String r0 = r7.url
            r1 = r0
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            java.lang.String r0 = r7.scheme
            int r0 = r0.length()
            int r3 = r0 + 3
            r2 = 47
            r4 = 0
            r5 = 4
            r6 = 0
            int r0 = kotlin.text.StringsKt.indexOf$default(r1, r2, r3, r4, r5, r6)
            java.lang.String r1 = r7.url
            int r2 = r1.length()
            java.lang.String r3 = "?#"
            int r1 = okhttp3.internal.Util.delimiterOffset(r1, r3, r0, r2)
            java.lang.String r2 = r7.url
            java.lang.String r0 = r2.substring(r0, r1)
            java.lang.String r1 = "this as java.lang.String…ing(startIndex, endIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    public final java.util.List<java.lang.String> encodedPathSegments() {
            r7 = this;
            java.lang.String r0 = r7.url
            r1 = r0
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            java.lang.String r0 = r7.scheme
            int r0 = r0.length()
            int r3 = r0 + 3
            r2 = 47
            r4 = 0
            r5 = 4
            r6 = 0
            int r0 = kotlin.text.StringsKt.indexOf$default(r1, r2, r3, r4, r5, r6)
            java.lang.String r1 = r7.url
            int r2 = r1.length()
            java.lang.String r3 = "?#"
            int r1 = okhttp3.internal.Util.delimiterOffset(r1, r3, r0, r2)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.List r2 = (java.util.List) r2
        L29:
            if (r0 >= r1) goto L45
            int r0 = r0 + 1
            java.lang.String r3 = r7.url
            r4 = 47
            int r3 = okhttp3.internal.Util.delimiterOffset(r3, r4, r0, r1)
            java.lang.String r4 = r7.url
            java.lang.String r0 = r4.substring(r0, r3)
            java.lang.String r4 = "this as java.lang.String…ing(startIndex, endIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r4)
            r2.add(r0)
            r0 = r3
            goto L29
        L45:
            return r2
    }

    public final java.lang.String encodedQuery() {
            r7 = this;
            java.util.List<java.lang.String> r0 = r7.queryNamesAndValues
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.String r0 = r7.url
            r1 = r0
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            r2 = 63
            r3 = 0
            r4 = 0
            r5 = 6
            r6 = 0
            int r0 = kotlin.text.StringsKt.indexOf$default(r1, r2, r3, r4, r5, r6)
            int r0 = r0 + 1
            java.lang.String r1 = r7.url
            r2 = 35
            int r3 = r1.length()
            int r1 = okhttp3.internal.Util.delimiterOffset(r1, r2, r0, r3)
            java.lang.String r2 = r7.url
            java.lang.String r0 = r2.substring(r0, r1)
            java.lang.String r1 = "this as java.lang.String…ing(startIndex, endIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    public final java.lang.String encodedUsername() {
            r4 = this;
            java.lang.String r0 = r4.username
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            int r0 = r0.length()
            if (r0 != 0) goto Lc
            r0 = 1
            goto Ld
        Lc:
            r0 = 0
        Ld:
            if (r0 == 0) goto L12
            java.lang.String r0 = ""
            return r0
        L12:
            java.lang.String r0 = r4.scheme
            int r0 = r0.length()
            int r0 = r0 + 3
            java.lang.String r1 = r4.url
            int r2 = r1.length()
            java.lang.String r3 = ":@"
            int r1 = okhttp3.internal.Util.delimiterOffset(r1, r3, r0, r2)
            java.lang.String r2 = r4.url
            java.lang.String r0 = r2.substring(r0, r1)
            java.lang.String r1 = "this as java.lang.String…ing(startIndex, endIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    public boolean equals(java.lang.Object r2) {
            r1 = this;
            boolean r0 = r2 instanceof okhttp3.HttpUrl
            if (r0 == 0) goto L12
            okhttp3.HttpUrl r2 = (okhttp3.HttpUrl) r2
            java.lang.String r2 = r2.url
            java.lang.String r0 = r1.url
            boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r2, r0)
            if (r2 == 0) goto L12
            r2 = 1
            goto L13
        L12:
            r2 = 0
        L13:
            return r2
    }

    public final java.lang.String fragment() {
            r1 = this;
            java.lang.String r0 = r1.fragment
            return r0
    }

    public int hashCode() {
            r1 = this;
            java.lang.String r0 = r1.url
            int r0 = r0.hashCode()
            return r0
    }

    public final java.lang.String host() {
            r1 = this;
            java.lang.String r0 = r1.host
            return r0
    }

    public final boolean isHttps() {
            r1 = this;
            boolean r0 = r1.isHttps
            return r0
    }

    public final okhttp3.HttpUrl.Builder newBuilder() {
            r4 = this;
            okhttp3.HttpUrl$Builder r0 = new okhttp3.HttpUrl$Builder
            r0.<init>()
            java.lang.String r1 = r4.scheme
            r0.setScheme$okhttp(r1)
            java.lang.String r1 = r4.encodedUsername()
            r0.setEncodedUsername$okhttp(r1)
            java.lang.String r1 = r4.encodedPassword()
            r0.setEncodedPassword$okhttp(r1)
            java.lang.String r1 = r4.host
            r0.setHost$okhttp(r1)
            int r1 = r4.port
            okhttp3.HttpUrl$Companion r2 = okhttp3.HttpUrl.Companion
            java.lang.String r3 = r4.scheme
            int r2 = r2.defaultPort(r3)
            if (r1 == r2) goto L2c
            int r1 = r4.port
            goto L2d
        L2c:
            r1 = -1
        L2d:
            r0.setPort$okhttp(r1)
            java.util.List r1 = r0.getEncodedPathSegments$okhttp()
            r1.clear()
            java.util.List r1 = r0.getEncodedPathSegments$okhttp()
            java.util.List r2 = r4.encodedPathSegments()
            java.util.Collection r2 = (java.util.Collection) r2
            r1.addAll(r2)
            java.lang.String r1 = r4.encodedQuery()
            r0.encodedQuery(r1)
            java.lang.String r1 = r4.encodedFragment()
            r0.setEncodedFragment$okhttp(r1)
            return r0
    }

    public final okhttp3.HttpUrl.Builder newBuilder(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "link"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okhttp3.HttpUrl$Builder r0 = new okhttp3.HttpUrl$Builder     // Catch: java.lang.IllegalArgumentException -> Lf
            r0.<init>()     // Catch: java.lang.IllegalArgumentException -> Lf
            okhttp3.HttpUrl$Builder r2 = r0.parse$okhttp(r1, r2)     // Catch: java.lang.IllegalArgumentException -> Lf
            goto L12
        Lf:
            r2 = 0
            okhttp3.HttpUrl$Builder r2 = (okhttp3.HttpUrl.Builder) r2
        L12:
            return r2
    }

    public final java.lang.String password() {
            r1 = this;
            java.lang.String r0 = r1.password
            return r0
    }

    public final java.util.List<java.lang.String> pathSegments() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.pathSegments
            return r0
    }

    public final int pathSize() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.pathSegments
            int r0 = r0.size()
            return r0
    }

    public final int port() {
            r1 = this;
            int r0 = r1.port
            return r0
    }

    public final java.lang.String query() {
            r3 = this;
            java.util.List<java.lang.String> r0 = r3.queryNamesAndValues
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
            java.util.List<java.lang.String> r2 = r3.queryNamesAndValues
            r1.toQueryString$okhttp(r2, r0)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final java.lang.String queryParameter(java.lang.String r7) {
            r6 = this;
            java.lang.String r0 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            java.util.List<java.lang.String> r0 = r6.queryNamesAndValues
            r1 = 0
            if (r0 != 0) goto Lb
            return r1
        Lb:
            r2 = 0
            int r0 = r0.size()
            kotlin.ranges.IntRange r0 = kotlin.ranges.RangesKt.until(r2, r0)
            kotlin.ranges.IntProgression r0 = (kotlin.ranges.IntProgression) r0
            r2 = 2
            kotlin.ranges.IntProgression r0 = kotlin.ranges.RangesKt.step(r0, r2)
            int r2 = r0.getFirst()
            int r3 = r0.getLast()
            int r0 = r0.getStep()
            if (r0 <= 0) goto L2b
            if (r2 <= r3) goto L2f
        L2b:
            if (r0 >= 0) goto L4d
            if (r3 > r2) goto L4d
        L2f:
            int r4 = r2 + r0
            java.util.List<java.lang.String> r5 = r6.queryNamesAndValues
            java.lang.Object r5 = r5.get(r2)
            boolean r5 = kotlin.jvm.internal.Intrinsics.areEqual(r7, r5)
            if (r5 == 0) goto L48
            java.util.List<java.lang.String> r7 = r6.queryNamesAndValues
            int r2 = r2 + 1
            java.lang.Object r7 = r7.get(r2)
            java.lang.String r7 = (java.lang.String) r7
            return r7
        L48:
            if (r2 != r3) goto L4b
            goto L4d
        L4b:
            r2 = r4
            goto L2f
        L4d:
            return r1
    }

    public final java.lang.String queryParameterName(int r2) {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.queryNamesAndValues
            if (r0 == 0) goto L10
            int r2 = r2 * 2
            java.lang.Object r2 = r0.get(r2)
            kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
        L10:
            java.lang.IndexOutOfBoundsException r2 = new java.lang.IndexOutOfBoundsException
            r2.<init>()
            throw r2
    }

    public final java.util.Set<java.lang.String> queryParameterNames() {
            r6 = this;
            java.util.List<java.lang.String> r0 = r6.queryNamesAndValues
            if (r0 != 0) goto L9
            java.util.Set r0 = kotlin.collections.SetsKt.emptySet()
            return r0
        L9:
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            r0.<init>()
            r1 = 0
            java.util.List<java.lang.String> r2 = r6.queryNamesAndValues
            int r2 = r2.size()
            kotlin.ranges.IntRange r1 = kotlin.ranges.RangesKt.until(r1, r2)
            kotlin.ranges.IntProgression r1 = (kotlin.ranges.IntProgression) r1
            r2 = 2
            kotlin.ranges.IntProgression r1 = kotlin.ranges.RangesKt.step(r1, r2)
            int r2 = r1.getFirst()
            int r3 = r1.getLast()
            int r1 = r1.getStep()
            if (r1 <= 0) goto L30
            if (r2 <= r3) goto L34
        L30:
            if (r1 >= 0) goto L47
            if (r3 > r2) goto L47
        L34:
            int r4 = r2 + r1
            java.util.List<java.lang.String> r5 = r6.queryNamesAndValues
            java.lang.Object r5 = r5.get(r2)
            kotlin.jvm.internal.Intrinsics.checkNotNull(r5)
            r0.add(r5)
            if (r2 != r3) goto L45
            goto L47
        L45:
            r2 = r4
            goto L34
        L47:
            java.util.Set r0 = (java.util.Set) r0
            java.util.Set r0 = java.util.Collections.unmodifiableSet(r0)
            java.lang.String r1 = "unmodifiableSet(result)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    public final java.lang.String queryParameterValue(int r2) {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.queryNamesAndValues
            if (r0 == 0) goto Lf
            int r2 = r2 * 2
            int r2 = r2 + 1
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
        Lf:
            java.lang.IndexOutOfBoundsException r2 = new java.lang.IndexOutOfBoundsException
            r2.<init>()
            throw r2
    }

    public final java.util.List<java.lang.String> queryParameterValues(java.lang.String r8) {
            r7 = this;
            java.lang.String r0 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.util.List<java.lang.String> r0 = r7.queryNamesAndValues
            if (r0 != 0) goto Le
            java.util.List r8 = kotlin.collections.CollectionsKt.emptyList()
            return r8
        Le:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = (java.util.List) r0
            r1 = 0
            java.util.List<java.lang.String> r2 = r7.queryNamesAndValues
            int r2 = r2.size()
            kotlin.ranges.IntRange r1 = kotlin.ranges.RangesKt.until(r1, r2)
            kotlin.ranges.IntProgression r1 = (kotlin.ranges.IntProgression) r1
            r2 = 2
            kotlin.ranges.IntProgression r1 = kotlin.ranges.RangesKt.step(r1, r2)
            int r2 = r1.getFirst()
            int r3 = r1.getLast()
            int r1 = r1.getStep()
            if (r1 <= 0) goto L37
            if (r2 <= r3) goto L3b
        L37:
            if (r1 >= 0) goto L59
            if (r3 > r2) goto L59
        L3b:
            int r4 = r2 + r1
            java.util.List<java.lang.String> r5 = r7.queryNamesAndValues
            java.lang.Object r5 = r5.get(r2)
            boolean r5 = kotlin.jvm.internal.Intrinsics.areEqual(r8, r5)
            if (r5 == 0) goto L54
            java.util.List<java.lang.String> r5 = r7.queryNamesAndValues
            int r6 = r2 + 1
            java.lang.Object r5 = r5.get(r6)
            r0.add(r5)
        L54:
            if (r2 != r3) goto L57
            goto L59
        L57:
            r2 = r4
            goto L3b
        L59:
            java.util.List r8 = java.util.Collections.unmodifiableList(r0)
            java.lang.String r0 = "unmodifiableList(result)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r8, r0)
            return r8
    }

    public final int querySize() {
            r1 = this;
            java.util.List<java.lang.String> r0 = r1.queryNamesAndValues
            if (r0 == 0) goto Lb
            int r0 = r0.size()
            int r0 = r0 / 2
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }

    public final java.lang.String redact() {
            r2 = this;
            java.lang.String r0 = "/..."
            okhttp3.HttpUrl$Builder r0 = r2.newBuilder(r0)
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            java.lang.String r1 = ""
            okhttp3.HttpUrl$Builder r0 = r0.username(r1)
            okhttp3.HttpUrl$Builder r0 = r0.password(r1)
            okhttp3.HttpUrl r0 = r0.build()
            java.lang.String r0 = r0.toString()
            return r0
    }

    public final okhttp3.HttpUrl resolve(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "link"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okhttp3.HttpUrl$Builder r2 = r1.newBuilder(r2)
            if (r2 != 0) goto Ld
            r2 = 0
            goto L11
        Ld:
            okhttp3.HttpUrl r2 = r2.build()
        L11:
            return r2
    }

    public final java.lang.String scheme() {
            r1 = this;
            java.lang.String r0 = r1.scheme
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = r1.url
            return r0
    }

    public final java.lang.String topPrivateDomain() {
            r2 = this;
            java.lang.String r0 = r2.host
            boolean r0 = okhttp3.internal.Util.canParseAsIpAddress(r0)
            if (r0 == 0) goto Lc
            r0 = 0
            java.lang.String r0 = (java.lang.String) r0
            goto L18
        Lc:
            okhttp3.internal.publicsuffix.PublicSuffixDatabase$Companion r0 = okhttp3.internal.publicsuffix.PublicSuffixDatabase.Companion
            okhttp3.internal.publicsuffix.PublicSuffixDatabase r0 = r0.get()
            java.lang.String r1 = r2.host
            java.lang.String r0 = r0.getEffectiveTldPlusOne(r1)
        L18:
            return r0
    }

    public final java.net.URI uri() {
            r4 = this;
            okhttp3.HttpUrl$Builder r0 = r4.newBuilder()
            okhttp3.HttpUrl$Builder r0 = r0.reencodeForUri$okhttp()
            java.lang.String r0 = r0.toString()
            java.net.URI r1 = new java.net.URI     // Catch: java.net.URISyntaxException -> L12
            r1.<init>(r0)     // Catch: java.net.URISyntaxException -> L12
            goto L2b
        L12:
            r1 = move-exception
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0     // Catch: java.lang.Exception -> L2c
            kotlin.text.Regex r2 = new kotlin.text.Regex     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = "[\\u0000-\\u001F\\u007F-\\u009F\\p{javaWhitespace}]"
            r2.<init>(r3)     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = ""
            java.lang.String r0 = r2.replace(r0, r3)     // Catch: java.lang.Exception -> L2c
            java.net.URI r1 = java.net.URI.create(r0)     // Catch: java.lang.Exception -> L2c
            java.lang.String r0 = "{\n      // Unlikely edge…Unexpected!\n      }\n    }"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
        L2b:
            return r1
        L2c:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            r0.<init>(r1)
            throw r0
    }

    public final java.net.URL url() {
            r2 = this;
            java.net.URL r0 = new java.net.URL     // Catch: java.net.MalformedURLException -> L8
            java.lang.String r1 = r2.url     // Catch: java.net.MalformedURLException -> L8
            r0.<init>(r1)     // Catch: java.net.MalformedURLException -> L8
            return r0
        L8:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.Throwable r0 = (java.lang.Throwable) r0
            r1.<init>(r0)
            throw r1
    }

    public final java.lang.String username() {
            r1 = this;
            java.lang.String r0 = r1.username
            return r0
    }
}
