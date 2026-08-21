package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public class DefaultHttpDataSource implements com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource {
    private static final java.util.regex.Pattern CONTENT_RANGE_HEADER = null;
    public static final int DEFAULT_CONNECT_TIMEOUT_MILLIS = 8000;
    public static final int DEFAULT_READ_TIMEOUT_MILLIS = 8000;
    private static final long MAX_BYTES_TO_DRAIN = 2048;
    private static final int MAX_REDIRECTS = 20;
    private static final java.lang.String TAG = "DefaultHttpDataSource";
    private static final java.util.concurrent.atomic.AtomicReference<byte[]> skipBufferReference = null;
    private final boolean allowCrossProtocolRedirects;
    private long bytesRead;
    private long bytesSkipped;
    private long bytesToRead;
    private long bytesToSkip;
    private final int connectTimeoutMillis;
    private java.net.HttpURLConnection connection;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.Predicate<java.lang.String> contentTypePredicate;
    private com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec dataSpec;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.RequestProperties defaultRequestProperties;
    private java.io.InputStream inputStream;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource> listener;
    private boolean opened;
    private final int readTimeoutMillis;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.RequestProperties requestProperties;
    private final java.lang.String userAgent;

    static {
            java.lang.String r0 = "^bytes (\\d+)-(\\d+)/(\\d+)$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource.CONTENT_RANGE_HEADER = r0
            java.util.concurrent.atomic.AtomicReference r0 = new java.util.concurrent.atomic.AtomicReference
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource.skipBufferReference = r0
            return
    }

    public DefaultHttpDataSource(java.lang.String r2, com.mbridge.msdk.playercommon.exoplayer2.util.Predicate<java.lang.String> r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public DefaultHttpDataSource(java.lang.String r7, com.mbridge.msdk.playercommon.exoplayer2.util.Predicate<java.lang.String> r8, com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource> r9) {
            r6 = this;
            r4 = 8000(0x1f40, float:1.121E-41)
            r5 = 8000(0x1f40, float:1.121E-41)
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public DefaultHttpDataSource(java.lang.String r9, com.mbridge.msdk.playercommon.exoplayer2.util.Predicate<java.lang.String> r10, com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource> r11, int r12, int r13) {
            r8 = this;
            r6 = 0
            r7 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public DefaultHttpDataSource(java.lang.String r1, com.mbridge.msdk.playercommon.exoplayer2.util.Predicate<java.lang.String> r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource> r3, int r4, int r5, boolean r6, com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.RequestProperties r7) {
            r0 = this;
            r0.<init>()
            java.lang.String r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotEmpty(r1)
            r0.userAgent = r1
            r0.contentTypePredicate = r2
            r0.listener = r3
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$RequestProperties r1 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$RequestProperties
            r1.<init>()
            r0.requestProperties = r1
            r0.connectTimeoutMillis = r4
            r0.readTimeoutMillis = r5
            r0.allowCrossProtocolRedirects = r6
            r0.defaultRequestProperties = r7
            return
    }

    private void closeConnectionQuietly() {
            r3 = this;
            java.net.HttpURLConnection r0 = r3.connection
            if (r0 == 0) goto L13
            r0.disconnect()     // Catch: java.lang.Exception -> L8
            goto L10
        L8:
            r0 = move-exception
            java.lang.String r1 = "DefaultHttpDataSource"
            java.lang.String r2 = "Unexpected error while disconnecting"
            android.util.Log.e(r1, r2, r0)
        L10:
            r0 = 0
            r3.connection = r0
        L13:
            return
    }

    private static long getContentLength(java.net.HttpURLConnection r10) {
            java.lang.String r0 = "Content-Length"
            java.lang.String r0 = r10.getHeaderField(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "]"
            java.lang.String r3 = "DefaultHttpDataSource"
            if (r1 != 0) goto L2c
            long r4 = java.lang.Long.parseLong(r0)     // Catch: java.lang.NumberFormatException -> L15
            goto L2e
        L15:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r4 = "Unexpected Content-Length ["
            r1.append(r4)
            r1.append(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.util.Log.e(r3, r1)
        L2c:
            r4 = -1
        L2e:
            java.lang.String r1 = "Content-Range"
            java.lang.String r10 = r10.getHeaderField(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r10)
            if (r1 != 0) goto La4
            java.util.regex.Pattern r1 = com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource.CONTENT_RANGE_HEADER
            java.util.regex.Matcher r1 = r1.matcher(r10)
            boolean r6 = r1.find()
            if (r6 == 0) goto La4
            r6 = 2
            java.lang.String r6 = r1.group(r6)     // Catch: java.lang.NumberFormatException -> L8d
            long r6 = java.lang.Long.parseLong(r6)     // Catch: java.lang.NumberFormatException -> L8d
            r8 = 1
            java.lang.String r1 = r1.group(r8)     // Catch: java.lang.NumberFormatException -> L8d
            long r8 = java.lang.Long.parseLong(r1)     // Catch: java.lang.NumberFormatException -> L8d
            long r6 = r6 - r8
            r8 = 1
            long r6 = r6 + r8
            r8 = 0
            int r1 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r1 >= 0) goto L64
            r4 = r6
            goto La4
        L64:
            int r1 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r1 == 0) goto La4
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.NumberFormatException -> L8d
            r1.<init>()     // Catch: java.lang.NumberFormatException -> L8d
            java.lang.String r8 = "Inconsistent headers ["
            r1.append(r8)     // Catch: java.lang.NumberFormatException -> L8d
            r1.append(r0)     // Catch: java.lang.NumberFormatException -> L8d
            java.lang.String r0 = "] ["
            r1.append(r0)     // Catch: java.lang.NumberFormatException -> L8d
            r1.append(r10)     // Catch: java.lang.NumberFormatException -> L8d
            r1.append(r2)     // Catch: java.lang.NumberFormatException -> L8d
            java.lang.String r0 = r1.toString()     // Catch: java.lang.NumberFormatException -> L8d
            android.util.Log.w(r3, r0)     // Catch: java.lang.NumberFormatException -> L8d
            long r0 = java.lang.Math.max(r4, r6)     // Catch: java.lang.NumberFormatException -> L8d
            r4 = r0
            goto La4
        L8d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unexpected Content-Range ["
            r0.append(r1)
            r0.append(r10)
            r0.append(r2)
            java.lang.String r10 = r0.toString()
            android.util.Log.e(r3, r10)
        La4:
            return r4
    }

    private static java.net.URL handleRedirect(java.net.URL r2, java.lang.String r3) throws java.io.IOException {
            if (r3 == 0) goto L34
            java.net.URL r0 = new java.net.URL
            r0.<init>(r2, r3)
            java.lang.String r2 = r0.getProtocol()
            java.lang.String r3 = "https"
            boolean r3 = r3.equals(r2)
            if (r3 != 0) goto L33
            java.lang.String r3 = "http"
            boolean r3 = r3.equals(r2)
            if (r3 == 0) goto L1c
            goto L33
        L1c:
            java.net.ProtocolException r3 = new java.net.ProtocolException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unsupported protocol redirect: "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            throw r3
        L33:
            return r0
        L34:
            java.net.ProtocolException r2 = new java.net.ProtocolException
            java.lang.String r3 = "Null location redirect"
            r2.<init>(r3)
            throw r2
    }

    private java.net.HttpURLConnection makeConnection(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r20) throws java.io.IOException {
            r19 = this;
            r0 = r20
            java.net.URL r1 = new java.net.URL
            android.net.Uri r2 = r0.uri
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            byte[] r2 = r0.postBody
            long r12 = r0.position
            long r14 = r0.length
            r3 = 1
            boolean r16 = r0.isFlagSet(r3)
            r11 = r19
            boolean r0 = r11.allowCrossProtocolRedirects
            if (r0 != 0) goto L2a
            r8 = 1
            r0 = r19
            r3 = r12
            r5 = r14
            r7 = r16
            java.net.HttpURLConnection r0 = r0.makeConnection(r1, r2, r3, r5, r7, r8)
            return r0
        L2a:
            r0 = 0
        L2b:
            int r10 = r0 + 1
            r3 = 20
            if (r0 > r3) goto L76
            r0 = 0
            r3 = r19
            r4 = r1
            r5 = r2
            r6 = r12
            r8 = r14
            r17 = r12
            r12 = r10
            r10 = r16
            r11 = r0
            java.net.HttpURLConnection r0 = r3.makeConnection(r4, r5, r6, r8, r10, r11)
            int r3 = r0.getResponseCode()
            r4 = 300(0x12c, float:4.2E-43)
            if (r3 == r4) goto L62
            r4 = 301(0x12d, float:4.22E-43)
            if (r3 == r4) goto L62
            r4 = 302(0x12e, float:4.23E-43)
            if (r3 == r4) goto L62
            r4 = 303(0x12f, float:4.25E-43)
            if (r3 == r4) goto L62
            if (r2 != 0) goto L61
            r2 = 307(0x133, float:4.3E-43)
            if (r3 == r2) goto L62
            r2 = 308(0x134, float:4.32E-43)
            if (r3 != r2) goto L61
            goto L62
        L61:
            return r0
        L62:
            r2 = 0
            java.lang.String r3 = "Location"
            java.lang.String r3 = r0.getHeaderField(r3)
            r0.disconnect()
            java.net.URL r1 = handleRedirect(r1, r3)
            r11 = r19
            r0 = r12
            r12 = r17
            goto L2b
        L76:
            r12 = r10
            java.net.NoRouteToHostException r0 = new java.net.NoRouteToHostException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Too many redirects: "
            r1.append(r2)
            r1.append(r12)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }

    private java.net.HttpURLConnection makeConnection(java.net.URL r5, byte[] r6, long r7, long r9, boolean r11, boolean r12) throws java.io.IOException {
            r4 = this;
            java.net.URLConnection r5 = r5.openConnection()
            java.net.HttpURLConnection r5 = (java.net.HttpURLConnection) r5
            int r0 = r4.connectTimeoutMillis
            r5.setConnectTimeout(r0)
            int r0 = r4.readTimeoutMillis
            r5.setReadTimeout(r0)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$RequestProperties r0 = r4.defaultRequestProperties
            if (r0 == 0) goto L3c
            java.util.Map r0 = r0.getSnapshot()
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L20:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L3c
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            r5.setRequestProperty(r2, r1)
            goto L20
        L3c:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$RequestProperties r0 = r4.requestProperties
            java.util.Map r0 = r0.getSnapshot()
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L4a:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L66
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            r5.setRequestProperty(r2, r1)
            goto L4a
        L66:
            r0 = 0
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            r1 = -1
            if (r0 != 0) goto L72
            int r0 = (r9 > r1 ? 1 : (r9 == r1 ? 0 : -1))
            if (r0 == 0) goto La4
        L72:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "bytes="
            r0.append(r3)
            r0.append(r7)
            java.lang.String r3 = "-"
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            int r1 = (r9 > r1 ? 1 : (r9 == r1 ? 0 : -1))
            if (r1 == 0) goto L9f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            long r7 = r7 + r9
            r9 = 1
            long r7 = r7 - r9
            r1.append(r7)
            java.lang.String r0 = r1.toString()
        L9f:
            java.lang.String r7 = "Range"
            r5.setRequestProperty(r7, r0)
        La4:
            java.lang.String r7 = r4.userAgent
            java.lang.String r8 = "User-Agent"
            r5.setRequestProperty(r8, r7)
            if (r11 != 0) goto Lb4
            java.lang.String r7 = "Accept-Encoding"
            java.lang.String r8 = "identity"
            r5.setRequestProperty(r7, r8)
        Lb4:
            r5.setInstanceFollowRedirects(r12)
            if (r6 == 0) goto Lbb
            r7 = 1
            goto Lbc
        Lbb:
            r7 = 0
        Lbc:
            r5.setDoOutput(r7)
            if (r6 == 0) goto Ldc
            java.lang.String r7 = "POST"
            r5.setRequestMethod(r7)
            int r7 = r6.length
            if (r7 != 0) goto Lca
            goto Ldc
        Lca:
            int r7 = r6.length
            r5.setFixedLengthStreamingMode(r7)
            r5.connect()
            java.io.OutputStream r7 = r5.getOutputStream()
            r7.write(r6)
            r7.close()
            goto Ldf
        Ldc:
            r5.connect()
        Ldf:
            return r5
    }

    private static void maybeTerminateInputStream(java.net.HttpURLConnection r2, long r3) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 19
            if (r0 == r1) goto Ld
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 20
            if (r0 == r1) goto Ld
            return
        Ld:
            java.io.InputStream r2 = r2.getInputStream()     // Catch: java.lang.Exception -> L58
            r0 = -1
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 != 0) goto L1f
            int r3 = r2.read()     // Catch: java.lang.Exception -> L58
            r4 = -1
            if (r3 != r4) goto L26
            return
        L1f:
            r0 = 2048(0x800, double:1.012E-320)
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 > 0) goto L26
            return
        L26:
            java.lang.Class r3 = r2.getClass()     // Catch: java.lang.Exception -> L58
            java.lang.String r3 = r3.getName()     // Catch: java.lang.Exception -> L58
            java.lang.String r4 = "com.android.okhttp.internal.http.HttpTransport$ChunkedInputStream"
            boolean r4 = r4.equals(r3)     // Catch: java.lang.Exception -> L58
            if (r4 != 0) goto L3e
            java.lang.String r4 = "com.android.okhttp.internal.http.HttpTransport$FixedLengthInputStream"
            boolean r3 = r4.equals(r3)     // Catch: java.lang.Exception -> L58
            if (r3 == 0) goto L58
        L3e:
            java.lang.Class r3 = r2.getClass()     // Catch: java.lang.Exception -> L58
            java.lang.Class r3 = r3.getSuperclass()     // Catch: java.lang.Exception -> L58
            java.lang.String r4 = "unexpectedEndOfInput"
            r0 = 0
            java.lang.Class[] r1 = new java.lang.Class[r0]     // Catch: java.lang.Exception -> L58
            java.lang.reflect.Method r3 = r3.getDeclaredMethod(r4, r1)     // Catch: java.lang.Exception -> L58
            r4 = 1
            r3.setAccessible(r4)     // Catch: java.lang.Exception -> L58
            java.lang.Object[] r4 = new java.lang.Object[r0]     // Catch: java.lang.Exception -> L58
            r3.invoke(r2, r4)     // Catch: java.lang.Exception -> L58
        L58:
            return
    }

    private int readInternal(byte[] r9, int r10, int r11) throws java.io.IOException {
            r8 = this;
            if (r11 != 0) goto L4
            r9 = 0
            return r9
        L4:
            long r0 = r8.bytesToRead
            r2 = -1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r5 = -1
            if (r4 == 0) goto L1d
            long r6 = r8.bytesRead
            long r0 = r0 - r6
            r6 = 0
            int r4 = (r0 > r6 ? 1 : (r0 == r6 ? 0 : -1))
            if (r4 != 0) goto L17
            return r5
        L17:
            long r6 = (long) r11
            long r0 = java.lang.Math.min(r6, r0)
            int r11 = (int) r0
        L1d:
            java.io.InputStream r0 = r8.inputStream
            int r9 = r0.read(r9, r10, r11)
            if (r9 != r5) goto L32
            long r9 = r8.bytesToRead
            int r9 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            if (r9 != 0) goto L2c
            return r5
        L2c:
            java.io.EOFException r9 = new java.io.EOFException
            r9.<init>()
            throw r9
        L32:
            long r10 = r8.bytesRead
            long r0 = (long) r9
            long r10 = r10 + r0
            r8.bytesRead = r10
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource> r10 = r8.listener
            if (r10 == 0) goto L3f
            r10.onBytesTransferred(r8, r9)
        L3f:
            return r9
    }

    private void skipInternal() throws java.io.IOException {
            r6 = this;
            long r0 = r6.bytesSkipped
            long r2 = r6.bytesToSkip
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L9
            return
        L9:
            java.util.concurrent.atomic.AtomicReference<byte[]> r0 = com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource.skipBufferReference
            r1 = 0
            java.lang.Object r0 = r0.getAndSet(r1)
            byte[] r0 = (byte[]) r0
            if (r0 != 0) goto L18
            r0 = 4096(0x1000, float:5.74E-42)
            byte[] r0 = new byte[r0]
        L18:
            long r1 = r6.bytesSkipped
            long r3 = r6.bytesToSkip
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 == 0) goto L56
            long r3 = r3 - r1
            int r1 = r0.length
            long r1 = (long) r1
            long r1 = java.lang.Math.min(r3, r1)
            int r1 = (int) r1
            java.io.InputStream r2 = r6.inputStream
            r3 = 0
            int r1 = r2.read(r0, r3, r1)
            java.lang.Thread r2 = java.lang.Thread.currentThread()
            boolean r2 = r2.isInterrupted()
            if (r2 != 0) goto L50
            r2 = -1
            if (r1 == r2) goto L4a
            long r2 = r6.bytesSkipped
            long r4 = (long) r1
            long r2 = r2 + r4
            r6.bytesSkipped = r2
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource> r2 = r6.listener
            if (r2 == 0) goto L18
            r2.onBytesTransferred(r6, r1)
            goto L18
        L4a:
            java.io.EOFException r0 = new java.io.EOFException
            r0.<init>()
            throw r0
        L50:
            java.io.InterruptedIOException r0 = new java.io.InterruptedIOException
            r0.<init>()
            throw r0
        L56:
            java.util.concurrent.atomic.AtomicReference<byte[]> r1 = com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource.skipBufferReference
            r1.set(r0)
            return
    }

    protected final long bytesRead() {
            r2 = this;
            long r0 = r2.bytesRead
            return r0
    }

    protected final long bytesRemaining() {
            r4 = this;
            long r0 = r4.bytesToRead
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L9
            goto Lc
        L9:
            long r2 = r4.bytesRead
            long r0 = r0 - r2
        Lc:
            return r0
    }

    protected final long bytesSkipped() {
            r2 = this;
            long r0 = r2.bytesSkipped
            return r0
    }

    @Override
    public void clearAllRequestProperties() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$RequestProperties r0 = r1.requestProperties
            r0.clear()
            return
    }

    @Override
    public void clearRequestProperty(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$RequestProperties r0 = r1.requestProperties
            r0.remove(r2)
            return
    }

    @Override
    public void close() throws com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.HttpDataSourceException {
            r6 = this;
            r0 = 0
            r1 = 0
            java.io.InputStream r2 = r6.inputStream     // Catch: java.lang.Throwable -> L32
            if (r2 == 0) goto L1f
            java.net.HttpURLConnection r2 = r6.connection     // Catch: java.lang.Throwable -> L32
            long r3 = r6.bytesRemaining()     // Catch: java.lang.Throwable -> L32
            maybeTerminateInputStream(r2, r3)     // Catch: java.lang.Throwable -> L32
            java.io.InputStream r2 = r6.inputStream     // Catch: java.io.IOException -> L15 java.lang.Throwable -> L32
            r2.close()     // Catch: java.io.IOException -> L15 java.lang.Throwable -> L32
            goto L1f
        L15:
            r2 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$HttpDataSourceException r3 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$HttpDataSourceException     // Catch: java.lang.Throwable -> L32
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r4 = r6.dataSpec     // Catch: java.lang.Throwable -> L32
            r5 = 3
            r3.<init>(r2, r4, r5)     // Catch: java.lang.Throwable -> L32
            throw r3     // Catch: java.lang.Throwable -> L32
        L1f:
            r6.inputStream = r1
            r6.closeConnectionQuietly()
            boolean r1 = r6.opened
            if (r1 == 0) goto L31
            r6.opened = r0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource> r0 = r6.listener
            if (r0 == 0) goto L31
            r0.onTransferEnd(r6)
        L31:
            return
        L32:
            r2 = move-exception
            r6.inputStream = r1
            r6.closeConnectionQuietly()
            boolean r1 = r6.opened
            if (r1 == 0) goto L45
            r6.opened = r0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource> r0 = r6.listener
            if (r0 == 0) goto L45
            r0.onTransferEnd(r6)
        L45:
            throw r2
    }

    protected final java.net.HttpURLConnection getConnection() {
            r1 = this;
            java.net.HttpURLConnection r0 = r1.connection
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.util.List<java.lang.String>> getResponseHeaders() {
            r1 = this;
            java.net.HttpURLConnection r0 = r1.connection
            if (r0 != 0) goto L6
            r0 = 0
            goto La
        L6:
            java.util.Map r0 = r0.getHeaderFields()
        La:
            return r0
    }

    @Override
    public android.net.Uri getUri() {
            r1 = this;
            java.net.HttpURLConnection r0 = r1.connection
            if (r0 != 0) goto L6
            r0 = 0
            goto L12
        L6:
            java.net.URL r0 = r0.getURL()
            java.lang.String r0 = r0.toString()
            android.net.Uri r0 = android.net.Uri.parse(r0)
        L12:
            return r0
    }

    @Override
    public long open(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r8) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.HttpDataSourceException {
            r7 = this;
            java.lang.String r0 = "Unable to connect to "
            r7.dataSpec = r8
            r1 = 0
            r7.bytesRead = r1
            r7.bytesSkipped = r1
            r3 = 1
            java.net.HttpURLConnection r4 = r7.makeConnection(r8)     // Catch: java.io.IOException -> Lc5
            r7.connection = r4     // Catch: java.io.IOException -> Lc5
            int r0 = r4.getResponseCode()     // Catch: java.io.IOException -> La6
            r4 = 200(0xc8, float:2.8E-43)
            if (r0 < r4) goto L8a
            r5 = 299(0x12b, float:4.19E-43)
            if (r0 <= r5) goto L1e
            goto L8a
        L1e:
            java.net.HttpURLConnection r5 = r7.connection
            java.lang.String r5 = r5.getContentType()
            com.mbridge.msdk.playercommon.exoplayer2.util.Predicate<java.lang.String> r6 = r7.contentTypePredicate
            if (r6 == 0) goto L38
            boolean r6 = r6.evaluate(r5)
            if (r6 == 0) goto L2f
            goto L38
        L2f:
            r7.closeConnectionQuietly()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$InvalidContentTypeException r0 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$InvalidContentTypeException
            r0.<init>(r5, r8)
            throw r0
        L38:
            if (r0 != r4) goto L42
            long r4 = r8.position
            int r0 = (r4 > r1 ? 1 : (r4 == r1 ? 0 : -1))
            if (r0 == 0) goto L42
            long r1 = r8.position
        L42:
            r7.bytesToSkip = r1
            boolean r0 = r8.isFlagSet(r3)
            if (r0 != 0) goto L68
            long r0 = r8.length
            r4 = -1
            int r0 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r0 == 0) goto L57
            long r0 = r8.length
            r7.bytesToRead = r0
            goto L6c
        L57:
            java.net.HttpURLConnection r0 = r7.connection
            long r0 = getContentLength(r0)
            int r2 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r2 == 0) goto L65
            long r4 = r7.bytesToSkip
            long r4 = r0 - r4
        L65:
            r7.bytesToRead = r4
            goto L6c
        L68:
            long r0 = r8.length
            r7.bytesToRead = r0
        L6c:
            java.net.HttpURLConnection r0 = r7.connection     // Catch: java.io.IOException -> L80
            java.io.InputStream r0 = r0.getInputStream()     // Catch: java.io.IOException -> L80
            r7.inputStream = r0     // Catch: java.io.IOException -> L80
            r7.opened = r3
            com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<? super com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultHttpDataSource> r0 = r7.listener
            if (r0 == 0) goto L7d
            r0.onTransferStart(r7, r8)
        L7d:
            long r0 = r7.bytesToRead
            return r0
        L80:
            r0 = move-exception
            r7.closeConnectionQuietly()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$HttpDataSourceException r1 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$HttpDataSourceException
            r1.<init>(r0, r8, r3)
            throw r1
        L8a:
            java.net.HttpURLConnection r1 = r7.connection
            java.util.Map r1 = r1.getHeaderFields()
            r7.closeConnectionQuietly()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$InvalidResponseCodeException r2 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$InvalidResponseCodeException
            r2.<init>(r0, r1, r8)
            r8 = 416(0x1a0, float:5.83E-43)
            if (r0 != r8) goto La5
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSourceException r8 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSourceException
            r0 = 0
            r8.<init>(r0)
            r2.initCause(r8)
        La5:
            throw r2
        La6:
            r1 = move-exception
            r7.closeConnectionQuietly()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$HttpDataSourceException r2 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$HttpDataSourceException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            android.net.Uri r0 = r8.uri
            java.lang.String r0 = r0.toString()
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            r2.<init>(r0, r1, r8, r3)
            throw r2
        Lc5:
            r1 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$HttpDataSourceException r2 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$HttpDataSourceException
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            android.net.Uri r0 = r8.uri
            java.lang.String r0 = r0.toString()
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            r2.<init>(r0, r1, r8, r3)
            throw r2
    }

    @Override
    public int read(byte[] r2, int r3, int r4) throws com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource.HttpDataSourceException {
            r1 = this;
            r1.skipInternal()     // Catch: java.io.IOException -> L8
            int r2 = r1.readInternal(r2, r3, r4)     // Catch: java.io.IOException -> L8
            return r2
        L8:
            r2 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$HttpDataSourceException r3 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$HttpDataSourceException
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r4 = r1.dataSpec
            r0 = 2
            r3.<init>(r2, r4, r0)
            throw r3
    }

    @Override
    public void setRequestProperty(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)
            com.mbridge.msdk.playercommon.exoplayer2.upstream.HttpDataSource$RequestProperties r0 = r1.requestProperties
            r0.set(r2, r3)
            return
    }
}
