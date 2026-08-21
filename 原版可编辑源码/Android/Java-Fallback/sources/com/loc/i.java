package com.loc;

public final class i {
    java.lang.Object a;
    com.amap.api.location.AMapLocationClientOption b;
    com.loc.i.a c;
    private android.content.Context d;
    private com.amap.api.location.AMapLocationClient e;
    private android.webkit.WebView f;
    private java.lang.String g;
    private volatile boolean h;



    class a implements com.amap.api.location.AMapLocationListener {
        final com.loc.i a;

        a(com.loc.i r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onLocationChanged(com.amap.api.location.AMapLocation r2) {
                r1 = this;
                com.loc.i r0 = r1.a
                boolean r0 = com.loc.i.c(r0)
                if (r0 == 0) goto L11
                com.loc.i r0 = r1.a
                java.lang.String r2 = com.loc.i.a(r2)
                com.loc.i.a(r0, r2)
            L11:
                return
        }
    }

    public i(android.content.Context r3, android.webkit.WebView r4) {
            r2 = this;
            r2.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.a = r0
            r0 = 0
            r2.e = r0
            r2.f = r0
            java.lang.String r1 = "AMap.Geolocation.cbk"
            r2.g = r1
            r2.b = r0
            r1 = 0
            r2.h = r1
            r2.c = r0
            android.content.Context r3 = r3.getApplicationContext()
            r2.d = r3
            r2.f = r4
            com.loc.i$a r3 = new com.loc.i$a
            r3.<init>(r2)
            r2.c = r3
            return
    }

    static java.lang.String a(com.amap.api.location.AMapLocation r0) {
            java.lang.String r0 = b(r0)
            return r0
    }

    static java.lang.String a(com.loc.i r0) {
            java.lang.String r0 = r0.g
            return r0
    }

    static void a(com.loc.i r0, java.lang.String r1) {
            r0.b(r1)
            return
    }

    private void a(java.lang.String r10) {
            r9 = this;
            com.amap.api.location.AMapLocationClientOption r0 = r9.b
            if (r0 != 0) goto Lb
            com.amap.api.location.AMapLocationClientOption r0 = new com.amap.api.location.AMapLocationClientOption
            r0.<init>()
            r9.b = r0
        Lb:
            r0 = 5
            r1 = 30000(0x7530, double:1.4822E-319)
            r3 = 1
            r4 = 0
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L4a
            r5.<init>(r10)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r10 = "to"
            long r1 = r5.optLong(r10, r1)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r10 = "useGPS"
            int r10 = r5.optInt(r10, r3)     // Catch: java.lang.Throwable -> L4a
            if (r10 != r3) goto L25
            r10 = 1
            goto L26
        L25:
            r10 = 0
        L26:
            java.lang.String r6 = "watch"
            int r6 = r5.optInt(r6, r4)     // Catch: java.lang.Throwable -> L4b
            if (r6 != r3) goto L30
            r6 = 1
            goto L31
        L30:
            r6 = 0
        L31:
            java.lang.String r7 = "interval"
            int r0 = r5.optInt(r7, r0)     // Catch: java.lang.Throwable -> L4c
            java.lang.String r7 = "callback"
            r8 = 0
            java.lang.String r5 = r5.optString(r7, r8)     // Catch: java.lang.Throwable -> L4c
            boolean r7 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L4c
            if (r7 != 0) goto L47
        L44:
            r9.g = r5     // Catch: java.lang.Throwable -> L4c
            goto L4c
        L47:
            java.lang.String r5 = "AMap.Geolocation.cbk"
            goto L44
        L4a:
            r10 = 0
        L4b:
            r6 = 0
        L4c:
            com.amap.api.location.AMapLocationClientOption r5 = r9.b     // Catch: java.lang.Throwable -> L73
            r5.setHttpTimeOut(r1)     // Catch: java.lang.Throwable -> L73
            if (r10 == 0) goto L5b
            com.amap.api.location.AMapLocationClientOption r10 = r9.b     // Catch: java.lang.Throwable -> L73
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Hight_Accuracy     // Catch: java.lang.Throwable -> L73
        L57:
            r10.setLocationMode(r1)     // Catch: java.lang.Throwable -> L73
            goto L60
        L5b:
            com.amap.api.location.AMapLocationClientOption r10 = r9.b     // Catch: java.lang.Throwable -> L73
            com.amap.api.location.AMapLocationClientOption$AMapLocationMode r1 = com.amap.api.location.AMapLocationClientOption.AMapLocationMode.Battery_Saving     // Catch: java.lang.Throwable -> L73
            goto L57
        L60:
            com.amap.api.location.AMapLocationClientOption r10 = r9.b     // Catch: java.lang.Throwable -> L73
            if (r6 != 0) goto L65
            goto L66
        L65:
            r3 = 0
        L66:
            r10.setOnceLocation(r3)     // Catch: java.lang.Throwable -> L73
            if (r6 == 0) goto L73
            com.amap.api.location.AMapLocationClientOption r10 = r9.b     // Catch: java.lang.Throwable -> L73
            int r0 = r0 * 1000
            long r0 = (long) r0     // Catch: java.lang.Throwable -> L73
            r10.setInterval(r0)     // Catch: java.lang.Throwable -> L73
        L73:
            return
    }

    static android.webkit.WebView b(com.loc.i r0) {
            android.webkit.WebView r0 = r0.f
            return r0
    }

    private static java.lang.String b(com.amap.api.location.AMapLocation r5) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "errorInfo"
            java.lang.String r2 = "errorCode"
            if (r5 != 0) goto L16
            r5 = -1
            r0.put(r2, r5)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r5 = "unknownError"
        L11:
            r0.put(r1, r5)     // Catch: java.lang.Throwable -> Lc0
            goto Lc0
        L16:
            int r3 = r5.getErrorCode()     // Catch: java.lang.Throwable -> Lc0
            if (r3 != 0) goto Laa
            r1 = 0
            r0.put(r2, r1)     // Catch: java.lang.Throwable -> Lc0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lc0
            r1.<init>()     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r2 = "x"
            double r3 = r5.getLongitude()     // Catch: java.lang.Throwable -> Lc0
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r2 = "y"
            double r3 = r5.getLatitude()     // Catch: java.lang.Throwable -> Lc0
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r2 = "precision"
            float r3 = r5.getAccuracy()     // Catch: java.lang.Throwable -> Lc0
            double r3 = (double) r3     // Catch: java.lang.Throwable -> Lc0
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r2 = "type"
            int r3 = r5.getLocationType()     // Catch: java.lang.Throwable -> Lc0
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r2 = "country"
            java.lang.String r3 = r5.getCountry()     // Catch: java.lang.Throwable -> Lc0
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r2 = "province"
            java.lang.String r3 = r5.getProvince()     // Catch: java.lang.Throwable -> Lc0
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r2 = "city"
            java.lang.String r3 = r5.getCity()     // Catch: java.lang.Throwable -> Lc0
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r2 = "cityCode"
            java.lang.String r3 = r5.getCityCode()     // Catch: java.lang.Throwable -> Lc0
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r2 = "district"
            java.lang.String r3 = r5.getDistrict()     // Catch: java.lang.Throwable -> Lc0
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r2 = "adCode"
            java.lang.String r3 = r5.getAdCode()     // Catch: java.lang.Throwable -> Lc0
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r2 = "street"
            java.lang.String r3 = r5.getStreet()     // Catch: java.lang.Throwable -> Lc0
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r2 = "streetNum"
            java.lang.String r3 = r5.getStreetNum()     // Catch: java.lang.Throwable -> Lc0
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r2 = "floor"
            java.lang.String r3 = r5.getFloor()     // Catch: java.lang.Throwable -> Lc0
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r2 = "address"
            java.lang.String r5 = r5.getAddress()     // Catch: java.lang.Throwable -> Lc0
            r1.put(r2, r5)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r5 = "result"
            r0.put(r5, r1)     // Catch: java.lang.Throwable -> Lc0
            goto Lc0
        Laa:
            int r3 = r5.getErrorCode()     // Catch: java.lang.Throwable -> Lc0
            r0.put(r2, r3)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r2 = r5.getErrorInfo()     // Catch: java.lang.Throwable -> Lc0
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lc0
            java.lang.String r1 = "locationDetail"
            java.lang.String r5 = r5.getLocationDetail()     // Catch: java.lang.Throwable -> Lc0
            goto L11
        Lc0:
            java.lang.String r5 = r0.toString()
            return r5
    }

    private void b(java.lang.String r4) {
            r3 = this;
            android.webkit.WebView r0 = r3.f     // Catch: java.lang.Throwable -> L3d
            if (r0 == 0) goto L3c
            int r0 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L3d
            r1 = 19
            if (r0 < r1) goto L32
            android.webkit.WebView r0 = r3.f     // Catch: java.lang.Throwable -> L3d
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3d
            java.lang.String r2 = "javascript:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r2 = r3.g     // Catch: java.lang.Throwable -> L3d
            r1.append(r2)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r2 = "('"
            r1.append(r2)     // Catch: java.lang.Throwable -> L3d
            r1.append(r4)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r4 = "')"
            r1.append(r4)     // Catch: java.lang.Throwable -> L3d
            java.lang.String r4 = r1.toString()     // Catch: java.lang.Throwable -> L3d
            com.loc.i$1 r1 = new com.loc.i$1     // Catch: java.lang.Throwable -> L3d
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L3d
            r0.evaluateJavascript(r4, r1)     // Catch: java.lang.Throwable -> L3d
            return
        L32:
            android.webkit.WebView r0 = r3.f     // Catch: java.lang.Throwable -> L3d
            com.loc.i$2 r1 = new com.loc.i$2     // Catch: java.lang.Throwable -> L3d
            r1.<init>(r3, r4)     // Catch: java.lang.Throwable -> L3d
            r0.post(r1)     // Catch: java.lang.Throwable -> L3d
        L3c:
            return
        L3d:
            r4 = move-exception
            java.lang.String r0 = "H5LocationClient"
            java.lang.String r1 = "callbackJs()"
            com.loc.fr.a(r4, r0, r1)
            return
    }

    static boolean c(com.loc.i r0) {
            boolean r0 = r0.h
            return r0
    }

    public final void a() {
            r3 = this;
            android.webkit.WebView r0 = r3.f
            if (r0 == 0) goto L4b
            android.content.Context r0 = r3.d
            if (r0 != 0) goto L9
            goto L4b
        L9:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 >= r1) goto L10
            return
        L10:
            boolean r0 = r3.h
            if (r0 == 0) goto L15
            return
        L15:
            android.webkit.WebView r0 = r3.f     // Catch: java.lang.Throwable -> L4b
            android.webkit.WebSettings r0 = r0.getSettings()     // Catch: java.lang.Throwable -> L4b
            r1 = 1
            r0.setJavaScriptEnabled(r1)     // Catch: java.lang.Throwable -> L4b
            android.webkit.WebView r0 = r3.f     // Catch: java.lang.Throwable -> L4b
            java.lang.String r2 = "AMapAndroidLoc"
            r0.addJavascriptInterface(r3, r2)     // Catch: java.lang.Throwable -> L4b
            android.webkit.WebView r0 = r3.f     // Catch: java.lang.Throwable -> L4b
            java.lang.String r0 = r0.getUrl()     // Catch: java.lang.Throwable -> L4b
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L4b
            if (r0 != 0) goto L37
            android.webkit.WebView r0 = r3.f     // Catch: java.lang.Throwable -> L4b
            r0.reload()     // Catch: java.lang.Throwable -> L4b
        L37:
            com.amap.api.location.AMapLocationClient r0 = r3.e     // Catch: java.lang.Throwable -> L4b
            if (r0 != 0) goto L49
            com.amap.api.location.AMapLocationClient r0 = new com.amap.api.location.AMapLocationClient     // Catch: java.lang.Throwable -> L4b
            android.content.Context r2 = r3.d     // Catch: java.lang.Throwable -> L4b
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L4b
            r3.e = r0     // Catch: java.lang.Throwable -> L4b
            com.loc.i$a r2 = r3.c     // Catch: java.lang.Throwable -> L4b
            r0.setLocationListener(r2)     // Catch: java.lang.Throwable -> L4b
        L49:
            r3.h = r1     // Catch: java.lang.Throwable -> L4b
        L4b:
            return
    }

    public final void b() {
            r4 = this;
            java.lang.Object r0 = r4.a
            monitor-enter(r0)
            r1 = 0
            r4.h = r1     // Catch: java.lang.Throwable -> L22
            com.amap.api.location.AMapLocationClient r1 = r4.e     // Catch: java.lang.Throwable -> L22
            r2 = 0
            if (r1 == 0) goto L1e
            com.amap.api.location.AMapLocationClient r1 = r4.e     // Catch: java.lang.Throwable -> L22
            com.loc.i$a r3 = r4.c     // Catch: java.lang.Throwable -> L22
            r1.unRegisterLocationListener(r3)     // Catch: java.lang.Throwable -> L22
            com.amap.api.location.AMapLocationClient r1 = r4.e     // Catch: java.lang.Throwable -> L22
            r1.stopLocation()     // Catch: java.lang.Throwable -> L22
            com.amap.api.location.AMapLocationClient r1 = r4.e     // Catch: java.lang.Throwable -> L22
            r1.onDestroy()     // Catch: java.lang.Throwable -> L22
            r4.e = r2     // Catch: java.lang.Throwable -> L22
        L1e:
            r4.b = r2     // Catch: java.lang.Throwable -> L22
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
            return
        L22:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L22
            throw r1
    }

    @android.webkit.JavascriptInterface
    public final void getLocation(java.lang.String r3) {
            r2 = this;
            java.lang.Object r0 = r2.a
            monitor-enter(r0)
            boolean r1 = r2.h     // Catch: java.lang.Throwable -> L23
            if (r1 != 0) goto L9
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
            return
        L9:
            r2.a(r3)     // Catch: java.lang.Throwable -> L23
            com.amap.api.location.AMapLocationClient r3 = r2.e     // Catch: java.lang.Throwable -> L23
            if (r3 == 0) goto L21
            com.amap.api.location.AMapLocationClient r3 = r2.e     // Catch: java.lang.Throwable -> L23
            com.amap.api.location.AMapLocationClientOption r1 = r2.b     // Catch: java.lang.Throwable -> L23
            r3.setLocationOption(r1)     // Catch: java.lang.Throwable -> L23
            com.amap.api.location.AMapLocationClient r3 = r2.e     // Catch: java.lang.Throwable -> L23
            r3.stopLocation()     // Catch: java.lang.Throwable -> L23
            com.amap.api.location.AMapLocationClient r3 = r2.e     // Catch: java.lang.Throwable -> L23
            r3.startLocation()     // Catch: java.lang.Throwable -> L23
        L21:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
            return
        L23:
            r3 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L23
            throw r3
    }

    @android.webkit.JavascriptInterface
    public final void stopLocation() {
            r1 = this;
            boolean r0 = r1.h
            if (r0 != 0) goto L5
            return
        L5:
            com.amap.api.location.AMapLocationClient r0 = r1.e
            if (r0 == 0) goto Lc
            r0.stopLocation()
        Lc:
            return
    }
}
