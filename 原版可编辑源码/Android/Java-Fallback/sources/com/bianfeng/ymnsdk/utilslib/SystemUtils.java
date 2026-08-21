package com.bianfeng.ymnsdk.utilslib;

public class SystemUtils {
    protected SystemUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String createTransactionId() {
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r0 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r0 = r0.getUuid()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.bianfeng.ymnsdk.utilslib.device.DeviceInfo r2 = com.bianfeng.ymnsdk.utilslib.device.DeviceInfo.getInstance()
            java.lang.String r2 = r2.getDeviceId()
            r1.append(r2)
            r1.append(r0)
            long r2 = java.lang.System.currentTimeMillis()
            r1.append(r2)
            r2 = 3
            java.lang.String r2 = getRandom(r2)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.bianfeng.ymnsdk.utilslib.security.Md5Utils.md5(r1)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L39
            r1 = r0
        L39:
            return r1
    }

    public static java.lang.String getRFC3339(java.lang.Long r3) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat     // Catch: java.lang.Exception -> Lc
            java.lang.String r1 = "yyyy-MM-dd'T'HH:mm:ss.SSSZZZZZ"
            r0.<init>(r1)     // Catch: java.lang.Exception -> Lc
            java.lang.String r0 = r0.format(r3)     // Catch: java.lang.Exception -> Lc
            return r0
        Lc:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "RFC3339:"
            r1.append(r2)
            java.lang.String r2 = r0.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r1)
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r1 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r1.<init>(r0)
            throw r1
    }

    public static java.lang.String getRandom(int r7) {
            java.lang.String r0 = ""
            r1 = 0
        L3:
            if (r1 >= r7) goto L24
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            double r3 = java.lang.Math.random()
            r5 = 4621819117588971520(0x4024000000000000, double:10.0)
            double r3 = r3 * r5
            int r3 = (int) r3
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r2.append(r3)
            java.lang.String r0 = r2.toString()
            int r1 = r1 + 1
            goto L3
        L24:
            return r0
    }
}
