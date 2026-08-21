package com.qq.e.ads.banner2;

class ADListenerAdapter implements com.qq.e.comm.adevent.ADListener {
    private final com.qq.e.ads.banner2.UnifiedBannerADListener a;
    private com.qq.e.comm.listeners.NegativeFeedbackListener b;
    private com.qq.e.comm.listeners.ADRewardListener c;

    ADListenerAdapter(com.qq.e.ads.banner2.UnifiedBannerADListener r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    @Override
    public void onADEvent(com.qq.e.comm.adevent.ADEvent r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            int r0 = r3.getType()
            r1 = 100
            if (r0 == r1) goto L7c
            r1 = 101(0x65, float:1.42E-43)
            if (r0 == r1) goto L62
            r1 = 303(0x12f, float:4.25E-43)
            if (r0 == r1) goto L5a
            r1 = 304(0x130, float:4.26E-43)
            if (r0 == r1) goto L52
            switch(r0) {
                case 103: goto L4a;
                case 104: goto L2c;
                case 105: goto L24;
                case 106: goto L1c;
                default: goto L1a;
            }
        L1a:
            goto L83
        L1c:
            com.qq.e.ads.banner2.UnifiedBannerADListener r3 = r2.a
            if (r3 == 0) goto L83
            r3.onADClosed()
            goto L83
        L24:
            com.qq.e.ads.banner2.UnifiedBannerADListener r3 = r2.a
            if (r3 == 0) goto L83
            r3.onADClicked()
            goto L83
        L2c:
            com.qq.e.comm.listeners.ADRewardListener r0 = r2.c
            if (r0 == 0) goto L83
            java.lang.Class<java.lang.String> r0 = java.lang.String.class
            java.lang.Object r3 = r3.getParam(r0)
            java.lang.String r3 = (java.lang.String) r3
            if (r3 == 0) goto L83
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "transId"
            r0.put(r1, r3)
            com.qq.e.comm.listeners.ADRewardListener r3 = r2.c
            r3.onReward(r0)
            goto L83
        L4a:
            com.qq.e.ads.banner2.UnifiedBannerADListener r3 = r2.a
            if (r3 == 0) goto L83
            r3.onADExposure()
            goto L83
        L52:
            com.qq.e.comm.listeners.NegativeFeedbackListener r3 = r2.b
            if (r3 == 0) goto L83
            r3.onComplainSuccess()
            goto L83
        L5a:
            com.qq.e.ads.banner2.UnifiedBannerADListener r3 = r2.a
            if (r3 == 0) goto L83
            r3.onADLeftApplication()
            goto L83
        L62:
            java.lang.Class<java.lang.Integer> r0 = java.lang.Integer.class
            java.lang.Object r3 = r3.getParam(r0)
            java.lang.Integer r3 = (java.lang.Integer) r3
            if (r3 == 0) goto L83
            com.qq.e.ads.banner2.UnifiedBannerADListener r0 = r2.a
            if (r0 == 0) goto L83
            int r3 = r3.intValue()
            com.qq.e.comm.util.AdError r3 = com.qq.e.comm.util.AdErrorConvertor.formatErrorCode(r3)
            r0.onNoAD(r3)
            goto L83
        L7c:
            com.qq.e.ads.banner2.UnifiedBannerADListener r3 = r2.a
            if (r3 == 0) goto L83
            r3.onADReceive()
        L83:
            return
    }

    public void setAdRewardListener(com.qq.e.comm.listeners.ADRewardListener r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setNegativeFeedbackListener(com.qq.e.comm.listeners.NegativeFeedbackListener r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
