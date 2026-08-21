package com.qq.e.ads.nativ;

public class NativeExpressAD extends com.qq.e.ads.NativeAbstractAD<com.qq.e.comm.pi.NEADI> implements com.qq.e.comm.pi.IReward {
    private volatile int g;
    private volatile int h;
    private java.util.List<java.lang.Integer> i;
    private com.qq.e.ads.cfg.VideoOption j;
    private com.qq.e.ads.nativ.ADSize k;
    private com.qq.e.ads.nativ.NativeExpressAD.NativeExpressADListener l;
    private final com.qq.e.ads.nativ.NativeExpressAD.ADListenerAdapter m;
    private com.qq.e.comm.constants.LoadAdParams n;
    private volatile com.qq.e.ads.rewardvideo.ServerSideVerificationOptions o;

    public static class ADListenerAdapter implements com.qq.e.comm.adevent.ADListener {
        private com.qq.e.ads.nativ.NativeExpressAD.NativeExpressADListener a;
        private com.qq.e.ads.nativ.NativeExpressMediaListener b;
        private com.qq.e.comm.listeners.NegativeFeedbackListener c;
        private com.qq.e.comm.listeners.ADRewardListener d;

        public ADListenerAdapter(com.qq.e.ads.nativ.NativeExpressAD.NativeExpressADListener r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        public ADListenerAdapter(com.qq.e.ads.nativ.NativeExpressMediaListener r1) {
                r0 = this;
                r0.<init>()
                r0.b = r1
                return
        }

        @Override
        public void onADEvent(com.qq.e.comm.adevent.ADEvent r2) {
                r1 = this;
                com.qq.e.ads.nativ.NativeExpressAD$NativeExpressADListener r0 = r1.a
                boolean r0 = com.qq.e.ads.nativ.NativeExpressAD.a(r0, r2)
                if (r0 == 0) goto L9
                return
            L9:
                com.qq.e.ads.nativ.NativeExpressMediaListener r0 = r1.b
                boolean r0 = com.qq.e.ads.nativ.NativeExpressAD.a(r0, r2)
                if (r0 == 0) goto L12
                return
            L12:
                com.qq.e.comm.listeners.NegativeFeedbackListener r0 = r1.c
                boolean r0 = com.qq.e.ads.nativ.NativeExpressAD.a(r0, r2)
                if (r0 == 0) goto L1b
                return
            L1b:
                com.qq.e.comm.listeners.ADRewardListener r0 = r1.d
                boolean r2 = com.qq.e.ads.nativ.NativeExpressAD.a(r0, r2)
                return
        }

        public void setAdRewardListener(com.qq.e.comm.listeners.ADRewardListener r1) {
                r0 = this;
                r0.d = r1
                return
        }

        public void setMediaListener(com.qq.e.ads.nativ.NativeExpressMediaListener r1) {
                r0 = this;
                r0.b = r1
                return
        }

        public void setNegativeFeedbackListener(com.qq.e.comm.listeners.NegativeFeedbackListener r1) {
                r0 = this;
                r0.c = r1
                return
        }
    }

    public interface NativeExpressADListener extends com.qq.e.ads.NativeAbstractAD.BasicADListener {
        void onADClicked(com.qq.e.ads.nativ.NativeExpressADView r1);

        void onADClosed(com.qq.e.ads.nativ.NativeExpressADView r1);

        void onADExposure(com.qq.e.ads.nativ.NativeExpressADView r1);

        void onADLeftApplication(com.qq.e.ads.nativ.NativeExpressADView r1);

        void onADLoaded(java.util.List<com.qq.e.ads.nativ.NativeExpressADView> r1);

        void onRenderFail(com.qq.e.ads.nativ.NativeExpressADView r1);

        void onRenderSuccess(com.qq.e.ads.nativ.NativeExpressADView r1);
    }

    public NativeExpressAD(android.content.Context r2, com.qq.e.ads.nativ.ADSize r3, java.lang.String r4, com.qq.e.ads.nativ.NativeExpressAD.NativeExpressADListener r5) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            r1.i = r0
            r1.l = r5
            com.qq.e.ads.nativ.NativeExpressAD$ADListenerAdapter r0 = new com.qq.e.ads.nativ.NativeExpressAD$ADListenerAdapter
            r0.<init>(r5)
            r1.m = r0
            boolean r3 = r1.a(r3)
            if (r3 == 0) goto L1e
            return
        L1e:
            r1.a(r2, r4)
            return
    }

    public NativeExpressAD(android.content.Context r2, com.qq.e.ads.nativ.ADSize r3, java.lang.String r4, com.qq.e.ads.nativ.NativeExpressAD.NativeExpressADListener r5, java.lang.String r6) {
            r1 = this;
            r1.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.List r0 = java.util.Collections.synchronizedList(r0)
            r1.i = r0
            r1.l = r5
            com.qq.e.ads.nativ.NativeExpressAD$ADListenerAdapter r0 = new com.qq.e.ads.nativ.NativeExpressAD$ADListenerAdapter
            r0.<init>(r5)
            r1.m = r0
            boolean r3 = r1.a(r3)
            if (r3 == 0) goto L1e
            return
        L1e:
            r1.a(r2, r4, r6)
            return
    }

    private boolean a(com.qq.e.ads.nativ.ADSize r1) {
            r0 = this;
            if (r1 != 0) goto Le
            java.lang.String r1 = "初始化错误：参数adSize不能为空"
            com.qq.e.comm.util.GDTLogger.e(r1)
            r1 = 2001(0x7d1, float:2.804E-42)
            r0.a(r1)
            r1 = 1
            return r1
        Le:
            r0.k = r1
            r1 = 0
            return r1
    }

    static boolean a(com.qq.e.ads.nativ.NativeExpressAD.NativeExpressADListener r2, com.qq.e.comm.adevent.ADEvent r3) {
            if (r2 != 0) goto L3
            goto L27
        L3:
            int r0 = r3.getType()
            r1 = 100
            if (r0 == r1) goto L98
            r1 = 101(0x65, float:1.42E-43)
            if (r0 == r1) goto L82
            r1 = 103(0x67, float:1.44E-43)
            if (r0 == r1) goto L74
            r1 = 303(0x12f, float:4.25E-43)
            if (r0 == r1) goto L66
            r1 = 105(0x69, float:1.47E-43)
            if (r0 == r1) goto L58
            r1 = 106(0x6a, float:1.49E-43)
            if (r0 == r1) goto L47
            r1 = 109(0x6d, float:1.53E-43)
            if (r0 == r1) goto L39
            r1 = 110(0x6e, float:1.54E-43)
            if (r0 == r1) goto L2a
        L27:
            r2 = 0
            goto La6
        L2a:
            java.lang.Class<com.qq.e.ads.nativ.NativeExpressADView> r0 = com.qq.e.ads.nativ.NativeExpressADView.class
            java.lang.Object r3 = r3.getParam(r0)
            com.qq.e.ads.nativ.NativeExpressADView r3 = (com.qq.e.ads.nativ.NativeExpressADView) r3
            if (r3 == 0) goto La5
            r2.onRenderFail(r3)
            goto La5
        L39:
            java.lang.Class<com.qq.e.ads.nativ.NativeExpressADView> r0 = com.qq.e.ads.nativ.NativeExpressADView.class
            java.lang.Object r3 = r3.getParam(r0)
            com.qq.e.ads.nativ.NativeExpressADView r3 = (com.qq.e.ads.nativ.NativeExpressADView) r3
            if (r3 == 0) goto La5
            r2.onRenderSuccess(r3)
            goto La5
        L47:
            java.lang.Class<com.qq.e.ads.nativ.NativeExpressADView> r0 = com.qq.e.ads.nativ.NativeExpressADView.class
            java.lang.Object r3 = r3.getParam(r0)
            com.qq.e.ads.nativ.NativeExpressADView r3 = (com.qq.e.ads.nativ.NativeExpressADView) r3
            if (r3 == 0) goto La5
            r2.onADClosed(r3)
            r3.negativeFeedback()
            goto La5
        L58:
            java.lang.Class<com.qq.e.ads.nativ.NativeExpressADView> r0 = com.qq.e.ads.nativ.NativeExpressADView.class
            java.lang.Object r3 = r3.getParam(r0)
            com.qq.e.ads.nativ.NativeExpressADView r3 = (com.qq.e.ads.nativ.NativeExpressADView) r3
            if (r3 == 0) goto La5
            r2.onADClicked(r3)
            goto La5
        L66:
            java.lang.Class<com.qq.e.ads.nativ.NativeExpressADView> r0 = com.qq.e.ads.nativ.NativeExpressADView.class
            java.lang.Object r3 = r3.getParam(r0)
            com.qq.e.ads.nativ.NativeExpressADView r3 = (com.qq.e.ads.nativ.NativeExpressADView) r3
            if (r3 == 0) goto La5
            r2.onADLeftApplication(r3)
            goto La5
        L74:
            java.lang.Class<com.qq.e.ads.nativ.NativeExpressADView> r0 = com.qq.e.ads.nativ.NativeExpressADView.class
            java.lang.Object r3 = r3.getParam(r0)
            com.qq.e.ads.nativ.NativeExpressADView r3 = (com.qq.e.ads.nativ.NativeExpressADView) r3
            if (r3 == 0) goto La5
            r2.onADExposure(r3)
            goto La5
        L82:
            java.lang.Class<java.lang.Integer> r0 = java.lang.Integer.class
            java.lang.Object r3 = r3.getParam(r0)
            java.lang.Integer r3 = (java.lang.Integer) r3
            if (r3 == 0) goto La5
            int r3 = r3.intValue()
            com.qq.e.comm.util.AdError r3 = com.qq.e.comm.util.AdErrorConvertor.formatErrorCode(r3)
            r2.onNoAD(r3)
            goto La5
        L98:
            java.lang.Class<java.util.List> r0 = java.util.List.class
            java.lang.Object r3 = r3.getParam(r0)
            java.util.List r3 = (java.util.List) r3
            if (r3 == 0) goto La5
            r2.onADLoaded(r3)
        La5:
            r2 = 1
        La6:
            return r2
    }

    static boolean a(com.qq.e.ads.nativ.NativeExpressMediaListener r4, com.qq.e.comm.adevent.ADEvent r5) {
            r0 = 1
            if (r4 != 0) goto L4
            goto L32
        L4:
            java.lang.Class<com.qq.e.ads.nativ.NativeExpressADView> r1 = com.qq.e.ads.nativ.NativeExpressADView.class
            java.lang.Object r1 = r5.getParam(r1)
            com.qq.e.ads.nativ.NativeExpressADView r1 = (com.qq.e.ads.nativ.NativeExpressADView) r1
            if (r1 != 0) goto Lf
            goto L32
        Lf:
            int r2 = r5.getType()
            r3 = 201(0xc9, float:2.82E-43)
            if (r2 == r3) goto L79
            r3 = 202(0xca, float:2.83E-43)
            if (r2 == r3) goto L75
            r3 = 204(0xcc, float:2.86E-43)
            if (r2 == r3) goto L71
            r3 = 206(0xce, float:2.89E-43)
            if (r2 == r3) goto L6d
            r3 = 207(0xcf, float:2.9E-43)
            if (r2 == r3) goto L57
            r3 = 301(0x12d, float:4.22E-43)
            if (r2 == r3) goto L53
            r3 = 302(0x12e, float:4.23E-43)
            if (r2 == r3) goto L4f
            switch(r2) {
                case 209: goto L4b;
                case 210: goto L38;
                case 211: goto L34;
                default: goto L32;
            }
        L32:
            r0 = 0
            goto L7c
        L34:
            r4.onVideoLoading(r1)
            goto L7c
        L38:
            java.lang.Class<java.lang.Integer> r2 = java.lang.Integer.class
            java.lang.Object r5 = r5.getParam(r0, r2)
            java.lang.Integer r5 = (java.lang.Integer) r5
            if (r5 == 0) goto L7c
            int r5 = r5.intValue()
            long r2 = (long) r5
            r4.onVideoReady(r1, r2)
            goto L7c
        L4b:
            r4.onVideoInit(r1)
            goto L7c
        L4f:
            r4.onVideoPageClose(r1)
            goto L7c
        L53:
            r4.onVideoPageOpen(r1)
            goto L7c
        L57:
            java.lang.Class<java.lang.Integer> r2 = java.lang.Integer.class
            java.lang.Object r5 = r5.getParam(r0, r2)
            java.lang.Integer r5 = (java.lang.Integer) r5
            if (r5 == 0) goto L7c
            int r5 = r5.intValue()
            com.qq.e.comm.util.AdError r5 = com.qq.e.comm.util.AdErrorConvertor.formatErrorCode(r5)
            r4.onVideoError(r1, r5)
            goto L7c
        L6d:
            r4.onVideoComplete(r1)
            goto L7c
        L71:
            r4.onVideoPause(r1)
            goto L7c
        L75:
            r4.onVideoStart(r1)
            goto L7c
        L79:
            r4.onVideoCached(r1)
        L7c:
            return r0
    }

    static boolean a(com.qq.e.comm.listeners.ADRewardListener r2, com.qq.e.comm.adevent.ADEvent r3) {
            if (r2 != 0) goto L3
            goto Lb
        L3:
            int r0 = r3.getType()
            r1 = 104(0x68, float:1.46E-43)
            if (r0 == r1) goto Ld
        Lb:
            r2 = 0
            goto L25
        Ld:
            java.lang.Class<java.lang.String> r0 = java.lang.String.class
            java.lang.Object r3 = r3.getParam(r0)
            java.lang.String r3 = (java.lang.String) r3
            if (r3 == 0) goto L24
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "transId"
            r0.put(r1, r3)
            r2.onReward(r0)
        L24:
            r2 = 1
        L25:
            return r2
    }

    static boolean a(com.qq.e.comm.listeners.NegativeFeedbackListener r1, com.qq.e.comm.adevent.ADEvent r2) {
            if (r1 != 0) goto L3
            goto Lb
        L3:
            int r2 = r2.getType()
            r0 = 304(0x130, float:4.26E-43)
            if (r2 == r0) goto Ld
        Lb:
            r1 = 0
            goto L11
        Ld:
            r1.onComplainSuccess()
            r1 = 1
        L11:
            return r1
    }

    @Override
    protected java.lang.Object a(android.content.Context r8, com.qq.e.comm.pi.POFactory r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            r7 = this;
            com.qq.e.ads.nativ.ADSize r2 = r7.k
            com.qq.e.ads.nativ.NativeExpressAD$ADListenerAdapter r6 = r7.m
            r0 = r9
            r1 = r8
            r3 = r10
            r4 = r11
            r5 = r12
            com.qq.e.comm.pi.NEADI r8 = r0.getNativeExpressADDelegate(r1, r2, r3, r4, r5, r6)
            return r8
    }

    @Override
    protected void a(com.qq.e.comm.pi.ADI r1) {
            r0 = this;
            com.qq.e.comm.pi.NEADI r1 = (com.qq.e.comm.pi.NEADI) r1
            r0.a(r1)
            return
    }

    protected void a(com.qq.e.comm.pi.NEADI r5) {
            r4 = this;
            super.a(r5)
            int r0 = r4.g
            r5.setMinVideoDuration(r0)
            int r0 = r4.h
            r5.setMaxVideoDuration(r0)
            T r5 = r4.a
            com.qq.e.comm.pi.NEADI r5 = (com.qq.e.comm.pi.NEADI) r5
            com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r0 = r4.o
            r5.setServerSideVerificationOptions(r0)
            com.qq.e.ads.cfg.VideoOption r5 = r4.j
            if (r5 == 0) goto L1d
            r4.setVideoOption(r5)
        L1d:
            java.util.List<java.lang.Integer> r5 = r4.i
            monitor-enter(r5)
            java.util.List<java.lang.Integer> r0 = r4.i     // Catch: java.lang.Throwable -> L5c
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L5c
        L26:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L5c
            if (r1 == 0) goto L5a
            T r1 = r4.a     // Catch: java.lang.Throwable -> L5c
            if (r1 == 0) goto L26
            com.qq.e.comm.constants.LoadAdParams r1 = r4.n     // Catch: java.lang.Throwable -> L5c
            if (r1 == 0) goto L48
            T r1 = r4.a     // Catch: java.lang.Throwable -> L5c
            com.qq.e.comm.pi.NEADI r1 = (com.qq.e.comm.pi.NEADI) r1     // Catch: java.lang.Throwable -> L5c
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> L5c
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> L5c
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L5c
            com.qq.e.comm.constants.LoadAdParams r3 = r4.n     // Catch: java.lang.Throwable -> L5c
            r1.loadAd(r2, r3)     // Catch: java.lang.Throwable -> L5c
            goto L26
        L48:
            T r1 = r4.a     // Catch: java.lang.Throwable -> L5c
            com.qq.e.comm.pi.NEADI r1 = (com.qq.e.comm.pi.NEADI) r1     // Catch: java.lang.Throwable -> L5c
            java.lang.Object r2 = r0.next()     // Catch: java.lang.Throwable -> L5c
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> L5c
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L5c
            r1.loadAd(r2)     // Catch: java.lang.Throwable -> L5c
            goto L26
        L5a:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L5c
            return
        L5c:
            r0 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> L5c
            throw r0
    }

    @Override
    protected void a(java.lang.Object r1) {
            r0 = this;
            com.qq.e.comm.pi.NEADI r1 = (com.qq.e.comm.pi.NEADI) r1
            r0.a(r1)
            return
    }

    @Override
    protected void b(int r2) {
            r1 = this;
            com.qq.e.ads.nativ.NativeExpressAD$NativeExpressADListener r0 = r1.l
            if (r0 == 0) goto Lb
            com.qq.e.comm.util.AdError r2 = com.qq.e.comm.util.AdErrorConvertor.formatErrorCode(r2)
            r0.onNoAD(r2)
        Lb:
            return
    }

    public java.lang.String getAdNetWorkName() {
            r1 = this;
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.NEADI r0 = (com.qq.e.comm.pi.NEADI) r0
            java.lang.String r0 = r0.getAdNetWorkName()
            return r0
        Lb:
            java.lang.String r0 = "getAdNetWorkName"
            r1.a(r0)
            r0 = 0
            return r0
    }

    public void loadAD(int r2) {
            r1 = this;
            r0 = 0
            r1.loadAD(r2, r0)
            return
    }

    public void loadAD(int r2, com.qq.e.comm.constants.LoadAdParams r3) {
            r1 = this;
            boolean r0 = r1.a()
            if (r0 != 0) goto L7
            return
        L7:
            if (r3 == 0) goto Lc
            r1.setAdParams(r3)
        Lc:
            boolean r3 = r1.b()
            if (r3 != 0) goto L23
            java.util.List<java.lang.Integer> r3 = r1.i
            monitor-enter(r3)
            java.util.List<java.lang.Integer> r0 = r1.i     // Catch: java.lang.Throwable -> L20
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L20
            r0.add(r2)     // Catch: java.lang.Throwable -> L20
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L20
            goto L3a
        L20:
            r2 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L20
            throw r2
        L23:
            T r3 = r1.a
            if (r3 == 0) goto L35
            com.qq.e.comm.constants.LoadAdParams r0 = r1.n
            com.qq.e.comm.pi.NEADI r3 = (com.qq.e.comm.pi.NEADI) r3
            if (r0 == 0) goto L31
            r3.loadAd(r2, r0)
            goto L3a
        L31:
            r3.loadAd(r2)
            goto L3a
        L35:
            java.lang.String r2 = "loadAD"
            r1.a(r2)
        L3a:
            return
    }

    public void setAdParams(com.qq.e.comm.constants.LoadAdParams r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public void setMaxVideoDuration(int r2) {
            r1 = this;
            r1.h = r2
            int r2 = r1.h
            if (r2 <= 0) goto L11
            int r2 = r1.g
            int r0 = r1.h
            if (r2 <= r0) goto L11
            java.lang.String r2 = "maxVideoDuration 设置值非法，不得小于minVideoDuration"
            com.qq.e.comm.util.GDTLogger.e(r2)
        L11:
            T r2 = r1.a
            if (r2 == 0) goto L1c
            com.qq.e.comm.pi.NEADI r2 = (com.qq.e.comm.pi.NEADI) r2
            int r0 = r1.h
            r2.setMaxVideoDuration(r0)
        L1c:
            return
    }

    public void setMinVideoDuration(int r2) {
            r1 = this;
            r1.g = r2
            int r2 = r1.h
            if (r2 <= 0) goto L11
            int r2 = r1.g
            int r0 = r1.h
            if (r2 <= r0) goto L11
            java.lang.String r2 = "minVideoDuration 设置值非法，不得大于maxVideoDuration"
            com.qq.e.comm.util.GDTLogger.e(r2)
        L11:
            T r2 = r1.a
            if (r2 == 0) goto L1c
            com.qq.e.comm.pi.NEADI r2 = (com.qq.e.comm.pi.NEADI) r2
            int r0 = r1.g
            r2.setMinVideoDuration(r0)
        L1c:
            return
    }

    @Override
    public void setRewardListener(com.qq.e.comm.listeners.ADRewardListener r2) {
            r1 = this;
            com.qq.e.ads.nativ.NativeExpressAD$ADListenerAdapter r0 = r1.m
            r0.setAdRewardListener(r2)
            return
    }

    @Override
    public void setServerSideVerificationOptions(com.qq.e.ads.rewardvideo.ServerSideVerificationOptions r2) {
            r1 = this;
            r1.o = r2
            T r0 = r1.a
            if (r0 == 0) goto Lb
            com.qq.e.comm.pi.NEADI r0 = (com.qq.e.comm.pi.NEADI) r0
            r0.setServerSideVerificationOptions(r2)
        Lb:
            return
    }

    public void setVideoOption(com.qq.e.ads.cfg.VideoOption r2) {
            r1 = this;
            r1.j = r2
            T r0 = r1.a
            if (r0 == 0) goto Ld
            if (r2 == 0) goto Ld
            com.qq.e.comm.pi.NEADI r0 = (com.qq.e.comm.pi.NEADI) r0
            r0.setVideoOption(r2)
        Ld:
            return
    }
}
