package okhttp3.internal.cache2;

@kotlin.Metadata(d1 = {"\u0000L\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0002\b\n\n\u0002\u0010\b\n\u0002\b\u000e\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0002\b\t\u0018\u0000 :2\u00020\u0001:\u0002:;B3\b\u0002\u0012\b\u0010\u0002\u001a\u0004\u0018\u00010\u0003\u0012\b\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007\u0012\u0006\u0010\b\u001a\u00020\t\u0012\u0006\u0010\n\u001a\u00020\u0007¢\u0006\u0002\u0010\u000bJ\u000e\u00102\u001a\u0002032\u0006\u00104\u001a\u00020\u0007J\u0006\u0010\b\u001a\u00020\tJ\b\u00105\u001a\u0004\u0018\u00010\u0005J \u00106\u001a\u0002032\u0006\u00107\u001a\u00020\t2\u0006\u00104\u001a\u00020\u00072\u0006\u00108\u001a\u00020\u0007H\u0002J\u0010\u00109\u001a\u0002032\u0006\u00104\u001a\u00020\u0007H\u0002R\u0011\u0010\f\u001a\u00020\r¢\u0006\b\n\u0000\u001a\u0004\b\u000e\u0010\u000fR\u0011\u0010\n\u001a\u00020\u0007¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u001a\u0010\u0012\u001a\u00020\u0013X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0014\u0010\u0015\"\u0004\b\u0016\u0010\u0017R\u001c\u0010\u0002\u001a\u0004\u0018\u00010\u0003X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u0018\u0010\u0019\"\u0004\b\u001a\u0010\u001bR\u0011\u0010\u001c\u001a\u00020\u00138F¢\u0006\u0006\u001a\u0004\b\u001c\u0010\u0015R\u000e\u0010\b\u001a\u00020\tX\u0082\u0004¢\u0006\u0002\n\u0000R\u001a\u0010\u001d\u001a\u00020\u001eX\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b\u001f\u0010 \"\u0004\b!\u0010\"R\u001c\u0010\u0004\u001a\u0004\u0018\u00010\u0005X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b#\u0010$\"\u0004\b%\u0010&R\u0011\u0010'\u001a\u00020\r¢\u0006\b\n\u0000\u001a\u0004\b(\u0010\u000fR\u001a\u0010\u0006\u001a\u00020\u0007X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b)\u0010\u0011\"\u0004\b*\u0010+R\u001c\u0010,\u001a\u0004\u0018\u00010-X\u0086\u000e¢\u0006\u000e\n\u0000\u001a\u0004\b.\u0010/\"\u0004\b0\u00101¨\u0006<"}, d2 = {"Lokhttp3/internal/cache2/Relay;", "", "file", "Ljava/io/RandomAccessFile;", "upstream", "Lokio/Source;", "upstreamPos", "", "metadata", "Lokio/ByteString;", "bufferMaxSize", "(Ljava/io/RandomAccessFile;Lokio/Source;JLokio/ByteString;J)V", "buffer", "Lokio/Buffer;", "getBuffer", "()Lokio/Buffer;", "getBufferMaxSize", "()J", "complete", "", "getComplete", "()Z", "setComplete", "(Z)V", "getFile", "()Ljava/io/RandomAccessFile;", "setFile", "(Ljava/io/RandomAccessFile;)V", "isClosed", "sourceCount", "", "getSourceCount", "()I", "setSourceCount", "(I)V", "getUpstream", "()Lokio/Source;", "setUpstream", "(Lokio/Source;)V", "upstreamBuffer", "getUpstreamBuffer", "getUpstreamPos", "setUpstreamPos", "(J)V", "upstreamReader", "Ljava/lang/Thread;", "getUpstreamReader", "()Ljava/lang/Thread;", "setUpstreamReader", "(Ljava/lang/Thread;)V", "commit", "", "upstreamSize", "newSource", "writeHeader", "prefix", "metadataSize", "writeMetadata", "Companion", "RelaySource", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
public final class Relay {
    public static final okhttp3.internal.cache2.Relay.Companion Companion = null;
    private static final long FILE_HEADER_SIZE = 32;
    public static final okio.ByteString PREFIX_CLEAN = null;
    public static final okio.ByteString PREFIX_DIRTY = null;
    private static final int SOURCE_FILE = 2;
    private static final int SOURCE_UPSTREAM = 1;
    private final okio.Buffer buffer;
    private final long bufferMaxSize;
    private boolean complete;
    private java.io.RandomAccessFile file;
    private final okio.ByteString metadata;
    private int sourceCount;
    private okio.Source upstream;
    private final okio.Buffer upstreamBuffer;
    private long upstreamPos;
    private java.lang.Thread upstreamReader;

    @kotlin.Metadata(d1 = {"\u00006\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J&\u0010\u000b\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000e2\u0006\u0010\u000f\u001a\u00020\u00102\u0006\u0010\u0011\u001a\u00020\u00062\u0006\u0010\u0012\u001a\u00020\u0004J\u000e\u0010\u0013\u001a\u00020\f2\u0006\u0010\r\u001a\u00020\u000eR\u000e\u0010\u0003\u001a\u00020\u0004X\u0082T¢\u0006\u0002\n\u0000R\u0010\u0010\u0005\u001a\u00020\u00068\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u0010\u0010\u0007\u001a\u00020\u00068\u0006X\u0087\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\b\u001a\u00020\tX\u0082T¢\u0006\u0002\n\u0000R\u000e\u0010\n\u001a\u00020\tX\u0082T¢\u0006\u0002\n\u0000¨\u0006\u0014"}, d2 = {"Lokhttp3/internal/cache2/Relay$Companion;", "", "()V", "FILE_HEADER_SIZE", "", "PREFIX_CLEAN", "Lokio/ByteString;", "PREFIX_DIRTY", "SOURCE_FILE", "", "SOURCE_UPSTREAM", "edit", "Lokhttp3/internal/cache2/Relay;", "file", "Ljava/io/File;", "upstream", "Lokio/Source;", "metadata", "bufferMaxSize", "read", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public static final class Companion {
        private Companion() {
                r0 = this;
                r0.<init>()
                return
        }

        public Companion(kotlin.jvm.internal.DefaultConstructorMarker r1) {
                r0 = this;
                r0.<init>()
                return
        }

        public final okhttp3.internal.cache2.Relay edit(java.io.File r11, okio.Source r12, okio.ByteString r13, long r14) throws java.io.IOException {
                r10 = this;
                java.lang.String r0 = "file"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r11, r0)
                java.lang.String r0 = "upstream"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
                java.lang.String r0 = "metadata"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r13, r0)
                java.io.RandomAccessFile r0 = new java.io.RandomAccessFile
                java.lang.String r1 = "rw"
                r0.<init>(r11, r1)
                okhttp3.internal.cache2.Relay r11 = new okhttp3.internal.cache2.Relay
                r4 = 0
                r9 = 0
                r1 = r11
                r2 = r0
                r3 = r12
                r6 = r13
                r7 = r14
                r1.<init>(r2, r3, r4, r6, r7, r9)
                r12 = 0
                r0.setLength(r12)
                okio.ByteString r3 = okhttp3.internal.cache2.Relay.PREFIX_DIRTY
                r4 = -1
                r6 = -1
                r2 = r11
                okhttp3.internal.cache2.Relay.access$writeHeader(r2, r3, r4, r6)
                return r11
        }

        public final okhttp3.internal.cache2.Relay read(java.io.File r12) throws java.io.IOException {
                r11 = this;
                java.lang.String r0 = "file"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r12, r0)
                java.io.RandomAccessFile r2 = new java.io.RandomAccessFile
                java.lang.String r0 = "rw"
                r2.<init>(r12, r0)
                okhttp3.internal.cache2.FileOperator r12 = new okhttp3.internal.cache2.FileOperator
                java.nio.channels.FileChannel r0 = r2.getChannel()
                java.lang.String r1 = "randomAccessFile.channel"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
                r12.<init>(r0)
                okio.Buffer r0 = new okio.Buffer
                r0.<init>()
                r4 = 0
                r7 = 32
                r3 = r12
                r6 = r0
                r3.read(r4, r6, r7)
                okio.ByteString r1 = okhttp3.internal.cache2.Relay.PREFIX_CLEAN
                int r1 = r1.size()
                long r3 = (long) r1
                okio.ByteString r1 = r0.readByteString(r3)
                okio.ByteString r3 = okhttp3.internal.cache2.Relay.PREFIX_CLEAN
                boolean r1 = kotlin.jvm.internal.Intrinsics.areEqual(r1, r3)
                if (r1 == 0) goto L62
                long r9 = r0.readLong()
                long r7 = r0.readLong()
                okio.Buffer r0 = new okio.Buffer
                r0.<init>()
                r3 = 32
                long r4 = r9 + r3
                r3 = r12
                r6 = r0
                r3.read(r4, r6, r7)
                okio.ByteString r6 = r0.readByteString()
                okhttp3.internal.cache2.Relay r12 = new okhttp3.internal.cache2.Relay
                r3 = 0
                r7 = 0
                r0 = 0
                r1 = r12
                r4 = r9
                r9 = r0
                r1.<init>(r2, r3, r4, r6, r7, r9)
                return r12
            L62:
                java.io.IOException r12 = new java.io.IOException
                java.lang.String r0 = "unreadable cache file"
                r12.<init>(r0)
                throw r12
        }
    }

    @kotlin.Metadata(d1 = {"\u0000.\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\t\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\b\u0080\u0004\u0018\u00002\u00020\u0001B\u0005¢\u0006\u0002\u0010\u0002J\b\u0010\t\u001a\u00020\nH\u0016J\u0018\u0010\u000b\u001a\u00020\u00062\u0006\u0010\f\u001a\u00020\r2\u0006\u0010\u000e\u001a\u00020\u0006H\u0016J\b\u0010\u0007\u001a\u00020\bH\u0016R\u0010\u0010\u0003\u001a\u0004\u0018\u00010\u0004X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0007\u001a\u00020\bX\u0082\u0004¢\u0006\u0002\n\u0000¨\u0006\u000f"}, d2 = {"Lokhttp3/internal/cache2/Relay$RelaySource;", "Lokio/Source;", "(Lokhttp3/internal/cache2/Relay;)V", "fileOperator", "Lokhttp3/internal/cache2/FileOperator;", "sourcePos", "", "timeout", "Lokio/Timeout;", "close", "", "read", "sink", "Lokio/Buffer;", "byteCount", "okhttp"}, k = 1, mv = {1, 6, 0}, xi = 48)
    public final class RelaySource implements okio.Source {
        private okhttp3.internal.cache2.FileOperator fileOperator;
        private long sourcePos;
        final okhttp3.internal.cache2.Relay this$0;
        private final okio.Timeout timeout;

        public RelaySource(okhttp3.internal.cache2.Relay r3) {
                r2 = this;
                java.lang.String r0 = "this$0"
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r3, r0)
                r2.this$0 = r3
                r2.<init>()
                okio.Timeout r3 = new okio.Timeout
                r3.<init>()
                r2.timeout = r3
                okhttp3.internal.cache2.FileOperator r3 = new okhttp3.internal.cache2.FileOperator
                okhttp3.internal.cache2.Relay r0 = r2.this$0
                java.io.RandomAccessFile r0 = r0.getFile()
                kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
                java.nio.channels.FileChannel r0 = r0.getChannel()
                java.lang.String r1 = "file!!.channel"
                kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r0, r1)
                r3.<init>(r0)
                r2.fileOperator = r3
                return
        }

        @Override
        public void close() throws java.io.IOException {
                r3 = this;
                okhttp3.internal.cache2.FileOperator r0 = r3.fileOperator
                if (r0 != 0) goto L5
                return
            L5:
                r0 = 0
                r3.fileOperator = r0
                okhttp3.internal.cache2.Relay r1 = r3.this$0
                monitor-enter(r1)
                int r2 = r1.getSourceCount()     // Catch: java.lang.Throwable -> L2e
                int r2 = r2 + (-1)
                r1.setSourceCount(r2)     // Catch: java.lang.Throwable -> L2e
                int r2 = r1.getSourceCount()     // Catch: java.lang.Throwable -> L2e
                if (r2 != 0) goto L22
                java.io.RandomAccessFile r2 = r1.getFile()     // Catch: java.lang.Throwable -> L2e
                r1.setFile(r0)     // Catch: java.lang.Throwable -> L2e
                r0 = r2
            L22:
                kotlin.Unit r2 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L2e
                monitor-exit(r1)
                if (r0 != 0) goto L28
                goto L2d
            L28:
                java.io.Closeable r0 = (java.io.Closeable) r0
                okhttp3.internal.Util.closeQuietly(r0)
            L2d:
                return
            L2e:
                r0 = move-exception
                monitor-exit(r1)
                throw r0
        }

        @Override
        public long read(okio.Buffer r20, long r21) throws java.io.IOException {
                r19 = this;
                r1 = r19
                r2 = r21
                java.lang.String r0 = "sink"
                r5 = r20
                kotlin.jvm.internal.Intrinsics.checkNotNullParameter(r5, r0)
                okhttp3.internal.cache2.FileOperator r0 = r1.fileOperator
                r4 = 1
                if (r0 == 0) goto L12
                r0 = r4
                goto L13
            L12:
                r0 = 0
            L13:
                if (r0 == 0) goto L179
                okhttp3.internal.cache2.Relay r8 = r1.this$0
                monitor-enter(r8)
            L18:
                long r6 = r8.getUpstreamPos()     // Catch: java.lang.Throwable -> L176
                long r9 = r1.sourcePos     // Catch: java.lang.Throwable -> L176
                int r0 = (r9 > r6 ? 1 : (r9 == r6 ? 0 : -1))
                r6 = 2
                r9 = -1
                if (r0 == 0) goto L5b
                long r11 = r8.getUpstreamPos()     // Catch: java.lang.Throwable -> L176
                okio.Buffer r0 = r8.getBuffer()     // Catch: java.lang.Throwable -> L176
                long r13 = r0.size()     // Catch: java.lang.Throwable -> L176
                long r11 = r11 - r13
                long r13 = r1.sourcePos     // Catch: java.lang.Throwable -> L176
                int r0 = (r13 > r11 ? 1 : (r13 == r11 ? 0 : -1))
                if (r0 >= 0) goto L3a
                r4 = r6
                goto L76
            L3a:
                long r6 = r8.getUpstreamPos()     // Catch: java.lang.Throwable -> L176
                long r9 = r1.sourcePos     // Catch: java.lang.Throwable -> L176
                long r6 = r6 - r9
                long r9 = java.lang.Math.min(r2, r6)     // Catch: java.lang.Throwable -> L176
                okio.Buffer r2 = r8.getBuffer()     // Catch: java.lang.Throwable -> L176
                long r3 = r1.sourcePos     // Catch: java.lang.Throwable -> L176
                long r6 = r3 - r11
                r3 = r20
                r4 = r6
                r6 = r9
                r2.copyTo(r3, r4, r6)     // Catch: java.lang.Throwable -> L176
                long r2 = r1.sourcePos     // Catch: java.lang.Throwable -> L176
                long r2 = r2 + r9
                r1.sourcePos = r2     // Catch: java.lang.Throwable -> L176
                monitor-exit(r8)
                return r9
            L5b:
                boolean r0 = r8.getComplete()     // Catch: java.lang.Throwable -> L176
                if (r0 == 0) goto L63
                monitor-exit(r8)
                return r9
            L63:
                java.lang.Thread r0 = r8.getUpstreamReader()     // Catch: java.lang.Throwable -> L176
                if (r0 == 0) goto L6f
                okio.Timeout r0 = r1.timeout     // Catch: java.lang.Throwable -> L176
                r0.waitUntilNotified(r8)     // Catch: java.lang.Throwable -> L176
                goto L18
            L6f:
                java.lang.Thread r0 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L176
                r8.setUpstreamReader(r0)     // Catch: java.lang.Throwable -> L176
            L76:
                monitor-exit(r8)
                r11 = 32
                if (r4 != r6) goto L9c
                okhttp3.internal.cache2.Relay r0 = r1.this$0
                long r6 = r0.getUpstreamPos()
                long r8 = r1.sourcePos
                long r6 = r6 - r8
                long r8 = java.lang.Math.min(r2, r6)
                okhttp3.internal.cache2.FileOperator r2 = r1.fileOperator
                kotlin.jvm.internal.Intrinsics.checkNotNull(r2)
                long r3 = r1.sourcePos
                long r3 = r3 + r11
                r5 = r20
                r6 = r8
                r2.read(r3, r5, r6)
                long r2 = r1.sourcePos
                long r2 = r2 + r8
                r1.sourcePos = r2
                return r8
            L9c:
                r8 = 0
                okhttp3.internal.cache2.Relay r0 = r1.this$0     // Catch: java.lang.Throwable -> L162
                okio.Source r0 = r0.getUpstream()     // Catch: java.lang.Throwable -> L162
                kotlin.jvm.internal.Intrinsics.checkNotNull(r0)     // Catch: java.lang.Throwable -> L162
                okhttp3.internal.cache2.Relay r4 = r1.this$0     // Catch: java.lang.Throwable -> L162
                okio.Buffer r4 = r4.getUpstreamBuffer()     // Catch: java.lang.Throwable -> L162
                okhttp3.internal.cache2.Relay r6 = r1.this$0     // Catch: java.lang.Throwable -> L162
                long r6 = r6.getBufferMaxSize()     // Catch: java.lang.Throwable -> L162
                long r14 = r0.read(r4, r6)     // Catch: java.lang.Throwable -> L162
                int r0 = (r14 > r9 ? 1 : (r14 == r9 ? 0 : -1))
                if (r0 != 0) goto Ld8
                okhttp3.internal.cache2.Relay r0 = r1.this$0     // Catch: java.lang.Throwable -> L162
                okhttp3.internal.cache2.Relay r2 = r1.this$0     // Catch: java.lang.Throwable -> L162
                long r2 = r2.getUpstreamPos()     // Catch: java.lang.Throwable -> L162
                r0.commit(r2)     // Catch: java.lang.Throwable -> L162
                okhttp3.internal.cache2.Relay r2 = r1.this$0
                monitor-enter(r2)
                r2.setUpstreamReader(r8)     // Catch: java.lang.Throwable -> Ld5
                r0 = r2
                java.lang.Object r0 = (java.lang.Object) r0     // Catch: java.lang.Throwable -> Ld5
                r0.notifyAll()     // Catch: java.lang.Throwable -> Ld5
                kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> Ld5
                monitor-exit(r2)
                return r9
            Ld5:
                r0 = move-exception
                monitor-exit(r2)
                throw r0
            Ld8:
                long r9 = java.lang.Math.min(r14, r2)     // Catch: java.lang.Throwable -> L162
                okhttp3.internal.cache2.Relay r0 = r1.this$0     // Catch: java.lang.Throwable -> L162
                okio.Buffer r2 = r0.getUpstreamBuffer()     // Catch: java.lang.Throwable -> L162
                r6 = 0
                r3 = r20
                r4 = r6
                r6 = r9
                r2.copyTo(r3, r4, r6)     // Catch: java.lang.Throwable -> L162
                long r2 = r1.sourcePos     // Catch: java.lang.Throwable -> L162
                long r2 = r2 + r9
                r1.sourcePos = r2     // Catch: java.lang.Throwable -> L162
                okhttp3.internal.cache2.FileOperator r13 = r1.fileOperator     // Catch: java.lang.Throwable -> L162
                kotlin.jvm.internal.Intrinsics.checkNotNull(r13)     // Catch: java.lang.Throwable -> L162
                okhttp3.internal.cache2.Relay r0 = r1.this$0     // Catch: java.lang.Throwable -> L162
                long r2 = r0.getUpstreamPos()     // Catch: java.lang.Throwable -> L162
                long r2 = r2 + r11
                okhttp3.internal.cache2.Relay r0 = r1.this$0     // Catch: java.lang.Throwable -> L162
                okio.Buffer r0 = r0.getUpstreamBuffer()     // Catch: java.lang.Throwable -> L162
                okio.Buffer r16 = r0.clone()     // Catch: java.lang.Throwable -> L162
                r4 = r14
                r14 = r2
                r17 = r4
                r13.write(r14, r16, r17)     // Catch: java.lang.Throwable -> L162
                okhttp3.internal.cache2.Relay r2 = r1.this$0     // Catch: java.lang.Throwable -> L162
                okhttp3.internal.cache2.Relay r0 = r1.this$0     // Catch: java.lang.Throwable -> L162
                monitor-enter(r2)     // Catch: java.lang.Throwable -> L162
                okio.Buffer r3 = r0.getBuffer()     // Catch: java.lang.Throwable -> L15f
                okio.Buffer r6 = r0.getUpstreamBuffer()     // Catch: java.lang.Throwable -> L15f
                r3.write(r6, r4)     // Catch: java.lang.Throwable -> L15f
                okio.Buffer r3 = r0.getBuffer()     // Catch: java.lang.Throwable -> L15f
                long r6 = r3.size()     // Catch: java.lang.Throwable -> L15f
                long r11 = r0.getBufferMaxSize()     // Catch: java.lang.Throwable -> L15f
                int r3 = (r6 > r11 ? 1 : (r6 == r11 ? 0 : -1))
                if (r3 <= 0) goto L141
                okio.Buffer r3 = r0.getBuffer()     // Catch: java.lang.Throwable -> L15f
                okio.Buffer r6 = r0.getBuffer()     // Catch: java.lang.Throwable -> L15f
                long r6 = r6.size()     // Catch: java.lang.Throwable -> L15f
                long r11 = r0.getBufferMaxSize()     // Catch: java.lang.Throwable -> L15f
                long r6 = r6 - r11
                r3.skip(r6)     // Catch: java.lang.Throwable -> L15f
            L141:
                long r6 = r0.getUpstreamPos()     // Catch: java.lang.Throwable -> L15f
                long r6 = r6 + r4
                r0.setUpstreamPos(r6)     // Catch: java.lang.Throwable -> L15f
                kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L15f
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L162
                okhttp3.internal.cache2.Relay r2 = r1.this$0
                monitor-enter(r2)
                r2.setUpstreamReader(r8)     // Catch: java.lang.Throwable -> L15c
                r0 = r2
                java.lang.Object r0 = (java.lang.Object) r0     // Catch: java.lang.Throwable -> L15c
                r0.notifyAll()     // Catch: java.lang.Throwable -> L15c
                kotlin.Unit r0 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L15c
                monitor-exit(r2)
                return r9
            L15c:
                r0 = move-exception
                monitor-exit(r2)
                throw r0
            L15f:
                r0 = move-exception
                monitor-exit(r2)     // Catch: java.lang.Throwable -> L162
                throw r0     // Catch: java.lang.Throwable -> L162
            L162:
                r0 = move-exception
                okhttp3.internal.cache2.Relay r2 = r1.this$0
                monitor-enter(r2)
                r2.setUpstreamReader(r8)     // Catch: java.lang.Throwable -> L173
                r3 = r2
                java.lang.Object r3 = (java.lang.Object) r3     // Catch: java.lang.Throwable -> L173
                r3.notifyAll()     // Catch: java.lang.Throwable -> L173
                kotlin.Unit r3 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L173
                monitor-exit(r2)
                throw r0
            L173:
                r0 = move-exception
                monitor-exit(r2)
                throw r0
            L176:
                r0 = move-exception
                monitor-exit(r8)
                throw r0
            L179:
                java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
                java.lang.String r2 = "Check failed."
                java.lang.String r2 = r2.toString()
                r0.<init>(r2)
                throw r0
        }

        @Override
        public okio.Timeout timeout() {
                r1 = this;
                okio.Timeout r0 = r1.timeout
                return r0
        }
    }

    static {
            okhttp3.internal.cache2.Relay$Companion r0 = new okhttp3.internal.cache2.Relay$Companion
            r1 = 0
            r0.<init>(r1)
            okhttp3.internal.cache2.Relay.Companion = r0
            okio.ByteString$Companion r0 = okio.ByteString.Companion
            java.lang.String r1 = "OkHttp cache v1\n"
            okio.ByteString r0 = r0.encodeUtf8(r1)
            okhttp3.internal.cache2.Relay.PREFIX_CLEAN = r0
            okio.ByteString$Companion r0 = okio.ByteString.Companion
            java.lang.String r1 = "OkHttp DIRTY :(\n"
            okio.ByteString r0 = r0.encodeUtf8(r1)
            okhttp3.internal.cache2.Relay.PREFIX_DIRTY = r0
            return
    }

    private Relay(java.io.RandomAccessFile r1, okio.Source r2, long r3, okio.ByteString r5, long r6) {
            r0 = this;
            r0.<init>()
            r0.file = r1
            r0.upstream = r2
            r0.upstreamPos = r3
            r0.metadata = r5
            r0.bufferMaxSize = r6
            okio.Buffer r1 = new okio.Buffer
            r1.<init>()
            r0.upstreamBuffer = r1
            okio.Source r1 = r0.upstream
            if (r1 != 0) goto L1a
            r1 = 1
            goto L1b
        L1a:
            r1 = 0
        L1b:
            r0.complete = r1
            okio.Buffer r1 = new okio.Buffer
            r1.<init>()
            r0.buffer = r1
            return
    }

    public Relay(java.io.RandomAccessFile r1, okio.Source r2, long r3, okio.ByteString r5, long r6, kotlin.jvm.internal.DefaultConstructorMarker r8) {
            r0 = this;
            r0.<init>(r1, r2, r3, r5, r6)
            return
    }

    public static final void access$writeHeader(okhttp3.internal.cache2.Relay r0, okio.ByteString r1, long r2, long r4) {
            r0.writeHeader(r1, r2, r4)
            return
    }

    private final void writeHeader(okio.ByteString r7, long r8, long r10) throws java.io.IOException {
            r6 = this;
            okio.Buffer r3 = new okio.Buffer
            r3.<init>()
            r3.write(r7)
            r3.writeLong(r8)
            r3.writeLong(r10)
            long r7 = r3.size()
            r9 = 32
            int r7 = (r7 > r9 ? 1 : (r7 == r9 ? 0 : -1))
            if (r7 != 0) goto L1a
            r7 = 1
            goto L1b
        L1a:
            r7 = 0
        L1b:
            if (r7 == 0) goto L38
            okhttp3.internal.cache2.FileOperator r0 = new okhttp3.internal.cache2.FileOperator
            java.io.RandomAccessFile r7 = r6.file
            kotlin.jvm.internal.Intrinsics.checkNotNull(r7)
            java.nio.channels.FileChannel r7 = r7.getChannel()
            java.lang.String r8 = "file!!.channel"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r7, r8)
            r0.<init>(r7)
            r1 = 0
            r4 = 32
            r0.write(r1, r3, r4)
            return
        L38:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "Failed requirement."
            java.lang.String r8 = r8.toString()
            r7.<init>(r8)
            throw r7
    }

    private final void writeMetadata(long r7) throws java.io.IOException {
            r6 = this;
            okio.Buffer r3 = new okio.Buffer
            r3.<init>()
            okio.ByteString r0 = r6.metadata
            r3.write(r0)
            okhttp3.internal.cache2.FileOperator r0 = new okhttp3.internal.cache2.FileOperator
            java.io.RandomAccessFile r1 = r6.file
            kotlin.jvm.internal.Intrinsics.checkNotNull(r1)
            java.nio.channels.FileChannel r1 = r1.getChannel()
            java.lang.String r2 = "file!!.channel"
            kotlin.jvm.internal.Intrinsics.checkNotNullExpressionValue(r1, r2)
            r0.<init>(r1)
            r1 = 32
            long r1 = r1 + r7
            okio.ByteString r7 = r6.metadata
            int r7 = r7.size()
            long r4 = (long) r7
            r0.write(r1, r3, r4)
            return
    }

    public final void commit(long r9) throws java.io.IOException {
            r8 = this;
            r8.writeMetadata(r9)
            java.io.RandomAccessFile r0 = r8.file
            kotlin.jvm.internal.Intrinsics.checkNotNull(r0)
            java.nio.channels.FileChannel r0 = r0.getChannel()
            r1 = 0
            r0.force(r1)
            okio.ByteString r3 = okhttp3.internal.cache2.Relay.PREFIX_CLEAN
            okio.ByteString r0 = r8.metadata
            int r0 = r0.size()
            long r6 = (long) r0
            r2 = r8
            r4 = r9
            r2.writeHeader(r3, r4, r6)
            java.io.RandomAccessFile r9 = r8.file
            kotlin.jvm.internal.Intrinsics.checkNotNull(r9)
            java.nio.channels.FileChannel r9 = r9.getChannel()
            r9.force(r1)
            monitor-enter(r8)
            r9 = 1
            r8.setComplete(r9)     // Catch: java.lang.Throwable -> L40
            kotlin.Unit r9 = kotlin.Unit.INSTANCE     // Catch: java.lang.Throwable -> L40
            monitor-exit(r8)
            okio.Source r9 = r8.upstream
            if (r9 != 0) goto L37
            goto L3c
        L37:
            java.io.Closeable r9 = (java.io.Closeable) r9
            okhttp3.internal.Util.closeQuietly(r9)
        L3c:
            r9 = 0
            r8.upstream = r9
            return
        L40:
            r9 = move-exception
            monitor-exit(r8)
            throw r9
    }

    public final okio.Buffer getBuffer() {
            r1 = this;
            okio.Buffer r0 = r1.buffer
            return r0
    }

    public final long getBufferMaxSize() {
            r2 = this;
            long r0 = r2.bufferMaxSize
            return r0
    }

    public final boolean getComplete() {
            r1 = this;
            boolean r0 = r1.complete
            return r0
    }

    public final java.io.RandomAccessFile getFile() {
            r1 = this;
            java.io.RandomAccessFile r0 = r1.file
            return r0
    }

    public final int getSourceCount() {
            r1 = this;
            int r0 = r1.sourceCount
            return r0
    }

    public final okio.Source getUpstream() {
            r1 = this;
            okio.Source r0 = r1.upstream
            return r0
    }

    public final okio.Buffer getUpstreamBuffer() {
            r1 = this;
            okio.Buffer r0 = r1.upstreamBuffer
            return r0
    }

    public final long getUpstreamPos() {
            r2 = this;
            long r0 = r2.upstreamPos
            return r0
    }

    public final java.lang.Thread getUpstreamReader() {
            r1 = this;
            java.lang.Thread r0 = r1.upstreamReader
            return r0
    }

    public final boolean isClosed() {
            r1 = this;
            java.io.RandomAccessFile r0 = r1.file
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public final okio.ByteString metadata() {
            r1 = this;
            okio.ByteString r0 = r1.metadata
            return r0
    }

    public final okio.Source newSource() {
            r1 = this;
            monitor-enter(r1)
            java.io.RandomAccessFile r0 = r1.getFile()     // Catch: java.lang.Throwable -> L1c
            if (r0 != 0) goto La
            r0 = 0
            monitor-exit(r1)
            return r0
        La:
            int r0 = r1.getSourceCount()     // Catch: java.lang.Throwable -> L1c
            int r0 = r0 + 1
            r1.setSourceCount(r0)     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r1)
            okhttp3.internal.cache2.Relay$RelaySource r0 = new okhttp3.internal.cache2.Relay$RelaySource
            r0.<init>(r1)
            okio.Source r0 = (okio.Source) r0
            return r0
        L1c:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public final void setComplete(boolean r1) {
            r0 = this;
            r0.complete = r1
            return
    }

    public final void setFile(java.io.RandomAccessFile r1) {
            r0 = this;
            r0.file = r1
            return
    }

    public final void setSourceCount(int r1) {
            r0 = this;
            r0.sourceCount = r1
            return
    }

    public final void setUpstream(okio.Source r1) {
            r0 = this;
            r0.upstream = r1
            return
    }

    public final void setUpstreamPos(long r1) {
            r0 = this;
            r0.upstreamPos = r1
            return
    }

    public final void setUpstreamReader(java.lang.Thread r1) {
            r0 = this;
            r0.upstreamReader = r1
            return
    }
}
