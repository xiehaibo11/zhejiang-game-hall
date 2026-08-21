package com.bianfeng.netlibsdk;

import com.bianfeng.netlibsdk.utils.NetLogger;

/* JADX INFO: loaded from: classes.dex */
public class NetlibSdk {
    private static NetlibSdk netlibSdk;
    private RequestQueue queue;

    public String version() {
        return "1.0.1";
    }

    private NetlibSdk() {
        NetLogger.updateState();
        RequestQueue requestQueue = new RequestQueue(new BasicNetwork(new HurlStack()));
        this.queue = requestQueue;
        requestQueue.start();
    }

    public static NetlibSdk getInstance() {
        if (netlibSdk == null) {
            synchronized (NetlibSdk.class) {
                if (netlibSdk == null) {
                    netlibSdk = new NetlibSdk();
                }
            }
        }
        return netlibSdk;
    }

    public void add(Request<?> request) {
        request.setShouldRetryConnectionErrors(true);
        request.setShouldRetryServerErrors(true);
        this.queue.add(request);
    }

    public void add(Request<?> request, boolean z, boolean z2) {
        request.setShouldRetryConnectionErrors(z);
        request.setShouldRetryServerErrors(z2);
        this.queue.add(request);
    }
}
