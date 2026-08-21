package com.sigmob.sdk.base.services;

public class WifiScanReceiver extends android.content.BroadcastReceiver {
    private java.util.List<android.net.wifi.ScanResult> a;
    private long b;

    public WifiScanReceiver() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.b = r0
            return
    }

    private void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            com.sigmob.sdk.base.mta.PointEntityAntiSpan r0 = new com.sigmob.sdk.base.mta.PointEntityAntiSpan
            r0.<init>()
            java.lang.String r1 = "wifi_list"
            r0.setCategory(r1)
            java.lang.String r1 = "101"
            r0.setAc_type(r1)
            r0.setWifi_id_list(r3)
            r0.setWifi_mac_list(r4)
            r0.commit()
            return
    }

    public void a(android.content.Context r3) {
            r2 = this;
            android.net.wifi.WifiManager r3 = com.czhj.sdk.common.utils.DeviceUtils.getWifiManager(r3)     // Catch: java.lang.Throwable -> L3e
            if (r3 == 0) goto L3e
            int r0 = r3.getWifiState()     // Catch: java.lang.Throwable -> L3e
            r1 = 3
            if (r0 != r1) goto L3e
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> L3e
            com.sigmob.sdk.base.models.config.Android r0 = r0.j()     // Catch: java.lang.Throwable -> L3e
            java.lang.Integer r0 = r0.up_wifi_list_interval     // Catch: java.lang.Throwable -> L3e
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L3e
            r1 = 60
            if (r0 >= r1) goto L20
            goto L3e
        L20:
            java.lang.String r0 = "private :use_wifi "
            com.czhj.sdk.logger.SigmobLog.d(r0)     // Catch: java.lang.Throwable -> L3e
            boolean r3 = r3.startScan()     // Catch: java.lang.Throwable -> L3e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3e
            r0.<init>()     // Catch: java.lang.Throwable -> L3e
            java.lang.String r1 = "scanResult "
            r0.append(r1)     // Catch: java.lang.Throwable -> L3e
            r0.append(r3)     // Catch: java.lang.Throwable -> L3e
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L3e
            com.czhj.sdk.logger.SigmobLog.i(r3)     // Catch: java.lang.Throwable -> L3e
        L3e:
            return
    }

    @Override
    public void onReceive(android.content.Context r8, android.content.Intent r9) {
            r7 = this;
            java.lang.String r0 = ","
            android.net.wifi.WifiManager r1 = com.czhj.sdk.common.utils.DeviceUtils.getWifiManager(r8)     // Catch: java.lang.Throwable -> L108
            if (r1 != 0) goto L9
            return
        L9:
            java.lang.String r2 = "private :use_wifi"
            com.czhj.sdk.logger.SigmobLog.d(r2)     // Catch: java.lang.Throwable -> L108
            java.lang.String r9 = r9.getAction()     // Catch: java.lang.Throwable -> L108
            r2 = -1
            int r3 = r9.hashCode()     // Catch: java.lang.Throwable -> L108
            r4 = -1875733435(0xffffffff90329445, float:-3.5218533E-29)
            r5 = 0
            r6 = 1
            if (r3 == r4) goto L2e
            r4 = 1878357501(0x6ff575fd, float:1.5193293E29)
            if (r3 == r4) goto L24
            goto L37
        L24:
            java.lang.String r3 = "android.net.wifi.SCAN_RESULTS"
            boolean r9 = r9.equals(r3)     // Catch: java.lang.Throwable -> L108
            if (r9 == 0) goto L37
            r2 = r5
            goto L37
        L2e:
            java.lang.String r3 = "android.net.wifi.WIFI_STATE_CHANGED"
            boolean r9 = r9.equals(r3)     // Catch: java.lang.Throwable -> L108
            if (r9 == 0) goto L37
            r2 = r6
        L37:
            if (r2 == 0) goto L42
            if (r2 == r6) goto L3d
            goto L10e
        L3d:
            r7.a(r8)     // Catch: java.lang.Throwable -> L108
            goto L10e
        L42:
            java.util.List r8 = r1.getScanResults()     // Catch: java.lang.Throwable -> L108
            com.sigmob.sdk.base.i r9 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> L108
            com.sigmob.sdk.base.models.config.Android r9 = r9.j()     // Catch: java.lang.Throwable -> L108
            java.lang.Integer r9 = r9.up_wifi_list_interval     // Catch: java.lang.Throwable -> L108
            int r9 = r9.intValue()     // Catch: java.lang.Throwable -> L108
            r1 = 60
            if (r9 < r1) goto L10e
            long r1 = r7.b     // Catch: java.lang.Throwable -> L108
            int r9 = r9 * 1000
            long r3 = (long) r9     // Catch: java.lang.Throwable -> L108
            long r1 = r1 + r3
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L108
            int r9 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r9 >= 0) goto L10e
            boolean r9 = r8.isEmpty()     // Catch: java.lang.Throwable -> L108
            if (r9 != 0) goto L10e
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L108
            r7.b = r1     // Catch: java.lang.Throwable -> L108
            r7.a = r8     // Catch: java.lang.Throwable -> L108
            java.lang.String r8 = ""
            r9 = r8
        L77:
            java.util.List<android.net.wifi.ScanResult> r1 = r7.a     // Catch: java.lang.Throwable -> L108
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L108
            if (r5 >= r1) goto Ldc
            java.util.List<android.net.wifi.ScanResult> r1 = r7.a     // Catch: java.lang.Throwable -> L108
            java.lang.Object r1 = r1.get(r5)     // Catch: java.lang.Throwable -> L108
            android.net.wifi.ScanResult r1 = (android.net.wifi.ScanResult) r1     // Catch: java.lang.Throwable -> L108
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L108
            r2.<init>()     // Catch: java.lang.Throwable -> L108
            r2.append(r8)     // Catch: java.lang.Throwable -> L108
            java.lang.String r8 = r1.SSID     // Catch: java.lang.Throwable -> L108
            byte[] r8 = r8.getBytes()     // Catch: java.lang.Throwable -> L108
            r3 = 2
            java.lang.String r8 = android.util.Base64.encodeToString(r8, r3)     // Catch: java.lang.Throwable -> L108
            r2.append(r8)     // Catch: java.lang.Throwable -> L108
            java.lang.String r8 = r2.toString()     // Catch: java.lang.Throwable -> L108
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L108
            r2.<init>()     // Catch: java.lang.Throwable -> L108
            r2.append(r9)     // Catch: java.lang.Throwable -> L108
            java.lang.String r9 = r1.BSSID     // Catch: java.lang.Throwable -> L108
            r2.append(r9)     // Catch: java.lang.Throwable -> L108
            java.lang.String r9 = r2.toString()     // Catch: java.lang.Throwable -> L108
            java.util.List<android.net.wifi.ScanResult> r1 = r7.a     // Catch: java.lang.Throwable -> L108
            int r1 = r1.size()     // Catch: java.lang.Throwable -> L108
            int r1 = r1 - r6
            if (r5 == r1) goto Ld9
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L108
            r1.<init>()     // Catch: java.lang.Throwable -> L108
            r1.append(r8)     // Catch: java.lang.Throwable -> L108
            r1.append(r0)     // Catch: java.lang.Throwable -> L108
            java.lang.String r8 = r1.toString()     // Catch: java.lang.Throwable -> L108
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L108
            r1.<init>()     // Catch: java.lang.Throwable -> L108
            r1.append(r9)     // Catch: java.lang.Throwable -> L108
            r1.append(r0)     // Catch: java.lang.Throwable -> L108
            java.lang.String r9 = r1.toString()     // Catch: java.lang.Throwable -> L108
        Ld9:
            int r5 = r5 + 1
            goto L77
        Ldc:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L108
            r0.<init>()     // Catch: java.lang.Throwable -> L108
            java.lang.String r1 = "name List "
            r0.append(r1)     // Catch: java.lang.Throwable -> L108
            r0.append(r8)     // Catch: java.lang.Throwable -> L108
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L108
            com.czhj.sdk.logger.SigmobLog.d(r0)     // Catch: java.lang.Throwable -> L108
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L108
            r0.<init>()     // Catch: java.lang.Throwable -> L108
            java.lang.String r1 = "mac List "
            r0.append(r1)     // Catch: java.lang.Throwable -> L108
            r0.append(r9)     // Catch: java.lang.Throwable -> L108
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L108
            com.czhj.sdk.logger.SigmobLog.d(r0)     // Catch: java.lang.Throwable -> L108
            r7.a(r8, r9)     // Catch: java.lang.Throwable -> L108
            goto L10e
        L108:
            r8 = move-exception
            java.lang.String r9 = "WifiScanReceiver error"
            com.czhj.sdk.logger.SigmobLog.e(r9, r8)
        L10e:
            return
    }
}
