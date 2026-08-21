package com.bianfeng.paylib.utils;

import com.bianfeng.paylib.action.IPaymentFeature;
import com.bianfeng.thridlibrary.ThridSdk;
import com.bianfeng.utilslib.SignMd5Utils;
import com.bianfeng.utilslib.UtilsSdk;
import com.huawei.hms.framework.common.ContainerUtils;
import java.util.Map;
import java.util.TreeMap;

public class PaySignUtils {
    public static String sign(String str) {
        String webPayPrivateKey = UtilsSdk.getAppConfig().getWebPayPrivateKey();
        Map<String, Object> mapFromJsonWithObject = ThridSdk.getGson().fromJsonWithObject(str);
        TreeMap treeMap = new TreeMap();
        for (Map.Entry<String, Object> entry : mapFromJsonWithObject.entrySet()) {
            treeMap.put(entry.getKey(), entry.getValue());
        }
        StringBuilder sb = new StringBuilder();
        for (Map.Entry entry2 : treeMap.entrySet()) {
            String str2 = (String) entry2.getKey();
            Object value = entry2.getValue();
            if (IPaymentFeature.ARG_SHOP_ID.equalsIgnoreCase(str2) || IPaymentFeature.ARG_CHANNEL_ID.equalsIgnoreCase(str2) || IPaymentFeature.ARG_PRODUCT_QTY_V2.equalsIgnoreCase(str2) || "price".equalsIgnoreCase(str2)) {
                value = Integer.valueOf(Double.valueOf(value + "").intValue());
            }
            if ("client_info".equalsIgnoreCase(str2)) {
                value = ThridSdk.getGson().toJson(value);
            }
            sb.append(str2);
            sb.append(ContainerUtils.KEY_VALUE_DELIMITER);
            sb.append(value);
            sb.append("&");
        }
        String str3 = sb.toString() + webPayPrivateKey;
        UtilsSdk.getLogger().i("签名前-----" + str3);
        return SignMd5Utils.getInstance().md5(str3);
    }
}
