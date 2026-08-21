package com.ymnsdk.replugin.event.getpluginsinfo;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class GetPluginsInfoRequestEvent extends SepperllitaEvent {
    public GetPluginsInfoRequestEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF001");
        setBl("宿主包启动");
        setLabel("请求宿主配置信息");
    }

    public GetPluginsInfoRequestEvent(Activity activity, int i, String str) {
        this(activity);
        setEid(i + "");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setRequest_server_type("1");
        custEvent.setHost_app_info(str);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
