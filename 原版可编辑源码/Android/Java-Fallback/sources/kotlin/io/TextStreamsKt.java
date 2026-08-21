package kotlin.io;

@kotlin.Metadata(d1 = {"\u0000X\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0012\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010 \n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\u001a\u0017\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\b\b\u0002\u0010\u0003\u001a\u00020\u0004H\u0087\b\u001a\u0017\u0010\u0000\u001a\u00020\u0005*\u00020\u00062\b\b\u0002\u0010\u0003\u001a\u00020\u0004H\u0087\b\u001a\u001c\u0010\u0007\u001a\u00020\b*\u00020\u00022\u0006\u0010\t\u001a\u00020\u00062\b\b\u0002\u0010\u0003\u001a\u00020\u0004\u001a\u001e\u0010\n\u001a\u00020\u000b*\u00020\u00022\u0012\u0010\f\u001a\u000e\u0012\u0004\u0012\u00020\u000e\u0012\u0004\u0012\u00020\u000b0\r\u001a\u0010\u0010\u000f\u001a\b\u0012\u0004\u0012\u00020\u000e0\u0010*\u00020\u0001\u001a\n\u0010\u0011\u001a\u00020\u0012*\u00020\u0013\u001a\u0010\u0010\u0014\u001a\b\u0012\u0004\u0012\u00020\u000e0\u0015*\u00020\u0002\u001a\n\u0010\u0016\u001a\u00020\u000e*\u00020\u0002\u001a\u0017\u0010\u0016\u001a\u00020\u000e*\u00020\u00132\b\b\u0002\u0010\u0017\u001a\u00020\u0018H\u0087\b\u001a\r\u0010\u0019\u001a\u00020\u001a*\u00020\u000eH\u0087\b\u001a8\u0010\u001b\u001a\u0002H\u001c\"\u0004\b\u0000\u0010\u001c*\u00020\u00022\u0018\u0010\u001d\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u000e0\u0010\u0012\u0004\u0012\u0002H\u001c0\rH\u0086\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0002\u0010\u001f\u0082\u0002\u000f\n\u0006\b\u0011(\u001e0\u0001\n\u0005\b\u009920\u0001¨\u0006 "}, d2 = {"buffered", "Ljava/io/BufferedReader;", "Ljava/io/Reader;", "bufferSize", "", "Ljava/io/BufferedWriter;", "Ljava/io/Writer;", "copyTo", "", "out", "forEachLine", "", "action", "Lkotlin/Function1;", "", "lineSequence", "Lkotlin/sequences/Sequence;", "readBytes", "", "Ljava/net/URL;", "readLines", "", "readText", "charset", "Ljava/nio/charset/Charset;", "reader", "Ljava/io/StringReader;", "useLines", "T", "block", "Requires newer compiler version to be inlined correctly.", "(Ljava/io/Reader;Lkotlin/jvm/functions/Function1;)Ljava/lang/Object;", "kotlin-stdlib"}, k = 2, mv = {1, 6, 0}, xi = 48)
public final class TextStreamsKt {


    private static final java.io.BufferedReader buffered(java.io.Reader r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r0 = r1 instanceof java.io.BufferedReader
            if (r0 == 0) goto Lc
            java.io.BufferedReader r1 = (java.io.BufferedReader) r1
            goto L12
        Lc:
            java.io.BufferedReader r0 = new java.io.BufferedReader
            r0.<init>(r1, r2)
            r1 = r0
        L12:
            return r1
    }

    private static final java.io.BufferedWriter buffered(java.io.Writer r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r0 = r1 instanceof java.io.BufferedWriter
            if (r0 == 0) goto Lc
            java.io.BufferedWriter r1 = (java.io.BufferedWriter) r1
            goto L12
        Lc:
            java.io.BufferedWriter r0 = new java.io.BufferedWriter
            r0.<init>(r1, r2)
            r1 = r0
        L12:
            return r1
    }

    static java.io.BufferedReader buffered$default(java.io.Reader r0, int r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            r1 = 8192(0x2000, float:1.148E-41)
        L6:
            java.lang.String r2 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r2)
            boolean r2 = r0 instanceof java.io.BufferedReader
            if (r2 == 0) goto L12
            java.io.BufferedReader r0 = (java.io.BufferedReader) r0
            goto L18
        L12:
            java.io.BufferedReader r2 = new java.io.BufferedReader
            r2.<init>(r0, r1)
            r0 = r2
        L18:
            return r0
    }

    static java.io.BufferedWriter buffered$default(java.io.Writer r0, int r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            r1 = 8192(0x2000, float:1.148E-41)
        L6:
            java.lang.String r2 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r2)
            boolean r2 = r0 instanceof java.io.BufferedWriter
            if (r2 == 0) goto L12
            java.io.BufferedWriter r0 = (java.io.BufferedWriter) r0
            goto L18
        L12:
            java.io.BufferedWriter r2 = new java.io.BufferedWriter
            r2.<init>(r0, r1)
            r0 = r2
        L18:
            return r0
    }

    public static final long copyTo(java.io.Reader r5, java.io.Writer r6, int r7) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.lang.String r0 = "out"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            char[] r7 = new char[r7]
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

    public static long copyTo$default(java.io.Reader r0, java.io.Writer r1, int r2, int r3, java.lang.Object r4) {
            r3 = r3 & 2
            if (r3 == 0) goto L6
            r2 = 8192(0x2000, float:1.148E-41)
        L6:
            long r0 = copyTo(r0, r1, r2)
            return r0
    }

    public static final void forEachLine(java.io.Reader r3, kotlin.jvm.functions.Function1<? super java.lang.String, kotlin.Unit> r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "action"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            boolean r0 = r3 instanceof java.io.BufferedReader
            if (r0 == 0) goto L11
            java.io.BufferedReader r3 = (java.io.BufferedReader) r3
            goto L19
        L11:
            java.io.BufferedReader r0 = new java.io.BufferedReader
            r1 = 8192(0x2000, float:1.148E-41)
            r0.<init>(r3, r1)
            r3 = r0
        L19:
            java.io.Closeable r3 = (java.io.Closeable) r3
            r0 = 0
            r1 = r3
            java.io.BufferedReader r1 = (java.io.BufferedReader) r1     // Catch: java.lang.Throwable -> L3b
            kotlin.sequences.Sequence r1 = lineSequence(r1)     // Catch: java.lang.Throwable -> L3b
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L3b
        L27:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L3b
            if (r2 == 0) goto L35
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L3b
            r4.invoke(r2)     // Catch: java.lang.Throwable -> L3b
            goto L27
        L35:
            kotlin.Unit r4 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L3b
            kotlin.io.CloseableKt.closeFinally(r3, r0)
            return
        L3b:
            r4 = move-exception
            throw r4     // Catch: java.lang.Throwable -> L3d
        L3d:
            r0 = move-exception
            kotlin.io.CloseableKt.closeFinally(r3, r4)
            throw r0
    }

    public static final kotlin.sequences.Sequence<java.lang.String> lineSequence(java.io.BufferedReader r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            kotlin.io.LinesSequence r0 = new kotlin.io.LinesSequence
            r0.<init>(r1)
            kotlin.sequences.Sequence r0 = (kotlin.sequences.Sequence) r0
            kotlin.sequences.Sequence r1 = kotlin.sequences.SequencesKt.constrainOnce(r0)
            return r1
    }

    public static final byte[] readBytes(java.net.URL r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.io.InputStream r2 = r2.openStream()
            java.io.Closeable r2 = (java.io.Closeable) r2
            r0 = r2
            java.io.InputStream r0 = (java.io.InputStream) r0     // Catch: java.lang.Throwable -> L1c
            java.lang.String r1 = "it"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)     // Catch: java.lang.Throwable -> L1c
            byte[] r0 = kotlin.io.ByteStreamsKt.readBytes(r0)     // Catch: java.lang.Throwable -> L1c
            r1 = 0
            kotlin.io.CloseableKt.closeFinally(r2, r1)
            return r0
        L1c:
            r0 = move-exception
            throw r0     // Catch: java.lang.Throwable -> L1e
        L1e:
            r1 = move-exception
            kotlin.io.CloseableKt.closeFinally(r2, r0)
            throw r1
    }

    public static final java.util.List<java.lang.String> readLines(java.io.Reader r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            kotlin.io.TextStreamsKt$readLines$1 r1 = new kotlin.io.TextStreamsKt$readLines$1
            r1.<init>(r0)
            kotlin.jvm.functions.Function1 r1 = (kotlin.jvm.functions.Function1) r1
            forEachLine(r2, r1)
            java.util.List r0 = (java.util.List) r0
            return r0
    }

    public static final java.lang.String readText(java.io.Reader r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.io.StringWriter r0 = new java.io.StringWriter
            r0.<init>()
            r1 = r0
            java.io.Writer r1 = (java.io.Writer) r1
            r2 = 0
            r3 = 2
            r4 = 0
            copyTo$default(r5, r1, r2, r3, r4)
            java.lang.String r5 = r0.toString()
            java.lang.String r0 = "buffer.toString()"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r5, r0)
            return r5
    }

    private static final java.lang.String readText(java.net.URL r1, java.nio.charset.Charset r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            byte[] r1 = readBytes(r1)
            java.lang.String r0 = new java.lang.String
            r0.<init>(r1, r2)
            return r0
    }

    static java.lang.String readText$default(java.net.URL r0, java.nio.charset.Charset r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
        L6:
            java.lang.String r2 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r2)
            java.lang.String r2 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            byte[] r0 = readBytes(r0)
            java.lang.String r2 = new java.lang.String
            r2.<init>(r0, r1)
            return r2
    }

    private static final java.io.StringReader reader(java.lang.String r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.io.StringReader r0 = new java.io.StringReader
            r0.<init>(r1)
            return r0
    }

    public static final <T> T useLines(java.io.Reader r3, kotlin.jvm.functions.Function1<? super kotlin.sequences.Sequence<java.lang.String>, ? extends T> r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            boolean r0 = r3 instanceof java.io.BufferedReader
            if (r0 == 0) goto L11
            java.io.BufferedReader r3 = (java.io.BufferedReader) r3
            goto L19
        L11:
            java.io.BufferedReader r0 = new java.io.BufferedReader
            r1 = 8192(0x2000, float:1.148E-41)
            r0.<init>(r3, r1)
            r3 = r0
        L19:
            java.io.Closeable r3 = (java.io.Closeable) r3
            r0 = 0
            r1 = 1
            r2 = r3
            java.io.BufferedReader r2 = (java.io.BufferedReader) r2     // Catch: java.lang.Throwable -> L32
            kotlin.sequences.Sequence r2 = lineSequence(r2)     // Catch: java.lang.Throwable -> L32
            java.lang.Object r4 = r4.invoke(r2)     // Catch: java.lang.Throwable -> L32
            kotlin.jvm.internal.InlineMarker.finallyStart(r1)
            kotlin.io.CloseableKt.closeFinally(r3, r0)
            kotlin.jvm.internal.InlineMarker.finallyEnd(r1)
            return r4
        L32:
            r4 = move-exception
            throw r4     // Catch: java.lang.Throwable -> L34
        L34:
            r0 = move-exception
            kotlin.jvm.internal.InlineMarker.finallyStart(r1)
            kotlin.io.CloseableKt.closeFinally(r3, r4)
            kotlin.jvm.internal.InlineMarker.finallyEnd(r1)
            throw r0
    }
}
