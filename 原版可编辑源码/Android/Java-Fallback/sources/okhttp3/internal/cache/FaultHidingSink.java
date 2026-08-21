package okhttp3.internal.cache;

@kotlin.Metadata(d1 = {"\u00004\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\b\u0010\u0018\u00002\u00020\u0001B!\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0012\u0010\u0004\u001a\u000e\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\u00070\u0005¢\u0006\u0002\u0010\bJ\b\u0010\r\u001a\u00020\u0007H\u0016J\b\u0010\u000e\u001a\u00020\u0007H\u0016J\u0018\u0010\u000f\u001a\u00020\u00072\u0006\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\u0013H\u0016R\u000e\u0010\t\u001a\u00020\nX\u0082\u000e¢\u0006\u0002\n\u0000R\u001d\u0010\u0004\u001a\u000e\u0012\u0004\u0012\u00020\u0006\u0012\u0004\u0012\u00020\u00070\u0005¢\u0006\b\n\u0000\u001a\u0004\b\u000b\u0010\f¨\u0006\u0014"}, d2 = {"Lokhttp3/internal/cache/FaultHidingSink;", "Lokio/ForwardingSink;", "delegate", "Lokio/Sink;", "onException", "Lkotlin/Function1;", "Ljava/io/IOException;", "", "(Lokio/Sink;Lkotlin/jvm/functions/Function1;)V", "hasErrors", "", "getOnException", "()Lkotlin/jvm/functions/Function1;", "close", "flush", "write", "source", "Lokio/Buffer;", "byteCount", "", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public class FaultHidingSink extends okio.ForwardingSink {
    private boolean hasErrors;
    private final kotlin.jvm.functions.Function1<java.io.IOException, kotlin.Unit> onException;

    public FaultHidingSink(okio.Sink r2, kotlin.jvm.functions.Function1<? super java.io.IOException, kotlin.Unit> r3) {
            r1 = this;
            java.lang.String r0 = "delegate"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "onException"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r1.<init>(r2)
            r1.onException = r3
            return
    }

    @Override
    public void close() {
            r2 = this;
            boolean r0 = r2.hasErrors
            if (r0 == 0) goto L5
            return
        L5:
            super.close()     // Catch: java.io.IOException -> L9
            goto L12
        L9:
            r0 = move-exception
            r1 = 1
            r2.hasErrors = r1
            kotlin.jvm.functions.Function1<java.io.IOException, kotlin.Unit> r1 = r2.onException
            r1.invoke(r0)
        L12:
            return
    }

    @Override
    public void flush() {
            r2 = this;
            boolean r0 = r2.hasErrors
            if (r0 == 0) goto L5
            return
        L5:
            super.flush()     // Catch: java.io.IOException -> L9
            goto L12
        L9:
            r0 = move-exception
            r1 = 1
            r2.hasErrors = r1
            kotlin.jvm.functions.Function1<java.io.IOException, kotlin.Unit> r1 = r2.onException
            r1.invoke(r0)
        L12:
            return
    }

    public final kotlin.jvm.functions.Function1<java.io.IOException, kotlin.Unit> getOnException() {
            r1 = this;
            kotlin.jvm.functions.Function1<java.io.IOException, kotlin.Unit> r0 = r1.onException
            return r0
    }

    @Override
    public void write(okio.Buffer r2, long r3) {
            r1 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.hasErrors
            if (r0 == 0) goto Ld
            r2.skip(r3)
            return
        Ld:
            super.write(r2, r3)     // Catch: java.io.IOException -> L11
            goto L1a
        L11:
            r2 = move-exception
            r3 = 1
            r1.hasErrors = r3
            kotlin.jvm.functions.Function1<java.io.IOException, kotlin.Unit> r3 = r1.onException
            r3.invoke(r2)
        L1a:
            return
    }
}
