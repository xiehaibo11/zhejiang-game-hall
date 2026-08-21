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
                r3 = this;
                com.bianfeng.ymnsdk.hostaction.HostHttpHelper r0 = r3.d
                java.lang.String r1 = r3.a
                java.lang.String r2 = r3.b
                java.net.HttpURLConnection r0 = com.bianfeng.ymnsdk.hostaction.HostHttpHelper.access$000(r0, r1, r2)
                com.bianfeng.ymnsdk.hostaction.HostHttpHelper r1 = r3.d
                com.bianfeng.ymnsdk.action.HttpListener r2 = r3.c
                boolean r1 = com.bianfeng.ymnsdk.hostaction.HostHttpHelper.access$100(r1, r0, r2)
                if (r1 == 0) goto L1a
                if (r0 == 0) goto L19
                r0.disconnect()
            L19:
                return
            L1a:
                com.bianfeng.ymnsdk.action.HttpListener r0 = r3.c
                com.bianfeng.ymnsdk.hostaction.HostHttpHelper r1 = r3.d
                int r1 = com.bianfeng.ymnsdk.hostaction.HostHttpHelper.access$200(r1)
                com.bianfeng.ymnsdk.hostaction.HostHttpHelper r2 = r3.d
                java.lang.String r2 = com.bianfeng.ymnsdk.hostaction.HostHttpHelper.access$300(r2)
                r0.onError(r1, r2)
                return
        }
    }

    public HostHttpHelper(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.context = r1
            java.util.TreeMap r1 = new java.util.TreeMap
            r1.<init>()
            r0.headersMap = r1
            return
    }

    static java.net.HttpURLConnection access$000(com.bianfeng.ymnsdk.hostaction.HostHttpHelper r0, java.lang.String r1, java.lang.String r2) {
            java.net.HttpURLConnection r0 = r0.createHttpRequest(r1, r2)
            return r0
    }

    static boolean access$100(com.bianfeng.ymnsdk.hostaction.HostHttpHelper r0, java.net.HttpURLConnection r1, com.bianfeng.ymnsdk.action.HttpListener r2) {
            boolean r0 = r0.openUrl(r1, r2)
            return r0
    }

    static int access$200(com.bianfeng.ymnsdk.hostaction.HostHttpHelper r0) {
            int r0 = r0.errorCode
            return r0
    }

    static java.lang.String access$300(com.bianfeng.ymnsdk.hostaction.HostHttpHelper r0) {
            java.lang.String r0 = r0.errorMsg
            return r0
    }

    private void addHeader(java.net.HttpURLConnection r4) {
            r3 = this;
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r3.headersMap
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L26
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            r4.addRequestProperty(r2, r1)
            goto La
        L26:
            return
    }

    private java.lang.String checkReasonCode(java.lang.String r2) throws org.json.JSONException {
            r1 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r2)
            java.lang.String r2 = "code"
            java.lang.String r2 = r0.optString(r2)
            java.lang.String r0 = "0"
            boolean r2 = r2.equals(r0)
            if (r2 == 0) goto L14
            return r0
        L14:
            java.lang.String r2 = "-1"
            return r2
    }

    private java.net.HttpURLConnection createHttpRequest(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            r0 = 0
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            java.net.URLConnection r4 = r1.openConnection()     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            java.net.HttpURLConnection r4 = (java.net.HttpURLConnection) r4     // Catch: java.lang.Throwable -> L6a java.io.IOException -> L6c
            android.content.Context r2 = r3.context     // Catch: java.io.IOException -> L1b java.lang.Throwable -> L6a
            java.net.HttpURLConnection r2 = getProxy(r2, r1)     // Catch: java.io.IOException -> L1b java.lang.Throwable -> L6a
            if (r2 == 0) goto L1d
            android.content.Context r2 = r3.context     // Catch: java.io.IOException -> L1b java.lang.Throwable -> L6a
            java.net.HttpURLConnection r4 = getProxy(r2, r1)     // Catch: java.io.IOException -> L1b java.lang.Throwable -> L6a
            goto L1d
        L1b:
            r5 = move-exception
            goto L6f
        L1d:
            r3.addHeader(r4)     // Catch: java.io.IOException -> L1b java.lang.Throwable -> L6a
            r1 = 25000(0x61a8, float:3.5032E-41)
            r4.setReadTimeout(r1)     // Catch: java.io.IOException -> L1b java.lang.Throwable -> L6a
            r1 = 15000(0x3a98, float:2.102E-41)
            r4.setConnectTimeout(r1)     // Catch: java.io.IOException -> L1b java.lang.Throwable -> L6a
            r1 = 0
            r4.setUseCaches(r1)     // Catch: java.io.IOException -> L1b java.lang.Throwable -> L6a
            java.lang.String r1 = "Content-Type"
            java.lang.String r2 = "application/json,charset=UTF-8"
            r4.setRequestProperty(r1, r2)     // Catch: java.io.IOException -> L1b java.lang.Throwable -> L6a
            java.lang.String r1 = r3.method     // Catch: java.io.IOException -> L1b java.lang.Throwable -> L6a
            java.lang.String r2 = "POST"
            boolean r1 = r1.equals(r2)     // Catch: java.io.IOException -> L1b java.lang.Throwable -> L6a
            if (r1 == 0) goto L64
            r1 = 1
            r4.setDoOutput(r1)     // Catch: java.io.IOException -> L1b java.lang.Throwable -> L6a
            r4.setDoInput(r1)     // Catch: java.io.IOException -> L1b java.lang.Throwable -> L6a
            java.io.DataOutputStream r1 = new java.io.DataOutputStream     // Catch: java.io.IOException -> L1b java.lang.Throwable -> L6a
            java.io.OutputStream r2 = r4.getOutputStream()     // Catch: java.io.IOException -> L1b java.lang.Throwable -> L6a
            r1.<init>(r2)     // Catch: java.io.IOException -> L1b java.lang.Throwable -> L6a
            java.lang.String r5 = java.lang.String.valueOf(r5)     // Catch: java.lang.Throwable -> L5e java.io.IOException -> L61
            r1.writeBytes(r5)     // Catch: java.lang.Throwable -> L5e java.io.IOException -> L61
            r1.flush()     // Catch: java.lang.Throwable -> L5e java.io.IOException -> L61
            r1.close()     // Catch: java.lang.Throwable -> L5e java.io.IOException -> L61
            r0 = r1
            goto L64
        L5e:
            r4 = move-exception
            r0 = r1
            goto L98
        L61:
            r5 = move-exception
            r0 = r1
            goto L6f
        L64:
            if (r0 == 0) goto L97
            r0.close()     // Catch: java.io.IOException -> L93
            goto L97
        L6a:
            r4 = move-exception
            goto L98
        L6c:
            r4 = move-exception
            r5 = r4
            r4 = r0
        L6f:
            r5.printStackTrace()     // Catch: java.lang.Throwable -> L6a
            r1 = 601(0x259, float:8.42E-43)
            r3.errorCode = r1     // Catch: java.lang.Throwable -> L6a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6a
            r1.<init>()     // Catch: java.lang.Throwable -> L6a
            java.lang.String r2 = "request data error "
            r1.append(r2)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r5 = r5.getMessage()     // Catch: java.lang.Throwable -> L6a
            r1.append(r5)     // Catch: java.lang.Throwable -> L6a
            java.lang.String r5 = r1.toString()     // Catch: java.lang.Throwable -> L6a
            r3.errorMsg = r5     // Catch: java.lang.Throwable -> L6a
            if (r0 == 0) goto L97
            r0.close()     // Catch: java.io.IOException -> L93
            goto L97
        L93:
            r5 = move-exception
            r5.printStackTrace()
        L97:
            return r4
        L98:
            if (r0 == 0) goto La2
            r0.close()     // Catch: java.io.IOException -> L9e
            goto La2
        L9e:
            r5 = move-exception
            r5.printStackTrace()
        La2:
            throw r4
    }

    private java.lang.String getErrorMsg(java.lang.String r2) throws org.json.JSONException {
            r1 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r2)
            java.lang.String r2 = "message"
            java.lang.String r2 = r0.optString(r2)
            return r2
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
            r0 = 0
            java.lang.String r1 = "connectivity"
            java.lang.Object r3 = r3.getSystemService(r1)     // Catch: java.lang.Exception -> L41
            android.net.ConnectivityManager r3 = (android.net.ConnectivityManager) r3     // Catch: java.lang.Exception -> L41
            android.net.NetworkInfo r3 = r3.getActiveNetworkInfo()     // Catch: java.lang.Exception -> L41
            if (r3 == 0) goto L41
            boolean r1 = r3.isAvailable()     // Catch: java.lang.Exception -> L41
            if (r1 == 0) goto L41
            int r3 = r3.getType()     // Catch: java.lang.Exception -> L41
            if (r3 == 0) goto L1c
            goto L41
        L1c:
            java.lang.String r3 = android.net.Proxy.getDefaultHost()     // Catch: java.lang.Exception -> L41
            int r1 = android.net.Proxy.getDefaultPort()     // Catch: java.lang.Exception -> L41
            if (r3 == 0) goto L41
            r2 = -1
            if (r1 == r2) goto L41
            java.net.InetSocketAddress r2 = new java.net.InetSocketAddress     // Catch: java.io.IOException -> L3c java.lang.Exception -> L41
            r2.<init>(r3, r1)     // Catch: java.io.IOException -> L3c java.lang.Exception -> L41
            java.net.Proxy r3 = new java.net.Proxy     // Catch: java.io.IOException -> L3c java.lang.Exception -> L41
            java.net.Proxy$Type r1 = java.net.Proxy.Type.HTTP     // Catch: java.io.IOException -> L3c java.lang.Exception -> L41
            r3.<init>(r1, r2)     // Catch: java.io.IOException -> L3c java.lang.Exception -> L41
            java.net.URLConnection r3 = r4.openConnection(r3)     // Catch: java.io.IOException -> L3c java.lang.Exception -> L41
            java.net.HttpURLConnection r3 = (java.net.HttpURLConnection) r3     // Catch: java.io.IOException -> L3c java.lang.Exception -> L41
            return r3
        L3c:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Exception -> L41
        L41:
            return r0
    }

    private boolean openUrl(java.net.HttpURLConnection r7, com.bianfeng.ymnsdk.action.HttpListener r8) {
            r6 = this;
            r0 = 0
            if (r7 == 0) goto L96
            r1 = 604(0x25c, float:8.46E-43)
            r2 = 0
            int r1 = r7.getResponseCode()     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            r3 = 200(0xc8, float:2.8E-43)
            if (r1 != r3) goto L5c
            java.io.InputStream r2 = r7.getInputStream()     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            java.lang.String r7 = r6.getInputStreamString(r2)     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            java.lang.String r3 = r6.checkReasonCode(r7)     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            r4.<init>()     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            java.lang.String r5 = "code参数"
            r4.append(r5)     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            r4.append(r3)     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            com.bianfeng.ymnsdk.util.Logger.e(r4)     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            java.lang.String r4 = "0"
            boolean r4 = r4.equalsIgnoreCase(r3)     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            if (r4 == 0) goto L45
            r8.onComplete(r7)     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            r7 = 1
            if (r2 == 0) goto L44
            r2.close()     // Catch: java.io.IOException -> L40
            goto L44
        L40:
            r8 = move-exception
            r8.printStackTrace()
        L44:
            return r7
        L45:
            int r8 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            r6.errorCode = r8     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            java.lang.String r7 = r6.getErrorMsg(r7)     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            r6.errorMsg = r7     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            if (r2 == 0) goto L5b
            r2.close()     // Catch: java.io.IOException -> L57
            goto L5b
        L57:
            r7 = move-exception
            r7.printStackTrace()
        L5b:
            return r0
        L5c:
            r6.errorCode = r1     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            java.io.InputStream r2 = r7.getErrorStream()     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            java.lang.String r7 = r6.getInputStreamString(r2)     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            r6.errorMsg = r7     // Catch: java.lang.Throwable -> L73 org.json.JSONException -> L75 java.io.IOException -> L77
            if (r2 == 0) goto L72
            r2.close()     // Catch: java.io.IOException -> L6e
            goto L72
        L6e:
            r7 = move-exception
            r7.printStackTrace()
        L72:
            return r0
        L73:
            r7 = move-exception
            goto L8b
        L75:
            r7 = move-exception
            goto L78
        L77:
            r7 = move-exception
        L78:
            r6.errorCode = r1     // Catch: java.lang.Throwable -> L73
            java.lang.String r7 = r7.getMessage()     // Catch: java.lang.Throwable -> L73
            r6.errorMsg = r7     // Catch: java.lang.Throwable -> L73
            if (r2 == 0) goto L8a
            r2.close()     // Catch: java.io.IOException -> L86
            goto L8a
        L86:
            r7 = move-exception
            r7.printStackTrace()
        L8a:
            return r0
        L8b:
            if (r2 == 0) goto L95
            r2.close()     // Catch: java.io.IOException -> L91
            goto L95
        L91:
            r8 = move-exception
            r8.printStackTrace()
        L95:
            throw r7
        L96:
            return r0
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
            java.lang.String r2 = "GET"
            goto L8
        L6:
            java.lang.String r2 = "POST"
        L8:
            r1.method = r2
            return
    }
}
