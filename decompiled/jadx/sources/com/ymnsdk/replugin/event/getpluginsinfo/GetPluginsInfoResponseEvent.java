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
public class GetPluginsInfoResponseEvent extends SepperllitaEvent {
    public GetPluginsInfoResponseEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF001");
        setBl("宿主包启动");
        setLabel("请求宿主配置信息响应");
    }

    public GetPluginsInfoResponseEvent(Activity activity, int i, int i2, String str, int i3, long j) {
        this(activity);
        setEid(i + "");
        setDur(j + "");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setRequest_server_type("1");
        custEvent.setRestart_num(i3 + "");
        custEvent.setRequest_code(i2 + "");
        custEvent.setRequest_msg(str);
        custEvent.setRequest_duration(j + "");
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
