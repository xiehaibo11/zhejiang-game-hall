package okio;

@kotlin.Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0016\u0018\u0000 \u001b2\u00020\u0001:\u0002\u001b\u001cB\u0005¢\u0006\u0002\u0010\u0002J\u0012\u0010\b\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\tH\u0001J\u0006\u0010\u000b\u001a\u00020\fJ\u0006\u0010\r\u001a\u00020\u0004J\u0012\u0010\u000e\u001a\u00020\t2\b\u0010\n\u001a\u0004\u0018\u00010\tH\u0014J\u0010\u0010\u000f\u001a\u00020\u00072\u0006\u0010\u0010\u001a\u00020\u0007H\u0002J\u000e\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0011\u001a\u00020\u0012J\u000e\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0013\u001a\u00020\u0014J\b\u0010\u0015\u001a\u00020\fH\u0014J%\u0010\u0016\u001a\u0002H\u0017\"\u0004\b\u0000\u0010\u00172\f\u0010\u0018\u001a\b\u0012\u0004\u0012\u0002H\u00170\u0019H\u0086\bø\u0001\u0000¢\u0006\u0002\u0010\u001aR\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0005\u001a\u0004\u0018\u00010\u0000X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006\u001d"}, d2 = {"Lokio/AsyncTimeout;", "Lokio/Timeout;", "()V", "inQueue", "", "next", "timeoutAt", "", "access$newTimeoutException", "Ljava/io/IOException;", "cause", "enter", "", "exit", "newTimeoutException", "remainingNanos", "now", "sink", "Lokio/Sink;", "source", "Lokio/Source;", "timedOut", "withTimeout", "T", "block", "Lkotlin/Function0;", "(Lkotlin/jvm/functions/Function0;)Ljava/lang/Object;", "Companion", "Watchdog", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public class AsyncTimeout extends okio.Timeout {
    public static final okio.AsyncTimeout.Companion Companion = null;
    private static final long IDLE_TIMEOUT_MILLIS = 0;
    private static final long IDLE_TIMEOUT_NANOS = 0;
    private static final int TIMEOUT_WRITE_SIZE = 65536;
    private static okio.AsyncTimeout head;
    private boolean inQueue;
    private okio.AsyncTimeout next;
    private long timeoutAt;

    class 1 implements okio.Sink {
        final okio.AsyncTimeout this$0;
        final okio.Sink val$sink;

        1(okio.AsyncTimeout r1, okio.Sink r2) {
                r0 = this;
                r0.this$0 = r1
                r0.val$sink = r2
                r0.<init>()
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r3 = this;
                okio.AsyncTimeout r0 = r3.this$0
                r0.enter()
                okio.Sink r0 = r3.val$sink     // Catch: java.lang.Throwable -> L11 java.io.IOException -> L13
                r0.close()     // Catch: java.lang.Throwable -> L11 java.io.IOException -> L13
                r0 = 1
                okio.AsyncTimeout r1 = r3.this$0
                r1.exit(r0)
                return
            L11:
                r0 = move-exception
                goto L1b
            L13:
                r0 = move-exception
                okio.AsyncTimeout r1 = r3.this$0     // Catch: java.lang.Throwable -> L11
                java.io.IOException r0 = r1.exit(r0)     // Catch: java.lang.Throwable -> L11
                throw r0     // Catch: java.lang.Throwable -> L11
            L1b:
                okio.AsyncTimeout r1 = r3.this$0
                r2 = 0
                r1.exit(r2)
                throw r0
        }

        @Override
        public void flush() throws java.io.IOException {
                r3 = this;
                okio.AsyncTimeout r0 = r3.this$0
                r0.enter()
                okio.Sink r0 = r3.val$sink     // Catch: java.lang.Throwable -> L11 java.io.IOException -> L13
                r0.flush()     // Catch: java.lang.Throwable -> L11 java.io.IOException -> L13
                r0 = 1
                okio.AsyncTimeout r1 = r3.this$0
                r1.exit(r0)
                return
            L11:
                r0 = move-exception
                goto L1b
            L13:
                r0 = move-exception
                okio.AsyncTimeout r1 = r3.this$0     // Catch: java.lang.Throwable -> L11
                java.io.IOException r0 = r1.exit(r0)     // Catch: java.lang.Throwable -> L11
                throw r0     // Catch: java.lang.Throwable -> L11
            L1b:
                okio.AsyncTimeout r1 = r3.this$0
                r2 = 0
                r1.exit(r2)
                throw r0
        }

        @Override
        public okio.Timeout timeout() {
                r1 = this;
                okio.AsyncTimeout r0 = r1.this$0
                return r0
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "AsyncTimeout.sink("
                r0.append(r1)
                okio.Sink r1 = r2.val$sink
                r0.append(r1)
                java.lang.String r1 = ")"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        @Override
        public void write(okio.Buffer r7, long r8) throws java.io.IOException {
                r6 = this;
                long r0 = r7.size
                r2 = 0
                r4 = r8
                okio.Util.checkOffsetAndCount(r0, r2, r4)
            L8:
                r0 = 0
                int r2 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
                if (r2 <= 0) goto L4a
                okio.Segment r2 = r7.head
            L10:
                r3 = 65536(0x10000, double:3.2379E-319)
                int r5 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
                if (r5 >= 0) goto L27
                int r3 = r2.limit
                int r4 = r2.pos
                int r3 = r3 - r4
                long r3 = (long) r3
                long r0 = r0 + r3
                int r3 = (r0 > r8 ? 1 : (r0 == r8 ? 0 : -1))
                if (r3 < 0) goto L24
                r0 = r8
                goto L27
            L24:
                okio.Segment r2 = r2.next
                goto L10
            L27:
                r2 = 0
                okio.AsyncTimeout r3 = r6.this$0
                r3.enter()
                okio.Sink r3 = r6.val$sink     // Catch: java.lang.Throwable -> L3a java.io.IOException -> L3c
                r3.write(r7, r0)     // Catch: java.lang.Throwable -> L3a java.io.IOException -> L3c
                long r8 = r8 - r0
                r0 = 1
                okio.AsyncTimeout r1 = r6.this$0
                r1.exit(r0)
                goto L8
            L3a:
                r7 = move-exception
                goto L44
            L3c:
                r7 = move-exception
                okio.AsyncTimeout r8 = r6.this$0     // Catch: java.lang.Throwable -> L3a
                java.io.IOException r7 = r8.exit(r7)     // Catch: java.lang.Throwable -> L3a
                throw r7     // Catch: java.lang.Throwable -> L3a
            L44:
                okio.AsyncTimeout r8 = r6.this$0
                r8.exit(r2)
                throw r7
            L4a:
                return
        }
    }

    class 2 implements okio.Source {
        final okio.AsyncTimeout this$0;
        final okio.Source val$source;

        2(okio.AsyncTimeout r1, okio.Source r2) {
                r0 = this;
                r0.this$0 = r1
                r0.val$source = r2
                r0.<init>()
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r3 = this;
                okio.Source r0 = r3.val$source     // Catch: java.lang.Throwable -> Lc java.io.IOException -> Le
                r0.close()     // Catch: java.lang.Throwable -> Lc java.io.IOException -> Le
                r0 = 1
                okio.AsyncTimeout r1 = r3.this$0
                r1.exit(r0)
                return
            Lc:
                r0 = move-exception
                goto L16
            Le:
                r0 = move-exception
                okio.AsyncTimeout r1 = r3.this$0     // Catch: java.lang.Throwable -> Lc
                java.io.IOException r0 = r1.exit(r0)     // Catch: java.lang.Throwable -> Lc
                throw r0     // Catch: java.lang.Throwable -> Lc
            L16:
                okio.AsyncTimeout r1 = r3.this$0
                r2 = 0
                r1.exit(r2)
                throw r0
        }

        @Override
        public long read(okio.Buffer r2, long r3) throws java.io.IOException {
                r1 = this;
                okio.AsyncTimeout r0 = r1.this$0
                r0.enter()
                okio.Source r0 = r1.val$source     // Catch: java.lang.Throwable -> L12 java.io.IOException -> L14
                long r2 = r0.read(r2, r3)     // Catch: java.lang.Throwable -> L12 java.io.IOException -> L14
                r4 = 1
                okio.AsyncTimeout r0 = r1.this$0
                r0.exit(r4)
                return r2
            L12:
                r2 = move-exception
                goto L1c
            L14:
                r2 = move-exception
                okio.AsyncTimeout r3 = r1.this$0     // Catch: java.lang.Throwable -> L12
                java.io.IOException r2 = r3.exit(r2)     // Catch: java.lang.Throwable -> L12
                throw r2     // Catch: java.lang.Throwable -> L12
            L1c:
                okio.AsyncTimeout r3 = r1.this$0
                r4 = 0
                r3.exit(r4)
                throw r2
        }

        @Override
        public okio.Timeout timeout() {
                r1 = this;
                okio.AsyncTimeout r0 = r1.this$0
                return r0
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "AsyncTimeout.source("
                r0.append(r1)
                okio.Source r1 = r2.val$source
                r0.append(r1)
                java.lang.String r1 = ")"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u000b\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u000f\u0010\n\u001a\u0004\u0018\u00010\tH\u0000¢\u0006\u0002\b\u000bJ\u0010\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\tH\u0002J \u0010\u000f\u001a\u00020\u00102\u0006\u0010\u000e\u001a\u00020\t2\u0006\u0010\u0011\u001a\u00020\u00042\u0006\u0010\u0012\u001a\u00020\rH\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0004X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0006\u001a\u00020\u0007X\u0082T¢\u0006\u0002\n\u0000R\u0010\u0010\b\u001a\u0004\u0018\u00010\tX\u0082\u000e¢\u0006\u0002\n\u0000¨\u0006\u0013"}, d2 = {"Lokio/AsyncTimeout$Companion;", "", "()V", "IDLE_TIMEOUT_MILLIS", "", "IDLE_TIMEOUT_NANOS", "TIMEOUT_WRITE_SIZE", "", "head", "Lokio/AsyncTimeout;", "awaitTimeout", "awaitTimeout$okio", "cancelScheduledTimeout", "", "node", "scheduleTimeout", "", "timeoutNanos", "hasDeadline", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
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

        public static final boolean access$cancelScheduledTimeout(okio.AsyncTimeout.Companion r0, okio.AsyncTimeout r1) {
                boolean r0 = r0.cancelScheduledTimeout(r1)
                return r0
        }

        public static final void access$scheduleTimeout(okio.AsyncTimeout.Companion r0, okio.AsyncTimeout r1, long r2, boolean r4) {
                r0.scheduleTimeout(r1, r2, r4)
                return
        }

        private final boolean cancelScheduledTimeout(okio.AsyncTimeout r5) {
                r4 = this;
                java.lang.Class<okio.AsyncTimeout> r0 = okio.AsyncTimeout.class
                monitor-enter(r0)
                boolean r1 = okio.AsyncTimeout.access$getInQueue$p(r5)     // Catch: java.lang.Throwable -> L30
                r2 = 0
                if (r1 != 0) goto Lc
                monitor-exit(r0)
                return r2
            Lc:
                okio.AsyncTimeout.access$setInQueue$p(r5, r2)     // Catch: java.lang.Throwable -> L30
                okio.AsyncTimeout r1 = okio.AsyncTimeout.access$getHead$cp()     // Catch: java.lang.Throwable -> L30
            L13:
                if (r1 == 0) goto L2d
                okio.AsyncTimeout r3 = okio.AsyncTimeout.access$getNext$p(r1)     // Catch: java.lang.Throwable -> L30
                if (r3 != r5) goto L28
                okio.AsyncTimeout r3 = okio.AsyncTimeout.access$getNext$p(r5)     // Catch: java.lang.Throwable -> L30
                okio.AsyncTimeout.access$setNext$p(r1, r3)     // Catch: java.lang.Throwable -> L30
                r1 = 0
                okio.AsyncTimeout.access$setNext$p(r5, r1)     // Catch: java.lang.Throwable -> L30
                monitor-exit(r0)
                return r2
            L28:
                okio.AsyncTimeout r1 = okio.AsyncTimeout.access$getNext$p(r1)     // Catch: java.lang.Throwable -> L30
                goto L13
            L2d:
                r5 = 1
                monitor-exit(r0)
                return r5
            L30:
                r5 = move-exception
                monitor-exit(r0)
                throw r5
        }

        private final void scheduleTimeout(okio.AsyncTimeout r6, long r7, boolean r9) {
                r5 = this;
                java.lang.Class<okio.AsyncTimeout> r0 = okio.AsyncTimeout.class
                monitor-enter(r0)
                boolean r1 = okio.AsyncTimeout.access$getInQueue$p(r6)     // Catch: java.lang.Throwable -> La8
                r2 = 1
                r1 = r1 ^ r2
                if (r1 == 0) goto L9a
                okio.AsyncTimeout.access$setInQueue$p(r6, r2)     // Catch: java.lang.Throwable -> La8
                okio.AsyncTimeout r1 = okio.AsyncTimeout.access$getHead$cp()     // Catch: java.lang.Throwable -> La8
                if (r1 != 0) goto L26
                okio.AsyncTimeout$Companion r1 = okio.AsyncTimeout.Companion     // Catch: java.lang.Throwable -> La8
                okio.AsyncTimeout r1 = new okio.AsyncTimeout     // Catch: java.lang.Throwable -> La8
                r1.<init>()     // Catch: java.lang.Throwable -> La8
                okio.AsyncTimeout.access$setHead$cp(r1)     // Catch: java.lang.Throwable -> La8
                okio.AsyncTimeout$Watchdog r1 = new okio.AsyncTimeout$Watchdog     // Catch: java.lang.Throwable -> La8
                r1.<init>()     // Catch: java.lang.Throwable -> La8
                r1.start()     // Catch: java.lang.Throwable -> La8
            L26:
                long r1 = java.lang.System.nanoTime()     // Catch: java.lang.Throwable -> La8
                r3 = 0
                int r3 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
                if (r3 == 0) goto L40
                if (r9 == 0) goto L40
                long r3 = r6.deadlineNanoTime()     // Catch: java.lang.Throwable -> La8
                long r3 = r3 - r1
                long r7 = java.lang.Math.min(r7, r3)     // Catch: java.lang.Throwable -> La8
                long r7 = r7 + r1
                okio.AsyncTimeout.access$setTimeoutAt$p(r6, r7)     // Catch: java.lang.Throwable -> La8
                goto L50
            L40:
                if (r3 == 0) goto L47
                long r7 = r7 + r1
                okio.AsyncTimeout.access$setTimeoutAt$p(r6, r7)     // Catch: java.lang.Throwable -> La8
                goto L50
            L47:
                if (r9 == 0) goto L94
                long r7 = r6.deadlineNanoTime()     // Catch: java.lang.Throwable -> La8
                okio.AsyncTimeout.access$setTimeoutAt$p(r6, r7)     // Catch: java.lang.Throwable -> La8
            L50:
                long r7 = okio.AsyncTimeout.access$remainingNanos(r6, r1)     // Catch: java.lang.Throwable -> La8
                okio.AsyncTimeout r9 = okio.AsyncTimeout.access$getHead$cp()     // Catch: java.lang.Throwable -> La8
                kotlin.jvm.internal.Intrinsics.checkNotNull(r9)     // Catch: java.lang.Throwable -> La8
            L5b:
                okio.AsyncTimeout r3 = okio.AsyncTimeout.access$getNext$p(r9)     // Catch: java.lang.Throwable -> La8
                if (r3 == 0) goto L79
                okio.AsyncTimeout r3 = okio.AsyncTimeout.access$getNext$p(r9)     // Catch: java.lang.Throwable -> La8
                kotlin.jvm.internal.Intrinsics.checkNotNull(r3)     // Catch: java.lang.Throwable -> La8
                long r3 = okio.AsyncTimeout.access$remainingNanos(r3, r1)     // Catch: java.lang.Throwable -> La8
                int r3 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
                if (r3 >= 0) goto L71
                goto L79
            L71:
                okio.AsyncTimeout r9 = okio.AsyncTimeout.access$getNext$p(r9)     // Catch: java.lang.Throwable -> La8
                kotlin.jvm.internal.Intrinsics.checkNotNull(r9)     // Catch: java.lang.Throwable -> La8
                goto L5b
            L79:
                okio.AsyncTimeout r7 = okio.AsyncTimeout.access$getNext$p(r9)     // Catch: java.lang.Throwable -> La8
                okio.AsyncTimeout.access$setNext$p(r6, r7)     // Catch: java.lang.Throwable -> La8
                okio.AsyncTimeout.access$setNext$p(r9, r6)     // Catch: java.lang.Throwable -> La8
                okio.AsyncTimeout r6 = okio.AsyncTimeout.access$getHead$cp()     // Catch: java.lang.Throwable -> La8
                if (r9 != r6) goto L90
                java.lang.Class<okio.AsyncTimeout> r6 = okio.AsyncTimeout.class
                java.lang.Object r6 = (java.lang.Object) r6     // Catch: java.lang.Throwable -> La8
                r6.notify()     // Catch: java.lang.Throwable -> La8
            L90:
                kotlin.Unit r6 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> La8
                monitor-exit(r0)
                return
            L94:
                java.lang.AssertionError r6 = new java.lang.AssertionError     // Catch: java.lang.Throwable -> La8
                r6.<init>()     // Catch: java.lang.Throwable -> La8
                throw r6     // Catch: java.lang.Throwable -> La8
            L9a:
                java.lang.String r6 = "Unbalanced enter/exit"
                java.lang.IllegalStateException r7 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> La8
                java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> La8
                r7.<init>(r6)     // Catch: java.lang.Throwable -> La8
                java.lang.Throwable r7 = (java.lang.Throwable) r7     // Catch: java.lang.Throwable -> La8
                throw r7     // Catch: java.lang.Throwable -> La8
            La8:
                r6 = move-exception
                monitor-exit(r0)
                throw r6
        }

        public final okio.AsyncTimeout awaitTimeout$okio() throws java.lang.InterruptedException {
                r8 = this;
                okio.AsyncTimeout r0 = okio.AsyncTimeout.access$getHead$cp()
                kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
                okio.AsyncTimeout r0 = okio.AsyncTimeout.access$getNext$p(r0)
                r1 = 0
                if (r0 != 0) goto L40
                long r2 = java.lang.System.nanoTime()
                java.lang.Class<okio.AsyncTimeout> r0 = okio.AsyncTimeout.class
                java.lang.Object r0 = (java.lang.Object) r0
                long r4 = okio.AsyncTimeout.access$getIDLE_TIMEOUT_MILLIS$cp()
                r0.wait(r4)
                okio.AsyncTimeout r0 = okio.AsyncTimeout.access$getHead$cp()
                kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
                okio.AsyncTimeout r0 = okio.AsyncTimeout.access$getNext$p(r0)
                if (r0 != 0) goto L3c
                long r4 = java.lang.System.nanoTime()
                long r4 = r4 - r2
                long r2 = okio.AsyncTimeout.access$getIDLE_TIMEOUT_NANOS$cp()
                int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
                if (r0 < 0) goto L3c
                okio.AsyncTimeout r0 = okio.AsyncTimeout.access$getHead$cp()
                goto L3f
            L3c:
                r0 = r1
                okio.AsyncTimeout r0 = (okio.AsyncTimeout) r0
            L3f:
                return r0
            L40:
                long r2 = java.lang.System.nanoTime()
                long r2 = okio.AsyncTimeout.access$remainingNanos(r0, r2)
                r4 = 0
                int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r4 <= 0) goto L5e
                r4 = 1000000(0xf4240, double:4.940656E-318)
                long r6 = r2 / r4
                long r4 = r4 * r6
                long r2 = r2 - r4
                java.lang.Class<okio.AsyncTimeout> r0 = okio.AsyncTimeout.class
                java.lang.Object r0 = (java.lang.Object) r0
                int r2 = (int) r2
                r0.wait(r6, r2)
                return r1
            L5e:
                okio.AsyncTimeout r2 = okio.AsyncTimeout.access$getHead$cp()
                kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
                okio.AsyncTimeout r3 = okio.AsyncTimeout.access$getNext$p(r0)
                okio.AsyncTimeout.access$setNext$p(r2, r3)
                okio.AsyncTimeout.access$setNext$p(r0, r1)
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\u0012\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\b\u0002\u0018\u00002\u00020\u0001B\u0007\b\u0000¢\u0006\u0002\u0010\u0002J\b\u0010\u0003\u001a\u00020\u0004H\u0016¨\u0006\u0005"}, d2 = {"Lokio/AsyncTimeout$Watchdog;", "Ljava/lang/Thread;", "()V", "run", "", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
    private static final class Watchdog extends java.lang.Thread {
        public Watchdog() {
                r1 = this;
                java.lang.String r0 = "Okio Watchdog"
                r1.<init>(r0)
                r0 = 1
                r1.setDaemon(r0)
                return
        }

        @Override
        public void run() {
                r3 = this;
            L0:
                java.lang.Class<okio.AsyncTimeout> r0 = okio.AsyncTimeout.class
                monitor-enter(r0)     // Catch: java.lang.InterruptedException -> L0
                okio.AsyncTimeout$Companion r1 = okio.AsyncTimeout.Companion     // Catch: java.lang.Throwable -> L21
                okio.AsyncTimeout r1 = r1.awaitTimeout$okio()     // Catch: java.lang.Throwable -> L21
                okio.AsyncTimeout r2 = okio.AsyncTimeout.access$getHead$cp()     // Catch: java.lang.Throwable -> L21
                if (r1 != r2) goto L17
                okio.AsyncTimeout$Companion r1 = okio.AsyncTimeout.Companion     // Catch: java.lang.Throwable -> L21
                r1 = 0
                okio.AsyncTimeout.access$setHead$cp(r1)     // Catch: java.lang.Throwable -> L21
                monitor-exit(r0)     // Catch: java.lang.InterruptedException -> L0
                return
            L17:
                kotlin.Unit r2 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L21
                monitor-exit(r0)     // Catch: java.lang.InterruptedException -> L0
                if (r1 != 0) goto L1d
                goto L0
            L1d:
                r1.timedOut()     // Catch: java.lang.InterruptedException -> L0
                goto L0
            L21:
                r1 = move-exception
                monitor-exit(r0)     // Catch: java.lang.InterruptedException -> L0
                throw r1     // Catch: java.lang.InterruptedException -> L0
        }
    }



    static {
            okio.AsyncTimeout$Companion r0 = new okio.AsyncTimeout$Companion
            r1 = 0
            r0.<init>(r1)
            okio.AsyncTimeout.Companion = r0
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.SECONDS
            r1 = 60
            long r0 = r0.toMillis(r1)
            okio.AsyncTimeout.IDLE_TIMEOUT_MILLIS = r0
            java.util.concurrent.TimeUnit r0 = java.util.concurrent.TimeUnit.MILLISECONDS
            long r1 = okio.AsyncTimeout.IDLE_TIMEOUT_MILLIS
            long r0 = r0.toNanos(r1)
            okio.AsyncTimeout.IDLE_TIMEOUT_NANOS = r0
            return
    }

    public AsyncTimeout() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final okio.AsyncTimeout access$getHead$cp() {
            okio.AsyncTimeout r0 = okio.AsyncTimeout.head
            return r0
    }

    public static final long access$getIDLE_TIMEOUT_MILLIS$cp() {
            long r0 = okio.AsyncTimeout.IDLE_TIMEOUT_MILLIS
            return r0
    }

    public static final long access$getIDLE_TIMEOUT_NANOS$cp() {
            long r0 = okio.AsyncTimeout.IDLE_TIMEOUT_NANOS
            return r0
    }

    public static final boolean access$getInQueue$p(okio.AsyncTimeout r0) {
            boolean r0 = r0.inQueue
            return r0
    }

    public static final okio.AsyncTimeout access$getNext$p(okio.AsyncTimeout r0) {
            okio.AsyncTimeout r0 = r0.next
            return r0
    }

    public static final long access$remainingNanos(okio.AsyncTimeout r0, long r1) {
            long r0 = r0.remainingNanos(r1)
            return r0
    }

    public static final void access$setHead$cp(okio.AsyncTimeout r0) {
            okio.AsyncTimeout.head = r0
            return
    }

    public static final void access$setInQueue$p(okio.AsyncTimeout r0, boolean r1) {
            r0.inQueue = r1
            return
    }

    public static final void access$setNext$p(okio.AsyncTimeout r0, okio.AsyncTimeout r1) {
            r0.next = r1
            return
    }

    public static final void access$setTimeoutAt$p(okio.AsyncTimeout r0, long r1) {
            r0.timeoutAt = r1
            return
    }

    private final long remainingNanos(long r3) {
            r2 = this;
            long r0 = r2.timeoutAt
            long r0 = r0 - r3
            return r0
    }

    public final java.io.IOException access$newTimeoutException(java.io.IOException r1) {
            r0 = this;
            java.io.IOException r1 = r0.newTimeoutException(r1)
            return r1
    }

    public final void enter() {
            r5 = this;
            long r0 = r5.timeoutNanos()
            boolean r2 = r5.hasDeadline()
            r3 = 0
            int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r3 != 0) goto L11
            if (r2 != 0) goto L11
            return
        L11:
            okio.AsyncTimeout$Companion r3 = okio.AsyncTimeout.Companion
            okio.AsyncTimeout.Companion.access$scheduleTimeout(r3, r5, r0, r2)
            return
    }

    public final boolean exit() {
            r1 = this;
            okio.AsyncTimeout$Companion r0 = okio.AsyncTimeout.Companion
            boolean r0 = okio.AsyncTimeout.Companion.access$cancelScheduledTimeout(r0, r1)
            return r0
    }

    protected java.io.IOException newTimeoutException(java.io.IOException r3) {
            r2 = this;
            java.io.InterruptedIOException r0 = new java.io.InterruptedIOException
            java.lang.String r1 = "timeout"
            r0.<init>(r1)
            if (r3 == 0) goto Le
            java.lang.Throwable r3 = (java.lang.Throwable) r3
            r0.initCause(r3)
        Le:
            java.io.IOException r0 = (java.io.IOException) r0
            return r0
    }

    public final okio.Sink sink(okio.Sink r2) {
            r1 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.AsyncTimeout$sink$1 r0 = new okio.AsyncTimeout$sink$1
            r0.<init>(r1, r2)
            okio.Sink r0 = (okio.Sink) r0
            return r0
    }

    public final okio.Source source(okio.Source r2) {
            r1 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.AsyncTimeout$source$1 r0 = new okio.AsyncTimeout$source$1
            r0.<init>(r1, r2)
            okio.Source r0 = (okio.Source) r0
            return r0
    }

    protected void timedOut() {
            r0 = this;
            return
    }

    public final <T> T withTimeout(kotlin.jvm.functions.Function0<? extends T> r3) {
            r2 = this;
            java.lang.String r0 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r2.enter()
            r0 = 1
            java.lang.Object r3 = r3.invoke()     // Catch: java.lang.Throwable -> L20 java.io.IOException -> L22
            kotlin.jvm.internal.InlineMarker.finallyStart(r0)
            boolean r1 = r2.exit()
            if (r1 != 0) goto L1a
            kotlin.jvm.internal.InlineMarker.finallyEnd(r0)
            return r3
        L1a:
            r3 = 0
            java.io.IOException r3 = r2.access$newTimeoutException(r3)
            throw r3
        L20:
            r3 = move-exception
            goto L32
        L22:
            r3 = move-exception
            boolean r1 = r2.exit()     // Catch: java.lang.Throwable -> L20
            if (r1 != 0) goto L2c
        L29:
            java.lang.Throwable r3 = (java.lang.Throwable) r3     // Catch: java.lang.Throwable -> L20
            goto L31
        L2c:
            java.io.IOException r3 = r2.access$newTimeoutException(r3)     // Catch: java.lang.Throwable -> L20
            goto L29
        L31:
            throw r3     // Catch: java.lang.Throwable -> L20
        L32:
            kotlin.jvm.internal.InlineMarker.finallyStart(r0)
            boolean r1 = r2.exit()
            kotlin.jvm.internal.InlineMarker.finallyEnd(r0)
            throw r3
    }
}
