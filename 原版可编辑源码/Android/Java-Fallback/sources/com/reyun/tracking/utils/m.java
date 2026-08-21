package com.reyun.tracking.utils;

class m implements java.lang.Runnable {
    private java.lang.String a;
    private com.reyun.tracking.utils.n b;

    public m(java.lang.String r1, com.reyun.tracking.utils.n r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    @Override
    public void run() {
            r6 = this;
            java.lang.String r0 = "Tracking"
            java.lang.String r1 = "========== GET Request Begin =========="
            com.reyun.tracking.a.a.d(r0, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Request url:"
            r1.append(r2)
            java.lang.String r2 = r6.a
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.reyun.tracking.a.a.d(r0, r1)
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.lang.String r2 = r6.a     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r1.<init>(r2)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.net.URLConnection r1 = r1.openConnection()     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r2 = 5000(0x1388, float:7.006E-42)
            r1.setConnectTimeout(r2)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r1.setReadTimeout(r2)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.lang.String r2 = "GET"
            r1.setRequestMethod(r2)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            boolean r2 = r1 instanceof javax.net.ssl.HttpsURLConnection     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            if (r2 == 0) goto L51
            java.lang.String r2 = "TLS"
            javax.net.ssl.SSLContext r2 = javax.net.ssl.SSLContext.getInstance(r2)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r3 = 0
            r2.init(r3, r3, r3)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r3 = r1
            javax.net.ssl.HttpsURLConnection r3 = (javax.net.ssl.HttpsURLConnection) r3     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            javax.net.ssl.HttpsURLConnection r3 = (javax.net.ssl.HttpsURLConnection) r3     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            javax.net.ssl.SSLSocketFactory r2 = r2.getSocketFactory()     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r3.setSSLSocketFactory(r2)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
        L51:
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.io.InputStream r4 = r1.getInputStream()     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r3.<init>(r4)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r2.<init>(r3)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            int r1 = r1.getResponseCode()     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r3 = 200(0xc8, float:2.8E-43)
            if (r3 != r1) goto Lc9
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r3.<init>()     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
        L6c:
            java.lang.String r4 = r2.readLine()     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            if (r4 != 0) goto Lc5
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r2.<init>(r3)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r3.<init>()     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.lang.String r4 = "response json:"
            r3.append(r4)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.lang.String r4 = r2.toString()     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r3.append(r4)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            com.reyun.tracking.a.a.d(r0, r3)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.lang.String r0 = "status"
            r3 = 1
            int r0 = r2.optInt(r0, r3)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            if (r0 != 0) goto La3
            com.reyun.tracking.utils.n r0 = r6.b     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r0.a(r1, r2)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            goto L113
        La3:
            com.reyun.tracking.utils.n r1 = r6.b     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.lang.Exception r3 = new java.lang.Exception     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r4.<init>()     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.lang.String r5 = "Request server failed! response Code="
            r4.append(r5)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r4.append(r0)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r3.<init>(r0)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.lang.String r0 = "message"
            java.lang.String r0 = r2.optString(r0)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r1.a(r3, r0)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            goto L113
        Lc5:
            r3.append(r4)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            goto L6c
        Lc9:
            com.reyun.tracking.utils.n r0 = r6.b     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.lang.Exception r2 = new java.lang.Exception     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.lang.String r3 = "Request http server failed!"
            r2.<init>(r3)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r3.<init>()     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.lang.String r4 = "response Code="
            r3.append(r4)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r3.append(r1)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            java.lang.String r1 = r3.toString()     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            r0.a(r2, r1)     // Catch: java.lang.Exception -> Le7 org.json.JSONException -> Led java.security.KeyManagementException -> Lf3 java.security.NoSuchAlgorithmException -> Lf9 java.io.IOException -> Lff java.net.MalformedURLException -> L10b
            goto L113
        Le7:
            r0 = move-exception
            com.reyun.tracking.utils.n r1 = r6.b
            java.lang.String r2 = "response Code=-999"
            goto L110
        Led:
            r0 = move-exception
            com.reyun.tracking.utils.n r1 = r6.b
            java.lang.String r2 = "response Code=-6"
            goto L110
        Lf3:
            r0 = move-exception
            com.reyun.tracking.utils.n r1 = r6.b
            java.lang.String r2 = "response Code=-5"
            goto L110
        Lf9:
            r0 = move-exception
            com.reyun.tracking.utils.n r1 = r6.b
            java.lang.String r2 = "response Code=-4"
            goto L110
        Lff:
            r0 = move-exception
            com.reyun.tracking.utils.n r1 = r6.b
            java.lang.String r2 = "response Code=-3"
            r1.a(r0, r2)
            r0.printStackTrace()
            goto L113
        L10b:
            r0 = move-exception
            com.reyun.tracking.utils.n r1 = r6.b
            java.lang.String r2 = "response Code=-2"
        L110:
            r1.a(r0, r2)
        L113:
            return
    }
}
