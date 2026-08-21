package com.ymnsdk.replugin.event.installplugin;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class DownloadApkResponseEvent extends SepperllitaEvent {
    public DownloadApkResponseEvent(Activity activity) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF002");
        setBl("点击插件icon");
        setLabel("下载整包结束");
    }

    public DownloadApkResponseEvent(Activity activity, int i, String str, String str2, long j, int i2, String str3, int i3, long j2) {
        this(activity);
        setEid(i + "");
        setDur(j2 + "");
        setRv(str2);
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setRequest_code(i2 + "");
        custEvent.setRequest_msg(str3);
        custEvent.setRequest_duration(j2 + "");
        custEvent.setPlugin_id(str);
        custEvent.setDownload_size("" + j);
        custEvent.setRestart_num(i3 + "");
        custEvent.setRequest_server_type("0");
        setCust(GsonUtils.getInstance().toJson(custEvent));
    }
}
