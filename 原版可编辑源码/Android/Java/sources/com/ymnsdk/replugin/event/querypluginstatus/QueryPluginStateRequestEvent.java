package com.ymnsdk.replugin.event.querypluginstatus;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class QueryPluginStateRequestEvent extends SepperllitaEvent {
    public QueryPluginStateRequestEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF002");
        setBl("点击插件icon");
        setLabel("调用获取插件维护状态接口");
    }

    public QueryPluginStateRequestEvent(Activity activity, int i, String str) {
        this(activity);
        setEid(i + "");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setRequest_server_type("2");
        custEvent.setPlugin_id(str);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
