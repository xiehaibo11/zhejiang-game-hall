package com.bianfeng.ymnsdk.util;

public class YmnSourceFromExtUtils {
    public YmnSourceFromExtUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getSource(java.lang.String r2) {
            boolean r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.isJsonObject(r2)
            java.lang.String r1 = "YMN"
            if (r0 == 0) goto L1c
            java.util.Map r2 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.getMapFrom(r2)     // Catch: java.lang.Exception -> L1c
            java.lang.String r0 = "source"
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Exception -> L1c
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L1c
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L1c
            if (r0 == 0) goto L1b
            return r1
        L1b:
            return r2
        L1c:
            return r1
    }
}
