package com.sigmob.sdk.base.common;

public class EventForwardingBroadcastReceiver extends com.sigmob.sdk.base.common.BaseBroadcastReceiver {
    private static android.content.IntentFilter b;
    public com.sigmob.sdk.base.models.BaseAdUnit a;
    private com.sigmob.sdk.base.common.m.b c;

    public EventForwardingBroadcastReceiver(com.sigmob.sdk.base.models.BaseAdUnit r1, com.sigmob.sdk.base.common.m.b r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r3)
            r0.a = r1
            r0.c = r2
            r0.a()
            return
    }

    @Override
    public android.content.IntentFilter a() {
            r2 = this;
            android.content.IntentFilter r0 = com.sigmob.sdk.base.common.EventForwardingBroadcastReceiver.b
            if (r0 != 0) goto L2c
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            com.sigmob.sdk.base.common.EventForwardingBroadcastReceiver.b = r0
            java.lang.String r1 = "com.sigmob.action.interstitial.fail"
            r0.addAction(r1)
            android.content.IntentFilter r0 = com.sigmob.sdk.base.common.EventForwardingBroadcastReceiver.b
            java.lang.String r1 = "com.sigmob.action.interstitial.show"
            r0.addAction(r1)
            android.content.IntentFilter r0 = com.sigmob.sdk.base.common.EventForwardingBroadcastReceiver.b
            java.lang.String r1 = "com.sigmob.action.interstitial.dismiss"
            r0.addAction(r1)
            android.content.IntentFilter r0 = com.sigmob.sdk.base.common.EventForwardingBroadcastReceiver.b
            java.lang.String r1 = "com.sigmob.action.interstitial.click"
            r0.addAction(r1)
            android.content.IntentFilter r0 = com.sigmob.sdk.base.common.EventForwardingBroadcastReceiver.b
            java.lang.String r1 = "com.sigmob.action.interstitial.vopen"
            r0.addAction(r1)
        L2c:
            android.content.IntentFilter r0 = com.sigmob.sdk.base.common.EventForwardingBroadcastReceiver.b
            return r0
    }

    @Override
    public void b(android.content.BroadcastReceiver r1) {
            r0 = this;
            super.b(r1)
            r1 = 0
            r0.c = r1
            return
    }

    @Override
    public void onReceive(android.content.Context r7, android.content.Intent r8) {
            r6 = this;
            com.sigmob.sdk.base.common.m$b r7 = r6.c
            if (r7 == 0) goto L91
            com.sigmob.sdk.base.models.BaseAdUnit r7 = r6.a
            if (r7 != 0) goto La
            goto L91
        La:
            boolean r7 = r6.a(r8)
            if (r7 != 0) goto L11
            return
        L11:
            java.lang.String r7 = r8.getAction()
            r0 = -1
            int r1 = r7.hashCode()
            r2 = 4
            r3 = 3
            r4 = 2
            r5 = 1
            switch(r1) {
                case -2078178004: goto L4a;
                case -2060534940: goto L40;
                case -1590979846: goto L36;
                case -1590585639: goto L2c;
                case 841881902: goto L22;
                default: goto L21;
            }
        L21:
            goto L53
        L22:
            java.lang.String r1 = "com.sigmob.action.interstitial.dismiss"
            boolean r7 = r7.equals(r1)
            if (r7 == 0) goto L53
            r0 = r3
            goto L53
        L2c:
            java.lang.String r1 = "com.sigmob.action.interstitial.show"
            boolean r7 = r7.equals(r1)
            if (r7 == 0) goto L53
            r0 = r4
            goto L53
        L36:
            java.lang.String r1 = "com.sigmob.action.interstitial.fail"
            boolean r7 = r7.equals(r1)
            if (r7 == 0) goto L53
            r0 = 0
            goto L53
        L40:
            java.lang.String r1 = "com.sigmob.action.interstitial.vopen"
            boolean r7 = r7.equals(r1)
            if (r7 == 0) goto L53
            r0 = r5
            goto L53
        L4a:
            java.lang.String r1 = "com.sigmob.action.interstitial.click"
            boolean r7 = r7.equals(r1)
            if (r7 == 0) goto L53
            r0 = r2
        L53:
            if (r0 == 0) goto L84
            if (r0 == r5) goto L7c
            if (r0 == r4) goto L74
            if (r0 == r3) goto L66
            if (r0 == r2) goto L5e
            goto L91
        L5e:
            com.sigmob.sdk.base.common.m$b r7 = r6.c
            com.sigmob.sdk.base.models.BaseAdUnit r8 = r6.a
            r7.c(r8)
            goto L91
        L66:
            com.sigmob.sdk.base.common.m$b r7 = r6.c
            com.sigmob.sdk.base.models.BaseAdUnit r8 = r6.a
            r7.d(r8)
            r6.b(r6)
            r7 = 0
            r6.a = r7
            goto L91
        L74:
            com.sigmob.sdk.base.common.m$b r7 = r6.c
            com.sigmob.sdk.base.models.BaseAdUnit r8 = r6.a
            r7.b(r8)
            goto L91
        L7c:
            com.sigmob.sdk.base.common.m$b r7 = r6.c
            com.sigmob.sdk.base.models.BaseAdUnit r8 = r6.a
            r7.e(r8)
            goto L91
        L84:
            java.lang.String r7 = "error"
            java.lang.String r7 = r8.getStringExtra(r7)
            com.sigmob.sdk.base.common.m$b r8 = r6.c
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r6.a
            r8.b(r0, r7)
        L91:
            return
    }
}
