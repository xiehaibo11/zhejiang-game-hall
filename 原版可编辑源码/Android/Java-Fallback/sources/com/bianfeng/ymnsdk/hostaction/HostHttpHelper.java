package com.bianfeng.ymnsdk.hostaction;

public class HostHttpHelper {
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
    private android.content.Context context;
    private int errorCode;
    private java.lang.String errorMsg;
    private java.util.TreeMap<java.lang.String, java.lang.String> headersMap;
    private java.lang.String method;

    class a extends java.lang.Thread {
        final java.lang.String a;
        final java.lang.String b;
        final com.bianfeng.ymnsdk.action.HttpListener c;
        final com.bianfeng.ymnsdk.hostaction.HostHttpHelper d;

        a(com.bianfeng.ymnsdk.hostaction.HostHttpHelper r1, java.lang.String r2, java.lang.String r3, com.bianfeng.ymnsdk.action.HttpListener r4) {
                r0 = this;
                r0.d = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r4 = this;
                com.bianfeng.ymnsdk.hostaction.HostHttpHelper r0 = r4.d
                java.lang.String r1 = r4.a
                java.lang.String r2 = r4.b
                java.net.HttpURLConnection r0 = com.bianfeng.ymnsdk.hostaction.HostHttpHelper.access$000(r0, r1, r2)
                com.bianfeng.ymnsdk.hostaction.HostHttpHelper r1 = r4.d
                com.bianfeng.ymnsdk.action.HttpListener r2 = r4.c
                boolean r1 = com.bianfeng.ymnsdk.hostaction.HostHttpHelper.access$100(r1, r0, r2)
                if (r1 == 0) goto L1a
                if (r0 == 0) goto L19
                r0.disconnect()
            L19:
                return
            L1a:
                com.bianfeng.ymnsdk.action.HttpListener r1 = r4.c
                com.bianfeng.ymnsdk.hostaction.HostHttpHelper r2 = r4.d
                int r2 = com.bianfeng.ymnsdk.hostaction.HostHttpHelper.access$200(r2)
                com.bianfeng.ymnsdk.hostaction.HostHttpHelper r3 = r4.d
                java.lang.String r3 = com.bianfeng.ymnsdk.hostaction.HostHttpHelper.access$300(r3)
                r1.onError(r2, r3)
                return
        }
    }

    public HostHttpHelper(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r1.context = r2
            java.util.TreeMap r0 = new java.util.TreeMap
            r0.<init>()
            r1.headersMap = r0
            return
    }

    static java.net.HttpURLConnection access$000(com.bianfeng.ymnsdk.hostaction.HostHttpHelper r1, java.lang.String r2, java.lang.String r3) {
            java.net.HttpURLConnection r0 = r1.createHttpRequest(r2, r3)
            return r0
    }

    static boolean access$100(com.bianfeng.ymnsdk.hostaction.HostHttpHelper r1, java.net.HttpURLConnection r2, com.bianfeng.ymnsdk.action.HttpListener r3) {
            boolean r0 = r1.openUrl(r2, r3)
            return r0
    }

    static int access$200(com.bianfeng.ymnsdk.hostaction.HostHttpHelper r1) {
            int r0 = r1.errorCode
            return r0
    }

    static java.lang.String access$300(com.bianfeng.ymnsdk.hostaction.HostHttpHelper r1) {
            java.lang.String r0 = r1.errorMsg
            return r0
    }

    private void addHeader(java.net.HttpURLConnection r5) {
            r4 = this;
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r4.headersMap
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L26
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r1.getValue()
            java.lang.String r3 = (java.lang.String) r3
            r5.addRequestProperty(r2, r3)
            goto La
        L26:
            return
    }

    private java.lang.String checkReasonCode(java.lang.String r4) throws org.json.JSONException {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r4)
            java.lang.String r1 = "code"
            java.lang.String r1 = r0.optString(r1)
            java.lang.String r2 = "0"
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L14
            return r2
        L14:
            java.lang.String r1 = "-1"
            return r1
    }

    private java.net.HttpURLConnection createHttpRequest(java.lang.String r7, java.lang.String r8) {
            r6 = this;
            r0 = 0
            r1 = 0
            r2 = 0
            java.net.URL r3 = new java.net.URL     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            r3.<init>(r7)     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            r2 = r3
            java.net.URLConnection r3 = r2.openConnection()     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            java.net.HttpURLConnection r3 = (java.net.HttpURLConnection) r3     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            r0 = r3
            android.content.Context r3 = r6.context     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            java.net.HttpURLConnection r3 = getProxy(r3, r2)     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            if (r3 == 0) goto L1f
            android.content.Context r3 = r6.context     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            java.net.HttpURLConnection r3 = getProxy(r3, r2)     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            r0 = r3
        L1f:
            r6.addHeader(r0)     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            r3 = 25000(0x61a8, float:3.5032E-41)
            r0.setReadTimeout(r3)     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            r3 = 15000(0x3a98, float:2.102E-41)
            r0.setConnectTimeout(r3)     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            r3 = 0
            r0.setUseCaches(r3)     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            java.lang.String r3 = "Content-Type"
            java.lang.String r4 = "application/json,charset=UTF-8"
            r0.setRequestProperty(r3, r4)     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            java.lang.String r3 = r6.method     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            java.lang.String r4 = "POST"
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            if (r3 == 0) goto L5f
            r3 = 1
            r0.setDoOutput(r3)     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            r0.setDoInput(r3)     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            java.io.DataOutputStream r3 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            java.io.OutputStream r4 = r0.getOutputStream()     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            r1 = r3
            java.lang.String r3 = java.lang.String.valueOf(r8)     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            r1.writeBytes(r3)     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            r1.flush()     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            r1.close()     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
        L5f:
            if (r1 == 0) goto L91
            r1.close()     // Catch: java.io.IOException -> L65
        L64:
            goto L91
        L65:
            r3 = move-exception
            r3.printStackTrace()
            goto L64
        L6a:
            r3 = move-exception
            goto L92
        L6c:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L6a
            r4 = 601(0x259, float:8.42E-43)
            r6.errorCode = r4     // Catch: java.lang.Throwable -> L6a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6a
            r4.<init>()     // Catch: java.lang.Throwable -> L6a
            java.lang.String r5 = "request data error "
            r4.append(r5)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r5 = r3.getMessage()     // Catch: java.lang.Throwable -> L6a
            r4.append(r5)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L6a
            r6.errorMsg = r4     // Catch: java.lang.Throwable -> L6a
            if (r1 == 0) goto L91
            r1.close()     // Catch: java.io.IOException -> L65
            goto L64
        L91:
            return r0
        L92:
            if (r1 == 0) goto L9c
            r1.close()     // Catch: java.io.IOException -> L98
            goto L9c
        L98:
            r4 = move-exception
            r4.printStackTrace()
        L9c:
            throw r3
    }

    private java.lang.String getErrorMsg(java.lang.String r3) throws org.json.JSONException {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r3)
            java.lang.String r1 = "message"
            java.lang.String r1 = r0.optString(r1)
            return r1
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
            r0 = 0
            java.lang.String r1 = "connectivity"
            java.lang.Object r1 = r8.getSystemService(r1)     // Catch: java.lang.Exception -> L42
            android.net.ConnectivityManager r1 = (android.net.ConnectivityManager) r1     // Catch: java.lang.Exception -> L42
            android.net.NetworkInfo r2 = r1.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L42
            if (r2 == 0) goto L41
            boolean r3 = r2.isAvailable()     // Catch: java.lang.Exception -> L42
            if (r3 == 0) goto L41
            int r3 = r2.getType()     // Catch: java.lang.Exception -> L42
            if (r3 == 0) goto L1c
            goto L41
        L1c:
            java.lang.String r3 = android.net.Proxy.getDefaultHost()     // Catch: java.lang.Exception -> L42
            int r4 = android.net.Proxy.getDefaultPort()     // Catch: java.lang.Exception -> L42
            if (r3 == 0) goto L40
            r5 = -1
            if (r4 == r5) goto L40
            java.net.InetSocketAddress r5 = new java.net.InetSocketAddress     // Catch: java.io.IOException -> L3c java.lang.Exception -> L42
            r5.<init>(r3, r4)     // Catch: java.io.IOException -> L3c java.lang.Exception -> L42
            java.net.Proxy r6 = new java.net.Proxy     // Catch: java.io.IOException -> L3c java.lang.Exception -> L42
            java.net.Proxy$Type r7 = java.net.Proxy.Type.HTTP     // Catch: java.io.IOException -> L3c java.lang.Exception -> L42
            r6.<init>(r7, r5)     // Catch: java.io.IOException -> L3c java.lang.Exception -> L42
            java.net.URLConnection r7 = r9.openConnection(r6)     // Catch: java.io.IOException -> L3c java.lang.Exception -> L42
            java.net.HttpURLConnection r7 = (java.net.HttpURLConnection) r7     // Catch: java.io.IOException -> L3c java.lang.Exception -> L42
            return r7
        L3c:
            r5 = move-exception
            r5.printStackTrace()     // Catch: java.lang.Exception -> L42
        L40:
            goto L43
        L41:
            return r0
        L42:
            r1 = move-exception
        L43:
            return r0
    }

    private boolean openUrl(java.net.HttpURLConnection r8, com.bianfeng.ymnsdk.action.HttpListener r9) {
            r7 = this;
            r0 = 604(0x25c, float:8.46E-43)
            r1 = 0
            r2 = 0
            if (r8 == 0) goto L9c
            int r3 = r8.getResponseCode()     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            r0 = r3
            r3 = 200(0xc8, float:2.8E-43)
            if (r0 != r3) goto L5f
            java.io.InputStream r3 = r8.getInputStream()     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            r1 = r3
            java.lang.String r3 = r7.getInputStreamString(r1)     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            java.lang.String r4 = r7.checkReasonCode(r3)     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            r5.<init>()     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            java.lang.String r6 = "code参数"
            r5.append(r6)     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            r5.append(r4)     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            com.bianfeng.ymnsdk.util.Logger.e(r5)     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            java.lang.String r5 = "0"
            boolean r5 = r5.equalsIgnoreCase(r4)     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            if (r5 == 0) goto L47
            r9.onComplete(r3)     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            r2 = 1
            if (r1 == 0) goto L46
            r1.close()     // Catch: java.io.IOException -> L42
            goto L46
        L42:
            r5 = move-exception
            r5.printStackTrace()
        L46:
            return r2
        L47:
            int r5 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            r7.errorCode = r5     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            java.lang.String r5 = r7.getErrorMsg(r3)     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            r7.errorMsg = r5     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            if (r1 == 0) goto L5e
            r1.close()     // Catch: java.io.IOException -> L5a
            goto L5e
        L5a:
            r5 = move-exception
            r5.printStackTrace()
        L5e:
            return r2
        L5f:
            r7.errorCode = r0     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            java.io.InputStream r3 = r8.getErrorStream()     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            r1 = r3
            java.lang.String r3 = r7.getInputStreamString(r1)     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            r7.errorMsg = r3     // Catch: java.lang.Throwable -> L78 org.json.JSONException -> L7a java.io.IOException -> L7c
            if (r1 == 0) goto L77
            r1.close()     // Catch: java.io.IOException -> L73
            goto L77
        L73:
            r3 = move-exception
            r3.printStackTrace()
        L77:
            return r2
        L78:
            r2 = move-exception
            goto L91
        L7a:
            r3 = move-exception
            goto L7d
        L7c:
            r3 = move-exception
        L7d:
            r7.errorCode = r0     // Catch: java.lang.Throwable -> L78
            java.lang.String r4 = r3.getMessage()     // Catch: java.lang.Throwable -> L78
            r7.errorMsg = r4     // Catch: java.lang.Throwable -> L78
            if (r1 == 0) goto L90
            r1.close()     // Catch: java.io.IOException -> L8c
            goto L90
        L8c:
            r4 = move-exception
            r4.printStackTrace()
        L90:
            return r2
        L91:
            if (r1 == 0) goto L9b
            r1.close()     // Catch: java.io.IOException -> L97
            goto L9b
        L97:
            r3 = move-exception
            r3.printStackTrace()
        L9b:
            throw r2
        L9c:
            if (r1 == 0) goto La7
            r1.close()     // Catch: java.io.IOException -> La3
            goto La7
        La3:
            r3 = move-exception
            r3.printStackTrace()
        La7:
            return r2
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

    public void request(java.lang.String r2, java.lang.String r3, com.bianfeng.ymnsdk.action.HttpListener r4) {
            r1 = this;
            com.bianfeng.ymnsdk.hostaction.HostHttpHelper$a r0 = new com.bianfeng.ymnsdk.hostaction.HostHttpHelper$a
            r0.<init>(r1, r2, r3, r4)
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
