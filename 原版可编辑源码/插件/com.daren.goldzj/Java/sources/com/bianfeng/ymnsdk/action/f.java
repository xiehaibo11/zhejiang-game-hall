package com.bianfeng.ymnsdk.action;

import android.content.Context;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.security.SecurityUtil;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Map;
import java.util.TreeMap;
import org.json.JSONObject;

public class f extends ActionSupport<Boolean> {
    public f(Context context) {
        super(context);
    }

    @Override
    protected String getURL() {
        return formatUrl("pay/orderQuery");
    }

    @Override
    public JSONObject onPrepareData(IPlugin iPlugin, Object... objArr) throws YmnsdkException {
        JSONObject jSONObject = new JSONObject();
        try {
            jSONObject.put(IPaymentFeature.ARG_CP_ORDER_ID, objArr[0]);
            jSONObject.put("order_type", objArr[1]);
            return jSONObject;
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    @Override
    protected Boolean onSuccess(ActionSupport.ResponseResult responseResult) throws YmnsdkException {
        Iterator<String> itKeys = responseResult.data.keys();
        ArrayList<String> arrayList = new ArrayList();
        while (itKeys.hasNext()) {
            String next = itKeys.next();
            if (!"sign".equals(next)) {
                arrayList.add(next);
            }
        }
        TreeMap treeMap = new TreeMap();
        for (String str : arrayList) {
            treeMap.put(str, SecurityUtil.getInstance().urlEncode(responseResult.data.optString(str)));
        }
        StringBuilder sb = new StringBuilder();
        for (Map.Entry entry : treeMap.entrySet()) {
            sb.append("&" + ((String) entry.getKey()) + "=" + ((String) entry.getValue()));
        }
        boolean zDoCheck = SecurityUtil.getInstance().doCheck(sb.substring(1), responseResult.data.optString("sign"));
        if (!zDoCheck) {
            responseResult.msg = "非法响应，请注意订单安全性";
        }
        return Boolean.valueOf(zDoCheck);
    }
}
