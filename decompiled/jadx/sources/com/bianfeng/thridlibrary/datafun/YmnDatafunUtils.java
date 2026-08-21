package com.bianfeng.thridlibrary.datafun;

import android.app.Activity;
import com.bianfeng.datafunsdk.PostDatalib;
import com.bianfeng.h5library.H5EventUtils;
import com.bianfeng.thridlibrary.ThridSdk;
import com.bianfeng.utilslib.Logger;
import com.bianfeng.utilslib.UtilsSdk;

/* JADX INFO: loaded from: classes.dex */
public class YmnDatafunUtils {
    private static int event_h5 = 10002;
    public static int event_h5_finping = 810008;
    public static int event_h5_finping_close = 810010;
    public static int event_h5_quanping = 810009;
    private static int event_room = 10000;
    private static int event_single_game = 10003;
    private static int event_start_game = 10006;
    private static YmnDatafunUtils ymnDatafunUtils;
    private String gameid;
    private boolean isInit;
    private String userid;
    private String area_name = "";
    private String user_name = "";
    private String is_user_new = "";

    private YmnDatafunUtils() {
    }

    public static YmnDatafunUtils getInstance() {
        if (ymnDatafunUtils == null) {
            ymnDatafunUtils = new YmnDatafunUtils();
        }
        return ymnDatafunUtils;
    }

    public void onResume() {
        postH5Event(event_start_game, "客户端游戏", UtilsSdk.getAppConfig().getWebPayAppId());
    }

    public void onDestory() {
        PostDatalib.getInstance().cancelTimer();
    }

    public void onInit(Activity activity) {
        if (this.isInit) {
            return;
        }
        this.isInit = true;
        H5EventUtils.getInstance().init(activity, UtilsSdk.getAppConfig().getWebPayAppId());
    }

    public void postH5Event(int i, String str, String str2) {
        if (i == event_single_game) {
            H5EventUtils.getInstance().postH5GameButtonClick(this.userid, str2);
            return;
        }
        if (i == event_room) {
            H5EventUtils.getInstance().postH5RoomClick(this.userid, str2);
            return;
        }
        if (i == event_start_game) {
            H5EventUtils.getInstance().postGameEvent(str2);
            return;
        }
        if (i == event_h5_finping) {
            onH5FenpingEvent(i, "开启分屏");
            return;
        }
        if (i == event_h5_quanping) {
            onH5FenpingEvent(i, "恢复全屏");
            return;
        }
        if (i == event_h5_finping_close) {
            onH5FenpingEvent(i, "退出分屏");
        } else if (i == event_h5) {
            onH5Event(str, str2);
        } else {
            Logger.getInstance().i(" 事件上抛，该事件不属于 ");
        }
    }

    private void onH5FenpingEvent(int i, String str) {
        H5EventUtils.getInstance().postH5ClickEvent(i + "", this.area_name, str, this.user_name, this.is_user_new, this.gameid);
    }

    private void onH5Event(String str, String str2) {
        try {
            DatafunEntity datafunEntity = (DatafunEntity) ThridSdk.getGson().fromJson(str, DatafunEntity.class);
            if (datafunEntity.getEvent_id() == 4) {
                this.area_name = datafunEntity.getArea_name();
                this.is_user_new = datafunEntity.getIs_user_new();
                this.user_name = datafunEntity.getUser_name();
                H5EventUtils.getInstance().postH5Login(this.userid, datafunEntity.getArea_name(), datafunEntity.getIs_user_new(), datafunEntity.getUser_name(), str2);
            } else if (datafunEntity.getEvent_id() == 6) {
                H5EventUtils.getInstance().postH5Reg(this.userid, datafunEntity.getArea_name(), datafunEntity.getUser_name(), str2);
            } else {
                H5EventUtils.getInstance().postH5ClickEvent(datafunEntity.getEvent_id() + "", datafunEntity.getArea_name(), datafunEntity.getUser_name(), datafunEntity.getIs_user_new(), str2);
            }
        } catch (Exception e) {
            Logger.getInstance().i("上抛H5数据" + e.getMessage());
        }
    }

    public void onClickWithSingle(String str, String str2, String str3) {
        this.userid = str;
        this.gameid = str2;
        H5EventUtils.getInstance().setChannelName(str3);
        postH5Event(event_single_game, "单款游戏", str2);
    }

    public void onClickWithRoom(String str, String str2) {
        this.userid = str;
        H5EventUtils.getInstance().setChannelName(str2);
        postH5Event(event_room, "大厅触发", UtilsSdk.getAppConfig().getWebPayAppId());
    }

    public void onClickWithH5(String str) {
        postH5Event(event_h5, str, this.gameid);
    }

    public void onClickWithH5Fenping(int i) {
        UtilsSdk.getLogger().i("onClickWithH5Fenping" + i);
        postH5Event(i, "", this.gameid);
    }
}
