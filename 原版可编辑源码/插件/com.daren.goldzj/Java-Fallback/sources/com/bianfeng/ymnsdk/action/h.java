package com.bianfeng.ymnsdk.action;

import android.content.Context;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.entity.UrlConfig;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import org.json.JSONObject;

public class h extends ActionSupport<UrlConfig> {
    public h(Context r1) {
        super(r1);
    }

    @Override
    protected String getURL() {
        return formatUrl("server/getList");
    }

    @Override
    public JSONObject onPrepareData(IPlugin r4, Object... r5) throws YmnsdkException {
        JSONObject r0 = new JSONObject();
        r0.put("platform_id", r4.getPluginId());     // Catch: Exception -> L15
        r0.put("platform_name", r4.getPluginName());     // Catch: Exception -> L15
        r0.put("platform_ver", r4.getPluginVersion());     // Catch: Exception -> L15
        r0.put("isDebug", String.valueOf(r4.isDebugMode() ? 1 : 0));     // Catch: Exception -> L15
        JSONObject r42 = new JSONObject();     // Catch: Exception -> L15
        r42.put("pid", String.valueOf(r5[0]));     // Catch: Exception -> L15
        r42.put("gid", String.valueOf(r5[1]));     // Catch: Exception -> L15
        r0.put("data", r42);     // Catch: Exception -> L15
        return r0;
    L15:
        e = move-exception;
        throw new YmnsdkException(e);
    }

    @Override
    protected UrlConfig onSuccess(ActionSupport.ResponseResult r1) throws Exception {
        return onSuccess(r1);
    }

    @Override
    protected UrlConfig onSuccess(ActionSupport.ResponseResult r2) throws YmnsdkException {
        return (UrlConfig) YmnGsonUtil.fromJson(r2.dataAsString(), UrlConfig.class);
    }
}
