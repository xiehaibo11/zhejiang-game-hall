package com.bianfeng.ymnsdk.action;

import android.content.Context;
import android.util.Log;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import org.json.JSONObject;

public class a extends ActionSupport<JSONObject> {
    public a(Context r2) {
        super(r2);
        this.httpHelper.setMethod(1);
    }

    @Override
    protected String getURL() {
        return formatUrl("shop/feecode");
    }

    @Override
    public JSONObject onPrepareData(IPlugin r3, Object... r4) throws YmnsdkException {
        this.gContent.put("app_id", YmnAppContext.getSdkAppId());
        this.gContent.put("package_id", YmnAppContext.getConfigIdStr());
        this.gContent.put("platform_id", r3.getPluginId());
        return null;
    }

    @Override
    protected JSONObject onSuccess(ActionSupport.ResponseResult r1) throws Exception {
        return onSuccess(r1);
    }

    @Override
    protected JSONObject onSuccess(ActionSupport.ResponseResult r3) throws YmnsdkException {
        Log.i("Ymn_ActionSupport", "request feedcodes success : " + r3.dataAsString());
        return r3.data;
    }
}
