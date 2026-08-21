package com.ymnsdk.replugin.event.uninstallplugin;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class UnInstallPluginRequestEvent extends SepperllitaEvent {
    public UnInstallPluginRequestEvent(Activity activity, String str) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF004");
        setBl("卸载");
        setLabel("请求卸载插件");
        setEid("1042");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setPlugin_id(str);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
