package com.bianfeng.ymnsdk.actionv2;

import android.content.Context;
import com.bianfeng.ymnsdk.actionv2.ActionSupportV2;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.YmnAppContext;
import com.bianfeng.ymnsdk.util.YmnDataFunUtils;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import java.util.TreeMap;
import org.json.JSONObject;

public class c extends ActionSupportV2<String> {
    private TreeMap<String, String> a;
    private String b;

    public c(Context r3) {
        super(r3);
        this.httpHelper.setMethod(2);
        this.b = YmnDataFunUtils.getInstance().getInitTrace();
        this.a = this.httpHelper.getHeadersMap();
        this.b = YmnDataFunUtils.getInstance().getInitTrace();
        this.a.put("Content-Type", "application/json");
        this.a.put("X-App-Id", "" + YmnAppContext.getSdkAppId());
        this.a.put("X-Package-Id", YmnAppContext.getConfigIdStr());
        this.a.put("X-Nonce-Str", this.b);
        this.a.put("X-Nonce-Str", this.b);
    }

    @Override
    protected String getURL() {
        return formatUrl("v2/trade/query");
    }

    @Override
    public JSONObject onPrepareData(IPlugin r2, Object... r3) throws YmnsdkException {
        String r22 = (String) r3[0];
        setPayloadEntity("", "", this.b);
        JSONObject r32 = new JSONObject();
        r32.put(IPaymentFeature.ARG_ORDER_NO_V2, r22);     // Catch: Exception -> L5
        return r32;
    L5:
        e = move-exception;
        throw new YmnsdkException(e);
    }

    @Override
    protected String onSuccess(ActionSupportV2.ResponseResult r1) throws Exception {
        return onSuccess(r1);
    }

    @Override
    protected String onSuccess(ActionSupportV2.ResponseResult r1) throws YmnsdkException {
        return r1.getSrcRes();
    }
}
