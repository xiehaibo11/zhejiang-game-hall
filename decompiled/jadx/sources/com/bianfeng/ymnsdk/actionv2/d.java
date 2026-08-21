package com.bianfeng.ymnsdk.actionv2;

import android.content.Context;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV2;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.loopj.android.http.RequestParams;
import java.util.Map;
import java.util.TreeMap;
import org.json.JSONObject;

/* JADX INFO: compiled from: RequestProductsActionV2.java */
/* JADX INFO: loaded from: classes.dex */
public class d extends ActionSupportV2<String> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private TreeMap<String, String> f1429a;
    private String b;

    public d(Context context) {
        super(context);
        this.httpHelper.setMethod(2);
        this.b = YmnDataFunUtils.getInstance().getInitTrace();
        this.f1429a = this.httpHelper.getHeadersMap();
        this.b = YmnDataFunUtils.getInstance().getInitTrace();
        this.f1429a.put("Content-Type", RequestParams.APPLICATION_JSON);
        this.f1429a.put("X-App-Id", "" + YmnAppContext.getSdkAppId());
        this.f1429a.put("X-Package-Id", YmnAppContext.getConfigIdStr());
        this.f1429a.put("X-Nonce-Str", this.b);
    }

    @Override // com.bianfeng.ymnsdk.actionv2.ActionSupportV2
    protected String getURL() {
        return formatUrl("v2/trade/goods");
    }

    @Override // com.bianfeng.ymnsdk.actionv2.ActionSupportV2
    public JSONObject onPrepareData(IPlugin plugin, Object... datas) throws YmnsdkException {
        Map<String, String> order = (Map) datas[0];
        setPayloadEntity(order.get("role_id"), order.get("role_name"), this.b);
        JSONObject object = new JSONObject();
        return object;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.bianfeng.ymnsdk.actionv2.ActionSupportV2
    public String onSuccess(ActionSupportV2.ResponseResult result) throws YmnsdkException {
        return result.getSrcRes();
    }
}
