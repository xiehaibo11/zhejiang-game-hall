package com.sigmob.sdk.base.services;

import android.content.Context;
import android.content.IntentFilter;
import com.sigmob.sdk.base.services.j;

/* JADX INFO: loaded from: classes3.dex */
public class l implements j.a {
    k b = k.STOP;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    WifiScanReceiver f4938a = new WifiScanReceiver();

    public void a(Context context) {
        IntentFilter intentFilter = new IntentFilter("android.net.wifi.SCAN_RESULTS");
        intentFilter.addAction("android.net.wifi.WIFI_STATE_CHANGED");
        context.registerReceiver(this.f4938a, intentFilter);
    }

    public void b(Context context) {
        context.unregisterReceiver(this.f4938a);
    }

    @Override // com.sigmob.sdk.base.services.j.a
    public boolean b() {
        if (this.b == k.RUNNING) {
            return false;
        }
        a(com.sigmob.sdk.b.b());
        this.b = k.RUNNING;
        return true;
    }

    @Override // com.sigmob.sdk.base.services.j.a
    public k c() {
        return this.b;
    }

    @Override // com.sigmob.sdk.base.services.j.a
    public void d() {
        if (this.b == k.RUNNING) {
            b(com.sigmob.sdk.b.b());
            this.b = k.STOP;
        }
    }

    @Override // com.sigmob.sdk.base.services.j.a
    public Error e() {
        return null;
    }
}
