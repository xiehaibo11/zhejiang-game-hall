package org.cocos2dx.okhttp3.internal.http2;

import java.io.EOFException;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.net.SocketTimeoutException;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;
import java.util.Iterator;
import java.util.List;
import javax.annotation.Nullable;
import org.cocos2dx.okhttp3.Headers;
import org.cocos2dx.okhttp3.internal.Util;
import org.cocos2dx.okhttp3.internal.http2.Header;
import org.cocos2dx.okio.AsyncTimeout;
import org.cocos2dx.okio.Buffer;
import org.cocos2dx.okio.BufferedSource;
import org.cocos2dx.okio.Sink;
import org.cocos2dx.okio.Source;
import org.cocos2dx.okio.Timeout;

public final class Http2Stream {
    static final boolean $assertionsDisabled = false;
    long bytesLeftInWriteWindow;
    final Http2Connection connection;
    ErrorCode errorCode;
    private boolean hasResponseHeaders;
    private Header.Listener headersListener;
    private final Deque<Headers> headersQueue;
    final int id;
    final StreamTimeout readTimeout;
    final FramingSink sink;
    private final FramingSource source;
    long unacknowledgedBytesRead;
    final StreamTimeout writeTimeout;

    final class FramingSink implements Sink {
        static final boolean $assertionsDisabled = false;
        private static final long EMIT_BUFFER_SIZE = 16384;
        boolean closed;
        boolean finished;
        private final Buffer sendBuffer;
        final Http2Stream this$0;

        static {
        }

        FramingSink(Http2Stream r1) {
            this.this$0 = r1;
            this.sendBuffer = new Buffer();
        }

        @Override
        public void write(Buffer r3, long r4) throws IOException {
            this.sendBuffer.write(r3, r4);
        L4:
            if (this.sendBuffer.size() < EMIT_BUFFER_SIZE) goto L6;
            emitFrame(false);
            goto L4
        }

        private void emitFrame(boolean r12) throws IOException {
            Http2Stream r0 = this.this$0;
            monitor-enter(r0);
            this.this$0.writeTimeout.enter();     // Catch: Throwable -> L33
        L36:
            if (this.this$0.bytesLeftInWriteWindow > 0) goto L15;
            if (this.finished == true) goto L15;
            if (this.closed == true) goto L15;
            if (this.this$0.errorCode != null) goto L15;
            this.this$0.waitForIo();     // Catch: Throwable -> L30
        L15:
            this.this$0.writeTimeout.exitAndThrowIfTimedOut();     // Catch: Throwable -> L33
            this.this$0.checkOutNotClosed();     // Catch: Throwable -> L33
            long r9 = Math.min(this.this$0.bytesLeftInWriteWindow, this.sendBuffer.size());     // Catch: Throwable -> L33
            this.this$0.bytesLeftInWriteWindow -= r9;
            monitor-exit(r0);     // Catch: Throwable -> L33
            this.this$0.writeTimeout.enter();
            Http2Connection r5 = this.this$0.connection;     // Catch: Throwable -> L27
            int r6 = this.this$0.id;     // Catch: Throwable -> L27
            if (r12 == true) goto L21;
        L23:
            boolean r7 = false;
        L24:
            r5.writeData(r6, r7, this.sendBuffer, r9);     // Catch: Throwable -> L27
            this.this$0.writeTimeout.exitAndThrowIfTimedOut();
            return;
        L21:
            if (r9 != this.sendBuffer.size()) goto L23;
            r7 = true;
        L27:
            th = move-exception;
            this.this$0.writeTimeout.exitAndThrowIfTimedOut();
            throw th;
        L30:
            th = move-exception;
            this.this$0.writeTimeout.exitAndThrowIfTimedOut();     // Catch: Throwable -> L33
            throw th;     // Catch: Throwable -> L33
        L33:
            th = move-exception;
            throw th;
        }

        @Override
        public void flush() throws IOException {
            Http2Stream r0 = this.this$0;
            monitor-enter(r0);
            this.this$0.checkOutNotClosed();     // Catch: Throwable -> L10
            monitor-exit(r0);     // Catch: Throwable -> L10
        L7:
            if (this.sendBuffer.size() <= 0) goto L9;
            emitFrame(false);
            this.this$0.connection.flush();
            goto L7
        L9:
            return;
        L10:
            th = move-exception;
            throw th;
        }

        @Override
        public Timeout timeout() {
            return this.this$0.writeTimeout;
        }

        @Override
        public void close() throws IOException {
            Http2Stream r0 = this.this$0;
            monitor-enter(r0);
        L26:
            th = move-exception;
            throw th;
        L5:
            if (this.closed == false) goto L8;
            monitor-exit(r0);     // Catch: Throwable -> L26
            return;
        L8:
            monitor-exit(r0);     // Catch: Throwable -> L26
            if (this.this$0.sink.finished == false) goto L12;
        L17:
            Http2Stream r2 = this.this$0;
            monitor-enter(r2);
            this.closed = true;     // Catch: Throwable -> L23
            monitor-exit(r2);     // Catch: Throwable -> L23
            this.this$0.connection.flush();
            this.this$0.cancelStreamIfNecessary();
            return;
        L23:
            th = move-exception;
            throw th;
        L12:
            if (this.sendBuffer.size() > 0) goto L14;
            this.this$0.connection.writeData(this.this$0.id, true, null, 0);
        L14:
            if (this.sendBuffer.size() <= 0) goto L17;
            emitFrame(true);
            goto L14
        }
    }

    private final class FramingSource implements Source {
        static final boolean $assertionsDisabled = false;
        boolean closed;
        boolean finished;
        private final long maxByteCount;
        private final Buffer readBuffer;
        private final Buffer receiveBuffer;
        final Http2Stream this$0;

        static {
        }

        FramingSource(Http2Stream r1, long r2) {
            this.this$0 = r1;
            this.receiveBuffer = new Buffer();
            this.readBuffer = new Buffer();
            this.maxByteCount = r2;
        }

        @Override
        public long read(Buffer r18, long r19) throws IOException {
            if (r19 < 0) goto L56;
        L4:
            Http2Stream r6 = this.this$0;
            monitor-enter(r6);
            this.this$0.readTimeout.enter();     // Catch: Throwable -> L52
        L49:
            th = move-exception;
            this.this$0.readTimeout.exitAndThrowIfTimedOut();     // Catch: Throwable -> L52
            throw th;     // Catch: Throwable -> L52
        L8:
            if (this.this$0.errorCode == null) goto L10;
            ErrorCode r0 = this.this$0.errorCode;     // Catch: Throwable -> L49
        L12:
            if (this.closed == true) goto L48;
            if (Http2Stream.access$000(this.this$0).isEmpty() == true) goto L19;
            if (Http2Stream.access$100(this.this$0) == null) goto L19;
            Headers r7 = (Headers) Http2Stream.access$000(this.this$0).removeFirst();     // Catch: Throwable -> L49
            Header.Listener r8 = Http2Stream.access$100(this.this$0);     // Catch: Throwable -> L49
            long r11 = -1;
        L34:
            this.this$0.readTimeout.exitAndThrowIfTimedOut();     // Catch: Throwable -> L52
            monitor-exit(r6);     // Catch: Throwable -> L52
            if (r7 == null) goto L40;
            if (r8 == null) goto L40;
            r8.onHeaders(r7);
        L40:
            if (r11 == (-1)) goto L43;
            updateConnectionFlowControl(r11);
            return r11;
        L43:
            if (r0 != null) goto L46;
            return -1;
        L46:
            throw new StreamResetException(r0);
        L19:
            if (this.readBuffer.size() > 0) goto L20;
            if (this.finished == true) goto L32;
            if (r0 != null) goto L32;
            this.this$0.waitForIo();     // Catch: Throwable -> L49
            this.this$0.readTimeout.exitAndThrowIfTimedOut();     // Catch: Throwable -> L52
            monitor-exit(r6);     // Catch: Throwable -> L52
        L32:
            r11 = -1;
        L33:
            r7 = null;
            r8 = null;
            goto L34
        L20:
            r11 = this.readBuffer.read(r18, Math.min(r19, this.readBuffer.size()));     // Catch: Throwable -> L49
            this.this$0.unacknowledgedBytesRead += r11;
            if (r0 != null) goto L33;
            if (this.this$0.unacknowledgedBytesRead < (this.this$0.connection.okHttpSettings.getInitialWindowSize() / 2)) goto L33;
            this.this$0.connection.writeWindowUpdateLater(this.this$0.id, this.this$0.unacknowledgedBytesRead);     // Catch: Throwable -> L49
            this.this$0.unacknowledgedBytesRead = 0;     // Catch: Throwable -> L49
            goto L33
        L48:
            throw new IOException("stream closed");     // Catch: Throwable -> L49
        L10:
            r0 = null;
        L52:
            th = move-exception;
            throw th;
        L56:
            throw new IllegalArgumentException("byteCount < 0: " + r19);
        }

        private void updateConnectionFlowControl(long r2) {
            this.this$0.connection.updateConnectionFlowControl(r2);
        }

        void receive(BufferedSource r12, long r13) throws IOException {
        L3:
            if (r13 <= 0) goto L44;
            Http2Stream r2 = this.this$0;
            monitor-enter(r2);
            boolean r3 = this.finished;     // Catch: Throwable -> L41
            boolean r8 = true;
            if ((this.readBuffer.size() + r13) <= this.maxByteCount) goto L9;
            boolean r4 = true;
        L10:
            monitor-exit(r2);     // Catch: Throwable -> L41
            if (r4 == true) goto L12;
            if (r3 == true) goto L15;
            long r22 = r12.read(this.receiveBuffer, r13);
            if (r22 == (-1)) goto L40;
            r13 = r13 - r22;
            Http2Stream r23 = this.this$0;
            monitor-enter(r23);
            if (this.closed == false) goto L25;
            long r32 = this.receiveBuffer.size();     // Catch: Throwable -> L36
            this.receiveBuffer.clear();     // Catch: Throwable -> L36
        L32:
            monitor-exit(r23);     // Catch: Throwable -> L36
            if (r32 <= 0) goto L3;
            updateConnectionFlowControl(r32);
            goto L3
        L25:
            if (this.readBuffer.size() == 0) goto L28;
            r8 = false;
        L28:
            this.readBuffer.writeAll(this.receiveBuffer);     // Catch: Throwable -> L36
            if (r8 == false) goto L31;
            this.this$0.notifyAll();     // Catch: Throwable -> L36
        L31:
            r32 = 0;
        L36:
            th = move-exception;
            throw th;
        L40:
            throw new EOFException();
        L15:
            r12.skip(r13);
            return;
        L12:
            r12.skip(r13);
            this.this$0.closeLater(ErrorCode.FLOW_CONTROL_ERROR);
            return;
        L9:
            r4 = false;
        L41:
            th = move-exception;
            throw th;
        }

        @Override
        public Timeout timeout() {
            return this.this$0.readTimeout;
        }

        @Override
        public void close() throws IOException {
            Http2Stream r0 = this.this$0;
            monitor-enter(r0);
            this.closed = true;     // Catch: Throwable -> L23
            long r1 = this.readBuffer.size();     // Catch: Throwable -> L23
            this.readBuffer.clear();     // Catch: Throwable -> L23
            ArrayList r4 = null;
            if (Http2Stream.access$000(this.this$0).isEmpty() == false) goto L8;
        L10:
            Header.Listener r3 = null;
        L11:
            this.this$0.notifyAll();     // Catch: Throwable -> L23
            monitor-exit(r0);     // Catch: Throwable -> L23
            if (r1 <= 0) goto L16;
            updateConnectionFlowControl(r1);
        L16:
            this.this$0.cancelStreamIfNecessary();
            if (r3 == null) goto L22;
            Iterator r02 = r4.iterator();
        L20:
            if (r02.hasNext() == false) goto L29;
            r3.onHeaders((Headers) r02.next());
            goto L20
        L29:
            return;
        L22:
            return;
        L8:
            if (Http2Stream.access$100(this.this$0) == null) goto L10;
            r4 = new ArrayList(Http2Stream.access$000(this.this$0));     // Catch: Throwable -> L23
            Http2Stream.access$000(this.this$0).clear();     // Catch: Throwable -> L23
            r3 = Http2Stream.access$100(this.this$0);     // Catch: Throwable -> L23
        L23:
            th = move-exception;
            throw th;
        }
    }

    class StreamTimeout extends AsyncTimeout {
        final Http2Stream this$0;

        StreamTimeout(Http2Stream r1) {
            this.this$0 = r1;
        }

        @Override
        protected void timedOut() {
            this.this$0.closeLater(ErrorCode.CANCEL);
        }

        @Override
        protected IOException newTimeoutException(IOException r3) {
            SocketTimeoutException r0 = new SocketTimeoutException("timeout");
            if (r3 == null) goto L5;
            r0.initCause(r3);
        L5:
            return r0;
        }

        public void exitAndThrowIfTimedOut() throws IOException {
            if (exit() == true) goto L6;
            return;
        L6:
            throw newTimeoutException(null);
        }
    }

    static {
    }

    static Deque access$000(Http2Stream r0) {
        return r0.headersQueue;
    }

    static Header.Listener access$100(Http2Stream r0) {
        return r0.headersListener;
    }

    Http2Stream(int r3, Http2Connection r4, boolean r5, boolean r6, @Nullable Headers r7) {
        this.unacknowledgedBytesRead = 0;
        this.headersQueue = new ArrayDeque();
        this.readTimeout = new StreamTimeout(this);
        this.writeTimeout = new StreamTimeout(this);
        this.errorCode = null;
        if (r4 == null) goto L21;
        this.id = r3;
        this.connection = r4;
        this.bytesLeftInWriteWindow = r4.peerSettings.getInitialWindowSize();
        this.source = new FramingSource(this, r4.okHttpSettings.getInitialWindowSize());
        this.sink = new FramingSink(this);
        this.source.finished = r6;
        this.sink.finished = r5;
        if (r7 == null) goto L8;
        this.headersQueue.add(r7);
    L8:
        if (isLocallyInitiated() == false) goto L14;
        if (r7 == null) goto L14;
        throw new IllegalStateException("locally-initiated streams shouldn't have headers yet");
    L14:
        if (isLocallyInitiated() == true) goto L19;
        if (r7 == null) goto L18;
        return;
    L18:
        throw new IllegalStateException("remotely-initiated streams should have headers");
    L19:
        return;
    L21:
        throw new NullPointerException("connection == null");
    }

    public int getId() {
        return this.id;
    }

    public synchronized boolean isOpen() {
        monitor-enter(this);
    L23:
        th = move-exception;
        throw th;
    L5:
        if (this.errorCode == null) goto L9;
        monitor-exit(this);
        return false;
    L9:
        if (this.source.finished == true) goto L13;
        if (this.source.closed == true) goto L13;
    L21:
        monitor-exit(this);
        return true;
    L13:
        if (this.sink.finished == false) goto L15;
    L16:
        if (this.hasResponseHeaders == false) goto L21;
        monitor-exit(this);
        return false;
    L15:
        if (this.sink.closed == false) goto L21;
        goto L16
    }

    public boolean isLocallyInitiated() {
        if ((this.id & 1) != 1) goto L5;
        boolean r0 = true;
    L7:
        if (this.connection.client == r0) goto L11;
        return false;
    L11:
        return true;
    L5:
        r0 = false;
        goto L7
    }

    public Http2Connection getConnection() {
        return this.connection;
    }

    public synchronized Headers takeHeaders() throws IOException {
        monitor-enter(this);
        this.readTimeout.enter();     // Catch: Throwable -> L20
    L23:
        if (this.headersQueue.isEmpty() == false) goto L10;
        if (this.errorCode != null) goto L10;
        waitForIo();     // Catch: Throwable -> L17
    L10:
        this.readTimeout.exitAndThrowIfTimedOut();     // Catch: Throwable -> L20
        if (this.headersQueue.isEmpty() == true) goto L16;
        Headers r0 = this.headersQueue.removeFirst();     // Catch: Throwable -> L20
        monitor-exit(this);
        return r0;
    L16:
        throw new StreamResetException(this.errorCode);     // Catch: Throwable -> L20
    L17:
        th = move-exception;
        this.readTimeout.exitAndThrowIfTimedOut();     // Catch: Throwable -> L20
        throw th;     // Catch: Throwable -> L20
    L20:
        th = move-exception;
        throw th;
    }

    public synchronized ErrorCode getErrorCode() {
        monitor-enter(this);
        ErrorCode r0 = this.errorCode;     // Catch: Throwable -> L6
        monitor-exit(this);
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    public void writeHeaders(List<Header> r9, boolean r10) throws IOException {
        if (r9 == null) goto L30;
        monitor-enter(this);
        this.hasResponseHeaders = true;     // Catch: Throwable -> L26
        if (r10 == true) goto L8;
        this.sink.finished = true;     // Catch: Throwable -> L26
        boolean r102 = true;
        boolean r2 = true;
    L9:
        monitor-exit(this);     // Catch: Throwable -> L26
        if (r102 == true) goto L22;
        Http2Connection r3 = this.connection;
        monitor-enter(r3);
    L19:
        th = move-exception;
        throw th;
    L14:
        if (this.connection.bytesLeftInWriteWindow != 0) goto L16;
        r102 = true;
    L17:
        monitor-exit(r3);     // Catch: Throwable -> L19
        goto L22
    L16:
        r102 = false;
    L22:
        this.connection.writeSynReply(this.id, r2, r9);
        if (r102 == false) goto L35;
        this.connection.flush();
        return;
    L35:
        return;
    L8:
        r102 = false;
        r2 = false;
    L26:
        th = move-exception;
        throw th;
    L30:
        throw new NullPointerException("headers == null");
    }

    public Timeout readTimeout() {
        return this.readTimeout;
    }

    public Timeout writeTimeout() {
        return this.writeTimeout;
    }

    public Source getSource() {
        return this.source;
    }

    public Sink getSink() {
        monitor-enter(this);
    L13:
        th = move-exception;
        throw th;
    L4:
        if (this.hasResponseHeaders == false) goto L6;
    L10:
        monitor-exit(this);     // Catch: Throwable -> L13
        return this.sink;
    L6:
        if (isLocallyInitiated() == true) goto L10;
        throw new IllegalStateException("reply before requesting the sink");     // Catch: Throwable -> L13
    }

    public void close(ErrorCode r3) throws IOException {
        if (closeInternal(r3) == true) goto L5;
        return;
    L5:
        this.connection.writeSynReset(this.id, r3);
    }

    public void closeLater(ErrorCode r3) {
        if (closeInternal(r3) == true) goto L5;
        return;
    L5:
        this.connection.writeSynResetLater(this.id, r3);
    }

    private boolean closeInternal(ErrorCode r3) {
        monitor-enter(this);
    L17:
        th = move-exception;
        throw th;
    L4:
        if (this.errorCode == null) goto L8;
        monitor-exit(this);     // Catch: Throwable -> L17
        return false;
    L8:
        if (this.source.finished == true) goto L10;
    L13:
        this.errorCode = r3;     // Catch: Throwable -> L17
        notifyAll();     // Catch: Throwable -> L17
        monitor-exit(this);     // Catch: Throwable -> L17
        this.connection.removeStream(this.id);
        return true;
    L10:
        if (this.sink.finished == false) goto L13;
        monitor-exit(this);     // Catch: Throwable -> L17
        return false;
    }

    void receiveHeaders(List<Header> r2) {
        monitor-enter(this);
        this.hasResponseHeaders = true;     // Catch: Throwable -> L9
        this.headersQueue.add(Util.toHeaders(r2));     // Catch: Throwable -> L9
        boolean r22 = isOpen();     // Catch: Throwable -> L9
        notifyAll();     // Catch: Throwable -> L9
        monitor-exit(this);     // Catch: Throwable -> L9
        if (r22 == true) goto L14;
        this.connection.removeStream(this.id);
        return;
    L14:
        return;
    L9:
        th = move-exception;
        throw th;
    }

    void receiveData(BufferedSource r4, int r5) throws IOException {
        this.source.receive(r4, r5);
    }

    void receiveFin() {
        monitor-enter(this);
        this.source.finished = true;     // Catch: Throwable -> L8
        boolean r0 = isOpen();     // Catch: Throwable -> L8
        notifyAll();     // Catch: Throwable -> L8
        monitor-exit(this);     // Catch: Throwable -> L8
        if (r0 == true) goto L13;
        this.connection.removeStream(this.id);
        return;
    L13:
        return;
    L8:
        th = move-exception;
        throw th;
    }

    synchronized void receiveRstStream(ErrorCode r2) {
        monitor-enter(this);
    L8:
        th = move-exception;
        throw th;
    L4:
        if (this.errorCode != null) goto L6;
        this.errorCode = r2;     // Catch: Throwable -> L8
        notifyAll();     // Catch: Throwable -> L8
    L6:
        monitor-exit(this);
    }

    public synchronized void setHeadersListener(Header.Listener r2) {
        monitor-enter(this);
        this.headersListener = r2;     // Catch: Throwable -> L9
        if (this.headersQueue.isEmpty() == true) goto L7;
        if (r2 == null) goto L7;
        notifyAll();     // Catch: Throwable -> L9
    L7:
        monitor-exit(this);
        return;
    L9:
        th = move-exception;
        throw th;
    }

    void cancelStreamIfNecessary() throws IOException {
        monitor-enter(this);
    L20:
        th = move-exception;
        throw th;
    L4:
        if (this.source.finished == false) goto L6;
    L12:
        boolean r0 = false;
    L13:
        boolean r1 = isOpen();     // Catch: Throwable -> L20
        monitor-exit(this);     // Catch: Throwable -> L20
        if (r0 == false) goto L17;
        close(ErrorCode.CANCEL);
        return;
    L17:
        if (r1 == true) goto L26;
        this.connection.removeStream(this.id);
        return;
    L26:
        return;
    L6:
        if (this.source.closed == false) goto L12;
        if (this.sink.finished == false) goto L10;
    L11:
        r0 = true;
        goto L13
    L10:
        if (this.sink.closed == false) goto L12;
        goto L11
    }

    void addBytesToWriteWindow(long r4) {
        this.bytesLeftInWriteWindow += r4;
        if (r4 <= 0) goto L6;
        notifyAll();
        return;
    }

    void checkOutNotClosed() throws IOException {
        if (this.sink.closed == true) goto L14;
        if (this.sink.finished == true) goto L12;
        ErrorCode r0 = this.errorCode;
        if (r0 != null) goto L10;
        return;
    L10:
        throw new StreamResetException(r0);
    L12:
        throw new IOException("stream finished");
    L14:
        throw new IOException("stream closed");
    }

    void waitForIo() throws InterruptedIOException {
        wait();     // Catch: InterruptedException -> L4
        return;
    L4:
        Thread.currentThread().interrupt();
        throw new InterruptedIOException();
    }
}
