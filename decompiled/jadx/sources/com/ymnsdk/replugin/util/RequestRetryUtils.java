package com.ymnsdk.replugin.util;

import android.app.Activity;
import android.util.Log;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.ymnsdk.replugin.action.ActionSupport;
import com.ymnsdk.replugin.action.RequestAppPluginInfoAction;
import com.ymnsdk.replugin.action.RequestPluginInfoDetailAction;
import com.ymnsdk.replugin.action.RequestStateAction;
import com.ymnsdk.replugin.datafun.PostdataLib;
import com.ymnsdk.replugin.event.getpluginsinfo.GetPluginsInfoRequestEvent;
import com.ymnsdk.replugin.event.querypluginstatus.QueryPluginInfoDetailRequestEvent;
import com.ymnsdk.replugin.event.querypluginstatus.QueryPluginStateRequestEvent;
import com.ymnsdk.replugin.patch.download.DownloadState;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class RequestRetryUtils {
    private Activity activity;
    private String pluginId = "";
    private String hostAppInfo = "";
    private int requestSum = 0;

    public static RequestRetryUtils getInstance() {
        return new RequestRetryUtils();
    }

    public void setActivity(Activity activity) {
        this.activity = activity;
    }

    public void setPluginId(String str) {
        this.pluginId = str;
    }

    public void setHostAppInfo(String str) {
        this.hostAppInfo = str;
    }

    public boolean retryRequest(ActionSupport actionSupport) {
        int i;
        if (actionSupport == null || (i = this.requestSum) >= 3) {
            return true;
        }
        this.requestSum = i + 1;
        Log.d(HostConstant.ymn, "当前请求次数" + this.requestSum);
        actionSupport.actionStart();
        if ((actionSupport instanceof RequestAppPluginInfoAction) && !DownloadState.getInstance().isOpenSilentDownload()) {
            PostdataLib.getInstance().postToSeperllita(new GetPluginsInfoRequestEvent(this.activity, 1043, this.hostAppInfo));
        }
        if ((actionSupport instanceof RequestStateAction) && !DownloadState.getInstance().isOpenSilentDownload()) {
            PostdataLib.getInstance().postToSeperllita(new QueryPluginStateRequestEvent(this.activity, 1043, this.pluginId));
        }
        if (!(actionSupport instanceof RequestPluginInfoDetailAction) || DownloadState.getInstance().isOpenSilentDownload()) {
            return false;
        }
        PostdataLib.getInstance().postToSeperllita(new QueryPluginInfoDetailRequestEvent(this.activity, 1043, this.pluginId));
        return false;
    }

    public int getRequestSum() {
        return this.requestSum;
    }

    public void setRequestSum(int i) {
        this.requestSum = i;
    }
}
