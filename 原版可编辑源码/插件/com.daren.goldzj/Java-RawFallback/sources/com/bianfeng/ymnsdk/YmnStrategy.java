package com.bianfeng.ymnsdk;

public class YmnStrategy {
    public static final int STRATEGY_INNER_PROGRESS = 1;
    public static final int STRATEGY_INNER_TOAST_WARN = 2;
    public static final int STRATEGY_NONE = 0;
    private static int flags = 3;

    static {
            return
    }

    public YmnStrategy() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void addStrategy(int r2) {
            int r0 = com.bianfeng.ymnsdk.YmnStrategy.flags
            r0 = r0 | r2
            com.bianfeng.ymnsdk.YmnStrategy.flags = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "add addStrategy "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.bianfeng.ymnsdk.util.Logger.d(r2)
            return
    }

    protected static java.util.LinkedHashMap<java.lang.String, java.lang.String> arrayParamersAsMap(java.lang.String... r1) {
            r0 = 0
            r1 = r1[r0]     // Catch: java.lang.Exception -> L8
            java.util.LinkedHashMap r1 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.getLinkedHashMapFromStr(r1)     // Catch: java.lang.Exception -> L8
            return r1
        L8:
            r1 = move-exception
            r1.printStackTrace()
            java.util.LinkedHashMap r1 = new java.util.LinkedHashMap
            r1.<init>()
            return r1
    }

    protected static boolean isJsonParamers(java.lang.String... r3) {
            r0 = 0
            if (r3 == 0) goto Lf
            int r1 = r3.length
            r2 = 1
            if (r1 == r2) goto L8
            goto Lf
        L8:
            r3 = r3[r0]
            boolean r3 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.isJsonObject(r3)
            return r3
        Lf:
            return r0
    }

    public static void setStrategys(int r0) {
            com.bianfeng.ymnsdk.YmnStrategy.flags = r0
            return
    }

    public static boolean withStrategy(int r1) {
            int r0 = com.bianfeng.ymnsdk.YmnStrategy.flags
            r0 = r0 & r1
            if (r0 != r1) goto L7
            r1 = 1
            goto L8
        L7:
            r1 = 0
        L8:
            return r1
    }
}
