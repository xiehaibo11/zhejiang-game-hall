package com.bianfeng.loginlib;

public class YmnH5GameLoginSdk {
    private static com.bianfeng.loginlib.YmnH5GameLoginSdk ymnH5GameSdk;
    private android.app.Activity activity;
    private com.bianfeng.loginlib.YmnH5LoginCallBack loginCallBack;
    private java.util.TreeMap<java.lang.String, java.lang.String> map;

    private YmnH5GameLoginSdk() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.loginlib.YmnH5GameLoginSdk getInstance() {
            com.bianfeng.loginlib.YmnH5GameLoginSdk r0 = com.bianfeng.loginlib.YmnH5GameLoginSdk.ymnH5GameSdk
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.loginlib.YmnH5GameLoginSdk> r0 = com.bianfeng.loginlib.YmnH5GameLoginSdk.class
            monitor-enter(r0)
            com.bianfeng.loginlib.YmnH5GameLoginSdk r1 = com.bianfeng.loginlib.YmnH5GameLoginSdk.ymnH5GameSdk     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.loginlib.YmnH5GameLoginSdk r1 = new com.bianfeng.loginlib.YmnH5GameLoginSdk     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.loginlib.YmnH5GameLoginSdk.ymnH5GameSdk = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.loginlib.YmnH5GameLoginSdk r0 = com.bianfeng.loginlib.YmnH5GameLoginSdk.ymnH5GameSdk
            return r0
    }

    private void loginStart(java.util.TreeMap<java.lang.String, java.lang.String> r6) {
            r5 = this;
            com.bianfeng.thridlibrary.datafun.YmnDatafunUtils r0 = com.bianfeng.thridlibrary.ThridSdk.getYmnDatafun()
            java.lang.String r1 = "userid"
            java.lang.Object r1 = r6.get(r1)
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = "gameid"
            java.lang.Object r2 = r6.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            com.bianfeng.loginlib.utils.YmnLoginUtils r3 = com.bianfeng.loginlib.utils.YmnLoginUtils.getInstance()
            java.lang.String r4 = "ext"
            java.lang.Object r4 = r6.get(r4)
            java.lang.String r4 = (java.lang.String) r4
            java.lang.String r3 = r3.getCpFromExt(r4)
            r0.onClickWithSingle(r1, r2, r3)
            android.app.Activity r0 = r5.activity
            com.bianfeng.loginlib.ui.LoginRequest.start(r0, r6)
            return
    }

    public void endPay() {
            r1 = this;
            com.bianfeng.splitscreenwindow.SplitScreenSdk r0 = com.bianfeng.splitscreenwindow.SplitScreenSdk.getInstance()
            r0.endPay()
            return
    }

    public com.bianfeng.loginlib.YmnH5LoginCallBack getCallback() {
            r2 = this;
            com.bianfeng.loginlib.YmnH5LoginCallBack r0 = r2.loginCallBack
            if (r0 == 0) goto L5
            return r0
        L5:
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r1 = "YmnH5LoginCallBack 对象为null"
            r0.i(r1)
            r0 = 0
            return r0
    }

    public void onDestory() {
            r1 = this;
            com.bianfeng.splitscreenwindow.SplitScreenSdk r0 = com.bianfeng.splitscreenwindow.SplitScreenSdk.getInstance()
            r0.onDestory()
            return
    }

    public void onWindowFocusChanged(boolean r2, android.app.Activity r3) {
            r1 = this;
            com.bianfeng.splitscreenwindow.SplitScreenSdk r0 = com.bianfeng.splitscreenwindow.SplitScreenSdk.getInstance()
            r0.onWindowFocusChanged(r2, r3)
            return
    }

    public com.bianfeng.loginlib.YmnH5GameLoginSdk setCallback(com.bianfeng.loginlib.YmnH5LoginCallBack r1) {
            r0 = this;
            r0.loginCallBack = r1
            return r0
    }

    public void startGame(android.app.Activity r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, java.lang.String r9, java.lang.String r10) {
            r2 = this;
            r2.activity = r3
            java.util.TreeMap r0 = new java.util.TreeMap
            r0.<init>()
            r2.map = r0
            java.lang.String r1 = "gameid"
            r0.put(r1, r4)
            java.util.TreeMap<java.lang.String, java.lang.String> r4 = r2.map
            java.lang.String r0 = "userid"
            r4.put(r0, r5)
            java.util.TreeMap<java.lang.String, java.lang.String> r4 = r2.map
            java.lang.String r5 = "nickname"
            r4.put(r5, r6)
            java.util.TreeMap<java.lang.String, java.lang.String> r4 = r2.map
            java.lang.String r5 = "sex"
            r4.put(r5, r7)
            java.util.TreeMap<java.lang.String, java.lang.String> r4 = r2.map
            java.lang.String r5 = "avatar"
            r4.put(r5, r8)
            java.util.TreeMap<java.lang.String, java.lang.String> r4 = r2.map
            java.lang.String r5 = "ext"
            r4.put(r5, r10)
            com.bianfeng.utilslib.AppConfigUtils r4 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            r4.setExt(r10)
            com.bianfeng.utilslib.AppConfigUtils r4 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r5 = ""
            r4.setCp(r5)
            com.bianfeng.loginlib.utils.YmnLoginUtils r4 = com.bianfeng.loginlib.utils.YmnLoginUtils.getInstance()
            r4.setDirection(r10)
            com.bianfeng.splitscreenwindow.SplitScreenSdk r4 = com.bianfeng.splitscreenwindow.SplitScreenSdk.getInstance()
            com.bianfeng.loginlib.utils.YmnLoginUtils r5 = com.bianfeng.loginlib.utils.YmnLoginUtils.getInstance()
            com.bianfeng.splitscreenwindow.ShowType r5 = r5.getDirection()
            r4.init(r3, r9, r5)
            java.util.TreeMap<java.lang.String, java.lang.String> r3 = r2.map
            r2.loginStart(r3)
            return
    }

    public void startGame(java.lang.String r3, java.lang.String r4, int r5, int r6) {
            r2 = this;
            java.util.TreeMap<java.lang.String, java.lang.String> r0 = r2.map
            java.lang.String r1 = "gameid"
            r0.put(r1, r3)
            com.bianfeng.loginlib.utils.YmnLoginUtils r3 = com.bianfeng.loginlib.utils.YmnLoginUtils.getInstance()
            r3.setDirection(r5, r6)
            com.bianfeng.splitscreenwindow.SplitScreenSdk r3 = com.bianfeng.splitscreenwindow.SplitScreenSdk.getInstance()
            android.app.Activity r5 = r2.activity
            com.bianfeng.loginlib.utils.YmnLoginUtils r6 = com.bianfeng.loginlib.utils.YmnLoginUtils.getInstance()
            com.bianfeng.splitscreenwindow.ShowType r6 = r6.getDirection()
            r3.init(r5, r4, r6)
            java.util.TreeMap<java.lang.String, java.lang.String> r3 = r2.map
            r2.loginStart(r3)
            return
    }

    public void startRoom(android.app.Activity r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8) {
            r1 = this;
            java.util.TreeMap r0 = new java.util.TreeMap
            r0.<init>()
            r1.map = r0
            r1.activity = r2
            java.lang.String r2 = "userid"
            r0.put(r2, r4)
            java.util.TreeMap<java.lang.String, java.lang.String> r2 = r1.map
            java.lang.String r4 = "nickname"
            r2.put(r4, r5)
            java.util.TreeMap<java.lang.String, java.lang.String> r2 = r1.map
            java.lang.String r4 = "sex"
            r2.put(r4, r6)
            java.util.TreeMap<java.lang.String, java.lang.String> r2 = r1.map
            java.lang.String r4 = "avatar"
            r2.put(r4, r7)
            java.util.TreeMap<java.lang.String, java.lang.String> r2 = r1.map
            com.bianfeng.loginlib.utils.YmnLoginUtils r4 = com.bianfeng.loginlib.utils.YmnLoginUtils.getInstance()
            java.lang.String r3 = r4.getExt(r8, r3)
            java.lang.String r4 = "ext"
            r2.put(r4, r3)
            return
    }
}
