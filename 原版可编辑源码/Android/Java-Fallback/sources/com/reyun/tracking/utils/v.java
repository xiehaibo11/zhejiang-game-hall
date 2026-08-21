package com.reyun.tracking.utils;

class v implements java.lang.Runnable {
    final com.reyun.tracking.utils.s a;

    v(com.reyun.tracking.utils.s r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r5 = this;
            java.lang.String r0 = "TrackingIO"
            java.lang.String r1 = "setAttributionQuery"
            com.reyun.tracking.a.a.d(r0, r1)     // Catch: java.lang.Exception -> L98
            java.net.URL r0 = new java.net.URL     // Catch: java.lang.Exception -> L98
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L98
            r1.<init>()     // Catch: java.lang.Exception -> L98
            java.lang.String r2 = "https://uri6.com/tkio/attributionquery?os=android&appkey="
            r1.append(r2)     // Catch: java.lang.Exception -> L98
            java.lang.String r2 = com.reyun.tracking.sdk.Tracking.getAppId()     // Catch: java.lang.Exception -> L98
            r1.append(r2)     // Catch: java.lang.Exception -> L98
            java.lang.String r2 = "&deviceid="
            r1.append(r2)     // Catch: java.lang.Exception -> L98
            com.reyun.tracking.utils.s r2 = r5.a     // Catch: java.lang.Exception -> L98
            android.content.Context r2 = com.reyun.tracking.utils.s.b(r2)     // Catch: java.lang.Exception -> L98
            java.lang.String r2 = com.reyun.tracking.a.a.b(r2)     // Catch: java.lang.Exception -> L98
            java.lang.String r2 = r2.toUpperCase()     // Catch: java.lang.Exception -> L98
            r1.append(r2)     // Catch: java.lang.Exception -> L98
            java.lang.String r2 = "&oaid="
            r1.append(r2)     // Catch: java.lang.Exception -> L98
            java.lang.String r2 = com.reyun.tracking.a.h.a     // Catch: java.lang.Exception -> L98
            r1.append(r2)     // Catch: java.lang.Exception -> L98
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L98
            r0.<init>(r1)     // Catch: java.lang.Exception -> L98
            java.net.URLConnection r0 = r0.openConnection()     // Catch: java.lang.Exception -> L98
            java.net.HttpURLConnection r0 = (java.net.HttpURLConnection) r0     // Catch: java.lang.Exception -> L98
            r1 = 5000(0x1388, float:7.006E-42)
            r0.setConnectTimeout(r1)     // Catch: java.lang.Exception -> L98
            r0.setReadTimeout(r1)     // Catch: java.lang.Exception -> L98
            java.lang.String r1 = "GET"
            r0.setRequestMethod(r1)     // Catch: java.lang.Exception -> L98
            r0.connect()     // Catch: java.lang.Exception -> L98
            int r1 = r0.getResponseCode()     // Catch: java.lang.Exception -> L98
            com.reyun.tracking.utils.IAttributionQueryListener r2 = com.reyun.tracking.sdk.Tracking.getAttributionQueryListener()     // Catch: java.lang.Exception -> L98
            r3 = 200(0xc8, float:2.8E-43)
            if (r1 != r3) goto L93
            java.io.BufferedReader r3 = new java.io.BufferedReader     // Catch: java.lang.Exception -> L98
            java.io.InputStreamReader r4 = new java.io.InputStreamReader     // Catch: java.lang.Exception -> L98
            java.io.InputStream r0 = r0.getInputStream()     // Catch: java.lang.Exception -> L98
            r4.<init>(r0)     // Catch: java.lang.Exception -> L98
            r3.<init>(r4)     // Catch: java.lang.Exception -> L98
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L98
            r0.<init>()     // Catch: java.lang.Exception -> L98
        L76:
            java.lang.String r4 = r3.readLine()     // Catch: java.lang.Exception -> L98
            if (r4 != 0) goto L8f
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Exception -> L98
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L98
            r3.<init>(r0)     // Catch: java.lang.Exception -> L98
            if (r2 == 0) goto L9c
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Exception -> L98
        L8b:
            r2.onComplete(r1, r0)     // Catch: java.lang.Exception -> L98
            goto L9c
        L8f:
            r0.append(r4)     // Catch: java.lang.Exception -> L98
            goto L76
        L93:
            if (r2 == 0) goto L9c
            java.lang.String r0 = ""
            goto L8b
        L98:
            r0 = move-exception
            r0.printStackTrace()
        L9c:
            return
    }
}
