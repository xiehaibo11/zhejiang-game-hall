package org.cocos2dx.lua;

public class XhSupport implements com.bianfeng.platform.PlatformSdkListener {
    private static final java.lang.String TAG = "XhSupport";
    private static android.app.Activity activity;
    private static boolean callbackiniting;
    private static boolean inited;
    private static boolean initing;
    private static org.cocos2dx.lua.XhSupport instance;



    static {
            org.cocos2dx.lua.XhSupport r0 = new org.cocos2dx.lua.XhSupport
            r0.<init>()
            org.cocos2dx.lua.XhSupport.instance = r0
            return
    }

    public XhSupport() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.app.Activity access$000() {
            android.app.Activity r0 = org.cocos2dx.lua.XhSupport.activity
            return r0
    }

    public static void callbackInitSdk() {
            boolean r0 = org.cocos2dx.lua.XhSupport.callbackiniting
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            org.cocos2dx.lua.XhSupport.callbackiniting = r0
            java.lang.String r0 = "AppActivity"
            java.lang.String r1 = "-----------------权限回调PlatformSdkinit-----------------"
            android.util.Log.i(r0, r1)     // Catch: java.lang.Exception -> L19
            com.bianfeng.platform.PlatformSdk r0 = com.bianfeng.platform.PlatformSdk.getInstance()     // Catch: java.lang.Exception -> L19
            android.app.Activity r1 = org.cocos2dx.lua.XhSupport.activity     // Catch: java.lang.Exception -> L19
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
            org.cocos2dx.lua.XhSupport.activity = r0
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
            boolean r0 = org.cocos2dx.lua.XhSupport.initing
            if (r0 == 0) goto L5
            return
        L5:
            boolean r0 = org.cocos2dx.lua.XhSupport.inited
            if (r0 == 0) goto L16
            r1 = 100
            java.lang.String r0 = "sdk already inited"
            xhCallBack(r1, r0)
            r1 = 205(0xcd, float:2.87E-43)
            xhCallBack(r1, r0)
            return
        L16:
            r0 = 1
            org.cocos2dx.lua.XhSupport.initing = r0
            org.cocos2dx.lua.XhSupport r0 = org.cocos2dx.lua.XhSupport.instance
            com.bianfeng.platform.PlatformSdk.setListener(r0)
            if (r1 == 0) goto L29
            org.cocos2dx.lua.XhSupport$1 r1 = new org.cocos2dx.lua.XhSupport$1
            r1.<init>()
            runOnUiThread(r1)
            goto L32
        L29:
            com.bianfeng.platform.PlatformSdk r1 = com.bianfeng.platform.PlatformSdk.getInstance()
            android.app.Activity r0 = org.cocos2dx.lua.XhSupport.activity
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

    private static java.lang.String invokeUserInterface(java.lang.String r3, java.lang.String r4) throws org.json.JSONException {
            java.lang.String r0 = "login"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L11
            com.bianfeng.platform.UserInterface r3 = com.bianfeng.platform.UserInterface.getInstance()
            r3.login()
            goto Laa
        L11:
            java.lang.String r0 = "callFunction"
            boolean r0 = r0.equals(r3)
            java.lang.String r1 = "args"
            java.lang.String r2 = "functionName"
            if (r0 == 0) goto L4a
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>(r4)
            java.lang.String r4 = r3.optString(r2)
            org.json.JSONArray r0 = r3.optJSONArray(r1)
            checkJsonStruct(r3, r1, r0)
            if (r0 == 0) goto L42
            int r3 = r0.length()
            if (r3 != 0) goto L36
            goto L42
        L36:
            com.bianfeng.platform.UserInterface r3 = com.bianfeng.platform.UserInterface.getInstance()
            java.lang.String[] r0 = convertJsonArray(r0)
            r3.callFunction(r4, r0)
            goto Laa
        L42:
            com.bianfeng.platform.UserInterface r3 = com.bianfeng.platform.UserInterface.getInstance()
            r3.callFunction(r4)
            goto Laa
        L4a:
            java.lang.String r0 = "callFunctionWithResult"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L81
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>(r4)
            java.lang.String r4 = r3.optString(r2)
            org.json.JSONArray r3 = r3.optJSONArray(r1)
            if (r3 == 0) goto L75
            int r0 = r3.length()
            if (r0 != 0) goto L68
            goto L75
        L68:
            com.bianfeng.platform.UserInterface r0 = com.bianfeng.platform.UserInterface.getInstance()
            java.lang.String[] r3 = convertJsonArray(r3)
            java.lang.String r3 = r0.callFunctionWithResult(r4, r3)
            return r3
        L75:
            com.bianfeng.platform.UserInterface r3 = com.bianfeng.platform.UserInterface.getInstance()
            r0 = 0
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.String r3 = r3.callFunctionWithResult(r4, r0)
            return r3
        L81:
            java.lang.String r0 = "isSupportFunction"
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto Laa
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>(r4)
            java.lang.String r3 = r3.optString(r2)
            com.bianfeng.platform.UserInterface r4 = com.bianfeng.platform.UserInterface.getInstance()
            boolean r3 = r4.isSupportFunction(r3)
            if (r3 == 0) goto La3
            java.lang.Boolean r3 = java.lang.Boolean.TRUE
            java.lang.String r3 = r3.toString()
            return r3
        La3:
            java.lang.Boolean r3 = java.lang.Boolean.FALSE
            java.lang.String r3 = r3.toString()
            return r3
        Laa:
            r3 = 0
            return r3
    }

    private static java.lang.String invokeUtils(java.lang.String r1, java.lang.String r2) {
            java.lang.String r0 = "showToast"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L11
            org.cocos2dx.lua.XhSupport$2 r1 = new org.cocos2dx.lua.XhSupport$2
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
            java.lang.String r2 = "XhSupport"
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
            android.app.Activity r0 = org.cocos2dx.lua.XhSupport.activity
            if (r0 == 0) goto Lf
            boolean r0 = r0.isFinishing()
            if (r0 != 0) goto Lf
            android.app.Activity r0 = org.cocos2dx.lua.XhSupport.activity
            r0.runOnUiThread(r1)
        Lf:
            return
    }

    public static void setActivity(android.app.Activity r0) {
            org.cocos2dx.lua.XhSupport.activity = r0
            return
    }

    public static int shareBox(java.lang.String r2, int r3, int r4) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "shareBox:"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "XhSupport"
            android.util.Log.i(r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "fybox://action/share?uuid="
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = "&numid="
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = "&areaid="
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = r0.toString()
            android.net.Uri r2 = android.net.Uri.parse(r2)
            android.content.Intent r3 = new android.content.Intent
            java.lang.String r4 = "android.intent.action.VIEW"
            r3.<init>(r4, r2)
            android.app.Activity r2 = org.cocos2dx.lua.XhSupport.activity     // Catch: java.lang.Exception -> L49 android.content.ActivityNotFoundException -> L4f
            r2.startActivity(r3)     // Catch: java.lang.Exception -> L49 android.content.ActivityNotFoundException -> L4f
            r2 = 0
            return r2
        L49:
            r2 = move-exception
            r2.printStackTrace()
            r2 = -1
            return r2
        L4f:
            r2 = move-exception
            r2.printStackTrace()
            r2 = -2
            return r2
    }

    public static native void xhCallBack(int r0, java.lang.String r1);

    public static java.lang.String ymnInvoke(java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            java.lang.String r0 = "----------------------"
            java.lang.String r1 = "XhSupport"
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
            android.app.Activity r0 = org.cocos2dx.lua.XhSupport.activity
            r1 = 0
            if (r0 != 0) goto L25
            return r1
        L25:
            java.lang.String r0 = "PlatformSdk"
            boolean r0 = r4.endsWith(r0)     // Catch: org.json.JSONException -> L67
            if (r0 == 0) goto L32
            java.lang.String r4 = invokePlatformSdk(r5, r6)     // Catch: org.json.JSONException -> L67
            return r4
        L32:
            java.lang.String r0 = "UserInterface"
            boolean r0 = r4.endsWith(r0)     // Catch: org.json.JSONException -> L67
            if (r0 == 0) goto L3f
            java.lang.String r4 = invokeUserInterface(r5, r6)     // Catch: org.json.JSONException -> L67
            return r4
        L3f:
            java.lang.String r0 = "PaymentInterface"
            boolean r0 = r4.endsWith(r0)     // Catch: org.json.JSONException -> L67
            if (r0 == 0) goto L4c
            java.lang.String r4 = invokePaymentInterface(r5, r6)     // Catch: org.json.JSONException -> L67
            return r4
        L4c:
            java.lang.String r0 = "Utils"
            boolean r0 = r4.equals(r0)     // Catch: org.json.JSONException -> L67
            if (r0 == 0) goto L59
            java.lang.String r4 = invokeUtils(r5, r6)     // Catch: org.json.JSONException -> L67
            return r4
        L59:
            java.lang.String r0 = "BfAnalytics"
            boolean r4 = r4.equals(r0)     // Catch: org.json.JSONException -> L67
            if (r4 == 0) goto L66
            java.lang.String r4 = invokeBfAnalytics(r5, r6)     // Catch: org.json.JSONException -> L67
            return r4
        L66:
            return r1
        L67:
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
            org.cocos2dx.lua.XhSupport.initing = r0
            r0 = 1
            org.cocos2dx.lua.XhSupport.inited = r0
            goto L13
        Lb:
            r1 = 101(0x65, float:1.42E-43)
            if (r3 != r1) goto L13
            org.cocos2dx.lua.XhSupport.initing = r0
            org.cocos2dx.lua.XhSupport.inited = r0
        L13:
            if (r4 == 0) goto L16
            goto L18
        L16:
            java.lang.String r4 = ""
        L18:
            xhCallBack(r3, r4)
            return
    }
}
