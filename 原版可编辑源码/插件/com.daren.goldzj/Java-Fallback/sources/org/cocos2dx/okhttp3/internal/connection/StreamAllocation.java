package org.cocos2dx.okhttp3.internal.connection;

import java.io.IOException;
import java.lang.ref.Reference;
import java.lang.ref.WeakReference;
import java.net.Socket;
import java.util.List;
import org.cocos2dx.okhttp3.Address;
import org.cocos2dx.okhttp3.Call;
import org.cocos2dx.okhttp3.ConnectionPool;
import org.cocos2dx.okhttp3.EventListener;
import org.cocos2dx.okhttp3.Interceptor;
import org.cocos2dx.okhttp3.OkHttpClient;
import org.cocos2dx.okhttp3.Route;
import org.cocos2dx.okhttp3.internal.Internal;
import org.cocos2dx.okhttp3.internal.Util;
import org.cocos2dx.okhttp3.internal.connection.RouteSelector;
import org.cocos2dx.okhttp3.internal.http.HttpCodec;
import org.cocos2dx.okhttp3.internal.http2.ConnectionShutdownException;
import org.cocos2dx.okhttp3.internal.http2.ErrorCode;
import org.cocos2dx.okhttp3.internal.http2.StreamResetException;

public final class StreamAllocation {
    static final boolean $assertionsDisabled = false;
    public final Address address;
    public final Call call;
    private final Object callStackTrace;
    private boolean canceled;
    private HttpCodec codec;
    private RealConnection connection;
    private final ConnectionPool connectionPool;
    public final EventListener eventListener;
    private int refusedStreamCount;
    private boolean released;
    private boolean reportedAcquired;
    private Route route;
    private RouteSelector.Selection routeSelection;
    private final RouteSelector routeSelector;

    public static final class StreamAllocationReference extends WeakReference<StreamAllocation> {
        public final Object callStackTrace;

        StreamAllocationReference(StreamAllocation r1, Object r2) {
            super(r1);
            this.callStackTrace = r2;
        }
    }

    static {
    }

    public StreamAllocation(ConnectionPool r2, Address r3, Call r4, EventListener r5, Object r6) {
        this.connectionPool = r2;
        this.address = r3;
        this.call = r4;
        this.eventListener = r5;
        this.routeSelector = new RouteSelector(r3, routeDatabase(), r4, r5);
        this.callStackTrace = r6;
    }

    public HttpCodec newStream(OkHttpClient r8, Interceptor.Chain r9, boolean r10) {
        HttpCodec r82 = findHealthyConnection(r9.connectTimeoutMillis(), r9.readTimeoutMillis(), r9.writeTimeoutMillis(), r8.pingIntervalMillis(), r8.retryOnConnectionFailure(), r10).newCodec(r8, r9, this);     // Catch: IOException -> L11
        ConnectionPool r92 = this.connectionPool;     // Catch: IOException -> L11
        monitor-enter(r92);     // Catch: IOException -> L11
        this.codec = r82;     // Catch: Throwable -> L8
        monitor-exit(r92);     // Catch: Throwable -> L8
        return r82;
    L8:
        th = move-exception;
        throw th;     // Catch: IOException -> L11
    L11:
        e = move-exception;
        throw new RouteException(e);
    }

    private RealConnection findHealthyConnection(int r4, int r5, int r6, int r7, boolean r8, boolean r9) throws IOException {
    L2:
        RealConnection r0 = findConnection(r4, r5, r6, r7, r8);
        ConnectionPool r1 = this.connectionPool;
        monitor-enter(r1);
    L13:
        th = move-exception;
        throw th;
    L5:
        if (r0.successCount == 0) goto L6;
        monitor-exit(r1);     // Catch: Throwable -> L13
        if (r0.isHealthy(r9) == true) goto L12;
        noNewStreams();
        goto L2
    L12:
        return r0;
    L6:
        monitor-exit(r1);     // Catch: Throwable -> L13
        return r0;
    }

    private RealConnection findConnection(int r19, int r20, int r21, int r22, boolean r23) throws IOException {
        ConnectionPool r2 = this.connectionPool;
        monitor-enter(r2);
    L82:
        th = move-exception;
        throw th;
    L5:
        if (this.released == true) goto L81;
        if (this.codec != null) goto L79;
        if (this.canceled == true) goto L77;
        RealConnection r0 = this.connection;     // Catch: Throwable -> L82
        Socket r3 = releaseIfNoNewStreams();     // Catch: Throwable -> L82
        Socket r5 = null;
        if (this.connection == null) goto L13;
        RealConnection r02 = this.connection;     // Catch: Throwable -> L82
        RealConnection r4 = null;
    L15:
        if (this.reportedAcquired == true) goto L18;
        r4 = null;
    L18:
        if (r02 != null) goto L23;
        Internal.instance.get(this.connectionPool, this.address, this, null);     // Catch: Throwable -> L82
        if (this.connection == null) goto L22;
        RealConnection r8 = this.connection;     // Catch: Throwable -> L82
        Route r9 = null;
        boolean r03 = true;
    L25:
        monitor-exit(r2);     // Catch: Throwable -> L82
        Util.closeQuietly(r3);
        if (r4 == null) goto L29;
        this.eventListener.connectionReleased(this.call, r4);
    L29:
        if (r03 == false) goto L31;
        this.eventListener.connectionAcquired(this.call, r8);
    L31:
        if (r8 == null) goto L34;
        this.route = this.connection.route();
        return r8;
    L34:
        if (r9 != null) goto L40;
        RouteSelector.Selection r24 = this.routeSelection;
        if (r24 != null) goto L38;
    L39:
        this.routeSelection = this.routeSelector.next();
        boolean r25 = true;
    L41:
        ConnectionPool r32 = this.connectionPool;
        monitor-enter(r32);
    L73:
        th = move-exception;
        throw th;
    L44:
        if (this.canceled == true) goto L72;
        if (r25 == false) goto L52;
        List<Route> r26 = this.routeSelection.getAll();     // Catch: Throwable -> L73
        int r42 = r26.size();     // Catch: Throwable -> L73
        int r10 = 0;
    L47:
        if (r10 >= r42) goto L52;
        Route r11 = r26.get(r10);     // Catch: Throwable -> L73
        Internal.instance.get(this.connectionPool, this.address, this, r11);     // Catch: Throwable -> L73
        if (this.connection != null) goto L50;
        r10 = r10 + 1;     // Catch: Throwable -> L73
        goto L47
    L50:
        r8 = this.connection;     // Catch: Throwable -> L73
        this.route = r11;     // Catch: Throwable -> L73
        r03 = true;
    L52:
        if (r03 == true) goto L56;
        if (r9 != null) goto L55;
        r9 = this.routeSelection.next();     // Catch: Throwable -> L73
    L55:
        this.route = r9;     // Catch: Throwable -> L73
        this.refusedStreamCount = 0;     // Catch: Throwable -> L73
        r8 = new RealConnection(this.connectionPool, r9);     // Catch: Throwable -> L73
        acquire(r8, false);     // Catch: Throwable -> L73
    L56:
        monitor-exit(r32);     // Catch: Throwable -> L73
        if (r03 == false) goto L60;
        this.eventListener.connectionAcquired(this.call, r8);
        return r8;
    L60:
        r8.connect(r19, r20, r21, r22, r23, this.call, this.eventListener);
        routeDatabase().connected(r8.route());
        ConnectionPool r27 = this.connectionPool;
        monitor-enter(r27);
        this.reportedAcquired = true;     // Catch: Throwable -> L68
        Internal.instance.put(this.connectionPool, r8);     // Catch: Throwable -> L68
        if (r8.isMultiplexed() == false) goto L65;
        r5 = Internal.instance.deduplicate(this.connectionPool, this.address, this);     // Catch: Throwable -> L68
        r8 = this.connection;     // Catch: Throwable -> L68
    L65:
        monitor-exit(r27);     // Catch: Throwable -> L68
        Util.closeQuietly(r5);
        this.eventListener.connectionAcquired(this.call, r8);
        return r8;
    L68:
        th = move-exception;
        throw th;
    L72:
        throw new IOException("Canceled");     // Catch: Throwable -> L73
    L38:
        if (r24.hasNext() == false) goto L39;
    L40:
        r25 = false;
        goto L41
    L22:
        r9 = this.route;     // Catch: Throwable -> L82
        r8 = r02;
    L24:
        r03 = false;
        goto L25
    L23:
        r8 = r02;
        r9 = null;
        goto L24
    L13:
        r4 = r0;
        r02 = null;
        goto L15
    L77:
        throw new IOException("Canceled");     // Catch: Throwable -> L82
    L79:
        throw new IllegalStateException("codec != null");     // Catch: Throwable -> L82
    L81:
        throw new IllegalStateException("released");     // Catch: Throwable -> L82
    }

    private Socket releaseIfNoNewStreams() {
        RealConnection r0 = this.connection;
        if (r0 != null) goto L5;
        return null;
    L5:
        if (r0.noNewStreams == true) goto L7;
        return null;
    L7:
        return deallocate(false, false, true);
    }

    public void streamFinished(boolean r3, HttpCodec r4, long r5, IOException r7) {
        this.eventListener.responseBodyEnd(this.call, r5);
        ConnectionPool r52 = this.connectionPool;
        monitor-enter(r52);
        if (r4 == null) goto L24;
    L25:
        th = move-exception;
        throw th;
    L6:
        if (r4 != this.codec) goto L24;
        if (r3 == true) goto L10;
        this.connection.successCount++;
    L10:
        RealConnection r6 = this.connection;     // Catch: Throwable -> L25
        Socket r32 = deallocate(r3, false, true);     // Catch: Throwable -> L25
        if (this.connection == null) goto L13;
        r6 = null;
    L13:
        boolean r42 = this.released;     // Catch: Throwable -> L25
        monitor-exit(r52);     // Catch: Throwable -> L25
        Util.closeQuietly(r32);
        if (r6 == null) goto L18;
        this.eventListener.connectionReleased(this.call, r6);
    L18:
        if (r7 == null) goto L20;
        this.eventListener.callFailed(this.call, Internal.instance.timeoutExit(this.call, r7));
        return;
    L20:
        if (r42 == false) goto L30;
        Internal.instance.timeoutExit(this.call, null);
        this.eventListener.callEnd(this.call);
        return;
    L30:
        return;
    L24:
        throw new IllegalStateException("expected " + this.codec + " but was " + r4);     // Catch: Throwable -> L25
    }

    public HttpCodec codec() {
        ConnectionPool r0 = this.connectionPool;
        monitor-enter(r0);
        HttpCodec r1 = this.codec;     // Catch: Throwable -> L7
        monitor-exit(r0);     // Catch: Throwable -> L7
        return r1;
    L7:
        th = move-exception;
        throw th;
    }

    private RouteDatabase routeDatabase() {
        return Internal.instance.routeDatabase(this.connectionPool);
    }

    public Route route() {
        return this.route;
    }

    public synchronized RealConnection connection() {
        monitor-enter(this);
        RealConnection r0 = this.connection;     // Catch: Throwable -> L6
        monitor-exit(this);
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    public void release() {
        ConnectionPool r0 = this.connectionPool;
        monitor-enter(r0);
        RealConnection r1 = this.connection;     // Catch: Throwable -> L12
        Socket r2 = deallocate(false, true, false);     // Catch: Throwable -> L12
        if (this.connection == null) goto L7;
        r1 = null;
    L7:
        monitor-exit(r0);     // Catch: Throwable -> L12
        Util.closeQuietly(r2);
        if (r1 == null) goto L17;
        Internal.instance.timeoutExit(this.call, null);
        this.eventListener.connectionReleased(this.call, r1);
        this.eventListener.callEnd(this.call);
        return;
    L17:
        return;
    L12:
        th = move-exception;
        throw th;
    }

    public void noNewStreams() {
        ConnectionPool r0 = this.connectionPool;
        monitor-enter(r0);
        RealConnection r1 = this.connection;     // Catch: Throwable -> L12
        Socket r2 = deallocate(true, false, false);     // Catch: Throwable -> L12
        if (this.connection == null) goto L7;
        r1 = null;
    L7:
        monitor-exit(r0);     // Catch: Throwable -> L12
        Util.closeQuietly(r2);
        if (r1 == null) goto L17;
        this.eventListener.connectionReleased(this.call, r1);
        return;
    L17:
        return;
    L12:
        th = move-exception;
        throw th;
    }

    private Socket deallocate(boolean r2, boolean r3, boolean r4) {
        if (r4 == false) goto L6;
        this.codec = null;
    L6:
        if (r3 == false) goto L8;
        this.released = true;
    L8:
        RealConnection r32 = this.connection;
        if (r32 == null) goto L26;
        if (r2 == false) goto L13;
        r32.noNewStreams = true;
    L13:
        if (this.codec != null) goto L26;
        if (this.released == false) goto L17;
    L18:
        release(this.connection);
        if (this.connection.allocations.isEmpty() == false) goto L23;
        this.connection.idleAtNanos = System.nanoTime();
        if (Internal.instance.connectionBecameIdle(this.connectionPool, this.connection) == false) goto L23;
        Socket r22 = this.connection.socket();
    L24:
        this.connection = null;
        return r22;
    L23:
        r22 = null;
        goto L24
    L17:
        if (this.connection.noNewStreams == true) goto L18;
    L26:
        return null;
    }

    public void cancel() {
        ConnectionPool r0 = this.connectionPool;
        monitor-enter(r0);
        this.canceled = true;     // Catch: Throwable -> L12
        HttpCodec r1 = this.codec;     // Catch: Throwable -> L12
        RealConnection r2 = this.connection;     // Catch: Throwable -> L12
        monitor-exit(r0);     // Catch: Throwable -> L12
        if (r1 == null) goto L9;
        r1.cancel();
        return;
    L9:
        if (r2 == null) goto L18;
        r2.cancel();
        return;
    L18:
        return;
    L12:
        th = move-exception;
        throw th;
    }

    public void streamFailed(IOException r7) {
        ConnectionPool r0 = this.connectionPool;
        monitor-enter(r0);
    L39:
        th = move-exception;
        throw th;
    L5:
        if ((r7 instanceof StreamResetException) == false) goto L15;
        ErrorCode r72 = ((StreamResetException) r7).errorCode;     // Catch: Throwable -> L39
        if (r72 != ErrorCode.REFUSED_STREAM) goto L12;
        this.refusedStreamCount++;
        if (this.refusedStreamCount <= 1) goto L28;
        this.route = null;     // Catch: Throwable -> L39
    L27:
        boolean r73 = true;
    L29:
        RealConnection r1 = this.connection;     // Catch: Throwable -> L39
        Socket r74 = deallocate(r73, false, true);     // Catch: Throwable -> L39
        if (this.connection == null) goto L32;
    L33:
        r1 = null;
    L34:
        monitor-exit(r0);     // Catch: Throwable -> L39
        Util.closeQuietly(r74);
        if (r1 == null) goto L44;
        this.eventListener.connectionReleased(this.call, r1);
        return;
    L44:
        return;
    L32:
        if (this.reportedAcquired == true) goto L34;
    L28:
        r73 = false;
        goto L29
    L12:
        if (r72 == ErrorCode.CANCEL) goto L28;
        this.route = null;     // Catch: Throwable -> L39
        goto L27
    L15:
        if (this.connection == null) goto L28;
        if (this.connection.isMultiplexed() == false) goto L21;
        if ((r7 instanceof ConnectionShutdownException) == false) goto L28;
    L21:
        if (this.connection.successCount != 0) goto L27;
        if (this.route == null) goto L26;
        if (r7 == null) goto L26;
        this.routeSelector.connectFailed(this.route, r7);     // Catch: Throwable -> L39
    L26:
        this.route = null;     // Catch: Throwable -> L39
        goto L27
    }

    public void acquire(RealConnection r2, boolean r3) {
        if (this.connection != null) goto L7;
        this.connection = r2;
        this.reportedAcquired = r3;
        r2.allocations.add(new StreamAllocationReference(this, this.callStackTrace));
        return;
    L7:
        throw new IllegalStateException();
    }

    private void release(RealConnection r4) {
        int r0 = r4.allocations.size();
        int r1 = 0;
    L3:
        if (r1 >= r0) goto L10;
        if (r4.allocations.get(r1).get() == this) goto L6;
        r1 = r1 + 1;
        goto L3
    L6:
        r4.allocations.remove(r1);
        return;
    L10:
        throw new IllegalStateException();
    }

    public Socket releaseAndAcquire(RealConnection r4) {
        if (this.codec != null) goto L9;
        if (this.connection.allocations.size() != 1) goto L9;
        Reference<StreamAllocation> r0 = this.connection.allocations.get(0);
        Socket r1 = deallocate(true, false, false);
        this.connection = r4;
        r4.allocations.add(r0);
        return r1;
    L9:
        throw new IllegalStateException();
    }

    public boolean hasMoreRoutes() {
        if (this.route != null) goto L12;
        RouteSelector.Selection r0 = this.routeSelection;
        if (r0 == null) goto L9;
        if (r0.hasNext() == true) goto L12;
    L9:
        if (this.routeSelector.hasNext() == true) goto L12;
        return false;
    L12:
        return true;
    }

    public String toString() {
        RealConnection r0 = connection();
        if (r0 == null) goto L6;
        return r0.toString();
    L6:
        return this.address.toString();
    }
}
