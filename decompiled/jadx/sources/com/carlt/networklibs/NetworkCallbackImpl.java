package com.carlt.networklibs;

import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkCapabilities;
import android.util.Log;
import com.carlt.networklibs.utils.Constants;

/* JADX INFO: loaded from: classes.dex */
public class NetworkCallbackImpl extends ConnectivityManager.NetworkCallback {
    @Override // android.net.ConnectivityManager.NetworkCallback
    public void onAvailable(Network network) {
        super.onAvailable(network);
        Log.e(Constants.LOG_TAG, "网络已连接");
    }

    @Override // android.net.ConnectivityManager.NetworkCallback
    public void onLost(Network network) {
        super.onLost(network);
        Log.e(Constants.LOG_TAG, "网络已断开");
    }

    @Override // android.net.ConnectivityManager.NetworkCallback
    public void onCapabilitiesChanged(Network network, NetworkCapabilities networkCapabilities) {
        super.onCapabilitiesChanged(network, networkCapabilities);
        if (networkCapabilities.hasCapability(16)) {
            if (networkCapabilities.hasTransport(1)) {
                Log.e(Constants.LOG_TAG, "网络发生变更，类型为：wifi");
            } else {
                Log.e(Constants.LOG_TAG, "网络发生变更，类型为：4G");
            }
        }
    }
}
