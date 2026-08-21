package com.kwad.sdk.core;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.support.v4.content.ContextCompat;
import com.kuaishou.weapon.p0.g;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.CopyOnWriteArrayList;

public final class NetworkMonitor {
    private static volatile boolean ake;
    private final List<a> akf;
    private boolean akg;
    private final BroadcastReceiver akh;

    enum Holder {
        INSTANCE;

        private final NetworkMonitor mInstance = new NetworkMonitor(0);

        Holder() {
        }

        final NetworkMonitor getInstance() {
            return this.mInstance;
        }
    }

    public enum NetworkState {
        NETWORK_NONE,
        NETWORK_MOBILE,
        NETWORK_WIFI
    }

    public interface a {
        void a(NetworkState networkState);
    }

    private NetworkMonitor() {
        this.akf = new CopyOnWriteArrayList();
        this.akg = false;
        this.akh = new BroadcastReceiver() {
            @Override
            public final void onReceive(Context context, Intent intent) {
                ConnectivityManager connectivityManager;
                NetworkMonitor networkMonitor;
                NetworkState networkState;
                try {
                    if ((ContextCompat.checkSelfPermission(context, g.b) == 0) && (connectivityManager = (ConnectivityManager) context.getSystemService("connectivity")) != null) {
                        NetworkInfo activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
                        if (activeNetworkInfo == null || !activeNetworkInfo.isConnected()) {
                            NetworkMonitor.this.b(NetworkState.NETWORK_NONE);
                            return;
                        }
                        if (1 == activeNetworkInfo.getType()) {
                            networkMonitor = NetworkMonitor.this;
                            networkState = NetworkState.NETWORK_WIFI;
                        } else if (activeNetworkInfo.getType() == 0) {
                            networkMonitor = NetworkMonitor.this;
                            networkState = NetworkState.NETWORK_MOBILE;
                        } else {
                            networkMonitor = NetworkMonitor.this;
                            networkState = NetworkState.NETWORK_NONE;
                        }
                        networkMonitor.b(networkState);
                    }
                } catch (Throwable th) {
                    th.printStackTrace();
                }
            }
        };
    }

    NetworkMonitor(byte b) {
        this();
    }

    private synchronized void aN(Context context) {
        if (ake || context == null) {
            return;
        }
        try {
            context.getApplicationContext().registerReceiver(this.akh, new IntentFilter("android.net.conn.CONNECTIVITY_CHANGE"));
            ake = true;
        } catch (Throwable th) {
            com.kwad.sdk.core.e.c.printStackTrace(th);
        }
    }

    private void b(NetworkState networkState) {
        Iterator<a> it = this.akf.iterator();
        while (it.hasNext()) {
            it.next().a(networkState);
        }
    }

    public static NetworkMonitor getInstance() {
        return Holder.INSTANCE.getInstance();
    }

    public final void a(Context context, a aVar) {
        aN(context);
        this.akf.add(aVar);
    }

    public final void a(a aVar) {
        this.akf.remove(aVar);
    }
}
