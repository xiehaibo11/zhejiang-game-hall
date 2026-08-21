package com.mbridge.msdk.optimize.a.a;

public final class b {
    com.mbridge.msdk.optimize.a.b.b a;
    android.content.ServiceConnection b;
    private android.content.Context c;


    public b(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.optimize.a.a.b$1 r0 = new com.mbridge.msdk.optimize.a.a.b$1
            r0.<init>(r1)
            r1.b = r0
            r1.c = r2
            return
    }

    public final void a(com.mbridge.msdk.optimize.a.b r5) {
            r4 = this;
            android.content.Context r0 = r4.c     // Catch: java.lang.Throwable -> L2d
            r0.getPackageName()     // Catch: java.lang.Throwable -> L2d
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Throwable -> L2d
            r0.<init>()     // Catch: java.lang.Throwable -> L2d
            java.lang.String r1 = "com.zui.deviceidservice"
            java.lang.String r2 = "com.zui.deviceidservice.DeviceidService"
            r0.setClassName(r1, r2)     // Catch: java.lang.Throwable -> L2d
            android.content.Context r1 = r4.c     // Catch: java.lang.Throwable -> L2d
            android.content.ServiceConnection r2 = r4.b     // Catch: java.lang.Throwable -> L2d
            r3 = 1
            boolean r0 = r1.bindService(r0, r2, r3)     // Catch: java.lang.Throwable -> L2d
            if (r0 == 0) goto L31
            com.mbridge.msdk.optimize.a.b.b r0 = r4.a     // Catch: java.lang.Throwable -> L2d
            if (r0 == 0) goto L31
            com.mbridge.msdk.optimize.a.b.b r0 = r4.a     // Catch: java.lang.Throwable -> L2d
            java.lang.String r0 = r0.a()     // Catch: java.lang.Throwable -> L2d
            if (r5 == 0) goto L31
            r1 = 0
            r5.a(r0, r1)     // Catch: java.lang.Throwable -> L2d
            goto L31
        L2d:
            r5 = move-exception
            r5.printStackTrace()
        L31:
            return
    }
}
