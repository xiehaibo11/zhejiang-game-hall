package okio;

@kotlin.Metadata(d1 = {"\u0000\u0086\u0001\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0010\u0005\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\u0010\u0012\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u000b\n\u0002\u0010\n\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0000\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\b\u0010\u0005\u001a\u00020\u0006H\u0016J\b\u0010\u000e\u001a\u00020\u000fH\u0016J\b\u0010\u0010\u001a\u00020\rH\u0016J\u0010\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u0014H\u0016J\u0018\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u0012H\u0016J \u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0015\u001a\u00020\u00122\u0006\u0010\u0016\u001a\u00020\u0012H\u0016J\u0010\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0017\u001a\u00020\u0018H\u0016J\u0018\u0010\u0011\u001a\u00020\u00122\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010\u0015\u001a\u00020\u0012H\u0016J\u0010\u0010\u0019\u001a\u00020\u00122\u0006\u0010\u001a\u001a\u00020\u0018H\u0016J\u0018\u0010\u0019\u001a\u00020\u00122\u0006\u0010\u001a\u001a\u00020\u00182\u0006\u0010\u0015\u001a\u00020\u0012H\u0016J\b\u0010\u001b\u001a\u00020\u001cH\u0016J\b\u0010\u001d\u001a\u00020\rH\u0016J\b\u0010\u001e\u001a\u00020\u0001H\u0016J\u0018\u0010\u001f\u001a\u00020\r2\u0006\u0010 \u001a\u00020\u00122\u0006\u0010\u0017\u001a\u00020\u0018H\u0016J(\u0010\u001f\u001a\u00020\r2\u0006\u0010 \u001a\u00020\u00122\u0006\u0010\u0017\u001a\u00020\u00182\u0006\u0010!\u001a\u00020\"2\u0006\u0010#\u001a\u00020\"H\u0016J\u0010\u0010$\u001a\u00020\"2\u0006\u0010%\u001a\u00020&H\u0016J\u0010\u0010$\u001a\u00020\"2\u0006\u0010%\u001a\u00020'H\u0016J \u0010$\u001a\u00020\"2\u0006\u0010%\u001a\u00020'2\u0006\u0010 \u001a\u00020\"2\u0006\u0010#\u001a\u00020\"H\u0016J\u0018\u0010$\u001a\u00020\u00122\u0006\u0010%\u001a\u00020\u00062\u0006\u0010#\u001a\u00020\u0012H\u0016J\u0010\u0010(\u001a\u00020\u00122\u0006\u0010%\u001a\u00020)H\u0016J\b\u0010*\u001a\u00020\u0014H\u0016J\b\u0010+\u001a\u00020'H\u0016J\u0010\u0010+\u001a\u00020'2\u0006\u0010#\u001a\u00020\u0012H\u0016J\b\u0010,\u001a\u00020\u0018H\u0016J\u0010\u0010,\u001a\u00020\u00182\u0006\u0010#\u001a\u00020\u0012H\u0016J\b\u0010-\u001a\u00020\u0012H\u0016J\u0010\u0010.\u001a\u00020\u000f2\u0006\u0010%\u001a\u00020'H\u0016J\u0018\u0010.\u001a\u00020\u000f2\u0006\u0010%\u001a\u00020\u00062\u0006\u0010#\u001a\u00020\u0012H\u0016J\b\u0010/\u001a\u00020\u0012H\u0016J\b\u00100\u001a\u00020\"H\u0016J\b\u00101\u001a\u00020\"H\u0016J\b\u00102\u001a\u00020\u0012H\u0016J\b\u00103\u001a\u00020\u0012H\u0016J\b\u00104\u001a\u000205H\u0016J\b\u00106\u001a\u000205H\u0016J\u0010\u00107\u001a\u0002082\u0006\u00109\u001a\u00020:H\u0016J\u0018\u00107\u001a\u0002082\u0006\u0010#\u001a\u00020\u00122\u0006\u00109\u001a\u00020:H\u0016J\b\u0010;\u001a\u000208H\u0016J\u0010\u0010;\u001a\u0002082\u0006\u0010#\u001a\u00020\u0012H\u0016J\b\u0010<\u001a\u00020\"H\u0016J\n\u0010=\u001a\u0004\u0018\u000108H\u0016J\b\u0010>\u001a\u000208H\u0016J\u0010\u0010>\u001a\u0002082\u0006\u0010?\u001a\u00020\u0012H\u0016J\u0010\u0010@\u001a\u00020\r2\u0006\u0010#\u001a\u00020\u0012H\u0016J\u0010\u0010A\u001a\u00020\u000f2\u0006\u0010#\u001a\u00020\u0012H\u0016J\u0010\u0010B\u001a\u00020\"2\u0006\u0010C\u001a\u00020DH\u0016J\u0010\u0010E\u001a\u00020\u000f2\u0006\u0010#\u001a\u00020\u0012H\u0016J\b\u0010F\u001a\u00020GH\u0016J\b\u0010H\u001a\u000208H\u0016R\u001b\u0010\u0005\u001a\u00020\u00068Ö\u0002X\u0096\u0004¢\u0006\f\u0012\u0004\b\u0007\u0010\b\u001a\u0004\b\t\u0010\nR\u0010\u0010\u000b\u001a\u00020\u00068\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0012\u0010\f\u001a\u00020\r8\u0006@\u0006X\u0087\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0002\u001a\u00020\u00038\u0006X\u0087\u0004¢\u0006\u0002\n\u0000¨\u0006I"}, d2 = {"Lokio/RealBufferedSource;", "Lokio/BufferedSource;", "source", "Lokio/Source;", "(Lokio/Source;)V", "buffer", "Lokio/Buffer;", "getBuffer$annotations", "()V", "getBuffer", "()Lokio/Buffer;", "bufferField", "closed", "", "close", "", "exhausted", "indexOf", "", "b", "", "fromIndex", "toIndex", "bytes", "Lokio/ByteString;", "indexOfElement", "targetBytes", "inputStream", "Ljava/io/InputStream;", "isOpen", "peek", "rangeEquals", "offset", "bytesOffset", "", "byteCount", "read", "sink", "Ljava/nio/ByteBuffer;", "", "readAll", "Lokio/Sink;", "readByte", "readByteArray", "readByteString", "readDecimalLong", "readFully", "readHexadecimalUnsignedLong", "readInt", "readIntLe", "readLong", "readLongLe", "readShort", "", "readShortLe", "readString", "", "charset", "Ljava/nio/charset/Charset;", "readUtf8", "readUtf8CodePoint", "readUtf8Line", "readUtf8LineStrict", "limit", "request", "require", "select", "options", "Lokio/Options;", "skip", "timeout", "Lokio/Timeout;", "toString", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public final class RealBufferedSource implements okio.BufferedSource {
    public final okio.Buffer bufferField;
    public boolean closed;
    public final okio.Source source;

    class 1 extends java.io.InputStream {
        final okio.RealBufferedSource this$0;

        1(okio.RealBufferedSource r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public int available() throws java.io.IOException {
                r4 = this;
                okio.RealBufferedSource r0 = r4.this$0
                boolean r0 = r0.closed
                if (r0 != 0) goto L15
                okio.RealBufferedSource r0 = r4.this$0
                okio.Buffer r0 = r0.buffer
                long r0 = r0.size
                r2 = 2147483647(0x7fffffff, double:1.060997895E-314)
                long r0 = java.lang.Math.min(r0, r2)
                int r1 = (int) r0
                return r1
            L15:
                java.io.IOException r0 = new java.io.IOException
                java.lang.String r1 = "closed"
                r0.<init>(r1)
                throw r0
        }

        @Override
        public void close() throws java.io.IOException {
                r1 = this;
                okio.RealBufferedSource r0 = r1.this$0
                r0.close()
                return
        }

        @Override
        public int read() throws java.io.IOException {
                r5 = this;
                okio.RealBufferedSource r0 = r5.this$0
                boolean r0 = r0.closed
                if (r0 != 0) goto L33
                okio.RealBufferedSource r0 = r5.this$0
                okio.Buffer r0 = r0.buffer
                long r0 = r0.size
                r2 = 0
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 != 0) goto L28
                okio.RealBufferedSource r0 = r5.this$0
                okio.Source r0 = r0.source
                okio.RealBufferedSource r1 = r5.this$0
                okio.Buffer r1 = r1.buffer
                r2 = 8192(0x2000, double:4.0474E-320)
                long r0 = r0.read(r1, r2)
                r2 = -1
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 != 0) goto L28
                r0 = -1
                return r0
            L28:
                okio.RealBufferedSource r0 = r5.this$0
                okio.Buffer r0 = r0.buffer
                byte r0 = r0.readByte()
                r0 = r0 & 255(0xff, float:3.57E-43)
                return r0
            L33:
                java.io.IOException r0 = new java.io.IOException
                java.lang.String r1 = "closed"
                r0.<init>(r1)
                throw r0
        }

        @Override
        public int read(byte[] r8, int r9, int r10) throws java.io.IOException {
                r7 = this;
                okio.RealBufferedSource r0 = r7.this$0
                boolean r0 = r0.closed
                if (r0 != 0) goto L38
                int r0 = r8.length
                long r1 = (long) r0
                long r3 = (long) r9
                long r5 = (long) r10
                okio.Util.checkOffsetAndCount(r1, r3, r5)
                okio.RealBufferedSource r0 = r7.this$0
                okio.Buffer r0 = r0.buffer
                long r0 = r0.size
                r2 = 0
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 != 0) goto L2f
                okio.RealBufferedSource r0 = r7.this$0
                okio.Source r0 = r0.source
                okio.RealBufferedSource r1 = r7.this$0
                okio.Buffer r1 = r1.buffer
                r2 = 8192(0x2000, double:4.0474E-320)
                long r0 = r0.read(r1, r2)
                r2 = -1
                int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r4 != 0) goto L2f
                r8 = -1
                return r8
            L2f:
                okio.RealBufferedSource r0 = r7.this$0
                okio.Buffer r0 = r0.buffer
                int r8 = r0.read(r8, r9, r10)
                return r8
            L38:
                java.io.IOException r8 = new java.io.IOException
                java.lang.String r9 = "closed"
                r8.<init>(r9)
                throw r8
        }

        public java.lang.String toString() {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                okio.RealBufferedSource r1 = r2.this$0
                r0.append(r1)
                java.lang.String r1 = ".inputStream()"
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
        }
    }


    public RealBufferedSource(okio.Source r2) {
            r1 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.<init>()
            r1.source = r2
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
            r1 = this;
            boolean r0 = r1.closed
            if (r0 == 0) goto L5
            goto L12
        L5:
            r0 = 1
            r1.closed = r0
            okio.Source r0 = r1.source
            r0.close()
            okio.Buffer r0 = r1.bufferField
            r0.clear()
        L12:
            return
    }

    @Override
    public boolean exhausted() {
            r6 = this;
            boolean r0 = r6.closed
            r1 = 1
            r0 = r0 ^ r1
            if (r0 == 0) goto L21
            okio.Buffer r0 = r6.bufferField
            boolean r0 = r0.exhausted()
            if (r0 == 0) goto L1f
            okio.Source r0 = r6.source
            okio.Buffer r2 = r6.bufferField
            r3 = 8192(0x2000, double:4.0474E-320)
            long r2 = r0.read(r2, r3)
            r4 = -1
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 != 0) goto L1f
            goto L20
        L1f:
            r1 = 0
        L20:
            return r1
        L21:
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
    public long indexOf(byte r7) {
            r6 = this;
            r2 = 0
            r4 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0 = r6
            r1 = r7
            long r0 = r0.indexOf(r1, r2, r4)
            return r0
    }

    @Override
    public long indexOf(byte r7, long r8) {
            r6 = this;
            r4 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0 = r6
            r1 = r7
            r2 = r8
            long r7 = r0.indexOf(r1, r2, r4)
            return r7
    }

    @Override
    public long indexOf(byte r11, long r12, long r14) {
            r10 = this;
            boolean r0 = r10.closed
            r1 = 1
            r0 = r0 ^ r1
            if (r0 == 0) goto L6e
            r2 = 0
            int r0 = (r2 > r12 ? 1 : (r2 == r12 ? 0 : -1))
            r2 = 0
            if (r0 > 0) goto L12
            int r0 = (r12 > r14 ? 1 : (r12 == r14 ? 0 : -1))
            if (r0 > 0) goto L12
            goto L13
        L12:
            r1 = r2
        L13:
            if (r1 == 0) goto L49
        L15:
            int r0 = (r12 > r14 ? 1 : (r12 == r14 ? 0 : -1))
            r8 = -1
            if (r0 >= 0) goto L48
            okio.Buffer r2 = r10.bufferField
            r3 = r11
            r4 = r12
            r6 = r14
            long r0 = r2.indexOf(r3, r4, r6)
            int r2 = (r0 > r8 ? 1 : (r0 == r8 ? 0 : -1))
            if (r2 == 0) goto L2a
            r8 = r0
            goto L48
        L2a:
            okio.Buffer r0 = r10.bufferField
            long r0 = r0.size()
            int r2 = (r0 > r14 ? 1 : (r0 == r14 ? 0 : -1))
            if (r2 >= 0) goto L48
            okio.Source r2 = r10.source
            okio.Buffer r3 = r10.bufferField
            r4 = 8192(0x2000, double:4.0474E-320)
            long r2 = r2.read(r3, r4)
            int r2 = (r2 > r8 ? 1 : (r2 == r8 ? 0 : -1))
            if (r2 != 0) goto L43
            goto L48
        L43:
            long r12 = java.lang.Math.max(r12, r0)
            goto L15
        L48:
            return r8
        L49:
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r0 = "fromIndex="
            r11.append(r0)
            r11.append(r12)
            java.lang.String r12 = " toIndex="
            r11.append(r12)
            r11.append(r14)
            java.lang.String r11 = r11.toString()
            java.lang.IllegalArgumentException r12 = new java.lang.IllegalArgumentException
            java.lang.String r11 = r11.toString()
            r12.<init>(r11)
            java.lang.Throwable r12 = (java.lang.Throwable) r12
            throw r12
        L6e:
            java.lang.IllegalStateException r11 = new java.lang.IllegalStateException
            java.lang.String r12 = "closed"
            java.lang.String r12 = r12.toString()
            r11.<init>(r12)
            java.lang.Throwable r11 = (java.lang.Throwable) r11
            throw r11
    }

    @Override
    public long indexOf(okio.ByteString r3) {
            r2 = this;
            java.lang.String r0 = "bytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r0 = 0
            long r0 = r2.indexOf(r3, r0)
            return r0
    }

    @Override
    public long indexOf(okio.ByteString r9, long r10) {
            r8 = this;
            java.lang.String r0 = "bytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            boolean r0 = r8.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L3c
        Lb:
            okio.Buffer r0 = r8.bufferField
            long r0 = r0.indexOf(r9, r10)
            r2 = -1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L18
            goto L2d
        L18:
            okio.Buffer r0 = r8.bufferField
            long r0 = r0.size()
            okio.Source r4 = r8.source
            okio.Buffer r5 = r8.bufferField
            r6 = 8192(0x2000, double:4.0474E-320)
            long r4 = r4.read(r5, r6)
            int r4 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r4 != 0) goto L2e
            r0 = r2
        L2d:
            return r0
        L2e:
            int r2 = r9.size()
            long r2 = (long) r2
            long r0 = r0 - r2
            r2 = 1
            long r0 = r0 + r2
            long r10 = java.lang.Math.max(r10, r0)
            goto Lb
        L3c:
            java.lang.IllegalStateException r9 = new java.lang.IllegalStateException
            java.lang.String r10 = "closed"
            java.lang.String r10 = r10.toString()
            r9.<init>(r10)
            java.lang.Throwable r9 = (java.lang.Throwable) r9
            throw r9
    }

    @Override
    public long indexOfElement(okio.ByteString r3) {
            r2 = this;
            java.lang.String r0 = "targetBytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            r0 = 0
            long r0 = r2.indexOfElement(r3, r0)
            return r0
    }

    @Override
    public long indexOfElement(okio.ByteString r9, long r10) {
            r8 = this;
            java.lang.String r0 = "targetBytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            boolean r0 = r8.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L33
        Lb:
            okio.Buffer r0 = r8.bufferField
            long r0 = r0.indexOfElement(r9, r10)
            r2 = -1
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L18
            goto L2d
        L18:
            okio.Buffer r0 = r8.bufferField
            long r0 = r0.size()
            okio.Source r4 = r8.source
            okio.Buffer r5 = r8.bufferField
            r6 = 8192(0x2000, double:4.0474E-320)
            long r4 = r4.read(r5, r6)
            int r4 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r4 != 0) goto L2e
            r0 = r2
        L2d:
            return r0
        L2e:
            long r10 = java.lang.Math.max(r10, r0)
            goto Lb
        L33:
            java.lang.IllegalStateException r9 = new java.lang.IllegalStateException
            java.lang.String r10 = "closed"
            java.lang.String r10 = r10.toString()
            r9.<init>(r10)
            java.lang.Throwable r9 = (java.lang.Throwable) r9
            throw r9
    }

    @Override
    public java.io.InputStream inputStream() {
            r1 = this;
            okio.RealBufferedSource$inputStream$1 r0 = new okio.RealBufferedSource$inputStream$1
            r0.<init>(r1)
            java.io.InputStream r0 = (java.io.InputStream) r0
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
    public okio.BufferedSource peek() {
            r2 = this;
            okio.PeekSource r0 = new okio.PeekSource
            r1 = r2
            okio.BufferedSource r1 = (okio.BufferedSource) r1
            r0.<init>(r1)
            okio.Source r0 = (okio.Source) r0
            okio.BufferedSource r0 = okio.Okio.buffer(r0)
            return r0
    }

    @Override
    public boolean rangeEquals(long r8, okio.ByteString r10) {
            r7 = this;
            java.lang.String r0 = "bytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            int r6 = r10.size()
            r5 = 0
            r1 = r7
            r2 = r8
            r4 = r10
            boolean r8 = r1.rangeEquals(r2, r4, r5, r6)
            return r8
    }

    @Override
    public boolean rangeEquals(long r9, okio.ByteString r11, int r12, int r13) {
            r8 = this;
            java.lang.String r0 = "bytes"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
            boolean r0 = r8.closed
            r1 = 1
            r0 = r0 ^ r1
            if (r0 == 0) goto L44
            r2 = 0
            int r0 = (r9 > r2 ? 1 : (r9 == r2 ? 0 : -1))
            r2 = 0
            if (r0 < 0) goto L42
            if (r12 < 0) goto L42
            if (r13 < 0) goto L42
            int r0 = r11.size()
            int r0 = r0 - r12
            if (r0 >= r13) goto L1e
            goto L42
        L1e:
            if (r13 <= 0) goto L43
            r0 = r2
        L21:
            int r3 = r0 + 1
            long r4 = (long) r0
            long r4 = r4 + r9
            r6 = 1
            long r6 = r6 + r4
            boolean r6 = r8.request(r6)
            if (r6 != 0) goto L2f
            goto L42
        L2f:
            okio.Buffer r6 = r8.bufferField
            byte r4 = r6.getByte(r4)
            int r0 = r0 + r12
            byte r0 = r11.getByte(r0)
            if (r4 == r0) goto L3d
            goto L42
        L3d:
            if (r3 < r13) goto L40
            goto L43
        L40:
            r0 = r3
            goto L21
        L42:
            r1 = r2
        L43:
            return r1
        L44:
            java.lang.IllegalStateException r9 = new java.lang.IllegalStateException
            java.lang.String r10 = "closed"
            java.lang.String r10 = r10.toString()
            r9.<init>(r10)
            java.lang.Throwable r9 = (java.lang.Throwable) r9
            throw r9
    }

    @Override
    public int read(java.nio.ByteBuffer r5) {
            r4 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            okio.Buffer r0 = r4.bufferField
            long r0 = r0.size()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L23
            okio.Source r0 = r4.source
            okio.Buffer r1 = r4.bufferField
            r2 = 8192(0x2000, double:4.0474E-320)
            long r0 = r0.read(r1, r2)
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L23
            r5 = -1
            return r5
        L23:
            okio.Buffer r0 = r4.bufferField
            int r5 = r0.read(r5)
            return r5
    }

    @Override
    public int read(byte[] r3) {
            r2 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            int r0 = r3.length
            r1 = 0
            int r3 = r2.read(r3, r1, r0)
            return r3
    }

    @Override
    public int read(byte[] r10, int r11, int r12) {
            r9 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            int r0 = r10.length
            long r1 = (long) r0
            long r3 = (long) r11
            long r7 = (long) r12
            r5 = r7
            okio._UtilKt.checkOffsetAndCount(r1, r3, r5)
            okio.Buffer r12 = r9.bufferField
            long r0 = r12.size()
            r2 = 0
            int r12 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r12 != 0) goto L2b
            okio.Source r12 = r9.source
            okio.Buffer r0 = r9.bufferField
            r1 = 8192(0x2000, double:4.0474E-320)
            long r0 = r12.read(r0, r1)
            r2 = -1
            int r12 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r12 != 0) goto L2b
            r10 = -1
            goto L3c
        L2b:
            okio.Buffer r12 = r9.bufferField
            long r0 = r12.size()
            long r0 = java.lang.Math.min(r7, r0)
            int r12 = (int) r0
            okio.Buffer r0 = r9.bufferField
            int r10 = r0.read(r10, r11, r12)
        L3c:
            return r10
    }

    @Override
    public long read(okio.Buffer r7, long r8) {
            r6 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            r0 = 0
            int r2 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            r3 = 1
            if (r2 < 0) goto Le
            r2 = r3
            goto Lf
        Le:
            r2 = 0
        Lf:
            if (r2 == 0) goto L50
            boolean r2 = r6.closed
            r2 = r2 ^ r3
            if (r2 == 0) goto L42
            okio.Buffer r2 = r6.bufferField
            long r2 = r2.size()
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            r1 = -1
            if (r0 != 0) goto L31
            okio.Source r0 = r6.source
            okio.Buffer r3 = r6.bufferField
            r4 = 8192(0x2000, double:4.0474E-320)
            long r3 = r0.read(r3, r4)
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 != 0) goto L31
            goto L41
        L31:
            okio.Buffer r0 = r6.bufferField
            long r0 = r0.size()
            long r8 = java.lang.Math.min(r8, r0)
            okio.Buffer r0 = r6.bufferField
            long r1 = r0.read(r7, r8)
        L41:
            return r1
        L42:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.String r8 = "closed"
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            java.lang.Throwable r7 = (java.lang.Throwable) r7
            throw r7
        L50:
            java.lang.Long r7 = java.lang.Long.valueOf(r8)
            java.lang.String r8 = "byteCount < 0: "
            java.lang.String r7 = kotlin.jvm.internal.Intrinsics.stringPlus(r8, r7)
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r7 = r7.toString()
            r8.<init>(r7)
            java.lang.Throwable r8 = (java.lang.Throwable) r8
            throw r8
    }

    @Override
    public long readAll(okio.Sink r9) {
            r8 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            r0 = 0
            r2 = r0
        L8:
            okio.Source r4 = r8.source
            okio.Buffer r5 = r8.bufferField
            r6 = 8192(0x2000, double:4.0474E-320)
            long r4 = r4.read(r5, r6)
            r6 = -1
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 == 0) goto L29
            okio.Buffer r4 = r8.bufferField
            long r4 = r4.completeSegmentByteCount()
            int r6 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r6 <= 0) goto L8
            long r2 = r2 + r4
            okio.Buffer r6 = r8.bufferField
            r9.write(r6, r4)
            goto L8
        L29:
            okio.Buffer r4 = r8.bufferField
            long r4 = r4.size()
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 <= 0) goto L43
            okio.Buffer r0 = r8.bufferField
            long r0 = r0.size()
            long r2 = r2 + r0
            okio.Buffer r0 = r8.bufferField
            long r4 = r0.size()
            r9.write(r0, r4)
        L43:
            return r2
    }

    @Override
    public byte readByte() {
            r2 = this;
            r0 = 1
            r2.require(r0)
            okio.Buffer r0 = r2.bufferField
            byte r0 = r0.readByte()
            return r0
    }

    @Override
    public byte[] readByteArray() {
            r2 = this;
            okio.Buffer r0 = r2.bufferField
            okio.Source r1 = r2.source
            r0.writeAll(r1)
            okio.Buffer r0 = r2.bufferField
            byte[] r0 = r0.readByteArray()
            return r0
    }

    @Override
    public byte[] readByteArray(long r2) {
            r1 = this;
            r1.require(r2)
            okio.Buffer r0 = r1.bufferField
            byte[] r2 = r0.readByteArray(r2)
            return r2
    }

    @Override
    public okio.ByteString readByteString() {
            r2 = this;
            okio.Buffer r0 = r2.bufferField
            okio.Source r1 = r2.source
            r0.writeAll(r1)
            okio.Buffer r0 = r2.bufferField
            okio.ByteString r0 = r0.readByteString()
            return r0
    }

    @Override
    public okio.ByteString readByteString(long r2) {
            r1 = this;
            r1.require(r2)
            okio.Buffer r0 = r1.bufferField
            okio.ByteString r2 = r0.readByteString(r2)
            return r2
    }

    @Override
    public long readDecimalLong() {
            r10 = this;
            r0 = 1
            r10.require(r0)
            r2 = 0
            r4 = r2
        L8:
            long r6 = r4 + r0
            boolean r8 = r10.request(r6)
            if (r8 == 0) goto L4e
            okio.Buffer r8 = r10.bufferField
            byte r8 = r8.getByte(r4)
            r9 = 48
            byte r9 = (byte) r9
            if (r8 < r9) goto L20
            r9 = 57
            byte r9 = (byte) r9
            if (r8 <= r9) goto L2a
        L20:
            int r4 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r4 != 0) goto L2c
            r5 = 45
            byte r5 = (byte) r5
            if (r8 == r5) goto L2a
            goto L2c
        L2a:
            r4 = r6
            goto L8
        L2c:
            if (r4 == 0) goto L2f
            goto L4e
        L2f:
            java.lang.NumberFormatException r0 = new java.lang.NumberFormatException
            r1 = 16
            int r1 = kotlin.text.CharsKt.checkRadix(r1)
            int r1 = kotlin.text.CharsKt.checkRadix(r1)
            java.lang.String r1 = java.lang.Integer.toString(r8, r1)
            java.lang.String r2 = "java.lang.Integer.toStri…(this, checkRadix(radix))"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            java.lang.String r2 = "Expected a digit or '-' but was 0x"
            java.lang.String r1 = kotlin.jvm.internal.Intrinsics.stringPlus(r2, r1)
            r0.<init>(r1)
            throw r0
        L4e:
            okio.Buffer r0 = r10.bufferField
            long r0 = r0.readDecimalLong()
            return r0
    }

    @Override
    public void readFully(okio.Buffer r2, long r3) {
            r1 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
            r1.require(r3)     // Catch: java.io.EOFException -> Le
            okio.Buffer r0 = r1.bufferField
            r0.readFully(r2, r3)
            return
        Le:
            r3 = move-exception
            okio.Buffer r4 = r1.bufferField
            okio.Source r4 = (okio.Source) r4
            r2.writeAll(r4)
            throw r3
    }

    @Override
    public void readFully(byte[] r7) {
            r6 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            int r0 = r7.length     // Catch: java.io.EOFException -> L10
            long r0 = (long) r0     // Catch: java.io.EOFException -> L10
            r6.require(r0)     // Catch: java.io.EOFException -> L10
            okio.Buffer r0 = r6.bufferField
            r0.readFully(r7)
            return
        L10:
            r0 = move-exception
            r1 = 0
        L12:
            okio.Buffer r2 = r6.bufferField
            long r2 = r2.size()
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L34
            okio.Buffer r2 = r6.bufferField
            long r3 = r2.size()
            int r3 = (int) r3
            int r2 = r2.read(r7, r1, r3)
            r3 = -1
            if (r2 == r3) goto L2e
            int r1 = r1 + r2
            goto L12
        L2e:
            java.lang.AssertionError r7 = new java.lang.AssertionError
            r7.<init>()
            throw r7
        L34:
            throw r0
    }

    @Override
    public long readHexadecimalUnsignedLong() {
            r5 = this;
            r0 = 1
            r5.require(r0)
            r0 = 0
        L6:
            int r1 = r0 + 1
            long r2 = (long) r1
            boolean r2 = r5.request(r2)
            if (r2 == 0) goto L59
            okio.Buffer r2 = r5.bufferField
            long r3 = (long) r0
            byte r2 = r2.getByte(r3)
            r3 = 48
            byte r3 = (byte) r3
            if (r2 < r3) goto L20
            r3 = 57
            byte r3 = (byte) r3
            if (r2 <= r3) goto L35
        L20:
            r3 = 97
            byte r3 = (byte) r3
            if (r2 < r3) goto L2a
            r3 = 102(0x66, float:1.43E-43)
            byte r3 = (byte) r3
            if (r2 <= r3) goto L35
        L2a:
            r3 = 65
            byte r3 = (byte) r3
            if (r2 < r3) goto L37
            r3 = 70
            byte r3 = (byte) r3
            if (r2 <= r3) goto L35
            goto L37
        L35:
            r0 = r1
            goto L6
        L37:
            if (r0 == 0) goto L3a
            goto L59
        L3a:
            java.lang.NumberFormatException r0 = new java.lang.NumberFormatException
            r1 = 16
            int r1 = kotlin.text.CharsKt.checkRadix(r1)
            int r1 = kotlin.text.CharsKt.checkRadix(r1)
            java.lang.String r1 = java.lang.Integer.toString(r2, r1)
            java.lang.String r2 = "java.lang.Integer.toStri…(this, checkRadix(radix))"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            java.lang.String r2 = "Expected leading [0-9a-fA-F] character but was 0x"
            java.lang.String r1 = kotlin.jvm.internal.Intrinsics.stringPlus(r2, r1)
            r0.<init>(r1)
            throw r0
        L59:
            okio.Buffer r0 = r5.bufferField
            long r0 = r0.readHexadecimalUnsignedLong()
            return r0
    }

    @Override
    public int readInt() {
            r2 = this;
            r0 = 4
            r2.require(r0)
            okio.Buffer r0 = r2.bufferField
            int r0 = r0.readInt()
            return r0
    }

    @Override
    public int readIntLe() {
            r2 = this;
            r0 = 4
            r2.require(r0)
            okio.Buffer r0 = r2.bufferField
            int r0 = r0.readIntLe()
            return r0
    }

    @Override
    public long readLong() {
            r2 = this;
            r0 = 8
            r2.require(r0)
            okio.Buffer r0 = r2.bufferField
            long r0 = r0.readLong()
            return r0
    }

    @Override
    public long readLongLe() {
            r2 = this;
            r0 = 8
            r2.require(r0)
            okio.Buffer r0 = r2.bufferField
            long r0 = r0.readLongLe()
            return r0
    }

    @Override
    public short readShort() {
            r2 = this;
            r0 = 2
            r2.require(r0)
            okio.Buffer r0 = r2.bufferField
            short r0 = r0.readShort()
            return r0
    }

    @Override
    public short readShortLe() {
            r2 = this;
            r0 = 2
            r2.require(r0)
            okio.Buffer r0 = r2.bufferField
            short r0 = r0.readShortLe()
            return r0
    }

    @Override
    public java.lang.String readString(long r2, java.nio.charset.Charset r4) {
            r1 = this;
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            r1.require(r2)
            okio.Buffer r0 = r1.bufferField
            java.lang.String r2 = r0.readString(r2, r4)
            return r2
    }

    @Override
    public java.lang.String readString(java.nio.charset.Charset r3) {
            r2 = this;
            java.lang.String r0 = "charset"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
            okio.Buffer r0 = r2.bufferField
            okio.Source r1 = r2.source
            r0.writeAll(r1)
            okio.Buffer r0 = r2.bufferField
            java.lang.String r3 = r0.readString(r3)
            return r3
    }

    @Override
    public java.lang.String readUtf8() {
            r2 = this;
            okio.Buffer r0 = r2.bufferField
            okio.Source r1 = r2.source
            r0.writeAll(r1)
            okio.Buffer r0 = r2.bufferField
            java.lang.String r0 = r0.readUtf8()
            return r0
    }

    @Override
    public java.lang.String readUtf8(long r2) {
            r1 = this;
            r1.require(r2)
            okio.Buffer r0 = r1.bufferField
            java.lang.String r2 = r0.readUtf8(r2)
            return r2
    }

    @Override
    public int readUtf8CodePoint() {
            r3 = this;
            r0 = 1
            r3.require(r0)
            okio.Buffer r0 = r3.bufferField
            r1 = 0
            byte r0 = r0.getByte(r1)
            r1 = r0 & 224(0xe0, float:3.14E-43)
            r2 = 192(0xc0, float:2.69E-43)
            if (r1 != r2) goto L19
            r0 = 2
            r3.require(r0)
            goto L30
        L19:
            r1 = r0 & 240(0xf0, float:3.36E-43)
            r2 = 224(0xe0, float:3.14E-43)
            if (r1 != r2) goto L25
            r0 = 3
            r3.require(r0)
            goto L30
        L25:
            r0 = r0 & 248(0xf8, float:3.48E-43)
            r1 = 240(0xf0, float:3.36E-43)
            if (r0 != r1) goto L30
            r0 = 4
            r3.require(r0)
        L30:
            okio.Buffer r0 = r3.bufferField
            int r0 = r0.readUtf8CodePoint()
            return r0
    }

    @Override
    public java.lang.String readUtf8Line() {
            r4 = this;
            r0 = 10
            byte r0 = (byte) r0
            long r0 = r4.indexOf(r0)
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L28
            okio.Buffer r0 = r4.bufferField
            long r0 = r0.size()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L24
            okio.Buffer r0 = r4.bufferField
            long r0 = r0.size()
            java.lang.String r0 = r4.readUtf8(r0)
            goto L2e
        L24:
            r0 = 0
            java.lang.String r0 = (java.lang.String) r0
            goto L2e
        L28:
            okio.Buffer r2 = r4.bufferField
            java.lang.String r0 = okio.internal._BufferKt.readUtf8Line(r2, r0)
        L2e:
            return r0
    }

    @Override
    public java.lang.String readUtf8LineStrict() {
            r2 = this;
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            java.lang.String r0 = r2.readUtf8LineStrict(r0)
            return r0
    }

    @Override
    public java.lang.String readUtf8LineStrict(long r14) {
            r13 = this;
            r0 = 0
            int r0 = (r14 > r0 ? 1 : (r14 == r0 ? 0 : -1))
            if (r0 < 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            if (r0 == 0) goto Lae
            r0 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r2 = (r14 > r0 ? 1 : (r14 == r0 ? 0 : -1))
            r3 = 1
            if (r2 != 0) goto L18
            r5 = r0
            goto L1a
        L18:
            long r5 = r14 + r3
        L1a:
            r2 = 10
            byte r2 = (byte) r2
            r9 = 0
            r7 = r13
            r8 = r2
            r11 = r5
            long r7 = r7.indexOf(r8, r9, r11)
            r9 = -1
            int r9 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r9 == 0) goto L33
            okio.Buffer r14 = r13.bufferField
            java.lang.String r14 = okio.internal._BufferKt.readUtf8Line(r14, r7)
            goto L5f
        L33:
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 >= 0) goto L60
            boolean r0 = r13.request(r5)
            if (r0 == 0) goto L60
            okio.Buffer r0 = r13.bufferField
            long r7 = r5 - r3
            byte r0 = r0.getByte(r7)
            r1 = 13
            byte r1 = (byte) r1
            if (r0 != r1) goto L60
            long r3 = r3 + r5
            boolean r0 = r13.request(r3)
            if (r0 == 0) goto L60
            okio.Buffer r0 = r13.bufferField
            byte r0 = r0.getByte(r5)
            if (r0 != r2) goto L60
            okio.Buffer r14 = r13.bufferField
            java.lang.String r14 = okio.internal._BufferKt.readUtf8Line(r14, r5)
        L5f:
            return r14
        L60:
            okio.Buffer r6 = new okio.Buffer
            r6.<init>()
            okio.Buffer r0 = r13.bufferField
            r2 = 0
            r1 = 32
            long r4 = r0.size()
            long r7 = (long) r1
            long r4 = java.lang.Math.min(r7, r4)
            r1 = r6
            r0.copyTo(r1, r2, r4)
            java.io.EOFException r0 = new java.io.EOFException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "\\n not found: limit="
            r1.append(r2)
            okio.Buffer r2 = r13.bufferField
            long r2 = r2.size()
            long r14 = java.lang.Math.min(r2, r14)
            r1.append(r14)
            java.lang.String r14 = " content="
            r1.append(r14)
            okio.ByteString r14 = r6.readByteString()
            java.lang.String r14 = r14.hex()
            r1.append(r14)
            r14 = 8230(0x2026, float:1.1533E-41)
            r1.append(r14)
            java.lang.String r14 = r1.toString()
            r0.<init>(r14)
            throw r0
        Lae:
            java.lang.Long r14 = java.lang.Long.valueOf(r14)
            java.lang.String r15 = "limit < 0: "
            java.lang.String r14 = kotlin.jvm.internal.Intrinsics.stringPlus(r15, r14)
            java.lang.IllegalArgumentException r15 = new java.lang.IllegalArgumentException
            java.lang.String r14 = r14.toString()
            r15.<init>(r14)
            java.lang.Throwable r15 = (java.lang.Throwable) r15
            throw r15
    }

    @Override
    public boolean request(long r8) {
            r7 = this;
            r0 = 0
            int r0 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            r1 = 0
            r2 = 1
            if (r0 < 0) goto La
            r0 = r2
            goto Lb
        La:
            r0 = r1
        Lb:
            if (r0 == 0) goto L3d
            boolean r0 = r7.closed
            r0 = r0 ^ r2
            if (r0 == 0) goto L2f
        L12:
            okio.Buffer r0 = r7.bufferField
            long r3 = r0.size()
            int r0 = (r3 > r8 ? 1 : (r3 == r8 ? 0 : -1))
            if (r0 >= 0) goto L2d
            okio.Source r0 = r7.source
            okio.Buffer r3 = r7.bufferField
            r4 = 8192(0x2000, double:4.0474E-320)
            long r3 = r0.read(r3, r4)
            r5 = -1
            int r0 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r0 != 0) goto L12
            goto L2e
        L2d:
            r1 = r2
        L2e:
            return r1
        L2f:
            java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
            java.lang.String r9 = "closed"
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            java.lang.Throwable r8 = (java.lang.Throwable) r8
            throw r8
        L3d:
            java.lang.Long r8 = java.lang.Long.valueOf(r8)
            java.lang.String r9 = "byteCount < 0: "
            java.lang.String r8 = kotlin.jvm.internal.Intrinsics.stringPlus(r9, r8)
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.String r8 = r8.toString()
            r9.<init>(r8)
            java.lang.Throwable r9 = (java.lang.Throwable) r9
            throw r9
    }

    @Override
    public void require(long r1) {
            r0 = this;
            boolean r1 = r0.request(r1)
            if (r1 == 0) goto L7
            return
        L7:
            java.io.EOFException r1 = new java.io.EOFException
            r1.<init>()
            throw r1
    }

    @Override
    public int select(okio.Options r9) {
            r8 = this;
            java.lang.String r0 = "options"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r9, r0)
            boolean r0 = r8.closed
            r1 = 1
            r0 = r0 ^ r1
            if (r0 == 0) goto L3c
        Lb:
            okio.Buffer r0 = r8.bufferField
            int r0 = okio.internal._BufferKt.selectPrefix(r0, r9, r1)
            r2 = -2
            r3 = -1
            if (r0 == r2) goto L2a
            if (r0 == r3) goto L28
            okio.ByteString[] r9 = r9.getByteStrings$okio()
            r9 = r9[r0]
            int r9 = r9.size()
            okio.Buffer r1 = r8.bufferField
            long r2 = (long) r9
            r1.skip(r2)
            goto L3b
        L28:
            r0 = r3
            goto L3b
        L2a:
            okio.Source r0 = r8.source
            okio.Buffer r2 = r8.bufferField
            r4 = 8192(0x2000, double:4.0474E-320)
            long r4 = r0.read(r2, r4)
            r6 = -1
            int r0 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r0 != 0) goto Lb
            goto L28
        L3b:
            return r0
        L3c:
            java.lang.IllegalStateException r9 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            java.lang.String r0 = r0.toString()
            r9.<init>(r0)
            java.lang.Throwable r9 = (java.lang.Throwable) r9
            throw r9
    }

    @Override
    public void skip(long r5) {
            r4 = this;
            boolean r0 = r4.closed
            r0 = r0 ^ 1
            if (r0 == 0) goto L3f
        L6:
            r0 = 0
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 <= 0) goto L3e
            okio.Buffer r2 = r4.bufferField
            long r2 = r2.size()
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 != 0) goto L2d
            okio.Source r0 = r4.source
            okio.Buffer r1 = r4.bufferField
            r2 = 8192(0x2000, double:4.0474E-320)
            long r0 = r0.read(r1, r2)
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L27
            goto L2d
        L27:
            java.io.EOFException r5 = new java.io.EOFException
            r5.<init>()
            throw r5
        L2d:
            okio.Buffer r0 = r4.bufferField
            long r0 = r0.size()
            long r0 = java.lang.Math.min(r5, r0)
            okio.Buffer r2 = r4.bufferField
            r2.skip(r0)
            long r5 = r5 - r0
            goto L6
        L3e:
            return
        L3f:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r6 = "closed"
            java.lang.String r6 = r6.toString()
            r5.<init>(r6)
            java.lang.Throwable r5 = (java.lang.Throwable) r5
            throw r5
    }

    @Override
    public okio.Timeout timeout() {
            r1 = this;
            okio.Source r0 = r1.source
            okio.Timeout r0 = r0.timeout()
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "buffer("
            r0.append(r1)
            okio.Source r1 = r2.source
            r0.append(r1)
            r1 = 41
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
