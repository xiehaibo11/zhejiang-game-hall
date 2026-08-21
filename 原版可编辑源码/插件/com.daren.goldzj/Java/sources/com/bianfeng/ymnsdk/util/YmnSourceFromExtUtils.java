package com.bianfeng.ymnsdk.util;

import android.text.TextUtils;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

public class YmnSourceFromExtUtils {
    public static String getSource(String str) {
        if (YmnGsonUtil.isJsonObject(str)) {
            try {
                String str2 = (String) YmnGsonUtil.getMapFrom(str).get(IPaymentFeature.ARG_SOURCE_V2);
                return TextUtils.isEmpty(str2) ? "YMN" : str2;
            } catch (Exception unused) {
            }
        }
        return "YMN";
    }
}
