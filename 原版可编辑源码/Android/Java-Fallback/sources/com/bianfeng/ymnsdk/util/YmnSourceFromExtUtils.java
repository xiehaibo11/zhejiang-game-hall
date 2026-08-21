package com.bianfeng.ymnsdk.util;

public class YmnSourceFromExtUtils {
    public YmnSourceFromExtUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String getSource(java.lang.String r4) {
            boolean r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.isJsonObject(r4)
            java.lang.String r1 = "YMN"
            if (r0 == 0) goto L1e
            java.util.Map r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.getMapFrom(r4)     // Catch: java.lang.Exception -> L1c
            java.lang.String r2 = "source"
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Exception -> L1c
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> L1c
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L1c
            if (r3 == 0) goto L1b
            return r1
        L1b:
            return r2
        L1c:
            r0 = move-exception
            return r1
        L1e:
            return r1
    }
}
