package com.xiaomi.push.service;

public class bn {
    private static com.xiaomi.push.service.bn a;
    private int a;
    private android.content.Context a;

    private bn(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.a = r2
            return
    }

    public static com.xiaomi.push.service.bn a(android.content.Context r1) {
            com.xiaomi.push.service.bn r0 = com.xiaomi.push.service.bn.a
            if (r0 != 0) goto Lb
            com.xiaomi.push.service.bn r0 = new com.xiaomi.push.service.bn
            r0.<init>(r1)
            com.xiaomi.push.service.bn.a = r0
        Lb:
            com.xiaomi.push.service.bn r1 = com.xiaomi.push.service.bn.a
            return r1
    }

    public int a() {
            r3 = this;
            int r0 = r3.a
            if (r0 == 0) goto L5
            return r0
        L5:
            android.content.Context r0 = r3.a     // Catch: java.lang.Exception -> L14
            android.content.ContentResolver r0 = r0.getContentResolver()     // Catch: java.lang.Exception -> L14
            java.lang.String r1 = "device_provisioned"
            r2 = 0
            int r0 = android.provider.Settings.Global.getInt(r0, r1, r2)     // Catch: java.lang.Exception -> L14
            r3.a = r0     // Catch: java.lang.Exception -> L14
        L14:
            int r0 = r3.a
            return r0
    }

    public android.net.Uri a() {
            r1 = this;
            java.lang.String r0 = "device_provisioned"
            android.net.Uri r0 = android.provider.Settings.Global.getUriFor(r0)
            return r0
    }

    public boolean a() {
            r2 = this;
            java.lang.String r0 = com.xiaomi.push.ae.a
            java.lang.String r1 = "xmsf"
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto L21
            java.lang.String r0 = com.xiaomi.push.ae.a
            java.lang.String r1 = "xiaomi"
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto L21
            java.lang.String r0 = com.xiaomi.push.ae.a
            java.lang.String r1 = "miui"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L1f
            goto L21
        L1f:
            r0 = 0
            goto L22
        L21:
            r0 = 1
        L22:
            return r0
    }
}
