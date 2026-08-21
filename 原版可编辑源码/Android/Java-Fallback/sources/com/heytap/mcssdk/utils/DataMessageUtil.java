package com.heytap.mcssdk.utils;

public class DataMessageUtil {
    private static final java.lang.String TYPE = "type";

    public DataMessageUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public void appArrive(android.content.Context r4, java.lang.String r5) {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L34
            r0.<init>()     // Catch: java.lang.Exception -> L34
            com.heytap.mcssdk.PushService r1 = com.heytap.mcssdk.PushService.getInstance()     // Catch: java.lang.Exception -> L34
            java.lang.String r1 = r1.getReceiveSdkAction(r4)     // Catch: java.lang.Exception -> L34
            r0.setAction(r1)     // Catch: java.lang.Exception -> L34
            com.heytap.mcssdk.PushService r1 = com.heytap.mcssdk.PushService.getInstance()     // Catch: java.lang.Exception -> L34
            java.lang.String r1 = r1.getMcsPackageName(r4)     // Catch: java.lang.Exception -> L34
            r0.setPackage(r1)     // Catch: java.lang.Exception -> L34
            java.lang.String r1 = "appPackage"
            java.lang.String r2 = r4.getPackageName()     // Catch: java.lang.Exception -> L34
            r0.putExtra(r1, r2)     // Catch: java.lang.Exception -> L34
            java.lang.String r1 = "messageID"
            r0.putExtra(r1, r5)     // Catch: java.lang.Exception -> L34
            java.lang.String r5 = "type"
            r1 = 12312(0x3018, float:1.7253E-41)
            r0.putExtra(r5, r1)     // Catch: java.lang.Exception -> L34
            r4.startService(r0)     // Catch: java.lang.Exception -> L34
            goto L4d
        L34:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "statisticMessage--Exception"
            r5.append(r0)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.heytap.mcssdk.utils.d.e(r4)
        L4d:
            return
    }
}
