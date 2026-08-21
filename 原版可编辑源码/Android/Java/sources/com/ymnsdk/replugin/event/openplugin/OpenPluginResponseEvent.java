package com.ymnsdk.replugin.event.openplugin;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class OpenPluginResponseEvent extends SepperllitaEvent {
    public OpenPluginResponseEvent(Activity activity, String str, int i, String str2) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF010");
        setBl("模式流程");
        setLabel("打开插件响应");
        setEid(i + "");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setPlugin_id(str);
        custEvent.setRequest_msg(str2);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
