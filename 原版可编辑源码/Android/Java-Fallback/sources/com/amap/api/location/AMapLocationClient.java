package com.amap.api.location;

public class AMapLocationClient {
    android.content.Context a;
    com.loc.d b;

    public AMapLocationClient(android.content.Context r3) throws java.lang.Exception {
            r2 = this;
            r2.<init>()
            a(r3)
            if (r3 == 0) goto L1c
            android.content.Context r0 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L1a
            r2.a = r0     // Catch: java.lang.Throwable -> L1a
            com.loc.ft.a(r0)     // Catch: java.lang.Throwable -> L1a
            com.loc.d r0 = new com.loc.d     // Catch: java.lang.Throwable -> L1a
            r1 = 0
            r0.<init>(r3, r1, r1)     // Catch: java.lang.Throwable -> L1a
            r2.b = r0     // Catch: java.lang.Throwable -> L1a
            return
        L1a:
            r3 = move-exception
            goto L24
        L1c:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L1a
            java.lang.String r0 = "Context参数不能为null"
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L1a
            throw r3     // Catch: java.lang.Throwable -> L1a
        L24:
            java.lang.String r0 = "AMClt"
            java.lang.String r1 = "ne1"
            com.loc.fr.a(r3, r0, r1)
            return
    }

    public AMapLocationClient(android.content.Context r3, android.content.Intent r4) throws java.lang.Exception {
            r2 = this;
            r2.<init>()
            a(r3)
            if (r3 == 0) goto L1b
            android.content.Context r3 = r3.getApplicationContext()     // Catch: java.lang.Throwable -> L19
            r2.a = r3     // Catch: java.lang.Throwable -> L19
            com.loc.d r3 = new com.loc.d     // Catch: java.lang.Throwable -> L19
            android.content.Context r0 = r2.a     // Catch: java.lang.Throwable -> L19
            r1 = 0
            r3.<init>(r0, r4, r1)     // Catch: java.lang.Throwable -> L19
            r2.b = r3     // Catch: java.lang.Throwable -> L19
            return
        L19:
            r3 = move-exception
            goto L23
        L1b:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L19
            java.lang.String r4 = "Context参数不能为null"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L19
            throw r3     // Catch: java.lang.Throwable -> L19
        L23:
            java.lang.String r4 = "AMClt"
            java.lang.String r0 = "ne2"
            com.loc.fr.a(r3, r4, r0)
            return
    }

    public AMapLocationClient(android.os.Looper r3, android.content.Context r4) throws java.lang.Exception {
            r2 = this;
            r2.<init>()
            a(r4)
            if (r4 == 0) goto L1b
            android.content.Context r4 = r4.getApplicationContext()     // Catch: java.lang.Throwable -> L19
            r2.a = r4     // Catch: java.lang.Throwable -> L19
            com.loc.d r4 = new com.loc.d     // Catch: java.lang.Throwable -> L19
            android.content.Context r0 = r2.a     // Catch: java.lang.Throwable -> L19
            r1 = 0
            r4.<init>(r0, r1, r3)     // Catch: java.lang.Throwable -> L19
            r2.b = r4     // Catch: java.lang.Throwable -> L19
            return
        L19:
            r3 = move-exception
            goto L23
        L1b:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L19
            java.lang.String r4 = "Context参数不能为null"
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L19
            throw r3     // Catch: java.lang.Throwable -> L19
        L23:
            java.lang.String r4 = "AMClt"
            java.lang.String r0 = "ne3"
            com.loc.fr.a(r3, r4, r0)
            return
    }

    private static void a(android.content.Context r2) throws java.lang.Exception {
            com.loc.w r0 = com.loc.fr.c()
            com.loc.u r2 = com.loc.t.a(r2, r0)
            com.loc.t$c r0 = r2.a
            com.loc.t$c r1 = com.loc.t.c.a
            if (r0 != r1) goto Lf
            return
        Lf:
            java.lang.String r0 = r2.b
            java.lang.String r1 = "AMapLocationClient"
            android.util.Log.e(r1, r0)
            java.lang.Exception r0 = new java.lang.Exception
            java.lang.String r2 = r2.b
            r0.<init>(r2)
            throw r0
    }

    public static java.lang.String getDeviceId(android.content.Context r0) {
            java.lang.String r0 = com.loc.o.q(r0)
            return r0
    }

    public static void setApiKey(java.lang.String r2) {
            com.amap.api.location.AMapLocationClientOption.a = r2     // Catch: java.lang.Throwable -> L3
            return
        L3:
            r2 = move-exception
            java.lang.String r0 = "AMClt"
            java.lang.String r1 = "sKey"
            com.loc.fr.a(r2, r0, r1)
            return
    }

    public static void setHost(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto Le
            r1 = -1
            com.loc.bo.a = r1
            java.lang.String r1 = ""
        Lb:
            com.loc.bo.b = r1
            return
        Le:
            r0 = 1
            com.loc.bo.a = r0
            goto Lb
    }

    public static void updatePrivacyAgree(android.content.Context r1, boolean r2) {
            com.loc.w r0 = com.loc.fr.c()
            com.loc.t.a(r1, r2, r0)
            return
    }

    public static void updatePrivacyShow(android.content.Context r1, boolean r2, boolean r3) {
            com.loc.w r0 = com.loc.fr.c()
            com.loc.t.a(r1, r2, r3, r0)
            return
    }

    public void disableBackgroundLocation(boolean r3) {
            r2 = this;
            com.loc.d r0 = r2.b     // Catch: java.lang.Throwable -> La
            if (r0 == 0) goto L9
            com.loc.d r0 = r2.b     // Catch: java.lang.Throwable -> La
            r0.a(r3)     // Catch: java.lang.Throwable -> La
        L9:
            return
        La:
            r3 = move-exception
            java.lang.String r0 = "AMClt"
            java.lang.String r1 = "dBackL"
            com.loc.fr.a(r3, r0, r1)
            return
    }

    public void enableBackgroundLocation(int r2, android.app.Notification r3) {
            r1 = this;
            com.loc.d r0 = r1.b     // Catch: java.lang.Throwable -> La
            if (r0 == 0) goto L9
            com.loc.d r0 = r1.b     // Catch: java.lang.Throwable -> La
            r0.a(r2, r3)     // Catch: java.lang.Throwable -> La
        L9:
            return
        La:
            r2 = move-exception
            java.lang.String r3 = "AMClt"
            java.lang.String r0 = "eBackL"
            com.loc.fr.a(r2, r3, r0)
            return
    }

    public com.amap.api.location.AMapLocation getLastKnownLocation() {
            r3 = this;
            com.loc.d r0 = r3.b     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto L13
            com.loc.d r0 = r3.b     // Catch: java.lang.Throwable -> Lb
            com.amap.api.location.AMapLocation r0 = r0.e()     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = move-exception
            java.lang.String r1 = "AMClt"
            java.lang.String r2 = "gLastL"
            com.loc.fr.a(r0, r1, r2)
        L13:
            r0 = 0
            return r0
    }

    public java.lang.String getVersion() {
            r1 = this;
            java.lang.String r0 = "6.4.0"
            return r0
    }

    public boolean isStarted() {
            r3 = this;
            com.loc.d r0 = r3.b     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto L13
            com.loc.d r0 = r3.b     // Catch: java.lang.Throwable -> Lb
            boolean r0 = r0.a()     // Catch: java.lang.Throwable -> Lb
            return r0
        Lb:
            r0 = move-exception
            java.lang.String r1 = "AMClt"
            java.lang.String r2 = "isS"
            com.loc.fr.a(r0, r1, r2)
        L13:
            r0 = 0
            return r0
    }

    public void onDestroy() {
            r3 = this;
            com.loc.d r0 = r3.b     // Catch: java.lang.Throwable -> La
            if (r0 == 0) goto L9
            com.loc.d r0 = r3.b     // Catch: java.lang.Throwable -> La
            r0.d()     // Catch: java.lang.Throwable -> La
        L9:
            return
        La:
            r0 = move-exception
            java.lang.String r1 = "AMClt"
            java.lang.String r2 = "onDy"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public void setLocationListener(com.amap.api.location.AMapLocationListener r3) {
            r2 = this;
            if (r3 == 0) goto Le
            com.loc.d r0 = r2.b     // Catch: java.lang.Throwable -> Lc
            if (r0 == 0) goto Lb
            com.loc.d r0 = r2.b     // Catch: java.lang.Throwable -> Lc
            r0.a(r3)     // Catch: java.lang.Throwable -> Lc
        Lb:
            return
        Lc:
            r3 = move-exception
            goto L16
        Le:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> Lc
            java.lang.String r0 = "listener参数不能为null"
            r3.<init>(r0)     // Catch: java.lang.Throwable -> Lc
            throw r3     // Catch: java.lang.Throwable -> Lc
        L16:
            java.lang.String r0 = "AMClt"
            java.lang.String r1 = "sLocL"
            com.loc.fr.a(r3, r0, r1)
            return
    }

    public void setLocationOption(com.amap.api.location.AMapLocationClientOption r3) {
            r2 = this;
            if (r3 == 0) goto L30
            com.loc.d r0 = r2.b     // Catch: java.lang.Throwable -> L2e
            if (r0 == 0) goto Lb
            com.loc.d r0 = r2.b     // Catch: java.lang.Throwable -> L2e
            r0.a(r3)     // Catch: java.lang.Throwable -> L2e
        Lb:
            boolean r0 = r3.b     // Catch: java.lang.Throwable -> L2e
            if (r0 == 0) goto L2d
            r0 = 0
            r3.b = r0     // Catch: java.lang.Throwable -> L2e
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2e
            r0.<init>()     // Catch: java.lang.Throwable -> L2e
            java.lang.String r1 = r3.c     // Catch: java.lang.Throwable -> L2e
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L2e
            if (r1 != 0) goto L26
            java.lang.String r1 = "amap_loc_scenes_type"
            java.lang.String r3 = r3.c     // Catch: java.lang.Throwable -> L2e
            r0.put(r1, r3)     // Catch: java.lang.Throwable -> L2e
        L26:
            android.content.Context r3 = r2.a     // Catch: java.lang.Throwable -> L2e
            java.lang.String r1 = "O019"
            com.loc.fx.a(r3, r1, r0)     // Catch: java.lang.Throwable -> L2e
        L2d:
            return
        L2e:
            r3 = move-exception
            goto L38
        L30:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException     // Catch: java.lang.Throwable -> L2e
            java.lang.String r0 = "LocationManagerOption参数不能为null"
            r3.<init>(r0)     // Catch: java.lang.Throwable -> L2e
            throw r3     // Catch: java.lang.Throwable -> L2e
        L38:
            java.lang.String r0 = "AMClt"
            java.lang.String r1 = "sLocnO"
            com.loc.fr.a(r3, r0, r1)
            return
    }

    public void startAssistantLocation(android.webkit.WebView r3) {
            r2 = this;
            com.loc.d r0 = r2.b     // Catch: java.lang.Throwable -> La
            if (r0 == 0) goto L9
            com.loc.d r0 = r2.b     // Catch: java.lang.Throwable -> La
            r0.a(r3)     // Catch: java.lang.Throwable -> La
        L9:
            return
        La:
            r3 = move-exception
            java.lang.String r0 = "AMClt"
            java.lang.String r1 = "sttAssL1"
            com.loc.fr.a(r3, r0, r1)
            return
    }

    public void startLocation() {
            r3 = this;
            com.loc.d r0 = r3.b     // Catch: java.lang.Throwable -> La
            if (r0 == 0) goto L9
            com.loc.d r0 = r3.b     // Catch: java.lang.Throwable -> La
            r0.b()     // Catch: java.lang.Throwable -> La
        L9:
            return
        La:
            r0 = move-exception
            java.lang.String r1 = "AMClt"
            java.lang.String r2 = "stl"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public void stopAssistantLocation() {
            r3 = this;
            com.loc.d r0 = r3.b     // Catch: java.lang.Throwable -> La
            if (r0 == 0) goto L9
            com.loc.d r0 = r3.b     // Catch: java.lang.Throwable -> La
            r0.f()     // Catch: java.lang.Throwable -> La
        L9:
            return
        La:
            r0 = move-exception
            java.lang.String r1 = "AMClt"
            java.lang.String r2 = "stAssL"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public void stopLocation() {
            r3 = this;
            com.loc.d r0 = r3.b     // Catch: java.lang.Throwable -> La
            if (r0 == 0) goto L9
            com.loc.d r0 = r3.b     // Catch: java.lang.Throwable -> La
            r0.c()     // Catch: java.lang.Throwable -> La
        L9:
            return
        La:
            r0 = move-exception
            java.lang.String r1 = "AMClt"
            java.lang.String r2 = "stl"
            com.loc.fr.a(r0, r1, r2)
            return
    }

    public void unRegisterLocationListener(com.amap.api.location.AMapLocationListener r3) {
            r2 = this;
            com.loc.d r0 = r2.b     // Catch: java.lang.Throwable -> La
            if (r0 == 0) goto L9
            com.loc.d r0 = r2.b     // Catch: java.lang.Throwable -> La
            r0.b(r3)     // Catch: java.lang.Throwable -> La
        L9:
            return
        La:
            r3 = move-exception
            java.lang.String r0 = "AMClt"
            java.lang.String r1 = "unRL"
            com.loc.fr.a(r3, r0, r1)
            return
    }
}
