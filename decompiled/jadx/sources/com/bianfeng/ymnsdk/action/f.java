package com.bianfeng.ymnsdk.action;

import android.content.Context;
import com.bianfeng.ymnsdk.action.ActionSupport;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.feature.protocol.IPlugin;
import com.bianfeng.ymnsdk.util.exception.YmnsdkException;
import com.bianfeng.ymnsdk.util.security.SecurityUtil;
import com.huawei.hms.framework.common.ContainerUtils;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;
import org.json.JSONObject;

/* JADX INFO: compiled from: RequestOrderStatusAction.java */
/* JADX INFO: loaded from: classes.dex */
public class f extends ActionSupport<Boolean> {
    public f(Context context) {
        super(context);
    }

    @Override // com.bianfeng.ymnsdk.action.ActionSupport
    public JSONObject onPrepareData(IPlugin plugin, Object... datas) throws YmnsdkException {
        JSONObject json = new JSONObject();
        try {
            json.put(IPaymentFeature.ARG_CP_ORDER_ID, datas[0]);
            json.put("order_type", datas[1]);
            return json;
        } catch (Exception e) {
            throw new YmnsdkException(e);
        }
    }

    @Override // com.bianfeng.ymnsdk.action.ActionSupport
    protected String getURL() {
        String url = formatUrl("pay/orderQuery");
        return url;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    /* JADX WARN: Can't rename method to resolve collision */
    @Override // com.bianfeng.ymnsdk.action.ActionSupport
    public Boolean onSuccess(ActionSupport.ResponseResult result) throws YmnsdkException {
        Iterator<String> iterator = result.data.keys();
        List<String> keys = new ArrayList<>();
        while (iterator.hasNext()) {
            String key = iterator.next();
            if (!"sign".equals(key)) {
                keys.add(key);
            }
        }
        TreeMap<String, String> mapping = new TreeMap<>();
        for (String key2 : keys) {
            mapping.put(key2, SecurityUtil.getInstance().urlEncode(result.data.optString(key2)));
        }
        StringBuilder sb = new StringBuilder();
        for (Map.Entry<String, String> entry : mapping.entrySet()) {
            sb.append("&" + entry.getKey() + ContainerUtils.KEY_VALUE_DELIMITER + entry.getValue());
        }
        String content = sb.substring(1);
        String sign = result.data.optString("sign");
        boolean isLegal = SecurityUtil.getInstance().doCheck(content, sign);
        if (!isLegal) {
            result.msg = "非法响应，请注意订单安全性";
        }
        return Boolean.valueOf(isLegal);
    }
}
