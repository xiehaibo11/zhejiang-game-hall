package okio;

@kotlin.Metadata(d1 = {"\u00002\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0005\b\u0016\u0018\u0000 \u00192\u00020\u0001:\u0001\u0019B\u0005¢\u0006\u0002\u0010\u0002J\b\u0010\b\u001a\u00020\u0000H\u0016J\b\u0010\t\u001a\u00020\u0000H\u0016J\u0016\u0010\n\u001a\u00020\u00002\u0006\u0010\u000b\u001a\u00020\u00042\u0006\u0010\f\u001a\u00020\rJ\b\u0010\u0003\u001a\u00020\u0004H\u0016J\u0010\u0010\u0003\u001a\u00020\u00002\u0006\u0010\u0003\u001a\u00020\u0004H\u0016J\b\u0010\u0005\u001a\u00020\u0006H\u0016J-\u0010\u000e\u001a\u0002H\u000f\"\u0004\b\u0000\u0010\u000f2\u0006\u0010\u0010\u001a\u00020\u00002\f\u0010\u0011\u001a\b\u0012\u0004\u0012\u0002H\u000f0\u0012H\u0086\bø\u0001\u0000¢\u0006\u0002\u0010\u0013J\b\u0010\u0014\u001a\u00020\u0015H\u0016J\u0018\u0010\u0016\u001a\u00020\u00002\u0006\u0010\u0016\u001a\u00020\u00042\u0006\u0010\f\u001a\u00020\rH\u0016J\b\u0010\u0007\u001a\u00020\u0004H\u0016J\u000e\u0010\u0017\u001a\u00020\u00152\u0006\u0010\u0018\u001a\u00020\u0001R\u000e\u0010\u0003\u001a\u00020\u0004X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\u0004X\u0082\u000e¢\u0006\u0002\n\u0000\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006\u001a"}, d2 = {"Lokio/Timeout;", "", "()V", "deadlineNanoTime", "", "hasDeadline", "", "timeoutNanos", "clearDeadline", "clearTimeout", "deadline", "duration", "unit", "Ljava/util/concurrent/TimeUnit;", "intersectWith", "T", "other", "block", "Lkotlin/Function0;", "(Lokio/Timeout;Lkotlin/jvm/functions/Function0;)Ljava/lang/Object;", "throwIfReached", "", "timeout", "waitUntilNotified", "monitor", "Companion", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public class Timeout {
    public static final okio.Timeout.Companion Companion = null;
    public static final okio.Timeout NONE = null;
    private long deadlineNanoTime;
    private boolean hasDeadline;
    private long timeoutNanos;

    final class 1 extends okio.Timeout {
        1() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public okio.Timeout deadlineNanoTime(long r1) {
                r0 = this;
                return r0
        }

        @Override
        public void throwIfReached() throws java.io.IOException {
                r0 = this;
                return
        }

        @Override
        public okio.Timeout timeout(long r1, java.util.concurrent.TimeUnit r3) {
                r0 = this;
                return r0
        }
    }

    @kotlin.Metadata(d1 = {"\u0000\u001a\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0016\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\u00062\u0006\u0010\b\u001a\u00020\u0006R\u0010\u0010\u0003\u001a\u00020\u00048\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006\t"}, d2 = {"Lokio/Timeout$Companion;", "", "()V", "NONE", "Lokio/Timeout;", "minTimeout", "", "aNanos", "bNanos", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
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

        public final long minTimeout(long r4, long r6) {
                r3 = this;
                r0 = 0
                int r2 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
                if (r2 != 0) goto L7
                goto L11
            L7:
                int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
                if (r0 != 0) goto Lc
                goto L12
            Lc:
                int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
                if (r0 >= 0) goto L11
                goto L12
            L11:
                r4 = r6
            L12:
                return r4
        }
    }

    static {
            okio.Timeout$Companion r0 = new okio.Timeout$Companion
            r1 = 0
            r0.<init>(r1)
            okio.Timeout.Companion = r0
            okio.Timeout$Companion$NONE$1 r0 = new okio.Timeout$Companion$NONE$1
            r0.<init>()
            okio.Timeout r0 = (okio.Timeout) r0
            okio.Timeout.NONE = r0
            return
    }

    public Timeout() {
            r0 = this;
            r0.<init>()
            return
    }

    public okio.Timeout clearDeadline() {
            r1 = this;
            r0 = 0
            r1.hasDeadline = r0
            return r1
    }

    public okio.Timeout clearTimeout() {
            r2 = this;
            r0 = 0
            r2.timeoutNanos = r0
            return r2
    }

    public final okio.Timeout deadline(long r3, java.util.concurrent.TimeUnit r5) {
            r2 = this;
            java.lang.String r0 = "unit"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 <= 0) goto Ld
            r0 = 1
            goto Le
        Ld:
            r0 = 0
        Le:
            if (r0 == 0) goto L1e
            long r0 = java.lang.System.nanoTime()
            long r3 = r5.toNanos(r3)
            long r0 = r0 + r3
            okio.Timeout r3 = r2.deadlineNanoTime(r0)
            return r3
        L1e:
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            java.lang.String r4 = "duration <= 0: "
            java.lang.String r3 = kotlin.jvm.internal.Intrinsics.stringPlus(r4, r3)
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r3 = r3.toString()
            r4.<init>(r3)
            java.lang.Throwable r4 = (java.lang.Throwable) r4
            throw r4
    }

    public long deadlineNanoTime() {
            r2 = this;
            boolean r0 = r2.hasDeadline
            if (r0 == 0) goto L7
            long r0 = r2.deadlineNanoTime
            return r0
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "No deadline"
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            java.lang.Throwable r0 = (java.lang.Throwable) r0
            throw r0
    }

    public okio.Timeout deadlineNanoTime(long r2) {
            r1 = this;
            r0 = 1
            r1.hasDeadline = r0
            r1.deadlineNanoTime = r2
            return r1
    }

    public boolean hasDeadline() {
            r1 = this;
            boolean r0 = r1.hasDeadline
            return r0
    }

    public final <T> T intersectWith(okio.Timeout r11, kotlin.jvm.functions.Function0<? extends T> r12) {
            r10 = this;
            java.lang.String r0 = "other"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            java.lang.String r0 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
            long r0 = r10.timeoutNanos()
            okio.Timeout$Companion r2 = okio.Timeout.Companion
            long r3 = r11.timeoutNanos()
            long r5 = r10.timeoutNanos()
            long r2 = r2.minTimeout(r3, r5)
            java.util.concurrent.TimeUnit r4 = java.util.concurrent.TimeUnit.NANOSECONDS
            r10.timeout(r2, r4)
            boolean r2 = r10.hasDeadline()
            r3 = 1
            if (r2 == 0) goto L70
            long r4 = r10.deadlineNanoTime()
            boolean r2 = r11.hasDeadline()
            if (r2 == 0) goto L41
            long r6 = r10.deadlineNanoTime()
            long r8 = r11.deadlineNanoTime()
            long r6 = java.lang.Math.min(r6, r8)
            r10.deadlineNanoTime(r6)
        L41:
            java.lang.Object r12 = r12.invoke()     // Catch: java.lang.Throwable -> L5a
            kotlin.jvm.internal.InlineMarker.finallyStart(r3)
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.NANOSECONDS
            r10.timeout(r0, r2)
            boolean r11 = r11.hasDeadline()
            if (r11 == 0) goto L56
            r10.deadlineNanoTime(r4)
        L56:
            kotlin.jvm.internal.InlineMarker.finallyEnd(r3)
            return r12
        L5a:
            r12 = move-exception
            kotlin.jvm.internal.InlineMarker.finallyStart(r3)
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.NANOSECONDS
            r10.timeout(r0, r2)
            boolean r11 = r11.hasDeadline()
            if (r11 == 0) goto L6c
            r10.deadlineNanoTime(r4)
        L6c:
            kotlin.jvm.internal.InlineMarker.finallyEnd(r3)
            throw r12
        L70:
            boolean r2 = r11.hasDeadline()
            if (r2 == 0) goto L7d
            long r4 = r11.deadlineNanoTime()
            r10.deadlineNanoTime(r4)
        L7d:
            java.lang.Object r12 = r12.invoke()     // Catch: java.lang.Throwable -> L96
            kotlin.jvm.internal.InlineMarker.finallyStart(r3)
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.NANOSECONDS
            r10.timeout(r0, r2)
            boolean r11 = r11.hasDeadline()
            if (r11 == 0) goto L92
            r10.clearDeadline()
        L92:
            kotlin.jvm.internal.InlineMarker.finallyEnd(r3)
            return r12
        L96:
            r12 = move-exception
            kotlin.jvm.internal.InlineMarker.finallyStart(r3)
            java.util.concurrent.TimeUnit r2 = java.util.concurrent.TimeUnit.NANOSECONDS
            r10.timeout(r0, r2)
            boolean r11 = r11.hasDeadline()
            if (r11 == 0) goto La8
            r10.clearDeadline()
        La8:
            kotlin.jvm.internal.InlineMarker.finallyEnd(r3)
            throw r12
    }

    public void throwIfReached() throws java.io.IOException {
            r4 = this;
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            boolean r0 = r0.isInterrupted()
            if (r0 != 0) goto L25
            boolean r0 = r4.hasDeadline
            if (r0 == 0) goto L24
            long r0 = r4.deadlineNanoTime
            long r2 = java.lang.System.nanoTime()
            long r0 = r0 - r2
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L1c
            goto L24
        L1c:
            java.io.InterruptedIOException r0 = new java.io.InterruptedIOException
            java.lang.String r1 = "deadline reached"
            r0.<init>(r1)
            throw r0
        L24:
            return
        L25:
            java.io.InterruptedIOException r0 = new java.io.InterruptedIOException
            java.lang.String r1 = "interrupted"
            r0.<init>(r1)
            throw r0
    }

    public okio.Timeout timeout(long r3, java.util.concurrent.TimeUnit r5) {
            r2 = this;
            java.lang.String r0 = "unit"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 < 0) goto Ld
            r0 = 1
            goto Le
        Ld:
            r0 = 0
        Le:
            if (r0 == 0) goto L17
            long r3 = r5.toNanos(r3)
            r2.timeoutNanos = r3
            return r2
        L17:
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            java.lang.String r4 = "timeout < 0: "
            java.lang.String r3 = kotlin.jvm.internal.Intrinsics.stringPlus(r4, r3)
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r3 = r3.toString()
            r4.<init>(r3)
            java.lang.Throwable r4 = (java.lang.Throwable) r4
            throw r4
    }

    public long timeoutNanos() {
            r2 = this;
            long r0 = r2.timeoutNanos
            return r0
    }

    public final void waitUntilNotified(java.lang.Object r10) throws java.io.InterruptedIOException {
            r9 = this;
            java.lang.String r0 = "monitor"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            boolean r0 = r9.hasDeadline()     // Catch: java.lang.InterruptedException -> L57
            long r1 = r9.timeoutNanos()     // Catch: java.lang.InterruptedException -> L57
            r3 = 0
            if (r0 != 0) goto L19
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 != 0) goto L19
            r10.wait()     // Catch: java.lang.InterruptedException -> L57
            return
        L19:
            long r5 = java.lang.System.nanoTime()     // Catch: java.lang.InterruptedException -> L57
            if (r0 == 0) goto L2d
            int r7 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r7 == 0) goto L2d
            long r7 = r9.deadlineNanoTime()     // Catch: java.lang.InterruptedException -> L57
            long r7 = r7 - r5
            long r1 = java.lang.Math.min(r1, r7)     // Catch: java.lang.InterruptedException -> L57
            goto L35
        L2d:
            if (r0 == 0) goto L35
            long r0 = r9.deadlineNanoTime()     // Catch: java.lang.InterruptedException -> L57
            long r1 = r0 - r5
        L35:
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r0 <= 0) goto L4a
            r3 = 1000000(0xf4240, double:4.940656E-318)
            long r7 = r1 / r3
            long r3 = r3 * r7
            long r3 = r1 - r3
            int r0 = (int) r3     // Catch: java.lang.InterruptedException -> L57
            r10.wait(r7, r0)     // Catch: java.lang.InterruptedException -> L57
            long r3 = java.lang.System.nanoTime()     // Catch: java.lang.InterruptedException -> L57
            long r3 = r3 - r5
        L4a:
            int r10 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r10 >= 0) goto L4f
            return
        L4f:
            java.io.InterruptedIOException r10 = new java.io.InterruptedIOException     // Catch: java.lang.InterruptedException -> L57
            java.lang.String r0 = "timeout"
            r10.<init>(r0)     // Catch: java.lang.InterruptedException -> L57
            throw r10     // Catch: java.lang.InterruptedException -> L57
        L57:
            java.lang.Thread r10 = java.lang.Thread.currentThread()
            r10.interrupt()
            java.io.InterruptedIOException r10 = new java.io.InterruptedIOException
            java.lang.String r0 = "interrupted"
            r10.<init>(r0)
            throw r10
    }
}
