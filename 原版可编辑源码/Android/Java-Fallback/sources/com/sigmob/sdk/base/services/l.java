package com.sigmob.sdk.base.services;

public class l implements com.sigmob.sdk.base.services.j.a {
    com.sigmob.sdk.base.services.WifiScanReceiver a;
    com.sigmob.sdk.base.services.k b;

    public l() {
            r1 = this;
            r1.<init>()
            com.sigmob.sdk.base.services.k r0 = com.sigmob.sdk.base.services.k.b
            r1.b = r0
            com.sigmob.sdk.base.services.WifiScanReceiver r0 = new com.sigmob.sdk.base.services.WifiScanReceiver
            r0.<init>()
            r1.a = r0
            return
    }

    public void a(android.content.Context r3) {
            r2 = this;
            android.content.IntentFilter r0 = new android.content.IntentFilter
            java.lang.String r1 = "android.net.wifi.SCAN_RESULTS"
            r0.<init>(r1)
            java.lang.String r1 = "android.net.wifi.WIFI_STATE_CHANGED"
            r0.addAction(r1)
            com.sigmob.sdk.base.services.WifiScanReceiver r1 = r2.a
            r3.registerReceiver(r1, r0)
            return
    }

    public void b(android.content.Context r2) {
            r1 = this;
            com.sigmob.sdk.base.services.WifiScanReceiver r0 = r1.a
            r2.unregisterReceiver(r0)
            return
    }

    @Override
    public boolean b() {
            r2 = this;
            com.sigmob.sdk.base.services.k r0 = r2.b
            com.sigmob.sdk.base.services.k r1 = com.sigmob.sdk.base.services.k.a
            if (r0 == r1) goto L13
            android.content.Context r0 = com.sigmob.sdk.b.b()
            r2.a(r0)
            com.sigmob.sdk.base.services.k r0 = com.sigmob.sdk.base.services.k.a
            r2.b = r0
            r0 = 1
            return r0
        L13:
            r0 = 0
            return r0
    }

    @Override
    public com.sigmob.sdk.base.services.k c() {
            r1 = this;
            com.sigmob.sdk.base.services.k r0 = r1.b
            return r0
    }

    @Override
    public void d() {
            r2 = this;
            com.sigmob.sdk.base.services.k r0 = r2.b
            com.sigmob.sdk.base.services.k r1 = com.sigmob.sdk.base.services.k.a
            if (r0 != r1) goto L11
            android.content.Context r0 = com.sigmob.sdk.b.b()
            r2.b(r0)
            com.sigmob.sdk.base.services.k r0 = com.sigmob.sdk.base.services.k.b
            r2.b = r0
        L11:
            return
    }

    @Override
    public java.lang.Error e() {
            r1 = this;
            r0 = 0
            return r0
    }
}
