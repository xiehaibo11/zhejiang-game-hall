package okio;

@kotlin.Metadata(d1 = {"\u0000,\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\r\u0010\u0000\u001a\u00020\u0001H\u0007¢\u0006\u0002\b\u0002\u001a\n\u0010\u0003\u001a\u00020\u0004*\u00020\u0001\u001a\n\u0010\u0003\u001a\u00020\u0005*\u00020\u0006\u001aA\u0010\u0007\u001a\u0002H\b\"\u0010\b\u0000\u0010\t*\n\u0018\u00010\nj\u0004\u0018\u0001`\u000b\"\u0004\b\u0001\u0010\b*\u0002H\t2\u0012\u0010\f\u001a\u000e\u0012\u0004\u0012\u0002H\t\u0012\u0004\u0012\u0002H\b0\rH\u0086\bø\u0001\u0000¢\u0006\u0002\u0010\u000e\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006\u000f"}, d2 = {"blackholeSink", "Lokio/Sink;", "blackhole", "buffer", "Lokio/BufferedSink;", "Lokio/BufferedSource;", "Lokio/Source;", "use", "R", "T", "Ljava/io/Closeable;", "Lokio/Closeable;", "block", "Lkotlin/Function1;", "(Ljava/io/Closeable;Lkotlin/jvm/functions/Function1;)Ljava/lang/Object;", "okio"}, k = 5, mv = {1, 5, 1}, xi = 48, xs = "okio/Okio")
final class Okio__OkioKt {
    public static final okio.Sink blackhole() {
            okio.BlackholeSink r0 = new okio.BlackholeSink
            r0.<init>()
            okio.Sink r0 = (okio.Sink) r0
            return r0
    }

    public static final okio.BufferedSink buffer(okio.Sink r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            okio.RealBufferedSink r0 = new okio.RealBufferedSink
            r0.<init>(r1)
            okio.BufferedSink r0 = (okio.BufferedSink) r0
            return r0
    }

    public static final okio.BufferedSource buffer(okio.Source r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            okio.RealBufferedSource r0 = new okio.RealBufferedSource
            r0.<init>(r1)
            okio.BufferedSource r0 = (okio.BufferedSource) r0
            return r0
    }

    public static final <T extends java.io.Closeable, R> R use(T r2, kotlin.jvm.functions.Function1<? super T, ? extends R> r3) {
            java.lang.String r0 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r0 = 0
            java.lang.Object r3 = r3.invoke(r2)     // Catch: java.lang.Throwable -> Lb
            goto Lf
        Lb:
            r3 = move-exception
            r1 = r0
            r0 = r3
            r3 = r1
        Lf:
            if (r2 != 0) goto L12
            goto L1e
        L12:
            r2.close()     // Catch: java.lang.Throwable -> L16
            goto L1e
        L16:
            r2 = move-exception
            if (r0 != 0) goto L1b
            r0 = r2
            goto L1e
        L1b:
            kotlin.ExceptionsKt.addSuppressed(r0, r2)
        L1e:
            if (r0 != 0) goto L24
            kotlin.jvm.internal.Intrinsics.checkNotNull(r3)
            return r3
        L24:
            throw r0
    }
}
