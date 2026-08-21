package com.ymnsdk.replugin.event.querypluginstatus;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class QueryPluginStateResponseEvent extends SepperllitaEvent {
    public QueryPluginStateResponseEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF002");
        setBl("点击插件icon");
        setLabel("调用获取插件维护状态接口响应");
    }

    public QueryPluginStateResponseEvent(Activity activity, int i, String str, int i2, String str2, int i3, long j) {
        this(activity);
        setEid(i + "");
        setDur(j + "");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setRequest_server_type("2");
        custEvent.setPlugin_id(str);
        custEvent.setRestart_num(i3 + "");
        custEvent.setRequest_code(i2 + "");
        custEvent.setRequest_msg(str2);
        custEvent.setRequest_duration(j + "");
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
