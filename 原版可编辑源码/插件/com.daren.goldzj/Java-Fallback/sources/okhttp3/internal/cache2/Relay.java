package okhttp3.internal.cache2;

import java.io.File;
import java.io.IOException;
import java.io.RandomAccessFile;
import okhttp3.internal.Util;
import okio.Buffer;
import okio.ByteString;
import okio.Source;
import okio.Timeout;

final class Relay {
    private static final long FILE_HEADER_SIZE = 32;
    static final ByteString PREFIX_CLEAN = null;
    static final ByteString PREFIX_DIRTY = null;
    private static final int SOURCE_FILE = 2;
    private static final int SOURCE_UPSTREAM = 1;
    final Buffer buffer;
    final long bufferMaxSize;
    boolean complete;
    RandomAccessFile file;
    private final ByteString metadata;
    int sourceCount;
    Source upstream;
    final Buffer upstreamBuffer;
    long upstreamPos;
    Thread upstreamReader;

    class RelaySource implements Source {
        private FileOperator fileOperator;
        private long sourcePos;
        final Relay this$0;
        private final Timeout timeout;

        RelaySource(Relay r2) {
            this.this$0 = r2;
            this.timeout = new Timeout();
            this.fileOperator = new FileOperator(this.this$0.file.getChannel());
        }

        public long read(Buffer r22, long r23) throws IOException {
            if (this.fileOperator == null) goto L72;
            Relay r4 = this.this$0;
            monitor-enter(r4);
        L79:
            long r5 = this.sourcePos;     // Catch: Throwable -> L68
            long r7 = this.this$0.upstreamPos;     // Catch: Throwable -> L68
            if (r5 != r7) goto L18;
            if (this.this$0.complete == true) goto L10;
            if (this.this$0.upstreamReader == null) goto L15;
            this.timeout.waitUntilNotified(this.this$0);     // Catch: Throwable -> L68
            goto L79
        L15:
            this.this$0.upstreamReader = Thread.currentThread();     // Catch: Throwable -> L68
            char r52 = 1;
            monitor-exit(r4);     // Catch: Throwable -> L68
        L23:
            if (r52 != 2) goto L82;
            long r2 = Math.min(r23, r7 - this.sourcePos);
            this.fileOperator.read(this.sourcePos + Relay.FILE_HEADER_SIZE, r22, r2);
            this.sourcePos += r2;
            return r2;
        L82:
            long r53 = this.this$0.upstream.read(this.this$0.upstreamBuffer, this.this$0.bufferMaxSize);     // Catch: Throwable -> L56
            if (r53 != (-1)) goto L38;
            this.this$0.commit(r7);     // Catch: Throwable -> L56
            Relay r24 = this.this$0;
            monitor-enter(r24);
            this.this$0.upstreamReader = null;     // Catch: Throwable -> L35
            this.this$0.notifyAll();     // Catch: Throwable -> L35
            monitor-exit(r24);     // Catch: Throwable -> L35
            return -1;
        L35:
            th = move-exception;
            throw th;
        L38:
            long r25 = Math.min(r53, r23);     // Catch: Throwable -> L56
            this.this$0.upstreamBuffer.copyTo(r22, 0, r25);     // Catch: Throwable -> L56
            this.sourcePos += r25;
            this.fileOperator.write(r7 + Relay.FILE_HEADER_SIZE, this.this$0.upstreamBuffer.clone(), r53);     // Catch: Throwable -> L56
            Relay r72 = this.this$0;     // Catch: Throwable -> L56
            monitor-enter(r72);     // Catch: Throwable -> L56
            this.this$0.buffer.write(this.this$0.upstreamBuffer, r53);     // Catch: Throwable -> L53
            if (this.this$0.buffer.size() <= this.this$0.bufferMaxSize) goto L43;
            this.this$0.buffer.skip(this.this$0.buffer.size() - this.this$0.bufferMaxSize);     // Catch: Throwable -> L53
        L43:
            this.this$0.upstreamPos += r53;
            monitor-exit(r72);     // Catch: Throwable -> L53
            Relay r54 = this.this$0;
            monitor-enter(r54);
            this.this$0.upstreamReader = null;     // Catch: Throwable -> L50
            this.this$0.notifyAll();     // Catch: Throwable -> L50
            monitor-exit(r54);     // Catch: Throwable -> L50
            return r25;
        L50:
            th = move-exception;
            throw th;
        L53:
            th = move-exception;
            throw th;     // Catch: Throwable -> L56
        L56:
            th = move-exception;
            monitor-enter(this.this$0);
            this.this$0.upstreamReader = null;     // Catch: Throwable -> L62
            this.this$0.notifyAll();     // Catch: Throwable -> L62
            throw th;
        L62:
            th = move-exception;
            throw th;
        L10:
            monitor-exit(r4);     // Catch: Throwable -> L68
            return -1;
        L18:
            long r55 = r7 - this.this$0.buffer.size();     // Catch: Throwable -> L68
            if (this.sourcePos >= r55) goto L65;
            monitor-exit(r4);     // Catch: Throwable -> L68
            r52 = 2;
            goto L23
        L65:
            long r26 = Math.min(r23, r7 - this.sourcePos);     // Catch: Throwable -> L68
            this.this$0.buffer.copyTo(r22, this.sourcePos - r55, r26);     // Catch: Throwable -> L68
            this.sourcePos += r26;
            monitor-exit(r4);     // Catch: Throwable -> L68
            return r26;
        L68:
            th = move-exception;
            throw th;
        L72:
            throw new IllegalStateException("closed");
        }

        public Timeout timeout() {
            return this.timeout;
        }

        public void close() throws IOException {
            if (this.fileOperator != null) goto L5;
            return;
        L5:
            RandomAccessFile r0 = null;
            this.fileOperator = null;
            Relay r1 = this.this$0;
            monitor-enter(r1);
            Relay r2 = this.this$0;     // Catch: Throwable -> L14
            r2.sourceCount--;
            if (this.this$0.sourceCount != 0) goto L10;
            RandomAccessFile r22 = this.this$0.file;     // Catch: Throwable -> L14
            this.this$0.file = null;     // Catch: Throwable -> L14
            r0 = r22;
        L10:
            monitor-exit(r1);     // Catch: Throwable -> L14
            if (r0 == null) goto L19;
            Util.closeQuietly(r0);
            return;
        L19:
            return;
        L14:
            th = move-exception;
            throw th;
        }
    }

    static {
        PREFIX_CLEAN = ByteString.encodeUtf8("OkHttp cache v1\n");
        PREFIX_DIRTY = ByteString.encodeUtf8("OkHttp DIRTY :(\n");
    }

    private Relay(RandomAccessFile r2, Source r3, long r4, ByteString r6, long r7) {
        this.upstreamBuffer = new Buffer();
        this.buffer = new Buffer();
        this.file = r2;
        this.upstream = r3;
        if (r3 != null) goto L5;
        boolean r22 = true;
    L6:
        this.complete = r22;
        this.upstreamPos = r4;
        this.metadata = r6;
        this.bufferMaxSize = r7;
        return;
    L5:
        r22 = false;
        goto L6
    }

    public static Relay edit(File r9, Source r10, ByteString r11, long r12) throws IOException {
        RandomAccessFile r8 = new RandomAccessFile(r9, "rw");
        Relay r92 = new Relay(r8, r10, 0, r11, r12);
        r8.setLength(0);
        r92.writeHeader(PREFIX_DIRTY, -1, -1);
        return r92;
    }

    public static Relay read(File r10) throws IOException {
        RandomAccessFile r1 = new RandomAccessFile(r10, "rw");
        FileOperator r102 = new FileOperator(r1.getChannel());
        Buffer r0 = new Buffer();
        r102.read(0, r0, FILE_HEADER_SIZE);
        if (r0.readByteString(PREFIX_CLEAN.size()).equals(PREFIX_CLEAN) == false) goto L7;
        long r8 = r0.readLong();
        long r6 = r0.readLong();
        Buffer r02 = new Buffer();
        r102.read(r8 + FILE_HEADER_SIZE, r02, r6);
        return new Relay(r1, null, r8, r02.readByteString(), 0);
    L7:
        throw new IOException("unreadable cache file");
    }

    private void writeHeader(ByteString r7, long r8, long r10) throws IOException {
        Buffer r3 = new Buffer();
        r3.write(r7);
        r3.writeLong(r8);
        r3.writeLong(r10);
        if (r3.size() != FILE_HEADER_SIZE) goto L7;
        new FileOperator(this.file.getChannel()).write(0, r3, FILE_HEADER_SIZE);
        return;
    L7:
        throw new IllegalArgumentException();
    }

    private void writeMetadata(long r7) throws IOException {
        Buffer r3 = new Buffer();
        r3.write(this.metadata);
        new FileOperator(this.file.getChannel()).write(FILE_HEADER_SIZE + r7, r3, this.metadata.size());
    }

    void commit(long r9) throws IOException {
        writeMetadata(r9);
        this.file.getChannel().force(false);
        writeHeader(PREFIX_CLEAN, r9, this.metadata.size());
        this.file.getChannel().force(false);
        monitor-enter(this);
        this.complete = true;     // Catch: Throwable -> L9
        monitor-exit(this);     // Catch: Throwable -> L9
        Util.closeQuietly(this.upstream);
        this.upstream = null;
        return;
    L9:
        th = move-exception;
        throw th;
    }

    boolean isClosed() {
        if (this.file != null) goto L5;
        return true;
    L5:
        return false;
    }

    public ByteString metadata() {
        return this.metadata;
    }

    public Source newSource() {
        monitor-enter(this);
    L12:
        th = move-exception;
        throw th;
    L4:
        if (this.file == null) goto L6;
        this.sourceCount++;
        monitor-exit(this);     // Catch: Throwable -> L12
        return new RelaySource(this);
    L6:
        monitor-exit(this);     // Catch: Throwable -> L12
        return null;
    }
}
