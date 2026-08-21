package com.bianfeng.thridlibrary.datafun;

public class YmnDatafunUtils {
    private static int event_h5 = 10002;
    public static int event_h5_finping = 810008;
    public static int event_h5_finping_close = 810010;
    public static int event_h5_quanping = 810009;
    private static int event_room = 10000;
    private static int event_single_game = 10003;
    private static int event_start_game = 10006;
    private static com.bianfeng.thridlibrary.datafun.YmnDatafunUtils ymnDatafunUtils;
    private java.lang.String area_name;
    private java.lang.String gameid;
    private boolean isInit;
    private java.lang.String is_user_new;
    private java.lang.String user_name;
    private java.lang.String userid;

    static {
            return
    }

    private YmnDatafunUtils() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.area_name = r0
            r1.user_name = r0
            r1.is_user_new = r0
            return
    }

    public static com.bianfeng.thridlibrary.datafun.YmnDatafunUtils getInstance() {
            com.bianfeng.thridlibrary.datafun.YmnDatafunUtils r0 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.ymnDatafunUtils
            if (r0 != 0) goto Lb
            com.bianfeng.thridlibrary.datafun.YmnDatafunUtils r0 = new com.bianfeng.thridlibrary.datafun.YmnDatafunUtils
            r0.<init>()
            com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.ymnDatafunUtils = r0
        Lb:
            com.bianfeng.thridlibrary.datafun.YmnDatafunUtils r0 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.ymnDatafunUtils
            return r0
    }

    private void onH5Event(java.lang.String r8, java.lang.String r9) {
            r7 = this;
            com.bianfeng.thridlibrary.GsonUtils r0 = com.bianfeng.thridlibrary.ThridSdk.getGson()     // Catch: java.lang.Exception -> L7f
            java.lang.Class<com.bianfeng.thridlibrary.datafun.DatafunEntity> r1 = com.bianfeng.thridlibrary.datafun.DatafunEntity.class
            java.lang.Object r8 = r0.fromJson(r8, r1)     // Catch: java.lang.Exception -> L7f
            com.bianfeng.thridlibrary.datafun.DatafunEntity r8 = (com.bianfeng.thridlibrary.datafun.DatafunEntity) r8     // Catch: java.lang.Exception -> L7f
            int r0 = r8.getEvent_id()     // Catch: java.lang.Exception -> L7f
            r1 = 4
            if (r0 != r1) goto L3c
            java.lang.String r0 = r8.getArea_name()     // Catch: java.lang.Exception -> L7f
            r7.area_name = r0     // Catch: java.lang.Exception -> L7f
            java.lang.String r0 = r8.getIs_user_new()     // Catch: java.lang.Exception -> L7f
            r7.is_user_new = r0     // Catch: java.lang.Exception -> L7f
            java.lang.String r0 = r8.getUser_name()     // Catch: java.lang.Exception -> L7f
            r7.user_name = r0     // Catch: java.lang.Exception -> L7f
            com.bianfeng.h5library.H5EventUtils r1 = com.bianfeng.h5library.H5EventUtils.getInstance()     // Catch: java.lang.Exception -> L7f
            java.lang.String r2 = r7.userid     // Catch: java.lang.Exception -> L7f
            java.lang.String r3 = r8.getArea_name()     // Catch: java.lang.Exception -> L7f
            java.lang.String r4 = r8.getIs_user_new()     // Catch: java.lang.Exception -> L7f
            java.lang.String r5 = r8.getUser_name()     // Catch: java.lang.Exception -> L7f
            r6 = r9
            r1.postH5Login(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L7f
            goto L9c
        L3c:
            int r0 = r8.getEvent_id()     // Catch: java.lang.Exception -> L7f
            r1 = 6
            if (r0 != r1) goto L55
            com.bianfeng.h5library.H5EventUtils r0 = com.bianfeng.h5library.H5EventUtils.getInstance()     // Catch: java.lang.Exception -> L7f
            java.lang.String r1 = r7.userid     // Catch: java.lang.Exception -> L7f
            java.lang.String r2 = r8.getArea_name()     // Catch: java.lang.Exception -> L7f
            java.lang.String r8 = r8.getUser_name()     // Catch: java.lang.Exception -> L7f
            r0.postH5Reg(r1, r2, r8, r9)     // Catch: java.lang.Exception -> L7f
            goto L9c
        L55:
            com.bianfeng.h5library.H5EventUtils r0 = com.bianfeng.h5library.H5EventUtils.getInstance()     // Catch: java.lang.Exception -> L7f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7f
            r1.<init>()     // Catch: java.lang.Exception -> L7f
            int r2 = r8.getEvent_id()     // Catch: java.lang.Exception -> L7f
            r1.append(r2)     // Catch: java.lang.Exception -> L7f
            java.lang.String r2 = ""
            r1.append(r2)     // Catch: java.lang.Exception -> L7f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L7f
            java.lang.String r2 = r8.getArea_name()     // Catch: java.lang.Exception -> L7f
            java.lang.String r3 = r8.getUser_name()     // Catch: java.lang.Exception -> L7f
            java.lang.String r4 = r8.getIs_user_new()     // Catch: java.lang.Exception -> L7f
            r5 = r9
            r0.postH5ClickEvent(r1, r2, r3, r4, r5)     // Catch: java.lang.Exception -> L7f
            goto L9c
        L7f:
            r8 = move-exception
            com.bianfeng.utilslib.Logger r9 = com.bianfeng.utilslib.Logger.getInstance()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "上抛H5数据"
            r0.append(r1)
            java.lang.String r8 = r8.getMessage()
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            r9.i(r8)
        L9c:
            return
    }

    private void onH5FenpingEvent(int r8, java.lang.String r9) {
            r7 = this;
            com.bianfeng.h5library.H5EventUtils r0 = com.bianfeng.h5library.H5EventUtils.getInstance()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r8)
            java.lang.String r8 = ""
            r1.append(r8)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = r7.area_name
            java.lang.String r4 = r7.user_name
            java.lang.String r5 = r7.is_user_new
            java.lang.String r6 = r7.gameid
            r3 = r9
            r0.postH5ClickEvent(r1, r2, r3, r4, r5, r6)
            return
    }

    public void onClickWithH5(java.lang.String r3) {
            r2 = this;
            int r0 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.event_h5
            java.lang.String r1 = r2.gameid
            r2.postH5Event(r0, r3, r1)
            return
    }

    public void onClickWithH5Fenping(int r4) {
            r3 = this;
            com.bianfeng.utilslib.Logger r0 = com.bianfeng.utilslib.UtilsSdk.getLogger()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onClickWithH5Fenping"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.i(r1)
            java.lang.String r0 = r3.gameid
            java.lang.String r1 = ""
            r3.postH5Event(r4, r1, r0)
            return
    }

    public void onClickWithRoom(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            r1.userid = r2
            com.bianfeng.h5library.H5EventUtils r2 = com.bianfeng.h5library.H5EventUtils.getInstance()
            r2.setChannelName(r3)
            int r2 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.event_room
            com.bianfeng.utilslib.AppConfigUtils r3 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r3 = r3.getWebPayAppId()
            java.lang.String r0 = "大厅触发"
            r1.postH5Event(r2, r0, r3)
            return
    }

    public void onClickWithSingle(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            r0 = this;
            r0.userid = r1
            r0.gameid = r2
            com.bianfeng.h5library.H5EventUtils r1 = com.bianfeng.h5library.H5EventUtils.getInstance()
            r1.setChannelName(r3)
            int r1 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.event_single_game
            java.lang.String r3 = "单款游戏"
            r0.postH5Event(r1, r3, r2)
            return
    }

    public void onDestory() {
            r1 = this;
            com.bianfeng.datafunsdk.PostDatalib r0 = com.bianfeng.datafunsdk.PostDatalib.getInstance()
            r0.cancelTimer()
            return
    }

    public void onInit(android.app.Activity r3) {
            r2 = this;
            boolean r0 = r2.isInit
            if (r0 != 0) goto L16
            r0 = 1
            r2.isInit = r0
            com.bianfeng.h5library.H5EventUtils r0 = com.bianfeng.h5library.H5EventUtils.getInstance()
            com.bianfeng.utilslib.AppConfigUtils r1 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r1 = r1.getWebPayAppId()
            r0.init(r3, r1)
        L16:
            return
    }

    public void onResume() {
            r3 = this;
            int r0 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.event_start_game
            com.bianfeng.utilslib.AppConfigUtils r1 = com.bianfeng.utilslib.UtilsSdk.getAppConfig()
            java.lang.String r1 = r1.getWebPayAppId()
            java.lang.String r2 = "客户端游戏"
            r3.postH5Event(r0, r2, r1)
            return
    }

    public void postH5Event(int r2, java.lang.String r3, java.lang.String r4) {
            r1 = this;
            int r0 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.event_single_game
            if (r2 != r0) goto Le
            com.bianfeng.h5library.H5EventUtils r2 = com.bianfeng.h5library.H5EventUtils.getInstance()
            java.lang.String r3 = r1.userid
            r2.postH5GameButtonClick(r3, r4)
            goto L57
        Le:
            int r0 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.event_room
            if (r2 != r0) goto L1c
            com.bianfeng.h5library.H5EventUtils r2 = com.bianfeng.h5library.H5EventUtils.getInstance()
            java.lang.String r3 = r1.userid
            r2.postH5RoomClick(r3, r4)
            goto L57
        L1c:
            int r0 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.event_start_game
            if (r2 != r0) goto L28
            com.bianfeng.h5library.H5EventUtils r2 = com.bianfeng.h5library.H5EventUtils.getInstance()
            r2.postGameEvent(r4)
            goto L57
        L28:
            int r0 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.event_h5_finping
            if (r2 != r0) goto L32
            java.lang.String r3 = "开启分屏"
            r1.onH5FenpingEvent(r2, r3)
            goto L57
        L32:
            int r0 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.event_h5_quanping
            if (r2 != r0) goto L3c
            java.lang.String r3 = "恢复全屏"
            r1.onH5FenpingEvent(r2, r3)
            goto L57
        L3c:
            int r0 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.event_h5_finping_close
            if (r2 != r0) goto L46
            java.lang.String r3 = "退出分屏"
            r1.onH5FenpingEvent(r2, r3)
            goto L57
        L46:
            int r0 = com.bianfeng.thridlibrary.datafun.YmnDatafunUtils.event_h5
            if (r2 != r0) goto L4e
            r1.onH5Event(r3, r4)
            goto L57
        L4e:
            com.bianfeng.utilslib.Logger r2 = com.bianfeng.utilslib.Logger.getInstance()
            java.lang.String r3 = " 事件上抛，该事件不属于 "
            r2.i(r3)
        L57:
            return
    }
}
