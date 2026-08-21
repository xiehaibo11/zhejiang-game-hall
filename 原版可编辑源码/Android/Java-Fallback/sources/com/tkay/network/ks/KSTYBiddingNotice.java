package com.tkay.network.ks;

public class KSTYBiddingNotice implements com.tkay.core.api.TYBiddingNotice {
    java.lang.Object a;

    protected KSTYBiddingNotice(java.lang.Object r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public com.tkay.core.api.TYAdConst.CURRENCY getNoticePriceCurrency() {
            r1 = this;
            com.tkay.core.api.TYAdConst$CURRENCY r0 = com.tkay.core.api.TYAdConst.CURRENCY.RMB_CENT
            return r0
    }

    @Override
    public void notifyBidDisplay(boolean r1, double r2) {
            r0 = this;
            return
    }

    @Override
    public synchronized void notifyBidLoss(java.lang.String r3, double r4, java.util.Map<java.lang.String, java.lang.Object> r6) {
            r2 = this;
            monitor-enter(r2)
            boolean r6 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> Laa
            if (r6 == 0) goto L39
            java.lang.String r6 = "KSTYBiddingNotice"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Laa
            r0.<init>()     // Catch: java.lang.Throwable -> Laa
            java.lang.Object r1 = r2.a     // Catch: java.lang.Throwable -> Laa
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r2.a     // Catch: java.lang.Throwable -> Laa
            java.lang.Class r1 = r1.getClass()     // Catch: java.lang.Throwable -> Laa
            java.lang.String r1 = r1.getSimpleName()     // Catch: java.lang.Throwable -> Laa
            goto L1f
        L1d:
            java.lang.String r1 = ""
        L1f:
            r0.append(r1)     // Catch: java.lang.Throwable -> Laa
            java.lang.String r1 = ": notifyBidLoss lossCode:"
            r0.append(r1)     // Catch: java.lang.Throwable -> Laa
            r0.append(r3)     // Catch: java.lang.Throwable -> Laa
            java.lang.String r1 = ",winPrice:"
            r0.append(r1)     // Catch: java.lang.Throwable -> Laa
            r0.append(r4)     // Catch: java.lang.Throwable -> Laa
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Laa
            android.util.Log.i(r6, r0)     // Catch: java.lang.Throwable -> Laa
        L39:
            com.kwad.sdk.api.model.AdExposureFailedReason r6 = new com.kwad.sdk.api.model.AdExposureFailedReason     // Catch: java.lang.Throwable -> Laa
            r6.<init>()     // Catch: java.lang.Throwable -> Laa
            int r4 = (int) r4     // Catch: java.lang.Throwable -> Laa
            r6.winEcpm = r4     // Catch: java.lang.Throwable -> Laa
            r4 = 4
            java.lang.String r5 = "5"
            boolean r3 = android.text.TextUtils.equals(r3, r5)     // Catch: java.lang.Throwable -> Laa
            if (r3 == 0) goto L4b
            r4 = 3
        L4b:
            java.lang.Object r3 = r2.a     // Catch: java.lang.Throwable -> L5a
            boolean r3 = r3 instanceof com.kwad.sdk.api.KsRewardVideoAd     // Catch: java.lang.Throwable -> L5a
            if (r3 == 0) goto L5a
            java.lang.Object r3 = r2.a     // Catch: java.lang.Throwable -> L5a
            com.kwad.sdk.api.KsRewardVideoAd r3 = (com.kwad.sdk.api.KsRewardVideoAd) r3     // Catch: java.lang.Throwable -> L5a
            r3.reportAdExposureFailed(r4, r6)     // Catch: java.lang.Throwable -> L5a
            monitor-exit(r2)
            return
        L5a:
            java.lang.Object r3 = r2.a     // Catch: java.lang.Throwable -> L69
            boolean r3 = r3 instanceof com.kwad.sdk.api.KsInterstitialAd     // Catch: java.lang.Throwable -> L69
            if (r3 == 0) goto L69
            java.lang.Object r3 = r2.a     // Catch: java.lang.Throwable -> L69
            com.kwad.sdk.api.KsInterstitialAd r3 = (com.kwad.sdk.api.KsInterstitialAd) r3     // Catch: java.lang.Throwable -> L69
            r3.reportAdExposureFailed(r4, r6)     // Catch: java.lang.Throwable -> L69
            monitor-exit(r2)
            return
        L69:
            java.lang.Object r3 = r2.a     // Catch: java.lang.Throwable -> L78
            boolean r3 = r3 instanceof com.kwad.sdk.api.KsFullScreenVideoAd     // Catch: java.lang.Throwable -> L78
            if (r3 == 0) goto L78
            java.lang.Object r3 = r2.a     // Catch: java.lang.Throwable -> L78
            com.kwad.sdk.api.KsFullScreenVideoAd r3 = (com.kwad.sdk.api.KsFullScreenVideoAd) r3     // Catch: java.lang.Throwable -> L78
            r3.reportAdExposureFailed(r4, r6)     // Catch: java.lang.Throwable -> L78
            monitor-exit(r2)
            return
        L78:
            java.lang.Object r3 = r2.a     // Catch: java.lang.Throwable -> L87
            boolean r3 = r3 instanceof com.kwad.sdk.api.KsDrawAd     // Catch: java.lang.Throwable -> L87
            if (r3 == 0) goto L87
            java.lang.Object r3 = r2.a     // Catch: java.lang.Throwable -> L87
            com.kwad.sdk.api.KsDrawAd r3 = (com.kwad.sdk.api.KsDrawAd) r3     // Catch: java.lang.Throwable -> L87
            r3.reportAdExposureFailed(r4, r6)     // Catch: java.lang.Throwable -> L87
            monitor-exit(r2)
            return
        L87:
            java.lang.Object r3 = r2.a     // Catch: java.lang.Throwable -> L96
            boolean r3 = r3 instanceof com.kwad.sdk.api.KsFeedAd     // Catch: java.lang.Throwable -> L96
            if (r3 == 0) goto L96
            java.lang.Object r3 = r2.a     // Catch: java.lang.Throwable -> L96
            com.kwad.sdk.api.KsFeedAd r3 = (com.kwad.sdk.api.KsFeedAd) r3     // Catch: java.lang.Throwable -> L96
            r3.reportAdExposureFailed(r4, r6)     // Catch: java.lang.Throwable -> L96
            monitor-exit(r2)
            return
        L96:
            java.lang.Object r3 = r2.a     // Catch: java.lang.Throwable -> La5
            boolean r3 = r3 instanceof com.kwad.sdk.api.KsNativeAd     // Catch: java.lang.Throwable -> La5
            if (r3 == 0) goto La5
            java.lang.Object r3 = r2.a     // Catch: java.lang.Throwable -> La5
            com.kwad.sdk.api.KsNativeAd r3 = (com.kwad.sdk.api.KsNativeAd) r3     // Catch: java.lang.Throwable -> La5
            r3.reportAdExposureFailed(r4, r6)     // Catch: java.lang.Throwable -> La5
            monitor-exit(r2)
            return
        La5:
            r3 = 0
            r2.a = r3     // Catch: java.lang.Throwable -> Laa
            monitor-exit(r2)
            return
        Laa:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public synchronized void notifyBidWin(double r4) {
            r3 = this;
            monitor-enter(r3)
            r0 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r4 = r4 * r0
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> L190
            if (r0 == 0) goto L34
            java.lang.String r0 = "KSTYBiddingNotice"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L190
            r1.<init>()     // Catch: java.lang.Throwable -> L190
            java.lang.Object r2 = r3.a     // Catch: java.lang.Throwable -> L190
            if (r2 == 0) goto L20
            java.lang.Object r2 = r3.a     // Catch: java.lang.Throwable -> L190
            java.lang.Class r2 = r2.getClass()     // Catch: java.lang.Throwable -> L190
            java.lang.String r2 = r2.getSimpleName()     // Catch: java.lang.Throwable -> L190
            goto L22
        L20:
            java.lang.String r2 = ""
        L22:
            r1.append(r2)     // Catch: java.lang.Throwable -> L190
            java.lang.String r2 = ": notifyBidWin : second price:"
            r1.append(r2)     // Catch: java.lang.Throwable -> L190
            r1.append(r4)     // Catch: java.lang.Throwable -> L190
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L190
            android.util.Log.i(r0, r1)     // Catch: java.lang.Throwable -> L190
        L34:
            java.lang.Object r0 = r3.a     // Catch: java.lang.Throwable -> L65
            boolean r0 = r0 instanceof com.kwad.sdk.api.KsRewardVideoAd     // Catch: java.lang.Throwable -> L65
            if (r0 == 0) goto L65
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> L65
            if (r0 == 0) goto L5b
            java.lang.String r0 = "KSTYBiddingNotice"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L65
            java.lang.String r2 = "Origin price:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L65
            java.lang.Object r2 = r3.a     // Catch: java.lang.Throwable -> L65
            com.kwad.sdk.api.KsRewardVideoAd r2 = (com.kwad.sdk.api.KsRewardVideoAd) r2     // Catch: java.lang.Throwable -> L65
            int r2 = r2.getECPM()     // Catch: java.lang.Throwable -> L65
            r1.append(r2)     // Catch: java.lang.Throwable -> L65
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L65
            android.util.Log.i(r0, r1)     // Catch: java.lang.Throwable -> L65
        L5b:
            java.lang.Object r0 = r3.a     // Catch: java.lang.Throwable -> L65
            com.kwad.sdk.api.KsRewardVideoAd r0 = (com.kwad.sdk.api.KsRewardVideoAd) r0     // Catch: java.lang.Throwable -> L65
            int r1 = (int) r4     // Catch: java.lang.Throwable -> L65
            r0.setBidEcpm(r1)     // Catch: java.lang.Throwable -> L65
            monitor-exit(r3)
            return
        L65:
            java.lang.Object r0 = r3.a     // Catch: java.lang.Throwable -> L96
            boolean r0 = r0 instanceof com.kwad.sdk.api.KsInterstitialAd     // Catch: java.lang.Throwable -> L96
            if (r0 == 0) goto L96
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> L96
            if (r0 == 0) goto L8c
            java.lang.String r0 = "KSTYBiddingNotice"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L96
            java.lang.String r2 = "Origin price:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L96
            java.lang.Object r2 = r3.a     // Catch: java.lang.Throwable -> L96
            com.kwad.sdk.api.KsInterstitialAd r2 = (com.kwad.sdk.api.KsInterstitialAd) r2     // Catch: java.lang.Throwable -> L96
            int r2 = r2.getECPM()     // Catch: java.lang.Throwable -> L96
            r1.append(r2)     // Catch: java.lang.Throwable -> L96
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L96
            android.util.Log.i(r0, r1)     // Catch: java.lang.Throwable -> L96
        L8c:
            java.lang.Object r0 = r3.a     // Catch: java.lang.Throwable -> L96
            com.kwad.sdk.api.KsInterstitialAd r0 = (com.kwad.sdk.api.KsInterstitialAd) r0     // Catch: java.lang.Throwable -> L96
            int r1 = (int) r4     // Catch: java.lang.Throwable -> L96
            r0.setBidEcpm(r1)     // Catch: java.lang.Throwable -> L96
            monitor-exit(r3)
            return
        L96:
            java.lang.Object r0 = r3.a     // Catch: java.lang.Throwable -> Lc7
            boolean r0 = r0 instanceof com.kwad.sdk.api.KsFullScreenVideoAd     // Catch: java.lang.Throwable -> Lc7
            if (r0 == 0) goto Lc7
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> Lc7
            if (r0 == 0) goto Lbd
            java.lang.String r0 = "KSTYBiddingNotice"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lc7
            java.lang.String r2 = "Origin price:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lc7
            java.lang.Object r2 = r3.a     // Catch: java.lang.Throwable -> Lc7
            com.kwad.sdk.api.KsFullScreenVideoAd r2 = (com.kwad.sdk.api.KsFullScreenVideoAd) r2     // Catch: java.lang.Throwable -> Lc7
            int r2 = r2.getECPM()     // Catch: java.lang.Throwable -> Lc7
            r1.append(r2)     // Catch: java.lang.Throwable -> Lc7
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lc7
            android.util.Log.i(r0, r1)     // Catch: java.lang.Throwable -> Lc7
        Lbd:
            java.lang.Object r0 = r3.a     // Catch: java.lang.Throwable -> Lc7
            com.kwad.sdk.api.KsFullScreenVideoAd r0 = (com.kwad.sdk.api.KsFullScreenVideoAd) r0     // Catch: java.lang.Throwable -> Lc7
            int r1 = (int) r4     // Catch: java.lang.Throwable -> Lc7
            r0.setBidEcpm(r1)     // Catch: java.lang.Throwable -> Lc7
            monitor-exit(r3)
            return
        Lc7:
            java.lang.Object r0 = r3.a     // Catch: java.lang.Throwable -> Lf8
            boolean r0 = r0 instanceof com.kwad.sdk.api.KsDrawAd     // Catch: java.lang.Throwable -> Lf8
            if (r0 == 0) goto Lf8
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> Lf8
            if (r0 == 0) goto Lee
            java.lang.String r0 = "KSTYBiddingNotice"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r2 = "Origin price:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lf8
            java.lang.Object r2 = r3.a     // Catch: java.lang.Throwable -> Lf8
            com.kwad.sdk.api.KsDrawAd r2 = (com.kwad.sdk.api.KsDrawAd) r2     // Catch: java.lang.Throwable -> Lf8
            int r2 = r2.getECPM()     // Catch: java.lang.Throwable -> Lf8
            r1.append(r2)     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> Lf8
            android.util.Log.i(r0, r1)     // Catch: java.lang.Throwable -> Lf8
        Lee:
            java.lang.Object r0 = r3.a     // Catch: java.lang.Throwable -> Lf8
            com.kwad.sdk.api.KsDrawAd r0 = (com.kwad.sdk.api.KsDrawAd) r0     // Catch: java.lang.Throwable -> Lf8
            int r1 = (int) r4     // Catch: java.lang.Throwable -> Lf8
            r0.setBidEcpm(r1)     // Catch: java.lang.Throwable -> Lf8
            monitor-exit(r3)
            return
        Lf8:
            java.lang.Object r0 = r3.a     // Catch: java.lang.Throwable -> L129
            boolean r0 = r0 instanceof com.kwad.sdk.api.KsFeedAd     // Catch: java.lang.Throwable -> L129
            if (r0 == 0) goto L129
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> L129
            if (r0 == 0) goto L11f
            java.lang.String r0 = "KSTYBiddingNotice"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L129
            java.lang.String r2 = "Origin price:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L129
            java.lang.Object r2 = r3.a     // Catch: java.lang.Throwable -> L129
            com.kwad.sdk.api.KsFeedAd r2 = (com.kwad.sdk.api.KsFeedAd) r2     // Catch: java.lang.Throwable -> L129
            int r2 = r2.getECPM()     // Catch: java.lang.Throwable -> L129
            r1.append(r2)     // Catch: java.lang.Throwable -> L129
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L129
            android.util.Log.i(r0, r1)     // Catch: java.lang.Throwable -> L129
        L11f:
            java.lang.Object r0 = r3.a     // Catch: java.lang.Throwable -> L129
            com.kwad.sdk.api.KsFeedAd r0 = (com.kwad.sdk.api.KsFeedAd) r0     // Catch: java.lang.Throwable -> L129
            int r1 = (int) r4     // Catch: java.lang.Throwable -> L129
            r0.setBidEcpm(r1)     // Catch: java.lang.Throwable -> L129
            monitor-exit(r3)
            return
        L129:
            java.lang.Object r0 = r3.a     // Catch: java.lang.Throwable -> L15a
            boolean r0 = r0 instanceof com.kwad.sdk.api.KsNativeAd     // Catch: java.lang.Throwable -> L15a
            if (r0 == 0) goto L15a
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> L15a
            if (r0 == 0) goto L150
            java.lang.String r0 = "KSTYBiddingNotice"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L15a
            java.lang.String r2 = "Origin price:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L15a
            java.lang.Object r2 = r3.a     // Catch: java.lang.Throwable -> L15a
            com.kwad.sdk.api.KsNativeAd r2 = (com.kwad.sdk.api.KsNativeAd) r2     // Catch: java.lang.Throwable -> L15a
            int r2 = r2.getECPM()     // Catch: java.lang.Throwable -> L15a
            r1.append(r2)     // Catch: java.lang.Throwable -> L15a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L15a
            android.util.Log.i(r0, r1)     // Catch: java.lang.Throwable -> L15a
        L150:
            java.lang.Object r0 = r3.a     // Catch: java.lang.Throwable -> L15a
            com.kwad.sdk.api.KsNativeAd r0 = (com.kwad.sdk.api.KsNativeAd) r0     // Catch: java.lang.Throwable -> L15a
            int r1 = (int) r4     // Catch: java.lang.Throwable -> L15a
            r0.setBidEcpm(r1)     // Catch: java.lang.Throwable -> L15a
            monitor-exit(r3)
            return
        L15a:
            java.lang.Object r0 = r3.a     // Catch: java.lang.Throwable -> L18b
            boolean r0 = r0 instanceof com.kwad.sdk.api.KsSplashScreenAd     // Catch: java.lang.Throwable -> L18b
            if (r0 == 0) goto L18b
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> L18b
            if (r0 == 0) goto L181
            java.lang.String r0 = "KSTYBiddingNotice"
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L18b
            java.lang.String r2 = "Origin price:"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L18b
            java.lang.Object r2 = r3.a     // Catch: java.lang.Throwable -> L18b
            com.kwad.sdk.api.KsSplashScreenAd r2 = (com.kwad.sdk.api.KsSplashScreenAd) r2     // Catch: java.lang.Throwable -> L18b
            int r2 = r2.getECPM()     // Catch: java.lang.Throwable -> L18b
            r1.append(r2)     // Catch: java.lang.Throwable -> L18b
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L18b
            android.util.Log.i(r0, r1)     // Catch: java.lang.Throwable -> L18b
        L181:
            java.lang.Object r0 = r3.a     // Catch: java.lang.Throwable -> L18b
            com.kwad.sdk.api.KsSplashScreenAd r0 = (com.kwad.sdk.api.KsSplashScreenAd) r0     // Catch: java.lang.Throwable -> L18b
            int r4 = (int) r4     // Catch: java.lang.Throwable -> L18b
            r0.setBidEcpm(r4)     // Catch: java.lang.Throwable -> L18b
            monitor-exit(r3)
            return
        L18b:
            r4 = 0
            r3.a = r4     // Catch: java.lang.Throwable -> L190
            monitor-exit(r3)
            return
        L190:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }
}
