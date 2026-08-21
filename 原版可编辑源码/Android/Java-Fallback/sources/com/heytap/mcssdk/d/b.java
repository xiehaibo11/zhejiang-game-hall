package com.heytap.mcssdk.d;

public class b extends com.heytap.mcssdk.d.c {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public com.heytap.msp.push.mode.BaseMode a(android.content.Context r2, int r3, android.content.Intent r4) {
            r1 = this;
            r0 = 4103(0x1007, float:5.75E-42)
            if (r0 == r3) goto Lf
            r0 = 4098(0x1002, float:5.743E-42)
            if (r0 == r3) goto Lf
            r0 = 4108(0x100c, float:5.757E-42)
            if (r0 != r3) goto Ld
            goto Lf
        Ld:
            r2 = 0
            return r2
        Lf:
            com.heytap.msp.push.mode.BaseMode r3 = r1.a(r4, r3)
            r4 = r3
            com.heytap.msp.push.mode.DataMessage r4 = (com.heytap.msp.push.mode.DataMessage) r4
            java.lang.String r0 = "push_transmit"
            com.heytap.mcssdk.f.a.a(r2, r0, r4)
            return r3
    }

    @Override
    public com.heytap.msp.push.mode.BaseMode a(android.content.Intent r5, int r6) {
            r4 = this;
            com.heytap.msp.push.mode.DataMessage r0 = new com.heytap.msp.push.mode.DataMessage     // Catch: java.lang.Exception -> L12c
            r0.<init>()     // Catch: java.lang.Exception -> L12c
            java.lang.String r1 = "messageID"
            java.lang.String r1 = r5.getStringExtra(r1)     // Catch: java.lang.Exception -> L12c
            java.lang.String r1 = com.heytap.mcssdk.utils.b.d(r1)     // Catch: java.lang.Exception -> L12c
            r0.setMessageID(r1)     // Catch: java.lang.Exception -> L12c
            java.lang.String r1 = "taskID"
            java.lang.String r1 = r5.getStringExtra(r1)     // Catch: java.lang.Exception -> L12c
            java.lang.String r1 = com.heytap.mcssdk.utils.b.d(r1)     // Catch: java.lang.Exception -> L12c
            r0.setTaskID(r1)     // Catch: java.lang.Exception -> L12c
            java.lang.String r1 = "globalID"
            java.lang.String r1 = r5.getStringExtra(r1)     // Catch: java.lang.Exception -> L12c
            java.lang.String r1 = com.heytap.mcssdk.utils.b.d(r1)     // Catch: java.lang.Exception -> L12c
            r0.setGlobalId(r1)     // Catch: java.lang.Exception -> L12c
            java.lang.String r1 = "appPackage"
            java.lang.String r1 = r5.getStringExtra(r1)     // Catch: java.lang.Exception -> L12c
            java.lang.String r1 = com.heytap.mcssdk.utils.b.d(r1)     // Catch: java.lang.Exception -> L12c
            r0.setAppPackage(r1)     // Catch: java.lang.Exception -> L12c
            java.lang.String r1 = "title"
            java.lang.String r1 = r5.getStringExtra(r1)     // Catch: java.lang.Exception -> L12c
            java.lang.String r1 = com.heytap.mcssdk.utils.b.d(r1)     // Catch: java.lang.Exception -> L12c
            r0.setTitle(r1)     // Catch: java.lang.Exception -> L12c
            java.lang.String r1 = "content"
            java.lang.String r1 = r5.getStringExtra(r1)     // Catch: java.lang.Exception -> L12c
            java.lang.String r1 = com.heytap.mcssdk.utils.b.d(r1)     // Catch: java.lang.Exception -> L12c
            r0.setContent(r1)     // Catch: java.lang.Exception -> L12c
            java.lang.String r1 = "description"
            java.lang.String r1 = r5.getStringExtra(r1)     // Catch: java.lang.Exception -> L12c
            java.lang.String r1 = com.heytap.mcssdk.utils.b.d(r1)     // Catch: java.lang.Exception -> L12c
            r0.setDescription(r1)     // Catch: java.lang.Exception -> L12c
            java.lang.String r1 = "notifyID"
            java.lang.String r1 = r5.getStringExtra(r1)     // Catch: java.lang.Exception -> L12c
            java.lang.String r1 = com.heytap.mcssdk.utils.b.d(r1)     // Catch: java.lang.Exception -> L12c
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L12c
            r3 = 0
            if (r2 == 0) goto L73
            r1 = r3
            goto L77
        L73:
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> L12c
        L77:
            r0.setNotifyID(r1)     // Catch: java.lang.Exception -> L12c
            java.lang.String r1 = "miniProgramPkg"
            java.lang.String r1 = r5.getStringExtra(r1)     // Catch: java.lang.Exception -> L12c
            java.lang.String r1 = com.heytap.mcssdk.utils.b.d(r1)     // Catch: java.lang.Exception -> L12c
            r0.setMiniProgramPkg(r1)     // Catch: java.lang.Exception -> L12c
            r0.setMessageType(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = "eventId"
            java.lang.String r6 = r5.getStringExtra(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = com.heytap.mcssdk.utils.b.d(r6)     // Catch: java.lang.Exception -> L12c
            r0.setEventId(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = "statistics_extra"
            java.lang.String r6 = r5.getStringExtra(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = com.heytap.mcssdk.utils.b.d(r6)     // Catch: java.lang.Exception -> L12c
            r0.setStatisticsExtra(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = "data_extra"
            java.lang.String r6 = r5.getStringExtra(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = com.heytap.mcssdk.utils.b.d(r6)     // Catch: java.lang.Exception -> L12c
            r0.setDataExtra(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = r4.a(r6)     // Catch: java.lang.Exception -> L12c
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L12c
            if (r1 == 0) goto Lbc
            goto Lc0
        Lbc:
            int r3 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Exception -> L12c
        Lc0:
            r0.setMsgCommand(r3)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = "balanceTime"
            java.lang.String r6 = r5.getStringExtra(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = com.heytap.mcssdk.utils.b.d(r6)     // Catch: java.lang.Exception -> L12c
            r0.setBalanceTime(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = "startDate"
            java.lang.String r6 = r5.getStringExtra(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = com.heytap.mcssdk.utils.b.d(r6)     // Catch: java.lang.Exception -> L12c
            r0.setStartDate(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = "endDate"
            java.lang.String r6 = r5.getStringExtra(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = com.heytap.mcssdk.utils.b.d(r6)     // Catch: java.lang.Exception -> L12c
            r0.setEndDate(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = "timeRanges"
            java.lang.String r6 = r5.getStringExtra(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = com.heytap.mcssdk.utils.b.d(r6)     // Catch: java.lang.Exception -> L12c
            r0.setTimeRanges(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = "rule"
            java.lang.String r6 = r5.getStringExtra(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = com.heytap.mcssdk.utils.b.d(r6)     // Catch: java.lang.Exception -> L12c
            r0.setRule(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = "forcedDelivery"
            java.lang.String r6 = r5.getStringExtra(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = com.heytap.mcssdk.utils.b.d(r6)     // Catch: java.lang.Exception -> L12c
            r0.setForcedDelivery(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = "distinctBycontent"
            java.lang.String r6 = r5.getStringExtra(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = com.heytap.mcssdk.utils.b.d(r6)     // Catch: java.lang.Exception -> L12c
            r0.setDistinctContent(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r6 = "appID"
            java.lang.String r5 = r5.getStringExtra(r6)     // Catch: java.lang.Exception -> L12c
            java.lang.String r5 = com.heytap.mcssdk.utils.b.d(r5)     // Catch: java.lang.Exception -> L12c
            r0.setAppId(r5)     // Catch: java.lang.Exception -> L12c
            return r0
        L12c:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "OnHandleIntent--"
            r6.append(r0)
            java.lang.String r5 = r5.getMessage()
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            com.heytap.mcssdk.utils.d.b(r5)
            r5 = 0
            return r5
    }

    public java.lang.String a(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            java.lang.String r1 = ""
            if (r0 == 0) goto L9
            return r1
        L9:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L15
            r0.<init>(r3)     // Catch: org.json.JSONException -> L15
            java.lang.String r3 = "msg_command"
            java.lang.String r1 = r0.optString(r3)     // Catch: org.json.JSONException -> L15
            goto L1d
        L15:
            r3 = move-exception
            java.lang.String r3 = r3.getMessage()
            com.heytap.mcssdk.utils.d.b(r3)
        L1d:
            return r1
    }
}
