package com.bianfeng.ymnsdk.action;

import android.content.Context;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.google.gson.Gson;
import java.util.Map;
import org.json.JSONObject;

/* JADX INFO: compiled from: RequestOrderAction.java */
/* JADX INFO: loaded from: classes.dex */
public class e extends ActionSupport<Map<String, String>> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Map<String, String> f1424a;
    private Map<String, String> b;

    public e(Context context) {
        super(context);
    }

    @Override // com.bianfeng.ymnsdk.action.ActionSupport
    public JSONObject onPrepareData(IPlugin plugin, Object... datas) throws YmnsdkException {
        this.f1424a = (Map) datas[0];
        this.b = (Map) datas[1];
        JSONObject json = new JSONObject();
        try {
            json.put("platform_id", plugin.getPluginId());
            json.put("platform_name", plugin.getPluginName());
            json.put("platform_ver", plugin.getPluginVersion());
            json.put("isDebug", String.valueOf(plugin.isDebugMode() ? 1 : 0));
            Gson gson = new Gson();
            JSONObject data = new JSONObject(gson.toJson(this.f1424a));
            json.put("data", data);
            if (this.b != null) {
                JSONObject ext = new JSONObject(gson.toJson(this.b));
                json.put("ext", ext);
            }
            setTransactionId(YmnDataFunUtils.getInstance().getPayTrace());
            return json;
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    @Override // com.bianfeng.ymnsdk.action.ActionSupport
    protected String getURL() {
        String url = formatUrl("pay");
        YmnDataFunUtils.getInstance().payRequestOrder(url);
        return url;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.bianfeng.ymnsdk.action.ActionSupport
    public Map<String, String> onSuccess(ActionSupport.ResponseResult result) throws Exception {
        YmnDataFunUtils.getInstance().payResponseOrder(200, "下单成功", result.data.optString("trade_code"));
        this.f1424a.put("trade_code", result.data.optString("trade_code"));
        this.f1424a.put("client_callback", result.data.optString("client_callback"));
        this.f1424a.put("platform_callback", result.data.optString("platform_callback"));
        this.f1424a.put("platform_notify_url", result.data.optString("platform_notify_url"));
        return this.f1424a;
    }
}
