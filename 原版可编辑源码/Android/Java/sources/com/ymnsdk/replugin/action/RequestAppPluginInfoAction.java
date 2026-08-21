package com.ymnsdk.replugin.action;

import android.content.Context;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.action.ActionSupport;
import com.ymnsdk.replugin.entity.AppPluginInfo;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
public class RequestAppPluginInfoAction extends ActionSupport<AppPluginInfo> {
    String requestParams;

    public RequestAppPluginInfoAction(Context context) {
        super(context);
        this.requestParams = "";
        this.httpHelper.setMethod(1);
    }

    @Override
    public JSONObject onPrepareData(Object... objArr) throws Exception {
        return new JSONObject();
    }

    @Override
    protected String getURL() {
        return URLManager.getHost() + "/app/" + this.requestParams + "/manifest.json";
    }

    public void setRequestParams(String str) {
        this.requestParams = str;
    }

    @Override
    protected AppPluginInfo onSuccess(ActionSupport.ResponseResult responseResult) throws Exception {
        return (AppPluginInfo) GsonUtils.getInstance().fromJson(responseResult.dataAsString(), AppPluginInfo.class);
    }
}
