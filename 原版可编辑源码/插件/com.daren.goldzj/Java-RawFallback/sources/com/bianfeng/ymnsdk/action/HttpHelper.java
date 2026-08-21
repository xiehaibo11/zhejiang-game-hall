package com.bianfeng.ymnsdk.action;

public class HttpHelper {
    public static final int CODE_REQ_TIME_OUT = 600;
    public static final int CODE_RES_SUCCESS = 0;
    public static final int CODE_SERVER_ERROR = 602;
    public static final int CODE_UNKNOW_ERROR = 601;
    public static final int CODE_UNSET = 999;
    public static final int HTTP_METHOD_GET = 1;
    public static final int HTTP_METHOD_POST = 2;
    public static final int HTTP_REQ_LIMIT_TIME = 15000;
    public static final int HTTP_RES_LIMIT_TIME = 25000;
    public static final java.lang.String VERSION_SERVER = "v1";
    private android.content.Context context;
    private int errorCode;
    private java.lang.String errorMsg;
    private java.lang.String method;

    class a implements java.lang.Runnable {
        final java.lang.String a;
        final java.lang.String b;
        final com.bianfeng.ymnsdk.action.HttpListener c;
        final com.bianfeng.ymnsdk.action.HttpHelper d;

        class a extends com.google.gson.reflect.TypeToken<java.util.Map<java.lang.String, java.lang.Object>> {
            a(com.bianfeng.ymnsdk.action.HttpHelper.a r1) {
                    r0 = this;
                    r0.<init>()
                    return
            }
        }

        a(com.bianfeng.ymnsdk.action.HttpHelper r1, java.lang.String r2, java.lang.String r3, com.bianfeng.ymnsdk.action.HttpListener r4) {
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
                r10 = this;
                java.lang.String r0 = "GET"
                java.lang.String r1 = "="
                r2 = 0
                com.bianfeng.ymnsdk.action.HttpHelper r3 = r10.d     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r3 = com.bianfeng.ymnsdk.action.HttpHelper.access$000(r3)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                boolean r3 = r3.equals(r0)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r4 = 0
                if (r3 == 0) goto Le3
                java.lang.String r3 = r10.a     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                if (r3 != 0) goto L1f
                java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r3 = r10.b     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r1.<init>(r3)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                goto Ld2
            L1f:
                java.lang.String r3 = r10.a     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                boolean r3 = r3.isEmpty()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                if (r3 != 0) goto Lcb
                com.google.gson.Gson r3 = new com.google.gson.Gson     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r3.<init>()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r5 = r10.a     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r5 = java.net.URLDecoder.decode(r5)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                com.bianfeng.ymnsdk.action.HttpHelper$a$a r6 = new com.bianfeng.ymnsdk.action.HttpHelper$a$a     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r6.<init>(r10)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.reflect.Type r6 = r6.getType()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.Object r3 = r3.fromJson(r5, r6)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.util.Map r3 = (java.util.Map) r3     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.util.Set r5 = r3.keySet()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r6 = "?"
            L4b:
                boolean r7 = r5.hasNext()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                if (r7 == 0) goto Lb4
                java.lang.Object r7 = r5.next()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                boolean r8 = r6.contains(r1)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                if (r8 == 0) goto L8a
                java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r8.<init>()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r8.append(r6)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r6 = "&"
                r8.append(r6)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r8.append(r6)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r8.append(r1)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.Object r6 = r3.get(r6)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r6 = java.net.URLEncoder.encode(r6)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r8.append(r6)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r6 = r8.toString()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                goto L4b
            L8a:
                java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r8.<init>()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r8.append(r6)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r8.append(r6)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r8.append(r1)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r6 = r7.toString()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.Object r6 = r3.get(r6)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r6 = r6.toString()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r6 = java.net.URLEncoder.encode(r6)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r8.append(r6)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r6 = r8.toString()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                goto L4b
            Lb4:
                java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r3.<init>()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r5 = r10.b     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r3.append(r5)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r3.append(r6)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r1.<init>(r3)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                goto Ld2
            Lcb:
                java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r3 = r10.b     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r1.<init>(r3)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
            Ld2:
                java.net.URLConnection r1 = r1.openConnection()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r1.setRequestMethod(r0)     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                r0 = 10000(0x2710, float:1.4013E-41)
                r1.setConnectTimeout(r0)     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                r0 = r2
                goto L162
            Le3:
                java.net.URL r0 = new java.net.URL     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.lang.String r1 = r10.b     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                r0.<init>(r1)     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.net.URLConnection r1 = r0.openConnection()     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1     // Catch: java.lang.Throwable -> L1ce java.lang.Exception -> L1d3
                com.bianfeng.ymnsdk.action.HttpHelper r3 = r10.d     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                android.content.Context r3 = com.bianfeng.ymnsdk.action.HttpHelper.access$100(r3)     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                java.net.HttpURLConnection r3 = com.bianfeng.ymnsdk.action.HttpHelper.getProxy(r3, r0)     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                if (r3 == 0) goto L106
                com.bianfeng.ymnsdk.action.HttpHelper r3 = r10.d     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                android.content.Context r3 = com.bianfeng.ymnsdk.action.HttpHelper.access$100(r3)     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                java.net.HttpURLConnection r1 = com.bianfeng.ymnsdk.action.HttpHelper.getProxy(r3, r0)     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
            L106:
                r3 = 25000(0x61a8, float:3.5032E-41)
                r1.setReadTimeout(r3)     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                r3 = 15000(0x3a98, float:2.102E-41)
                r1.setConnectTimeout(r3)     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                r1.setUseCaches(r4)     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                java.lang.String r3 = "Content-Type"
                java.lang.String r5 = "application/json;charset=UTF-8"
                r1.setRequestProperty(r3, r5)     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                com.bianfeng.ymnsdk.action.HttpHelper r3 = r10.d     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                java.lang.String r3 = com.bianfeng.ymnsdk.action.HttpHelper.access$000(r3)     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                java.lang.String r5 = "POST"
                boolean r3 = r3.equals(r5)     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                if (r3 == 0) goto L12f
                r3 = 1
                r1.setDoOutput(r3)     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                r1.setDoInput(r3)     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
            L12f:
                java.lang.String r0 = r0.getHost()     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                if (r0 == 0) goto L144
                if (r1 == 0) goto L143
                r1.disconnect()     // Catch: java.lang.Exception -> L13f
                goto L143
            L13f:
                r0 = move-exception
                r0.printStackTrace()
            L143:
                return
            L144:
                java.io.DataOutputStream r0 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                java.io.OutputStream r3 = r1.getOutputStream()     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                r0.<init>(r3)     // Catch: java.lang.Throwable -> L1c7 java.lang.Exception -> L1cb
                java.lang.String r3 = r10.a     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                java.lang.String r5 = "UTF-8"
                byte[] r3 = r3.getBytes(r5)     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                r0.write(r3)     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                r0.flush()     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                r0.close()     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
            L162:
                int r3 = r1.getResponseCode()     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                r5 = 200(0xc8, float:2.8E-43)
                if (r3 != r5) goto L19c
                java.io.InputStream r2 = r1.getInputStream()     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                r3 = 1048576(0x100000, float:1.469368E-39)
                byte[] r3 = new byte[r3]     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                r5.<init>()     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
            L177:
                int r6 = r2.read(r3)     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                r7 = -1
                if (r6 == r7) goto L187
                java.lang.String r7 = new java.lang.String     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                r7.<init>(r3, r4, r6)     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                r5.append(r7)     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                goto L177
            L187:
                r2.close()     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                java.lang.String r3 = r5.toString()     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                com.bianfeng.ymnsdk.util.security.SecurityUtil r4 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                java.lang.String r3 = r4.urlDecoder(r3)     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                com.bianfeng.ymnsdk.action.HttpListener r4 = r10.c     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                r4.onComplete(r3)     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                goto L1a9
            L19c:
                com.bianfeng.ymnsdk.action.HttpListener r3 = r10.c     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                int r4 = r1.getResponseCode()     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                java.lang.String r5 = r1.getResponseMessage()     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
                r3.onError(r4, r5)     // Catch: java.lang.Throwable -> L1c0 java.lang.Exception -> L1c2
            L1a9:
                if (r1 == 0) goto L1b1
                r1.disconnect()     // Catch: java.lang.Exception -> L1af
                goto L1b1
            L1af:
                r0 = move-exception
                goto L1bc
            L1b1:
                if (r0 == 0) goto L1b6
                r0.close()     // Catch: java.lang.Exception -> L1af
            L1b6:
                if (r2 == 0) goto L1ff
                r2.close()     // Catch: java.lang.Exception -> L1af
                goto L1ff
            L1bc:
                r0.printStackTrace()
                goto L1ff
            L1c0:
                r3 = move-exception
                goto L204
            L1c2:
                r3 = move-exception
                r9 = r2
                r2 = r1
                r1 = r9
                goto L1d9
            L1c7:
                r0 = move-exception
                r3 = r0
                r0 = r2
                goto L204
            L1cb:
                r0 = move-exception
                r3 = r0
                goto L1d6
            L1ce:
                r0 = move-exception
                r3 = r0
                r0 = r2
                r1 = r0
                goto L204
            L1d3:
                r0 = move-exception
                r3 = r0
                r1 = r2
            L1d6:
                r0 = r2
                r2 = r1
                r1 = r0
            L1d9:
                r3.printStackTrace()     // Catch: java.lang.Throwable -> L200
                com.bianfeng.ymnsdk.action.HttpListener r4 = r10.c     // Catch: java.lang.Throwable -> L200
                int r5 = r3.hashCode()     // Catch: java.lang.Throwable -> L200
                java.lang.String r3 = r3.getMessage()     // Catch: java.lang.Throwable -> L200
                r4.onError(r5, r3)     // Catch: java.lang.Throwable -> L200
                if (r2 == 0) goto L1f1
                r2.disconnect()     // Catch: java.lang.Exception -> L1ef
                goto L1f1
            L1ef:
                r0 = move-exception
                goto L1fc
            L1f1:
                if (r0 == 0) goto L1f6
                r0.close()     // Catch: java.lang.Exception -> L1ef
            L1f6:
                if (r1 == 0) goto L1ff
                r1.close()     // Catch: java.lang.Exception -> L1ef
                goto L1ff
            L1fc:
                r0.printStackTrace()
            L1ff:
                return
            L200:
                r3 = move-exception
                r9 = r2
                r2 = r1
                r1 = r9
            L204:
                if (r1 == 0) goto L20c
                r1.disconnect()     // Catch: java.lang.Exception -> L20a
                goto L20c
            L20a:
                r0 = move-exception
                goto L217
            L20c:
                if (r0 == 0) goto L211
                r0.close()     // Catch: java.lang.Exception -> L20a
            L211:
                if (r2 == 0) goto L21a
                r2.close()     // Catch: java.lang.Exception -> L20a
                goto L21a
            L217:
                r0.printStackTrace()
            L21a:
                throw r3
        }
    }

    public HttpHelper(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "POST"
            r1.method = r0
            r1.context = r2
            return
    }

    static java.lang.String access$000(com.bianfeng.ymnsdk.action.HttpHelper r0) {
            java.lang.String r0 = r0.method
            return r0
    }

    static android.content.Context access$100(com.bianfeng.ymnsdk.action.HttpHelper r0) {
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

    public void createHttpRequest(java.lang.String r3, java.lang.String r4, com.bianfeng.ymnsdk.action.HttpListener r5) {
            r2 = this;
            java.lang.Thread r0 = new java.lang.Thread
            com.bianfeng.ymnsdk.action.HttpHelper$a r1 = new com.bianfeng.ymnsdk.action.HttpHelper$a
            r1.<init>(r2, r4, r3, r5)
            r0.<init>(r1)
            r0.start()
            return
    }

    public boolean isGetMethod() {
            r2 = this;
            java.lang.String r0 = r2.method
            java.lang.String r1 = "GET"
            boolean r0 = r0.equals(r1)
            return r0
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
