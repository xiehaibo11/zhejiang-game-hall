package com.bumptech.glide.manager;

class DefaultConnectivityMonitor implements com.bumptech.glide.manager.ConnectivityMonitor {
    private final android.content.BroadcastReceiver connectivityReceiver;
    private final android.content.Context context;
    private boolean isConnected;
    private boolean isRegistered;
    private final com.bumptech.glide.manager.ConnectivityMonitor.ConnectivityListener listener;


    public DefaultConnectivityMonitor(android.content.Context r2, com.bumptech.glide.manager.ConnectivityMonitor.ConnectivityListener r3) {
            r1 = this;
            r1.<init>()
            com.bumptech.glide.manager.DefaultConnectivityMonitor$1 r0 = new com.bumptech.glide.manager.DefaultConnectivityMonitor$1
            r0.<init>(r1)
            r1.connectivityReceiver = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.context = r2
            r1.listener = r3
            return
    }

    static boolean access$000(com.bumptech.glide.manager.DefaultConnectivityMonitor r0) {
            boolean r0 = r0.isConnected
            return r0
    }

    static boolean access$002(com.bumptech.glide.manager.DefaultConnectivityMonitor r0, boolean r1) {
            r0.isConnected = r1
            return r1
    }

    static boolean access$100(com.bumptech.glide.manager.DefaultConnectivityMonitor r0, android.content.Context r1) {
            boolean r0 = r0.isConnected(r1)
            return r0
    }

    static com.bumptech.glide.manager.ConnectivityMonitor.ConnectivityListener access$200(com.bumptech.glide.manager.DefaultConnectivityMonitor r0) {
            com.bumptech.glide.manager.ConnectivityMonitor$ConnectivityListener r0 = r0.listener
            return r0
    }

    private boolean isConnected(android.content.Context r2) {
            r1 = this;
            java.lang.String r0 = "connectivity"
            java.lang.Object r2 = r2.getSystemService(r0)
            android.net.ConnectivityManager r2 = (android.net.ConnectivityManager) r2
            android.net.NetworkInfo r2 = r2.getActiveNetworkInfo()
            if (r2 == 0) goto L16
            boolean r2 = r2.isConnected()
            if (r2 == 0) goto L16
            r2 = 1
            goto L17
        L16:
            r2 = 0
        L17:
            return r2
    }

    private void register() {
            r4 = this;
            boolean r0 = r4.isRegistered
            if (r0 == 0) goto L5
            return
        L5:
            android.content.Context r0 = r4.context
            boolean r0 = r4.isConnected(r0)
            r4.isConnected = r0
            android.content.Context r0 = r4.context
            android.content.BroadcastReceiver r1 = r4.connectivityReceiver
            android.content.IntentFilter r2 = new android.content.IntentFilter
            java.lang.String r3 = "android.net.conn.CONNECTIVITY_CHANGE"
            r2.<init>(r3)
            r0.registerReceiver(r1, r2)
            r0 = 1
            r4.isRegistered = r0
            return
    }

    private void unregister() {
            r2 = this;
            boolean r0 = r2.isRegistered
            if (r0 != 0) goto L5
            return
        L5:
            android.content.Context r0 = r2.context
            android.content.BroadcastReceiver r1 = r2.connectivityReceiver
            r0.unregisterReceiver(r1)
            r0 = 0
            r2.isRegistered = r0
            return
    }

    @Override
    public void onDestroy() {
            r0 = this;
            return
    }

    @Override
    public void onStart() {
            r0 = this;
            r0.register()
            return
    }

    @Override
    public void onStop() {
            r0 = this;
            r0.unregister()
            return
    }
}
