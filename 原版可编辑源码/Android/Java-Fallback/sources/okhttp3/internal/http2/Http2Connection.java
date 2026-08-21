package okhttp3.internal.http2;

@kotlin.Metadata(d1 = {"\u0000´\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010#\n\u0002\u0010\b\n\u0002\b\f\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010%\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u001d\n\u0002\u0018\u0002\n\u0002\b\u0014\u0018\u0000 \u0099\u00012\u00020\u0001:\b\u0098\u0001\u0099\u0001\u009a\u0001\u009b\u0001B\u000f\b\u0000\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\u0006\u0010P\u001a\u00020QJ\b\u0010R\u001a\u00020QH\u0016J'\u0010R\u001a\u00020Q2\u0006\u0010S\u001a\u00020T2\u0006\u0010U\u001a\u00020T2\b\u0010V\u001a\u0004\u0018\u00010WH\u0000¢\u0006\u0002\bXJ\u0012\u0010Y\u001a\u00020Q2\b\u0010Z\u001a\u0004\u0018\u00010WH\u0002J\u0006\u0010[\u001a\u00020QJ\u0010\u0010\\\u001a\u0004\u0018\u00010B2\u0006\u0010]\u001a\u00020\u0012J\u000e\u0010^\u001a\u00020\t2\u0006\u0010_\u001a\u00020\u0006J&\u0010`\u001a\u00020B2\u0006\u0010a\u001a\u00020\u00122\f\u0010b\u001a\b\u0012\u0004\u0012\u00020d0c2\u0006\u0010e\u001a\u00020\tH\u0002J\u001c\u0010`\u001a\u00020B2\f\u0010b\u001a\b\u0012\u0004\u0012\u00020d0c2\u0006\u0010e\u001a\u00020\tJ\u0006\u0010f\u001a\u00020\u0012J-\u0010g\u001a\u00020Q2\u0006\u0010h\u001a\u00020\u00122\u0006\u0010i\u001a\u00020j2\u0006\u0010k\u001a\u00020\u00122\u0006\u0010l\u001a\u00020\tH\u0000¢\u0006\u0002\bmJ+\u0010n\u001a\u00020Q2\u0006\u0010h\u001a\u00020\u00122\f\u0010b\u001a\b\u0012\u0004\u0012\u00020d0c2\u0006\u0010l\u001a\u00020\tH\u0000¢\u0006\u0002\boJ#\u0010p\u001a\u00020Q2\u0006\u0010h\u001a\u00020\u00122\f\u0010b\u001a\b\u0012\u0004\u0012\u00020d0cH\u0000¢\u0006\u0002\bqJ\u001d\u0010r\u001a\u00020Q2\u0006\u0010h\u001a\u00020\u00122\u0006\u0010s\u001a\u00020TH\u0000¢\u0006\u0002\btJ$\u0010u\u001a\u00020B2\u0006\u0010a\u001a\u00020\u00122\f\u0010b\u001a\b\u0012\u0004\u0012\u00020d0c2\u0006\u0010e\u001a\u00020\tJ\u0015\u0010v\u001a\u00020\t2\u0006\u0010h\u001a\u00020\u0012H\u0000¢\u0006\u0002\bwJ\u0017\u0010x\u001a\u0004\u0018\u00010B2\u0006\u0010h\u001a\u00020\u0012H\u0000¢\u0006\u0002\byJ\r\u0010z\u001a\u00020QH\u0000¢\u0006\u0002\b{J\u000e\u0010|\u001a\u00020Q2\u0006\u0010}\u001a\u00020&J\u000e\u0010~\u001a\u00020Q2\u0006\u0010\u007f\u001a\u00020TJ\u001e\u0010\u0080\u0001\u001a\u00020Q2\t\b\u0002\u0010\u0081\u0001\u001a\u00020\t2\b\b\u0002\u0010E\u001a\u00020FH\u0007J\u0018\u0010\u0082\u0001\u001a\u00020Q2\u0007\u0010\u0083\u0001\u001a\u00020\u0006H\u0000¢\u0006\u0003\b\u0084\u0001J,\u0010\u0085\u0001\u001a\u00020Q2\u0006\u0010h\u001a\u00020\u00122\u0007\u0010\u0086\u0001\u001a\u00020\t2\n\u0010\u0087\u0001\u001a\u0005\u0018\u00010\u0088\u00012\u0006\u0010k\u001a\u00020\u0006J/\u0010\u0089\u0001\u001a\u00020Q2\u0006\u0010h\u001a\u00020\u00122\u0007\u0010\u0086\u0001\u001a\u00020\t2\r\u0010\u008a\u0001\u001a\b\u0012\u0004\u0012\u00020d0cH\u0000¢\u0006\u0003\b\u008b\u0001J\u0007\u0010\u008c\u0001\u001a\u00020QJ\"\u0010\u008c\u0001\u001a\u00020Q2\u0007\u0010\u008d\u0001\u001a\u00020\t2\u0007\u0010\u008e\u0001\u001a\u00020\u00122\u0007\u0010\u008f\u0001\u001a\u00020\u0012J\u0007\u0010\u0090\u0001\u001a\u00020QJ\u001f\u0010\u0091\u0001\u001a\u00020Q2\u0006\u0010h\u001a\u00020\u00122\u0006\u0010\u007f\u001a\u00020TH\u0000¢\u0006\u0003\b\u0092\u0001J\u001f\u0010\u0093\u0001\u001a\u00020Q2\u0006\u0010h\u001a\u00020\u00122\u0006\u0010s\u001a\u00020TH\u0000¢\u0006\u0003\b\u0094\u0001J \u0010\u0095\u0001\u001a\u00020Q2\u0006\u0010h\u001a\u00020\u00122\u0007\u0010\u0096\u0001\u001a\u00020\u0006H\u0000¢\u0006\u0003\b\u0097\u0001R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\b\u001a\u00020\tX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0014\u0010\f\u001a\u00020\rX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0014\u0010\u0010\u001a\b\u0012\u0004\u0012\u00020\u00120\u0011X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0014\u001a\u00020\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0015\u001a\u00020\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0016\u001a\u00020\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0017\u001a\u00020\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0018\u001a\u00020\tX\u0082\u000e¢\u0006\u0002\n\u0000R\u001a\u0010\u0019\u001a\u00020\u0012X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001a\u0010\u001b\"\u0004\b\u001c\u0010\u001dR\u0014\u0010\u001e\u001a\u00020\u001fX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b \u0010!R\u001a\u0010\"\u001a\u00020\u0012X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b#\u0010\u001b\"\u0004\b$\u0010\u001dR\u0011\u0010%\u001a\u00020&¢\u0006\b\n\u0000\u001a\u0004\b'\u0010(R\u001a\u0010)\u001a\u00020&X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b*\u0010(\"\u0004\b+\u0010,R\u000e\u0010-\u001a\u00020.X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010/\u001a\u000200X\u0082\u0004¢\u0006\u0002\n\u0000R\u001e\u00102\u001a\u00020\u00062\u0006\u00101\u001a\u00020\u0006@BX\u0086\u000e¢\u0006\b\n\u0000\u001a\u0004\b3\u00104R\u001e\u00105\u001a\u00020\u00062\u0006\u00101\u001a\u00020\u0006@BX\u0086\u000e¢\u0006\b\n\u0000\u001a\u0004\b6\u00104R\u0015\u00107\u001a\u000608R\u00020\u0000¢\u0006\b\n\u0000\u001a\u0004\b9\u0010:R\u000e\u0010;\u001a\u000200X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010<\u001a\u00020=X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b>\u0010?R \u0010@\u001a\u000e\u0012\u0004\u0012\u00020\u0012\u0012\u0004\u0012\u00020B0AX\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\bC\u0010DR\u000e\u0010E\u001a\u00020FX\u0082\u0004¢\u0006\u0002\n\u0000R\u001e\u0010G\u001a\u00020\u00062\u0006\u00101\u001a\u00020\u0006@BX\u0086\u000e¢\u0006\b\n\u0000\u001a\u0004\bH\u00104R\u001e\u0010I\u001a\u00020\u00062\u0006\u00101\u001a\u00020\u0006@BX\u0086\u000e¢\u0006\b\n\u0000\u001a\u0004\bJ\u00104R\u0011\u0010K\u001a\u00020L¢\u0006\b\n\u0000\u001a\u0004\bM\u0010NR\u000e\u0010O\u001a\u000200X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u009c\u0001"}, d2 = {"Lokhttp3/internal/http2/Http2Connection;", "Ljava/io/Closeable;", "builder", "Lokhttp3/internal/http2/Http2Connection$Builder;", "(Lokhttp3/internal/http2/Http2Connection$Builder;)V", "awaitPingsSent", "", "awaitPongsReceived", "client", "", "getClient$okhttp", "()Z", "connectionName", "", "getConnectionName$okhttp", "()Ljava/lang/String;", "currentPushRequests", "", "", "degradedPingsSent", "degradedPongDeadlineNs", "degradedPongsReceived", "intervalPingsSent", "intervalPongsReceived", "isShutdown", "lastGoodStreamId", "getLastGoodStreamId$okhttp", "()I", "setLastGoodStreamId$okhttp", "(I)V", "listener", "Lokhttp3/internal/http2/Http2Connection$Listener;", "getListener$okhttp", "()Lokhttp3/internal/http2/Http2Connection$Listener;", "nextStreamId", "getNextStreamId$okhttp", "setNextStreamId$okhttp", "okHttpSettings", "Lokhttp3/internal/http2/Settings;", "getOkHttpSettings", "()Lokhttp3/internal/http2/Settings;", "peerSettings", "getPeerSettings", "setPeerSettings", "(Lokhttp3/internal/http2/Settings;)V", "pushObserver", "Lokhttp3/internal/http2/PushObserver;", "pushQueue", "Lokhttp3/internal/concurrent/TaskQueue;", "<set-?>", "readBytesAcknowledged", "getReadBytesAcknowledged", "()J", "readBytesTotal", "getReadBytesTotal", "readerRunnable", "Lokhttp3/internal/http2/Http2Connection$ReaderRunnable;", "getReaderRunnable", "()Lokhttp3/internal/http2/Http2Connection$ReaderRunnable;", "settingsListenerQueue", "socket", "Ljava/net/Socket;", "getSocket$okhttp", "()Ljava/net/Socket;", "streams", "", "Lokhttp3/internal/http2/Http2Stream;", "getStreams$okhttp", "()Ljava/util/Map;", "taskRunner", "Lokhttp3/internal/concurrent/TaskRunner;", "writeBytesMaximum", "getWriteBytesMaximum", "writeBytesTotal", "getWriteBytesTotal", "writer", "Lokhttp3/internal/http2/Http2Writer;", "getWriter", "()Lokhttp3/internal/http2/Http2Writer;", "writerQueue", "awaitPong", "", "close", "connectionCode", "Lokhttp3/internal/http2/ErrorCode;", "streamCode", "cause", "Ljava/io/IOException;", "close$okhttp", "failConnection", "e", "flush", "getStream", "id", "isHealthy", "nowNs", "newStream", "associatedStreamId", "requestHeaders", "", "Lokhttp3/internal/http2/Header;", "out", "openStreamCount", "pushDataLater", "streamId", "source", "Lokio/BufferedSource;", "byteCount", "inFinished", "pushDataLater$okhttp", "pushHeadersLater", "pushHeadersLater$okhttp", "pushRequestLater", "pushRequestLater$okhttp", "pushResetLater", "errorCode", "pushResetLater$okhttp", "pushStream", "pushedStream", "pushedStream$okhttp", "removeStream", "removeStream$okhttp", "sendDegradedPingLater", "sendDegradedPingLater$okhttp", "setSettings", "settings", "shutdown", "statusCode", "start", "sendConnectionPreface", "updateConnectionFlowControl", "read", "updateConnectionFlowControl$okhttp", "writeData", "outFinished", "buffer", "Lokio/Buffer;", "writeHeaders", "alternating", "writeHeaders$okhttp", "writePing", "reply", "payload1", "payload2", "writePingAndAwaitPong", "writeSynReset", "writeSynReset$okhttp", "writeSynResetLater", "writeSynResetLater$okhttp", "writeWindowUpdateLater", "unacknowledgedBytesRead", "writeWindowUpdateLater$okhttp", "Builder", "Companion", "Listener", "ReaderRunnable", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class Http2Connection implements java.io.Closeable {
    public static final int AWAIT_PING = 3;
    public static final okhttp3.internal.http2.Http2Connection.Companion Companion = null;
    private static final okhttp3.internal.http2.Settings DEFAULT_SETTINGS = null;
    public static final int DEGRADED_PING = 2;
    public static final int DEGRADED_PONG_TIMEOUT_NS = 1000000000;
    public static final int INTERVAL_PING = 1;
    public static final int OKHTTP_CLIENT_WINDOW_SIZE = 16777216;
    private long awaitPingsSent;
    private long awaitPongsReceived;
    private final boolean client;
    private final java.lang.String connectionName;
    private final java.util.Set<java.lang.Integer> currentPushRequests;
    private long degradedPingsSent;
    private long degradedPongDeadlineNs;
    private long degradedPongsReceived;
    private long intervalPingsSent;
    private long intervalPongsReceived;
    private boolean isShutdown;
    private int lastGoodStreamId;
    private final okhttp3.internal.http2.Http2Connection.Listener listener;
    private int nextStreamId;
    private final okhttp3.internal.http2.Settings okHttpSettings;
    private okhttp3.internal.http2.Settings peerSettings;
    private final okhttp3.internal.http2.PushObserver pushObserver;
    private final okhttp3.internal.concurrent.TaskQueue pushQueue;
    private long readBytesAcknowledged;
    private long readBytesTotal;
    private final okhttp3.internal.http2.Http2Connection.ReaderRunnable readerRunnable;
    private final okhttp3.internal.concurrent.TaskQueue settingsListenerQueue;
    private final java.net.Socket socket;
    private final java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> streams;
    private final okhttp3.internal.concurrent.TaskRunner taskRunner;
    private long writeBytesMaximum;
    private long writeBytesTotal;
    private final okhttp3.internal.http2.Http2Writer writer;
    private final okhttp3.internal.concurrent.TaskQueue writerQueue;

    class 1 extends okhttp3.internal.NamedRunnable {
        final okhttp3.internal.http2.Http2Connection this$0;
        final okhttp3.internal.http2.ErrorCode val$errorCode;
        final int val$streamId;

        1(okhttp3.internal.http2.Http2Connection r1, java.lang.String r2, java.lang.Object[] r3, int r4, okhttp3.internal.http2.ErrorCode r5) {
                r0 = this;
                r0.this$0 = r1
                r0.val$streamId = r4
                r0.val$errorCode = r5
                r0.<init>(r2, r3)
                return
        }

        @Override
        public void execute() {
                r3 = this;
                okhttp3.internal.http2.Http2Connection r0 = r3.this$0     // Catch: java.io.IOException -> La
                int r1 = r3.val$streamId     // Catch: java.io.IOException -> La
                okhttp3.internal.http2.ErrorCode r2 = r3.val$errorCode     // Catch: java.io.IOException -> La
                r0.writeSynReset(r1, r2)     // Catch: java.io.IOException -> La
                goto Lf
            La:
                okhttp3.internal.http2.Http2Connection r0 = r3.this$0
                okhttp3.internal.http2.Http2Connection.access$000(r0)
            Lf:
                return
        }
    }

    class 2 extends okhttp3.internal.NamedRunnable {
        final okhttp3.internal.http2.Http2Connection this$0;
        final int val$streamId;
        final long val$unacknowledgedBytesRead;

        2(okhttp3.internal.http2.Http2Connection r1, java.lang.String r2, java.lang.Object[] r3, int r4, long r5) {
                r0 = this;
                r0.this$0 = r1
                r0.val$streamId = r4
                r0.val$unacknowledgedBytesRead = r5
                r0.<init>(r2, r3)
                return
        }

        @Override
        public void execute() {
                r4 = this;
                okhttp3.internal.http2.Http2Connection r0 = r4.this$0     // Catch: java.io.IOException -> Lc
                okhttp3.internal.http2.Http2Writer r0 = r0.writer     // Catch: java.io.IOException -> Lc
                int r1 = r4.val$streamId     // Catch: java.io.IOException -> Lc
                long r2 = r4.val$unacknowledgedBytesRead     // Catch: java.io.IOException -> Lc
                r0.windowUpdate(r1, r2)     // Catch: java.io.IOException -> Lc
                goto L11
            Lc:
                okhttp3.internal.http2.Http2Connection r0 = r4.this$0
                okhttp3.internal.http2.Http2Connection.access$000(r0)
            L11:
                return
        }
    }

    class 3 extends okhttp3.internal.NamedRunnable {
        final okhttp3.internal.http2.Http2Connection this$0;
        final java.util.List val$requestHeaders;
        final int val$streamId;

        3(okhttp3.internal.http2.Http2Connection r1, java.lang.String r2, java.lang.Object[] r3, int r4, java.util.List r5) {
                r0 = this;
                r0.this$0 = r1
                r0.val$streamId = r4
                r0.val$requestHeaders = r5
                r0.<init>(r2, r3)
                return
        }

        @Override
        public void execute() {
                r3 = this;
                okhttp3.internal.http2.Http2Connection r0 = r3.this$0
                okhttp3.internal.http2.PushObserver r0 = r0.pushObserver
                int r1 = r3.val$streamId
                java.util.List r2 = r3.val$requestHeaders
                boolean r0 = r0.onRequest(r1, r2)
                if (r0 == 0) goto L2e
                okhttp3.internal.http2.Http2Connection r0 = r3.this$0     // Catch: java.io.IOException -> L2e
                okhttp3.internal.http2.Http2Writer r0 = r0.writer     // Catch: java.io.IOException -> L2e
                int r1 = r3.val$streamId     // Catch: java.io.IOException -> L2e
                okhttp3.internal.http2.ErrorCode r2 = okhttp3.internal.http2.ErrorCode.CANCEL     // Catch: java.io.IOException -> L2e
                r0.rstStream(r1, r2)     // Catch: java.io.IOException -> L2e
                okhttp3.internal.http2.Http2Connection r0 = r3.this$0     // Catch: java.io.IOException -> L2e
                monitor-enter(r0)     // Catch: java.io.IOException -> L2e
                okhttp3.internal.http2.Http2Connection r1 = r3.this$0     // Catch: java.lang.Throwable -> L2b
                java.util.Set<java.lang.Integer> r1 = r1.currentPushRequests     // Catch: java.lang.Throwable -> L2b
                int r2 = r3.val$streamId     // Catch: java.lang.Throwable -> L2b
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L2b
                r1.remove(r2)     // Catch: java.lang.Throwable -> L2b
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
                goto L2e
            L2b:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L2b
                throw r1     // Catch: java.io.IOException -> L2e
            L2e:
                return
        }
    }

    class 4 extends okhttp3.internal.NamedRunnable {
        final okhttp3.internal.http2.Http2Connection this$0;
        final boolean val$inFinished;
        final java.util.List val$requestHeaders;
        final int val$streamId;

        4(okhttp3.internal.http2.Http2Connection r1, java.lang.String r2, java.lang.Object[] r3, int r4, java.util.List r5, boolean r6) {
                r0 = this;
                r0.this$0 = r1
                r0.val$streamId = r4
                r0.val$requestHeaders = r5
                r0.val$inFinished = r6
                r0.<init>(r2, r3)
                return
        }

        @Override
        public void execute() {
                r4 = this;
                okhttp3.internal.http2.Http2Connection r0 = r4.this$0
                okhttp3.internal.http2.PushObserver r0 = r0.pushObserver
                int r1 = r4.val$streamId
                java.util.List r2 = r4.val$requestHeaders
                boolean r3 = r4.val$inFinished
                boolean r0 = r0.onHeaders(r1, r2, r3)
                if (r0 == 0) goto L1b
                okhttp3.internal.http2.Http2Connection r1 = r4.this$0     // Catch: java.io.IOException -> L36
                okhttp3.internal.http2.Http2Writer r1 = r1.writer     // Catch: java.io.IOException -> L36
                int r2 = r4.val$streamId     // Catch: java.io.IOException -> L36
                okhttp3.internal.http2.ErrorCode r3 = okhttp3.internal.http2.ErrorCode.CANCEL     // Catch: java.io.IOException -> L36
                r1.rstStream(r2, r3)     // Catch: java.io.IOException -> L36
            L1b:
                if (r0 != 0) goto L21
                boolean r0 = r4.val$inFinished     // Catch: java.io.IOException -> L36
                if (r0 == 0) goto L36
            L21:
                okhttp3.internal.http2.Http2Connection r0 = r4.this$0     // Catch: java.io.IOException -> L36
                monitor-enter(r0)     // Catch: java.io.IOException -> L36
                okhttp3.internal.http2.Http2Connection r1 = r4.this$0     // Catch: java.lang.Throwable -> L33
                java.util.Set<java.lang.Integer> r1 = r1.currentPushRequests     // Catch: java.lang.Throwable -> L33
                int r2 = r4.val$streamId     // Catch: java.lang.Throwable -> L33
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L33
                r1.remove(r2)     // Catch: java.lang.Throwable -> L33
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L33
                goto L36
            L33:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L33
                throw r1     // Catch: java.io.IOException -> L36
            L36:
                return
        }
    }

    class 5 extends okhttp3.internal.NamedRunnable {
        final okhttp3.internal.http2.Http2Connection this$0;
        final okio.Buffer val$buffer;
        final int val$byteCount;
        final boolean val$inFinished;
        final int val$streamId;

        5(okhttp3.internal.http2.Http2Connection r1, java.lang.String r2, java.lang.Object[] r3, int r4, okio.Buffer r5, int r6, boolean r7) {
                r0 = this;
                r0.this$0 = r1
                r0.val$streamId = r4
                r0.val$buffer = r5
                r0.val$byteCount = r6
                r0.val$inFinished = r7
                r0.<init>(r2, r3)
                return
        }

        @Override
        public void execute() {
                r5 = this;
                okhttp3.internal.http2.Http2Connection r0 = r5.this$0     // Catch: java.io.IOException -> L38
                okhttp3.internal.http2.PushObserver r0 = r0.pushObserver     // Catch: java.io.IOException -> L38
                int r1 = r5.val$streamId     // Catch: java.io.IOException -> L38
                okio.Buffer r2 = r5.val$buffer     // Catch: java.io.IOException -> L38
                int r3 = r5.val$byteCount     // Catch: java.io.IOException -> L38
                boolean r4 = r5.val$inFinished     // Catch: java.io.IOException -> L38
                boolean r0 = r0.onData(r1, r2, r3, r4)     // Catch: java.io.IOException -> L38
                if (r0 == 0) goto L1d
                okhttp3.internal.http2.Http2Connection r1 = r5.this$0     // Catch: java.io.IOException -> L38
                okhttp3.internal.http2.Http2Writer r1 = r1.writer     // Catch: java.io.IOException -> L38
                int r2 = r5.val$streamId     // Catch: java.io.IOException -> L38
                okhttp3.internal.http2.ErrorCode r3 = okhttp3.internal.http2.ErrorCode.CANCEL     // Catch: java.io.IOException -> L38
                r1.rstStream(r2, r3)     // Catch: java.io.IOException -> L38
            L1d:
                if (r0 != 0) goto L23
                boolean r0 = r5.val$inFinished     // Catch: java.io.IOException -> L38
                if (r0 == 0) goto L38
            L23:
                okhttp3.internal.http2.Http2Connection r0 = r5.this$0     // Catch: java.io.IOException -> L38
                monitor-enter(r0)     // Catch: java.io.IOException -> L38
                okhttp3.internal.http2.Http2Connection r1 = r5.this$0     // Catch: java.lang.Throwable -> L35
                java.util.Set<java.lang.Integer> r1 = r1.currentPushRequests     // Catch: java.lang.Throwable -> L35
                int r2 = r5.val$streamId     // Catch: java.lang.Throwable -> L35
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L35
                r1.remove(r2)     // Catch: java.lang.Throwable -> L35
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L35
                goto L38
            L35:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L35
                throw r1     // Catch: java.io.IOException -> L38
            L38:
                return
        }
    }

    class 6 extends okhttp3.internal.NamedRunnable {
        final okhttp3.internal.http2.Http2Connection this$0;
        final okhttp3.internal.http2.ErrorCode val$errorCode;
        final int val$streamId;

        6(okhttp3.internal.http2.Http2Connection r1, java.lang.String r2, java.lang.Object[] r3, int r4, okhttp3.internal.http2.ErrorCode r5) {
                r0 = this;
                r0.this$0 = r1
                r0.val$streamId = r4
                r0.val$errorCode = r5
                r0.<init>(r2, r3)
                return
        }

        @Override
        public void execute() {
                r3 = this;
                okhttp3.internal.http2.Http2Connection r0 = r3.this$0
                okhttp3.internal.http2.PushObserver r0 = r0.pushObserver
                int r1 = r3.val$streamId
                okhttp3.internal.http2.ErrorCode r2 = r3.val$errorCode
                r0.onReset(r1, r2)
                okhttp3.internal.http2.Http2Connection r0 = r3.this$0
                monitor-enter(r0)
                okhttp3.internal.http2.Http2Connection r1 = r3.this$0     // Catch: java.lang.Throwable -> L1d
                java.util.Set<java.lang.Integer> r1 = r1.currentPushRequests     // Catch: java.lang.Throwable -> L1d
                int r2 = r3.val$streamId     // Catch: java.lang.Throwable -> L1d
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L1d
                r1.remove(r2)     // Catch: java.lang.Throwable -> L1d
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
                return
            L1d:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L1d
                throw r1
        }
    }

    @kotlin.Metadata(d1 = {"\u0000X\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000e\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\u0002\u0018\u00002\u00020\u0001B\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J\u0006\u00107\u001a\u000208J\u000e\u0010\u0011\u001a\u00020\u00002\u0006\u0010\u0011\u001a\u00020\u0012J\u000e\u0010\u0017\u001a\u00020\u00002\u0006\u0010\u0017\u001a\u00020\u0018J\u000e\u0010\u001d\u001a\u00020\u00002\u0006\u0010\u001d\u001a\u00020\u001eJ.\u0010)\u001a\u00020\u00002\u0006\u0010)\u001a\u00020*2\b\b\u0002\u00109\u001a\u00020\f2\b\b\u0002\u0010/\u001a\u0002002\b\b\u0002\u0010#\u001a\u00020$H\u0007R\u001a\u0010\u0002\u001a\u00020\u0003X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0007\u0010\b\"\u0004\b\t\u0010\nR\u001a\u0010\u000b\u001a\u00020\fX\u0080.¢\u0006\u000e\n\u0000\u001a\u0004\b\r\u0010\u000e\"\u0004\b\u000f\u0010\u0010R\u001a\u0010\u0011\u001a\u00020\u0012X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0013\u0010\u0014\"\u0004\b\u0015\u0010\u0016R\u001a\u0010\u0017\u001a\u00020\u0018X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0019\u0010\u001a\"\u0004\b\u001b\u0010\u001cR\u001a\u0010\u001d\u001a\u00020\u001eX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001f\u0010 \"\u0004\b!\u0010\"R\u001a\u0010#\u001a\u00020$X\u0080.¢\u0006\u000e\n\u0000\u001a\u0004\b%\u0010&\"\u0004\b'\u0010(R\u001a\u0010)\u001a\u00020*X\u0080.¢\u0006\u000e\n\u0000\u001a\u0004\b+\u0010,\"\u0004\b-\u0010.R\u001a\u0010/\u001a\u000200X\u0080.¢\u0006\u000e\n\u0000\u001a\u0004\b1\u00102\"\u0004\b3\u00104R\u0014\u0010\u0004\u001a\u00020\u0005X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b5\u00106¨\u0006:"}, d2 = {"Lokhttp3/internal/http2/Http2Connection$Builder;", "", "client", "", "taskRunner", "Lokhttp3/internal/concurrent/TaskRunner;", "(ZLokhttp3/internal/concurrent/TaskRunner;)V", "getClient$okhttp", "()Z", "setClient$okhttp", "(Z)V", "connectionName", "", "getConnectionName$okhttp", "()Ljava/lang/String;", "setConnectionName$okhttp", "(Ljava/lang/String;)V", "listener", "Lokhttp3/internal/http2/Http2Connection$Listener;", "getListener$okhttp", "()Lokhttp3/internal/http2/Http2Connection$Listener;", "setListener$okhttp", "(Lokhttp3/internal/http2/Http2Connection$Listener;)V", "pingIntervalMillis", "", "getPingIntervalMillis$okhttp", "()I", "setPingIntervalMillis$okhttp", "(I)V", "pushObserver", "Lokhttp3/internal/http2/PushObserver;", "getPushObserver$okhttp", "()Lokhttp3/internal/http2/PushObserver;", "setPushObserver$okhttp", "(Lokhttp3/internal/http2/PushObserver;)V", "sink", "Lokio/BufferedSink;", "getSink$okhttp", "()Lokio/BufferedSink;", "setSink$okhttp", "(Lokio/BufferedSink;)V", "socket", "Ljava/net/Socket;", "getSocket$okhttp", "()Ljava/net/Socket;", "setSocket$okhttp", "(Ljava/net/Socket;)V", "source", "Lokio/BufferedSource;", "getSource$okhttp", "()Lokio/BufferedSource;", "setSource$okhttp", "(Lokio/BufferedSource;)V", "getTaskRunner$okhttp", "()Lokhttp3/internal/concurrent/TaskRunner;", "build", "Lokhttp3/internal/http2/Http2Connection;", "peerName", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Builder {
        private boolean client;
        public java.lang.String connectionName;
        private okhttp3.internal.http2.Http2Connection.Listener listener;
        private int pingIntervalMillis;
        private okhttp3.internal.http2.PushObserver pushObserver;
        public okio.BufferedSink sink;
        public java.net.Socket socket;
        public okio.BufferedSource source;
        private final okhttp3.internal.concurrent.TaskRunner taskRunner;

        public Builder(boolean r2, okhttp3.internal.concurrent.TaskRunner r3) {
                r1 = this;
                java.lang.String r0 = "taskRunner"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r1.<init>()
                r1.client = r2
                r1.taskRunner = r3
                okhttp3.internal.http2.Http2Connection$Listener r2 = okhttp3.internal.http2.Http2Connection.Listener.REFUSE_INCOMING_STREAMS
                r1.listener = r2
                okhttp3.internal.http2.PushObserver r2 = okhttp3.internal.http2.PushObserver.CANCEL
                r1.pushObserver = r2
                return
        }

        public static okhttp3.internal.http2.Http2Connection.Builder socket$default(okhttp3.internal.http2.Http2Connection.Builder r0, java.net.Socket r1, java.lang.String r2, okio.BufferedSource r3, okio.BufferedSink r4, int r5, java.lang.Object r6) throws java.io.IOException {
                r6 = r5 & 2
                if (r6 == 0) goto L8
                java.lang.String r2 = okhttp3.internal.Util.peerName(r1)
            L8:
                r6 = r5 & 4
                if (r6 == 0) goto L14
                okio.Source r3 = okio.Okio.source(r1)
                okio.BufferedSource r3 = okio.Okio.buffer(r3)
            L14:
                r5 = r5 & 8
                if (r5 == 0) goto L20
                okio.Sink r4 = okio.Okio.sink(r1)
                okio.BufferedSink r4 = okio.Okio.buffer(r4)
            L20:
                okhttp3.internal.http2.Http2Connection$Builder r0 = r0.socket(r1, r2, r3, r4)
                return r0
        }

        public final okhttp3.internal.http2.Http2Connection build() {
                r1 = this;
                okhttp3.internal.http2.Http2Connection r0 = new okhttp3.internal.http2.Http2Connection
                r0.<init>(r1)
                return r0
        }

        public final boolean getClient$okhttp() {
                r1 = this;
                boolean r0 = r1.client
                return r0
        }

        public final java.lang.String getConnectionName$okhttp() {
                r1 = this;
                java.lang.String r0 = r1.connectionName
                if (r0 == 0) goto L5
                return r0
            L5:
                java.lang.String r0 = "connectionName"
                kotlin.jvm.internal.Intrinsics.throwUninitializedPropertyAccessException(r0)
                r0 = 0
                return r0
        }

        public final okhttp3.internal.http2.Http2Connection.Listener getListener$okhttp() {
                r1 = this;
                okhttp3.internal.http2.Http2Connection$Listener r0 = r1.listener
                return r0
        }

        public final int getPingIntervalMillis$okhttp() {
                r1 = this;
                int r0 = r1.pingIntervalMillis
                return r0
        }

        public final okhttp3.internal.http2.PushObserver getPushObserver$okhttp() {
                r1 = this;
                okhttp3.internal.http2.PushObserver r0 = r1.pushObserver
                return r0
        }

        public final okio.BufferedSink getSink$okhttp() {
                r1 = this;
                okio.BufferedSink r0 = r1.sink
                if (r0 == 0) goto L5
                return r0
            L5:
                java.lang.String r0 = "sink"
                kotlin.jvm.internal.Intrinsics.throwUninitializedPropertyAccessException(r0)
                r0 = 0
                return r0
        }

        public final java.net.Socket getSocket$okhttp() {
                r1 = this;
                java.net.Socket r0 = r1.socket
                if (r0 == 0) goto L5
                return r0
            L5:
                java.lang.String r0 = "socket"
                kotlin.jvm.internal.Intrinsics.throwUninitializedPropertyAccessException(r0)
                r0 = 0
                return r0
        }

        public final okio.BufferedSource getSource$okhttp() {
                r1 = this;
                okio.BufferedSource r0 = r1.source
                if (r0 == 0) goto L5
                return r0
            L5:
                java.lang.String r0 = "source"
                kotlin.jvm.internal.Intrinsics.throwUninitializedPropertyAccessException(r0)
                r0 = 0
                return r0
        }

        public final okhttp3.internal.concurrent.TaskRunner getTaskRunner$okhttp() {
                r1 = this;
                okhttp3.internal.concurrent.TaskRunner r0 = r1.taskRunner
                return r0
        }

        public final okhttp3.internal.http2.Http2Connection.Builder listener(okhttp3.internal.http2.Http2Connection.Listener r2) {
                r1 = this;
                java.lang.String r0 = "listener"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r0 = r1
                okhttp3.internal.http2.Http2Connection$Builder r0 = (okhttp3.internal.http2.Http2Connection.Builder) r0
                r0.setListener$okhttp(r2)
                return r0
        }

        public final okhttp3.internal.http2.Http2Connection.Builder pingIntervalMillis(int r2) {
                r1 = this;
                r0 = r1
                okhttp3.internal.http2.Http2Connection$Builder r0 = (okhttp3.internal.http2.Http2Connection.Builder) r0
                r0.setPingIntervalMillis$okhttp(r2)
                return r0
        }

        public final okhttp3.internal.http2.Http2Connection.Builder pushObserver(okhttp3.internal.http2.PushObserver r2) {
                r1 = this;
                java.lang.String r0 = "pushObserver"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r0 = r1
                okhttp3.internal.http2.Http2Connection$Builder r0 = (okhttp3.internal.http2.Http2Connection.Builder) r0
                r0.setPushObserver$okhttp(r2)
                return r0
        }

        public final void setClient$okhttp(boolean r1) {
                r0 = this;
                r0.client = r1
                return
        }

        public final void setConnectionName$okhttp(java.lang.String r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.connectionName = r2
                return
        }

        public final void setListener$okhttp(okhttp3.internal.http2.Http2Connection.Listener r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.listener = r2
                return
        }

        public final void setPingIntervalMillis$okhttp(int r1) {
                r0 = this;
                r0.pingIntervalMillis = r1
                return
        }

        public final void setPushObserver$okhttp(okhttp3.internal.http2.PushObserver r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.pushObserver = r2
                return
        }

        public final void setSink$okhttp(okio.BufferedSink r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.sink = r2
                return
        }

        public final void setSocket$okhttp(java.net.Socket r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.socket = r2
                return
        }

        public final void setSource$okhttp(okio.BufferedSource r2) {
                r1 = this;
                java.lang.String r0 = "<set-?>"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.source = r2
                return
        }

        public final okhttp3.internal.http2.Http2Connection.Builder socket(java.net.Socket r9) throws java.io.IOException {
                r8 = this;
                java.lang.String r0 = "socket"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
                r3 = 0
                r4 = 0
                r5 = 0
                r6 = 14
                r7 = 0
                r1 = r8
                r2 = r9
                okhttp3.internal.http2.Http2Connection$Builder r9 = socket$default(r1, r2, r3, r4, r5, r6, r7)
                return r9
        }

        public final okhttp3.internal.http2.Http2Connection.Builder socket(java.net.Socket r9, java.lang.String r10) throws java.io.IOException {
                r8 = this;
                java.lang.String r0 = "socket"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
                java.lang.String r0 = "peerName"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
                r4 = 0
                r5 = 0
                r6 = 12
                r7 = 0
                r1 = r8
                r2 = r9
                r3 = r10
                okhttp3.internal.http2.Http2Connection$Builder r9 = socket$default(r1, r2, r3, r4, r5, r6, r7)
                return r9
        }

        public final okhttp3.internal.http2.Http2Connection.Builder socket(java.net.Socket r9, java.lang.String r10, okio.BufferedSource r11) throws java.io.IOException {
                r8 = this;
                java.lang.String r0 = "socket"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
                java.lang.String r0 = "peerName"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
                java.lang.String r0 = "source"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
                r5 = 0
                r6 = 8
                r7 = 0
                r1 = r8
                r2 = r9
                r3 = r10
                r4 = r11
                okhttp3.internal.http2.Http2Connection$Builder r9 = socket$default(r1, r2, r3, r4, r5, r6, r7)
                return r9
        }

        public final okhttp3.internal.http2.Http2Connection.Builder socket(java.net.Socket r3, java.lang.String r4, okio.BufferedSource r5, okio.BufferedSink r6) throws java.io.IOException {
                r2 = this;
                java.lang.String r0 = "socket"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                java.lang.String r0 = "peerName"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
                java.lang.String r0 = "source"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                java.lang.String r0 = "sink"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
                r0 = r2
                okhttp3.internal.http2.Http2Connection$Builder r0 = (okhttp3.internal.http2.Http2Connection.Builder) r0
                r0.setSocket$okhttp(r3)
                boolean r3 = r0.getClient$okhttp()
                if (r3 == 0) goto L37
                java.lang.StringBuilder r3 = new java.lang.StringBuilder
                r3.<init>()
                java.lang.String r1 = okhttp3.internal.Util.okHttpName
                r3.append(r1)
                r1 = 32
                r3.append(r1)
                r3.append(r4)
                java.lang.String r3 = r3.toString()
                goto L3d
            L37:
                java.lang.String r3 = "MockWebServer "
                java.lang.String r3 = kotlin.jvm.internal.Intrinsics.stringPlus(r3, r4)
            L3d:
                r0.setConnectionName$okhttp(r3)
                r0.setSource$okhttp(r5)
                r0.setSink$okhttp(r6)
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0007\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0086T¢\u0006\u0002\n\u0000R\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u000e\u0010\t\u001a\u00020\u0004X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\u0004X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\u000b\u001a\u00020\u0004X\u0086T¢\u0006\u0002\n\u0000R\u000e\u0010\f\u001a\u00020\u0004X\u0086T¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"Lokhttp3/internal/http2/Http2Connection$Companion;", "", "()V", "AWAIT_PING", "", "DEFAULT_SETTINGS", "Lokhttp3/internal/http2/Settings;", "getDEFAULT_SETTINGS", "()Lokhttp3/internal/http2/Settings;", "DEGRADED_PING", "DEGRADED_PONG_TIMEOUT_NS", "INTERVAL_PING", "OKHTTP_CLIENT_WINDOW_SIZE", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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

        public final okhttp3.internal.http2.Settings getDEFAULT_SETTINGS() {
                r1 = this;
                okhttp3.internal.http2.Settings r0 = okhttp3.internal.http2.Http2Connection.access$getDEFAULT_SETTINGS$cp()
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b&\u0018\u0000 \f2\u00020\u0001:\u0001\fB\u0005¢\u0006\u0002\u0010\u0002J\u0018\u0010\u0003\u001a\u00020\u00042\u0006\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\bH\u0016J\u0010\u0010\t\u001a\u00020\u00042\u0006\u0010\n\u001a\u00020\u000bH&¨\u0006\r"}, d2 = {"Lokhttp3/internal/http2/Http2Connection$Listener;", "", "()V", "onSettings", "", "connection", "Lokhttp3/internal/http2/Http2Connection;", "settings", "Lokhttp3/internal/http2/Settings;", "onStream", "stream", "Lokhttp3/internal/http2/Http2Stream;", "Companion", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static abstract class Listener {
        public static final okhttp3.internal.http2.Http2Connection.Listener.Companion Companion = null;
        public static final okhttp3.internal.http2.Http2Connection.Listener REFUSE_INCOMING_STREAMS = null;

        class 1 extends okhttp3.internal.http2.Http2Connection.Listener {
            1() {
                    r0 = this;
                    r0.<init>()
                    return
            }

            @Override
            public void onStream(okhttp3.internal.http2.Http2Stream r2) throws java.io.IOException {
                    r1 = this;
                    okhttp3.internal.http2.ErrorCode r0 = okhttp3.internal.http2.ErrorCode.REFUSED_STREAM
                    r2.close(r0)
                    return
            }
        }

        @kotlin.Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u0010\u0010\u0003\u001a\u00020\u00048\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\u0005"}, d2 = {"Lokhttp3/internal/http2/Http2Connection$Listener$Companion;", "", "()V", "REFUSE_INCOMING_STREAMS", "Lokhttp3/internal/http2/Http2Connection$Listener;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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

        static {
                okhttp3.internal.http2.Http2Connection$Listener$Companion r0 = new okhttp3.internal.http2.Http2Connection$Listener$Companion
                r1 = 0
                r0.<init>(r1)
                okhttp3.internal.http2.Http2Connection.Listener.Companion = r0
                okhttp3.internal.http2.Http2Connection$Listener$Companion$REFUSE_INCOMING_STREAMS$1 r0 = new okhttp3.internal.http2.Http2Connection$Listener$Companion$REFUSE_INCOMING_STREAMS$1
                r0.<init>()
                okhttp3.internal.http2.Http2Connection$Listener r0 = (okhttp3.internal.http2.Http2Connection.Listener) r0
                okhttp3.internal.http2.Http2Connection.Listener.REFUSE_INCOMING_STREAMS = r0
                return
        }

        public Listener() {
                r0 = this;
                r0.<init>()
                return
        }

        public void onSettings(okhttp3.internal.http2.Http2Connection r2, okhttp3.internal.http2.Settings r3) {
                r1 = this;
                java.lang.String r0 = "connection"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                java.lang.String r2 = "settings"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r2)
                return
        }

        public abstract void onStream(okhttp3.internal.http2.Http2Stream r1) throws java.io.IOException;
    }

    final class PingRunnable extends okhttp3.internal.NamedRunnable {
        final int payload1;
        final int payload2;
        final boolean reply;
        final okhttp3.internal.http2.Http2Connection this$0;

        PingRunnable(okhttp3.internal.http2.Http2Connection r3, boolean r4, int r5, int r6) {
                r2 = this;
                r2.this$0 = r3
                r0 = 3
                java.lang.Object[] r0 = new java.lang.Object[r0]
                java.lang.String r3 = r3.hostname
                r1 = 0
                r0[r1] = r3
                java.lang.Integer r3 = java.lang.Integer.valueOf(r5)
                r1 = 1
                r0[r1] = r3
                java.lang.Integer r3 = java.lang.Integer.valueOf(r6)
                r1 = 2
                r0[r1] = r3
                java.lang.String r3 = "OkHttp %s ping %08x%08x"
                r2.<init>(r3, r0)
                r2.reply = r4
                r2.payload1 = r5
                r2.payload2 = r6
                return
        }

        @Override
        public void execute() {
                r4 = this;
                okhttp3.internal.http2.Http2Connection r0 = r4.this$0
                boolean r1 = r4.reply
                int r2 = r4.payload1
                int r3 = r4.payload2
                r0.writePing(r1, r2, r3)
                return
        }
    }

    @kotlin.Metadata(d1 = {"\u0000`\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010 \n\u0002\u0018\u0002\n\u0002\b\u0010\b\u0086\u0004\u0018\u00002\u00020\u00012\b\u0012\u0004\u0012\u00020\u00030\u0002B\u000f\b\u0000\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J\b\u0010\t\u001a\u00020\u0003H\u0016J8\u0010\n\u001a\u00020\u00032\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u000e2\u0006\u0010\u0012\u001a\u00020\f2\u0006\u0010\u0013\u001a\u00020\u0014H\u0016J\u0016\u0010\u0015\u001a\u00020\u00032\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u0019J(\u0010\u001a\u001a\u00020\u00032\u0006\u0010\u001b\u001a\u00020\u00172\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010\u001c\u001a\u00020\u001d2\u0006\u0010\u001e\u001a\u00020\fH\u0016J \u0010\u001f\u001a\u00020\u00032\u0006\u0010 \u001a\u00020\f2\u0006\u0010!\u001a\u00020\"2\u0006\u0010#\u001a\u00020\u0010H\u0016J.\u0010$\u001a\u00020\u00032\u0006\u0010\u001b\u001a\u00020\u00172\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010%\u001a\u00020\f2\f\u0010&\u001a\b\u0012\u0004\u0012\u00020(0'H\u0016J\t\u0010)\u001a\u00020\u0003H\u0096\u0002J \u0010*\u001a\u00020\u00032\u0006\u0010+\u001a\u00020\u00172\u0006\u0010,\u001a\u00020\f2\u0006\u0010-\u001a\u00020\fH\u0016J(\u0010.\u001a\u00020\u00032\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010/\u001a\u00020\f2\u0006\u00100\u001a\u00020\f2\u0006\u00101\u001a\u00020\u0017H\u0016J&\u00102\u001a\u00020\u00032\u0006\u0010\u000b\u001a\u00020\f2\u0006\u00103\u001a\u00020\f2\f\u00104\u001a\b\u0012\u0004\u0012\u00020(0'H\u0016J\u0018\u00105\u001a\u00020\u00032\u0006\u0010\u000b\u001a\u00020\f2\u0006\u0010!\u001a\u00020\"H\u0016J\u0018\u0010\u0018\u001a\u00020\u00032\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u0019H\u0016J\u0018\u00106\u001a\u00020\u00032\u0006\u0010\u000b\u001a\u00020\f2\u0006\u00107\u001a\u00020\u0014H\u0016R\u0014\u0010\u0004\u001a\u00020\u0005X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\b¨\u00068"}, d2 = {"Lokhttp3/internal/http2/Http2Connection$ReaderRunnable;", "Lokhttp3/internal/http2/Http2Reader$Handler;", "Lkotlin/Function0;", "", "reader", "Lokhttp3/internal/http2/Http2Reader;", "(Lokhttp3/internal/http2/Http2Connection;Lokhttp3/internal/http2/Http2Reader;)V", "getReader$okhttp", "()Lokhttp3/internal/http2/Http2Reader;", "ackSettings", "alternateService", "streamId", "", "origin", "", "protocol", "Lokio/ByteString;", "host", "port", "maxAge", "", "applyAndAckSettings", "clearPrevious", "", "settings", "Lokhttp3/internal/http2/Settings;", "data", "inFinished", "source", "Lokio/BufferedSource;", "length", "goAway", "lastGoodStreamId", "errorCode", "Lokhttp3/internal/http2/ErrorCode;", "debugData", "headers", "associatedStreamId", "headerBlock", "", "Lokhttp3/internal/http2/Header;", "invoke", "ping", "ack", "payload1", "payload2", "priority", "streamDependency", "weight", "exclusive", "pushPromise", "promisedStreamId", "requestHeaders", "rstStream", "windowUpdate", "windowSizeIncrement", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public final class ReaderRunnable implements okhttp3.internal.http2.Http2Reader.Handler, kotlin.jvm.functions.Function0<kotlin.Unit> {
        private final okhttp3.internal.http2.Http2Reader reader;
        final okhttp3.internal.http2.Http2Connection this$0;

        class 1 extends okhttp3.internal.NamedRunnable {
            final okhttp3.internal.http2.Http2Connection.ReaderRunnable this$1;
            final okhttp3.internal.http2.Http2Stream val$newStream;

            1(okhttp3.internal.http2.Http2Connection.ReaderRunnable r1, java.lang.String r2, java.lang.Object[] r3, okhttp3.internal.http2.Http2Stream r4) {
                    r0 = this;
                    r0.this$1 = r1
                    r0.val$newStream = r4
                    r0.<init>(r2, r3)
                    return
            }

            @Override
            public void execute() {
                    r5 = this;
                    okhttp3.internal.http2.Http2Connection$ReaderRunnable r0 = r5.this$1     // Catch: java.io.IOException -> Lc
                    okhttp3.internal.http2.Http2Connection r0 = r0.this$0     // Catch: java.io.IOException -> Lc
                    okhttp3.internal.http2.Http2Connection$Listener r0 = r0.listener     // Catch: java.io.IOException -> Lc
                    okhttp3.internal.http2.Http2Stream r1 = r5.val$newStream     // Catch: java.io.IOException -> Lc
                    r0.onStream(r1)     // Catch: java.io.IOException -> Lc
                    goto L33
                Lc:
                    r0 = move-exception
                    okhttp3.internal.platform.Platform r1 = okhttp3.internal.platform.Platform.get()
                    r2 = 4
                    java.lang.StringBuilder r3 = new java.lang.StringBuilder
                    r3.<init>()
                    java.lang.String r4 = "Http2Connection.Listener failure for "
                    r3.append(r4)
                    okhttp3.internal.http2.Http2Connection$ReaderRunnable r4 = r5.this$1
                    okhttp3.internal.http2.Http2Connection r4 = r4.this$0
                    java.lang.String r4 = r4.hostname
                    r3.append(r4)
                    java.lang.String r3 = r3.toString()
                    r1.log(r2, r3, r0)
                    okhttp3.internal.http2.Http2Stream r0 = r5.val$newStream     // Catch: java.io.IOException -> L33
                    okhttp3.internal.http2.ErrorCode r1 = okhttp3.internal.http2.ErrorCode.PROTOCOL_ERROR     // Catch: java.io.IOException -> L33
                    r0.close(r1)     // Catch: java.io.IOException -> L33
                L33:
                    return
            }
        }

        class 2 extends okhttp3.internal.NamedRunnable {
            final okhttp3.internal.http2.Http2Connection.ReaderRunnable this$1;

            2(okhttp3.internal.http2.Http2Connection.ReaderRunnable r1, java.lang.String r2, java.lang.Object... r3) {
                    r0 = this;
                    r0.this$1 = r1
                    r0.<init>(r2, r3)
                    return
            }

            @Override
            public void execute() {
                    r2 = this;
                    okhttp3.internal.http2.Http2Connection$ReaderRunnable r0 = r2.this$1
                    okhttp3.internal.http2.Http2Connection r0 = r0.this$0
                    okhttp3.internal.http2.Http2Connection$Listener r0 = r0.listener
                    okhttp3.internal.http2.Http2Connection$ReaderRunnable r1 = r2.this$1
                    okhttp3.internal.http2.Http2Connection r1 = r1.this$0
                    r0.onSettings(r1)
                    return
            }
        }

        class 3 extends okhttp3.internal.NamedRunnable {
            final okhttp3.internal.http2.Http2Connection.ReaderRunnable this$1;
            final okhttp3.internal.http2.Settings val$peerSettings;

            3(okhttp3.internal.http2.Http2Connection.ReaderRunnable r1, java.lang.String r2, java.lang.Object[] r3, okhttp3.internal.http2.Settings r4) {
                    r0 = this;
                    r0.this$1 = r1
                    r0.val$peerSettings = r4
                    r0.<init>(r2, r3)
                    return
            }

            @Override
            public void execute() {
                    r2 = this;
                    okhttp3.internal.http2.Http2Connection$ReaderRunnable r0 = r2.this$1     // Catch: java.io.IOException -> Lc
                    okhttp3.internal.http2.Http2Connection r0 = r0.this$0     // Catch: java.io.IOException -> Lc
                    okhttp3.internal.http2.Http2Writer r0 = r0.writer     // Catch: java.io.IOException -> Lc
                    okhttp3.internal.http2.Settings r1 = r2.val$peerSettings     // Catch: java.io.IOException -> Lc
                    r0.applyAndAckSettings(r1)     // Catch: java.io.IOException -> Lc
                    goto L13
                Lc:
                    okhttp3.internal.http2.Http2Connection$ReaderRunnable r0 = r2.this$1
                    okhttp3.internal.http2.Http2Connection r0 = r0.this$0
                    okhttp3.internal.http2.Http2Connection.access$000(r0)
                L13:
                    return
            }
        }

        public ReaderRunnable(okhttp3.internal.http2.Http2Connection r2, okhttp3.internal.http2.Http2Reader r3) {
                r1 = this;
                java.lang.String r0 = "this$0"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                java.lang.String r0 = "reader"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r1.this$0 = r2
                r1.<init>()
                r1.reader = r3
                return
        }

        @Override
        public void ackSettings() {
                r0 = this;
                return
        }

        @Override
        public void alternateService(int r1, java.lang.String r2, okio.ByteString r3, java.lang.String r4, int r5, long r6) {
                r0 = this;
                java.lang.String r1 = "origin"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r1)
                java.lang.String r1 = "protocol"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r1)
                java.lang.String r1 = "host"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r1)
                return
        }

        public final void applyAndAckSettings(boolean r12, okhttp3.internal.http2.Settings r13) {
                r11 = this;
                java.lang.String r0 = "settings"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r13, r0)
                kotlin.jvm.internal.Ref$ObjectRef r0 = new kotlin.jvm.internal.Ref$ObjectRef
                r0.<init>()
                okhttp3.internal.http2.Http2Connection r1 = r11.this$0
                okhttp3.internal.http2.Http2Writer r1 = r1.getWriter()
                okhttp3.internal.http2.Http2Connection r2 = r11.this$0
                monitor-enter(r1)
                monitor-enter(r2)     // Catch: java.lang.Throwable -> Lb4
                okhttp3.internal.http2.Settings r3 = r2.getPeerSettings()     // Catch: java.lang.Throwable -> Lb1
                if (r12 == 0) goto L1b
                goto L27
            L1b:
                okhttp3.internal.http2.Settings r12 = new okhttp3.internal.http2.Settings     // Catch: java.lang.Throwable -> Lb1
                r12.<init>()     // Catch: java.lang.Throwable -> Lb1
                r12.merge(r3)     // Catch: java.lang.Throwable -> Lb1
                r12.merge(r13)     // Catch: java.lang.Throwable -> Lb1
                r13 = r12
            L27:
                r0.element = r13     // Catch: java.lang.Throwable -> Lb1
                T r12 = r0.element     // Catch: java.lang.Throwable -> Lb1
                okhttp3.internal.http2.Settings r12 = (okhttp3.internal.http2.Settings) r12     // Catch: java.lang.Throwable -> Lb1
                int r12 = r12.getInitialWindowSize()     // Catch: java.lang.Throwable -> Lb1
                long r12 = (long) r12     // Catch: java.lang.Throwable -> Lb1
                int r3 = r3.getInitialWindowSize()     // Catch: java.lang.Throwable -> Lb1
                long r3 = (long) r3     // Catch: java.lang.Throwable -> Lb1
                long r12 = r12 - r3
                r3 = 0
                int r5 = (r12 > r3 ? 1 : (r12 == r3 ? 0 : -1))
                r6 = 0
                if (r5 == 0) goto L65
                java.util.Map r5 = r2.getStreams$okhttp()     // Catch: java.lang.Throwable -> Lb1
                boolean r5 = r5.isEmpty()     // Catch: java.lang.Throwable -> Lb1
                if (r5 == 0) goto L4a
                goto L65
            L4a:
                java.util.Map r5 = r2.getStreams$okhttp()     // Catch: java.lang.Throwable -> Lb1
                java.util.Collection r5 = r5.values()     // Catch: java.lang.Throwable -> Lb1
                okhttp3.internal.http2.Http2Stream[] r7 = new okhttp3.internal.http2.Http2Stream[r6]     // Catch: java.lang.Throwable -> Lb1
                java.lang.Object[] r5 = r5.toArray(r7)     // Catch: java.lang.Throwable -> Lb1
                if (r5 == 0) goto L5d
                okhttp3.internal.http2.Http2Stream[] r5 = (okhttp3.internal.http2.Http2Stream[]) r5     // Catch: java.lang.Throwable -> Lb1
                goto L66
            L5d:
                java.lang.NullPointerException r12 = new java.lang.NullPointerException     // Catch: java.lang.Throwable -> Lb1
                java.lang.String r13 = "null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>"
                r12.<init>(r13)     // Catch: java.lang.Throwable -> Lb1
                throw r12     // Catch: java.lang.Throwable -> Lb1
            L65:
                r5 = 0
            L66:
                T r7 = r0.element     // Catch: java.lang.Throwable -> Lb1
                okhttp3.internal.http2.Settings r7 = (okhttp3.internal.http2.Settings) r7     // Catch: java.lang.Throwable -> Lb1
                r2.setPeerSettings(r7)     // Catch: java.lang.Throwable -> Lb1
                okhttp3.internal.concurrent.TaskQueue r7 = okhttp3.internal.http2.Http2Connection.access$getSettingsListenerQueue$p(r2)     // Catch: java.lang.Throwable -> Lb1
                java.lang.String r8 = r2.getConnectionName$okhttp()     // Catch: java.lang.Throwable -> Lb1
                java.lang.String r9 = " onSettings"
                java.lang.String r8 = kotlin.jvm.internal.Intrinsics.stringPlus(r8, r9)     // Catch: java.lang.Throwable -> Lb1
                okhttp3.internal.http2.Http2Connection$ReaderRunnable$applyAndAckSettings$lambda-7$lambda-6$$inlined$execute$default$1 r9 = new okhttp3.internal.http2.Http2Connection$ReaderRunnable$applyAndAckSettings$lambda-7$lambda-6$$inlined$execute$default$1     // Catch: java.lang.Throwable -> Lb1
                r10 = 1
                r9.<init>(r8, r10, r2, r0)     // Catch: java.lang.Throwable -> Lb1
                okhttp3.internal.concurrent.Task r9 = (okhttp3.internal.concurrent.Task) r9     // Catch: java.lang.Throwable -> Lb1
                r7.schedule(r9, r3)     // Catch: java.lang.Throwable -> Lb1
                kotlin.Unit r3 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> Lb1
                monitor-exit(r2)     // Catch: java.lang.Throwable -> Lb4
                okhttp3.internal.http2.Http2Writer r3 = r2.getWriter()     // Catch: java.io.IOException -> L95 java.lang.Throwable -> Lb4
                T r0 = r0.element     // Catch: java.io.IOException -> L95 java.lang.Throwable -> Lb4
                okhttp3.internal.http2.Settings r0 = (okhttp3.internal.http2.Settings) r0     // Catch: java.io.IOException -> L95 java.lang.Throwable -> Lb4
                r3.applyAndAckSettings(r0)     // Catch: java.io.IOException -> L95 java.lang.Throwable -> Lb4
                goto L99
            L95:
                r0 = move-exception
                okhttp3.internal.http2.Http2Connection.access$failConnection(r2, r0)     // Catch: java.lang.Throwable -> Lb4
            L99:
                kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> Lb4
                monitor-exit(r1)
                if (r5 == 0) goto Lb0
                int r0 = r5.length
            L9f:
                if (r6 >= r0) goto Lb0
                r1 = r5[r6]
                int r6 = r6 + 1
                monitor-enter(r1)
                r1.addBytesToWriteWindow(r12)     // Catch: java.lang.Throwable -> Lad
                kotlin.Unit r2 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> Lad
                monitor-exit(r1)
                goto L9f
            Lad:
                r12 = move-exception
                monitor-exit(r1)
                throw r12
            Lb0:
                return
            Lb1:
                r12 = move-exception
                monitor-exit(r2)     // Catch: java.lang.Throwable -> Lb4
                throw r12     // Catch: java.lang.Throwable -> Lb4
            Lb4:
                r12 = move-exception
                monitor-exit(r1)
                throw r12
        }

        @Override
        public void data(boolean r3, int r4, okio.BufferedSource r5, int r6) throws java.io.IOException {
                r2 = this;
                java.lang.String r0 = "source"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                okhttp3.internal.http2.Http2Connection r0 = r2.this$0
                boolean r0 = r0.pushedStream$okhttp(r4)
                if (r0 == 0) goto L13
                okhttp3.internal.http2.Http2Connection r0 = r2.this$0
                r0.pushDataLater$okhttp(r4, r5, r6, r3)
                return
            L13:
                okhttp3.internal.http2.Http2Connection r0 = r2.this$0
                okhttp3.internal.http2.Http2Stream r0 = r0.getStream(r4)
                if (r0 != 0) goto L2c
                okhttp3.internal.http2.Http2Connection r3 = r2.this$0
                okhttp3.internal.http2.ErrorCode r0 = okhttp3.internal.http2.ErrorCode.PROTOCOL_ERROR
                r3.writeSynResetLater$okhttp(r4, r0)
                okhttp3.internal.http2.Http2Connection r3 = r2.this$0
                long r0 = (long) r6
                r3.updateConnectionFlowControl$okhttp(r0)
                r5.skip(r0)
                return
            L2c:
                r0.receiveData(r5, r6)
                if (r3 == 0) goto L37
                okhttp3.Headers r3 = okhttp3.internal.Util.EMPTY_HEADERS
                r4 = 1
                r0.receiveHeaders(r3, r4)
            L37:
                return
        }

        public final okhttp3.internal.http2.Http2Reader getReader$okhttp() {
                r1 = this;
                okhttp3.internal.http2.Http2Reader r0 = r1.reader
                return r0
        }

        @Override
        public void goAway(int r4, okhttp3.internal.http2.ErrorCode r5, okio.ByteString r6) {
                r3 = this;
                java.lang.String r0 = "errorCode"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                java.lang.String r5 = "debugData"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r5)
                r6.size()
                okhttp3.internal.http2.Http2Connection r5 = r3.this$0
                monitor-enter(r5)
                java.util.Map r6 = r5.getStreams$okhttp()     // Catch: java.lang.Throwable -> L55
                java.util.Collection r6 = r6.values()     // Catch: java.lang.Throwable -> L55
                r0 = 0
                okhttp3.internal.http2.Http2Stream[] r1 = new okhttp3.internal.http2.Http2Stream[r0]     // Catch: java.lang.Throwable -> L55
                java.lang.Object[] r6 = r6.toArray(r1)     // Catch: java.lang.Throwable -> L55
                if (r6 == 0) goto L4d
                r1 = 1
                okhttp3.internal.http2.Http2Connection.access$setShutdown$p(r5, r1)     // Catch: java.lang.Throwable -> L55
                kotlin.Unit r1 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L55
                monitor-exit(r5)
                okhttp3.internal.http2.Http2Stream[] r6 = (okhttp3.internal.http2.Http2Stream[]) r6
                int r5 = r6.length
            L2b:
                if (r0 >= r5) goto L4c
                r1 = r6[r0]
                int r0 = r0 + 1
                int r2 = r1.getId()
                if (r2 <= r4) goto L2b
                boolean r2 = r1.isLocallyInitiated()
                if (r2 == 0) goto L2b
                okhttp3.internal.http2.ErrorCode r2 = okhttp3.internal.http2.ErrorCode.REFUSED_STREAM
                r1.receiveRstStream(r2)
                okhttp3.internal.http2.Http2Connection r2 = r3.this$0
                int r1 = r1.getId()
                r2.removeStream$okhttp(r1)
                goto L2b
            L4c:
                return
            L4d:
                java.lang.NullPointerException r4 = new java.lang.NullPointerException     // Catch: java.lang.Throwable -> L55
                java.lang.String r6 = "null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>"
                r4.<init>(r6)     // Catch: java.lang.Throwable -> L55
                throw r4     // Catch: java.lang.Throwable -> L55
            L55:
                r4 = move-exception
                monitor-exit(r5)
                throw r4
        }

        @Override
        public void headers(boolean r7, int r8, int r9, java.util.List<okhttp3.internal.http2.Header> r10) {
                r6 = this;
                java.lang.String r9 = "headerBlock"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r9)
                okhttp3.internal.http2.Http2Connection r9 = r6.this$0
                boolean r9 = r9.pushedStream$okhttp(r8)
                if (r9 == 0) goto L13
                okhttp3.internal.http2.Http2Connection r9 = r6.this$0
                r9.pushHeadersLater$okhttp(r8, r10, r7)
                return
            L13:
                okhttp3.internal.http2.Http2Connection r9 = r6.this$0
                monitor-enter(r9)
                okhttp3.internal.http2.Http2Stream r0 = r9.getStream(r8)     // Catch: java.lang.Throwable -> L93
                if (r0 != 0) goto L88
                boolean r0 = okhttp3.internal.http2.Http2Connection.access$isShutdown$p(r9)     // Catch: java.lang.Throwable -> L93
                if (r0 == 0) goto L24
                monitor-exit(r9)
                return
            L24:
                int r0 = r9.getLastGoodStreamId$okhttp()     // Catch: java.lang.Throwable -> L93
                if (r8 > r0) goto L2c
                monitor-exit(r9)
                return
            L2c:
                int r0 = r8 % 2
                int r1 = r9.getNextStreamId$okhttp()     // Catch: java.lang.Throwable -> L93
                int r1 = r1 % 2
                if (r0 != r1) goto L38
                monitor-exit(r9)
                return
            L38:
                okhttp3.Headers r5 = okhttp3.internal.Util.toHeaders(r10)     // Catch: java.lang.Throwable -> L93
                okhttp3.internal.http2.Http2Stream r10 = new okhttp3.internal.http2.Http2Stream     // Catch: java.lang.Throwable -> L93
                r3 = 0
                r0 = r10
                r1 = r8
                r2 = r9
                r4 = r7
                r0.<init>(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L93
                r9.setLastGoodStreamId$okhttp(r8)     // Catch: java.lang.Throwable -> L93
                java.util.Map r7 = r9.getStreams$okhttp()     // Catch: java.lang.Throwable -> L93
                java.lang.Integer r0 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L93
                r7.put(r0, r10)     // Catch: java.lang.Throwable -> L93
                okhttp3.internal.concurrent.TaskRunner r7 = okhttp3.internal.http2.Http2Connection.access$getTaskRunner$p(r9)     // Catch: java.lang.Throwable -> L93
                okhttp3.internal.concurrent.TaskQueue r7 = r7.newQueue()     // Catch: java.lang.Throwable -> L93
                java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L93
                r0.<init>()     // Catch: java.lang.Throwable -> L93
                java.lang.String r1 = r9.getConnectionName$okhttp()     // Catch: java.lang.Throwable -> L93
                r0.append(r1)     // Catch: java.lang.Throwable -> L93
                r1 = 91
                r0.append(r1)     // Catch: java.lang.Throwable -> L93
                r0.append(r8)     // Catch: java.lang.Throwable -> L93
                java.lang.String r8 = "] onStream"
                r0.append(r8)     // Catch: java.lang.Throwable -> L93
                java.lang.String r8 = r0.toString()     // Catch: java.lang.Throwable -> L93
                r0 = 0
                r2 = 1
                okhttp3.internal.http2.Http2Connection$ReaderRunnable$headers$lambda-2$$inlined$execute$default$1 r3 = new okhttp3.internal.http2.Http2Connection$ReaderRunnable$headers$lambda-2$$inlined$execute$default$1     // Catch: java.lang.Throwable -> L93
                r3.<init>(r8, r2, r9, r10)     // Catch: java.lang.Throwable -> L93
                okhttp3.internal.concurrent.Task r3 = (okhttp3.internal.concurrent.Task) r3     // Catch: java.lang.Throwable -> L93
                r7.schedule(r3, r0)     // Catch: java.lang.Throwable -> L93
                monitor-exit(r9)
                return
            L88:
                kotlin.Unit r8 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L93
                monitor-exit(r9)
                okhttp3.Headers r8 = okhttp3.internal.Util.toHeaders(r10)
                r0.receiveHeaders(r8, r7)
                return
            L93:
                r7 = move-exception
                monitor-exit(r9)
                throw r7
        }

        @Override
        public kotlin.Unit invoke() {
                r1 = this;
                r1.invoke()
                kotlin.Unit r0 = kotlin.Unit.INSTANCE
                return r0
        }

        public void invoke() {
                r6 = this;
                okhttp3.internal.http2.ErrorCode r0 = okhttp3.internal.http2.ErrorCode.INTERNAL_ERROR
                okhttp3.internal.http2.ErrorCode r1 = okhttp3.internal.http2.ErrorCode.INTERNAL_ERROR
                r2 = 0
                okhttp3.internal.http2.Http2Reader r3 = r6.reader     // Catch: java.lang.Throwable -> L1f java.io.IOException -> L21
                r4 = r6
                okhttp3.internal.http2.Http2Reader$Handler r4 = (okhttp3.internal.http2.Http2Reader.Handler) r4     // Catch: java.lang.Throwable -> L1f java.io.IOException -> L21
                r3.readConnectionPreface(r4)     // Catch: java.lang.Throwable -> L1f java.io.IOException -> L21
            Ld:
                okhttp3.internal.http2.Http2Reader r3 = r6.reader     // Catch: java.lang.Throwable -> L1f java.io.IOException -> L21
                r4 = 0
                r5 = r6
                okhttp3.internal.http2.Http2Reader$Handler r5 = (okhttp3.internal.http2.Http2Reader.Handler) r5     // Catch: java.lang.Throwable -> L1f java.io.IOException -> L21
                boolean r3 = r3.nextFrame(r4, r5)     // Catch: java.lang.Throwable -> L1f java.io.IOException -> L21
                if (r3 == 0) goto L1a
                goto Ld
            L1a:
                okhttp3.internal.http2.ErrorCode r0 = okhttp3.internal.http2.ErrorCode.NO_ERROR     // Catch: java.lang.Throwable -> L1f java.io.IOException -> L21
                okhttp3.internal.http2.ErrorCode r1 = okhttp3.internal.http2.ErrorCode.CANCEL     // Catch: java.lang.Throwable -> L1f java.io.IOException -> L21
                goto L26
            L1f:
                r3 = move-exception
                goto L33
            L21:
                r2 = move-exception
                okhttp3.internal.http2.ErrorCode r0 = okhttp3.internal.http2.ErrorCode.PROTOCOL_ERROR     // Catch: java.lang.Throwable -> L1f
                okhttp3.internal.http2.ErrorCode r1 = okhttp3.internal.http2.ErrorCode.PROTOCOL_ERROR     // Catch: java.lang.Throwable -> L1f
            L26:
                okhttp3.internal.http2.Http2Connection r3 = r6.this$0
                r3.close$okhttp(r0, r1, r2)
                okhttp3.internal.http2.Http2Reader r0 = r6.reader
                java.io.Closeable r0 = (java.io.Closeable) r0
                okhttp3.internal.Util.closeQuietly(r0)
                return
            L33:
                okhttp3.internal.http2.Http2Connection r4 = r6.this$0
                r4.close$okhttp(r0, r1, r2)
                okhttp3.internal.http2.Http2Reader r0 = r6.reader
                java.io.Closeable r0 = (java.io.Closeable) r0
                okhttp3.internal.Util.closeQuietly(r0)
                throw r3
        }

        @Override
        public void ping(boolean r10, int r11, int r12) {
                r9 = this;
                if (r10 == 0) goto L3e
                okhttp3.internal.http2.Http2Connection r10 = r9.this$0
                monitor-enter(r10)
                r12 = 1
                r0 = 1
                if (r11 == r12) goto L2e
                r12 = 2
                if (r11 == r12) goto L22
                r12 = 3
                if (r11 == r12) goto L13
            L10:
                kotlin.Unit r11 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L3b
                goto L39
            L13:
                long r11 = okhttp3.internal.http2.Http2Connection.access$getAwaitPongsReceived$p(r10)     // Catch: java.lang.Throwable -> L3b
                long r11 = r11 + r0
                okhttp3.internal.http2.Http2Connection.access$setAwaitPongsReceived$p(r10, r11)     // Catch: java.lang.Throwable -> L3b
                r11 = r10
                java.lang.Object r11 = (java.lang.Object) r11     // Catch: java.lang.Throwable -> L3b
                r11.notifyAll()     // Catch: java.lang.Throwable -> L3b
                goto L10
            L22:
                long r11 = okhttp3.internal.http2.Http2Connection.access$getDegradedPongsReceived$p(r10)     // Catch: java.lang.Throwable -> L3b
                long r0 = r0 + r11
                okhttp3.internal.http2.Http2Connection.access$setDegradedPongsReceived$p(r10, r0)     // Catch: java.lang.Throwable -> L3b
                java.lang.Long.valueOf(r11)     // Catch: java.lang.Throwable -> L3b
                goto L39
            L2e:
                long r11 = okhttp3.internal.http2.Http2Connection.access$getIntervalPongsReceived$p(r10)     // Catch: java.lang.Throwable -> L3b
                long r0 = r0 + r11
                okhttp3.internal.http2.Http2Connection.access$setIntervalPongsReceived$p(r10, r0)     // Catch: java.lang.Throwable -> L3b
                java.lang.Long.valueOf(r11)     // Catch: java.lang.Throwable -> L3b
            L39:
                monitor-exit(r10)
                goto L62
            L3b:
                r11 = move-exception
                monitor-exit(r10)
                throw r11
            L3e:
                okhttp3.internal.http2.Http2Connection r10 = r9.this$0
                okhttp3.internal.concurrent.TaskQueue r10 = okhttp3.internal.http2.Http2Connection.access$getWriterQueue$p(r10)
                okhttp3.internal.http2.Http2Connection r0 = r9.this$0
                java.lang.String r0 = r0.getConnectionName$okhttp()
                java.lang.String r1 = " ping"
                java.lang.String r3 = kotlin.jvm.internal.Intrinsics.stringPlus(r0, r1)
                okhttp3.internal.http2.Http2Connection r5 = r9.this$0
                r0 = 0
                r4 = 1
                okhttp3.internal.http2.Http2Connection$ReaderRunnable$ping$$inlined$execute$default$1 r8 = new okhttp3.internal.http2.Http2Connection$ReaderRunnable$ping$$inlined$execute$default$1
                r2 = r8
                r6 = r11
                r7 = r12
                r2.<init>(r3, r4, r5, r6, r7)
                okhttp3.internal.concurrent.Task r8 = (okhttp3.internal.concurrent.Task) r8
                r10.schedule(r8, r0)
            L62:
                return
        }

        @Override
        public void priority(int r1, int r2, int r3, boolean r4) {
                r0 = this;
                return
        }

        @Override
        public void pushPromise(int r1, int r2, java.util.List<okhttp3.internal.http2.Header> r3) {
                r0 = this;
                java.lang.String r1 = "requestHeaders"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r1)
                okhttp3.internal.http2.Http2Connection r1 = r0.this$0
                r1.pushRequestLater$okhttp(r2, r3)
                return
        }

        @Override
        public void rstStream(int r2, okhttp3.internal.http2.ErrorCode r3) {
                r1 = this;
                java.lang.String r0 = "errorCode"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                okhttp3.internal.http2.Http2Connection r0 = r1.this$0
                boolean r0 = r0.pushedStream$okhttp(r2)
                if (r0 == 0) goto L13
                okhttp3.internal.http2.Http2Connection r0 = r1.this$0
                r0.pushResetLater$okhttp(r2, r3)
                return
            L13:
                okhttp3.internal.http2.Http2Connection r0 = r1.this$0
                okhttp3.internal.http2.Http2Stream r2 = r0.removeStream$okhttp(r2)
                if (r2 != 0) goto L1c
                goto L1f
            L1c:
                r2.receiveRstStream(r3)
            L1f:
                return
        }

        @Override
        public void settings(boolean r10, okhttp3.internal.http2.Settings r11) {
                r9 = this;
                java.lang.String r0 = "settings"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
                okhttp3.internal.http2.Http2Connection r0 = r9.this$0
                okhttp3.internal.concurrent.TaskQueue r0 = okhttp3.internal.http2.Http2Connection.access$getWriterQueue$p(r0)
                okhttp3.internal.http2.Http2Connection r1 = r9.this$0
                java.lang.String r1 = r1.getConnectionName$okhttp()
                java.lang.String r2 = " applyAndAckSettings"
                java.lang.String r4 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r2)
                okhttp3.internal.http2.Http2Connection$ReaderRunnable$settings$$inlined$execute$default$1 r1 = new okhttp3.internal.http2.Http2Connection$ReaderRunnable$settings$$inlined$execute$default$1
                r5 = 1
                r3 = r1
                r6 = r9
                r7 = r10
                r8 = r11
                r3.<init>(r4, r5, r6, r7, r8)
                okhttp3.internal.concurrent.Task r1 = (okhttp3.internal.concurrent.Task) r1
                r10 = 0
                r0.schedule(r1, r10)
                return
        }

        @Override
        public void windowUpdate(int r3, long r4) {
                r2 = this;
                if (r3 != 0) goto L1a
                okhttp3.internal.http2.Http2Connection r3 = r2.this$0
                monitor-enter(r3)
                long r0 = r3.getWriteBytesMaximum()     // Catch: java.lang.Throwable -> L17
                long r0 = r0 + r4
                okhttp3.internal.http2.Http2Connection.access$setWriteBytesMaximum$p(r3, r0)     // Catch: java.lang.Throwable -> L17
                r4 = r3
                java.lang.Object r4 = (java.lang.Object) r4     // Catch: java.lang.Throwable -> L17
                r4.notifyAll()     // Catch: java.lang.Throwable -> L17
                kotlin.Unit r4 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L17
                monitor-exit(r3)
                goto L2d
            L17:
                r4 = move-exception
                monitor-exit(r3)
                throw r4
            L1a:
                okhttp3.internal.http2.Http2Connection r0 = r2.this$0
                okhttp3.internal.http2.Http2Stream r3 = r0.getStream(r3)
                if (r3 == 0) goto L2d
                monitor-enter(r3)
                r3.addBytesToWriteWindow(r4)     // Catch: java.lang.Throwable -> L2a
                kotlin.Unit r4 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L2a
                monitor-exit(r3)
                goto L2d
            L2a:
                r4 = move-exception
                monitor-exit(r3)
                throw r4
            L2d:
                return
        }
    }

    static {
            okhttp3.internal.http2.Http2Connection$Companion r0 = new okhttp3.internal.http2.Http2Connection$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.http2.Http2Connection.Companion = r0
            okhttp3.internal.http2.Settings r0 = new okhttp3.internal.http2.Settings
            r0.<init>()
            r1 = 7
            r2 = 65535(0xffff, float:9.1834E-41)
            r0.set(r1, r2)
            r1 = 5
            r2 = 16384(0x4000, float:2.2959E-41)
            r0.set(r1, r2)
            okhttp3.internal.http2.Http2Connection.DEFAULT_SETTINGS = r0
            return
    }

    public Http2Connection(okhttp3.internal.http2.Http2Connection.Builder r5) {
            r4 = this;
            java.lang.String r0 = "builder"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r4.<init>()
            boolean r0 = r5.getClient$okhttp()
            r4.client = r0
            okhttp3.internal.http2.Http2Connection$Listener r0 = r5.getListener$okhttp()
            r4.listener = r0
            java.util.LinkedHashMap r0 = new java.util.LinkedHashMap
            r0.<init>()
            java.util.Map r0 = (java.util.Map) r0
            r4.streams = r0
            java.lang.String r0 = r5.getConnectionName$okhttp()
            r4.connectionName = r0
            boolean r0 = r5.getClient$okhttp()
            if (r0 == 0) goto L2b
            r0 = 3
            goto L2c
        L2b:
            r0 = 2
        L2c:
            r4.nextStreamId = r0
            okhttp3.internal.concurrent.TaskRunner r0 = r5.getTaskRunner$okhttp()
            r4.taskRunner = r0
            okhttp3.internal.concurrent.TaskQueue r0 = r0.newQueue()
            r4.writerQueue = r0
            okhttp3.internal.concurrent.TaskRunner r0 = r4.taskRunner
            okhttp3.internal.concurrent.TaskQueue r0 = r0.newQueue()
            r4.pushQueue = r0
            okhttp3.internal.concurrent.TaskRunner r0 = r4.taskRunner
            okhttp3.internal.concurrent.TaskQueue r0 = r0.newQueue()
            r4.settingsListenerQueue = r0
            okhttp3.internal.http2.PushObserver r0 = r5.getPushObserver$okhttp()
            r4.pushObserver = r0
            okhttp3.internal.http2.Settings r0 = new okhttp3.internal.http2.Settings
            r0.<init>()
            boolean r1 = r5.getClient$okhttp()
            if (r1 == 0) goto L61
            r1 = 7
            r2 = 16777216(0x1000000, float:2.3509887E-38)
            r0.set(r1, r2)
        L61:
            r4.okHttpSettings = r0
            okhttp3.internal.http2.Settings r0 = okhttp3.internal.http2.Http2Connection.DEFAULT_SETTINGS
            r4.peerSettings = r0
            int r0 = r0.getInitialWindowSize()
            long r0 = (long) r0
            r4.writeBytesMaximum = r0
            java.net.Socket r0 = r5.getSocket$okhttp()
            r4.socket = r0
            okhttp3.internal.http2.Http2Writer r0 = new okhttp3.internal.http2.Http2Writer
            okio.BufferedSink r1 = r5.getSink$okhttp()
            boolean r2 = r4.client
            r0.<init>(r1, r2)
            r4.writer = r0
            okhttp3.internal.http2.Http2Connection$ReaderRunnable r0 = new okhttp3.internal.http2.Http2Connection$ReaderRunnable
            okhttp3.internal.http2.Http2Reader r1 = new okhttp3.internal.http2.Http2Reader
            okio.BufferedSource r2 = r5.getSource$okhttp()
            boolean r3 = r4.client
            r1.<init>(r2, r3)
            r0.<init>(r4, r1)
            r4.readerRunnable = r0
            java.util.LinkedHashSet r0 = new java.util.LinkedHashSet
            r0.<init>()
            java.util.Set r0 = (java.util.Set) r0
            r4.currentPushRequests = r0
            int r0 = r5.getPingIntervalMillis$okhttp()
            if (r0 == 0) goto Lc1
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.MILLISECONDS
            int r5 = r5.getPingIntervalMillis$okhttp()
            long r1 = (long) r5
            long r0 = r0.toNanos(r1)
            okhttp3.internal.concurrent.TaskQueue r5 = r4.writerQueue
            java.lang.String r2 = r4.connectionName
            java.lang.String r3 = " ping"
            java.lang.String r2 = kotlin.jvm.internal.Intrinsics.stringPlus(r2, r3)
            okhttp3.internal.http2.Http2Connection$special$$inlined$schedule$1 r3 = new okhttp3.internal.http2.Http2Connection$special$$inlined$schedule$1
            r3.<init>(r2, r4, r0)
            okhttp3.internal.concurrent.Task r3 = (okhttp3.internal.concurrent.Task) r3
            r5.schedule(r3, r0)
        Lc1:
            return
    }

    public static final void access$failConnection(okhttp3.internal.http2.Http2Connection r0, java.io.IOException r1) {
            r0.failConnection(r1)
            return
    }

    public static final long access$getAwaitPongsReceived$p(okhttp3.internal.http2.Http2Connection r2) {
            long r0 = r2.awaitPongsReceived
            return r0
    }

    public static final java.util.Set access$getCurrentPushRequests$p(okhttp3.internal.http2.Http2Connection r0) {
            java.util.Set<java.lang.Integer> r0 = r0.currentPushRequests
            return r0
    }

    public static final okhttp3.internal.http2.Settings access$getDEFAULT_SETTINGS$cp() {
            okhttp3.internal.http2.Settings r0 = okhttp3.internal.http2.Http2Connection.DEFAULT_SETTINGS
            return r0
    }

    public static final long access$getDegradedPongsReceived$p(okhttp3.internal.http2.Http2Connection r2) {
            long r0 = r2.degradedPongsReceived
            return r0
    }

    public static final long access$getIntervalPingsSent$p(okhttp3.internal.http2.Http2Connection r2) {
            long r0 = r2.intervalPingsSent
            return r0
    }

    public static final long access$getIntervalPongsReceived$p(okhttp3.internal.http2.Http2Connection r2) {
            long r0 = r2.intervalPongsReceived
            return r0
    }

    public static final okhttp3.internal.http2.PushObserver access$getPushObserver$p(okhttp3.internal.http2.Http2Connection r0) {
            okhttp3.internal.http2.PushObserver r0 = r0.pushObserver
            return r0
    }

    public static final okhttp3.internal.concurrent.TaskQueue access$getSettingsListenerQueue$p(okhttp3.internal.http2.Http2Connection r0) {
            okhttp3.internal.concurrent.TaskQueue r0 = r0.settingsListenerQueue
            return r0
    }

    public static final okhttp3.internal.concurrent.TaskRunner access$getTaskRunner$p(okhttp3.internal.http2.Http2Connection r0) {
            okhttp3.internal.concurrent.TaskRunner r0 = r0.taskRunner
            return r0
    }

    public static final okhttp3.internal.concurrent.TaskQueue access$getWriterQueue$p(okhttp3.internal.http2.Http2Connection r0) {
            okhttp3.internal.concurrent.TaskQueue r0 = r0.writerQueue
            return r0
    }

    public static final boolean access$isShutdown$p(okhttp3.internal.http2.Http2Connection r0) {
            boolean r0 = r0.isShutdown
            return r0
    }

    public static final void access$setAwaitPongsReceived$p(okhttp3.internal.http2.Http2Connection r0, long r1) {
            r0.awaitPongsReceived = r1
            return
    }

    public static final void access$setDegradedPongsReceived$p(okhttp3.internal.http2.Http2Connection r0, long r1) {
            r0.degradedPongsReceived = r1
            return
    }

    public static final void access$setIntervalPingsSent$p(okhttp3.internal.http2.Http2Connection r0, long r1) {
            r0.intervalPingsSent = r1
            return
    }

    public static final void access$setIntervalPongsReceived$p(okhttp3.internal.http2.Http2Connection r0, long r1) {
            r0.intervalPongsReceived = r1
            return
    }

    public static final void access$setShutdown$p(okhttp3.internal.http2.Http2Connection r0, boolean r1) {
            r0.isShutdown = r1
            return
    }

    public static final void access$setWriteBytesMaximum$p(okhttp3.internal.http2.Http2Connection r0, long r1) {
            r0.writeBytesMaximum = r1
            return
    }

    private final void failConnection(java.io.IOException r3) {
            r2 = this;
            okhttp3.internal.http2.ErrorCode r0 = okhttp3.internal.http2.ErrorCode.PROTOCOL_ERROR
            okhttp3.internal.http2.ErrorCode r1 = okhttp3.internal.http2.ErrorCode.PROTOCOL_ERROR
            r2.close$okhttp(r0, r1, r3)
            return
    }

    private final okhttp3.internal.http2.Http2Stream newStream(int r11, java.util.List<okhttp3.internal.http2.Header> r12, boolean r13) throws java.io.IOException {
            r10 = this;
            r6 = r13 ^ 1
            r4 = 0
            okhttp3.internal.http2.Http2Writer r7 = r10.writer
            monitor-enter(r7)
            monitor-enter(r10)     // Catch: java.lang.Throwable -> L9b
            int r0 = r10.getNextStreamId$okhttp()     // Catch: java.lang.Throwable -> L98
            r1 = 1073741823(0x3fffffff, float:1.9999999)
            if (r0 <= r1) goto L15
            okhttp3.internal.http2.ErrorCode r0 = okhttp3.internal.http2.ErrorCode.REFUSED_STREAM     // Catch: java.lang.Throwable -> L98
            r10.shutdown(r0)     // Catch: java.lang.Throwable -> L98
        L15:
            boolean r0 = r10.isShutdown     // Catch: java.lang.Throwable -> L98
            if (r0 != 0) goto L92
            int r8 = r10.getNextStreamId$okhttp()     // Catch: java.lang.Throwable -> L98
            int r0 = r10.getNextStreamId$okhttp()     // Catch: java.lang.Throwable -> L98
            int r0 = r0 + 2
            r10.setNextStreamId$okhttp(r0)     // Catch: java.lang.Throwable -> L98
            okhttp3.internal.http2.Http2Stream r9 = new okhttp3.internal.http2.Http2Stream     // Catch: java.lang.Throwable -> L98
            r5 = 0
            r0 = r9
            r1 = r8
            r2 = r10
            r3 = r6
            r0.<init>(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L98
            r0 = 1
            if (r13 == 0) goto L4e
            long r1 = r10.getWriteBytesTotal()     // Catch: java.lang.Throwable -> L98
            long r3 = r10.getWriteBytesMaximum()     // Catch: java.lang.Throwable -> L98
            int r13 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r13 >= 0) goto L4e
            long r1 = r9.getWriteBytesTotal()     // Catch: java.lang.Throwable -> L98
            long r3 = r9.getWriteBytesMaximum()     // Catch: java.lang.Throwable -> L98
            int r13 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r13 < 0) goto L4c
            goto L4e
        L4c:
            r13 = 0
            goto L4f
        L4e:
            r13 = r0
        L4f:
            boolean r1 = r9.isOpen()     // Catch: java.lang.Throwable -> L98
            if (r1 == 0) goto L60
            java.util.Map r1 = r10.getStreams$okhttp()     // Catch: java.lang.Throwable -> L98
            java.lang.Integer r2 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L98
            r1.put(r2, r9)     // Catch: java.lang.Throwable -> L98
        L60:
            kotlin.Unit r1 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L98
            monitor-exit(r10)     // Catch: java.lang.Throwable -> L9b
            if (r11 != 0) goto L6d
            okhttp3.internal.http2.Http2Writer r11 = r10.getWriter()     // Catch: java.lang.Throwable -> L9b
            r11.headers(r6, r8, r12)     // Catch: java.lang.Throwable -> L9b
            goto L7b
        L6d:
            boolean r1 = r10.getClient$okhttp()     // Catch: java.lang.Throwable -> L9b
            r0 = r0 ^ r1
            if (r0 == 0) goto L86
            okhttp3.internal.http2.Http2Writer r0 = r10.getWriter()     // Catch: java.lang.Throwable -> L9b
            r0.pushPromise(r11, r8, r12)     // Catch: java.lang.Throwable -> L9b
        L7b:
            kotlin.Unit r11 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L9b
            monitor-exit(r7)
            if (r13 == 0) goto L85
            okhttp3.internal.http2.Http2Writer r11 = r10.writer
            r11.flush()
        L85:
            return r9
        L86:
            java.lang.String r11 = "client streams shouldn't have associated stream IDs"
            java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L9b
            java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L9b
            r12.<init>(r11)     // Catch: java.lang.Throwable -> L9b
            throw r12     // Catch: java.lang.Throwable -> L9b
        L92:
            okhttp3.internal.http2.ConnectionShutdownException r11 = new okhttp3.internal.http2.ConnectionShutdownException     // Catch: java.lang.Throwable -> L98
            r11.<init>()     // Catch: java.lang.Throwable -> L98
            throw r11     // Catch: java.lang.Throwable -> L98
        L98:
            r11 = move-exception
            monitor-exit(r10)     // Catch: java.lang.Throwable -> L9b
            throw r11     // Catch: java.lang.Throwable -> L9b
        L9b:
            r11 = move-exception
            monitor-exit(r7)
            throw r11
    }

    public static void start$default(okhttp3.internal.http2.Http2Connection r0, boolean r1, okhttp3.internal.concurrent.TaskRunner r2, int r3, java.lang.Object r4) throws java.io.IOException {
            r4 = r3 & 1
            if (r4 == 0) goto L5
            r1 = 1
        L5:
            r3 = r3 & 2
            if (r3 == 0) goto Lb
            okhttp3.internal.concurrent.TaskRunner r2 = okhttp3.internal.concurrent.TaskRunner.INSTANCE
        Lb:
            r0.start(r1, r2)
            return
    }

    public final synchronized void awaitPong() throws java.lang.InterruptedException {
            r4 = this;
            monitor-enter(r4)
        L1:
            long r0 = r4.awaitPongsReceived     // Catch: java.lang.Throwable -> L12
            long r2 = r4.awaitPingsSent     // Catch: java.lang.Throwable -> L12
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L10
            r0 = r4
            java.lang.Object r0 = (java.lang.Object) r0     // Catch: java.lang.Throwable -> L12
            r0.wait()     // Catch: java.lang.Throwable -> L12
            goto L1
        L10:
            monitor-exit(r4)
            return
        L12:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    @Override
    public void close() {
            r3 = this;
            okhttp3.internal.http2.ErrorCode r0 = okhttp3.internal.http2.ErrorCode.NO_ERROR
            okhttp3.internal.http2.ErrorCode r1 = okhttp3.internal.http2.ErrorCode.CANCEL
            r2 = 0
            r3.close$okhttp(r0, r1, r2)
            return
    }

    public final void close$okhttp(okhttp3.internal.http2.ErrorCode r4, okhttp3.internal.http2.ErrorCode r5, java.io.IOException r6) {
            r3 = this;
            java.lang.String r0 = "connectionCode"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "streamCode"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            boolean r0 = okhttp3.internal.Util.assertionsEnabled
            if (r0 == 0) goto L3c
            boolean r0 = java.lang.Thread.holdsLock(r3)
            if (r0 != 0) goto L15
            goto L3c
        L15:
            java.lang.AssertionError r4 = new java.lang.AssertionError
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "Thread "
            r5.append(r6)
            java.lang.Thread r6 = java.lang.Thread.currentThread()
            java.lang.String r6 = r6.getName()
            r5.append(r6)
            java.lang.String r6 = " MUST NOT hold lock on "
            r5.append(r6)
            r5.append(r3)
            java.lang.String r5 = r5.toString()
            r4.<init>(r5)
            throw r4
        L3c:
            r3.shutdown(r4)     // Catch: java.io.IOException -> L3f
        L3f:
            r4 = 0
            monitor-enter(r3)
            java.util.Map r0 = r3.getStreams$okhttp()     // Catch: java.lang.Throwable -> L9f
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L9f
            r0 = r0 ^ 1
            r1 = 0
            if (r0 == 0) goto L6e
            java.util.Map r4 = r3.getStreams$okhttp()     // Catch: java.lang.Throwable -> L9f
            java.util.Collection r4 = r4.values()     // Catch: java.lang.Throwable -> L9f
            okhttp3.internal.http2.Http2Stream[] r0 = new okhttp3.internal.http2.Http2Stream[r1]     // Catch: java.lang.Throwable -> L9f
            java.lang.Object[] r4 = r4.toArray(r0)     // Catch: java.lang.Throwable -> L9f
            if (r4 == 0) goto L66
            java.util.Map r0 = r3.getStreams$okhttp()     // Catch: java.lang.Throwable -> L9f
            r0.clear()     // Catch: java.lang.Throwable -> L9f
            goto L6e
        L66:
            java.lang.NullPointerException r4 = new java.lang.NullPointerException     // Catch: java.lang.Throwable -> L9f
            java.lang.String r5 = "null cannot be cast to non-null type kotlin.Array<T of kotlin.collections.ArraysKt__ArraysJVMKt.toTypedArray>"
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L9f
            throw r4     // Catch: java.lang.Throwable -> L9f
        L6e:
            kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L9f
            monitor-exit(r3)
            okhttp3.internal.http2.Http2Stream[] r4 = (okhttp3.internal.http2.Http2Stream[]) r4
            if (r4 != 0) goto L76
            goto L81
        L76:
            int r0 = r4.length
        L77:
            if (r1 >= r0) goto L81
            r2 = r4[r1]
            r2.close(r5, r6)     // Catch: java.io.IOException -> L7e
        L7e:
            int r1 = r1 + 1
            goto L77
        L81:
            okhttp3.internal.http2.Http2Writer r4 = r3.getWriter()     // Catch: java.io.IOException -> L88
            r4.close()     // Catch: java.io.IOException -> L88
        L88:
            java.net.Socket r4 = r3.getSocket$okhttp()     // Catch: java.io.IOException -> L8f
            r4.close()     // Catch: java.io.IOException -> L8f
        L8f:
            okhttp3.internal.concurrent.TaskQueue r4 = r3.writerQueue
            r4.shutdown()
            okhttp3.internal.concurrent.TaskQueue r4 = r3.pushQueue
            r4.shutdown()
            okhttp3.internal.concurrent.TaskQueue r4 = r3.settingsListenerQueue
            r4.shutdown()
            return
        L9f:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final void flush() throws java.io.IOException {
            r1 = this;
            okhttp3.internal.http2.Http2Writer r0 = r1.writer
            r0.flush()
            return
    }

    public final boolean getClient$okhttp() {
            r1 = this;
            boolean r0 = r1.client
            return r0
    }

    public final java.lang.String getConnectionName$okhttp() {
            r1 = this;
            java.lang.String r0 = r1.connectionName
            return r0
    }

    public final int getLastGoodStreamId$okhttp() {
            r1 = this;
            int r0 = r1.lastGoodStreamId
            return r0
    }

    public final okhttp3.internal.http2.Http2Connection.Listener getListener$okhttp() {
            r1 = this;
            okhttp3.internal.http2.Http2Connection$Listener r0 = r1.listener
            return r0
    }

    public final int getNextStreamId$okhttp() {
            r1 = this;
            int r0 = r1.nextStreamId
            return r0
    }

    public final okhttp3.internal.http2.Settings getOkHttpSettings() {
            r1 = this;
            okhttp3.internal.http2.Settings r0 = r1.okHttpSettings
            return r0
    }

    public final okhttp3.internal.http2.Settings getPeerSettings() {
            r1 = this;
            okhttp3.internal.http2.Settings r0 = r1.peerSettings
            return r0
    }

    public final long getReadBytesAcknowledged() {
            r2 = this;
            long r0 = r2.readBytesAcknowledged
            return r0
    }

    public final long getReadBytesTotal() {
            r2 = this;
            long r0 = r2.readBytesTotal
            return r0
    }

    public final okhttp3.internal.http2.Http2Connection.ReaderRunnable getReaderRunnable() {
            r1 = this;
            okhttp3.internal.http2.Http2Connection$ReaderRunnable r0 = r1.readerRunnable
            return r0
    }

    public final java.net.Socket getSocket$okhttp() {
            r1 = this;
            java.net.Socket r0 = r1.socket
            return r0
    }

    public final synchronized okhttp3.internal.http2.Http2Stream getStream(int r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r0 = r1.streams     // Catch: java.lang.Throwable -> Lf
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> Lf
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> Lf
            okhttp3.internal.http2.Http2Stream r2 = (okhttp3.internal.http2.Http2Stream) r2     // Catch: java.lang.Throwable -> Lf
            monitor-exit(r1)
            return r2
        Lf:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> getStreams$okhttp() {
            r1 = this;
            java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r0 = r1.streams
            return r0
    }

    public final long getWriteBytesMaximum() {
            r2 = this;
            long r0 = r2.writeBytesMaximum
            return r0
    }

    public final long getWriteBytesTotal() {
            r2 = this;
            long r0 = r2.writeBytesTotal
            return r0
    }

    public final okhttp3.internal.http2.Http2Writer getWriter() {
            r1 = this;
            okhttp3.internal.http2.Http2Writer r0 = r1.writer
            return r0
    }

    public final synchronized boolean isHealthy(long r7) {
            r6 = this;
            monitor-enter(r6)
            boolean r0 = r6.isShutdown     // Catch: java.lang.Throwable -> L1b
            r1 = 0
            if (r0 == 0) goto L8
            monitor-exit(r6)
            return r1
        L8:
            long r2 = r6.degradedPongsReceived     // Catch: java.lang.Throwable -> L1b
            long r4 = r6.degradedPingsSent     // Catch: java.lang.Throwable -> L1b
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 >= 0) goto L18
            long r2 = r6.degradedPongDeadlineNs     // Catch: java.lang.Throwable -> L1b
            int r7 = (r7 > r2 ? 1 : (r7 == r2 ? 0 : -1))
            if (r7 < 0) goto L18
            monitor-exit(r6)
            return r1
        L18:
            r7 = 1
            monitor-exit(r6)
            return r7
        L1b:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final okhttp3.internal.http2.Http2Stream newStream(java.util.List<okhttp3.internal.http2.Header> r2, boolean r3) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "requestHeaders"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 0
            okhttp3.internal.http2.Http2Stream r2 = r1.newStream(r0, r2, r3)
            return r2
    }

    public final synchronized int openStreamCount() {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r0 = r1.streams     // Catch: java.lang.Throwable -> L9
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r0
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final void pushDataLater$okhttp(int r10, okio.BufferedSource r11, int r12, boolean r13) throws java.io.IOException {
            r9 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            okio.Buffer r6 = new okio.Buffer
            r6.<init>()
            long r0 = (long) r12
            r11.require(r0)
            r11.read(r6, r0)
            okhttp3.internal.concurrent.TaskQueue r11 = r9.pushQueue
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r9.connectionName
            r0.append(r1)
            r1 = 91
            r0.append(r1)
            r0.append(r10)
            java.lang.String r1 = "] onData"
            r0.append(r1)
            java.lang.String r2 = r0.toString()
            okhttp3.internal.http2.Http2Connection$pushDataLater$$inlined$execute$default$1 r0 = new okhttp3.internal.http2.Http2Connection$pushDataLater$$inlined$execute$default$1
            r3 = 1
            r1 = r0
            r4 = r9
            r5 = r10
            r7 = r12
            r8 = r13
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
            okhttp3.internal.concurrent.Task r0 = (okhttp3.internal.concurrent.Task) r0
            r12 = 0
            r11.schedule(r0, r12)
            return
    }

    public final void pushHeadersLater$okhttp(int r11, java.util.List<okhttp3.internal.http2.Header> r12, boolean r13) {
            r10 = this;
            java.lang.String r0 = "requestHeaders"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            okhttp3.internal.concurrent.TaskQueue r0 = r10.pushQueue
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r10.connectionName
            r1.append(r2)
            r2 = 91
            r1.append(r2)
            r1.append(r11)
            java.lang.String r2 = "] onHeaders"
            r1.append(r2)
            java.lang.String r4 = r1.toString()
            okhttp3.internal.http2.Http2Connection$pushHeadersLater$$inlined$execute$default$1 r1 = new okhttp3.internal.http2.Http2Connection$pushHeadersLater$$inlined$execute$default$1
            r5 = 1
            r3 = r1
            r6 = r10
            r7 = r11
            r8 = r12
            r9 = r13
            r3.<init>(r4, r5, r6, r7, r8, r9)
            okhttp3.internal.concurrent.Task r1 = (okhttp3.internal.concurrent.Task) r1
            r11 = 0
            r0.schedule(r1, r11)
            return
    }

    public final void pushRequestLater$okhttp(int r11, java.util.List<okhttp3.internal.http2.Header> r12) {
            r10 = this;
            java.lang.String r0 = "requestHeaders"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            monitor-enter(r10)
            java.util.Set<java.lang.Integer> r0 = r10.currentPushRequests     // Catch: java.lang.Throwable -> L52
            java.lang.Integer r1 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.Throwable -> L52
            boolean r0 = r0.contains(r1)     // Catch: java.lang.Throwable -> L52
            if (r0 == 0) goto L19
            okhttp3.internal.http2.ErrorCode r12 = okhttp3.internal.http2.ErrorCode.PROTOCOL_ERROR     // Catch: java.lang.Throwable -> L52
            r10.writeSynResetLater$okhttp(r11, r12)     // Catch: java.lang.Throwable -> L52
            monitor-exit(r10)
            return
        L19:
            java.util.Set<java.lang.Integer> r0 = r10.currentPushRequests     // Catch: java.lang.Throwable -> L52
            java.lang.Integer r1 = java.lang.Integer.valueOf(r11)     // Catch: java.lang.Throwable -> L52
            r0.add(r1)     // Catch: java.lang.Throwable -> L52
            monitor-exit(r10)
            okhttp3.internal.concurrent.TaskQueue r0 = r10.pushQueue
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r10.connectionName
            r1.append(r2)
            r2 = 91
            r1.append(r2)
            r1.append(r11)
            java.lang.String r2 = "] onRequest"
            r1.append(r2)
            java.lang.String r4 = r1.toString()
            r1 = 0
            r5 = 1
            okhttp3.internal.http2.Http2Connection$pushRequestLater$$inlined$execute$default$1 r9 = new okhttp3.internal.http2.Http2Connection$pushRequestLater$$inlined$execute$default$1
            r3 = r9
            r6 = r10
            r7 = r11
            r8 = r12
            r3.<init>(r4, r5, r6, r7, r8)
            okhttp3.internal.concurrent.Task r9 = (okhttp3.internal.concurrent.Task) r9
            r0.schedule(r9, r1)
            return
        L52:
            r11 = move-exception
            monitor-exit(r10)
            throw r11
    }

    public final void pushResetLater$okhttp(int r10, okhttp3.internal.http2.ErrorCode r11) {
            r9 = this;
            java.lang.String r0 = "errorCode"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            okhttp3.internal.concurrent.TaskQueue r0 = r9.pushQueue
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r9.connectionName
            r1.append(r2)
            r2 = 91
            r1.append(r2)
            r1.append(r10)
            java.lang.String r2 = "] onReset"
            r1.append(r2)
            java.lang.String r4 = r1.toString()
            okhttp3.internal.http2.Http2Connection$pushResetLater$$inlined$execute$default$1 r1 = new okhttp3.internal.http2.Http2Connection$pushResetLater$$inlined$execute$default$1
            r5 = 1
            r3 = r1
            r6 = r9
            r7 = r10
            r8 = r11
            r3.<init>(r4, r5, r6, r7, r8)
            okhttp3.internal.concurrent.Task r1 = (okhttp3.internal.concurrent.Task) r1
            r10 = 0
            r0.schedule(r1, r10)
            return
    }

    public final okhttp3.internal.http2.Http2Stream pushStream(int r2, java.util.List<okhttp3.internal.http2.Header> r3, boolean r4) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "requestHeaders"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            boolean r0 = r1.client
            r0 = r0 ^ 1
            if (r0 == 0) goto L10
            okhttp3.internal.http2.Http2Stream r2 = r1.newStream(r2, r3, r4)
            return r2
        L10:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "Client cannot push requests."
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            throw r2
    }

    public final boolean pushedStream$okhttp(int r2) {
            r1 = this;
            r0 = 1
            if (r2 == 0) goto L7
            r2 = r2 & r0
            if (r2 != 0) goto L7
            goto L8
        L7:
            r0 = 0
        L8:
            return r0
    }

    public final synchronized okhttp3.internal.http2.Http2Stream removeStream$okhttp(int r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.Map<java.lang.Integer, okhttp3.internal.http2.Http2Stream> r0 = r1.streams     // Catch: java.lang.Throwable -> L15
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L15
            java.lang.Object r2 = r0.remove(r2)     // Catch: java.lang.Throwable -> L15
            okhttp3.internal.http2.Http2Stream r2 = (okhttp3.internal.http2.Http2Stream) r2     // Catch: java.lang.Throwable -> L15
            r0 = r1
            java.lang.Object r0 = (java.lang.Object) r0     // Catch: java.lang.Throwable -> L15
            r0.notifyAll()     // Catch: java.lang.Throwable -> L15
            monitor-exit(r1)
            return r2
        L15:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final void sendDegradedPingLater$okhttp() {
            r6 = this;
            monitor-enter(r6)
            long r0 = r6.degradedPongsReceived     // Catch: java.lang.Throwable -> L38
            long r2 = r6.degradedPingsSent     // Catch: java.lang.Throwable -> L38
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto Lb
            monitor-exit(r6)
            return
        Lb:
            long r0 = r6.degradedPingsSent     // Catch: java.lang.Throwable -> L38
            r2 = 1
            long r0 = r0 + r2
            r6.degradedPingsSent = r0     // Catch: java.lang.Throwable -> L38
            long r0 = java.lang.System.nanoTime()     // Catch: java.lang.Throwable -> L38
            r2 = 1000000000(0x3b9aca00, float:0.0047237873)
            long r2 = (long) r2     // Catch: java.lang.Throwable -> L38
            long r0 = r0 + r2
            r6.degradedPongDeadlineNs = r0     // Catch: java.lang.Throwable -> L38
            kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L38
            monitor-exit(r6)
            okhttp3.internal.concurrent.TaskQueue r0 = r6.writerQueue
            java.lang.String r1 = r6.connectionName
            java.lang.String r2 = " ping"
            java.lang.String r1 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r2)
            r2 = 0
            r4 = 1
            okhttp3.internal.http2.Http2Connection$sendDegradedPingLater$$inlined$execute$default$1 r5 = new okhttp3.internal.http2.Http2Connection$sendDegradedPingLater$$inlined$execute$default$1
            r5.<init>(r1, r4, r6)
            okhttp3.internal.concurrent.Task r5 = (okhttp3.internal.concurrent.Task) r5
            r0.schedule(r5, r2)
            return
        L38:
            r0 = move-exception
            monitor-exit(r6)
            throw r0
    }

    public final void setLastGoodStreamId$okhttp(int r1) {
            r0 = this;
            r0.lastGoodStreamId = r1
            return
    }

    public final void setNextStreamId$okhttp(int r1) {
            r0 = this;
            r0.nextStreamId = r1
            return
    }

    public final void setPeerSettings(okhttp3.internal.http2.Settings r2) {
            r1 = this;
            java.lang.String r0 = "<set-?>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.peerSettings = r2
            return
    }

    public final void setSettings(okhttp3.internal.http2.Settings r3) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "settings"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okhttp3.internal.http2.Http2Writer r0 = r2.writer
            monitor-enter(r0)
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L2b
            boolean r1 = r2.isShutdown     // Catch: java.lang.Throwable -> L28
            if (r1 != 0) goto L22
            okhttp3.internal.http2.Settings r1 = r2.getOkHttpSettings()     // Catch: java.lang.Throwable -> L28
            r1.merge(r3)     // Catch: java.lang.Throwable -> L28
            kotlin.Unit r1 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L28
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2b
            okhttp3.internal.http2.Http2Writer r1 = r2.getWriter()     // Catch: java.lang.Throwable -> L2b
            r1.settings(r3)     // Catch: java.lang.Throwable -> L2b
            kotlin.Unit r3 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L2b
            monitor-exit(r0)
            return
        L22:
            okhttp3.internal.http2.ConnectionShutdownException r3 = new okhttp3.internal.http2.ConnectionShutdownException     // Catch: java.lang.Throwable -> L28
            r3.<init>()     // Catch: java.lang.Throwable -> L28
            throw r3     // Catch: java.lang.Throwable -> L28
        L28:
            r3 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2b
            throw r3     // Catch: java.lang.Throwable -> L2b
        L2b:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public final void shutdown(okhttp3.internal.http2.ErrorCode r5) throws java.io.IOException {
            r4 = this;
            java.lang.String r0 = "statusCode"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            okhttp3.internal.http2.Http2Writer r0 = r4.writer
            monitor-enter(r0)
            kotlin.jvm.internal.Ref$IntRef r1 = new kotlin.jvm.internal.Ref$IntRef     // Catch: java.lang.Throwable -> L33
            r1.<init>()     // Catch: java.lang.Throwable -> L33
            monitor-enter(r4)     // Catch: java.lang.Throwable -> L33
            boolean r2 = r4.isShutdown     // Catch: java.lang.Throwable -> L30
            if (r2 == 0) goto L15
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L33
            monitor-exit(r0)
            return
        L15:
            r2 = 1
            r4.isShutdown = r2     // Catch: java.lang.Throwable -> L30
            int r2 = r4.getLastGoodStreamId$okhttp()     // Catch: java.lang.Throwable -> L30
            r1.element = r2     // Catch: java.lang.Throwable -> L30
            kotlin.Unit r2 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L30
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L33
            okhttp3.internal.http2.Http2Writer r2 = r4.getWriter()     // Catch: java.lang.Throwable -> L33
            int r1 = r1.element     // Catch: java.lang.Throwable -> L33
            byte[] r3 = okhttp3.internal.Util.EMPTY_BYTE_ARRAY     // Catch: java.lang.Throwable -> L33
            r2.goAway(r1, r5, r3)     // Catch: java.lang.Throwable -> L33
            kotlin.Unit r5 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L33
            monitor-exit(r0)
            return
        L30:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L33
            throw r5     // Catch: java.lang.Throwable -> L33
        L33:
            r5 = move-exception
            monitor-exit(r0)
            throw r5
    }

    public final void start() throws java.io.IOException {
            r3 = this;
            r0 = 0
            r1 = 0
            r2 = 3
            start$default(r3, r1, r0, r2, r0)
            return
    }

    public final void start(boolean r3) throws java.io.IOException {
            r2 = this;
            r0 = 0
            r1 = 2
            start$default(r2, r3, r0, r1, r0)
            return
    }

    public final void start(boolean r6, okhttp3.internal.concurrent.TaskRunner r7) throws java.io.IOException {
            r5 = this;
            java.lang.String r0 = "taskRunner"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            if (r6 == 0) goto L26
            okhttp3.internal.http2.Http2Writer r6 = r5.writer
            r6.connectionPreface()
            okhttp3.internal.http2.Http2Writer r6 = r5.writer
            okhttp3.internal.http2.Settings r0 = r5.okHttpSettings
            r6.settings(r0)
            okhttp3.internal.http2.Settings r6 = r5.okHttpSettings
            int r6 = r6.getInitialWindowSize()
            r0 = 65535(0xffff, float:9.1834E-41)
            if (r6 == r0) goto L26
            okhttp3.internal.http2.Http2Writer r1 = r5.writer
            r2 = 0
            int r6 = r6 - r0
            long r3 = (long) r6
            r1.windowUpdate(r2, r3)
        L26:
            okhttp3.internal.concurrent.TaskQueue r6 = r7.newQueue()
            java.lang.String r7 = r5.connectionName
            okhttp3.internal.http2.Http2Connection$ReaderRunnable r0 = r5.readerRunnable
            kotlin.jvm.functions.Function0 r0 = (kotlin.jvm.functions.Function0) r0
            r1 = 0
            r3 = 1
            okhttp3.internal.concurrent.TaskQueue$execute$1 r4 = new okhttp3.internal.concurrent.TaskQueue$execute$1
            r4.<init>(r7, r3, r0)
            okhttp3.internal.concurrent.Task r4 = (okhttp3.internal.concurrent.Task) r4
            r6.schedule(r4, r1)
            return
    }

    public final synchronized void updateConnectionFlowControl$okhttp(long r3) {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.readBytesTotal     // Catch: java.lang.Throwable -> L21
            long r0 = r0 + r3
            r2.readBytesTotal = r0     // Catch: java.lang.Throwable -> L21
            long r3 = r2.readBytesAcknowledged     // Catch: java.lang.Throwable -> L21
            long r0 = r0 - r3
            okhttp3.internal.http2.Settings r3 = r2.okHttpSettings     // Catch: java.lang.Throwable -> L21
            int r3 = r3.getInitialWindowSize()     // Catch: java.lang.Throwable -> L21
            int r3 = r3 / 2
            long r3 = (long) r3     // Catch: java.lang.Throwable -> L21
            int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r3 < 0) goto L1f
            r3 = 0
            r2.writeWindowUpdateLater$okhttp(r3, r0)     // Catch: java.lang.Throwable -> L21
            long r3 = r2.readBytesAcknowledged     // Catch: java.lang.Throwable -> L21
            long r3 = r3 + r0
            r2.readBytesAcknowledged = r3     // Catch: java.lang.Throwable -> L21
        L1f:
            monitor-exit(r2)
            return
        L21:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final void writeData(int r9, boolean r10, okio.Buffer r11, long r12) throws java.io.IOException {
            r8 = this;
            r0 = 0
            int r2 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            r3 = 0
            if (r2 != 0) goto Ld
            okhttp3.internal.http2.Http2Writer r12 = r8.writer
            r12.data(r10, r9, r11, r3)
            return
        Ld:
            int r2 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r2 <= 0) goto L81
            monitor-enter(r8)
        L12:
            long r4 = r8.getWriteBytesTotal()     // Catch: java.lang.Throwable -> L70 java.lang.InterruptedException -> L72
            long r6 = r8.getWriteBytesMaximum()     // Catch: java.lang.Throwable -> L70 java.lang.InterruptedException -> L72
            int r2 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r2 < 0) goto L3b
            java.util.Map r2 = r8.getStreams$okhttp()     // Catch: java.lang.Throwable -> L70 java.lang.InterruptedException -> L72
            java.lang.Integer r4 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L70 java.lang.InterruptedException -> L72
            boolean r2 = r2.containsKey(r4)     // Catch: java.lang.Throwable -> L70 java.lang.InterruptedException -> L72
            if (r2 == 0) goto L33
            r2 = r8
            java.lang.Object r2 = (java.lang.Object) r2     // Catch: java.lang.Throwable -> L70 java.lang.InterruptedException -> L72
            r2.wait()     // Catch: java.lang.Throwable -> L70 java.lang.InterruptedException -> L72
            goto L12
        L33:
            java.io.IOException r9 = new java.io.IOException     // Catch: java.lang.Throwable -> L70 java.lang.InterruptedException -> L72
            java.lang.String r10 = "stream closed"
            r9.<init>(r10)     // Catch: java.lang.Throwable -> L70 java.lang.InterruptedException -> L72
            throw r9     // Catch: java.lang.Throwable -> L70 java.lang.InterruptedException -> L72
        L3b:
            long r4 = r8.getWriteBytesMaximum()     // Catch: java.lang.Throwable -> L70
            long r6 = r8.getWriteBytesTotal()     // Catch: java.lang.Throwable -> L70
            long r4 = r4 - r6
            long r4 = java.lang.Math.min(r12, r4)     // Catch: java.lang.Throwable -> L70
            int r2 = (int) r4     // Catch: java.lang.Throwable -> L70
            okhttp3.internal.http2.Http2Writer r4 = r8.getWriter()     // Catch: java.lang.Throwable -> L70
            int r4 = r4.maxDataLength()     // Catch: java.lang.Throwable -> L70
            int r2 = java.lang.Math.min(r2, r4)     // Catch: java.lang.Throwable -> L70
            long r4 = r8.getWriteBytesTotal()     // Catch: java.lang.Throwable -> L70
            long r6 = (long) r2     // Catch: java.lang.Throwable -> L70
            long r4 = r4 + r6
            r8.writeBytesTotal = r4     // Catch: java.lang.Throwable -> L70
            kotlin.Unit r4 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L70
            monitor-exit(r8)
            long r12 = r12 - r6
            okhttp3.internal.http2.Http2Writer r4 = r8.writer
            if (r10 == 0) goto L6b
            int r5 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
            if (r5 != 0) goto L6b
            r5 = 1
            goto L6c
        L6b:
            r5 = r3
        L6c:
            r4.data(r5, r9, r11, r2)
            goto Ld
        L70:
            r9 = move-exception
            goto L7f
        L72:
            java.lang.Thread r9 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L70
            r9.interrupt()     // Catch: java.lang.Throwable -> L70
            java.io.InterruptedIOException r9 = new java.io.InterruptedIOException     // Catch: java.lang.Throwable -> L70
            r9.<init>()     // Catch: java.lang.Throwable -> L70
            throw r9     // Catch: java.lang.Throwable -> L70
        L7f:
            monitor-exit(r8)
            throw r9
        L81:
            return
    }

    public final void writeHeaders$okhttp(int r2, boolean r3, java.util.List<okhttp3.internal.http2.Header> r4) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "alternating"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            okhttp3.internal.http2.Http2Writer r0 = r1.writer
            r0.headers(r3, r2, r4)
            return
    }

    public final void writePing() throws java.lang.InterruptedException {
            r4 = this;
            monitor-enter(r4)
            long r0 = r4.awaitPingsSent     // Catch: java.lang.Throwable -> L12
            r2 = 1
            long r0 = r0 + r2
            r4.awaitPingsSent = r0     // Catch: java.lang.Throwable -> L12
            monitor-exit(r4)
            r0 = 0
            r1 = 3
            r2 = 1330343787(0x4f4b6f6b, float:3.4130767E9)
            r4.writePing(r0, r1, r2)
            return
        L12:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    public final void writePing(boolean r2, int r3, int r4) {
            r1 = this;
            okhttp3.internal.http2.Http2Writer r0 = r1.writer     // Catch: java.io.IOException -> L6
            r0.ping(r2, r3, r4)     // Catch: java.io.IOException -> L6
            goto La
        L6:
            r2 = move-exception
            r1.failConnection(r2)
        La:
            return
    }

    public final void writePingAndAwaitPong() throws java.lang.InterruptedException {
            r0 = this;
            r0.writePing()
            r0.awaitPong()
            return
    }

    public final void writeSynReset$okhttp(int r2, okhttp3.internal.http2.ErrorCode r3) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "statusCode"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okhttp3.internal.http2.Http2Writer r0 = r1.writer
            r0.rstStream(r2, r3)
            return
    }

    public final void writeSynResetLater$okhttp(int r10, okhttp3.internal.http2.ErrorCode r11) {
            r9 = this;
            java.lang.String r0 = "errorCode"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            okhttp3.internal.concurrent.TaskQueue r0 = r9.writerQueue
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r9.connectionName
            r1.append(r2)
            r2 = 91
            r1.append(r2)
            r1.append(r10)
            java.lang.String r2 = "] writeSynReset"
            r1.append(r2)
            java.lang.String r4 = r1.toString()
            okhttp3.internal.http2.Http2Connection$writeSynResetLater$$inlined$execute$default$1 r1 = new okhttp3.internal.http2.Http2Connection$writeSynResetLater$$inlined$execute$default$1
            r5 = 1
            r3 = r1
            r6 = r9
            r7 = r10
            r8 = r11
            r3.<init>(r4, r5, r6, r7, r8)
            okhttp3.internal.concurrent.Task r1 = (okhttp3.internal.concurrent.Task) r1
            r10 = 0
            r0.schedule(r1, r10)
            return
    }

    public final void writeWindowUpdateLater$okhttp(int r11, long r12) {
            r10 = this;
            okhttp3.internal.concurrent.TaskQueue r0 = r10.writerQueue
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r10.connectionName
            r1.append(r2)
            r2 = 91
            r1.append(r2)
            r1.append(r11)
            java.lang.String r2 = "] windowUpdate"
            r1.append(r2)
            java.lang.String r4 = r1.toString()
            okhttp3.internal.http2.Http2Connection$writeWindowUpdateLater$$inlined$execute$default$1 r1 = new okhttp3.internal.http2.Http2Connection$writeWindowUpdateLater$$inlined$execute$default$1
            r5 = 1
            r3 = r1
            r6 = r10
            r7 = r11
            r8 = r12
            r3.<init>(r4, r5, r6, r7, r8)
            okhttp3.internal.concurrent.Task r1 = (okhttp3.internal.concurrent.Task) r1
            r11 = 0
            r0.schedule(r1, r11)
            return
    }
}
