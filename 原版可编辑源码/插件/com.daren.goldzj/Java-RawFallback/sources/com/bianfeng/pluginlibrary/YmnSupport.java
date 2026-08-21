package com.bianfeng.pluginlibrary;

public class YmnSupport {
    private static final java.lang.String TAG = "YmnUnitySupport";
    private com.bianfeng.ymnsdk.feature.YmnCallback callback;
    private com.bianfeng.pluginlibrary.YmnListener listener;
    private android.app.Activity uActivity;




    public YmnSupport() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.uActivity = r0
            r1.listener = r0
            com.bianfeng.pluginlibrary.YmnSupport$2 r0 = new com.bianfeng.pluginlibrary.YmnSupport$2
            r0.<init>(r1)
            r1.callback = r0
            return
    }

    static android.app.Activity access$000(com.bianfeng.pluginlibrary.YmnSupport r0) {
            android.app.Activity r0 = r0.uActivity
            return r0
    }

    static com.bianfeng.pluginlibrary.YmnListener access$100(com.bianfeng.pluginlibrary.YmnSupport r0) {
            com.bianfeng.pluginlibrary.YmnListener r0 = r0.listener
            return r0
    }

    private void checkJsonStruct(org.json.JSONObject r1, java.lang.String r2, java.lang.Object r3) {
            r0 = this;
            if (r3 != 0) goto Lf
            boolean r1 = r1.has(r2)
            if (r1 == 0) goto Lf
            java.lang.String r1 = "showToast"
            java.lang.String r2 = "错误：args参数非json结构！"
            r0.invokeUtils(r1, r2)
        Lf:
            return
    }

    private java.lang.String[] convertJsonArray(org.json.JSONArray r4) {
            r3 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
        L6:
            int r2 = r4.length()
            if (r1 >= r2) goto L16
            java.lang.String r2 = r4.optString(r1)
            r0.add(r2)
            int r1 = r1 + 1
            goto L6
        L16:
            int r4 = r0.size()
            java.lang.String[] r4 = new java.lang.String[r4]
            java.lang.Object[] r4 = r0.toArray(r4)
            java.lang.String[] r4 = (java.lang.String[]) r4
            return r4
    }

    private java.lang.String invokePaymentInterface(java.lang.String r3, java.lang.String r4) throws org.json.JSONException {
            r2 = this;
            java.lang.String r0 = "payForProduct"
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L8a
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>(r4)
            java.util.HashMap r4 = new java.util.HashMap
            r4.<init>()
            java.lang.String r0 = "order_id"
            java.lang.String r1 = r3.optString(r0)
            r4.put(r0, r1)
            java.lang.String r0 = "product_id"
            java.lang.String r1 = r3.optString(r0)
            r4.put(r0, r1)
            java.lang.String r0 = "product_name"
            java.lang.String r1 = r3.optString(r0)
            r4.put(r0, r1)
            java.lang.String r0 = "product_price"
            java.lang.String r1 = r3.optString(r0)
            r4.put(r0, r1)
            java.lang.String r0 = "product_count"
            java.lang.String r1 = r3.optString(r0)
            r4.put(r0, r1)
            java.lang.String r0 = "role_id"
            java.lang.String r1 = r3.optString(r0)
            r4.put(r0, r1)
            java.lang.String r0 = "role_name"
            java.lang.String r1 = r3.optString(r0)
            r4.put(r0, r1)
            java.lang.String r0 = "role_grade"
            java.lang.String r1 = r3.optString(r0)
            r4.put(r0, r1)
            java.lang.String r0 = "role_balance"
            java.lang.String r1 = r3.optString(r0)
            r4.put(r0, r1)
            java.lang.String r0 = "server_id"
            java.lang.String r1 = r3.optString(r0)
            r4.put(r0, r1)
            java.lang.String r0 = "server_name"
            java.lang.String r1 = r3.optString(r0)
            r4.put(r0, r1)
            java.lang.String r0 = "notify_url"
            java.lang.String r1 = r3.optString(r0)
            r4.put(r0, r1)
            java.lang.String r0 = "ext"
            java.lang.String r3 = r3.optString(r0)
            r4.put(r0, r3)
            com.bianfeng.ymnsdk.YmnSdk.pay(r4)
        L8a:
            r3 = 0
            return r3
    }

    private java.lang.String invokeUserInterface(java.lang.String r4, java.lang.String r5) throws org.json.JSONException {
            r3 = this;
            java.lang.String r0 = "login"
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto Ld
            com.bianfeng.ymnsdk.YmnSdk.login()
            goto L87
        Ld:
            java.lang.String r0 = "isSupportFunction"
            boolean r0 = r0.equals(r4)
            java.lang.String r1 = "functionName"
            if (r0 == 0) goto L32
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>(r5)
            java.lang.String r4 = r4.optString(r1)
            boolean r4 = com.bianfeng.ymnsdk.YmnSdk.isSupportFunction(r4)
            if (r4 == 0) goto L2c
            java.lang.Boolean r4 = java.lang.Boolean.TRUE
            r4.toString()
            goto L87
        L2c:
            java.lang.Boolean r4 = java.lang.Boolean.FALSE
            r4.toString()
            goto L87
        L32:
            java.lang.String r0 = "callFunction"
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L61
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>(r5)
            java.lang.String r5 = r4.optString(r1)
            java.lang.String r0 = "args"
            org.json.JSONArray r1 = r4.optJSONArray(r0)
            r3.checkJsonStruct(r4, r0, r1)
            if (r1 == 0) goto L5d
            int r4 = r1.length()
            if (r4 != 0) goto L55
            goto L5d
        L55:
            java.lang.String[] r4 = r3.convertJsonArray(r1)
            com.bianfeng.ymnsdk.YmnSdk.callFunction(r5, r4)
            goto L87
        L5d:
            com.bianfeng.ymnsdk.YmnSdk.callFunction(r5)
            goto L87
        L61:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>(r5)
            java.lang.String r1 = r0.toString()
            java.lang.String r2 = "YmnUnitySupport"
            android.util.Log.i(r2, r1)
            int r0 = r0.length()
            if (r0 != 0) goto L7e
            java.lang.String r5 = "callFunction 1111"
            android.util.Log.i(r2, r5)
            com.bianfeng.ymnsdk.YmnSdk.callFunction(r4)
            goto L87
        L7e:
            r0 = 1
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            r0[r1] = r5
            com.bianfeng.ymnsdk.YmnSdk.callFunction(r4, r0)
        L87:
            r4 = 0
            return r4
    }

    private java.lang.String invokeUtils(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r0 = "showToast"
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L11
            com.bianfeng.pluginlibrary.YmnSupport$3 r2 = new com.bianfeng.pluginlibrary.YmnSupport$3
            r2.<init>(r1, r3)
            r1.runOnUiThread(r2)
            goto L2f
        L11:
            java.lang.String r0 = "logcat"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L2f
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "out log from native:"
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "YmnUnitySupport"
            android.util.Log.i(r3, r2)
        L2f:
            r2 = 0
            return r2
    }

    private java.util.Map<java.lang.String, java.lang.Object> jsonToMap(org.json.JSONObject r5) {
            r4 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r5 != 0) goto L8
            return r0
        L8:
            java.util.Iterator r1 = r5.keys()
        Lc:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L20
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r5.opt(r2)
            r0.put(r2, r3)
            goto Lc
        L20:
            return r0
    }

    private void runOnUiThread(java.lang.Runnable r2) {
            r1 = this;
            android.app.Activity r0 = r1.uActivity
            if (r0 == 0) goto Lf
            boolean r0 = r0.isFinishing()
            if (r0 != 0) goto Lf
            android.app.Activity r0 = r1.uActivity
            r0.runOnUiThread(r2)
        Lf:
            return
    }

    public void init(android.app.Activity r2) {
            r1 = this;
            r1.uActivity = r2
            java.lang.String r2 = "YmnUnitySupport"
            java.lang.String r0 = "-----------------YmnSupport.init----------------- 1"
            android.util.Log.i(r2, r0)     // Catch: java.lang.Exception -> L1c
            android.app.Activity r2 = r1.uActivity     // Catch: java.lang.Exception -> L1c
            com.bianfeng.ymnsdk.YmnSdk.onCreate(r2)     // Catch: java.lang.Exception -> L1c
            com.bianfeng.ymnsdk.feature.YmnCallback r2 = r1.callback     // Catch: java.lang.Exception -> L1c
            com.bianfeng.ymnsdk.YmnSdk.registCallback(r2)     // Catch: java.lang.Exception -> L1c
            com.bianfeng.pluginlibrary.YmnSupport$1 r2 = new com.bianfeng.pluginlibrary.YmnSupport$1     // Catch: java.lang.Exception -> L1c
            r2.<init>(r1)     // Catch: java.lang.Exception -> L1c
            r1.runOnUiThread(r2)     // Catch: java.lang.Exception -> L1c
            goto L20
        L1c:
            r2 = move-exception
            r2.printStackTrace()
        L20:
            return
    }

    public void invokeWechatSetPayParams(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "wxAppId"
            r0.put(r1, r6)     // Catch: java.lang.Exception -> L29
            java.lang.String r6 = "appId"
            r0.put(r6, r3)     // Catch: java.lang.Exception -> L29
            java.lang.String r3 = "packageId"
            r0.put(r3, r5)     // Catch: java.lang.Exception -> L29
            java.lang.String r3 = "clientKey"
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L29
            java.lang.String r3 = "wechat_set_pay_params"
            r4 = 1
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Exception -> L29
            r5 = 0
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Exception -> L29
            r4[r5] = r6     // Catch: java.lang.Exception -> L29
            com.bianfeng.ymnsdk.YmnSdk.callFunction(r3, r4)     // Catch: java.lang.Exception -> L29
            goto L2d
        L29:
            r3 = move-exception
            r3.printStackTrace()
        L2d:
            return
    }

    protected void onActivityResult(int r4, int r5, android.content.Intent r6) {
            r3 = this;
            com.bianfeng.ymnsdk.YmnSdk.onActivityResult(r4, r5, r6)
            r4 = 332211(0x511b3, float:4.65527E-40)
            if (r5 != r4) goto L2e
            r4 = 0
            java.lang.String r5 = "code"
            int r0 = r6.getIntExtra(r5, r4)
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "zzx-test-Result"
            android.util.Log.d(r1, r0)
            java.lang.String r0 = "msg"
            java.lang.String r2 = r6.getStringExtra(r0)
            android.util.Log.d(r1, r2)
            com.bianfeng.pluginlibrary.YmnListener r1 = r3.listener
            int r4 = r6.getIntExtra(r5, r4)
            java.lang.String r5 = r6.getStringExtra(r0)
            r1.callBack(r4, r5)
        L2e:
            return
    }

    public void onBackPressed() {
            r2 = this;
            java.lang.String r0 = "exit"
            boolean r1 = com.bianfeng.ymnsdk.YmnSdk.isSupportFunction(r0)
            if (r1 == 0) goto Lb
            com.bianfeng.ymnsdk.YmnSdk.callFunction(r0)
        Lb:
            return
    }

    protected void onDestroy() {
            r1 = this;
            com.bianfeng.ymnsdk.YmnSdk.onDestroy()
            com.bianfeng.ymnsdk.feature.YmnCallback r0 = r1.callback
            com.bianfeng.ymnsdk.YmnSdk.removeCallback(r0)
            return
    }

    protected void onNewIntent(android.content.Intent r1) {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdk.onNewIntent(r1)
            return
    }

    protected void onPause() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdk.onPause()
            return
    }

    public void onRequestPermissionsResult(int r1, java.lang.String[] r2, int[] r3) {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdk.onRequestPermissionsResult(r1, r2, r3)
            return
    }

    protected void onRestart() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdk.onRestart()
            return
    }

    protected void onResume() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdk.onResume()
            return
    }

    protected void onStart() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdk.onStart()
            return
    }

    protected void onStop() {
            r0 = this;
            com.bianfeng.ymnsdk.YmnSdk.onStop()
            return
    }

    public void onWindowFocusChanged(boolean r2) {
            r1 = this;
            android.app.Activity r0 = r1.uActivity
            com.bianfeng.ymnsdk.YmnSdk.onWindowFocusChanged(r2, r0)
            return
    }

    public void setCallback(com.bianfeng.pluginlibrary.YmnListener r1) {
            r0 = this;
            r0.listener = r1
            return
    }

    public java.lang.String ymnInvoke(java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r4 = this;
            java.lang.String r0 = "----------------------"
            java.lang.String r1 = "YmnUnitySupport"
            android.util.Log.i(r1, r0)
            r2 = 3
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r5
            r3 = 1
            r2[r3] = r6
            r3 = 2
            r2[r3] = r7
            java.lang.String r3 = "called method ymnInvoke %s::%s(%s)"
            java.lang.String r2 = java.lang.String.format(r3, r2)
            android.util.Log.i(r1, r2)
            android.util.Log.i(r1, r0)
            java.lang.String r0 = "UserInterface"
            boolean r0 = r5.endsWith(r0)     // Catch: org.json.JSONException -> L48
            if (r0 == 0) goto L2c
            java.lang.String r5 = r4.invokeUserInterface(r6, r7)     // Catch: org.json.JSONException -> L48
            return r5
        L2c:
            java.lang.String r0 = "PaymentInterface"
            boolean r0 = r5.endsWith(r0)     // Catch: org.json.JSONException -> L48
            if (r0 == 0) goto L39
            java.lang.String r5 = r4.invokePaymentInterface(r6, r7)     // Catch: org.json.JSONException -> L48
            return r5
        L39:
            java.lang.String r0 = "Utils"
            boolean r5 = r5.equals(r0)     // Catch: org.json.JSONException -> L48
            if (r5 == 0) goto L46
            java.lang.String r5 = r4.invokeUtils(r6, r7)     // Catch: org.json.JSONException -> L48
            return r5
        L46:
            r5 = 0
            return r5
        L48:
            java.lang.RuntimeException r5 = new java.lang.RuntimeException
            java.lang.String r6 = "参数格式异常"
            r5.<init>(r6)
            throw r5
    }
}
