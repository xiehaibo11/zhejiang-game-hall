package com.ymnsdk.replugin.event.querypluginstatus;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class QueryPluginStatusResponseEvent extends SepperllitaEvent {
    public QueryPluginStatusResponseEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF002");
        setBl("点击插件icon");
        setLabel("请求插件接口响应");
    }

    public QueryPluginStatusResponseEvent(Activity activity, int i, String str, String str2, int i2, String str3, long j) {
        this(activity);
        setEid(i + "");
        setDur(j + "");
        setRv(str2);
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setPlugin_id(str);
        custEvent.setRequest_code(i2 + "");
        custEvent.setRequest_msg(str3);
        custEvent.setRequest_duration(j + "");
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
