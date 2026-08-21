package com.reyun.tracking.sdk;

final class g implements java.lang.Runnable {
    final boolean a;

    g(boolean r1) {
            r0 = this;
            r0.a = r1
            r0.<init>()
            return
    }

    @Override
    public void run() {
            r6 = this;
            java.lang.String r0 = "https://www.trackingio.com/authorization/close_data_share"
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r1.<init>(r0)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r0.<init>()     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.lang.String r2 = "oid"
            java.lang.String r3 = com.reyun.tracking.sdk.Tracking.access$1100()     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            if (r3 != 0) goto L17
            java.lang.String r3 = "unknown"
            goto L1b
        L17:
            java.lang.String r3 = com.reyun.tracking.sdk.Tracking.access$1100()     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
        L1b:
            r0.put(r2, r3)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.lang.String r2 = "appid"
            java.lang.String r3 = com.reyun.tracking.sdk.Tracking.getAppId()     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r0.put(r2, r3)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.lang.String r2 = "deviceid"
            java.lang.String r3 = com.reyun.tracking.sdk.Tracking.getDeviceId()     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r0.put(r2, r3)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.lang.String r2 = "timestamp"
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r0.put(r2, r3)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.lang.String r2 = "imei"
            android.content.Context r3 = com.reyun.tracking.sdk.Tracking.access$000()     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.lang.String r3 = com.reyun.tracking.a.a.g(r3)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r0.put(r2, r3)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.lang.String r2 = "oaid"
            java.lang.String r3 = com.reyun.tracking.a.h.a     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r0.put(r2, r3)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.lang.String r2 = "androidid"
            android.content.Context r3 = com.reyun.tracking.sdk.Tracking.access$000()     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.lang.String r3 = com.reyun.tracking.a.a.c(r3)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r0.put(r2, r3)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.lang.String r2 = "isopen"
            boolean r3 = r6.a     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r4 = 1
            if (r3 == 0) goto L63
            r3 = 1
            goto L64
        L63:
            r3 = 0
        L64:
            r0.put(r2, r3)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.net.URLConnection r1 = r1.openConnection()     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r2 = 5000(0x1388, float:7.006E-42)
            r1.setConnectTimeout(r2)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r1.setReadTimeout(r2)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.lang.String r2 = "POST"
            r1.setRequestMethod(r2)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.lang.String r2 = "Tracking"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r3.<init>()     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.lang.String r5 = "Request data:\n"
            r3.append(r5)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r3.append(r0)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            com.reyun.tracking.a.a.d(r2, r3)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r1.setDoOutput(r4)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.io.DataOutputStream r2 = new java.io.DataOutputStream     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.io.OutputStream r3 = r1.getOutputStream()     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r2.<init>(r3)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.lang.String r3 = "UTF-8"
            byte[] r0 = r0.getBytes(r3)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r2.write(r0)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r2.flush()     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r2.close()     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            int r0 = r1.getResponseCode()     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r1 = 200(0xc8, float:2.8E-43)
            java.lang.String r2 = "TrackingIO"
            if (r1 != r0) goto Lc6
            boolean r0 = r6.a     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            if (r0 == 0) goto Lc0
            java.lang.String r0 = "打开数据共享成功"
            goto Lc2
        Lc0:
            java.lang.String r0 = "关闭数据共享成功"
        Lc2:
            com.reyun.tracking.a.a.d(r2, r0)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            goto Leb
        Lc6:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r1.<init>()     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.lang.String r3 = "共享数据失败："
            r1.append(r3)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            r1.append(r0)     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            java.lang.String r0 = r1.toString()     // Catch: java.lang.Exception -> Ld8 org.json.JSONException -> Ldd java.io.IOException -> Le2 java.net.ProtocolException -> Le7
            goto Lc2
        Ld8:
            r0 = move-exception
            r0.printStackTrace()
            goto Leb
        Ldd:
            r0 = move-exception
            r0.printStackTrace()
            goto Leb
        Le2:
            r0 = move-exception
            r0.printStackTrace()
            goto Leb
        Le7:
            r0 = move-exception
            r0.printStackTrace()
        Leb:
            return
    }
}
