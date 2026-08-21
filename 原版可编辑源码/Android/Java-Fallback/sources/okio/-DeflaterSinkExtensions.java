package okio;

@kotlin.Metadata(d1 = {"\u0000\u0012\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\u0017\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\b\b\u0002\u0010\u0003\u001a\u00020\u0004H\u0086\b¨\u0006\u0005"}, d2 = {"deflate", "Lokio/DeflaterSink;", "Lokio/Sink;", "deflater", "Ljava/util/zip/Deflater;", "okio"}, k = 2, mv = {1, 5, 1}, xi = 48)
public final class -DeflaterSinkExtensions {
    public static final okio.DeflaterSink deflate(okio.Sink r1, java.util.zip.Deflater r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "deflater"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            okio.DeflaterSink r0 = new okio.DeflaterSink
            r0.<init>(r1, r2)
            return r0
    }

    public static okio.DeflaterSink deflate$default(okio.Sink r0, java.util.zip.Deflater r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L9
            java.util.zip.Deflater r1 = new java.util.zip.Deflater
            r1.<init>()
        L9:
            java.lang.String r2 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r2)
            java.lang.String r2 = "deflater"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            okio.DeflaterSink r2 = new okio.DeflaterSink
            r2.<init>(r0, r1)
            return r2
    }
}
