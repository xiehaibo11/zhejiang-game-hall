package com.bumptech.glide.manager;

import android.content.Context;
import com.bumptech.glide.manager.ConnectivityMonitor;
import com.kuaishou.weapon.p0.g;

public class ConnectivityMonitorFactory {
    public ConnectivityMonitor build(Context context, ConnectivityMonitor.ConnectivityListener connectivityListener) {
        if (context.checkCallingOrSelfPermission(g.b) == 0) {
            return new DefaultConnectivityMonitor(context, connectivityListener);
        }
        return new NullConnectivityMonitor();
    }
}
