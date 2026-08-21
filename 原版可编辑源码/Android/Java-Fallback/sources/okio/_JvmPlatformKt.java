package okio;

@kotlin.Metadata(d1 = {"\u0000<\n\u0002\b\u0003\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0012\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a-\u0010\u0000\u001a\u0002H\u0001\"\u0004\b\u0000\u0010\u00012\u0006\u0010\u0002\u001a\u00020\u00032\f\u0010\u0004\u001a\b\u0012\u0004\u0012\u0002H\u00010\u0005H\u0080\bø\u0001\u0000¢\u0006\u0002\u0010\u0006\u001a\f\u0010\u0007\u001a\u00020\b*\u00020\tH\u0000\u001a\f\u0010\n\u001a\u00020\t*\u00020\bH\u0000*\n\u0010\u000b\"\u00020\f2\u00020\f*\n\u0010\r\"\u00020\u000e2\u00020\u000e*\n\u0010\u000f\"\u00020\u00102\u00020\u0010*\n\u0010\u0011\"\u00020\u00122\u00020\u0012*\n\u0010\u0013\"\u00020\u00142\u00020\u0014\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006\u0015"}, d2 = {"synchronized", "R", "lock", "", "block", "Lkotlin/Function0;", "(Ljava/lang/Object;Lkotlin/jvm/functions/Function0;)Ljava/lang/Object;", "asUtf8ToByteArray", "", "", "toUtf8String", "ArrayIndexOutOfBoundsException", "Ljava/lang/ArrayIndexOutOfBoundsException;", "Closeable", "Ljava/io/Closeable;", "EOFException", "Ljava/io/EOFException;", "FileNotFoundException", "Ljava/io/FileNotFoundException;", "IOException", "Ljava/io/IOException;", "okio"}, k = 2, mv = {1, 5, 1}, xi = 48)
public final class _JvmPlatformKt {
    public static final byte[] asUtf8ToByteArray(java.lang.String r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.nio.charset.Charset r0 = kotlin.text.Charsets.UTF_8
            byte[] r1 = r1.getBytes(r0)
            java.lang.String r0 = "(this as java.lang.String).getBytes(charset)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            return r1
    }

    public static final <R> R synchronized(java.lang.Object r1, kotlin.jvm.functions.Function0<? extends R> r2) {
            java.lang.String r0 = "lock"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            monitor-enter(r1)
            r0 = 1
            java.lang.Object r2 = r2.invoke()     // Catch: java.lang.Throwable -> L18
            kotlin.jvm.internal.InlineMarker.finallyStart(r0)
            monitor-exit(r1)
            kotlin.jvm.internal.InlineMarker.finallyEnd(r0)
            return r2
        L18:
            r2 = move-exception
            kotlin.jvm.internal.InlineMarker.finallyStart(r0)
            monitor-exit(r1)
            kotlin.jvm.internal.InlineMarker.finallyEnd(r0)
            throw r2
    }

    public static final java.lang.String toUtf8String(byte[] r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.nio.charset.Charset r0 = kotlin.text.Charsets.UTF_8
            java.lang.String r1 = new java.lang.String
            r1.<init>(r2, r0)
            return r1
    }
}
