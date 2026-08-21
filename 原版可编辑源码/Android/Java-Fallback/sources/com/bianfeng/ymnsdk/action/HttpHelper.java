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
                r13 = this;
                java.lang.String r0 = "GET"
                java.lang.String r1 = "="
                r2 = 0
                r3 = 0
                r4 = 0
                r5 = 0
                com.bianfeng.ymnsdk.action.HttpHelper r6 = r13.d     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r6 = com.bianfeng.ymnsdk.action.HttpHelper.access$000(r6)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                boolean r6 = r6.equals(r0)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r7 = 0
                if (r6 == 0) goto Leb
                java.lang.String r6 = r13.a     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                if (r6 != 0) goto L23
                java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r6 = r13.b     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r1.<init>(r6)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r2 = r1
                goto Lda
            L23:
                java.lang.String r6 = r13.a     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                boolean r6 = r6.isEmpty()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                if (r6 != 0) goto Ld2
                com.google.gson.Gson r6 = new com.google.gson.Gson     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r6.<init>()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r8 = r13.a     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r8 = java.net.URLDecoder.decode(r8)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                com.bianfeng.ymnsdk.action.HttpHelper$a$a r9 = new com.bianfeng.ymnsdk.action.HttpHelper$a$a     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r9.<init>(r13)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.reflect.Type r9 = r9.getType()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.Object r6 = r6.fromJson(r8, r9)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.util.Map r6 = (java.util.Map) r6     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r8 = "?"
                java.util.Set r9 = r6.keySet()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.util.Iterator r9 = r9.iterator()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
            L4f:
                boolean r10 = r9.hasNext()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                if (r10 == 0) goto Lba
                java.lang.Object r10 = r9.next()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                boolean r11 = r8.contains(r1)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                if (r11 == 0) goto L8f
                java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r11.<init>()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r11.append(r8)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r12 = "&"
                r11.append(r12)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r12 = r10.toString()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r11.append(r12)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r11.append(r1)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r12 = r10.toString()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.Object r12 = r6.get(r12)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r12 = java.net.URLEncoder.encode(r12)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r11.append(r12)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r8 = r11
                goto Lb9
            L8f:
                java.lang.StringBuilder r11 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r11.<init>()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r11.append(r8)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r12 = r10.toString()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r11.append(r12)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r11.append(r1)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r12 = r10.toString()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.Object r12 = r6.get(r12)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r12 = r12.toString()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r12 = java.net.URLEncoder.encode(r12)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r11.append(r12)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r11 = r11.toString()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r8 = r11
            Lb9:
                goto L4f
            Lba:
                java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r9.<init>()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r10 = r13.b     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r9.append(r10)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r9.append(r8)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r1.<init>(r9)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r2 = r1
                goto Lda
            Ld2:
                java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r6 = r13.b     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r1.<init>(r6)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r2 = r1
            Lda:
                java.net.URLConnection r1 = r2.openConnection()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r3 = r1
                r3.setRequestMethod(r0)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r0 = 10000(0x2710, float:1.4013E-41)
                r3.setConnectTimeout(r0)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                goto L17c
            Leb:
                java.net.URL r0 = new java.net.URL     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r1 = r13.b     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r0.<init>(r1)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r2 = r0
                java.net.URLConnection r0 = r2.openConnection()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.net.HttpURLConnection r0 = (java.net.HttpURLConnection) r0     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r3 = r0
                com.bianfeng.ymnsdk.action.HttpHelper r0 = r13.d     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                android.content.Context r0 = com.bianfeng.ymnsdk.action.HttpHelper.access$100(r0)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.net.HttpURLConnection r0 = com.bianfeng.ymnsdk.action.HttpHelper.getProxy(r0, r2)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                if (r0 == 0) goto L111
                com.bianfeng.ymnsdk.action.HttpHelper r0 = r13.d     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                android.content.Context r0 = com.bianfeng.ymnsdk.action.HttpHelper.access$100(r0)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.net.HttpURLConnection r0 = com.bianfeng.ymnsdk.action.HttpHelper.getProxy(r0, r2)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r3 = r0
            L111:
                r0 = 25000(0x61a8, float:3.5032E-41)
                r3.setReadTimeout(r0)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r0 = 15000(0x3a98, float:2.102E-41)
                r3.setConnectTimeout(r0)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r3.setUseCaches(r7)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r0 = "Content-Type"
                java.lang.String r1 = "application/json;charset=UTF-8"
                r3.setRequestProperty(r0, r1)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                com.bianfeng.ymnsdk.action.HttpHelper r0 = r13.d     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r0 = com.bianfeng.ymnsdk.action.HttpHelper.access$000(r0)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r1 = "POST"
                boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                if (r0 == 0) goto L13a
                r0 = 1
                r3.setDoOutput(r0)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r3.setDoInput(r0)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
            L13a:
                java.lang.String r0 = r2.getHost()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                if (r0 == 0) goto L15d
                if (r3 == 0) goto L14c
                r3.disconnect()     // Catch: java.lang.Exception -> L14a
                goto L14c
            L14a:
                r0 = move-exception
                goto L157
            L14c:
                if (r4 == 0) goto L151
                r4.close()     // Catch: java.lang.Exception -> L14a
            L151:
                if (r5 == 0) goto L15b
                r5.close()     // Catch: java.lang.Exception -> L14a
                goto L15b
            L157:
                r0.printStackTrace()
                goto L15c
            L15b:
            L15c:
                return
            L15d:
                java.io.DataOutputStream r0 = new java.io.DataOutputStream     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.io.OutputStream r1 = r3.getOutputStream()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r0.<init>(r1)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r4 = r0
                java.lang.String r0 = r13.a     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r1 = "UTF-8"
                byte[] r0 = r0.getBytes(r1)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r4.write(r0)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r4.flush()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r4.close()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
            L17c:
                int r0 = r3.getResponseCode()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r1 = 200(0xc8, float:2.8E-43)
                if (r0 != r1) goto L1ba
                java.io.InputStream r0 = r3.getInputStream()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r5 = r0
                r0 = 0
                r1 = 1048576(0x100000, float:1.469368E-39)
                byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r6.<init>()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
            L193:
                int r8 = r5.read(r1)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r0 = r8
                r9 = -1
                if (r8 == r9) goto L1a4
                java.lang.String r8 = new java.lang.String     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r8.<init>(r1, r7, r0)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r6.append(r8)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                goto L193
            L1a4:
                r5.close()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r7 = r6.toString()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                com.bianfeng.ymnsdk.util.security.SecurityUtil r8 = com.bianfeng.ymnsdk.util.security.SecurityUtil.getInstance()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r8 = r8.urlDecoder(r7)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r7 = r8
                com.bianfeng.ymnsdk.action.HttpListener r8 = r13.c     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r8.onComplete(r7)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                goto L1c7
            L1ba:
                com.bianfeng.ymnsdk.action.HttpListener r0 = r13.c     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                int r1 = r3.getResponseCode()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                java.lang.String r6 = r3.getResponseMessage()     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
                r0.onError(r1, r6)     // Catch: java.lang.Throwable -> L1df java.lang.Exception -> L1e1
            L1c7:
                if (r3 == 0) goto L1cf
                r3.disconnect()     // Catch: java.lang.Exception -> L1cd
                goto L1cf
            L1cd:
                r0 = move-exception
                goto L1da
            L1cf:
                if (r4 == 0) goto L1d4
                r4.close()     // Catch: java.lang.Exception -> L1cd
            L1d4:
                if (r5 == 0) goto L1de
                r5.close()     // Catch: java.lang.Exception -> L1cd
                goto L1de
            L1da:
                r0.printStackTrace()
                goto L202
            L1de:
                goto L202
            L1df:
                r0 = move-exception
                goto L203
            L1e1:
                r0 = move-exception
                r0.printStackTrace()     // Catch: java.lang.Throwable -> L1df
                com.bianfeng.ymnsdk.action.HttpListener r1 = r13.c     // Catch: java.lang.Throwable -> L1df
                int r6 = r0.hashCode()     // Catch: java.lang.Throwable -> L1df
                java.lang.String r7 = r0.getMessage()     // Catch: java.lang.Throwable -> L1df
                r1.onError(r6, r7)     // Catch: java.lang.Throwable -> L1df
                if (r3 == 0) goto L1f7
                r3.disconnect()     // Catch: java.lang.Exception -> L1cd
            L1f7:
                if (r4 == 0) goto L1fc
                r4.close()     // Catch: java.lang.Exception -> L1cd
            L1fc:
                if (r5 == 0) goto L1de
                r5.close()     // Catch: java.lang.Exception -> L1cd
                goto L1de
            L202:
                return
            L203:
                if (r3 == 0) goto L20b
                r3.disconnect()     // Catch: java.lang.Exception -> L209
                goto L20b
            L209:
                r1 = move-exception
                goto L216
            L20b:
                if (r4 == 0) goto L210
                r4.close()     // Catch: java.lang.Exception -> L209
            L210:
                if (r5 == 0) goto L21a
                r5.close()     // Catch: java.lang.Exception -> L209
                goto L21a
            L216:
                r1.printStackTrace()
                goto L21b
            L21a:
            L21b:
                throw r0
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

    static java.lang.String access$000(com.bianfeng.ymnsdk.action.HttpHelper r1) {
            java.lang.String r0 = r1.method
            return r0
    }

    static android.content.Context access$100(com.bianfeng.ymnsdk.action.HttpHelper r1) {
            android.content.Context r0 = r1.context
            return r0
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
            java.lang.String r0 = "GET"
            goto L8
        L6:
            java.lang.String r0 = "POST"
        L8:
            r1.method = r0
            return
    }
}
