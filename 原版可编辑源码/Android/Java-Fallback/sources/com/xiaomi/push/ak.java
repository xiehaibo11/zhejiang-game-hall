package com.xiaomi.push;

public class ak {
    public static boolean a(android.content.Context r1) {
            java.lang.String r0 = "keyguard"
            java.lang.Object r1 = r1.getSystemService(r0)     // Catch: java.lang.Exception -> Ld
            android.app.KeyguardManager r1 = (android.app.KeyguardManager) r1     // Catch: java.lang.Exception -> Ld
            boolean r1 = r1.inKeyguardRestrictedInputMode()     // Catch: java.lang.Exception -> Ld
            return r1
        Ld:
            r1 = move-exception
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            r1 = 0
            return r1
    }

    public static boolean b(android.content.Context r3) {
            android.content.IntentFilter r0 = new android.content.IntentFilter
            java.lang.String r1 = "android.intent.action.BATTERY_CHANGED"
            r0.<init>(r1)
            r1 = 0
            android.content.Intent r1 = r3.registerReceiver(r1, r0)     // Catch: java.lang.Exception -> Lc
        Lc:
            r3 = 0
            if (r1 != 0) goto L10
            return r3
        L10:
            r0 = -1
            java.lang.String r2 = "status"
            int r0 = r1.getIntExtra(r2, r0)
            r1 = 2
            if (r0 == r1) goto L1d
            r1 = 5
            if (r0 != r1) goto L1e
        L1d:
            r3 = 1
        L1e:
            return r3
    }
}
