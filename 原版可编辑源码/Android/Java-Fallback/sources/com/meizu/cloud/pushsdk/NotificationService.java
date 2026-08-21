package com.meizu.cloud.pushsdk;

public class NotificationService extends android.app.IntentService {
    public NotificationService() {
            r1 = this;
            java.lang.String r0 = "NotificationService"
            r1.<init>(r0)
            return
    }

    public NotificationService(java.lang.String r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public java.lang.String a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 != 0) goto L30
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L30
            android.content.Intent r0 = new android.content.Intent
            r0.<init>(r4)
            r0.setPackage(r3)
            android.content.pm.PackageManager r3 = r2.getPackageManager()
            r4 = 0
            java.util.List r3 = r3.queryBroadcastReceivers(r0, r4)
            if (r3 == 0) goto L30
            int r0 = r3.size()
            if (r0 <= 0) goto L30
            java.lang.Object r3 = r3.get(r4)
            android.content.pm.ResolveInfo r3 = (android.content.pm.ResolveInfo) r3
            android.content.pm.ActivityInfo r3 = r3.activityInfo
            java.lang.String r1 = r3.name
        L30:
            return r1
    }

    public void a(android.content.Intent r10) {
            r9 = this;
            java.lang.String r0 = r9.getPackageName()
            java.lang.String r1 = r10.getAction()
            java.lang.String r0 = r9.a(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r2 = "NotificationService"
            if (r1 == 0) goto L4a
            r0 = 2005(0x7d5, float:2.81E-42)
            java.lang.String r1 = "reflectReceiver sendbroadcast"
            com.meizu.cloud.pushsdk.util.d.a(r9, r10, r1, r0)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = " reflectReceiver error: receiver for: "
            r0.append(r1)
            java.lang.String r1 = r10.getAction()
            r0.append(r1)
            java.lang.String r1 = " not found, package: "
            r0.append(r1)
            java.lang.String r1 = r9.getPackageName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r0)
            java.lang.String r0 = r9.getPackageName()
            r10.setPackage(r0)
            r9.sendBroadcast(r10)
            goto Lbe
        L4a:
            java.lang.String r1 = "reflectReceiver startservice"
            r3 = 2003(0x7d3, float:2.807E-42)
            com.meizu.cloud.pushsdk.util.d.a(r9, r10, r1, r3)     // Catch: java.lang.Exception -> La0
            java.lang.String r1 = r9.getPackageName()     // Catch: java.lang.Exception -> La0
            r10.setClassName(r1, r0)     // Catch: java.lang.Exception -> La0
            com.meizu.cloud.pushsdk.b.b.a r0 = com.meizu.cloud.pushsdk.b.b.a.a(r0)     // Catch: java.lang.Exception -> La0
            r1 = 0
            r3 = r1
            java.lang.Class[] r3 = (java.lang.Class[]) r3     // Catch: java.lang.Exception -> La0
            com.meizu.cloud.pushsdk.b.b.b r0 = r0.a(r3)     // Catch: java.lang.Exception -> La0
            java.lang.Object[] r1 = (java.lang.Object[]) r1     // Catch: java.lang.Exception -> La0
            com.meizu.cloud.pushsdk.b.b.d r0 = r0.a(r1)     // Catch: java.lang.Exception -> La0
            boolean r1 = r0.a     // Catch: java.lang.Exception -> La0
            if (r1 == 0) goto Lbe
            T r1 = r0.b     // Catch: java.lang.Exception -> La0
            if (r1 == 0) goto Lbe
            java.lang.String r1 = "Reflect MzPushReceiver true"
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r1)     // Catch: java.lang.Exception -> La0
            T r1 = r0.b     // Catch: java.lang.Exception -> La0
            com.meizu.cloud.pushsdk.b.b.a r1 = com.meizu.cloud.pushsdk.b.b.a.a(r1)     // Catch: java.lang.Exception -> La0
            java.lang.String r3 = "onReceive"
            r4 = 2
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> La0
            java.lang.Class<android.content.Context> r6 = android.content.Context.class
            r7 = 0
            r5[r7] = r6     // Catch: java.lang.Exception -> La0
            java.lang.Class<android.content.Intent> r6 = android.content.Intent.class
            r8 = 1
            r5[r8] = r6     // Catch: java.lang.Exception -> La0
            com.meizu.cloud.pushsdk.b.b.c r1 = r1.a(r3, r5)     // Catch: java.lang.Exception -> La0
            T r0 = r0.b     // Catch: java.lang.Exception -> La0
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> La0
            android.content.Context r4 = r9.getApplicationContext()     // Catch: java.lang.Exception -> La0
            r3[r7] = r4     // Catch: java.lang.Exception -> La0
            r3[r8] = r10     // Catch: java.lang.Exception -> La0
            r1.a(r0, r3)     // Catch: java.lang.Exception -> La0
            goto Lbe
        La0:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "reflect e: "
            r1.append(r3)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.i(r2, r1)
            java.lang.String r0 = r0.getMessage()
            r1 = 2004(0x7d4, float:2.808E-42)
            com.meizu.cloud.pushsdk.util.d.a(r9, r10, r0, r1)
        Lbe:
            return
    }

    @Override
    public void onDestroy() {
            r2 = this;
            java.lang.String r0 = "NotificationService"
            java.lang.String r1 = "NotificationService destroy"
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)
            super.onDestroy()
            return
    }

    @Override
    protected void onHandleIntent(android.content.Intent r6) {
            r5 = this;
            java.lang.String r0 = "NotificationService"
            r1 = 10
            android.os.Process.setThreadPriority(r1)
            if (r6 != 0) goto La
            return
        La:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb6
            r1.<init>()     // Catch: java.lang.Exception -> Lb6
            java.lang.String r2 = "onHandleIntent action "
            r1.append(r2)     // Catch: java.lang.Exception -> Lb6
            java.lang.String r2 = r6.getAction()     // Catch: java.lang.Exception -> Lb6
            r1.append(r2)     // Catch: java.lang.Exception -> Lb6
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Lb6
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r1)     // Catch: java.lang.Exception -> Lb6
            java.lang.String r1 = "method"
            r6.getStringExtra(r1)     // Catch: java.lang.Exception -> Lb6
            java.lang.String r1 = "command_type"
            java.lang.String r1 = r6.getStringExtra(r1)     // Catch: java.lang.Exception -> Lb6
            java.lang.String r2 = "com.meizu.flyme.push.intent.MESSAGE"
            java.lang.String r3 = r6.getAction()     // Catch: java.lang.Exception -> Lb6
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Exception -> Lb6
            if (r2 != 0) goto L54
            java.lang.String r2 = "com.meizu.flyme.push.intent.REGISTER.FEEDBACK"
            java.lang.String r3 = r6.getAction()     // Catch: java.lang.Exception -> Lb6
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Exception -> Lb6
            if (r2 != 0) goto L54
            java.lang.String r2 = "com.meizu.flyme.push.intent.UNREGISTER.FEEDBACK"
            java.lang.String r3 = r6.getAction()     // Catch: java.lang.Exception -> Lb6
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Exception -> Lb6
            if (r2 == 0) goto L52
            goto L54
        L52:
            r2 = 0
            goto L55
        L54:
            r2 = 1
        L55:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb6
            r3.<init>()     // Catch: java.lang.Exception -> Lb6
            java.lang.String r4 = "-- command_type -- "
            r3.append(r4)     // Catch: java.lang.Exception -> Lb6
            r3.append(r1)     // Catch: java.lang.Exception -> Lb6
            java.lang.String r4 = " legalAction "
            r3.append(r4)     // Catch: java.lang.Exception -> Lb6
            r3.append(r2)     // Catch: java.lang.Exception -> Lb6
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> Lb6
            com.meizu.cloud.pushinternal.DebugLogger.d(r0, r3)     // Catch: java.lang.Exception -> Lb6
            boolean r3 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Lb6
            if (r3 != 0) goto Lcf
            java.lang.String r3 = "reflect_receiver"
            boolean r1 = r3.equals(r1)     // Catch: java.lang.Exception -> Lb6
            if (r1 == 0) goto Lcf
            if (r2 == 0) goto Lcf
            java.lang.String r1 = "mz_push_control_message"
            java.lang.String r1 = r6.getStringExtra(r1)     // Catch: java.lang.Exception -> Lb6
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lb6
            r2.<init>()     // Catch: java.lang.Exception -> Lb6
            java.lang.String r3 = "control message is "
            r2.append(r3)     // Catch: java.lang.Exception -> Lb6
            r2.append(r1)     // Catch: java.lang.Exception -> Lb6
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lb6
            com.meizu.cloud.pushinternal.DebugLogger.i(r0, r2)     // Catch: java.lang.Exception -> Lb6
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Lb6
            if (r2 != 0) goto Lb2
            com.meizu.cloud.pushsdk.handler.a.c.b r2 = new com.meizu.cloud.pushsdk.handler.a.c.b     // Catch: java.lang.Exception -> Lb6
            r3 = 0
            r2.<init>(r1, r3, r3)     // Catch: java.lang.Exception -> Lb6
            com.meizu.cloud.pushsdk.handler.a.c.f r1 = r2.b()     // Catch: java.lang.Exception -> Lb6
            boolean r1 = r1.c()     // Catch: java.lang.Exception -> Lb6
            com.meizu.cloud.pushsdk.d.a.a(r5, r1)     // Catch: java.lang.Exception -> Lb6
        Lb2:
            r5.a(r6)     // Catch: java.lang.Exception -> Lb6
            goto Lcf
        Lb6:
            r6 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onHandleIntent error "
            r1.append(r2)
            java.lang.String r6 = r6.getMessage()
            r1.append(r6)
            java.lang.String r6 = r1.toString()
            com.meizu.cloud.pushinternal.DebugLogger.e(r0, r6)
        Lcf:
            return
    }

    @Override
    public boolean onUnbind(android.content.Intent r1) {
            r0 = this;
            boolean r1 = super.onUnbind(r1)
            return r1
    }
}
