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
                java.net.HttpURLConnection r0 = com.bianfeng.ymnsdk.actionv2.HttpHelperV2.access$000(r1, r2, r3, r0, r4)
                com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r1 = r5.f
                com.bianfeng.ymnsdk.action.HttpListener r2 = r5.e
                boolean r1 = com.bianfeng.ymnsdk.actionv2.HttpHelperV2.access$100(r1, r0, r2)
                if (r1 == 0) goto L33
                if (r0 == 0) goto L44
                r0.disconnect()
                goto L44
            L33:
                com.bianfeng.ymnsdk.action.HttpListener r0 = r5.e
                com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r1 = r5.f
                int r1 = com.bianfeng.ymnsdk.actionv2.HttpHelperV2.access$200(r1)
                com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r2 = r5.f
                java.lang.String r2 = com.bianfeng.ymnsdk.actionv2.HttpHelperV2.access$300(r2)
                r0.onError(r1, r2)
            L44:
                return
        }
    }

    public HttpHelperV2(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.context = r1
            java.util.TreeMap r1 = new java.util.TreeMap
            r1.<init>()
            r0.headersMap = r1
            return
    }

    static java.net.HttpURLConnection access$000(com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r0, java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            java.net.HttpURLConnection r0 = r0.createHttpRequest(r1, r2, r3, r4)
            return r0
    }

    static boolean access$100(com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r0, java.net.HttpURLConnection r1, com.bianfeng.ymnsdk.action.HttpListener r2) {
            boolean r0 = r0.openUrl(r1, r2)
            return r0
    }

    static int access$200(com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r0) {
            int r0 = r0.errorCode
            return r0
    }

    static java.lang.String access$300(com.bianfeng.ymnsdk.actionv2.HttpHelperV2 r0) {
            java.lang.String r0 = r0.errorMsg
            return r0
    }

    private void addHeader(java.net.HttpURLConnection r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r2.headersMap
            com.bianfeng.ymnsdk.util.security.SecurityUtil r1 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()
            java.lang.String r4 = r1.getPaySignatue(r4, r5)
            java.lang.String r5 = "X-Signature"
            r0.put(r5, r4)
            java.util.TreeMap<java.lang.String, java.lang.String> r4 = r2.headersMap
            java.util.Set r4 = r4.entrySet()
            java.util.Iterator r4 = r4.iterator()
        L19:
            boolean r5 = r4.hasNext()
            if (r5 == 0) goto L35
            java.lang.Object r5 = r4.next()
            java.util.Map$Entry r5 = (java.util.Map.Entry) r5
            java.lang.Object r0 = r5.getKey()
            java.lang.String r0 = (java.lang.String) r0
            java.lang.Object r5 = r5.getValue()
            java.lang.String r5 = (java.lang.String) r5
            r3.addRequestProperty(r0, r5)
            goto L19
        L35:
            return
    }

    private java.lang.String checkReasonCode(java.util.Map<java.lang.String, java.util.List<java.lang.String>> r5) {
            r4 = this;
            java.util.Set r5 = r5.entrySet()
            java.util.Iterator r5 = r5.iterator()
        L8:
            boolean r0 = r5.hasNext()
            java.lang.String r1 = "1"
            if (r0 == 0) goto L4f
            java.lang.Object r0 = r5.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r2 = r0.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r0.getValue()
            java.util.List r3 = (java.util.List) r3
            java.lang.Object r0 = r0.getKey()
            java.lang.CharSequence r0 = (java.lang.CharSequence) r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L2f
            goto L8
        L2f:
            java.lang.String r0 = "X-Error-Code"
            boolean r0 = r2.equalsIgnoreCase(r0)
            if (r0 == 0) goto L8
            java.util.Iterator r0 = r3.iterator()
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L8
            java.lang.Object r5 = r0.next()
            java.lang.String r5 = (java.lang.String) r5
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L4e
            return r1
        L4e:
            return r5
        L4f:
            return r1
    }

    private java.net.HttpURLConnection createHttpRequest(java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8) {
            r4 = this;
            r0 = 0
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L80
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L80
            java.net.URLConnection r5 = r1.openConnection()     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L80
            java.net.HttpURLConnection r5 = (java.net.HttpURLConnection) r5     // Catch: java.lang.Throwable -> L7e java.lang.Exception -> L80
            android.content.Context r2 = r4.context     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            java.net.HttpURLConnection r2 = getProxy(r2, r1)     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            if (r2 == 0) goto L1d
            android.content.Context r2 = r4.context     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            java.net.HttpURLConnection r5 = getProxy(r2, r1)     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            goto L1d
        L1b:
            r6 = move-exception
            goto L83
        L1d:
            java.lang.String r1 = "Authorization"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            r2.<init>()     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            java.lang.String r3 = "BEARER "
            r2.append(r3)     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            r2.append(r7)     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            java.lang.String r7 = r2.toString()     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            r5.addRequestProperty(r1, r7)     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            r4.addHeader(r5, r6, r8)     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            r7 = 25000(0x61a8, float:3.5032E-41)
            r5.setReadTimeout(r7)     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            r7 = 15000(0x3a98, float:2.102E-41)
            r5.setConnectTimeout(r7)     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            r7 = 0
            r5.setUseCaches(r7)     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            java.lang.String r7 = "Content-Type"
            java.lang.String r8 = "application/json,charset=UTF-8"
            r5.setRequestProperty(r7, r8)     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            java.lang.String r7 = r4.method     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            java.lang.String r8 = "POST"
            boolean r7 = r7.equals(r8)     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            if (r7 == 0) goto L5c
            r7 = 1
            r5.setDoOutput(r7)     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            r5.setDoInput(r7)     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
        L5c:
            java.io.DataOutputStream r7 = new java.io.DataOutputStream     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            java.io.OutputStream r8 = r5.getOutputStream()     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            r7.<init>(r8)     // Catch: java.lang.Exception -> L1b java.lang.Throwable -> L7e
            java.lang.String r8 = "UTF-8"
            byte[] r6 = r6.getBytes(r8)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7b
            r7.write(r6)     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7b
            r7.flush()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7b
            r7.close()     // Catch: java.lang.Throwable -> L78 java.lang.Exception -> L7b
            r7.close()     // Catch: java.io.IOException -> La7
            goto Lab
        L78:
            r5 = move-exception
            r0 = r7
            goto Lac
        L7b:
            r6 = move-exception
            r0 = r7
            goto L83
        L7e:
            r5 = move-exception
            goto Lac
        L80:
            r5 = move-exception
            r6 = r5
            r5 = r0
        L83:
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L7e
            r7 = 601(0x259, float:8.42E-43)
            r4.errorCode = r7     // Catch: java.lang.Throwable -> L7e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7e
            r7.<init>()     // Catch: java.lang.Throwable -> L7e
            java.lang.String r8 = "request data error "
            r7.append(r8)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r6 = r6.getMessage()     // Catch: java.lang.Throwable -> L7e
            r7.append(r6)     // Catch: java.lang.Throwable -> L7e
            java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> L7e
            r4.errorMsg = r6     // Catch: java.lang.Throwable -> L7e
            if (r0 == 0) goto Lab
            r0.close()     // Catch: java.io.IOException -> La7
            goto Lab
        La7:
            r6 = move-exception
            r6.printStackTrace()
        Lab:
            return r5
        Lac:
            if (r0 == 0) goto Lb6
            r0.close()     // Catch: java.io.IOException -> Lb2
            goto Lb6
        Lb2:
            r6 = move-exception
            r6.printStackTrace()
        Lb6:
            throw r5
    }

    private java.lang.String getInputStreamString(java.io.InputStream r6) throws java.io.IOException {
            r5 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 1048576(0x100000, float:1.469368E-39)
            byte[] r1 = new byte[r1]
        L9:
            int r2 = r6.read(r1)
            r3 = -1
            if (r2 == r3) goto L1a
            java.lang.String r3 = new java.lang.String
            r4 = 0
            r3.<init>(r1, r4, r2)
            r0.append(r3)
            goto L9
        L1a:
            r6.close()
            java.lang.String r6 = r0.toString()
            return r6
    }

    public static java.net.HttpURLConnection getProxy(android.content.Context r3, java.net.URL r4) {
            java.lang.String r0 = "connectivity"
            java.lang.Object r3 = r3.getSystemService(r0)
            android.net.ConnectivityManager r3 = (android.net.ConnectivityManager) r3
            android.net.NetworkInfo r3 = r3.getActiveNetworkInfo()
            r0 = 0
            if (r3 == 0) goto L40
            boolean r1 = r3.isAvailable()
            if (r1 == 0) goto L40
            int r3 = r3.getType()
            if (r3 == 0) goto L1c
            goto L40
        L1c:
            java.lang.String r3 = android.net.Proxy.getDefaultHost()
            int r1 = android.net.Proxy.getDefaultPort()
            if (r3 == 0) goto L40
            r2 = -1
            if (r1 == r2) goto L40
            java.net.InetSocketAddress r2 = new java.net.InetSocketAddress     // Catch: java.io.IOException -> L3c
            r2.<init>(r3, r1)     // Catch: java.io.IOException -> L3c
            java.net.Proxy r3 = new java.net.Proxy     // Catch: java.io.IOException -> L3c
            java.net.Proxy$Type r1 = java.net.Proxy.Type.HTTP     // Catch: java.io.IOException -> L3c
            r3.<init>(r1, r2)     // Catch: java.io.IOException -> L3c
            java.net.URLConnection r3 = r4.openConnection(r3)     // Catch: java.io.IOException -> L3c
            java.net.HttpURLConnection r3 = (java.net.HttpURLConnection) r3     // Catch: java.io.IOException -> L3c
            return r3
        L3c:
            r3 = move-exception
            r3.printStackTrace()
        L40:
            return r0
    }

    private boolean openUrl(java.net.HttpURLConnection r8, com.bianfeng.ymnsdk.action.HttpListener r9) {
            r7 = this;
            java.lang.String r0 = "|"
            java.lang.String r1 = "错误信息："
            r2 = 0
            r3 = 0
            int r4 = r8.getResponseCode()     // Catch: java.lang.Throwable -> L97 java.lang.Exception -> L99
            r5 = 200(0xc8, float:2.8E-43)
            if (r4 != r5) goto L62
            java.io.InputStream r3 = r8.getInputStream()     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            java.util.Map r8 = r8.getHeaderFields()     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            java.lang.String r8 = r7.checkReasonCode(r8)     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            java.lang.String r5 = r7.getInputStreamString(r3)     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            java.lang.String r6 = "0"
            boolean r6 = r6.equalsIgnoreCase(r8)     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            if (r6 == 0) goto L35
            r9.onComplete(r5)     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            r8 = 1
            if (r3 == 0) goto L34
            r3.close()     // Catch: java.io.IOException -> L30
            goto L34
        L30:
            r9 = move-exception
            r9.printStackTrace()
        L34:
            return r8
        L35:
            int r9 = java.lang.Integer.parseInt(r8)     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            r7.errorCode = r9     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            r7.errorMsg = r5     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            r9.<init>()     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            r9.append(r1)     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            r9.append(r8)     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            r9.append(r0)     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            java.lang.String r8 = r7.errorMsg     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            r9.append(r8)     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            java.lang.String r8 = r9.toString()     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            com.bianfeng.ymnsdk.util.Logger.i(r8)     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            if (r3 == 0) goto L61
            r3.close()     // Catch: java.io.IOException -> L5d
            goto L61
        L5d:
            r8 = move-exception
            r8.printStackTrace()
        L61:
            return r2
        L62:
            r7.errorCode = r4     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            java.io.InputStream r3 = r8.getErrorStream()     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            java.lang.String r8 = r7.getInputStreamString(r3)     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            r7.errorMsg = r8     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            r8.<init>()     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            r8.append(r1)     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            int r9 = r7.errorCode     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            r8.append(r9)     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            r8.append(r0)     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            java.lang.String r9 = r7.errorMsg     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            r8.append(r9)     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            com.bianfeng.ymnsdk.util.Logger.i(r8)     // Catch: java.lang.Exception -> L95 java.lang.Throwable -> L97
            if (r3 == 0) goto L94
            r3.close()     // Catch: java.io.IOException -> L90
            goto L94
        L90:
            r8 = move-exception
            r8.printStackTrace()
        L94:
            return r2
        L95:
            r8 = move-exception
            goto L9c
        L97:
            r8 = move-exception
            goto Lc8
        L99:
            r8 = move-exception
            r4 = 604(0x25c, float:8.46E-43)
        L9c:
            r7.errorCode = r4     // Catch: java.lang.Throwable -> L97
            java.lang.String r8 = r8.getMessage()     // Catch: java.lang.Throwable -> L97
            r7.errorMsg = r8     // Catch: java.lang.Throwable -> L97
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L97
            r8.<init>()     // Catch: java.lang.Throwable -> L97
            int r9 = r7.errorCode     // Catch: java.lang.Throwable -> L97
            r8.append(r9)     // Catch: java.lang.Throwable -> L97
            r8.append(r0)     // Catch: java.lang.Throwable -> L97
            java.lang.String r9 = r7.errorMsg     // Catch: java.lang.Throwable -> L97
            r8.append(r9)     // Catch: java.lang.Throwable -> L97
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L97
            com.bianfeng.ymnsdk.util.Logger.i(r1, r8)     // Catch: java.lang.Throwable -> L97
            if (r3 == 0) goto Lc7
            r3.close()     // Catch: java.io.IOException -> Lc3
            goto Lc7
        Lc3:
            r8 = move-exception
            r8.printStackTrace()
        Lc7:
            return r2
        Lc8:
            if (r3 == 0) goto Ld2
            r3.close()     // Catch: java.io.IOException -> Lce
            goto Ld2
        Lce:
            r9 = move-exception
            r9.printStackTrace()
        Ld2:
            throw r8
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
            java.lang.String r9 = "  ---------  payloadEntity is null --------- "
            com.bianfeng.ymnsdk.util.Logger.i(r9)
            return
        L8:
            com.bianfeng.ymnsdk.actionv2.HttpHelperV2$a r7 = new com.bianfeng.ymnsdk.actionv2.HttpHelperV2$a
            r0 = r7
            r1 = r8
            r2 = r11
            r3 = r9
            r4 = r10
            r5 = r12
            r6 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r7.start()
            return
    }

    public void setMethod(int r2) {
            r1 = this;
            r0 = 1
            if (r2 != r0) goto L6
            java.lang.String r2 = "GET"
            goto L8
        L6:
            java.lang.String r2 = "POST"
        L8:
            r1.method = r2
            return
    }
}
