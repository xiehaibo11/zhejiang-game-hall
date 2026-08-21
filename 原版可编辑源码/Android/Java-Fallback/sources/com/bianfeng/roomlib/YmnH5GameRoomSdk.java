package com.bianfeng.roomlib;

public class YmnH5GameRoomSdk {
    private static com.bianfeng.roomlib.YmnH5GameRoomSdk ymnH5GameRoomSdk;
    private com.bianfeng.roomlib.YmnH5GameRoomCallback callback;

    private YmnH5GameRoomSdk() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.bianfeng.roomlib.YmnH5GameRoomSdk getInstance() {
            com.bianfeng.roomlib.YmnH5GameRoomSdk r0 = com.bianfeng.roomlib.YmnH5GameRoomSdk.ymnH5GameRoomSdk
            if (r0 != 0) goto L17
            java.lang.Class<com.bianfeng.roomlib.YmnH5GameRoomSdk> r0 = com.bianfeng.roomlib.YmnH5GameRoomSdk.class
            monitor-enter(r0)
            com.bianfeng.roomlib.YmnH5GameRoomSdk r1 = com.bianfeng.roomlib.YmnH5GameRoomSdk.ymnH5GameRoomSdk     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bianfeng.roomlib.YmnH5GameRoomSdk r1 = new com.bianfeng.roomlib.YmnH5GameRoomSdk     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bianfeng.roomlib.YmnH5GameRoomSdk.ymnH5GameRoomSdk = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bianfeng.roomlib.YmnH5GameRoomSdk r0 = com.bianfeng.roomlib.YmnH5GameRoomSdk.ymnH5GameRoomSdk
            return r0
    }

    public com.bianfeng.roomlib.YmnH5GameRoomCallback getCallback() {
            r2 = this;
            com.bianfeng.roomlib.YmnH5GameRoomCallback r0 = r2.callback
            if (r0 == 0) goto L5
            return r0
        L5:
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.String r1 = "YmnH5LoginCallBack 对象为null"
            r0.i(r1)
            r0 = 0
            return r0
    }

    public com.bianfeng.roomlib.YmnH5GameRoomSdk setCallback(com.bianfeng.roomlib.YmnH5GameRoomCallback r1) {
            r0 = this;
            r0.callback = r1
            return r0
    }

    public void startGameRoomWeb(android.app.Activity r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r0 = this;
            java.lang.String r4 = com.bianfeng.roomlib.utils.YmnH5GameRoomUtils.getData(r2, r7)
            com.bianfeng.utilslib.AppConfigUtils r5 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            r5.setExt(r7)
            com.bianfeng.utilslib.AppConfigUtils r5 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            r5.setCp(r2)
            com.bianfeng.roomlib.ui.GameRoomWebActivity.start(r1, r4, r2, r3)
            return
    }
}
