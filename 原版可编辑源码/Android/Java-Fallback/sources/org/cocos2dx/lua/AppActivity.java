package org.cocos2dx.lua;

public class AppActivity extends org.cocos2dx.lib.Cocos2dxActivity {
    public static org.cocos2dx.lua.AppActivity mactivity;








    public AppActivity() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void buglyAddUserValue(java.lang.String r2) {
            android.content.Context r0 = getContext()
            org.cocos2dx.lua.AppActivity r0 = (org.cocos2dx.lua.AppActivity) r0
            org.cocos2dx.lua.AppActivity$5 r1 = new org.cocos2dx.lua.AppActivity$5
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    public static void buglyLog(java.lang.String r2) {
            android.content.Context r0 = getContext()
            org.cocos2dx.lua.AppActivity r0 = (org.cocos2dx.lua.AppActivity) r0
            org.cocos2dx.lua.AppActivity$6 r1 = new org.cocos2dx.lua.AppActivity$6
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    public static void buglyReportLuaException(java.lang.String r2) {
            android.content.Context r0 = getContext()
            org.cocos2dx.lua.AppActivity r0 = (org.cocos2dx.lua.AppActivity) r0
            org.cocos2dx.lua.AppActivity$7 r1 = new org.cocos2dx.lua.AppActivity$7
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    public static void buglySetTag(java.lang.String r2) {
            android.content.Context r0 = getContext()
            org.cocos2dx.lua.AppActivity r0 = (org.cocos2dx.lua.AppActivity) r0
            org.cocos2dx.lua.AppActivity$4 r1 = new org.cocos2dx.lua.AppActivity$4
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    public static void buglySetUserId(java.lang.String r2) {
            android.content.Context r0 = getContext()
            org.cocos2dx.lua.AppActivity r0 = (org.cocos2dx.lua.AppActivity) r0
            org.cocos2dx.lua.AppActivity$3 r1 = new org.cocos2dx.lua.AppActivity$3
            r1.<init>(r2)
            r0.runOnUiThread(r1)
            return
    }

    public static void hideSplash() {
            org.cocos2dx.lua.AppActivity r0 = org.cocos2dx.lua.AppActivity.mactivity
            com.bianfeng.gongxiang.screenlib.ScreenSdk.hideSplashView(r0)
            return
    }

    static void initSDKYMN() {
            org.cocos2dx.lua.AppActivity r0 = org.cocos2dx.lua.AppActivity.mactivity
            org.cocos2dx.lua.AppActivity$2 r1 = new org.cocos2dx.lua.AppActivity$2
            r1.<init>()
            r0.runOnUiThread(r1)
            return
    }

    public static java.lang.String readJsonFile(java.lang.String r3) {
            java.io.File r0 = new java.io.File
            r0.<init>(r3)
            boolean r3 = r0.exists()
            r1 = 0
            if (r3 != 0) goto Ld
            return r1
        Ld:
            java.io.FileInputStream r3 = new java.io.FileInputStream     // Catch: java.lang.Exception -> L26
            r3.<init>(r0)     // Catch: java.lang.Exception -> L26
            int r0 = r3.available()     // Catch: java.lang.Exception -> L26
            byte[] r0 = new byte[r0]     // Catch: java.lang.Exception -> L26
            r3.read(r0)     // Catch: java.lang.Exception -> L26
            r3.close()     // Catch: java.lang.Exception -> L26
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Exception -> L26
            java.lang.String r2 = "UTF-8"
            r3.<init>(r0, r2)     // Catch: java.lang.Exception -> L26
            return r3
        L26:
            r3 = move-exception
            r3.printStackTrace()
            return r1
    }

    public void checkScheme() {
            r9 = this;
            java.lang.String r0 = " "
            android.content.Intent r1 = r9.getIntent()
            java.lang.String r2 = r1.getScheme()
            android.net.Uri r3 = r1.getData()
            java.io.PrintStream r4 = java.lang.System.out
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "scheme:"
            r5.append(r6)
            r5.append(r2)
            java.lang.String r2 = r5.toString()
            r4.println(r2)
            if (r3 == 0) goto Lee
            java.lang.String r2 = "key"
            java.lang.String r2 = r3.getQueryParameter(r2)
            java.io.PrintStream r4 = java.lang.System.out
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "String:"
            r5.append(r6)
            r5.append(r2)
            java.lang.String r5 = r5.toString()
            r4.println(r5)
            r4 = 1601(0x641, float:2.243E-42)
            java.lang.String r3 = r3.getQuery()     // Catch: java.lang.Exception -> Lea
            org.cocos2dx.lua.YmnSupport.ymnCallBack(r4, r3)     // Catch: java.lang.Exception -> Lea
            java.lang.String r3 = "clipboard"
            java.lang.Object r3 = r9.getSystemService(r3)     // Catch: java.lang.Exception -> Lea
            android.content.ClipboardManager r3 = (android.content.ClipboardManager) r3     // Catch: java.lang.Exception -> Lea
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lea
            r4.<init>()     // Catch: java.lang.Exception -> Lea
            android.content.ClipData r5 = r3.getPrimaryClip()     // Catch: java.lang.Exception -> Lea
            android.content.ClipDescription r5 = r5.getDescription()     // Catch: java.lang.Exception -> Lea
            java.lang.CharSequence r5 = r5.getLabel()     // Catch: java.lang.Exception -> Lea
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> Lea
            r4.append(r5)     // Catch: java.lang.Exception -> Lea
            r4.append(r0)     // Catch: java.lang.Exception -> Lea
            android.content.ClipData r5 = r3.getPrimaryClip()     // Catch: java.lang.Exception -> Lea
            r6 = 0
            android.content.ClipData$Item r5 = r5.getItemAt(r6)     // Catch: java.lang.Exception -> Lea
            java.lang.CharSequence r5 = r5.getText()     // Catch: java.lang.Exception -> Lea
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> Lea
            r4.append(r5)     // Catch: java.lang.Exception -> Lea
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> Lea
            java.io.PrintStream r5 = java.lang.System.out     // Catch: java.lang.Exception -> Lea
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lea
            r7.<init>()     // Catch: java.lang.Exception -> Lea
            java.lang.String r8 = "String1:"
            r7.append(r8)     // Catch: java.lang.Exception -> Lea
            r7.append(r4)     // Catch: java.lang.Exception -> Lea
            java.lang.String r4 = r7.toString()     // Catch: java.lang.Exception -> Lea
            r5.println(r4)     // Catch: java.lang.Exception -> Lea
            java.lang.String r4 = ""
            android.content.ClipData r2 = android.content.ClipData.newPlainText(r4, r2)     // Catch: java.lang.Exception -> Lea
            r3.setPrimaryClip(r2)     // Catch: java.lang.Exception -> Lea
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lea
            r2.<init>()     // Catch: java.lang.Exception -> Lea
            android.content.ClipData r4 = r3.getPrimaryClip()     // Catch: java.lang.Exception -> Lea
            android.content.ClipDescription r4 = r4.getDescription()     // Catch: java.lang.Exception -> Lea
            java.lang.CharSequence r4 = r4.getLabel()     // Catch: java.lang.Exception -> Lea
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> Lea
            r2.append(r4)     // Catch: java.lang.Exception -> Lea
            r2.append(r0)     // Catch: java.lang.Exception -> Lea
            android.content.ClipData r0 = r3.getPrimaryClip()     // Catch: java.lang.Exception -> Lea
            android.content.ClipData$Item r0 = r0.getItemAt(r6)     // Catch: java.lang.Exception -> Lea
            java.lang.CharSequence r0 = r0.getText()     // Catch: java.lang.Exception -> Lea
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Exception -> Lea
            r2.append(r0)     // Catch: java.lang.Exception -> Lea
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> Lea
            java.io.PrintStream r2 = java.lang.System.out     // Catch: java.lang.Exception -> Lea
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lea
            r3.<init>()     // Catch: java.lang.Exception -> Lea
            java.lang.String r4 = "String2:"
            r3.append(r4)     // Catch: java.lang.Exception -> Lea
            r3.append(r0)     // Catch: java.lang.Exception -> Lea
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Exception -> Lea
            r2.println(r0)     // Catch: java.lang.Exception -> Lea
            r0 = 0
            r1.setData(r0)     // Catch: java.lang.Exception -> Lea
            goto Lee
        Lea:
            r0 = move-exception
            r0.printStackTrace()
        Lee:
            return
    }

    void invokeZJBWechatSetPayParams(int r3, java.lang.String r4, int r5, java.lang.String r6) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "wxAppId"
            r0.put(r1, r6)     // Catch: java.lang.Exception -> L31
            java.lang.String r6 = "appId"
            java.lang.String r3 = java.lang.Integer.toString(r3)     // Catch: java.lang.Exception -> L31
            r0.put(r6, r3)     // Catch: java.lang.Exception -> L31
            java.lang.String r3 = "packageId"
            java.lang.String r5 = java.lang.Integer.toString(r5)     // Catch: java.lang.Exception -> L31
            r0.put(r3, r5)     // Catch: java.lang.Exception -> L31
            java.lang.String r3 = "clientKey"
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L31
            java.lang.String r3 = "wechat_set_pay_params"
            r4 = 1
            java.lang.String[] r4 = new java.lang.String[r4]     // Catch: java.lang.Exception -> L31
            r5 = 0
            java.lang.String r6 = r0.toString()     // Catch: java.lang.Exception -> L31
            r4[r5] = r6     // Catch: java.lang.Exception -> L31
            com.bianfeng.ymnsdk.YmnSdk.callFunction(r3, r4)     // Catch: java.lang.Exception -> L31
            goto L35
        L31:
            r3 = move-exception
            r3.printStackTrace()
        L35:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r2) {
            r1 = this;
            r0 = 0
            super.setEnableVirtualButton(r0)
            super.onCreate(r2)
            com.bianfeng.ymnsdk.YmnSdk.onCreate(r1)
            org.cocos2dx.lua.AppActivity.mactivity = r1
            org.cocos2dx.lib.Cocos2dxGLSurfaceView r2 = r1.getGLSurfaceView()
            r2.setMultipleTouchEnabled(r0)
            boolean r2 = r1.isTaskRoot()
            if (r2 != 0) goto L1a
            return
        L1a:
            com.bianfeng.libuniverse.Universe.onCreate(r1)
            org.cocos2dx.lua.XhSupport.setActivity(r1)
            com.ymnsdk.replugin.RepluginSdkJavaBridging.onCreate(r1)
            org.cocos2dx.lua.AppActivity$1 r2 = new org.cocos2dx.lua.AppActivity$1
            r2.<init>(r1)
            com.ymnsdk.replugin.RepluginSdkJavaBridging.addRePluginLister(r2)
            return
    }

    @Override
    protected void onDestroy() {
            r0 = this;
            super.onDestroy()
            com.ymnsdk.replugin.RepluginSdkJavaBridging.onDestory()
            return
    }

    @Override
    protected void onNewIntent(android.content.Intent r3) {
            r2 = this;
            super.onNewIntent(r3)
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.String r1 = "_debug onNewIntent"
            r0.println(r1)
            if (r3 == 0) goto L16
            android.net.Uri r0 = r3.getData()
            if (r0 == 0) goto L16
            r2.checkScheme()
            goto L27
        L16:
            if (r3 != 0) goto L20
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.String r1 = "_debug onNewIntent intent is null"
            r0.println(r1)
            goto L27
        L20:
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.String r1 = "_debug onNewIntent intent.getData is null"
            r0.println(r1)
        L27:
            org.cocos2dx.lua.YmnSupport.onNewIntent(r3)
            com.ymnsdk.replugin.RepluginSdkJavaBridging.onNewIntent(r3)
            return
    }

    @Override
    protected void onPause() {
            r0 = this;
            super.onPause()
            org.cocos2dx.lua.YmnSupport.onPause()
            return
    }

    @Override
    public void onRequestPermissionsResult(int r1, java.lang.String[] r2, int[] r3) {
            r0 = this;
            super.onRequestPermissionsResult(r1, r2, r3)
            com.bianfeng.ymnsdk.YmnSdk.onRequestPermissionsResult(r1, r2, r3)
            return
    }

    @Override
    protected void onResume() {
            r2 = this;
            super.onResume()
            r2.checkScheme()
            org.cocos2dx.lua.YmnSupport.onResume()
            java.lang.String r0 = "onResume:"
            java.lang.String r1 = "Activity_onResume触发"
            android.util.Log.w(r0, r1)
            return
    }

    @Override
    protected void onStart() {
            r0 = this;
            super.onStart()
            org.cocos2dx.lua.YmnSupport.onStart()
            return
    }

    @Override
    protected void onStop() {
            r0 = this;
            super.onStop()
            org.cocos2dx.lua.YmnSupport.onStop()
            return
    }
}
