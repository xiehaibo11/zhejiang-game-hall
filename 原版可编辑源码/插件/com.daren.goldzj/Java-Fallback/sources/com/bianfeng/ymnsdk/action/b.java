package com.bianfeng.ymnsdk.action;

import android.content.Context;
import android.util.Log;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.security.SecurityUtil;
import org.json.JSONObject;

public class b extends ActionSupport<JSONObject> {
    public b(Context r2) {
        super(r2);
        this.httpHelper.setMethod(1);
    }

    @Override
    protected String getURL() {
        return formatUrl("player/getRealName");
    }

    @Override
    public JSONObject onPrepareData(IPlugin r5, Object... r6) throws YmnsdkException {
        this.gContent.put("type", (String) r6[0]);
        this.gContent.put("area_id", (String) r6[1]);
        this.gContent.put("numid", (String) r6[2]);
        this.gContent.put("appid", "1148");
        this.gContent.put("time", String.valueOf(System.currentTimeMillis() / 1000));
        this.gContent.put("sign", SecurityUtil.getInstance().getSign(this.gContent, "c986f7b40c468a3a3b1087d0eb08628b"));
        return null;
    }

    @Override
    protected JSONObject onSuccess(ActionSupport.ResponseResult r1) throws Exception {
        return onSuccess(r1);
    }

    @Override
    protected JSONObject onSuccess(ActionSupport.ResponseResult r3) throws YmnsdkException {
        Log.i("Ymn_ActionSupport", "request identity status resource success : " + r3.dataAsString());
        return r3.data;
    }
}
