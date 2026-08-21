package com.qq.e.ads.rewardvideo;

public class RewardVideoAD extends com.qq.e.ads.LiteAbstractAD<com.qq.e.comm.pi.RVADI> implements com.qq.e.comm.pi.NFBI {
    public static final int REWARD_TYPE_PAGE = 1;
    public static final int REWARD_TYPE_VIDEO = 0;
    private final com.qq.e.ads.rewardvideo.RewardVideoADListener g;
    private volatile boolean h;
    private com.qq.e.comm.constants.LoadAdParams i;
    private com.qq.e.ads.rewardvideo.ServerSideVerificationOptions j;
    private final boolean k;
    private final com.qq.e.ads.rewardvideo.RewardVideoAD.ADListenerAdapter l;

    public static class ADListenerAdapter implements com.qq.e.comm.adevent.ADListener {
        private com.qq.e.comm.listeners.NegativeFeedbackListener a;
        public com.qq.e.ads.rewardvideo.RewardVideoADListener adListener;

        public ADListenerAdapter(com.qq.e.ads.rewardvideo.RewardVideoADListener r1) {
                r0 = this;
                r0.<init>()
                r0.adListener = r1
                return
        }

        static void a(com.qq.e.ads.rewardvideo.RewardVideoAD.ADListenerAdapter r0, com.qq.e.comm.listeners.NegativeFeedbackListener r1) {
                r0.a = r1
                return
        }

        @Override
        public void onADEvent(com.qq.e.comm.adevent.ADEvent r3) {
                r2 = this;
                int r0 = r3.getType()
                r1 = 100
                if (r0 == r1) goto L76
                r1 = 201(0xc9, float:2.82E-43)
                if (r0 == r1) goto L70
                r1 = 206(0xce, float:2.89E-43)
                if (r0 == r1) goto L6a
                r1 = 304(0x130, float:4.26E-43)
                if (r0 == r1) goto L62
                switch(r0) {
                    case 102: goto L5c;
                    case 103: goto L56;
                    case 104: goto L3c;
                    case 105: goto L36;
                    case 106: goto L30;
                    case 107: goto L18;
                    default: goto L17;
                }
            L17:
                goto L7b
            L18:
                java.lang.Class<java.lang.Integer> r0 = java.lang.Integer.class
                java.lang.Object r3 = r3.getParam(r0)
                java.lang.Integer r3 = (java.lang.Integer) r3
                if (r3 == 0) goto L7b
                com.qq.e.ads.rewardvideo.RewardVideoADListener r0 = r2.adListener
                int r3 = r3.intValue()
                com.qq.e.comm.util.AdError r3 = com.qq.e.comm.util.AdErrorConvertor.formatErrorCode(r3)
                r0.onError(r3)
                goto L7b
            L30:
                com.qq.e.ads.rewardvideo.RewardVideoADListener r3 = r2.adListener
                r3.onADClose()
                goto L7b
            L36:
                com.qq.e.ads.rewardvideo.RewardVideoADListener r3 = r2.adListener
                r3.onADClick()
                goto L7b
            L3c:
                java.lang.Class<java.lang.String> r0 = java.lang.String.class
                java.lang.Object r3 = r3.getParam(r0)
                java.lang.String r3 = (java.lang.String) r3
                if (r3 == 0) goto L7b
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                java.lang.String r1 = "transId"
                r0.put(r1, r3)
                com.qq.e.ads.rewardvideo.RewardVideoADListener r3 = r2.adListener
                r3.onReward(r0)
                goto L7b
            L56:
                com.qq.e.ads.rewardvideo.RewardVideoADListener r3 = r2.adListener
                r3.onADExpose()
                goto L7b
            L5c:
                com.qq.e.ads.rewardvideo.RewardVideoADListener r3 = r2.adListener
                r3.onADShow()
                goto L7b
            L62:
                com.qq.e.comm.listeners.NegativeFeedbackListener r3 = r2.a
                if (r3 == 0) goto L7b
                r3.onComplainSuccess()
                goto L7b
            L6a:
                com.qq.e.ads.rewardvideo.RewardVideoADListener r3 = r2.adListener
                r3.onVideoComplete()
                goto L7b
            L70:
                com.qq.e.ads.rewardvideo.RewardVideoADListener r3 = r2.adListener
                r3.onVideoCached()
                goto L7b
            L76:
                com.qq.e.ads.rewardvideo.RewardVideoADListener r3 = r2.adListener
                r3.onADLoad()
            L7b:
                return
        }
    }

    public RewardVideoAD(android.content.Context r2, java.lang.String r3, com.qq.e.ads.rewardvideo.RewardVideoADListener r4) {
            r1 = this;
            r0 = 1
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public RewardVideoAD(android.content.Context r1, java.lang.String r2, com.qq.e.ads.rewardvideo.RewardVideoADListener r3, boolean r4) {
            r0 = this;
            r0.<init>(r3, r4)
            r0.a(r1, r2)
            return
    }

    public RewardVideoAD(android.content.Context r1, java.lang.String r2, com.qq.e.ads.rewardvideo.RewardVideoADListener r3, boolean r4, java.lang.String r5) {
            r0 = this;
            r0.<init>(r3, r4)
            r0.a(r1, r2, r5)
            return
    }

    private RewardVideoAD(com.qq.e.ads.rewardvideo.RewardVideoADListener r2, boolean r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.i = r0
            r1.k = r3
            r1.g = r2
            com.qq.e.ads.rewardvideo.RewardVideoAD$ADListenerAdapter r3 = new com.qq.e.ads.rewardvideo.RewardVideoAD$ADListenerAdapter
            r3.<init>(r2)
            r1.l = r3
            return
    }

    @Override
    protected java.lang.Object a(android.content.Context r7, com.qq.e.comm.pi.POFactory r8, java.lang.String r9, java.lang.String r10, java.lang.String r11) {
            r6 = this;
            com.qq.e.ads.rewardvideo.RewardVideoAD$ADListenerAdapter r5 = r6.l
            r0 = r8
            r1 = r7
            r2 = r9
            r3 = r10
            r4 = r11
            com.qq.e.comm.pi.RVADI r7 = r0.getRewardVideoADDelegate(r1, r2, r3, r4, r5)
            return r7
    }

    @Override
    protected void a(java.lang.Object r2) {
            r1 = this;
            com.qq.e.comm.pi.RVADI r2 = (com.qq.e.comm.pi.RVADI) r2
            boolean r0 = r1.k
            r2.setVolumeOn(r0)
            com.qq.e.comm.constants.LoadAdParams r0 = r1.i
            r2.setLoadAdParams(r0)
            com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r0 = r1.j
            r2.setServerSideVerificationOptions(r0)
            boolean r2 = r1.h
            if (r2 == 0) goto L18
            r1.loadAD()
        L18:
            return
    }

    @Override
    protected void b(int r2) {
            r1 = this;
            com.qq.e.ads.rewardvideo.RewardVideoADListener r0 = r1.g
            if (r0 == 0) goto Lb
            com.qq.e.comm.util.AdError r2 = com.qq.e.comm.util.AdErrorConvertor.formatErrorCode(r2)
            r0.onError(r2)
        Lb:
            return
    }

    public java.lang.String getAdNetWorkName() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.RVADI r0 = (com.qq.e.comm.pi.RVADI) r0
            java.lang.String r0 = r0.getAdNetWorkName()
            return r0
        Lb:
            java.lang.String r0 = "getAdNetWorkName"
            r1.a(r0)
            r0 = 0
            return r0
    }

    public int getRewardAdType() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.RVADI r0 = (com.qq.e.comm.pi.RVADI) r0
            int r0 = r0.getRewardAdType()
            return r0
        Lb:
            java.lang.String r0 = "getRewardAdType"
            r1.a(r0)
            r0 = 0
            return r0
    }

    public int getVideoDuration() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.RVADI r0 = (com.qq.e.comm.pi.RVADI) r0
            int r0 = r0.getVideoDuration()
            return r0
        Lb:
            java.lang.String r0 = "getVideoDuration"
            r1.a(r0)
            r0 = 0
            return r0
    }

    public boolean hasShown() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.RVADI r0 = (com.qq.e.comm.pi.RVADI) r0
            boolean r0 = r0.hasShown()
            return r0
        Lb:
            java.lang.String r0 = "hasShown"
            r1.a(r0)
            r0 = 0
            return r0
    }

    public void loadAD() {
            r1 = this;
            boolean r0 = r1.a()
            if (r0 != 0) goto L7
            return
        L7:
            boolean r0 = r1.b()
            if (r0 != 0) goto L11
            r0 = 1
            r1.h = r0
            goto L20
        L11:
            T r0 = r1.a
            if (r0 == 0) goto L1b
            com.qq.e.comm.pi.RVADI r0 = (com.qq.e.comm.pi.RVADI) r0
            r0.loadAD()
            goto L20
        L1b:
            java.lang.String r0 = "loadAD"
            r1.a(r0)
        L20:
            return
    }

    public void setLoadAdParams(com.qq.e.comm.constants.LoadAdParams r2) {
            r1 = this;
            r1.i = r2
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.RVADI r0 = (com.qq.e.comm.pi.RVADI) r0
            r0.setLoadAdParams(r2)
        Lb:
            return
    }

    @Override
    public void setNegativeFeedbackListener(com.qq.e.comm.listeners.NegativeFeedbackListener r2) {
            r1 = this;
            com.qq.e.ads.rewardvideo.RewardVideoAD$ADListenerAdapter r0 = r1.l
            com.qq.e.ads.rewardvideo.RewardVideoAD.ADListenerAdapter.a(r0, r2)
            return
    }

    public void setServerSideVerificationOptions(com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r2) {
            r1 = this;
            r1.j = r2
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.RVADI r0 = (com.qq.e.comm.pi.RVADI) r0
            r0.setServerSideVerificationOptions(r2)
        Lb:
            return
    }

    public void showAD() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto La
            com.qq.e.comm.pi.RVADI r0 = (com.qq.e.comm.pi.RVADI) r0
            r0.showAD()
            goto Lf
        La:
            java.lang.String r0 = "showAD"
            r1.a(r0)
        Lf:
            return
    }

    public void showAD(android.app.Activity r2) {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto La
            com.qq.e.comm.pi.RVADI r0 = (com.qq.e.comm.pi.RVADI) r0
            r0.showAD(r2)
            goto Lf
        La:
            java.lang.String r2 = "showAD"
            r1.a(r2)
        Lf:
            return
    }
}
