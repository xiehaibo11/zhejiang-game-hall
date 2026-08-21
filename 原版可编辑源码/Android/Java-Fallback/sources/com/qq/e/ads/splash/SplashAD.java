package com.qq.e.ads.splash;

public final class SplashAD extends com.qq.e.ads.LiteAbstractAD<com.qq.e.comm.pi.NSPVI> implements com.qq.e.comm.pi.IReward {
    private volatile android.view.ViewGroup g;
    private volatile com.qq.e.ads.splash.SplashADListener h;
    private volatile com.qq.e.comm.listeners.ADRewardListener i;
    private volatile com.qq.e.comm.constants.LoadAdParams j;
    private volatile boolean k;
    private volatile boolean l;
    private volatile boolean m;
    private volatile int n;
    private volatile byte[] o;
    private volatile com.qq.e.ads.rewardvideo.ServerSideVerificationOptions p;
    private int q;

    static class 1 {
    }

    private class ADListenerAdapter implements com.qq.e.comm.adevent.ADListener {
        final com.qq.e.ads.splash.SplashAD a;

        private ADListenerAdapter(com.qq.e.ads.splash.SplashAD r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        ADListenerAdapter(com.qq.e.ads.splash.SplashAD r1, com.qq.e.ads.splash.SplashAD.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public void onADEvent(com.qq.e.comm.adevent.ADEvent r4) {
                r3 = this;
                com.qq.e.ads.splash.SplashAD r0 = r3.a
                com.qq.e.ads.splash.SplashADListener r0 = com.qq.e.ads.splash.SplashAD.a(r0)
                if (r0 != 0) goto Lf
                java.lang.String r4 = "SplashADListener == null"
                com.qq.e.comm.util.GDTLogger.d(r4)
                goto Le5
            Lf:
                int r0 = r4.getType()
                switch(r0) {
                    case 100: goto L8a;
                    case 101: goto L6e;
                    case 102: goto L63;
                    case 103: goto L58;
                    case 104: goto L31;
                    case 105: goto L26;
                    case 106: goto L1b;
                    default: goto L16;
                }
            L16:
                switch(r0) {
                    case 112: goto Lce;
                    case 113: goto Lb8;
                    case 114: goto La2;
                    default: goto L19;
                }
            L19:
                goto Le5
            L1b:
                com.qq.e.ads.splash.SplashAD r4 = r3.a
                com.qq.e.ads.splash.SplashADListener r4 = com.qq.e.ads.splash.SplashAD.a(r4)
                r4.onADDismissed()
                goto Le5
            L26:
                com.qq.e.ads.splash.SplashAD r4 = r3.a
                com.qq.e.ads.splash.SplashADListener r4 = com.qq.e.ads.splash.SplashAD.a(r4)
                r4.onADClicked()
                goto Le5
            L31:
                com.qq.e.ads.splash.SplashAD r0 = r3.a
                com.qq.e.comm.listeners.ADRewardListener r0 = com.qq.e.ads.splash.SplashAD.b(r0)
                if (r0 == 0) goto Le5
                java.lang.Class<java.lang.String> r0 = java.lang.String.class
                java.lang.Object r4 = r4.getParam(r0)
                java.lang.String r4 = (java.lang.String) r4
                if (r4 == 0) goto Le5
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                java.lang.String r1 = "transId"
                r0.put(r1, r4)
                com.qq.e.ads.splash.SplashAD r4 = r3.a
                com.qq.e.comm.listeners.ADRewardListener r4 = com.qq.e.ads.splash.SplashAD.b(r4)
                r4.onReward(r0)
                goto Le5
            L58:
                com.qq.e.ads.splash.SplashAD r4 = r3.a
                com.qq.e.ads.splash.SplashADListener r4 = com.qq.e.ads.splash.SplashAD.a(r4)
                r4.onADExposure()
                goto Le5
            L63:
                com.qq.e.ads.splash.SplashAD r4 = r3.a
                com.qq.e.ads.splash.SplashADListener r4 = com.qq.e.ads.splash.SplashAD.a(r4)
                r4.onADPresent()
                goto Le5
            L6e:
                java.lang.Class<java.lang.Integer> r0 = java.lang.Integer.class
                java.lang.Object r4 = r4.getParam(r0)
                java.lang.Integer r4 = (java.lang.Integer) r4
                if (r4 == 0) goto Le5
                com.qq.e.ads.splash.SplashAD r0 = r3.a
                com.qq.e.ads.splash.SplashADListener r0 = com.qq.e.ads.splash.SplashAD.a(r0)
                int r4 = r4.intValue()
                com.qq.e.comm.util.AdError r4 = com.qq.e.comm.util.AdErrorConvertor.formatErrorCode(r4)
                r0.onNoAD(r4)
                goto Le5
            L8a:
                java.lang.Class<java.lang.Long> r0 = java.lang.Long.class
                java.lang.Object r4 = r4.getParam(r0)
                java.lang.Long r4 = (java.lang.Long) r4
                if (r4 == 0) goto Le5
                com.qq.e.ads.splash.SplashAD r0 = r3.a
                com.qq.e.ads.splash.SplashADListener r0 = com.qq.e.ads.splash.SplashAD.a(r0)
                long r1 = r4.longValue()
                r0.onADLoaded(r1)
                goto Le5
            La2:
                com.qq.e.ads.splash.SplashAD r4 = r3.a
                com.qq.e.ads.splash.SplashADListener r4 = com.qq.e.ads.splash.SplashAD.a(r4)
                boolean r4 = r4 instanceof com.qq.e.ads.splash.SplashADZoomOutListener
                if (r4 == 0) goto Le5
                com.qq.e.ads.splash.SplashAD r4 = r3.a
                com.qq.e.ads.splash.SplashADListener r4 = com.qq.e.ads.splash.SplashAD.a(r4)
                com.qq.e.ads.splash.SplashADZoomOutListener r4 = (com.qq.e.ads.splash.SplashADZoomOutListener) r4
                r4.onZoomOutPlayFinish()
                goto Le5
            Lb8:
                com.qq.e.ads.splash.SplashAD r4 = r3.a
                com.qq.e.ads.splash.SplashADListener r4 = com.qq.e.ads.splash.SplashAD.a(r4)
                boolean r4 = r4 instanceof com.qq.e.ads.splash.SplashADZoomOutListener
                if (r4 == 0) goto Le5
                com.qq.e.ads.splash.SplashAD r4 = r3.a
                com.qq.e.ads.splash.SplashADListener r4 = com.qq.e.ads.splash.SplashAD.a(r4)
                com.qq.e.ads.splash.SplashADZoomOutListener r4 = (com.qq.e.ads.splash.SplashADZoomOutListener) r4
                r4.onZoomOut()
                goto Le5
            Lce:
                java.lang.Class<java.lang.Long> r0 = java.lang.Long.class
                java.lang.Object r4 = r4.getParam(r0)
                java.lang.Long r4 = (java.lang.Long) r4
                if (r4 == 0) goto Le5
                com.qq.e.ads.splash.SplashAD r0 = r3.a
                com.qq.e.ads.splash.SplashADListener r0 = com.qq.e.ads.splash.SplashAD.a(r0)
                long r1 = r4.longValue()
                r0.onADTick(r1)
            Le5:
                return
        }
    }

    public SplashAD(android.content.Context r2, java.lang.String r3, com.qq.e.ads.splash.SplashADListener r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r4, r0)
            return
    }

    public SplashAD(android.content.Context r2, java.lang.String r3, com.qq.e.ads.splash.SplashADListener r4, int r5) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.k = r0
            r1.h = r4
            r1.q = r5
            r1.a(r2, r3)
            return
    }

    public SplashAD(android.content.Context r2, java.lang.String r3, com.qq.e.ads.splash.SplashADListener r4, int r5, java.lang.String r6) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.k = r0
            r1.h = r4
            r1.q = r5
            r1.a(r2, r3, r6)
            return
    }

    static com.qq.e.ads.splash.SplashADListener a(com.qq.e.ads.splash.SplashAD r0) {
            com.qq.e.ads.splash.SplashADListener r0 = r0.h
            return r0
    }

    private void a(android.view.ViewGroup r2, boolean r3) {
            r1 = this;
            if (r2 != 0) goto Ld
            java.lang.String r2 = "传入参数有误：传入container参数为空"
            com.qq.e.comm.util.GDTLogger.e(r2)
            r2 = 4001(0xfa1, float:5.607E-42)
            r1.a(r2)
            goto L21
        Ld:
            T r0 = r1.a
            if (r0 == 0) goto L1d
            com.qq.e.comm.pi.NSPVI r0 = (com.qq.e.comm.pi.NSPVI) r0
            if (r3 == 0) goto L19
            r0.fetchFullScreenAndShowIn(r2)
            goto L21
        L19:
            r0.fetchAndShowIn(r2)
            goto L21
        L1d:
            r1.m = r3
            r1.g = r2
        L21:
            return
    }

    private void a(boolean r2) {
            r1 = this;
            boolean r0 = r1.a()
            if (r0 != 0) goto L7
            return
        L7:
            boolean r0 = r1.b()
            if (r0 != 0) goto L13
            r1.m = r2
            r2 = 1
            r1.l = r2
            return
        L13:
            T r0 = r1.a
            if (r0 != 0) goto L1d
            java.lang.String r2 = "fetchAdInner"
            r1.a(r2)
            goto L28
        L1d:
            com.qq.e.comm.pi.NSPVI r0 = (com.qq.e.comm.pi.NSPVI) r0
            if (r2 == 0) goto L25
            r0.fetchFullScreenAdOnly()
            goto L28
        L25:
            r0.fetchAdOnly()
        L28:
            return
    }

    static com.qq.e.comm.listeners.ADRewardListener b(com.qq.e.ads.splash.SplashAD r0) {
            com.qq.e.comm.listeners.ADRewardListener r0 = r0.i
            return r0
    }

    private void b(android.view.ViewGroup r2, boolean r3) {
            r1 = this;
            if (r2 != 0) goto Ld
            java.lang.String r2 = "传入参数错误，container参数为空"
            com.qq.e.comm.util.GDTLogger.e(r2)
            r2 = 4001(0xfa1, float:5.607E-42)
            r1.a(r2)
            goto L1f
        Ld:
            T r0 = r1.a
            if (r0 != 0) goto L14
            r1.g = r2
            goto L1f
        L14:
            com.qq.e.comm.pi.NSPVI r0 = (com.qq.e.comm.pi.NSPVI) r0
            if (r3 == 0) goto L1c
            r0.showFullScreenAd(r2)
            goto L1f
        L1c:
            r0.showAd(r2)
        L1f:
            return
    }

    @Override
    protected java.lang.Object a(android.content.Context r1, com.qq.e.comm.pi.POFactory r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r0 = this;
            com.qq.e.comm.pi.NSPVI r1 = r2.getNativeSplashAdView(r1, r3, r4, r5)
            return r1
    }

    @Override
    protected void a(java.lang.Object r3) {
            r2 = this;
            com.qq.e.comm.pi.NSPVI r3 = (com.qq.e.comm.pi.NSPVI) r3
            com.qq.e.comm.constants.LoadAdParams r0 = r2.j
            if (r0 == 0) goto Lb
            com.qq.e.comm.constants.LoadAdParams r0 = r2.j
            r3.setLoadAdParams(r0)
        Lb:
            int r0 = r2.n
            if (r0 == 0) goto L14
            int r0 = r2.n
            r3.setDeveloperLogo(r0)
        L14:
            byte[] r0 = r2.o
            if (r0 == 0) goto L1d
            byte[] r0 = r2.o
            r3.setDeveloperLogo(r0)
        L1d:
            int r0 = r2.q
            r3.setFetchDelay(r0)
            com.qq.e.ads.splash.SplashAD$ADListenerAdapter r0 = new com.qq.e.ads.splash.SplashAD$ADListenerAdapter
            r1 = 0
            r0.<init>(r2, r1)
            r3.setAdListener(r0)
            com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r0 = r2.p
            r3.setServerSideVerificationOptions(r0)
            com.qq.e.ads.splash.SplashADListener r0 = r2.h
            boolean r0 = r0 instanceof com.qq.e.ads.splash.SplashADZoomOutListener
            if (r0 == 0) goto L44
            com.qq.e.ads.splash.SplashADListener r0 = r2.h
            com.qq.e.ads.splash.SplashADZoomOutListener r0 = (com.qq.e.ads.splash.SplashADZoomOutListener) r0
            boolean r0 = r0.isSupportZoomOut()
            if (r0 == 0) goto L44
            r0 = 1
            r3.setSupportZoomOut(r0)
        L44:
            android.view.ViewGroup r0 = r2.g
            if (r0 == 0) goto L57
            boolean r0 = r2.m
            if (r0 == 0) goto L52
            android.view.ViewGroup r0 = r2.g
            r2.fetchFullScreenAndShowIn(r0)
            goto L57
        L52:
            android.view.ViewGroup r0 = r2.g
            r2.fetchAndShowIn(r0)
        L57:
            boolean r0 = r2.k
            r1 = 0
            if (r0 == 0) goto L61
            r3.preload()
            r2.k = r1
        L61:
            boolean r0 = r2.l
            if (r0 == 0) goto L72
            boolean r0 = r2.m
            if (r0 == 0) goto L6d
            r3.fetchFullScreenAdOnly()
            goto L70
        L6d:
            r3.fetchAdOnly()
        L70:
            r2.l = r1
        L72:
            return
    }

    @Override
    protected void b(int r2) {
            r1 = this;
            com.qq.e.ads.splash.SplashADListener r0 = r1.h
            if (r0 == 0) goto Ld
            com.qq.e.ads.splash.SplashADListener r0 = r1.h
            com.qq.e.comm.util.AdError r2 = com.qq.e.comm.util.AdErrorConvertor.formatErrorCode(r2)
            r0.onNoAD(r2)
        Ld:
            return
    }

    public void fetchAdOnly() {
            r1 = this;
            r0 = 0
            r1.a(r0)
            return
    }

    public void fetchAndShowIn(android.view.ViewGroup r2) {
            r1 = this;
            r0 = 0
            r1.a(r2, r0)
            return
    }

    public void fetchFullScreenAdOnly() {
            r1 = this;
            r0 = 1
            r1.a(r0)
            return
    }

    public void fetchFullScreenAndShowIn(android.view.ViewGroup r2) {
            r1 = this;
            r0 = 1
            r1.a(r2, r0)
            return
    }

    public java.lang.String getAdNetWorkName() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.NSPVI r0 = (com.qq.e.comm.pi.NSPVI) r0
            java.lang.String r0 = r0.getAdNetWorkName()
            return r0
        Lb:
            java.lang.String r0 = "getAdNetWorkName"
            r1.a(r0)
            r0 = 0
            return r0
    }

    public android.graphics.Bitmap getZoomOutBitmap() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.NSPVI r0 = (com.qq.e.comm.pi.NSPVI) r0
            android.graphics.Bitmap r0 = r0.getZoomOutBitmap()
            return r0
        Lb:
            java.lang.String r0 = "getZoomOutBitmap"
            r1.a(r0)
            r0 = 0
            return r0
    }

    public void preLoad() {
            r1 = this;
            boolean r0 = r1.a()
            if (r0 != 0) goto L7
            return
        L7:
            boolean r0 = r1.b()
            if (r0 != 0) goto L11
            r0 = 1
            r1.k = r0
            return
        L11:
            T r0 = r1.a
            if (r0 == 0) goto L1b
            com.qq.e.comm.pi.NSPVI r0 = (com.qq.e.comm.pi.NSPVI) r0
            r0.preload()
            goto L20
        L1b:
            java.lang.String r0 = "preLoad"
            r1.a(r0)
        L20:
            return
    }

    @java.lang.Deprecated
    public void setAdLogoMargin(int r1, int r2) {
            r0 = this;
            return
    }

    public void setDeveloperLogo(int r2) {
            r1 = this;
            T r0 = r1.a
            if (r0 != 0) goto L7
            r1.n = r2
            goto Lc
        L7:
            com.qq.e.comm.pi.NSPVI r0 = (com.qq.e.comm.pi.NSPVI) r0
            r0.setDeveloperLogo(r2)
        Lc:
            return
    }

    public void setDeveloperLogo(byte[] r2) {
            r1 = this;
            T r0 = r1.a
            if (r0 != 0) goto L7
            r1.o = r2
            goto Lc
        L7:
            com.qq.e.comm.pi.NSPVI r0 = (com.qq.e.comm.pi.NSPVI) r0
            r0.setDeveloperLogo(r2)
        Lc:
            return
    }

    public void setLoadAdParams(com.qq.e.comm.constants.LoadAdParams r2) {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto La
            com.qq.e.comm.pi.NSPVI r0 = (com.qq.e.comm.pi.NSPVI) r0
            r0.setLoadAdParams(r2)
            goto Lc
        La:
            r1.j = r2
        Lc:
            return
    }

    @java.lang.Deprecated
    public void setPreloadView(android.view.View r1) {
            r0 = this;
            return
    }

    @Override
    public void setRewardListener(com.qq.e.comm.listeners.ADRewardListener r1) {
            r0 = this;
            r0.i = r1
            return
    }

    @Override
    public void setServerSideVerificationOptions(com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r2) {
            r1 = this;
            r1.p = r2
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.NSPVI r0 = (com.qq.e.comm.pi.NSPVI) r0
            r0.setServerSideVerificationOptions(r2)
        Lb:
            return
    }

    public void showAd(android.view.ViewGroup r2) {
            r1 = this;
            r0 = 0
            r1.b(r2, r0)
            return
    }

    public void showFullScreenAd(android.view.ViewGroup r2) {
            r1 = this;
            r0 = 1
            r1.b(r2, r0)
            return
    }

    public void zoomOutAnimationFinish() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto La
            com.qq.e.comm.pi.NSPVI r0 = (com.qq.e.comm.pi.NSPVI) r0
            r0.zoomOutAnimationFinish()
            goto Lf
        La:
            java.lang.String r0 = "zoomOutAnimationFinish"
            r1.a(r0)
        Lf:
            return
    }
}
