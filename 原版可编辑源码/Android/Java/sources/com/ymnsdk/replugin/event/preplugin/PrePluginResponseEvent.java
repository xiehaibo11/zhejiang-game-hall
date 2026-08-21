package com.ymnsdk.replugin.event.preplugin;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PrePluginResponseEvent extends SepperllitaEvent {
    public PrePluginResponseEvent(Activity activity, int i, String str, int i2, String str2, long j) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF003");
        setBl("预加载");
        setLabel("请求预加载插件响应");
        setDur(j + "");
        setEid(i + "");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setPlugin_id(str);
        custEvent.setRequest_code(i2 + "");
        custEvent.setRequest_msg(str2);
        custEvent.setRequest_duration(j + "");
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
