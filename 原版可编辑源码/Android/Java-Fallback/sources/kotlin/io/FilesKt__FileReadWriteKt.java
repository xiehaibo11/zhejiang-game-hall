package kotlin.io;

@kotlin.Metadata(d1 = {"\u0000z\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0012\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010 \n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\u001a\u0012\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u0004\u001a\u001c\u0010\u0005\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\t\u001a!\u0010\n\u001a\u00020\u000b*\u00020\u00022\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\f\u001a\u00020\rH\u0087\b\u001a!\u0010\u000e\u001a\u00020\u000f*\u00020\u00022\b\b\u0002\u0010\b\u001a\u00020\t2\b\b\u0002\u0010\f\u001a\u00020\rH\u0087\b\u001aB\u0010\u0010\u001a\u00020\u0001*\u00020\u000226\u0010\u0011\u001a2\u0012\u0013\u0012\u00110\u0004¢\u0006\f\b\u0013\u0012\b\b\u0014\u0012\u0004\b\b(\u0015\u0012\u0013\u0012\u00110\r¢\u0006\f\b\u0013\u0012\b\b\u0014\u0012\u0004\b\b(\u0016\u0012\u0004\u0012\u00020\u00010\u0012\u001aJ\u0010\u0010\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0017\u001a\u00020\r26\u0010\u0011\u001a2\u0012\u0013\u0012\u00110\u0004¢\u0006\f\b\u0013\u0012\b\b\u0014\u0012\u0004\b\b(\u0015\u0012\u0013\u0012\u00110\r¢\u0006\f\b\u0013\u0012\b\b\u0014\u0012\u0004\b\b(\u0016\u0012\u0004\u0012\u00020\u00010\u0012\u001a7\u0010\u0018\u001a\u00020\u0001*\u00020\u00022\b\b\u0002\u0010\b\u001a\u00020\t2!\u0010\u0011\u001a\u001d\u0012\u0013\u0012\u00110\u0007¢\u0006\f\b\u0013\u0012\b\b\u0014\u0012\u0004\b\b(\u001a\u0012\u0004\u0012\u00020\u00010\u0019\u001a\r\u0010\u001b\u001a\u00020\u001c*\u00020\u0002H\u0087\b\u001a\r\u0010\u001d\u001a\u00020\u001e*\u00020\u0002H\u0087\b\u001a\u0017\u0010\u001f\u001a\u00020 *\u00020\u00022\b\b\u0002\u0010\b\u001a\u00020\tH\u0087\b\u001a\n\u0010!\u001a\u00020\u0004*\u00020\u0002\u001a\u001a\u0010\"\u001a\b\u0012\u0004\u0012\u00020\u00070#*\u00020\u00022\b\b\u0002\u0010\b\u001a\u00020\t\u001a\u0014\u0010$\u001a\u00020\u0007*\u00020\u00022\b\b\u0002\u0010\b\u001a\u00020\t\u001a\u0017\u0010%\u001a\u00020&*\u00020\u00022\b\b\u0002\u0010\b\u001a\u00020\tH\u0087\b\u001aB\u0010'\u001a\u0002H(\"\u0004\b\u0000\u0010(*\u00020\u00022\b\b\u0002\u0010\b\u001a\u00020\t2\u0018\u0010)\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u00070*\u0012\u0004\u0012\u0002H(0\u0019H\u0086\bø\u0001\u0000ø\u0001\u0001¢\u0006\u0002\u0010,\u001a\u0012\u0010-\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u0004\u001a\u001c\u0010.\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0006\u001a\u00020\u00072\b\b\u0002\u0010\b\u001a\u00020\t\u001a\u0017\u0010/\u001a\u000200*\u00020\u00022\b\b\u0002\u0010\b\u001a\u00020\tH\u0087\b\u0082\u0002\u000f\n\u0006\b\u0011(+0\u0001\n\u0005\b\u009920\u0001¨\u00061"}, d2 = {"appendBytes", "", "Ljava/io/File;", "array", "", "appendText", "text", "", "charset", "Ljava/nio/charset/Charset;", "bufferedReader", "Ljava/io/BufferedReader;", "bufferSize", "", "bufferedWriter", "Ljava/io/BufferedWriter;", "forEachBlock", "action", "Lkotlin/Function2;", "Lkotlin/ParameterName;", "name", "buffer", "bytesRead", "blockSize", "forEachLine", "Lkotlin/Function1;", "line", "inputStream", "Ljava/io/FileInputStream;", "outputStream", "Ljava/io/FileOutputStream;", "printWriter", "Ljava/io/PrintWriter;", "readBytes", "readLines", "", "readText", "reader", "Ljava/io/InputStreamReader;", "useLines", "T", "block", "Lkotlin/sequences/Sequence;", "Requires newer compiler version to be inlined correctly.", "(Ljava/io/File;Ljava/nio/charset/Charset;Lkotlin/jvm/functions/Function1;)Ljava/lang/Object;", "writeBytes", "writeText", "writer", "Ljava/io/OutputStreamWriter;", "kotlin-stdlib"}, k = 5, mv = {1, 6, 0}, xi = 49, xs = "kotlin/io/FilesKt")
class FilesKt__FileReadWriteKt extends kotlin.io.FilesKt__FilePathComponentsKt {


    public FilesKt__FileReadWriteKt() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final void appendBytes(java.io.File r2, byte[] r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "array"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            r1 = 1
            r0.<init>(r2, r1)
            java.io.Closeable r0 = (java.io.Closeable) r0
            r2 = r0
            java.io.FileOutputStream r2 = (java.io.FileOutputStream) r2     // Catch: java.lang.Throwable -> L1f
            r2.write(r3)     // Catch: java.lang.Throwable -> L1f
            kotlin.Unit r2 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L1f
            r2 = 0
            kotlin.io.CloseableKt.closeFinally(r0, r2)
            return
        L1f:
            r2 = move-exception
            throw r2     // Catch: java.lang.Throwable -> L21
        L21:
            r3 = move-exception
            kotlin.io.CloseableKt.closeFinally(r0, r2)
            throw r3
    }

    public static final void appendText(java.io.File r1, java.lang.String r2, java.nio.charset.Charset r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "text"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            byte[] r2 = r2.getBytes(r3)
            java.lang.String r3 = "this as java.lang.String).getBytes(charset)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)
            kotlin.io.FilesKt.appendBytes(r1, r2)
            return
    }

    public static void appendText$default(java.io.File r0, java.lang.String r1, java.nio.charset.Charset r2, int r3, java.lang.Object r4) {
            r3 = r3 & 2
            if (r3 == 0) goto L6
            java.nio.charset.Charset r2 = kotlin.text.Charsets.UTF_8
        L6:
            kotlin.io.FilesKt.appendText(r0, r1, r2)
            return
    }

    private static final java.io.BufferedReader bufferedReader(java.io.File r2, java.nio.charset.Charset r3, int r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.io.InputStreamReader r0 = new java.io.InputStreamReader
            java.io.FileInputStream r1 = new java.io.FileInputStream
            r1.<init>(r2)
            java.io.InputStream r1 = (java.io.InputStream) r1
            r0.<init>(r1, r3)
            java.io.Reader r0 = (java.io.Reader) r0
            boolean r2 = r0 instanceof java.io.BufferedReader
            if (r2 == 0) goto L1f
            java.io.BufferedReader r0 = (java.io.BufferedReader) r0
            goto L25
        L1f:
            java.io.BufferedReader r2 = new java.io.BufferedReader
            r2.<init>(r0, r4)
            r0 = r2
        L25:
            return r0
    }

    static java.io.BufferedReader bufferedReader$default(java.io.File r0, java.nio.charset.Charset r1, int r2, int r3, java.lang.Object r4) {
            r4 = r3 & 1
            if (r4 == 0) goto L6
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
        L6:
            r3 = r3 & 2
            if (r3 == 0) goto Lc
            r2 = 8192(0x2000, float:1.148E-41)
        Lc:
            java.lang.String r3 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r3)
            java.lang.String r3 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r3)
            java.io.InputStreamReader r3 = new java.io.InputStreamReader
            java.io.FileInputStream r4 = new java.io.FileInputStream
            r4.<init>(r0)
            java.io.InputStream r4 = (java.io.InputStream) r4
            r3.<init>(r4, r1)
            java.io.Reader r3 = (java.io.Reader) r3
            boolean r0 = r3 instanceof java.io.BufferedReader
            if (r0 == 0) goto L2b
            java.io.BufferedReader r3 = (java.io.BufferedReader) r3
            goto L31
        L2b:
            java.io.BufferedReader r0 = new java.io.BufferedReader
            r0.<init>(r3, r2)
            r3 = r0
        L31:
            return r3
    }

    private static final java.io.BufferedWriter bufferedWriter(java.io.File r2, java.nio.charset.Charset r3, int r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.io.OutputStreamWriter r0 = new java.io.OutputStreamWriter
            java.io.FileOutputStream r1 = new java.io.FileOutputStream
            r1.<init>(r2)
            java.io.OutputStream r1 = (java.io.OutputStream) r1
            r0.<init>(r1, r3)
            java.io.Writer r0 = (java.io.Writer) r0
            boolean r2 = r0 instanceof java.io.BufferedWriter
            if (r2 == 0) goto L1f
            java.io.BufferedWriter r0 = (java.io.BufferedWriter) r0
            goto L25
        L1f:
            java.io.BufferedWriter r2 = new java.io.BufferedWriter
            r2.<init>(r0, r4)
            r0 = r2
        L25:
            return r0
    }

    static java.io.BufferedWriter bufferedWriter$default(java.io.File r0, java.nio.charset.Charset r1, int r2, int r3, java.lang.Object r4) {
            r4 = r3 & 1
            if (r4 == 0) goto L6
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
        L6:
            r3 = r3 & 2
            if (r3 == 0) goto Lc
            r2 = 8192(0x2000, float:1.148E-41)
        Lc:
            java.lang.String r3 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r3)
            java.lang.String r3 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r3)
            java.io.OutputStreamWriter r3 = new java.io.OutputStreamWriter
            java.io.FileOutputStream r4 = new java.io.FileOutputStream
            r4.<init>(r0)
            java.io.OutputStream r4 = (java.io.OutputStream) r4
            r3.<init>(r4, r1)
            java.io.Writer r3 = (java.io.Writer) r3
            boolean r0 = r3 instanceof java.io.BufferedWriter
            if (r0 == 0) goto L2b
            java.io.BufferedWriter r3 = (java.io.BufferedWriter) r3
            goto L31
        L2b:
            java.io.BufferedWriter r0 = new java.io.BufferedWriter
            r0.<init>(r3, r2)
            r3 = r0
        L31:
            return r3
    }

    public static final void forEachBlock(java.io.File r2, int r3, kotlin.jvm.functions.Function2<? super byte[], ? super java.lang.Integer, kotlin.Unit> r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "action"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r0 = 512(0x200, float:7.17E-43)
            int r3 = kotlin.ranges.RangesKt.coerceAtLeast(r3, r0)
            byte[] r3 = new byte[r3]
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r2)
            java.io.Closeable r0 = (java.io.Closeable) r0
            r2 = r0
            java.io.FileInputStream r2 = (java.io.FileInputStream) r2     // Catch: java.lang.Throwable -> L31
        L1c:
            int r1 = r2.read(r3)     // Catch: java.lang.Throwable -> L31
            if (r1 > 0) goto L29
            kotlin.Unit r2 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L31
            r2 = 0
            kotlin.io.CloseableKt.closeFinally(r0, r2)
            return
        L29:
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L31
            r4.invoke(r3, r1)     // Catch: java.lang.Throwable -> L31
            goto L1c
        L31:
            r2 = move-exception
            throw r2     // Catch: java.lang.Throwable -> L33
        L33:
            r3 = move-exception
            kotlin.io.CloseableKt.closeFinally(r0, r2)
            throw r3
    }

    public static final void forEachBlock(java.io.File r1, kotlin.jvm.functions.Function2<? super byte[], ? super java.lang.Integer, kotlin.Unit> r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "action"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r0 = 4096(0x1000, float:5.74E-42)
            kotlin.io.FilesKt.forEachBlock(r1, r0, r2)
            return
    }

    public static final void forEachLine(java.io.File r3, java.nio.charset.Charset r4, kotlin.jvm.functions.Function1<? super java.lang.String, kotlin.Unit> r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "action"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            java.io.BufferedReader r0 = new java.io.BufferedReader
            java.io.InputStreamReader r1 = new java.io.InputStreamReader
            java.io.FileInputStream r2 = new java.io.FileInputStream
            r2.<init>(r3)
            java.io.InputStream r2 = (java.io.InputStream) r2
            r1.<init>(r2, r4)
            java.io.Reader r1 = (java.io.Reader) r1
            r0.<init>(r1)
            java.io.Reader r0 = (java.io.Reader) r0
            kotlin.io.TextStreamsKt.forEachLine(r0, r5)
            return
    }

    public static void forEachLine$default(java.io.File r0, java.nio.charset.Charset r1, kotlin.jvm.functions.Function1 r2, int r3, java.lang.Object r4) {
            r3 = r3 & 1
            if (r3 == 0) goto L6
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
        L6:
            kotlin.io.FilesKt.forEachLine(r0, r1, r2)
            return
    }

    private static final java.io.FileInputStream inputStream(java.io.File r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r1)
            return r0
    }

    private static final java.io.FileOutputStream outputStream(java.io.File r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            r0.<init>(r1)
            return r0
    }

    private static final java.io.PrintWriter printWriter(java.io.File r3, java.nio.charset.Charset r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.io.PrintWriter r0 = new java.io.PrintWriter
            java.io.OutputStreamWriter r1 = new java.io.OutputStreamWriter
            java.io.FileOutputStream r2 = new java.io.FileOutputStream
            r2.<init>(r3)
            java.io.OutputStream r2 = (java.io.OutputStream) r2
            r1.<init>(r2, r4)
            java.io.Writer r1 = (java.io.Writer) r1
            boolean r3 = r1 instanceof java.io.BufferedWriter
            if (r3 == 0) goto L21
            java.io.BufferedWriter r1 = (java.io.BufferedWriter) r1
            goto L29
        L21:
            java.io.BufferedWriter r3 = new java.io.BufferedWriter
            r4 = 8192(0x2000, float:1.148E-41)
            r3.<init>(r1, r4)
            r1 = r3
        L29:
            java.io.Writer r1 = (java.io.Writer) r1
            r0.<init>(r1)
            return r0
    }

    static java.io.PrintWriter printWriter$default(java.io.File r2, java.nio.charset.Charset r3, int r4, java.lang.Object r5) {
            r4 = r4 & 1
            if (r4 == 0) goto L6
            java.nio.charset.Charset r3 = kotlin.text.Charsets.UTF_8
        L6:
            java.lang.String r4 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r4)
            java.lang.String r4 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r4)
            java.io.PrintWriter r4 = new java.io.PrintWriter
            r5 = 8192(0x2000, float:1.148E-41)
            java.io.OutputStreamWriter r0 = new java.io.OutputStreamWriter
            java.io.FileOutputStream r1 = new java.io.FileOutputStream
            r1.<init>(r2)
            java.io.OutputStream r1 = (java.io.OutputStream) r1
            r0.<init>(r1, r3)
            java.io.Writer r0 = (java.io.Writer) r0
            boolean r2 = r0 instanceof java.io.BufferedWriter
            if (r2 == 0) goto L29
            java.io.BufferedWriter r0 = (java.io.BufferedWriter) r0
            goto L2f
        L29:
            java.io.BufferedWriter r2 = new java.io.BufferedWriter
            r2.<init>(r0, r5)
            r0 = r2
        L2f:
            java.io.Writer r0 = (java.io.Writer) r0
            r4.<init>(r0)
            return r4
    }

    public static final byte[] readBytes(java.io.File r11) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r11)
            java.io.Closeable r0 = (java.io.Closeable) r0
            r1 = r0
            java.io.FileInputStream r1 = (java.io.FileInputStream) r1     // Catch: java.lang.Throwable -> Laf
            long r2 = r11.length()     // Catch: java.lang.Throwable -> Laf
            r4 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            java.lang.String r5 = "File "
            if (r4 > 0) goto L8d
            int r2 = (int) r2
            byte[] r3 = new byte[r2]     // Catch: java.lang.Throwable -> Laf
            r4 = 0
            r6 = r2
            r7 = r4
        L22:
            if (r6 <= 0) goto L2d
            int r8 = r1.read(r3, r7, r6)     // Catch: java.lang.Throwable -> Laf
            if (r8 < 0) goto L2d
            int r6 = r6 - r8
            int r7 = r7 + r8
            goto L22
        L2d:
            java.lang.String r8 = "copyOf(this, newSize)"
            r9 = 0
            if (r6 <= 0) goto L3a
            byte[] r3 = java.util.Arrays.copyOf(r3, r7)     // Catch: java.lang.Throwable -> Laf
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r8)     // Catch: java.lang.Throwable -> Laf
            goto L6f
        L3a:
            int r6 = r1.read()     // Catch: java.lang.Throwable -> Laf
            r7 = -1
            if (r6 != r7) goto L42
            goto L6f
        L42:
            kotlin.io.ExposingBufferByteArrayOutputStream r7 = new kotlin.io.ExposingBufferByteArrayOutputStream     // Catch: java.lang.Throwable -> Laf
            r10 = 8193(0x2001, float:1.1481E-41)
            r7.<init>(r10)     // Catch: java.lang.Throwable -> Laf
            r7.write(r6)     // Catch: java.lang.Throwable -> Laf
            java.io.InputStream r1 = (java.io.InputStream) r1     // Catch: java.lang.Throwable -> Laf
            r6 = r7
            java.io.OutputStream r6 = (java.io.OutputStream) r6     // Catch: java.lang.Throwable -> Laf
            r10 = 2
            kotlin.io.ByteStreamsKt.copyTo$default(r1, r6, r4, r10, r9)     // Catch: java.lang.Throwable -> Laf
            int r1 = r7.size()     // Catch: java.lang.Throwable -> Laf
            int r1 = r1 + r2
            if (r1 < 0) goto L73
            byte[] r11 = r7.getBuffer()     // Catch: java.lang.Throwable -> Laf
            byte[] r1 = java.util.Arrays.copyOf(r3, r1)     // Catch: java.lang.Throwable -> Laf
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r8)     // Catch: java.lang.Throwable -> Laf
            int r3 = r7.size()     // Catch: java.lang.Throwable -> Laf
            byte[] r3 = kotlin.collections.ArraysKt.copyInto(r11, r1, r2, r4, r3)     // Catch: java.lang.Throwable -> Laf
        L6f:
            kotlin.io.CloseableKt.closeFinally(r0, r9)
            return r3
        L73:
            java.lang.OutOfMemoryError r1 = new java.lang.OutOfMemoryError     // Catch: java.lang.Throwable -> Laf
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Laf
            r2.<init>()     // Catch: java.lang.Throwable -> Laf
            r2.append(r5)     // Catch: java.lang.Throwable -> Laf
            r2.append(r11)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r11 = " is too big to fit in memory."
            r2.append(r11)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r11 = r2.toString()     // Catch: java.lang.Throwable -> Laf
            r1.<init>(r11)     // Catch: java.lang.Throwable -> Laf
            throw r1     // Catch: java.lang.Throwable -> Laf
        L8d:
            java.lang.OutOfMemoryError r1 = new java.lang.OutOfMemoryError     // Catch: java.lang.Throwable -> Laf
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Laf
            r4.<init>()     // Catch: java.lang.Throwable -> Laf
            r4.append(r5)     // Catch: java.lang.Throwable -> Laf
            r4.append(r11)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r11 = " is too big ("
            r4.append(r11)     // Catch: java.lang.Throwable -> Laf
            r4.append(r2)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r11 = " bytes) to fit in memory."
            r4.append(r11)     // Catch: java.lang.Throwable -> Laf
            java.lang.String r11 = r4.toString()     // Catch: java.lang.Throwable -> Laf
            r1.<init>(r11)     // Catch: java.lang.Throwable -> Laf
            throw r1     // Catch: java.lang.Throwable -> Laf
        Laf:
            r11 = move-exception
            throw r11     // Catch: java.lang.Throwable -> Lb1
        Lb1:
            r1 = move-exception
            kotlin.io.CloseableKt.closeFinally(r0, r11)
            throw r1
    }

    public static final java.util.List<java.lang.String> readLines(java.io.File r2, java.nio.charset.Charset r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            kotlin.io.FilesKt__FileReadWriteKt$readLines$1 r1 = new kotlin.io.FilesKt__FileReadWriteKt$readLines$1
            r1.<init>(r0)
            kotlin.jvm.functions.Function1 r1 = (kotlin.jvm.functions.Function1) r1
            kotlin.io.FilesKt.forEachLine(r2, r3, r1)
            java.util.List r0 = (java.util.List) r0
            return r0
    }

    public static java.util.List readLines$default(java.io.File r0, java.nio.charset.Charset r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
        L6:
            java.util.List r0 = kotlin.io.FilesKt.readLines(r0, r1)
            return r0
    }

    public static final java.lang.String readText(java.io.File r2, java.nio.charset.Charset r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.io.InputStreamReader r0 = new java.io.InputStreamReader
            java.io.FileInputStream r1 = new java.io.FileInputStream
            r1.<init>(r2)
            java.io.InputStream r1 = (java.io.InputStream) r1
            r0.<init>(r1, r3)
            java.io.Closeable r0 = (java.io.Closeable) r0
            r2 = r0
            java.io.InputStreamReader r2 = (java.io.InputStreamReader) r2     // Catch: java.lang.Throwable -> L26
            java.io.Reader r2 = (java.io.Reader) r2     // Catch: java.lang.Throwable -> L26
            java.lang.String r2 = kotlin.io.TextStreamsKt.readText(r2)     // Catch: java.lang.Throwable -> L26
            r3 = 0
            kotlin.io.CloseableKt.closeFinally(r0, r3)
            return r2
        L26:
            r2 = move-exception
            throw r2     // Catch: java.lang.Throwable -> L28
        L28:
            r3 = move-exception
            kotlin.io.CloseableKt.closeFinally(r0, r2)
            throw r3
    }

    public static java.lang.String readText$default(java.io.File r0, java.nio.charset.Charset r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
        L6:
            java.lang.String r0 = kotlin.io.FilesKt.readText(r0, r1)
            return r0
    }

    private static final java.io.InputStreamReader reader(java.io.File r2, java.nio.charset.Charset r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.io.InputStreamReader r0 = new java.io.InputStreamReader
            java.io.FileInputStream r1 = new java.io.FileInputStream
            r1.<init>(r2)
            java.io.InputStream r1 = (java.io.InputStream) r1
            r0.<init>(r1, r3)
            return r0
    }

    static java.io.InputStreamReader reader$default(java.io.File r0, java.nio.charset.Charset r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
        L6:
            java.lang.String r2 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r2)
            java.lang.String r2 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            java.io.InputStreamReader r2 = new java.io.InputStreamReader
            java.io.FileInputStream r3 = new java.io.FileInputStream
            r3.<init>(r0)
            java.io.InputStream r3 = (java.io.InputStream) r3
            r2.<init>(r3, r1)
            return r2
    }

    public static final <T> T useLines(java.io.File r2, java.nio.charset.Charset r3, kotlin.jvm.functions.Function1<? super kotlin.sequences.Sequence<java.lang.String>, ? extends T> r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "block"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.io.InputStreamReader r0 = new java.io.InputStreamReader
            java.io.FileInputStream r1 = new java.io.FileInputStream
            r1.<init>(r2)
            java.io.InputStream r1 = (java.io.InputStream) r1
            r0.<init>(r1, r3)
            java.io.Reader r0 = (java.io.Reader) r0
            boolean r2 = r0 instanceof java.io.BufferedReader
            if (r2 == 0) goto L24
            java.io.BufferedReader r0 = (java.io.BufferedReader) r0
            goto L2c
        L24:
            java.io.BufferedReader r2 = new java.io.BufferedReader
            r3 = 8192(0x2000, float:1.148E-41)
            r2.<init>(r0, r3)
            r0 = r2
        L2c:
            java.io.Closeable r0 = (java.io.Closeable) r0
            r2 = 0
            r3 = 1
            r1 = r0
            java.io.BufferedReader r1 = (java.io.BufferedReader) r1     // Catch: java.lang.Throwable -> L45
            kotlin.sequences.Sequence r1 = kotlin.io.TextStreamsKt.lineSequence(r1)     // Catch: java.lang.Throwable -> L45
            java.lang.Object r4 = r4.invoke(r1)     // Catch: java.lang.Throwable -> L45
            kotlin.jvm.internal.InlineMarker.finallyStart(r3)
            kotlin.io.CloseableKt.closeFinally(r0, r2)
            kotlin.jvm.internal.InlineMarker.finallyEnd(r3)
            return r4
        L45:
            r2 = move-exception
            throw r2     // Catch: java.lang.Throwable -> L47
        L47:
            r4 = move-exception
            kotlin.jvm.internal.InlineMarker.finallyStart(r3)
            kotlin.io.CloseableKt.closeFinally(r0, r2)
            kotlin.jvm.internal.InlineMarker.finallyEnd(r3)
            throw r4
    }

    public static java.lang.Object useLines$default(java.io.File r2, java.nio.charset.Charset r3, kotlin.jvm.functions.Function1 r4, int r5, java.lang.Object r6) {
            r6 = 1
            r5 = r5 & r6
            if (r5 == 0) goto L6
            java.nio.charset.Charset r3 = kotlin.text.Charsets.UTF_8
        L6:
            r5 = 8192(0x2000, float:1.148E-41)
            java.io.InputStreamReader r0 = new java.io.InputStreamReader
            java.io.FileInputStream r1 = new java.io.FileInputStream
            r1.<init>(r2)
            java.io.InputStream r1 = (java.io.InputStream) r1
            r0.<init>(r1, r3)
            java.io.Reader r0 = (java.io.Reader) r0
            boolean r2 = r0 instanceof java.io.BufferedReader
            if (r2 == 0) goto L1d
            java.io.BufferedReader r0 = (java.io.BufferedReader) r0
            goto L23
        L1d:
            java.io.BufferedReader r2 = new java.io.BufferedReader
            r2.<init>(r0, r5)
            r0 = r2
        L23:
            java.io.Closeable r0 = (java.io.Closeable) r0
            r2 = 0
            r3 = r0
            java.io.BufferedReader r3 = (java.io.BufferedReader) r3     // Catch: java.lang.Throwable -> L3b
            kotlin.sequences.Sequence r3 = kotlin.io.TextStreamsKt.lineSequence(r3)     // Catch: java.lang.Throwable -> L3b
            java.lang.Object r3 = r4.invoke(r3)     // Catch: java.lang.Throwable -> L3b
            kotlin.jvm.internal.InlineMarker.finallyStart(r6)
            kotlin.io.CloseableKt.closeFinally(r0, r2)
            kotlin.jvm.internal.InlineMarker.finallyEnd(r6)
            return r3
        L3b:
            r2 = move-exception
            throw r2     // Catch: java.lang.Throwable -> L3d
        L3d:
            r3 = move-exception
            kotlin.jvm.internal.InlineMarker.finallyStart(r6)
            kotlin.io.CloseableKt.closeFinally(r0, r2)
            kotlin.jvm.internal.InlineMarker.finallyEnd(r6)
            throw r3
    }

    public static final void writeBytes(java.io.File r1, byte[] r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "array"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.io.FileOutputStream r0 = new java.io.FileOutputStream
            r0.<init>(r1)
            java.io.Closeable r0 = (java.io.Closeable) r0
            r1 = r0
            java.io.FileOutputStream r1 = (java.io.FileOutputStream) r1     // Catch: java.lang.Throwable -> L1e
            r1.write(r2)     // Catch: java.lang.Throwable -> L1e
            kotlin.Unit r1 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L1e
            r1 = 0
            kotlin.io.CloseableKt.closeFinally(r0, r1)
            return
        L1e:
            r1 = move-exception
            throw r1     // Catch: java.lang.Throwable -> L20
        L20:
            r2 = move-exception
            kotlin.io.CloseableKt.closeFinally(r0, r1)
            throw r2
    }

    public static final void writeText(java.io.File r1, java.lang.String r2, java.nio.charset.Charset r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "text"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            byte[] r2 = r2.getBytes(r3)
            java.lang.String r3 = "this as java.lang.String).getBytes(charset)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)
            kotlin.io.FilesKt.writeBytes(r1, r2)
            return
    }

    public static void writeText$default(java.io.File r0, java.lang.String r1, java.nio.charset.Charset r2, int r3, java.lang.Object r4) {
            r3 = r3 & 2
            if (r3 == 0) goto L6
            java.nio.charset.Charset r2 = kotlin.text.Charsets.UTF_8
        L6:
            kotlin.io.FilesKt.writeText(r0, r1, r2)
            return
    }

    private static final java.io.OutputStreamWriter writer(java.io.File r2, java.nio.charset.Charset r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.io.OutputStreamWriter r0 = new java.io.OutputStreamWriter
            java.io.FileOutputStream r1 = new java.io.FileOutputStream
            r1.<init>(r2)
            java.io.OutputStream r1 = (java.io.OutputStream) r1
            r0.<init>(r1, r3)
            return r0
    }

    static java.io.OutputStreamWriter writer$default(java.io.File r0, java.nio.charset.Charset r1, int r2, java.lang.Object r3) {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
        L6:
            java.lang.String r2 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r0, r2)
            java.lang.String r2 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r2)
            java.io.OutputStreamWriter r2 = new java.io.OutputStreamWriter
            java.io.FileOutputStream r3 = new java.io.FileOutputStream
            r3.<init>(r0)
            java.io.OutputStream r3 = (java.io.OutputStream) r3
            r2.<init>(r3, r1)
            return r2
    }
}
