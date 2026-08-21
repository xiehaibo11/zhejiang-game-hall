package com.bianfeng.ymnsdk;

public class YmnSdkWrapper {
    private static final int REQUEST_PERMISSIONS_CODE = 1;
    public static android.app.Activity activity;
    private static java.util.Set<com.bianfeng.ymnsdk.feature.YmnCallback> callbacks;
    private static com.bianfeng.ymnsdk.feature.YmnCallback dispatcher;
    private static volatile boolean inited;
    private static boolean mIsCallInit;
    private static com.bianfeng.ymnsdk.YmnSdkWrapper.PermissionCallback permissionCallback;
    private static java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> pluginAutoFunctions;





    public interface PermissionCallback {
        void onFinish();
    }

    public interface ShowPermissionCallback {
        void onNotShow();

        void onShow();
    }

    static {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.bianfeng.ymnsdk.YmnSdkWrapper.callbacks = r0
            com.bianfeng.ymnsdk.YmnSdkWrapper$1 r0 = new com.bianfeng.ymnsdk.YmnSdkWrapper$1
            r0.<init>()
            com.bianfeng.ymnsdk.YmnSdkWrapper.dispatcher = r0
            return
    }

    public YmnSdkWrapper() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.util.Set access$000() {
            java.util.Set<com.bianfeng.ymnsdk.feature.YmnCallback> r0 = com.bianfeng.ymnsdk.YmnSdkWrapper.callbacks
            return r0
    }

    static java.util.Map access$100() {
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkWrapper.pluginAutoFunctions
            return r0
    }

    public static void callFunction(java.lang.String r1) {
            com.bianfeng.ymnsdk.YmnSdkWrapper$2 r0 = new com.bianfeng.ymnsdk.YmnSdkWrapper$2
            r0.<init>(r1)
            runOnUiThread(r0)
            return
    }

    public static void callFunction(java.lang.String r1, java.util.LinkedHashMap<java.lang.String, java.lang.String> r2) {
            com.bianfeng.ymnsdk.YmnSdkWrapper$4 r0 = new com.bianfeng.ymnsdk.YmnSdkWrapper$4
            r0.<init>(r1, r2)
            runOnUiThread(r0)
            return
    }

    public static void callFunction(java.lang.String r1, java.lang.String... r2) {
            com.bianfeng.ymnsdk.YmnSdkWrapper$3 r0 = new com.bianfeng.ymnsdk.YmnSdkWrapper$3
            r0.<init>(r2, r1)
            runOnUiThread(r0)
            return
    }

    public static java.lang.String callFunctionWithResult(java.lang.String r1, java.util.LinkedHashMap<java.lang.String, java.lang.String> r2) {
            java.lang.String r0 = com.bianfeng.ymnsdk.feature.c.b(r1, r2)
            return r0
    }

    public static java.lang.String callFunctionWithResult(java.lang.String r1, java.lang.String... r2) {
            boolean r0 = com.bianfeng.ymnsdk.YmnStrategy.isJsonParamers(r2)
            if (r0 == 0) goto Lf
            java.util.LinkedHashMap r0 = com.bianfeng.ymnsdk.YmnStrategy.arrayParamersAsMap(r2)
            java.lang.String r0 = com.bianfeng.ymnsdk.feature.c.b(r1, r0)
            return r0
        Lf:
            java.lang.String r0 = com.bianfeng.ymnsdk.feature.c.b(r1, r2)
            return r0
    }

    public static void clearCallbacks() {
            java.util.Set<com.bianfeng.ymnsdk.feature.YmnCallback> r0 = com.bianfeng.ymnsdk.YmnSdkWrapper.callbacks
            r0.clear()
            return
    }

    public static void dispatchMessage(int r1, java.lang.String r2) {
            com.bianfeng.ymnsdk.feature.YmnCallback r0 = com.bianfeng.ymnsdk.YmnSdkWrapper.dispatcher
            r0.onCallBack(r1, r2)
            return
    }

    public static java.util.Set<com.bianfeng.ymnsdk.feature.YmnCallback> getCallbacks() {
            java.util.Set<com.bianfeng.ymnsdk.feature.YmnCallback> r0 = com.bianfeng.ymnsdk.YmnSdkWrapper.callbacks
            return r0
    }

    public static void initialize(android.app.Activity r2) {
            com.bianfeng.ymnsdk.YmnSdkWrapper.activity = r2
            java.lang.String r0 = "ymnsdk"
            java.lang.String r1 = "YmnSdkWrapper initialize: "
            android.util.Log.i(r0, r1)
            com.bianfeng.ymnsdk.util.YmnUtilsdk.setAgreePrivacy()
            com.bianfeng.ymnsdk.utilslib.UtilsSdk.initDeviceInfo(r2)
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            r0.initContext(r2)
            innerInit(r2)
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.init(r2)
            r0 = 1
            com.bianfeng.ymnsdk.YmnSdkWrapper.mIsCallInit = r0
            return
    }

    public static void innerInit(android.content.Context r2) {
            boolean r0 = com.bianfeng.ymnsdk.YmnSdkWrapper.inited
            if (r0 != 0) goto L3d
            r0 = 1
            com.bianfeng.ymnsdk.YmnSdkWrapper.inited = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "YmnSdkWrapper innerInit: inited=="
            r0.append(r1)
            boolean r1 = com.bianfeng.ymnsdk.YmnSdkWrapper.inited
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ymnsdk"
            android.util.Log.i(r1, r0)
            boolean r0 = r2 instanceof android.app.Activity
            if (r0 == 0) goto L28
            android.content.Context r0 = r2.getApplicationContext()
            goto L29
        L28:
            r0 = r2
        L29:
            com.bianfeng.ymnsdk.util.YmnUtilsdk.init(r0)
            com.bianfeng.platform.executor.AppConfig.init(r0)
            com.bianfeng.ymnsdk.feature.d.c(r0)
            com.bianfeng.ymnsdk.feature.YmnProperties.init(r0)
            com.bianfeng.ymnsdk.feature.e.d(r0)
            com.bianfeng.ymnsdk.feature.YmnCallback r1 = com.bianfeng.ymnsdk.YmnSdkWrapper.dispatcher
            com.bianfeng.ymnsdk.feature.c.a(r1)
        L3d:
            com.bianfeng.ymnsdk.feature.c.b(r2)
            return
    }

    public static boolean isSupportFunction(java.lang.String r1) {
            boolean r0 = com.bianfeng.ymnsdk.feature.c.a(r1)
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.Object> jsonToMap(java.lang.String r5) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L23
            r0.<init>(r5)     // Catch: org.json.JSONException -> L23
            java.util.Iterator r1 = r0.keys()     // Catch: org.json.JSONException -> L23
            java.util.HashMap r2 = new java.util.HashMap     // Catch: org.json.JSONException -> L23
            r2.<init>()     // Catch: org.json.JSONException -> L23
        Le:
            boolean r3 = r1.hasNext()     // Catch: org.json.JSONException -> L23
            if (r3 == 0) goto L22
            java.lang.Object r3 = r1.next()     // Catch: org.json.JSONException -> L23
            java.lang.String r3 = (java.lang.String) r3     // Catch: org.json.JSONException -> L23
            java.lang.Object r4 = r0.get(r3)     // Catch: org.json.JSONException -> L23
            r2.put(r3, r4)     // Catch: org.json.JSONException -> L23
            goto Le
        L22:
            return r2
        L23:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }

    public static void onActivityResult(int r0, int r1, android.content.Intent r2) {
            com.bianfeng.ymnsdk.feature.c.a(r0, r1, r2)
            return
    }

    public static void onCreate(android.app.Activity r0) {
            com.bianfeng.ymnsdk.YmnSdkWrapper.activity = r0
            com.bianfeng.ymnsdk.feature.c.a(r0)
            com.bianfeng.ymnsdk.hostaction.YmnURLManagerV2.init(r0)
            return
    }

    public static void onDestroy() {
            boolean r0 = com.bianfeng.ymnsdk.YmnSdkWrapper.mIsCallInit
            if (r0 == 0) goto Lb
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            r0.onDestroy()
        Lb:
            com.bianfeng.ymnsdk.feature.c.a()
            return
    }

    public static void onNewIntent(android.content.Intent r0) {
            com.bianfeng.ymnsdk.feature.c.a(r0)
            return
    }

    public static void onPause() {
            boolean r0 = com.bianfeng.ymnsdk.YmnSdkWrapper.mIsCallInit
            if (r0 == 0) goto Lb
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            r0.onPause()
        Lb:
            com.bianfeng.ymnsdk.feature.c.b()
            return
    }

    public static void onRequestPermissionsResult(int r1, java.lang.String[] r2, int[] r3) {
            com.bianfeng.ymnsdk.feature.c.a(r1, r2, r3)
            r0 = 1
            if (r1 == r0) goto L7
            goto Le
        L7:
            com.bianfeng.ymnsdk.YmnSdkWrapper$PermissionCallback r0 = com.bianfeng.ymnsdk.YmnSdkWrapper.permissionCallback
            if (r0 == 0) goto Le
            r0.onFinish()
        Le:
            return
    }

    public static void onRestart() {
            com.bianfeng.ymnsdk.feature.c.c()
            return
    }

    public static void onResume() {
            java.lang.String r0 = "YmnSdkWrapper onResume"
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            boolean r0 = com.bianfeng.ymnsdk.YmnSdkWrapper.mIsCallInit
            if (r0 == 0) goto L10
            com.bianfeng.ymnsdk.util.YmnDataFunUtils r0 = com.bianfeng.ymnsdk.util.YmnDataFunUtils.getInstance()
            r0.onResume()
        L10:
            com.bianfeng.ymnsdk.feature.c.d()
            return
    }

    public static void onStart() {
            com.bianfeng.ymnsdk.feature.c.e()
            return
    }

    public static void onStop() {
            com.bianfeng.ymnsdk.feature.c.f()
            return
    }

    public static void onWindowFocusChanged(boolean r0, android.app.Activity r1) {
            com.bianfeng.ymnsdk.feature.c.a(r0, r1)
            return
    }

    public static void registCallback(com.bianfeng.ymnsdk.feature.YmnCallback r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "registCallback的类名："
            r0.append(r1)
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.i(r0)
            java.util.Set<com.bianfeng.ymnsdk.feature.YmnCallback> r0 = com.bianfeng.ymnsdk.YmnSdkWrapper.callbacks
            r0.add(r2)
            return
    }

    public static void registPluginFeatureWrapper(com.bianfeng.ymnsdk.feature.YmnPluginWrapper r4) {
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r0 = com.bianfeng.ymnsdk.YmnSdkWrapper.pluginAutoFunctions
            if (r0 != 0) goto Lb
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bianfeng.ymnsdk.YmnSdkWrapper.pluginAutoFunctions = r0
        Lb:
            java.lang.String r0 = r4.getPluginName()
            java.util.Map<java.lang.String, com.bianfeng.ymnsdk.feature.YmnPluginWrapper> r1 = com.bianfeng.ymnsdk.YmnSdkWrapper.pluginAutoFunctions
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r3 = "_plugin_init"
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.put(r2, r4)
            return
    }

    public static void removeCallback(com.bianfeng.ymnsdk.feature.YmnCallback r1) {
            java.util.Set<com.bianfeng.ymnsdk.feature.YmnCallback> r0 = com.bianfeng.ymnsdk.YmnSdkWrapper.callbacks
            r0.remove(r1)
            return
    }

    public static void requestPermisssion(com.bianfeng.ymnsdk.YmnSdkWrapper.PermissionCallback r1, java.lang.String[] r2) {
            r0 = 1
            requestPermisssion(r1, r2, r0)
            return
    }

    public static void requestPermisssion(com.bianfeng.ymnsdk.YmnSdkWrapper.PermissionCallback r4, java.lang.String[] r5, int r6) {
            android.app.Activity r0 = com.bianfeng.ymnsdk.YmnSdkWrapper.activity
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            android.app.Activity r1 = com.bianfeng.ymnsdk.YmnSdkWrapper.activity
            java.lang.String r1 = r1.getPackageName()
            r2 = 0
            if (r5 == 0) goto L11
            r2 = r5
            goto L1a
        L11:
            r3 = 4096(0x1000, float:5.74E-42)
            android.content.pm.PackageInfo r3 = r0.getPackageInfo(r1, r3)     // Catch: java.lang.Exception -> L25
            java.lang.String[] r3 = r3.requestedPermissions     // Catch: java.lang.Exception -> L25
            r2 = r3
        L1a:
            setPermissionCallback(r4)     // Catch: java.lang.Exception -> L25
            if (r2 == 0) goto L24
            android.app.Activity r3 = com.bianfeng.ymnsdk.YmnSdkWrapper.activity     // Catch: java.lang.Exception -> L25
            r3.requestPermissions(r2, r6)     // Catch: java.lang.Exception -> L25
        L24:
            goto L29
        L25:
            r3 = move-exception
            r3.printStackTrace()
        L29:
            return
    }

    public static void runOnUiThread(java.lang.Runnable r1) {
            android.app.Activity r0 = com.bianfeng.ymnsdk.YmnSdkWrapper.activity
            if (r0 == 0) goto L11
            boolean r0 = r0.isFinishing()
            if (r0 == 0) goto Lb
            goto L11
        Lb:
            android.app.Activity r0 = com.bianfeng.ymnsdk.YmnSdkWrapper.activity
            r0.runOnUiThread(r1)
            goto L16
        L11:
            java.lang.String r0 = "activity is null or finishing, ignore target to ui thread"
            com.bianfeng.ymnsdk.util.Logger.e(r0)
        L16:
            return
    }

    public static void setCallbacks(java.util.Set<com.bianfeng.ymnsdk.feature.YmnCallback> r0) {
            com.bianfeng.ymnsdk.YmnSdkWrapper.callbacks = r0
            return
    }

    public static void setDebugMode(boolean r0) {
            com.bianfeng.ymnsdk.feature.c.a(r0)
            return
    }

    public static void setPermissionCallback(com.bianfeng.ymnsdk.YmnSdkWrapper.PermissionCallback r0) {
            com.bianfeng.ymnsdk.YmnSdkWrapper.permissionCallback = r0
            return
    }
}
