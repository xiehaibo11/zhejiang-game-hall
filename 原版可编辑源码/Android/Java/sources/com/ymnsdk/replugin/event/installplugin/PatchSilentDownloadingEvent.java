package com.ymnsdk.replugin.event.installplugin;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PatchSilentDownloadingEvent extends SepperllitaEvent {
    public PatchSilentDownloadingEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF001");
        setBl("宿主包启动");
        setLabel("patch静默下载中");
        setEid("1060");
    }

    public PatchSilentDownloadingEvent(Activity activity, String str, String str2, long j, long j2, long j3) {
        this(activity);
        setRv(str2);
        setDur(j3 + "");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setPlugin_id(str);
        custEvent.setDownload_size(j + "");
        custEvent.setDownload_progress(j2 + "");
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
