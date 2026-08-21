package com.bianfeng.roomlib.action;

public class GameRoomAction<M> {
    private final java.lang.String TAG;
    private com.bianfeng.roomlib.action.ActionCallback callback;
    private java.util.Map<java.lang.String, java.lang.String> getParamsMap;
    private java.lang.Class<M> mClass;
    private java.lang.String murl;
    private java.lang.String postParamsStr;




    public GameRoomAction(java.util.Map<java.lang.String, java.lang.String> r2, java.lang.Class<M> r3) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "https://cpgate.imeete.com/list?"
            r1.murl = r0
            java.lang.String r0 = "GameRoomAction"
            r1.TAG = r0
            r1.getParamsMap = r2
            r1.mClass = r3
            return
    }

    static void access$000(com.bianfeng.roomlib.action.GameRoomAction r0) {
            r0.request()
            return
    }

    static void access$100(com.bianfeng.roomlib.action.GameRoomAction r0) {
            r0.requestGet()
            return
    }

    static void access$200(com.bianfeng.roomlib.action.GameRoomAction r0) {
            r0.requestPost()
            return
    }

    private void joinUrl() {
            r4 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.getParamsMap
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L38
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.String r3 = "&"
            r0.append(r3)
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            r0.append(r3)
            java.lang.String r3 = "="
            r0.append(r3)
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            r0.append(r2)
            goto Lf
        L38:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r4.murl
            r1.append(r2)
            r2 = 1
            java.lang.String r0 = r0.substring(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r4.murl = r0
            return
    }

    private void joinUrlPost() {
            r4 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.util.Map<java.lang.String, java.lang.String> r1 = r4.getParamsMap
            java.util.Set r1 = r1.entrySet()
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L38
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.String r3 = "&"
            r0.append(r3)
            java.lang.Object r3 = r2.getKey()
            java.lang.String r3 = (java.lang.String) r3
            r0.append(r3)
            java.lang.String r3 = "="
            r0.append(r3)
            java.lang.Object r2 = r2.getValue()
            java.lang.String r2 = (java.lang.String) r2
            r0.append(r2)
            goto Lf
        L38:
            r1 = 1
            java.lang.String r0 = r0.substring(r1)
            r4.postParamsStr = r0
            return
    }

    private void request() {
            r6 = this;
            java.lang.String r0 = "request: "
            r6.joinUrl()     // Catch: java.lang.Exception -> L6f
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Exception -> L6f
            java.lang.String r2 = r6.murl     // Catch: java.lang.Exception -> L6f
            r1.<init>(r2)     // Catch: java.lang.Exception -> L6f
            java.net.URLConnection r1 = r1.openConnection()     // Catch: java.lang.Exception -> L6f
            java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1     // Catch: java.lang.Exception -> L6f
            int r2 = r1.getResponseCode()     // Catch: java.lang.Exception -> L6f
            r3 = 200(0xc8, float:2.8E-43)
            if (r2 != r3) goto L32
            java.io.InputStream r1 = r1.getInputStream()     // Catch: java.lang.Exception -> L6f
            java.lang.String r1 = r6.streamToString(r1)     // Catch: java.lang.Exception -> L6f
            com.bianfeng.thridlibrary.GsonUtils r2 = com.bianfeng.thridlibrary.ThridSdk.getGson()     // Catch: java.lang.Exception -> L6f
            java.lang.Class<M> r3 = r6.mClass     // Catch: java.lang.Exception -> L6f
            java.lang.Object r1 = r2.fromJson(r1, r3)     // Catch: java.lang.Exception -> L6f
            com.bianfeng.roomlib.action.ActionCallback r2 = r6.callback     // Catch: java.lang.Exception -> L6f
            r2.onSuccess(r1)     // Catch: java.lang.Exception -> L6f
            goto La4
        L32:
            java.io.InputStream r1 = r1.getErrorStream()     // Catch: java.lang.Exception -> L6f
            java.lang.String r1 = r6.streamToString(r1)     // Catch: java.lang.Exception -> L6f
            com.bianfeng.utilslib.Logger r3 = com.bianfeng.utilslib.UtilsSdk.getLogger()     // Catch: java.lang.Exception -> L6f
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6f
            r4.<init>()     // Catch: java.lang.Exception -> L6f
            r4.append(r0)     // Catch: java.lang.Exception -> L6f
            r4.append(r1)     // Catch: java.lang.Exception -> L6f
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L6f
            r3.i(r4)     // Catch: java.lang.Exception -> L6f
            com.bianfeng.roomlib.action.ActionCallback r3 = r6.callback     // Catch: java.lang.Exception -> L6f
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L6f
            r4.<init>()     // Catch: java.lang.Exception -> L6f
            java.lang.String r5 = "连接网络出错了code:"
            r4.append(r5)     // Catch: java.lang.Exception -> L6f
            r4.append(r2)     // Catch: java.lang.Exception -> L6f
            java.lang.String r2 = ",message"
            r4.append(r2)     // Catch: java.lang.Exception -> L6f
            r4.append(r1)     // Catch: java.lang.Exception -> L6f
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Exception -> L6f
            r3.onFali(r1)     // Catch: java.lang.Exception -> L6f
            goto La4
        L6f:
            r1 = move-exception
            com.bianfeng.roomlib.action.ActionCallback r2 = r6.callback
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "请求出现了异常"
            r3.append(r4)
            java.lang.String r4 = r1.getMessage()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.onFali(r3)
            com.bianfeng.utilslib.Logger r2 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r0 = r1.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.i(r0)
        La4:
            return
    }

    private void requestGet() {
            r6 = this;
            java.lang.String r0 = "request: "
            r6.joinUrl()     // Catch: java.lang.Exception -> L65
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Exception -> L65
            java.lang.String r2 = r6.murl     // Catch: java.lang.Exception -> L65
            r1.<init>(r2)     // Catch: java.lang.Exception -> L65
            java.net.URLConnection r1 = r1.openConnection()     // Catch: java.lang.Exception -> L65
            java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1     // Catch: java.lang.Exception -> L65
            int r2 = r1.getResponseCode()     // Catch: java.lang.Exception -> L65
            r3 = 200(0xc8, float:2.8E-43)
            if (r2 != r3) goto L28
            java.io.InputStream r1 = r1.getInputStream()     // Catch: java.lang.Exception -> L65
            java.lang.String r1 = r6.streamToString(r1)     // Catch: java.lang.Exception -> L65
            com.bianfeng.roomlib.action.ActionCallback r2 = r6.callback     // Catch: java.lang.Exception -> L65
            r2.onSuccess(r1)     // Catch: java.lang.Exception -> L65
            goto L9a
        L28:
            java.io.InputStream r1 = r1.getErrorStream()     // Catch: java.lang.Exception -> L65
            java.lang.String r1 = r6.streamToString(r1)     // Catch: java.lang.Exception -> L65
            com.bianfeng.utilslib.Logger r3 = com.bianfeng.utilslib.UtilsSdk.getLogger()     // Catch: java.lang.Exception -> L65
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L65
            r4.<init>()     // Catch: java.lang.Exception -> L65
            r4.append(r0)     // Catch: java.lang.Exception -> L65
            r4.append(r1)     // Catch: java.lang.Exception -> L65
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L65
            r3.i(r4)     // Catch: java.lang.Exception -> L65
            com.bianfeng.roomlib.action.ActionCallback r3 = r6.callback     // Catch: java.lang.Exception -> L65
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L65
            r4.<init>()     // Catch: java.lang.Exception -> L65
            java.lang.String r5 = "连接网络出错了code:"
            r4.append(r5)     // Catch: java.lang.Exception -> L65
            r4.append(r2)     // Catch: java.lang.Exception -> L65
            java.lang.String r2 = ",message"
            r4.append(r2)     // Catch: java.lang.Exception -> L65
            r4.append(r1)     // Catch: java.lang.Exception -> L65
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Exception -> L65
            r3.onFali(r1)     // Catch: java.lang.Exception -> L65
            goto L9a
        L65:
            r1 = move-exception
            com.bianfeng.roomlib.action.ActionCallback r2 = r6.callback
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "请求出现了异常"
            r3.append(r4)
            java.lang.String r4 = r1.getMessage()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.onFali(r3)
            com.bianfeng.utilslib.Logger r2 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r0 = r1.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.i(r0)
        L9a:
            return
    }

    private void requestPost() {
            r6 = this;
            java.lang.String r0 = "request: "
            r6.joinUrlPost()     // Catch: java.lang.Exception -> L82
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Exception -> L82
            java.lang.String r2 = r6.murl     // Catch: java.lang.Exception -> L82
            r1.<init>(r2)     // Catch: java.lang.Exception -> L82
            java.net.URLConnection r1 = r1.openConnection()     // Catch: java.lang.Exception -> L82
            java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1     // Catch: java.lang.Exception -> L82
            java.lang.String r2 = "POST"
            r1.setRequestMethod(r2)     // Catch: java.lang.Exception -> L82
            r2 = 1
            r1.setDoOutput(r2)     // Catch: java.lang.Exception -> L82
            r1.setDoInput(r2)     // Catch: java.lang.Exception -> L82
            java.io.PrintWriter r2 = new java.io.PrintWriter     // Catch: java.lang.Exception -> L82
            java.io.OutputStream r3 = r1.getOutputStream()     // Catch: java.lang.Exception -> L82
            r2.<init>(r3)     // Catch: java.lang.Exception -> L82
            java.lang.String r3 = r6.postParamsStr     // Catch: java.lang.Exception -> L82
            r2.write(r3)     // Catch: java.lang.Exception -> L82
            r2.flush()     // Catch: java.lang.Exception -> L82
            int r2 = r1.getResponseCode()     // Catch: java.lang.Exception -> L82
            r3 = 200(0xc8, float:2.8E-43)
            if (r2 != r3) goto L45
            java.io.InputStream r1 = r1.getInputStream()     // Catch: java.lang.Exception -> L82
            java.lang.String r1 = r6.streamToString(r1)     // Catch: java.lang.Exception -> L82
            com.bianfeng.roomlib.action.ActionCallback r2 = r6.callback     // Catch: java.lang.Exception -> L82
            r2.onSuccess(r1)     // Catch: java.lang.Exception -> L82
            goto Lb7
        L45:
            java.io.InputStream r1 = r1.getErrorStream()     // Catch: java.lang.Exception -> L82
            java.lang.String r1 = r6.streamToString(r1)     // Catch: java.lang.Exception -> L82
            com.bianfeng.utilslib.Logger r3 = com.bianfeng.utilslib.UtilsSdk.getLogger()     // Catch: java.lang.Exception -> L82
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L82
            r4.<init>()     // Catch: java.lang.Exception -> L82
            r4.append(r0)     // Catch: java.lang.Exception -> L82
            r4.append(r1)     // Catch: java.lang.Exception -> L82
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L82
            r3.i(r4)     // Catch: java.lang.Exception -> L82
            com.bianfeng.roomlib.action.ActionCallback r3 = r6.callback     // Catch: java.lang.Exception -> L82
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L82
            r4.<init>()     // Catch: java.lang.Exception -> L82
            java.lang.String r5 = "连接网络出错了code:"
            r4.append(r5)     // Catch: java.lang.Exception -> L82
            r4.append(r2)     // Catch: java.lang.Exception -> L82
            java.lang.String r2 = ",message"
            r4.append(r2)     // Catch: java.lang.Exception -> L82
            r4.append(r1)     // Catch: java.lang.Exception -> L82
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Exception -> L82
            r3.onFali(r1)     // Catch: java.lang.Exception -> L82
            goto Lb7
        L82:
            r1 = move-exception
            com.bianfeng.roomlib.action.ActionCallback r2 = r6.callback
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "请求出现了异常"
            r3.append(r4)
            java.lang.String r4 = r1.getMessage()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.onFali(r3)
            com.bianfeng.utilslib.Logger r2 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r0 = r1.getMessage()
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            r2.i(r0)
        Lb7:
            return
    }

    private java.lang.String streamToString(java.io.InputStream r4) throws java.lang.Exception {
            r3 = this;
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            r0.<init>()
            java.io.BufferedReader r1 = new java.io.BufferedReader
            java.io.InputStreamReader r2 = new java.io.InputStreamReader
            r2.<init>(r4)
            r1.<init>(r2)
        Lf:
            java.lang.String r4 = r1.readLine()
            if (r4 == 0) goto L19
            r0.append(r4)
            goto Lf
        L19:
            r1.close()
            java.lang.String r4 = r0.toString()
            return r4
    }

    public void startAction(com.bianfeng.roomlib.action.ActionCallback r1) {
            r0 = this;
            r0.callback = r1
            com.bianfeng.roomlib.action.GameRoomAction$1 r1 = new com.bianfeng.roomlib.action.GameRoomAction$1
            r1.<init>(r0)
            r1.start()
            return
    }

    public void startActionGet(com.bianfeng.roomlib.action.ActionCallback r1) {
            r0 = this;
            r0.callback = r1
            com.bianfeng.roomlib.action.GameRoomAction$2 r1 = new com.bianfeng.roomlib.action.GameRoomAction$2
            r1.<init>(r0)
            r1.start()
            return
    }

    public void startActionPost(com.bianfeng.roomlib.action.ActionCallback r1) {
            r0 = this;
            r0.callback = r1
            com.bianfeng.roomlib.action.GameRoomAction$3 r1 = new com.bianfeng.roomlib.action.GameRoomAction$3
            r1.<init>(r0)
            r1.start()
            return
    }
}
