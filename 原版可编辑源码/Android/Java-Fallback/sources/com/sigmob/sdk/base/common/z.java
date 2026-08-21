package com.sigmob.sdk.base.common;

public class z {







    public interface a {
        void a(java.lang.Object r1);
    }

    public z() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(android.content.pm.PackageInfo r4) {
            com.sigmob.sdk.base.mta.PointEntitySigmobSuper r0 = new com.sigmob.sdk.base.mta.PointEntitySigmobSuper
            r0.<init>()
            java.lang.String r1 = "10"
            r0.setAc_type(r1)
            java.lang.String r1 = "app"
            r0.setCategory(r1)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            android.content.Context r2 = com.sigmob.sdk.b.b()     // Catch: java.lang.Throwable -> L2b
            android.content.pm.PackageManager r2 = com.czhj.sdk.common.utils.AppPackageUtil.getPackageManager(r2)     // Catch: java.lang.Throwable -> L2b
            android.content.pm.ApplicationInfo r3 = r4.applicationInfo     // Catch: java.lang.Throwable -> L2b
            java.lang.CharSequence r2 = r2.getApplicationLabel(r3)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r2 = java.lang.String.valueOf(r2)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r3 = "app_name"
            r1.put(r3, r2)     // Catch: java.lang.Throwable -> L2b
        L2b:
            java.lang.String r2 = r4.packageName
            java.lang.String r3 = "package_name"
            r1.put(r3, r2)
            long r2 = r4.lastUpdateTime
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r3 = "update"
            r1.put(r3, r2)
            java.lang.String r4 = r4.versionName
            java.lang.String r2 = "app_version"
            r1.put(r2, r4)
            r0.setOptions(r1)
            r0.commit()
            return
    }

    public static void a(com.czhj.volley.toolbox.DownloadItem r3, com.sigmob.sdk.base.models.BaseAdUnit r4, java.lang.String r5, boolean r6) {
            com.sigmob.sdk.base.mta.PointEntitySigmob r0 = new com.sigmob.sdk.base.mta.PointEntitySigmob
            r0.<init>()
            java.lang.String r1 = "30"
            r0.setAc_type(r1)
            int r1 = r3.status
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.setIssuccess(r1)
            if (r6 == 0) goto L18
            java.lang.String r6 = "1"
            goto L1a
        L18:
            java.lang.String r6 = "0"
        L1a:
            r0.setIscached(r6)
            long r1 = r3.networkMs
            java.lang.String r6 = java.lang.String.valueOf(r1)
            r0.setDuration(r6)
            long r1 = r3.size
            java.lang.String r6 = java.lang.String.valueOf(r1)
            r0.setFile_size(r6)
            java.lang.String r6 = r3.url
            byte[] r6 = r6.getBytes()
            r1 = 2
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r1)
            r0.setFile_name(r6)
            r0.setError_message(r5)
            com.czhj.volley.toolbox.DownloadItem$FileType r3 = r3.type
            int r3 = r3.getType()
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r0.setCategory(r3)
            java.lang.String r3 = r0.getCategory()
            java.lang.String r5 = r0.getSub_category()
            a(r3, r5, r4, r0)
            r0.commit()
            return
    }

    public static void a(com.sigmob.sdk.base.a r8, java.lang.String r9, com.sigmob.sdk.base.models.BaseAdUnit r10, java.lang.String r11, java.lang.String r12, java.lang.String r13) {
            r6 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            a(r0, r1, r2, r3, r4, r5, r6)
            return
    }

    public static void a(com.sigmob.sdk.base.a r10, java.lang.String r11, com.sigmob.sdk.base.models.BaseAdUnit r12, java.lang.String r13, java.lang.String r14, java.lang.String r15, long r16) {
            if (r10 != 0) goto L4
            r0 = r11
            goto Lc
        L4:
            java.lang.String r0 = r10.name()
            java.lang.String r0 = r0.toLowerCase()
        Lc:
            com.sigmob.sdk.base.common.z$6 r9 = new com.sigmob.sdk.base.common.z$6
            r1 = r9
            r2 = r12
            r3 = r11
            r4 = r13
            r5 = r14
            r6 = r15
            r7 = r16
            r1.<init>(r2, r3, r4, r5, r6, r7)
            r1 = r11
            a(r0, r11, r12, r9)
            return
    }

    public static void a(com.sigmob.sdk.base.common.g r2, java.lang.String r3, com.sigmob.sdk.base.models.BaseAdUnit r4, com.czhj.volley.NetworkResponse r5, com.sigmob.sdk.base.common.z.a r6) {
            java.lang.String r0 = r2.n()
            com.sigmob.sdk.base.common.ae r0 = com.sigmob.sdk.base.common.ae.a(r0)
            java.lang.String r1 = "13"
            com.sigmob.sdk.base.common.ae r0 = r0.c(r1)
            com.sigmob.sdk.base.common.ae r4 = r0.a(r4)
            com.sigmob.sdk.base.common.z$4 r0 = new com.sigmob.sdk.base.common.z$4
            r0.<init>(r3, r2, r5, r6)
            com.sigmob.sdk.base.common.ae r2 = r4.a(r0)
            r2.a()
            return
    }

    public static void a(com.sigmob.sdk.base.common.g r2, java.lang.String r3, com.sigmob.sdk.base.models.BaseAdUnit r4, com.czhj.volley.VolleyError r5) {
            r0 = 0
            if (r5 == 0) goto L6
            com.czhj.volley.NetworkResponse r1 = r5.networkResponse
            goto L7
        L6:
            r1 = r0
        L7:
            if (r1 == 0) goto La
            goto Lf
        La:
            com.sigmob.sdk.base.common.z$3 r0 = new com.sigmob.sdk.base.common.z$3
            r0.<init>(r5)
        Lf:
            a(r2, r3, r4, r1, r0)
            return
    }

    public static void a(com.sigmob.sdk.base.models.BaseAdUnit r6, android.view.MotionEvent r7, java.lang.String r8, boolean r9) {
            long r0 = r7.getDownTime()
            long r2 = r7.getEventTime()
            long r2 = r2 - r0
            com.sigmob.sdk.base.mta.PointEntityClick r0 = new com.sigmob.sdk.base.mta.PointEntityClick
            r0.<init>()
            java.lang.String r1 = "102"
            r0.setAc_type(r1)
            r0.setCategory(r8)
            r8 = 2
            java.lang.Object[] r8 = new java.lang.Object[r8]
            float r1 = r7.getRawX()
            java.lang.Float r1 = java.lang.Float.valueOf(r1)
            r4 = 0
            r8[r4] = r1
            float r1 = r7.getRawY()
            java.lang.Float r1 = java.lang.Float.valueOf(r1)
            r5 = 1
            r8[r5] = r1
            java.lang.String r1 = "{x:%f,y:%f}"
            java.lang.String r8 = java.lang.String.format(r1, r8)
            r0.setLocation(r8)
            java.lang.String r8 = java.lang.String.valueOf(r2)
            r0.setClick_duration(r8)
            float r8 = r7.getPressure()
            java.lang.String r8 = java.lang.String.valueOf(r8)
            r0.setPressure(r8)
            float r8 = r7.getSize()
            java.lang.String r8 = java.lang.String.valueOf(r8)
            r0.setTouchSize(r8)
            int r7 = r7.getToolType(r4)
            java.lang.String r7 = java.lang.String.valueOf(r7)
            r0.setTouchType(r7)
            if (r9 == 0) goto L65
            java.lang.String r7 = "1"
            goto L67
        L65:
            java.lang.String r7 = "0"
        L67:
            r0.setIs_valid_click(r7)
            if (r6 == 0) goto L73
            java.lang.String r6 = r6.getLoad_id()
            r0.setLoad_id(r6)
        L73:
            r0.commit()
            return
    }

    public static void a(com.sigmob.sdk.base.models.BaseAdUnit r2, java.lang.String r3, android.content.pm.PackageInfo r4, java.lang.String r5) {
            com.czhj.sdk.common.ThreadPool.ThreadPoolFactory$BackgroundThreadPool r0 = com.czhj.sdk.common.ThreadPool.ThreadPoolFactory.BackgroundThreadPool.getInstance()
            com.sigmob.sdk.base.common.z$5 r1 = new com.sigmob.sdk.base.common.z$5
            r1.<init>(r3, r5, r2, r4)
            r0.submit(r1)
            return
    }

    public static void a(com.sigmob.sdk.base.models.BaseAdUnit r1, java.lang.String r2, java.lang.String r3) {
            com.sigmob.sdk.base.common.z$2 r2 = new com.sigmob.sdk.base.common.z$2
            r2.<init>(r3)
            java.lang.String r3 = "target_url"
            r0 = 0
            a(r3, r0, r1, r2)
            return
    }

    protected static void a(com.sigmob.sdk.base.mta.PointEntitySigmob r4) {
            com.sigmob.windad.WindAds r0 = com.sigmob.windad.WindAds.sharedAds()
            com.sigmob.windad.WindAdOptions r0 = r0.getOptions()
            java.lang.String r1 = "0"
            if (r0 == 0) goto L45
            com.sigmob.windad.WindAds r2 = com.sigmob.windad.WindAds.sharedAds()
            com.sigmob.windad.WindAdOptions r2 = r2.getOptions()
            com.sigmob.windad.WindCustomController r2 = r2.getCustomController()
            if (r2 == 0) goto L45
            com.sigmob.windad.WindCustomController r0 = r0.getCustomController()
            boolean r2 = r0.isCanUsePhoneState()
            java.lang.String r3 = "1"
            if (r2 == 0) goto L28
            r2 = r1
            goto L29
        L28:
            r2 = r3
        L29:
            r4.setIs_custom_imei(r2)
            boolean r2 = r0.isCanUseAndroidId()
            if (r2 == 0) goto L34
            r2 = r1
            goto L35
        L34:
            r2 = r3
        L35:
            r4.setIs_custom_android_id(r2)
            java.lang.String r0 = r0.getDevOaid()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L43
            goto L4b
        L43:
            r1 = r3
            goto L4b
        L45:
            r4.setIs_custom_imei(r1)
            r4.setIs_custom_android_id(r1)
        L4b:
            r4.setIs_custom_oaid(r1)
            return
    }

    public static void a(java.lang.String r2) {
            com.sigmob.sdk.base.mta.PointEntitySigmobSuper r0 = new com.sigmob.sdk.base.mta.PointEntitySigmobSuper
            r0.<init>()
            java.lang.String r1 = "102"
            r0.setAc_type(r1)
            r0.setCategory(r2)
            com.czhj.sdk.common.ClientMetadata r2 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r2 = r2.getApkSha1()
            r0.setSha1(r2)
            com.czhj.sdk.common.ClientMetadata r2 = com.czhj.sdk.common.ClientMetadata.getInstance()
            java.lang.String r2 = r2.getApkMd5()
            r0.setMd5(r2)
            r0.commit()
            return
    }

    public static void a(java.lang.String r1, int r2, java.lang.String r3, com.sigmob.sdk.base.models.BaseAdUnit r4) {
            r0 = 0
            a(r1, r2, r3, r4, r0)
            return
    }

    public static void a(java.lang.String r0, int r1, java.lang.String r2, com.sigmob.sdk.base.models.BaseAdUnit r3, com.sigmob.sdk.base.common.z.a r4) {
            com.sigmob.sdk.base.mta.PointEntitySigmobError r1 = com.sigmob.sdk.base.mta.PointEntitySigmobError.SigmobError(r0, r1, r2)
            if (r4 == 0) goto L9
            r4.a(r1)
        L9:
            a(r0, r0, r3, r1)
            r1.commit()
            return
    }

    public static void a(java.lang.String r5, com.sigmob.sdk.base.common.z.a r6) {
            com.sigmob.sdk.base.common.y r0 = new com.sigmob.sdk.base.common.y
            r0.<init>()
            java.lang.String r1 = "1"
            r0.setAc_type(r1)
            r0.setCategory(r5)
            com.sigmob.sdk.base.i r5 = com.sigmob.sdk.base.i.a()
            boolean r5 = r5.H()
            if (r5 != 0) goto L1a
            java.lang.String r5 = "1,1"
            goto L1c
        L1a:
            java.lang.String r5 = "0,0"
        L1c:
            r0.setAppinfo_switch(r5)
            com.czhj.sdk.common.ClientMetadata r5 = com.czhj.sdk.common.ClientMetadata.getInstance()
            android.location.Location r5 = r5.getLocation()
            r2 = 1
            r3 = 0
            if (r5 == 0) goto L2d
            r5 = r2
            goto L2e
        L2d:
            r5 = r3
        L2e:
            com.sigmob.sdk.base.i r4 = com.sigmob.sdk.base.i.a()
            boolean r4 = r4.G()
            if (r4 != 0) goto L3a
            r3 = r5
            goto L3b
        L3a:
            r2 = r3
        L3b:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            r5.append(r2)
            java.lang.String r2 = ","
            r5.append(r2)
            r5.append(r3)
            java.lang.String r5 = r5.toString()
            r0.setLocation_switch(r5)
            if (r6 == 0) goto L57
            r6.a(r0)
        L57:
            com.sigmob.windad.WindAds r5 = com.sigmob.windad.WindAds.sharedAds()
            com.sigmob.windad.WindAdOptions r5 = r5.getOptions()
            java.lang.String r6 = "0"
            if (r5 == 0) goto L9c
            com.sigmob.windad.WindAds r2 = com.sigmob.windad.WindAds.sharedAds()
            com.sigmob.windad.WindAdOptions r2 = r2.getOptions()
            com.sigmob.windad.WindCustomController r2 = r2.getCustomController()
            if (r2 == 0) goto L9c
            com.sigmob.windad.WindCustomController r5 = r5.getCustomController()
            boolean r2 = r5.isCanUsePhoneState()
            if (r2 == 0) goto L7d
            r2 = r6
            goto L7e
        L7d:
            r2 = r1
        L7e:
            r0.a(r2)
            boolean r2 = r5.isCanUseAndroidId()
            if (r2 == 0) goto L89
            r2 = r6
            goto L8a
        L89:
            r2 = r1
        L8a:
            r0.b(r2)
            java.lang.String r5 = r5.getDevOaid()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto L98
            r1 = r6
        L98:
            r0.c(r1)
            goto La5
        L9c:
            r0.a(r6)
            r0.b(r6)
            r0.c(r6)
        La5:
            r0.commit()
            return
    }

    public static void a(java.lang.String r1, com.sigmob.sdk.base.models.BaseAdUnit r2, com.sigmob.sdk.base.models.LoadAdRequest r3, com.sigmob.sdk.base.common.z.a r4) {
            com.sigmob.sdk.base.mta.PointEntitySigmob r0 = new com.sigmob.sdk.base.mta.PointEntitySigmob
            r0.<init>()
            r0.setAc_type(r1)
            if (r4 == 0) goto Ld
            r4.a(r0)
        Ld:
            java.lang.String r1 = r0.getCategory()
            java.lang.String r4 = r0.getSub_category()
            a(r1, r4, r2, r0)
            if (r3 == 0) goto L41
            java.lang.String r1 = r3.getLoadId()
            r0.setLoad_id(r1)
            int r1 = r3.getAdType()
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r0.setAdtype(r1)
            java.lang.String r1 = r3.getAdSceneId()
            r0.setScene_id(r1)
            java.lang.String r1 = r3.getAdSceneDesc()
            r0.setScene_desc(r1)
            java.lang.String r1 = r3.getPlacementId()
            r0.setPlacement_id(r1)
        L41:
            r0.commit()
            return
    }

    public static void a(java.lang.String r8, com.sigmob.sdk.base.models.BaseAdUnit r9, java.lang.String r10, java.lang.String r11, java.lang.String r12) {
            r0 = 0
            r6 = 0
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            a(r0, r1, r2, r3, r4, r5, r6)
            return
    }

    public static void a(java.lang.String r8, com.sigmob.windad.WindAdError r9, com.sigmob.sdk.base.models.BaseAdUnit r10) {
            int r2 = r9.getErrorCode()
            java.lang.String r3 = r9.getMessage()
            r1 = 0
            r4 = 0
            r5 = 0
            r7 = 0
            r0 = r8
            r6 = r10
            a(r0, r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public static void a(java.lang.String r1, com.sigmob.windad.WindAdError r2, com.sigmob.sdk.base.models.BaseAdUnit r3, com.sigmob.sdk.base.common.z.a r4) {
            int r0 = r2.getErrorCode()
            java.lang.String r2 = r2.getMessage()
            com.sigmob.sdk.base.mta.PointEntitySigmobError r2 = com.sigmob.sdk.base.mta.PointEntitySigmobError.SigmobError(r1, r0, r2)
            a(r1, r1, r3, r2)
            if (r4 == 0) goto L14
            r4.a(r2)
        L14:
            r2.commit()
            return
    }

    public static void a(java.lang.String r8, com.sigmob.windad.WindAdError r9, com.sigmob.sdk.base.models.BaseAdUnit r10, com.sigmob.sdk.base.models.LoadAdRequest r11) {
            int r2 = r9.getErrorCode()
            java.lang.String r3 = r9.getMessage()
            r1 = 0
            r4 = 0
            r7 = 0
            r0 = r8
            r5 = r11
            r6 = r10
            a(r0, r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public static void a(java.lang.String r8, com.sigmob.windad.WindAdError r9, com.sigmob.windad.WindAdRequest r10) {
            int r2 = r9.getErrorCode()
            java.lang.String r3 = r9.getMessage()
            r1 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r0 = r8
            r4 = r10
            a(r0, r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public static void a(java.lang.String r8, java.lang.String r9, int r10, java.lang.String r11, com.sigmob.sdk.base.models.LoadAdRequest r12) {
            r4 = 0
            r6 = 0
            r7 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r5 = r12
            a(r0, r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public static void a(java.lang.String r0, java.lang.String r1, int r2, java.lang.String r3, com.sigmob.windad.WindAdRequest r4, com.sigmob.sdk.base.models.LoadAdRequest r5, com.sigmob.sdk.base.models.BaseAdUnit r6, com.sigmob.sdk.base.common.z.a r7) {
            com.sigmob.sdk.base.mta.PointEntitySigmobError r2 = com.sigmob.sdk.base.mta.PointEntitySigmobError.SigmobError(r0, r2, r3)
            r2.setSub_category(r1)
            a(r0, r0, r2, r4)
            a(r0, r0, r2, r5)
            a(r0, r0, r6, r2)
            if (r7 == 0) goto L15
            r7.a(r2)
        L15:
            r2.commit()
            return
    }

    public static void a(java.lang.String r1, java.lang.String r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r0 = 0
            a(r1, r2, r3, r0)
            return
    }

    public static void a(java.lang.String r6, java.lang.String r7, com.sigmob.sdk.base.models.BaseAdUnit r8, com.sigmob.sdk.base.common.z.a r9) {
            r3 = 0
            r4 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r5 = r9
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void a(java.lang.String r6, java.lang.String r7, com.sigmob.sdk.base.models.BaseAdUnit r8, com.sigmob.sdk.base.models.LoadAdRequest r9, com.sigmob.sdk.base.common.z.a r10) {
            r3 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r9
            r5 = r10
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    protected static void a(java.lang.String r2, java.lang.String r3, com.sigmob.sdk.base.models.BaseAdUnit r4, com.sigmob.sdk.base.mta.PointEntitySigmob r5) {
            if (r4 == 0) goto L135
            int r0 = r4.getAd_type()     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L135
            r5.setAdtype(r0)     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = r4.getCamp_id()     // Catch: java.lang.Throwable -> L135
            r5.setCampaign_id(r0)     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = r4.getCrid()     // Catch: java.lang.Throwable -> L135
            r5.setCreative_id(r0)     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = r4.getRequestId()     // Catch: java.lang.Throwable -> L135
            r5.setRequest_id(r0)     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = r4.getadslot_id()     // Catch: java.lang.Throwable -> L135
            r5.setPlacement_id(r0)     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = r4.getLoad_id()     // Catch: java.lang.Throwable -> L135
            r5.setLoad_id(r0)     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = r4.getVid()     // Catch: java.lang.Throwable -> L135
            r5.setVid(r0)     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = r4.getAd_scene_id()     // Catch: java.lang.Throwable -> L135
            r5.setScene_id(r0)     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = r4.getAd_scene_desc()     // Catch: java.lang.Throwable -> L135
            r5.setScene_desc(r0)     // Catch: java.lang.Throwable -> L135
            int r0 = r4.getPlayMode()     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L135
            r5.setPlay_mode(r0)     // Catch: java.lang.Throwable -> L135
            int r0 = r4.getCreativeType()     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L135
            r5.setCreative_type(r0)     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = r4.getBid_token()     // Catch: java.lang.Throwable -> L135
            r5.setBid_token(r0)     // Catch: java.lang.Throwable -> L135
            com.sigmob.sdk.base.models.rtb.Ad r0 = r4.getAd()     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = r0.settlement_price_enc     // Catch: java.lang.Throwable -> L135
            r5.setPrice(r0)     // Catch: java.lang.Throwable -> L135
            com.sigmob.sdk.base.models.rtb.Ad r0 = r4.getAd()     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = r0.product_id     // Catch: java.lang.Throwable -> L135
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L135
            if (r0 != 0) goto L80
            com.sigmob.sdk.base.models.rtb.Ad r0 = r4.getAd()     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = r0.product_id     // Catch: java.lang.Throwable -> L135
            r5.setProduct_id(r0)     // Catch: java.lang.Throwable -> L135
        L80:
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r4.getMaterial()     // Catch: java.lang.Throwable -> L135
            if (r0 == 0) goto L93
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r4.getMaterial()     // Catch: java.lang.Throwable -> L135
            java.lang.Integer r0 = r0.template_type     // Catch: java.lang.Throwable -> L135
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L135
            r5.setTemplate_type(r0)     // Catch: java.lang.Throwable -> L135
        L93:
            java.lang.String r0 = r5.getTarget_url()     // Catch: java.lang.Throwable -> L135
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L135
            if (r0 == 0) goto La4
            java.lang.String r0 = r4.getLanding_page()     // Catch: java.lang.Throwable -> L135
            r5.setTarget_url(r0)     // Catch: java.lang.Throwable -> L135
        La4:
            com.sigmob.sdk.base.models.rtb.WXProgramRes r0 = r4.getWXProgramRes()     // Catch: java.lang.Throwable -> L135
            if (r0 == 0) goto Lda
            com.sigmob.sdk.base.models.rtb.WXProgramRes r0 = r4.getWXProgramRes()     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = r0.wx_app_path     // Catch: java.lang.Throwable -> L135
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L135
            if (r0 != 0) goto Lc5
            com.sigmob.sdk.base.models.rtb.WXProgramRes r0 = r4.getWXProgramRes()     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = r0.wx_app_path     // Catch: java.lang.Throwable -> L135
            java.lang.String r1 = "UTF-8"
            java.lang.String r0 = java.net.URLEncoder.encode(r0, r1)     // Catch: java.lang.Throwable -> L135
            r5.setWx_app_path(r0)     // Catch: java.lang.Throwable -> L135
        Lc5:
            com.sigmob.sdk.base.models.rtb.WXProgramRes r0 = r4.getWXProgramRes()     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = r0.wx_app_username     // Catch: java.lang.Throwable -> L135
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L135
            if (r0 != 0) goto Lda
            com.sigmob.sdk.base.models.rtb.WXProgramRes r0 = r4.getWXProgramRes()     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = r0.wx_app_username     // Catch: java.lang.Throwable -> L135
            r5.setWx_app_username(r0)     // Catch: java.lang.Throwable -> L135
        Lda:
            java.lang.String r0 = r4.getAd_source_channel()     // Catch: java.lang.Throwable -> L135
            r5.setAd_source_channel(r0)     // Catch: java.lang.Throwable -> L135
            java.lang.String r0 = r5.getShow_type()     // Catch: java.lang.Throwable -> L135
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L135
            if (r0 == 0) goto L135
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L135
            if (r0 != 0) goto L135
            java.lang.String r0 = "request"
            boolean r0 = r2.equals(r0)     // Catch: java.lang.Throwable -> L135
            if (r0 != 0) goto L11f
            java.lang.String r0 = "ready"
            boolean r0 = r2.equals(r0)     // Catch: java.lang.Throwable -> L135
            if (r0 != 0) goto L11f
            java.lang.String r0 = "start"
            boolean r0 = r2.equals(r0)     // Catch: java.lang.Throwable -> L135
            if (r0 != 0) goto L11f
            java.lang.String r0 = "endcard"
            boolean r2 = r2.equals(r0)     // Catch: java.lang.Throwable -> L135
            if (r2 != 0) goto L11f
            boolean r2 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L135
            if (r2 != 0) goto L135
            java.lang.String r2 = "click"
            boolean r2 = r3.equals(r2)     // Catch: java.lang.Throwable -> L135
            if (r2 == 0) goto L135
        L11f:
            int r2 = r4.getAd_type()     // Catch: java.lang.Throwable -> L135
            r3 = 4
            if (r2 != r3) goto L135
            boolean r2 = r4.isHalfInterstitial()     // Catch: java.lang.Throwable -> L135
            if (r2 == 0) goto L132
            java.lang.String r2 = "2"
        L12e:
            r5.setShow_type(r2)     // Catch: java.lang.Throwable -> L135
            goto L135
        L132:
            java.lang.String r2 = "1"
            goto L12e
        L135:
            return
    }

    public static void a(java.lang.String r6, java.lang.String r7, com.sigmob.sdk.base.models.BaseAdUnit r8, com.sigmob.windad.WindAdRequest r9, com.sigmob.sdk.base.common.z.a r10) {
            r4 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r5 = r10
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    public static void a(java.lang.String r0, java.lang.String r1, com.sigmob.sdk.base.models.BaseAdUnit r2, com.sigmob.windad.WindAdRequest r3, com.sigmob.sdk.base.models.LoadAdRequest r4, com.sigmob.sdk.base.common.z.a r5) {
            com.sigmob.sdk.base.common.ae r0 = com.sigmob.sdk.base.common.ae.a(r0)
            com.sigmob.sdk.base.common.ae r0 = r0.d(r1)
            com.sigmob.sdk.base.common.ae r0 = r0.a(r2)
            com.sigmob.sdk.base.common.ae r0 = r0.a(r3)
            com.sigmob.sdk.base.common.ae r0 = r0.a(r4)
            com.sigmob.sdk.base.common.z$1 r1 = new com.sigmob.sdk.base.common.z$1
            r1.<init>(r5)
            com.sigmob.sdk.base.common.ae r0 = r0.a(r1)
            r0.a()
            return
    }

    public static void a(java.lang.String r6, java.lang.String r7, com.sigmob.sdk.base.models.LoadAdRequest r8) {
            r2 = 0
            r3 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r4 = r8
            a(r0, r1, r2, r3, r4, r5)
            return
    }

    protected static void a(java.lang.String r2, java.lang.String r3, com.sigmob.sdk.base.mta.PointEntitySigmob r4, com.sigmob.sdk.base.models.LoadAdRequest r5) {
            if (r4 == 0) goto Lb2
            if (r5 == 0) goto Lb2
            java.lang.String r0 = r5.getPlacementId()
            r4.setPlacement_id(r0)
            java.lang.String r0 = r5.getBidToken()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1c
            java.lang.String r0 = r5.getBidToken()
            r4.setBid_token(r0)
        L1c:
            java.lang.String r0 = r5.getLoadId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2d
            java.lang.String r0 = r5.getLoadId()
            r4.setLoad_id(r0)
        L2d:
            int r0 = r5.getAdType()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r4.setAdtype(r0)
            java.lang.String r0 = r5.getRequestId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L49
            java.lang.String r0 = r5.getRequestId()
            r4.setRequest_id(r0)
        L49:
            java.util.Map r0 = r5.getOptions()
            if (r0 == 0) goto L5f
            org.json.JSONObject r0 = new org.json.JSONObject
            java.util.Map r1 = r5.getOptions()
            r0.<init>(r1)
            java.lang.String r0 = r0.toString()
            r4.setExtinfo(r0)
        L5f:
            java.lang.String r0 = r4.getShow_type()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L8f
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L8f
            java.lang.String r0 = "request"
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L9d
            java.lang.String r0 = "ready"
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L9d
            java.lang.String r0 = "start"
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L9d
            java.lang.String r0 = "endcard"
            boolean r2 = r2.equals(r0)
            if (r2 != 0) goto L9d
        L8f:
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 != 0) goto Lb2
            java.lang.String r2 = "click"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto Lb2
        L9d:
            int r2 = r5.getAdType()
            r3 = 4
            if (r2 != r3) goto Lb2
            boolean r2 = r5.isHalfInterstitial()
            if (r2 == 0) goto Lad
            java.lang.String r2 = "2"
            goto Laf
        Lad:
            java.lang.String r2 = "1"
        Laf:
            r4.setShow_type(r2)
        Lb2:
            return
    }

    protected static void a(java.lang.String r2, java.lang.String r3, com.sigmob.sdk.base.mta.PointEntitySigmob r4, com.sigmob.windad.WindAdRequest r5) {
            if (r4 == 0) goto L86
            if (r5 == 0) goto L86
            java.lang.String r0 = r5.getPlacementId()
            r4.setPlacement_id(r0)
            java.lang.String r0 = r5.getLoadId()
            r4.setLoad_id(r0)
            int r0 = r5.getAdType()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r4.setAdtype(r0)
            boolean r0 = r5.hasOptions()
            if (r0 == 0) goto L33
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L33
            java.util.Map r1 = r5.getOptions()     // Catch: java.lang.Throwable -> L33
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L33
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L33
            r4.setExtinfo(r0)     // Catch: java.lang.Throwable -> L33
        L33:
            java.lang.String r0 = r4.getShow_type()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L63
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L63
            java.lang.String r0 = "request"
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L71
            java.lang.String r0 = "ready"
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L71
            java.lang.String r0 = "start"
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L71
            java.lang.String r0 = "endcard"
            boolean r2 = r2.equals(r0)
            if (r2 != 0) goto L71
        L63:
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 != 0) goto L86
            java.lang.String r2 = "click"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L86
        L71:
            int r2 = r5.getAdType()
            r3 = 4
            if (r2 != r3) goto L86
            boolean r2 = r5.isHalfInterstitial()
            if (r2 == 0) goto L81
            java.lang.String r2 = "2"
            goto L83
        L81:
            java.lang.String r2 = "1"
        L83:
            r4.setShow_type(r2)
        L86:
            return
    }

    public static void a(java.lang.String r2, java.lang.String r3, com.sigmob.windad.WindAdRequest r4, com.sigmob.sdk.base.common.z.a r5) {
            com.sigmob.sdk.base.mta.PointEntitySigmobRequest r0 = new com.sigmob.sdk.base.mta.PointEntitySigmobRequest
            r0.<init>()
            java.lang.String r1 = "5"
            r0.setAc_type(r1)
            r0.setCategory(r2)
            r0.setSub_category(r3)
            a(r2, r2, r0, r4)
            if (r5 == 0) goto L18
            r5.a(r0)
        L18:
            a(r0)
            r0.commit()
            return
    }

    public static void b(java.lang.String r1, java.lang.String r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r0 = 0
            a(r1, r2, r3, r0)
            return
    }
}
