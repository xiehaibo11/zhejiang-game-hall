package com.cmic.gen.sdk.e;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.Network;
import android.net.NetworkRequest;
import android.os.Build;

/* JADX INFO: compiled from: WifiNetworkUtils.java */
/* JADX INFO: loaded from: classes.dex */
public class r {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static r f1680a;
    private ConnectivityManager b;

    /* JADX INFO: compiled from: WifiNetworkUtils.java */
    public interface a {
        void a(Network network, ConnectivityManager.NetworkCallback networkCallback);
    }

    private r(Context context) {
        try {
            this.b = (ConnectivityManager) context.getSystemService("connectivity");
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static r a(Context context) {
        if (f1680a == null) {
            synchronized (r.class) {
                if (f1680a == null) {
                    f1680a = new r(context);
                }
            }
        }
        return f1680a;
    }

    public synchronized void a(final a aVar) {
        if (this.b == null) {
            c.a("WifiNetworkUtils", "mConnectivityManager 为空");
            aVar.a(null, null);
            return;
        }
        NetworkRequest networkRequestBuild = new NetworkRequest.Builder().addCapability(12).addTransportType(0).build();
        ConnectivityManager.NetworkCallback networkCallback = new ConnectivityManager.NetworkCallback() { // from class: com.cmic.gen.sdk.e.r.1
            @Override // android.net.ConnectivityManager.NetworkCallback
            public void onAvailable(Network network) {
                try {
                    if (r.this.b.getNetworkCapabilities(network).hasTransport(0)) {
                        aVar.a(network, this);
                    } else {
                        c.a("WifiNetworkUtils", "切换失败，未开启数据网络");
                        aVar.a(null, this);
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                    aVar.a(null, this);
                }
            }
        };
        try {
            this.b.requestNetwork(networkRequestBuild, networkCallback);
        } catch (Exception e) {
            e.printStackTrace();
            aVar.a(null, networkCallback);
        }
    }

    public void a(ConnectivityManager.NetworkCallback networkCallback) {
        if (this.b == null) {
            return;
        }
        try {
            if (Build.VERSION.SDK_INT < 21 || networkCallback == null) {
                return;
            }
            c.b("WifiNetworkUtils", "unregisterNetworkCallback");
            this.b.unregisterNetworkCallback(networkCallback);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
