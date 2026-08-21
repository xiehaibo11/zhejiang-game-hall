package okio;

@kotlin.Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\b&\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0001¢\u0006\u0002\u0010\u0003J\b\u0010\u0005\u001a\u00020\u0006H\u0016J\r\u0010\u0002\u001a\u00020\u0001H\u0007¢\u0006\u0002\b\u0007J\u0018\u0010\b\u001a\u00020\t2\u0006\u0010\n\u001a\u00020\u000b2\u0006\u0010\f\u001a\u00020\tH\u0016J\b\u0010\r\u001a\u00020\u000eH\u0016J\b\u0010\u000f\u001a\u00020\u0010H\u0016R\u0013\u0010\u0002\u001a\u00020\u00018\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0002\u0010\u0004¨\u0006\u0011"}, d2 = {"Lokio/ForwardingSource;", "Lokio/Source;", "delegate", "(Lokio/Source;)V", "()Lokio/Source;", "close", "", "-deprecated_delegate", "read", "", "sink", "Lokio/Buffer;", "byteCount", "timeout", "Lokio/Timeout;", "toString", "", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public abstract class ForwardingSource implements okio.Source {
    private final okio.Source delegate;

    public ForwardingSource(okio.Source r2) {
            r1 = this;
            java.lang.String r0 = "delegate"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.delegate = r2
            return
    }

    @kotlin.Deprecated(level = kotlin.DeprecationLevel.ERROR, message = "moved to val", replaceWith = @kotlin.ReplaceWith(expression = "delegate", imports = {}))
    public final okio.Source -deprecated_delegate() {
            r1 = this;
            okio.Source r0 = r1.delegate
            return r0
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            okio.Source r0 = r1.delegate
            r0.close()
            return
    }

    public final okio.Source delegate() {
            r1 = this;
            okio.Source r0 = r1.delegate
            return r0
    }

    @Override
    public long read(okio.Buffer r2, long r3) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.Source r0 = r1.delegate
            long r2 = r0.read(r2, r3)
            return r2
    }

    @Override
    public okio.Timeout timeout() {
            r1 = this;
            okio.Source r0 = r1.delegate
            okio.Timeout r0 = r0.timeout()
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.append(r1)
            r1 = 40
            r0.append(r1)
            okio.Source r1 = r2.delegate
            r0.append(r1)
            r1 = 41
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
