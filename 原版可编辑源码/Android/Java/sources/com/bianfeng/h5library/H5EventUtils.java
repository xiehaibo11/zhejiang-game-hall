package com.bianfeng.h5library;

import android.app.Activity;
import com.bianfeng.datafunsdk.PostDatalib;
import com.bianfeng.datafunsdk.bean.DataFunBean;
import com.bianfeng.datafunsdk.net.ResponseData;
import com.bianfeng.h5library.utils.H5libLogger;
import com.bianfeng.ymnsdk.utilslib.UtilsSdk;

public class H5EventUtils {
    private static volatile H5EventUtils event;
    private String channelName;
    private String eventUrl = "https://bfas.bianfeng.com/bfrd/json?charset=utf-8";
    private ResponseData responseData = new ResponseData("result", "", 0);
    private String userid = "";

    public String getVersion() {
        return "1.1.0";
    }

    public void setEventUrl(String str) {
        this.eventUrl = str;
    }

    private H5EventUtils() {
    }

    public static H5EventUtils getInstance() {
        if (event == null) {
            synchronized (H5EventUtils.class) {
                if (event == null) {
                    event = new H5EventUtils();
                }
            }
        }
        return event;
    }

    public void init(Activity activity, String str) {
        UtilsSdk.initContext(activity);
        PostDatalib.getInstance().init(activity);
        this.channelName = str;
    }

    public void setChannelName(String str) {
        this.channelName = str;
    }

    public void postH5Login(String str, String str2, String str3, String str4, String str5) {
        this.userid = str;
        postEvent(new H5LoginEventUtils(str2, str3, str4, this.channelName, this.userid, str5).toString());
    }

    public void postH5Reg(String str, String str2, String str3, String str4) {
        this.userid = str;
        postEvent(new H5RegisterEvent(str4, str3, str2, this.channelName, str).toString());
    }

    public void postH5RoomClick(String str, String str2) {
        this.userid = str;
        postEvent(new H5ClickEvent(str2, this.channelName, "大厅", "810006", this.userid, "", "", "").toString());
    }

    public void postH5GameButtonClick(String str, String str2) {
        this.userid = str;
        postEvent(new H5ClickEvent(str2, this.channelName, "单款", "810007", str, "", "", "").toString());
    }

    public void postGameEvent(String str) {
        postEvent(new H5ClickEvent(str, this.channelName, "客户端游戏上抛", "810005", "", "", "", "").toString());
    }

    public void postH5ClickEvent(String str, String str2, String str3, String str4, String str5) {
        postEvent(new H5ClickEvent(str5, this.channelName, "自定义事件", str, this.userid, str2, str3, str4).toString());
    }

    public void postH5ClickEvent(String str, String str2, String str3, String str4, String str5, String str6) {
        postEvent(new H5ClickEvent(str6, this.channelName, str3, str, this.userid, str2, str4, str5).toString());
    }

    private void postEvent(String str) {
        try {
            PostDatalib.getInstance().postByteData(new DataFunBean(this.eventUrl, str, (String) null, (String) null, (String) null, this.responseData.toString()));
        } catch (Exception e) {
            H5libLogger.i("调postByteData出错" + e.getMessage());
        }
    }
}
