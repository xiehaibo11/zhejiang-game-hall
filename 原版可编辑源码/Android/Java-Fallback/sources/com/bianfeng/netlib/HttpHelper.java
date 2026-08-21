package com.bianfeng.netlib;

public class HttpHelper {
    public static final int CODE_JSONERROR_ERROR = 603;
    public static final int CODE_NOT_NETWORK = 604;
    public static final int CODE_RES_SUCCESS = 0;
    public static final int CODE_SERVER_ERROR = 602;
    public static final int CODE_UNKNOW_ERROR = 601;
    public static final int CODE_UNSET = 999;
    public static final int HTTP_METHOD_GET = 1;
    public static final int HTTP_REQ_LIMIT_TIME = 15000;
    public static final int HTTP_RES_LIMIT_TIME = 25000;
    private final java.lang.String TAG;
    private android.app.Activity context;
    private int errorCode;
    private java.lang.String errorMsg;
    private java.lang.String mUrl;
    private int method;


    public HttpHelper(android.app.Activity r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "HttpHelper"
            r1.TAG = r0
            r1.context = r2
            return
    }

    static boolean access$000(com.bianfeng.netlib.HttpHelper r0, java.net.HttpURLConnection r1, com.bianfeng.netlib.HttpListener r2) {
            boolean r0 = r0.openUrl(r1, r2)
            return r0
    }

    static int access$100(com.bianfeng.netlib.HttpHelper r0) {
            int r0 = r0.errorCode
            return r0
    }

    static java.lang.String access$200(com.bianfeng.netlib.HttpHelper r0) {
            java.lang.String r0 = r0.errorMsg
            return r0
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
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "connectivity"
            java.lang.Object r3 = r3.getSystemService(r1)
            android.net.ConnectivityManager r3 = (android.net.ConnectivityManager) r3
            android.net.NetworkInfo r3 = r3.getActiveNetworkInfo()
            if (r3 == 0) goto L43
            boolean r1 = r3.isAvailable()
            if (r1 == 0) goto L43
            int r3 = r3.getType()
            if (r3 == 0) goto L1f
            goto L43
        L1f:
            java.lang.String r3 = android.net.Proxy.getDefaultHost()
            int r1 = android.net.Proxy.getDefaultPort()
            if (r3 == 0) goto L43
            r2 = -1
            if (r1 == r2) goto L43
            java.net.InetSocketAddress r2 = new java.net.InetSocketAddress     // Catch: java.io.IOException -> L3f
            r2.<init>(r3, r1)     // Catch: java.io.IOException -> L3f
            java.net.Proxy r3 = new java.net.Proxy     // Catch: java.io.IOException -> L3f
            java.net.Proxy$Type r1 = java.net.Proxy.Type.HTTP     // Catch: java.io.IOException -> L3f
            r3.<init>(r1, r2)     // Catch: java.io.IOException -> L3f
            java.net.URLConnection r3 = r4.openConnection(r3)     // Catch: java.io.IOException -> L3f
            java.net.HttpURLConnection r3 = (java.net.HttpURLConnection) r3     // Catch: java.io.IOException -> L3f
            return r3
        L3f:
            r3 = move-exception
            r3.printStackTrace()
        L43:
            return r0
    }

    private boolean openUrl(java.net.HttpURLConnection r6, com.bianfeng.netlib.HttpListener r7) {
            r5 = this;
            r0 = 0
            r1 = 0
            int r2 = r6.getResponseCode()     // Catch: java.lang.Throwable -> L80 java.io.IOException -> L82
            r3 = 200(0xc8, float:2.8E-43)
            if (r2 != r3) goto L5c
            java.io.InputStream r1 = r6.getInputStream()     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            java.util.Map r6 = r6.getHeaderFields()     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            java.lang.String r6 = r5.checkReasonCode(r6)     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            java.lang.String r3 = r5.getInputStreamString(r1)     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            java.lang.String r4 = "0"
            boolean r4 = r4.equalsIgnoreCase(r6)     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            if (r4 == 0) goto L31
            r7.onComplete(r3)     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            r6 = 1
            if (r1 == 0) goto L30
            r1.close()     // Catch: java.io.IOException -> L2c
            goto L30
        L2c:
            r7 = move-exception
            r7.printStackTrace()
        L30:
            return r6
        L31:
            int r6 = java.lang.Integer.parseInt(r6)     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            r5.errorCode = r6     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            r5.errorMsg = r3     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            com.bianfeng.utilslib.Logger r6 = com.bianfeng.utilslib.UtilsSdk.getLogger()     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            r7.<init>()     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            java.lang.String r4 = "openUrl: "
            r7.append(r4)     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            r7.append(r3)     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            java.lang.String r7 = r7.toString()     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            r6.i(r7)     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            if (r1 == 0) goto L5b
            r1.close()     // Catch: java.io.IOException -> L57
            goto L5b
        L57:
            r6 = move-exception
            r6.printStackTrace()
        L5b:
            return r0
        L5c:
            r5.errorCode = r2     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            java.io.InputStream r1 = r6.getErrorStream()     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            java.lang.String r6 = r5.getInputStreamString(r1)     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            r5.errorMsg = r6     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            com.bianfeng.utilslib.Logger r6 = com.bianfeng.utilslib.UtilsSdk.getLogger()     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            java.lang.String r7 = "接收到的错误信息："
            java.lang.String r3 = r5.errorMsg     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            r6.e(r7, r3)     // Catch: java.io.IOException -> L7e java.lang.Throwable -> L80
            if (r1 == 0) goto L7d
            r1.close()     // Catch: java.io.IOException -> L79
            goto L7d
        L79:
            r6 = move-exception
            r6.printStackTrace()
        L7d:
            return r0
        L7e:
            r6 = move-exception
            goto L85
        L80:
            r6 = move-exception
            goto La3
        L82:
            r6 = move-exception
            r2 = 604(0x25c, float:8.46E-43)
        L85:
            r5.errorCode = r2     // Catch: java.lang.Throwable -> L80
            java.lang.String r6 = r6.getMessage()     // Catch: java.lang.Throwable -> L80
            r5.errorMsg = r6     // Catch: java.lang.Throwable -> L80
            com.bianfeng.utilslib.Logger r6 = com.bianfeng.utilslib.UtilsSdk.getLogger()     // Catch: java.lang.Throwable -> L80
            java.lang.String r7 = "接收到的错误信息：openUrl IOException"
            java.lang.String r2 = r5.errorMsg     // Catch: java.lang.Throwable -> L80
            r6.e(r7, r2)     // Catch: java.lang.Throwable -> L80
            if (r1 == 0) goto La2
            r1.close()     // Catch: java.io.IOException -> L9e
            goto La2
        L9e:
            r6 = move-exception
            r6.printStackTrace()
        La2:
            return r0
        La3:
            if (r1 == 0) goto Lad
            r1.close()     // Catch: java.io.IOException -> La9
            goto Lad
        La9:
            r7 = move-exception
            r7.printStackTrace()
        Lad:
            throw r6
    }

    public java.net.HttpURLConnection createHttpRequest(java.lang.String r6) {
            r5 = this;
            r5.mUrl = r6
            r0 = 0
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L37
            r1.<init>(r6)     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L37
            java.net.URLConnection r6 = r1.openConnection()     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L37
            java.net.HttpURLConnection r6 = (java.net.HttpURLConnection) r6     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L37
            android.app.Activity r0 = r5.context     // Catch: java.io.IOException -> L33 java.lang.Throwable -> L35
            java.net.HttpURLConnection r0 = getProxy(r0, r1)     // Catch: java.io.IOException -> L33 java.lang.Throwable -> L35
            if (r0 == 0) goto L1c
            android.app.Activity r0 = r5.context     // Catch: java.io.IOException -> L33 java.lang.Throwable -> L35
            java.net.HttpURLConnection r6 = getProxy(r0, r1)     // Catch: java.io.IOException -> L33 java.lang.Throwable -> L35
        L1c:
            r0 = r6
            r6 = 25000(0x61a8, float:3.5032E-41)
            r0.setReadTimeout(r6)     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L37
            r6 = 15000(0x3a98, float:2.102E-41)
            r0.setConnectTimeout(r6)     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L37
            r6 = 0
            r0.setUseCaches(r6)     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L37
            java.lang.String r6 = "Content-Type"
            java.lang.String r1 = "application/json,charset=UTF-8"
            r0.setRequestProperty(r6, r1)     // Catch: java.lang.Throwable -> L35 java.io.IOException -> L37
            goto L74
        L33:
            r0 = move-exception
            goto L3b
        L35:
            r6 = move-exception
            goto L75
        L37:
            r6 = move-exception
            r4 = r0
            r0 = r6
            r6 = r4
        L3b:
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L35
            r1 = 601(0x259, float:8.42E-43)
            r5.errorCode = r1     // Catch: java.lang.Throwable -> L35
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L35
            r1.<init>()     // Catch: java.lang.Throwable -> L35
            java.lang.String r2 = "request data error "
            r1.append(r2)     // Catch: java.lang.Throwable -> L35
            java.lang.String r2 = r0.getMessage()     // Catch: java.lang.Throwable -> L35
            r1.append(r2)     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L35
            r5.errorMsg = r1     // Catch: java.lang.Throwable -> L35
            java.lang.String r1 = "HttpHelper"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L35
            r2.<init>()     // Catch: java.lang.Throwable -> L35
            java.lang.String r3 = "createHttpRequest: "
            r2.append(r3)     // Catch: java.lang.Throwable -> L35
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L35
            r2.append(r0)     // Catch: java.lang.Throwable -> L35
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L35
            android.util.Log.i(r1, r0)     // Catch: java.lang.Throwable -> L35
            r0 = r6
        L74:
            return r0
        L75:
            throw r6
    }

    public boolean isGetMethod() {
            r2 = this;
            int r0 = r2.method
            r1 = 1
            if (r0 != r1) goto L6
            goto L7
        L6:
            r1 = 0
        L7:
            return r1
    }

    public void request(java.lang.String r2, com.bianfeng.netlib.HttpListener r3) {
            r1 = this;
            com.bianfeng.netlib.HttpHelper$1 r0 = new com.bianfeng.netlib.HttpHelper$1
            r0.<init>(r1, r2, r3)
            r0.start()
            return
    }

    public void setMethod(int r1) {
            r0 = this;
            r0.method = r1
            return
    }
}
