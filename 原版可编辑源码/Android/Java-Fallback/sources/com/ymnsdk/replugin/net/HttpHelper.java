package com.ymnsdk.replugin.net;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class HttpHelper {
    public static final int HTTP_METHOD_GET = 1;
    public static final int HTTP_METHOD_POST = 2;
    public static final int HTTP_REQ_LIMIT_TIME = 15000;
    public static final int HTTP_RES_LIMIT_TIME = 25000;
    private android.content.Context context;
    private int errorCode;
    private java.lang.String errorMsg;
    private java.lang.String method;


    public HttpHelper(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.context = r1
            return
    }

    static java.lang.String access$000(com.ymnsdk.replugin.net.HttpHelper r0) {
            java.lang.String r0 = r0.method
            return r0
    }

    static android.content.Context access$100(com.ymnsdk.replugin.net.HttpHelper r0) {
            android.content.Context r0 = r0.context
            return r0
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

    public void createHttpRequest(java.lang.String r3, java.lang.String r4, com.ymnsdk.replugin.net.HttpListener r5) {
            r2 = this;
            java.lang.Thread r0 = new java.lang.Thread     // Catch: java.lang.Exception -> Le
            com.ymnsdk.replugin.net.HttpHelper$1 r1 = new com.ymnsdk.replugin.net.HttpHelper$1     // Catch: java.lang.Exception -> Le
            r1.<init>(r2, r3, r4, r5)     // Catch: java.lang.Exception -> Le
            r0.<init>(r1)     // Catch: java.lang.Exception -> Le
            r0.start()     // Catch: java.lang.Exception -> Le
            goto L12
        Le:
            r3 = move-exception
            r3.printStackTrace()
        L12:
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
