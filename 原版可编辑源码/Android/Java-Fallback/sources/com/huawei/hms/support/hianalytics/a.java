package com.huawei.hms.support.hianalytics;

public class a {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    protected static java.util.Map<java.lang.String, java.lang.String> getMapForBi(android.content.Context r3, java.lang.String r4) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            if (r3 == 0) goto L45
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 == 0) goto Le
            goto L45
        Le:
            java.lang.String r1 = "\\."
            java.lang.String[] r4 = r4.split(r1)
            int r1 = r4.length
            r2 = 2
            if (r1 < r2) goto L45
            r1 = 0
            r1 = r4[r1]
            r2 = 1
            r4 = r4[r2]
            java.lang.String r2 = "service"
            r0.put(r2, r1)
            java.lang.String r1 = "apiName"
            r0.put(r1, r4)
            java.lang.String r3 = r3.getPackageName()
            java.lang.String r4 = "package"
            r0.put(r4, r3)
            java.lang.String r3 = "baseVersion"
            java.lang.String r4 = "5.3.0.301"
            r0.put(r3, r4)
            long r3 = java.lang.System.currentTimeMillis()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r4 = "callTime"
            r0.put(r4, r3)
        L45:
            return r0
    }
}
