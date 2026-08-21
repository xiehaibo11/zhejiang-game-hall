package com.ymnsdk.replugin.event.installplugin;

import android.app.Activity;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.qihoo360.replugin.utils.RepluginLogUtils;
import com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils;
import com.ymnsdk.replugin.event.base.CustEvent;
import com.ymnsdk.replugin.event.base.SepperllitaEvent;
import com.ymnsdk.replugin.util.LogUtils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class InstallPluginRequestEvent extends SepperllitaEvent {
    public InstallPluginRequestEvent(Activity activity, String str) {
        super(activity);
        setAct("push");
        setPg("P1069");
        setBlk("BHF002");
        setBl("点击插件icon");
        setLabel("请求安装插件");
        setEid("1042");
        CustEvent custEvent = new CustEvent(activity);
        custEvent.setPlugin_id(str);
        setCust(GsonUtils.getInstance().toJson(custEvent));
        if (LogUtils.isLogOpen()) {
            RepluginLogUtils.getInstance().clearLog();
            RepluginSharedPreferencesUtils.getInstance().setPluginLog("true");
        }
    }
}
