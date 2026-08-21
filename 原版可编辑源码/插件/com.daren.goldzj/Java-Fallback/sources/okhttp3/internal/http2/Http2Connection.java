package okhttp3.internal.http2;

import android.support.v4.internal.view.SupportMenu;
import android.support.v7.widget.ActivityChooserView;
import java.io.Closeable;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.RejectedExecutionException;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import okhttp3.Protocol;
import okhttp3.internal.NamedRunnable;
import okhttp3.internal.Util;
import okhttp3.internal.http2.Http2Reader;
import okio.Buffer;
import okio.BufferedSink;
import okio.BufferedSource;
import okio.ByteString;
import okio.Okio;

public final class Http2Connection implements Closeable {
    static final boolean $assertionsDisabled = false;
    static final int OKHTTP_CLIENT_WINDOW_SIZE = 16777216;
    private static final ExecutorService listenerExecutor = null;
    private boolean awaitingPong;
    long bytesLeftInWriteWindow;
    final boolean client;
    final Set<Integer> currentPushRequests;
    final String hostname;
    int lastGoodStreamId;
    final Listener listener;
    int nextStreamId;
    Settings okHttpSettings;
    final Settings peerSettings;
    private final ExecutorService pushExecutor;
    final PushObserver pushObserver;
    final ReaderRunnable readerRunnable;
    boolean receivedInitialPeerSettings;
    boolean shutdown;
    final Socket socket;
    final Map<Integer, Http2Stream> streams;
    long unacknowledgedBytesRead;
    final Http2Writer writer;
    private final ScheduledExecutorService writerExecutor;

    public static class Builder {
        boolean client;
        String hostname;
        Listener listener;
        int pingIntervalMillis;
        PushObserver pushObserver;
        BufferedSink sink;
        Socket socket;
        BufferedSource source;

        public Builder(boolean r2) {
            this.listener = Listener.REFUSE_INCOMING_STREAMS;
            this.pushObserver = PushObserver.CANCEL;
            this.client = r2;
        }

        public Builder socket(Socket r4) throws IOException {
            return socket(r4, ((InetSocketAddress) r4.getRemoteSocketAddress()).getHostName(), Okio.buffer(Okio.source(r4)), Okio.buffer(Okio.sink(r4)));
        }

        public Builder socket(Socket r1, String r2, BufferedSource r3, BufferedSink r4) {
            this.socket = r1;
            this.hostname = r2;
            this.source = r3;
            this.sink = r4;
            return this;
        }

        public Builder listener(Listener r1) {
            this.listener = r1;
            return this;
        }

        public Builder pushObserver(PushObserver r1) {
            this.pushObserver = r1;
            return this;
        }

        public Builder pingIntervalMillis(int r1) {
            this.pingIntervalMillis = r1;
            return this;
        }

        public Http2Connection build() {
            return new Http2Connection(this);
        }
    }

    public static abstract class Listener {
        public static final Listener REFUSE_INCOMING_STREAMS = null;

        public void onSettings(Http2Connection r1) {
        }

        public abstract void onStream(Http2Stream r1) throws IOException;

        public Listener() {
        }

        static {
            REFUSE_INCOMING_STREAMS = new 1();
        }
    }

    final class PingRunnable extends NamedRunnable {
        final int payload1;
        final int payload2;
        final boolean reply;
        final Http2Connection this$0;

        PingRunnable(Http2Connection r3, boolean r4, int r5, int r6) {
            this.this$0 = r3;
            super("OkHttp %s ping %08x%08x", new Object[]{r3.hostname, Integer.valueOf(r5), Integer.valueOf(r6)});
            this.reply = r4;
            this.payload1 = r5;
            this.payload2 = r6;
        }

        @Override
        public void execute() {
            this.this$0.writePing(this.reply, this.payload1, this.payload2);
        }
    }

    class ReaderRunnable extends NamedRunnable implements Http2Reader.Handler {
        final Http2Reader reader;
        final Http2Connection this$0;

        @Override
        public void ackSettings() {
        }

        @Override
        public void alternateService(int r1, String r2, ByteString r3, String r4, int r5, long r6) {
        }

        @Override
        public void priority(int r1, int r2, int r3, boolean r4) {
        }

        ReaderRunnable(Http2Connection r3, Http2Reader r4) {
            this.this$0 = r3;
            super("OkHttp %s", new Object[]{r3.hostname});
            this.reader = r4;
        }

        @Override
        protected void execute() {
            ErrorCode r0 = ErrorCode.INTERNAL_ERROR;
            ErrorCode r1 = ErrorCode.INTERNAL_ERROR;
            this.reader.readConnectionPreface(this);     // Catch: Throwable -> L10 IOException -> L12
        L5:
            if (this.reader.nextFrame(false, this) == true) goto L5;
            r0 = ErrorCode.NO_ERROR;     // Catch: Throwable -> L10 IOException -> L12
            r1 = ErrorCode.CANCEL;     // Catch: Throwable -> L10 IOException -> L12
            Http2Connection r2 = this.this$0;     // Catch: IOException -> L20
        L14:
            r2.close(r0, r1);     // Catch: IOException -> L20
            goto L15
        L12:
            r0 = ErrorCode.PROTOCOL_ERROR;     // Catch: Throwable -> L10
            r1 = ErrorCode.PROTOCOL_ERROR;     // Catch: Throwable -> L10
            r2 = this.this$0;     // Catch: IOException -> L20
        L15:
            Util.closeQuietly(this.reader);
            return;
        L10:
            th = move-exception;
            this.this$0.close(r0, r1);     // Catch: IOException -> L21
        L18:
            Util.closeQuietly(this.reader);
            throw th;
        }

        @Override
        public void data(boolean r3, int r4, BufferedSource r5, int r6) throws IOException {
            if (this.this$0.pushedStream(r4) == false) goto L6;
            this.this$0.pushDataLater(r4, r5, r6, r3);
            return;
        L6:
            Http2Stream r0 = this.this$0.getStream(r4);
            if (r0 != null) goto L10;
            this.this$0.writeSynResetLater(r4, ErrorCode.PROTOCOL_ERROR);
            long r02 = r6;
            this.this$0.updateConnectionFlowControl(r02);
            r5.skip(r02);
            return;
        L10:
            r0.receiveData(r5, r6);
            if (r3 == false) goto L14;
            r0.receiveFin();
            return;
        }

        @Override
        public void headers(boolean r10, int r11, int r12, List<Header> r13) {
            if (this.this$0.pushedStream(r11) == false) goto L6;
            this.this$0.pushHeadersLater(r11, r13, r10);
            return;
        L6:
            Http2Connection r122 = this.this$0;
            monitor-enter(r122);
            Http2Stream r0 = this.this$0.getStream(r11);     // Catch: Throwable -> L30
            if (r0 == null) goto L11;
            monitor-exit(r122);     // Catch: Throwable -> L30
            r0.receiveHeaders(r13);
            if (r10 == false) goto L34;
            r0.receiveFin();
            return;
        L34:
            return;
        L11:
            if (this.this$0.shutdown == false) goto L15;
            monitor-exit(r122);     // Catch: Throwable -> L30
            return;
        L15:
            if (r11 > this.this$0.lastGoodStreamId) goto L19;
            monitor-exit(r122);     // Catch: Throwable -> L30
            return;
        L19:
            if ((r11 % 2) != (this.this$0.nextStreamId % 2)) goto L22;
            monitor-exit(r122);     // Catch: Throwable -> L30
            return;
        L22:
            final Http2Stream r132 = new Http2Stream(r11, this.this$0, false, r10, Util.toHeaders(r13));     // Catch: Throwable -> L30
            this.this$0.lastGoodStreamId = r11;     // Catch: Throwable -> L30
            this.this$0.streams.put(Integer.valueOf(r11), r132);     // Catch: Throwable -> L30
            ExecutorService r102 = Http2Connection.access$100();     // Catch: Throwable -> L30
            final String r1 = "OkHttp %s stream %d";
            final Object[] r2 = {this.this$0.hostname, Integer.valueOf(r11)};     // Catch: Throwable -> L30
            r102.execute(new 1(this, r1, r2, r132));     // Catch: Throwable -> L30
            monitor-exit(r122);     // Catch: Throwable -> L30
            return;
        L30:
            th = move-exception;
            throw th;
        }

        @Override
        public void rstStream(int r2, ErrorCode r3) {
            if (this.this$0.pushedStream(r2) == false) goto L6;
            this.this$0.pushResetLater(r2, r3);
            return;
        L6:
            Http2Stream r22 = this.this$0.removeStream(r2);
            if (r22 == null) goto L10;
            r22.receiveRstStream(r3);
            return;
        }

        @Override
        public void settings(boolean r11, Settings r12) {
            Http2Connection r0 = this.this$0;
            monitor-enter(r0);
            int r1 = this.this$0.peerSettings.getInitialWindowSize();     // Catch: Throwable -> L33
            if (r11 == false) goto L7;
            this.this$0.peerSettings.clear();     // Catch: Throwable -> L33
        L7:
            this.this$0.peerSettings.merge(r12);     // Catch: Throwable -> L33
            applyAndAckSettings(r12);     // Catch: Throwable -> L33
            int r112 = this.this$0.peerSettings.getInitialWindowSize();     // Catch: Throwable -> L33
            Http2Stream[] r5 = null;
            if (r112 == (-1)) goto L16;
            if (r112 == r1) goto L16;
            long r113 = r112 - r1;     // Catch: Throwable -> L33
            if (this.this$0.receivedInitialPeerSettings == true) goto L14;
            this.this$0.receivedInitialPeerSettings = true;     // Catch: Throwable -> L33
        L14:
            if (this.this$0.streams.isEmpty() == true) goto L17;
            r5 = (Http2Stream[]) this.this$0.streams.values().toArray(new Http2Stream[this.this$0.streams.size()]);     // Catch: Throwable -> L33
        L17:
            ExecutorService r13 = Http2Connection.access$100();     // Catch: Throwable -> L33
            final String r7 = "OkHttp %s settings";
            int r9 = 0;
            final Object[] r4 = {this.this$0.hostname};     // Catch: Throwable -> L33
            r13.execute(new 2(this, r7, r4));     // Catch: Throwable -> L33
            monitor-exit(r0);     // Catch: Throwable -> L33
            if (r5 != null) goto L21;
            return;
        L21:
            if (r113 == 0) goto L42;
            int r02 = r5.length;
        L23:
            if (r9 >= r02) goto L43;
            Http2Stream r14 = r5[r9];
            monitor-enter(r14);
            r14.addBytesToWriteWindow(r113);     // Catch: Throwable -> L29
            monitor-exit(r14);     // Catch: Throwable -> L29
            r9 = r9 + 1;     // Catch: Throwable -> L29
        L29:
            th = move-exception;
            throw th;
        L43:
            return;
        L42:
            return;
        L16:
            r113 = 0;
        L33:
            th = move-exception;
            throw th;
        }

        private void applyAndAckSettings(final Settings r7) {
            ScheduledExecutorService r0 = Http2Connection.access$200(this.this$0);     // Catch: RejectedExecutionException -> L4
            final String r2 = "OkHttp %s ACK Settings";
            final Object[] r3 = {this.this$0.hostname};     // Catch: RejectedExecutionException -> L4
            r0.execute(new 3(this, r2, r3, r7));     // Catch: RejectedExecutionException -> L4
            return;
        }

        @Override
        public void ping(boolean r4, int r5, int r6) {
            if (r4 == false) goto L16;
            Http2Connection r42 = this.this$0;
            monitor-enter(r42);
            Http2Connection.access$302(this.this$0, false);     // Catch: Throwable -> L8
            this.this$0.notifyAll();     // Catch: Throwable -> L8
            monitor-exit(r42);     // Catch: Throwable -> L8
            return;
        L8:
            th = move-exception;
            throw th;
        L16:
            Http2Connection.access$200(this.this$0).execute(new PingRunnable(this.this$0, true, r5, r6));     // Catch: RejectedExecutionException -> L13
            return;
        }

        @Override
        public void goAway(int r4, ErrorCode r5, ByteString r6) {
            r6.size();
            Http2Connection r52 = this.this$0;
            monitor-enter(r52);
            Http2Stream[] r62 = (Http2Stream[]) this.this$0.streams.values().toArray(new Http2Stream[this.this$0.streams.size()]);     // Catch: Throwable -> L15
            this.this$0.shutdown = true;     // Catch: Throwable -> L15
            monitor-exit(r52);     // Catch: Throwable -> L15
            int r53 = r62.length;
            int r0 = 0;
        L7:
            if (r0 >= r53) goto L14;
            Http2Stream r1 = r62[r0];
            if (r1.getId() <= r4) goto L13;
            if (r1.isLocallyInitiated() == false) goto L13;
            r1.receiveRstStream(ErrorCode.REFUSED_STREAM);
            this.this$0.removeStream(r1.getId());
        L13:
            r0 = r0 + 1;
            goto L7
        L14:
            return;
        L15:
            th = move-exception;
            throw th;
        }

        @Override
        public void windowUpdate(int r4, long r5) {
            if (r4 != 0) goto L11;
            Http2Connection r0 = this.this$0;
            monitor-enter(r0);
            this.this$0.bytesLeftInWriteWindow += r5;
            this.this$0.notifyAll();     // Catch: Throwable -> L8
            monitor-exit(r0);     // Catch: Throwable -> L8
            return;
        L8:
            th = move-exception;
            throw th;
        L11:
            Http2Stream r42 = this.this$0.getStream(r4);
            if (r42 == null) goto L25;
            monitor-enter(r42);
            r42.addBytesToWriteWindow(r5);     // Catch: Throwable -> L17
            monitor-exit(r42);     // Catch: Throwable -> L17
            return;
        L17:
            th = move-exception;
            throw th;
        }

        @Override
        public void pushPromise(int r1, int r2, List<Header> r3) {
            this.this$0.pushRequestLater(r2, r3);
        }
    }

    boolean pushedStream(int r2) {
        if (r2 != 0) goto L5;
    L7:
        return false;
    L5:
        if ((r2 & 1) != 0) goto L7;
        return true;
    }

    static void access$000(Http2Connection r0) {
        r0.failConnection();
    }

    static ExecutorService access$100() {
        return listenerExecutor;
    }

    static ScheduledExecutorService access$200(Http2Connection r0) {
        return r0.writerExecutor;
    }

    static boolean access$302(Http2Connection r0, boolean r1) {
        r0.awaitingPong = r1;
        return r1;
    }

    static {
        listenerExecutor = new ThreadPoolExecutor(0, ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED, 60, TimeUnit.SECONDS, new SynchronousQueue(), Util.threadFactory("OkHttp Http2Connection", true));
    }

    Http2Connection(Builder r22) {
        this.streams = new LinkedHashMap();
        this.unacknowledgedBytesRead = 0;
        this.okHttpSettings = new Settings();
        this.peerSettings = new Settings();
        this.receivedInitialPeerSettings = false;
        this.currentPushRequests = new LinkedHashSet();
        this.pushObserver = r22.pushObserver;
        this.client = r22.client;
        this.listener = r22.listener;
        if (r22.client == false) goto L5;
        int r3 = 1;
    L6:
        this.nextStreamId = r3;
        if (r22.client == false) goto L10;
        this.nextStreamId += 2;
    L10:
        if (r22.client == false) goto L12;
        this.okHttpSettings.set(7, 16777216);
    L12:
        this.hostname = r22.hostname;
        this.writerExecutor = new ScheduledThreadPoolExecutor(1, Util.threadFactory(Util.format("OkHttp %s Writer", new Object[]{this.hostname}), false));
        if (r22.pingIntervalMillis == 0) goto L15;
        this.writerExecutor.scheduleAtFixedRate(new PingRunnable(this, false, 0, 0), r22.pingIntervalMillis, r22.pingIntervalMillis, TimeUnit.MILLISECONDS);
    L15:
        this.pushExecutor = new ThreadPoolExecutor(0, 1, 60, TimeUnit.SECONDS, new LinkedBlockingQueue(), Util.threadFactory(Util.format("OkHttp %s Push Observer", new Object[]{this.hostname}), true));
        this.peerSettings.set(7, SupportMenu.USER_MASK);
        this.peerSettings.set(5, 16384);
        this.bytesLeftInWriteWindow = this.peerSettings.getInitialWindowSize();
        this.socket = r22.socket;
        this.writer = new Http2Writer(r22.sink, this.client);
        this.readerRunnable = new ReaderRunnable(this, new Http2Reader(r22.source, this.client));
        return;
    L5:
        r3 = 2;
        goto L6
    }

    public Protocol getProtocol() {
        return Protocol.HTTP_2;
    }

    public synchronized int openStreamCount() {
        monitor-enter(this);
        int r0 = this.streams.size();     // Catch: Throwable -> L6
        monitor-exit(this);
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    synchronized Http2Stream getStream(int r2) {
        monitor-enter(this);
        Http2Stream r22 = this.streams.get(Integer.valueOf(r2));     // Catch: Throwable -> L6
        monitor-exit(this);
        return r22;
    L6:
        th = move-exception;
        throw th;
    }

    synchronized Http2Stream removeStream(int r2) {
        monitor-enter(this);
        Http2Stream r22 = this.streams.remove(Integer.valueOf(r2));     // Catch: Throwable -> L6
        notifyAll();     // Catch: Throwable -> L6
        monitor-exit(this);
        return r22;
    L6:
        th = move-exception;
        throw th;
    }

    public synchronized int maxConcurrentStreams() {
        monitor-enter(this);
        int r0 = this.peerSettings.getMaxConcurrentStreams(ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED);     // Catch: Throwable -> L6
        monitor-exit(this);
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    synchronized void updateConnectionFlowControl(long r4) {
        monitor-enter(this);
        this.unacknowledgedBytesRead += r4;
        if (this.unacknowledgedBytesRead < (this.okHttpSettings.getInitialWindowSize() / 2)) goto L6;
        writeWindowUpdateLater(0, this.unacknowledgedBytesRead);     // Catch: Throwable -> L8
        this.unacknowledgedBytesRead = 0;     // Catch: Throwable -> L8
    L6:
        monitor-exit(this);
        return;
    L8:
        th = move-exception;
        throw th;
    }

    public Http2Stream pushStream(int r2, List<Header> r3, boolean r4) throws IOException {
        if (this.client == true) goto L7;
        return newStream(r2, r3, r4);
    L7:
        throw new IllegalStateException("Client cannot push requests.");
    }

    public Http2Stream newStream(List<Header> r2, boolean r3) throws IOException {
        return newStream(0, r2, r3);
    }

    private Http2Stream newStream(int r11, List<Header> r12, boolean r13) throws IOException {
        boolean r6 = !r13;
        Http2Writer r7 = this.writer;
        monitor-enter(r7);
        monitor-enter(this);     // Catch: Throwable -> L39
    L36:
        th = move-exception;
        throw th;     // Catch: Throwable -> L39
    L6:
        if (this.nextStreamId <= 1073741823) goto L9;
        shutdown(ErrorCode.REFUSED_STREAM);     // Catch: Throwable -> L36
    L9:
        if (this.shutdown == true) goto L35;
        int r8 = this.nextStreamId;     // Catch: Throwable -> L36
        this.nextStreamId += 2;
        Http2Stream r9 = new Http2Stream(r8, this, r6, false, null);     // Catch: Throwable -> L36
        if (r13 == true) goto L13;
    L18:
        boolean r132 = true;
    L20:
        if (r9.isOpen() == false) goto L22;
        this.streams.put(Integer.valueOf(r8), r9);     // Catch: Throwable -> L36
    L22:
        monitor-exit(this);     // Catch: Throwable -> L36
        if (r11 != 0) goto L26;
        this.writer.synStream(r6, r8, r11, r12);     // Catch: Throwable -> L39
    L28:
        monitor-exit(r7);     // Catch: Throwable -> L39
        if (r132 == false) goto L31;
        this.writer.flush();
    L31:
        return r9;
    L26:
        if (this.client == true) goto L33;
        this.writer.pushPromise(r11, r8, r12);     // Catch: Throwable -> L39
        goto L28
    L33:
        throw new IllegalArgumentException("client streams shouldn't have associated stream IDs");     // Catch: Throwable -> L39
    L13:
        if (this.bytesLeftInWriteWindow == 0) goto L18;
        if (r9.bytesLeftInWriteWindow == 0) goto L18;
        r132 = false;
        goto L20
    L35:
        throw new ConnectionShutdownException();     // Catch: Throwable -> L36
    L39:
        th = move-exception;
        throw th;
    }

    void writeSynReply(int r2, boolean r3, List<Header> r4) throws IOException {
        this.writer.synReply(r3, r2, r4);
    }

    public void writeData(int r9, boolean r10, Buffer r11, long r12) throws IOException {
        if (r12 != 0) goto L7;
        this.writer.data(r10, r9, r11, 0);
        return;
    L7:
        if (r12 <= 0) goto L31;
        monitor-enter(this);
    L32:
    L25:
        th = move-exception;
        throw th;
    L27:
        Thread.currentThread().interrupt();     // Catch: Throwable -> L25
        throw new InterruptedIOException();     // Catch: Throwable -> L25
    L10:
        if (this.bytesLeftInWriteWindow > 0) goto L16;
        if (this.streams.containsKey(Integer.valueOf(r9)) == false) goto L15;
        wait();     // Catch: Throwable -> L25 InterruptedException -> L27
        goto L32
    L15:
        throw new IOException("stream closed");     // Catch: Throwable -> L25 InterruptedException -> L27
    L16:
        int r3 = Math.min((int) Math.min(r12, this.bytesLeftInWriteWindow), this.writer.maxDataLength());     // Catch: Throwable -> L25
        long r6 = r3;
        this.bytesLeftInWriteWindow -= r6;
        monitor-exit(this);     // Catch: Throwable -> L25
        r12 = r12 - r6;
        Http2Writer r4 = this.writer;
        if (r10 == true) goto L21;
    L23:
        boolean r5 = false;
    L24:
        r4.data(r5, r9, r11, r3);
        goto L7
    L21:
        if (r12 != 0) goto L23;
        r5 = true;
        goto L24
    }

    void writeSynResetLater(final int r9, final ErrorCode r10) {
        ScheduledExecutorService r0 = this.writerExecutor;     // Catch: RejectedExecutionException -> L4
        final String r3 = "OkHttp %s stream %d";
        final Object[] r4 = {this.hostname, Integer.valueOf(r9)};     // Catch: RejectedExecutionException -> L4
        r0.execute(new 1(this, r3, r4, r9, r10));     // Catch: RejectedExecutionException -> L4
        return;
    }

    void writeSynReset(int r2, ErrorCode r3) throws IOException {
        this.writer.rstStream(r2, r3);
    }

    void writeWindowUpdateLater(final int r10, final long r11) {
        ScheduledExecutorService r0 = this.writerExecutor;     // Catch: RejectedExecutionException -> L4
        final String r3 = "OkHttp Window Update %s stream %d";
        final Object[] r4 = {this.hostname, Integer.valueOf(r10)};     // Catch: RejectedExecutionException -> L4
        r0.execute(new 2(this, r3, r4, r10, r11));     // Catch: RejectedExecutionException -> L4
        return;
    }

    void writePing(boolean r3, int r4, int r5) {
        if (r3 == true) goto L16;
        monitor-enter(this);
        boolean r0 = this.awaitingPong;     // Catch: Throwable -> L9
        this.awaitingPong = true;     // Catch: Throwable -> L9
        monitor-exit(this);     // Catch: Throwable -> L9
        if (r0 == false) goto L16;
        failConnection();
        return;
    L9:
        th = move-exception;
        throw th;
    L16:
        this.writer.ping(r3, r4, r5);     // Catch: IOException -> L14
        return;
    L14:
        failConnection();
    }

    void writePingAndAwaitPong() throws InterruptedException {
        writePing(false, 1330343787, -257978967);
        awaitPong();
    }

    synchronized void awaitPong() throws InterruptedException {
        monitor-enter(this);
    L12:
        if (this.awaitingPong == false) goto L7;
        wait();     // Catch: Throwable -> L9
        goto L12
    L7:
        monitor-exit(this);
        return;
    L9:
        th = move-exception;
        throw th;
    }

    public void flush() throws IOException {
        this.writer.flush();
    }

    public void shutdown(ErrorCode r5) throws IOException {
        Http2Writer r0 = this.writer;
        monitor-enter(r0);
        monitor-enter(this);     // Catch: Throwable -> L19
    L16:
        th = move-exception;
        throw th;     // Catch: Throwable -> L19
    L6:
        if (this.shutdown == false) goto L11;
        monitor-exit(this);     // Catch: Throwable -> L16
        monitor-exit(r0);     // Catch: Throwable -> L19
        return;
    L11:
        this.shutdown = true;     // Catch: Throwable -> L16
        int r1 = this.lastGoodStreamId;     // Catch: Throwable -> L16
        monitor-exit(this);     // Catch: Throwable -> L16
        this.writer.goAway(r1, r5, Util.EMPTY_BYTE_ARRAY);     // Catch: Throwable -> L19
        monitor-exit(r0);     // Catch: Throwable -> L19
        return;
    L19:
        th = move-exception;
        throw th;
    }

    @Override
    public void close() throws IOException {
        close(ErrorCode.NO_ERROR, ErrorCode.CANCEL);
    }

    void close(ErrorCode r5, ErrorCode r6) throws IOException {
        Http2Stream[] r0 = null;
        shutdown(r5);     // Catch: IOException -> L5
        e = null;
    L6:
        monitor-enter(this);
    L33:
        th = move-exception;
        throw th;
    L8:
        if (this.streams.isEmpty() == true) goto L10;
        r0 = (Http2Stream[]) this.streams.values().toArray(new Http2Stream[this.streams.size()]);     // Catch: Throwable -> L33
        this.streams.clear();     // Catch: Throwable -> L33
    L10:
        monitor-exit(this);     // Catch: Throwable -> L33
        if (r0 == null) goto L40;
        int r1 = r0.length;
        int r2 = 0;
    L13:
        if (r2 >= r1) goto L40;
        r0[r2].close(r6);     // Catch: IOException -> L17
    L20:
        r2 = r2 + 1;
    L17:
        e = move-exception;
        if (e == null) goto L20;
        e = e;
    L40:
        this.writer.close();     // Catch: IOException -> L23
    L42:
        this.socket.close();     // Catch: IOException -> L28
    L29:
        this.writerExecutor.shutdown();
        this.pushExecutor.shutdown();
        if (e != null) goto L32;
        return;
    L32:
        throw e;
    L28:
        e = e;
    L23:
        e = move-exception;
        if (e != null) goto L42;
        e = e;
    L5:
        e = e;
        goto L6
    }

    private void failConnection() {
        close(ErrorCode.PROTOCOL_ERROR, ErrorCode.PROTOCOL_ERROR);     // Catch: IOException -> L4
        return;
    }

    public void start() throws IOException {
        start(true);
    }

    void start(boolean r6) throws IOException {
        if (r6 == false) goto L6;
        this.writer.connectionPreface();
        this.writer.settings(this.okHttpSettings);
        if (this.okHttpSettings.getInitialWindowSize() == 65535) goto L6;
        this.writer.windowUpdate(0, r6 - SupportMenu.USER_MASK);
    L6:
        new Thread(this.readerRunnable).start();
    }

    public void setSettings(Settings r3) throws IOException {
        Http2Writer r0 = this.writer;
        monitor-enter(r0);
        monitor-enter(this);     // Catch: Throwable -> L17
    L14:
        th = move-exception;
        throw th;     // Catch: Throwable -> L17
    L6:
        if (this.shutdown == true) goto L13;
        this.okHttpSettings.merge(r3);     // Catch: Throwable -> L14
        monitor-exit(this);     // Catch: Throwable -> L14
        this.writer.settings(r3);     // Catch: Throwable -> L17
        monitor-exit(r0);     // Catch: Throwable -> L17
        return;
    L13:
        throw new ConnectionShutdownException();     // Catch: Throwable -> L14
    L17:
        th = move-exception;
        throw th;
    }

    public synchronized boolean isShutdown() {
        monitor-enter(this);
        boolean r0 = this.shutdown;     // Catch: Throwable -> L6
        monitor-exit(this);
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    void pushRequestLater(final int r9, final List<Header> r10) {
        monitor-enter(this);
    L12:
        th = move-exception;
        throw th;
    L4:
        if (this.currentPushRequests.contains(Integer.valueOf(r9)) == false) goto L8;
        writeSynResetLater(r9, ErrorCode.PROTOCOL_ERROR);     // Catch: Throwable -> L12
        monitor-exit(this);     // Catch: Throwable -> L12
        return;
    L8:
        this.currentPushRequests.add(Integer.valueOf(r9));     // Catch: Throwable -> L12
        monitor-exit(this);     // Catch: Throwable -> L12
        final String r4 = "OkHttp %s Push Request[%s]";
        final Object[] r5 = {this.hostname, Integer.valueOf(r9)};     // Catch: RejectedExecutionException -> L15
        pushExecutorExecute(new 3(this, r4, r5, r9, r10));     // Catch: RejectedExecutionException -> L15
        return;
    }

    void pushHeadersLater(final int r9, final List<Header> r10, final boolean r11) {
        final String r2 = "OkHttp %s Push Headers[%s]";
        final Object[] r3 = {this.hostname, Integer.valueOf(r9)};     // Catch: RejectedExecutionException -> L4
        pushExecutorExecute(new 4(this, r2, r3, r9, r10, r11));     // Catch: RejectedExecutionException -> L4
        return;
    }

    void pushDataLater(final int r9, BufferedSource r10, final int r11, final boolean r12) throws IOException {
        final Buffer r5 = new Buffer();
        long r0 = r11;
        r10.require(r0);
        r10.read(r5, r0);
        if (r5.size() != r0) goto L7;
        final Object[] r3 = {this.hostname, Integer.valueOf(r9)};
        final String r2 = "OkHttp %s Push Data[%s]";
        pushExecutorExecute(new 5(this, r2, r3, r9, r5, r11, r12));
        return;
    L7:
        throw new IOException(r5.size() + " != " + r11);
    }

    void pushResetLater(final int r8, final ErrorCode r9) {
        final Object[] r3 = {this.hostname, Integer.valueOf(r8)};
        final String r2 = "OkHttp %s Push Reset[%s]";
        pushExecutorExecute(new 6(this, r2, r3, r8, r9));
    }

    private synchronized void pushExecutorExecute(NamedRunnable r2) {
        monitor-enter(this);
    L8:
        th = move-exception;
        throw th;
    L4:
        if (isShutdown() == true) goto L6;
        this.pushExecutor.execute(r2);     // Catch: Throwable -> L8
    L6:
        monitor-exit(this);
    }
}
