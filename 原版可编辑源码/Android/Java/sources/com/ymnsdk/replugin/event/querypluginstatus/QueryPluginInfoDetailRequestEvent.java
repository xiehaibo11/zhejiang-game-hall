package com.ymnsdk.replugin.event.querypluginstatus;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class QueryPluginInfoDetailRequestEvent extends SepperllitaEvent {
    public QueryPluginInfoDetailRequestEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF002");
        setBl("点击插件icon");
        setLabel("请求插件详情");
    }

    public QueryPluginInfoDetailRequestEvent(Activity activity, int i, String str) {
        this(activity);
        setEid(i + "");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setRequest_server_type("3");
        custEvent.setPlugin_id(str);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
