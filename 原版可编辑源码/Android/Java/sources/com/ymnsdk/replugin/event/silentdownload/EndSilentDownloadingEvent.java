package com.ymnsdk.replugin.event.silentdownload;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class EndSilentDownloadingEvent extends SepperllitaEvent {
    public EndSilentDownloadingEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF001");
        setBl("宿主包启动");
        setLabel("关闭静默下载");
    }

    public EndSilentDownloadingEvent(Activity activity, long j) {
        this(activity);
        setDur(j + "");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setRequest_duration(j + "");
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
