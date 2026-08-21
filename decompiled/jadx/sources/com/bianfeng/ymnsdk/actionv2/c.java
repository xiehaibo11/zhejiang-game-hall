package com.bianfeng.ymnsdk.actionv2;

import android.content.Context;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV2;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.loopj.android.http.RequestParams;
import java.util.TreeMap;
import org.json.JSONObject;

/* JADX INFO: compiled from: RequestOrderStatusActionV2.java */
/* JADX INFO: loaded from: classes.dex */
public class c extends ActionSupportV2<String> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private TreeMap<String, String> f1428a;
    private String b;

    public c(Context context) {
        super(context);
        this.httpHelper.setMethod(2);
        this.b = YmnDataFunUtils.getInstance().getInitTrace();
        this.f1428a = this.httpHelper.getHeadersMap();
        this.b = YmnDataFunUtils.getInstance().getInitTrace();
        this.f1428a.put("Content-Type", RequestParams.APPLICATION_JSON);
        this.f1428a.put("X-App-Id", "" + YmnAppContext.getSdkAppId());
        this.f1428a.put("X-Package-Id", YmnAppContext.getConfigIdStr());
        this.f1428a.put("X-Nonce-Str", this.b);
        this.f1428a.put("X-Nonce-Str", this.b);
    }

    @Override // com.bianfeng.ymnsdk.actionv2.ActionSupportV2
    protected String getURL() {
        return formatUrl("v2/trade/query");
    }

    @Override // com.bianfeng.ymnsdk.actionv2.ActionSupportV2
    public JSONObject onPrepareData(IPlugin plugin, Object... datas) throws YmnsdkException {
        String orderid = (String) datas[0];
        setPayloadEntity("", "", this.b);
        JSONObject object = new JSONObject();
        try {
            object.put("order_no", orderid);
            return object;
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // com.bianfeng.ymnsdk.actionv2.ActionSupportV2
    public String onSuccess(ActionSupportV2.ResponseResult result) throws YmnsdkException {
        return result.getSrcRes();
    }
}
