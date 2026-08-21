package com.bumptech.glide.manager;

public class ConnectivityMonitorFactory {
    public ConnectivityMonitorFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    public com.bumptech.glide.manager.ConnectivityMonitor build(android.content.Context r2, com.bumptech.glide.manager.ConnectivityMonitor.ConnectivityListener r3) {
            r1 = this;
            java.lang.String r0 = "android.permission.ACCESS_NETWORK_STATE"
            int r0 = r2.checkCallingOrSelfPermission(r0)
            if (r0 != 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            if (r0 == 0) goto L13
            com.bumptech.glide.manager.DefaultConnectivityMonitor r0 = new com.bumptech.glide.manager.DefaultConnectivityMonitor
            r0.<init>(r2, r3)
            return r0
        L13:
            com.bumptech.glide.manager.NullConnectivityMonitor r2 = new com.bumptech.glide.manager.NullConnectivityMonitor
            r2.<init>()
            return r2
    }
}
