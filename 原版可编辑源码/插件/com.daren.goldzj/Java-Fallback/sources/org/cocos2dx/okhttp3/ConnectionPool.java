package org.cocos2dx.okhttp3;

import android.support.v7.widget.ActivityChooserView;
import java.lang.ref.Reference;
import java.net.Socket;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Deque;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.Executor;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import javax.annotation.Nullable;
import org.cocos2dx.okhttp3.internal.Util;
import org.cocos2dx.okhttp3.internal.connection.RealConnection;
import org.cocos2dx.okhttp3.internal.connection.RouteDatabase;
import org.cocos2dx.okhttp3.internal.connection.StreamAllocation;
import org.cocos2dx.okhttp3.internal.platform.Platform;

public final class ConnectionPool {
    static final boolean $assertionsDisabled = false;
    private static final Executor executor = null;
    private final Runnable cleanupRunnable;
    boolean cleanupRunning;
    private final Deque<RealConnection> connections;
    private final long keepAliveDurationNs;
    private final int maxIdleConnections;
    final RouteDatabase routeDatabase;

    static {
        executor = new ThreadPoolExecutor(0, ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED, 60, TimeUnit.SECONDS, new SynchronousQueue(), Util.threadFactory("OkHttp ConnectionPool", true));
    }

    public ConnectionPool() {
        this(5, 5, TimeUnit.MINUTES);
    }

    public ConnectionPool(int r3, long r4, TimeUnit r6) {
        this.cleanupRunnable = new 1(this);
        this.connections = new ArrayDeque();
        this.routeDatabase = new RouteDatabase();
        this.maxIdleConnections = r3;
        this.keepAliveDurationNs = r6.toNanos(r4);
        if (r4 <= 0) goto L6;
        return;
    L6:
        throw new IllegalArgumentException("keepAliveDuration <= 0: " + r4);
    }

    public synchronized int idleConnectionCount() {
        monitor-enter(this);
        int r0 = 0;
        Iterator<RealConnection> r1 = this.connections.iterator();     // Catch: Throwable -> L12
    L5:
        if (r1.hasNext() == false) goto L10;
        if (r1.next().allocations.isEmpty() == false) goto L5;
        r0 = r0 + 1;
        goto L5
    L10:
        monitor-exit(this);
        return r0;
    L12:
        th = move-exception;
        throw th;
    }

    public synchronized int connectionCount() {
        monitor-enter(this);
        int r0 = this.connections.size();     // Catch: Throwable -> L6
        monitor-exit(this);
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    @Nullable
    RealConnection get(Address r4, StreamAllocation r5, Route r6) {
        Iterator<RealConnection> r0 = this.connections.iterator();
    L4:
        if (r0.hasNext() == false) goto L9;
        RealConnection r1 = r0.next();
        if (r1.isEligible(r4, r6) == false) goto L4;
        r5.acquire(r1, true);
        return r1;
    L9:
        return null;
    }

    @Nullable
    Socket deduplicate(Address r4, StreamAllocation r5) {
        Iterator<RealConnection> r0 = this.connections.iterator();
    L4:
        if (r0.hasNext() == false) goto L13;
        RealConnection r1 = r0.next();
        if (r1.isEligible(r4, null) == false) goto L4;
        if (r1.isMultiplexed() == false) goto L4;
        if (r1 == r5.connection()) goto L4;
        return r5.releaseAndAcquire(r1);
    L13:
        return null;
    }

    void put(RealConnection r3) {
        if (this.cleanupRunning == true) goto L5;
        this.cleanupRunning = true;
        executor.execute(this.cleanupRunnable);
    L5:
        this.connections.add(r3);
    }

    boolean connectionBecameIdle(RealConnection r2) {
        if (r2.noNewStreams == false) goto L5;
    L9:
        this.connections.remove(r2);
        return true;
    L5:
        if (this.maxIdleConnections == 0) goto L9;
        notifyAll();
        return false;
    }

    public void evictAll() {
        ArrayList r0 = new ArrayList();
        monitor-enter(this);
        Iterator<RealConnection> r1 = this.connections.iterator();     // Catch: Throwable -> L16
    L6:
        if (r1.hasNext() == false) goto L10;
        RealConnection r2 = r1.next();     // Catch: Throwable -> L16
        if (r2.allocations.isEmpty() == false) goto L6;
        r2.noNewStreams = true;     // Catch: Throwable -> L16
        r0.add(r2);     // Catch: Throwable -> L16
        r1.remove();     // Catch: Throwable -> L16
        goto L6
    L10:
        monitor-exit(this);     // Catch: Throwable -> L16
        Iterator r02 = r0.iterator();
    L13:
        if (r02.hasNext() == false) goto L15;
        Util.closeQuietly(((RealConnection) r02.next()).socket());
        goto L13
    L15:
        return;
    L16:
        th = move-exception;
        throw th;
    }

    long cleanup(long r12) {
        monitor-enter(this);
        Iterator<RealConnection> r0 = this.connections.iterator();     // Catch: Throwable -> L32
        long r3 = Long.MIN_VALUE;
        RealConnection r5 = null;
        int r2 = 0;
        int r6 = 0;
    L5:
        if (r0.hasNext() == false) goto L13;
        RealConnection r7 = r0.next();     // Catch: Throwable -> L32
        if (pruneAndGetAllocationCount(r7, r12) > 0) goto L8;
        r2 = r2 + 1;     // Catch: Throwable -> L32
        long r8 = r12 - r7.idleAtNanos;     // Catch: Throwable -> L32
        if (r8 <= r3) goto L5;
        r5 = r7;
        r3 = r8;
        goto L5
    L8:
        r6 = r6 + 1;     // Catch: Throwable -> L32
        goto L5
    L13:
        if (r3 < this.keepAliveDurationNs) goto L15;
    L28:
        this.connections.remove(r5);     // Catch: Throwable -> L32
        monitor-exit(this);     // Catch: Throwable -> L32
        Util.closeQuietly(r5.socket());
        return 0;
    L15:
        if (r2 > this.maxIdleConnections) goto L28;
        if (r2 <= 0) goto L21;
        long r122 = this.keepAliveDurationNs - r3;     // Catch: Throwable -> L32
        monitor-exit(this);     // Catch: Throwable -> L32
        return r122;
    L21:
        if (r6 <= 0) goto L25;
        long r123 = this.keepAliveDurationNs;     // Catch: Throwable -> L32
        monitor-exit(this);     // Catch: Throwable -> L32
        return r123;
    L25:
        this.cleanupRunning = false;     // Catch: Throwable -> L32
        monitor-exit(this);     // Catch: Throwable -> L32
        return -1;
    L32:
        th = move-exception;
        throw th;
    }

    private int pruneAndGetAllocationCount(RealConnection r7, long r8) {
        List<Reference<StreamAllocation>> r0 = r7.allocations;
        int r2 = 0;
    L4:
        if (r2 >= r0.size()) goto L13;
        Reference<StreamAllocation> r3 = r0.get(r2);
        if (r3.get() != null) goto L7;
        Platform.get().logCloseableLeak("A connection to " + r7.route().address().url() + " was leaked. Did you forget to close a response body?", ((StreamAllocation.StreamAllocationReference) r3).callStackTrace);
        r0.remove(r2);
        r7.noNewStreams = true;
        if (r0.isEmpty() == false) goto L4;
        r7.idleAtNanos = r8 - this.keepAliveDurationNs;
        return 0;
    L7:
        r2 = r2 + 1;
        goto L4
    L13:
        return r0.size();
    }
}
