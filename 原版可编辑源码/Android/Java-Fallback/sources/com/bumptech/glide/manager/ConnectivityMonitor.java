package com.bumptech.glide.manager;

public interface ConnectivityMonitor extends com.bumptech.glide.manager.LifecycleListener {

    public interface ConnectivityListener {
        void onConnectivityChanged(boolean r1);
    }
}
