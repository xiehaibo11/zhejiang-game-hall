package com.sigmob.sdk.base;

public class j extends com.sigmob.sdk.base.g {
    private com.sigmob.sdk.rewardVideoAd.c b;
    private com.sigmob.sdk.rewardVideoAd.c c;
    private android.os.Handler d;
    private com.sigmob.sdk.base.models.LoadAdRequest e;
    private com.sigmob.sdk.rewardVideoAd.f f;
    private boolean g;


    private class a implements com.sigmob.sdk.rewardVideoAd.f {
        final com.sigmob.sdk.base.j a;
        private com.sigmob.sdk.rewardVideoAd.f b;





        a(com.sigmob.sdk.base.j r1, com.sigmob.sdk.rewardVideoAd.f r2) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                return
        }

        static com.sigmob.sdk.rewardVideoAd.f a(com.sigmob.sdk.base.j.a r0) {
                com.sigmob.sdk.rewardVideoAd.f r0 = r0.b
                return r0
        }

        @Override
        public void onVideoAdLoadError(com.sigmob.windad.WindAdError r3, java.lang.String r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "onVideoAdLoadError |"
                r0.append(r1)
                r0.append(r4)
                java.lang.String r1 = "|"
                r0.append(r1)
                com.sigmob.sdk.base.j r1 = r2.a
                com.czhj.sdk.common.models.AdStatus r1 = r1.mADStatus
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                com.czhj.sdk.logger.SigmobLog.i(r0)
                com.sigmob.sdk.base.j r0 = r2.a
                com.czhj.sdk.common.models.AdStatus r0 = r0.mADStatus
                com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusPlaying
                if (r0 == r1) goto L2e
                com.sigmob.sdk.base.j r0 = r2.a
                com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusNone
                r0.mADStatus = r1
            L2e:
                com.sigmob.sdk.base.j r0 = r2.a
                android.os.Handler r0 = com.sigmob.sdk.base.j.a(r0)
                com.sigmob.sdk.base.j$a$4 r1 = new com.sigmob.sdk.base.j$a$4
                r1.<init>(r2, r3, r4)
                r0.post(r1)
                return
        }

        @Override
        public void onVideoAdLoadSuccess(java.lang.String r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "onVideoAdLoadSuccess |"
                r0.append(r1)
                r0.append(r3)
                java.lang.String r1 = "|"
                r0.append(r1)
                com.sigmob.sdk.base.j r1 = r2.a
                com.czhj.sdk.common.models.AdStatus r1 = r1.mADStatus
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                com.czhj.sdk.logger.SigmobLog.i(r0)
                com.sigmob.sdk.base.j r0 = r2.a
                com.czhj.sdk.common.models.AdStatus r0 = r0.mADStatus
                com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusPlaying
                if (r0 == r1) goto L2e
                com.sigmob.sdk.base.j r0 = r2.a
                com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusReady
                r0.mADStatus = r1
            L2e:
                com.sigmob.sdk.base.j r0 = r2.a
                android.os.Handler r0 = com.sigmob.sdk.base.j.a(r0)
                com.sigmob.sdk.base.j$a$1 r1 = new com.sigmob.sdk.base.j$a$1
                r1.<init>(r2, r3)
                r0.post(r1)
                return
        }

        @Override
        public void onVideoAdPreLoadFail(com.sigmob.windad.WindAdError r3, java.lang.String r4) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "onVideoAdPreLoadFail |"
                r0.append(r1)
                r0.append(r4)
                java.lang.String r1 = "|"
                r0.append(r1)
                com.sigmob.sdk.base.j r1 = r2.a
                com.czhj.sdk.common.models.AdStatus r1 = r1.mADStatus
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                com.czhj.sdk.logger.SigmobLog.i(r0)
                com.sigmob.sdk.base.j r0 = r2.a
                com.czhj.sdk.common.models.AdStatus r0 = r0.mADStatus
                com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusPlaying
                if (r0 == r1) goto L2e
                com.sigmob.sdk.base.j r0 = r2.a
                com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusNone
                r0.mADStatus = r1
            L2e:
                com.sigmob.sdk.base.j r0 = r2.a
                android.os.Handler r0 = com.sigmob.sdk.base.j.a(r0)
                com.sigmob.sdk.base.j$a$3 r1 = new com.sigmob.sdk.base.j$a$3
                r1.<init>(r2, r3, r4)
                r0.post(r1)
                return
        }

        @Override
        public void onVideoAdPreLoadSuccess(java.lang.String r3) {
                r2 = this;
                com.sigmob.sdk.base.j r0 = r2.a
                android.os.Handler r0 = com.sigmob.sdk.base.j.a(r0)
                com.sigmob.sdk.base.j$a$2 r1 = new com.sigmob.sdk.base.j$a$2
                r1.<init>(r2, r3)
                r0.post(r1)
                return
        }
    }

    public j(com.sigmob.windad.WindAdRequest r3, boolean r4) {
            r2 = this;
            r2.<init>(r3, r4)
            com.sigmob.sdk.base.common.f r0 = com.sigmob.sdk.base.common.f.e()
            java.lang.String r1 = r2.a()
            int r3 = r3.getAdType()
            r0.a(r1, r3)
            r2.g = r4
            com.sigmob.sdk.rewardVideoAd.c r3 = new com.sigmob.sdk.rewardVideoAd.c
            r3.<init>(r4)
            r2.b = r3
            com.sigmob.windad.WindAds r3 = com.sigmob.windad.WindAds.sharedAds()
            android.os.Handler r3 = r3.getHandler()
            r2.d = r3
            return
    }

    static android.os.Handler a(com.sigmob.sdk.base.j r0) {
            android.os.Handler r0 = r0.d
            return r0
    }

    static com.sigmob.sdk.rewardVideoAd.c a(com.sigmob.sdk.base.j r0, com.sigmob.sdk.rewardVideoAd.c r1) {
            r0.b = r1
            return r1
    }

    static com.sigmob.sdk.rewardVideoAd.c b(com.sigmob.sdk.base.j r0) {
            com.sigmob.sdk.rewardVideoAd.c r0 = r0.c
            return r0
    }

    static com.sigmob.sdk.rewardVideoAd.c b(com.sigmob.sdk.base.j r0, com.sigmob.sdk.rewardVideoAd.c r1) {
            r0.c = r1
            return r1
    }

    static com.sigmob.sdk.rewardVideoAd.c c(com.sigmob.sdk.base.j r0) {
            com.sigmob.sdk.rewardVideoAd.c r0 = r0.b
            return r0
    }

    private boolean d() {
            r5 = this;
            r0 = 0
            r1 = 1
            boolean r2 = r5.loadAdFilter()     // Catch: java.lang.Throwable -> Lbb
            if (r2 != 0) goto L9
            return r0
        L9:
            com.sigmob.sdk.base.j$a r2 = new com.sigmob.sdk.base.j$a     // Catch: java.lang.Throwable -> Lbb
            com.sigmob.sdk.rewardVideoAd.f r3 = r5.f     // Catch: java.lang.Throwable -> Lbb
            r2.<init>(r5, r3)     // Catch: java.lang.Throwable -> Lbb
            com.sigmob.sdk.rewardVideoAd.c r3 = r5.b     // Catch: java.lang.Throwable -> Lbb
            if (r3 == 0) goto L31
            com.sigmob.sdk.rewardVideoAd.c r3 = r5.b     // Catch: java.lang.Throwable -> Lbb
            boolean r3 = r3.a()     // Catch: java.lang.Throwable -> Lbb
            if (r3 == 0) goto L3a
            com.czhj.sdk.common.models.AdStatus r3 = r5.mADStatus     // Catch: java.lang.Throwable -> Lbb
            com.czhj.sdk.common.models.AdStatus r4 = com.czhj.sdk.common.models.AdStatus.AdStatusReady     // Catch: java.lang.Throwable -> Lbb
            if (r3 != r4) goto L3a
            java.lang.String r3 = r5.a()     // Catch: java.lang.Throwable -> Lbb
            r2.onVideoAdPreLoadSuccess(r3)     // Catch: java.lang.Throwable -> Lbb
            java.lang.String r3 = r5.a()     // Catch: java.lang.Throwable -> Lbb
            r2.onVideoAdLoadSuccess(r3)     // Catch: java.lang.Throwable -> Lbb
            return r1
        L31:
            com.sigmob.sdk.rewardVideoAd.c r3 = new com.sigmob.sdk.rewardVideoAd.c     // Catch: java.lang.Throwable -> Lbb
            boolean r4 = r5.g     // Catch: java.lang.Throwable -> Lbb
            r3.<init>(r4)     // Catch: java.lang.Throwable -> Lbb
            r5.b = r3     // Catch: java.lang.Throwable -> Lbb
        L3a:
            com.sigmob.sdk.base.models.LoadAdRequest r3 = new com.sigmob.sdk.base.models.LoadAdRequest     // Catch: java.lang.Throwable -> Lbb
            com.sigmob.windad.WindAdRequest r4 = r5.a     // Catch: java.lang.Throwable -> Lbb
            r3.<init>(r4)     // Catch: java.lang.Throwable -> Lbb
            r5.e = r3     // Catch: java.lang.Throwable -> Lbb
            java.lang.String r4 = r5.getBid_token()     // Catch: java.lang.Throwable -> Lbb
            r3.setBidToken(r4)     // Catch: java.lang.Throwable -> Lbb
            com.sigmob.sdk.base.models.LoadAdRequest r3 = r5.e     // Catch: java.lang.Throwable -> Lbb
            int r4 = r5.getBidFloor()     // Catch: java.lang.Throwable -> Lbb
            r3.setBidFloor(r4)     // Catch: java.lang.Throwable -> Lbb
            com.sigmob.sdk.base.models.LoadAdRequest r3 = r5.e     // Catch: java.lang.Throwable -> Lbb
            java.lang.String r4 = r5.getCurrency()     // Catch: java.lang.Throwable -> Lbb
            r3.setCurrency(r4)     // Catch: java.lang.Throwable -> Lbb
            com.sigmob.sdk.rewardVideoAd.c r3 = r5.b     // Catch: java.lang.Throwable -> Lbb
            if (r3 == 0) goto L65
            com.sigmob.sdk.rewardVideoAd.c r3 = r5.b     // Catch: java.lang.Throwable -> Lbb
            r3.a(r2)     // Catch: java.lang.Throwable -> Lbb
        L65:
            com.czhj.sdk.common.models.AdStatus r3 = r5.mADStatus     // Catch: java.lang.Throwable -> Lbb
            com.czhj.sdk.common.models.AdStatus r4 = com.czhj.sdk.common.models.AdStatus.AdStatusPlaying     // Catch: java.lang.Throwable -> Lbb
            if (r3 != r4) goto Lac
            com.sigmob.sdk.rewardVideoAd.c r3 = r5.c     // Catch: java.lang.Throwable -> Lbb
            if (r3 == 0) goto L95
            com.sigmob.sdk.rewardVideoAd.f r2 = r5.f     // Catch: java.lang.Throwable -> Lbb
            if (r2 == 0) goto Lba
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lbb
            r2.<init>()     // Catch: java.lang.Throwable -> Lbb
            java.lang.String r3 = "onVideoAdLoadSuccess |"
            r2.append(r3)     // Catch: java.lang.Throwable -> Lbb
            java.lang.String r3 = r5.a()     // Catch: java.lang.Throwable -> Lbb
            r2.append(r3)     // Catch: java.lang.Throwable -> Lbb
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Lbb
            com.czhj.sdk.logger.SigmobLog.i(r2)     // Catch: java.lang.Throwable -> Lbb
            com.sigmob.sdk.rewardVideoAd.f r2 = r5.f     // Catch: java.lang.Throwable -> Lbb
            java.lang.String r3 = r5.a()     // Catch: java.lang.Throwable -> Lbb
            r2.onVideoAdLoadSuccess(r3)     // Catch: java.lang.Throwable -> Lbb
            goto Lba
        L95:
            com.sigmob.sdk.rewardVideoAd.c r3 = new com.sigmob.sdk.rewardVideoAd.c     // Catch: java.lang.Throwable -> Lbb
            boolean r4 = r5.g     // Catch: java.lang.Throwable -> Lbb
            r3.<init>(r4)     // Catch: java.lang.Throwable -> Lbb
            r5.c = r3     // Catch: java.lang.Throwable -> Lbb
            r3.a(r2)     // Catch: java.lang.Throwable -> Lbb
            com.sigmob.sdk.rewardVideoAd.c r2 = r5.c     // Catch: java.lang.Throwable -> Lbb
            com.sigmob.sdk.base.models.LoadAdRequest r3 = r5.e     // Catch: java.lang.Throwable -> Lbb
            r2.a(r3)     // Catch: java.lang.Throwable -> Lbb
            r5.b()     // Catch: java.lang.Throwable -> Lbb
            goto Lba
        Lac:
            r5.b()     // Catch: java.lang.Throwable -> Lbb
            com.sigmob.sdk.rewardVideoAd.c r2 = r5.b     // Catch: java.lang.Throwable -> Lbb
            com.sigmob.sdk.base.models.LoadAdRequest r3 = r5.e     // Catch: java.lang.Throwable -> Lbb
            r2.a(r3)     // Catch: java.lang.Throwable -> Lbb
            com.czhj.sdk.common.models.AdStatus r2 = com.czhj.sdk.common.models.AdStatus.AdStatusLoading     // Catch: java.lang.Throwable -> Lbb
            r5.mADStatus = r2     // Catch: java.lang.Throwable -> Lbb
        Lba:
            return r1
        Lbb:
            r2 = move-exception
            com.sigmob.windad.WindAdError r3 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_REQUEST
            int r3 = r3.getErrorCode()
            java.lang.String r2 = r2.getMessage()
            java.lang.String r4 = "error"
            com.sigmob.sdk.base.mta.PointEntitySigmobError r2 = com.sigmob.sdk.base.mta.PointEntitySigmobError.SigmobError(r4, r3, r2)
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r2.setAdtype(r1)
            java.lang.String r1 = r5.a()
            r2.setPlacement_id(r1)
            r2.commit()
            com.sigmob.sdk.rewardVideoAd.f r1 = r5.f
            if (r1 == 0) goto L104
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "onVideoAdLoadError |"
            r1.append(r2)
            java.lang.String r2 = r5.a()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.i(r1)
            com.sigmob.sdk.rewardVideoAd.f r1 = r5.f
            com.sigmob.windad.WindAdError r2 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_REQUEST
            java.lang.String r3 = r5.a()
            r1.onVideoAdLoadError(r2, r3)
        L104:
            return r0
    }

    @Override
    protected void a(com.sigmob.windad.WindAdError r3) {
            r2 = this;
            com.czhj.sdk.common.models.AdStatus r0 = r2.mADStatus
            com.czhj.sdk.common.models.AdStatus r1 = com.czhj.sdk.common.models.AdStatus.AdStatusLoading
            if (r0 == r1) goto La
            com.czhj.sdk.common.models.AdStatus r0 = com.czhj.sdk.common.models.AdStatus.AdStatusNone
            r2.mADStatus = r0
        La:
            com.sigmob.sdk.rewardVideoAd.f r0 = r2.f
            if (r0 == 0) goto L1e
            java.lang.String r1 = r2.a()
            r0.onVideoAdPreLoadFail(r3, r1)
            com.sigmob.sdk.rewardVideoAd.f r0 = r2.f
            java.lang.String r1 = r2.a()
            r0.onVideoAdLoadError(r3, r1)
        L1e:
            return
    }

    @Override
    protected java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> c() {
            r1 = this;
            com.sigmob.sdk.rewardVideoAd.c r0 = r1.b
            if (r0 == 0) goto L9
            java.util.List r0 = r0.d()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public void destroy() {
            r2 = this;
            com.sigmob.sdk.rewardVideoAd.c r0 = r2.b
            r1 = 0
            if (r0 == 0) goto La
            r0.b()
            r2.b = r1
        La:
            com.sigmob.sdk.rewardVideoAd.c r0 = r2.c
            if (r0 == 0) goto L13
            r0.b()
            r2.c = r1
        L13:
            return
    }

    @Override
    public java.lang.String getEcpm() {
            r1 = this;
            com.sigmob.sdk.rewardVideoAd.c r0 = r1.b
            if (r0 == 0) goto L9
            java.lang.String r0 = r0.c()
            return r0
        L9:
            r0 = 0
            return r0
    }

    public boolean isReady() {
            r3 = this;
            com.sigmob.windad.WindAds r0 = com.sigmob.windad.WindAds.sharedAds()
            boolean r0 = r0.isInit()
            r1 = 0
            if (r0 == 0) goto L28
            java.lang.String r0 = r3.a()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L28
            com.sigmob.sdk.rewardVideoAd.c r0 = r3.b
            if (r0 == 0) goto L28
            com.czhj.sdk.common.models.AdStatus r0 = r3.mADStatus
            com.czhj.sdk.common.models.AdStatus r2 = com.czhj.sdk.common.models.AdStatus.AdStatusReady
            if (r0 != r2) goto L28
            com.sigmob.sdk.rewardVideoAd.c r0 = r3.b
            boolean r0 = r0.a()
            if (r0 == 0) goto L28
            r1 = 1
        L28:
            return r1
    }

    @Override
    public boolean loadAd() {
            r1 = this;
            super.loadAd()
            boolean r0 = r1.d()
            return r0
    }

    @Override
    public boolean loadAd(java.lang.String r1) {
            r0 = this;
            super.loadAd(r1)
            boolean r1 = r0.d()
            return r1
    }

    public void setAdLoadListener(com.sigmob.sdk.rewardVideoAd.f r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public boolean show(java.util.HashMap<java.lang.String, java.lang.String> r9, com.sigmob.sdk.rewardVideoAd.g r10) {
            r8 = this;
            java.lang.String r0 = "scene_desc"
            java.lang.String r1 = "scene_id"
            java.lang.String r2 = "error"
            r3 = 1
            java.lang.String r4 = "show"
            java.lang.String r5 = "init"
            com.sigmob.windad.WindAdRequest r6 = r8.a     // Catch: java.lang.Throwable -> L70
            r7 = 0
            com.sigmob.sdk.base.common.z.a(r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L70
            com.sigmob.sdk.base.models.LoadAdRequest r4 = r8.e     // Catch: java.lang.Throwable -> L70
            if (r4 != 0) goto L3f
            com.sigmob.windad.WindAdError r9 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_PLACEMENTID_EMPTY     // Catch: java.lang.Throwable -> L70
            int r9 = r9.getErrorCode()     // Catch: java.lang.Throwable -> L70
            java.lang.String r0 = "loadAdRequest is null"
            com.sigmob.sdk.base.mta.PointEntitySigmobError r9 = com.sigmob.sdk.base.mta.PointEntitySigmobError.SigmobError(r2, r9, r0)     // Catch: java.lang.Throwable -> L70
            java.lang.String r0 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L70
            r9.setAdtype(r0)     // Catch: java.lang.Throwable -> L70
            java.lang.String r0 = r8.a()     // Catch: java.lang.Throwable -> L70
            r9.setPlacement_id(r0)     // Catch: java.lang.Throwable -> L70
            r9.commit()     // Catch: java.lang.Throwable -> L70
            if (r10 == 0) goto L3d
            com.sigmob.windad.WindAdError r9 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_PLACEMENTID_EMPTY     // Catch: java.lang.Throwable -> L70
            java.lang.String r0 = r8.a()     // Catch: java.lang.Throwable -> L70
            r10.onVideoAdPlayError(r9, r0)     // Catch: java.lang.Throwable -> L70
        L3d:
            r9 = 0
            return r9
        L3f:
            if (r9 == 0) goto L63
            boolean r4 = r9.containsKey(r1)     // Catch: java.lang.Throwable -> L70
            if (r4 == 0) goto L52
            com.sigmob.sdk.base.models.LoadAdRequest r4 = r8.e     // Catch: java.lang.Throwable -> L70
            java.lang.Object r1 = r9.get(r1)     // Catch: java.lang.Throwable -> L70
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L70
            r4.setAd_scene_id(r1)     // Catch: java.lang.Throwable -> L70
        L52:
            boolean r1 = r9.containsKey(r0)     // Catch: java.lang.Throwable -> L70
            if (r1 == 0) goto L63
            com.sigmob.sdk.base.models.LoadAdRequest r1 = r8.e     // Catch: java.lang.Throwable -> L70
            java.lang.Object r9 = r9.get(r0)     // Catch: java.lang.Throwable -> L70
            java.lang.String r9 = (java.lang.String) r9     // Catch: java.lang.Throwable -> L70
            r1.setAd_scene_desc(r9)     // Catch: java.lang.Throwable -> L70
        L63:
            com.sigmob.sdk.rewardVideoAd.c r9 = r8.b     // Catch: java.lang.Throwable -> L70
            com.sigmob.sdk.base.models.LoadAdRequest r0 = r8.e     // Catch: java.lang.Throwable -> L70
            com.sigmob.sdk.base.j$1 r1 = new com.sigmob.sdk.base.j$1     // Catch: java.lang.Throwable -> L70
            r1.<init>(r8, r10)     // Catch: java.lang.Throwable -> L70
            r9.a(r0, r1)     // Catch: java.lang.Throwable -> L70
            goto L95
        L70:
            r9 = move-exception
            com.sigmob.windad.WindAdError r10 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_REQUEST
            int r10 = r10.getErrorCode()
            java.lang.String r0 = r9.getMessage()
            com.sigmob.sdk.base.mta.PointEntitySigmobError r10 = com.sigmob.sdk.base.mta.PointEntitySigmobError.SigmobError(r2, r10, r0)
            java.lang.String r0 = java.lang.String.valueOf(r3)
            r10.setAdtype(r0)
            java.lang.String r0 = r8.a()
            r10.setPlacement_id(r0)
            r10.commit()
            java.lang.String r10 = "show Ad "
            com.czhj.sdk.logger.SigmobLog.e(r10, r9)
        L95:
            return r3
    }
}
