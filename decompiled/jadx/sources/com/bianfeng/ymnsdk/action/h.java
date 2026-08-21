package com.bianfeng.ymnsdk.action;

import android.content.Context;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.entity.UrlConfig;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import org.json.JSONObject;

/* JADX INFO: compiled from: RequestServerListAction.java */
/* JADX INFO: loaded from: classes.dex */
public class h extends ActionSupport<UrlConfig> {
    public h(Context context) {
        super(context);
    }

    @Override // com.bianfeng.ymnsdk.action.ActionSupport
    public JSONObject onPrepareData(IPlugin plugin, Object... datas) throws YmnsdkException {
        JSONObject json = new JSONObject();
        try {
            json.put("platform_id", plugin.getPluginId());
            json.put("platform_name", plugin.getPluginName());
            json.put("platform_ver", plugin.getPluginVersion());
            json.put("isDebug", String.valueOf(plugin.isDebugMode() ? 1 : 0));
            JSONObject data = new JSONObject();
            data.put("pid", String.valueOf(datas[0]));
            data.put("gid", String.valueOf(datas[1]));
            json.put("data", data);
            return json;
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    @Override // com.bianfeng.ymnsdk.action.ActionSupport
    protected String getURL() {
        return formatUrl("server/getList");
    }

    /* JADX INFO: Access modifiers changed from: protected */
    /* JADX WARN: Can't rename method to resolve collision */
    @Override // com.bianfeng.ymnsdk.action.ActionSupport
    public UrlConfig onSuccess(ActionSupport.ResponseResult result) throws YmnsdkException {
        return (UrlConfig) YmnGsonUtil.fromJson(result.dataAsString(), UrlConfig.class);
    }
}
