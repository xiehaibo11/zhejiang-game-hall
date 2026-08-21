package com.heytap.mcssdk.e;

public class b implements com.heytap.mcssdk.e.c {
    private static final int a = 1;


    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    private void a(android.content.Context r3, com.heytap.msp.push.mode.DataMessage r4) {
            r2 = this;
            if (r3 != 0) goto L8
            java.lang.String r3 = "context is null"
            com.heytap.mcssdk.utils.d.b(r3)
            return
        L8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Receive revokeMessage  extra : "
            r0.append(r1)
            java.lang.String r1 = r4.getStatisticsExtra()
            r0.append(r1)
            java.lang.String r1 = "notifyId :"
            r0.append(r1)
            int r1 = r4.getNotifyID()
            r0.append(r1)
            java.lang.String r1 = "messageId : "
            r0.append(r1)
            java.lang.String r1 = r4.getTaskID()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.heytap.mcssdk.utils.d.b(r0)
            java.lang.String r0 = "notification"
            java.lang.Object r0 = r3.getSystemService(r0)
            android.app.NotificationManager r0 = (android.app.NotificationManager) r0
            int r1 = r4.getNotifyID()
            r0.cancel(r1)
            r2.b(r3, r4)
            return
    }

    static void a(com.heytap.mcssdk.e.b r0, android.content.Context r1, com.heytap.msp.push.mode.DataMessage r2) {
            r0.a(r1, r2)
            return
    }

    private void b(android.content.Context r3, com.heytap.msp.push.mode.DataMessage r4) {
            r2 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r1.add(r4)
            java.lang.String r4 = r4.getEventId()
            r0.put(r4, r1)
            com.heytap.msp.push.statis.StatisticUtils.statisticEvent(r3, r0)
            return
    }

    @Override
    public void a(android.content.Context r3, com.heytap.msp.push.mode.BaseMode r4, com.heytap.msp.push.callback.IDataMessageCallBackService r5) {
            r2 = this;
            if (r4 != 0) goto L3
            return
        L3:
            int r0 = r4.getType()
            r1 = 4103(0x1007, float:5.75E-42)
            if (r0 != r1) goto L17
            com.heytap.msp.push.mode.DataMessage r4 = (com.heytap.msp.push.mode.DataMessage) r4
            if (r5 == 0) goto L17
            com.heytap.mcssdk.e.b$1 r0 = new com.heytap.mcssdk.e.b$1
            r0.<init>(r2, r4, r3, r5)
            com.heytap.mcssdk.utils.f.b(r0)
        L17:
            return
    }
}
