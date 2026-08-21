package org.cocos2dx.lua;

public class YmnSupport implements com.bianfeng.platform.PlatformSdkListener {
    private static final java.lang.String TAG = "YmnSupport";
    private static android.app.Activity activity;
    private static boolean callbackiniting;
    private static boolean inited;
    private static boolean initing;
    private static org.cocos2dx.lua.YmnSupport instance;



    static {
            org.cocos2dx.lua.YmnSupport r0 = new org.cocos2dx.lua.YmnSupport
            r0.<init>()
            org.cocos2dx.lua.YmnSupport.instance = r0
            return
    }

    public YmnSupport() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.app.Activity access$000() {
            android.app.Activity r0 = org.cocos2dx.lua.YmnSupport.activity
            return r0
    }

    public static void callbackInitSdk() {
            boolean r0 = org.cocos2dx.lua.YmnSupport.callbackiniting
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            org.cocos2dx.lua.YmnSupport.callbackiniting = r0
            java.lang.String r0 = "AppActivity"
            java.lang.String r1 = "-----------------权限回调PlatformSdkinit-----------------"
            android.util.Log.i(r0, r1)     // Catch: java.lang.Exception -> L19
            com.bianfeng.platform.PlatformSdk r0 = com.bianfeng.platform.PlatformSdk.getInstance()     // Catch: java.lang.Exception -> L19
            android.app.Activity r1 = org.cocos2dx.lua.YmnSupport.activity     // Catch: java.lang.Exception -> L19
            r0.init(r1)     // Catch: java.lang.Exception -> L19
            goto L1d
        L19:
            r0 = move-exception
            r0.printStackTrace()
        L1d:
            return
    }

    private static void checkJsonStruct(org.json.JSONObject r0, java.lang.String r1, java.lang.Object r2) {
            if (r2 != 0) goto Lf
            boolean r0 = r0.has(r1)
            if (r0 == 0) goto Lf
            java.lang.String r0 = "showToast"
            java.lang.String r1 = "错误：args参数非json结构！"
            invokeUtils(r0, r1)
        Lf:
            return
    }

    private static java.lang.String[] convertJsonArray(org.json.JSONArray r3) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
        L6:
            int r2 = r3.length()
            if (r1 >= r2) goto L16
            java.lang.String r2 = r3.optString(r1)
            r0.add(r2)
            int r1 = r1 + 1
            goto L6
        L16:
            int r3 = r0.size()
            java.lang.String[] r3 = new java.lang.String[r3]
            java.lang.Object[] r3 = r0.toArray(r3)
            java.lang.String[] r3 = (java.lang.String[]) r3
            return r3
    }

    public static void init(android.app.Activity r0) {
            org.cocos2dx.lua.YmnSupport.activity = r0
            r0 = 0
            initSdk(r0)     // Catch: java.lang.Exception -> L7
            goto Lb
        L7:
            r0 = move-exception
            r0.printStackTrace()
        Lb:
            return
    }

    private static void initSdk(boolean r1) {
            boolean r0 = org.cocos2dx.lua.YmnSupport.initing
            if (r0 == 0) goto L5
            return
        L5:
            boolean r0 = org.cocos2dx.lua.YmnSupport.inited
            if (r0 == 0) goto L16
            r1 = 100
            java.lang.String r0 = "sdk already inited"
            ymnCallBack(r1, r0)
            r1 = 205(0xcd, float:2.87E-43)
            ymnCallBack(r1, r0)
            return
        L16:
            r0 = 1
            org.cocos2dx.lua.YmnSupport.initing = r0
            org.cocos2dx.lua.YmnSupport r0 = org.cocos2dx.lua.YmnSupport.instance
            com.bianfeng.platform.PlatformSdk.setListener(r0)
            if (r1 == 0) goto L29
            org.cocos2dx.lua.YmnSupport$1 r1 = new org.cocos2dx.lua.YmnSupport$1
            r1.<init>()
            runOnUiThread(r1)
            goto L32
        L29:
            com.bianfeng.platform.PlatformSdk r1 = com.bianfeng.platform.PlatformSdk.getInstance()
            android.app.Activity r0 = org.cocos2dx.lua.YmnSupport.activity
            r1.init(r0)
        L32:
            return
    }

    private static java.lang.String invokeBfAnalytics(java.lang.String r6, java.lang.String r7) throws org.json.JSONException {
            java.lang.String r0 = "getDeviceIdSync"
            boolean r1 = r0.equals(r6)
            r2 = 0
            if (r1 == 0) goto L10
            java.lang.String[] r6 = new java.lang.String[r2]
            java.lang.String r6 = com.bianfeng.ymnsdk.YmnSdk.callFunctionWithResult(r0, r6)
            return r6
        L10:
            java.lang.String r0 = "onEvent"
            boolean r0 = r0.equals(r6)
            java.lang.String r1 = "label"
            java.lang.String r3 = "eventId"
            java.lang.String r4 = "map"
            if (r0 == 0) goto L4a
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>(r7)
            org.json.JSONObject r7 = r6.optJSONObject(r4)
            checkJsonStruct(r6, r4, r7)
            java.util.LinkedHashMap r7 = new java.util.LinkedHashMap
            r7.<init>()
            java.lang.String r0 = r6.optString(r3)
            r7.put(r3, r0)
            java.lang.String r0 = r6.optString(r1)
            r7.put(r1, r0)
            java.lang.String r6 = r6.optString(r4)
            r7.put(r4, r6)
            java.lang.String r6 = "bfdata_onevent"
            com.bianfeng.ymnsdk.YmnSdk.callFunction(r6, r7)
            goto L98
        L4a:
            java.lang.String r0 = "setFrequentRate"
            boolean r5 = r0.equals(r6)
            if (r5 == 0) goto L5b
            r6 = 1
            java.lang.String[] r6 = new java.lang.String[r6]
            r6[r2] = r7
            com.bianfeng.ymnsdk.YmnSdk.callFunction(r0, r6)
            goto L98
        L5b:
            java.lang.String r0 = "onFrequentEvent"
            boolean r2 = r0.equals(r6)
            if (r2 == 0) goto L8d
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>(r7)
            org.json.JSONObject r7 = r6.optJSONObject(r4)
            checkJsonStruct(r6, r4, r7)
            java.util.LinkedHashMap r7 = new java.util.LinkedHashMap
            r7.<init>()
            java.lang.String r2 = r6.optString(r3)
            r7.put(r3, r2)
            java.lang.String r2 = r6.optString(r1)
            r7.put(r1, r2)
            java.lang.String r6 = r6.optString(r4)
            r7.put(r4, r6)
            com.bianfeng.ymnsdk.YmnSdk.callFunction(r0, r7)
            goto L98
        L8d:
            java.lang.String r7 = "flushFrequentEvents"
            boolean r6 = r7.equals(r6)
            if (r6 == 0) goto L98
            com.bianfeng.ymnsdk.YmnSdk.callFunction(r7)
        L98:
            r6 = 0
            return r6
    }

    private static java.lang.String invokeFilePathInterface(java.lang.String r2, java.lang.String r3) throws org.json.JSONException {
            java.lang.String r0 = "getStoragePath"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L63
            java.lang.String r2 = android.os.Environment.getExternalStorageState()
            java.lang.String r0 = "mounted"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L1f
            android.app.Activity r2 = org.cocos2dx.lua.YmnSupport.activity
            java.io.File r2 = r2.getExternalFilesDir(r3)
            java.lang.String r2 = r2.getAbsolutePath()
            goto L39
        L1f:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            android.app.Activity r0 = org.cocos2dx.lua.YmnSupport.activity
            java.io.File r0 = r0.getFilesDir()
            r2.append(r0)
            java.lang.String r0 = java.io.File.separator
            r2.append(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
        L39:
            java.io.File r3 = new java.io.File
            r3.<init>(r2)
            boolean r0 = r3.exists()
            java.lang.String r1 = "AppActivity"
            if (r0 != 0) goto L4e
            java.lang.String r0 = "spideman555"
            android.util.Log.i(r1, r0)
            r3.mkdirs()
        L4e:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "spideman"
            r3.append(r0)
            r3.append(r2)
            java.lang.String r3 = r3.toString()
            android.util.Log.i(r1, r3)
            return r2
        L63:
            r2 = 0
            return r2
    }

    private static java.lang.String invokePaymentInterface(java.lang.String r13, java.lang.String r14) throws org.json.JSONException {
            java.lang.String r0 = "payForProduct"
            boolean r13 = r0.equals(r13)
            if (r13 == 0) goto L5c
            org.json.JSONObject r13 = new org.json.JSONObject
            r13.<init>(r14)
            com.bianfeng.platform.PaymentInterface r0 = com.bianfeng.platform.PaymentInterface.getInstance()
            java.lang.String r14 = "order_id"
            java.lang.String r1 = r13.optString(r14)
            java.lang.String r14 = "product_id"
            java.lang.String r2 = r13.optString(r14)
            java.lang.String r14 = "product_name"
            java.lang.String r3 = r13.optString(r14)
            java.lang.String r14 = "product_price"
            java.lang.String r4 = r13.optString(r14)
            java.lang.String r14 = "product_count"
            java.lang.String r5 = r13.optString(r14)
            java.lang.String r14 = "role_id"
            java.lang.String r6 = r13.optString(r14)
            java.lang.String r14 = "role_name"
            java.lang.String r7 = r13.optString(r14)
            java.lang.String r14 = "role_grade"
            java.lang.String r8 = r13.optString(r14)
            java.lang.String r14 = "role_balance"
            java.lang.String r9 = r13.optString(r14)
            java.lang.String r14 = "server_id"
            java.lang.String r10 = r13.optString(r14)
            java.lang.String r14 = "notify_url"
            java.lang.String r11 = r13.optString(r14)
            java.lang.String r14 = "ext"
            java.lang.String r12 = r13.optString(r14)
            r0.payForProduct(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
        L5c:
            r13 = 0
            return r13
    }

    private static java.lang.String invokePlatformSdk(java.lang.String r0, java.lang.String r1) {
            java.lang.String r1 = "init"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto Ld
            r0 = 1
            initSdk(r0)
            goto L51
        Ld:
            java.lang.String r1 = "getPlatformId"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L1e
            com.bianfeng.platform.PlatformSdk r0 = com.bianfeng.platform.PlatformSdk.getInstance()
            java.lang.String r0 = r0.getPlatformId()
            return r0
        L1e:
            java.lang.String r1 = "getPlatformName"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L2f
            com.bianfeng.platform.PlatformSdk r0 = com.bianfeng.platform.PlatformSdk.getInstance()
            java.lang.String r0 = r0.getPlatformName()
            return r0
        L2f:
            java.lang.String r1 = "getPlatformVersion"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L40
            com.bianfeng.platform.PlatformSdk r0 = com.bianfeng.platform.PlatformSdk.getInstance()
            java.lang.String r0 = r0.getPlatformVersion()
            return r0
        L40:
            java.lang.String r1 = "getYmnSdkVersion"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L51
            com.bianfeng.platform.PlatformSdk r0 = com.bianfeng.platform.PlatformSdk.getInstance()
            java.lang.String r0 = r0.getSdkVersion()
            return r0
        L51:
            r0 = 0
            return r0
    }

    private static java.lang.String invokeUserInterface(java.lang.String r5, java.lang.String r6) throws org.json.JSONException {
            java.lang.String r0 = "login"
            boolean r0 = r0.equals(r5)
            r1 = 0
            if (r0 == 0) goto L12
            com.bianfeng.platform.UserInterface r5 = com.bianfeng.platform.UserInterface.getInstance()
            r5.login()
            goto L111
        L12:
            java.lang.String r0 = "callFunction"
            boolean r0 = r0.equals(r5)
            r2 = 0
            java.lang.String r3 = "functionName"
            java.lang.String r4 = "args"
            if (r0 == 0) goto Lb2
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>(r6)
            java.lang.String r6 = r5.optString(r3)
            java.lang.String r0 = "ZFBBUY"
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L33
            java.lang.String r6 = "alipay_pay"
            goto L3d
        L33:
            java.lang.String r0 = "WXBUY"
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L3d
            java.lang.String r6 = "weixin_pay"
        L3d:
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r0[r2] = r6
            java.lang.String r2 = "spideman_functionName :(%s)"
            java.lang.String r0 = java.lang.String.format(r2, r0)
            java.lang.String r2 = "YmnSupport"
            android.util.Log.i(r2, r0)
            java.lang.String r0 = r5.optString(r4)
            org.json.JSONArray r2 = r5.optJSONArray(r4)
            boolean r3 = r0.isEmpty()
            if (r3 != 0) goto L6b
            if (r2 != 0) goto L6b
            com.google.gson.Gson r5 = new com.google.gson.Gson
            r5.<init>()
            java.lang.Class<java.util.LinkedHashMap> r3 = java.util.LinkedHashMap.class
            java.lang.Object r5 = r5.fromJson(r0, r3)
            java.util.LinkedHashMap r5 = (java.util.LinkedHashMap) r5
            goto L6f
        L6b:
            checkJsonStruct(r5, r4, r2)
            r5 = r1
        L6f:
            if (r5 == 0) goto L77
            boolean r0 = r5.isEmpty()
            if (r0 == 0) goto L80
        L77:
            if (r2 == 0) goto Lae
            int r0 = r2.length()
            if (r0 != 0) goto L80
            goto Lae
        L80:
            if (r5 == 0) goto L87
            com.bianfeng.ymnsdk.YmnSdk.callFunction(r6, r5)
            goto L111
        L87:
            if (r2 == 0) goto L92
            java.lang.String[] r5 = convertJsonArray(r2)
            com.bianfeng.ymnsdk.YmnSdk.callFunction(r6, r5)
            goto L111
        L92:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "错误："
            r5.append(r0)
            r5.append(r6)
            java.lang.String r6 = "调用错误！！"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = "showToast"
            invokeUtils(r6, r5)
            goto L111
        Lae:
            com.bianfeng.ymnsdk.YmnSdk.callFunction(r6)
            goto L111
        Lb2:
            java.lang.String r0 = "callFunctionWithResult"
            boolean r0 = r0.equals(r5)
            if (r0 == 0) goto Le8
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>(r6)
            java.lang.String r6 = r5.optString(r3)
            org.json.JSONArray r5 = r5.optJSONArray(r4)
            if (r5 == 0) goto Ldd
            int r0 = r5.length()
            if (r0 != 0) goto Ld0
            goto Ldd
        Ld0:
            com.bianfeng.platform.UserInterface r0 = com.bianfeng.platform.UserInterface.getInstance()
            java.lang.String[] r5 = convertJsonArray(r5)
            java.lang.String r5 = r0.callFunctionWithResult(r6, r5)
            return r5
        Ldd:
            com.bianfeng.platform.UserInterface r5 = com.bianfeng.platform.UserInterface.getInstance()
            java.lang.String[] r0 = new java.lang.String[r2]
            java.lang.String r5 = r5.callFunctionWithResult(r6, r0)
            return r5
        Le8:
            java.lang.String r0 = "isSupportFunction"
            boolean r5 = r0.equals(r5)
            if (r5 == 0) goto L111
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>(r6)
            java.lang.String r5 = r5.optString(r3)
            com.bianfeng.platform.UserInterface r6 = com.bianfeng.platform.UserInterface.getInstance()
            boolean r5 = r6.isSupportFunction(r5)
            if (r5 == 0) goto L10a
            java.lang.Boolean r5 = java.lang.Boolean.TRUE
            java.lang.String r5 = r5.toString()
            return r5
        L10a:
            java.lang.Boolean r5 = java.lang.Boolean.FALSE
            java.lang.String r5 = r5.toString()
            return r5
        L111:
            return r1
    }

    private static java.lang.String invokeUtils(java.lang.String r1, java.lang.String r2) {
            java.lang.String r0 = "showToast"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L11
            org.cocos2dx.lua.YmnSupport$2 r1 = new org.cocos2dx.lua.YmnSupport$2
            r1.<init>(r2)
            runOnUiThread(r1)
            goto L2f
        L11:
            java.lang.String r0 = "logcat"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L2f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r0 = "out log from native:"
            r1.append(r0)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "YmnSupport"
            android.util.Log.i(r2, r1)
        L2f:
            r1 = 0
            return r1
    }

    private static java.util.Map<java.lang.String, java.lang.Object> jsonToMap(org.json.JSONObject r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r4 != 0) goto L8
            return r0
        L8:
            java.util.Iterator r1 = r4.keys()
        Lc:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L20
            java.lang.Object r2 = r1.next()
            java.lang.String r2 = (java.lang.String) r2
            java.lang.Object r3 = r4.opt(r2)
            r0.put(r2, r3)
            goto Lc
        L20:
            return r0
    }

    public static void onActivityResult(int r1, int r2, android.content.Intent r3) {
            com.bianfeng.platform.PlatformSdk r0 = com.bianfeng.platform.PlatformSdk.getInstance()
            r0.onActivityResult(r1, r2, r3)
            return
    }

    public static void onNewIntent(android.content.Intent r1) {
            com.bianfeng.platform.PlatformSdk r0 = com.bianfeng.platform.PlatformSdk.getInstance()
            r0.onNewIntent(r1)
            return
    }

    public static void onPause() {
            com.bianfeng.platform.PlatformSdk r0 = com.bianfeng.platform.PlatformSdk.getInstance()
            r0.onPause()
            return
    }

    public static void onResume() {
            com.bianfeng.platform.PlatformSdk r0 = com.bianfeng.platform.PlatformSdk.getInstance()
            r0.onResume()
            return
    }

    public static void onStart() {
            com.bianfeng.platform.PlatformSdk r0 = com.bianfeng.platform.PlatformSdk.getInstance()
            r0.onStart()
            return
    }

    public static void onStop() {
            com.bianfeng.platform.PlatformSdk r0 = com.bianfeng.platform.PlatformSdk.getInstance()
            r0.onStop()
            return
    }

    public static void release() {
            com.bianfeng.platform.PlatformSdk r0 = com.bianfeng.platform.PlatformSdk.getInstance()
            r0.release()
            return
    }

    private static void runOnUiThread(java.lang.Runnable r1) {
            android.app.Activity r0 = org.cocos2dx.lua.YmnSupport.activity
            if (r0 == 0) goto Lf
            boolean r0 = r0.isFinishing()
            if (r0 != 0) goto Lf
            android.app.Activity r0 = org.cocos2dx.lua.YmnSupport.activity
            r0.runOnUiThread(r1)
        Lf:
            return
    }

    public static native void ymnCallBack(int r0, java.lang.String r1);

    public static java.lang.String ymnInvoke(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            java.lang.String r0 = "----------------------"
            java.lang.String r1 = "YmnSupport"
            android.util.Log.i(r1, r0)
            r2 = 3
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r4
            r3 = 1
            r2[r3] = r5
            r3 = 2
            r2[r3] = r6
            java.lang.String r3 = "native called method ymnInvoke %s::%s(%s)"
            java.lang.String r2 = java.lang.String.format(r3, r2)
            android.util.Log.i(r1, r2)
            android.util.Log.i(r1, r0)
            android.app.Activity r0 = org.cocos2dx.lua.YmnSupport.activity
            r1 = 0
            if (r0 != 0) goto L25
            return r1
        L25:
            java.lang.String r0 = "PlatformSdk"
            boolean r0 = r4.endsWith(r0)     // Catch: org.json.JSONException -> L74
            if (r0 == 0) goto L32
            java.lang.String r4 = invokePlatformSdk(r5, r6)     // Catch: org.json.JSONException -> L74
            return r4
        L32:
            java.lang.String r0 = "UserInterface"
            boolean r0 = r4.endsWith(r0)     // Catch: org.json.JSONException -> L74
            if (r0 == 0) goto L3f
            java.lang.String r4 = invokeUserInterface(r5, r6)     // Catch: org.json.JSONException -> L74
            return r4
        L3f:
            java.lang.String r0 = "PaymentInterface"
            boolean r0 = r4.endsWith(r0)     // Catch: org.json.JSONException -> L74
            if (r0 == 0) goto L4c
            java.lang.String r4 = invokePaymentInterface(r5, r6)     // Catch: org.json.JSONException -> L74
            return r4
        L4c:
            java.lang.String r0 = "Utils"
            boolean r0 = r4.equals(r0)     // Catch: org.json.JSONException -> L74
            if (r0 == 0) goto L59
            java.lang.String r4 = invokeUtils(r5, r6)     // Catch: org.json.JSONException -> L74
            return r4
        L59:
            java.lang.String r0 = "BfAnalytics"
            boolean r0 = r4.equals(r0)     // Catch: org.json.JSONException -> L74
            if (r0 == 0) goto L66
            java.lang.String r4 = invokeBfAnalytics(r5, r6)     // Catch: org.json.JSONException -> L74
            return r4
        L66:
            java.lang.String r0 = "FilePathInterface"
            boolean r4 = r4.equals(r0)     // Catch: org.json.JSONException -> L74
            if (r4 == 0) goto L73
            java.lang.String r4 = invokeFilePathInterface(r5, r6)     // Catch: org.json.JSONException -> L74
            return r4
        L73:
            return r1
        L74:
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            java.lang.String r5 = "参数格式异常"
            r4.<init>(r5)
            throw r4
    }

    @Override
    public void onCallBack(int r3, java.lang.String r4) {
            r2 = this;
            r0 = 0
            r1 = 100
            if (r3 != r1) goto Lb
            org.cocos2dx.lua.YmnSupport.initing = r0
            r0 = 1
            org.cocos2dx.lua.YmnSupport.inited = r0
            goto L13
        Lb:
            r1 = 101(0x65, float:1.42E-43)
            if (r3 != r1) goto L13
            org.cocos2dx.lua.YmnSupport.initing = r0
            org.cocos2dx.lua.YmnSupport.inited = r0
        L13:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AppActivity"
            android.util.Log.i(r1, r0)
            if (r4 == 0) goto L2a
            goto L2c
        L2a:
            java.lang.String r4 = ""
        L2c:
            ymnCallBack(r3, r4)
            return
    }
}
