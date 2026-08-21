package com.bianfeng.netlibsdk;

public class RequestQueue {
    private static final int DEFAULT_NETWORK_THREAD_POOL_SIZE = 4;
    private final java.util.Set<com.bianfeng.netlibsdk.Request<?>> mCurrentRequests;
    private final com.bianfeng.netlibsdk.ResponseDelivery mDelivery;
    private final com.bianfeng.netlibsdk.NetworkDispatcher[] mDispatchers;
    private final java.util.List<com.bianfeng.netlibsdk.RequestQueue.RequestFinishedListener> mFinishedListeners;
    private final com.bianfeng.netlibsdk.Network mNetwork;
    private final java.util.concurrent.PriorityBlockingQueue<com.bianfeng.netlibsdk.Request<?>> mNetworkQueue;
    private final java.util.concurrent.atomic.AtomicInteger mSequenceGenerator;


    public interface RequestFilter {
        boolean apply(com.bianfeng.netlibsdk.Request<?> r1);
    }

    public interface RequestFinishedListener<T> {
        void onRequestFinished(com.bianfeng.netlibsdk.Request<T> r1);
    }

    public RequestQueue(com.bianfeng.netlibsdk.Network r2) {
            r1 = this;
            r0 = 4
            r1.<init>(r2, r0)
            return
    }

    public RequestQueue(com.bianfeng.netlibsdk.Network r4, int r5) {
            r3 = this;
            com.bianfeng.netlibsdk.ExecutorDelivery r0 = new com.bianfeng.netlibsdk.ExecutorDelivery
            android.os.Handler r1 = new android.os.Handler
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            r1.<init>(r2)
            r0.<init>(r1)
            r3.<init>(r4, r5, r0)
            return
    }

    public RequestQueue(com.bianfeng.netlibsdk.Network r2, int r3, com.bianfeng.netlibsdk.ResponseDelivery r4) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.atomic.AtomicInteger r0 = new java.util.concurrent.atomic.AtomicInteger
            r0.<init>()
            r1.mSequenceGenerator = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r1.mCurrentRequests = r0
            java.util.concurrent.PriorityBlockingQueue r0 = new java.util.concurrent.PriorityBlockingQueue
            r0.<init>()
            r1.mNetworkQueue = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.mFinishedListeners = r0
            r1.mNetwork = r2
            com.bianfeng.netlibsdk.NetworkDispatcher[] r2 = new com.bianfeng.netlibsdk.NetworkDispatcher[r3]
            r1.mDispatchers = r2
            r1.mDelivery = r4
            return
    }

    public <T> com.bianfeng.netlibsdk.Request<T> add(com.bianfeng.netlibsdk.Request<T> r3) {
            r2 = this;
            r3.setRequestQueue(r2)
            java.util.Set<com.bianfeng.netlibsdk.Request<?>> r0 = r2.mCurrentRequests
            monitor-enter(r0)
            java.util.Set<com.bianfeng.netlibsdk.Request<?>> r1 = r2.mCurrentRequests     // Catch: java.lang.Throwable -> L1e
            r1.add(r3)     // Catch: java.lang.Throwable -> L1e
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            int r0 = r2.getSequenceNumber()
            r3.setSequence(r0)
            java.lang.String r0 = "add-to-queue"
            r3.addMarker(r0)
            java.util.concurrent.PriorityBlockingQueue<com.bianfeng.netlibsdk.Request<?>> r0 = r2.mNetworkQueue
            r0.add(r3)
            return r3
        L1e:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1e
            throw r3
    }

    public <T> void addRequestFinishedListener(com.bianfeng.netlibsdk.RequestQueue.RequestFinishedListener<T> r3) {
            r2 = this;
            java.util.List<com.bianfeng.netlibsdk.RequestQueue$RequestFinishedListener> r0 = r2.mFinishedListeners
            monitor-enter(r0)
            java.util.List<com.bianfeng.netlibsdk.RequestQueue$RequestFinishedListener> r1 = r2.mFinishedListeners     // Catch: java.lang.Throwable -> La
            r1.add(r3)     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r3
    }

    public void cancelAll(com.bianfeng.netlibsdk.RequestQueue.RequestFilter r5) {
            r4 = this;
            java.util.Set<com.bianfeng.netlibsdk.Request<?>> r0 = r4.mCurrentRequests
            monitor-enter(r0)
            java.util.Set<com.bianfeng.netlibsdk.Request<?>> r1 = r4.mCurrentRequests     // Catch: java.lang.Throwable -> L21
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L21
        L9:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L21
            if (r2 == 0) goto L1f
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L21
            com.bianfeng.netlibsdk.Request r2 = (com.bianfeng.netlibsdk.Request) r2     // Catch: java.lang.Throwable -> L21
            boolean r3 = r5.apply(r2)     // Catch: java.lang.Throwable -> L21
            if (r3 == 0) goto L9
            r2.cancel()     // Catch: java.lang.Throwable -> L21
            goto L9
        L1f:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            return
        L21:
            r5 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L21
            throw r5
    }

    public void cancelAll(java.lang.Object r2) {
            r1 = this;
            if (r2 == 0) goto Lb
            com.bianfeng.netlibsdk.RequestQueue$1 r0 = new com.bianfeng.netlibsdk.RequestQueue$1
            r0.<init>(r1, r2)
            r1.cancelAll(r0)
            return
        Lb:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Cannot cancelAll with a null tag"
            r2.<init>(r0)
            throw r2
    }

    <T> void finish(com.bianfeng.netlibsdk.Request<T> r4) {
            r3 = this;
            java.util.Set<com.bianfeng.netlibsdk.Request<?>> r0 = r3.mCurrentRequests
            monitor-enter(r0)
            java.util.Set<com.bianfeng.netlibsdk.Request<?>> r1 = r3.mCurrentRequests     // Catch: java.lang.Throwable -> L27
            r1.remove(r4)     // Catch: java.lang.Throwable -> L27
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L27
            java.util.List<com.bianfeng.netlibsdk.RequestQueue$RequestFinishedListener> r1 = r3.mFinishedListeners
            monitor-enter(r1)
            java.util.List<com.bianfeng.netlibsdk.RequestQueue$RequestFinishedListener> r0 = r3.mFinishedListeners     // Catch: java.lang.Throwable -> L24
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L24
        L12:
            boolean r2 = r0.hasNext()     // Catch: java.lang.Throwable -> L24
            if (r2 == 0) goto L22
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> L24
            com.bianfeng.netlibsdk.RequestQueue$RequestFinishedListener r2 = (com.bianfeng.netlibsdk.RequestQueue.RequestFinishedListener) r2     // Catch: java.lang.Throwable -> L24
            r2.onRequestFinished(r4)     // Catch: java.lang.Throwable -> L24
            goto L12
        L22:
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L24
            return
        L24:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L24
            throw r4
        L27:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L27
            throw r4
    }

    public int getSequenceNumber() {
            r1 = this;
            java.util.concurrent.atomic.AtomicInteger r0 = r1.mSequenceGenerator
            int r0 = r0.incrementAndGet()
            return r0
    }

    public <T> void removeRequestFinishedListener(com.bianfeng.netlibsdk.RequestQueue.RequestFinishedListener<T> r3) {
            r2 = this;
            java.util.List<com.bianfeng.netlibsdk.RequestQueue$RequestFinishedListener> r0 = r2.mFinishedListeners
            monitor-enter(r0)
            java.util.List<com.bianfeng.netlibsdk.RequestQueue$RequestFinishedListener> r1 = r2.mFinishedListeners     // Catch: java.lang.Throwable -> La
            r1.remove(r3)     // Catch: java.lang.Throwable -> La
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            return
        La:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> La
            throw r3
    }

    public void start() {
            r5 = this;
            r5.stop()
            r0 = 0
        L4:
            com.bianfeng.netlibsdk.NetworkDispatcher[] r1 = r5.mDispatchers
            int r1 = r1.length
            if (r0 >= r1) goto L1e
            com.bianfeng.netlibsdk.NetworkDispatcher r1 = new com.bianfeng.netlibsdk.NetworkDispatcher
            java.util.concurrent.PriorityBlockingQueue<com.bianfeng.netlibsdk.Request<?>> r2 = r5.mNetworkQueue
            com.bianfeng.netlibsdk.Network r3 = r5.mNetwork
            com.bianfeng.netlibsdk.ResponseDelivery r4 = r5.mDelivery
            r1.<init>(r2, r3, r4)
            com.bianfeng.netlibsdk.NetworkDispatcher[] r2 = r5.mDispatchers
            r2[r0] = r1
            r1.start()
            int r0 = r0 + 1
            goto L4
        L1e:
            return
    }

    public void stop() {
            r4 = this;
            com.bianfeng.netlibsdk.NetworkDispatcher[] r0 = r4.mDispatchers
            int r1 = r0.length
            r2 = 0
        L4:
            if (r2 >= r1) goto L10
            r3 = r0[r2]
            if (r3 == 0) goto Ld
            r3.quit()
        Ld:
            int r2 = r2 + 1
            goto L4
        L10:
            return
    }
}
