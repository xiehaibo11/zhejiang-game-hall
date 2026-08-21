package com.sigmob.sdk.splash;

public class SplashAdBroadcastReceiver extends com.sigmob.sdk.base.common.BaseBroadcastReceiver {
    private static android.content.IntentFilter a;
    private com.sigmob.sdk.splash.f.a b;

    public SplashAdBroadcastReceiver(com.sigmob.sdk.splash.f.a r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r2)
            r0.b = r1
            r0.a()
            return
    }

    @Override
    public android.content.IntentFilter a() {
            r2 = this;
            android.content.IntentFilter r0 = com.sigmob.sdk.splash.SplashAdBroadcastReceiver.a
            if (r0 != 0) goto L2c
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            com.sigmob.sdk.splash.SplashAdBroadcastReceiver.a = r0
            java.lang.String r1 = "com.sigmob.action.splash.stoptime"
            r0.addAction(r1)
            android.content.IntentFilter r0 = com.sigmob.sdk.splash.SplashAdBroadcastReceiver.a
            java.lang.String r1 = "com.sigmob.action.splash.playFail"
            r0.addAction(r1)
            android.content.IntentFilter r0 = com.sigmob.sdk.splash.SplashAdBroadcastReceiver.a
            java.lang.String r1 = "com.sigmob.action.splash.skip"
            r0.addAction(r1)
            android.content.IntentFilter r0 = com.sigmob.sdk.splash.SplashAdBroadcastReceiver.a
            java.lang.String r1 = "com.sigmob.action.loadpage.show"
            r0.addAction(r1)
            android.content.IntentFilter r0 = com.sigmob.sdk.splash.SplashAdBroadcastReceiver.a
            java.lang.String r1 = "com.sigmob.action.loadpage.dismiss"
            r0.addAction(r1)
        L2c:
            android.content.IntentFilter r0 = com.sigmob.sdk.splash.SplashAdBroadcastReceiver.a
            return r0
    }

    @Override
    public void b(android.content.BroadcastReceiver r1) {
            r0 = this;
            super.b(r1)
            r1 = 0
            r0.b = r1
            return
    }

    @Override
    public void onReceive(android.content.Context r7, android.content.Intent r8) {
            r6 = this;
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r7)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r8)
            com.sigmob.sdk.splash.f$a r7 = r6.b
            if (r7 != 0) goto Lb
            return
        Lb:
            boolean r7 = r6.a(r8)
            if (r7 != 0) goto L12
            return
        L12:
            java.lang.String r7 = r8.getAction()
            r8 = -1
            int r0 = r7.hashCode()
            r1 = 5
            r2 = 4
            r3 = 3
            r4 = 2
            r5 = 1
            switch(r0) {
                case -2121846192: goto L56;
                case -1959279373: goto L4c;
                case -1655972816: goto L42;
                case -1487323017: goto L38;
                case -967205835: goto L2e;
                case -967117184: goto L24;
                default: goto L23;
            }
        L23:
            goto L5f
        L24:
            java.lang.String r0 = "com.sigmob.action.splash.skip"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L5f
            r8 = r4
            goto L5f
        L2e:
            java.lang.String r0 = "com.sigmob.action.splash.play"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L5f
            r8 = 0
            goto L5f
        L38:
            java.lang.String r0 = "com.sigmob.action.loadpage.dismiss"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L5f
            r8 = r1
            goto L5f
        L42:
            java.lang.String r0 = "com.sigmob.action.loadpage.show"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L5f
            r8 = r2
            goto L5f
        L4c:
            java.lang.String r0 = "com.sigmob.action.splash.playFail"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L5f
            r8 = r5
            goto L5f
        L56:
            java.lang.String r0 = "com.sigmob.action.splash.stoptime"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L5f
            r8 = r3
        L5f:
            if (r8 == 0) goto L8a
            if (r8 == r5) goto L84
            if (r8 == r4) goto L7e
            if (r8 == r3) goto L78
            if (r8 == r2) goto L72
            if (r8 == r1) goto L6c
            goto L8f
        L6c:
            com.sigmob.sdk.splash.f$a r7 = r6.b
            r7.b()
            goto L8f
        L72:
            com.sigmob.sdk.splash.f$a r7 = r6.b
            r7.a()
            goto L8f
        L78:
            com.sigmob.sdk.splash.f$a r7 = r6.b
            r7.f()
            goto L8f
        L7e:
            com.sigmob.sdk.splash.f$a r7 = r6.b
            r7.d()
            goto L8f
        L84:
            com.sigmob.sdk.splash.f$a r7 = r6.b
            r7.c()
            goto L8f
        L8a:
            com.sigmob.sdk.splash.f$a r7 = r6.b
            r7.e()
        L8f:
            return
    }
}
