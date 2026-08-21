package com.vivo.push.d;

final class v implements java.lang.Runnable {
    final android.content.Context a;
    final java.util.Map b;
    final com.vivo.push.d.u c;

    v(com.vivo.push.d.u r1, android.content.Context r2, java.util.Map r3) {
            r0 = this;
            r0.c = r1
            r0.a = r2
            r0.b = r3
            r0.<init>()
            return
    }

    @Override
    public final void run() {
            r5 = this;
            java.lang.String r0 = "OnNotificationClickTask"
            android.content.Context r1 = r5.a
            java.lang.String r1 = r1.getPackageName()
            android.content.Context r2 = r5.a
            java.lang.String r3 = "activity"
            java.lang.Object r2 = r2.getSystemService(r3)
            android.app.ActivityManager r2 = (android.app.ActivityManager) r2
            r3 = 100
            java.util.List r2 = r2.getRunningTasks(r3)     // Catch: java.lang.Exception -> L63
            if (r2 == 0) goto L69
            java.util.Iterator r2 = r2.iterator()     // Catch: java.lang.Exception -> L63
        L1e:
            boolean r3 = r2.hasNext()     // Catch: java.lang.Exception -> L63
            if (r3 == 0) goto L69
            java.lang.Object r3 = r2.next()     // Catch: java.lang.Exception -> L63
            android.app.ActivityManager$RunningTaskInfo r3 = (android.app.ActivityManager.RunningTaskInfo) r3     // Catch: java.lang.Exception -> L63
            android.content.ComponentName r3 = r3.topActivity     // Catch: java.lang.Exception -> L63
            java.lang.String r4 = r3.getPackageName()     // Catch: java.lang.Exception -> L63
            boolean r4 = r4.equals(r1)     // Catch: java.lang.Exception -> L63
            if (r4 == 0) goto L1e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L63
            java.lang.String r2 = "topClassName="
            r1.<init>(r2)     // Catch: java.lang.Exception -> L63
            java.lang.String r2 = r3.getClassName()     // Catch: java.lang.Exception -> L63
            r1.append(r2)     // Catch: java.lang.Exception -> L63
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L63
            com.vivo.push.util.p.d(r0, r1)     // Catch: java.lang.Exception -> L63
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Exception -> L63
            r1.<init>()     // Catch: java.lang.Exception -> L63
            r1.setComponent(r3)     // Catch: java.lang.Exception -> L63
            r2 = 335544320(0x14000000, float:6.4623485E-27)
            r1.setFlags(r2)     // Catch: java.lang.Exception -> L63
            java.util.Map r2 = r5.b     // Catch: java.lang.Exception -> L63
            com.vivo.push.d.u.a(r1, r2)     // Catch: java.lang.Exception -> L63
            android.content.Context r2 = r5.a     // Catch: java.lang.Exception -> L63
            r2.startActivity(r1)     // Catch: java.lang.Exception -> L63
            return
        L63:
            r1 = move-exception
            java.lang.String r2 = "start recentIntent is error"
            com.vivo.push.util.p.a(r0, r2, r1)
        L69:
            android.content.Context r1 = r5.a
            android.content.pm.PackageManager r1 = r1.getPackageManager()
            android.content.Context r2 = r5.a
            java.lang.String r2 = r2.getPackageName()
            android.content.Intent r1 = r1.getLaunchIntentForPackage(r2)
            if (r1 == 0) goto L8b
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r1.setFlags(r0)
            java.util.Map r0 = r5.b
            com.vivo.push.d.u.a(r1, r0)
            android.content.Context r0 = r5.a
            r0.startActivity(r1)
            return
        L8b:
            java.lang.String r1 = "LaunchIntent is null"
            com.vivo.push.util.p.a(r0, r1)
            return
    }
}
