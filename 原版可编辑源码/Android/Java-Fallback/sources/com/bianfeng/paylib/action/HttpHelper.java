package com.bianfeng.paylib.action;

public class HttpHelper {
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
    public static final java.lang.String VERSION_SERVER_V2 = "v2";
    private final java.lang.String TAG;
    private android.content.Context context;
    private int errorCode;
    private java.lang.String errorMsg;
    private java.util.TreeMap<java.lang.String, java.lang.String> headersMap;
    private java.lang.String method;


    public HttpHelper(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "HttpHelper"
            r1.TAG = r0
            r1.context = r2
            java.util.TreeMap r2 = new java.util.TreeMap
            r2.<init>()
            r1.headersMap = r2
            return
    }

    static java.net.HttpURLConnection access$000(com.bianfeng.paylib.action.HttpHelper r0, java.lang.String r1, java.lang.String r2) {
            java.net.HttpURLConnection r0 = r0.createHttpRequest(r1, r2)
            return r0
    }

    static boolean access$100(com.bianfeng.paylib.action.HttpHelper r0, java.net.HttpURLConnection r1, com.bianfeng.paylib.action.HttpListener r2) {
            boolean r0 = r0.openUrl(r1, r2)
            return r0
    }

    static java.lang.String access$200(com.bianfeng.paylib.action.HttpHelper r0) {
            java.lang.String r0 = r0.errorMsg
            return r0
    }

    static int access$300(com.bianfeng.paylib.action.HttpHelper r0) {
            int r0 = r0.errorCode
            return r0
    }

    private void addHeader(java.net.HttpURLConnection r6) {
            r5 = this;
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r5.headersMap
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L52
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            com.bianfeng.utilslib.Logger r2 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "字符串----"
            r3.append(r4)
            java.lang.Object r4 = r1.getKey()
            java.lang.String r4 = (java.lang.String) r4
            r3.append(r4)
            java.lang.String r4 = "---"
            r3.append(r4)
            java.lang.Object r4 = r1.getValue()
            java.lang.String r4 = (java.lang.String) r4
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.i(r3)
            java.lang.Object r2 = r1.getKey()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r1 = r1.getValue()
            java.lang.String r1 = (java.lang.String) r1
            r6.addRequestProperty(r2, r1)
            goto La
        L52:
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

    private java.net.HttpURLConnection createHttpRequest(java.lang.String r5, java.lang.String r6) {
            r4 = this;
            java.lang.String r0 = "UTF-8"
            r1 = 0
            java.net.URL r2 = new java.net.URL     // Catch: java.lang.Throwable -> L7a java.io.IOException -> L7c
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L7a java.io.IOException -> L7c
            java.net.URLConnection r5 = r2.openConnection()     // Catch: java.lang.Throwable -> L7a java.io.IOException -> L7c
            java.net.HttpURLConnection r5 = (java.net.HttpURLConnection) r5     // Catch: java.lang.Throwable -> L7a java.io.IOException -> L7c
            android.content.Context r3 = r4.context     // Catch: java.io.IOException -> L78 java.lang.Throwable -> L7a
            java.net.HttpURLConnection r3 = getProxy(r3, r2)     // Catch: java.io.IOException -> L78 java.lang.Throwable -> L7a
            if (r3 == 0) goto L1c
            android.content.Context r3 = r4.context     // Catch: java.io.IOException -> L78 java.lang.Throwable -> L7a
            java.net.HttpURLConnection r5 = getProxy(r3, r2)     // Catch: java.io.IOException -> L78 java.lang.Throwable -> L7a
        L1c:
            r2 = 25000(0x61a8, float:3.5032E-41)
            r5.setReadTimeout(r2)     // Catch: java.io.IOException -> L78 java.lang.Throwable -> L7a
            r2 = 15000(0x3a98, float:2.102E-41)
            r5.setConnectTimeout(r2)     // Catch: java.io.IOException -> L78 java.lang.Throwable -> L7a
            r2 = 0
            r5.setUseCaches(r2)     // Catch: java.io.IOException -> L78 java.lang.Throwable -> L7a
            java.lang.String r2 = "encoding"
            r5.addRequestProperty(r2, r0)     // Catch: java.io.IOException -> L78 java.lang.Throwable -> L7a
            java.lang.String r2 = "Accept-Charset"
            r5.addRequestProperty(r2, r0)     // Catch: java.io.IOException -> L78 java.lang.Throwable -> L7a
            java.lang.String r2 = "Content-Type"
            java.lang.String r3 = "application/json;charset=UTF-8"
            r5.setRequestProperty(r2, r3)     // Catch: java.io.IOException -> L78 java.lang.Throwable -> L7a
            r4.addHeader(r5)     // Catch: java.io.IOException -> L78 java.lang.Throwable -> L7a
            java.lang.String r2 = r4.method     // Catch: java.io.IOException -> L78 java.lang.Throwable -> L7a
            java.lang.String r3 = "POST"
            boolean r2 = r2.equals(r3)     // Catch: java.io.IOException -> L78 java.lang.Throwable -> L7a
            if (r2 == 0) goto L6d
            r2 = 1
            r5.setDoOutput(r2)     // Catch: java.io.IOException -> L78 java.lang.Throwable -> L7a
            r5.setDoInput(r2)     // Catch: java.io.IOException -> L78 java.lang.Throwable -> L7a
            java.io.DataOutputStream r2 = new java.io.DataOutputStream     // Catch: java.io.IOException -> L78 java.lang.Throwable -> L7a
            java.io.OutputStream r3 = r5.getOutputStream()     // Catch: java.io.IOException -> L78 java.lang.Throwable -> L7a
            r2.<init>(r3)     // Catch: java.io.IOException -> L78 java.lang.Throwable -> L7a
            byte[] r6 = r6.getBytes(r0)     // Catch: java.lang.Throwable -> L67 java.io.IOException -> L6a
            r2.write(r6)     // Catch: java.lang.Throwable -> L67 java.io.IOException -> L6a
            r2.flush()     // Catch: java.lang.Throwable -> L67 java.io.IOException -> L6a
            r2.close()     // Catch: java.lang.Throwable -> L67 java.io.IOException -> L6a
            r1 = r2
            goto L6d
        L67:
            r5 = move-exception
            r1 = r2
            goto Lba
        L6a:
            r6 = move-exception
            r1 = r2
            goto L7e
        L6d:
            if (r1 == 0) goto Lb9
            r1.close()     // Catch: java.io.IOException -> L73
            goto Lb9
        L73:
            r6 = move-exception
            r6.printStackTrace()
            goto Lb9
        L78:
            r6 = move-exception
            goto L7e
        L7a:
            r5 = move-exception
            goto Lba
        L7c:
            r6 = move-exception
            r5 = r1
        L7e:
            r6.printStackTrace()     // Catch: java.lang.Throwable -> L7a
            r0 = 601(0x259, float:8.42E-43)
            r4.errorCode = r0     // Catch: java.lang.Throwable -> L7a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7a
            r0.<init>()     // Catch: java.lang.Throwable -> L7a
            java.lang.String r2 = "request data error "
            r0.append(r2)     // Catch: java.lang.Throwable -> L7a
            java.lang.String r6 = r6.getMessage()     // Catch: java.lang.Throwable -> L7a
            r0.append(r6)     // Catch: java.lang.Throwable -> L7a
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Throwable -> L7a
            r4.errorMsg = r6     // Catch: java.lang.Throwable -> L7a
            java.lang.String r6 = "HttpHelper"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L7a
            r0.<init>()     // Catch: java.lang.Throwable -> L7a
            java.lang.String r2 = "createHttpRequest: "
            r0.append(r2)     // Catch: java.lang.Throwable -> L7a
            java.lang.String r2 = r4.errorMsg     // Catch: java.lang.Throwable -> L7a
            r0.append(r2)     // Catch: java.lang.Throwable -> L7a
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L7a
            android.util.Log.i(r6, r0)     // Catch: java.lang.Throwable -> L7a
            if (r1 == 0) goto Lb9
            r1.close()     // Catch: java.io.IOException -> L73
        Lb9:
            return r5
        Lba:
            if (r1 == 0) goto Lc4
            r1.close()     // Catch: java.io.IOException -> Lc0
            goto Lc4
        Lc0:
            r6 = move-exception
            r6.printStackTrace()
        Lc4:
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

    private boolean openUrl(java.net.HttpURLConnection r9, com.bianfeng.paylib.action.HttpListener r10) {
            r8 = this;
            r0 = 0
            r1 = 0
            int r2 = r9.getResponseCode()     // Catch: java.lang.Throwable -> La3 java.io.IOException -> La5
            r3 = 200(0xc8, float:2.8E-43)
            java.lang.String r4 = "HttpHelper"
            if (r2 != r3) goto L74
            java.io.InputStream r1 = r9.getInputStream()     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            java.util.Map r9 = r9.getHeaderFields()     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            java.lang.String r9 = r8.checkReasonCode(r9)     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            java.lang.String r3 = r8.getInputStreamString(r1)     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            com.bianfeng.utilslib.Logger r5 = com.bianfeng.utilslib.UtilsSdk.getLogger()     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            r6.<init>()     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            java.lang.String r7 = "code参数"
            r6.append(r7)     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            r6.append(r9)     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            java.lang.String r6 = r6.toString()     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            r5.i(r6)     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            java.lang.String r5 = "0"
            boolean r5 = r5.equalsIgnoreCase(r9)     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            if (r5 == 0) goto L4b
            r10.onComplete(r3)     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            r9 = 1
            if (r1 == 0) goto L4a
            r1.close()     // Catch: java.lang.Exception -> L46
            goto L4a
        L46:
            r10 = move-exception
            r10.printStackTrace()
        L4a:
            return r9
        L4b:
            int r9 = java.lang.Integer.parseInt(r9)     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            r8.errorCode = r9     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            r8.errorMsg = r3     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            r9.<init>()     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            java.lang.String r10 = "createHttpRequest: "
            r9.append(r10)     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            java.lang.String r10 = r8.errorMsg     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            r9.append(r10)     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            java.lang.String r9 = r9.toString()     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            android.util.Log.i(r4, r9)     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            if (r1 == 0) goto L73
            r1.close()     // Catch: java.lang.Exception -> L6f
            goto L73
        L6f:
            r9 = move-exception
            r9.printStackTrace()
        L73:
            return r0
        L74:
            r8.errorCode = r2     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            java.io.InputStream r1 = r9.getErrorStream()     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            java.lang.String r9 = r8.getInputStreamString(r1)     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            r8.errorMsg = r9     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            r9.<init>()     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            java.lang.String r10 = "接收到的错误信息: "
            r9.append(r10)     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            java.lang.String r10 = r8.errorMsg     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            r9.append(r10)     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            java.lang.String r9 = r9.toString()     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            android.util.Log.i(r4, r9)     // Catch: java.io.IOException -> La1 java.lang.Throwable -> La3
            if (r1 == 0) goto La0
            r1.close()     // Catch: java.lang.Exception -> L9c
            goto La0
        L9c:
            r9 = move-exception
            r9.printStackTrace()
        La0:
            return r0
        La1:
            r9 = move-exception
            goto La8
        La3:
            r9 = move-exception
            goto Lbe
        La5:
            r9 = move-exception
            r2 = 604(0x25c, float:8.46E-43)
        La8:
            r9.printStackTrace()     // Catch: java.lang.Throwable -> La3
            r8.errorCode = r2     // Catch: java.lang.Throwable -> La3
            java.lang.String r9 = r9.getMessage()     // Catch: java.lang.Throwable -> La3
            r8.errorMsg = r9     // Catch: java.lang.Throwable -> La3
            if (r1 == 0) goto Lbd
            r1.close()     // Catch: java.lang.Exception -> Lb9
            goto Lbd
        Lb9:
            r9 = move-exception
            r9.printStackTrace()
        Lbd:
            return r0
        Lbe:
            if (r1 == 0) goto Lc8
            r1.close()     // Catch: java.lang.Exception -> Lc4
            goto Lc8
        Lc4:
            r10 = move-exception
            r10.printStackTrace()
        Lc8:
            throw r9
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

    public void request(java.lang.String r2, java.lang.String r3, com.bianfeng.paylib.action.HttpListener r4) {
            r1 = this;
            com.bianfeng.paylib.action.HttpHelper$1 r0 = new com.bianfeng.paylib.action.HttpHelper$1
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
