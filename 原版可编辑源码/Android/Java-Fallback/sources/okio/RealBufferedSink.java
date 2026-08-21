package okio;

@kotlin.Metadata(d1 = {"\u0000f\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0005\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\n\u0002\u0010\b\n\u0000\n\u0002\u0018\u0002\n\u0002\u0010\u0012\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0011\n\u0002\u0018\u0002\n\u0002\b\u0006\b\u0000\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\b\u0010\u0005\u001a\u00020\u0006H\u0016J\b\u0010\u000e\u001a\u00020\u000fH\u0016J\b\u0010\u0010\u001a\u00020\u0001H\u0016J\b\u0010\u0011\u001a\u00020\u0001H\u0016J\b\u0010\u0012\u001a\u00020\u000fH\u0016J\b\u0010\u0013\u001a\u00020\rH\u0016J\b\u0010\u0014\u001a\u00020\u0015H\u0016J\b\u0010\u0016\u001a\u00020\u0017H\u0016J\b\u0010\u0018\u001a\u00020\u0019H\u0016J\u0010\u0010\u001a\u001a\u00020\u001b2\u0006\u0010\u001c\u001a\u00020\u001dH\u0016J\u0010\u0010\u001a\u001a\u00020\u00012\u0006\u0010\u001c\u001a\u00020\u001eH\u0016J \u0010\u001a\u001a\u00020\u00012\u0006\u0010\u001c\u001a\u00020\u001e2\u0006\u0010\u001f\u001a\u00020\u001b2\u0006\u0010 \u001a\u00020\u001bH\u0016J\u0018\u0010\u001a\u001a\u00020\u000f2\u0006\u0010\u001c\u001a\u00020\u00062\u0006\u0010 \u001a\u00020!H\u0016J\u0010\u0010\u001a\u001a\u00020\u00012\u0006\u0010\"\u001a\u00020#H\u0016J \u0010\u001a\u001a\u00020\u00012\u0006\u0010\"\u001a\u00020#2\u0006\u0010\u001f\u001a\u00020\u001b2\u0006\u0010 \u001a\u00020\u001bH\u0016J\u0018\u0010\u001a\u001a\u00020\u00012\u0006\u0010\u001c\u001a\u00020$2\u0006\u0010 \u001a\u00020!H\u0016J\u0010\u0010%\u001a\u00020!2\u0006\u0010\u001c\u001a\u00020$H\u0016J\u0010\u0010&\u001a\u00020\u00012\u0006\u0010'\u001a\u00020\u001bH\u0016J\u0010\u0010(\u001a\u00020\u00012\u0006\u0010)\u001a\u00020!H\u0016J\u0010\u0010*\u001a\u00020\u00012\u0006\u0010)\u001a\u00020!H\u0016J\u0010\u0010+\u001a\u00020\u00012\u0006\u0010,\u001a\u00020\u001bH\u0016J\u0010\u0010-\u001a\u00020\u00012\u0006\u0010,\u001a\u00020\u001bH\u0016J\u0010\u0010.\u001a\u00020\u00012\u0006\u0010)\u001a\u00020!H\u0016J\u0010\u0010/\u001a\u00020\u00012\u0006\u0010)\u001a\u00020!H\u0016J\u0010\u00100\u001a\u00020\u00012\u0006\u00101\u001a\u00020\u001bH\u0016J\u0010\u00102\u001a\u00020\u00012\u0006\u00101\u001a\u00020\u001bH\u0016J\u0018\u00103\u001a\u00020\u00012\u0006\u00104\u001a\u00020\u00192\u0006\u00105\u001a\u000206H\u0016J(\u00103\u001a\u00020\u00012\u0006\u00104\u001a\u00020\u00192\u0006\u00107\u001a\u00020\u001b2\u0006\u00108\u001a\u00020\u001b2\u0006\u00105\u001a\u000206H\u0016J\u0010\u00109\u001a\u00020\u00012\u0006\u00104\u001a\u00020\u0019H\u0016J \u00109\u001a\u00020\u00012\u0006\u00104\u001a\u00020\u00192\u0006\u00107\u001a\u00020\u001b2\u0006\u00108\u001a\u00020\u001bH\u0016J\u0010\u0010:\u001a\u00020\u00012\u0006\u0010;\u001a\u00020\u001bH\u0016R\u001b\u0010\u0005\u001a\u00020\u00068Ö\u0002X\u0096\u0004¢\u0006\f\u0012\u0004\b\u0007\u0010\b\u001a\u0004\b\t\u0010\nR\u0010\u0010\u000b\u001a\u00020\u00068\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0012\u0010\f\u001a\u00020\r8\u0006@\u0006X\u0087\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0002\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006<"}, d2 = {"Lokio/RealBufferedSink;", "Lokio/BufferedSink;", "sink", "Lokio/Sink;", "(Lokio/Sink;)V", "buffer", "Lokio/Buffer;", "getBuffer$annotations", "()V", "getBuffer", "()Lokio/Buffer;", "bufferField", "closed", "", "close", "", "emit", "emitCompleteSegments", "flush", "isOpen", "outputStream", "Ljava/io/OutputStream;", "timeout", "Lokio/Timeout;", "toString", "", "write", "", "source", "Ljava/nio/ByteBuffer;", "", "offset", "byteCount", "", "byteString", "Lokio/ByteString;", "Lokio/Source;", "writeAll", "writeByte", "b", "writeDecimalLong", "v", "writeHexadecimalUnsignedLong", "writeInt", "i", "writeIntLe", "writeLong", "writeLongLe", "writeShort", "s", "writeShortLe", "writeString", "string", "charset", "Ljava/nio/charset/Charset;", "beginIndex", "endIndex", "writeUtf8", "writeUtf8CodePoint", "codePoint", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public final class RealBufferedSink implements okio.BufferedSink {
    public final okio.Buffer bufferField;
    public boolean closed;
    public final okio.Sink sink;

    class 1 extends java.io.OutputStream {
        final okio.RealBufferedSink this$0;

        1(okio.RealBufferedSink r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r1 = this;
                okio.RealBufferedSink r0 = r1.this$0
                r0.close()
                return
        }

        @Override
        public void flush() throws java.io.IOException {
                r1 = this;
                okio.RealBufferedSink r0 = r1.this$0
                boolean r0 = r0.closed
                if (r0 != 0) goto Lb
                okio.RealBufferedSink r0 = r1.this$0
                r0.flush()
            Lb:
                return
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                okio.RealBufferedSink r1 = r2.this$0
                r0.append(r1)
                java.lang.String r1 = ".outputStream()"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }

        @Override
        public void write(int r2) throws java.io.IOException {
                r1 = this;
                okio.RealBufferedSink r0 = r1.this$0
                boolean r0 = r0.closed
                if (r0 != 0) goto L14
                okio.RealBufferedSink r0 = r1.this$0
                okio.Buffer r0 = r0.buffer
                byte r2 = (byte) r2
                r0.writeByte(r2)
                okio.RealBufferedSink r2 = r1.this$0
                r2.emitCompleteSegments()
                return
            L14:
                java.io.IOException r2 = new java.io.IOException
                java.lang.String r0 = "closed"
                r2.<init>(r0)
                throw r2
        }

        @Override
        public void write(byte[] r2, int r3, int r4) throws java.io.IOException {
                r1 = this;
                okio.RealBufferedSink r0 = r1.this$0
                boolean r0 = r0.closed
                if (r0 != 0) goto L13
                okio.RealBufferedSink r0 = r1.this$0
                okio.Buffer r0 = r0.buffer
                r0.write(r2, r3, r4)
                okio.RealBufferedSink r2 = r1.this$0
                r2.emitCompleteSegments()
                return
            L13:
                java.io.IOException r2 = new java.io.IOException
                java.lang.String r3 = "closed"
                r2.<init>(r3)
                throw r2
        }
    }


    public RealBufferedSink(okio.Sink r2) {
            r1 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.sink = r2
            okio.Buffer r2 = new okio.Buffer
            r2.<init>()
            r1.bufferField = r2
            return
    }

    public static void getBuffer$annotations() {
            return
    }

    @Override
    public okio.Buffer buffer() {
            r1 = this;
            okio.Buffer r0 = r1.bufferField
            return r0
    }

    @Override
    public void close() {
            r5 = this;
            boolean r0 = r5.closed
            if (r0 == 0) goto L5
            goto L30
        L5:
            r0 = 0
            okio.Buffer r1 = r5.bufferField     // Catch: java.lang.Throwable -> L20
            long r1 = r1.size()     // Catch: java.lang.Throwable -> L20
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L21
            okio.Sink r1 = r5.sink     // Catch: java.lang.Throwable -> L20
            okio.Buffer r2 = r5.bufferField     // Catch: java.lang.Throwable -> L20
            okio.Buffer r3 = r5.bufferField     // Catch: java.lang.Throwable -> L20
            long r3 = r3.size()     // Catch: java.lang.Throwable -> L20
            r1.write(r2, r3)     // Catch: java.lang.Throwable -> L20
            goto L21
        L20:
            r0 = move-exception
        L21:
            okio.Sink r1 = r5.sink     // Catch: java.lang.Throwable -> L27
            r1.close()     // Catch: java.lang.Throwable -> L27
            goto L2b
        L27:
            r1 = move-exception
            if (r0 != 0) goto L2b
            r0 = r1
        L2b:
            r1 = 1
            r5.closed = r1
            if (r0 != 0) goto L31
        L30:
            return
        L31:
            throw r0
    }

    @Override
    public okio.BufferedSink emit() {
            r4 = this;
            boolean r0 = r4.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L1d
            okio.Buffer r0 = r4.bufferField
            long r0 = r0.size()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L19
            okio.Sink r2 = r4.sink
            okio.Buffer r3 = r4.bufferField
            r2.write(r3, r0)
        L19:
            r0 = r4
            okio.BufferedSink r0 = (okio.BufferedSink) r0
            return r0
        L1d:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "closed"
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            java.lang.Throwable r0 = (java.lang.Throwable) r0
            throw r0
    }

    @Override
    public okio.BufferedSink emitCompleteSegments() {
            r4 = this;
            boolean r0 = r4.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L1d
            okio.Buffer r0 = r4.bufferField
            long r0 = r0.completeSegmentByteCount()
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L19
            okio.Sink r2 = r4.sink
            okio.Buffer r3 = r4.bufferField
            r2.write(r3, r0)
        L19:
            r0 = r4
            okio.BufferedSink r0 = (okio.BufferedSink) r0
            return r0
        L1d:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "closed"
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            java.lang.Throwable r0 = (java.lang.Throwable) r0
            throw r0
    }

    @Override
    public void flush() {
            r4 = this;
            boolean r0 = r4.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L23
            okio.Buffer r0 = r4.bufferField
            long r0 = r0.size()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L1d
            okio.Sink r0 = r4.sink
            okio.Buffer r1 = r4.bufferField
            long r2 = r1.size()
            r0.write(r1, r2)
        L1d:
            okio.Sink r0 = r4.sink
            r0.flush()
            return
        L23:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "closed"
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            java.lang.Throwable r0 = (java.lang.Throwable) r0
            throw r0
    }

    @Override
    public okio.Buffer getBuffer() {
            r1 = this;
            okio.Buffer r0 = r1.bufferField
            return r0
    }

    @Override
    public boolean isOpen() {
            r1 = this;
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            return r0
    }

    @Override
    public java.io.OutputStream outputStream() {
            r1 = this;
            okio.RealBufferedSink$outputStream$1 r0 = new okio.RealBufferedSink$outputStream$1
            r0.<init>(r1)
            java.io.OutputStream r0 = (java.io.OutputStream) r0
            return r0
    }

    @Override
    public okio.Timeout timeout() {
            r1 = this;
            okio.Sink r0 = r1.sink
            okio.Timeout r0 = r0.timeout()
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "buffer("
            r0.append(r1)
            okio.Sink r1 = r2.sink
            r0.append(r1)
            r1 = 41
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public int write(java.nio.ByteBuffer r2) {
            r1 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L15
            okio.Buffer r0 = r1.bufferField
            int r2 = r0.write(r2)
            r1.emitCompleteSegments()
            return r2
        L15:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            java.lang.String r0 = r0.toString()
            r2.<init>(r0)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public okio.BufferedSink write(okio.ByteString r2) {
            r1 = this;
            java.lang.String r0 = "byteString"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L15
            okio.Buffer r0 = r1.bufferField
            r0.write(r2)
            okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        L15:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            java.lang.String r0 = r0.toString()
            r2.<init>(r0)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public okio.BufferedSink write(okio.ByteString r2, int r3, int r4) {
            r1 = this;
            java.lang.String r0 = "byteString"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L15
            okio.Buffer r0 = r1.bufferField
            r0.write(r2, r3, r4)
            okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        L15:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public okio.BufferedSink write(okio.Source r5, long r6) {
            r4 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
        L5:
            r0 = 0
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 <= 0) goto L22
            okio.Buffer r0 = r4.bufferField
            long r0 = r5.read(r0, r6)
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L1c
            long r6 = r6 - r0
            r4.emitCompleteSegments()
            goto L5
        L1c:
            java.io.EOFException r5 = new java.io.EOFException
            r5.<init>()
            throw r5
        L22:
            r5 = r4
            okio.BufferedSink r5 = (okio.BufferedSink) r5
            return r5
    }

    @Override
    public okio.BufferedSink write(byte[] r2) {
            r1 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L15
            okio.Buffer r0 = r1.bufferField
            r0.write(r2)
            okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        L15:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            java.lang.String r0 = r0.toString()
            r2.<init>(r0)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public okio.BufferedSink write(byte[] r2, int r3, int r4) {
            r1 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L15
            okio.Buffer r0 = r1.bufferField
            r0.write(r2, r3, r4)
            okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        L15:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public void write(okio.Buffer r2, long r3) {
            r1 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L14
            okio.Buffer r0 = r1.bufferField
            r0.write(r2, r3)
            r1.emitCompleteSegments()
            return
        L14:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public long writeAll(okio.Source r7) {
            r6 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            r0 = 0
        L7:
            okio.Buffer r2 = r6.bufferField
            r3 = 8192(0x2000, double:4.0474E-320)
            long r2 = r7.read(r2, r3)
            r4 = -1
            int r4 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r4 != 0) goto L16
            return r0
        L16:
            long r0 = r0 + r2
            r6.emitCompleteSegments()
            goto L7
    }

    @Override
    public okio.BufferedSink writeByte(int r2) {
            r1 = this;
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L10
            okio.Buffer r0 = r1.bufferField
            r0.writeByte(r2)
            okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        L10:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            java.lang.String r0 = r0.toString()
            r2.<init>(r0)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public okio.BufferedSink writeDecimalLong(long r2) {
            r1 = this;
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L10
            okio.Buffer r0 = r1.bufferField
            r0.writeDecimalLong(r2)
            okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        L10:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public okio.BufferedSink writeHexadecimalUnsignedLong(long r2) {
            r1 = this;
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L10
            okio.Buffer r0 = r1.bufferField
            r0.writeHexadecimalUnsignedLong(r2)
            okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        L10:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public okio.BufferedSink writeInt(int r2) {
            r1 = this;
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L10
            okio.Buffer r0 = r1.bufferField
            r0.writeInt(r2)
            okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        L10:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            java.lang.String r0 = r0.toString()
            r2.<init>(r0)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public okio.BufferedSink writeIntLe(int r2) {
            r1 = this;
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L10
            okio.Buffer r0 = r1.bufferField
            r0.writeIntLe(r2)
            okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        L10:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            java.lang.String r0 = r0.toString()
            r2.<init>(r0)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public okio.BufferedSink writeLong(long r2) {
            r1 = this;
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L10
            okio.Buffer r0 = r1.bufferField
            r0.writeLong(r2)
            okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        L10:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public okio.BufferedSink writeLongLe(long r2) {
            r1 = this;
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L10
            okio.Buffer r0 = r1.bufferField
            r0.writeLongLe(r2)
            okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        L10:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public okio.BufferedSink writeShort(int r2) {
            r1 = this;
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L10
            okio.Buffer r0 = r1.bufferField
            r0.writeShort(r2)
            okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        L10:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            java.lang.String r0 = r0.toString()
            r2.<init>(r0)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public okio.BufferedSink writeShortLe(int r2) {
            r1 = this;
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L10
            okio.Buffer r0 = r1.bufferField
            r0.writeShortLe(r2)
            okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        L10:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            java.lang.String r0 = r0.toString()
            r2.<init>(r0)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public okio.BufferedSink writeString(java.lang.String r2, int r3, int r4, java.nio.charset.Charset r5) {
            r1 = this;
            java.lang.String r0 = "string"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L1a
            okio.Buffer r0 = r1.bufferField
            r0.writeString(r2, r3, r4, r5)
            okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        L1a:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public okio.BufferedSink writeString(java.lang.String r2, java.nio.charset.Charset r3) {
            r1 = this;
            java.lang.String r0 = "string"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L1a
            okio.Buffer r0 = r1.bufferField
            r0.writeString(r2, r3)
            okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        L1a:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public okio.BufferedSink writeUtf8(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = "string"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L15
            okio.Buffer r0 = r1.bufferField
            r0.writeUtf8(r2)
            okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        L15:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            java.lang.String r0 = r0.toString()
            r2.<init>(r0)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public okio.BufferedSink writeUtf8(java.lang.String r2, int r3, int r4) {
            r1 = this;
            java.lang.String r0 = "string"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L15
            okio.Buffer r0 = r1.bufferField
            r0.writeUtf8(r2, r3, r4)
            okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        L15:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "closed"
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    @Override
    public okio.BufferedSink writeUtf8CodePoint(int r2) {
            r1 = this;
            boolean r0 = r1.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L10
            okio.Buffer r0 = r1.bufferField
            r0.writeUtf8CodePoint(r2)
            okio.BufferedSink r2 = r1.emitCompleteSegments()
            return r2
        L10:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            java.lang.String r0 = r0.toString()
            r2.<init>(r0)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }
}
