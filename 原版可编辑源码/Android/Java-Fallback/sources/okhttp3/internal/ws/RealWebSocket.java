package okhttp3.internal.ws;

@kotlin.Metadata(d1 = {"\u0000¶\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u001c\u0018\u0000 `2\u00020\u00012\u00020\u0002:\u0005_`abcB?\u0012\u0006\u0010\u0003\u001a\u00020\u0004\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\b\u0012\u0006\u0010\t\u001a\u00020\n\u0012\u0006\u0010\u000b\u001a\u00020\f\u0012\b\u0010\r\u001a\u0004\u0018\u00010\u000e\u0012\u0006\u0010\u000f\u001a\u00020\f¢\u0006\u0002\u0010\u0010J\u0016\u00102\u001a\u0002032\u0006\u00104\u001a\u00020\f2\u0006\u00105\u001a\u000206J\b\u00107\u001a\u000203H\u0016J\u001f\u00108\u001a\u0002032\u0006\u00109\u001a\u00020:2\b\u0010;\u001a\u0004\u0018\u00010<H\u0000¢\u0006\u0002\b=J\u001a\u0010>\u001a\u00020\u00122\u0006\u0010?\u001a\u00020%2\b\u0010@\u001a\u0004\u0018\u00010\u0018H\u0016J \u0010>\u001a\u00020\u00122\u0006\u0010?\u001a\u00020%2\b\u0010@\u001a\u0004\u0018\u00010\u00182\u0006\u0010A\u001a\u00020\fJ\u000e\u0010B\u001a\u0002032\u0006\u0010C\u001a\u00020DJ\u001c\u0010E\u001a\u0002032\n\u0010F\u001a\u00060Gj\u0002`H2\b\u00109\u001a\u0004\u0018\u00010:J\u0016\u0010I\u001a\u0002032\u0006\u0010\u001e\u001a\u00020\u00182\u0006\u0010*\u001a\u00020+J\u0006\u0010J\u001a\u000203J\u0018\u0010K\u001a\u0002032\u0006\u0010?\u001a\u00020%2\u0006\u0010@\u001a\u00020\u0018H\u0016J\u0010\u0010L\u001a\u0002032\u0006\u0010M\u001a\u00020\u0018H\u0016J\u0010\u0010L\u001a\u0002032\u0006\u0010N\u001a\u00020 H\u0016J\u0010\u0010O\u001a\u0002032\u0006\u0010P\u001a\u00020 H\u0016J\u0010\u0010Q\u001a\u0002032\u0006\u0010P\u001a\u00020 H\u0016J\u000e\u0010R\u001a\u00020\u00122\u0006\u0010P\u001a\u00020 J\u0006\u0010S\u001a\u00020\u0012J\b\u0010!\u001a\u00020\fH\u0016J\u0006\u0010'\u001a\u00020%J\u0006\u0010(\u001a\u00020%J\b\u0010T\u001a\u00020\u0006H\u0016J\b\u0010U\u001a\u000203H\u0002J\u0010\u0010V\u001a\u00020\u00122\u0006\u0010M\u001a\u00020\u0018H\u0016J\u0010\u0010V\u001a\u00020\u00122\u0006\u0010N\u001a\u00020 H\u0016J\u0018\u0010V\u001a\u00020\u00122\u0006\u0010W\u001a\u00020 2\u0006\u0010X\u001a\u00020%H\u0002J\u0006\u0010)\u001a\u00020%J\u0006\u0010Y\u001a\u000203J\r\u0010Z\u001a\u00020\u0012H\u0000¢\u0006\u0002\b[J\r\u0010\\\u001a\u000203H\u0000¢\u0006\u0002\b]J\f\u0010^\u001a\u00020\u0012*\u00020\u000eH\u0002R\u000e\u0010\u0011\u001a\u00020\u0012X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0013\u001a\u0004\u0018\u00010\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0012X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\r\u001a\u0004\u0018\u00010\u000eX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0016\u001a\u00020\u0012X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0017\u001a\u00020\u0018X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0007\u001a\u00020\bX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0019\u0010\u001aR\u0014\u0010\u001b\u001a\b\u0012\u0004\u0012\u00020\u001d0\u001cX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000f\u001a\u00020\fX\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u001e\u001a\u0004\u0018\u00010\u0018X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\fX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u001f\u001a\b\u0012\u0004\u0012\u00020 0\u001cX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010!\u001a\u00020\fX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\t\u001a\u00020\nX\u0082\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\"\u001a\u0004\u0018\u00010#X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010$\u001a\u00020%X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010&\u001a\u0004\u0018\u00010\u0018X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010'\u001a\u00020%X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010(\u001a\u00020%X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010)\u001a\u00020%X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010*\u001a\u0004\u0018\u00010+X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010,\u001a\u00020-X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010.\u001a\u0004\u0018\u00010/X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u00100\u001a\u0004\u0018\u000101X\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006d"}, d2 = {"Lokhttp3/internal/ws/RealWebSocket;", "Lokhttp3/WebSocket;", "Lokhttp3/internal/ws/WebSocketReader$FrameCallback;", "taskRunner", "Lokhttp3/internal/concurrent/TaskRunner;", "originalRequest", "Lokhttp3/Request;", "listener", "Lokhttp3/WebSocketListener;", "random", "Ljava/util/Random;", "pingIntervalMillis", "", "extensions", "Lokhttp3/internal/ws/WebSocketExtensions;", "minimumDeflateSize", "(Lokhttp3/internal/concurrent/TaskRunner;Lokhttp3/Request;Lokhttp3/WebSocketListener;Ljava/util/Random;JLokhttp3/internal/ws/WebSocketExtensions;J)V", "awaitingPong", "", "call", "Lokhttp3/Call;", "enqueuedClose", "failed", "key", "", "getListener$okhttp", "()Lokhttp3/WebSocketListener;", "messageAndCloseQueue", "Ljava/util/ArrayDeque;", "", "name", "pongQueue", "Lokio/ByteString;", "queueSize", "reader", "Lokhttp3/internal/ws/WebSocketReader;", "receivedCloseCode", "", "receivedCloseReason", "receivedPingCount", "receivedPongCount", "sentPingCount", "streams", "Lokhttp3/internal/ws/RealWebSocket$Streams;", "taskQueue", "Lokhttp3/internal/concurrent/TaskQueue;", "writer", "Lokhttp3/internal/ws/WebSocketWriter;", "writerTask", "Lokhttp3/internal/concurrent/Task;", "awaitTermination", "", "timeout", "timeUnit", "Ljava/util/concurrent/TimeUnit;", "cancel", "checkUpgradeSuccess", "response", "Lokhttp3/Response;", "exchange", "Lokhttp3/internal/connection/Exchange;", "checkUpgradeSuccess$okhttp", "close", "code", "reason", "cancelAfterCloseMillis", "connect", "client", "Lokhttp3/OkHttpClient;", "failWebSocket", "e", "Ljava/lang/Exception;", "Lkotlin/Exception;", "initReaderAndWriter", "loopReader", "onReadClose", "onReadMessage", "text", "bytes", "onReadPing", "payload", "onReadPong", "pong", "processNextFrame", "request", "runWriter", "send", "data", "formatOpcode", "tearDown", "writeOneFrame", "writeOneFrame$okhttp", "writePingFrame", "writePingFrame$okhttp", "isValid", "Close", "Companion", "Message", "Streams", "WriterTask", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class RealWebSocket implements okhttp3.WebSocket, okhttp3.internal.ws.WebSocketReader.FrameCallback {
    private static final long CANCEL_AFTER_CLOSE_MILLIS = 60000;
    public static final okhttp3.internal.ws.RealWebSocket.Companion Companion = null;
    public static final long DEFAULT_MINIMUM_DEFLATE_SIZE = 1024;
    private static final long MAX_QUEUE_SIZE = 16777216;
    private static final java.util.List<okhttp3.Protocol> ONLY_HTTP1 = null;
    private boolean awaitingPong;
    private okhttp3.Call call;
    private boolean enqueuedClose;
    private okhttp3.internal.ws.WebSocketExtensions extensions;
    private boolean failed;
    private final java.lang.String key;
    private final okhttp3.WebSocketListener listener;
    private final java.util.ArrayDeque<java.lang.Object> messageAndCloseQueue;
    private long minimumDeflateSize;
    private java.lang.String name;
    private final okhttp3.Request originalRequest;
    private final long pingIntervalMillis;
    private final java.util.ArrayDeque<okio.ByteString> pongQueue;
    private long queueSize;
    private final java.util.Random random;
    private okhttp3.internal.ws.WebSocketReader reader;
    private int receivedCloseCode;
    private java.lang.String receivedCloseReason;
    private int receivedPingCount;
    private int receivedPongCount;
    private int sentPingCount;
    private okhttp3.internal.ws.RealWebSocket.Streams streams;
    private okhttp3.internal.concurrent.TaskQueue taskQueue;
    private okhttp3.internal.ws.WebSocketWriter writer;
    private okhttp3.internal.concurrent.Task writerTask;

    class 1 implements java.lang.Runnable {
        final okhttp3.internal.ws.RealWebSocket this$0;

        1(okhttp3.internal.ws.RealWebSocket r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r3 = this;
            L0:
                okhttp3.internal.ws.RealWebSocket r0 = r3.this$0     // Catch: java.io.IOException -> L9
                boolean r0 = r0.writeOneFrame()     // Catch: java.io.IOException -> L9
                if (r0 == 0) goto L10
                goto L0
            L9:
                r0 = move-exception
                okhttp3.internal.ws.RealWebSocket r1 = r3.this$0
                r2 = 0
                r1.failWebSocket(r0, r2)
            L10:
                return
        }
    }

    class 2 implements okhttp3.Callback {
        final okhttp3.internal.ws.RealWebSocket this$0;
        final okhttp3.Request val$request;

        2(okhttp3.internal.ws.RealWebSocket r1, okhttp3.Request r2) {
                r0 = this;
                r0.this$0 = r1
                r0.val$request = r2
                r0.<init>()
                return
        }

        @Override
        public void onFailure(okhttp3.Call r2, java.io.IOException r3) {
                r1 = this;
                okhttp3.internal.ws.RealWebSocket r2 = r1.this$0
                r0 = 0
                r2.failWebSocket(r3, r0)
                return
        }

        @Override
        public void onResponse(okhttp3.Call r4, okhttp3.Response r5) {
                r3 = this;
                okhttp3.internal.ws.RealWebSocket r0 = r3.this$0     // Catch: java.net.ProtocolException -> L59
                r0.checkResponse(r5)     // Catch: java.net.ProtocolException -> L59
                okhttp3.internal.Internal r0 = okhttp3.internal.Internal.instance
                okhttp3.internal.connection.StreamAllocation r4 = r0.streamAllocation(r4)
                r4.noNewStreams()
                okhttp3.internal.connection.RealConnection r0 = r4.connection()
                okhttp3.internal.ws.RealWebSocket$Streams r0 = r0.newWebSocketStreams(r4)
                okhttp3.internal.ws.RealWebSocket r1 = r3.this$0     // Catch: java.lang.Exception -> L51
                okhttp3.WebSocketListener r1 = r1.listener     // Catch: java.lang.Exception -> L51
                okhttp3.internal.ws.RealWebSocket r2 = r3.this$0     // Catch: java.lang.Exception -> L51
                r1.onOpen(r2, r5)     // Catch: java.lang.Exception -> L51
                java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L51
                r5.<init>()     // Catch: java.lang.Exception -> L51
                java.lang.String r1 = "OkHttp WebSocket "
                r5.append(r1)     // Catch: java.lang.Exception -> L51
                okhttp3.Request r1 = r3.val$request     // Catch: java.lang.Exception -> L51
                okhttp3.HttpUrl r1 = r1.url()     // Catch: java.lang.Exception -> L51
                java.lang.String r1 = r1.redact()     // Catch: java.lang.Exception -> L51
                r5.append(r1)     // Catch: java.lang.Exception -> L51
                java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> L51
                okhttp3.internal.ws.RealWebSocket r1 = r3.this$0     // Catch: java.lang.Exception -> L51
                r1.initReaderAndWriter(r5, r0)     // Catch: java.lang.Exception -> L51
                okhttp3.internal.connection.RealConnection r4 = r4.connection()     // Catch: java.lang.Exception -> L51
                java.net.Socket r4 = r4.socket()     // Catch: java.lang.Exception -> L51
                r5 = 0
                r4.setSoTimeout(r5)     // Catch: java.lang.Exception -> L51
                okhttp3.internal.ws.RealWebSocket r4 = r3.this$0     // Catch: java.lang.Exception -> L51
                r4.loopReader()     // Catch: java.lang.Exception -> L51
                goto L58
            L51:
                r4 = move-exception
                okhttp3.internal.ws.RealWebSocket r5 = r3.this$0
                r0 = 0
                r5.failWebSocket(r4, r0)
            L58:
                return
            L59:
                r4 = move-exception
                okhttp3.internal.ws.RealWebSocket r0 = r3.this$0
                r0.failWebSocket(r4, r5)
                okhttp3.internal.Util.closeQuietly(r5)
                return
        }
    }

    final class CancelRunnable implements java.lang.Runnable {
        final okhttp3.internal.ws.RealWebSocket this$0;

        CancelRunnable(okhttp3.internal.ws.RealWebSocket r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                okhttp3.internal.ws.RealWebSocket r0 = r1.this$0
                r0.cancel()
                return
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\b\b\u0000\u0018\u00002\u00020\u0001B\u001f\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0002\u0010\bR\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u0013\u0010\u0004\u001a\u0004\u0018\u00010\u0005¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000e¨\u0006\u000f"}, d2 = {"Lokhttp3/internal/ws/RealWebSocket$Close;", "", "code", "", "reason", "Lokio/ByteString;", "cancelAfterCloseMillis", "", "(ILokio/ByteString;J)V", "getCancelAfterCloseMillis", "()J", "getCode", "()I", "getReason", "()Lokio/ByteString;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Close {
        private final long cancelAfterCloseMillis;
        private final int code;
        private final okio.ByteString reason;

        public Close(int r1, okio.ByteString r2, long r3) {
                r0 = this;
                r0.<init>()
                r0.code = r1
                r0.reason = r2
                r0.cancelAfterCloseMillis = r3
                return
        }

        public final long getCancelAfterCloseMillis() {
                r2 = this;
                long r0 = r2.cancelAfterCloseMillis
                return r0
        }

        public final int getCode() {
                r1 = this;
                int r0 = r1.code
                return r0
        }

        public final okio.ByteString getReason() {
                r1 = this;
                okio.ByteString r0 = r1.reason
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0004X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000R\u0014\u0010\u0007\u001a\b\u0012\u0004\u0012\u00020\t0\bX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\n"}, d2 = {"Lokhttp3/internal/ws/RealWebSocket$Companion;", "", "()V", "CANCEL_AFTER_CLOSE_MILLIS", "", "DEFAULT_MINIMUM_DEFLATE_SIZE", "MAX_QUEUE_SIZE", "ONLY_HTTP1", "", "Lokhttp3/Protocol;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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
    }

    @kotlin.Metadata(d1 = {"\u0000\u0018\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\b\u0000\u0018\u00002\u00020\u0001B\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006R\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\n¨\u0006\u000b"}, d2 = {"Lokhttp3/internal/ws/RealWebSocket$Message;", "", "formatOpcode", "", "data", "Lokio/ByteString;", "(ILokio/ByteString;)V", "getData", "()Lokio/ByteString;", "getFormatOpcode", "()I", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Message {
        private final okio.ByteString data;
        private final int formatOpcode;

        public Message(int r2, okio.ByteString r3) {
                r1 = this;
                java.lang.String r0 = "data"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r1.<init>()
                r1.formatOpcode = r2
                r1.data = r3
                return
        }

        public final okio.ByteString getData() {
                r1 = this;
                okio.ByteString r0 = r1.data
                return r0
        }

        public final int getFormatOpcode() {
                r1 = this;
                int r0 = r1.formatOpcode
                return r0
        }
    }

    private final class PingRunnable implements java.lang.Runnable {
        final okhttp3.internal.ws.RealWebSocket this$0;

        PingRunnable(okhttp3.internal.ws.RealWebSocket r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                okhttp3.internal.ws.RealWebSocket r0 = r1.this$0
                r0.writePingFrame()
                return
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\b\b&\u0018\u00002\u00020\u0001B\u001d\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0002\u0010\bR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\nR\u0011\u0010\u0006\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\fR\u0011\u0010\u0004\u001a\u00020\u0005¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000e¨\u0006\u000f"}, d2 = {"Lokhttp3/internal/ws/RealWebSocket$Streams;", "Ljava/io/Closeable;", "client", "", "source", "Lokio/BufferedSource;", "sink", "Lokio/BufferedSink;", "(ZLokio/BufferedSource;Lokio/BufferedSink;)V", "getClient", "()Z", "getSink", "()Lokio/BufferedSink;", "getSource", "()Lokio/BufferedSource;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static abstract class Streams implements java.io.Closeable {
        private final boolean client;
        private final okio.BufferedSink sink;
        private final okio.BufferedSource source;

        public Streams(boolean r2, okio.BufferedSource r3, okio.BufferedSink r4) {
                r1 = this;
                java.lang.String r0 = "source"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                java.lang.String r0 = "sink"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                r1.<init>()
                r1.client = r2
                r1.source = r3
                r1.sink = r4
                return
        }

        public final boolean getClient() {
                r1 = this;
                boolean r0 = r1.client
                return r0
        }

        public final okio.BufferedSink getSink() {
                r1 = this;
                okio.BufferedSink r0 = r1.sink
                return r0
        }

        public final okio.BufferedSource getSource() {
                r1 = this;
                okio.BufferedSource r0 = r1.source
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\b\u0082\u0004\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\b\u0010\u0003\u001a\u00020\u0004H\u0016¨\u0006\u0005"}, d2 = {"Lokhttp3/internal/ws/RealWebSocket$WriterTask;", "Lokhttp3/internal/concurrent/Task;", "(Lokhttp3/internal/ws/RealWebSocket;)V", "runOnce", "", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    private final class WriterTask extends okhttp3.internal.concurrent.Task {
        final okhttp3.internal.ws.RealWebSocket this$0;

        public WriterTask(okhttp3.internal.ws.RealWebSocket r4) {
                r3 = this;
                java.lang.String r0 = "this$0"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                r3.this$0 = r4
                java.lang.String r4 = okhttp3.internal.ws.RealWebSocket.access$getName$p(r4)
                java.lang.String r0 = " writer"
                java.lang.String r4 = kotlin.jvm.internal.Intrinsics.stringPlus(r4, r0)
                r0 = 0
                r1 = 2
                r2 = 0
                r3.<init>(r4, r0, r1, r2)
                return
        }

        @Override
        public long runOnce() {
                r3 = this;
                okhttp3.internal.ws.RealWebSocket r0 = r3.this$0     // Catch: java.io.IOException -> Lb
                boolean r0 = r0.writeOneFrame$okhttp()     // Catch: java.io.IOException -> Lb
                if (r0 == 0) goto L14
                r0 = 0
                return r0
            Lb:
                r0 = move-exception
                okhttp3.internal.ws.RealWebSocket r1 = r3.this$0
                java.lang.Exception r0 = (java.lang.Exception) r0
                r2 = 0
                r1.failWebSocket(r0, r2)
            L14:
                r0 = -1
                return r0
        }
    }


    static {
            okhttp3.internal.ws.RealWebSocket$Companion r0 = new okhttp3.internal.ws.RealWebSocket$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.ws.RealWebSocket.Companion = r0
            okhttp3.Protocol r0 = okhttp3.Protocol.HTTP_1_1
            java.util.List r0 = kotlin.collections.CollectionsKt.listOf(r0)
            okhttp3.internal.ws.RealWebSocket.ONLY_HTTP1 = r0
            return
    }

    public RealWebSocket(okhttp3.internal.concurrent.TaskRunner r2, okhttp3.Request r3, okhttp3.WebSocketListener r4, java.util.Random r5, long r6, okhttp3.internal.ws.WebSocketExtensions r8, long r9) {
            r1 = this;
            java.lang.String r0 = "taskRunner"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "originalRequest"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "listener"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "random"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r1.<init>()
            r1.originalRequest = r3
            r1.listener = r4
            r1.random = r5
            r1.pingIntervalMillis = r6
            r1.extensions = r8
            r1.minimumDeflateSize = r9
            okhttp3.internal.concurrent.TaskQueue r2 = r2.newQueue()
            r1.taskQueue = r2
            java.util.ArrayDeque r2 = new java.util.ArrayDeque
            r2.<init>()
            r1.pongQueue = r2
            java.util.ArrayDeque r2 = new java.util.ArrayDeque
            r2.<init>()
            r1.messageAndCloseQueue = r2
            r2 = -1
            r1.receivedCloseCode = r2
            okhttp3.Request r2 = r1.originalRequest
            java.lang.String r2 = r2.method()
            java.lang.String r3 = "GET"
            boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r3, r2)
            if (r2 == 0) goto L64
            okio.ByteString$Companion r3 = okio.ByteString.Companion
            r2 = 16
            byte[] r4 = new byte[r2]
            java.util.Random r2 = r1.random
            r2.nextBytes(r4)
            kotlin.Unit r2 = kotlin.Unit.INSTANCE
            r5 = 0
            r6 = 0
            r7 = 3
            r8 = 0
            okio.ByteString r2 = okio.ByteString.Companion.of$default(r3, r4, r5, r6, r7, r8)
            java.lang.String r2 = r2.base64()
            r1.key = r2
            return
        L64:
            okhttp3.Request r2 = r1.originalRequest
            java.lang.String r2 = r2.method()
            java.lang.String r3 = "Request must be GET: "
            java.lang.String r2 = kotlin.jvm.internal.Intrinsics.stringPlus(r3, r2)
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r2 = r2.toString()
            r3.<init>(r2)
            throw r3
    }

    public static final java.util.ArrayDeque access$getMessageAndCloseQueue$p(okhttp3.internal.ws.RealWebSocket r0) {
            java.util.ArrayDeque<java.lang.Object> r0 = r0.messageAndCloseQueue
            return r0
    }

    public static final java.lang.String access$getName$p(okhttp3.internal.ws.RealWebSocket r0) {
            java.lang.String r0 = r0.name
            return r0
    }

    public static final boolean access$isValid(okhttp3.internal.ws.RealWebSocket r0, okhttp3.internal.ws.WebSocketExtensions r1) {
            boolean r0 = r0.isValid(r1)
            return r0
    }

    public static final void access$setExtensions$p(okhttp3.internal.ws.RealWebSocket r0, okhttp3.internal.ws.WebSocketExtensions r1) {
            r0.extensions = r1
            return
    }

    private final boolean isValid(okhttp3.internal.ws.WebSocketExtensions r5) {
            r4 = this;
            boolean r0 = r5.unknownValues
            r1 = 0
            if (r0 == 0) goto L6
            return r1
        L6:
            java.lang.Integer r0 = r5.clientMaxWindowBits
            if (r0 == 0) goto Lb
            return r1
        Lb:
            java.lang.Integer r0 = r5.serverMaxWindowBits
            if (r0 == 0) goto L25
            kotlin.ranges.IntRange r0 = new kotlin.ranges.IntRange
            r2 = 8
            r3 = 15
            r0.<init>(r2, r3)
            java.lang.Integer r5 = r5.serverMaxWindowBits
            int r5 = r5.intValue()
            boolean r5 = r0.contains(r5)
            if (r5 != 0) goto L25
            return r1
        L25:
            r5 = 1
            return r5
    }

    private final void runWriter() {
            r8 = this;
            boolean r0 = okhttp3.internal.Util.assertionsEnabled
            if (r0 == 0) goto L32
            boolean r0 = java.lang.Thread.holdsLock(r8)
            if (r0 == 0) goto Lb
            goto L32
        Lb:
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
            r1.append(r8)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
        L32:
            okhttp3.internal.concurrent.Task r3 = r8.writerTask
            if (r3 == 0) goto L3f
            okhttp3.internal.concurrent.TaskQueue r2 = r8.taskQueue
            r4 = 0
            r6 = 2
            r7 = 0
            okhttp3.internal.concurrent.TaskQueue.schedule$default(r2, r3, r4, r6, r7)
        L3f:
            return
    }

    private final synchronized boolean send(okio.ByteString r7, int r8) {
            r6 = this;
            monitor-enter(r6)
            boolean r0 = r6.failed     // Catch: java.lang.Throwable -> L3e
            r1 = 0
            if (r0 != 0) goto L3c
            boolean r0 = r6.enqueuedClose     // Catch: java.lang.Throwable -> L3e
            if (r0 == 0) goto Lb
            goto L3c
        Lb:
            long r2 = r6.queueSize     // Catch: java.lang.Throwable -> L3e
            int r0 = r7.size()     // Catch: java.lang.Throwable -> L3e
            long r4 = (long) r0     // Catch: java.lang.Throwable -> L3e
            long r2 = r2 + r4
            r4 = 16777216(0x1000000, double:8.289046E-317)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 <= 0) goto L22
            r7 = 1001(0x3e9, float:1.403E-42)
            r8 = 0
            r6.close(r7, r8)     // Catch: java.lang.Throwable -> L3e
            monitor-exit(r6)
            return r1
        L22:
            long r0 = r6.queueSize     // Catch: java.lang.Throwable -> L3e
            int r2 = r7.size()     // Catch: java.lang.Throwable -> L3e
            long r2 = (long) r2     // Catch: java.lang.Throwable -> L3e
            long r0 = r0 + r2
            r6.queueSize = r0     // Catch: java.lang.Throwable -> L3e
            java.util.ArrayDeque<java.lang.Object> r0 = r6.messageAndCloseQueue     // Catch: java.lang.Throwable -> L3e
            okhttp3.internal.ws.RealWebSocket$Message r1 = new okhttp3.internal.ws.RealWebSocket$Message     // Catch: java.lang.Throwable -> L3e
            r1.<init>(r8, r7)     // Catch: java.lang.Throwable -> L3e
            r0.add(r1)     // Catch: java.lang.Throwable -> L3e
            r6.runWriter()     // Catch: java.lang.Throwable -> L3e
            r7 = 1
            monitor-exit(r6)
            return r7
        L3c:
            monitor-exit(r6)
            return r1
        L3e:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final void awaitTermination(long r2, java.util.concurrent.TimeUnit r4) throws java.lang.InterruptedException {
            r1 = this;
            java.lang.String r0 = "timeUnit"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            okhttp3.internal.concurrent.TaskQueue r0 = r1.taskQueue
            java.util.concurrent.CountDownLatch r0 = r0.idleLatch()
            r0.await(r2, r4)
            return
    }

    @Override
    public void cancel() {
            r1 = this;
            okhttp3.Call r0 = r1.call
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            r0.cancel()
            return
    }

    public final void checkUpgradeSuccess$okhttp(okhttp3.Response r8, okhttp3.internal.connection.Exchange r9) throws java.io.IOException {
            r7 = this;
            java.lang.String r0 = "response"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
            int r0 = r8.code()
            r1 = 39
            r2 = 101(0x65, float:1.42E-43)
            if (r0 != r2) goto Laf
            r0 = 2
            r2 = 0
            java.lang.String r3 = "Connection"
            java.lang.String r3 = okhttp3.Response.header$default(r8, r3, r2, r0, r2)
            r4 = 1
            java.lang.String r5 = "Upgrade"
            boolean r6 = kotlin.text.StringsKt.equals(r5, r3, r4)
            if (r6 == 0) goto L95
            java.lang.String r3 = okhttp3.Response.header$default(r8, r5, r2, r0, r2)
            java.lang.String r5 = "websocket"
            boolean r4 = kotlin.text.StringsKt.equals(r5, r3, r4)
            if (r4 == 0) goto L7b
            java.lang.String r3 = "Sec-WebSocket-Accept"
            java.lang.String r8 = okhttp3.Response.header$default(r8, r3, r2, r0, r2)
            okio.ByteString$Companion r0 = okio.ByteString.Companion
            java.lang.String r2 = r7.key
            java.lang.String r3 = "258EAFA5-E914-47DA-95CA-C5AB0DC85B11"
            java.lang.String r2 = kotlin.jvm.internal.Intrinsics.stringPlus(r2, r3)
            okio.ByteString r0 = r0.encodeUtf8(r2)
            okio.ByteString r0 = r0.sha1()
            java.lang.String r0 = r0.base64()
            boolean r2 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r8)
            if (r2 == 0) goto L59
            if (r9 == 0) goto L51
            return
        L51:
            java.net.ProtocolException r8 = new java.net.ProtocolException
            java.lang.String r9 = "Web Socket exchange missing: bad interceptor?"
            r8.<init>(r9)
            throw r8
        L59:
            java.net.ProtocolException r9 = new java.net.ProtocolException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Expected 'Sec-WebSocket-Accept' header value '"
            r2.append(r3)
            r2.append(r0)
            java.lang.String r0 = "' but was '"
            r2.append(r0)
            r2.append(r8)
            r2.append(r1)
            java.lang.String r8 = r2.toString()
            r9.<init>(r8)
            throw r9
        L7b:
            java.net.ProtocolException r8 = new java.net.ProtocolException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "Expected 'Upgrade' header value 'websocket' but was '"
            r9.append(r0)
            r9.append(r3)
            r9.append(r1)
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            throw r8
        L95:
            java.net.ProtocolException r8 = new java.net.ProtocolException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "Expected 'Connection' header value 'Upgrade' but was '"
            r9.append(r0)
            r9.append(r3)
            r9.append(r1)
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            throw r8
        Laf:
            java.net.ProtocolException r9 = new java.net.ProtocolException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Expected HTTP 101 response but was '"
            r0.append(r2)
            int r2 = r8.code()
            r0.append(r2)
            r2 = 32
            r0.append(r2)
            java.lang.String r8 = r8.message()
            r0.append(r8)
            r0.append(r1)
            java.lang.String r8 = r0.toString()
            r9.<init>(r8)
            throw r9
    }

    @Override
    public boolean close(int r3, java.lang.String r4) {
            r2 = this;
            r0 = 60000(0xea60, double:2.9644E-319)
            boolean r3 = r2.close(r3, r4, r0)
            return r3
    }

    public final synchronized boolean close(int r8, java.lang.String r9, long r10) {
            r7 = this;
            monitor-enter(r7)
            okhttp3.internal.ws.WebSocketProtocol r0 = okhttp3.internal.ws.WebSocketProtocol.INSTANCE     // Catch: java.lang.Throwable -> L4e
            r0.validateCloseCode(r8)     // Catch: java.lang.Throwable -> L4e
            r0 = 0
            r1 = 0
            r2 = 1
            if (r9 == 0) goto L32
            okio.ByteString$Companion r0 = okio.ByteString.Companion     // Catch: java.lang.Throwable -> L4e
            okio.ByteString r0 = r0.encodeUtf8(r9)     // Catch: java.lang.Throwable -> L4e
            int r3 = r0.size()     // Catch: java.lang.Throwable -> L4e
            long r3 = (long) r3     // Catch: java.lang.Throwable -> L4e
            r5 = 123(0x7b, double:6.1E-322)
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 > 0) goto L1e
            r3 = r2
            goto L1f
        L1e:
            r3 = r1
        L1f:
            if (r3 == 0) goto L22
            goto L32
        L22:
            java.lang.String r8 = "reason.size() > 123: "
            java.lang.String r8 = kotlin.jvm.internal.Intrinsics.stringPlus(r8, r9)     // Catch: java.lang.Throwable -> L4e
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L4e
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L4e
            r9.<init>(r8)     // Catch: java.lang.Throwable -> L4e
            throw r9     // Catch: java.lang.Throwable -> L4e
        L32:
            boolean r9 = r7.failed     // Catch: java.lang.Throwable -> L4e
            if (r9 != 0) goto L4c
            boolean r9 = r7.enqueuedClose     // Catch: java.lang.Throwable -> L4e
            if (r9 == 0) goto L3b
            goto L4c
        L3b:
            r7.enqueuedClose = r2     // Catch: java.lang.Throwable -> L4e
            java.util.ArrayDeque<java.lang.Object> r9 = r7.messageAndCloseQueue     // Catch: java.lang.Throwable -> L4e
            okhttp3.internal.ws.RealWebSocket$Close r1 = new okhttp3.internal.ws.RealWebSocket$Close     // Catch: java.lang.Throwable -> L4e
            r1.<init>(r8, r0, r10)     // Catch: java.lang.Throwable -> L4e
            r9.add(r1)     // Catch: java.lang.Throwable -> L4e
            r7.runWriter()     // Catch: java.lang.Throwable -> L4e
            monitor-exit(r7)
            return r2
        L4c:
            monitor-exit(r7)
            return r1
        L4e:
            r8 = move-exception
            monitor-exit(r7)
            throw r8
    }

    public final void connect(okhttp3.OkHttpClient r5) {
            r4 = this;
            java.lang.String r0 = "client"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            okhttp3.Request r0 = r4.originalRequest
            java.lang.String r1 = "Sec-WebSocket-Extensions"
            java.lang.String r0 = r0.header(r1)
            if (r0 == 0) goto L1d
            java.net.ProtocolException r5 = new java.net.ProtocolException
            java.lang.String r0 = "Request header not permitted: 'Sec-WebSocket-Extensions'"
            r5.<init>(r0)
            java.lang.Exception r5 = (java.lang.Exception) r5
            r0 = 0
            r4.failWebSocket(r5, r0)
            return
        L1d:
            okhttp3.OkHttpClient$Builder r5 = r5.newBuilder()
            okhttp3.EventListener r0 = okhttp3.EventListener.NONE
            okhttp3.OkHttpClient$Builder r5 = r5.eventListener(r0)
            java.util.List<okhttp3.Protocol> r0 = okhttp3.internal.ws.RealWebSocket.ONLY_HTTP1
            okhttp3.OkHttpClient$Builder r5 = r5.protocols(r0)
            okhttp3.OkHttpClient r5 = r5.build()
            okhttp3.Request r0 = r4.originalRequest
            okhttp3.Request$Builder r0 = r0.newBuilder()
            java.lang.String r2 = "Upgrade"
            java.lang.String r3 = "websocket"
            okhttp3.Request$Builder r0 = r0.header(r2, r3)
            java.lang.String r3 = "Connection"
            okhttp3.Request$Builder r0 = r0.header(r3, r2)
            java.lang.String r2 = r4.key
            java.lang.String r3 = "Sec-WebSocket-Key"
            okhttp3.Request$Builder r0 = r0.header(r3, r2)
            java.lang.String r2 = "Sec-WebSocket-Version"
            java.lang.String r3 = "13"
            okhttp3.Request$Builder r0 = r0.header(r2, r3)
            java.lang.String r2 = "permessage-deflate"
            okhttp3.Request$Builder r0 = r0.header(r1, r2)
            okhttp3.Request r0 = r0.build()
            okhttp3.internal.connection.RealCall r1 = new okhttp3.internal.connection.RealCall
            r2 = 1
            r1.<init>(r5, r0, r2)
            okhttp3.Call r1 = (okhttp3.Call) r1
            r4.call = r1
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            okhttp3.internal.ws.RealWebSocket$connect$1 r5 = new okhttp3.internal.ws.RealWebSocket$connect$1
            r5.<init>(r4, r0)
            okhttp3.Callback r5 = (okhttp3.Callback) r5
            r1.enqueue(r5)
            return
    }

    public final void failWebSocket(java.lang.Exception r6, okhttp3.Response r7) {
            r5 = this;
            java.lang.String r0 = "e"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            monitor-enter(r5)
            boolean r0 = r5.failed     // Catch: java.lang.Throwable -> L61
            if (r0 == 0) goto Lc
            monitor-exit(r5)
            return
        Lc:
            r0 = 1
            r5.failed = r0     // Catch: java.lang.Throwable -> L61
            okhttp3.internal.ws.RealWebSocket$Streams r0 = r5.streams     // Catch: java.lang.Throwable -> L61
            r1 = 0
            r5.streams = r1     // Catch: java.lang.Throwable -> L61
            okhttp3.internal.ws.WebSocketReader r2 = r5.reader     // Catch: java.lang.Throwable -> L61
            r5.reader = r1     // Catch: java.lang.Throwable -> L61
            okhttp3.internal.ws.WebSocketWriter r3 = r5.writer     // Catch: java.lang.Throwable -> L61
            r5.writer = r1     // Catch: java.lang.Throwable -> L61
            okhttp3.internal.concurrent.TaskQueue r1 = r5.taskQueue     // Catch: java.lang.Throwable -> L61
            r1.shutdown()     // Catch: java.lang.Throwable -> L61
            kotlin.Unit r1 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L61
            monitor-exit(r5)
            okhttp3.WebSocketListener r1 = r5.listener     // Catch: java.lang.Throwable -> L47
            r4 = r5
            okhttp3.WebSocket r4 = (okhttp3.WebSocket) r4     // Catch: java.lang.Throwable -> L47
            java.lang.Throwable r6 = (java.lang.Throwable) r6     // Catch: java.lang.Throwable -> L47
            r1.onFailure(r4, r6, r7)     // Catch: java.lang.Throwable -> L47
            if (r0 != 0) goto L31
            goto L36
        L31:
            java.io.Closeable r0 = (java.io.Closeable) r0
            okhttp3.internal.Util.closeQuietly(r0)
        L36:
            if (r2 != 0) goto L39
            goto L3e
        L39:
            java.io.Closeable r2 = (java.io.Closeable) r2
            okhttp3.internal.Util.closeQuietly(r2)
        L3e:
            if (r3 != 0) goto L41
            goto L46
        L41:
            java.io.Closeable r3 = (java.io.Closeable) r3
            okhttp3.internal.Util.closeQuietly(r3)
        L46:
            return
        L47:
            r6 = move-exception
            if (r0 != 0) goto L4b
            goto L50
        L4b:
            java.io.Closeable r0 = (java.io.Closeable) r0
            okhttp3.internal.Util.closeQuietly(r0)
        L50:
            if (r2 != 0) goto L53
            goto L58
        L53:
            java.io.Closeable r2 = (java.io.Closeable) r2
            okhttp3.internal.Util.closeQuietly(r2)
        L58:
            if (r3 != 0) goto L5b
            goto L60
        L5b:
            java.io.Closeable r3 = (java.io.Closeable) r3
            okhttp3.internal.Util.closeQuietly(r3)
        L60:
            throw r6
        L61:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
    }

    public final okhttp3.WebSocketListener getListener$okhttp() {
            r1 = this;
            okhttp3.WebSocketListener r0 = r1.listener
            return r0
    }

    public final void initReaderAndWriter(java.lang.String r11, okhttp3.internal.ws.RealWebSocket.Streams r12) throws java.io.IOException {
            r10 = this;
            java.lang.String r0 = "name"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            java.lang.String r0 = "streams"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            okhttp3.internal.ws.WebSocketExtensions r0 = r10.extensions
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            monitor-enter(r10)
            r10.name = r11     // Catch: java.lang.Throwable -> L8f
            r10.streams = r12     // Catch: java.lang.Throwable -> L8f
            okhttp3.internal.ws.WebSocketWriter r9 = new okhttp3.internal.ws.WebSocketWriter     // Catch: java.lang.Throwable -> L8f
            boolean r2 = r12.getClient()     // Catch: java.lang.Throwable -> L8f
            okio.BufferedSink r3 = r12.getSink()     // Catch: java.lang.Throwable -> L8f
            java.util.Random r4 = r10.random     // Catch: java.lang.Throwable -> L8f
            boolean r5 = r0.perMessageDeflate     // Catch: java.lang.Throwable -> L8f
            boolean r1 = r12.getClient()     // Catch: java.lang.Throwable -> L8f
            boolean r6 = r0.noContextTakeover(r1)     // Catch: java.lang.Throwable -> L8f
            long r7 = r10.minimumDeflateSize     // Catch: java.lang.Throwable -> L8f
            r1 = r9
            r1.<init>(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L8f
            r10.writer = r9     // Catch: java.lang.Throwable -> L8f
            okhttp3.internal.ws.RealWebSocket$WriterTask r1 = new okhttp3.internal.ws.RealWebSocket$WriterTask     // Catch: java.lang.Throwable -> L8f
            r1.<init>(r10)     // Catch: java.lang.Throwable -> L8f
            okhttp3.internal.concurrent.Task r1 = (okhttp3.internal.concurrent.Task) r1     // Catch: java.lang.Throwable -> L8f
            r10.writerTask = r1     // Catch: java.lang.Throwable -> L8f
            long r1 = r10.pingIntervalMillis     // Catch: java.lang.Throwable -> L8f
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto L5d
            java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> L8f
            long r2 = r10.pingIntervalMillis     // Catch: java.lang.Throwable -> L8f
            long r1 = r1.toNanos(r2)     // Catch: java.lang.Throwable -> L8f
            okhttp3.internal.concurrent.TaskQueue r3 = r10.taskQueue     // Catch: java.lang.Throwable -> L8f
            java.lang.String r4 = " ping"
            java.lang.String r11 = kotlin.jvm.internal.Intrinsics.stringPlus(r11, r4)     // Catch: java.lang.Throwable -> L8f
            okhttp3.internal.ws.RealWebSocket$initReaderAndWriter$lambda-3$$inlined$schedule$1 r4 = new okhttp3.internal.ws.RealWebSocket$initReaderAndWriter$lambda-3$$inlined$schedule$1     // Catch: java.lang.Throwable -> L8f
            r4.<init>(r11, r10, r1)     // Catch: java.lang.Throwable -> L8f
            okhttp3.internal.concurrent.Task r4 = (okhttp3.internal.concurrent.Task) r4     // Catch: java.lang.Throwable -> L8f
            r3.schedule(r4, r1)     // Catch: java.lang.Throwable -> L8f
        L5d:
            java.util.ArrayDeque<java.lang.Object> r11 = r10.messageAndCloseQueue     // Catch: java.lang.Throwable -> L8f
            java.util.Collection r11 = (java.util.Collection) r11     // Catch: java.lang.Throwable -> L8f
            boolean r11 = r11.isEmpty()     // Catch: java.lang.Throwable -> L8f
            r11 = r11 ^ 1
            if (r11 == 0) goto L6c
            r10.runWriter()     // Catch: java.lang.Throwable -> L8f
        L6c:
            kotlin.Unit r11 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L8f
            monitor-exit(r10)
            okhttp3.internal.ws.WebSocketReader r11 = new okhttp3.internal.ws.WebSocketReader
            boolean r2 = r12.getClient()
            okio.BufferedSource r3 = r12.getSource()
            r4 = r10
            okhttp3.internal.ws.WebSocketReader$FrameCallback r4 = (okhttp3.internal.ws.WebSocketReader.FrameCallback) r4
            boolean r5 = r0.perMessageDeflate
            boolean r12 = r12.getClient()
            r12 = r12 ^ 1
            boolean r6 = r0.noContextTakeover(r12)
            r1 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            r10.reader = r11
            return
        L8f:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
    }

    public final void loopReader() throws java.io.IOException {
            r2 = this;
        L0:
            int r0 = r2.receivedCloseCode
            r1 = -1
            if (r0 != r1) goto Le
            okhttp3.internal.ws.WebSocketReader r0 = r2.reader
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            r0.processNextFrame()
            goto L0
        Le:
            return
    }

    @Override
    public void onReadClose(int r6, java.lang.String r7) {
            r5 = this;
            java.lang.String r0 = "reason"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            r0 = 1
            r1 = 0
            r2 = -1
            if (r6 == r2) goto Lc
            r3 = r0
            goto Ld
        Lc:
            r3 = r1
        Ld:
            if (r3 == 0) goto L95
            monitor-enter(r5)
            int r3 = r5.receivedCloseCode     // Catch: java.lang.Throwable -> L92
            if (r3 != r2) goto L15
            goto L16
        L15:
            r0 = r1
        L16:
            if (r0 == 0) goto L86
            r5.receivedCloseCode = r6     // Catch: java.lang.Throwable -> L92
            r5.receivedCloseReason = r7     // Catch: java.lang.Throwable -> L92
            boolean r0 = r5.enqueuedClose     // Catch: java.lang.Throwable -> L92
            r1 = 0
            if (r0 == 0) goto L3c
            java.util.ArrayDeque<java.lang.Object> r0 = r5.messageAndCloseQueue     // Catch: java.lang.Throwable -> L92
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L92
            if (r0 == 0) goto L3c
            okhttp3.internal.ws.RealWebSocket$Streams r0 = r5.streams     // Catch: java.lang.Throwable -> L92
            r5.streams = r1     // Catch: java.lang.Throwable -> L92
            okhttp3.internal.ws.WebSocketReader r2 = r5.reader     // Catch: java.lang.Throwable -> L92
            r5.reader = r1     // Catch: java.lang.Throwable -> L92
            okhttp3.internal.ws.WebSocketWriter r3 = r5.writer     // Catch: java.lang.Throwable -> L92
            r5.writer = r1     // Catch: java.lang.Throwable -> L92
            okhttp3.internal.concurrent.TaskQueue r1 = r5.taskQueue     // Catch: java.lang.Throwable -> L92
            r1.shutdown()     // Catch: java.lang.Throwable -> L92
            r1 = r0
            goto L3e
        L3c:
            r2 = r1
            r3 = r2
        L3e:
            kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L92
            monitor-exit(r5)
            okhttp3.WebSocketListener r0 = r5.listener     // Catch: java.lang.Throwable -> L6c
            r4 = r5
            okhttp3.WebSocket r4 = (okhttp3.WebSocket) r4     // Catch: java.lang.Throwable -> L6c
            r0.onClosing(r4, r6, r7)     // Catch: java.lang.Throwable -> L6c
            if (r1 == 0) goto L53
            okhttp3.WebSocketListener r0 = r5.listener     // Catch: java.lang.Throwable -> L6c
            r4 = r5
            okhttp3.WebSocket r4 = (okhttp3.WebSocket) r4     // Catch: java.lang.Throwable -> L6c
            r0.onClosed(r4, r6, r7)     // Catch: java.lang.Throwable -> L6c
        L53:
            if (r1 != 0) goto L56
            goto L5b
        L56:
            java.io.Closeable r1 = (java.io.Closeable) r1
            okhttp3.internal.Util.closeQuietly(r1)
        L5b:
            if (r2 != 0) goto L5e
            goto L63
        L5e:
            java.io.Closeable r2 = (java.io.Closeable) r2
            okhttp3.internal.Util.closeQuietly(r2)
        L63:
            if (r3 != 0) goto L66
            goto L6b
        L66:
            java.io.Closeable r3 = (java.io.Closeable) r3
            okhttp3.internal.Util.closeQuietly(r3)
        L6b:
            return
        L6c:
            r6 = move-exception
            if (r1 != 0) goto L70
            goto L75
        L70:
            java.io.Closeable r1 = (java.io.Closeable) r1
            okhttp3.internal.Util.closeQuietly(r1)
        L75:
            if (r2 != 0) goto L78
            goto L7d
        L78:
            java.io.Closeable r2 = (java.io.Closeable) r2
            okhttp3.internal.Util.closeQuietly(r2)
        L7d:
            if (r3 != 0) goto L80
            goto L85
        L80:
            java.io.Closeable r3 = (java.io.Closeable) r3
            okhttp3.internal.Util.closeQuietly(r3)
        L85:
            throw r6
        L86:
            java.lang.String r6 = "already closed"
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L92
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L92
            r7.<init>(r6)     // Catch: java.lang.Throwable -> L92
            throw r7     // Catch: java.lang.Throwable -> L92
        L92:
            r6 = move-exception
            monitor-exit(r5)
            throw r6
        L95:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            java.lang.String r7 = "Failed requirement."
            java.lang.String r7 = r7.toString()
            r6.<init>(r7)
            throw r6
    }

    @Override
    public void onReadMessage(java.lang.String r3) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "text"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okhttp3.WebSocketListener r0 = r2.listener
            r1 = r2
            okhttp3.WebSocket r1 = (okhttp3.WebSocket) r1
            r0.onMessage(r1, r3)
            return
    }

    @Override
    public void onReadMessage(okio.ByteString r3) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "bytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okhttp3.WebSocketListener r0 = r2.listener
            r1 = r2
            okhttp3.WebSocket r1 = (okhttp3.WebSocket) r1
            r0.onMessage(r1, r3)
            return
    }

    @Override
    public synchronized void onReadPing(okio.ByteString r2) {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = "payload"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)     // Catch: java.lang.Throwable -> L29
            boolean r0 = r1.failed     // Catch: java.lang.Throwable -> L29
            if (r0 != 0) goto L27
            boolean r0 = r1.enqueuedClose     // Catch: java.lang.Throwable -> L29
            if (r0 == 0) goto L17
            java.util.ArrayDeque<java.lang.Object> r0 = r1.messageAndCloseQueue     // Catch: java.lang.Throwable -> L29
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L29
            if (r0 == 0) goto L17
            goto L27
        L17:
            java.util.ArrayDeque<okio.ByteString> r0 = r1.pongQueue     // Catch: java.lang.Throwable -> L29
            r0.add(r2)     // Catch: java.lang.Throwable -> L29
            r1.runWriter()     // Catch: java.lang.Throwable -> L29
            int r2 = r1.receivedPingCount     // Catch: java.lang.Throwable -> L29
            int r2 = r2 + 1
            r1.receivedPingCount = r2     // Catch: java.lang.Throwable -> L29
            monitor-exit(r1)
            return
        L27:
            monitor-exit(r1)
            return
        L29:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public synchronized void onReadPong(okio.ByteString r2) {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = "payload"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)     // Catch: java.lang.Throwable -> L11
            int r2 = r1.receivedPongCount     // Catch: java.lang.Throwable -> L11
            int r2 = r2 + 1
            r1.receivedPongCount = r2     // Catch: java.lang.Throwable -> L11
            r2 = 0
            r1.awaitingPong = r2     // Catch: java.lang.Throwable -> L11
            monitor-exit(r1)
            return
        L11:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final synchronized boolean pong(okio.ByteString r2) {
            r1 = this;
            monitor-enter(r1)
            java.lang.String r0 = "payload"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)     // Catch: java.lang.Throwable -> L25
            boolean r0 = r1.failed     // Catch: java.lang.Throwable -> L25
            if (r0 != 0) goto L22
            boolean r0 = r1.enqueuedClose     // Catch: java.lang.Throwable -> L25
            if (r0 == 0) goto L17
            java.util.ArrayDeque<java.lang.Object> r0 = r1.messageAndCloseQueue     // Catch: java.lang.Throwable -> L25
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L25
            if (r0 == 0) goto L17
            goto L22
        L17:
            java.util.ArrayDeque<okio.ByteString> r0 = r1.pongQueue     // Catch: java.lang.Throwable -> L25
            r0.add(r2)     // Catch: java.lang.Throwable -> L25
            r1.runWriter()     // Catch: java.lang.Throwable -> L25
            r2 = 1
            monitor-exit(r1)
            return r2
        L22:
            r2 = 0
            monitor-exit(r1)
            return r2
        L25:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final boolean processNextFrame() throws java.io.IOException {
            r3 = this;
            r0 = 0
            okhttp3.internal.ws.WebSocketReader r1 = r3.reader     // Catch: java.lang.Exception -> L10
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)     // Catch: java.lang.Exception -> L10
            r1.processNextFrame()     // Catch: java.lang.Exception -> L10
            int r1 = r3.receivedCloseCode     // Catch: java.lang.Exception -> L10
            r2 = -1
            if (r1 != r2) goto L15
            r0 = 1
            goto L15
        L10:
            r1 = move-exception
            r2 = 0
            r3.failWebSocket(r1, r2)
        L15:
            return r0
    }

    @Override
    public synchronized long queueSize() {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.queueSize     // Catch: java.lang.Throwable -> L5
            monitor-exit(r2)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final synchronized int receivedPingCount() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.receivedPingCount     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final synchronized int receivedPongCount() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.receivedPongCount     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public okhttp3.Request request() {
            r1 = this;
            okhttp3.Request r0 = r1.originalRequest
            return r0
    }

    @Override
    public boolean send(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "text"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.ByteString$Companion r0 = okio.ByteString.Companion
            okio.ByteString r2 = r0.encodeUtf8(r2)
            r0 = 1
            boolean r2 = r1.send(r2, r0)
            return r2
    }

    @Override
    public boolean send(okio.ByteString r2) {
            r1 = this;
            java.lang.String r0 = "bytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 2
            boolean r2 = r1.send(r2, r0)
            return r2
    }

    public final synchronized int sentPingCount() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.sentPingCount     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final void tearDown() throws java.lang.InterruptedException {
            r4 = this;
            okhttp3.internal.concurrent.TaskQueue r0 = r4.taskQueue
            r0.shutdown()
            okhttp3.internal.concurrent.TaskQueue r0 = r4.taskQueue
            java.util.concurrent.CountDownLatch r0 = r0.idleLatch()
            java.util.concurrent.TimeUnit r1 = java.util.concurrent.TimeUnit.SECONDS
            r2 = 10
            r0.await(r2, r1)
            return
    }

    public final boolean writeOneFrame$okhttp() throws java.io.IOException {
            r13 = this;
            monitor-enter(r13)
            boolean r0 = r13.failed     // Catch: java.lang.Throwable -> L100
            r1 = 0
            if (r0 == 0) goto L8
            monitor-exit(r13)
            return r1
        L8:
            okhttp3.internal.ws.WebSocketWriter r0 = r13.writer     // Catch: java.lang.Throwable -> L100
            java.util.ArrayDeque<okio.ByteString> r2 = r13.pongQueue     // Catch: java.lang.Throwable -> L100
            java.lang.Object r2 = r2.poll()     // Catch: java.lang.Throwable -> L100
            r3 = 1
            r4 = -1
            r5 = 0
            if (r2 != 0) goto L6a
            java.util.ArrayDeque<java.lang.Object> r6 = r13.messageAndCloseQueue     // Catch: java.lang.Throwable -> L100
            java.lang.Object r6 = r6.poll()     // Catch: java.lang.Throwable -> L100
            boolean r7 = r6 instanceof okhttp3.internal.ws.RealWebSocket.Close     // Catch: java.lang.Throwable -> L100
            if (r7 == 0) goto L60
            int r1 = r13.receivedCloseCode     // Catch: java.lang.Throwable -> L100
            java.lang.String r7 = r13.receivedCloseReason     // Catch: java.lang.Throwable -> L100
            if (r1 == r4) goto L3b
            okhttp3.internal.ws.RealWebSocket$Streams r4 = r13.streams     // Catch: java.lang.Throwable -> L100
            r13.streams = r5     // Catch: java.lang.Throwable -> L100
            okhttp3.internal.ws.WebSocketReader r8 = r13.reader     // Catch: java.lang.Throwable -> L100
            r13.reader = r5     // Catch: java.lang.Throwable -> L100
            okhttp3.internal.ws.WebSocketWriter r9 = r13.writer     // Catch: java.lang.Throwable -> L100
            r13.writer = r5     // Catch: java.lang.Throwable -> L100
            okhttp3.internal.concurrent.TaskQueue r5 = r13.taskQueue     // Catch: java.lang.Throwable -> L100
            r5.shutdown()     // Catch: java.lang.Throwable -> L100
            r5 = r6
            r12 = r4
            r4 = r1
            r1 = r12
            goto L6e
        L3b:
            r4 = r6
            okhttp3.internal.ws.RealWebSocket$Close r4 = (okhttp3.internal.ws.RealWebSocket.Close) r4     // Catch: java.lang.Throwable -> L100
            long r8 = r4.getCancelAfterCloseMillis()     // Catch: java.lang.Throwable -> L100
            okhttp3.internal.concurrent.TaskQueue r4 = r13.taskQueue     // Catch: java.lang.Throwable -> L100
            java.lang.String r10 = r13.name     // Catch: java.lang.Throwable -> L100
            java.lang.String r11 = " cancel"
            java.lang.String r10 = kotlin.jvm.internal.Intrinsics.stringPlus(r10, r11)     // Catch: java.lang.Throwable -> L100
            java.util.concurrent.TimeUnit r11 = java.util.concurrent.TimeUnit.MILLISECONDS     // Catch: java.lang.Throwable -> L100
            long r8 = r11.toNanos(r8)     // Catch: java.lang.Throwable -> L100
            okhttp3.internal.ws.RealWebSocket$writeOneFrame$lambda-8$$inlined$execute$default$1 r11 = new okhttp3.internal.ws.RealWebSocket$writeOneFrame$lambda-8$$inlined$execute$default$1     // Catch: java.lang.Throwable -> L100
            r11.<init>(r10, r3, r13)     // Catch: java.lang.Throwable -> L100
            okhttp3.internal.concurrent.Task r11 = (okhttp3.internal.concurrent.Task) r11     // Catch: java.lang.Throwable -> L100
            r4.schedule(r11, r8)     // Catch: java.lang.Throwable -> L100
            r4 = r1
            r1 = r5
            r8 = r1
            goto L67
        L60:
            if (r6 != 0) goto L64
            monitor-exit(r13)
            return r1
        L64:
            r1 = r5
            r7 = r1
            r8 = r7
        L67:
            r9 = r8
            r5 = r6
            goto L6e
        L6a:
            r1 = r5
            r7 = r1
            r8 = r7
            r9 = r8
        L6e:
            kotlin.Unit r6 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L100
            monitor-exit(r13)
            if (r2 == 0) goto L7c
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)     // Catch: java.lang.Throwable -> Le6
            okio.ByteString r2 = (okio.ByteString) r2     // Catch: java.lang.Throwable -> Le6
            r0.writePong(r2)     // Catch: java.lang.Throwable -> Le6
            goto Lc7
        L7c:
            boolean r2 = r5 instanceof okhttp3.internal.ws.RealWebSocket.Message     // Catch: java.lang.Throwable -> Le6
            if (r2 == 0) goto La6
            okhttp3.internal.ws.RealWebSocket$Message r5 = (okhttp3.internal.ws.RealWebSocket.Message) r5     // Catch: java.lang.Throwable -> Le6
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)     // Catch: java.lang.Throwable -> Le6
            int r2 = r5.getFormatOpcode()     // Catch: java.lang.Throwable -> Le6
            okio.ByteString r4 = r5.getData()     // Catch: java.lang.Throwable -> Le6
            r0.writeMessageFrame(r2, r4)     // Catch: java.lang.Throwable -> Le6
            monitor-enter(r13)     // Catch: java.lang.Throwable -> Le6
            long r6 = r13.queueSize     // Catch: java.lang.Throwable -> La3
            okio.ByteString r0 = r5.getData()     // Catch: java.lang.Throwable -> La3
            int r0 = r0.size()     // Catch: java.lang.Throwable -> La3
            long r4 = (long) r0     // Catch: java.lang.Throwable -> La3
            long r6 = r6 - r4
            r13.queueSize = r6     // Catch: java.lang.Throwable -> La3
            kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> La3
            monitor-exit(r13)     // Catch: java.lang.Throwable -> Le6
            goto Lc7
        La3:
            r0 = move-exception
            monitor-exit(r13)     // Catch: java.lang.Throwable -> Le6
            throw r0     // Catch: java.lang.Throwable -> Le6
        La6:
            boolean r2 = r5 instanceof okhttp3.internal.ws.RealWebSocket.Close     // Catch: java.lang.Throwable -> Le6
            if (r2 == 0) goto Le0
            okhttp3.internal.ws.RealWebSocket$Close r5 = (okhttp3.internal.ws.RealWebSocket.Close) r5     // Catch: java.lang.Throwable -> Le6
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)     // Catch: java.lang.Throwable -> Le6
            int r2 = r5.getCode()     // Catch: java.lang.Throwable -> Le6
            okio.ByteString r5 = r5.getReason()     // Catch: java.lang.Throwable -> Le6
            r0.writeClose(r2, r5)     // Catch: java.lang.Throwable -> Le6
            if (r1 == 0) goto Lc7
            okhttp3.WebSocketListener r0 = r13.listener     // Catch: java.lang.Throwable -> Le6
            r2 = r13
            okhttp3.WebSocket r2 = (okhttp3.WebSocket) r2     // Catch: java.lang.Throwable -> Le6
            kotlin.jvm.internal.Intrinsics.checkNotNull(r7)     // Catch: java.lang.Throwable -> Le6
            r0.onClosed(r2, r4, r7)     // Catch: java.lang.Throwable -> Le6
        Lc7:
            if (r1 != 0) goto Lca
            goto Lcf
        Lca:
            java.io.Closeable r1 = (java.io.Closeable) r1
            okhttp3.internal.Util.closeQuietly(r1)
        Lcf:
            if (r8 != 0) goto Ld2
            goto Ld7
        Ld2:
            java.io.Closeable r8 = (java.io.Closeable) r8
            okhttp3.internal.Util.closeQuietly(r8)
        Ld7:
            if (r9 != 0) goto Lda
            goto Ldf
        Lda:
            java.io.Closeable r9 = (java.io.Closeable) r9
            okhttp3.internal.Util.closeQuietly(r9)
        Ldf:
            return r3
        Le0:
            java.lang.AssertionError r0 = new java.lang.AssertionError     // Catch: java.lang.Throwable -> Le6
            r0.<init>()     // Catch: java.lang.Throwable -> Le6
            throw r0     // Catch: java.lang.Throwable -> Le6
        Le6:
            r0 = move-exception
            if (r1 != 0) goto Lea
            goto Lef
        Lea:
            java.io.Closeable r1 = (java.io.Closeable) r1
            okhttp3.internal.Util.closeQuietly(r1)
        Lef:
            if (r8 != 0) goto Lf2
            goto Lf7
        Lf2:
            java.io.Closeable r8 = (java.io.Closeable) r8
            okhttp3.internal.Util.closeQuietly(r8)
        Lf7:
            if (r9 != 0) goto Lfa
            goto Lff
        Lfa:
            java.io.Closeable r9 = (java.io.Closeable) r9
            okhttp3.internal.Util.closeQuietly(r9)
        Lff:
            throw r0
        L100:
            r0 = move-exception
            monitor-exit(r13)
            throw r0
    }

    public final void writePingFrame$okhttp() {
            r7 = this;
            monitor-enter(r7)
            boolean r0 = r7.failed     // Catch: java.lang.Throwable -> L5d
            if (r0 == 0) goto L7
            monitor-exit(r7)
            return
        L7:
            okhttp3.internal.ws.WebSocketWriter r0 = r7.writer     // Catch: java.lang.Throwable -> L5d
            if (r0 != 0) goto Ld
            monitor-exit(r7)
            return
        Ld:
            boolean r1 = r7.awaitingPong     // Catch: java.lang.Throwable -> L5d
            r2 = -1
            if (r1 == 0) goto L15
            int r1 = r7.sentPingCount     // Catch: java.lang.Throwable -> L5d
            goto L16
        L15:
            r1 = r2
        L16:
            int r3 = r7.sentPingCount     // Catch: java.lang.Throwable -> L5d
            r4 = 1
            int r3 = r3 + r4
            r7.sentPingCount = r3     // Catch: java.lang.Throwable -> L5d
            r7.awaitingPong = r4     // Catch: java.lang.Throwable -> L5d
            kotlin.Unit r3 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L5d
            monitor-exit(r7)
            r3 = 0
            if (r1 == r2) goto L50
            java.net.SocketTimeoutException r0 = new java.net.SocketTimeoutException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r5 = "sent ping but didn't receive pong within "
            r2.append(r5)
            long r5 = r7.pingIntervalMillis
            r2.append(r5)
            java.lang.String r5 = "ms (after "
            r2.append(r5)
            int r1 = r1 - r4
            r2.append(r1)
            java.lang.String r1 = " successful ping/pongs)"
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            r0.<init>(r1)
            java.lang.Exception r0 = (java.lang.Exception) r0
            r7.failWebSocket(r0, r3)
            return
        L50:
            okio.ByteString r1 = okio.ByteString.EMPTY     // Catch: java.io.IOException -> L56
            r0.writePing(r1)     // Catch: java.io.IOException -> L56
            goto L5c
        L56:
            r0 = move-exception
            java.lang.Exception r0 = (java.lang.Exception) r0
            r7.failWebSocket(r0, r3)
        L5c:
            return
        L5d:
            r0 = move-exception
            monitor-exit(r7)
            throw r0
    }
}
