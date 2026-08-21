package com.ymnsdk.replugin.event.querypluginstatus;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class QueryPluginStatusRequestEvent extends SepperllitaEvent {
    public QueryPluginStatusRequestEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF002");
        setBl("点击插件icon");
        setEid("1042");
        setLabel("请求插件接口");
    }

    public QueryPluginStatusRequestEvent(Activity activity, String str) {
        this(activity);
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setPlugin_id(str);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
