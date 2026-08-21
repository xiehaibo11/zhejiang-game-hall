package com.huawei.hms.support.hianalytics;

import android.content.Context;
import android.text.TextUtils;
import com.huawei.hms.support.hianalytics.HiAnalyticsConstant;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: compiled from: HiAnalyticsBase.java */
/* JADX INFO: loaded from: classes.dex */
public class a {
    protected static Map<String, String> getMapForBi(Context context, String str) {
        HashMap map = new HashMap();
        if (context != null && !TextUtils.isEmpty(str)) {
            String[] strArrSplit = str.split("\\.");
            if (strArrSplit.length >= 2) {
                String str2 = strArrSplit[0];
                String str3 = strArrSplit[1];
                map.put("service", str2);
                map.put("apiName", str3);
                map.put("package", context.getPackageName());
                map.put(HiAnalyticsConstant.HaKey.BI_KEY_BASE_VERSION, "5.3.0.301");
                map.put(HiAnalyticsConstant.HaKey.BI_KEY_CALLTMEI, String.valueOf(System.currentTimeMillis()));
            }
        }
        return map;
    }
}
