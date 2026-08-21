package okio.internal;

@kotlin.Metadata(d1 = {"\u0000D\n\u0000\n\u0002\u0010\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0002\b\u0002\n\u0002\u0010\u0012\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0015\u001a\r\u0010\u0000\u001a\u00020\u0001*\u00020\u0002H\u0080\b\u001a\r\u0010\u0003\u001a\u00020\u0004*\u00020\u0002H\u0080\b\u001a\r\u0010\u0005\u001a\u00020\u0004*\u00020\u0002H\u0080\b\u001a\r\u0010\u0006\u001a\u00020\u0001*\u00020\u0002H\u0080\b\u001a\r\u0010\u0007\u001a\u00020\b*\u00020\u0002H\u0080\b\u001a\r\u0010\t\u001a\u00020\n*\u00020\u0002H\u0080\b\u001a\u0015\u0010\u000b\u001a\u00020\u0004*\u00020\u00022\u0006\u0010\f\u001a\u00020\rH\u0080\b\u001a%\u0010\u000b\u001a\u00020\u0004*\u00020\u00022\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u000fH\u0080\b\u001a\u001d\u0010\u000b\u001a\u00020\u0001*\u00020\u00022\u0006\u0010\f\u001a\u00020\u00112\u0006\u0010\u0010\u001a\u00020\u0012H\u0080\b\u001a\u0015\u0010\u000b\u001a\u00020\u0004*\u00020\u00022\u0006\u0010\u0013\u001a\u00020\u0014H\u0080\b\u001a%\u0010\u000b\u001a\u00020\u0004*\u00020\u00022\u0006\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u000e\u001a\u00020\u000f2\u0006\u0010\u0010\u001a\u00020\u000fH\u0080\b\u001a\u001d\u0010\u000b\u001a\u00020\u0004*\u00020\u00022\u0006\u0010\f\u001a\u00020\u00152\u0006\u0010\u0010\u001a\u00020\u0012H\u0080\b\u001a\u0015\u0010\u0016\u001a\u00020\u0012*\u00020\u00022\u0006\u0010\f\u001a\u00020\u0015H\u0080\b\u001a\u0015\u0010\u0017\u001a\u00020\u0004*\u00020\u00022\u0006\u0010\u0018\u001a\u00020\u000fH\u0080\b\u001a\u0015\u0010\u0019\u001a\u00020\u0004*\u00020\u00022\u0006\u0010\u001a\u001a\u00020\u0012H\u0080\b\u001a\u0015\u0010\u001b\u001a\u00020\u0004*\u00020\u00022\u0006\u0010\u001a\u001a\u00020\u0012H\u0080\b\u001a\u0015\u0010\u001c\u001a\u00020\u0004*\u00020\u00022\u0006\u0010\u001d\u001a\u00020\u000fH\u0080\b\u001a\u0015\u0010\u001e\u001a\u00020\u0004*\u00020\u00022\u0006\u0010\u001d\u001a\u00020\u000fH\u0080\b\u001a\u0015\u0010\u001f\u001a\u00020\u0004*\u00020\u00022\u0006\u0010\u001a\u001a\u00020\u0012H\u0080\b\u001a\u0015\u0010 \u001a\u00020\u0004*\u00020\u00022\u0006\u0010\u001a\u001a\u00020\u0012H\u0080\b\u001a\u0015\u0010!\u001a\u00020\u0004*\u00020\u00022\u0006\u0010\"\u001a\u00020\u000fH\u0080\b\u001a\u0015\u0010#\u001a\u00020\u0004*\u00020\u00022\u0006\u0010\"\u001a\u00020\u000fH\u0080\b\u001a\u0015\u0010$\u001a\u00020\u0004*\u00020\u00022\u0006\u0010%\u001a\u00020\nH\u0080\b\u001a%\u0010$\u001a\u00020\u0004*\u00020\u00022\u0006\u0010%\u001a\u00020\n2\u0006\u0010&\u001a\u00020\u000f2\u0006\u0010'\u001a\u00020\u000fH\u0080\b\u001a\u0015\u0010(\u001a\u00020\u0004*\u00020\u00022\u0006\u0010)\u001a\u00020\u000fH\u0080\b¨\u0006*"}, d2 = {"commonClose", "", "Lokio/RealBufferedSink;", "commonEmit", "Lokio/BufferedSink;", "commonEmitCompleteSegments", "commonFlush", "commonTimeout", "Lokio/Timeout;", "commonToString", "", "commonWrite", "source", "", "offset", "", "byteCount", "Lokio/Buffer;", "", "byteString", "Lokio/ByteString;", "Lokio/Source;", "commonWriteAll", "commonWriteByte", "b", "commonWriteDecimalLong", "v", "commonWriteHexadecimalUnsignedLong", "commonWriteInt", "i", "commonWriteIntLe", "commonWriteLong", "commonWriteLongLe", "commonWriteShort", "s", "commonWriteShortLe", "commonWriteUtf8", "string", "beginIndex", "endIndex", "commonWriteUtf8CodePoint", "codePoint", "okio"}, k = 2, mv = {1, 5, 1}, xi = 48)
public final class _RealBufferedSinkKt {
    public static final void commonClose(okio.RealBufferedSink r5) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            boolean r0 = r5.closed
            if (r0 == 0) goto La
            return
        La:
            r0 = 0
            okio.Buffer r1 = r5.bufferField     // Catch: java.lang.Throwable -> L25
            long r1 = r1.size()     // Catch: java.lang.Throwable -> L25
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L26
            okio.Sink r1 = r5.sink     // Catch: java.lang.Throwable -> L25
            okio.Buffer r2 = r5.bufferField     // Catch: java.lang.Throwable -> L25
            okio.Buffer r3 = r5.bufferField     // Catch: java.lang.Throwable -> L25
            long r3 = r3.size()     // Catch: java.lang.Throwable -> L25
            r1.write(r2, r3)     // Catch: java.lang.Throwable -> L25
            goto L26
        L25:
            r0 = move-exception
        L26:
            okio.Sink r1 = r5.sink     // Catch: java.lang.Throwable -> L2c
            r1.close()     // Catch: java.lang.Throwable -> L2c
            goto L30
        L2c:
            r1 = move-exception
            if (r0 != 0) goto L30
            r0 = r1
        L30:
            r1 = 1
            r5.closed = r1
            if (r0 != 0) goto L36
            return
        L36:
            throw r0
    }

    public static final okio.BufferedSink commonEmit(okio.RealBufferedSink r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            boolean r0 = r4.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L21
            okio.Buffer r0 = r4.bufferField
            long r0 = r0.size()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L1e
            okio.Sink r2 = r4.sink
            okio.Buffer r3 = r4.bufferField
            r2.write(r3, r0)
        L1e:
            okio.BufferedSink r4 = (okio.BufferedSink) r4
            return r4
        L21:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            java.lang.String r0 = r0.toString()
            r4.<init>(r0)
            java.lang.Throwable r4 = (java.lang.Throwable) r4
            throw r4
    }

    public static final okio.BufferedSink commonEmitCompleteSegments(okio.RealBufferedSink r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            boolean r0 = r4.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L21
            okio.Buffer r0 = r4.bufferField
            long r0 = r0.completeSegmentByteCount()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L1e
            okio.Sink r2 = r4.sink
            okio.Buffer r3 = r4.bufferField
            r2.write(r3, r0)
        L1e:
            okio.BufferedSink r4 = (okio.BufferedSink) r4
            return r4
        L21:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            java.lang.String r0 = r0.toString()
            r4.<init>(r0)
            java.lang.Throwable r4 = (java.lang.Throwable) r4
            throw r4
    }

    public static final void commonFlush(okio.RealBufferedSink r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            boolean r0 = r4.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L2a
            okio.Buffer r0 = r4.bufferField
            long r0 = r0.size()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L24
            okio.Sink r0 = r4.sink
            okio.Buffer r1 = r4.bufferField
            okio.Buffer r2 = r4.bufferField
            long r2 = r2.size()
            r0.write(r1, r2)
        L24:
            okio.Sink r4 = r4.sink
            r4.flush()
            return
        L2a:
            java.lang.IllegalStateException r4 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            java.lang.String r0 = r0.toString()
            r4.<init>(r0)
            java.lang.Throwable r4 = (java.lang.Throwable) r4
            throw r4
    }

    public static final okio.Timeout commonTimeout(okio.RealBufferedSink r1) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            okio.Sink r1 = r1.sink
            okio.Timeout r1 = r1.timeout()
            return r1
    }

    public static final java.lang.String commonToString(okio.RealBufferedSink r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "buffer("
            r0.append(r1)
            okio.Sink r2 = r2.sink
            r0.append(r2)
            r2 = 41
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static final okio.BufferedSink commonWrite(okio.RealBufferedSink r1, okio.ByteString r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "byteString"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L1a
            okio.Buffer r0 = r1.bufferField
            r0.write(r2)
            okio.BufferedSink r1 = r1.emitCompleteSegments()
            return r1
        L1a:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "closed"
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
    }

    public static final okio.BufferedSink commonWrite(okio.RealBufferedSink r1, okio.ByteString r2, int r3, int r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "byteString"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L1a
            okio.Buffer r0 = r1.bufferField
            r0.write(r2, r3, r4)
            okio.BufferedSink r1 = r1.emitCompleteSegments()
            return r1
        L1a:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "closed"
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
    }

    public static final okio.BufferedSink commonWrite(okio.RealBufferedSink r4, okio.Source r5, long r6) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
        La:
            r0 = 0
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 <= 0) goto L27
            okio.Buffer r0 = r4.bufferField
            long r0 = r5.read(r0, r6)
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L21
            long r6 = r6 - r0
            r4.emitCompleteSegments()
            goto La
        L21:
            java.io.EOFException r4 = new java.io.EOFException
            r4.<init>()
            throw r4
        L27:
            okio.BufferedSink r4 = (okio.BufferedSink) r4
            return r4
    }

    public static final okio.BufferedSink commonWrite(okio.RealBufferedSink r1, byte[] r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L1a
            okio.Buffer r0 = r1.bufferField
            r0.write(r2)
            okio.BufferedSink r1 = r1.emitCompleteSegments()
            return r1
        L1a:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "closed"
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
    }

    public static final okio.BufferedSink commonWrite(okio.RealBufferedSink r1, byte[] r2, int r3, int r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L1a
            okio.Buffer r0 = r1.bufferField
            r0.write(r2, r3, r4)
            okio.BufferedSink r1 = r1.emitCompleteSegments()
            return r1
        L1a:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "closed"
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
    }

    public static final void commonWrite(okio.RealBufferedSink r1, okio.Buffer r2, long r3) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L19
            okio.Buffer r0 = r1.bufferField
            r0.write(r2, r3)
            r1.emitCompleteSegments()
            return
        L19:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "closed"
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
    }

    public static final long commonWriteAll(okio.RealBufferedSink r6, okio.Source r7) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r6, r0)
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            r0 = 0
        Lc:
            okio.Buffer r2 = r6.bufferField
            r3 = 8192(0x2000, double:4.0474E-320)
            long r2 = r7.read(r2, r3)
            r4 = -1
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 != 0) goto L1b
            return r0
        L1b:
            long r0 = r0 + r2
            r6.emitCompleteSegments()
            goto Lc
    }

    public static final okio.BufferedSink commonWriteByte(okio.RealBufferedSink r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L15
            okio.Buffer r0 = r1.bufferField
            r0.writeByte(r2)
            okio.BufferedSink r1 = r1.emitCompleteSegments()
            return r1
        L15:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "closed"
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
    }

    public static final okio.BufferedSink commonWriteDecimalLong(okio.RealBufferedSink r1, long r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L15
            okio.Buffer r0 = r1.bufferField
            r0.writeDecimalLong(r2)
            okio.BufferedSink r1 = r1.emitCompleteSegments()
            return r1
        L15:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "closed"
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
    }

    public static final okio.BufferedSink commonWriteHexadecimalUnsignedLong(okio.RealBufferedSink r1, long r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L15
            okio.Buffer r0 = r1.bufferField
            r0.writeHexadecimalUnsignedLong(r2)
            okio.BufferedSink r1 = r1.emitCompleteSegments()
            return r1
        L15:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "closed"
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
    }

    public static final okio.BufferedSink commonWriteInt(okio.RealBufferedSink r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L15
            okio.Buffer r0 = r1.bufferField
            r0.writeInt(r2)
            okio.BufferedSink r1 = r1.emitCompleteSegments()
            return r1
        L15:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "closed"
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
    }

    public static final okio.BufferedSink commonWriteIntLe(okio.RealBufferedSink r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L15
            okio.Buffer r0 = r1.bufferField
            r0.writeIntLe(r2)
            okio.BufferedSink r1 = r1.emitCompleteSegments()
            return r1
        L15:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "closed"
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
    }

    public static final okio.BufferedSink commonWriteLong(okio.RealBufferedSink r1, long r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L15
            okio.Buffer r0 = r1.bufferField
            r0.writeLong(r2)
            okio.BufferedSink r1 = r1.emitCompleteSegments()
            return r1
        L15:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "closed"
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
    }

    public static final okio.BufferedSink commonWriteLongLe(okio.RealBufferedSink r1, long r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L15
            okio.Buffer r0 = r1.bufferField
            r0.writeLongLe(r2)
            okio.BufferedSink r1 = r1.emitCompleteSegments()
            return r1
        L15:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "closed"
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
    }

    public static final okio.BufferedSink commonWriteShort(okio.RealBufferedSink r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L15
            okio.Buffer r0 = r1.bufferField
            r0.writeShort(r2)
            okio.BufferedSink r1 = r1.emitCompleteSegments()
            return r1
        L15:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "closed"
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
    }

    public static final okio.BufferedSink commonWriteShortLe(okio.RealBufferedSink r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L15
            okio.Buffer r0 = r1.bufferField
            r0.writeShortLe(r2)
            okio.BufferedSink r1 = r1.emitCompleteSegments()
            return r1
        L15:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "closed"
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
    }

    public static final okio.BufferedSink commonWriteUtf8(okio.RealBufferedSink r1, java.lang.String r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "string"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L1a
            okio.Buffer r0 = r1.bufferField
            r0.writeUtf8(r2)
            okio.BufferedSink r1 = r1.emitCompleteSegments()
            return r1
        L1a:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "closed"
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
    }

    public static final okio.BufferedSink commonWriteUtf8(okio.RealBufferedSink r1, java.lang.String r2, int r3, int r4) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            java.lang.String r0 = "string"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L1a
            okio.Buffer r0 = r1.bufferField
            r0.writeUtf8(r2, r3, r4)
            okio.BufferedSink r1 = r1.emitCompleteSegments()
            return r1
        L1a:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "closed"
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
    }

    public static final okio.BufferedSink commonWriteUtf8CodePoint(okio.RealBufferedSink r1, int r2) {
            java.lang.String r0 = "<this>"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r1, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L15
            okio.Buffer r0 = r1.bufferField
            r0.writeUtf8CodePoint(r2)
            okio.BufferedSink r1 = r1.emitCompleteSegments()
            return r1
        L15:
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException
            java.lang.String r2 = "closed"
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
    }
}
