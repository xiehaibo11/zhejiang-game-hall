package com.bianfeng.ymnsdk.action;

import android.content.Context;
import android.util.Log;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.security.SecurityUtil;
import org.json.JSONObject;

/* JADX INFO: compiled from: RequestIdentityUpdateAction.java */
/* JADX INFO: loaded from: classes.dex */
public class c extends ActionSupport<JSONObject> {
    public c(Context context) {
        super(context);
        this.httpHelper.setMethod(1);
    }

    @Override // com.bianfeng.ymnsdk.action.ActionSupport
    public JSONObject onPrepareData(IPlugin plugin, Object... datas) throws YmnsdkException {
        this.gContent.put("type", (String) datas[0]);
        this.gContent.put("area_id", (String) datas[1]);
        this.gContent.put("numid", (String) datas[2]);
        this.gContent.put("name", SecurityUtil.getInstance().urlEncode((String) datas[3]));
        this.gContent.put("identity_number", (String) datas[4]);
        this.gContent.put("appid", "1148");
        this.gContent.put("time", String.valueOf(System.currentTimeMillis() / 1000));
        this.gContent.put("sign", SecurityUtil.getInstance().getSign(this.gContent, "c986f7b40c468a3a3b1087d0eb08628b"));
        return null;
    }

    @Override // com.bianfeng.ymnsdk.action.ActionSupport
    protected String getURL() {
        return formatUrl("player/setRealName");
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.bianfeng.ymnsdk.action.ActionSupport
    public JSONObject onSuccess(ActionSupport.ResponseResult result) throws Exception {
        Log.i("Ymn_ActionSupport", "request identity status resource success : " + result.srcRes);
        return result.srcObj;
    }
}
