package com.kwad.sdk.utils;

public final class bq {
    private static boolean aKy;
    private static final java.util.List<com.kwad.sdk.utils.bq.a> aKz = null;

    public static class a implements com.kwad.sdk.core.b {
        public java.lang.String aKA;
        public java.lang.String aKB;
        public int level;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final void parseJson(org.json.JSONObject r1) {
                r0 = this;
                return
        }

        @Override
        public final org.json.JSONObject toJson() {
                r3 = this;
                org.json.JSONObject r0 = new org.json.JSONObject
                r0.<init>()
                int r1 = r3.level
                java.lang.String r2 = "level"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                java.lang.String r1 = r3.aKA
                java.lang.String r2 = "ssid"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                java.lang.String r1 = r3.aKB
                java.lang.String r2 = "bssid"
                com.kwad.sdk.utils.t.putValue(r0, r2, r1)
                return r0
        }
    }

    static {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.kwad.sdk.utils.bq.aKz = r0
            return
    }

    public static boolean dm(android.content.Context r6) {
            android.content.pm.ApplicationInfo r0 = r6.getApplicationInfo()
            int r0 = r0.targetSdkVersion
            r1 = 1
            java.lang.String r2 = "android.permission.ACCESS_FINE_LOCATION"
            r3 = 0
            r4 = 29
            r5 = -1
            if (r0 < r4) goto L1b
            int r0 = android.os.Build.VERSION.SDK_INT
            if (r0 < r4) goto L1b
            int r6 = android.support.v4.content.ContextCompat.checkSelfPermission(r6, r2)
            if (r6 != r5) goto L1a
            return r1
        L1a:
            return r3
        L1b:
            int r0 = android.os.Build.VERSION.SDK_INT
            r4 = 23
            if (r0 < r4) goto L30
            int r0 = android.support.v4.content.ContextCompat.checkSelfPermission(r6, r2)
            if (r0 != r5) goto L30
            java.lang.String r0 = "android.permission.ACCESS_COARSE_LOCATION"
            int r6 = android.support.v4.content.ContextCompat.checkSelfPermission(r6, r0)
            if (r6 != r5) goto L30
            return r1
        L30:
            return r3
    }

    public static java.util.List<com.kwad.sdk.utils.bq.a> m(android.content.Context r7, int r8) {
            java.lang.String r0 = ""
            java.lang.String r1 = "\""
            boolean r2 = com.kwad.sdk.utils.at.Jg()
            if (r2 == 0) goto L10
            java.util.ArrayList r7 = new java.util.ArrayList
            r7.<init>()
            return r7
        L10:
            boolean r2 = com.kwad.sdk.utils.bq.aKy
            if (r2 != 0) goto Ldf
            com.kwad.sdk.api.SdkConfig r2 = com.kwad.sdk.service.ServiceProvider.HE()
            boolean r2 = r2.canReadNearbyWifiList()
            if (r2 == 0) goto Ldf
            java.util.List<com.kwad.sdk.utils.bq$a> r2 = com.kwad.sdk.utils.bq.aKz
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto Ldf
            if (r7 != 0) goto L2a
            goto Ldf
        L2a:
            java.lang.Class<com.kwad.sdk.service.a.f> r2 = com.kwad.sdk.service.a.f.class
            java.lang.Object r2 = com.kwad.sdk.service.ServiceProvider.get(r2)
            com.kwad.sdk.service.a.f r2 = (com.kwad.sdk.service.a.f) r2
            r3 = 32
            boolean r2 = r2.R(r3)
            if (r2 == 0) goto L3d
            java.util.List<com.kwad.sdk.utils.bq$a> r7 = com.kwad.sdk.utils.bq.aKz
            return r7
        L3d:
            boolean r2 = dm(r7)     // Catch: java.lang.Exception -> Ld5
            if (r2 == 0) goto L46
            java.util.List<com.kwad.sdk.utils.bq$a> r7 = com.kwad.sdk.utils.bq.aKz     // Catch: java.lang.Exception -> Ld5
            return r7
        L46:
            android.content.Context r7 = r7.getApplicationContext()     // Catch: java.lang.Exception -> Ld5
            java.lang.String r2 = "wifi"
            java.lang.Object r7 = r7.getSystemService(r2)     // Catch: java.lang.Exception -> Ld5
            android.net.wifi.WifiManager r7 = (android.net.wifi.WifiManager) r7     // Catch: java.lang.Exception -> Ld5
            if (r7 != 0) goto L57
            java.util.List<com.kwad.sdk.utils.bq$a> r7 = com.kwad.sdk.utils.bq.aKz     // Catch: java.lang.Exception -> Ld5
            return r7
        L57:
            android.net.wifi.WifiInfo r2 = r7.getConnectionInfo()     // Catch: java.lang.Exception -> Ld5
            java.util.List r7 = r7.getScanResults()     // Catch: java.lang.Exception -> Ld5
            if (r7 == 0) goto Ldc
            java.util.Iterator r7 = r7.iterator()     // Catch: java.lang.Exception -> Ld5
        L65:
            boolean r3 = r7.hasNext()     // Catch: java.lang.Exception -> Ld5
            if (r3 == 0) goto Ldc
            java.lang.Object r3 = r7.next()     // Catch: java.lang.Exception -> Ld5
            android.net.wifi.ScanResult r3 = (android.net.wifi.ScanResult) r3     // Catch: java.lang.Exception -> Ld5
            com.kwad.sdk.utils.bq$a r4 = new com.kwad.sdk.utils.bq$a     // Catch: java.lang.Exception -> Ld5
            r4.<init>()     // Catch: java.lang.Exception -> Ld5
            java.lang.String r5 = r3.SSID     // Catch: java.lang.Exception -> Ld5
            r4.aKA = r5     // Catch: java.lang.Exception -> Ld5
            java.lang.String r5 = r3.BSSID     // Catch: java.lang.Exception -> Ld5
            r4.aKB = r5     // Catch: java.lang.Exception -> Ld5
            int r5 = r3.level     // Catch: java.lang.Exception -> Ld5
            r4.level = r5     // Catch: java.lang.Exception -> Ld5
            java.lang.String r5 = r2.getBSSID()     // Catch: java.lang.Exception -> Ld5
            if (r5 == 0) goto Lc5
            java.lang.String r5 = r3.BSSID     // Catch: java.lang.Exception -> Ld5
            if (r5 == 0) goto Lc5
            java.lang.String r5 = r2.getBSSID()     // Catch: java.lang.Exception -> Ld5
            java.lang.String r5 = r5.replace(r1, r0)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r6 = r3.BSSID     // Catch: java.lang.Exception -> Ld5
            java.lang.String r6 = r6.replace(r1, r0)     // Catch: java.lang.Exception -> Ld5
            boolean r5 = android.text.TextUtils.equals(r5, r6)     // Catch: java.lang.Exception -> Ld5
            if (r5 == 0) goto Lc5
            java.lang.String r5 = r2.getSSID()     // Catch: java.lang.Exception -> Ld5
            if (r5 == 0) goto Lc5
            java.lang.String r5 = r3.SSID     // Catch: java.lang.Exception -> Ld5
            if (r5 == 0) goto Lc5
            java.lang.String r5 = r2.getSSID()     // Catch: java.lang.Exception -> Ld5
            java.lang.String r5 = r5.replace(r1, r0)     // Catch: java.lang.Exception -> Ld5
            java.lang.String r3 = r3.SSID     // Catch: java.lang.Exception -> Ld5
            java.lang.String r3 = r3.replace(r1, r0)     // Catch: java.lang.Exception -> Ld5
            boolean r3 = android.text.TextUtils.equals(r5, r3)     // Catch: java.lang.Exception -> Ld5
            if (r3 == 0) goto Lc5
            java.util.List<com.kwad.sdk.utils.bq$a> r3 = com.kwad.sdk.utils.bq.aKz     // Catch: java.lang.Exception -> Ld5
            r5 = 0
            r3.add(r5, r4)     // Catch: java.lang.Exception -> Ld5
            goto Lca
        Lc5:
            java.util.List<com.kwad.sdk.utils.bq$a> r3 = com.kwad.sdk.utils.bq.aKz     // Catch: java.lang.Exception -> Ld5
            r3.add(r4)     // Catch: java.lang.Exception -> Ld5
        Lca:
            java.util.List<com.kwad.sdk.utils.bq$a> r3 = com.kwad.sdk.utils.bq.aKz     // Catch: java.lang.Exception -> Ld5
            int r3 = r3.size()     // Catch: java.lang.Exception -> Ld5
            if (r3 < r8) goto L65
            java.util.List<com.kwad.sdk.utils.bq$a> r7 = com.kwad.sdk.utils.bq.aKz     // Catch: java.lang.Exception -> Ld5
            return r7
        Ld5:
            r7 = move-exception
            r8 = 1
            com.kwad.sdk.utils.bq.aKy = r8
            com.kwad.sdk.core.e.c.printStackTraceOnly(r7)
        Ldc:
            java.util.List<com.kwad.sdk.utils.bq$a> r7 = com.kwad.sdk.utils.bq.aKz
            return r7
        Ldf:
            java.util.List<com.kwad.sdk.utils.bq$a> r7 = com.kwad.sdk.utils.bq.aKz
            return r7
    }
}
