package com.huawei.hms.push;

public class i {
    public static void a(android.content.Context r4, android.content.Intent r5) {
            java.lang.String r0 = "PushSelfShowLog"
            if (r4 == 0) goto L44
            if (r5 != 0) goto L7
            goto L44
        L7:
            java.lang.String r1 = r5.getAction()     // Catch: java.lang.Exception -> L4a java.lang.RuntimeException -> L50
            java.lang.String r2 = "com.huawei.intent.action.PUSH"
            boolean r2 = r2.equals(r1)     // Catch: java.lang.Exception -> L4a java.lang.RuntimeException -> L50
            if (r2 != 0) goto L23
            java.lang.String r2 = "com.huawei.push.msg.NOTIFY_MSG"
            boolean r2 = r2.equals(r1)     // Catch: java.lang.Exception -> L4a java.lang.RuntimeException -> L50
            if (r2 != 0) goto L23
            java.lang.String r2 = "com.huawei.intent.action.PUSH_DELAY_NOTIFY"
            boolean r1 = r2.equals(r1)     // Catch: java.lang.Exception -> L4a java.lang.RuntimeException -> L50
            if (r1 == 0) goto L56
        L23:
            java.lang.String r1 = "selfshow_info"
            byte[] r1 = r5.getByteArrayExtra(r1)     // Catch: java.lang.Exception -> L4a java.lang.RuntimeException -> L50
            java.lang.String r2 = "selfshow_token"
            byte[] r2 = r5.getByteArrayExtra(r2)     // Catch: java.lang.Exception -> L4a java.lang.RuntimeException -> L50
            if (r1 == 0) goto L3e
            if (r2 == 0) goto L3e
            int r3 = r1.length     // Catch: java.lang.Exception -> L4a java.lang.RuntimeException -> L50
            if (r3 == 0) goto L3e
            int r3 = r2.length     // Catch: java.lang.Exception -> L4a java.lang.RuntimeException -> L50
            if (r3 != 0) goto L3a
            goto L3e
        L3a:
            a(r4, r5, r1, r2)     // Catch: java.lang.Exception -> L4a java.lang.RuntimeException -> L50
            goto L56
        L3e:
            java.lang.String r4 = "self show info or token is null."
            com.huawei.hms.support.log.HMSLog.i(r0, r4)     // Catch: java.lang.Exception -> L4a java.lang.RuntimeException -> L50
            return
        L44:
            java.lang.String r4 = "enter SelfShowReceiver receiver, context or intent is null"
            com.huawei.hms.support.log.HMSLog.d(r0, r4)     // Catch: java.lang.Exception -> L4a java.lang.RuntimeException -> L50
            return
        L4a:
            java.lang.String r4 = "onReceive Exception."
            com.huawei.hms.support.log.HMSLog.d(r0, r4)
            goto L56
        L50:
            r4 = move-exception
            java.lang.String r5 = "onReceive RuntimeException."
            com.huawei.hms.support.log.HMSLog.e(r0, r5, r4)
        L56:
            return
    }

    public static void a(android.content.Context r6, android.content.Intent r7, com.huawei.hms.push.k r8) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "receive a selfshow message, the cmd type is "
            r0.append(r1)
            java.lang.String r1 = r8.i()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PushSelfShowLog"
            com.huawei.hms.support.log.HMSLog.i(r1, r0)
            java.lang.String r0 = r8.i()
            boolean r0 = com.huawei.hms.push.j.b(r0)
            if (r0 != 0) goto L25
            return
        L25:
            java.lang.String r0 = r8.c()
            long r2 = com.huawei.hms.push.q.a(r0)
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 != 0) goto L3c
            com.huawei.hms.push.p r7 = new com.huawei.hms.push.p
            r7.<init>(r6, r8)
            r7.start()
            goto L4b
        L3c:
            java.lang.String r8 = "waiting..."
            com.huawei.hms.support.log.HMSLog.d(r1, r8)
            java.lang.String r8 = r6.getPackageName()
            r7.setPackage(r8)
            com.huawei.hms.push.q.a(r6, r7, r2)
        L4b:
            return
    }

    public static void a(android.content.Context r2, android.content.Intent r3, java.lang.String r4, com.huawei.hms.push.k r5, int r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "receive a selfshow user handle message eventId = "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "PushSelfShowLog"
            com.huawei.hms.support.log.HMSLog.d(r1, r0)
            java.lang.String r0 = "-1"
            boolean r0 = r0.equals(r4)
            if (r0 != 0) goto L22
            com.huawei.hms.push.q.a(r2, r3)
            goto L25
        L22:
            com.huawei.hms.push.q.a(r2, r6)
        L25:
            java.lang.String r3 = "1"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L41
            com.huawei.hms.push.j r3 = new com.huawei.hms.push.j
            r3.<init>(r2, r5)
            r3.c()
            java.lang.String r3 = r5.p()
            java.lang.String r4 = r5.b()
            com.huawei.hms.push.utils.PluginUtil.onNotificationClicked(r2, r3, r4)
            goto L5a
        L41:
            java.lang.String r3 = "2"
            boolean r4 = r3.equals(r4)
            if (r4 == 0) goto L55
            java.lang.String r4 = r5.p()
            java.lang.String r5 = r5.b()
            com.huawei.hms.push.e.a(r2, r4, r5, r3)
            goto L5a
        L55:
            java.lang.String r2 = "other event"
            com.huawei.hms.support.log.HMSLog.d(r1, r2)
        L5a:
            return
    }

    public static void a(android.content.Context r4, android.content.Intent r5, byte[] r6, byte[] r7) {
            java.lang.String r0 = "selfshow_event_id"
            java.lang.String r0 = r5.getStringExtra(r0)
            java.lang.String r1 = "selfshow_notify_id"
            r2 = 0
            int r1 = r5.getIntExtra(r1, r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "get notifyId:"
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "PushSelfShowLog"
            com.huawei.hms.support.log.HMSLog.i(r3, r2)
            com.huawei.hms.push.k r2 = new com.huawei.hms.push.k
            r2.<init>(r6, r7)
            boolean r6 = r2.z()
            if (r6 != 0) goto L34
            java.lang.String r4 = "parseMessage failed"
            com.huawei.hms.support.log.HMSLog.d(r3, r4)
            return
        L34:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "onReceive the msg id = "
            r6.append(r7)
            java.lang.String r7 = r2.p()
            r6.append(r7)
            java.lang.String r7 = ",and cmd is "
            r6.append(r7)
            java.lang.String r7 = r2.i()
            r6.append(r7)
            java.lang.String r7 = ",and the eventId is "
            r6.append(r7)
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            com.huawei.hms.support.log.HMSLog.i(r3, r6)
            if (r0 != 0) goto L66
            a(r4, r5, r2)
            goto L69
        L66:
            a(r4, r5, r0, r2, r1)
        L69:
            return
    }
}
