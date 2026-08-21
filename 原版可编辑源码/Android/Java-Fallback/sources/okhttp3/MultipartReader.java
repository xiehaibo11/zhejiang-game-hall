package okhttp3;

@kotlin.Metadata(d1 = {"\u0000P\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\u0018\u0000 \u001c2\u00020\u0001:\u0003\u001c\u001d\u001eB\u000f\b\u0016\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004B\u0015\u0012\u0006\u0010\u0005\u001a\u00020\u0006\u0012\u0006\u0010\u0007\u001a\u00020\b¢\u0006\u0002\u0010\tJ\b\u0010\u0015\u001a\u00020\u0016H\u0016J\u0010\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0019\u001a\u00020\u0018H\u0002J\b\u0010\u001a\u001a\u0004\u0018\u00010\u001bR\u0013\u0010\u0007\u001a\u00020\b8\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\nR\u000e\u0010\u000b\u001a\u00020\fX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\r\u001a\u00020\u000eX\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u000f\u001a\b\u0018\u00010\u0010R\u00020\u0000X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0011\u001a\u00020\u000eX\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0012\u001a\u00020\fX\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0013\u001a\u00020\u0014X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u001f"}, d2 = {"Lokhttp3/MultipartReader;", "Ljava/io/Closeable;", "response", "Lokhttp3/ResponseBody;", "(Lokhttp3/ResponseBody;)V", "source", "Lokio/BufferedSource;", "boundary", "", "(Lokio/BufferedSource;Ljava/lang/String;)V", "()Ljava/lang/String;", "closed", "", "crlfDashDashBoundary", "Lokio/ByteString;", "currentPart", "Lokhttp3/MultipartReader$PartSource;", "dashDashBoundary", "noMoreParts", "partCount", "", "close", "", "currentPartBytesRemaining", "", "maxResult", "nextPart", "Lokhttp3/MultipartReader$Part;", "Companion", "Part", "PartSource", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class MultipartReader implements java.io.Closeable {
    public static final okhttp3.MultipartReader.Companion Companion = null;
    private static final okio.Options afterBoundaryOptions = null;
    private final java.lang.String boundary;
    private boolean closed;
    private final okio.ByteString crlfDashDashBoundary;
    private okhttp3.MultipartReader.PartSource currentPart;
    private final okio.ByteString dashDashBoundary;
    private boolean noMoreParts;
    private int partCount;
    private final okio.BufferedSource source;

    @kotlin.Metadata(d1 = {"\u0000\u0014\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0080\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002R\u0011\u0010\u0003\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0005\u0010\u0006¨\u0006\u0007"}, d2 = {"Lokhttp3/MultipartReader$Companion;", "", "()V", "afterBoundaryOptions", "Lokio/Options;", "getAfterBoundaryOptions", "()Lokio/Options;", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
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

        public final okio.Options getAfterBoundaryOptions() {
                r1 = this;
                okio.Options r0 = okhttp3.MultipartReader.access$getAfterBoundaryOptions$cp()
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\u001e\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0000\u0018\u00002\u00020\u0001B\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J\t\u0010\t\u001a\u00020\nH\u0096\u0001R\u0013\u0010\u0004\u001a\u00020\u00058\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0004\u0010\u0007R\u0013\u0010\u0002\u001a\u00020\u00038\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\b¨\u0006\u000b"}, d2 = {"Lokhttp3/MultipartReader$Part;", "Ljava/io/Closeable;", "headers", "Lokhttp3/Headers;", "body", "Lokio/BufferedSource;", "(Lokhttp3/Headers;Lokio/BufferedSource;)V", "()Lokio/BufferedSource;", "()Lokhttp3/Headers;", "close", "", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Part implements java.io.Closeable {
        private final okio.BufferedSource body;
        private final okhttp3.Headers headers;

        public Part(okhttp3.Headers r2, okio.BufferedSource r3) {
                r1 = this;
                java.lang.String r0 = "headers"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                java.lang.String r0 = "body"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r1.<init>()
                r1.headers = r2
                r1.body = r3
                return
        }

        public final okio.BufferedSource body() {
                r1 = this;
                okio.BufferedSource r0 = r1.body
                return r0
        }

        @Override
        public void close() {
                r1 = this;
                okio.BufferedSource r0 = r1.body
                r0.close()
                return
        }

        public final okhttp3.Headers headers() {
                r1 = this;
                okhttp3.Headers r0 = r1.headers
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0082\u0004\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\b\u0010\u0005\u001a\u00020\u0006H\u0016J\u0018\u0010\u0007\u001a\u00020\b2\u0006\u0010\t\u001a\u00020\n2\u0006\u0010\u000b\u001a\u00020\bH\u0016J\b\u0010\u0003\u001a\u00020\u0004H\u0016R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\f"}, d2 = {"Lokhttp3/MultipartReader$PartSource;", "Lokio/Source;", "(Lokhttp3/MultipartReader;)V", "timeout", "Lokio/Timeout;", "close", "", "read", "", "sink", "Lokio/Buffer;", "byteCount", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    private final class PartSource implements okio.Source {
        final okhttp3.MultipartReader this$0;
        private final okio.Timeout timeout;

        public PartSource(okhttp3.MultipartReader r2) {
                r1 = this;
                java.lang.String r0 = "this$0"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.this$0 = r2
                r1.<init>()
                okio.Timeout r2 = new okio.Timeout
                r2.<init>()
                r1.timeout = r2
                return
        }

        @Override
        public void close() {
                r2 = this;
                okhttp3.MultipartReader r0 = r2.this$0
                okhttp3.MultipartReader$PartSource r0 = okhttp3.MultipartReader.access$getCurrentPart$p(r0)
                boolean r0 = kotlin.jvm.internal.Intrinsics.areEqual(r0, r2)
                if (r0 == 0) goto L12
                okhttp3.MultipartReader r0 = r2.this$0
                r1 = 0
                okhttp3.MultipartReader.access$setCurrentPart$p(r0, r1)
            L12:
                return
        }

        @Override
        public long read(okio.Buffer r17, long r18) {
                r16 = this;
                r1 = r16
                r0 = r17
                r2 = r18
                java.lang.String r4 = "sink"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r4)
                r4 = 0
                int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r6 < 0) goto L13
                r6 = 1
                goto L14
            L13:
                r6 = 0
            L14:
                if (r6 == 0) goto Le7
                okhttp3.MultipartReader r6 = r1.this$0
                okhttp3.MultipartReader$PartSource r6 = okhttp3.MultipartReader.access$getCurrentPart$p(r6)
                boolean r6 = kotlin.jvm.internal.Intrinsics.areEqual(r6, r1)
                if (r6 == 0) goto Ldb
                okhttp3.MultipartReader r6 = r1.this$0
                okio.BufferedSource r6 = okhttp3.MultipartReader.access$getSource$p(r6)
                okio.Timeout r6 = r6.timeout()
                okio.Timeout r7 = r1.timeout
                okhttp3.MultipartReader r8 = r1.this$0
                long r9 = r6.timeoutNanos()
                okio.Timeout$Companion r11 = okio.Timeout.Companion
                long r12 = r7.timeoutNanos()
                long r14 = r6.timeoutNanos()
                long r11 = r11.minTimeout(r12, r14)
                java.util.concurrent.TimeUnit r13 = java.util.concurrent.TimeUnit.NANOSECONDS
                r6.timeout(r11, r13)
                boolean r11 = r6.hasDeadline()
                if (r11 == 0) goto L9a
                long r14 = r6.deadlineNanoTime()
                boolean r11 = r7.hasDeadline()
                if (r11 == 0) goto L66
                long r12 = r6.deadlineNanoTime()
                long r4 = r7.deadlineNanoTime()
                long r4 = java.lang.Math.min(r12, r4)
                r6.deadlineNanoTime(r4)
            L66:
                long r2 = okhttp3.MultipartReader.access$currentPartBytesRemaining(r8, r2)     // Catch: java.lang.Throwable -> L8a
                r4 = 0
                int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r4 != 0) goto L73
                r12 = -1
                goto L7b
            L73:
                okio.BufferedSource r4 = okhttp3.MultipartReader.access$getSource$p(r8)     // Catch: java.lang.Throwable -> L8a
                long r12 = r4.read(r0, r2)     // Catch: java.lang.Throwable -> L8a
            L7b:
                java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.NANOSECONDS
                r6.timeout(r9, r0)
                boolean r0 = r7.hasDeadline()
                if (r0 == 0) goto L89
                r6.deadlineNanoTime(r14)
            L89:
                return r12
            L8a:
                r0 = move-exception
                java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.NANOSECONDS
                r6.timeout(r9, r2)
                boolean r2 = r7.hasDeadline()
                if (r2 == 0) goto L99
                r6.deadlineNanoTime(r14)
            L99:
                throw r0
            L9a:
                boolean r4 = r7.hasDeadline()
                if (r4 == 0) goto La7
                long r4 = r7.deadlineNanoTime()
                r6.deadlineNanoTime(r4)
            La7:
                long r2 = okhttp3.MultipartReader.access$currentPartBytesRemaining(r8, r2)     // Catch: java.lang.Throwable -> Lcb
                r4 = 0
                int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r4 != 0) goto Lb4
                r12 = -1
                goto Lbc
            Lb4:
                okio.BufferedSource r4 = okhttp3.MultipartReader.access$getSource$p(r8)     // Catch: java.lang.Throwable -> Lcb
                long r12 = r4.read(r0, r2)     // Catch: java.lang.Throwable -> Lcb
            Lbc:
                java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.NANOSECONDS
                r6.timeout(r9, r0)
                boolean r0 = r7.hasDeadline()
                if (r0 == 0) goto Lca
                r6.clearDeadline()
            Lca:
                return r12
            Lcb:
                r0 = move-exception
                java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.NANOSECONDS
                r6.timeout(r9, r2)
                boolean r2 = r7.hasDeadline()
                if (r2 == 0) goto Lda
                r6.clearDeadline()
            Lda:
                throw r0
            Ldb:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r2 = "closed"
                java.lang.String r2 = r2.toString()
                r0.<init>(r2)
                throw r0
            Le7:
                java.lang.Long r0 = java.lang.Long.valueOf(r18)
                java.lang.String r2 = "byteCount < 0: "
                java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r2, r0)
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r0 = r0.toString()
                r2.<init>(r0)
                throw r2
        }

        @Override
        public okio.Timeout timeout() {
                r1 = this;
                okio.Timeout r0 = r1.timeout
                return r0
        }
    }

    static {
            okhttp3.MultipartReader$Companion r0 = new okhttp3.MultipartReader$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.MultipartReader.Companion = r0
            okio.Options$Companion r0 = okio.Options.Companion
            r1 = 4
            okio.ByteString[] r1 = new okio.ByteString[r1]
            okio.ByteString$Companion r2 = okio.ByteString.Companion
            java.lang.String r3 = "\r\n"
            okio.ByteString r2 = r2.encodeUtf8(r3)
            r3 = 0
            r1[r3] = r2
            okio.ByteString$Companion r2 = okio.ByteString.Companion
            java.lang.String r3 = "--"
            okio.ByteString r2 = r2.encodeUtf8(r3)
            r3 = 1
            r1[r3] = r2
            okio.ByteString$Companion r2 = okio.ByteString.Companion
            java.lang.String r3 = " "
            okio.ByteString r2 = r2.encodeUtf8(r3)
            r3 = 2
            r1[r3] = r2
            okio.ByteString$Companion r2 = okio.ByteString.Companion
            java.lang.String r3 = "\t"
            okio.ByteString r2 = r2.encodeUtf8(r3)
            r3 = 3
            r1[r3] = r2
            okio.Options r0 = r0.of(r1)
            okhttp3.MultipartReader.afterBoundaryOptions = r0
            return
    }

    public MultipartReader(okhttp3.ResponseBody r3) throws java.io.IOException {
            r2 = this;
            java.lang.String r0 = "response"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okio.BufferedSource r0 = r3.source()
            okhttp3.MediaType r3 = r3.contentType()
            if (r3 != 0) goto L11
            r3 = 0
            goto L17
        L11:
            java.lang.String r1 = "boundary"
            java.lang.String r3 = r3.parameter(r1)
        L17:
            if (r3 == 0) goto L1d
            r2.<init>(r0, r3)
            return
        L1d:
            java.net.ProtocolException r3 = new java.net.ProtocolException
            java.lang.String r0 = "expected the Content-Type to have a boundary parameter"
            r3.<init>(r0)
            throw r3
    }

    public MultipartReader(okio.BufferedSource r2, java.lang.String r3) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "boundary"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r1.<init>()
            r1.source = r2
            r1.boundary = r3
            okio.Buffer r2 = new okio.Buffer
            r2.<init>()
            java.lang.String r3 = "--"
            okio.Buffer r2 = r2.writeUtf8(r3)
            java.lang.String r3 = r1.boundary
            okio.Buffer r2 = r2.writeUtf8(r3)
            okio.ByteString r2 = r2.readByteString()
            r1.dashDashBoundary = r2
            okio.Buffer r2 = new okio.Buffer
            r2.<init>()
            java.lang.String r3 = "\r\n--"
            okio.Buffer r2 = r2.writeUtf8(r3)
            java.lang.String r3 = r1.boundary
            okio.Buffer r2 = r2.writeUtf8(r3)
            okio.ByteString r2 = r2.readByteString()
            r1.crlfDashDashBoundary = r2
            return
    }

    public static final long access$currentPartBytesRemaining(okhttp3.MultipartReader r0, long r1) {
            long r0 = r0.currentPartBytesRemaining(r1)
            return r0
    }

    public static final okio.Options access$getAfterBoundaryOptions$cp() {
            okio.Options r0 = okhttp3.MultipartReader.afterBoundaryOptions
            return r0
    }

    public static final okhttp3.MultipartReader.PartSource access$getCurrentPart$p(okhttp3.MultipartReader r0) {
            okhttp3.MultipartReader$PartSource r0 = r0.currentPart
            return r0
    }

    public static final okio.BufferedSource access$getSource$p(okhttp3.MultipartReader r0) {
            okio.BufferedSource r0 = r0.source
            return r0
    }

    public static final void access$setCurrentPart$p(okhttp3.MultipartReader r0, okhttp3.MultipartReader.PartSource r1) {
            r0.currentPart = r1
            return
    }

    private final long currentPartBytesRemaining(long r5) {
            r4 = this;
            okio.BufferedSource r0 = r4.source
            okio.ByteString r1 = r4.crlfDashDashBoundary
            int r1 = r1.size()
            long r1 = (long) r1
            r0.require(r1)
            okio.BufferedSource r0 = r4.source
            okio.Buffer r0 = r0.getBuffer()
            okio.ByteString r1 = r4.crlfDashDashBoundary
            long r0 = r0.indexOf(r1)
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L38
            okio.BufferedSource r0 = r4.source
            okio.Buffer r0 = r0.getBuffer()
            long r0 = r0.size()
            okio.ByteString r2 = r4.crlfDashDashBoundary
            int r2 = r2.size()
            long r2 = (long) r2
            long r0 = r0 - r2
            r2 = 1
            long r0 = r0 + r2
            long r5 = java.lang.Math.min(r5, r0)
            goto L3c
        L38:
            long r5 = java.lang.Math.min(r5, r0)
        L3c:
            return r5
    }

    public final java.lang.String boundary() {
            r1 = this;
            java.lang.String r0 = r1.boundary
            return r0
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.closed
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r1.closed = r0
            r0 = 0
            r1.currentPart = r0
            okio.BufferedSource r0 = r1.source
            r0.close()
            return
    }

    public final okhttp3.MultipartReader.Part nextPart() throws java.io.IOException {
            r7 = this;
            boolean r0 = r7.closed
            r1 = 1
            r0 = r0 ^ r1
            if (r0 == 0) goto La0
            boolean r0 = r7.noMoreParts
            r2 = 0
            if (r0 == 0) goto Lc
            return r2
        Lc:
            int r0 = r7.partCount
            r3 = 0
            if (r0 != 0) goto L29
            okio.BufferedSource r0 = r7.source
            okio.ByteString r5 = r7.dashDashBoundary
            boolean r0 = r0.rangeEquals(r3, r5)
            if (r0 == 0) goto L29
            okio.BufferedSource r0 = r7.source
            okio.ByteString r3 = r7.dashDashBoundary
            int r3 = r3.size()
            long r3 = (long) r3
            r0.skip(r3)
            goto L3f
        L29:
            r5 = 8192(0x2000, double:4.0474E-320)
            long r5 = r7.currentPartBytesRemaining(r5)
            int r0 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r0 != 0) goto L9a
            okio.BufferedSource r0 = r7.source
            okio.ByteString r3 = r7.crlfDashDashBoundary
            int r3 = r3.size()
            long r3 = (long) r3
            r0.skip(r3)
        L3f:
            r0 = 0
        L40:
            okio.BufferedSource r3 = r7.source
            okio.Options r4 = okhttp3.MultipartReader.afterBoundaryOptions
            int r3 = r3.select(r4)
            r4 = -1
            java.lang.String r5 = "unexpected characters after boundary"
            if (r3 == r4) goto L94
            if (r3 == 0) goto L71
            if (r3 == r1) goto L5a
            r4 = 2
            if (r3 == r4) goto L58
            r4 = 3
            if (r3 == r4) goto L58
            goto L40
        L58:
            r0 = r1
            goto L40
        L5a:
            if (r0 != 0) goto L6b
            int r0 = r7.partCount
            if (r0 == 0) goto L63
            r7.noMoreParts = r1
            return r2
        L63:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            java.lang.String r1 = "expected at least 1 part"
            r0.<init>(r1)
            throw r0
        L6b:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            r0.<init>(r5)
            throw r0
        L71:
            int r0 = r7.partCount
            int r0 = r0 + r1
            r7.partCount = r0
            okhttp3.internal.http1.HeadersReader r0 = new okhttp3.internal.http1.HeadersReader
            okio.BufferedSource r1 = r7.source
            r0.<init>(r1)
            okhttp3.Headers r0 = r0.readHeaders()
            okhttp3.MultipartReader$PartSource r1 = new okhttp3.MultipartReader$PartSource
            r1.<init>(r7)
            r7.currentPart = r1
            okhttp3.MultipartReader$Part r2 = new okhttp3.MultipartReader$Part
            okio.Source r1 = (okio.Source) r1
            okio.BufferedSource r1 = okio.Okio.buffer(r1)
            r2.<init>(r0, r1)
            return r2
        L94:
            java.net.ProtocolException r0 = new java.net.ProtocolException
            r0.<init>(r5)
            throw r0
        L9a:
            okio.BufferedSource r0 = r7.source
            r0.skip(r5)
            goto L29
        La0:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "closed"
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            throw r0
    }
}
