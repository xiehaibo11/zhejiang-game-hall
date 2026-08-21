package kotlin.io.path;

@kotlin.Metadata(d1 = {"\u0000\u0082\u0001\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0012\n\u0002\b\u0002\n\u0002\u0010\u001c\n\u0002\u0010\r\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010 \n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\r\n\u0002\u0018\u0002\n\u0002\b\u0002\u001a\u0015\u0010\u0000\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u0004H\u0087\b\u001a%\u0010\u0005\u001a\u00020\u0002*\u00020\u00022\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\b\b\u0002\u0010\t\u001a\u00020\nH\u0087\b\u001a%\u0010\u0005\u001a\u00020\u0002*\u00020\u00022\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\b0\u000b2\b\b\u0002\u0010\t\u001a\u00020\nH\u0087\b\u001a\u001e\u0010\f\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\r\u001a\u00020\b2\b\b\u0002\u0010\t\u001a\u00020\nH\u0007\u001a:\u0010\u000e\u001a\u00020\u000f*\u00020\u00022\b\b\u0002\u0010\t\u001a\u00020\n2\b\b\u0002\u0010\u0010\u001a\u00020\u00112\u0012\u0010\u0012\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00140\u0013\"\u00020\u0014H\u0087\b¢\u0006\u0002\u0010\u0015\u001a:\u0010\u0016\u001a\u00020\u0017*\u00020\u00022\b\b\u0002\u0010\t\u001a\u00020\n2\b\b\u0002\u0010\u0010\u001a\u00020\u00112\u0012\u0010\u0012\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00140\u0013\"\u00020\u0014H\u0087\b¢\u0006\u0002\u0010\u0018\u001a=\u0010\u0019\u001a\u00020\u0001*\u00020\u00022\b\b\u0002\u0010\t\u001a\u00020\n2!\u0010\u001a\u001a\u001d\u0012\u0013\u0012\u00110\u001c¢\u0006\f\b\u001d\u0012\b\b\u001e\u0012\u0004\b\b(\u001f\u0012\u0004\u0012\u00020\u00010\u001bH\u0087\bø\u0001\u0000\u001a&\u0010 \u001a\u00020!*\u00020\u00022\u0012\u0010\u0012\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00140\u0013\"\u00020\u0014H\u0087\b¢\u0006\u0002\u0010\"\u001a&\u0010#\u001a\u00020$*\u00020\u00022\u0012\u0010\u0012\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00140\u0013\"\u00020\u0014H\u0087\b¢\u0006\u0002\u0010%\u001a\r\u0010&\u001a\u00020\u0004*\u00020\u0002H\u0087\b\u001a\u001d\u0010'\u001a\b\u0012\u0004\u0012\u00020\u001c0(*\u00020\u00022\b\b\u0002\u0010\t\u001a\u00020\nH\u0087\b\u001a\u0016\u0010)\u001a\u00020\u001c*\u00020\u00022\b\b\u0002\u0010\t\u001a\u00020\nH\u0007\u001a0\u0010*\u001a\u00020+*\u00020\u00022\b\b\u0002\u0010\t\u001a\u00020\n2\u0012\u0010\u0012\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00140\u0013\"\u00020\u0014H\u0087\b¢\u0006\u0002\u0010,\u001a?\u0010-\u001a\u0002H.\"\u0004\b\u0000\u0010.*\u00020\u00022\b\b\u0002\u0010\t\u001a\u00020\n2\u0018\u0010/\u001a\u0014\u0012\n\u0012\b\u0012\u0004\u0012\u00020\u001c0\u000b\u0012\u0004\u0012\u0002H.0\u001bH\u0087\bø\u0001\u0000¢\u0006\u0002\u00100\u001a.\u00101\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\u0003\u001a\u00020\u00042\u0012\u0010\u0012\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00140\u0013\"\u00020\u0014H\u0087\b¢\u0006\u0002\u00102\u001a>\u00103\u001a\u00020\u0002*\u00020\u00022\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\b0\u00072\b\b\u0002\u0010\t\u001a\u00020\n2\u0012\u0010\u0012\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00140\u0013\"\u00020\u0014H\u0087\b¢\u0006\u0002\u00104\u001a>\u00103\u001a\u00020\u0002*\u00020\u00022\f\u0010\u0006\u001a\b\u0012\u0004\u0012\u00020\b0\u000b2\b\b\u0002\u0010\t\u001a\u00020\n2\u0012\u0010\u0012\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00140\u0013\"\u00020\u0014H\u0087\b¢\u0006\u0002\u00105\u001a7\u00106\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\r\u001a\u00020\b2\b\b\u0002\u0010\t\u001a\u00020\n2\u0012\u0010\u0012\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00140\u0013\"\u00020\u0014H\u0007¢\u0006\u0002\u00107\u001a0\u00108\u001a\u000209*\u00020\u00022\b\b\u0002\u0010\t\u001a\u00020\n2\u0012\u0010\u0012\u001a\n\u0012\u0006\b\u0001\u0012\u00020\u00140\u0013\"\u00020\u0014H\u0087\b¢\u0006\u0002\u0010:\u0082\u0002\u0007\n\u0005\b\u009920\u0001¨\u0006;"}, d2 = {"appendBytes", "", "Ljava/nio/file/Path;", "array", "", "appendLines", "lines", "", "", "charset", "Ljava/nio/charset/Charset;", "Lkotlin/sequences/Sequence;", "appendText", "text", "bufferedReader", "Ljava/io/BufferedReader;", "bufferSize", "", "options", "", "Ljava/nio/file/OpenOption;", "(Ljava/nio/file/Path;Ljava/nio/charset/Charset;I[Ljava/nio/file/OpenOption;)Ljava/io/BufferedReader;", "bufferedWriter", "Ljava/io/BufferedWriter;", "(Ljava/nio/file/Path;Ljava/nio/charset/Charset;I[Ljava/nio/file/OpenOption;)Ljava/io/BufferedWriter;", "forEachLine", "action", "Lkotlin/Function1;", "", "Lkotlin/ParameterName;", "name", "line", "inputStream", "Ljava/io/InputStream;", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/InputStream;", "outputStream", "Ljava/io/OutputStream;", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/OutputStream;", "readBytes", "readLines", "", "readText", "reader", "Ljava/io/InputStreamReader;", "(Ljava/nio/file/Path;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)Ljava/io/InputStreamReader;", "useLines", "T", "block", "(Ljava/nio/file/Path;Ljava/nio/charset/Charset;Lkotlin/jvm/functions/Function1;)Ljava/lang/Object;", "writeBytes", "(Ljava/nio/file/Path;[B[Ljava/nio/file/OpenOption;)V", "writeLines", "(Ljava/nio/file/Path;Ljava/lang/Iterable;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;", "(Ljava/nio/file/Path;Lkotlin/sequences/Sequence;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)Ljava/nio/file/Path;", "writeText", "(Ljava/nio/file/Path;Ljava/lang/CharSequence;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)V", "writer", "Ljava/io/OutputStreamWriter;", "(Ljava/nio/file/Path;Ljava/nio/charset/Charset;[Ljava/nio/file/OpenOption;)Ljava/io/OutputStreamWriter;", "kotlin-stdlib-jdk7"}, k = 5, mv = {1, 5, 1}, xi = 1, xs = "kotlin/io/path/PathsKt")
class PathsKt__PathReadWriteKt {
    public PathsKt__PathReadWriteKt() {
            r0 = this;
            r0.<init>()
            return
    }

    private static final void appendBytes(java.nio.file.Path r3, byte[] r4) throws java.io.IOException {
            r0 = 1
            java.nio.file.OpenOption[] r0 = new java.nio.file.OpenOption[r0]
            java.nio.file.StandardOpenOption r1 = java.nio.file.StandardOpenOption.APPEND
            java.nio.file.OpenOption r1 = (java.nio.file.OpenOption) r1
            r2 = 0
            r0[r2] = r1
            java.nio.file.Files.write(r3, r4, r0)
            return
    }

    private static final java.nio.file.Path appendLines(java.nio.file.Path r3, java.lang.Iterable<? extends java.lang.CharSequence> r4, java.nio.charset.Charset r5) throws java.io.IOException {
            r0 = 1
            java.nio.file.OpenOption[] r0 = new java.nio.file.OpenOption[r0]
            java.nio.file.StandardOpenOption r1 = java.nio.file.StandardOpenOption.APPEND
            java.nio.file.OpenOption r1 = (java.nio.file.OpenOption) r1
            r2 = 0
            r0[r2] = r1
            java.nio.file.Path r3 = java.nio.file.Files.write(r3, r4, r5, r0)
            java.lang.String r4 = "Files.write(this, lines,…tandardOpenOption.APPEND)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r4)
            return r3
    }

    private static final java.nio.file.Path appendLines(java.nio.file.Path r3, kotlin.sequences.Sequence<? extends java.lang.CharSequence> r4, java.nio.charset.Charset r5) throws java.io.IOException {
            java.lang.Iterable r4 = kotlin.sequences.SequencesKt.asIterable(r4)
            r0 = 1
            java.nio.file.OpenOption[] r0 = new java.nio.file.OpenOption[r0]
            java.nio.file.StandardOpenOption r1 = java.nio.file.StandardOpenOption.APPEND
            java.nio.file.OpenOption r1 = (java.nio.file.OpenOption) r1
            r2 = 0
            r0[r2] = r1
            java.nio.file.Path r3 = java.nio.file.Files.write(r3, r4, r5, r0)
            java.lang.String r4 = "Files.write(this, lines.…tandardOpenOption.APPEND)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r4)
            return r3
    }

    static java.nio.file.Path appendLines$default(java.nio.file.Path r1, java.lang.Iterable r2, java.nio.charset.Charset r3, int r4, java.lang.Object r5) throws java.io.IOException {
            r4 = r4 & 2
            if (r4 == 0) goto L6
            java.nio.charset.Charset r3 = kotlin.text.Charsets.UTF_8
        L6:
            r4 = 1
            java.nio.file.OpenOption[] r4 = new java.nio.file.OpenOption[r4]
            r5 = 0
            java.nio.file.StandardOpenOption r0 = java.nio.file.StandardOpenOption.APPEND
            java.nio.file.OpenOption r0 = (java.nio.file.OpenOption) r0
            r4[r5] = r0
            java.nio.file.Path r1 = java.nio.file.Files.write(r1, r2, r3, r4)
            java.lang.String r2 = "Files.write(this, lines,…tandardOpenOption.APPEND)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    static java.nio.file.Path appendLines$default(java.nio.file.Path r1, kotlin.sequences.Sequence r2, java.nio.charset.Charset r3, int r4, java.lang.Object r5) throws java.io.IOException {
            r4 = r4 & 2
            if (r4 == 0) goto L6
            java.nio.charset.Charset r3 = kotlin.text.Charsets.UTF_8
        L6:
            java.lang.Iterable r2 = kotlin.sequences.SequencesKt.asIterable(r2)
            r4 = 1
            java.nio.file.OpenOption[] r4 = new java.nio.file.OpenOption[r4]
            r5 = 0
            java.nio.file.StandardOpenOption r0 = java.nio.file.StandardOpenOption.APPEND
            java.nio.file.OpenOption r0 = (java.nio.file.OpenOption) r0
            r4[r5] = r0
            java.nio.file.Path r1 = java.nio.file.Files.write(r1, r2, r3, r4)
            java.lang.String r2 = "Files.write(this, lines.…tandardOpenOption.APPEND)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    public static final void appendText(java.nio.file.Path r3, java.lang.CharSequence r4, java.nio.charset.Charset r5) throws java.io.IOException {
            java.lang.String r0 = "$this$appendText"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "text"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            r0 = 1
            java.nio.file.OpenOption[] r0 = new java.nio.file.OpenOption[r0]
            java.nio.file.StandardOpenOption r1 = java.nio.file.StandardOpenOption.APPEND
            java.nio.file.OpenOption r1 = (java.nio.file.OpenOption) r1
            r2 = 0
            r0[r2] = r1
            java.io.OutputStream r3 = java.nio.file.Files.newOutputStream(r3, r0)
            java.lang.String r0 = "Files.newOutputStream(th…tandardOpenOption.APPEND)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r3, r0)
            java.io.OutputStreamWriter r0 = new java.io.OutputStreamWriter
            r0.<init>(r3, r5)
            java.io.Closeable r0 = (java.io.Closeable) r0
            r3 = 0
            java.lang.Throwable r3 = (java.lang.Throwable) r3
            r5 = r0
            java.io.OutputStreamWriter r5 = (java.io.OutputStreamWriter) r5     // Catch: java.lang.Throwable -> L36
            r5.append(r4)     // Catch: java.lang.Throwable -> L36
            kotlin.io.CloseableKt.closeFinally(r0, r3)
            return
        L36:
            r3 = move-exception
            throw r3     // Catch: java.lang.Throwable -> L38
        L38:
            r4 = move-exception
            kotlin.io.CloseableKt.closeFinally(r0, r3)
            throw r4
    }

    public static void appendText$default(java.nio.file.Path r0, java.lang.CharSequence r1, java.nio.charset.Charset r2, int r3, java.lang.Object r4) throws java.io.IOException {
            r3 = r3 & 2
            if (r3 == 0) goto L6
            java.nio.charset.Charset r2 = kotlin.text.Charsets.UTF_8
        L6:
            kotlin.io.path.PathsKt.appendText(r0, r1, r2)
            return
    }

    private static final java.io.BufferedReader bufferedReader(java.nio.file.Path r3, java.nio.charset.Charset r4, int r5, java.nio.file.OpenOption... r6) throws java.io.IOException {
            java.io.BufferedReader r0 = new java.io.BufferedReader
            java.io.InputStreamReader r1 = new java.io.InputStreamReader
            int r2 = r6.length
            java.lang.Object[] r6 = java.util.Arrays.copyOf(r6, r2)
            java.nio.file.OpenOption[] r6 = (java.nio.file.OpenOption[]) r6
            java.io.InputStream r3 = java.nio.file.Files.newInputStream(r3, r6)
            r1.<init>(r3, r4)
            java.io.Reader r1 = (java.io.Reader) r1
            r0.<init>(r1, r5)
            return r0
    }

    static java.io.BufferedReader bufferedReader$default(java.nio.file.Path r1, java.nio.charset.Charset r2, int r3, java.nio.file.OpenOption[] r4, int r5, java.lang.Object r6) throws java.io.IOException {
            r6 = r5 & 1
            if (r6 == 0) goto L6
            java.nio.charset.Charset r2 = kotlin.text.Charsets.UTF_8
        L6:
            r5 = r5 & 2
            if (r5 == 0) goto Lc
            r3 = 8192(0x2000, float:1.148E-41)
        Lc:
            java.io.BufferedReader r5 = new java.io.BufferedReader
            java.io.InputStreamReader r6 = new java.io.InputStreamReader
            int r0 = r4.length
            java.lang.Object[] r4 = java.util.Arrays.copyOf(r4, r0)
            java.nio.file.OpenOption[] r4 = (java.nio.file.OpenOption[]) r4
            java.io.InputStream r1 = java.nio.file.Files.newInputStream(r1, r4)
            r6.<init>(r1, r2)
            java.io.Reader r6 = (java.io.Reader) r6
            r5.<init>(r6, r3)
            return r5
    }

    private static final java.io.BufferedWriter bufferedWriter(java.nio.file.Path r3, java.nio.charset.Charset r4, int r5, java.nio.file.OpenOption... r6) throws java.io.IOException {
            java.io.BufferedWriter r0 = new java.io.BufferedWriter
            java.io.OutputStreamWriter r1 = new java.io.OutputStreamWriter
            int r2 = r6.length
            java.lang.Object[] r6 = java.util.Arrays.copyOf(r6, r2)
            java.nio.file.OpenOption[] r6 = (java.nio.file.OpenOption[]) r6
            java.io.OutputStream r3 = java.nio.file.Files.newOutputStream(r3, r6)
            r1.<init>(r3, r4)
            java.io.Writer r1 = (java.io.Writer) r1
            r0.<init>(r1, r5)
            return r0
    }

    static java.io.BufferedWriter bufferedWriter$default(java.nio.file.Path r1, java.nio.charset.Charset r2, int r3, java.nio.file.OpenOption[] r4, int r5, java.lang.Object r6) throws java.io.IOException {
            r6 = r5 & 1
            if (r6 == 0) goto L6
            java.nio.charset.Charset r2 = kotlin.text.Charsets.UTF_8
        L6:
            r5 = r5 & 2
            if (r5 == 0) goto Lc
            r3 = 8192(0x2000, float:1.148E-41)
        Lc:
            java.io.BufferedWriter r5 = new java.io.BufferedWriter
            java.io.OutputStreamWriter r6 = new java.io.OutputStreamWriter
            int r0 = r4.length
            java.lang.Object[] r4 = java.util.Arrays.copyOf(r4, r0)
            java.nio.file.OpenOption[] r4 = (java.nio.file.OpenOption[]) r4
            java.io.OutputStream r1 = java.nio.file.Files.newOutputStream(r1, r4)
            r6.<init>(r1, r2)
            java.io.Writer r6 = (java.io.Writer) r6
            r5.<init>(r6, r3)
            return r5
    }

    private static final void forEachLine(java.nio.file.Path r4, java.nio.charset.Charset r5, kotlin.jvm.functions.Function1<? super java.lang.String, kotlin.Unit> r6) throws java.io.IOException {
            java.io.BufferedReader r4 = java.nio.file.Files.newBufferedReader(r4, r5)
            java.lang.String r5 = "Files.newBufferedReader(this, charset)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r4, r5)
            java.io.Reader r4 = (java.io.Reader) r4
            boolean r5 = r4 instanceof java.io.BufferedReader
            if (r5 == 0) goto L12
            java.io.BufferedReader r4 = (java.io.BufferedReader) r4
            goto L1a
        L12:
            java.io.BufferedReader r5 = new java.io.BufferedReader
            r0 = 8192(0x2000, float:1.148E-41)
            r5.<init>(r4, r0)
            r4 = r5
        L1a:
            java.io.Closeable r4 = (java.io.Closeable) r4
            r5 = 0
            java.lang.Throwable r5 = (java.lang.Throwable) r5
            r0 = 0
            r1 = 1
            r2 = r4
            java.io.BufferedReader r2 = (java.io.BufferedReader) r2     // Catch: java.lang.Throwable -> L50
            kotlin.sequences.Sequence r2 = kotlin.io.TextStreamsKt.lineSequence(r2)     // Catch: java.lang.Throwable -> L50
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Throwable -> L50
        L2c:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Throwable -> L50
            if (r3 == 0) goto L3a
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Throwable -> L50
            r6.invoke(r3)     // Catch: java.lang.Throwable -> L50
            goto L2c
        L3a:
            kotlin.Unit r6 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L50
            kotlin.jvm.internal.InlineMarker.finallyStart(r1)
            boolean r6 = kotlin.internal.PlatformImplementationsKt.apiVersionIsAtLeast(r1, r1, r0)
            if (r6 == 0) goto L49
            kotlin.io.CloseableKt.closeFinally(r4, r5)
            goto L4c
        L49:
            r4.close()
        L4c:
            kotlin.jvm.internal.InlineMarker.finallyEnd(r1)
            return
        L50:
            r5 = move-exception
            throw r5     // Catch: java.lang.Throwable -> L52
        L52:
            r6 = move-exception
            kotlin.jvm.internal.InlineMarker.finallyStart(r1)
            boolean r0 = kotlin.internal.PlatformImplementationsKt.apiVersionIsAtLeast(r1, r1, r0)
            if (r0 != 0) goto L60
            r4.close()     // Catch: java.lang.Throwable -> L63
            goto L63
        L60:
            kotlin.io.CloseableKt.closeFinally(r4, r5)
        L63:
            kotlin.jvm.internal.InlineMarker.finallyEnd(r1)
            throw r6
    }

    static void forEachLine$default(java.nio.file.Path r2, java.nio.charset.Charset r3, kotlin.jvm.functions.Function1 r4, int r5, java.lang.Object r6) throws java.io.IOException {
            r6 = 1
            r5 = r5 & r6
            if (r5 == 0) goto L6
            java.nio.charset.Charset r3 = kotlin.text.Charsets.UTF_8
        L6:
            java.io.BufferedReader r2 = java.nio.file.Files.newBufferedReader(r2, r3)
            java.lang.String r3 = "Files.newBufferedReader(this, charset)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)
            java.io.Reader r2 = (java.io.Reader) r2
            r3 = 8192(0x2000, float:1.148E-41)
            boolean r5 = r2 instanceof java.io.BufferedReader
            if (r5 == 0) goto L1a
            java.io.BufferedReader r2 = (java.io.BufferedReader) r2
            goto L20
        L1a:
            java.io.BufferedReader r5 = new java.io.BufferedReader
            r5.<init>(r2, r3)
            r2 = r5
        L20:
            java.io.Closeable r2 = (java.io.Closeable) r2
            r3 = 0
            java.lang.Throwable r3 = (java.lang.Throwable) r3
            r5 = 0
            r0 = r2
            java.io.BufferedReader r0 = (java.io.BufferedReader) r0     // Catch: java.lang.Throwable -> L55
            kotlin.sequences.Sequence r0 = kotlin.io.TextStreamsKt.lineSequence(r0)     // Catch: java.lang.Throwable -> L55
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L55
        L31:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L55
            if (r1 == 0) goto L3f
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L55
            r4.invoke(r1)     // Catch: java.lang.Throwable -> L55
            goto L31
        L3f:
            kotlin.Unit r4 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L55
            kotlin.jvm.internal.InlineMarker.finallyStart(r6)
            boolean r4 = kotlin.internal.PlatformImplementationsKt.apiVersionIsAtLeast(r6, r6, r5)
            if (r4 == 0) goto L4e
            kotlin.io.CloseableKt.closeFinally(r2, r3)
            goto L51
        L4e:
            r2.close()
        L51:
            kotlin.jvm.internal.InlineMarker.finallyEnd(r6)
            return
        L55:
            r3 = move-exception
            throw r3     // Catch: java.lang.Throwable -> L57
        L57:
            r4 = move-exception
            kotlin.jvm.internal.InlineMarker.finallyStart(r6)
            boolean r5 = kotlin.internal.PlatformImplementationsKt.apiVersionIsAtLeast(r6, r6, r5)
            if (r5 != 0) goto L65
            r2.close()     // Catch: java.lang.Throwable -> L68
            goto L68
        L65:
            kotlin.io.CloseableKt.closeFinally(r2, r3)
        L68:
            kotlin.jvm.internal.InlineMarker.finallyEnd(r6)
            throw r4
    }

    private static final java.io.InputStream inputStream(java.nio.file.Path r1, java.nio.file.OpenOption... r2) throws java.io.IOException {
            int r0 = r2.length
            java.lang.Object[] r2 = java.util.Arrays.copyOf(r2, r0)
            java.nio.file.OpenOption[] r2 = (java.nio.file.OpenOption[]) r2
            java.io.InputStream r1 = java.nio.file.Files.newInputStream(r1, r2)
            java.lang.String r2 = "Files.newInputStream(this, *options)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    private static final java.io.OutputStream outputStream(java.nio.file.Path r1, java.nio.file.OpenOption... r2) throws java.io.IOException {
            int r0 = r2.length
            java.lang.Object[] r2 = java.util.Arrays.copyOf(r2, r0)
            java.nio.file.OpenOption[] r2 = (java.nio.file.OpenOption[]) r2
            java.io.OutputStream r1 = java.nio.file.Files.newOutputStream(r1, r2)
            java.lang.String r2 = "Files.newOutputStream(this, *options)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    private static final byte[] readBytes(java.nio.file.Path r1) throws java.io.IOException {
            byte[] r1 = java.nio.file.Files.readAllBytes(r1)
            java.lang.String r0 = "Files.readAllBytes(this)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r0)
            return r1
    }

    private static final java.util.List<java.lang.String> readLines(java.nio.file.Path r0, java.nio.charset.Charset r1) throws java.io.IOException {
            java.util.List r0 = java.nio.file.Files.readAllLines(r0, r1)
            java.lang.String r1 = "Files.readAllLines(this, charset)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    static java.util.List readLines$default(java.nio.file.Path r0, java.nio.charset.Charset r1, int r2, java.lang.Object r3) throws java.io.IOException {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
        L6:
            java.util.List r0 = java.nio.file.Files.readAllLines(r0, r1)
            java.lang.String r1 = "Files.readAllLines(this, charset)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    public static final java.lang.String readText(java.nio.file.Path r3, java.nio.charset.Charset r4) throws java.io.IOException {
            java.lang.String r0 = "$this$readText"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r0 = 0
            java.nio.file.OpenOption[] r1 = new java.nio.file.OpenOption[r0]
            java.io.InputStreamReader r2 = new java.io.InputStreamReader
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r1, r0)
            java.nio.file.OpenOption[] r0 = (java.nio.file.OpenOption[]) r0
            java.io.InputStream r3 = java.nio.file.Files.newInputStream(r3, r0)
            r2.<init>(r3, r4)
            java.io.Closeable r2 = (java.io.Closeable) r2
            r3 = 0
            java.lang.Throwable r3 = (java.lang.Throwable) r3
            r4 = r2
            java.io.InputStreamReader r4 = (java.io.InputStreamReader) r4     // Catch: java.lang.Throwable -> L2e
            java.io.Reader r4 = (java.io.Reader) r4     // Catch: java.lang.Throwable -> L2e
            java.lang.String r4 = kotlin.io.TextStreamsKt.readText(r4)     // Catch: java.lang.Throwable -> L2e
            kotlin.io.CloseableKt.closeFinally(r2, r3)
            return r4
        L2e:
            r3 = move-exception
            throw r3     // Catch: java.lang.Throwable -> L30
        L30:
            r4 = move-exception
            kotlin.io.CloseableKt.closeFinally(r2, r3)
            throw r4
    }

    public static java.lang.String readText$default(java.nio.file.Path r0, java.nio.charset.Charset r1, int r2, java.lang.Object r3) throws java.io.IOException {
            r2 = r2 & 1
            if (r2 == 0) goto L6
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
        L6:
            java.lang.String r0 = kotlin.io.path.PathsKt.readText(r0, r1)
            return r0
    }

    private static final java.io.InputStreamReader reader(java.nio.file.Path r2, java.nio.charset.Charset r3, java.nio.file.OpenOption... r4) throws java.io.IOException {
            java.io.InputStreamReader r0 = new java.io.InputStreamReader
            int r1 = r4.length
            java.lang.Object[] r4 = java.util.Arrays.copyOf(r4, r1)
            java.nio.file.OpenOption[] r4 = (java.nio.file.OpenOption[]) r4
            java.io.InputStream r2 = java.nio.file.Files.newInputStream(r2, r4)
            r0.<init>(r2, r3)
            return r0
    }

    static java.io.InputStreamReader reader$default(java.nio.file.Path r0, java.nio.charset.Charset r1, java.nio.file.OpenOption[] r2, int r3, java.lang.Object r4) throws java.io.IOException {
            r3 = r3 & 1
            if (r3 == 0) goto L6
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
        L6:
            java.io.InputStreamReader r3 = new java.io.InputStreamReader
            int r4 = r2.length
            java.lang.Object[] r2 = java.util.Arrays.copyOf(r2, r4)
            java.nio.file.OpenOption[] r2 = (java.nio.file.OpenOption[]) r2
            java.io.InputStream r0 = java.nio.file.Files.newInputStream(r0, r2)
            r3.<init>(r0, r1)
            return r3
    }

    private static final <T> T useLines(java.nio.file.Path r4, java.nio.charset.Charset r5, kotlin.jvm.functions.Function1<? super kotlin.sequences.Sequence<java.lang.String>, ? extends T> r6) throws java.io.IOException {
            java.io.BufferedReader r4 = java.nio.file.Files.newBufferedReader(r4, r5)
            java.io.Closeable r4 = (java.io.Closeable) r4
            r5 = 0
            java.lang.Throwable r5 = (java.lang.Throwable) r5
            r0 = 0
            r1 = 1
            r2 = r4
            java.io.BufferedReader r2 = (java.io.BufferedReader) r2     // Catch: java.lang.Throwable -> L32
            java.lang.String r3 = "it"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r2, r3)     // Catch: java.lang.Throwable -> L32
            kotlin.sequences.Sequence r2 = kotlin.io.TextStreamsKt.lineSequence(r2)     // Catch: java.lang.Throwable -> L32
            java.lang.Object r6 = r6.invoke(r2)     // Catch: java.lang.Throwable -> L32
            kotlin.jvm.internal.InlineMarker.finallyStart(r1)
            boolean r0 = kotlin.internal.PlatformImplementationsKt.apiVersionIsAtLeast(r1, r1, r0)
            if (r0 == 0) goto L28
            kotlin.io.CloseableKt.closeFinally(r4, r5)
            goto L2e
        L28:
            if (r4 != 0) goto L2b
            goto L2e
        L2b:
            r4.close()
        L2e:
            kotlin.jvm.internal.InlineMarker.finallyEnd(r1)
            return r6
        L32:
            r5 = move-exception
            throw r5     // Catch: java.lang.Throwable -> L34
        L34:
            r6 = move-exception
            kotlin.jvm.internal.InlineMarker.finallyStart(r1)
            boolean r0 = kotlin.internal.PlatformImplementationsKt.apiVersionIsAtLeast(r1, r1, r0)
            if (r0 != 0) goto L44
            if (r4 == 0) goto L47
            r4.close()     // Catch: java.lang.Throwable -> L47
            goto L47
        L44:
            kotlin.io.CloseableKt.closeFinally(r4, r5)
        L47:
            kotlin.jvm.internal.InlineMarker.finallyEnd(r1)
            throw r6
    }

    static java.lang.Object useLines$default(java.nio.file.Path r2, java.nio.charset.Charset r3, kotlin.jvm.functions.Function1 r4, int r5, java.lang.Object r6) throws java.io.IOException {
            r6 = 1
            r5 = r5 & r6
            if (r5 == 0) goto L6
            java.nio.charset.Charset r3 = kotlin.text.Charsets.UTF_8
        L6:
            java.io.BufferedReader r2 = java.nio.file.Files.newBufferedReader(r2, r3)
            java.io.Closeable r2 = (java.io.Closeable) r2
            r3 = 0
            java.lang.Throwable r3 = (java.lang.Throwable) r3
            r5 = 0
            r0 = r2
            java.io.BufferedReader r0 = (java.io.BufferedReader) r0     // Catch: java.lang.Throwable -> L37
            java.lang.String r1 = "it"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)     // Catch: java.lang.Throwable -> L37
            kotlin.sequences.Sequence r0 = kotlin.io.TextStreamsKt.lineSequence(r0)     // Catch: java.lang.Throwable -> L37
            java.lang.Object r4 = r4.invoke(r0)     // Catch: java.lang.Throwable -> L37
            kotlin.jvm.internal.InlineMarker.finallyStart(r6)
            boolean r5 = kotlin.internal.PlatformImplementationsKt.apiVersionIsAtLeast(r6, r6, r5)
            if (r5 == 0) goto L2d
            kotlin.io.CloseableKt.closeFinally(r2, r3)
            goto L33
        L2d:
            if (r2 != 0) goto L30
            goto L33
        L30:
            r2.close()
        L33:
            kotlin.jvm.internal.InlineMarker.finallyEnd(r6)
            return r4
        L37:
            r3 = move-exception
            throw r3     // Catch: java.lang.Throwable -> L39
        L39:
            r4 = move-exception
            kotlin.jvm.internal.InlineMarker.finallyStart(r6)
            boolean r5 = kotlin.internal.PlatformImplementationsKt.apiVersionIsAtLeast(r6, r6, r5)
            if (r5 != 0) goto L49
            if (r2 == 0) goto L4c
            r2.close()     // Catch: java.lang.Throwable -> L4c
            goto L4c
        L49:
            kotlin.io.CloseableKt.closeFinally(r2, r3)
        L4c:
            kotlin.jvm.internal.InlineMarker.finallyEnd(r6)
            throw r4
    }

    private static final void writeBytes(java.nio.file.Path r1, byte[] r2, java.nio.file.OpenOption... r3) throws java.io.IOException {
            int r0 = r3.length
            java.lang.Object[] r3 = java.util.Arrays.copyOf(r3, r0)
            java.nio.file.OpenOption[] r3 = (java.nio.file.OpenOption[]) r3
            java.nio.file.Files.write(r1, r2, r3)
            return
    }

    private static final java.nio.file.Path writeLines(java.nio.file.Path r1, java.lang.Iterable<? extends java.lang.CharSequence> r2, java.nio.charset.Charset r3, java.nio.file.OpenOption... r4) throws java.io.IOException {
            int r0 = r4.length
            java.lang.Object[] r4 = java.util.Arrays.copyOf(r4, r0)
            java.nio.file.OpenOption[] r4 = (java.nio.file.OpenOption[]) r4
            java.nio.file.Path r1 = java.nio.file.Files.write(r1, r2, r3, r4)
            java.lang.String r2 = "Files.write(this, lines, charset, *options)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    private static final java.nio.file.Path writeLines(java.nio.file.Path r1, kotlin.sequences.Sequence<? extends java.lang.CharSequence> r2, java.nio.charset.Charset r3, java.nio.file.OpenOption... r4) throws java.io.IOException {
            java.lang.Iterable r2 = kotlin.sequences.SequencesKt.asIterable(r2)
            int r0 = r4.length
            java.lang.Object[] r4 = java.util.Arrays.copyOf(r4, r0)
            java.nio.file.OpenOption[] r4 = (java.nio.file.OpenOption[]) r4
            java.nio.file.Path r1 = java.nio.file.Files.write(r1, r2, r3, r4)
            java.lang.String r2 = "Files.write(this, lines.…ble(), charset, *options)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            return r1
    }

    static java.nio.file.Path writeLines$default(java.nio.file.Path r0, java.lang.Iterable r1, java.nio.charset.Charset r2, java.nio.file.OpenOption[] r3, int r4, java.lang.Object r5) throws java.io.IOException {
            r4 = r4 & 2
            if (r4 == 0) goto L6
            java.nio.charset.Charset r2 = kotlin.text.Charsets.UTF_8
        L6:
            int r4 = r3.length
            java.lang.Object[] r3 = java.util.Arrays.copyOf(r3, r4)
            java.nio.file.OpenOption[] r3 = (java.nio.file.OpenOption[]) r3
            java.nio.file.Path r0 = java.nio.file.Files.write(r0, r1, r2, r3)
            java.lang.String r1 = "Files.write(this, lines, charset, *options)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    static java.nio.file.Path writeLines$default(java.nio.file.Path r0, kotlin.sequences.Sequence r1, java.nio.charset.Charset r2, java.nio.file.OpenOption[] r3, int r4, java.lang.Object r5) throws java.io.IOException {
            r4 = r4 & 2
            if (r4 == 0) goto L6
            java.nio.charset.Charset r2 = kotlin.text.Charsets.UTF_8
        L6:
            java.lang.Iterable r1 = kotlin.sequences.SequencesKt.asIterable(r1)
            int r4 = r3.length
            java.lang.Object[] r3 = java.util.Arrays.copyOf(r3, r4)
            java.nio.file.OpenOption[] r3 = (java.nio.file.OpenOption[]) r3
            java.nio.file.Path r0 = java.nio.file.Files.write(r0, r1, r2, r3)
            java.lang.String r1 = "Files.write(this, lines.…ble(), charset, *options)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
            return r0
    }

    public static final void writeText(java.nio.file.Path r1, java.lang.CharSequence r2, java.nio.charset.Charset r3, java.nio.file.OpenOption... r4) throws java.io.IOException {
            java.lang.String r0 = "$this$writeText"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "text"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            java.lang.String r0 = "options"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            int r0 = r4.length
            java.lang.Object[] r4 = java.util.Arrays.copyOf(r4, r0)
            java.nio.file.OpenOption[] r4 = (java.nio.file.OpenOption[]) r4
            java.io.OutputStream r1 = java.nio.file.Files.newOutputStream(r1, r4)
            java.lang.String r4 = "Files.newOutputStream(this, *options)"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r4)
            java.io.OutputStreamWriter r4 = new java.io.OutputStreamWriter
            r4.<init>(r1, r3)
            java.io.Closeable r4 = (java.io.Closeable) r4
            r1 = 0
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            r3 = r4
            java.io.OutputStreamWriter r3 = (java.io.OutputStreamWriter) r3     // Catch: java.lang.Throwable -> L38
            r3.append(r2)     // Catch: java.lang.Throwable -> L38
            kotlin.io.CloseableKt.closeFinally(r4, r1)
            return
        L38:
            r1 = move-exception
            throw r1     // Catch: java.lang.Throwable -> L3a
        L3a:
            r2 = move-exception
            kotlin.io.CloseableKt.closeFinally(r4, r1)
            throw r2
    }

    public static void writeText$default(java.nio.file.Path r0, java.lang.CharSequence r1, java.nio.charset.Charset r2, java.nio.file.OpenOption[] r3, int r4, java.lang.Object r5) throws java.io.IOException {
            r4 = r4 & 2
            if (r4 == 0) goto L6
            java.nio.charset.Charset r2 = kotlin.text.Charsets.UTF_8
        L6:
            kotlin.io.path.PathsKt.writeText(r0, r1, r2, r3)
            return
    }

    private static final java.io.OutputStreamWriter writer(java.nio.file.Path r2, java.nio.charset.Charset r3, java.nio.file.OpenOption... r4) throws java.io.IOException {
            java.io.OutputStreamWriter r0 = new java.io.OutputStreamWriter
            int r1 = r4.length
            java.lang.Object[] r4 = java.util.Arrays.copyOf(r4, r1)
            java.nio.file.OpenOption[] r4 = (java.nio.file.OpenOption[]) r4
            java.io.OutputStream r2 = java.nio.file.Files.newOutputStream(r2, r4)
            r0.<init>(r2, r3)
            return r0
    }

    static java.io.OutputStreamWriter writer$default(java.nio.file.Path r0, java.nio.charset.Charset r1, java.nio.file.OpenOption[] r2, int r3, java.lang.Object r4) throws java.io.IOException {
            r3 = r3 & 1
            if (r3 == 0) goto L6
            java.nio.charset.Charset r1 = kotlin.text.Charsets.UTF_8
        L6:
            java.io.OutputStreamWriter r3 = new java.io.OutputStreamWriter
            int r4 = r2.length
            java.lang.Object[] r2 = java.util.Arrays.copyOf(r2, r4)
            java.nio.file.OpenOption[] r2 = (java.nio.file.OpenOption[]) r2
            java.io.OutputStream r0 = java.nio.file.Files.newOutputStream(r0, r2)
            r3.<init>(r0, r1)
            return r3
    }
}
