package com.bianfeng.ymnsdk.actionv2;

public class HttpHelperV2 {
    public static final int CODE_NOT_NETWORK = 604;
    public static final int CODE_REQ_TIME_OUT = 600;
    public static final int CODE_RES_SUCCESS = 0;
    public static final int CODE_SERVER_ERROR = 602;
    public static final int CODE_THRIDSERVER_ERROR = 603;
    public static final int CODE_UNKNOW_ERROR = 601;
    public static final int CODE_UNSET = 999;
    public static final int HTTP_METHOD_GET = 1;
    public static final int HTTP_METHOD_POST = 2;
    public static final int HTTP_REQ_LIMIT_TIME = 15000;
    public static final int HTTP_RES_LIMIT_TIME = 25000;
    public static final java.lang.String VERSION_SERVER = "v1";
    public static final java.lang.String VERSION_SERVER_V2 = "v2";
    private android.content.Context context;
    private int errorCode;
    private java.lang.String errorMsg;
    private java.util.TreeMap<java.lang.String, java.lang.String> headersMap;
    private java.lang.String method;

    class a extends java.lang.Thread {
        final com.bianfeng.ymnsdk.entity.PayTokenEntity.PayloadEntity a;
        final java.lang.String b;
        final java.lang.String c;
        final java.lang.String d;
        final com.bianfeng.ymnsdk.action.HttpListener e;
        final com.bianfeng.ymnsdk.actionv2.HttpHelperV2 f;

        a(com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r1, com.bianfeng.ymnsdk.entity.PayTokenEntity.PayloadEntity r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, com.bianfeng.ymnsdk.action.HttpListener r6) {
                r0 = this;
                r0.f = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.d = r5
                r0.e = r6
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r5 = this;
                com.bianfeng.ymnsdk.entity.PayTokenEntity$PayloadEntity r0 = r5.a
                java.lang.String r1 = r5.b
                r0.setAud(r1)
                com.bianfeng.ymnsdk.util.security.SecurityUtil r0 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()
                java.lang.String r1 = com.bianfeng.ymnsdk.entity.PayTokenEntity.getHeader
                com.bianfeng.ymnsdk.entity.PayTokenEntity$PayloadEntity r2 = r5.a
                java.lang.String r2 = r2.toString()
                java.lang.String r0 = r0.getPayToken(r1, r2)
                com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r1 = r5.f
                java.lang.String r2 = r5.b
                java.lang.String r3 = r5.c
                java.lang.String r4 = r5.d
                java.net.HttpURLConnection r1 = com.bianfeng.ymnsdk.actionv2.HttpHelperV2.access$000(r1, r2, r3, r0, r4)
                com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r2 = r5.f
                com.bianfeng.ymnsdk.action.HttpListener r3 = r5.e
                boolean r2 = com.bianfeng.ymnsdk.actionv2.HttpHelperV2.access$100(r2, r1, r3)
                if (r2 == 0) goto L33
                if (r1 == 0) goto L44
                r1.disconnect()
                goto L44
            L33:
                com.bianfeng.ymnsdk.action.HttpListener r2 = r5.e
                com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r3 = r5.f
                int r3 = com.bianfeng.ymnsdk.actionv2.HttpHelperV2.access$200(r3)
                com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r4 = r5.f
                java.lang.String r4 = com.bianfeng.ymnsdk.actionv2.HttpHelperV2.access$300(r4)
                r2.onError(r3, r4)
            L44:
                return
        }
    }

    public HttpHelperV2(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r1.context = r2
            java.util.TreeMap r0 = new java.util.TreeMap
            r0.<init>()
            r1.headersMap = r0
            return
    }

    static java.net.HttpURLConnection access$000(com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            java.net.HttpURLConnection r0 = r1.createHttpRequest(r2, r3, r4, r5)
            return r0
    }

    static boolean access$100(com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r1, java.net.HttpURLConnection r2, com.bianfeng.ymnsdk.action.HttpListener r3) {
            boolean r0 = r1.openUrl(r2, r3)
            return r0
    }

    static int access$200(com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r1) {
            int r0 = r1.errorCode
            return r0
    }

    static java.lang.String access$300(com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r1) {
            java.lang.String r0 = r1.errorMsg
            return r0
    }

    private void addHeader(java.net.HttpURLConnection r5, java.lang.String r6, java.lang.String r7) {
            r4 = this;
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r4.headersMap
            com.bianfeng.ymnsdk.util.security.SecurityUtil r1 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()
            java.lang.String r1 = r1.getPaySignatue(r6, r7)
            java.lang.String r2 = "X-Signature"
            r0.put(r2, r1)
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r4.headersMap
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L19:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L35
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r1.getValue()
            java.lang.String r3 = (java.lang.String) r3
            r5.addRequestProperty(r2, r3)
            goto L19
        L35:
            return
    }

    private java.lang.String checkReasonCode(java.util.Map<java.lang.String, java.util.List<java.lang.String>> r8) {
            r7 = this;
            java.util.Set r0 = r8.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L8:
            boolean r1 = r0.hasNext()
            java.lang.String r2 = "1"
            if (r1 == 0) goto L50
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r3 = r1.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.lang.Object r4 = r1.getValue()
            java.util.List r4 = (java.util.List) r4
            java.lang.Object r5 = r1.getKey()
            java.lang.CharSequence r5 = (java.lang.CharSequence) r5
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto L2f
            goto L8
        L2f:
            java.lang.String r5 = "X-Error-Code"
            boolean r5 = r3.equalsIgnoreCase(r5)
            if (r5 == 0) goto L4f
            java.util.Iterator r5 = r4.iterator()
            boolean r6 = r5.hasNext()
            if (r6 == 0) goto L4f
            java.lang.Object r0 = r5.next()
            java.lang.String r0 = (java.lang.String) r0
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            if (r5 == 0) goto L4e
            return r2
        L4e:
            return r0
        L4f:
            goto L8
        L50:
            return r2
    }

    private java.net.HttpURLConnection createHttpRequest(java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            r6 = this;
            r0 = 0
            r1 = 0
            r2 = 0
            java.net.URL r3 = new java.net.URL     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            r3.<init>(r7)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            r2 = r3
            java.net.URLConnection r3 = r2.openConnection()     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            java.net.HttpURLConnection r3 = (java.net.HttpURLConnection) r3     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            r0 = r3
            android.content.Context r3 = r6.context     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            java.net.HttpURLConnection r3 = getProxy(r3, r2)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            if (r3 == 0) goto L1f
            android.content.Context r3 = r6.context     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            java.net.HttpURLConnection r3 = getProxy(r3, r2)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            r0 = r3
        L1f:
            java.lang.String r3 = "Authorization"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            r4.<init>()     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            java.lang.String r5 = "BEARER "
            r4.append(r5)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            r4.append(r9)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            r0.addRequestProperty(r3, r4)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            r6.addHeader(r0, r8, r10)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            r3 = 25000(0x61a8, float:3.5032E-41)
            r0.setReadTimeout(r3)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            r3 = 15000(0x3a98, float:2.102E-41)
            r0.setConnectTimeout(r3)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            r3 = 0
            r0.setUseCaches(r3)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            java.lang.String r3 = "Content-Type"
            java.lang.String r4 = "application/json,charset=UTF-8"
            r0.setRequestProperty(r3, r4)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            java.lang.String r3 = r6.method     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            java.lang.String r4 = "POST"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            if (r3 == 0) goto L5e
            r3 = 1
            r0.setDoOutput(r3)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            r0.setDoInput(r3)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
        L5e:
            java.io.DataOutputStream r3 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            java.io.OutputStream r4 = r0.getOutputStream()     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            r1 = r3
            java.lang.String r3 = "UTF-8"
            byte[] r3 = r8.getBytes(r3)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            r1.write(r3)     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            r1.flush()     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            r1.close()     // Catch: java.lang.Throwable -> L81 java.lang.Exception -> L83
            r1.close()     // Catch: java.io.IOException -> L7c
        L7b:
            goto La8
        L7c:
            r3 = move-exception
            r3.printStackTrace()
            goto L7b
        L81:
            r3 = move-exception
            goto La9
        L83:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L81
            r4 = 601(0x259, float:8.42E-43)
            r6.errorCode = r4     // Catch: java.lang.Throwable -> L81
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L81
            r4.<init>()     // Catch: java.lang.Throwable -> L81
            java.lang.String r5 = "request data error "
            r4.append(r5)     // Catch: java.lang.Throwable -> L81
            java.lang.String r5 = r3.getMessage()     // Catch: java.lang.Throwable -> L81
            r4.append(r5)     // Catch: java.lang.Throwable -> L81
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L81
            r6.errorMsg = r4     // Catch: java.lang.Throwable -> L81
            if (r1 == 0) goto La8
            r1.close()     // Catch: java.io.IOException -> L7c
            goto L7b
        La8:
            return r0
        La9:
            if (r1 == 0) goto Lb3
            r1.close()     // Catch: java.io.IOException -> Laf
            goto Lb3
        Laf:
            r4 = move-exception
            r4.printStackTrace()
        Lb3:
            throw r3
    }

    private java.lang.String getInputStreamString(java.io.InputStream r6) throws java.io.IOException {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
            r2 = 1048576(0x100000, float:1.469368E-39)
            byte[] r2 = new byte[r2]
        La:
            int r3 = r6.read(r2)
            r1 = r3
            r4 = -1
            if (r3 == r4) goto L1c
            java.lang.String r3 = new java.lang.String
            r4 = 0
            r3.<init>(r2, r4, r1)
            r0.append(r3)
            goto La
        L1c:
            r6.close()
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static java.net.HttpURLConnection getProxy(android.content.Context r8, java.net.URL r9) {
            java.lang.String r0 = "connectivity"
            java.lang.Object r0 = r8.getSystemService(r0)
            android.net.ConnectivityManager r0 = (android.net.ConnectivityManager) r0
            android.net.NetworkInfo r1 = r0.getActiveNetworkInfo()
            r2 = 0
            if (r1 == 0) goto L41
            boolean r3 = r1.isAvailable()
            if (r3 == 0) goto L41
            int r3 = r1.getType()
            if (r3 == 0) goto L1c
            goto L41
        L1c:
            java.lang.String r3 = android.net.Proxy.getDefaultHost()
            int r4 = android.net.Proxy.getDefaultPort()
            if (r3 == 0) goto L40
            r5 = -1
            if (r4 == r5) goto L40
            java.net.InetSocketAddress r5 = new java.net.InetSocketAddress     // Catch: java.io.IOException -> L3c
            r5.<init>(r3, r4)     // Catch: java.io.IOException -> L3c
            java.net.Proxy r6 = new java.net.Proxy     // Catch: java.io.IOException -> L3c
            java.net.Proxy$Type r7 = java.net.Proxy.Type.HTTP     // Catch: java.io.IOException -> L3c
            r6.<init>(r7, r5)     // Catch: java.io.IOException -> L3c
            java.net.URLConnection r7 = r9.openConnection(r6)     // Catch: java.io.IOException -> L3c
            java.net.HttpURLConnection r7 = (java.net.HttpURLConnection) r7     // Catch: java.io.IOException -> L3c
            return r7
        L3c:
            r5 = move-exception
            r5.printStackTrace()
        L40:
            return r2
        L41:
            return r2
    }

    private boolean openUrl(java.net.HttpURLConnection r10, com.bianfeng.ymnsdk.action.HttpListener r11) {
            r9 = this;
            java.lang.String r0 = "|"
            java.lang.String r1 = "错误信息："
            r2 = 604(0x25c, float:8.46E-43)
            r3 = 0
            r4 = 0
            int r5 = r10.getResponseCode()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r2 = r5
            r5 = 200(0xc8, float:2.8E-43)
            if (r2 != r5) goto L67
            java.io.InputStream r5 = r10.getInputStream()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r3 = r5
            java.util.Map r5 = r10.getHeaderFields()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r5 = r9.checkReasonCode(r5)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r6 = r9.getInputStreamString(r3)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r7 = "0"
            boolean r7 = r7.equalsIgnoreCase(r5)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            if (r7 == 0) goto L39
            r11.onComplete(r6)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r0 = 1
            if (r3 == 0) goto L38
            r3.close()     // Catch: java.io.IOException -> L34
            goto L38
        L34:
            r1 = move-exception
            r1.printStackTrace()
        L38:
            return r0
        L39:
            int r7 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r9.errorCode = r7     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r9.errorMsg = r6     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r7.<init>()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r7.append(r1)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r7.append(r5)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r7.append(r0)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r8 = r9.errorMsg     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r7.append(r8)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            com.bianfeng.ymnsdk.util.Logger.i(r7)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            if (r3 == 0) goto L66
            r3.close()     // Catch: java.io.IOException -> L62
            goto L66
        L62:
            r0 = move-exception
            r0.printStackTrace()
        L66:
            return r4
        L67:
            r9.errorCode = r2     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.io.InputStream r5 = r10.getErrorStream()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r3 = r5
            java.lang.String r5 = r9.getInputStreamString(r3)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r9.errorMsg = r5     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r5.<init>()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r5.append(r1)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            int r6 = r9.errorCode     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r5.append(r6)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r5.append(r0)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r6 = r9.errorMsg     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            r5.append(r6)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            com.bianfeng.ymnsdk.util.Logger.i(r5)     // Catch: java.lang.Throwable -> L9c java.lang.Exception -> L9e
            if (r3 == 0) goto L9b
            r3.close()     // Catch: java.io.IOException -> L97
            goto L9b
        L97:
            r0 = move-exception
            r0.printStackTrace()
        L9b:
            return r4
        L9c:
            r0 = move-exception
            goto Lcc
        L9e:
            r5 = move-exception
            r9.errorCode = r2     // Catch: java.lang.Throwable -> L9c
            java.lang.String r6 = r5.getMessage()     // Catch: java.lang.Throwable -> L9c
            r9.errorMsg = r6     // Catch: java.lang.Throwable -> L9c
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L9c
            r6.<init>()     // Catch: java.lang.Throwable -> L9c
            int r7 = r9.errorCode     // Catch: java.lang.Throwable -> L9c
            r6.append(r7)     // Catch: java.lang.Throwable -> L9c
            r6.append(r0)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r0 = r9.errorMsg     // Catch: java.lang.Throwable -> L9c
            r6.append(r0)     // Catch: java.lang.Throwable -> L9c
            java.lang.String r0 = r6.toString()     // Catch: java.lang.Throwable -> L9c
            com.bianfeng.ymnsdk.util.Logger.i(r1, r0)     // Catch: java.lang.Throwable -> L9c
            if (r3 == 0) goto Lcb
            r3.close()     // Catch: java.io.IOException -> Lc7
            goto Lcb
        Lc7:
            r0 = move-exception
            r0.printStackTrace()
        Lcb:
            return r4
        Lcc:
            if (r3 == 0) goto Ld6
            r3.close()     // Catch: java.io.IOException -> Ld2
            goto Ld6
        Ld2:
            r1 = move-exception
            r1.printStackTrace()
        Ld6:
            throw r0
    }

    public java.util.TreeMap<java.lang.String, java.lang.String> getHeadersMap() {
            r1 = this;
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r1.headersMap
            return r0
    }

    public boolean isGetMethod() {
            r2 = this;
            java.lang.String r0 = r2.method
            java.lang.String r1 = "GET"
            boolean r0 = r0.equals(r1)
            return r0
    }

    public void request(java.lang.String r9, java.lang.String r10, com.bianfeng.ymnsdk.entity.PayTokenEntity.PayloadEntity r11, java.lang.String r12, com.bianfeng.ymnsdk.action.HttpListener r13) {
            r8 = this;
            if (r11 != 0) goto L8
            java.lang.String r0 = "  ---------  payloadEntity is null --------- "
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            return
        L8:
            com.bianfeng.ymnsdk.actionv2.HttpHelperV2$a r0 = new com.bianfeng.ymnsdk.actionv2.HttpHelperV2$a
            r1 = r0
            r2 = r8
            r3 = r11
            r4 = r9
            r5 = r10
            r6 = r12
            r7 = r13
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r0.start()
            return
    }

    public void setMethod(int r2) {
            r1 = this;
            r0 = 1
            if (r2 != r0) goto L6
            java.lang.String r0 = "GET"
            goto L8
        L6:
            java.lang.String r0 = "POST"
        L8:
            r1.method = r0
            return
    }
}
