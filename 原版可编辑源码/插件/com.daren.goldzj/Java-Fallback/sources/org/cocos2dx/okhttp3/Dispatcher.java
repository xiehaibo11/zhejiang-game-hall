package org.cocos2dx.okhttp3;

import android.support.v7.widget.ActivityChooserView;
import java.util.ArrayDeque;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Deque;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.SynchronousQueue;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import javax.annotation.Nullable;
import org.cocos2dx.okhttp3.RealCall;
import org.cocos2dx.okhttp3.internal.Util;

public final class Dispatcher {
    static final boolean $assertionsDisabled = false;

    @Nullable
    private ExecutorService executorService;

    @Nullable
    private Runnable idleCallback;
    private int maxRequests;
    private int maxRequestsPerHost;
    private final Deque<RealCall.AsyncCall> readyAsyncCalls;
    private final Deque<RealCall.AsyncCall> runningAsyncCalls;
    private final Deque<RealCall> runningSyncCalls;

    static {
    }

    public Dispatcher(ExecutorService r2) {
        this.maxRequests = 64;
        this.maxRequestsPerHost = 5;
        this.readyAsyncCalls = new ArrayDeque();
        this.runningAsyncCalls = new ArrayDeque();
        this.runningSyncCalls = new ArrayDeque();
        this.executorService = r2;
    }

    public Dispatcher() {
        this.maxRequests = 64;
        this.maxRequestsPerHost = 5;
        this.readyAsyncCalls = new ArrayDeque();
        this.runningAsyncCalls = new ArrayDeque();
        this.runningSyncCalls = new ArrayDeque();
    }

    public synchronized ExecutorService executorService() {
        monitor-enter(this);
    L9:
        th = move-exception;
        throw th;
    L4:
        if (this.executorService != null) goto L6;
        this.executorService = new ThreadPoolExecutor(0, ActivityChooserView.ActivityChooserViewAdapter.MAX_ACTIVITY_COUNT_UNLIMITED, 60, TimeUnit.SECONDS, new SynchronousQueue(), Util.threadFactory("OkHttp Dispatcher", false));     // Catch: Throwable -> L9
    L6:
        ExecutorService r0 = this.executorService;     // Catch: Throwable -> L9
        monitor-exit(this);
        return r0;
    }

    public void setMaxRequests(int r4) {
        if (r4 < 1) goto L13;
        monitor-enter(this);
        this.maxRequests = r4;     // Catch: Throwable -> L9
        monitor-exit(this);     // Catch: Throwable -> L9
        promoteAndExecute();
        return;
    L9:
        th = move-exception;
        throw th;
    L13:
        throw new IllegalArgumentException("max < 1: " + r4);
    }

    public synchronized int getMaxRequests() {
        monitor-enter(this);
        int r0 = this.maxRequests;     // Catch: Throwable -> L6
        monitor-exit(this);
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    public void setMaxRequestsPerHost(int r4) {
        if (r4 < 1) goto L13;
        monitor-enter(this);
        this.maxRequestsPerHost = r4;     // Catch: Throwable -> L9
        monitor-exit(this);     // Catch: Throwable -> L9
        promoteAndExecute();
        return;
    L9:
        th = move-exception;
        throw th;
    L13:
        throw new IllegalArgumentException("max < 1: " + r4);
    }

    public synchronized int getMaxRequestsPerHost() {
        monitor-enter(this);
        int r0 = this.maxRequestsPerHost;     // Catch: Throwable -> L6
        monitor-exit(this);
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    public synchronized void setIdleCallback(@Nullable Runnable r1) {
        monitor-enter(this);
        this.idleCallback = r1;     // Catch: Throwable -> L6
        monitor-exit(this);
        return;
    L6:
        th = move-exception;
        throw th;
    }

    void enqueue(RealCall.AsyncCall r2) {
        monitor-enter(this);
        this.readyAsyncCalls.add(r2);     // Catch: Throwable -> L7
        monitor-exit(this);     // Catch: Throwable -> L7
        promoteAndExecute();
        return;
    L7:
        th = move-exception;
        throw th;
    }

    public synchronized void cancelAll() {
        monitor-enter(this);
        Iterator<RealCall.AsyncCall> r0 = this.readyAsyncCalls.iterator();     // Catch: Throwable -> L18
    L5:
        if (r0.hasNext() == false) goto L7;
        r0.next().get().cancel();     // Catch: Throwable -> L18
        goto L5
    L7:
        Iterator<RealCall.AsyncCall> r02 = this.runningAsyncCalls.iterator();     // Catch: Throwable -> L18
    L9:
        if (r02.hasNext() == false) goto L11;
        r02.next().get().cancel();     // Catch: Throwable -> L18
        goto L9
    L11:
        Iterator<RealCall> r03 = this.runningSyncCalls.iterator();     // Catch: Throwable -> L18
    L12:
        if (r03.hasNext() == false) goto L16;
        r03.next().cancel();     // Catch: Throwable -> L18
        goto L12
    L16:
        monitor-exit(this);
        return;
    L18:
        th = move-exception;
        throw th;
    }

    private boolean promoteAndExecute() {
        ArrayList r0 = new ArrayList();
        monitor-enter(this);
        Iterator<RealCall.AsyncCall> r1 = this.readyAsyncCalls.iterator();     // Catch: Throwable -> L23
    L6:
        if (r1.hasNext() == false) goto L14;
        RealCall.AsyncCall r2 = r1.next();     // Catch: Throwable -> L23
        if (this.runningAsyncCalls.size() >= this.maxRequests) goto L14;
        if (runningCallsForHost(r2) >= this.maxRequestsPerHost) goto L6;
        r1.remove();     // Catch: Throwable -> L23
        r0.add(r2);     // Catch: Throwable -> L23
        this.runningAsyncCalls.add(r2);     // Catch: Throwable -> L23
    L14:
        int r22 = 0;
        if (runningCallsCount() <= 0) goto L17;
        boolean r12 = true;
    L18:
        monitor-exit(this);     // Catch: Throwable -> L23
        int r3 = r0.size();
    L20:
        if (r22 >= r3) goto L22;
        ((RealCall.AsyncCall) r0.get(r22)).executeOn(executorService());
        r22 = r22 + 1;
        goto L20
    L22:
        return r12;
    L17:
        r12 = false;
    L23:
        th = move-exception;
        throw th;
    }

    private int runningCallsForHost(RealCall.AsyncCall r5) {
        Iterator<RealCall.AsyncCall> r0 = this.runningAsyncCalls.iterator();
        int r1 = 0;
    L4:
        if (r0.hasNext() == false) goto L11;
        RealCall.AsyncCall r2 = r0.next();
        if (r2.get().forWebSocket == true) goto L4;
        if (r2.host().equals(r5.host()) == false) goto L4;
        r1 = r1 + 1;
        goto L4
    L11:
        return r1;
    }

    synchronized void executed(RealCall r2) {
        monitor-enter(this);
        this.runningSyncCalls.add(r2);     // Catch: Throwable -> L6
        monitor-exit(this);
        return;
    L6:
        th = move-exception;
        throw th;
    }

    void finished(RealCall.AsyncCall r2) {
        finished(this.runningAsyncCalls, r2);
    }

    void finished(RealCall r2) {
        finished(this.runningSyncCalls, r2);
    }

    private <T> void finished(Deque<T> r1, T r2) {
        monitor-enter(this);
    L14:
        th = move-exception;
        throw th;
    L4:
        if (r1.remove(r2) == false) goto L13;
        Runnable r12 = this.idleCallback;     // Catch: Throwable -> L14
        monitor-exit(this);     // Catch: Throwable -> L14
        if (promoteAndExecute() == true) goto L18;
        if (r12 == null) goto L19;
        r12.run();
        return;
    L19:
        return;
    L18:
        return;
    L13:
        throw new AssertionError("Call wasn't in-flight!");     // Catch: Throwable -> L14
    }

    public synchronized List<Call> queuedCalls() {
        monitor-enter(this);
        ArrayList r0 = new ArrayList();     // Catch: Throwable -> L10
        Iterator<RealCall.AsyncCall> r1 = this.readyAsyncCalls.iterator();     // Catch: Throwable -> L10
    L5:
        if (r1.hasNext() == false) goto L7;
        r0.add(r1.next().get());     // Catch: Throwable -> L10
        goto L5
    L7:
        List<Call> r02 = Collections.unmodifiableList(r0);     // Catch: Throwable -> L10
        monitor-exit(this);
        return r02;
    L10:
        th = move-exception;
        throw th;
    }

    public synchronized List<Call> runningCalls() {
        monitor-enter(this);
        ArrayList r0 = new ArrayList();     // Catch: Throwable -> L10
        r0.addAll(this.runningSyncCalls);     // Catch: Throwable -> L10
        Iterator<RealCall.AsyncCall> r1 = this.runningAsyncCalls.iterator();     // Catch: Throwable -> L10
    L5:
        if (r1.hasNext() == false) goto L7;
        r0.add(r1.next().get());     // Catch: Throwable -> L10
        goto L5
    L7:
        List<Call> r02 = Collections.unmodifiableList(r0);     // Catch: Throwable -> L10
        monitor-exit(this);
        return r02;
    L10:
        th = move-exception;
        throw th;
    }

    public synchronized int queuedCallsCount() {
        monitor-enter(this);
        int r0 = this.readyAsyncCalls.size();     // Catch: Throwable -> L6
        monitor-exit(this);
        return r0;
    L6:
        th = move-exception;
        throw th;
    }

    public synchronized int runningCallsCount() {
        monitor-enter(this);
        int r0 = this.runningAsyncCalls.size() + this.runningSyncCalls.size();
        monitor-exit(this);
        return r0;
    L7:
        th = move-exception;
        throw th;
    }
}
