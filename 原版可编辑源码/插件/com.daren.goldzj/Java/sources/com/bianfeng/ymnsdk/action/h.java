package com.bianfeng.ymnsdk.action;

import android.content.Context;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.entity.UrlConfig;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import org.json.JSONObject;

public class h extends ActionSupport<UrlConfig> {
    public h(Context context) {
        super(context);
    }

    @Override
    protected String getURL() {
        return formatUrl("server/getList");
    }

    @Override
    public JSONObject onPrepareData(IPlugin iPlugin, Object... objArr) throws YmnsdkException {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put("platform_id", iPlugin.getPluginId());
            jSONObject.put("platform_name", iPlugin.getPluginName());
            jSONObject.put("platform_ver", iPlugin.getPluginVersion());
            jSONObject.put("isDebug", String.valueOf(iPlugin.isDebugMode() ? 1 : 0));
            JSONObject jSONObject2 = new JSONObject();
            jSONObject2.put("pid", String.valueOf(objArr[0]));
            jSONObject2.put("gid", String.valueOf(objArr[1]));
            jSONObject.put("data", jSONObject2);
            return jSONObject;
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    @Override
    protected UrlConfig onSuccess(ActionSupport.ResponseResult responseResult) throws YmnsdkException {
        return (UrlConfig) YmnGsonUtil.fromJson(responseResult.dataAsString(), UrlConfig.class);
    }
}
