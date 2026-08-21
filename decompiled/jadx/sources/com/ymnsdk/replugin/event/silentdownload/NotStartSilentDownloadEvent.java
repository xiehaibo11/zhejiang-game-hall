package com.ymnsdk.replugin.event.silentdownload;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class NotStartSilentDownloadEvent extends SepperllitaEvent {
    public NotStartSilentDownloadEvent(Activity activity, int i) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF001");
        setBl("宿主包启动");
        setLabel("不启动静默下载");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setReason(i);
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
