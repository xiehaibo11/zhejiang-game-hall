package okhttp3.internal;

@kotlin.Metadata(d1 = {"\u0000¸\u0002\n\u0000\n\u0002\u0010\u0012\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0005\n\u0002\u0010\u0011\n\u0002\u0010\u0000\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010!\n\u0002\b\u0003\n\u0002\u0010\u0005\n\u0000\n\u0002\u0010\n\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\f\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u001c\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010$\n\u0002\b\b\n\u0002\u0010\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a \u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u00112\u0006\u0010\u0016\u001a\u00020\u00172\b\u0010\u0018\u001a\u0004\u0018\u00010\u0019\u001a\u001e\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u00172\u0006\u0010\u001d\u001a\u00020\u00172\u0006\u0010\u001e\u001a\u00020\u0017\u001a'\u0010\u001f\u001a\u00020\u00112\u0006\u0010\u001f\u001a\u00020\u00112\u0012\u0010 \u001a\n\u0012\u0006\b\u0001\u0012\u00020\"0!\"\u00020\"¢\u0006\u0002\u0010#\u001a\u001a\u0010$\u001a\u00020\u001b2\f\u0010%\u001a\b\u0012\u0004\u0012\u00020\u001b0&H\u0086\bø\u0001\u0000\u001a-\u0010'\u001a\b\u0012\u0004\u0012\u0002H)0(\"\u0004\b\u0000\u0010)2\u0012\u0010*\u001a\n\u0012\u0006\b\u0001\u0012\u0002H)0!\"\u0002H)H\u0007¢\u0006\u0002\u0010+\u001a\u000e\u0010,\u001a\u00020\u000f2\u0006\u0010\u0015\u001a\u00020\u0011\u001a1\u0010-\u001a\u0004\u0018\u0001H)\"\u0004\b\u0000\u0010)2\u0006\u0010.\u001a\u00020\"2\f\u0010/\u001a\b\u0012\u0004\u0012\u0002H)002\u0006\u00101\u001a\u00020\u0011¢\u0006\u0002\u00102\u001a\u0016\u00103\u001a\u0002042\u0006\u0010\u0015\u001a\u00020\u00112\u0006\u00105\u001a\u00020\u000f\u001a\"\u00106\u001a\u00020\u001b2\u0006\u0010\u0015\u001a\u00020\u00112\f\u0010%\u001a\b\u0012\u0004\u0012\u00020\u001b0&H\u0086\bø\u0001\u0000\u001a%\u00107\u001a\u00020\u001b\"\u0004\b\u0000\u00108*\b\u0012\u0004\u0012\u0002H8092\u0006\u0010:\u001a\u0002H8H\u0000¢\u0006\u0002\u0010;\u001a\u0015\u0010<\u001a\u00020\u0014*\u00020=2\u0006\u0010>\u001a\u00020\u0014H\u0086\u0004\u001a\u0015\u0010<\u001a\u00020\u0017*\u00020\u00142\u0006\u0010>\u001a\u00020\u0017H\u0086\u0004\u001a\u0015\u0010<\u001a\u00020\u0014*\u00020?2\u0006\u0010>\u001a\u00020\u0014H\u0086\u0004\u001a\n\u0010@\u001a\u00020A*\u00020B\u001a\r\u0010C\u001a\u00020\u001b*\u00020\"H\u0080\b\u001a\r\u0010D\u001a\u00020\u001b*\u00020\"H\u0080\b\u001a\n\u0010E\u001a\u00020\u000f*\u00020\u0011\u001a\u0012\u0010F\u001a\u00020\u000f*\u00020G2\u0006\u0010H\u001a\u00020G\u001a\n\u0010I\u001a\u00020\u001b*\u00020J\u001a\n\u0010I\u001a\u00020\u001b*\u00020K\u001a\n\u0010I\u001a\u00020\u001b*\u00020L\u001a#\u0010M\u001a\b\u0012\u0004\u0012\u00020\u00110!*\b\u0012\u0004\u0012\u00020\u00110!2\u0006\u0010N\u001a\u00020\u0011¢\u0006\u0002\u0010O\u001a&\u0010P\u001a\u00020\u0014*\u00020\u00112\u0006\u0010Q\u001a\u00020R2\b\b\u0002\u0010S\u001a\u00020\u00142\b\b\u0002\u0010T\u001a\u00020\u0014\u001a&\u0010P\u001a\u00020\u0014*\u00020\u00112\u0006\u0010U\u001a\u00020\u00112\b\b\u0002\u0010S\u001a\u00020\u00142\b\b\u0002\u0010T\u001a\u00020\u0014\u001a\u001a\u0010V\u001a\u00020\u000f*\u00020W2\u0006\u0010X\u001a\u00020\u00142\u0006\u0010Y\u001a\u00020\u0019\u001a;\u0010Z\u001a\b\u0012\u0004\u0012\u0002H)0(\"\u0004\b\u0000\u0010)*\b\u0012\u0004\u0012\u0002H)0[2\u0017\u0010\\\u001a\u0013\u0012\u0004\u0012\u0002H)\u0012\u0004\u0012\u00020\u000f0]¢\u0006\u0002\b^H\u0086\bø\u0001\u0000\u001a5\u0010_\u001a\u00020\u000f*\b\u0012\u0004\u0012\u00020\u00110!2\u000e\u0010H\u001a\n\u0012\u0004\u0012\u00020\u0011\u0018\u00010!2\u000e\u0010`\u001a\n\u0012\u0006\b\u0000\u0012\u00020\u00110a¢\u0006\u0002\u0010b\u001a\n\u0010c\u001a\u00020\u0017*\u00020d\u001a+\u0010e\u001a\u00020\u0014*\b\u0012\u0004\u0012\u00020\u00110!2\u0006\u0010N\u001a\u00020\u00112\f\u0010`\u001a\b\u0012\u0004\u0012\u00020\u00110a¢\u0006\u0002\u0010f\u001a\n\u0010g\u001a\u00020\u0014*\u00020\u0011\u001a\u001e\u0010h\u001a\u00020\u0014*\u00020\u00112\b\b\u0002\u0010S\u001a\u00020\u00142\b\b\u0002\u0010T\u001a\u00020\u0014\u001a\u001e\u0010i\u001a\u00020\u0014*\u00020\u00112\b\b\u0002\u0010S\u001a\u00020\u00142\b\b\u0002\u0010T\u001a\u00020\u0014\u001a\u0014\u0010j\u001a\u00020\u0014*\u00020\u00112\b\b\u0002\u0010S\u001a\u00020\u0014\u001a9\u0010k\u001a\b\u0012\u0004\u0012\u00020\u00110!*\b\u0012\u0004\u0012\u00020\u00110!2\f\u0010H\u001a\b\u0012\u0004\u0012\u00020\u00110!2\u000e\u0010`\u001a\n\u0012\u0006\b\u0000\u0012\u00020\u00110a¢\u0006\u0002\u0010l\u001a\u0012\u0010m\u001a\u00020\u000f*\u00020n2\u0006\u0010o\u001a\u00020p\u001a\u0012\u0010q\u001a\u00020\u000f*\u00020L2\u0006\u0010r\u001a\u00020s\u001a\r\u0010t\u001a\u00020\u001b*\u00020\"H\u0086\b\u001a\r\u0010u\u001a\u00020\u001b*\u00020\"H\u0086\b\u001a\n\u0010v\u001a\u00020\u0014*\u00020R\u001a\n\u0010w\u001a\u00020\u0011*\u00020L\u001a\u0012\u0010x\u001a\u00020y*\u00020s2\u0006\u0010z\u001a\u00020y\u001a\n\u0010{\u001a\u00020\u0014*\u00020s\u001a\u0012\u0010|\u001a\u00020\u0014*\u00020}2\u0006\u0010~\u001a\u00020=\u001a\u001a\u0010|\u001a\u00020\u000f*\u00020W2\u0006\u0010\u0016\u001a\u00020\u00142\u0006\u0010Y\u001a\u00020\u0019\u001a\u0011\u0010\u007f\u001a\t\u0012\u0005\u0012\u00030\u0080\u00010(*\u00020\u0003\u001a\u0012\u0010\u0081\u0001\u001a\u00020\u0003*\t\u0012\u0005\u0012\u00030\u0080\u00010(\u001a\u000b\u0010\u0082\u0001\u001a\u00020\u0011*\u00020\u0014\u001a\u000b\u0010\u0082\u0001\u001a\u00020\u0011*\u00020\u0017\u001a\u0016\u0010\u0083\u0001\u001a\u00020\u0011*\u00020G2\t\b\u0002\u0010\u0084\u0001\u001a\u00020\u000f\u001a\u001d\u0010\u0085\u0001\u001a\b\u0012\u0004\u0012\u0002H)0(\"\u0004\b\u0000\u0010)*\b\u0012\u0004\u0012\u0002H)0(\u001a7\u0010\u0086\u0001\u001a\u0011\u0012\u0005\u0012\u0003H\u0088\u0001\u0012\u0005\u0012\u0003H\u0089\u00010\u0087\u0001\"\u0005\b\u0000\u0010\u0088\u0001\"\u0005\b\u0001\u0010\u0089\u0001*\u0011\u0012\u0005\u0012\u0003H\u0088\u0001\u0012\u0005\u0012\u0003H\u0089\u00010\u0087\u0001\u001a\u0014\u0010\u008a\u0001\u001a\u00020\u0017*\u00020\u00112\u0007\u0010\u008b\u0001\u001a\u00020\u0017\u001a\u0016\u0010\u008c\u0001\u001a\u00020\u0014*\u0004\u0018\u00010\u00112\u0007\u0010\u008b\u0001\u001a\u00020\u0014\u001a\u001f\u0010\u008d\u0001\u001a\u00020\u0011*\u00020\u00112\b\b\u0002\u0010S\u001a\u00020\u00142\b\b\u0002\u0010T\u001a\u00020\u0014\u001a\u000e\u0010\u008e\u0001\u001a\u00020\u001b*\u00020\"H\u0086\b\u001a'\u0010\u008f\u0001\u001a\u00030\u0090\u0001*\b0\u0091\u0001j\u0003`\u0092\u00012\u0013\u0010\u0093\u0001\u001a\u000e\u0012\n\u0012\b0\u0091\u0001j\u0003`\u0092\u00010(\u001a\u0015\u0010\u0094\u0001\u001a\u00020\u001b*\u00030\u0095\u00012\u0007\u0010\u0096\u0001\u001a\u00020\u0014\"\u0010\u0010\u0000\u001a\u00020\u00018\u0006X\u0087\u0004¢\u0006\u0002\n\u0000\"\u0010\u0010\u0002\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u0002\n\u0000\"\u0010\u0010\u0004\u001a\u00020\u00058\u0006X\u0087\u0004¢\u0006\u0002\n\u0000\"\u0010\u0010\u0006\u001a\u00020\u00078\u0006X\u0087\u0004¢\u0006\u0002\n\u0000\"\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000\"\u0010\u0010\n\u001a\u00020\u000b8\u0006X\u0087\u0004¢\u0006\u0002\n\u0000\"\u000e\u0010\f\u001a\u00020\rX\u0082\u0004¢\u0006\u0002\n\u0000\"\u0010\u0010\u000e\u001a\u00020\u000f8\u0000X\u0081\u0004¢\u0006\u0002\n\u0000\"\u0010\u0010\u0010\u001a\u00020\u00118\u0000X\u0081\u0004¢\u0006\u0002\n\u0000\"\u000e\u0010\u0012\u001a\u00020\u0011X\u0086T¢\u0006\u0002\n\u0000\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006\u0097\u0001"}, d2 = {"EMPTY_BYTE_ARRAY", "", "EMPTY_HEADERS", "Lokhttp3/Headers;", "EMPTY_REQUEST", "Lokhttp3/RequestBody;", "EMPTY_RESPONSE", "Lokhttp3/ResponseBody;", "UNICODE_BOMS", "Lokio/Options;", "UTC", "Ljava/util/TimeZone;", "VERIFY_AS_IP_ADDRESS", "Lkotlin/text/Regex;", "assertionsEnabled", "", "okHttpName", "", "userAgent", "checkDuration", "", "name", "duration", "", "unit", "Ljava/util/concurrent/TimeUnit;", "checkOffsetAndCount", "", "arrayLength", "offset", "count", "format", "args", "", "", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", "ignoreIoExceptions", "block", "Lkotlin/Function0;", "immutableListOf", "", "T", "elements", "([Ljava/lang/Object;)Ljava/util/List;", "isSensitiveHeader", "readFieldOrNull", "instance", "fieldType", "Ljava/lang/Class;", "fieldName", "(Ljava/lang/Object;Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/Object;", "threadFactory", "Ljava/util/concurrent/ThreadFactory;", "daemon", "threadName", "addIfAbsent", "E", "", "element", "(Ljava/util/List;Ljava/lang/Object;)V", "and", "", "mask", "", "asFactory", "Lokhttp3/EventListener$Factory;", "Lokhttp3/EventListener;", "assertThreadDoesntHoldLock", "assertThreadHoldsLock", "canParseAsIpAddress", "canReuseConnectionFor", "Lokhttp3/HttpUrl;", "other", "closeQuietly", "Ljava/io/Closeable;", "Ljava/net/ServerSocket;", "Ljava/net/Socket;", "concat", "value", "([Ljava/lang/String;Ljava/lang/String;)[Ljava/lang/String;", "delimiterOffset", "delimiter", "", "startIndex", "endIndex", "delimiters", "discard", "Lokio/Source;", "timeout", "timeUnit", "filterList", "", "predicate", "Lkotlin/Function1;", "Lkotlin/ExtensionFunctionType;", "hasIntersection", "comparator", "Ljava/util/Comparator;", "([Ljava/lang/String;[Ljava/lang/String;Ljava/util/Comparator;)Z", "headersContentLength", "Lokhttp3/Response;", "indexOf", "([Ljava/lang/String;Ljava/lang/String;Ljava/util/Comparator;)I", "indexOfControlOrNonAscii", "indexOfFirstNonAsciiWhitespace", "indexOfLastNonAsciiWhitespace", "indexOfNonWhitespace", "intersect", "([Ljava/lang/String;[Ljava/lang/String;Ljava/util/Comparator;)[Ljava/lang/String;", "isCivilized", "Lokhttp3/internal/io/FileSystem;", "file", "Ljava/io/File;", "isHealthy", "source", "Lokio/BufferedSource;", "notify", "notifyAll", "parseHexDigit", "peerName", "readBomAsCharset", "Ljava/nio/charset/Charset;", "default", "readMedium", "skipAll", "Lokio/Buffer;", "b", "toHeaderList", "Lokhttp3/internal/http2/Header;", "toHeaders", "toHexString", "toHostHeader", "includeDefaultPort", "toImmutableList", "toImmutableMap", "", "K", "V", "toLongOrDefault", "defaultValue", "toNonNegativeInt", "trimSubstring", "wait", "withSuppressed", "", "Ljava/lang/Exception;", "Lkotlin/Exception;", "suppressed", "writeMedium", "Lokio/BufferedSink;", "medium", "okhttp"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class Util {
    public static final byte[] EMPTY_BYTE_ARRAY = null;
    public static final okhttp3.Headers EMPTY_HEADERS = null;
    public static final okhttp3.RequestBody EMPTY_REQUEST = null;
    public static final okhttp3.ResponseBody EMPTY_RESPONSE = null;
    private static final okio.Options UNICODE_BOMS = null;
    public static final java.util.TimeZone UTC = null;
    private static final kotlin.text.Regex VERIFY_AS_IP_ADDRESS = null;
    public static final boolean assertionsEnabled = false;
    public static final java.lang.String okHttpName = null;
    public static final java.lang.String userAgent = "okhttp/4.10.0";

    class 1 implements java.util.Comparator<java.lang.String> {
        1() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public int compare(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                java.lang.String r1 = (java.lang.String) r1
                java.lang.String r2 = (java.lang.String) r2
                int r1 = r0.compare(r1, r2)
                return r1
        }

        public int compare(java.lang.String r1, java.lang.String r2) {
                r0 = this;
                int r1 = r1.compareTo(r2)
                return r1
        }
    }

    class 2 implements java.util.concurrent.ThreadFactory {
        final boolean val$daemon;
        final java.lang.String val$name;

        2(java.lang.String r1, boolean r2) {
                r0 = this;
                r0.val$name = r1
                r0.val$daemon = r2
                r0.<init>()
                return
        }

        @Override
        public java.lang.Thread newThread(java.lang.Runnable r3) {
                r2 = this;
                java.lang.Thread r0 = new java.lang.Thread
                java.lang.String r1 = r2.val$name
                r0.<init>(r3, r1)
                boolean r3 = r2.val$daemon
                r0.setDaemon(r3)
                return r0
        }
    }

    static {
            r0 = 0
            byte[] r1 = new byte[r0]
            okhttp3.internal.Util.EMPTY_BYTE_ARRAY = r1
            okhttp3.Headers$Companion r1 = okhttp3.Headers.Companion
            java.lang.String[] r2 = new java.lang.String[r0]
            okhttp3.Headers r1 = r1.of(r2)
            okhttp3.internal.Util.EMPTY_HEADERS = r1
            okhttp3.ResponseBody$Companion r1 = okhttp3.ResponseBody.Companion
            byte[] r2 = okhttp3.internal.Util.EMPTY_BYTE_ARRAY
            r3 = 1
            r4 = 0
            okhttp3.ResponseBody r1 = okhttp3.ResponseBody.Companion.create$default(r1, r2, r4, r3, r4)
            okhttp3.internal.Util.EMPTY_RESPONSE = r1
            okhttp3.RequestBody$Companion r4 = okhttp3.RequestBody.Companion
            byte[] r5 = okhttp3.internal.Util.EMPTY_BYTE_ARRAY
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 7
            r10 = 0
            okhttp3.RequestBody r1 = okhttp3.RequestBody.Companion.create$default(r4, r5, r6, r7, r8, r9, r10)
            okhttp3.internal.Util.EMPTY_REQUEST = r1
            okio.Options$Companion r1 = okio.Options.Companion
            r2 = 5
            okio.ByteString[] r2 = new okio.ByteString[r2]
            okio.ByteString$Companion r4 = okio.ByteString.Companion
            java.lang.String r5 = "efbbbf"
            okio.ByteString r4 = r4.decodeHex(r5)
            r2[r0] = r4
            okio.ByteString$Companion r0 = okio.ByteString.Companion
            java.lang.String r4 = "feff"
            okio.ByteString r0 = r0.decodeHex(r4)
            r2[r3] = r0
            okio.ByteString$Companion r0 = okio.ByteString.Companion
            java.lang.String r3 = "fffe"
            okio.ByteString r0 = r0.decodeHex(r3)
            r3 = 2
            r2[r3] = r0
            okio.ByteString$Companion r0 = okio.ByteString.Companion
            java.lang.String r3 = "0000ffff"
            okio.ByteString r0 = r0.decodeHex(r3)
            r3 = 3
            r2[r3] = r0
            okio.ByteString$Companion r0 = okio.ByteString.Companion
            java.lang.String r3 = "ffff0000"
            okio.ByteString r0 = r0.decodeHex(r3)
            r3 = 4
            r2[r3] = r0
            okio.Options r0 = r1.of(r2)
            okhttp3.internal.Util.UNICODE_BOMS = r0
            java.lang.String r0 = "GMT"
            java.util.TimeZone r0 = java.util.TimeZone.getTimeZone(r0)
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            okhttp3.internal.Util.UTC = r0
            kotlin.text.Regex r0 = new kotlin.text.Regex
            java.lang.String r1 = "([0-9a-fA-F]*:[0-9a-fA-F:.]*)|([\\d.]+)"
            r0.<init>(r1)
            okhttp3.internal.Util.VERIFY_AS_IP_ADDRESS = r0
            java.lang.Class<okhttp3.OkHttpClient> r0 = okhttp3.OkHttpClient.class
            boolean r0 = r0.desiredAssertionStatus()
            okhttp3.internal.Util.assertionsEnabled = r0
            java.lang.Class<okhttp3.OkHttpClient> r0 = okhttp3.OkHttpClient.class
            java.lang.String r0 = r0.getName()
            java.lang.String r1 = "OkHttpClient::class.java.name"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            java.lang.String r1 = "okhttp3."
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            java.lang.String r0 = kotlin.text.StringsKt.removePrefix(r0, r1)
            java.lang.String r1 = "Client"
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            java.lang.String r0 = kotlin.text.StringsKt.removeSuffix(r0, r1)
            okhttp3.internal.Util.okHttpName = r0
            return
    }

    public static final <E> void addIfAbsent(java.util.List<E> r1, E r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r0 = r1.contains(r2)
            if (r0 != 0) goto Le
            r1.add(r2)
        Le:
            return
    }

    public static final int and(byte r0, int r1) {
            r0 = r0 & r1
            return r0
    }

    public static final int and(short r0, int r1) {
            r0 = r0 & r1
            return r0
    }

    public static final long and(int r2, long r3) {
            long r0 = (long) r2
            long r2 = r0 & r3
            return r2
    }

    public static final okhttp3.EventListener.Factory asFactory(okhttp3.EventListener r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            okhttp3.internal.-$$Lambda$Util$OvjneDlA_Jy5aDflPUCwJHwCMTY r0 = new okhttp3.internal.-$$Lambda$Util$OvjneDlA_Jy5aDflPUCwJHwCMTY
            r0.<init>(r1)
            return r0
    }

    private static final okhttp3.EventListener asFactory$lambda-8(okhttp3.EventListener r1, okhttp3.Call r2) {
            java.lang.String r0 = "$this_asFactory"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "it"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            return r1
    }

    public static final void assertThreadDoesntHoldLock(java.lang.Object r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            boolean r0 = okhttp3.internal.Util.assertionsEnabled
            if (r0 == 0) goto L37
            boolean r0 = java.lang.Thread.holdsLock(r3)
            if (r0 != 0) goto L10
            goto L37
        L10:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Thread "
            r1.append(r2)
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = " MUST NOT hold lock on "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L37:
            return
    }

    public static final void assertThreadHoldsLock(java.lang.Object r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            boolean r0 = okhttp3.internal.Util.assertionsEnabled
            if (r0 == 0) goto L37
            boolean r0 = java.lang.Thread.holdsLock(r3)
            if (r0 == 0) goto L10
            goto L37
        L10:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Thread "
            r1.append(r2)
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            java.lang.String r2 = r2.getName()
            r1.append(r2)
            java.lang.String r2 = " MUST hold lock on "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L37:
            return
    }

    public static final boolean canParseAsIpAddress(java.lang.String r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.text.Regex r0 = okhttp3.internal.Util.VERIFY_AS_IP_ADDRESS
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            boolean r1 = r0.matches(r1)
            return r1
    }

    public static final boolean canReuseConnectionFor(okhttp3.HttpUrl r2, okhttp3.HttpUrl r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = r2.host()
            java.lang.String r1 = r3.host()
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            if (r0 == 0) goto L32
            int r0 = r2.port()
            int r1 = r3.port()
            if (r0 != r1) goto L32
            java.lang.String r2 = r2.scheme()
            java.lang.String r3 = r3.scheme()
            boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r2, r3)
            if (r2 == 0) goto L32
            r2 = 1
            goto L33
        L32:
            r2 = 0
        L33:
            return r2
    }

    public static final int checkDuration(java.lang.String r7, long r8, java.util.concurrent.TimeUnit r10) {
            java.lang.String r0 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            r0 = 0
            int r2 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            r3 = 1
            r4 = 0
            if (r2 < 0) goto Lf
            r5 = r3
            goto L10
        Lf:
            r5 = r4
        L10:
            if (r5 == 0) goto L61
            if (r10 == 0) goto L16
            r5 = r3
            goto L17
        L16:
            r5 = r4
        L17:
            if (r5 == 0) goto L55
            long r8 = r10.toMillis(r8)
            r5 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r10 = (r8 > r5 ? 1 : (r8 == r5 ? 0 : -1))
            if (r10 > 0) goto L26
            r10 = r3
            goto L27
        L26:
            r10 = r4
        L27:
            if (r10 == 0) goto L45
            int r10 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r10 != 0) goto L31
            if (r2 > 0) goto L30
            goto L31
        L30:
            r3 = r4
        L31:
            if (r3 == 0) goto L35
            int r7 = (int) r8
            return r7
        L35:
            java.lang.String r8 = " too small."
            java.lang.String r7 = kotlin.jvm.internal.Intrinsics.stringPlus(r7, r8)
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r7 = r7.toString()
            r8.<init>(r7)
            throw r8
        L45:
            java.lang.String r8 = " too large."
            java.lang.String r7 = kotlin.jvm.internal.Intrinsics.stringPlus(r7, r8)
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r7 = r7.toString()
            r8.<init>(r7)
            throw r8
        L55:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.String r8 = "unit == null"
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
        L61:
            java.lang.String r8 = " < 0"
            java.lang.String r7 = kotlin.jvm.internal.Intrinsics.stringPlus(r7, r8)
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            java.lang.String r7 = r7.toString()
            r8.<init>(r7)
            throw r8
    }

    public static final void checkOffsetAndCount(long r4, long r6, long r8) {
            long r0 = r6 | r8
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L12
            int r0 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r0 > 0) goto L12
            long r4 = r4 - r6
            int r4 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r4 < 0) goto L12
            return
        L12:
            java.lang.ArrayIndexOutOfBoundsException r4 = new java.lang.ArrayIndexOutOfBoundsException
            r4.<init>()
            throw r4
    }

    public static final void closeQuietly(java.io.Closeable r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            r1.close()     // Catch: java.lang.Exception -> L8 java.lang.RuntimeException -> L9
        L8:
            return
        L9:
            r1 = move-exception
            throw r1
    }

    public static final void closeQuietly(java.net.ServerSocket r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            r1.close()     // Catch: java.lang.Exception -> L8 java.lang.RuntimeException -> L9
        L8:
            return
        L9:
            r1 = move-exception
            throw r1
    }

    public static final void closeQuietly(java.net.Socket r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r2.close()     // Catch: java.lang.Exception -> L8 java.lang.RuntimeException -> L9 java.lang.AssertionError -> L18
        L8:
            return
        L9:
            r2 = move-exception
            java.lang.String r0 = r2.getMessage()
            java.lang.String r1 = "bio == null"
            boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            if (r0 == 0) goto L17
            return
        L17:
            throw r2
        L18:
            r2 = move-exception
            throw r2
    }

    public static final java.lang.String[] concat(java.lang.String[] r1, java.lang.String r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "value"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            int r0 = r1.length
            int r0 = r0 + 1
            java.lang.Object[] r1 = java.util.Arrays.copyOf(r1, r0)
            java.lang.String r0 = "copyOf(this, newSize)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            java.lang.String[] r1 = (java.lang.String[]) r1
            int r0 = kotlin.collections.ArraysKt.getLastIndex(r1)
            r1[r0] = r2
            return r1
    }

    public static final int delimiterOffset(java.lang.String r2, char r3, int r4, int r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
        L5:
            if (r4 >= r5) goto L12
            int r0 = r4 + 1
            char r1 = r2.charAt(r4)
            if (r1 != r3) goto L10
            return r4
        L10:
            r4 = r0
            goto L5
        L12:
            return r5
    }

    public static final int delimiterOffset(java.lang.String r6, java.lang.String r7, int r8, int r9) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            java.lang.String r0 = "delimiters"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
        La:
            if (r8 >= r9) goto L21
            int r0 = r8 + 1
            r1 = r7
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            char r2 = r6.charAt(r8)
            r3 = 0
            r4 = 2
            r5 = 0
            boolean r1 = kotlin.text.StringsKt.contains$default(r1, r2, r3, r4, r5)
            if (r1 == 0) goto L1f
            return r8
        L1f:
            r8 = r0
            goto La
        L21:
            return r9
    }

    public static int delimiterOffset$default(java.lang.String r0, char r1, int r2, int r3, int r4, java.lang.Object r5) {
            r5 = r4 & 2
            if (r5 == 0) goto L5
            r2 = 0
        L5:
            r4 = r4 & 4
            if (r4 == 0) goto Ld
            int r3 = r0.length()
        Ld:
            int r0 = delimiterOffset(r0, r1, r2, r3)
            return r0
    }

    public static int delimiterOffset$default(java.lang.String r0, java.lang.String r1, int r2, int r3, int r4, java.lang.Object r5) {
            r5 = r4 & 2
            if (r5 == 0) goto L5
            r2 = 0
        L5:
            r4 = r4 & 4
            if (r4 == 0) goto Ld
            int r3 = r0.length()
        Ld:
            int r0 = delimiterOffset(r0, r1, r2, r3)
            return r0
    }

    public static final boolean discard(okio.Source r1, int r2, java.util.concurrent.TimeUnit r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "timeUnit"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            boolean r1 = skipAll(r1, r2, r3)     // Catch: java.io.IOException -> Lf
            goto L10
        Lf:
            r1 = 0
        L10:
            return r1
    }

    public static final <T> java.util.List<T> filterList(java.lang.Iterable<? extends T> r3, kotlin.jvm.functions.Function1<? super T, java.lang.Boolean> r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "predicate"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.util.List r0 = kotlin.collections.CollectionsKt.emptyList()
            java.util.Iterator r3 = r3.iterator()
        L12:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L3d
            java.lang.Object r1 = r3.next()
            java.lang.Object r2 = r4.invoke(r1)
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            boolean r2 = r2.booleanValue()
            if (r2 == 0) goto L12
            boolean r2 = r0.isEmpty()
            if (r2 == 0) goto L35
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = (java.util.List) r0
        L35:
            java.util.List r2 = kotlin.jvm.internal.TypeIntrinsics.asMutableList(r0)
            r2.add(r1)
            goto L12
        L3d:
            return r0
    }

    public static final java.lang.String format(java.lang.String r2, java.lang.Object... r3) {
            java.lang.String r0 = "format"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "args"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            kotlin.jvm.internal.StringCompanionObject r0 = kotlin.jvm.internal.StringCompanionObject.INSTANCE
            java.util.Locale r0 = java.util.Locale.US
            int r1 = r3.length
            java.lang.Object[] r3 = java.util.Arrays.copyOf(r3, r1)
            int r1 = r3.length
            java.lang.Object[] r3 = java.util.Arrays.copyOf(r3, r1)
            java.lang.String r2 = java.lang.String.format(r0, r2, r3)
            java.lang.String r3 = "format(locale, format, *args)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)
            return r2
    }

    public static final boolean hasIntersection(java.lang.String[] r7, java.lang.String[] r8, java.util.Comparator<? super java.lang.String> r9) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            java.lang.String r0 = "comparator"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            int r0 = r7.length
            r1 = 1
            r2 = 0
            if (r0 != 0) goto L11
            r0 = r1
            goto L12
        L11:
            r0 = r2
        L12:
            if (r0 != 0) goto L3e
            if (r8 == 0) goto L3e
            int r0 = r8.length
            if (r0 != 0) goto L1b
            r0 = r1
            goto L1c
        L1b:
            r0 = r2
        L1c:
            if (r0 == 0) goto L1f
            goto L3e
        L1f:
            int r0 = r7.length
            r3 = r2
        L21:
            if (r3 >= r0) goto L3e
            r4 = r7[r3]
            int r3 = r3 + 1
            java.util.Iterator r5 = kotlin.jvm.internal.ArrayIteratorKt.iterator(r8)
        L2b:
            boolean r6 = r5.hasNext()
            if (r6 == 0) goto L21
            java.lang.Object r6 = r5.next()
            java.lang.String r6 = (java.lang.String) r6
            int r6 = r9.compare(r4, r6)
            if (r6 != 0) goto L2b
            return r1
        L3e:
            return r2
    }

    public static final long headersContentLength(okhttp3.Response r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okhttp3.Headers r2 = r2.headers()
            java.lang.String r0 = "Content-Length"
            java.lang.String r2 = r2.get(r0)
            r0 = -1
            if (r2 != 0) goto L14
            goto L18
        L14:
            long r0 = toLongOrDefault(r2, r0)
        L18:
            return r0
    }

    public static final void ignoreIoExceptions(kotlin.jvm.functions.Function0<kotlin.Unit> r1) {
            java.lang.String r0 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            r1.invoke()     // Catch: java.io.IOException -> L8
        L8:
            return
    }

    @java.lang.SafeVarargs
    public static final <T> java.util.List<T> immutableListOf(T... r1) {
            java.lang.String r0 = "elements"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Object r1 = r1.clone()
            java.lang.Object[] r1 = (java.lang.Object[]) r1
            int r0 = r1.length
            java.lang.Object[] r1 = java.util.Arrays.copyOf(r1, r0)
            java.util.List r1 = kotlin.collections.CollectionsKt.listOf(r1)
            java.util.List r1 = java.util.Collections.unmodifiableList(r1)
            java.lang.String r0 = "unmodifiableList(listOf(*elements.clone()))"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            return r1
    }

    public static final int indexOf(java.lang.String[] r4, java.lang.String r5, java.util.Comparator<java.lang.String> r6) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "value"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = "comparator"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            int r0 = r4.length
            r1 = 0
            r2 = r1
        L12:
            if (r2 >= r0) goto L25
            r3 = r4[r2]
            int r3 = r6.compare(r3, r5)
            if (r3 != 0) goto L1e
            r3 = 1
            goto L1f
        L1e:
            r3 = r1
        L1f:
            if (r3 == 0) goto L22
            goto L26
        L22:
            int r2 = r2 + 1
            goto L12
        L25:
            r2 = -1
        L26:
            return r2
    }

    public static final int indexOfControlOrNonAscii(java.lang.String r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            int r0 = r5.length()
            r1 = 0
        La:
            if (r1 >= r0) goto L26
            int r2 = r1 + 1
            char r3 = r5.charAt(r1)
            r4 = 31
            int r4 = kotlin.jvm.internal.Intrinsics.compare(r3, r4)
            if (r4 <= 0) goto L25
            r4 = 127(0x7f, float:1.78E-43)
            int r3 = kotlin.jvm.internal.Intrinsics.compare(r3, r4)
            if (r3 < 0) goto L23
            goto L25
        L23:
            r1 = r2
            goto La
        L25:
            return r1
        L26:
            r5 = -1
            return r5
    }

    public static final int indexOfFirstNonAsciiWhitespace(java.lang.String r5, int r6, int r7) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
        L5:
            if (r6 >= r7) goto L3d
            int r0 = r6 + 1
            char r1 = r5.charAt(r6)
            r2 = 9
            r3 = 0
            r4 = 1
            if (r1 != r2) goto L15
        L13:
            r2 = r4
            goto L1b
        L15:
            r2 = 10
            if (r1 != r2) goto L1a
            goto L13
        L1a:
            r2 = r3
        L1b:
            if (r2 == 0) goto L1f
        L1d:
            r2 = r4
            goto L25
        L1f:
            r2 = 12
            if (r1 != r2) goto L24
            goto L1d
        L24:
            r2 = r3
        L25:
            if (r2 == 0) goto L29
        L27:
            r2 = r4
            goto L2f
        L29:
            r2 = 13
            if (r1 != r2) goto L2e
            goto L27
        L2e:
            r2 = r3
        L2f:
            if (r2 == 0) goto L33
        L31:
            r3 = r4
            goto L38
        L33:
            r2 = 32
            if (r1 != r2) goto L38
            goto L31
        L38:
            if (r3 == 0) goto L3c
            r6 = r0
            goto L5
        L3c:
            return r6
        L3d:
            return r7
    }

    public static int indexOfFirstNonAsciiWhitespace$default(java.lang.String r0, int r1, int r2, int r3, java.lang.Object r4) {
            r4 = r3 & 1
            if (r4 == 0) goto L5
            r1 = 0
        L5:
            r3 = r3 & 2
            if (r3 == 0) goto Ld
            int r2 = r0.length()
        Ld:
            int r0 = indexOfFirstNonAsciiWhitespace(r0, r1, r2)
            return r0
    }

    public static final int indexOfLastNonAsciiWhitespace(java.lang.String r5, int r6, int r7) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = 1
            int r7 = r7 - r0
            if (r6 > r7) goto L42
        L9:
            int r1 = r7 + (-1)
            char r2 = r5.charAt(r7)
            r3 = 9
            r4 = 0
            if (r2 != r3) goto L16
        L14:
            r3 = r0
            goto L1c
        L16:
            r3 = 10
            if (r2 != r3) goto L1b
            goto L14
        L1b:
            r3 = r4
        L1c:
            if (r3 == 0) goto L20
        L1e:
            r3 = r0
            goto L26
        L20:
            r3 = 12
            if (r2 != r3) goto L25
            goto L1e
        L25:
            r3 = r4
        L26:
            if (r3 == 0) goto L2a
        L28:
            r3 = r0
            goto L30
        L2a:
            r3 = 13
            if (r2 != r3) goto L2f
            goto L28
        L2f:
            r3 = r4
        L30:
            if (r3 == 0) goto L34
        L32:
            r4 = r0
            goto L39
        L34:
            r3 = 32
            if (r2 != r3) goto L39
            goto L32
        L39:
            if (r4 == 0) goto L40
            if (r7 != r6) goto L3e
            goto L42
        L3e:
            r7 = r1
            goto L9
        L40:
            int r7 = r7 + r0
            return r7
        L42:
            return r6
    }

    public static int indexOfLastNonAsciiWhitespace$default(java.lang.String r0, int r1, int r2, int r3, java.lang.Object r4) {
            r4 = r3 & 1
            if (r4 == 0) goto L5
            r1 = 0
        L5:
            r3 = r3 & 2
            if (r3 == 0) goto Ld
            int r2 = r0.length()
        Ld:
            int r0 = indexOfLastNonAsciiWhitespace(r0, r1, r2)
            return r0
    }

    public static final int indexOfNonWhitespace(java.lang.String r4, int r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = r4.length()
        L9:
            if (r5 >= r0) goto L1c
            int r1 = r5 + 1
            char r2 = r4.charAt(r5)
            r3 = 32
            if (r2 == r3) goto L1a
            r3 = 9
            if (r2 == r3) goto L1a
            return r5
        L1a:
            r5 = r1
            goto L9
        L1c:
            int r4 = r4.length()
            return r4
    }

    public static int indexOfNonWhitespace$default(java.lang.String r0, int r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L5
            r1 = 0
        L5:
            int r0 = indexOfNonWhitespace(r0, r1)
            return r0
    }

    public static final java.lang.String[] intersect(java.lang.String[] r8, java.lang.String[] r9, java.util.Comparator<? super java.lang.String> r10) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            java.lang.String r0 = "comparator"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = (java.util.List) r0
            int r1 = r8.length
            r2 = 0
            r3 = r2
        L19:
            if (r3 >= r1) goto L31
            r4 = r8[r3]
            int r3 = r3 + 1
            int r5 = r9.length
            r6 = r2
        L21:
            if (r6 >= r5) goto L19
            r7 = r9[r6]
            int r6 = r6 + 1
            int r7 = r10.compare(r4, r7)
            if (r7 != 0) goto L21
            r0.add(r4)
            goto L19
        L31:
            java.util.Collection r0 = (java.util.Collection) r0
            java.lang.String[] r8 = new java.lang.String[r2]
            java.lang.Object[] r8 = r0.toArray(r8)
            if (r8 == 0) goto L3e
            java.lang.String[] r8 = (java.lang.String[]) r8
            return r8
        L3e:
            java.lang.NullPointerException r8 = new java.lang.NullPointerException
            java.lang.String r9 = "null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>"
            r8.<init>(r9)
            throw r8
    }

    public static final boolean isCivilized(okhttp3.internal.io.FileSystem r3, java.io.File r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "file"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            okio.Sink r0 = r3.sink(r4)
            java.io.Closeable r0 = (java.io.Closeable) r0
            r1 = r0
            okio.Sink r1 = (okio.Sink) r1     // Catch: java.lang.Throwable -> L26
            r1 = 0
            r3.delete(r4)     // Catch: java.io.IOException -> L1c java.lang.Throwable -> L26
            r3 = 1
            kotlin.io.CloseableKt.closeFinally(r0, r1)
            return r3
        L1c:
            kotlin.Unit r2 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L26
            kotlin.io.CloseableKt.closeFinally(r0, r1)
            r3.delete(r4)
            r3 = 0
            return r3
        L26:
            r3 = move-exception
            throw r3     // Catch: java.lang.Throwable -> L28
        L28:
            r4 = move-exception
            kotlin.io.CloseableKt.closeFinally(r0, r3)
            throw r4
    }

    public static final boolean isHealthy(java.net.Socket r2, okio.BufferedSource r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r0 = 1
            int r1 = r2.getSoTimeout()     // Catch: java.io.IOException -> L21 java.net.SocketTimeoutException -> L22
            r2.setSoTimeout(r0)     // Catch: java.lang.Throwable -> L1c
            boolean r3 = r3.exhausted()     // Catch: java.lang.Throwable -> L1c
            r3 = r3 ^ r0
            r2.setSoTimeout(r1)     // Catch: java.io.IOException -> L21 java.net.SocketTimeoutException -> L22
            r0 = r3
            goto L22
        L1c:
            r3 = move-exception
            r2.setSoTimeout(r1)     // Catch: java.io.IOException -> L21 java.net.SocketTimeoutException -> L22
            throw r3     // Catch: java.io.IOException -> L21 java.net.SocketTimeoutException -> L22
        L21:
            r0 = 0
        L22:
            return r0
    }

    public static final boolean isSensitiveHeader(java.lang.String r2) {
            java.lang.String r0 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 1
            java.lang.String r1 = "Authorization"
            boolean r1 = kotlin.text.StringsKt.equals(r2, r1, r0)
            if (r1 != 0) goto L28
            java.lang.String r1 = "Cookie"
            boolean r1 = kotlin.text.StringsKt.equals(r2, r1, r0)
            if (r1 != 0) goto L28
            java.lang.String r1 = "Proxy-Authorization"
            boolean r1 = kotlin.text.StringsKt.equals(r2, r1, r0)
            if (r1 != 0) goto L28
            java.lang.String r1 = "Set-Cookie"
            boolean r2 = kotlin.text.StringsKt.equals(r2, r1, r0)
            if (r2 == 0) goto L27
            goto L28
        L27:
            r0 = 0
        L28:
            return r0
    }

    public static java.lang.Thread lambda$HCtG-IMz5G4h-r4fydmtsti2nbM(java.lang.String r0, boolean r1, java.lang.Runnable r2) {
            java.lang.Thread r0 = threadFactory$lambda-1(r0, r1, r2)
            return r0
    }

    public static okhttp3.EventListener lambda$OvjneDlA_Jy5aDflPUCwJHwCMTY(okhttp3.EventListener r0, okhttp3.Call r1) {
            okhttp3.EventListener r0 = asFactory$lambda-8(r0, r1)
            return r0
    }

    public static final void notify(java.lang.Object r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            r1.notify()
            return
    }

    public static final void notifyAll(java.lang.Object r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            r1.notifyAll()
            return
    }

    public static final int parseHexDigit(char r4) {
            r0 = 48
            r1 = 1
            r2 = 0
            if (r0 > r4) goto Lc
            r3 = 58
            if (r4 >= r3) goto Lc
            r3 = r1
            goto Ld
        Lc:
            r3 = r2
        Ld:
            if (r3 == 0) goto L11
            int r4 = r4 - r0
            goto L30
        L11:
            r0 = 97
            if (r0 > r4) goto L1b
            r3 = 103(0x67, float:1.44E-43)
            if (r4 >= r3) goto L1b
            r3 = r1
            goto L1c
        L1b:
            r3 = r2
        L1c:
            if (r3 == 0) goto L22
        L1e:
            int r4 = r4 - r0
            int r4 = r4 + 10
            goto L30
        L22:
            r0 = 65
            if (r0 > r4) goto L2b
            r3 = 71
            if (r4 >= r3) goto L2b
            goto L2c
        L2b:
            r1 = r2
        L2c:
            if (r1 == 0) goto L2f
            goto L1e
        L2f:
            r4 = -1
        L30:
            return r4
    }

    public static final java.lang.String peerName(java.net.Socket r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.net.SocketAddress r1 = r1.getRemoteSocketAddress()
            boolean r0 = r1 instanceof java.net.InetSocketAddress
            if (r0 == 0) goto L19
            java.net.InetSocketAddress r1 = (java.net.InetSocketAddress) r1
            java.lang.String r1 = r1.getHostName()
            java.lang.String r0 = "address.hostName"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            goto L1d
        L19:
            java.lang.String r1 = r1.toString()
        L1d:
            return r1
    }

    public static final java.nio.charset.Charset readBomAsCharset(okio.BufferedSource r1, java.nio.charset.Charset r2) throws java.io.IOException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "default"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.Options r0 = okhttp3.internal.Util.UNICODE_BOMS
            int r1 = r1.select(r0)
            r0 = -1
            if (r1 == r0) goto L4c
            if (r1 == 0) goto L45
            r2 = 1
            if (r1 == r2) goto L3d
            r2 = 2
            if (r1 == r2) goto L35
            r2 = 3
            if (r1 == r2) goto L2e
            r2 = 4
            if (r1 != r2) goto L28
            kotlin.text.Charsets r1 = kotlin.text.Charsets.INSTANCE
            java.nio.charset.Charset r2 = r1.UTF32_LE()
            goto L4c
        L28:
            java.lang.AssertionError r1 = new java.lang.AssertionError
            r1.<init>()
            throw r1
        L2e:
            kotlin.text.Charsets r1 = kotlin.text.Charsets.INSTANCE
            java.nio.charset.Charset r2 = r1.UTF32_BE()
            goto L4c
        L35:
            java.nio.charset.Charset r2 = java.nio.charset.StandardCharsets.UTF_16LE
            java.lang.String r1 = "UTF_16LE"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r1)
            goto L4c
        L3d:
            java.nio.charset.Charset r2 = java.nio.charset.StandardCharsets.UTF_16BE
            java.lang.String r1 = "UTF_16BE"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r1)
            goto L4c
        L45:
            java.nio.charset.Charset r2 = java.nio.charset.StandardCharsets.UTF_8
            java.lang.String r1 = "UTF_8"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r1)
        L4c:
            return r2
    }

    public static final <T> T readFieldOrNull(java.lang.Object r4, java.lang.Class<T> r5, java.lang.String r6) {
            java.lang.String r0 = "instance"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "fieldType"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = "fieldName"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            java.lang.Class r0 = r4.getClass()
        L13:
            java.lang.Class<java.lang.Object> r1 = java.lang.Object.class
            boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r1)
            r2 = 0
            if (r1 != 0) goto L3e
            java.lang.reflect.Field r1 = r0.getDeclaredField(r6)     // Catch: java.lang.NoSuchFieldException -> L34
            r3 = 1
            r1.setAccessible(r3)     // Catch: java.lang.NoSuchFieldException -> L34
            java.lang.Object r1 = r1.get(r4)     // Catch: java.lang.NoSuchFieldException -> L34
            boolean r3 = r5.isInstance(r1)     // Catch: java.lang.NoSuchFieldException -> L34
            if (r3 != 0) goto L2f
            goto L33
        L2f:
            java.lang.Object r2 = r5.cast(r1)     // Catch: java.lang.NoSuchFieldException -> L34
        L33:
            return r2
        L34:
            java.lang.Class r0 = r0.getSuperclass()
            java.lang.String r1 = "c.superclass"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            goto L13
        L3e:
            java.lang.String r0 = "delegate"
            boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r6, r0)
            if (r1 != 0) goto L53
            java.lang.Class<java.lang.Object> r1 = java.lang.Object.class
            java.lang.Object r4 = readFieldOrNull(r4, r1, r0)
            if (r4 == 0) goto L53
            java.lang.Object r4 = readFieldOrNull(r4, r5, r6)
            return r4
        L53:
            return r2
    }

    public static final int readMedium(okio.BufferedSource r3) throws java.io.IOException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            byte r0 = r3.readByte()
            r1 = 255(0xff, float:3.57E-43)
            int r0 = and(r0, r1)
            int r0 = r0 << 16
            byte r2 = r3.readByte()
            int r2 = and(r2, r1)
            int r2 = r2 << 8
            r0 = r0 | r2
            byte r3 = r3.readByte()
            int r3 = and(r3, r1)
            r3 = r3 | r0
            return r3
    }

    public static final int skipAll(okio.Buffer r3, byte r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r0 = 0
        L6:
            boolean r1 = r3.exhausted()
            if (r1 != 0) goto L1a
            r1 = 0
            byte r1 = r3.getByte(r1)
            if (r1 != r4) goto L1a
            int r0 = r0 + 1
            r3.readByte()
            goto L6
        L1a:
            return r0
    }

    public static final boolean skipAll(okio.Source r11, int r12, java.util.concurrent.TimeUnit r13) throws java.io.IOException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            java.lang.String r0 = "timeUnit"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r13, r0)
            long r0 = java.lang.System.nanoTime()
            okio.Timeout r2 = r11.timeout()
            boolean r2 = r2.hasDeadline()
            r3 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            if (r2 == 0) goto L27
            okio.Timeout r2 = r11.timeout()
            long r5 = r2.deadlineNanoTime()
            long r5 = r5 - r0
            goto L28
        L27:
            r5 = r3
        L28:
            okio.Timeout r2 = r11.timeout()
            long r7 = (long) r12
            long r12 = r13.toNanos(r7)
            long r12 = java.lang.Math.min(r5, r12)
            long r12 = r12 + r0
            r2.deadlineNanoTime(r12)
            okio.Buffer r12 = new okio.Buffer     // Catch: java.lang.Throwable -> L64 java.io.InterruptedIOException -> L7a
            r12.<init>()     // Catch: java.lang.Throwable -> L64 java.io.InterruptedIOException -> L7a
        L3e:
            r7 = 8192(0x2000, double:4.0474E-320)
            long r7 = r11.read(r12, r7)     // Catch: java.lang.Throwable -> L64 java.io.InterruptedIOException -> L7a
            r9 = -1
            int r13 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r13 == 0) goto L4e
            r12.clear()     // Catch: java.lang.Throwable -> L64 java.io.InterruptedIOException -> L7a
            goto L3e
        L4e:
            r12 = 1
            int r13 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r13 != 0) goto L5b
        L53:
            okio.Timeout r11 = r11.timeout()
            r11.clearDeadline()
            goto L80
        L5b:
            okio.Timeout r11 = r11.timeout()
            long r0 = r0 + r5
            r11.deadlineNanoTime(r0)
            goto L80
        L64:
            r12 = move-exception
            int r13 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r13 != 0) goto L71
            okio.Timeout r11 = r11.timeout()
            r11.clearDeadline()
            goto L79
        L71:
            okio.Timeout r11 = r11.timeout()
            long r0 = r0 + r5
            r11.deadlineNanoTime(r0)
        L79:
            throw r12
        L7a:
            r12 = 0
            int r13 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r13 != 0) goto L5b
            goto L53
        L80:
            return r12
    }

    public static final java.util.concurrent.ThreadFactory threadFactory(java.lang.String r1, boolean r2) {
            java.lang.String r0 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            okhttp3.internal.-$$Lambda$Util$HCtG-IMz5G4h-r4fydmtsti2nbM r0 = new okhttp3.internal.-$$Lambda$Util$HCtG-IMz5G4h-r4fydmtsti2nbM
            r0.<init>(r1, r2)
            return r0
    }

    private static final java.lang.Thread threadFactory$lambda-1(java.lang.String r1, boolean r2, java.lang.Runnable r3) {
            java.lang.String r0 = "$name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.Thread r0 = new java.lang.Thread
            r0.<init>(r3, r1)
            r0.setDaemon(r2)
            return r0
    }

    public static final void threadName(java.lang.String r2, kotlin.jvm.functions.Function0<kotlin.Unit> r3) {
            java.lang.String r0 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            java.lang.String r1 = r0.getName()
            r0.setName(r2)
            r2 = 1
            r3.invoke()     // Catch: java.lang.Throwable -> L23
            kotlin.jvm.internal.InlineMarker.finallyStart(r2)
            r0.setName(r1)
            kotlin.jvm.internal.InlineMarker.finallyEnd(r2)
            return
        L23:
            r3 = move-exception
            kotlin.jvm.internal.InlineMarker.finallyStart(r2)
            r0.setName(r1)
            kotlin.jvm.internal.InlineMarker.finallyEnd(r2)
            throw r3
    }

    public static final java.util.List<okhttp3.internal.http2.Header> toHeaderList(okhttp3.Headers r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            int r0 = r5.size()
            r1 = 0
            kotlin.ranges.IntRange r0 = kotlin.ranges.RangesKt.until(r1, r0)
            java.lang.Iterable r0 = (java.lang.Iterable) r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r2 = 10
            int r2 = kotlin.collections.CollectionsKt.collectionSizeOrDefault(r0, r2)
            r1.<init>(r2)
            java.util.Collection r1 = (java.util.Collection) r1
            java.util.Iterator r0 = r0.iterator()
        L21:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L3f
            r2 = r0
            kotlin.collections.IntIterator r2 = (kotlin.collections.IntIterator) r2
            int r2 = r2.nextInt()
            okhttp3.internal.http2.Header r3 = new okhttp3.internal.http2.Header
            java.lang.String r4 = r5.name(r2)
            java.lang.String r2 = r5.value(r2)
            r3.<init>(r4, r2)
            r1.add(r3)
            goto L21
        L3f:
            java.util.List r1 = (java.util.List) r1
            return r1
    }

    public static final okhttp3.Headers toHeaders(java.util.List<okhttp3.internal.http2.Header> r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okhttp3.Headers$Builder r0 = new okhttp3.Headers$Builder
            r0.<init>()
            java.util.Iterator r3 = r3.iterator()
        Le:
            boolean r1 = r3.hasNext()
            if (r1 == 0) goto L2e
            java.lang.Object r1 = r3.next()
            okhttp3.internal.http2.Header r1 = (okhttp3.internal.http2.Header) r1
            okio.ByteString r2 = r1.component1()
            okio.ByteString r1 = r1.component2()
            java.lang.String r2 = r2.utf8()
            java.lang.String r1 = r1.utf8()
            r0.addLenient$okhttp(r2, r1)
            goto Le
        L2e:
            okhttp3.Headers r3 = r0.build()
            return r3
    }

    public static final java.lang.String toHexString(int r1) {
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            java.lang.String r0 = "toHexString(this)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            return r1
    }

    public static final java.lang.String toHexString(long r0) {
            java.lang.String r0 = java.lang.Long.toHexString(r0)
            java.lang.String r1 = "toHexString(this)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    public static final java.lang.String toHostHeader(okhttp3.HttpUrl r5, boolean r6) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = r5.host()
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            java.lang.String r1 = ":"
            java.lang.CharSequence r1 = (java.lang.CharSequence) r1
            r2 = 0
            r3 = 2
            r4 = 0
            boolean r0 = kotlin.text.StringsKt.contains$default(r0, r1, r2, r3, r4)
            if (r0 == 0) goto L33
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 91
            r0.append(r1)
            java.lang.String r1 = r5.host()
            r0.append(r1)
            r1 = 93
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            goto L37
        L33:
            java.lang.String r0 = r5.host()
        L37:
            if (r6 != 0) goto L49
            int r6 = r5.port()
            okhttp3.HttpUrl$Companion r1 = okhttp3.HttpUrl.Companion
            java.lang.String r2 = r5.scheme()
            int r1 = r1.defaultPort(r2)
            if (r6 == r1) goto L61
        L49:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r0)
            r0 = 58
            r6.append(r0)
            int r5 = r5.port()
            r6.append(r5)
            java.lang.String r0 = r6.toString()
        L61:
            return r0
    }

    public static java.lang.String toHostHeader$default(okhttp3.HttpUrl r0, boolean r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L5
            r1 = 0
        L5:
            java.lang.String r0 = toHostHeader(r0, r1)
            return r0
    }

    public static final <T> java.util.List<T> toImmutableList(java.util.List<? extends T> r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.util.Collection r1 = (java.util.Collection) r1
            java.util.List r1 = kotlin.collections.CollectionsKt.toMutableList(r1)
            java.util.List r1 = java.util.Collections.unmodifiableList(r1)
            java.lang.String r0 = "unmodifiableList(toMutableList())"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            return r1
    }

    public static final <K, V> java.util.Map<K, V> toImmutableMap(java.util.Map<K, ? extends V> r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r0 = r1.isEmpty()
            if (r0 == 0) goto L10
            java.util.Map r1 = kotlin.collections.MapsKt.emptyMap()
            goto L20
        L10:
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>(r1)
            java.util.Map r0 = (java.util.Map) r0
            java.util.Map r1 = java.util.Collections.unmodifiableMap(r0)
            java.lang.String r0 = "{\n    Collections.unmodi…(LinkedHashMap(this))\n  }"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
        L20:
            return r1
    }

    public static final long toLongOrDefault(java.lang.String r1, long r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            long r2 = java.lang.Long.parseLong(r1)     // Catch: java.lang.NumberFormatException -> L9
        L9:
            return r2
    }

    public static final int toNonNegativeInt(java.lang.String r2, int r3) {
            if (r2 != 0) goto L4
            r2 = 0
            goto Lc
        L4:
            long r0 = java.lang.Long.parseLong(r2)     // Catch: java.lang.NumberFormatException -> L28
            java.lang.Long r2 = java.lang.Long.valueOf(r0)     // Catch: java.lang.NumberFormatException -> L28
        Lc:
            if (r2 != 0) goto Lf
            return r3
        Lf:
            long r2 = r2.longValue()     // Catch: java.lang.NumberFormatException -> L28
            r0 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 <= 0) goto L1e
            r2 = 2147483647(0x7fffffff, float:NaN)
            goto L27
        L1e:
            r0 = 0
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 >= 0) goto L26
            r2 = 0
            goto L27
        L26:
            int r2 = (int) r2
        L27:
            return r2
        L28:
            return r3
    }

    public static final java.lang.String trimSubstring(java.lang.String r1, int r2, int r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            int r2 = indexOfFirstNonAsciiWhitespace(r1, r2, r3)
            int r3 = indexOfLastNonAsciiWhitespace(r1, r2, r3)
            java.lang.String r1 = r1.substring(r2, r3)
            java.lang.String r2 = "this as java.lang.String…ing(startIndex, endIndex)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    public static java.lang.String trimSubstring$default(java.lang.String r0, int r1, int r2, int r3, java.lang.Object r4) {
            r4 = r3 & 1
            if (r4 == 0) goto L5
            r1 = 0
        L5:
            r3 = r3 & 2
            if (r3 == 0) goto Ld
            int r2 = r0.length()
        Ld:
            java.lang.String r0 = trimSubstring(r0, r1, r2)
            return r0
    }

    public static final void wait(java.lang.Object r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            r1.wait()
            return
    }

    public static final java.lang.Throwable withSuppressed(java.lang.Exception r2, java.util.List<? extends java.lang.Exception> r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "suppressed"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            int r0 = r3.size()
            r1 = 1
            if (r0 <= r1) goto L16
            java.io.PrintStream r0 = java.lang.System.out
            r0.println(r3)
        L16:
            java.util.Iterator r3 = r3.iterator()
        L1a:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L2f
            java.lang.Object r0 = r3.next()
            java.lang.Exception r0 = (java.lang.Exception) r0
            r1 = r2
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            java.lang.Throwable r0 = (java.lang.Throwable) r0
            kotlin.ExceptionsKt.addSuppressed(r1, r0)
            goto L1a
        L2f:
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            return r2
    }

    public static final void writeMedium(okio.BufferedSink r1, int r2) throws java.io.IOException {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            int r0 = r2 >>> 16
            r0 = r0 & 255(0xff, float:3.57E-43)
            r1.writeByte(r0)
            int r0 = r2 >>> 8
            r0 = r0 & 255(0xff, float:3.57E-43)
            r1.writeByte(r0)
            r2 = r2 & 255(0xff, float:3.57E-43)
            r1.writeByte(r2)
            return
    }
}
