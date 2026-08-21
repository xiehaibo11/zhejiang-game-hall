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
            goto L3a
        L39:
            r0 = r1
        L3a:
            return r0
    }

    public static java.lang.String getRFC3339(java.lang.Long r2) throws com.bianfeng.ymnsdk.utilslib.exception.YmnException {
            java.text.SimpleDateFormat r0 = new java.text.SimpleDateFormat     // Catch: java.lang.Exception -> Lc
            java.lang.String r1 = "yyyy-MM-dd'T'HH:mm:ss.SSSZZZZZ"
            r0.<init>(r1)     // Catch: java.lang.Exception -> Lc
            java.lang.String r2 = r0.format(r2)     // Catch: java.lang.Exception -> Lc
            return r2
        Lc:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "RFC3339:"
            r0.append(r1)
            java.lang.String r1 = r2.getMessage()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.bianfeng.ymnsdk.utilslib.log.UtilsLogger.i(r0)
            com.bianfeng.ymnsdk.utilslib.exception.YmnException r0 = new com.bianfeng.ymnsdk.utilslib.exception.YmnException
            r0.<init>(r2)
            throw r0
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
            int r0 = (int) r3
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            int r1 = r1 + 1
            goto L3
        L24:
            return r0
    }
}
