package com.heytap.msp.push.statis;

public class StatisticUtils {
    public StatisticUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean statisticEvent(android.content.Context r3, java.lang.String r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = r3.getPackageName()
            com.heytap.msp.push.mode.MessageStat r2 = new com.heytap.msp.push.mode.MessageStat
            r2.<init>(r1, r4)
            r0.add(r2)
            boolean r3 = com.heytap.mcssdk.utils.StatUtil.statisticMessage(r3, r0)
            return r3
    }

    public static boolean statisticEvent(android.content.Context r11, java.lang.String r12, com.heytap.msp.push.mode.DataMessage r13) {
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

    public static boolean statisticEvent(android.content.Context r4, java.util.List<java.lang.String> r5) {
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

    public static boolean statisticEvent(android.content.Context r16, java.util.Map<java.lang.String, java.util.List<com.heytap.msp.push.mode.DataMessage>> r17) {
            r0 = r17
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.String r10 = r16.getPackageName()
            java.util.ArrayList r11 = new java.util.ArrayList
            r11.<init>()
            java.util.Set r1 = r17.keySet()
            java.util.Iterator r12 = r1.iterator()
        L17:
            boolean r1 = r12.hasNext()
            if (r1 == 0) goto L66
            java.lang.Object r1 = r12.next()
            r13 = r1
            java.lang.String r13 = (java.lang.String) r13
            java.lang.Object r1 = r0.get(r13)
            java.util.List r1 = (java.util.List) r1
            if (r1 == 0) goto L5d
            java.util.Iterator r14 = r1.iterator()
        L30:
            boolean r1 = r14.hasNext()
            if (r1 == 0) goto L17
            java.lang.Object r1 = r14.next()
            com.heytap.msp.push.mode.DataMessage r1 = (com.heytap.msp.push.mode.DataMessage) r1
            com.heytap.msp.push.mode.MessageStat r15 = new com.heytap.msp.push.mode.MessageStat
            int r2 = r1.getMessageType()
            java.lang.String r4 = r1.getGlobalId()
            java.lang.String r5 = r1.getTaskID()
            r7 = 0
            java.lang.String r8 = r1.getStatisticsExtra()
            java.lang.String r9 = r1.getDataExtra()
            r1 = r15
            r3 = r10
            r6 = r13
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            r11.add(r15)
            goto L30
        L5d:
            com.heytap.msp.push.mode.MessageStat r1 = new com.heytap.msp.push.mode.MessageStat
            r1.<init>(r10, r13)
            r11.add(r1)
            goto L17
        L66:
            r1 = r16
            boolean r0 = com.heytap.mcssdk.utils.StatUtil.statisticMessage(r1, r11)
            return r0
    }
}
