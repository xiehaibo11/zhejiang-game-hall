package com.bianfeng.ymnsdk.util;

import android.text.TextUtils;
import com.bianfeng.ymnsdk.feature.protocol.IPaymentFeature;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;

public class YmnSourceFromExtUtils {
    public YmnSourceFromExtUtils() {
    }

    public static String getSource(String r2) {
        if (YmnGsonUtil.isJsonObject(r2) == true) goto L10;
    L8:
        return "YMN";
    L10:
        String r22 = (String) YmnGsonUtil.getMapFrom(r2).get(IPaymentFeature.ARG_SOURCE_V2);     // Catch: Exception -> L9
        if (TextUtils.isEmpty(r22) == false) goto L7;
        return "YMN";
    L7:
        return r22;
    }
}
