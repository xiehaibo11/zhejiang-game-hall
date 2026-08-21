package com.kwad.sdk.api.loader;

class f {
    static final boolean $assertionsDisabled = false;
    private final com.kwad.sdk.api.loader.v aio;
    private int aip;
    private java.lang.String aiq;
    private final java.lang.String mUrl;

    public interface a {
        void a(com.kwad.sdk.api.loader.a.b r1);
    }

    static {
            return
    }

    f(com.kwad.sdk.api.loader.v r1) {
            r0 = this;
            r0.<init>()
            r0.aio = r1
            java.lang.String r1 = r1.yz()
            r0.mUrl = r1
            r0.aiq = r1
            return
    }

    private static java.lang.String a(java.io.InputStream r5) {
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]
            r1 = 0
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L31
            r2.<init>()     // Catch: java.lang.Throwable -> L2f java.io.IOException -> L31
        La:
            int r3 = r5.read(r0)     // Catch: java.io.IOException -> L2d java.lang.Throwable -> L4b
            r4 = -1
            if (r3 == r4) goto L16
            r4 = 0
            r2.write(r0, r4, r3)     // Catch: java.io.IOException -> L2d java.lang.Throwable -> L4b
            goto La
        L16:
            java.lang.String r0 = r2.toString()     // Catch: java.io.IOException -> L2d java.lang.Throwable -> L4b
            if (r5 == 0) goto L24
            r5.close()     // Catch: java.io.IOException -> L20
            goto L24
        L20:
            r5 = move-exception
            r5.printStackTrace()
        L24:
            r2.close()     // Catch: java.io.IOException -> L28
            goto L2c
        L28:
            r5 = move-exception
            r5.printStackTrace()
        L2c:
            return r0
        L2d:
            r0 = move-exception
            goto L33
        L2f:
            r0 = move-exception
            goto L4d
        L31:
            r0 = move-exception
            r2 = r1
        L33:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L4b
            if (r5 == 0) goto L40
            r5.close()     // Catch: java.io.IOException -> L3c
            goto L40
        L3c:
            r5 = move-exception
            r5.printStackTrace()
        L40:
            if (r2 == 0) goto L4a
            r2.close()     // Catch: java.io.IOException -> L46
            goto L4a
        L46:
            r5 = move-exception
            r5.printStackTrace()
        L4a:
            return r1
        L4b:
            r0 = move-exception
            r1 = r2
        L4d:
            if (r5 == 0) goto L57
            r5.close()     // Catch: java.io.IOException -> L53
            goto L57
        L53:
            r5 = move-exception
            r5.printStackTrace()
        L57:
            if (r1 == 0) goto L61
            r1.close()     // Catch: java.io.IOException -> L5d
            goto L61
        L5d:
            r5 = move-exception
            r5.printStackTrace()
        L61:
            throw r0
    }

    private static void a(java.net.HttpURLConnection r2, java.util.Map<java.lang.String, java.lang.String> r3) {
            if (r3 == 0) goto L28
            if (r2 == 0) goto L28
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        Lc:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L28
            java.lang.Object r0 = r3.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            java.lang.String r0 = (java.lang.String) r0
            r2.setRequestProperty(r1, r0)
            goto Lc
        L28:
            return
    }

    private static java.net.HttpURLConnection bW(java.lang.String r2) {
            java.net.URL r0 = new java.net.URL
            r0.<init>(r2)
            java.net.URLConnection r2 = r0.openConnection()
            java.net.HttpURLConnection r2 = (java.net.HttpURLConnection) r2
            com.kwad.sdk.api.core.TLSConnectionUtils.wrapHttpURLConnection(r2)
            r0 = 10000(0x2710, float:1.4013E-41)
            r2.setConnectTimeout(r0)
            r0 = 30000(0x7530, float:4.2039E-41)
            r2.setReadTimeout(r0)
            r0 = 0
            r2.setUseCaches(r0)
            r0 = 1
            r2.setDoInput(r0)
            java.lang.String r1 = "POST"
            r2.setRequestMethod(r1)
            r2.setDoOutput(r0)
            r2.setInstanceFollowRedirects(r0)
            return r2
    }

    private java.lang.String d(java.util.Map<java.lang.String, java.lang.String> r10) {
            r9 = this;
            com.kwad.sdk.api.loader.v r0 = r9.aio
            android.content.Context r0 = r0.getContext()
            java.lang.String r0 = com.kwad.sdk.api.loader.g.ay(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L1a
            com.kwad.sdk.api.loader.v r0 = r9.aio
            com.kwad.sdk.api.core.IKsAdSDK r0 = r0.yA()
            java.lang.String r0 = r0.getSDKVersion()
        L1a:
            com.kwad.sdk.api.loader.v r1 = r9.aio
            com.kwad.sdk.api.core.IKsAdSDK r1 = r1.yA()
            int r1 = r1.getSDKVersionCode()
            com.kwad.sdk.api.loader.v r2 = r9.aio
            com.kwad.sdk.api.core.IKsAdSDK r2 = r2.yA()
            org.json.JSONObject r2 = r2.getAppInfo()
            com.kwad.sdk.api.loader.v r3 = r9.aio
            com.kwad.sdk.api.core.IKsAdSDK r3 = r3.yA()
            org.json.JSONObject r3 = r3.getDeviceInfo()
            com.kwad.sdk.api.loader.v r4 = r9.aio
            com.kwad.sdk.api.core.IKsAdSDK r4 = r4.yA()
            org.json.JSONObject r4 = r4.getNetworkInfo()
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            java.lang.String r6 = "3.3.42"
            java.lang.String r7 = "sdkApiVersion"
            com.kwad.sdk.api.loader.l.putValue(r5, r7, r6)
            r7 = 3034200(0x2e4c58, float:4.25182E-39)
            java.lang.String r8 = "sdkApiVersionCode"
            com.kwad.sdk.api.loader.l.putValue(r5, r8, r7)
            java.lang.String r7 = "sdkVersion"
            com.kwad.sdk.api.loader.l.putValue(r5, r7, r0)
            java.lang.String r0 = "SDKVersionCode"
            com.kwad.sdk.api.loader.l.putValue(r5, r0, r1)
            r0 = 1
            java.lang.String r1 = "sdkType"
            com.kwad.sdk.api.loader.l.putValue(r5, r1, r0)
            java.lang.String r0 = "appInfo"
            com.kwad.sdk.api.loader.l.putValue(r5, r0, r2)
            java.lang.String r0 = "deviceInfo"
            com.kwad.sdk.api.loader.l.putValue(r5, r0, r3)
            java.lang.String r0 = "networkInfo"
            com.kwad.sdk.api.loader.l.putValue(r5, r0, r4)
            java.lang.String r0 = com.kwad.sdk.api.loader.w.wO()
            java.lang.String r1 = "sdkAbi"
            com.kwad.sdk.api.loader.l.putValue(r5, r1, r0)
            java.lang.String r0 = r5.toString()
            com.kwad.sdk.api.loader.v r1 = r9.aio
            com.kwad.sdk.api.core.IKsAdSDK r1 = r1.yA()
            r1.addHp(r10)
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.lang.String r3 = "version"
            com.kwad.sdk.api.loader.l.putValue(r1, r3, r6)
            java.lang.String r3 = "appId"
            java.lang.String r2 = r2.optString(r3)
            com.kwad.sdk.api.loader.l.putValue(r1, r3, r2)
            com.kwad.sdk.api.loader.v r2 = r9.aio
            com.kwad.sdk.api.core.IKsAdSDK r2 = r2.yA()
            java.lang.String r0 = r2.getRM(r0)
            java.lang.String r2 = "message"
            com.kwad.sdk.api.loader.l.putValue(r1, r2, r0)
            com.kwad.sdk.api.loader.v r0 = r9.aio
            com.kwad.sdk.api.core.IKsAdSDK r0 = r0.yA()
            java.lang.String r2 = r9.mUrl
            java.lang.String r3 = r1.toString()
            r0.sR(r2, r10, r3)
            java.lang.String r10 = r1.toString()
            return r10
    }

    private static java.util.Map<java.lang.String, java.lang.String> yq() {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "Accept-Language"
            java.lang.String r2 = "zh-CN"
            r0.put(r1, r2)
            java.lang.String r1 = "Connection"
            java.lang.String r2 = "keep-alive"
            r0.put(r1, r2)
            java.lang.String r1 = "Charset"
            java.lang.String r2 = "UTF-8"
            r0.put(r1, r2)
            java.lang.String r1 = "Content-Type"
            java.lang.String r2 = "application/json; charset=UTF-8"
            r0.put(r1, r2)
            java.lang.String r1 = com.kwad.sdk.api.core.RequestParamsUtils.getUserAgent()
            java.lang.String r2 = "User-Agent"
            r0.put(r2, r1)
            return r0
    }

    public final void a(com.kwad.sdk.api.loader.f.a r7) {
            r6 = this;
            java.lang.String r0 = "data"
            r1 = 0
            java.util.Map r2 = yq()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            java.lang.String r3 = r6.d(r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            java.lang.String r4 = r6.aiq     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            java.net.HttpURLConnection r1 = bW(r4)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            a(r1, r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            r1.connect()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            java.io.DataOutputStream r2 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            java.io.OutputStream r4 = r1.getOutputStream()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            r2.<init>(r4)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            byte[] r3 = r3.getBytes()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            r2.write(r3)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            int r2 = r1.getResponseCode()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            r3 = 200(0xc8, float:2.8E-43)
            if (r2 != r3) goto L6c
            java.io.InputStream r2 = r1.getInputStream()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            java.lang.String r2 = a(r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            com.kwad.sdk.api.loader.a$b r3 = new com.kwad.sdk.api.loader.a$b     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            r3.<init>()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            r4.<init>(r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            java.lang.String r2 = r4.optString(r0)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            boolean r5 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            if (r5 != 0) goto L65
            java.lang.String r5 = "null"
            boolean r5 = r5.equals(r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            if (r5 != 0) goto L65
            com.kwad.sdk.api.loader.v r5 = r6.aio     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            com.kwad.sdk.api.core.IKsAdSDK r5 = r5.yA()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            java.lang.String r2 = r5.getRD(r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            r5.<init>(r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            r4.put(r0, r5)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
        L65:
            r3.parseJson(r4)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            r7.a(r3)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            goto L88
        L6c:
            int r0 = r2 / 100
            r3 = 3
            if (r0 != r3) goto L8e
            int r0 = r6.aip     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            r2 = 21
            if (r0 >= r2) goto L88
            java.lang.String r0 = "Location"
            java.lang.String r0 = r1.getHeaderField(r0)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            r6.aiq = r0     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            int r0 = r6.aip     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            int r0 = r0 + 1
            r6.aip = r0     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            r6.a(r7)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
        L88:
            if (r1 == 0) goto Lae
            r1.disconnect()     // Catch: java.lang.Exception -> L8d
        L8d:
            return
        L8e:
            java.lang.RuntimeException r7 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            java.lang.String r3 = "response code = "
            r0.<init>(r3)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            r0.append(r2)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            r7.<init>(r0)     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
            throw r7     // Catch: java.lang.Throwable -> La2 java.lang.Exception -> La9
        La2:
            r7 = move-exception
            if (r1 == 0) goto La8
            r1.disconnect()     // Catch: java.lang.Exception -> La8
        La8:
            throw r7
        La9:
            if (r1 == 0) goto Lae
            r1.disconnect()     // Catch: java.lang.Exception -> Lae
        Lae:
            return
    }
}
