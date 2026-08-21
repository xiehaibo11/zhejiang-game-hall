package com.ymnsdk.replugin.event.other;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class CoreDownloadFailEvent extends SepperllitaEvent {
    public CoreDownloadFailEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF007");
        setBl("底层库触发和响应");
        setLabel("下载失败");
    }

    public CoreDownloadFailEvent(Activity activity, String str, String str2) {
        this(activity);
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setPlugin_id(str);
        custEvent.setRequest_msg(str2);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
