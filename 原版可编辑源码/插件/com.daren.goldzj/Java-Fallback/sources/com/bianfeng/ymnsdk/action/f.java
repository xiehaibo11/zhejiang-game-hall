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
    public f(Context r1) {
        super(r1);
    }

    @Override
    protected String getURL() {
        return formatUrl("pay/orderQuery");
    }

    @Override
    public JSONObject onPrepareData(IPlugin r3, Object... r4) throws YmnsdkException {
        JSONObject r32 = new JSONObject();
        r32.put(IPaymentFeature.ARG_CP_ORDER_ID, r4[0]);     // Catch: Exception -> L7
        r32.put("order_type", r4[1]);     // Catch: Exception -> L7
        return r32;
    L7:
        e = move-exception;
        throw new YmnsdkException(e);
    }

    @Override
    protected Boolean onSuccess(ActionSupport.ResponseResult r1) throws Exception {
        return onSuccess(r1);
    }

    @Override
    protected Boolean onSuccess(ActionSupport.ResponseResult r7) throws YmnsdkException {
        Iterator<String> r0 = r7.data.keys();
        ArrayList r1 = new ArrayList();
    L4:
        if (r0.hasNext() == false) goto L8;
        String r2 = r0.next();
        if ("sign".equals(r2) == true) goto L4;
        r1.add(r2);
        goto L4
    L8:
        TreeMap r02 = new TreeMap();
        Iterator r12 = r1.iterator();
    L10:
        if (r12.hasNext() == false) goto L12;
        String r22 = (String) r12.next();
        r02.put(r22, SecurityUtil.getInstance().urlEncode(r7.data.optString(r22)));
        goto L10
    L12:
        StringBuilder r13 = new StringBuilder();
        Iterator r03 = r02.entrySet().iterator();
    L14:
        if (r03.hasNext() == false) goto L16;
        Map.Entry r23 = (Map.Entry) r03.next();
        r13.append("&" + ((String) r23.getKey()) + "=" + ((String) r23.getValue()));
        goto L14
    L16:
        boolean r04 = SecurityUtil.getInstance().doCheck(r13.substring(1), r7.data.optString("sign"));
        if (r04 == true) goto L20;
        r7.msg = "非法响应，请注意订单安全性";
    L20:
        return Boolean.valueOf(r04);
    }
}
