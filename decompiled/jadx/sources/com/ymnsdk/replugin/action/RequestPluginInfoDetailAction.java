package com.ymnsdk.replugin.action;

import android.content.Context;
import com.bianfeng.ymnsdk.utilslib.gson.GsonUtils;
import com.ymnsdk.replugin.action.ActionSupport;
import com.ymnsdk.replugin.entity.PluginInfo;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class RequestPluginInfoDetailAction extends ActionSupport<PluginInfo> {
    String murl;

    public RequestPluginInfoDetailAction(Context context) {
        super(context);
        this.murl = "";
        this.httpHelper.setMethod(1);
    }

    @Override // com.ymnsdk.replugin.action.ActionSupport
    public JSONObject onPrepareData(Object... objArr) throws Exception {
        return new JSONObject();
    }

    @Override // com.ymnsdk.replugin.action.ActionSupport
    protected String getURL() {
        return this.murl;
    }

    public void setURL(String str) {
        this.murl = str;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    /* JADX WARN: Can't rename method to resolve collision */
    @Override // com.ymnsdk.replugin.action.ActionSupport
    public PluginInfo onSuccess(ActionSupport.ResponseResult responseResult) throws Exception {
        return (PluginInfo) GsonUtils.getInstance().fromJson(responseResult.dataAsString(), PluginInfo.class);
    }
}
