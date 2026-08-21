package com.bianfeng.netlibsdk;

import android.os.Process;
import com.bianfeng.netlibsdk.utils.NetException;
import com.bianfeng.netlibsdk.utils.NetLogger;
import java.util.concurrent.BlockingQueue;

/* JADX INFO: loaded from: classes.dex */
public class NetworkDispatcher extends Thread {
    private final ResponseDelivery mDelivery;
    private final Network mNetwork;
    private final BlockingQueue<Request<?>> mQueue;
    private volatile boolean mQuit = false;

    private void addTrafficStatsTag(Request<?> request) {
    }

    public NetworkDispatcher(BlockingQueue<Request<?>> blockingQueue, Network network, ResponseDelivery responseDelivery) {
        this.mQueue = blockingQueue;
        this.mNetwork = network;
        this.mDelivery = responseDelivery;
    }

    public void quit() {
        this.mQuit = true;
        interrupt();
    }

    @Override // java.lang.Thread, java.lang.Runnable
    public void run() {
        Process.setThreadPriority(10);
        while (true) {
            try {
                processRequest();
            } catch (InterruptedException unused) {
                if (this.mQuit) {
                    Thread.currentThread().interrupt();
                    return;
                }
                NetLogger.e("Ignoring spurious interrupt of NetworkDispatcher thread; use quit() to terminate it");
            }
        }
    }

    private void processRequest() throws InterruptedException {
        processRequest(this.mQueue.take());
    }

    private void processRequest(Request<?> request) {
        try {
            request.addMarker("network-queue-take");
            if (request.isCanceled()) {
                request.finish("network-discard-cancelled");
                return;
            }
            addTrafficStatsTag(request);
            NetworkResponse networkResponsePerformRequest = this.mNetwork.performRequest(request);
            request.addMarker("network-http-complete");
            if (networkResponsePerformRequest.notModified && request.hasHadResponseDelivered()) {
                request.finish("not-modified");
                return;
            }
            Response<?> networkResponse = request.parseNetworkResponse(networkResponsePerformRequest);
            request.addMarker("network-parse-complete");
            request.markDelivered();
            this.mDelivery.postResponse(request, networkResponse);
        } catch (NetException e) {
            e.printStackTrace();
            parseAndDeliverNetworkError(request, e);
        } catch (Exception e2) {
            NetLogger.e("测试  Unhandled exception %s" + e2.toString());
            this.mDelivery.postError(request, new NetException(e2));
        }
    }

    private void parseAndDeliverNetworkError(Request<?> request, NetException netException) {
        this.mDelivery.postError(request, request.parseNetworkError(netException));
    }
}
