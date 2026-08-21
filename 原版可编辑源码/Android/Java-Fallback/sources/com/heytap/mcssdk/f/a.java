package com.heytap.mcssdk.f;

public class a {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean a(android.content.Context r3, java.lang.String r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = r3.getPackageName()
            com.heytap.msp.push.mode.MessageStat r2 = new com.heytap.msp.push.mode.MessageStat
            r2.<init>(r1, r4)
            r0.add(r2)
            boolean r3 = com.heytap.mcssdk.utils.StatUtil.statisticMessage(r3, r0)
            return r3
    }

    public static boolean a(android.content.Context r11, java.lang.String r12, com.heytap.msp.push.mode.DataMessage r13) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r3 = r11.getPackageName()
            if (r13 != 0) goto L11
            com.heytap.msp.push.mode.MessageStat r13 = new com.heytap.msp.push.mode.MessageStat
            r13.<init>(r3, r12)
            goto L2e
        L11:
            com.heytap.msp.push.mode.MessageStat r10 = new com.heytap.msp.push.mode.MessageStat
            int r2 = r13.getMessageType()
            java.lang.String r4 = r13.getGlobalId()
            java.lang.String r5 = r13.getTaskID()
            r7 = 0
            java.lang.String r8 = r13.getStatisticsExtra()
            java.lang.String r9 = r13.getDataExtra()
            r1 = r10
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            r13 = r10
        L2e:
            r0.add(r13)
            boolean r11 = com.heytap.mcssdk.utils.StatUtil.statisticMessage(r11, r0)
            return r11
    }

    public static boolean a(android.content.Context r4, java.util.List<java.lang.String> r5) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = r4.getPackageName()
            if (r5 == 0) goto L2a
            int r2 = r5.size()
            if (r2 == 0) goto L2a
            java.util.Iterator r5 = r5.iterator()
        L15:
            boolean r2 = r5.hasNext()
            if (r2 == 0) goto L2a
            java.lang.Object r2 = r5.next()
            java.lang.String r2 = (java.lang.String) r2
            com.heytap.msp.push.mode.MessageStat r3 = new com.heytap.msp.push.mode.MessageStat
            r3.<init>(r1, r2)
            r0.add(r3)
            goto L15
        L2a:
            boolean r4 = com.heytap.mcssdk.utils.StatUtil.statisticMessage(r4, r0)
            return r4
    }
}
