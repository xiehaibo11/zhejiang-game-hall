package com.bianfeng.ymnsdk.action;

import android.content.Context;
import android.util.Log;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.tencent.connect.common.Constants;
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
    public JSONObject onPrepareData(IPlugin plugin, Object... datas) throws YmnsdkException {
        this.gContent.put("app_id", YmnAppContext.getSdkAppId());
        this.gContent.put(Constants.PACKAGE_ID, YmnAppContext.getConfigIdStr());
        this.gContent.put("platform_id", plugin.getPluginId());
        return null;
    }

    @Override
    protected JSONObject onSuccess(ActionSupport.ResponseResult result) throws YmnsdkException {
        Log.i("Ymn_ActionSupport", "request feedcodes success : " + result.dataAsString());
        return result.data;
    }
}
