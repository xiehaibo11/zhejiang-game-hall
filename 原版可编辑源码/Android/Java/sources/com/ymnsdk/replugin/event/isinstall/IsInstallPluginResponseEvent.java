package com.ymnsdk.replugin.event.isinstall;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class IsInstallPluginResponseEvent extends SepperllitaEvent {
    public IsInstallPluginResponseEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF002");
        setBl("点击插件icon");
        setLabel("请求判断插件安装情况响应");
    }

    public IsInstallPluginResponseEvent(Activity activity, int i, String str, String str2, int i2, String str3, long j) {
        this(activity);
        setEid(i + "");
        setDur(j + "");
        setRv(str2);
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setRequest_code(i2 + "");
        custEvent.setRequest_msg(str3);
        custEvent.setRequest_duration(j + "");
        custEvent.setPlugin_id(str);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
