package com.qq.e.ads.interstitial2;

class ADListenerAdapter implements com.qq.e.comm.adevent.ADListener {
    private final com.qq.e.ads.interstitial2.UnifiedInterstitialADListener a;
    private com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener b;
    private com.qq.e.comm.listeners.ADRewardListener c;
    private com.qq.e.comm.listeners.NegativeFeedbackListener d;

    ADListenerAdapter(com.qq.e.ads.interstitial2.UnifiedInterstitialADListener r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public void onADEvent(com.qq.e.comm.adevent.ADEvent r4) {
            r3 = this;
            if (r4 != 0) goto L3
            return
        L3:
            int r0 = r4.getType()
            r1 = 109(0x6d, float:1.53E-43)
            if (r0 == r1) goto L12b
            r1 = 110(0x6e, float:1.54E-43)
            if (r0 == r1) goto L11b
            r1 = 201(0xc9, float:2.82E-43)
            if (r0 == r1) goto L113
            r1 = 202(0xca, float:2.83E-43)
            if (r0 == r1) goto L10b
            r1 = 204(0xcc, float:2.86E-43)
            if (r0 == r1) goto L103
            r1 = 206(0xce, float:2.89E-43)
            if (r0 == r1) goto Lfb
            r1 = 207(0xcf, float:2.9E-43)
            if (r0 == r1) goto Le1
            switch(r0) {
                case 100: goto L8c;
                case 101: goto L71;
                case 102: goto L68;
                case 103: goto L5f;
                case 104: goto L40;
                case 105: goto L37;
                case 106: goto L2e;
                default: goto L26;
            }
        L26:
            switch(r0) {
                case 209: goto Lb6;
                case 210: goto L9e;
                case 211: goto L95;
                default: goto L29;
            }
        L29:
            switch(r0) {
                case 301: goto Ld9;
                case 302: goto Ld1;
                case 303: goto Lc8;
                case 304: goto Lbf;
                default: goto L2c;
            }
        L2c:
            goto L13a
        L2e:
            com.qq.e.ads.interstitial2.UnifiedInterstitialADListener r4 = r3.a
            if (r4 == 0) goto L13a
            r4.onADClosed()
            goto L13a
        L37:
            com.qq.e.ads.interstitial2.UnifiedInterstitialADListener r4 = r3.a
            if (r4 == 0) goto L13a
            r4.onADClicked()
            goto L13a
        L40:
            com.qq.e.comm.listeners.ADRewardListener r0 = r3.c
            if (r0 == 0) goto L13a
            java.lang.Class<java.lang.String> r0 = java.lang.String.class
            java.lang.Object r4 = r4.getParam(r0)
            java.lang.String r4 = (java.lang.String) r4
            if (r4 == 0) goto L13a
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "transId"
            r0.put(r1, r4)
            com.qq.e.comm.listeners.ADRewardListener r4 = r3.c
            r4.onReward(r0)
            goto L13a
        L5f:
            com.qq.e.ads.interstitial2.UnifiedInterstitialADListener r4 = r3.a
            if (r4 == 0) goto L13a
            r4.onADExposure()
            goto L13a
        L68:
            com.qq.e.ads.interstitial2.UnifiedInterstitialADListener r4 = r3.a
            if (r4 == 0) goto L13a
            r4.onADOpened()
            goto L13a
        L71:
            java.lang.Class<java.lang.Integer> r0 = java.lang.Integer.class
            java.lang.Object r4 = r4.getParam(r0)
            java.lang.Integer r4 = (java.lang.Integer) r4
            if (r4 == 0) goto L13a
            com.qq.e.ads.interstitial2.UnifiedInterstitialADListener r0 = r3.a
            if (r0 == 0) goto L13a
            int r4 = r4.intValue()
            com.qq.e.comm.util.AdError r4 = com.qq.e.comm.util.AdErrorConvertor.formatErrorCode(r4)
            r0.onNoAD(r4)
            goto L13a
        L8c:
            com.qq.e.ads.interstitial2.UnifiedInterstitialADListener r4 = r3.a
            if (r4 == 0) goto L13a
            r4.onADReceive()
            goto L13a
        L95:
            com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener r4 = r3.b
            if (r4 == 0) goto L13a
            r4.onVideoLoading()
            goto L13a
        L9e:
            java.lang.Class<java.lang.Integer> r0 = java.lang.Integer.class
            java.lang.Object r4 = r4.getParam(r0)
            java.lang.Integer r4 = (java.lang.Integer) r4
            com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener r0 = r3.b
            if (r0 == 0) goto L13a
            if (r4 == 0) goto L13a
            int r4 = r4.intValue()
            long r1 = (long) r4
            r0.onVideoReady(r1)
            goto L13a
        Lb6:
            com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener r4 = r3.b
            if (r4 == 0) goto L13a
            r4.onVideoInit()
            goto L13a
        Lbf:
            com.qq.e.comm.listeners.NegativeFeedbackListener r4 = r3.d
            if (r4 == 0) goto L13a
            r4.onComplainSuccess()
            goto L13a
        Lc8:
            com.qq.e.ads.interstitial2.UnifiedInterstitialADListener r4 = r3.a
            if (r4 == 0) goto L13a
            r4.onADLeftApplication()
            goto L13a
        Ld1:
            com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener r4 = r3.b
            if (r4 == 0) goto L13a
            r4.onVideoPageClose()
            goto L13a
        Ld9:
            com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener r4 = r3.b
            if (r4 == 0) goto L13a
            r4.onVideoPageOpen()
            goto L13a
        Le1:
            java.lang.Class<java.lang.Integer> r0 = java.lang.Integer.class
            java.lang.Object r4 = r4.getParam(r0)
            java.lang.Integer r4 = (java.lang.Integer) r4
            com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener r0 = r3.b
            if (r0 == 0) goto L13a
            if (r4 == 0) goto L13a
            int r4 = r4.intValue()
            com.qq.e.comm.util.AdError r4 = com.qq.e.comm.util.AdErrorConvertor.formatErrorCode(r4)
            r0.onVideoError(r4)
            goto L13a
        Lfb:
            com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener r4 = r3.b
            if (r4 == 0) goto L13a
            r4.onVideoComplete()
            goto L13a
        L103:
            com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener r4 = r3.b
            if (r4 == 0) goto L13a
            r4.onVideoPause()
            goto L13a
        L10b:
            com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener r4 = r3.b
            if (r4 == 0) goto L13a
            r4.onVideoStart()
            goto L13a
        L113:
            com.qq.e.ads.interstitial2.UnifiedInterstitialADListener r4 = r3.a
            if (r4 == 0) goto L13a
            r4.onVideoCached()
            goto L13a
        L11b:
            com.qq.e.ads.interstitial2.UnifiedInterstitialADListener r4 = r3.a
            if (r4 == 0) goto L13a
            boolean r4 = com.qq.e.comm.util.a.a(r4)
            if (r4 == 0) goto L13a
            com.qq.e.ads.interstitial2.UnifiedInterstitialADListener r4 = r3.a
            r4.onRenderFail()
            goto L13a
        L12b:
            com.qq.e.ads.interstitial2.UnifiedInterstitialADListener r4 = r3.a
            if (r4 == 0) goto L13a
            boolean r4 = com.qq.e.comm.util.a.b(r4)
            if (r4 == 0) goto L13a
            com.qq.e.ads.interstitial2.UnifiedInterstitialADListener r4 = r3.a
            r4.onRenderSuccess()
        L13a:
            return
    }

    public void setAdRewardListener(com.qq.e.comm.listeners.ADRewardListener r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setMediaListener(com.qq.e.ads.interstitial2.UnifiedInterstitialMediaListener r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setNegativeFeedbackListener(com.qq.e.comm.listeners.NegativeFeedbackListener r1) {
            r0 = this;
            r0.d = r1
            return
    }
}
