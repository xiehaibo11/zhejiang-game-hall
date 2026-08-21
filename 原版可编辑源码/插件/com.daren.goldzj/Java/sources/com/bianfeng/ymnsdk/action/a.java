package com.bianfeng.ymnsdk.action;

import android.content.Context;
import android.util.Log;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import org.json.JSONObject;

public class a extends ActionSupport<JSONObject> {
    public a(Context context) {
        super(context);
        this.httpHelper.setMethod(1);
    }

    @Override
    protected String getURL() {
        return formatUrl("shop/feecode");
    }

    @Override
    public JSONObject onPrepareData(IPlugin iPlugin, Object... objArr) throws YmnsdkException {
        this.gContent.put("app_id", YmnAppContext.getSdkAppId());
        this.gContent.put("package_id", YmnAppContext.getConfigIdStr());
        this.gContent.put("platform_id", iPlugin.getPluginId());
        return null;
    }

    @Override
    protected JSONObject onSuccess(ActionSupport.ResponseResult responseResult) throws YmnsdkException {
        Log.i("Ymn_ActionSupport", "request feedcodes success : " + responseResult.dataAsString());
        return responseResult.data;
    }
}
