package com.tkay.network.sigmob;

public class SigmobTYBiddingNotice implements com.tkay.core.api.TYBiddingNotice {
    private java.lang.Object a;

    public SigmobTYBiddingNotice(java.lang.Object r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public com.tkay.core.api.TYAdConst.CURRENCY getNoticePriceCurrency() {
            r1 = this;
            com.tkay.core.api.TYAdConst$CURRENCY r0 = com.tkay.core.api.TYAdConst.CURRENCY.USD
            return r0
    }

    @Override
    public void notifyBidDisplay(boolean r1, double r2) {
            r0 = this;
            return
    }

    @Override
    public void notifyBidLoss(java.lang.String r3, double r4, java.util.Map<java.lang.String, java.lang.Object> r6) {
            r2 = this;
            com.sigmob.windad.WindAdBiddingLossReason r6 = com.sigmob.windad.WindAdBiddingLossReason.LOSS_REASON_LOW_PRICE
            java.lang.String r0 = "2"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto Lc
            com.sigmob.windad.WindAdBiddingLossReason r6 = com.sigmob.windad.WindAdBiddingLossReason.LOSS_REASON_RETURN_TIMEOUT
        Lc:
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r0 == 0) goto L39
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "notifyBidLoss() >>> lossCode = "
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = ",lossReaseon = "
            r0.append(r3)
            java.lang.String r3 = r6.getMessage()
            r0.append(r3)
            java.lang.String r3 = " winPrice = $"
            r0.append(r3)
            r0.append(r4)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "SigmobTYBiddingNotice"
            android.util.Log.i(r0, r3)
        L39:
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            r0 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r4 = r4 * r0
            java.lang.Double r4 = java.lang.Double.valueOf(r4)
            java.lang.String r5 = "AUCTION_PRICE"
            r3.put(r5, r4)
            java.lang.String r4 = "CURRENCY"
            java.lang.String r5 = "USD"
            r3.put(r4, r5)
            int r4 = r6.getCode()
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            java.lang.String r5 = "LOSS_REASON"
            r3.put(r5, r4)
            java.lang.String r4 = "ADN_ID"
            java.lang.String r5 = "10001"
            r3.put(r4, r5)
            java.lang.Object r4 = r2.a     // Catch: java.lang.Exception -> L9c
            boolean r4 = r4 instanceof com.sigmob.windad.natives.WindNativeUnifiedAd     // Catch: java.lang.Exception -> L9c
            if (r4 == 0) goto L73
            java.lang.Object r4 = r2.a     // Catch: java.lang.Exception -> L9c
            com.sigmob.windad.natives.WindNativeUnifiedAd r4 = (com.sigmob.windad.natives.WindNativeUnifiedAd) r4     // Catch: java.lang.Exception -> L9c
            r4.sendLossNotificationWithInfo(r3)     // Catch: java.lang.Exception -> L9c
            goto L9c
        L73:
            java.lang.Object r4 = r2.a     // Catch: java.lang.Exception -> L9c
            boolean r4 = r4 instanceof com.sigmob.windad.rewardVideo.WindRewardVideoAd     // Catch: java.lang.Exception -> L9c
            if (r4 == 0) goto L81
            java.lang.Object r4 = r2.a     // Catch: java.lang.Exception -> L9c
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r4 = (com.sigmob.windad.rewardVideo.WindRewardVideoAd) r4     // Catch: java.lang.Exception -> L9c
            r4.sendLossNotificationWithInfo(r3)     // Catch: java.lang.Exception -> L9c
            goto L9c
        L81:
            java.lang.Object r4 = r2.a     // Catch: java.lang.Exception -> L9c
            boolean r4 = r4 instanceof com.sigmob.windad.interstitial.WindInterstitialAd     // Catch: java.lang.Exception -> L9c
            if (r4 == 0) goto L8f
            java.lang.Object r4 = r2.a     // Catch: java.lang.Exception -> L9c
            com.sigmob.windad.interstitial.WindInterstitialAd r4 = (com.sigmob.windad.interstitial.WindInterstitialAd) r4     // Catch: java.lang.Exception -> L9c
            r4.sendLossNotificationWithInfo(r3)     // Catch: java.lang.Exception -> L9c
            goto L9c
        L8f:
            java.lang.Object r4 = r2.a     // Catch: java.lang.Exception -> L9c
            boolean r4 = r4 instanceof com.sigmob.windad.Splash.WindSplashAD     // Catch: java.lang.Exception -> L9c
            if (r4 == 0) goto L9c
            java.lang.Object r4 = r2.a     // Catch: java.lang.Exception -> L9c
            com.sigmob.windad.Splash.WindSplashAD r4 = (com.sigmob.windad.Splash.WindSplashAD) r4     // Catch: java.lang.Exception -> L9c
            r4.sendLossNotificationWithInfo(r3)     // Catch: java.lang.Exception -> L9c
        L9c:
            r3 = 0
            r2.a = r3
            return
    }

    @Override
    public void notifyBidWin(double r4) {
            r3 = this;
            boolean r0 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r0 == 0) goto L15
            java.lang.String r0 = java.lang.String.valueOf(r4)
            java.lang.String r1 = "notifyBidWin() >>> secondPrice = $"
            java.lang.String r0 = r1.concat(r0)
            java.lang.String r1 = "SigmobTYBiddingNotice"
            android.util.Log.i(r1, r0)
        L15:
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.Object r1 = r3.a
            int r1 = com.tkay.network.sigmob.SigmobTYInitManager.getEcpmInt(r1)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "AUCTION_PRICE"
            r0.put(r2, r1)
            r1 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r4 = r4 * r1
            java.lang.Double r4 = java.lang.Double.valueOf(r4)
            java.lang.String r5 = "HIGHEST_LOSS_PRICE"
            r0.put(r5, r4)
            java.lang.String r4 = "CURRENCY"
            java.lang.String r5 = "USD"
            r0.put(r4, r5)
            java.lang.Object r4 = r3.a     // Catch: java.lang.Exception -> L73
            boolean r4 = r4 instanceof com.sigmob.windad.natives.WindNativeUnifiedAd     // Catch: java.lang.Exception -> L73
            if (r4 == 0) goto L4a
            java.lang.Object r4 = r3.a     // Catch: java.lang.Exception -> L73
            com.sigmob.windad.natives.WindNativeUnifiedAd r4 = (com.sigmob.windad.natives.WindNativeUnifiedAd) r4     // Catch: java.lang.Exception -> L73
            r4.sendWinNotificationWithInfo(r0)     // Catch: java.lang.Exception -> L73
            goto L73
        L4a:
            java.lang.Object r4 = r3.a     // Catch: java.lang.Exception -> L73
            boolean r4 = r4 instanceof com.sigmob.windad.rewardVideo.WindRewardVideoAd     // Catch: java.lang.Exception -> L73
            if (r4 == 0) goto L58
            java.lang.Object r4 = r3.a     // Catch: java.lang.Exception -> L73
            com.sigmob.windad.rewardVideo.WindRewardVideoAd r4 = (com.sigmob.windad.rewardVideo.WindRewardVideoAd) r4     // Catch: java.lang.Exception -> L73
            r4.sendWinNotificationWithInfo(r0)     // Catch: java.lang.Exception -> L73
            goto L73
        L58:
            java.lang.Object r4 = r3.a     // Catch: java.lang.Exception -> L73
            boolean r4 = r4 instanceof com.sigmob.windad.interstitial.WindInterstitialAd     // Catch: java.lang.Exception -> L73
            if (r4 == 0) goto L66
            java.lang.Object r4 = r3.a     // Catch: java.lang.Exception -> L73
            com.sigmob.windad.interstitial.WindInterstitialAd r4 = (com.sigmob.windad.interstitial.WindInterstitialAd) r4     // Catch: java.lang.Exception -> L73
            r4.sendWinNotificationWithInfo(r0)     // Catch: java.lang.Exception -> L73
            goto L73
        L66:
            java.lang.Object r4 = r3.a     // Catch: java.lang.Exception -> L73
            boolean r4 = r4 instanceof com.sigmob.windad.Splash.WindSplashAD     // Catch: java.lang.Exception -> L73
            if (r4 == 0) goto L73
            java.lang.Object r4 = r3.a     // Catch: java.lang.Exception -> L73
            com.sigmob.windad.Splash.WindSplashAD r4 = (com.sigmob.windad.Splash.WindSplashAD) r4     // Catch: java.lang.Exception -> L73
            r4.sendWinNotificationWithInfo(r0)     // Catch: java.lang.Exception -> L73
        L73:
            r4 = 0
            r3.a = r4
            return
    }
}
