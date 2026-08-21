package okio;

@kotlin.Metadata(d1 = {"\u0000(\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0007\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0016\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0001¢\u0006\u0002\u0010\u0003J\b\u0010\u0006\u001a\u00020\u0001H\u0016J\b\u0010\u0007\u001a\u00020\u0001H\u0016J\b\u0010\b\u001a\u00020\tH\u0016J\u0010\u0010\b\u001a\u00020\u00012\u0006\u0010\b\u001a\u00020\tH\u0016J\b\u0010\n\u001a\u00020\u000bH\u0016J\u000e\u0010\u0005\u001a\u00020\u00002\u0006\u0010\u0002\u001a\u00020\u0001J\b\u0010\f\u001a\u00020\rH\u0016J\u0018\u0010\u000e\u001a\u00020\u00012\u0006\u0010\u000e\u001a\u00020\t2\u0006\u0010\u000f\u001a\u00020\u0010H\u0016J\b\u0010\u0011\u001a\u00020\tH\u0016R\u001c\u0010\u0002\u001a\u00020\u00018\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0002\u0010\u0004\"\u0004\b\u0005\u0010\u0003¨\u0006\u0012"}, d2 = {"Lokio/ForwardingTimeout;", "Lokio/Timeout;", "delegate", "(Lokio/Timeout;)V", "()Lokio/Timeout;", "setDelegate", "clearDeadline", "clearTimeout", "deadlineNanoTime", "", "hasDeadline", "", "throwIfReached", "", "timeout", "unit", "Ljava/util/concurrent/TimeUnit;", "timeoutNanos", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public class ForwardingTimeout extends okio.Timeout {
    private okio.Timeout delegate;

    public ForwardingTimeout(okio.Timeout r2) {
            r1 = this;
            java.lang.String r0 = "delegate"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.delegate = r2
            return
    }

    @Override
    public okio.Timeout clearDeadline() {
            r1 = this;
            okio.Timeout r0 = r1.delegate
            okio.Timeout r0 = r0.clearDeadline()
            return r0
    }

    @Override
    public okio.Timeout clearTimeout() {
            r1 = this;
            okio.Timeout r0 = r1.delegate
            okio.Timeout r0 = r0.clearTimeout()
            return r0
    }

    @Override
    public long deadlineNanoTime() {
            r2 = this;
            okio.Timeout r0 = r2.delegate
            long r0 = r0.deadlineNanoTime()
            return r0
    }

    @Override
    public okio.Timeout deadlineNanoTime(long r2) {
            r1 = this;
            okio.Timeout r0 = r1.delegate
            okio.Timeout r2 = r0.deadlineNanoTime(r2)
            return r2
    }

    public final okio.Timeout delegate() {
            r1 = this;
            okio.Timeout r0 = r1.delegate
            return r0
    }

    @Override
    public boolean hasDeadline() {
            r1 = this;
            okio.Timeout r0 = r1.delegate
            boolean r0 = r0.hasDeadline()
            return r0
    }

    public final okio.ForwardingTimeout setDelegate(okio.Timeout r2) {
            r1 = this;
            java.lang.String r0 = "delegate"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.delegate = r2
            return r1
    }

    public final void setDelegate(okio.Timeout r2) {
            r1 = this;
            java.lang.String r0 = "<set-?>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.delegate = r2
            return
    }

    @Override
    public void throwIfReached() throws java.io.IOException {
            r1 = this;
            okio.Timeout r0 = r1.delegate
            r0.throwIfReached()
            return
    }

    @Override
    public okio.Timeout timeout(long r2, java.util.concurrent.TimeUnit r4) {
            r1 = this;
            java.lang.String r0 = "unit"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            okio.Timeout r0 = r1.delegate
            okio.Timeout r2 = r0.timeout(r2, r4)
            return r2
    }

    @Override
    public long timeoutNanos() {
            r2 = this;
            okio.Timeout r0 = r2.delegate
            long r0 = r0.timeoutNanos()
            return r0
    }
}
