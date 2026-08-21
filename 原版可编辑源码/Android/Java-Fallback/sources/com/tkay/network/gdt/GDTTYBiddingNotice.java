package com.tkay.network.gdt;

public class GDTTYBiddingNotice implements com.tkay.core.api.TYBiddingNotice {
    java.lang.Object a;

    protected GDTTYBiddingNotice(java.lang.Object r1) {
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
    public void notifyBidLoss(java.lang.String r8, double r9, java.util.Map<java.lang.String, java.lang.Object> r11) {
            r7 = this;
            java.lang.String r0 = "adn_id"
            java.util.HashMap r1 = new java.util.HashMap
            r2 = 4
            r1.<init>(r2)
            int r2 = r8.hashCode()
            r3 = 50
            r4 = 2
            r5 = 1
            r6 = -1
            if (r2 == r3) goto L2b
            switch(r2) {
                case 48627: goto L21;
                case 48628: goto L17;
                default: goto L16;
            }
        L16:
            goto L35
        L17:
            java.lang.String r2 = "103"
            boolean r2 = r8.equals(r2)
            if (r2 == 0) goto L35
            r2 = r4
            goto L36
        L21:
            java.lang.String r2 = "102"
            boolean r2 = r8.equals(r2)
            if (r2 == 0) goto L35
            r2 = r5
            goto L36
        L2b:
            java.lang.String r2 = "2"
            boolean r2 = r8.equals(r2)
            if (r2 == 0) goto L35
            r2 = 0
            goto L36
        L35:
            r2 = r6
        L36:
            if (r2 == 0) goto L40
            if (r2 == r5) goto L3f
            if (r2 == r4) goto L3f
            r4 = 10001(0x2711, float:1.4014E-41)
            goto L40
        L3f:
            r4 = r5
        L40:
            int r9 = (int) r9
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)
            java.lang.String r10 = "winPrice"
            r1.put(r10, r9)
            java.lang.Integer r9 = java.lang.Integer.valueOf(r4)
            java.lang.String r10 = "lossReason"
            r1.put(r10, r9)
            boolean r9 = r11.containsKey(r0)     // Catch: java.lang.Throwable -> L74
            if (r9 == 0) goto L68
            java.lang.Object r9 = r11.get(r0)     // Catch: java.lang.Throwable -> L74
            boolean r10 = r9 instanceof java.lang.Integer     // Catch: java.lang.Throwable -> L74
            if (r10 == 0) goto L68
            java.lang.Integer r9 = (java.lang.Integer) r9     // Catch: java.lang.Throwable -> L74
            int r9 = r9.intValue()     // Catch: java.lang.Throwable -> L74
            goto L69
        L68:
            r9 = r6
        L69:
            if (r9 == r6) goto L74
            java.lang.String r10 = "adnId"
            java.lang.Integer r9 = java.lang.Integer.valueOf(r9)     // Catch: java.lang.Throwable -> L74
            r1.put(r10, r9)     // Catch: java.lang.Throwable -> L74
        L74:
            boolean r9 = com.tkay.core.api.TYSDK.isNetworkLogDebug()
            if (r9 == 0) goto Lb2
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.Object r10 = r7.a
            if (r10 == 0) goto L88
            java.lang.String r10 = r10.toString()
            goto L8a
        L88:
            java.lang.String r10 = ""
        L8a:
            r9.append(r10)
            java.lang.String r10 = ": notifyBidLoss lossCode:"
            r9.append(r10)
            r9.append(r8)
            java.lang.String r8 = ",lossReaseon:"
            r9.append(r8)
            r9.append(r4)
            java.lang.String r8 = "\n"
            r9.append(r8)
            java.lang.String r8 = r1.toString()
            r9.append(r8)
            java.lang.String r8 = r9.toString()
            java.lang.String r9 = "GDTTYBiddingNotice"
            android.util.Log.i(r9, r8)
        Lb2:
            java.lang.Object r8 = r7.a     // Catch: java.lang.Throwable -> Lc0
            boolean r8 = r8 instanceof com.qq.e.ads.rewardvideo.RewardVideoAD     // Catch: java.lang.Throwable -> Lc0
            if (r8 == 0) goto Lc0
            java.lang.Object r8 = r7.a     // Catch: java.lang.Throwable -> Lc0
            com.qq.e.ads.rewardvideo.RewardVideoAD r8 = (com.qq.e.ads.rewardvideo.RewardVideoAD) r8     // Catch: java.lang.Throwable -> Lc0
            r8.sendLossNotification(r1)     // Catch: java.lang.Throwable -> Lc0
            return
        Lc0:
            java.lang.Object r8 = r7.a     // Catch: java.lang.Throwable -> Lce
            boolean r8 = r8 instanceof com.qq.e.ads.interstitial2.UnifiedInterstitialAD     // Catch: java.lang.Throwable -> Lce
            if (r8 == 0) goto Lce
            java.lang.Object r8 = r7.a     // Catch: java.lang.Throwable -> Lce
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r8 = (com.qq.e.ads.interstitial2.UnifiedInterstitialAD) r8     // Catch: java.lang.Throwable -> Lce
            r8.sendLossNotification(r1)     // Catch: java.lang.Throwable -> Lce
            return
        Lce:
            java.lang.Object r8 = r7.a     // Catch: java.lang.Throwable -> Ldc
            boolean r8 = r8 instanceof com.qq.e.ads.splash.SplashAD     // Catch: java.lang.Throwable -> Ldc
            if (r8 == 0) goto Ldc
            java.lang.Object r8 = r7.a     // Catch: java.lang.Throwable -> Ldc
            com.qq.e.ads.splash.SplashAD r8 = (com.qq.e.ads.splash.SplashAD) r8     // Catch: java.lang.Throwable -> Ldc
            r8.sendLossNotification(r1)     // Catch: java.lang.Throwable -> Ldc
            return
        Ldc:
            java.lang.Object r8 = r7.a     // Catch: java.lang.Throwable -> Lea
            boolean r8 = r8 instanceof com.qq.e.ads.banner2.UnifiedBannerView     // Catch: java.lang.Throwable -> Lea
            if (r8 == 0) goto Lea
            java.lang.Object r8 = r7.a     // Catch: java.lang.Throwable -> Lea
            com.qq.e.ads.banner2.UnifiedBannerView r8 = (com.qq.e.ads.banner2.UnifiedBannerView) r8     // Catch: java.lang.Throwable -> Lea
            r8.sendLossNotification(r1)     // Catch: java.lang.Throwable -> Lea
            return
        Lea:
            java.lang.Object r8 = r7.a     // Catch: java.lang.Throwable -> L11a
            boolean r8 = r8 instanceof com.tkay.network.gdt.GDTTYNativeExpressAd     // Catch: java.lang.Throwable -> L11a
            if (r8 == 0) goto Lfa
            java.lang.Object r8 = r7.a     // Catch: java.lang.Throwable -> L11a
            com.tkay.network.gdt.GDTTYNativeExpressAd r8 = (com.tkay.network.gdt.GDTTYNativeExpressAd) r8     // Catch: java.lang.Throwable -> L11a
            com.qq.e.ads.nativ.NativeExpressADView r8 = r8.b     // Catch: java.lang.Throwable -> L11a
            r8.sendLossNotification(r1)     // Catch: java.lang.Throwable -> L11a
            return
        Lfa:
            java.lang.Object r8 = r7.a     // Catch: java.lang.Throwable -> L11a
            boolean r8 = r8 instanceof com.tkay.network.gdt.GDTTYNativePatchAd     // Catch: java.lang.Throwable -> L11a
            if (r8 == 0) goto L10a
            java.lang.Object r8 = r7.a     // Catch: java.lang.Throwable -> L11a
            com.tkay.network.gdt.GDTTYNativePatchAd r8 = (com.tkay.network.gdt.GDTTYNativePatchAd) r8     // Catch: java.lang.Throwable -> L11a
            com.qq.e.ads.nativ.NativeUnifiedADData r8 = r8.c     // Catch: java.lang.Throwable -> L11a
            r8.sendLossNotification(r1)     // Catch: java.lang.Throwable -> L11a
            return
        L10a:
            java.lang.Object r8 = r7.a     // Catch: java.lang.Throwable -> L11a
            boolean r8 = r8 instanceof com.tkay.network.gdt.GDTTYNativeAd     // Catch: java.lang.Throwable -> L11a
            if (r8 == 0) goto L11a
            java.lang.Object r8 = r7.a     // Catch: java.lang.Throwable -> L11a
            com.tkay.network.gdt.GDTTYNativeAd r8 = (com.tkay.network.gdt.GDTTYNativeAd) r8     // Catch: java.lang.Throwable -> L11a
            com.qq.e.ads.nativ.NativeUnifiedADData r8 = r8.c     // Catch: java.lang.Throwable -> L11a
            r8.sendLossNotification(r1)     // Catch: java.lang.Throwable -> L11a
            return
        L11a:
            r8 = 0
            r7.a = r8
            return
    }

    @Override
    public void notifyBidWin(double r7) {
            r6 = this;
            java.lang.String r0 = ": notifyBidWin: "
            java.lang.String r1 = ""
            java.lang.String r2 = "GDTTYBiddingNotice"
            java.lang.String r3 = "expectCostPrice"
            java.util.HashMap r4 = new java.util.HashMap
            r5 = 4
            r4.<init>(r5)
            int r7 = (int) r7
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
            java.lang.String r8 = "highestLossPrice"
            r4.put(r8, r7)
            java.lang.Object r7 = r6.a     // Catch: java.lang.Throwable -> L5c
            boolean r7 = r7 instanceof com.qq.e.ads.rewardvideo.RewardVideoAD     // Catch: java.lang.Throwable -> L5c
            if (r7 == 0) goto L5c
            java.lang.Object r7 = r6.a     // Catch: java.lang.Throwable -> L5c
            com.qq.e.ads.rewardvideo.RewardVideoAD r7 = (com.qq.e.ads.rewardvideo.RewardVideoAD) r7     // Catch: java.lang.Throwable -> L5c
            int r8 = r7.getECPM()     // Catch: java.lang.Throwable -> L5c
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L5c
            r4.put(r3, r8)     // Catch: java.lang.Throwable -> L5c
            boolean r8 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> L5c
            if (r8 == 0) goto L58
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5c
            r8.<init>()     // Catch: java.lang.Throwable -> L5c
            java.lang.Object r5 = r6.a     // Catch: java.lang.Throwable -> L5c
            if (r5 == 0) goto L43
            java.lang.Object r5 = r6.a     // Catch: java.lang.Throwable -> L5c
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L5c
            goto L44
        L43:
            r5 = r1
        L44:
            r8.append(r5)     // Catch: java.lang.Throwable -> L5c
            r8.append(r0)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r5 = r4.toString()     // Catch: java.lang.Throwable -> L5c
            r8.append(r5)     // Catch: java.lang.Throwable -> L5c
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L5c
            android.util.Log.i(r2, r8)     // Catch: java.lang.Throwable -> L5c
        L58:
            r7.sendWinNotification(r4)     // Catch: java.lang.Throwable -> L5c
            return
        L5c:
            java.lang.Object r7 = r6.a     // Catch: java.lang.Throwable -> La0
            boolean r7 = r7 instanceof com.qq.e.ads.interstitial2.UnifiedInterstitialAD     // Catch: java.lang.Throwable -> La0
            if (r7 == 0) goto La0
            java.lang.Object r7 = r6.a     // Catch: java.lang.Throwable -> La0
            com.qq.e.ads.interstitial2.UnifiedInterstitialAD r7 = (com.qq.e.ads.interstitial2.UnifiedInterstitialAD) r7     // Catch: java.lang.Throwable -> La0
            int r8 = r7.getECPM()     // Catch: java.lang.Throwable -> La0
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> La0
            r4.put(r3, r8)     // Catch: java.lang.Throwable -> La0
            boolean r8 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> La0
            if (r8 == 0) goto L9c
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La0
            r8.<init>()     // Catch: java.lang.Throwable -> La0
            java.lang.Object r5 = r6.a     // Catch: java.lang.Throwable -> La0
            if (r5 == 0) goto L87
            java.lang.Object r5 = r6.a     // Catch: java.lang.Throwable -> La0
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> La0
            goto L88
        L87:
            r5 = r1
        L88:
            r8.append(r5)     // Catch: java.lang.Throwable -> La0
            r8.append(r0)     // Catch: java.lang.Throwable -> La0
            java.lang.String r5 = r4.toString()     // Catch: java.lang.Throwable -> La0
            r8.append(r5)     // Catch: java.lang.Throwable -> La0
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> La0
            android.util.Log.i(r2, r8)     // Catch: java.lang.Throwable -> La0
        L9c:
            r7.sendWinNotification(r4)     // Catch: java.lang.Throwable -> La0
            return
        La0:
            java.lang.Object r7 = r6.a     // Catch: java.lang.Throwable -> Le4
            boolean r7 = r7 instanceof com.qq.e.ads.splash.SplashAD     // Catch: java.lang.Throwable -> Le4
            if (r7 == 0) goto Le4
            java.lang.Object r7 = r6.a     // Catch: java.lang.Throwable -> Le4
            com.qq.e.ads.splash.SplashAD r7 = (com.qq.e.ads.splash.SplashAD) r7     // Catch: java.lang.Throwable -> Le4
            int r8 = r7.getECPM()     // Catch: java.lang.Throwable -> Le4
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> Le4
            r4.put(r3, r8)     // Catch: java.lang.Throwable -> Le4
            boolean r8 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> Le4
            if (r8 == 0) goto Le0
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le4
            r8.<init>()     // Catch: java.lang.Throwable -> Le4
            java.lang.Object r5 = r6.a     // Catch: java.lang.Throwable -> Le4
            if (r5 == 0) goto Lcb
            java.lang.Object r5 = r6.a     // Catch: java.lang.Throwable -> Le4
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> Le4
            goto Lcc
        Lcb:
            r5 = r1
        Lcc:
            r8.append(r5)     // Catch: java.lang.Throwable -> Le4
            r8.append(r0)     // Catch: java.lang.Throwable -> Le4
            java.lang.String r5 = r4.toString()     // Catch: java.lang.Throwable -> Le4
            r8.append(r5)     // Catch: java.lang.Throwable -> Le4
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> Le4
            android.util.Log.i(r2, r8)     // Catch: java.lang.Throwable -> Le4
        Le0:
            r7.sendWinNotification(r4)     // Catch: java.lang.Throwable -> Le4
            return
        Le4:
            java.lang.Object r7 = r6.a     // Catch: java.lang.Throwable -> L128
            boolean r7 = r7 instanceof com.qq.e.ads.banner2.UnifiedBannerView     // Catch: java.lang.Throwable -> L128
            if (r7 == 0) goto L128
            java.lang.Object r7 = r6.a     // Catch: java.lang.Throwable -> L128
            com.qq.e.ads.banner2.UnifiedBannerView r7 = (com.qq.e.ads.banner2.UnifiedBannerView) r7     // Catch: java.lang.Throwable -> L128
            int r8 = r7.getECPM()     // Catch: java.lang.Throwable -> L128
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L128
            r4.put(r3, r8)     // Catch: java.lang.Throwable -> L128
            boolean r8 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> L128
            if (r8 == 0) goto L124
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L128
            r8.<init>()     // Catch: java.lang.Throwable -> L128
            java.lang.Object r5 = r6.a     // Catch: java.lang.Throwable -> L128
            if (r5 == 0) goto L10f
            java.lang.Object r5 = r6.a     // Catch: java.lang.Throwable -> L128
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L128
            goto L110
        L10f:
            r5 = r1
        L110:
            r8.append(r5)     // Catch: java.lang.Throwable -> L128
            r8.append(r0)     // Catch: java.lang.Throwable -> L128
            java.lang.String r5 = r4.toString()     // Catch: java.lang.Throwable -> L128
            r8.append(r5)     // Catch: java.lang.Throwable -> L128
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L128
            android.util.Log.i(r2, r8)     // Catch: java.lang.Throwable -> L128
        L124:
            r7.sendWinNotification(r4)     // Catch: java.lang.Throwable -> L128
            return
        L128:
            java.lang.Object r7 = r6.a     // Catch: java.lang.Throwable -> L1fa
            boolean r7 = r7 instanceof com.tkay.network.gdt.GDTTYNativeExpressAd     // Catch: java.lang.Throwable -> L1fa
            if (r7 == 0) goto L16e
            java.lang.Object r7 = r6.a     // Catch: java.lang.Throwable -> L1fa
            com.tkay.network.gdt.GDTTYNativeExpressAd r7 = (com.tkay.network.gdt.GDTTYNativeExpressAd) r7     // Catch: java.lang.Throwable -> L1fa
            com.qq.e.ads.nativ.NativeExpressADView r8 = r7.b     // Catch: java.lang.Throwable -> L1fa
            int r8 = r8.getECPM()     // Catch: java.lang.Throwable -> L1fa
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L1fa
            r4.put(r3, r8)     // Catch: java.lang.Throwable -> L1fa
            boolean r8 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> L1fa
            if (r8 == 0) goto L168
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fa
            r8.<init>()     // Catch: java.lang.Throwable -> L1fa
            java.lang.Object r3 = r6.a     // Catch: java.lang.Throwable -> L1fa
            if (r3 == 0) goto L154
            java.lang.Object r1 = r6.a     // Catch: java.lang.Throwable -> L1fa
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1fa
        L154:
            r8.append(r1)     // Catch: java.lang.Throwable -> L1fa
            r8.append(r0)     // Catch: java.lang.Throwable -> L1fa
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> L1fa
            r8.append(r0)     // Catch: java.lang.Throwable -> L1fa
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L1fa
            android.util.Log.i(r2, r8)     // Catch: java.lang.Throwable -> L1fa
        L168:
            com.qq.e.ads.nativ.NativeExpressADView r7 = r7.b     // Catch: java.lang.Throwable -> L1fa
            r7.sendWinNotification(r4)     // Catch: java.lang.Throwable -> L1fa
            return
        L16e:
            java.lang.Object r7 = r6.a     // Catch: java.lang.Throwable -> L1fa
            boolean r7 = r7 instanceof com.tkay.network.gdt.GDTTYNativePatchAd     // Catch: java.lang.Throwable -> L1fa
            if (r7 == 0) goto L1b4
            java.lang.Object r7 = r6.a     // Catch: java.lang.Throwable -> L1fa
            com.tkay.network.gdt.GDTTYNativePatchAd r7 = (com.tkay.network.gdt.GDTTYNativePatchAd) r7     // Catch: java.lang.Throwable -> L1fa
            com.qq.e.ads.nativ.NativeUnifiedADData r8 = r7.c     // Catch: java.lang.Throwable -> L1fa
            int r8 = r8.getECPM()     // Catch: java.lang.Throwable -> L1fa
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L1fa
            r4.put(r3, r8)     // Catch: java.lang.Throwable -> L1fa
            boolean r8 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> L1fa
            if (r8 == 0) goto L1ae
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fa
            r8.<init>()     // Catch: java.lang.Throwable -> L1fa
            java.lang.Object r3 = r6.a     // Catch: java.lang.Throwable -> L1fa
            if (r3 == 0) goto L19a
            java.lang.Object r1 = r6.a     // Catch: java.lang.Throwable -> L1fa
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1fa
        L19a:
            r8.append(r1)     // Catch: java.lang.Throwable -> L1fa
            r8.append(r0)     // Catch: java.lang.Throwable -> L1fa
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> L1fa
            r8.append(r0)     // Catch: java.lang.Throwable -> L1fa
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L1fa
            android.util.Log.i(r2, r8)     // Catch: java.lang.Throwable -> L1fa
        L1ae:
            com.qq.e.ads.nativ.NativeUnifiedADData r7 = r7.c     // Catch: java.lang.Throwable -> L1fa
            r7.sendWinNotification(r4)     // Catch: java.lang.Throwable -> L1fa
            return
        L1b4:
            java.lang.Object r7 = r6.a     // Catch: java.lang.Throwable -> L1fa
            boolean r7 = r7 instanceof com.tkay.network.gdt.GDTTYNativeAd     // Catch: java.lang.Throwable -> L1fa
            if (r7 == 0) goto L1fa
            java.lang.Object r7 = r6.a     // Catch: java.lang.Throwable -> L1fa
            com.tkay.network.gdt.GDTTYNativeAd r7 = (com.tkay.network.gdt.GDTTYNativeAd) r7     // Catch: java.lang.Throwable -> L1fa
            com.qq.e.ads.nativ.NativeUnifiedADData r8 = r7.c     // Catch: java.lang.Throwable -> L1fa
            int r8 = r8.getECPM()     // Catch: java.lang.Throwable -> L1fa
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.Throwable -> L1fa
            r4.put(r3, r8)     // Catch: java.lang.Throwable -> L1fa
            boolean r8 = com.tkay.core.api.TYSDK.isNetworkLogDebug()     // Catch: java.lang.Throwable -> L1fa
            if (r8 == 0) goto L1f4
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L1fa
            r8.<init>()     // Catch: java.lang.Throwable -> L1fa
            java.lang.Object r3 = r6.a     // Catch: java.lang.Throwable -> L1fa
            if (r3 == 0) goto L1e0
            java.lang.Object r1 = r6.a     // Catch: java.lang.Throwable -> L1fa
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L1fa
        L1e0:
            r8.append(r1)     // Catch: java.lang.Throwable -> L1fa
            r8.append(r0)     // Catch: java.lang.Throwable -> L1fa
            java.lang.String r0 = r4.toString()     // Catch: java.lang.Throwable -> L1fa
            r8.append(r0)     // Catch: java.lang.Throwable -> L1fa
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Throwable -> L1fa
            android.util.Log.i(r2, r8)     // Catch: java.lang.Throwable -> L1fa
        L1f4:
            com.qq.e.ads.nativ.NativeUnifiedADData r7 = r7.c     // Catch: java.lang.Throwable -> L1fa
            r7.sendWinNotification(r4)     // Catch: java.lang.Throwable -> L1fa
            return
        L1fa:
            r7 = 0
            r6.a = r7
            return
    }
}
