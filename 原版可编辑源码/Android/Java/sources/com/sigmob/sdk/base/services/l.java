package com.sigmob.sdk.base.services;

import android.content.Context;
import android.content.IntentFilter;
import com.sigmob.sdk.base.services.j;

public class l implements j.a {
    k b = k.b;
    WifiScanReceiver a = new WifiScanReceiver();

    public void a(Context context) {
        IntentFilter intentFilter = new IntentFilter("android.net.wifi.SCAN_RESULTS");
        intentFilter.addAction("android.net.wifi.WIFI_STATE_CHANGED");
        context.registerReceiver(this.a, intentFilter);
    }

    public void b(Context context) {
        context.unregisterReceiver(this.a);
    }

    @Override
    public boolean b() {
        if (this.b == k.a) {
            return false;
        }
        a(com.sigmob.sdk.b.b());
        this.b = k.a;
        return true;
    }

    @Override
    public k c() {
        return this.b;
    }

    @Override
    public void d() {
        if (this.b == k.a) {
            b(com.sigmob.sdk.b.b());
            this.b = k.b;
        }
    }

    @Override
    public Error e() {
        return null;
    }
}
