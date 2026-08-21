package com.ymnsdk.replugin.action;

import android.content.Context;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.action.ActionSupport;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class RequestSilentUpdateFilterAction extends ActionSupport<JSONObject> {
    String mUrl;

    public RequestSilentUpdateFilterAction(Context context, String str) {
        super(context);
        this.httpHelper.setMethod(2);
        this.mUrl = str;
    }

    @Override
    public JSONObject onPrepareData(Object... objArr) throws Exception {
        try {
            return new JSONObject(GsonUtils.getInstance().toJson(objArr[0]));
        } catch (Exception unused) {
            return new JSONObject();
        }
    }

    @Override
    protected String getURL() {
        return this.mUrl;
    }

    @Override
    protected JSONObject onSuccess(ActionSupport.ResponseResult responseResult) throws Exception {
        return new JSONObject(responseResult.dataAsString());
    }
}
