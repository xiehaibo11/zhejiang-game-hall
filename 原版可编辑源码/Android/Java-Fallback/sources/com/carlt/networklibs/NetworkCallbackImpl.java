package com.carlt.networklibs;

public class NetworkCallbackImpl extends android.net.ConnectivityManager.NetworkCallback {
    public NetworkCallbackImpl() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onAvailable(android.net.Network r2) {
            r1 = this;
            super.onAvailable(r2)
            java.lang.String r2 = "network>>>"
            java.lang.String r0 = "网络已连接"
            android.util.Log.e(r2, r0)
            return
    }

    @Override
    public void onCapabilitiesChanged(android.net.Network r1, android.net.NetworkCapabilities r2) {
            r0 = this;
            super.onCapabilitiesChanged(r1, r2)
            r1 = 16
            boolean r1 = r2.hasCapability(r1)
            if (r1 == 0) goto L1f
            r1 = 1
            boolean r1 = r2.hasTransport(r1)
            java.lang.String r2 = "network>>>"
            if (r1 == 0) goto L1a
            java.lang.String r1 = "网络发生变更，类型为：wifi"
            android.util.Log.e(r2, r1)
            goto L1f
        L1a:
            java.lang.String r1 = "网络发生变更，类型为：4G"
            android.util.Log.e(r2, r1)
        L1f:
            return
    }

    @Override
    public void onLost(android.net.Network r2) {
            r1 = this;
            super.onLost(r2)
            java.lang.String r2 = "network>>>"
            java.lang.String r0 = "网络已断开"
            android.util.Log.e(r2, r0)
            return
    }
}
