package com.igexin.sdk;

public class PushReceiver extends android.content.BroadcastReceiver {
    private static final java.lang.String a = null;

    static {
            java.lang.Class<com.igexin.sdk.PushReceiver> r0 = com.igexin.sdk.PushReceiver.class
            java.lang.String r0 = r0.getName()
            com.igexin.sdk.PushReceiver.a = r0
            return
    }

    public PushReceiver() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void onReceive(android.content.Context r6, android.content.Intent r7) {
            r5 = this;
            java.lang.String r0 = "com.igexin.sdk.action.pushmanager"
            if (r7 == 0) goto Lcc
            java.lang.String r1 = r7.getAction()
            if (r1 != 0) goto Lc
            goto Lcc
        Lc:
            java.lang.String r1 = r7.getAction()
            boolean r2 = r0.equals(r1)     // Catch: java.lang.Throwable -> Lab
            java.lang.String r3 = "action"
            if (r2 == 0) goto L45
            android.os.Bundle r1 = r7.getExtras()     // Catch: java.lang.Throwable -> Lab
            if (r1 != 0) goto L1f
            return
        L1f:
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> Lab
            android.content.Context r2 = r6.getApplicationContext()     // Catch: java.lang.Throwable -> Lab
            com.igexin.push.core.a.e r4 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Throwable -> Lab
            java.lang.Class r4 = r4.a(r6)     // Catch: java.lang.Throwable -> Lab
            r1.<init>(r2, r4)     // Catch: java.lang.Throwable -> Lab
            r1.putExtra(r3, r0)     // Catch: java.lang.Throwable -> Lab
            java.lang.String r0 = "bundle"
            android.os.Bundle r7 = r7.getExtras()     // Catch: java.lang.Throwable -> Lab
            r1.putExtra(r0, r7)     // Catch: java.lang.Throwable -> Lab
            com.igexin.push.core.x r7 = com.igexin.push.core.x.a()     // Catch: java.lang.Throwable -> Lab
            r7.a(r6, r1)     // Catch: java.lang.Throwable -> Lab
            goto Lcc
        L45:
            java.lang.String r7 = "android.intent.action.BOOT_COMPLETED"
            boolean r7 = r7.equals(r1)     // Catch: java.lang.Throwable -> Lab
            if (r7 != 0) goto L92
            java.lang.String r7 = "android.intent.action.ACTION_POWER_CONNECTED"
            boolean r7 = r1.equals(r7)     // Catch: java.lang.Throwable -> Lab
            if (r7 != 0) goto L92
            java.lang.String r7 = "android.intent.action.ACTION_POWER_DISCONNECTED"
            boolean r7 = r1.equals(r7)     // Catch: java.lang.Throwable -> Lab
            if (r7 != 0) goto L92
            java.lang.String r7 = "android.intent.action.MEDIA_MOUNTED"
            boolean r7 = r1.equals(r7)     // Catch: java.lang.Throwable -> Lab
            if (r7 == 0) goto L66
            goto L92
        L66:
            java.lang.String r7 = "android.net.conn.CONNECTIVITY_CHANGE"
            boolean r7 = r7.equals(r1)     // Catch: java.lang.Throwable -> Lab
            if (r7 != 0) goto L76
            java.lang.String r7 = "android.intent.action.USER_PRESENT"
            boolean r7 = r7.equals(r1)     // Catch: java.lang.Throwable -> Lab
            if (r7 == 0) goto Lcc
        L76:
            android.content.Intent r7 = new android.content.Intent     // Catch: java.lang.Throwable -> Lab
            android.content.Context r0 = r6.getApplicationContext()     // Catch: java.lang.Throwable -> Lab
            com.igexin.push.core.a.e r2 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Throwable -> Lab
            java.lang.Class r2 = r2.a(r6)     // Catch: java.lang.Throwable -> Lab
            r7.<init>(r0, r2)     // Catch: java.lang.Throwable -> Lab
            r7.putExtra(r3, r1)     // Catch: java.lang.Throwable -> Lab
            com.igexin.push.core.x r0 = com.igexin.push.core.x.a()     // Catch: java.lang.Throwable -> Lab
            r0.a(r6, r7)     // Catch: java.lang.Throwable -> Lab
            goto Lcc
        L92:
            com.igexin.push.core.x r7 = com.igexin.push.core.x.a()     // Catch: java.lang.Throwable -> Lab
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Throwable -> Lab
            android.content.Context r1 = r6.getApplicationContext()     // Catch: java.lang.Throwable -> Lab
            com.igexin.push.core.a.e r2 = com.igexin.push.core.a.e.a()     // Catch: java.lang.Throwable -> Lab
            java.lang.Class r2 = r2.a(r6)     // Catch: java.lang.Throwable -> Lab
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> Lab
            r7.a(r6, r0)     // Catch: java.lang.Throwable -> Lab
            goto Lcc
        Lab:
            r6 = move-exception
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = com.igexin.sdk.PushReceiver.a
            r7.append(r0)
            java.lang.String r0 = "|"
            r7.append(r0)
            java.lang.String r6 = r6.toString()
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            r7 = 0
            java.lang.Object[] r7 = new java.lang.Object[r7]
            com.igexin.b.a.c.b.a(r6, r7)
        Lcc:
            return
    }
}
