package com.tencent.open.utils;

public class HttpUtils {


    public static class HttpStatusException extends java.lang.Exception {
        public static final java.lang.String ERROR_INFO = "http status code error:";
        public final int statusCode;

        public HttpStatusException(int r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "http status code error:"
                r0.append(r1)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                r2.<init>(r0)
                r2.statusCode = r3
                return
        }

        public HttpStatusException(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                r1 = -1
                r0.statusCode = r1
                return
        }
    }

    public static class NetworkUnavailableException extends java.lang.Exception {
        public static final java.lang.String ERROR_INFO = "network unavailable";

        public NetworkUnavailableException(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public static class a {
        public final java.lang.String a;
        public final int b;

        private a(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        a(java.lang.String r1, int r2, com.tencent.open.utils.HttpUtils.1 r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }
    }

    private HttpUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    private static int a(android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 11
            if (r0 >= r1) goto L18
            if (r2 == 0) goto L13
            int r2 = android.net.Proxy.getPort(r2)
            if (r2 >= 0) goto L2a
            int r2 = android.net.Proxy.getDefaultPort()
            goto L2a
        L13:
            int r2 = android.net.Proxy.getDefaultPort()
            goto L2a
        L18:
            java.lang.String r2 = "http.proxyPort"
            java.lang.String r2 = java.lang.System.getProperty(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L29
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.NumberFormatException -> L29
            goto L2a
        L29:
            r2 = -1
        L2a:
            return r2
    }

    private static com.tencent.open.a.g a(java.lang.String r4, java.lang.String r5, android.os.Bundle r6) throws java.io.IOException {
            if (r6 == 0) goto L8
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>(r6)
            goto Ld
        L8:
            android.os.Bundle r0 = new android.os.Bundle
            r0.<init>()
        Ld:
            java.lang.String r6 = "GET"
            boolean r6 = r5.equalsIgnoreCase(r6)
            java.lang.String r1 = "openSDK_LOG.HttpUtils"
            if (r6 == 0) goto L67
            java.util.Map r5 = a(r0)
            android.os.Bundle r6 = com.tencent.open.log.d.b(r0)
            java.lang.String r2 = " -- url = "
            java.lang.String r3 = "-->openUrl encodedParam ="
            if (r6 == r0) goto L42
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            java.lang.String r6 = r6.toString()
            r0.append(r6)
            r0.append(r2)
            r0.append(r4)
            java.lang.String r6 = r0.toString()
            com.tencent.open.log.SLog.i(r1, r6)
            goto L5e
        L42:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            r6.append(r3)
            java.lang.String r0 = r5.toString()
            r6.append(r0)
            r6.append(r2)
            r6.append(r4)
            java.lang.String r6 = r6.toString()
            com.tencent.open.log.SLog.i(r1, r6)
        L5e:
            com.tencent.open.a.f r6 = com.tencent.open.a.f.a()
            com.tencent.open.a.g r4 = r6.a(r4, r5)
            goto La9
        L67:
            java.lang.String r6 = "POST"
            boolean r6 = r5.equalsIgnoreCase(r6)
            if (r6 == 0) goto Laa
            java.util.Map r5 = a(r0)
            java.util.Map r6 = b(r0)
            if (r6 == 0) goto La1
            int r0 = r6.size()
            if (r0 != 0) goto L80
            goto La1
        L80:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "openUrl: has binary "
            r0.append(r2)
            int r2 = r6.size()
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.tencent.open.log.SLog.w(r1, r0)
            com.tencent.open.a.f r0 = com.tencent.open.a.f.a()
            com.tencent.open.a.g r4 = r0.a(r4, r5, r6)
            goto La9
        La1:
            com.tencent.open.a.f r6 = com.tencent.open.a.f.a()
            com.tencent.open.a.g r4 = r6.b(r4, r5)
        La9:
            return r4
        Laa:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "openUrl: http method "
            r4.append(r6)
            r4.append(r5)
            java.lang.String r5 = " is not supported."
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            com.tencent.open.log.SLog.e(r1, r4)
            java.io.IOException r4 = new java.io.IOException
            java.lang.String r5 = "http method is not supported."
            r4.<init>(r5)
            throw r4
    }

    private static java.util.Map<java.lang.String, java.lang.String> a(android.os.Bundle r7) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r7 == 0) goto L7c
            int r1 = r7.size()
            if (r1 != 0) goto Le
            goto L7c
        Le:
            java.util.Set r1 = r7.keySet()
            java.util.Iterator r1 = r1.iterator()
        L16:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L7c
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r7.get(r2)
            boolean r4 = r3 instanceof java.lang.String
            if (r4 != 0) goto L4e
            boolean r4 = r3 instanceof java.lang.String[]
            if (r4 != 0) goto L4e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "parseBundleToMap: the type "
            r2.append(r4)
            java.lang.Class r3 = r3.getClass()
            r2.append(r3)
            java.lang.String r3 = " is unsupported"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "openSDK_LOG.HttpUtils"
            com.tencent.open.log.SLog.w(r3, r2)
            goto L16
        L4e:
            boolean r4 = r3 instanceof java.lang.String[]
            if (r4 == 0) goto L76
            java.lang.String[] r3 = (java.lang.String[]) r3
            java.lang.String[] r3 = (java.lang.String[]) r3
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r5 = 0
        L5c:
            int r6 = r3.length
            if (r5 >= r6) goto L6e
            if (r5 == 0) goto L66
            java.lang.String r6 = ","
            r4.append(r6)
        L66:
            r6 = r3[r5]
            r4.append(r6)
            int r5 = r5 + 1
            goto L5c
        L6e:
            java.lang.String r3 = r4.toString()
            r0.put(r2, r3)
            goto L16
        L76:
            java.lang.String r3 = (java.lang.String) r3
            r0.put(r2, r3)
            goto L16
        L7c:
            return r0
    }

    private static void a(android.content.Context r2, com.tencent.connect.auth.QQToken r3, java.lang.String r4) {
            java.lang.String r0 = "add_share"
            int r0 = r4.indexOf(r0)
            r1 = -1
            if (r0 > r1) goto L41
            java.lang.String r0 = "upload_pic"
            int r0 = r4.indexOf(r0)
            if (r0 > r1) goto L41
            java.lang.String r0 = "add_topic"
            int r0 = r4.indexOf(r0)
            if (r0 > r1) goto L41
            java.lang.String r0 = "set_user_face"
            int r0 = r4.indexOf(r0)
            if (r0 > r1) goto L41
            java.lang.String r0 = "add_t"
            int r0 = r4.indexOf(r0)
            if (r0 > r1) goto L41
            java.lang.String r0 = "add_pic_t"
            int r0 = r4.indexOf(r0)
            if (r0 > r1) goto L41
            java.lang.String r0 = "add_pic_url"
            int r0 = r4.indexOf(r0)
            if (r0 > r1) goto L41
            java.lang.String r0 = "add_video"
            int r0 = r4.indexOf(r0)
            if (r0 <= r1) goto L4c
        L41:
            r0 = 1
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            r0[r1] = r4
            java.lang.String r4 = "requireApi"
            com.tencent.connect.a.a.a(r2, r3, r4, r0)
        L4c:
            return
    }

    private static java.lang.String b(android.content.Context r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 11
            if (r0 >= r1) goto L1c
            if (r2 == 0) goto L17
            java.lang.String r2 = android.net.Proxy.getHost(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L22
            java.lang.String r2 = android.net.Proxy.getDefaultHost()
            goto L22
        L17:
            java.lang.String r2 = android.net.Proxy.getDefaultHost()
            goto L22
        L1c:
            java.lang.String r2 = "http.proxyHost"
            java.lang.String r2 = java.lang.System.getProperty(r2)
        L22:
            return r2
    }

    private static java.util.Map<java.lang.String, byte[]> b(android.os.Bundle r5) {
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 0
            r0.<init>(r1)
            if (r5 == 0) goto L34
            int r1 = r5.size()
            if (r1 != 0) goto Lf
            goto L34
        Lf:
            java.util.Set r1 = r5.keySet()
            java.util.Iterator r1 = r1.iterator()
        L17:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L34
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r5.get(r2)
            boolean r4 = r3 instanceof byte[]
            if (r4 != 0) goto L2c
            goto L17
        L2c:
            byte[] r3 = (byte[]) r3
            byte[] r3 = (byte[]) r3
            r0.put(r2, r3)
            goto L17
        L34:
            return r0
    }

    public static java.lang.String encodeUrl(android.os.Bundle r0) {
            java.util.Map r0 = a(r0)
            java.lang.String r0 = encodeUrl(r0)
            return r0
    }

    public static java.lang.String encodeUrl(java.util.Map<java.lang.String, java.lang.String> r5) {
            if (r5 == 0) goto L4b
            int r0 = r5.size()
            if (r0 != 0) goto L9
            goto L4b
        L9:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 1
            java.util.Set r2 = r5.keySet()
            java.util.Iterator r2 = r2.iterator()
        L17:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L46
            java.lang.Object r3 = r2.next()
            java.lang.String r3 = (java.lang.String) r3
            if (r1 == 0) goto L27
            r1 = 0
            goto L2c
        L27:
            java.lang.String r4 = "&"
            r0.append(r4)
        L2c:
            java.lang.String r4 = java.net.URLEncoder.encode(r3)
            r0.append(r4)
            java.lang.String r4 = "="
            r0.append(r4)
            java.lang.Object r3 = r5.get(r3)
            java.lang.String r3 = (java.lang.String) r3
            java.lang.String r3 = java.net.URLEncoder.encode(r3)
            r0.append(r3)
            goto L17
        L46:
            java.lang.String r5 = r0.toString()
            return r5
        L4b:
            java.lang.String r5 = ""
            return r5
    }

    public static int getErrorCodeFromException(java.io.IOException r1) {
            boolean r0 = r1 instanceof java.io.CharConversionException
            if (r0 == 0) goto L7
            r1 = -20
            return r1
        L7:
            boolean r0 = r1 instanceof java.nio.charset.MalformedInputException
            if (r0 == 0) goto Le
            r1 = -21
            return r1
        Le:
            boolean r0 = r1 instanceof java.nio.charset.UnmappableCharacterException
            if (r0 == 0) goto L15
            r1 = -22
            return r1
        L15:
            boolean r0 = r1 instanceof java.nio.channels.ClosedChannelException
            if (r0 == 0) goto L1c
            r1 = -24
            return r1
        L1c:
            boolean r0 = r1 instanceof java.io.EOFException
            if (r0 == 0) goto L23
            r1 = -26
            return r1
        L23:
            boolean r0 = r1 instanceof java.nio.channels.FileLockInterruptionException
            if (r0 == 0) goto L2a
            r1 = -27
            return r1
        L2a:
            boolean r0 = r1 instanceof java.io.FileNotFoundException
            if (r0 == 0) goto L31
            r1 = -28
            return r1
        L31:
            boolean r0 = r1 instanceof java.net.HttpRetryException
            if (r0 == 0) goto L38
            r1 = -29
            return r1
        L38:
            boolean r0 = r1 instanceof java.net.SocketTimeoutException
            if (r0 == 0) goto L3e
            r1 = -8
            return r1
        L3e:
            boolean r0 = r1 instanceof java.util.InvalidPropertiesFormatException
            if (r0 == 0) goto L45
            r1 = -30
            return r1
        L45:
            boolean r0 = r1 instanceof java.net.MalformedURLException
            if (r0 == 0) goto L4b
            r1 = -3
            return r1
        L4b:
            boolean r0 = r1 instanceof java.io.InvalidClassException
            if (r0 == 0) goto L52
            r1 = -33
            return r1
        L52:
            boolean r0 = r1 instanceof java.io.InvalidObjectException
            if (r0 == 0) goto L59
            r1 = -34
            return r1
        L59:
            boolean r0 = r1 instanceof java.io.NotActiveException
            if (r0 == 0) goto L60
            r1 = -35
            return r1
        L60:
            boolean r0 = r1 instanceof java.io.NotSerializableException
            if (r0 == 0) goto L67
            r1 = -36
            return r1
        L67:
            boolean r0 = r1 instanceof java.io.OptionalDataException
            if (r0 == 0) goto L6e
            r1 = -37
            return r1
        L6e:
            boolean r0 = r1 instanceof java.io.StreamCorruptedException
            if (r0 == 0) goto L75
            r1 = -38
            return r1
        L75:
            boolean r0 = r1 instanceof java.io.WriteAbortedException
            if (r0 == 0) goto L7c
            r1 = -39
            return r1
        L7c:
            boolean r0 = r1 instanceof java.net.ProtocolException
            if (r0 == 0) goto L83
            r1 = -40
            return r1
        L83:
            boolean r0 = r1 instanceof javax.net.ssl.SSLHandshakeException
            if (r0 == 0) goto L8a
            r1 = -41
            return r1
        L8a:
            boolean r0 = r1 instanceof javax.net.ssl.SSLKeyException
            if (r0 == 0) goto L91
            r1 = -42
            return r1
        L91:
            boolean r0 = r1 instanceof javax.net.ssl.SSLPeerUnverifiedException
            if (r0 == 0) goto L98
            r1 = -43
            return r1
        L98:
            boolean r0 = r1 instanceof javax.net.ssl.SSLProtocolException
            if (r0 == 0) goto L9f
            r1 = -44
            return r1
        L9f:
            boolean r0 = r1 instanceof java.net.BindException
            if (r0 == 0) goto La6
            r1 = -45
            return r1
        La6:
            boolean r0 = r1 instanceof java.net.ConnectException
            if (r0 == 0) goto Lad
            r1 = -46
            return r1
        Lad:
            boolean r0 = r1 instanceof java.net.NoRouteToHostException
            if (r0 == 0) goto Lb4
            r1 = -47
            return r1
        Lb4:
            boolean r0 = r1 instanceof java.net.PortUnreachableException
            if (r0 == 0) goto Lbb
            r1 = -48
            return r1
        Lbb:
            boolean r0 = r1 instanceof java.io.SyncFailedException
            if (r0 == 0) goto Lc2
            r1 = -49
            return r1
        Lc2:
            boolean r0 = r1 instanceof java.io.UTFDataFormatException
            if (r0 == 0) goto Lc9
            r1 = -50
            return r1
        Lc9:
            boolean r0 = r1 instanceof java.net.UnknownHostException
            if (r0 == 0) goto Ld0
            r1 = -51
            return r1
        Ld0:
            boolean r0 = r1 instanceof java.net.UnknownServiceException
            if (r0 == 0) goto Ld7
            r1 = -52
            return r1
        Ld7:
            boolean r0 = r1 instanceof java.io.UnsupportedEncodingException
            if (r0 == 0) goto Lde
            r1 = -53
            return r1
        Lde:
            boolean r1 = r1 instanceof java.util.zip.ZipException
            if (r1 == 0) goto Le5
            r1 = -54
            return r1
        Le5:
            r1 = -2
            return r1
    }

    public static com.tencent.open.utils.HttpUtils.a getProxy(android.content.Context r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "connectivity"
            java.lang.Object r1 = r3.getSystemService(r1)
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1
            if (r1 != 0) goto Lf
            return r0
        Lf:
            android.net.NetworkInfo r1 = r1.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L14
            goto L15
        L14:
            r1 = r0
        L15:
            if (r1 != 0) goto L18
            return r0
        L18:
            int r1 = r1.getType()
            if (r1 != 0) goto L34
            java.lang.String r1 = b(r3)
            int r3 = a(r3)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L34
            if (r3 < 0) goto L34
            com.tencent.open.utils.HttpUtils$a r2 = new com.tencent.open.utils.HttpUtils$a
            r2.<init>(r1, r3, r0)
            return r2
        L34:
            return r0
    }

    public static org.json.JSONObject request(com.tencent.connect.auth.QQToken r21, android.content.Context r22, java.lang.String r23, android.os.Bundle r24, java.lang.String r25) throws java.io.IOException, org.json.JSONException, com.tencent.open.utils.HttpUtils.NetworkUnavailableException, com.tencent.open.utils.HttpUtils.HttpStatusException {
            r0 = r22
            r1 = r23
            java.lang.String r2 = "openSDK_LOG.HttpUtils"
            java.lang.String r3 = "OpenApi request"
            com.tencent.open.log.SLog.i(r2, r3)
            boolean r3 = com.tencent.open.utils.m.b(r22)
            if (r3 == 0) goto L198
            java.lang.String r3 = r23.toLowerCase()
            java.lang.String r4 = "http"
            boolean r3 = r3.startsWith(r4)
            if (r3 != 0) goto L51
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            com.tencent.open.utils.j r4 = com.tencent.open.utils.j.a()
            java.lang.String r5 = "https://openmobile.qq.com/"
            java.lang.String r4 = r4.a(r0, r5)
            r3.append(r4)
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            com.tencent.open.utils.j r6 = com.tencent.open.utils.j.a()
            java.lang.String r5 = r6.a(r0, r5)
            r4.append(r5)
            r4.append(r1)
            java.lang.String r4 = r4.toString()
            r13 = r4
            r4 = r21
            goto L55
        L51:
            r4 = r21
            r3 = r1
            r13 = r3
        L55:
            a(r0, r4, r1)
            r1 = 0
            long r5 = android.os.SystemClock.elapsedRealtime()
            r7 = 0
            java.lang.String r8 = r21.getAppId()
            com.tencent.open.utils.i r0 = com.tencent.open.utils.i.a(r0, r8)
            java.lang.String r8 = "Common_HttpRetryCount"
            int r0 = r0.a(r8)
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "config 1:Common_HttpRetryCount            config_value:"
            r8.append(r9)
            r8.append(r0)
            java.lang.String r9 = "   appid:"
            r8.append(r9)
            java.lang.String r10 = r21.getAppId()
            r8.append(r10)
            java.lang.String r10 = "     url:"
            r8.append(r10)
            r8.append(r13)
            java.lang.String r8 = r8.toString()
            java.lang.String r11 = "OpenConfig_test"
            com.tencent.open.log.SLog.v(r11, r8)
            if (r0 != 0) goto L9b
            r0 = 3
            r14 = 3
            goto L9c
        L9b:
            r14 = r0
        L9c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r8 = "config 1:Common_HttpRetryCount            result_value:"
            r0.append(r8)
            r0.append(r14)
            r0.append(r9)
            java.lang.String r4 = r21.getAppId()
            r0.append(r4)
            r0.append(r10)
            r0.append(r13)
            java.lang.String r0 = r0.toString()
            com.tencent.open.log.SLog.v(r11, r0)
            r15 = r5
        Lc1:
            int r12 = r7 + 1
            r10 = r24
            r11 = r25
            com.tencent.open.a.g r0 = a(r3, r11, r10)     // Catch: org.json.JSONException -> L12b java.io.IOException -> L13e java.net.MalformedURLException -> L154 java.net.SocketTimeoutException -> L167
            int r8 = r0.d()     // Catch: org.json.JSONException -> L12b java.io.IOException -> L13e java.net.MalformedURLException -> L154 java.net.SocketTimeoutException -> L167
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L12b java.io.IOException -> L13e java.net.MalformedURLException -> L154 java.net.SocketTimeoutException -> L167
            r4.<init>()     // Catch: org.json.JSONException -> L12b java.io.IOException -> L13e java.net.MalformedURLException -> L154 java.net.SocketTimeoutException -> L167
            java.lang.String r5 = "request statusCode "
            r4.append(r5)     // Catch: org.json.JSONException -> L12b java.io.IOException -> L13e java.net.MalformedURLException -> L154 java.net.SocketTimeoutException -> L167
            r4.append(r8)     // Catch: org.json.JSONException -> L12b java.io.IOException -> L13e java.net.MalformedURLException -> L154 java.net.SocketTimeoutException -> L167
            java.lang.String r4 = r4.toString()     // Catch: org.json.JSONException -> L12b java.io.IOException -> L13e java.net.MalformedURLException -> L154 java.net.SocketTimeoutException -> L167
            com.tencent.open.log.SLog.i(r2, r4)     // Catch: org.json.JSONException -> L12b java.io.IOException -> L13e java.net.MalformedURLException -> L154 java.net.SocketTimeoutException -> L167
            r4 = 200(0xc8, float:2.8E-43)
            if (r8 != r4) goto L10d
            java.lang.String r4 = r0.a()     // Catch: java.net.SocketTimeoutException -> L106 org.json.JSONException -> L12b java.io.IOException -> L13e java.net.MalformedURLException -> L154
            org.json.JSONObject r1 = com.tencent.open.utils.m.d(r4)     // Catch: java.net.SocketTimeoutException -> L106 org.json.JSONException -> L12b java.io.IOException -> L13e java.net.MalformedURLException -> L154
            java.lang.String r4 = "ret"
            int r4 = r1.getInt(r4)     // Catch: org.json.JSONException -> Lf6 java.net.SocketTimeoutException -> L106 java.io.IOException -> L13e java.net.MalformedURLException -> L154
            goto Lf7
        Lf6:
            r4 = -4
        Lf7:
            int r5 = r0.c()     // Catch: java.net.SocketTimeoutException -> L106 org.json.JSONException -> L12b java.io.IOException -> L13e java.net.MalformedURLException -> L154
            long r5 = (long) r5     // Catch: java.net.SocketTimeoutException -> L106 org.json.JSONException -> L12b java.io.IOException -> L13e java.net.MalformedURLException -> L154
            int r0 = r0.b()     // Catch: java.net.SocketTimeoutException -> L106 org.json.JSONException -> L12b java.io.IOException -> L13e java.net.MalformedURLException -> L154
            long r2 = (long) r0
            r10 = r2
            r12 = r4
            r8 = r5
            goto L180
        L106:
            r0 = move-exception
            r17 = r0
            r0 = r1
            r1 = r12
            goto L16f
        L10d:
            r17 = 0
            r19 = 0
            com.tencent.open.b.h r4 = com.tencent.open.b.h.a()     // Catch: org.json.JSONException -> L12b java.io.IOException -> L13e java.net.MalformedURLException -> L154 java.net.SocketTimeoutException -> L167
            r5 = r13
            r6 = r15
            r0 = r8
            r8 = r17
            r10 = r19
            r21 = r1
            r1 = r12
            r12 = r0
            r4.a(r5, r6, r8, r10, r12)     // Catch: java.net.SocketTimeoutException -> L129 org.json.JSONException -> L12b java.io.IOException -> L13e java.net.MalformedURLException -> L154
            com.tencent.open.utils.HttpUtils$HttpStatusException r4 = new com.tencent.open.utils.HttpUtils$HttpStatusException     // Catch: java.net.SocketTimeoutException -> L129 org.json.JSONException -> L12b java.io.IOException -> L13e java.net.MalformedURLException -> L154
            r4.<init>(r0)     // Catch: java.net.SocketTimeoutException -> L129 org.json.JSONException -> L12b java.io.IOException -> L13e java.net.MalformedURLException -> L154
            throw r4     // Catch: java.net.SocketTimeoutException -> L129 org.json.JSONException -> L12b java.io.IOException -> L13e java.net.MalformedURLException -> L154
        L129:
            r0 = move-exception
            goto L16b
        L12b:
            r0 = move-exception
            r0.printStackTrace()
            r12 = -4
            r8 = 0
            r10 = 0
            com.tencent.open.b.h r4 = com.tencent.open.b.h.a()
            r5 = r13
            r6 = r15
            r4.a(r5, r6, r8, r10, r12)
            throw r0
        L13e:
            r0 = move-exception
            r0.printStackTrace()
            int r12 = getErrorCodeFromException(r0)
            r8 = 0
            r10 = 0
            com.tencent.open.b.h r4 = com.tencent.open.b.h.a()
            r5 = r13
            r6 = r15
            r4.a(r5, r6, r8, r10, r12)
            throw r0
        L154:
            r0 = move-exception
            r0.printStackTrace()
            r12 = -3
            r8 = 0
            r10 = 0
            com.tencent.open.b.h r4 = com.tencent.open.b.h.a()
            r5 = r13
            r6 = r15
            r4.a(r5, r6, r8, r10, r12)
            throw r0
        L167:
            r0 = move-exception
            r21 = r1
            r1 = r12
        L16b:
            r17 = r0
            r0 = r21
        L16f:
            r17.printStackTrace()
            r12 = -8
            r8 = 0
            r10 = 0
            if (r1 >= r14) goto L18e
            long r15 = android.os.SystemClock.elapsedRealtime()
            if (r1 < r14) goto L18a
            r1 = r0
        L180:
            r6 = r15
            com.tencent.open.b.h r4 = com.tencent.open.b.h.a()
            r5 = r13
            r4.a(r5, r6, r8, r10, r12)
            return r1
        L18a:
            r7 = r1
            r1 = r0
            goto Lc1
        L18e:
            com.tencent.open.b.h r4 = com.tencent.open.b.h.a()
            r5 = r13
            r6 = r15
            r4.a(r5, r6, r8, r10, r12)
            throw r17
        L198:
            com.tencent.open.utils.HttpUtils$NetworkUnavailableException r0 = new com.tencent.open.utils.HttpUtils$NetworkUnavailableException
            java.lang.String r1 = "network unavailable"
            r0.<init>(r1)
            throw r0
    }

    public static void requestAsync(com.tencent.connect.auth.QQToken r9, android.content.Context r10, java.lang.String r11, android.os.Bundle r12, java.lang.String r13, com.tencent.tauth.IRequestListener r14) {
            java.lang.String r0 = "openSDK_LOG.HttpUtils"
            java.lang.String r1 = "OpenApi requestAsync"
            com.tencent.open.log.SLog.i(r0, r1)
            com.tencent.open.utils.HttpUtils$1 r0 = new com.tencent.open.utils.HttpUtils$1
            r2 = r0
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            r8 = r14
            r2.<init>(r3, r4, r5, r6, r7, r8)
            com.tencent.open.utils.l.a(r0)
            return
    }
}
