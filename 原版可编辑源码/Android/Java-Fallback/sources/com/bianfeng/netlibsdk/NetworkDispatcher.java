package com.bianfeng.netlibsdk;

public class NetworkDispatcher extends java.lang.Thread {
    private final com.bianfeng.netlibsdk.ResponseDelivery mDelivery;
    private final com.bianfeng.netlibsdk.Network mNetwork;
    private final java.util.concurrent.BlockingQueue<com.bianfeng.netlibsdk.Request<?>> mQueue;
    private volatile boolean mQuit;

    public NetworkDispatcher(java.util.concurrent.BlockingQueue<com.bianfeng.netlibsdk.Request<?>> r2, com.bianfeng.netlibsdk.Network r3, com.bianfeng.netlibsdk.ResponseDelivery r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mQuit = r0
            r1.mQueue = r2
            r1.mNetwork = r3
            r1.mDelivery = r4
            return
    }

    private void addTrafficStatsTag(com.bianfeng.netlibsdk.Request<?> r1) {
            r0 = this;
            return
    }

    private void parseAndDeliverNetworkError(com.bianfeng.netlibsdk.Request<?> r2, com.bianfeng.netlibsdk.utils.NetException r3) {
            r1 = this;
            com.bianfeng.netlibsdk.utils.NetException r3 = r2.parseNetworkError(r3)
            com.bianfeng.netlibsdk.ResponseDelivery r0 = r1.mDelivery
            r0.postError(r2, r3)
            return
    }

    private void processRequest() throws java.lang.InterruptedException {
            r1 = this;
            java.util.concurrent.BlockingQueue<com.bianfeng.netlibsdk.Request<?>> r0 = r1.mQueue
            java.lang.Object r0 = r0.take()
            com.bianfeng.netlibsdk.Request r0 = (com.bianfeng.netlibsdk.Request) r0
            r1.processRequest(r0)
            return
    }

    private void processRequest(com.bianfeng.netlibsdk.Request<?> r4) {
            r3 = this;
            java.lang.String r0 = "network-queue-take"
            r4.addMarker(r0)     // Catch: java.lang.Exception -> L41 com.bianfeng.netlibsdk.utils.NetException -> L65
            boolean r0 = r4.isCanceled()     // Catch: java.lang.Exception -> L41 com.bianfeng.netlibsdk.utils.NetException -> L65
            if (r0 == 0) goto L11
            java.lang.String r0 = "network-discard-cancelled"
            r4.finish(r0)     // Catch: java.lang.Exception -> L41 com.bianfeng.netlibsdk.utils.NetException -> L65
            return
        L11:
            r3.addTrafficStatsTag(r4)     // Catch: java.lang.Exception -> L41 com.bianfeng.netlibsdk.utils.NetException -> L65
            com.bianfeng.netlibsdk.Network r0 = r3.mNetwork     // Catch: java.lang.Exception -> L41 com.bianfeng.netlibsdk.utils.NetException -> L65
            com.bianfeng.netlibsdk.NetworkResponse r0 = r0.performRequest(r4)     // Catch: java.lang.Exception -> L41 com.bianfeng.netlibsdk.utils.NetException -> L65
            java.lang.String r1 = "network-http-complete"
            r4.addMarker(r1)     // Catch: java.lang.Exception -> L41 com.bianfeng.netlibsdk.utils.NetException -> L65
            boolean r1 = r0.notModified     // Catch: java.lang.Exception -> L41 com.bianfeng.netlibsdk.utils.NetException -> L65
            if (r1 == 0) goto L2f
            boolean r1 = r4.hasHadResponseDelivered()     // Catch: java.lang.Exception -> L41 com.bianfeng.netlibsdk.utils.NetException -> L65
            if (r1 == 0) goto L2f
            java.lang.String r0 = "not-modified"
            r4.finish(r0)     // Catch: java.lang.Exception -> L41 com.bianfeng.netlibsdk.utils.NetException -> L65
            return
        L2f:
            com.bianfeng.netlibsdk.Response r0 = r4.parseNetworkResponse(r0)     // Catch: java.lang.Exception -> L41 com.bianfeng.netlibsdk.utils.NetException -> L65
            java.lang.String r1 = "network-parse-complete"
            r4.addMarker(r1)     // Catch: java.lang.Exception -> L41 com.bianfeng.netlibsdk.utils.NetException -> L65
            r4.markDelivered()     // Catch: java.lang.Exception -> L41 com.bianfeng.netlibsdk.utils.NetException -> L65
            com.bianfeng.netlibsdk.ResponseDelivery r1 = r3.mDelivery     // Catch: java.lang.Exception -> L41 com.bianfeng.netlibsdk.utils.NetException -> L65
            r1.postResponse(r4, r0)     // Catch: java.lang.Exception -> L41 com.bianfeng.netlibsdk.utils.NetException -> L65
            goto L6c
        L41:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "测试  Unhandled exception %s"
            r1.append(r2)
            java.lang.String r2 = r0.toString()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.bianfeng.netlibsdk.utils.NetLogger.e(r1)
            com.bianfeng.netlibsdk.utils.NetException r1 = new com.bianfeng.netlibsdk.utils.NetException
            r1.<init>(r0)
            com.bianfeng.netlibsdk.ResponseDelivery r0 = r3.mDelivery
            r0.postError(r4, r1)
            goto L6c
        L65:
            r0 = move-exception
            r0.printStackTrace()
            r3.parseAndDeliverNetworkError(r4, r0)
        L6c:
            return
    }

    public void quit() {
            r1 = this;
            r0 = 1
            r1.mQuit = r0
            r1.interrupt()
            return
    }

    @Override
    public void run() {
            r1 = this;
            r0 = 10
            android.os.Process.setThreadPriority(r0)
        L5:
            r1.processRequest()     // Catch: java.lang.InterruptedException -> L9
            goto L5
        L9:
            boolean r0 = r1.mQuit
            if (r0 == 0) goto L15
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r0.interrupt()
            return
        L15:
            java.lang.String r0 = "Ignoring spurious interrupt of NetworkDispatcher thread; use quit() to terminate it"
            com.bianfeng.netlibsdk.utils.NetLogger.e(r0)
            goto L5
    }
}
