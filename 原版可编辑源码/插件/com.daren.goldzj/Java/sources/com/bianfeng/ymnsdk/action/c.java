package com.bianfeng.ymnsdk.action;

import android.content.Context;
import android.util.Log;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.security.SecurityUtil;
import org.json.JSONObject;

public class c extends ActionSupport<JSONObject> {
    public c(Context context) {
        super(context);
        this.httpHelper.setMethod(1);
    }

    @Override
    protected String getURL() {
        return formatUrl("player/setRealName");
    }

    @Override
    public JSONObject onPrepareData(IPlugin iPlugin, Object... objArr) throws YmnsdkException {
        this.gContent.put("type", (String) objArr[0]);
        this.gContent.put("area_id", (String) objArr[1]);
        this.gContent.put("numid", (String) objArr[2]);
        this.gContent.put("name", SecurityUtil.getInstance().urlEncode((String) objArr[3]));
        this.gContent.put("identity_number", (String) objArr[4]);
        this.gContent.put("appid", "1148");
        this.gContent.put("time", String.valueOf(System.currentTimeMillis() / 1000));
        this.gContent.put("sign", SecurityUtil.getInstance().getSign(this.gContent, "c986f7b40c468a3a3b1087d0eb08628b"));
        return null;
    }

    @Override
    protected JSONObject onSuccess(ActionSupport.ResponseResult responseResult) throws Exception {
        Log.i("Ymn_ActionSupport", "request identity status resource success : " + responseResult.srcRes);
        return responseResult.srcObj;
    }
}
