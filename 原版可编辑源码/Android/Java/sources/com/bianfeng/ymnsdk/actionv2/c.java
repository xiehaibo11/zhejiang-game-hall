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

public class c extends ActionSupportV2<String> {
    private TreeMap<String, String> a;
    private String b;

    public c(Context context) {
        super(context);
        this.httpHelper.setMethod(2);
        this.b = YmnDataFunUtils.getInstance().getInitTrace();
        this.a = this.httpHelper.getHeadersMap();
        this.b = YmnDataFunUtils.getInstance().getInitTrace();
        this.a.put("Content-Type", RequestParams.APPLICATION_JSON);
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

    @Override
    protected String onSuccess(ActionSupportV2.ResponseResult result) throws YmnsdkException {
        return result.getSrcRes();
    }
}
