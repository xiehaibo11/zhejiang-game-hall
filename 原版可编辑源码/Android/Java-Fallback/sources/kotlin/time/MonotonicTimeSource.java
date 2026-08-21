package kotlin.time;

@kotlin.Metadata(d1 = {"\u0000\u001c\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u000e\n\u0000\bÁ\u0002\u0018\u00002\u00020\u00012\u00020\u0002B\u0007\b\u0002¢\u0006\u0002\u0010\u0003J\b\u0010\u0004\u001a\u00020\u0005H\u0014J\b\u0010\u0006\u001a\u00020\u0007H\u0016¨\u0006\b"}, d2 = {"Lkotlin/time/MonotonicTimeSource;", "Lkotlin/time/AbstractLongTimeSource;", "Lkotlin/time/TimeSource;", "()V", "read", "", "toString", "", "kotlin-stdlib"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class MonotonicTimeSource extends kotlin.time.AbstractLongTimeSource implements kotlin.time.TimeSource {
    public static final kotlin.time.MonotonicTimeSource INSTANCE = null;

    static {
            kotlin.time.MonotonicTimeSource r0 = new kotlin.time.MonotonicTimeSource
            r0.<init>()
            kotlin.time.MonotonicTimeSource.INSTANCE = r0
            return
    }

    private MonotonicTimeSource() {
            r1 = this;
            kotlin.time.DurationUnit r0 = kotlin.time.DurationUnit.NANOSECONDS
            r1.<init>(r0)
            return
    }

    @Override
    protected long read() {
            r2 = this;
            long r0 = java.lang.System.nanoTime()
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = "TimeSource(System.nanoTime())"
            return r0
    }
}
