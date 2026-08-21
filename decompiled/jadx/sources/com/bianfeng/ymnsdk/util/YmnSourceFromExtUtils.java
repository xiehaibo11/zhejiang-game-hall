package com.bianfeng.ymnsdk.util;

import android.text.TextUtils;
import com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil;
import java.util.Map;

/* JADX INFO: loaded from: classes.dex */
public class YmnSourceFromExtUtils {
    public static String getSource(String ext) {
        if (!YmnGsonUtil.isJsonObject(ext)) {
            return "YMN";
        }
        try {
            Map<String, String> mapExt = YmnGsonUtil.getMapFrom(ext);
            String source = mapExt.get("source");
            return TextUtils.isEmpty(source) ? "YMN" : source;
        } catch (Exception e) {
            return "YMN";
        }
    }
}
