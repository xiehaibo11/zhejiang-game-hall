package com.reyun.tracking.utils;

public class o implements java.lang.Runnable {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private com.reyun.tracking.utils.n d;
    private java.lang.Integer e;
    private java.lang.Integer f;
    private java.lang.Boolean g;
    private java.lang.Integer h;
    private int i;

    public o(java.lang.String r1, java.lang.String r2, java.lang.String r3, int r4, com.reyun.tracking.utils.n r5) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.c = r2
            r0.b = r3
            r0.d = r5
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            r0.h = r1
            r1 = 0
            r0.i = r1
            return
    }

    public o(java.lang.String r7, java.lang.String r8, java.lang.String r9, com.reyun.tracking.utils.n r10) {
            r6 = this;
            r4 = 1
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public void a(java.lang.Boolean r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void a(java.lang.Integer r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void b(java.lang.Integer r1) {
            r0 = this;
            r0.f = r1
            return
    }

    @Override
    public void run() {
            r7 = this;
            java.lang.String r0 = "UTF-8"
            java.lang.String r1 = "Tracking"
            java.lang.String r2 = "========== POST Request Begin =========="
            com.reyun.tracking.a.a.d(r1, r2)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r2.<init>()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r3 = "Request url:"
            r2.append(r3)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r3 = r7.a     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r2.append(r3)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            com.reyun.tracking.a.a.d(r1, r2)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.net.URL r2 = new java.net.URL     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r3 = r7.a     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r2.<init>(r3)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.net.URLConnection r2 = r2.openConnection()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.net.HttpURLConnection r2 = (java.net.HttpURLConnection) r2     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r3 = "Content-Type"
            java.lang.String r4 = r7.c     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            if (r4 != 0) goto L35
            java.lang.String r4 = "application/x-www-form-urlencoded"
            goto L37
        L35:
            java.lang.String r4 = r7.c     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
        L37:
            r2.addRequestProperty(r3, r4)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r3 = "Accept-Charset"
            r2.addRequestProperty(r3, r0)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.Boolean r3 = r7.g     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            if (r3 != 0) goto L46
            boolean r3 = com.reyun.tracking.a.i.d     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            goto L4c
        L46:
            java.lang.Boolean r3 = r7.g     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            boolean r3 = r3.booleanValue()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
        L4c:
            if (r3 == 0) goto L55
            java.lang.String r4 = "encrypt"
            java.lang.String r5 = "yes"
            r2.setRequestProperty(r4, r5)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
        L55:
            java.lang.Integer r4 = r7.e     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r5 = 5000(0x1388, float:7.006E-42)
            if (r4 != 0) goto L5e
            r4 = 5000(0x1388, float:7.006E-42)
            goto L64
        L5e:
            java.lang.Integer r4 = r7.e     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            int r4 = r4.intValue()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
        L64:
            r2.setConnectTimeout(r4)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.Integer r4 = r7.f     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            if (r4 != 0) goto L6c
            goto L72
        L6c:
            java.lang.Integer r4 = r7.f     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            int r5 = r4.intValue()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
        L72:
            r2.setReadTimeout(r5)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r4 = "POST"
            r2.setRequestMethod(r4)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            boolean r4 = r2 instanceof javax.net.ssl.HttpsURLConnection     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            if (r4 == 0) goto L94
            java.lang.String r4 = "TLS"
            javax.net.ssl.SSLContext r4 = javax.net.ssl.SSLContext.getInstance(r4)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r5 = 0
            r4.init(r5, r5, r5)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r5 = r2
            javax.net.ssl.HttpsURLConnection r5 = (javax.net.ssl.HttpsURLConnection) r5     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            javax.net.ssl.HttpsURLConnection r5 = (javax.net.ssl.HttpsURLConnection) r5     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            javax.net.ssl.SSLSocketFactory r4 = r4.getSocketFactory()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r5.setSSLSocketFactory(r4)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
        L94:
            java.lang.String r4 = r7.b     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            if (r4 == 0) goto Lde
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r4.<init>()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r5 = "Request data:\n"
            r4.append(r5)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r5 = r7.b     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r4.append(r5)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            com.reyun.tracking.a.a.d(r1, r4)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r4 = 1
            r2.setDoOutput(r4)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.io.DataOutputStream r4 = new java.io.DataOutputStream     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.io.OutputStream r5 = r2.getOutputStream()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r4.<init>(r5)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            if (r3 == 0) goto Ld1
            com.reyun.tracking.utils.a r0 = com.reyun.tracking.utils.a.a()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r3 = r7.b     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            byte[] r0 = r0.a(r3)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r4.write(r0)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r4.flush()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
        Lcd:
            r4.close()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            goto Lde
        Ld1:
            java.lang.String r3 = r7.b     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            byte[] r0 = r3.getBytes(r0)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r4.write(r0)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r4.flush()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            goto Lcd
        Lde:
            java.io.BufferedReader r0 = new java.io.BufferedReader     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.io.InputStreamReader r3 = new java.io.InputStreamReader     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.io.InputStream r4 = r2.getInputStream()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r3.<init>(r4)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r0.<init>(r3)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            int r2 = r2.getResponseCode()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r3 = 200(0xc8, float:2.8E-43)
            if (r3 != r2) goto L157
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r3.<init>()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
        Lf9:
            java.lang.String r4 = r0.readLine()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            if (r4 != 0) goto L153
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r0.<init>(r3)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r3.<init>()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r4 = "response json:"
            r3.append(r4)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r4 = r0.toString()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r3.append(r4)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            com.reyun.tracking.a.a.d(r1, r3)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r3 = "status"
            r4 = -1
            int r3 = r0.optInt(r3, r4)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            if (r3 != 0) goto L130
            com.reyun.tracking.utils.n r3 = r7.d     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r3.a(r2, r0)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            goto L1cb
        L130:
            com.reyun.tracking.utils.n r2 = r7.d     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.Exception r4 = new java.lang.Exception     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r5.<init>()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r6 = "Request server failed! response Code="
            r5.append(r6)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r5.append(r3)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r3 = r5.toString()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r4.<init>(r3)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r3 = "message"
            java.lang.String r0 = r0.optString(r3)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r2.a(r4, r0)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            goto L1cb
        L153:
            r3.append(r4)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            goto Lf9
        L157:
            com.reyun.tracking.utils.n r0 = r7.d     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.Exception r3 = new java.lang.Exception     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r4 = "Request http server failed!"
            r3.<init>(r4)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r4.<init>()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r5 = "response Code="
            r4.append(r5)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r4.append(r2)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            r0.a(r3, r2)     // Catch: java.lang.Exception -> L175 org.json.JSONException -> L177 java.security.KeyManagementException -> L179 java.security.NoSuchAlgorithmException -> L17b java.io.IOException -> L17d java.net.MalformedURLException -> L17f
            goto L1cb
        L175:
            r0 = move-exception
            goto L181
        L177:
            r0 = move-exception
            goto L18d
        L179:
            r0 = move-exception
            goto L199
        L17b:
            r0 = move-exception
            goto L1a5
        L17d:
            r0 = move-exception
            goto L1b1
        L17f:
            r0 = move-exception
            goto L1bd
        L181:
            boolean r2 = com.reyun.tracking.a.i.a
            if (r2 == 0) goto L188
            r0.printStackTrace()
        L188:
            com.reyun.tracking.utils.n r2 = r7.d
            java.lang.String r3 = "response Code=-500"
            goto L1c8
        L18d:
            boolean r2 = com.reyun.tracking.a.i.a
            if (r2 == 0) goto L194
            r0.printStackTrace()
        L194:
            com.reyun.tracking.utils.n r2 = r7.d
            java.lang.String r3 = "response Code=-6"
            goto L1c8
        L199:
            boolean r2 = com.reyun.tracking.a.i.a
            if (r2 == 0) goto L1a0
            r0.printStackTrace()
        L1a0:
            com.reyun.tracking.utils.n r2 = r7.d
            java.lang.String r3 = "response Code=-5"
            goto L1c8
        L1a5:
            boolean r2 = com.reyun.tracking.a.i.a
            if (r2 == 0) goto L1ac
            r0.printStackTrace()
        L1ac:
            com.reyun.tracking.utils.n r2 = r7.d
            java.lang.String r3 = "response Code=-4"
            goto L1c8
        L1b1:
            boolean r2 = com.reyun.tracking.a.i.a
            if (r2 == 0) goto L1b8
            r0.printStackTrace()
        L1b8:
            com.reyun.tracking.utils.n r2 = r7.d
            java.lang.String r3 = "response Code=-3"
            goto L1c8
        L1bd:
            boolean r2 = com.reyun.tracking.a.i.a
            if (r2 == 0) goto L1c4
            r0.printStackTrace()
        L1c4:
            com.reyun.tracking.utils.n r2 = r7.d
            java.lang.String r3 = "response Code=-2"
        L1c8:
            r2.a(r0, r3)
        L1cb:
            java.lang.String r0 = "********** Request End **********"
            com.reyun.tracking.a.a.d(r1, r0)
            return
    }
}
