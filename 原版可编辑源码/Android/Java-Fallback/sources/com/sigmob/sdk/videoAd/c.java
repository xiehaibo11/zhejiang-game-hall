package com.sigmob.sdk.videoAd;

public abstract class c extends com.sigmob.sdk.base.common.i {
    protected c(android.app.Activity r1, java.lang.String r2, com.sigmob.sdk.base.common.j r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    protected void a(boolean r1) {
            r0 = this;
            if (r1 == 0) goto L7
            com.sigmob.sdk.base.common.j r1 = r0.d
            r1.a()
        L7:
            return
    }

    @Override
    public void b() {
            r2 = this;
            com.sigmob.sdk.base.common.j r0 = r2.d
            android.widget.RelativeLayout r1 = r2.c
            r0.onSetContentView(r1)
            return
    }

    protected void b(android.content.Context r2, int r3, android.os.Bundle r4) {
            r1 = this;
            android.content.Context r2 = r2.getApplicationContext()     // Catch: java.lang.Throwable -> L53
            r1.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L53
            java.lang.String r2 = "enablekeepon"
            r3 = 0
            boolean r2 = r4.getBoolean(r2, r3)     // Catch: java.lang.Throwable -> L53
            java.lang.String r0 = "enablescreenlockdisplayad"
            boolean r3 = r4.getBoolean(r0, r3)     // Catch: java.lang.Throwable -> L53
            int r4 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L53
            r0 = 27
            if (r4 < r0) goto L35
            r4 = 1
            if (r3 == 0) goto L2b
            android.app.Activity r3 = r1.k()     // Catch: java.lang.Throwable -> L53
            r3.setShowWhenLocked(r4)     // Catch: java.lang.Throwable -> L53
            android.app.Activity r3 = r1.k()     // Catch: java.lang.Throwable -> L53
            r3.setTurnScreenOn(r4)     // Catch: java.lang.Throwable -> L53
        L2b:
            if (r2 == 0) goto L53
            android.app.Activity r2 = r1.k()     // Catch: java.lang.Throwable -> L53
            r2.setShowWhenLocked(r4)     // Catch: java.lang.Throwable -> L53
            goto L53
        L35:
            if (r3 == 0) goto L44
            android.app.Activity r3 = r1.k()     // Catch: java.lang.Throwable -> L53
            android.view.Window r3 = r3.getWindow()     // Catch: java.lang.Throwable -> L53
            r4 = 2621440(0x280000, float:3.67342E-39)
            r3.addFlags(r4)     // Catch: java.lang.Throwable -> L53
        L44:
            if (r2 == 0) goto L53
            android.app.Activity r2 = r1.k()     // Catch: java.lang.Throwable -> L53
            android.view.Window r2 = r2.getWindow()     // Catch: java.lang.Throwable -> L53
            r3 = 128(0x80, float:1.8E-43)
            r2.addFlags(r3)     // Catch: java.lang.Throwable -> L53
        L53:
            return
    }
}
