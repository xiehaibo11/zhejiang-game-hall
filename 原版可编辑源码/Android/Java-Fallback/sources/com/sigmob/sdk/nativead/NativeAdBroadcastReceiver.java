package com.sigmob.sdk.nativead;

public class NativeAdBroadcastReceiver extends com.sigmob.sdk.base.common.BaseBroadcastReceiver {
    private static android.content.IntentFilter a;
    private com.sigmob.sdk.nativead.c.a b;

    public NativeAdBroadcastReceiver(com.sigmob.sdk.nativead.c.a r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r2)
            r0.b = r1
            r0.a()
            return
    }

    @Override
    public android.content.IntentFilter a() {
            r2 = this;
            android.content.IntentFilter r0 = com.sigmob.sdk.nativead.NativeAdBroadcastReceiver.a
            if (r0 != 0) goto L2c
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            com.sigmob.sdk.nativead.NativeAdBroadcastReceiver.a = r0
            java.lang.String r1 = "com.sigmob.action.native.temple.show"
            r0.addAction(r1)
            android.content.IntentFilter r0 = com.sigmob.sdk.nativead.NativeAdBroadcastReceiver.a
            java.lang.String r1 = "com.sigmob.action.native.temple.click"
            r0.addAction(r1)
            android.content.IntentFilter r0 = com.sigmob.sdk.nativead.NativeAdBroadcastReceiver.a
            java.lang.String r1 = "com.sigmob.action.native.temple.dismiss"
            r0.addAction(r1)
            android.content.IntentFilter r0 = com.sigmob.sdk.nativead.NativeAdBroadcastReceiver.a
            java.lang.String r1 = "com.sigmob.action.loadpage.show"
            r0.addAction(r1)
            android.content.IntentFilter r0 = com.sigmob.sdk.nativead.NativeAdBroadcastReceiver.a
            java.lang.String r1 = "com.sigmob.action.loadpage.dismiss"
            r0.addAction(r1)
        L2c:
            android.content.IntentFilter r0 = com.sigmob.sdk.nativead.NativeAdBroadcastReceiver.a
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
    public void onReceive(android.content.Context r6, android.content.Intent r7) {
            r5 = this;
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r6)
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r7)
            com.sigmob.sdk.nativead.c$a r6 = r5.b
            if (r6 != 0) goto Lb
            return
        Lb:
            boolean r6 = r5.a(r7)
            if (r6 != 0) goto L12
            return
        L12:
            java.lang.String r6 = r7.getAction()
            r7 = -1
            int r0 = r6.hashCode()
            r1 = 4
            r2 = 3
            r3 = 2
            r4 = 1
            switch(r0) {
                case -2086188808: goto L4b;
                case -1655972816: goto L41;
                case -1487323017: goto L37;
                case -482465395: goto L2d;
                case 1733433850: goto L23;
                default: goto L22;
            }
        L22:
            goto L54
        L23:
            java.lang.String r0 = "com.sigmob.action.native.temple.dismiss"
            boolean r6 = r6.equals(r0)
            if (r6 == 0) goto L54
            r7 = r3
            goto L54
        L2d:
            java.lang.String r0 = "com.sigmob.action.native.temple.show"
            boolean r6 = r6.equals(r0)
            if (r6 == 0) goto L54
            r7 = 0
            goto L54
        L37:
            java.lang.String r0 = "com.sigmob.action.loadpage.dismiss"
            boolean r6 = r6.equals(r0)
            if (r6 == 0) goto L54
            r7 = r1
            goto L54
        L41:
            java.lang.String r0 = "com.sigmob.action.loadpage.show"
            boolean r6 = r6.equals(r0)
            if (r6 == 0) goto L54
            r7 = r2
            goto L54
        L4b:
            java.lang.String r0 = "com.sigmob.action.native.temple.click"
            boolean r6 = r6.equals(r0)
            if (r6 == 0) goto L54
            r7 = r4
        L54:
            if (r7 == 0) goto L77
            if (r7 == r4) goto L71
            if (r7 == r3) goto L6b
            if (r7 == r2) goto L65
            if (r7 == r1) goto L5f
            goto L7c
        L5f:
            com.sigmob.sdk.nativead.c$a r6 = r5.b
            r6.b()
            goto L7c
        L65:
            com.sigmob.sdk.nativead.c$a r6 = r5.b
            r6.a()
            goto L7c
        L6b:
            com.sigmob.sdk.nativead.c$a r6 = r5.b
            r6.e()
            goto L7c
        L71:
            com.sigmob.sdk.nativead.c$a r6 = r5.b
            r6.d()
            goto L7c
        L77:
            com.sigmob.sdk.nativead.c$a r6 = r5.b
            r6.c()
        L7c:
            return
    }
}
