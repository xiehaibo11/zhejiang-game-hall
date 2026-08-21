package okio;

@kotlin.Metadata(d1 = {"\u0000D\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\u0006\u0010!\u001a\u00020\"J\u000e\u0010#\u001a\u00020\"2\u0006\u0010\u0017\u001a\u00020\u0010J\r\u0010\u0017\u001a\u00020\u0010H\u0007¢\u0006\u0002\b$J\r\u0010\u001b\u001a\u00020\u001cH\u0007¢\u0006\u0002\b%J&\u0010&\u001a\u00020\"*\u00020\u00102\u0017\u0010'\u001a\u0013\u0012\u0004\u0012\u00020\u0010\u0012\u0004\u0012\u00020\"0(¢\u0006\u0002\b)H\u0082\bR\u0014\u0010\u0005\u001a\u00020\u0006X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0007\u0010\bR\u001a\u0010\t\u001a\u00020\nX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000b\u0010\f\"\u0004\b\r\u0010\u000eR\u001c\u0010\u000f\u001a\u0004\u0018\u00010\u0010X\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0011\u0010\u0012\"\u0004\b\u0013\u0010\u0014R\u0014\u0010\u0002\u001a\u00020\u0003X\u0080\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0015\u0010\u0016R\u0013\u0010\u0017\u001a\u00020\u00108G¢\u0006\b\n\u0000\u001a\u0004\b\u0017\u0010\u0012R\u001a\u0010\u0018\u001a\u00020\nX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0019\u0010\f\"\u0004\b\u001a\u0010\u000eR\u0013\u0010\u001b\u001a\u00020\u001c8G¢\u0006\b\n\u0000\u001a\u0004\b\u001b\u0010\u001dR\u001a\u0010\u001e\u001a\u00020\nX\u0080\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001f\u0010\f\"\u0004\b \u0010\u000e¨\u0006*"}, d2 = {"Lokio/Pipe;", "", "maxBufferSize", "", "(J)V", "buffer", "Lokio/Buffer;", "getBuffer$okio", "()Lokio/Buffer;", "canceled", "", "getCanceled$okio", "()Z", "setCanceled$okio", "(Z)V", "foldedSink", "Lokio/Sink;", "getFoldedSink$okio", "()Lokio/Sink;", "setFoldedSink$okio", "(Lokio/Sink;)V", "getMaxBufferSize$okio", "()J", "sink", "sinkClosed", "getSinkClosed$okio", "setSinkClosed$okio", "source", "Lokio/Source;", "()Lokio/Source;", "sourceClosed", "getSourceClosed$okio", "setSourceClosed$okio", "cancel", "", "fold", "-deprecated_sink", "-deprecated_source", "forward", "block", "Lkotlin/Function1;", "Lkotlin/ExtensionFunctionType;", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public final class Pipe {
    private final okio.Buffer buffer;
    private boolean canceled;
    private okio.Sink foldedSink;
    private final long maxBufferSize;
    private final okio.Sink sink;
    private boolean sinkClosed;
    private final okio.Source source;
    private boolean sourceClosed;

    final class PipeSink implements okio.Sink {
        final okio.Pipe this$0;
        final okio.Timeout timeout;

        PipeSink(okio.Pipe r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                okio.Timeout r1 = new okio.Timeout
                r1.<init>()
                r0.timeout = r1
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r6 = this;
                okio.Pipe r0 = r6.this$0
                okio.Buffer r0 = r0.buffer
                monitor-enter(r0)
                okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L38
                boolean r1 = r1.sinkClosed     // Catch: java.lang.Throwable -> L38
                if (r1 == 0) goto Ld
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L38
                return
            Ld:
                okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L38
                boolean r1 = r1.sourceClosed     // Catch: java.lang.Throwable -> L38
                if (r1 == 0) goto L2a
                okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L38
                okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L38
                long r1 = r1.size()     // Catch: java.lang.Throwable -> L38
                r3 = 0
                int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r5 > 0) goto L22
                goto L2a
            L22:
                java.io.IOException r1 = new java.io.IOException     // Catch: java.lang.Throwable -> L38
                java.lang.String r2 = "source is closed"
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L38
                throw r1     // Catch: java.lang.Throwable -> L38
            L2a:
                okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L38
                r2 = 1
                r1.sinkClosed = r2     // Catch: java.lang.Throwable -> L38
                okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L38
                okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L38
                r1.notifyAll()     // Catch: java.lang.Throwable -> L38
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L38
                return
            L38:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L38
                throw r1
        }

        @Override
        public void flush() throws java.io.IOException {
                r6 = this;
                okio.Pipe r0 = r6.this$0
                okio.Buffer r0 = r0.buffer
                monitor-enter(r0)
                okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L32
                boolean r1 = r1.sinkClosed     // Catch: java.lang.Throwable -> L32
                if (r1 != 0) goto L2a
                okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L32
                boolean r1 = r1.sourceClosed     // Catch: java.lang.Throwable -> L32
                if (r1 == 0) goto L28
                okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L32
                okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L32
                long r1 = r1.size()     // Catch: java.lang.Throwable -> L32
                r3 = 0
                int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r5 > 0) goto L20
                goto L28
            L20:
                java.io.IOException r1 = new java.io.IOException     // Catch: java.lang.Throwable -> L32
                java.lang.String r2 = "source is closed"
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L32
                throw r1     // Catch: java.lang.Throwable -> L32
            L28:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
                return
            L2a:
                java.lang.IllegalStateException r1 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L32
                java.lang.String r2 = "closed"
                r1.<init>(r2)     // Catch: java.lang.Throwable -> L32
                throw r1     // Catch: java.lang.Throwable -> L32
            L32:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L32
                throw r1
        }

        @Override
        public okio.Timeout timeout() {
                r1 = this;
                okio.Timeout r0 = r1.timeout
                return r0
        }

        @Override
        public void write(okio.Buffer r8, long r9) throws java.io.IOException {
                r7 = this;
                okio.Pipe r0 = r7.this$0
                okio.Buffer r0 = r0.buffer
                monitor-enter(r0)
                okio.Pipe r1 = r7.this$0     // Catch: java.lang.Throwable -> L58
                boolean r1 = r1.sinkClosed     // Catch: java.lang.Throwable -> L58
                if (r1 != 0) goto L50
            Lb:
                r1 = 0
                int r3 = (r9 > r1 ? 1 : (r9 == r1 ? 0 : -1))
                if (r3 <= 0) goto L4e
                okio.Pipe r3 = r7.this$0     // Catch: java.lang.Throwable -> L58
                boolean r3 = r3.sourceClosed     // Catch: java.lang.Throwable -> L58
                if (r3 != 0) goto L46
                okio.Pipe r3 = r7.this$0     // Catch: java.lang.Throwable -> L58
                long r3 = r3.maxBufferSize     // Catch: java.lang.Throwable -> L58
                okio.Pipe r5 = r7.this$0     // Catch: java.lang.Throwable -> L58
                okio.Buffer r5 = r5.buffer     // Catch: java.lang.Throwable -> L58
                long r5 = r5.size()     // Catch: java.lang.Throwable -> L58
                long r3 = r3 - r5
                int r5 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
                if (r5 != 0) goto L32
                okio.Timeout r1 = r7.timeout     // Catch: java.lang.Throwable -> L58
                okio.Pipe r2 = r7.this$0     // Catch: java.lang.Throwable -> L58
                okio.Buffer r2 = r2.buffer     // Catch: java.lang.Throwable -> L58
                r1.waitUntilNotified(r2)     // Catch: java.lang.Throwable -> L58
                goto Lb
            L32:
                long r1 = java.lang.Math.min(r3, r9)     // Catch: java.lang.Throwable -> L58
                okio.Pipe r3 = r7.this$0     // Catch: java.lang.Throwable -> L58
                okio.Buffer r3 = r3.buffer     // Catch: java.lang.Throwable -> L58
                r3.write(r8, r1)     // Catch: java.lang.Throwable -> L58
                long r9 = r9 - r1
                okio.Pipe r1 = r7.this$0     // Catch: java.lang.Throwable -> L58
                okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L58
                r1.notifyAll()     // Catch: java.lang.Throwable -> L58
                goto Lb
            L46:
                java.io.IOException r8 = new java.io.IOException     // Catch: java.lang.Throwable -> L58
                java.lang.String r9 = "source is closed"
                r8.<init>(r9)     // Catch: java.lang.Throwable -> L58
                throw r8     // Catch: java.lang.Throwable -> L58
            L4e:
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L58
                return
            L50:
                java.lang.IllegalStateException r8 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L58
                java.lang.String r9 = "closed"
                r8.<init>(r9)     // Catch: java.lang.Throwable -> L58
                throw r8     // Catch: java.lang.Throwable -> L58
            L58:
                r8 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L58
                goto L5c
            L5b:
                throw r8
            L5c:
                goto L5b
        }
    }

    final class PipeSource implements okio.Source {
        final okio.Pipe this$0;
        final okio.Timeout timeout;

        PipeSource(okio.Pipe r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                okio.Timeout r1 = new okio.Timeout
                r1.<init>()
                r0.timeout = r1
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r3 = this;
                okio.Pipe r0 = r3.this$0
                okio.Buffer r0 = r0.buffer
                monitor-enter(r0)
                okio.Pipe r1 = r3.this$0     // Catch: java.lang.Throwable -> L13
                r2 = 1
                r1.sourceClosed = r2     // Catch: java.lang.Throwable -> L13
                okio.Pipe r1 = r3.this$0     // Catch: java.lang.Throwable -> L13
                okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L13
                r1.notifyAll()     // Catch: java.lang.Throwable -> L13
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
                return
            L13:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L13
                throw r1
        }

        @Override
        public long read(okio.Buffer r7, long r8) throws java.io.IOException {
                r6 = this;
                okio.Pipe r0 = r6.this$0
                okio.Buffer r0 = r0.buffer
                monitor-enter(r0)
                okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L46
                boolean r1 = r1.sourceClosed     // Catch: java.lang.Throwable -> L46
                if (r1 != 0) goto L3e
            Lb:
                okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L46
                okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L46
                long r1 = r1.size()     // Catch: java.lang.Throwable -> L46
                r3 = 0
                int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r5 != 0) goto L2d
                okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L46
                boolean r1 = r1.sinkClosed     // Catch: java.lang.Throwable -> L46
                if (r1 == 0) goto L23
                r7 = -1
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L46
                return r7
            L23:
                okio.Timeout r1 = r6.timeout     // Catch: java.lang.Throwable -> L46
                okio.Pipe r2 = r6.this$0     // Catch: java.lang.Throwable -> L46
                okio.Buffer r2 = r2.buffer     // Catch: java.lang.Throwable -> L46
                r1.waitUntilNotified(r2)     // Catch: java.lang.Throwable -> L46
                goto Lb
            L2d:
                okio.Pipe r1 = r6.this$0     // Catch: java.lang.Throwable -> L46
                okio.Buffer r1 = r1.buffer     // Catch: java.lang.Throwable -> L46
                long r7 = r1.read(r7, r8)     // Catch: java.lang.Throwable -> L46
                okio.Pipe r9 = r6.this$0     // Catch: java.lang.Throwable -> L46
                okio.Buffer r9 = r9.buffer     // Catch: java.lang.Throwable -> L46
                r9.notifyAll()     // Catch: java.lang.Throwable -> L46
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L46
                return r7
            L3e:
                java.lang.IllegalStateException r7 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L46
                java.lang.String r8 = "closed"
                r7.<init>(r8)     // Catch: java.lang.Throwable -> L46
                throw r7     // Catch: java.lang.Throwable -> L46
            L46:
                r7 = move-exception
                monitor-exit(r0)     // Catch: java.lang.Throwable -> L46
                goto L4a
            L49:
                throw r7
            L4a:
                goto L49
        }

        @Override
        public okio.Timeout timeout() {
                r1 = this;
                okio.Timeout r0 = r1.timeout
                return r0
        }
    }



    public Pipe(long r3) {
            r2 = this;
            r2.<init>()
            r2.maxBufferSize = r3
            okio.Buffer r3 = new okio.Buffer
            r3.<init>()
            r2.buffer = r3
            long r3 = r2.maxBufferSize
            r0 = 1
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 < 0) goto L16
            r3 = 1
            goto L17
        L16:
            r3 = 0
        L17:
            if (r3 == 0) goto L2c
            okio.Pipe$sink$1 r3 = new okio.Pipe$sink$1
            r3.<init>(r2)
            okio.Sink r3 = (okio.Sink) r3
            r2.sink = r3
            okio.Pipe$source$1 r3 = new okio.Pipe$source$1
            r3.<init>(r2)
            okio.Source r3 = (okio.Source) r3
            r2.source = r3
            return
        L2c:
            long r3 = r2.getMaxBufferSize$okio()
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            java.lang.String r4 = "maxBufferSize < 1: "
            java.lang.String r3 = kotlin.jvm.internal.Intrinsics.stringPlus(r4, r3)
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r3 = r3.toString()
            r4.<init>(r3)
            java.lang.Throwable r4 = (java.lang.Throwable) r4
            throw r4
    }

    private final void forward(okio.Sink r13, kotlin.jvm.functions.Function1<? super okio.Sink, kotlin.Unit> r14) {
            r12 = this;
            okio.Timeout r0 = r13.timeout()
            okio.Sink r1 = r12.sink()
            okio.Timeout r1 = r1.timeout()
            long r2 = r0.timeoutNanos()
            okio.Timeout$Companion r4 = okio.Timeout.Companion
            long r5 = r1.timeoutNanos()
            long r7 = r0.timeoutNanos()
            long r4 = r4.minTimeout(r5, r7)
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.NANOSECONDS
            r0.timeout(r4, r6)
            boolean r4 = r0.hasDeadline()
            r5 = 1
            if (r4 == 0) goto L73
            long r6 = r0.deadlineNanoTime()
            boolean r4 = r1.hasDeadline()
            if (r4 == 0) goto L43
            long r8 = r0.deadlineNanoTime()
            long r10 = r1.deadlineNanoTime()
            long r8 = java.lang.Math.min(r8, r10)
            r0.deadlineNanoTime(r8)
        L43:
            r14.invoke(r13)     // Catch: java.lang.Throwable -> L5d
            kotlin.Unit r13 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L5d
            kotlin.jvm.internal.InlineMarker.finallyStart(r5)
            java.util.concurrent.TimeUnit r13 = java.util.concurrent.TimeUnit.NANOSECONDS
            r0.timeout(r2, r13)
            boolean r13 = r1.hasDeadline()
            if (r13 == 0) goto L59
            r0.deadlineNanoTime(r6)
        L59:
            kotlin.jvm.internal.InlineMarker.finallyEnd(r5)
            goto L99
        L5d:
            r13 = move-exception
            kotlin.jvm.internal.InlineMarker.finallyStart(r5)
            java.util.concurrent.TimeUnit r14 = java.util.concurrent.TimeUnit.NANOSECONDS
            r0.timeout(r2, r14)
            boolean r14 = r1.hasDeadline()
            if (r14 == 0) goto L6f
            r0.deadlineNanoTime(r6)
        L6f:
            kotlin.jvm.internal.InlineMarker.finallyEnd(r5)
            throw r13
        L73:
            boolean r4 = r1.hasDeadline()
            if (r4 == 0) goto L80
            long r6 = r1.deadlineNanoTime()
            r0.deadlineNanoTime(r6)
        L80:
            r14.invoke(r13)     // Catch: java.lang.Throwable -> L9a
            kotlin.Unit r13 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L9a
            kotlin.jvm.internal.InlineMarker.finallyStart(r5)
            java.util.concurrent.TimeUnit r13 = java.util.concurrent.TimeUnit.NANOSECONDS
            r0.timeout(r2, r13)
            boolean r13 = r1.hasDeadline()
            if (r13 == 0) goto L96
            r0.clearDeadline()
        L96:
            kotlin.jvm.internal.InlineMarker.finallyEnd(r5)
        L99:
            return
        L9a:
            r13 = move-exception
            kotlin.jvm.internal.InlineMarker.finallyStart(r5)
            java.util.concurrent.TimeUnit r14 = java.util.concurrent.TimeUnit.NANOSECONDS
            r0.timeout(r2, r14)
            boolean r14 = r1.hasDeadline()
            if (r14 == 0) goto Lac
            r0.clearDeadline()
        Lac:
            kotlin.jvm.internal.InlineMarker.finallyEnd(r5)
            throw r13
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "sink", imports = {}))
    public final okio.Sink -deprecated_sink() {
            r1 = this;
            okio.Sink r0 = r1.sink
            return r0
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "source", imports = {}))
    public final okio.Source -deprecated_source() {
            r1 = this;
            okio.Source r0 = r1.source
            return r0
    }

    public final void cancel() {
            r2 = this;
            okio.Buffer r0 = r2.buffer
            monitor-enter(r0)
            r1 = 1
            r2.setCanceled$okio(r1)     // Catch: java.lang.Throwable -> L1b
            okio.Buffer r1 = r2.getBuffer$okio()     // Catch: java.lang.Throwable -> L1b
            r1.clear()     // Catch: java.lang.Throwable -> L1b
            okio.Buffer r1 = r2.getBuffer$okio()     // Catch: java.lang.Throwable -> L1b
            java.lang.Object r1 = (java.lang.Object) r1     // Catch: java.lang.Throwable -> L1b
            r1.notifyAll()     // Catch: java.lang.Throwable -> L1b
            kotlin.Unit r1 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L1b
            monitor-exit(r0)
            return
        L1b:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public final void fold(okio.Sink r8) throws java.io.IOException {
            r7 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
        L5:
            okio.Buffer r0 = r7.buffer
            monitor-enter(r0)
            okio.Sink r1 = r7.getFoldedSink$okio()     // Catch: java.lang.Throwable -> L91
            r2 = 1
            if (r1 != 0) goto L11
            r1 = r2
            goto L12
        L11:
            r1 = 0
        L12:
            if (r1 == 0) goto L83
            boolean r1 = r7.getCanceled$okio()     // Catch: java.lang.Throwable -> L91
            if (r1 != 0) goto L78
            okio.Buffer r1 = r7.getBuffer$okio()     // Catch: java.lang.Throwable -> L91
            boolean r1 = r1.exhausted()     // Catch: java.lang.Throwable -> L91
            if (r1 == 0) goto L2c
            r7.setSourceClosed$okio(r2)     // Catch: java.lang.Throwable -> L91
            r7.setFoldedSink$okio(r8)     // Catch: java.lang.Throwable -> L91
            monitor-exit(r0)
            return
        L2c:
            boolean r1 = r7.getSinkClosed$okio()     // Catch: java.lang.Throwable -> L91
            okio.Buffer r3 = new okio.Buffer     // Catch: java.lang.Throwable -> L91
            r3.<init>()     // Catch: java.lang.Throwable -> L91
            okio.Buffer r4 = r7.getBuffer$okio()     // Catch: java.lang.Throwable -> L91
            okio.Buffer r5 = r7.getBuffer$okio()     // Catch: java.lang.Throwable -> L91
            long r5 = r5.size()     // Catch: java.lang.Throwable -> L91
            r3.write(r4, r5)     // Catch: java.lang.Throwable -> L91
            okio.Buffer r4 = r7.getBuffer$okio()     // Catch: java.lang.Throwable -> L91
            java.lang.Object r4 = (java.lang.Object) r4     // Catch: java.lang.Throwable -> L91
            r4.notifyAll()     // Catch: java.lang.Throwable -> L91
            kotlin.Unit r4 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L91
            monitor-exit(r0)
            long r4 = r3.size()     // Catch: java.lang.Throwable -> L61
            r8.write(r3, r4)     // Catch: java.lang.Throwable -> L61
            if (r1 == 0) goto L5d
            r8.close()     // Catch: java.lang.Throwable -> L61
            goto L5
        L5d:
            r8.flush()     // Catch: java.lang.Throwable -> L61
            goto L5
        L61:
            r8 = move-exception
            okio.Buffer r0 = r7.buffer
            monitor-enter(r0)
            r7.setSourceClosed$okio(r2)     // Catch: java.lang.Throwable -> L75
            okio.Buffer r1 = r7.getBuffer$okio()     // Catch: java.lang.Throwable -> L75
            java.lang.Object r1 = (java.lang.Object) r1     // Catch: java.lang.Throwable -> L75
            r1.notifyAll()     // Catch: java.lang.Throwable -> L75
            kotlin.Unit r1 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L75
            monitor-exit(r0)
            throw r8
        L75:
            r8 = move-exception
            monitor-exit(r0)
            throw r8
        L78:
            r7.setFoldedSink$okio(r8)     // Catch: java.lang.Throwable -> L91
            java.io.IOException r8 = new java.io.IOException     // Catch: java.lang.Throwable -> L91
            java.lang.String r1 = "canceled"
            r8.<init>(r1)     // Catch: java.lang.Throwable -> L91
            throw r8     // Catch: java.lang.Throwable -> L91
        L83:
            java.lang.String r8 = "sink already folded"
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L91
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L91
            r1.<init>(r8)     // Catch: java.lang.Throwable -> L91
            java.lang.Throwable r1 = (java.lang.Throwable) r1     // Catch: java.lang.Throwable -> L91
            throw r1     // Catch: java.lang.Throwable -> L91
        L91:
            r8 = move-exception
            monitor-exit(r0)
            throw r8
    }

    public final okio.Buffer getBuffer$okio() {
            r1 = this;
            okio.Buffer r0 = r1.buffer
            return r0
    }

    public final boolean getCanceled$okio() {
            r1 = this;
            boolean r0 = r1.canceled
            return r0
    }

    public final okio.Sink getFoldedSink$okio() {
            r1 = this;
            okio.Sink r0 = r1.foldedSink
            return r0
    }

    public final long getMaxBufferSize$okio() {
            r2 = this;
            long r0 = r2.maxBufferSize
            return r0
    }

    public final boolean getSinkClosed$okio() {
            r1 = this;
            boolean r0 = r1.sinkClosed
            return r0
    }

    public final boolean getSourceClosed$okio() {
            r1 = this;
            boolean r0 = r1.sourceClosed
            return r0
    }

    public final void setCanceled$okio(boolean r1) {
            r0 = this;
            r0.canceled = r1
            return
    }

    public final void setFoldedSink$okio(okio.Sink r1) {
            r0 = this;
            r0.foldedSink = r1
            return
    }

    public final void setSinkClosed$okio(boolean r1) {
            r0 = this;
            r0.sinkClosed = r1
            return
    }

    public final void setSourceClosed$okio(boolean r1) {
            r0 = this;
            r0.sourceClosed = r1
            return
    }

    public final okio.Sink sink() {
            r1 = this;
            okio.Sink r0 = r1.sink
            return r0
    }

    public final okio.Source source() {
            r1 = this;
            okio.Source r0 = r1.source
            return r0
    }
}
