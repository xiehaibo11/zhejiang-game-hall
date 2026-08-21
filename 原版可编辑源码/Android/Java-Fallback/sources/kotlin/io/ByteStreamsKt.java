package kotlin.io;

@kotlin.Metadata(d1 = {"\u0000Z\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\u0012\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\u001a\u0017\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\b\b\u0002\u0010\u0003\u001a\u00020\u0004H\u0087\b\u001a\u0017\u0010\u0000\u001a\u00020\u0005*\u00020\u00062\b\b\u0002\u0010\u0003\u001a\u00020\u0004H\u0087\b\u001a\u0017\u0010\u0007\u001a\u00020\b*\u00020\u00022\b\b\u0002\u0010\t\u001a\u00020\nH\u0087\b\u001a\u0017\u0010\u000b\u001a\u00020\f*\u00020\u00062\b\b\u0002\u0010\t\u001a\u00020\nH\u0087\b\u001a\u0017\u0010\r\u001a\u00020\u000e*\u00020\u000f2\b\b\u0002\u0010\t\u001a\u00020\nH\u0087\b\u001a\u001c\u0010\u0010\u001a\u00020\u0011*\u00020\u00022\u0006\u0010\u0012\u001a\u00020\u00062\b\b\u0002\u0010\u0003\u001a\u00020\u0004\u001a\r\u0010\u0013\u001a\u00020\u000e*\u00020\u0014H\u0087\b\u001a\u001d\u0010\u0013\u001a\u00020\u000e*\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u00042\u0006\u0010\u0016\u001a\u00020\u0004H\u0087\b\u001a\r\u0010\u0017\u001a\u00020\u0018*\u00020\u0001H\u0086\u0002\u001a\f\u0010\u0019\u001a\u00020\u0014*\u00020\u0002H\u0007\u001a\u0016\u0010\u0019\u001a\u00020\u0014*\u00020\u00022\b\b\u0002\u0010\u001a\u001a\u00020\u0004H\u0007\u001a\u0017\u0010\u001b\u001a\u00020\u001c*\u00020\u00022\b\b\u0002\u0010\t\u001a\u00020\nH\u0087\b\u001a\u0017\u0010\u001d\u001a\u00020\u001e*\u00020\u00062\b\b\u0002\u0010\t\u001a\u00020\nH\u0087\b¨\u0006\u001f"}, d2 = {"buffered", "Ljava/io/BufferedInputStream;", "Ljava/io/InputStream;", "bufferSize", "", "Ljava/io/BufferedOutputStream;", "Ljava/io/OutputStream;", "bufferedReader", "Ljava/io/BufferedReader;", "charset", "Ljava/nio/charset/Charset;", "bufferedWriter", "Ljava/io/BufferedWriter;", "byteInputStream", "Ljava/io/ByteArrayInputStream;", "", "copyTo", "", "out", "inputStream", "", "offset", "length", "iterator", "Lkotlin/collections/ByteIterator;", "readBytes", "estimatedSize", "reader", "Ljava/io/InputStreamReader;", "writer", "Ljava/io/OutputStreamWriter;", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class ByteStreamsKt {


    private static final java.io.BufferedInputStream buffered(java.io.InputStream r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r0 = r1 instanceof java.io.BufferedInputStream
            if (r0 == 0) goto Lc
            java.io.BufferedInputStream r1 = (java.io.BufferedInputStream) r1
            goto L12
        Lc:
            java.io.BufferedInputStream r0 = new java.io.BufferedInputStream
            r0.<init>(r1, r2)
            r1 = r0
        L12:
            return r1
    }

    private static final java.io.BufferedOutputStream buffered(java.io.OutputStream r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r0 = r1 instanceof java.io.BufferedOutputStream
            if (r0 == 0) goto Lc
            java.io.BufferedOutputStream r1 = (java.io.BufferedOutputStream) r1
            goto L12
        Lc:
            java.io.BufferedOutputStream r0 = new java.io.BufferedOutputStream
            r0.<init>(r1, r2)
            r1 = r0
        L12:
            return r1
    }

    static java.io.BufferedInputStream buffered$default(java.io.InputStream r0, int r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            r1 = 8192(0x2000, float:1.148E-41)
        L6:
            java.lang.String r2 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r2)
            boolean r2 = r0 instanceof java.io.BufferedInputStream
            if (r2 == 0) goto L12
            java.io.BufferedInputStream r0 = (java.io.BufferedInputStream) r0
            goto L18
        L12:
            java.io.BufferedInputStream r2 = new java.io.BufferedInputStream
            r2.<init>(r0, r1)
            r0 = r2
        L18:
            return r0
    }

    static java.io.BufferedOutputStream buffered$default(java.io.OutputStream r0, int r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            r1 = 8192(0x2000, float:1.148E-41)
        L6:
            java.lang.String r2 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r2)
            boolean r2 = r0 instanceof java.io.BufferedOutputStream
            if (r2 == 0) goto L12
            java.io.BufferedOutputStream r0 = (java.io.BufferedOutputStream) r0
            goto L18
        L12:
            java.io.BufferedOutputStream r2 = new java.io.BufferedOutputStream
            r2.<init>(r0, r1)
            r0 = r2
        L18:
            return r0
    }

    private static final java.io.BufferedReader bufferedReader(java.io.InputStream r1, java.nio.charset.Charset r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.io.InputStreamReader r0 = new java.io.InputStreamReader
            r0.<init>(r1, r2)
            java.io.Reader r0 = (java.io.Reader) r0
            boolean r1 = r0 instanceof java.io.BufferedReader
            if (r1 == 0) goto L18
            java.io.BufferedReader r0 = (java.io.BufferedReader) r0
            goto L20
        L18:
            java.io.BufferedReader r1 = new java.io.BufferedReader
            r2 = 8192(0x2000, float:1.148E-41)
            r1.<init>(r0, r2)
            r0 = r1
        L20:
            return r0
    }

    static java.io.BufferedReader bufferedReader$default(java.io.InputStream r0, java.nio.charset.Charset r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
        L6:
            java.lang.String r2 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r2)
            java.lang.String r2 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            java.io.InputStreamReader r2 = new java.io.InputStreamReader
            r2.<init>(r0, r1)
            java.io.Reader r2 = (java.io.Reader) r2
            r0 = 8192(0x2000, float:1.148E-41)
            boolean r1 = r2 instanceof java.io.BufferedReader
            if (r1 == 0) goto L20
            java.io.BufferedReader r2 = (java.io.BufferedReader) r2
            goto L26
        L20:
            java.io.BufferedReader r1 = new java.io.BufferedReader
            r1.<init>(r2, r0)
            r2 = r1
        L26:
            return r2
    }

    private static final java.io.BufferedWriter bufferedWriter(java.io.OutputStream r1, java.nio.charset.Charset r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.io.OutputStreamWriter r0 = new java.io.OutputStreamWriter
            r0.<init>(r1, r2)
            java.io.Writer r0 = (java.io.Writer) r0
            boolean r1 = r0 instanceof java.io.BufferedWriter
            if (r1 == 0) goto L18
            java.io.BufferedWriter r0 = (java.io.BufferedWriter) r0
            goto L20
        L18:
            java.io.BufferedWriter r1 = new java.io.BufferedWriter
            r2 = 8192(0x2000, float:1.148E-41)
            r1.<init>(r0, r2)
            r0 = r1
        L20:
            return r0
    }

    static java.io.BufferedWriter bufferedWriter$default(java.io.OutputStream r0, java.nio.charset.Charset r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
        L6:
            java.lang.String r2 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r2)
            java.lang.String r2 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            java.io.OutputStreamWriter r2 = new java.io.OutputStreamWriter
            r2.<init>(r0, r1)
            java.io.Writer r2 = (java.io.Writer) r2
            r0 = 8192(0x2000, float:1.148E-41)
            boolean r1 = r2 instanceof java.io.BufferedWriter
            if (r1 == 0) goto L20
            java.io.BufferedWriter r2 = (java.io.BufferedWriter) r2
            goto L26
        L20:
            java.io.BufferedWriter r1 = new java.io.BufferedWriter
            r1.<init>(r2, r0)
            r2 = r1
        L26:
            return r2
    }

    private static final java.io.ByteArrayInputStream byteInputStream(java.lang.String r1, java.nio.charset.Charset r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            byte[] r1 = r1.getBytes(r2)
            java.lang.String r2 = "this as java.lang.String).getBytes(charset)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            r0.<init>(r1)
            return r0
    }

    static java.io.ByteArrayInputStream byteInputStream$default(java.lang.String r0, java.nio.charset.Charset r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
        L6:
            java.lang.String r2 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r2)
            java.lang.String r2 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream
            byte[] r0 = r0.getBytes(r1)
            java.lang.String r1 = "this as java.lang.String).getBytes(charset)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            r2.<init>(r0)
            return r2
    }

    public static final long copyTo(java.io.InputStream r5, java.io.OutputStream r6, int r7) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = "out"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            byte[] r7 = new byte[r7]
            int r0 = r5.read(r7)
            r1 = 0
        L12:
            if (r0 < 0) goto L1f
            r3 = 0
            r6.write(r7, r3, r0)
            long r3 = (long) r0
            long r1 = r1 + r3
            int r0 = r5.read(r7)
            goto L12
        L1f:
            return r1
    }

    public static long copyTo$default(java.io.InputStream r0, java.io.OutputStream r1, int r2, int r3, java.lang.Object r4) {
            r3 = r3 & 2
            if (r3 == 0) goto L6
            r2 = 8192(0x2000, float:1.148E-41)
        L6:
            long r0 = copyTo(r0, r1, r2)
            return r0
    }

    private static final java.io.ByteArrayInputStream inputStream(byte[] r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r1)
            return r0
    }

    private static final java.io.ByteArrayInputStream inputStream(byte[] r1, int r2, int r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r1, r2, r3)
            return r0
    }

    public static final kotlin.collections.ByteIterator iterator(java.io.BufferedInputStream r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.io.ByteStreamsKt$iterator$1 r0 = new kotlin.io.ByteStreamsKt$iterator$1
            r0.<init>(r1)
            kotlin.collections.ByteIterator r0 = (kotlin.collections.ByteIterator) r0
            return r0
    }

    public static final byte[] readBytes(java.io.InputStream r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            int r1 = r5.available()
            r2 = 8192(0x2000, float:1.148E-41)
            int r1 = java.lang.Math.max(r2, r1)
            r0.<init>(r1)
            r1 = r0
            java.io.OutputStream r1 = (java.io.OutputStream) r1
            r2 = 0
            r3 = 2
            r4 = 0
            copyTo$default(r5, r1, r2, r3, r4)
            byte[] r5 = r0.toByteArray()
            java.lang.String r0 = "buffer.toByteArray()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r0)
            return r5
    }

    @kotlin.Deprecated(message = "Use readBytes() overload without estimatedSize parameter", replaceWith = @kotlin.ReplaceWith(expression = "readBytes()", imports = {}))
    @kotlin.DeprecatedSinceKotlin(errorSince = "1.5", warningSince = "1.3")
    public static final byte[] readBytes(java.io.InputStream r4, int r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            int r1 = r4.available()
            int r5 = java.lang.Math.max(r5, r1)
            r0.<init>(r5)
            r5 = r0
            java.io.OutputStream r5 = (java.io.OutputStream) r5
            r1 = 0
            r2 = 2
            r3 = 0
            copyTo$default(r4, r5, r1, r2, r3)
            byte[] r4 = r0.toByteArray()
            java.lang.String r5 = "buffer.toByteArray()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r4, r5)
            return r4
    }

    public static byte[] readBytes$default(java.io.InputStream r0, int r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            r1 = 8192(0x2000, float:1.148E-41)
        L6:
            byte[] r0 = readBytes(r0, r1)
            return r0
    }

    private static final java.io.InputStreamReader reader(java.io.InputStream r1, java.nio.charset.Charset r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.io.InputStreamReader r0 = new java.io.InputStreamReader
            r0.<init>(r1, r2)
            return r0
    }

    static java.io.InputStreamReader reader$default(java.io.InputStream r0, java.nio.charset.Charset r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
        L6:
            java.lang.String r2 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r2)
            java.lang.String r2 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            java.io.InputStreamReader r2 = new java.io.InputStreamReader
            r2.<init>(r0, r1)
            return r2
    }

    private static final java.io.OutputStreamWriter writer(java.io.OutputStream r1, java.nio.charset.Charset r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.io.OutputStreamWriter r0 = new java.io.OutputStreamWriter
            r0.<init>(r1, r2)
            return r0
    }

    static java.io.OutputStreamWriter writer$default(java.io.OutputStream r0, java.nio.charset.Charset r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
        L6:
            java.lang.String r2 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r2)
            java.lang.String r2 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            java.io.OutputStreamWriter r2 = new java.io.OutputStreamWriter
            r2.<init>(r0, r1)
            return r2
    }
}
