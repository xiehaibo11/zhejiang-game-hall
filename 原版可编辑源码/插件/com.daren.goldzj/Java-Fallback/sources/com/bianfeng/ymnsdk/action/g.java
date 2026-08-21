package com.bianfeng.ymnsdk.action;

import android.content.Context;
import android.util.Log;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import org.json.JSONObject;

public class g extends ActionSupport<JSONObject> {
    public g(Context r2) {
        super(r2);
        this.httpHelper.setMethod(1);
    }

    @Override
    protected String getURL() {
        return formatUrl("shop/goods");
    }

    @Override
    public JSONObject onPrepareData(IPlugin r2, Object... r3) throws YmnsdkException {
        this.gContent.put("app_id", YmnAppContext.getSdkAppId());
        this.gContent.put("package_id", YmnAppContext.getConfigIdStr());
        return null;
    }

    @Override
    protected JSONObject onSuccess(ActionSupport.ResponseResult r1) throws Exception {
        return onSuccess(r1);
    }

    @Override
    protected JSONObject onSuccess(ActionSupport.ResponseResult r3) throws Exception {
        Log.i("Ymn_ActionSupport", "request products success : " + r3.dataAsString());
        return r3.data;
    }
}
