package com.ymnsdk.replugin.event.installplugin;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.qihoo360.replugin.utils.RepluginLogUtils;
import com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;
import com.ymnsdk.replugin.util.LogUtils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class InstallPluginResponseEvent extends SepperllitaEvent {
    public InstallPluginResponseEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF002");
        setBl("点击插件icon");
        setLabel("请求安装插件响应");
    }

    public InstallPluginResponseEvent(Activity activity, int i, String str, String str2, int i2, String str3, long j) {
        String str4;
        this(activity);
        setEid(i + "");
        setDur(j + "");
        setRv(str2);
        if (i == 1045 && LogUtils.isLogOpen()) {
            str4 = "|" + GsonUtils.getInstance().toJson(RepluginLogUtils.getInstance().readLog());
        } else {
            str4 = "";
        }
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setRequest_code(i2 + "");
        custEvent.setRequest_msg(str3 + str4);
        custEvent.setRequest_duration(j + "");
        custEvent.setPlugin_id(str);
        setCust(GsonUtils.getInstance().toJson(custEvent));
        RepluginSharedPreferencesUtils.getInstance().setPluginLog("false");
    }

    public InstallPluginResponseEvent(Activity activity, int i, String str, String str2, int i2, String str3, long j, int i3) {
        this(activity);
        setEid(i + "");
        setDur(j + "");
        setRv(str2);
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setRequest_code(i2 + "");
        custEvent.setRequest_msg(str3);
        custEvent.setRequest_duration(j + "");
        custEvent.setPlugin_id(str);
        custEvent.setRestart_num(i3 + "");
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
