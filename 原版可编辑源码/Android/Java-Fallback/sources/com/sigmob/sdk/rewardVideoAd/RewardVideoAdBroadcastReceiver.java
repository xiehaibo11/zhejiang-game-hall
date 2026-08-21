package com.sigmob.sdk.rewardVideoAd;

public class RewardVideoAdBroadcastReceiver extends com.sigmob.sdk.base.common.BaseBroadcastReceiver {
    private static android.content.IntentFilter a;
    private com.sigmob.sdk.rewardVideoAd.e.a b;
    private com.sigmob.sdk.base.models.BaseAdUnit c;

    public RewardVideoAdBroadcastReceiver(com.sigmob.sdk.base.models.BaseAdUnit r1, com.sigmob.sdk.rewardVideoAd.e.a r2, java.lang.String r3) {
            r0 = this;
            r0.<init>(r3)
            r0.c = r1
            r0.b = r2
            r0.a()
            return
    }

    @Override
    public android.content.IntentFilter a() {
            r2 = this;
            android.content.IntentFilter r0 = com.sigmob.sdk.rewardVideoAd.RewardVideoAdBroadcastReceiver.a
            if (r0 != 0) goto L2c
            android.content.IntentFilter r0 = new android.content.IntentFilter
            r0.<init>()
            com.sigmob.sdk.rewardVideoAd.RewardVideoAdBroadcastReceiver.a = r0
            java.lang.String r1 = "com.sigmob.action.rewardedvideo.play"
            r0.addAction(r1)
            android.content.IntentFilter r0 = com.sigmob.sdk.rewardVideoAd.RewardVideoAdBroadcastReceiver.a
            java.lang.String r1 = "com.sigmob.action.rewardedvideo.skip"
            r0.addAction(r1)
            android.content.IntentFilter r0 = com.sigmob.sdk.rewardVideoAd.RewardVideoAdBroadcastReceiver.a
            java.lang.String r1 = "com.sigmob.action.rewardedvideo.playFail"
            r0.addAction(r1)
            android.content.IntentFilter r0 = com.sigmob.sdk.rewardVideoAd.RewardVideoAdBroadcastReceiver.a
            java.lang.String r1 = "com.sigmob.action.rewardedvideo.complete"
            r0.addAction(r1)
            android.content.IntentFilter r0 = com.sigmob.sdk.rewardVideoAd.RewardVideoAdBroadcastReceiver.a
            java.lang.String r1 = "com.sigmob.action.rewardedvideo.Close"
            r0.addAction(r1)
        L2c:
            android.content.IntentFilter r0 = com.sigmob.sdk.rewardVideoAd.RewardVideoAdBroadcastReceiver.a
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
            com.sigmob.sdk.rewardVideoAd.e$a r7 = r6.b
            if (r7 == 0) goto L97
            com.sigmob.sdk.base.models.BaseAdUnit r7 = r6.c
            if (r7 != 0) goto L10
            goto L97
        L10:
            boolean r7 = r6.a(r8)
            if (r7 != 0) goto L17
            return
        L17:
            java.lang.String r7 = r8.getAction()
            r0 = -1
            int r1 = r7.hashCode()
            r2 = 4
            r3 = 3
            r4 = 2
            r5 = 1
            switch(r1) {
                case -2102409807: goto L50;
                case -1729047493: goto L46;
                case -1728958842: goto L3c;
                case -1139302720: goto L32;
                case 1338477049: goto L28;
                default: goto L27;
            }
        L27:
            goto L59
        L28:
            java.lang.String r1 = "com.sigmob.action.rewardedvideo.playFail"
            boolean r7 = r7.equals(r1)
            if (r7 == 0) goto L59
            r0 = r4
            goto L59
        L32:
            java.lang.String r1 = "com.sigmob.action.rewardedvideo.complete"
            boolean r7 = r7.equals(r1)
            if (r7 == 0) goto L59
            r0 = r3
            goto L59
        L3c:
            java.lang.String r1 = "com.sigmob.action.rewardedvideo.skip"
            boolean r7 = r7.equals(r1)
            if (r7 == 0) goto L59
            r0 = r5
            goto L59
        L46:
            java.lang.String r1 = "com.sigmob.action.rewardedvideo.play"
            boolean r7 = r7.equals(r1)
            if (r7 == 0) goto L59
            r0 = 0
            goto L59
        L50:
            java.lang.String r1 = "com.sigmob.action.rewardedvideo.Close"
            boolean r7 = r7.equals(r1)
            if (r7 == 0) goto L59
            r0 = r2
        L59:
            if (r0 == 0) goto L90
            if (r0 == r5) goto L88
            r7 = 0
            if (r0 == r4) goto L75
            if (r0 == r3) goto L6d
            if (r0 == r2) goto L65
            goto L97
        L65:
            com.sigmob.sdk.rewardVideoAd.e$a r8 = r6.b
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r6.c
            r8.i(r0)
            goto L82
        L6d:
            com.sigmob.sdk.rewardVideoAd.e$a r7 = r6.b
            com.sigmob.sdk.base.models.BaseAdUnit r8 = r6.c
            r7.f(r8)
            goto L97
        L75:
            java.lang.String r0 = "error"
            java.lang.String r8 = r8.getStringExtra(r0)
            com.sigmob.sdk.rewardVideoAd.e$a r0 = r6.b
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r6.c
            r0.c(r1, r8)
        L82:
            r6.b(r6)
            r6.c = r7
            goto L97
        L88:
            com.sigmob.sdk.rewardVideoAd.e$a r7 = r6.b
            com.sigmob.sdk.base.models.BaseAdUnit r8 = r6.c
            r7.h(r8)
            goto L97
        L90:
            com.sigmob.sdk.rewardVideoAd.e$a r7 = r6.b
            com.sigmob.sdk.base.models.BaseAdUnit r8 = r6.c
            r7.g(r8)
        L97:
            return
    }
}
