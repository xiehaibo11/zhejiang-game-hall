package com.bianfeng.splitscreenlib;

public class YmnH5GameSdk {
    private static com.bianfeng.splitscreenlib.YmnH5GameSdk ymnH5GameSdk;
    private android.app.Activity activity;
    private com.bianfeng.splitscreenlib.YmnH5Callback callback;
    private boolean isInitPostEvent;

    private YmnH5GameSdk() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.isInitPostEvent = r0
            return
    }

    public static com.bianfeng.splitscreenlib.YmnH5GameSdk getInstance() {
            com.bianfeng.splitscreenlib.YmnH5GameSdk r0 = com.bianfeng.splitscreenlib.YmnH5GameSdk.ymnH5GameSdk
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.splitscreenlib.YmnH5GameSdk> r0 = com.bianfeng.splitscreenlib.YmnH5GameSdk.class
            monitor-enter(r0)
            com.bianfeng.splitscreenlib.YmnH5GameSdk r1 = com.bianfeng.splitscreenlib.YmnH5GameSdk.ymnH5GameSdk     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.splitscreenlib.YmnH5GameSdk r1 = new com.bianfeng.splitscreenlib.YmnH5GameSdk     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.splitscreenlib.YmnH5GameSdk.ymnH5GameSdk = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.splitscreenlib.YmnH5GameSdk r0 = com.bianfeng.splitscreenlib.YmnH5GameSdk.ymnH5GameSdk
            return r0
    }

    private void initPostEvent(android.app.Activity r3) {
            r2 = this;
            boolean r0 = r2.isInitPostEvent
            if (r0 != 0) goto L22
            r2.activity = r3
            r0 = 1
            r2.isInitPostEvent = r0
            com.bianfeng.utilslib.UtilsSdk.init(r3)
            com.bianfeng.thridlibrary.ThridSdk.init(r3)
            com.bianfeng.roomlib.YmnH5GameRoomSdk r0 = com.bianfeng.roomlib.YmnH5GameRoomSdk.getInstance()
            com.bianfeng.splitscreenlib.gameroom.YmnGoomCallback r1 = new com.bianfeng.splitscreenlib.gameroom.YmnGoomCallback
            r1.<init>()
            r0.setCallback(r1)
            com.bianfeng.paylib.YmnWebpaySdk r0 = com.bianfeng.paylib.YmnWebpaySdk.getInstance()
            r0.init(r3)
        L22:
            return
    }

    public void enterGame() {
            r3 = this;
            com.bianfeng.utilslib.SharedPreferencesUtils r0 = com.bianfeng.utilslib.UtilsSdk.getSharedPreferences()
            java.lang.String r1 = "enterGame"
            r2 = 1
            r0.putBoolean(r1, r2)
            return
    }

    public void finishGame() {
            r3 = this;
            com.bianfeng.utilslib.SharedPreferencesUtils r0 = com.bianfeng.utilslib.UtilsSdk.getSharedPreferences()
            java.lang.String r1 = "enterGame"
            r2 = 0
            r0.putBoolean(r1, r2)
            return
    }

    public com.bianfeng.splitscreenlib.YmnH5Callback getCallback() {
            r1 = this;
            com.bianfeng.splitscreenlib.YmnH5Callback r0 = r1.callback
            return r0
    }

    public void onCreate(android.app.Activity r1) {
            r0 = this;
            r0.initPostEvent(r1)
            com.bianfeng.utilslib.UtilsSdk.onCreate(r1)
            return
    }

    public void onDestory() {
            r3 = this;
            com.bianfeng.thridlibrary.ThridSdk.onDestory()
            com.bianfeng.loginlib.YmnH5GameLoginSdk r0 = com.bianfeng.loginlib.YmnH5GameLoginSdk.getInstance()
            r0.onDestory()
            com.bianfeng.utilslib.SharedPreferencesUtils r0 = com.bianfeng.utilslib.UtilsSdk.getSharedPreferences()
            java.lang.String r1 = "enterGame"
            r2 = 0
            r0.putBoolean(r1, r2)
            return
    }

    public void onResume() {
            r0 = this;
            com.bianfeng.thridlibrary.ThridSdk.onResume()
            return
    }

    public void onWindowFocusChanged(boolean r2, android.app.Activity r3) {
            r1 = this;
            r1.activity = r3
            com.bianfeng.loginlib.YmnH5GameLoginSdk r0 = com.bianfeng.loginlib.YmnH5GameLoginSdk.getInstance()
            r0.onWindowFocusChanged(r2, r3)
            com.bianfeng.utilslib.UtilsSdk.onWindowFocusChanged(r2, r3)
            return
    }

    public void startGameLogin(java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, java.lang.String r17, java.lang.String r18, java.lang.String r19, com.bianfeng.splitscreenlib.YmnH5Callback r20) {
            r12 = this;
            r0 = r12
            r1 = r20
            r0.callback = r1
            com.bianfeng.loginlib.YmnH5GameLoginSdk r1 = com.bianfeng.loginlib.YmnH5GameLoginSdk.getInstance()
            com.bianfeng.splitscreenlib.login.YmnLoginCallBack r2 = new com.bianfeng.splitscreenlib.login.YmnLoginCallBack
            r2.<init>()
            com.bianfeng.loginlib.YmnH5GameLoginSdk r3 = r1.setCallback(r2)
            android.app.Activity r4 = r0.activity
            r5 = r13
            r6 = r14
            r7 = r15
            r8 = r16
            r9 = r17
            r10 = r18
            r11 = r19
            r3.startGame(r4, r5, r6, r7, r8, r9, r10, r11)
            return
    }

    public void startGameRoomWeb(java.lang.String r13, java.lang.String r14, java.lang.String r15, java.lang.String r16, java.lang.String r17, java.lang.String r18, com.bianfeng.splitscreenlib.YmnH5Callback r19) {
            r12 = this;
            r0 = r12
            android.app.Activity r1 = r0.activity
            com.bianfeng.splitscreenlib.utils.YmnH5GameUtils.checkOnCreat(r1)
            r1 = r19
            r0.callback = r1
            com.bianfeng.thridlibrary.datafun.YmnDatafunUtils r1 = com.bianfeng.thridlibrary.ThridSdk.getYmnDatafun()
            r10 = r13
            r11 = r14
            r1.onClickWithRoom(r14, r13)
            com.bianfeng.loginlib.YmnH5GameLoginSdk r1 = com.bianfeng.loginlib.YmnH5GameLoginSdk.getInstance()
            com.bianfeng.splitscreenlib.login.YmnLoginCallBack r2 = new com.bianfeng.splitscreenlib.login.YmnLoginCallBack
            r2.<init>()
            com.bianfeng.loginlib.YmnH5GameLoginSdk r2 = r1.setCallback(r2)
            android.app.Activity r3 = r0.activity
            r4 = r13
            r5 = r14
            r6 = r15
            r7 = r16
            r8 = r17
            r9 = r18
            r2.startRoom(r3, r4, r5, r6, r7, r8, r9)
            com.bianfeng.roomlib.YmnH5GameRoomSdk r2 = com.bianfeng.roomlib.YmnH5GameRoomSdk.getInstance()
            android.app.Activity r3 = r0.activity
            r2.startGameRoomWeb(r3, r4, r5, r6, r7, r8, r9)
            return
    }
}
