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
public class DownloadErrorCodeEvent extends SepperllitaEvent {
    public DownloadErrorCodeEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF006");
        setBl("下载code码");
        setLabel("结束下载");
    }

    public DownloadErrorCodeEvent(Activity activity, String str) {
        this(activity);
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setRequest_msg(str);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
