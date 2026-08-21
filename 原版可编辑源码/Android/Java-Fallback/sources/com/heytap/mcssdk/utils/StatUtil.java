package com.heytap.mcssdk.utils;

public class StatUtil {
    private static final java.lang.String COUNT = "count";
    private static final int MCS_SUPPORT_VERSION = 1017;
    private static final java.lang.String STAT_LIST = "list";
    private static final java.lang.String TYPE = "type";

    public StatUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static boolean isSupportStatisticByMcs(android.content.Context r2) {
            com.heytap.mcssdk.PushService r0 = com.heytap.mcssdk.PushService.getInstance()
            java.lang.String r0 = r0.getMcsPackageName(r2)
            boolean r1 = com.heytap.mcssdk.utils.Utils.isExistPackage(r2, r0)
            if (r1 == 0) goto L18
            int r2 = com.heytap.mcssdk.utils.Utils.getVersionCode(r2, r0)
            r0 = 1017(0x3f9, float:1.425E-42)
            if (r2 < r0) goto L18
            r2 = 1
            goto L19
        L18:
            r2 = 0
        L19:
            return r2
    }

    public static void statisticMessage(android.content.Context r1, com.heytap.msp.push.mode.MessageStat r2) {
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r0.add(r2)
            statisticMessage(r1, r0)
            return
    }

    public static boolean statisticMessage(android.content.Context r2, java.util.List<com.heytap.msp.push.mode.MessageStat> r3) {
            java.util.LinkedList r0 = new java.util.LinkedList
            r0.<init>()
            r0.addAll(r3)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "isSupportStatisticByMcs:"
            r3.append(r1)
            boolean r1 = isSupportStatisticByMcs(r2)
            r3.append(r1)
            java.lang.String r1 = ",list size:"
            r3.append(r1)
            int r1 = r0.size()
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            com.heytap.mcssdk.utils.d.b(r3)
            int r3 = r0.size()
            if (r3 <= 0) goto L3d
            boolean r3 = isSupportStatisticByMcs(r2)
            if (r3 == 0) goto L3d
            boolean r2 = statisticMessageByMcs(r2, r0)
            return r2
        L3d:
            r2 = 0
            return r2
    }

    private static boolean statisticMessageByMcs(android.content.Context r3, java.util.List<com.heytap.msp.push.mode.MessageStat> r4) {
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L5b
            r0.<init>()     // Catch: java.lang.Exception -> L5b
            com.heytap.mcssdk.PushService r1 = com.heytap.mcssdk.PushService.getInstance()     // Catch: java.lang.Exception -> L5b
            java.lang.String r1 = r1.getReceiveSdkAction(r3)     // Catch: java.lang.Exception -> L5b
            r0.setAction(r1)     // Catch: java.lang.Exception -> L5b
            com.heytap.mcssdk.PushService r1 = com.heytap.mcssdk.PushService.getInstance()     // Catch: java.lang.Exception -> L5b
            java.lang.String r1 = r1.getMcsPackageName(r3)     // Catch: java.lang.Exception -> L5b
            r0.setPackage(r1)     // Catch: java.lang.Exception -> L5b
            java.lang.String r1 = "appPackage"
            java.lang.String r2 = r3.getPackageName()     // Catch: java.lang.Exception -> L5b
            r0.putExtra(r1, r2)     // Catch: java.lang.Exception -> L5b
            java.lang.String r1 = "type"
            r2 = 12291(0x3003, float:1.7223E-41)
            r0.putExtra(r1, r2)     // Catch: java.lang.Exception -> L5b
            java.lang.String r1 = "count"
            int r2 = r4.size()     // Catch: java.lang.Exception -> L5b
            r0.putExtra(r1, r2)     // Catch: java.lang.Exception -> L5b
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L5b
            r1.<init>()     // Catch: java.lang.Exception -> L5b
            java.util.Iterator r4 = r4.iterator()     // Catch: java.lang.Exception -> L5b
        L3d:
            boolean r2 = r4.hasNext()     // Catch: java.lang.Exception -> L5b
            if (r2 == 0) goto L51
            java.lang.Object r2 = r4.next()     // Catch: java.lang.Exception -> L5b
            com.heytap.msp.push.mode.MessageStat r2 = (com.heytap.msp.push.mode.MessageStat) r2     // Catch: java.lang.Exception -> L5b
            java.lang.String r2 = r2.toJsonObject()     // Catch: java.lang.Exception -> L5b
            r1.add(r2)     // Catch: java.lang.Exception -> L5b
            goto L3d
        L51:
            java.lang.String r4 = "list"
            r0.putStringArrayListExtra(r4, r1)     // Catch: java.lang.Exception -> L5b
            r3.startService(r0)     // Catch: java.lang.Exception -> L5b
            r3 = 1
            return r3
        L5b:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "statisticMessage--Exception"
            r4.append(r0)
            java.lang.String r3 = r3.getMessage()
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            com.heytap.mcssdk.utils.d.e(r3)
            r3 = 0
            return r3
    }
}
