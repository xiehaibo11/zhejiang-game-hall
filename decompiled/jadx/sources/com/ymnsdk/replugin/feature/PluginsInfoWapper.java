package com.ymnsdk.replugin.feature;

import android.app.Activity;
import android.util.Log;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.qihoo360.replugin.utils.RepluginSharedPreferencesUtils;
import com.ymnsdk.replugin.action.ActionObserver;
import com.ymnsdk.replugin.action.ActionSupport;
import com.ymnsdk.replugin.action.RequestAppPluginInfoAction;
import com.ymnsdk.replugin.datafun.PostdataLib;
import com.ymnsdk.replugin.entity.AppPluginInfo;
import com.ymnsdk.replugin.entity.Plugin;
import com.ymnsdk.replugin.event.base.BaseEvent;
import com.ymnsdk.replugin.event.base.EventCode;
import com.ymnsdk.replugin.event.getpluginsinfo.GetPluginsInfoRequestEvent;
import com.ymnsdk.replugin.event.getpluginsinfo.GetPluginsInfoResponseEvent;
import com.ymnsdk.replugin.event.silentdownload.NotStartSilentDownloadEvent;
import com.ymnsdk.replugin.listener.GetPluginsStatusInfoListener;
import com.ymnsdk.replugin.manger.PluginMangerUtils;
import com.ymnsdk.replugin.patch.download.DownloadState;
import com.ymnsdk.replugin.patch.download.SilentDownloadApi;
import com.ymnsdk.replugin.util.DownloadUtils;
import com.ymnsdk.replugin.util.LogUtils;
import com.ymnsdk.replugin.util.RequestRetryUtils;
import com.ymnsdk.replugin.util.SharedPerferencesDataUtils;
import com.ymnsdk.replugin.util.SharedPreferencesUtils;
import com.ymnsdk.replugin.util.SilentDownloadUtils;
import java.util.List;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class PluginsInfoWapper {
    public Activity activity;

    public PluginsInfoWapper(Activity activity) {
        this.activity = activity;
    }

    public void getPluginsInfo(String str, final String str2, final GetPluginsStatusInfoListener getPluginsStatusInfoListener) {
        RepluginSharedPreferencesUtils.getInstance().setPluginLog("false");
        PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.get_plugins_info_request_event, str, "", str2));
        final long jCurrentTimeMillis = System.currentTimeMillis();
        final RequestRetryUtils requestRetryUtils = RequestRetryUtils.getInstance();
        requestRetryUtils.setActivity(this.activity);
        requestRetryUtils.setHostAppInfo(str2);
        final RequestAppPluginInfoAction requestAppPluginInfoAction = new RequestAppPluginInfoAction(this.activity);
        requestAppPluginInfoAction.setRequestParams(str);
        saveHostAppInfo(str2);
        requestAppPluginInfoAction.addObserver(new ActionObserver() { // from class: com.ymnsdk.replugin.feature.PluginsInfoWapper.1
            /* JADX WARN: Multi-variable type inference failed */
            @Override // com.ymnsdk.replugin.action.ActionObserver
            public void onActionResult(ActionSupport.ResponseResult responseResult) {
                if (responseResult.isOk()) {
                    AppPluginInfo appPluginInfo = (AppPluginInfo) responseResult.processedResult;
                    SharedPerferencesDataUtils.getInstance().clearPluginGrayData();
                    PluginMangerUtils.filterPlugin(appPluginInfo, str2);
                    LogUtils.setIsOpenLog(appPluginInfo.getPost_statistics_enabled());
                    SilentDownloadUtils.isNoWifiDownload = appPluginInfo.getPatch_download_in_nowifi();
                    Log.d(HostConstant.ymn, "str2 = " + GsonUtils.getInstance().toJson(appPluginInfo));
                    if (appPluginInfo.getUpdate_server_address() != null) {
                        SharedPreferencesUtils.getInstance();
                        SharedPreferencesUtils.setUpdateServerAddress(GsonUtils.getInstance().toJson(appPluginInfo.getUpdate_server_address()));
                    }
                    if (appPluginInfo.getPlugins() != null) {
                        SharedPreferencesUtils.getInstance();
                        SharedPreferencesUtils.setPluginList(GsonUtils.getInstance().toJson(appPluginInfo.getPlugins()));
                    } else {
                        SharedPreferencesUtils.getInstance();
                        SharedPreferencesUtils.setPluginList("");
                    }
                    PostdataLib.getInstance().postEvent(new BaseEvent(PluginsInfoWapper.this.activity, EventCode.get_plugins_info_response_event, responseResult.code, GsonUtils.getInstance().toJson(appPluginInfo), "", requestRetryUtils.getRequestSum(), System.currentTimeMillis() - jCurrentTimeMillis, 1));
                    PostdataLib.getInstance().postToSeperllita(new GetPluginsInfoResponseEvent(PluginsInfoWapper.this.activity, 1044, responseResult.code, GsonUtils.getInstance().toJson(appPluginInfo), requestRetryUtils.getRequestSum(), System.currentTimeMillis() - jCurrentTimeMillis));
                    PluginsInfoWapper.checkDownloadingPlugin(PluginsInfoWapper.this.activity);
                    if (!DownloadUtils.isUserDownload) {
                        DownloadState.getInstance().setOpenSilentDownload(true);
                    }
                    int iIsSatisfySclentDownload = SilentDownloadUtils.isSatisfySclentDownload(str2, SilentDownloadUtils.isNoWifiDownload);
                    if (iIsSatisfySclentDownload == 0) {
                        SilentDownloadApi.getInstance().startSilentDownload(PluginsInfoWapper.this.activity);
                    } else if (iIsSatisfySclentDownload == 1) {
                        PostdataLib.getInstance().postToSeperllita(new NotStartSilentDownloadEvent(PluginsInfoWapper.this.activity, 2));
                    }
                    getPluginsStatusInfoListener.onSuccess();
                    return;
                }
                Log.d(HostConstant.ymn, "str = " + responseResult.msg);
                if (requestRetryUtils.retryRequest(requestAppPluginInfoAction)) {
                    PostdataLib.getInstance().postEvent(new BaseEvent(PluginsInfoWapper.this.activity, EventCode.get_plugins_info_response_event, responseResult.code, responseResult.msg, "", requestRetryUtils.getRequestSum(), System.currentTimeMillis() - jCurrentTimeMillis, 1));
                    PostdataLib.getInstance().postToSeperllita(new GetPluginsInfoResponseEvent(PluginsInfoWapper.this.activity, 1045, responseResult.code, responseResult.msg, requestRetryUtils.getRequestSum(), System.currentTimeMillis() - jCurrentTimeMillis));
                    getPluginsStatusInfoListener.onFailure(responseResult.code, responseResult.msg);
                }
            }
        });
        PostdataLib.getInstance().postToSeperllita(new GetPluginsInfoRequestEvent(this.activity, 1042, str2));
        requestAppPluginInfoAction.actionStart();
    }

    public static void checkDownloadingPlugin(Activity activity) {
        List<Plugin> allPlugin = PluginMangerUtils.getAllPlugin();
        if (allPlugin == null) {
            return;
        }
        for (int i = 0; i < allPlugin.size(); i++) {
            SilentDownloadUtils.checkDowningPlugin(activity, allPlugin.get(i));
        }
    }

    public static void saveHostAppInfo(String str) {
        try {
            JSONObject jSONObject = new JSONObject(str);
            if (jSONObject.has("user_id")) {
                SharedPreferencesUtils.getInstance();
                SharedPreferencesUtils.setUserId(jSONObject.getString("user_id"));
            }
            if (jSONObject.has("cpsid")) {
                SharedPreferencesUtils.getInstance();
                SharedPreferencesUtils.setCpSid(jSONObject.getString("cpsid"));
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
