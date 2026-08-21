package com.huawei.hms.push;

public class p extends java.lang.Thread {
    public android.content.Context a;
    public com.huawei.hms.push.k b;

    public p(android.content.Context r1, com.huawei.hms.push.k r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public static android.content.Intent a(android.content.Context r5, com.huawei.hms.push.k r6) {
            java.lang.String r0 = "PushSelfShowLog"
            r1 = 0
            if (r6 != 0) goto L6
            return r1
        L6:
            java.lang.String r2 = r6.d()
            android.content.Intent r2 = com.huawei.hms.push.q.b(r5, r2)
            java.lang.String r3 = r6.n()
            if (r3 == 0) goto L62
            java.lang.String r3 = r6.n()     // Catch: java.lang.Exception -> L48
            r4 = 0
            android.content.Intent r3 = android.content.Intent.parseUri(r3, r4)     // Catch: java.lang.Exception -> L48
            r3.setSelector(r1)     // Catch: java.lang.Exception -> L48
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L48
            r1.<init>()     // Catch: java.lang.Exception -> L48
            java.lang.String r4 = "Intent.parseUri(msg.intentUri, 0), action:"
            r1.append(r4)     // Catch: java.lang.Exception -> L48
            java.lang.String r4 = r3.getAction()     // Catch: java.lang.Exception -> L48
            r1.append(r4)     // Catch: java.lang.Exception -> L48
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L48
            com.huawei.hms.support.log.HMSLog.d(r0, r1)     // Catch: java.lang.Exception -> L48
            java.lang.String r6 = r6.d()     // Catch: java.lang.Exception -> L48
            java.lang.Boolean r5 = com.huawei.hms.push.q.a(r5, r6, r3)     // Catch: java.lang.Exception -> L48
            boolean r5 = r5.booleanValue()     // Catch: java.lang.Exception -> L48
            if (r5 == 0) goto L87
            r2 = r3
            goto L87
        L48:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r1 = "intentUri error,"
            r6.append(r1)
            java.lang.String r5 = r5.toString()
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            com.huawei.hms.support.log.HMSLog.w(r0, r5)
            goto L87
        L62:
            java.lang.String r0 = r6.a()
            if (r0 == 0) goto L80
            android.content.Intent r0 = new android.content.Intent
            java.lang.String r1 = r6.a()
            r0.<init>(r1)
            java.lang.String r1 = r6.d()
            java.lang.Boolean r5 = com.huawei.hms.push.q.a(r5, r1, r0)
            boolean r5 = r5.booleanValue()
            if (r5 == 0) goto L80
            r2 = r0
        L80:
            java.lang.String r5 = r6.d()
            r2.setPackage(r5)
        L87:
            return r2
    }

    public final boolean a(android.content.Context r2) {
            r1 = this;
            com.huawei.hms.push.k r0 = r1.b
            java.lang.String r0 = r0.d()
            boolean r2 = com.huawei.hms.push.q.c(r2, r0)
            return r2
    }

    public final boolean b(android.content.Context r3) {
            r2 = this;
            com.huawei.hms.push.k r0 = r2.b
            java.lang.String r0 = r0.i()
            java.lang.String r1 = "cosa"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L13
            boolean r3 = r2.a(r3)
            return r3
        L13:
            r3 = 1
            return r3
    }

    public final boolean b(android.content.Context r3, com.huawei.hms.push.k r4) {
            r2 = this;
            java.lang.String r0 = r4.i()
            java.lang.String r1 = "cosa"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L1b
            android.content.Intent r3 = a(r3, r4)
            if (r3 != 0) goto L1b
            java.lang.String r3 = "PushSelfShowLog"
            java.lang.String r4 = "launchCosaApp,intent == null"
            com.huawei.hms.support.log.HMSLog.d(r3, r4)
            r3 = 1
            goto L1c
        L1b:
            r3 = 0
        L1c:
            return r3
    }

    @Override
    public void run() {
            r3 = this;
            java.lang.String r0 = "PushSelfShowLog"
            java.lang.String r1 = "enter run()"
            com.huawei.hms.support.log.HMSLog.i(r0, r1)
            android.content.Context r1 = r3.a     // Catch: java.lang.Exception -> L22
            boolean r1 = r3.b(r1)     // Catch: java.lang.Exception -> L22
            if (r1 == 0) goto L2a
            android.content.Context r1 = r3.a     // Catch: java.lang.Exception -> L22
            com.huawei.hms.push.k r2 = r3.b     // Catch: java.lang.Exception -> L22
            boolean r1 = r3.b(r1, r2)     // Catch: java.lang.Exception -> L22
            if (r1 == 0) goto L1a
            return
        L1a:
            android.content.Context r1 = r3.a     // Catch: java.lang.Exception -> L22
            com.huawei.hms.push.k r2 = r3.b     // Catch: java.lang.Exception -> L22
            com.huawei.hms.push.o.a(r1, r2)     // Catch: java.lang.Exception -> L22
            goto L2a
        L22:
            r1 = move-exception
            java.lang.String r1 = r1.toString()
            com.huawei.hms.support.log.HMSLog.e(r0, r1)
        L2a:
            return
    }
}
