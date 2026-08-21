package com.ymnsdk.replugin.action;

import android.content.Context;
import com.ymnsdk.replugin.action.ActionSupport;
import org.json.JSONObject;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes4.dex
 */
/* JADX INFO: loaded from: classes.dex */
public class RequestPluginsInfoAction extends ActionSupport<JSONObject> {
    public RequestPluginsInfoAction(Context context) {
        super(context);
        this.httpHelper.setMethod(2);
    }

    @Override // com.ymnsdk.replugin.action.ActionSupport
    public JSONObject onPrepareData(Object... objArr) throws Exception {
        if (objArr[0] instanceof String) {
            try {
                return new JSONObject(String.valueOf(objArr[0]));
            } catch (Exception unused) {
                return new JSONObject();
            }
        }
        return new JSONObject();
    }

    @Override // com.ymnsdk.replugin.action.ActionSupport
    protected String getURL() {
        return String.format("%s/%s", URLManager.getHost(), "plugin/update");
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.ymnsdk.replugin.action.ActionSupport
    public JSONObject onSuccess(ActionSupport.ResponseResult responseResult) throws Exception {
        return new JSONObject(responseResult.dataAsString());
    }
}
