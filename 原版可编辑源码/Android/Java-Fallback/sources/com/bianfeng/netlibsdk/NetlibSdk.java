package com.bianfeng.netlibsdk;

public class NetlibSdk {
    private static com.bianfeng.netlibsdk.NetlibSdk netlibSdk;
    private com.bianfeng.netlibsdk.RequestQueue queue;

    private NetlibSdk() {
            r2 = this;
            r2.<init>()
            com.bianfeng.netlibsdk.utils.NetLogger.updateState()
            com.bianfeng.netlibsdk.BasicNetwork r0 = new com.bianfeng.netlibsdk.BasicNetwork
            com.bianfeng.netlibsdk.HurlStack r1 = new com.bianfeng.netlibsdk.HurlStack
            r1.<init>()
            r0.<init>(r1)
            com.bianfeng.netlibsdk.RequestQueue r1 = new com.bianfeng.netlibsdk.RequestQueue
            r1.<init>(r0)
            r2.queue = r1
            r1.start()
            return
    }

    public static com.bianfeng.netlibsdk.NetlibSdk getInstance() {
            com.bianfeng.netlibsdk.NetlibSdk r0 = com.bianfeng.netlibsdk.NetlibSdk.netlibSdk
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.netlibsdk.NetlibSdk> r0 = com.bianfeng.netlibsdk.NetlibSdk.class
            monitor-enter(r0)
            com.bianfeng.netlibsdk.NetlibSdk r1 = com.bianfeng.netlibsdk.NetlibSdk.netlibSdk     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.netlibsdk.NetlibSdk r1 = new com.bianfeng.netlibsdk.NetlibSdk     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.netlibsdk.NetlibSdk.netlibSdk = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.netlibsdk.NetlibSdk r0 = com.bianfeng.netlibsdk.NetlibSdk.netlibSdk
            return r0
    }

    public void add(com.bianfeng.netlibsdk.Request<?> r2) {
            r1 = this;
            r0 = 1
            r2.setShouldRetryConnectionErrors(r0)
            r2.setShouldRetryServerErrors(r0)
            com.bianfeng.netlibsdk.RequestQueue r0 = r1.queue
            r0.add(r2)
            return
    }

    public void add(com.bianfeng.netlibsdk.Request<?> r1, boolean r2, boolean r3) {
            r0 = this;
            r1.setShouldRetryConnectionErrors(r2)
            r1.setShouldRetryServerErrors(r3)
            com.bianfeng.netlibsdk.RequestQueue r2 = r0.queue
            r2.add(r1)
            return
    }

    public java.lang.String version() {
            r1 = this;
            java.lang.String r0 = "1.0.1"
            return r0
    }
}
