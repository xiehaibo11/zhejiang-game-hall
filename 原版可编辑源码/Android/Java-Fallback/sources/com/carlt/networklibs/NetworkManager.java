package com.carlt.networklibs;

public class NetworkManager {
    private static volatile com.carlt.networklibs.NetworkManager manager;
    private android.app.Application application;
    private com.carlt.networklibs.NetworkStateReceiver receiver;

    private NetworkManager() {
            r1 = this;
            r1.<init>()
            com.carlt.networklibs.NetworkStateReceiver r0 = new com.carlt.networklibs.NetworkStateReceiver
            r0.<init>()
            r1.receiver = r0
            return
    }

    public static com.carlt.networklibs.NetworkManager getInstance() {
            com.carlt.networklibs.NetworkManager r0 = com.carlt.networklibs.NetworkManager.manager
            if (r0 != 0) goto L17
            java.lang.Class<com.carlt.networklibs.NetworkManager> r0 = com.carlt.networklibs.NetworkManager.class
            monitor-enter(r0)
            com.carlt.networklibs.NetworkManager r1 = com.carlt.networklibs.NetworkManager.manager     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.carlt.networklibs.NetworkManager r1 = new com.carlt.networklibs.NetworkManager     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.carlt.networklibs.NetworkManager.manager = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.carlt.networklibs.NetworkManager r0 = com.carlt.networklibs.NetworkManager.manager
            return r0
    }

    public android.app.Application getApplication() {
            r2 = this;
            android.app.Application r0 = r2.application
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            java.lang.String r1 = "please call init method in your app"
            r0.<init>(r1)
            throw r0
    }

    public void init(android.app.Application r3) {
            r2 = this;
            r2.application = r3
            android.content.IntentFilter r3 = new android.content.IntentFilter
            r3.<init>()
            java.lang.String r0 = "android.net.conn.CONNECTIVITY_CHANGE"
            r3.addAction(r0)
            android.app.Application r0 = r2.application
            com.carlt.networklibs.NetworkStateReceiver r1 = r2.receiver
            r0.registerReceiver(r1, r3)
            return
    }

    public void registerObserver(java.lang.Object r2) {
            r1 = this;
            com.carlt.networklibs.NetworkStateReceiver r0 = r1.receiver
            r0.registerObserver(r2)
            return
    }

    public void unRegisterAllObserver() {
            r1 = this;
            com.carlt.networklibs.NetworkStateReceiver r0 = r1.receiver
            r0.unRegisterAllObserver()
            return
    }

    public void unRegisterObserver(java.lang.Object r2) {
            r1 = this;
            com.carlt.networklibs.NetworkStateReceiver r0 = r1.receiver
            r0.unRegisterObserver(r2)
            return
    }
}
