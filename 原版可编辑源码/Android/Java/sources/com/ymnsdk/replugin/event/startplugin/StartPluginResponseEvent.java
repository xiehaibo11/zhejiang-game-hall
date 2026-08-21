package com.ymnsdk.replugin.event.startplugin;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class StartPluginResponseEvent extends SepperllitaEvent {
    public StartPluginResponseEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF002");
        setBl("点击插件icon");
        setLabel("请求启动插件响应");
    }

    public StartPluginResponseEvent(Activity activity, int i, String str, String str2, int i2, String str3, String str4, String str5, long j) {
        this(activity);
        setEid(i + "");
        setDur(j + "");
        setRv(str2);
        setUid(str4);
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setPlugin_id(str);
        custEvent.setRequest_code(i2 + "");
        custEvent.setRequest_msg(str3 + "");
        custEvent.setRequest_duration(j + "");
        custEvent.setLogin_json_str(str5);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
