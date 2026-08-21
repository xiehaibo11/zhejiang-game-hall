package com.ymnsdk.replugin.feature;

import android.app.Activity;
import android.util.Log;
import com.bianfeng.ymnsdk.hostaction.HostConstant;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.huawei.hms.support.hianalytics.HiAnalyticsConstant;
import com.ymnsdk.replugin.action.ActionObserver;
import com.ymnsdk.replugin.action.ActionSupport;
import com.ymnsdk.replugin.action.RequestPluginInfoDetailAction;
import com.ymnsdk.replugin.action.RequestStateAction;
import com.ymnsdk.replugin.datafun.PostdataLib;
import com.ymnsdk.replugin.entity.Plugin;
import com.ymnsdk.replugin.entity.PluginInfo;
import com.ymnsdk.replugin.entity.PluginState;
import com.ymnsdk.replugin.event.base.BaseEvent;
import com.ymnsdk.replugin.event.base.EventCode;
import com.ymnsdk.replugin.event.querypluginstatus.QueryPluginInfoDetailRequestEvent;
import com.ymnsdk.replugin.event.querypluginstatus.QueryPluginInfoDetailResponseEvent;
import com.ymnsdk.replugin.event.querypluginstatus.QueryPluginStateRequestEvent;
import com.ymnsdk.replugin.event.querypluginstatus.QueryPluginStateResponseEvent;
import com.ymnsdk.replugin.event.querypluginstatus.QueryPluginStatusRequestEvent;
import com.ymnsdk.replugin.event.querypluginstatus.QueryPluginStatusResponseEvent;
import com.ymnsdk.replugin.listener.QueryPluginStatusListener;
import com.ymnsdk.replugin.manger.PluginMangerUtils;
import com.ymnsdk.replugin.patch.download.DownloadState;
import com.ymnsdk.replugin.util.RequestRetryUtils;
import com.ymnsdk.replugin.util.SharedPerferencesDataUtils;
import java.util.Map;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class PluginStatusWapper {
    public Activity activity;

    public PluginStatusWapper(Activity activity) {
        this.activity = activity;
    }

    /* JADX WARN: Removed duplicated region for block: B:35:0x0173  */
    /* JADX WARN: Removed duplicated region for block: B:49:? A[RETURN, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void queryPluginStatus(final String str, final QueryPluginStatusListener queryPluginStatusListener) {
        QueryPluginStatusListener queryPluginStatusListener2;
        PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.query_plugin_status_request_event, "", str, ""));
        if (!DownloadState.getInstance().isOpenSilentDownload()) {
            PostdataLib.getInstance().postToSeperllita(new QueryPluginStatusRequestEvent(this.activity, str));
        }
        final long jCurrentTimeMillis = System.currentTimeMillis();
        int i = -1;
        try {
            PluginMangerUtils.getInstance();
            final Plugin pluginFindPluginById = PluginMangerUtils.findPluginById(str);
            if (pluginFindPluginById != null) {
                try {
                    String base_url = pluginFindPluginById.getBase_url();
                    String manifest_path = pluginFindPluginById.getManifest_path();
                    String str2 = base_url + pluginFindPluginById.getState_path();
                    final String str3 = base_url + manifest_path;
                    final RequestRetryUtils requestRetryUtils = RequestRetryUtils.getInstance();
                    final RequestRetryUtils requestRetryUtils2 = RequestRetryUtils.getInstance();
                    requestRetryUtils.setPluginId(str);
                    requestRetryUtils2.setPluginId(str);
                    final long jCurrentTimeMillis2 = System.currentTimeMillis();
                    final RequestStateAction requestStateAction = new RequestStateAction(this.activity);
                    requestStateAction.setURL(str2);
                    try {
                        requestStateAction.addObserver(new ActionObserver() {
                            /* JADX WARN: Multi-variable type inference failed */
                            @Override
                            public void onActionResult(ActionSupport.ResponseResult responseResult) {
                                if (responseResult.isOk()) {
                                    final PluginState pluginState = (PluginState) responseResult.processedResult;
                                    Log.d(HostConstant.ymn, "str2 = " + GsonUtils.getInstance().toJson(pluginState));
                                    PostdataLib.getInstance().postEvent(new BaseEvent(PluginStatusWapper.this.activity, EventCode.get_state_success_event, responseResult.code, GsonUtils.getInstance().toJson(pluginState), "", requestRetryUtils2.getRequestSum(), System.currentTimeMillis() - jCurrentTimeMillis2, 2));
                                    if (!DownloadState.getInstance().isOpenSilentDownload()) {
                                        PostdataLib.getInstance().postToSeperllita(new QueryPluginStateResponseEvent(PluginStatusWapper.this.activity, 1044, str, responseResult.code, GsonUtils.getInstance().toJson(pluginState), requestRetryUtils2.getRequestSum(), System.currentTimeMillis() - jCurrentTimeMillis2));
                                    }
                                    if (pluginState.getIs_in_maintenance() != 0) {
                                        queryPluginStatusListener.onSuccessUnAvailable(pluginState.getMaintenance_reason());
                                        PostdataLib.getInstance().postEvent(new BaseEvent(PluginStatusWapper.this.activity, EventCode.query_plugin_status_response_event, responseResult.code, "维护中", "", requestRetryUtils2.getRequestSum(), System.currentTimeMillis() - jCurrentTimeMillis2, 2));
                                        if (DownloadState.getInstance().isOpenSilentDownload()) {
                                            return;
                                        }
                                        PostdataLib.getInstance().postToSeperllita(new QueryPluginStatusResponseEvent(PluginStatusWapper.this.activity, 1044, str, "", responseResult.code, "维护中", System.currentTimeMillis() - jCurrentTimeMillis));
                                        return;
                                    }
                                    final RequestPluginInfoDetailAction requestPluginInfoDetailAction = new RequestPluginInfoDetailAction(PluginStatusWapper.this.activity);
                                    requestPluginInfoDetailAction.setURL(str3);
                                    final long jCurrentTimeMillis3 = System.currentTimeMillis();
                                    requestPluginInfoDetailAction.addObserver(new ActionObserver() {
                                        /* JADX WARN: Multi-variable type inference failed */
                                        @Override
                                        public void onActionResult(ActionSupport.ResponseResult responseResult2) {
                                            if (responseResult2.isOk()) {
                                                PluginInfo pluginInfo = (PluginInfo) responseResult2.processedResult;
                                                Log.d(HostConstant.ymn, "str3 = " + GsonUtils.getInstance().toJson(pluginInfo));
                                                if (!DownloadState.getInstance().isOpenSilentDownload()) {
                                                    PostdataLib.getInstance().postToSeperllita(new QueryPluginInfoDetailResponseEvent(PluginStatusWapper.this.activity, 1044, str, pluginInfo.getPlugin_version(), responseResult2.code, GsonUtils.getInstance().toJson(pluginInfo), requestRetryUtils.getRequestSum(), System.currentTimeMillis() - jCurrentTimeMillis3));
                                                }
                                                SharedPerferencesDataUtils.getInstance().putLocalGetPlugin(str, pluginInfo);
                                                Map<String, PluginInfo> localDownedPlugin = SharedPerferencesDataUtils.getInstance().getLocalDownedPlugin();
                                                Map<String, PluginInfo> localInstallPlugin = SharedPerferencesDataUtils.getInstance().getLocalInstallPlugin();
                                                String plugin_version = localDownedPlugin.containsKey(pluginInfo.getPlugin_id()) ? localDownedPlugin.get(pluginInfo.getPlugin_id()).getPlugin_version() : "";
                                                PluginMangerUtils.getInstance();
                                                long pluginSize = PluginMangerUtils.getPluginSize(pluginInfo, plugin_version);
                                                if (plugin_version.isEmpty() || pluginSize == 0) {
                                                    pluginSize = pluginInfo.getFile_size();
                                                }
                                                String plugin_version2 = localInstallPlugin.containsKey(pluginInfo.getPlugin_id()) ? localInstallPlugin.get(pluginInfo.getPlugin_id()).getPlugin_version() : "";
                                                PluginMangerUtils.getInstance();
                                                PluginMangerUtils.getUpdateType(pluginState.getAllow_versions(), plugin_version2, pluginFindPluginById.getUpdate_type());
                                                PluginMangerUtils.getInstance();
                                                int updateType = PluginMangerUtils.getUpdateType(pluginState.getAllow_versions(), plugin_version2, pluginFindPluginById.getUpdate_type_v22());
                                                PluginMangerUtils.getInstance();
                                                String description = PluginMangerUtils.getDescription(pluginFindPluginById, pluginInfo.getDescription());
                                                JSONObject jSONObject = new JSONObject();
                                                try {
                                                    jSONObject.put("plugin_current_version", plugin_version2);
                                                    jSONObject.put("plugin_current_download_version", plugin_version);
                                                    jSONObject.put("plugin_last_version", pluginInfo.getPlugin_version());
                                                    jSONObject.put("plugin_size", pluginSize);
                                                    jSONObject.put("plugin_description", description);
                                                    jSONObject.put(HiAnalyticsConstant.BI_KEY_UPDATE_TYPE, updateType);
                                                } catch (Exception e) {
                                                    e.printStackTrace();
                                                }
                                                queryPluginStatusListener.onSuccessAvailable(jSONObject.toString());
                                                PostdataLib.getInstance().postEvent(new BaseEvent(PluginStatusWapper.this.activity, EventCode.query_plugin_status_response_event, responseResult2.code, "可使用|" + jSONObject.toString() + "|" + GsonUtils.getInstance().toJson(pluginInfo), pluginInfo.getPlugin_version(), requestRetryUtils.getRequestSum(), System.currentTimeMillis() - jCurrentTimeMillis3, 3));
                                                if (DownloadState.getInstance().isOpenSilentDownload()) {
                                                    return;
                                                }
                                                PostdataLib.getInstance().postToSeperllita(new QueryPluginStatusResponseEvent(PluginStatusWapper.this.activity, 1044, str, pluginInfo.getPlugin_version(), responseResult2.code, "可使用|" + jSONObject.toString() + "|" + GsonUtils.getInstance().toJson(pluginInfo), System.currentTimeMillis() - jCurrentTimeMillis));
                                                return;
                                            }
                                            Log.d(HostConstant.ymn, "str = " + responseResult2.msg);
                                            if (requestRetryUtils.retryRequest(requestPluginInfoDetailAction)) {
                                                queryPluginStatusListener.onFailure(responseResult2.code, responseResult2.msg);
                                                PostdataLib.getInstance().postEvent(new BaseEvent(PluginStatusWapper.this.activity, EventCode.query_plugin_status_response_event, responseResult2.code, responseResult2.msg, "", requestRetryUtils.getRequestSum(), System.currentTimeMillis() - jCurrentTimeMillis3, 3));
                                                if (DownloadState.getInstance().isOpenSilentDownload()) {
                                                    return;
                                                }
                                                PostdataLib.getInstance().postToSeperllita(new QueryPluginInfoDetailResponseEvent(PluginStatusWapper.this.activity, 1045, str, "", responseResult2.code, responseResult2.msg, requestRetryUtils.getRequestSum(), System.currentTimeMillis() - jCurrentTimeMillis3));
                                                PostdataLib.getInstance().postToSeperllita(new QueryPluginStatusResponseEvent(PluginStatusWapper.this.activity, 1045, str, "", responseResult2.code, responseResult2.msg, System.currentTimeMillis() - jCurrentTimeMillis));
                                            }
                                        }
                                    });
                                    if (!DownloadState.getInstance().isOpenSilentDownload()) {
                                        PostdataLib.getInstance().postToSeperllita(new QueryPluginInfoDetailRequestEvent(PluginStatusWapper.this.activity, 1042, str));
                                    }
                                    requestPluginInfoDetailAction.actionStart();
                                    return;
                                }
                                Log.d(HostConstant.ymn, "str = " + responseResult.msg);
                                if (requestRetryUtils2.retryRequest(requestStateAction)) {
                                    queryPluginStatusListener.onFailure(responseResult.code, responseResult.msg);
                                    PostdataLib.getInstance().postEvent(new BaseEvent(PluginStatusWapper.this.activity, EventCode.query_plugin_status_response_event, responseResult.code, responseResult.msg, "", requestRetryUtils2.getRequestSum(), System.currentTimeMillis() - jCurrentTimeMillis2, 2));
                                    if (DownloadState.getInstance().isOpenSilentDownload()) {
                                        return;
                                    }
                                    PostdataLib.getInstance().postToSeperllita(new QueryPluginStateResponseEvent(PluginStatusWapper.this.activity, 1045, str, responseResult.code, responseResult.msg, requestRetryUtils2.getRequestSum(), System.currentTimeMillis() - jCurrentTimeMillis2));
                                    PostdataLib.getInstance().postToSeperllita(new QueryPluginStatusResponseEvent(PluginStatusWapper.this.activity, 1045, str, "", responseResult.code, responseResult.msg, System.currentTimeMillis() - jCurrentTimeMillis));
                                }
                            }
                        });
                        if (!DownloadState.getInstance().isOpenSilentDownload()) {
                            try {
                                PostdataLib.getInstance().postToSeperllita(new QueryPluginStateRequestEvent(this.activity, 1042, str));
                            } catch (Exception e) {
                                e = e;
                                queryPluginStatusListener2 = queryPluginStatusListener;
                                i = -1;
                                e.printStackTrace();
                                queryPluginStatusListener2.onFailure(i, "异常报错|" + e.toString());
                                PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.query_plugin_status_response_event, -1, "异常报错|" + e.toString(), ""));
                                if (DownloadState.getInstance().isOpenSilentDownload()) {
                                }
                            }
                        }
                        requestStateAction.actionStart();
                        return;
                    } catch (Exception e2) {
                        e = e2;
                    }
                } catch (Exception e3) {
                    e = e3;
                    queryPluginStatusListener2 = queryPluginStatusListener;
                }
            } else {
                queryPluginStatusListener2 = queryPluginStatusListener;
                i = -1;
                try {
                    queryPluginStatusListener2.onFailure(-1, "找不到传入的pluginid");
                    PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.query_plugin_status_response_event, -1, "找不到传入的pluginid", ""));
                    if (DownloadState.getInstance().isOpenSilentDownload()) {
                        return;
                    }
                    PostdataLib.getInstance().postToSeperllita(new QueryPluginStatusResponseEvent(this.activity, 1045, str, "", -1, "找不到传入的pluginid", System.currentTimeMillis() - jCurrentTimeMillis));
                    return;
                } catch (Exception e4) {
                    e = e4;
                }
            }
        } catch (Exception e5) {
            e = e5;
            queryPluginStatusListener2 = queryPluginStatusListener;
        }
        e.printStackTrace();
        queryPluginStatusListener2.onFailure(i, "异常报错|" + e.toString());
        PostdataLib.getInstance().postEvent(new BaseEvent(this.activity, EventCode.query_plugin_status_response_event, -1, "异常报错|" + e.toString(), ""));
        if (DownloadState.getInstance().isOpenSilentDownload()) {
            PostdataLib.getInstance().postToSeperllita(new QueryPluginStatusResponseEvent(this.activity, 1045, str, "", -1, "异常报错|" + e.toString(), System.currentTimeMillis() - jCurrentTimeMillis));
        }
    }
}
