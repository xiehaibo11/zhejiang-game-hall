package okio;

@kotlin.Metadata(d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0002\b\u0003\n\u0002\u0010\b\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0012\n\u0002\b\u0007\n\u0002\u0018\u0002\n\u0002\b\b\b&\u0018\u00002\u00060\u0001j\u0002`\u0002:\u0002()B\r\u0012\u0006\u0010\u0003\u001a\u00020\u0004¢\u0006\u0002\u0010\u0005J\u0006\u0010\u000b\u001a\u00020\fJ\u0006\u0010\r\u001a\u00020\u000eJ\u0006\u0010\u000f\u001a\u00020\u000eJ\u000e\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\fJ\u000e\u0010\u0010\u001a\u00020\u00112\u0006\u0010\u0013\u001a\u00020\u0014J\b\u0010\u0015\u001a\u00020\u000eH$J\b\u0010\u0016\u001a\u00020\u000eH$J(\u0010\u0017\u001a\u00020\b2\u0006\u0010\u0018\u001a\u00020\u00112\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\b2\u0006\u0010\u001c\u001a\u00020\bH$J\u0010\u0010\u001d\u001a\u00020\u000e2\u0006\u0010\u001e\u001a\u00020\u0011H$J\b\u0010\u001f\u001a\u00020\u0011H$J(\u0010 \u001a\u00020\u000e2\u0006\u0010\u0018\u001a\u00020\u00112\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\b2\u0006\u0010\u001c\u001a\u00020\bH$J&\u0010!\u001a\u00020\b2\u0006\u0010\u0018\u001a\u00020\u00112\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\b2\u0006\u0010\u001c\u001a\u00020\bJ\u001e\u0010!\u001a\u00020\u00112\u0006\u0010\u0018\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\"2\u0006\u0010\u001c\u001a\u00020\u0011J \u0010#\u001a\u00020\u00112\u0006\u0010\u0018\u001a\u00020\u00112\u0006\u0010\u0012\u001a\u00020\"2\u0006\u0010\u001c\u001a\u00020\u0011H\u0002J\u0016\u0010$\u001a\u00020\u000e2\u0006\u0010\u0012\u001a\u00020\f2\u0006\u0010\u0010\u001a\u00020\u0011J\u0016\u0010$\u001a\u00020\u000e2\u0006\u0010\u0013\u001a\u00020\u00142\u0006\u0010\u0010\u001a\u00020\u0011J\u000e\u0010%\u001a\u00020\u000e2\u0006\u0010\u001e\u001a\u00020\u0011J\u0010\u0010\u0012\u001a\u00020\f2\b\b\u0002\u0010\u0018\u001a\u00020\u0011J\u0006\u0010\u001e\u001a\u00020\u0011J\u0010\u0010\u0013\u001a\u00020\u00142\b\b\u0002\u0010\u0018\u001a\u00020\u0011J&\u0010&\u001a\u00020\u000e2\u0006\u0010\u0018\u001a\u00020\u00112\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\b2\u0006\u0010\u001c\u001a\u00020\bJ\u001e\u0010&\u001a\u00020\u000e2\u0006\u0010\u0018\u001a\u00020\u00112\u0006\u0010\u0013\u001a\u00020\"2\u0006\u0010\u001c\u001a\u00020\u0011J \u0010'\u001a\u00020\u000e2\u0006\u0010\u0018\u001a\u00020\u00112\u0006\u0010\u0013\u001a\u00020\"2\u0006\u0010\u001c\u001a\u00020\u0011H\u0002R\u000e\u0010\u0006\u001a\u00020\u0004X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u000e¢\u0006\u0002\n\u0000R\u0011\u0010\u0003\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\n¨\u0006*"}, d2 = {"Lokio/FileHandle;", "Ljava/io/Closeable;", "Lokio/Closeable;", "readWrite", "", "(Z)V", "closed", "openStreamCount", "", "getReadWrite", "()Z", "appendingSink", "Lokio/Sink;", "close", "", "flush", "position", "", "sink", "source", "Lokio/Source;", "protectedClose", "protectedFlush", "protectedRead", "fileOffset", "array", "", "arrayOffset", "byteCount", "protectedResize", "size", "protectedSize", "protectedWrite", "read", "Lokio/Buffer;", "readNoCloseCheck", "reposition", "resize", "write", "writeNoCloseCheck", "FileHandleSink", "FileHandleSource", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
public abstract class FileHandle implements java.io.Closeable {
    private boolean closed;
    private int openStreamCount;
    private final boolean readWrite;

    @kotlin.Metadata(d1 = {"\u00008\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u000b\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0002\u0018\u00002\u00020\u0001B\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J\b\u0010\u0013\u001a\u00020\u0014H\u0016J\b\u0010\u0015\u001a\u00020\u0014H\u0016J\b\u0010\u0016\u001a\u00020\u0017H\u0016J\u0018\u0010\u0018\u001a\u00020\u00142\u0006\u0010\u0019\u001a\u00020\u001a2\u0006\u0010\u001b\u001a\u00020\u0005H\u0016R\u001a\u0010\u0007\u001a\u00020\bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\t\u0010\n\"\u0004\b\u000b\u0010\fR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u001a\u0010\u0004\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000f\u0010\u0010\"\u0004\b\u0011\u0010\u0012¨\u0006\u001c"}, d2 = {"Lokio/FileHandle$FileHandleSink;", "Lokio/Sink;", "fileHandle", "Lokio/FileHandle;", "position", "", "(Lokio/FileHandle;J)V", "closed", "", "getClosed", "()Z", "setClosed", "(Z)V", "getFileHandle", "()Lokio/FileHandle;", "getPosition", "()J", "setPosition", "(J)V", "close", "", "flush", "timeout", "Lokio/Timeout;", "write", "source", "Lokio/Buffer;", "byteCount", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
    private static final class FileHandleSink implements okio.Sink {
        private boolean closed;
        private final okio.FileHandle fileHandle;
        private long position;

        public FileHandleSink(okio.FileHandle r2, long r3) {
                r1 = this;
                java.lang.String r0 = "fileHandle"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.<init>()
                r1.fileHandle = r2
                r1.position = r3
                return
        }

        @Override
        public void close() {
                r3 = this;
                boolean r0 = r3.closed
                if (r0 == 0) goto L5
                return
            L5:
                r0 = 1
                r3.closed = r0
                okio.FileHandle r0 = r3.fileHandle
                monitor-enter(r0)
                okio.FileHandle r1 = r3.getFileHandle()     // Catch: java.lang.Throwable -> L38
                int r2 = okio.FileHandle.access$getOpenStreamCount$p(r1)     // Catch: java.lang.Throwable -> L38
                int r2 = r2 + (-1)
                okio.FileHandle.access$setOpenStreamCount$p(r1, r2)     // Catch: java.lang.Throwable -> L38
                okio.FileHandle r1 = r3.getFileHandle()     // Catch: java.lang.Throwable -> L38
                int r1 = okio.FileHandle.access$getOpenStreamCount$p(r1)     // Catch: java.lang.Throwable -> L38
                if (r1 != 0) goto L36
                okio.FileHandle r1 = r3.getFileHandle()     // Catch: java.lang.Throwable -> L38
                boolean r1 = okio.FileHandle.access$getClosed$p(r1)     // Catch: java.lang.Throwable -> L38
                if (r1 != 0) goto L2d
                goto L36
            L2d:
                kotlin.Unit r1 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L38
                monitor-exit(r0)
                okio.FileHandle r0 = r3.fileHandle
                r0.protectedClose()
                return
            L36:
                monitor-exit(r0)
                return
            L38:
                r1 = move-exception
                monitor-exit(r0)
                throw r1
        }

        @Override
        public void flush() {
                r2 = this;
                boolean r0 = r2.closed
                r0 = r0 ^ 1
                if (r0 == 0) goto Lc
                okio.FileHandle r0 = r2.fileHandle
                r0.protectedFlush()
                return
            Lc:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r1 = "closed"
                java.lang.String r1 = r1.toString()
                r0.<init>(r1)
                java.lang.Throwable r0 = (java.lang.Throwable) r0
                throw r0
        }

        public final boolean getClosed() {
                r1 = this;
                boolean r0 = r1.closed
                return r0
        }

        public final okio.FileHandle getFileHandle() {
                r1 = this;
                okio.FileHandle r0 = r1.fileHandle
                return r0
        }

        public final long getPosition() {
                r2 = this;
                long r0 = r2.position
                return r0
        }

        public final void setClosed(boolean r1) {
                r0 = this;
                r0.closed = r1
                return
        }

        public final void setPosition(long r1) {
                r0 = this;
                r0.position = r1
                return
        }

        @Override
        public okio.Timeout timeout() {
                r1 = this;
                okio.Timeout r0 = okio.Timeout.NONE
                return r0
        }

        @Override
        public void write(okio.Buffer r8, long r9) {
                r7 = this;
                java.lang.String r0 = "source"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                boolean r0 = r7.closed
                r0 = r0 ^ 1
                if (r0 == 0) goto L1a
                okio.FileHandle r1 = r7.fileHandle
                long r2 = r7.position
                r4 = r8
                r5 = r9
                okio.FileHandle.access$writeNoCloseCheck(r1, r2, r4, r5)
                long r0 = r7.position
                long r0 = r0 + r9
                r7.position = r0
                return
            L1a:
                java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
                java.lang.String r9 = "closed"
                java.lang.String r9 = r9.toString()
                r8.<init>(r9)
                java.lang.Throwable r8 = (java.lang.Throwable) r8
                throw r8
        }
    }

    @kotlin.Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\u000b\n\u0002\b\u000b\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\b\u0002\u0018\u00002\u00020\u0001B\u0015\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\u0006\u0010\u0004\u001a\u00020\u0005¢\u0006\u0002\u0010\u0006J\b\u0010\u0013\u001a\u00020\u0014H\u0016J\u0018\u0010\u0015\u001a\u00020\u00052\u0006\u0010\u0016\u001a\u00020\u00172\u0006\u0010\u0018\u001a\u00020\u0005H\u0016J\b\u0010\u0019\u001a\u00020\u001aH\u0016R\u001a\u0010\u0007\u001a\u00020\bX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\t\u0010\n\"\u0004\b\u000b\u0010\fR\u0011\u0010\u0002\u001a\u00020\u0003¢\u0006\b\n\u0000\u001a\u0004\b\r\u0010\u000eR\u001a\u0010\u0004\u001a\u00020\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u000f\u0010\u0010\"\u0004\b\u0011\u0010\u0012¨\u0006\u001b"}, d2 = {"Lokio/FileHandle$FileHandleSource;", "Lokio/Source;", "fileHandle", "Lokio/FileHandle;", "position", "", "(Lokio/FileHandle;J)V", "closed", "", "getClosed", "()Z", "setClosed", "(Z)V", "getFileHandle", "()Lokio/FileHandle;", "getPosition", "()J", "setPosition", "(J)V", "close", "", "read", "sink", "Lokio/Buffer;", "byteCount", "timeout", "Lokio/Timeout;", "okio"}, k = 1, mv = {1, 5, 1}, xi = 48)
    private static final class FileHandleSource implements okio.Source {
        private boolean closed;
        private final okio.FileHandle fileHandle;
        private long position;

        public FileHandleSource(okio.FileHandle r2, long r3) {
                r1 = this;
                java.lang.String r0 = "fileHandle"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r2, r0)
                r1.<init>()
                r1.fileHandle = r2
                r1.position = r3
                return
        }

        @Override
        public void close() {
                r3 = this;
                boolean r0 = r3.closed
                if (r0 == 0) goto L5
                return
            L5:
                r0 = 1
                r3.closed = r0
                okio.FileHandle r0 = r3.fileHandle
                monitor-enter(r0)
                okio.FileHandle r1 = r3.getFileHandle()     // Catch: java.lang.Throwable -> L38
                int r2 = okio.FileHandle.access$getOpenStreamCount$p(r1)     // Catch: java.lang.Throwable -> L38
                int r2 = r2 + (-1)
                okio.FileHandle.access$setOpenStreamCount$p(r1, r2)     // Catch: java.lang.Throwable -> L38
                okio.FileHandle r1 = r3.getFileHandle()     // Catch: java.lang.Throwable -> L38
                int r1 = okio.FileHandle.access$getOpenStreamCount$p(r1)     // Catch: java.lang.Throwable -> L38
                if (r1 != 0) goto L36
                okio.FileHandle r1 = r3.getFileHandle()     // Catch: java.lang.Throwable -> L38
                boolean r1 = okio.FileHandle.access$getClosed$p(r1)     // Catch: java.lang.Throwable -> L38
                if (r1 != 0) goto L2d
                goto L36
            L2d:
                kotlin.Unit r1 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L38
                monitor-exit(r0)
                okio.FileHandle r0 = r3.fileHandle
                r0.protectedClose()
                return
            L36:
                monitor-exit(r0)
                return
            L38:
                r1 = move-exception
                monitor-exit(r0)
                throw r1
        }

        public final boolean getClosed() {
                r1 = this;
                boolean r0 = r1.closed
                return r0
        }

        public final okio.FileHandle getFileHandle() {
                r1 = this;
                okio.FileHandle r0 = r1.fileHandle
                return r0
        }

        public final long getPosition() {
                r2 = this;
                long r0 = r2.position
                return r0
        }

        @Override
        public long read(okio.Buffer r8, long r9) {
                r7 = this;
                java.lang.String r0 = "sink"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r8, r0)
                boolean r0 = r7.closed
                r0 = r0 ^ 1
                if (r0 == 0) goto L21
                okio.FileHandle r1 = r7.fileHandle
                long r2 = r7.position
                r4 = r8
                r5 = r9
                long r8 = okio.FileHandle.access$readNoCloseCheck(r1, r2, r4, r5)
                r0 = -1
                int r10 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
                if (r10 == 0) goto L20
                long r0 = r7.position
                long r0 = r0 + r8
                r7.position = r0
            L20:
                return r8
            L21:
                java.lang.IllegalStateException r8 = new java.lang.IllegalStateException
                java.lang.String r9 = "closed"
                java.lang.String r9 = r9.toString()
                r8.<init>(r9)
                java.lang.Throwable r8 = (java.lang.Throwable) r8
                throw r8
        }

        public final void setClosed(boolean r1) {
                r0 = this;
                r0.closed = r1
                return
        }

        public final void setPosition(long r1) {
                r0 = this;
                r0.position = r1
                return
        }

        @Override
        public okio.Timeout timeout() {
                r1 = this;
                okio.Timeout r0 = okio.Timeout.NONE
                return r0
        }
    }

    public FileHandle(boolean r1) {
            r0 = this;
            r0.<init>()
            r0.readWrite = r1
            return
    }

    public static final boolean access$getClosed$p(okio.FileHandle r0) {
            boolean r0 = r0.closed
            return r0
    }

    public static final int access$getOpenStreamCount$p(okio.FileHandle r0) {
            int r0 = r0.openStreamCount
            return r0
    }

    public static final long access$readNoCloseCheck(okio.FileHandle r0, long r1, okio.Buffer r3, long r4) {
            long r0 = r0.readNoCloseCheck(r1, r3, r4)
            return r0
    }

    public static final void access$setOpenStreamCount$p(okio.FileHandle r0, int r1) {
            r0.openStreamCount = r1
            return
    }

    public static final void access$writeNoCloseCheck(okio.FileHandle r0, long r1, okio.Buffer r3, long r4) {
            r0.writeNoCloseCheck(r1, r3, r4)
            return
    }

    private final long readNoCloseCheck(long r16, okio.Buffer r18, long r19) {
            r15 = this;
            r0 = r18
            r1 = 0
            int r1 = (r19 > r1 ? 1 : (r19 == r1 ? 0 : -1))
            r2 = 1
            if (r1 < 0) goto Lb
            r1 = r2
            goto Lc
        Lb:
            r1 = 0
        Lc:
            if (r1 == 0) goto L5c
            long r3 = r16 + r19
            r11 = r16
        L12:
            int r1 = (r11 > r3 ? 1 : (r11 == r3 ? 0 : -1))
            if (r1 >= 0) goto L59
            okio.Segment r1 = r0.writableSegment$okio(r2)
            byte[] r8 = r1.data
            int r9 = r1.limit
            long r5 = r3 - r11
            int r7 = r1.limit
            int r7 = 8192 - r7
            long r13 = (long) r7
            long r5 = java.lang.Math.min(r5, r13)
            int r10 = (int) r5
            r5 = r15
            r6 = r11
            int r5 = r5.protectedRead(r6, r8, r9, r10)
            r6 = -1
            if (r5 != r6) goto L49
            int r2 = r1.pos
            int r3 = r1.limit
            if (r2 != r3) goto L42
            okio.Segment r2 = r1.pop()
            r0.head = r2
            okio.SegmentPool.recycle(r1)
        L42:
            int r0 = (r16 > r11 ? 1 : (r16 == r11 ? 0 : -1))
            if (r0 != 0) goto L59
            r0 = -1
            return r0
        L49:
            int r6 = r1.limit
            int r6 = r6 + r5
            r1.limit = r6
            long r5 = (long) r5
            long r11 = r11 + r5
            long r7 = r18.size()
            long r7 = r7 + r5
            r0.setSize$okio(r7)
            goto L12
        L59:
            long r11 = r11 - r16
            return r11
        L5c:
            java.lang.Long r0 = java.lang.Long.valueOf(r19)
            java.lang.String r1 = "byteCount < 0: "
            java.lang.String r0 = kotlin.jvm.internal.Intrinsics.stringPlus(r1, r0)
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = r0.toString()
            r1.<init>(r0)
            java.lang.Throwable r1 = (java.lang.Throwable) r1
            throw r1
    }

    public static okio.Sink sink$default(okio.FileHandle r0, long r1, int r3, java.lang.Object r4) throws java.io.IOException {
            if (r4 != 0) goto Ld
            r3 = r3 & 1
            if (r3 == 0) goto L8
            r1 = 0
        L8:
            okio.Sink r0 = r0.sink(r1)
            return r0
        Ld:
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Super calls with default arguments not supported in this target, function: sink"
            r0.<init>(r1)
            throw r0
    }

    public static okio.Source source$default(okio.FileHandle r0, long r1, int r3, java.lang.Object r4) throws java.io.IOException {
            if (r4 != 0) goto Ld
            r3 = r3 & 1
            if (r3 == 0) goto L8
            r1 = 0
        L8:
            okio.Source r0 = r0.source(r1)
            return r0
        Ld:
            java.lang.UnsupportedOperationException r0 = new java.lang.UnsupportedOperationException
            java.lang.String r1 = "Super calls with default arguments not supported in this target, function: source"
            r0.<init>(r1)
            throw r0
    }

    private final void writeNoCloseCheck(long r9, okio.Buffer r11, long r12) {
            r8 = this;
            long r0 = r11.size()
            r2 = 0
            r4 = r12
            okio._UtilKt.checkOffsetAndCount(r0, r2, r4)
            long r12 = r12 + r9
        Lb:
            int r0 = (r9 > r12 ? 1 : (r9 == r12 ? 0 : -1))
            if (r0 >= 0) goto L4a
            okio.Segment r6 = r11.head
            kotlin.jvm.internal.Intrinsics.checkNotNull(r6)
            long r0 = r12 - r9
            int r2 = r6.limit
            int r3 = r6.pos
            int r2 = r2 - r3
            long r2 = (long) r2
            long r0 = java.lang.Math.min(r0, r2)
            int r7 = (int) r0
            byte[] r3 = r6.data
            int r4 = r6.pos
            r0 = r8
            r1 = r9
            r5 = r7
            r0.protectedWrite(r1, r3, r4, r5)
            int r0 = r6.pos
            int r0 = r0 + r7
            r6.pos = r0
            long r0 = (long) r7
            long r9 = r9 + r0
            long r2 = r11.size()
            long r2 = r2 - r0
            r11.setSize$okio(r2)
            int r0 = r6.pos
            int r1 = r6.limit
            if (r0 != r1) goto Lb
            okio.Segment r0 = r6.pop()
            r11.head = r0
            okio.SegmentPool.recycle(r6)
            goto Lb
        L4a:
            return
    }

    public final okio.Sink appendingSink() throws java.io.IOException {
            r2 = this;
            long r0 = r2.size()
            okio.Sink r0 = r2.sink(r0)
            return r0
    }

    @Override
    public final void close() throws java.io.IOException {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.closed     // Catch: java.lang.Throwable -> L17
            if (r0 == 0) goto L7
            monitor-exit(r1)
            return
        L7:
            r0 = 1
            r1.closed = r0     // Catch: java.lang.Throwable -> L17
            int r0 = r1.openStreamCount     // Catch: java.lang.Throwable -> L17
            if (r0 == 0) goto L10
            monitor-exit(r1)
            return
        L10:
            kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L17
            monitor-exit(r1)
            r1.protectedClose()
            return
        L17:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final void flush() throws java.io.IOException {
            r2 = this;
            boolean r0 = r2.readWrite
            if (r0 == 0) goto L23
            monitor-enter(r2)
            boolean r0 = r2.closed     // Catch: java.lang.Throwable -> L20
            r0 = r0 ^ 1
            if (r0 == 0) goto L12
            kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L20
            monitor-exit(r2)
            r2.protectedFlush()
            return
        L12:
            java.lang.String r0 = "closed"
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L20
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L20
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L20
            java.lang.Throwable r1 = (java.lang.Throwable) r1     // Catch: java.lang.Throwable -> L20
            throw r1     // Catch: java.lang.Throwable -> L20
        L20:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
        L23:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "file handle is read-only"
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            java.lang.Throwable r0 = (java.lang.Throwable) r0
            throw r0
    }

    public final boolean getReadWrite() {
            r1 = this;
            boolean r0 = r1.readWrite
            return r0
    }

    public final long position(okio.Sink r5) throws java.io.IOException {
            r4 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            boolean r0 = r5 instanceof okio.RealBufferedSink
            if (r0 == 0) goto L14
            okio.RealBufferedSink r5 = (okio.RealBufferedSink) r5
            okio.Buffer r0 = r5.bufferField
            long r0 = r0.size()
            okio.Sink r5 = r5.sink
            goto L16
        L14:
            r0 = 0
        L16:
            boolean r2 = r5 instanceof okio.FileHandle.FileHandleSink
            r3 = 1
            if (r2 == 0) goto L26
            r2 = r5
            okio.FileHandle$FileHandleSink r2 = (okio.FileHandle.FileHandleSink) r2
            okio.FileHandle r2 = r2.getFileHandle()
            if (r2 != r4) goto L26
            r2 = r3
            goto L27
        L26:
            r2 = 0
        L27:
            if (r2 == 0) goto L46
            okio.FileHandle$FileHandleSink r5 = (okio.FileHandle.FileHandleSink) r5
            boolean r2 = r5.getClosed()
            r2 = r2 ^ r3
            if (r2 == 0) goto L38
            long r2 = r5.getPosition()
            long r2 = r2 + r0
            return r2
        L38:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            java.lang.String r0 = r0.toString()
            r5.<init>(r0)
            java.lang.Throwable r5 = (java.lang.Throwable) r5
            throw r5
        L46:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "sink was not created by this FileHandle"
            java.lang.String r0 = r0.toString()
            r5.<init>(r0)
            java.lang.Throwable r5 = (java.lang.Throwable) r5
            throw r5
    }

    public final long position(okio.Source r5) throws java.io.IOException {
            r4 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
            boolean r0 = r5 instanceof okio.RealBufferedSource
            if (r0 == 0) goto L14
            okio.RealBufferedSource r5 = (okio.RealBufferedSource) r5
            okio.Buffer r0 = r5.bufferField
            long r0 = r0.size()
            okio.Source r5 = r5.source
            goto L16
        L14:
            r0 = 0
        L16:
            boolean r2 = r5 instanceof okio.FileHandle.FileHandleSource
            r3 = 1
            if (r2 == 0) goto L26
            r2 = r5
            okio.FileHandle$FileHandleSource r2 = (okio.FileHandle.FileHandleSource) r2
            okio.FileHandle r2 = r2.getFileHandle()
            if (r2 != r4) goto L26
            r2 = r3
            goto L27
        L26:
            r2 = 0
        L27:
            if (r2 == 0) goto L46
            okio.FileHandle$FileHandleSource r5 = (okio.FileHandle.FileHandleSource) r5
            boolean r2 = r5.getClosed()
            r2 = r2 ^ r3
            if (r2 == 0) goto L38
            long r2 = r5.getPosition()
            long r2 = r2 - r0
            return r2
        L38:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r0 = "closed"
            java.lang.String r0 = r0.toString()
            r5.<init>(r0)
            java.lang.Throwable r5 = (java.lang.Throwable) r5
            throw r5
        L46:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "source was not created by this FileHandle"
            java.lang.String r0 = r0.toString()
            r5.<init>(r0)
            java.lang.Throwable r5 = (java.lang.Throwable) r5
            throw r5
    }

    protected abstract void protectedClose() throws java.io.IOException;

    protected abstract void protectedFlush() throws java.io.IOException;

    protected abstract int protectedRead(long r1, byte[] r3, int r4, int r5) throws java.io.IOException;

    protected abstract void protectedResize(long r1) throws java.io.IOException;

    protected abstract long protectedSize() throws java.io.IOException;

    protected abstract void protectedWrite(long r1, byte[] r3, int r4, int r5) throws java.io.IOException;

    public final int read(long r2, byte[] r4, int r5, int r6) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "array"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            monitor-enter(r1)
            boolean r0 = r1.closed     // Catch: java.lang.Throwable -> L22
            r0 = r0 ^ 1
            if (r0 == 0) goto L14
            kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L22
            monitor-exit(r1)
            int r2 = r1.protectedRead(r2, r4, r5, r6)
            return r2
        L14:
            java.lang.String r2 = "closed"
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L22
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L22
            java.lang.Throwable r3 = (java.lang.Throwable) r3     // Catch: java.lang.Throwable -> L22
            throw r3     // Catch: java.lang.Throwable -> L22
        L22:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final long read(long r2, okio.Buffer r4, long r5) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            monitor-enter(r1)
            boolean r0 = r1.closed     // Catch: java.lang.Throwable -> L22
            r0 = r0 ^ 1
            if (r0 == 0) goto L14
            kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L22
            monitor-exit(r1)
            long r2 = r1.readNoCloseCheck(r2, r4, r5)
            return r2
        L14:
            java.lang.String r2 = "closed"
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L22
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L22
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L22
            java.lang.Throwable r3 = (java.lang.Throwable) r3     // Catch: java.lang.Throwable -> L22
            throw r3     // Catch: java.lang.Throwable -> L22
        L22:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final void reposition(okio.Sink r7, long r8) throws java.io.IOException {
            r6 = this;
            java.lang.String r0 = "sink"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r7, r0)
            boolean r0 = r7 instanceof okio.RealBufferedSink
            java.lang.String r1 = "closed"
            java.lang.String r2 = "sink was not created by this FileHandle"
            r3 = 0
            r4 = 1
            if (r0 == 0) goto L4b
            okio.RealBufferedSink r7 = (okio.RealBufferedSink) r7
            okio.Sink r0 = r7.sink
            boolean r5 = r0 instanceof okio.FileHandle.FileHandleSink
            if (r5 == 0) goto L21
            r5 = r0
            okio.FileHandle$FileHandleSink r5 = (okio.FileHandle.FileHandleSink) r5
            okio.FileHandle r5 = r5.getFileHandle()
            if (r5 != r6) goto L21
            r3 = r4
        L21:
            if (r3 == 0) goto L3f
            okio.FileHandle$FileHandleSink r0 = (okio.FileHandle.FileHandleSink) r0
            boolean r2 = r0.getClosed()
            r2 = r2 ^ r4
            if (r2 == 0) goto L33
            r7.emit()
            r0.setPosition(r8)
            goto L67
        L33:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.String r8 = r1.toString()
            r7.<init>(r8)
            java.lang.Throwable r7 = (java.lang.Throwable) r7
            throw r7
        L3f:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = r2.toString()
            r7.<init>(r8)
            java.lang.Throwable r7 = (java.lang.Throwable) r7
            throw r7
        L4b:
            boolean r0 = r7 instanceof okio.FileHandle.FileHandleSink
            if (r0 == 0) goto L59
            r0 = r7
            okio.FileHandle$FileHandleSink r0 = (okio.FileHandle.FileHandleSink) r0
            okio.FileHandle r0 = r0.getFileHandle()
            if (r0 != r6) goto L59
            r3 = r4
        L59:
            if (r3 == 0) goto L74
            okio.FileHandle$FileHandleSink r7 = (okio.FileHandle.FileHandleSink) r7
            boolean r0 = r7.getClosed()
            r0 = r0 ^ r4
            if (r0 == 0) goto L68
            r7.setPosition(r8)
        L67:
            return
        L68:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            java.lang.String r8 = r1.toString()
            r7.<init>(r8)
            java.lang.Throwable r7 = (java.lang.Throwable) r7
            throw r7
        L74:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = r2.toString()
            r7.<init>(r8)
            java.lang.Throwable r7 = (java.lang.Throwable) r7
            throw r7
    }

    public final void reposition(okio.Source r10, long r11) throws java.io.IOException {
            r9 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r10, r0)
            boolean r0 = r10 instanceof okio.RealBufferedSource
            java.lang.String r1 = "closed"
            java.lang.String r2 = "source was not created by this FileHandle"
            r3 = 0
            r4 = 1
            if (r0 == 0) goto L6d
            okio.RealBufferedSource r10 = (okio.RealBufferedSource) r10
            okio.Source r0 = r10.source
            boolean r5 = r0 instanceof okio.FileHandle.FileHandleSource
            if (r5 == 0) goto L22
            r5 = r0
            okio.FileHandle$FileHandleSource r5 = (okio.FileHandle.FileHandleSource) r5
            okio.FileHandle r5 = r5.getFileHandle()
            if (r5 != r9) goto L22
            r5 = r4
            goto L23
        L22:
            r5 = r3
        L23:
            if (r5 == 0) goto L61
            okio.FileHandle$FileHandleSource r0 = (okio.FileHandle.FileHandleSource) r0
            boolean r2 = r0.getClosed()
            r2 = r2 ^ r4
            if (r2 == 0) goto L55
            okio.Buffer r1 = r10.bufferField
            long r1 = r1.size()
            long r5 = r0.getPosition()
            long r5 = r5 - r1
            long r5 = r11 - r5
            r7 = 0
            int r7 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r7 > 0) goto L46
            int r1 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r1 >= 0) goto L46
            r3 = r4
        L46:
            if (r3 == 0) goto L4c
            r10.skip(r5)
            goto L89
        L4c:
            okio.Buffer r10 = r10.bufferField
            r10.clear()
            r0.setPosition(r11)
            goto L89
        L55:
            java.lang.IllegalStateException r10 = new java.lang.IllegalStateException
            java.lang.String r11 = r1.toString()
            r10.<init>(r11)
            java.lang.Throwable r10 = (java.lang.Throwable) r10
            throw r10
        L61:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r11 = r2.toString()
            r10.<init>(r11)
            java.lang.Throwable r10 = (java.lang.Throwable) r10
            throw r10
        L6d:
            boolean r0 = r10 instanceof okio.FileHandle.FileHandleSource
            if (r0 == 0) goto L7b
            r0 = r10
            okio.FileHandle$FileHandleSource r0 = (okio.FileHandle.FileHandleSource) r0
            okio.FileHandle r0 = r0.getFileHandle()
            if (r0 != r9) goto L7b
            r3 = r4
        L7b:
            if (r3 == 0) goto L96
            okio.FileHandle$FileHandleSource r10 = (okio.FileHandle.FileHandleSource) r10
            boolean r0 = r10.getClosed()
            r0 = r0 ^ r4
            if (r0 == 0) goto L8a
            r10.setPosition(r11)
        L89:
            return
        L8a:
            java.lang.IllegalStateException r10 = new java.lang.IllegalStateException
            java.lang.String r11 = r1.toString()
            r10.<init>(r11)
            java.lang.Throwable r10 = (java.lang.Throwable) r10
            throw r10
        L96:
            java.lang.IllegalArgumentException r10 = new java.lang.IllegalArgumentException
            java.lang.String r11 = r2.toString()
            r10.<init>(r11)
            java.lang.Throwable r10 = (java.lang.Throwable) r10
            throw r10
    }

    public final void resize(long r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.readWrite
            if (r0 == 0) goto L23
            monitor-enter(r1)
            boolean r0 = r1.closed     // Catch: java.lang.Throwable -> L20
            r0 = r0 ^ 1
            if (r0 == 0) goto L12
            kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L20
            monitor-exit(r1)
            r1.protectedResize(r2)
            return
        L12:
            java.lang.String r2 = "closed"
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L20
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L20
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L20
            java.lang.Throwable r3 = (java.lang.Throwable) r3     // Catch: java.lang.Throwable -> L20
            throw r3     // Catch: java.lang.Throwable -> L20
        L20:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        L23:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "file handle is read-only"
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    public final okio.Sink sink(long r2) throws java.io.IOException {
            r1 = this;
            boolean r0 = r1.readWrite
            if (r0 == 0) goto L2b
            monitor-enter(r1)
            boolean r0 = r1.closed     // Catch: java.lang.Throwable -> L28
            r0 = r0 ^ 1
            if (r0 == 0) goto L1a
            int r0 = r1.openStreamCount     // Catch: java.lang.Throwable -> L28
            int r0 = r0 + 1
            r1.openStreamCount = r0     // Catch: java.lang.Throwable -> L28
            monitor-exit(r1)
            okio.FileHandle$FileHandleSink r0 = new okio.FileHandle$FileHandleSink
            r0.<init>(r1, r2)
            okio.Sink r0 = (okio.Sink) r0
            return r0
        L1a:
            java.lang.String r2 = "closed"
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L28
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L28
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L28
            java.lang.Throwable r3 = (java.lang.Throwable) r3     // Catch: java.lang.Throwable -> L28
            throw r3     // Catch: java.lang.Throwable -> L28
        L28:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        L2b:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "file handle is read-only"
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    public final long size() throws java.io.IOException {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.closed     // Catch: java.lang.Throwable -> L1d
            r0 = r0 ^ 1
            if (r0 == 0) goto Lf
            kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L1d
            monitor-exit(r2)
            long r0 = r2.protectedSize()
            return r0
        Lf:
            java.lang.String r0 = "closed"
            java.lang.IllegalStateException r1 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L1d
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L1d
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L1d
            java.lang.Throwable r1 = (java.lang.Throwable) r1     // Catch: java.lang.Throwable -> L1d
            throw r1     // Catch: java.lang.Throwable -> L1d
        L1d:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final okio.Source source(long r2) throws java.io.IOException {
            r1 = this;
            monitor-enter(r1)
            boolean r0 = r1.closed     // Catch: java.lang.Throwable -> L24
            r0 = r0 ^ 1
            if (r0 == 0) goto L16
            int r0 = r1.openStreamCount     // Catch: java.lang.Throwable -> L24
            int r0 = r0 + 1
            r1.openStreamCount = r0     // Catch: java.lang.Throwable -> L24
            monitor-exit(r1)
            okio.FileHandle$FileHandleSource r0 = new okio.FileHandle$FileHandleSource
            r0.<init>(r1, r2)
            okio.Source r0 = (okio.Source) r0
            return r0
        L16:
            java.lang.String r2 = "closed"
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L24
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L24
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L24
            java.lang.Throwable r3 = (java.lang.Throwable) r3     // Catch: java.lang.Throwable -> L24
            throw r3     // Catch: java.lang.Throwable -> L24
        L24:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public final void write(long r2, okio.Buffer r4, long r5) throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = "source"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            boolean r0 = r1.readWrite
            if (r0 == 0) goto L28
            monitor-enter(r1)
            boolean r0 = r1.closed     // Catch: java.lang.Throwable -> L25
            r0 = r0 ^ 1
            if (r0 == 0) goto L17
            kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L25
            monitor-exit(r1)
            r1.writeNoCloseCheck(r2, r4, r5)
            return
        L17:
            java.lang.String r2 = "closed"
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L25
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L25
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L25
            java.lang.Throwable r3 = (java.lang.Throwable) r3     // Catch: java.lang.Throwable -> L25
            throw r3     // Catch: java.lang.Throwable -> L25
        L25:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        L28:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "file handle is read-only"
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }

    public final void write(long r2, byte[] r4, int r5, int r6) {
            r1 = this;
            java.lang.String r0 = "array"
            kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r4, r0)
            boolean r0 = r1.readWrite
            if (r0 == 0) goto L28
            monitor-enter(r1)
            boolean r0 = r1.closed     // Catch: java.lang.Throwable -> L25
            r0 = r0 ^ 1
            if (r0 == 0) goto L17
            kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L25
            monitor-exit(r1)
            r1.protectedWrite(r2, r4, r5, r6)
            return
        L17:
            java.lang.String r2 = "closed"
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException     // Catch: java.lang.Throwable -> L25
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L25
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L25
            java.lang.Throwable r3 = (java.lang.Throwable) r3     // Catch: java.lang.Throwable -> L25
            throw r3     // Catch: java.lang.Throwable -> L25
        L25:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
        L28:
            java.lang.IllegalStateException r2 = new java.lang.IllegalStateException
            java.lang.String r3 = "file handle is read-only"
            java.lang.String r3 = r3.toString()
            r2.<init>(r3)
            java.lang.Throwable r2 = (java.lang.Throwable) r2
            throw r2
    }
}
