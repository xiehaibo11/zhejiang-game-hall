package org.cocos2dx.okhttp3;

public final class Dispatcher {
    static final boolean $assertionsDisabled = false;

    @javax.annotation.Nullable
    private java.util.concurrent.ExecutorService executorService;

    @javax.annotation.Nullable
    private java.lang.Runnable idleCallback;
    private int maxRequests;
    private int maxRequestsPerHost;
    private final java.util.Deque<org.cocos2dx.okhttp3.RealCall.AsyncCall> readyAsyncCalls;
    private final java.util.Deque<org.cocos2dx.okhttp3.RealCall.AsyncCall> runningAsyncCalls;
    private final java.util.Deque<org.cocos2dx.okhttp3.RealCall> runningSyncCalls;

    static {
            return
    }

    public Dispatcher() {
            r1 = this;
            r1.<init>()
            r0 = 64
            r1.maxRequests = r0
            r0 = 5
            r1.maxRequestsPerHost = r0
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r1.readyAsyncCalls = r0
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r1.runningAsyncCalls = r0
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r1.runningSyncCalls = r0
            return
    }

    public Dispatcher(java.util.concurrent.ExecutorService r2) {
            r1 = this;
            r1.<init>()
            r0 = 64
            r1.maxRequests = r0
            r0 = 5
            r1.maxRequestsPerHost = r0
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r1.readyAsyncCalls = r0
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r1.runningAsyncCalls = r0
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r1.runningSyncCalls = r0
            r1.executorService = r2
            return
    }

    private <T> void finished(java.util.Deque<T> r1, T r2) {
            r0 = this;
            monitor-enter(r0)
            boolean r1 = r1.remove(r2)     // Catch: java.lang.Throwable -> L1e
            if (r1 == 0) goto L16
            java.lang.Runnable r1 = r0.idleCallback     // Catch: java.lang.Throwable -> L1e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            boolean r2 = r0.promoteAndExecute()
            if (r2 != 0) goto L15
            if (r1 == 0) goto L15
            r1.run()
        L15:
            return
        L16:
            java.lang.AssertionError r1 = new java.lang.AssertionError     // Catch: java.lang.Throwable -> L1e
            java.lang.String r2 = "Call wasn't in-flight!"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L1e
            throw r1     // Catch: java.lang.Throwable -> L1e
        L1e:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            throw r1
    }

    private boolean promoteAndExecute() {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            monitor-enter(r6)
            java.util.Deque<org.cocos2dx.okhttp3.RealCall$AsyncCall> r1 = r6.readyAsyncCalls     // Catch: java.lang.Throwable -> L5a
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L5a
        Lc:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L5a
            if (r2 == 0) goto L38
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L5a
            org.cocos2dx.okhttp3.RealCall$AsyncCall r2 = (org.cocos2dx.okhttp3.RealCall.AsyncCall) r2     // Catch: java.lang.Throwable -> L5a
            java.util.Deque<org.cocos2dx.okhttp3.RealCall$AsyncCall> r3 = r6.runningAsyncCalls     // Catch: java.lang.Throwable -> L5a
            int r3 = r3.size()     // Catch: java.lang.Throwable -> L5a
            int r4 = r6.maxRequests     // Catch: java.lang.Throwable -> L5a
            if (r3 < r4) goto L23
            goto L38
        L23:
            int r3 = r6.runningCallsForHost(r2)     // Catch: java.lang.Throwable -> L5a
            int r4 = r6.maxRequestsPerHost     // Catch: java.lang.Throwable -> L5a
            if (r3 < r4) goto L2c
            goto Lc
        L2c:
            r1.remove()     // Catch: java.lang.Throwable -> L5a
            r0.add(r2)     // Catch: java.lang.Throwable -> L5a
            java.util.Deque<org.cocos2dx.okhttp3.RealCall$AsyncCall> r3 = r6.runningAsyncCalls     // Catch: java.lang.Throwable -> L5a
            r3.add(r2)     // Catch: java.lang.Throwable -> L5a
            goto Lc
        L38:
            int r1 = r6.runningCallsCount()     // Catch: java.lang.Throwable -> L5a
            r2 = 0
            if (r1 <= 0) goto L41
            r1 = 1
            goto L42
        L41:
            r1 = 0
        L42:
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L5a
            int r3 = r0.size()
        L47:
            if (r2 >= r3) goto L59
            java.lang.Object r4 = r0.get(r2)
            org.cocos2dx.okhttp3.RealCall$AsyncCall r4 = (org.cocos2dx.okhttp3.RealCall.AsyncCall) r4
            java.util.concurrent.ExecutorService r5 = r6.executorService()
            r4.executeOn(r5)
            int r2 = r2 + 1
            goto L47
        L59:
            return r1
        L5a:
            r0 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L5a
            throw r0
    }

    private int runningCallsForHost(org.cocos2dx.okhttp3.RealCall.AsyncCall r5) {
            r4 = this;
            java.util.Deque<org.cocos2dx.okhttp3.RealCall$AsyncCall> r0 = r4.runningAsyncCalls
            java.util.Iterator r0 = r0.iterator()
            r1 = 0
        L7:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L2d
            java.lang.Object r2 = r0.next()
            org.cocos2dx.okhttp3.RealCall$AsyncCall r2 = (org.cocos2dx.okhttp3.RealCall.AsyncCall) r2
            org.cocos2dx.okhttp3.RealCall r3 = r2.get()
            boolean r3 = r3.forWebSocket
            if (r3 == 0) goto L1c
            goto L7
        L1c:
            java.lang.String r2 = r2.host()
            java.lang.String r3 = r5.host()
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L7
            int r1 = r1 + 1
            goto L7
        L2d:
            return r1
    }

    public synchronized void cancelAll() {
            r2 = this;
            monitor-enter(r2)
            java.util.Deque<org.cocos2dx.okhttp3.RealCall$AsyncCall> r0 = r2.readyAsyncCalls     // Catch: java.lang.Throwable -> L4d
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L4d
        L7:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L4d
            org.cocos2dx.okhttp3.RealCall$AsyncCall r1 = (org.cocos2dx.okhttp3.RealCall.AsyncCall) r1     // Catch: java.lang.Throwable -> L4d
            org.cocos2dx.okhttp3.RealCall r1 = r1.get()     // Catch: java.lang.Throwable -> L4d
            r1.cancel()     // Catch: java.lang.Throwable -> L4d
            goto L7
        L1b:
            java.util.Deque<org.cocos2dx.okhttp3.RealCall$AsyncCall> r0 = r2.runningAsyncCalls     // Catch: java.lang.Throwable -> L4d
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L4d
        L21:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto L35
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L4d
            org.cocos2dx.okhttp3.RealCall$AsyncCall r1 = (org.cocos2dx.okhttp3.RealCall.AsyncCall) r1     // Catch: java.lang.Throwable -> L4d
            org.cocos2dx.okhttp3.RealCall r1 = r1.get()     // Catch: java.lang.Throwable -> L4d
            r1.cancel()     // Catch: java.lang.Throwable -> L4d
            goto L21
        L35:
            java.util.Deque<org.cocos2dx.okhttp3.RealCall> r0 = r2.runningSyncCalls     // Catch: java.lang.Throwable -> L4d
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L4d
        L3b:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L4d
            if (r1 == 0) goto L4b
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L4d
            org.cocos2dx.okhttp3.RealCall r1 = (org.cocos2dx.okhttp3.RealCall) r1     // Catch: java.lang.Throwable -> L4d
            r1.cancel()     // Catch: java.lang.Throwable -> L4d
            goto L3b
        L4b:
            monitor-exit(r2)
            return
        L4d:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    void enqueue(org.cocos2dx.okhttp3.RealCall.AsyncCall r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.Deque<org.cocos2dx.okhttp3.RealCall$AsyncCall> r0 = r1.readyAsyncCalls     // Catch: java.lang.Throwable -> Lb
            r0.add(r2)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lb
            r1.promoteAndExecute()
            return
        Lb:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> Lb
            throw r2
    }

    synchronized void executed(org.cocos2dx.okhttp3.RealCall r2) {
            r1 = this;
            monitor-enter(r1)
            java.util.Deque<org.cocos2dx.okhttp3.RealCall> r0 = r1.runningSyncCalls     // Catch: java.lang.Throwable -> L8
            r0.add(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    public synchronized java.util.concurrent.ExecutorService executorService() {
            r9 = this;
            monitor-enter(r9)
            java.util.concurrent.ExecutorService r0 = r9.executorService     // Catch: java.lang.Throwable -> L25
            if (r0 != 0) goto L21
            java.util.concurrent.ThreadPoolExecutor r0 = new java.util.concurrent.ThreadPoolExecutor     // Catch: java.lang.Throwable -> L25
            r2 = 0
            r3 = 2147483647(0x7fffffff, float:NaN)
            r4 = 60
            java.util.concurrent.TimeUnit r6 = java.util.concurrent.TimeUnit.SECONDS     // Catch: java.lang.Throwable -> L25
            java.util.concurrent.SynchronousQueue r7 = new java.util.concurrent.SynchronousQueue     // Catch: java.lang.Throwable -> L25
            r7.<init>()     // Catch: java.lang.Throwable -> L25
            java.lang.String r1 = "OkHttp Dispatcher"
            r8 = 0
            java.util.concurrent.ThreadFactory r8 = org.cocos2dx.okhttp3.internal.Util.threadFactory(r1, r8)     // Catch: java.lang.Throwable -> L25
            r1 = r0
            r1.<init>(r2, r3, r4, r6, r7, r8)     // Catch: java.lang.Throwable -> L25
            r9.executorService = r0     // Catch: java.lang.Throwable -> L25
        L21:
            java.util.concurrent.ExecutorService r0 = r9.executorService     // Catch: java.lang.Throwable -> L25
            monitor-exit(r9)
            return r0
        L25:
            r0 = move-exception
            monitor-exit(r9)
            throw r0
    }

    void finished(org.cocos2dx.okhttp3.RealCall.AsyncCall r2) {
            r1 = this;
            java.util.Deque<org.cocos2dx.okhttp3.RealCall$AsyncCall> r0 = r1.runningAsyncCalls
            r1.finished(r0, r2)
            return
    }

    void finished(org.cocos2dx.okhttp3.RealCall r2) {
            r1 = this;
            java.util.Deque<org.cocos2dx.okhttp3.RealCall> r0 = r1.runningSyncCalls
            r1.finished(r0, r2)
            return
    }

    public synchronized int getMaxRequests() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.maxRequests     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized int getMaxRequestsPerHost() {
            r1 = this;
            monitor-enter(r1)
            int r0 = r1.maxRequestsPerHost     // Catch: java.lang.Throwable -> L5
            monitor-exit(r1)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized java.util.List<org.cocos2dx.okhttp3.Call> queuedCalls() {
            r3 = this;
            monitor-enter(r3)
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L26
            r0.<init>()     // Catch: java.lang.Throwable -> L26
            java.util.Deque<org.cocos2dx.okhttp3.RealCall$AsyncCall> r1 = r3.readyAsyncCalls     // Catch: java.lang.Throwable -> L26
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L26
        Lc:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L26
            if (r2 == 0) goto L20
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L26
            org.cocos2dx.okhttp3.RealCall$AsyncCall r2 = (org.cocos2dx.okhttp3.RealCall.AsyncCall) r2     // Catch: java.lang.Throwable -> L26
            org.cocos2dx.okhttp3.RealCall r2 = r2.get()     // Catch: java.lang.Throwable -> L26
            r0.add(r2)     // Catch: java.lang.Throwable -> L26
            goto Lc
        L20:
            java.util.List r0 = java.util.Collections.unmodifiableList(r0)     // Catch: java.lang.Throwable -> L26
            monitor-exit(r3)
            return r0
        L26:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public synchronized int queuedCallsCount() {
            r1 = this;
            monitor-enter(r1)
            java.util.Deque<org.cocos2dx.okhttp3.RealCall$AsyncCall> r0 = r1.readyAsyncCalls     // Catch: java.lang.Throwable -> L9
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L9
            monitor-exit(r1)
            return r0
        L9:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public synchronized java.util.List<org.cocos2dx.okhttp3.Call> runningCalls() {
            r3 = this;
            monitor-enter(r3)
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L2b
            r0.<init>()     // Catch: java.lang.Throwable -> L2b
            java.util.Deque<org.cocos2dx.okhttp3.RealCall> r1 = r3.runningSyncCalls     // Catch: java.lang.Throwable -> L2b
            r0.addAll(r1)     // Catch: java.lang.Throwable -> L2b
            java.util.Deque<org.cocos2dx.okhttp3.RealCall$AsyncCall> r1 = r3.runningAsyncCalls     // Catch: java.lang.Throwable -> L2b
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L2b
        L11:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L2b
            if (r2 == 0) goto L25
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L2b
            org.cocos2dx.okhttp3.RealCall$AsyncCall r2 = (org.cocos2dx.okhttp3.RealCall.AsyncCall) r2     // Catch: java.lang.Throwable -> L2b
            org.cocos2dx.okhttp3.RealCall r2 = r2.get()     // Catch: java.lang.Throwable -> L2b
            r0.add(r2)     // Catch: java.lang.Throwable -> L2b
            goto L11
        L25:
            java.util.List r0 = java.util.Collections.unmodifiableList(r0)     // Catch: java.lang.Throwable -> L2b
            monitor-exit(r3)
            return r0
        L2b:
            r0 = move-exception
            monitor-exit(r3)
            throw r0
    }

    public synchronized int runningCallsCount() {
            r2 = this;
            monitor-enter(r2)
            java.util.Deque<org.cocos2dx.okhttp3.RealCall$AsyncCall> r0 = r2.runningAsyncCalls     // Catch: java.lang.Throwable -> L10
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L10
            java.util.Deque<org.cocos2dx.okhttp3.RealCall> r1 = r2.runningSyncCalls     // Catch: java.lang.Throwable -> L10
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L10
            int r0 = r0 + r1
            monitor-exit(r2)
            return r0
        L10:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public synchronized void setIdleCallback(@javax.annotation.Nullable java.lang.Runnable r1) {
            r0 = this;
            monitor-enter(r0)
            r0.idleCallback = r1     // Catch: java.lang.Throwable -> L5
            monitor-exit(r0)
            return
        L5:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public void setMaxRequests(int r4) {
            r3 = this;
            r0 = 1
            if (r4 < r0) goto Le
            monitor-enter(r3)
            r3.maxRequests = r4     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r3)     // Catch: java.lang.Throwable -> Lb
            r3.promoteAndExecute()
            return
        Lb:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> Lb
            throw r4
        Le:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "max < 1: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public void setMaxRequestsPerHost(int r4) {
            r3 = this;
            r0 = 1
            if (r4 < r0) goto Le
            monitor-enter(r3)
            r3.maxRequestsPerHost = r4     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r3)     // Catch: java.lang.Throwable -> Lb
            r3.promoteAndExecute()
            return
        Lb:
            r4 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> Lb
            throw r4
        Le:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "max < 1: "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }
}
