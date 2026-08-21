package com.kwad.sdk.core.response.b;

public final class a {
    public static java.lang.String Cz() {
            java.lang.String r0 = "继续下载"
            return r0
    }

    public static long E(com.kwad.sdk.core.response.model.AdInfo r2) {
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r2 = r2.adBaseInfo
            long r0 = r2.creativeId
            return r0
    }

    public static java.lang.String F(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = aN(r0)
            java.lang.String r0 = r0.materialUrl
            return r0
    }

    public static int G(com.kwad.sdk.core.response.model.AdInfo r2) {
            int r0 = aW(r2)
            r1 = 2
            if (r0 != r1) goto Le
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r2 = aM(r2)
        Lb:
            int r2 = r2.videoDuration
            return r2
        Le:
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r2 = aN(r2)
            goto Lb
    }

    public static long H(com.kwad.sdk.core.response.model.AdInfo r5) {
            int r0 = aW(r5)
            r1 = 1000(0x3e8, double:4.94E-321)
            r3 = 2
            if (r0 != r3) goto L12
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r5 = aM(r5)
        Ld:
            int r5 = r5.videoDuration
            long r3 = (long) r5
            long r3 = r3 * r1
            return r3
        L12:
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r5 = aN(r5)
            goto Ld
    }

    public static java.lang.String I(com.kwad.sdk.core.response.model.AdInfo r6) {
            int r0 = aW(r6)
            r1 = 3
            r2 = 1
            if (r0 == r2) goto L35
            r3 = 2
            if (r0 == r3) goto L12
            if (r0 == r1) goto L12
            r2 = 8
            if (r0 == r2) goto L58
            goto L7b
        L12:
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r0 = r6.adMaterialInfo
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature> r0 = r0.materialFeatureList
            java.util.Iterator r0 = r0.iterator()
        L1a:
            boolean r4 = r0.hasNext()
            if (r4 == 0) goto L35
            java.lang.Object r4 = r0.next()
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r4 = (com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature) r4
            int r5 = r4.featureType
            if (r5 != r3) goto L1a
            java.lang.String r5 = r4.firstFrame
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L1a
            java.lang.String r6 = r4.firstFrame
            return r6
        L35:
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r0 = r6.adMaterialInfo
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature> r0 = r0.materialFeatureList
            java.util.Iterator r0 = r0.iterator()
        L3d:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L58
            java.lang.Object r3 = r0.next()
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r3 = (com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature) r3
            int r4 = r3.featureType
            if (r4 != r2) goto L3d
            java.lang.String r4 = r3.firstFrame
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L3d
            java.lang.String r6 = r3.firstFrame
            return r6
        L58:
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r6 = r6.adMaterialInfo
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature> r6 = r6.materialFeatureList
            java.util.Iterator r6 = r6.iterator()
        L60:
            boolean r0 = r6.hasNext()
            if (r0 == 0) goto L7b
            java.lang.Object r0 = r6.next()
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = (com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature) r0
            int r2 = r0.featureType
            if (r2 != r1) goto L60
            java.lang.String r2 = r0.firstFrame
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L60
            java.lang.String r6 = r0.firstFrame
            return r6
        L7b:
            java.lang.String r6 = ""
            return r6
    }

    public static boolean J(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r1.adConversionInfo
            int r1 = r1.supportThirdDownload
            r0 = 1
            if (r1 != r0) goto L8
            return r0
        L8:
            r1 = 0
            return r1
    }

    public static int K(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = aN(r0)
            int r0 = r0.videoWidth
            return r0
    }

    public static int L(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = aN(r0)
            int r0 = r0.videoHeight
            return r0
    }

    public static boolean M(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r1.adConversionInfo
            com.kwad.sdk.core.response.model.AdInfo$SmallAppJumpInfo r0 = r0.smallAppJumpInfo
            if (r0 == 0) goto L15
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r1.adConversionInfo
            com.kwad.sdk.core.response.model.AdInfo$SmallAppJumpInfo r1 = r1.smallAppJumpInfo
            java.lang.String r1 = r1.mediaSmallAppId
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L13
            goto L15
        L13:
            r1 = 0
            return r1
        L15:
            r1 = 1
            return r1
    }

    public static boolean N(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r1.adConversionInfo
            int r1 = r1.webUriSourceType
            r0 = 2
            if (r1 != r0) goto L9
            r1 = 1
            return r1
        L9:
            r1 = 0
            return r1
    }

    public static boolean O(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r1 = aN(r1)
            int r0 = r1.videoWidth
            int r1 = r1.videoHeight
            if (r0 > r1) goto Lc
            r1 = 1
            return r1
        Lc:
            r1 = 0
            return r1
    }

    @java.lang.Deprecated
    public static java.lang.String P(com.kwad.sdk.core.response.model.AdInfo r6) {
            int r0 = aW(r6)
            r1 = 3
            r2 = 1
            if (r0 == r2) goto L41
            r3 = 2
            if (r0 == r3) goto L13
            if (r0 == r1) goto L13
            r2 = 8
            if (r0 == r2) goto L64
            goto L87
        L13:
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r0 = r6.adMaterialInfo
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature> r0 = r0.materialFeatureList
            java.util.Iterator r0 = r0.iterator()
        L1b:
            boolean r4 = r0.hasNext()
            if (r4 == 0) goto L41
            java.lang.Object r4 = r0.next()
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r4 = (com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature) r4
            int r5 = r4.featureType
            if (r5 != r3) goto L1b
            java.lang.String r5 = r4.materialUrl
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L36
            java.lang.String r6 = r4.materialUrl
            return r6
        L36:
            java.lang.String r5 = r4.coverUrl
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 != 0) goto L1b
            java.lang.String r6 = r4.coverUrl
            return r6
        L41:
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r0 = r6.adMaterialInfo
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature> r0 = r0.materialFeatureList
            java.util.Iterator r0 = r0.iterator()
        L49:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L64
            java.lang.Object r3 = r0.next()
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r3 = (com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature) r3
            int r4 = r3.featureType
            if (r4 != r2) goto L49
            java.lang.String r4 = r3.coverUrl
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L49
            java.lang.String r6 = r3.coverUrl
            return r6
        L64:
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r6 = r6.adMaterialInfo
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature> r6 = r6.materialFeatureList
            java.util.Iterator r6 = r6.iterator()
        L6c:
            boolean r0 = r6.hasNext()
            if (r0 == 0) goto L87
            java.lang.Object r0 = r6.next()
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = (com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature) r0
            int r2 = r0.featureType
            if (r2 != r1) goto L6c
            java.lang.String r2 = r0.coverUrl
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L6c
            java.lang.String r6 = r0.coverUrl
            return r6
        L87:
            java.lang.String r6 = ""
            return r6
    }

    public static java.lang.String Q(com.kwad.sdk.core.response.model.AdInfo r4) {
            int r0 = aW(r4)
            r1 = 1
            if (r0 == r1) goto L33
            r1 = 2
            if (r0 == r1) goto L10
            r2 = 3
            if (r0 == r2) goto L10
            java.lang.String r4 = ""
            return r4
        L10:
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r0 = r4.adMaterialInfo
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature> r0 = r0.materialFeatureList
            java.util.Iterator r0 = r0.iterator()
        L18:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L33
            java.lang.Object r2 = r0.next()
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r2 = (com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature) r2
            int r3 = r2.featureType
            if (r3 != r1) goto L18
            java.lang.String r3 = r2.blurBackgroundUrl
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L18
            java.lang.String r4 = r2.blurBackgroundUrl
            return r4
        L33:
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r4 = aQ(r4)
            java.lang.String r4 = r4.blurBackgroundUrl
            return r4
    }

    private static int R(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = aN(r0)
            int r0 = r0.width
            return r0
    }

    private static int S(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = aN(r0)
            int r0 = r0.height
            return r0
    }

    public static long T(com.kwad.sdk.core.response.model.AdInfo r2) {
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r2 = aN(r2)
            long r0 = r2.photoId
            return r0
    }

    public static java.lang.String U(com.kwad.sdk.core.response.model.AdInfo r1) {
            if (r1 == 0) goto L12
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r1.adBaseInfo
            java.lang.String r0 = r0.openAppLabel
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Ld
            goto L12
        Ld:
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = r1.adBaseInfo
            java.lang.String r1 = r1.openAppLabel
            return r1
        L12:
            java.lang.String r1 = "立即打开"
            return r1
    }

    public static long V(com.kwad.sdk.core.response.model.AdInfo r2) {
            com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo r2 = r2.adRewardInfo
            int r2 = r2.rewardTime
            long r0 = (long) r2
            return r0
    }

    public static int W(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo r0 = r0.adRewardInfo
            int r0 = r0.skipShowTime
            return r0
    }

    public static long X(com.kwad.sdk.core.response.model.AdInfo r4) {
            com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo r4 = r4.adRewardInfo
            int r4 = r4.skipShowTime
            long r0 = (long) r4
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            return r0
    }

    public static long Y(com.kwad.sdk.core.response.model.AdInfo r4) {
            com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo r4 = r4.adRewardInfo
            int r4 = r4.rewardTime
            long r0 = (long) r4
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            return r0
    }

    private static int Z(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r1.adStyleConfInfo
            if (r0 == 0) goto L9
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r1 = r1.adStyleConfInfo
            int r1 = r1.rewardSkipConfirmSwitch
            return r1
        L9:
            java.lang.String r1 = "AdInfoHelper"
            java.lang.String r0 = "adInfo.adStyleConfInfo is null"
            com.kwad.sdk.core.e.c.w(r1, r0)
            r1 = 1
            return r1
    }

    public static int aA(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoInteractInfo r0 = r0.rewardVideoInteractInfo
            int r0 = r0.dayMaxLimit
            return r0
    }

    public static int aB(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoInteractInfo r0 = r0.rewardVideoInteractInfo
            int r0 = r0.showTime
            return r0
    }

    public static int aC(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoInteractInfo r0 = r0.rewardVideoInteractInfo
            int r0 = r0.rewardTime
            return r0
    }

    public static int aD(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoTaskInfo r0 = r0.rewardVideoTaskInfo
            int r0 = r0.showTime
            return r0
    }

    public static int aE(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoTaskInfo r0 = r0.rewardVideoTaskInfo
            int r0 = r0.thresholdTime
            return r0
    }

    public static int aF(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoTaskInfo r0 = r0.rewardVideoTaskInfo
            int r0 = r0.taskType
            return r0
    }

    public static boolean aG(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoTaskInfo r0 = r0.rewardVideoTaskInfo
            java.lang.String r0 = r0.templateId
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10
            r0 = 1
            return r0
        L10:
            r0 = 0
            return r0
    }

    public static boolean aH(com.kwad.sdk.core.response.model.AdInfo r2) {
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r0 = r2.downloadSafeInfo
            com.kwad.sdk.core.response.model.AdInfo$ComplianceInfo r0 = r0.complianceInfo
            r1 = 0
            if (r0 == 0) goto L17
            boolean r0 = ax(r2)
            if (r0 == 0) goto L17
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r2 = r2.downloadSafeInfo
            com.kwad.sdk.core.response.model.AdInfo$ComplianceInfo r2 = r2.complianceInfo
            int r2 = r2.titleBarTextSwitch
            r0 = 1
            if (r2 != r0) goto L17
            return r0
        L17:
            return r1
    }

    public static int aI(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = r1.adBaseInfo
            int r1 = r1.adOperationType
            r0 = 1
            if (r1 == r0) goto Lc
            r0 = 2
            if (r1 == r0) goto Lc
            r1 = 0
            return r1
        Lc:
            return r0
    }

    public static int aJ(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r0.adBaseInfo
            int r0 = r0.ecpm
            return r0
    }

    public static java.lang.String aK(com.kwad.sdk.core.response.model.AdInfo r2) {
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            if (r0 != 0) goto Lc
            r0 = 0
            goto L10
        Lc:
            android.content.Context r0 = r0.getContext()
        L10:
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r2.adConversionInfo
            java.lang.String r1 = r1.h5Url
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L1d
            java.lang.String r2 = ""
            return r2
        L1d:
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r2.adConversionInfo
            java.lang.String r1 = r1.h5Url
            boolean r2 = at(r2)
            java.lang.String r2 = com.kwad.sdk.utils.ac.c(r0, r1, r2)
            return r2
    }

    public static int aL(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r0.adConversionInfo
            int r0 = r0.h5Type
            return r0
    }

    public static com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature aM(com.kwad.sdk.core.response.model.AdInfo r3) {
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r3 = r3.adMaterialInfo
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature> r3 = r3.materialFeatureList
            java.util.Iterator r3 = r3.iterator()
        L8:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L24
            java.lang.Object r0 = r3.next()
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = (com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature) r0
            if (r0 == 0) goto L8
            int r1 = r0.featureType
            r2 = 2
            if (r1 != r2) goto L8
            java.lang.String r1 = r0.materialUrl
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L8
            return r0
        L24:
            java.lang.String r3 = "AdInfoHelper"
            java.lang.String r0 = "getImageMaterialFeature in null"
            com.kwad.sdk.core.e.c.w(r3, r0)
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r3 = new com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature
            r3.<init>()
            return r3
    }

    public static java.lang.String aM(com.kwad.sdk.core.response.model.AdTemplate r2) {
            if (r2 == 0) goto L26
            com.kwad.sdk.internal.api.SceneImpl r0 = r2.mAdScene
            if (r0 == 0) goto L26
            com.kwad.sdk.internal.api.SceneImpl r0 = r2.mAdScene
            int r0 = r0.getAdStyle()
            r1 = 2
            if (r0 != r1) goto L26
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r2)
            boolean r0 = cv(r0)
            if (r0 != 0) goto L26
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r2)
            boolean r0 = cw(r0)
            if (r0 != 0) goto L26
            java.lang.String r2 = "安装获取奖励"
            return r2
        L26:
            java.lang.String r0 = "立即安装"
            if (r2 != 0) goto L2b
            return r0
        L2b:
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = r2.adBaseInfo
            java.lang.String r1 = r1.installAppLabel
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L3a
            return r0
        L3a:
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r2 = r2.adBaseInfo
            java.lang.String r2 = r2.installAppLabel
            return r2
    }

    public static com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature aN(com.kwad.sdk.core.response.model.AdInfo r3) {
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r3 = r3.adMaterialInfo
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature> r3 = r3.materialFeatureList
            java.util.Iterator r3 = r3.iterator()
        L8:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L24
            java.lang.Object r0 = r3.next()
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r0 = (com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature) r0
            if (r0 == 0) goto L8
            int r1 = r0.featureType
            r2 = 1
            if (r1 != r2) goto L8
            java.lang.String r1 = r0.materialUrl
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L8
            return r0
        L24:
            java.lang.String r3 = "AdInfoHelper"
            java.lang.String r0 = "getVideoMaterialFeature in null"
            com.kwad.sdk.core.e.c.w(r3, r0)
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r3 = new com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature
            r3.<init>()
            return r3
    }

    public static boolean aN(com.kwad.sdk.core.response.model.AdTemplate r3) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r3)
            com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo r3 = com.kwad.sdk.core.response.b.b.bL(r3)
            r1 = 1
            r2 = 0
            if (r3 == 0) goto L14
            boolean r3 = r3.isEmpty()
            if (r3 != 0) goto L14
            r3 = r1
            goto L15
        L14:
            r3 = r2
        L15:
            if (r3 == 0) goto L1f
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r3 = r0.adStyleConfInfo
            int r3 = r3.innerAdType
            r0 = 2
            if (r3 != r0) goto L1f
            return r1
        L1f:
            return r2
    }

    public static boolean aO(com.kwad.sdk.core.response.model.AdInfo r1) {
            boolean r0 = aU(r1)
            if (r0 == 0) goto Lb
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r1 = aN(r1)
            goto Lf
        Lb:
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r1 = aM(r1)
        Lf:
            int r0 = r1.height
            int r1 = r1.width
            if (r0 <= r1) goto L17
            r1 = 1
            goto L18
        L17:
            r1 = 0
        L18:
            return r1
    }

    public static float aP(com.kwad.sdk.core.response.model.AdInfo r2) {
            boolean r0 = aU(r2)
            if (r0 == 0) goto Lb
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r2 = aN(r2)
            goto Lf
        Lb:
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r2 = aM(r2)
        Lf:
            if (r2 == 0) goto L3d
            int r0 = r2.width
            if (r0 != 0) goto L16
            goto L3d
        L16:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getMaterialRatio: height: "
            r0.<init>(r1)
            int r1 = r2.height
            r0.append(r1)
            java.lang.String r1 = ", width: "
            r0.append(r1)
            int r1 = r2.width
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AdInfoHelper"
            com.kwad.sdk.core.e.c.d(r1, r0)
            int r0 = r2.height
            float r0 = (float) r0
            int r2 = r2.width
            float r2 = (float) r2
            float r0 = r0 / r2
            return r0
        L3d:
            r2 = -1082130432(0xffffffffbf800000, float:-1.0)
            return r2
    }

    private static com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature aQ(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r1 = r1.adMaterialInfo
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature> r1 = r1.materialFeatureList
            int r0 = r1.size()
            if (r0 <= 0) goto L12
            r0 = 0
            java.lang.Object r1 = r1.get(r0)
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r1 = (com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature) r1
            goto L13
        L12:
            r1 = 0
        L13:
            if (r1 != 0) goto L1a
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r1 = new com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature
            r1.<init>()
        L1a:
            return r1
    }

    public static boolean aR(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r1 = aN(r1)
            int r0 = r1.height
            int r1 = r1.width
            if (r0 <= r1) goto Lc
            r1 = 1
            return r1
        Lc:
            r1 = 0
            return r1
    }

    public static java.lang.String aS(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdPreloadInfo r0 = r0.adPreloadInfo
            java.lang.String r0 = r0.preloadId
            return r0
    }

    public static java.util.List<java.lang.String> aT(com.kwad.sdk.core.response.model.AdInfo r4) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            int r1 = aW(r4)
            r2 = 2
            if (r1 == r2) goto L10
            r3 = 3
            if (r1 == r3) goto L10
            return r0
        L10:
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r4 = r4.adMaterialInfo
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature> r4 = r4.materialFeatureList
            java.util.Iterator r4 = r4.iterator()
        L18:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L36
            java.lang.Object r1 = r4.next()
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r1 = (com.kwad.sdk.core.response.model.AdInfo.AdMaterialInfo.MaterialFeature) r1
            int r3 = r1.featureType
            if (r3 != r2) goto L18
            java.lang.String r3 = r1.materialUrl
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L18
            java.lang.String r1 = r1.materialUrl
            r0.add(r1)
            goto L18
        L36:
            return r0
    }

    public static boolean aU(com.kwad.sdk.core.response.model.AdInfo r1) {
            int r1 = aW(r1)
            r0 = 1
            if (r1 != r0) goto L8
            return r0
        L8:
            r1 = 0
            return r1
    }

    public static boolean aV(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo$MaterialFeature r1 = aM(r1)
            int r1 = r1.featureType
            r0 = 2
            if (r1 != r0) goto Lb
            r1 = 1
            return r1
        Lb:
            r1 = 0
            return r1
    }

    public static int aW(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r1 = r1.adMaterialInfo
            int r1 = r1.materialType
            r0 = 1
            if (r1 == r0) goto L16
            r0 = 2
            if (r1 == r0) goto L16
            r0 = 5
            if (r1 == r0) goto L14
            r0 = 8
            if (r1 == r0) goto L13
            r1 = 0
            return r1
        L13:
            return r0
        L14:
            r1 = 3
            return r1
        L16:
            return r0
    }

    public static int aX(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$ActionBarInfoNew r0 = r0.actionBarInfo
            int r0 = r0.cardType
            return r0
    }

    public static java.lang.String aY(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r0.adBaseInfo
            java.lang.String r0 = r0.liveStreamId
            return r0
    }

    public static boolean aZ(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdMaterialInfo r1 = r1.adMaterialInfo
            int r1 = r1.materialType
            r0 = 1
            if (r1 != r0) goto L8
            return r0
        L8:
            r1 = 0
            return r1
    }

    public static boolean aa(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r1.adStyleConfInfo
            com.kwad.sdk.core.response.model.AdInfo$NativeAdInfo r0 = r0.nativeAdInfo
            if (r0 == 0) goto L17
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r1.adStyleConfInfo
            com.kwad.sdk.core.response.model.AdInfo$NativeAdInfo r0 = r0.nativeAdInfo
            com.kwad.sdk.core.response.model.AdInfo$NativeAdShakeInfo r0 = r0.shakeInfo
            if (r0 == 0) goto L17
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r1 = r1.adStyleConfInfo
            com.kwad.sdk.core.response.model.AdInfo$NativeAdInfo r1 = r1.nativeAdInfo
            com.kwad.sdk.core.response.model.AdInfo$NativeAdShakeInfo r1 = r1.shakeInfo
            boolean r1 = r1.enableShake
            return r1
        L17:
            java.lang.String r1 = "AdInfoHelper"
            java.lang.String r0 = "adInfo.adStyleConfInfo.nativeAdInfo is null"
            com.kwad.sdk.core.e.c.w(r1, r0)
            r1 = 0
            return r1
    }

    public static int ab(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r1.adStyleConfInfo
            com.kwad.sdk.core.response.model.AdInfo$NativeAdInfo r0 = r0.nativeAdInfo
            if (r0 == 0) goto Lf
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r1 = r1.adStyleConfInfo
            com.kwad.sdk.core.response.model.AdInfo$NativeAdInfo r1 = r1.nativeAdInfo
            com.kwad.sdk.core.response.model.AdInfo$NativeAdShakeInfo r1 = r1.shakeInfo
            int r1 = r1.acceleration
            return r1
        Lf:
            java.lang.String r1 = "AdInfoHelper"
            java.lang.String r0 = "adInfo.adStyleConfInfo.nativeAdInfo is null"
            com.kwad.sdk.core.e.c.w(r1, r0)
            r1 = 2
            return r1
    }

    public static boolean ac(com.kwad.sdk.core.response.model.AdInfo r0) {
            int r0 = Z(r0)
            if (r0 == 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public static long ad(com.kwad.sdk.core.response.model.AdInfo r4) {
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r4.adStyleConfInfo
            if (r0 == 0) goto Ld
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r4 = r4.adStyleConfInfo
            int r4 = r4.fullScreenSkipShowTime
            long r0 = (long) r4
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            return r0
        Ld:
            java.lang.String r4 = "AdInfoHelper"
            java.lang.String r0 = "adInfo.adStyleConfInfo is null"
            com.kwad.sdk.core.e.c.w(r4, r0)
            r0 = 5000(0x1388, double:2.4703E-320)
            return r0
    }

    public static long ae(com.kwad.sdk.core.response.model.AdInfo r4) {
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r4.adStyleConfInfo
            if (r0 == 0) goto Lc
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r4 = r4.adStyleConfInfo
            long r0 = r4.closeDelaySeconds
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            return r0
        Lc:
            java.lang.String r4 = "AdInfoHelper"
            java.lang.String r0 = "adInfo.adStyleConfInfo is null"
            com.kwad.sdk.core.e.c.w(r4, r0)
            r0 = 0
            return r0
    }

    public static int af(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r0.adStyleConfInfo
            com.kwad.sdk.core.response.model.AdInfo$AdShowVideoH5Info r0 = r0.adShowVideoH5Info
            int r0 = r0.showPageType
            return r0
    }

    public static boolean ag(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r0.adStyleConfInfo
            com.kwad.sdk.core.response.model.AdInfo$AdShowVideoH5Info r0 = r0.adShowVideoH5Info
            boolean r0 = r0.videoAutoLoopAtH5
            return r0
    }

    public static boolean ah(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r0.adStyleConfInfo
            com.kwad.sdk.core.response.model.AdInfo$AdShowVideoH5Info r0 = r0.adShowVideoH5Info
            boolean r0 = r0.videoMutedAtH5
            return r0
    }

    public static boolean ai(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r0.adStyleConfInfo
            com.kwad.sdk.core.response.model.AdInfo$AdShowVideoH5Info r0 = r0.adShowVideoH5Info
            boolean r0 = r0.videoClickAtH5
            return r0
    }

    public static long aj(com.kwad.sdk.core.response.model.AdInfo r4) {
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r4.adStyleConfInfo
            if (r0 == 0) goto Lc
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r4 = r4.adStyleConfInfo
            long r0 = r4.playableCloseSeconds
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            return r0
        Lc:
            java.lang.String r4 = "AdInfoHelper"
            java.lang.String r0 = "adInfo.adStyleConfInfo is null"
            com.kwad.sdk.core.e.c.w(r4, r0)
            r0 = 0
            return r0
    }

    public static boolean ak(com.kwad.sdk.core.response.model.AdInfo r1) {
            boolean r0 = ax(r1)
            if (r0 != 0) goto Le
            boolean r1 = al(r1)
            if (r1 == 0) goto Le
            r1 = 1
            return r1
        Le:
            r1 = 0
            return r1
    }

    public static boolean al(com.kwad.sdk.core.response.model.AdInfo r2) {
            com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo r0 = r2.adRewardInfo
            int r0 = r0.showLandingPage
            r1 = 1
            if (r0 != r1) goto L1a
            boolean r0 = aG(r2)
            if (r0 == 0) goto L13
            int r0 = aF(r2)
            if (r0 == r1) goto L1a
        L13:
            boolean r2 = cA(r2)
            if (r2 != 0) goto L1a
            return r1
        L1a:
            r2 = 0
            return r2
    }

    public static boolean am(com.kwad.sdk.core.response.model.AdInfo r6) {
            com.kwad.sdk.core.response.model.AdInfo$FullScreenVideoInfo r0 = r6.fullScreenVideoInfo
            int r0 = r0.showLandingPage
            r1 = 0
            r2 = 1
            if (r0 != r2) goto La
            r0 = r2
            goto Lb
        La:
            r0 = r1
        Lb:
            boolean r3 = ax(r6)
            java.lang.String r4 = cx(r6)
            boolean r4 = com.kwad.sdk.utils.bc.isNullString(r4)
            r4 = r4 ^ r2
            java.lang.String r5 = aK(r6)
            boolean r5 = com.kwad.sdk.utils.bc.isNullString(r5)
            r5 = r5 ^ r2
            boolean r6 = bv(r6)
            if (r0 == 0) goto L30
            if (r5 == 0) goto L30
            if (r3 != 0) goto L30
            if (r4 != 0) goto L30
            if (r6 != 0) goto L30
            return r2
        L30:
            return r1
    }

    public static java.lang.String an(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r0.adBaseInfo
            java.lang.String r0 = r0.adDescription
            return r0
    }

    public static java.lang.String ao(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r0.adBaseInfo
            java.lang.String r0 = r0.appName
            return r0
    }

    public static java.lang.String ap(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r0.adBaseInfo
            java.lang.String r0 = r0.productName
            return r0
    }

    public static java.lang.String aq(com.kwad.sdk.core.response.model.AdInfo r1) {
            if (r1 == 0) goto Lc
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r1.adBaseInfo
            if (r0 != 0) goto L7
            goto Lc
        L7:
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = r1.adBaseInfo
            java.lang.String r1 = r1.appPackageName
            return r1
        Lc:
            r1 = 0
            return r1
    }

    public static java.lang.String ar(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r0.adBaseInfo
            java.lang.String r0 = r0.appDownloadCountDesc
            return r0
    }

    public static float as(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r1.adBaseInfo
            int r0 = r0.appScore
            if (r0 > 0) goto L8
            r1 = 0
            return r1
        L8:
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = r1.adBaseInfo
            int r1 = r1.appScore
            float r1 = (float) r1
            r0 = 1092616192(0x41200000, float:10.0)
            float r1 = r1 / r0
            return r1
    }

    public static boolean at(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r0.adBaseInfo
            boolean r0 = r0.enableClientProofreadTime
            return r0
    }

    public static float au(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = r1.adBaseInfo
            int r1 = r1.appScore
            float r1 = (float) r1
            r0 = 1106247680(0x41f00000, float:30.0)
            int r0 = (r1 > r0 ? 1 : (r1 == r0 ? 0 : -1))
            if (r0 >= 0) goto Le
            r1 = 1077936128(0x40400000, float:3.0)
            goto L2b
        Le:
            r0 = 1108082688(0x420c0000, float:35.0)
            int r0 = (r1 > r0 ? 1 : (r1 == r0 ? 0 : -1))
            if (r0 >= 0) goto L17
            r1 = 1080033280(0x40600000, float:3.5)
            goto L2b
        L17:
            r0 = 1109393408(0x42200000, float:40.0)
            int r0 = (r1 > r0 ? 1 : (r1 == r0 ? 0 : -1))
            if (r0 >= 0) goto L20
            r1 = 1082130432(0x40800000, float:4.0)
            goto L2b
        L20:
            r0 = 1110704128(0x42340000, float:45.0)
            int r1 = (r1 > r0 ? 1 : (r1 == r0 ? 0 : -1))
            if (r1 >= 0) goto L29
            r1 = 1083179008(0x40900000, float:4.5)
            goto L2b
        L29:
            r1 = 1084227584(0x40a00000, float:5.0)
        L2b:
            return r1
    }

    public static java.lang.String av(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r1.adBaseInfo
            java.lang.String r0 = r0.adSourceDescription
            boolean r0 = com.kwad.sdk.utils.bc.isNullString(r0)
            if (r0 == 0) goto Ld
            java.lang.String r1 = "广告"
            return r1
        Ld:
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = r1.adBaseInfo
            java.lang.String r1 = r1.adSourceDescription
            return r1
    }

    public static java.lang.String aw(com.kwad.sdk.core.response.model.AdInfo r3) {
            java.lang.String r0 = "立即下载"
            if (r3 != 0) goto L5
            return r0
        L5:
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = r3.adBaseInfo
            java.lang.String r1 = r1.adActionDescription
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L19
            boolean r3 = ax(r3)
            if (r3 == 0) goto L16
            goto L18
        L16:
            java.lang.String r0 = "查看详情"
        L18:
            r1 = r0
        L19:
            return r1
    }

    public static boolean ax(com.kwad.sdk.core.response.model.AdInfo r1) {
            int r1 = aI(r1)
            r0 = 1
            if (r1 != r0) goto L8
            return r0
        L8:
            r1 = 0
            return r1
    }

    public static boolean ay(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r1.adStyleConfInfo
            boolean r0 = r0.rewardVideoInteractSwitch
            if (r0 == 0) goto L16
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r1.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoInteractInfo r1 = r1.rewardVideoInteractInfo
            java.lang.String r1 = r1.templateId
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L16
            r1 = 1
            return r1
        L16:
            r1 = 0
            return r1
    }

    public static int az(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$RewardVideoInteractInfo r0 = r0.rewardVideoInteractInfo
            int r0 = r0.intervalShow
            return r0
    }

    public static boolean b(com.kwad.sdk.core.response.model.AdInfo r2, boolean r3) {
            r0 = 1
            r1 = 0
            if (r3 == 0) goto Lc
            boolean r3 = ax(r2)
            if (r3 == 0) goto Lc
            r3 = r0
            goto Ld
        Lc:
            r3 = r1
        Ld:
            if (r3 != 0) goto L22
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r3 = r2.adBaseInfo
            com.kwad.sdk.core.response.model.ABParams r3 = r3.mABParams
            int r3 = r3.showVideoAtH5
            if (r3 == 0) goto L22
            java.lang.String r2 = aK(r2)
            boolean r2 = com.kwad.sdk.utils.bc.isNullString(r2)
            if (r2 != 0) goto L22
            return r0
        L22:
            return r1
    }

    private static boolean bA(com.kwad.sdk.core.response.model.AdInfo r2) {
            r0 = 0
            if (r2 == 0) goto L1c
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r2.adConversionInfo
            if (r1 == 0) goto L1c
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r2.adConversionInfo
            com.kwad.sdk.core.response.model.AdInfo$PlayableStyleInfo r1 = r1.playableStyleInfo
            if (r1 != 0) goto Le
            goto L1c
        Le:
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r2 = r2.adConversionInfo
            com.kwad.sdk.core.response.model.AdInfo$PlayableStyleInfo r2 = r2.playableStyleInfo
            int r2 = r2.playableOrientation
            r1 = 1
            if (r2 == 0) goto L1b
            if (r2 != r1) goto L1a
            goto L1b
        L1a:
            return r0
        L1b:
            return r1
        L1c:
            return r0
    }

    public static java.lang.String bB(com.kwad.sdk.core.response.model.AdInfo r1) {
            if (r1 == 0) goto Lc
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r1.adConversionInfo
            if (r0 != 0) goto L7
            goto Lc
        L7:
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r1.adConversionInfo
            java.lang.String r1 = r1.playableUrl
            return r1
        Lc:
            r1 = 0
            return r1
    }

    public static java.lang.String bC(com.kwad.sdk.core.response.model.AdInfo r1) {
            if (r1 == 0) goto Lc
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r1.adConversionInfo
            if (r0 != 0) goto L7
            goto Lc
        L7:
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r1.adConversionInfo
            java.lang.String r1 = r1.callbackUrl
            return r1
        Lc:
            r1 = 0
            return r1
    }

    public static java.lang.String bD(com.kwad.sdk.core.response.model.AdInfo r1) {
            if (r1 == 0) goto Lc
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r1.adConversionInfo
            if (r0 != 0) goto L7
            goto Lc
        L7:
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r1.adConversionInfo
            java.lang.String r1 = r1.callbackUrlInfo
            return r1
        Lc:
            r1 = 0
            return r1
    }

    public static java.lang.String bE(com.kwad.sdk.core.response.model.AdInfo r1) {
            if (r1 == 0) goto La
            java.lang.String r0 = r1.serverExt
            if (r0 != 0) goto L7
            goto La
        L7:
            java.lang.String r1 = r1.serverExt
            return r1
        La:
            r1 = 0
            return r1
    }

    public static boolean bF(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$FullScreenVideoInfo r0 = r0.fullScreenVideoInfo
            boolean r0 = r0.fullScreenEndCardSwitch
            return r0
    }

    public static boolean bG(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo r0 = r0.adRewardInfo
            boolean r0 = r0.rewardVideoEndCardSwitch
            return r0
    }

    public static boolean bH(com.kwad.sdk.core.response.model.AdInfo r2) {
            r0 = 0
            if (r2 == 0) goto L11
            com.kwad.sdk.core.response.model.AdInfo$AdFeedInfo r1 = r2.adFeedInfo
            if (r1 != 0) goto L8
            goto L11
        L8:
            com.kwad.sdk.core.response.model.AdInfo$AdFeedInfo r2 = r2.adFeedInfo
            int r2 = r2.videoSoundType
            r1 = 2
            if (r2 != r1) goto L11
            r2 = 1
            return r2
        L11:
            return r0
    }

    public static boolean bI(com.kwad.sdk.core.response.model.AdInfo r3) {
            r0 = 0
            if (r3 == 0) goto L18
            com.kwad.sdk.core.response.model.AdInfo$AdFeedInfo r1 = r3.adFeedInfo
            if (r1 != 0) goto L8
            goto L18
        L8:
            com.kwad.sdk.core.response.model.AdInfo$AdFeedInfo r1 = r3.adFeedInfo
            int r1 = r1.videoAutoPlayType
            r2 = 1
            if (r1 == r2) goto L17
            com.kwad.sdk.core.response.model.AdInfo$AdFeedInfo r3 = r3.adFeedInfo
            int r3 = r3.videoAutoPlayType
            if (r3 != 0) goto L16
            goto L17
        L16:
            return r0
        L17:
            return r2
        L18:
            return r0
    }

    public static boolean bJ(com.kwad.sdk.core.response.model.AdInfo r2) {
            r0 = 0
            if (r2 == 0) goto L11
            com.kwad.sdk.core.response.model.AdInfo$AdFeedInfo r1 = r2.adFeedInfo
            if (r1 != 0) goto L8
            goto L11
        L8:
            com.kwad.sdk.core.response.model.AdInfo$AdFeedInfo r2 = r2.adFeedInfo
            int r2 = r2.videoAutoPlayType
            r1 = 2
            if (r2 != r1) goto L11
            r2 = 1
            return r2
        L11:
            return r0
    }

    public static boolean bK(com.kwad.sdk.core.response.model.AdInfo r1) {
            java.lang.String r0 = aK(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L1a
            boolean r0 = ax(r1)
            if (r0 != 0) goto L1a
            com.kwad.sdk.core.response.model.AdStyleInfo r1 = r1.adStyleInfo
            com.kwad.sdk.core.response.model.AdStyleInfo$AdBrowseInfo r1 = r1.adBrowseInfo
            int r1 = r1.enableAdBrowse
            r0 = 1
            if (r1 != r0) goto L1a
            return r0
        L1a:
            r1 = 0
            return r1
    }

    public static int bL(com.kwad.sdk.core.response.model.AdInfo r0) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r0.adStyleConfInfo
            int r0 = r0.actionBarType
            return r0
    }

    public static int bM(com.kwad.sdk.core.response.model.AdInfo r0) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r0.adStyleConfInfo
            int r0 = r0.endCardType
            return r0
    }

    public static int bN(com.kwad.sdk.core.response.model.AdInfo r0) {
            if (r0 != 0) goto L4
            r0 = 0
            return r0
        L4:
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r0.adStyleConfInfo
            int r0 = r0.confirmCardType
            return r0
    }

    public static java.lang.String bO(com.kwad.sdk.core.response.model.AdInfo r2) {
            boolean r0 = ax(r2)
            if (r0 == 0) goto Lb
            java.lang.String r0 = ao(r2)
            goto Lf
        Lb:
            java.lang.String r0 = ap(r2)
        Lf:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L19
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r2 = r2.advertiserInfo
            java.lang.String r0 = r2.rawUserName
        L19:
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 == 0) goto L21
            java.lang.String r0 = "可爱的广告君"
        L21:
            return r0
    }

    public static java.lang.String bP(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r0 = r0.advertiserInfo
            java.lang.String r0 = r0.rawUserName
            return r0
    }

    public static java.lang.String bQ(com.kwad.sdk.core.response.model.AdInfo r2) {
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r2.adBaseInfo
            java.lang.String r0 = r0.appIconUrl
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L10
            boolean r1 = ax(r2)
            if (r1 != 0) goto L14
        L10:
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r2 = r2.advertiserInfo
            java.lang.String r0 = r2.portraitUrl
        L14:
            return r0
    }

    public static long bR(com.kwad.sdk.core.response.model.AdInfo r2) {
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r2 = r2.advertiserInfo
            long r0 = r2.userId
            return r0
    }

    public static java.lang.String bS(com.kwad.sdk.core.response.model.AdInfo r2) {
            java.lang.String r0 = "跳过"
            if (r2 == 0) goto L1d
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r1 = r2.adSplashInfo
            if (r1 == 0) goto L1d
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r1 = r2.adSplashInfo
            java.lang.String r1 = r1.skipTips
            if (r1 != 0) goto Lf
            goto L1d
        Lf:
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r1 = r2.adSplashInfo
            java.lang.String r1 = r1.skipTips
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1d
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r2 = r2.adSplashInfo
            java.lang.String r0 = r2.skipTips
        L1d:
            return r0
    }

    public static com.kwad.sdk.core.response.model.AdInfo.CutRuleInfo bT(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r0 = r0.adSplashInfo
            com.kwad.sdk.core.response.model.AdInfo$CutRuleInfo r0 = r0.cutRuleInfo
            return r0
    }

    public static int bU(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashEndCardTKInfo r0 = r0.splashEndCardTKInfo
            int r0 = r0.endCardShowSecond
            return r0
    }

    public static boolean bV(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashEndCardTKInfo r0 = r0.splashEndCardTKInfo
            boolean r0 = r0.endCardShowCountDown
            return r0
    }

    public static int bW(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r0 = r0.adInsertScreenInfo
            int r0 = r0.retainWindowBasedAdShowCount
            return r0
    }

    public static int bX(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r0 = r0.adInsertScreenInfo
            int r0 = r0.retainWindowDailyShowCount
            return r0
    }

    public static int bY(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r0 = r0.adInsertScreenInfo
            int r0 = r0.retainWindowStyle
            return r0
    }

    public static int bZ(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r0 = r0.adInsertScreenInfo
            int r0 = r0.guideShowStyle
            return r0
    }

    public static boolean ba(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r0.adConversionInfo
            boolean r0 = r0.needDeeplinkReplaceAdapta
            return r0
    }

    public static boolean bb(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r0.adConversionInfo
            boolean r0 = r0.isSupportKeepPlaying
            return r0
    }

    public static long bc(com.kwad.sdk.core.response.model.AdInfo r2) {
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r2 = r2.adConversionInfo
            long r0 = r2.keepPlayingBackOffTime
            return r0
    }

    public static java.util.List<java.lang.Integer> bd(com.kwad.sdk.core.response.model.AdInfo r4) {
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r4 = r4.adBaseInfo
            java.lang.String r4 = r4.videoPlayedNS
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto L2f
            java.lang.String r1 = ","
            java.lang.String[] r4 = r4.split(r1)     // Catch: java.lang.Exception -> L2b
            int r1 = r4.length     // Catch: java.lang.Exception -> L2b
            r2 = 0
        L17:
            if (r2 >= r1) goto L2f
            r3 = r4[r2]     // Catch: java.lang.Exception -> L2b
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Exception -> L2b
            if (r3 <= 0) goto L28
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L2b
            r0.add(r3)     // Catch: java.lang.Exception -> L2b
        L28:
            int r2 = r2 + 1
            goto L17
        L2b:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)
        L2f:
            boolean r4 = r0.isEmpty()
            if (r4 == 0) goto L3d
            r4 = 3
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r0.add(r4)
        L3d:
            return r0
    }

    private static int[] be(com.kwad.sdk.core.response.model.AdInfo r3) {
            r0 = 3
            int[] r1 = new int[r0]
            r1 = {x003e: FILL_ARRAY_DATA , data: [3, 3, 3} // fill-array
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r3 = r3.adBaseInfo
            com.kwad.sdk.core.response.model.ABParams r3 = r3.mABParams
            java.lang.String r3 = r3.drawActionBarTimes
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 == 0) goto L13
            return r1
        L13:
            java.lang.String r2 = ","
            java.lang.String[] r3 = r3.split(r2)     // Catch: java.lang.Exception -> L39
            int r2 = r3.length     // Catch: java.lang.Exception -> L39
            if (r2 >= r0) goto L1d
            return r1
        L1d:
            r0 = 0
            r2 = r3[r0]     // Catch: java.lang.Exception -> L39
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Exception -> L39
            r1[r0] = r2     // Catch: java.lang.Exception -> L39
            r0 = 1
            r2 = r3[r0]     // Catch: java.lang.Exception -> L39
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Exception -> L39
            r1[r0] = r2     // Catch: java.lang.Exception -> L39
            r0 = 2
            r3 = r3[r0]     // Catch: java.lang.Exception -> L39
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.Exception -> L39
            r1[r0] = r3     // Catch: java.lang.Exception -> L39
            goto L3d
        L39:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
        L3d:
            return r1
    }

    public static int bf(com.kwad.sdk.core.response.model.AdInfo r2) {
            int[] r2 = be(r2)
            r0 = 0
            r1 = r2[r0]
            if (r1 <= 0) goto Lc
            r2 = r2[r0]
            return r2
        Lc:
            r2 = 3
            return r2
    }

    public static int bg(com.kwad.sdk.core.response.model.AdInfo r3) {
            int[] r0 = be(r3)
            r1 = 1
            r2 = r0[r1]
            if (r2 <= 0) goto Lc
            r0 = r0[r1]
            goto Ld
        Lc:
            r0 = 3
        Ld:
            int r3 = bf(r3)
            int r0 = r0 + r3
            return r0
    }

    public static int bh(com.kwad.sdk.core.response.model.AdInfo r3) {
            int[] r0 = be(r3)
            r1 = 2
            r2 = r0[r1]
            if (r2 <= 0) goto Lc
            r0 = r0[r1]
            goto Ld
        Lc:
            r0 = 3
        Ld:
            int r3 = bg(r3)
            int r0 = r0 + r3
            return r0
    }

    public static com.kwad.sdk.core.response.model.b bi(com.kwad.sdk.core.response.model.AdInfo r9) {
            java.lang.String r0 = I(r9)
            int r1 = K(r9)
            int r2 = L(r9)
            boolean r3 = com.kwad.sdk.utils.bc.isNullString(r0)
            if (r3 != 0) goto L1e
            boolean r3 = com.kwad.sdk.utils.bc.fJ(r0)
            if (r3 != 0) goto L1e
            if (r1 == 0) goto L1e
            if (r2 == 0) goto L1e
            r9 = 0
            goto L2b
        L1e:
            java.lang.String r0 = P(r9)
            int r1 = R(r9)
            int r2 = S(r9)
            r9 = 1
        L2b:
            r8 = r9
            r4 = r0
            r5 = r1
            r6 = r2
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            java.lang.String r0 = "frameUrl="
            r9.<init>(r0)
            r9.append(r4)
            java.lang.String r0 = " useCover="
            r9.append(r0)
            r9.append(r8)
            java.lang.String r0 = " isAd=true"
            r9.append(r0)
            java.lang.String r9 = r9.toString()
            java.lang.String r0 = "AdInfoHelper"
            com.kwad.sdk.core.e.c.d(r0, r9)
            com.kwad.sdk.core.response.model.b r9 = new com.kwad.sdk.core.response.model.b
            r7 = 1
            r3 = r9
            r3.<init>(r4, r5, r6, r7, r8)
            return r9
    }

    public static java.lang.String bj(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = r1.downloadSafeInfo
            java.lang.String r1 = r1.webPageTipbarText
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Lb
            return r1
        Lb:
            java.lang.String r1 = "您访问的网站由第三方提供"
            return r1
    }

    public static boolean bk(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r0 = r0.downloadSafeInfo
            boolean r0 = r0.secWindowPopSwitch
            return r0
    }

    public static boolean bl(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r0 = r0.downloadSafeInfo
            boolean r0 = r0.secWindowPopNoWifiSwitch
            return r0
    }

    public static int bm(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r0 = r1.downloadSafeInfo
            com.kwad.sdk.core.response.model.AdInfo$ComplianceInfo r0 = r0.complianceInfo
            if (r0 != 0) goto L8
            r1 = -1
            return r1
        L8:
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = r1.downloadSafeInfo
            com.kwad.sdk.core.response.model.AdInfo$ComplianceInfo r1 = r1.complianceInfo
            int r1 = r1.materialJumpType
            return r1
    }

    public static boolean bn(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r0 = r0.downloadSafeInfo
            boolean r0 = r0.webPageTipbarSwitch
            return r0
    }

    public static int bo(com.kwad.sdk.core.response.model.AdInfo r4) {
            r0 = 0
            if (r4 == 0) goto L1c
            int r4 = r4.status
            r1 = 1
            if (r4 != 0) goto L9
            return r1
        L9:
            r2 = 2
            if (r1 == r4) goto L1b
            if (r2 == r4) goto L1b
            r1 = 3
            if (r1 == r4) goto L1b
            r3 = 4
            if (r3 != r4) goto L15
            goto L1b
        L15:
            r2 = 8
            if (r2 != r4) goto L1a
            return r1
        L1a:
            return r0
        L1b:
            return r2
        L1c:
            return r0
    }

    public static java.lang.String bp(com.kwad.sdk.core.response.model.AdInfo r0) {
            if (r0 == 0) goto L7
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r0.adBaseInfo
            java.lang.String r0 = r0.corporationName
            return r0
        L7:
            r0 = 0
            return r0
    }

    public static java.lang.String bq(com.kwad.sdk.core.response.model.AdInfo r0) {
            if (r0 == 0) goto L7
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r0 = r0.downloadSafeInfo
            java.lang.String r0 = r0.permissionInfo
            return r0
        L7:
            r0 = 0
            return r0
    }

    public static java.lang.String br(com.kwad.sdk.core.response.model.AdInfo r0) {
            if (r0 == 0) goto L7
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r0 = r0.downloadSafeInfo
            java.lang.String r0 = r0.appPermissionInfoUrl
            return r0
        L7:
            r0 = 0
            return r0
    }

    public static java.lang.String bs(com.kwad.sdk.core.response.model.AdInfo r0) {
            if (r0 == 0) goto L7
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r0 = r0.downloadSafeInfo
            java.lang.String r0 = r0.appPrivacyUrl
            return r0
        L7:
            r0 = 0
            return r0
    }

    public static java.lang.String bt(com.kwad.sdk.core.response.model.AdInfo r0) {
            if (r0 == 0) goto L7
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r0.adBaseInfo
            java.lang.String r0 = r0.appVersion
            return r0
        L7:
            r0 = 0
            return r0
    }

    public static long bu(com.kwad.sdk.core.response.model.AdInfo r2) {
            if (r2 == 0) goto L7
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r2 = r2.adBaseInfo
            long r0 = r2.packageSize
            return r0
        L7:
            r0 = 0
            return r0
    }

    public static boolean bv(com.kwad.sdk.core.response.model.AdInfo r3) {
            r0 = 0
            if (r3 == 0) goto L2f
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r3.adConversionInfo
            if (r1 != 0) goto L8
            goto L2f
        L8:
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r3.adConversionInfo
            java.lang.String r1 = r1.playableUrl
            r2 = 1
            if (r1 == 0) goto L25
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r3.adConversionInfo
            com.kwad.sdk.core.response.model.AdInfo$PlayableStyleInfo r1 = r1.playableStyleInfo
            if (r1 == 0) goto L25
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r3.adConversionInfo
            java.lang.String r1 = r1.playableUrl
            java.lang.String r1 = r1.trim()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L25
            r1 = r2
            goto L26
        L25:
            r1 = r0
        L26:
            boolean r3 = by(r3)
            if (r3 == 0) goto L2f
            if (r1 == 0) goto L2f
            return r2
        L2f:
            return r0
    }

    public static long bw(com.kwad.sdk.core.response.model.AdInfo r2) {
            if (r2 == 0) goto Ld
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r2.adConversionInfo
            if (r0 != 0) goto L7
            goto Ld
        L7:
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r2 = r2.adConversionInfo
            int r2 = r2.h5DeeplinkLimitedTimeMs
            long r0 = (long) r2
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public static long bx(com.kwad.sdk.core.response.model.AdInfo r2) {
            if (r2 == 0) goto Ld
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r2.adConversionInfo
            if (r0 != 0) goto L7
            goto Ld
        L7:
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r2 = r2.adConversionInfo
            int r2 = r2.playableDeeplinkLimitedTimeMs
            long r0 = (long) r2
            return r0
        Ld:
            r0 = 0
            return r0
    }

    public static boolean by(com.kwad.sdk.core.response.model.AdInfo r1) {
            boolean r0 = com.kwad.sdk.utils.ai.IO()
            if (r0 == 0) goto Lb
            boolean r1 = bA(r1)
            goto Lf
        Lb:
            boolean r1 = bz(r1)
        Lf:
            return r1
    }

    private static boolean bz(com.kwad.sdk.core.response.model.AdInfo r2) {
            r0 = 0
            if (r2 == 0) goto L1d
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r2.adConversionInfo
            if (r1 == 0) goto L1d
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r2.adConversionInfo
            com.kwad.sdk.core.response.model.AdInfo$PlayableStyleInfo r1 = r1.playableStyleInfo
            if (r1 != 0) goto Le
            goto L1d
        Le:
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r2 = r2.adConversionInfo
            com.kwad.sdk.core.response.model.AdInfo$PlayableStyleInfo r2 = r2.playableStyleInfo
            int r2 = r2.playableOrientation
            if (r2 == 0) goto L1b
            r1 = 2
            if (r2 != r1) goto L1a
            goto L1b
        L1a:
            return r0
        L1b:
            r2 = 1
            return r2
        L1d:
            return r0
    }

    public static boolean cA(com.kwad.sdk.core.response.model.AdInfo r1) {
            boolean r0 = ax(r1)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = r1.adBaseInfo
            boolean r1 = r1.extraClickReward
            return r1
    }

    public static boolean cB(com.kwad.sdk.core.response.model.AdInfo r4) {
            boolean r0 = cA(r4)
            if (r0 == 0) goto L14
            long r0 = Y(r4)
            long r2 = H(r4)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 >= 0) goto L14
            r4 = 1
            return r4
        L14:
            r4 = 0
            return r4
    }

    public static boolean cC(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r1.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$PushTKInfo r1 = r1.pushTKInfo
            java.lang.String r1 = r1.templateId
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L17
            java.lang.String r1 = "AdInfoHelper"
            java.lang.String r0 = "isPushAdEnable pushTK TemplateId is empty"
            com.kwad.sdk.core.e.c.d(r1, r0)
            r1 = 0
            return r1
        L17:
            r1 = 1
            return r1
    }

    public static boolean cD(com.kwad.sdk.core.response.model.AdInfo r9) {
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r9.adStyleConfInfo
            boolean r0 = r0.adPushSwitch
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            long r2 = com.kwad.sdk.utils.y.IA()
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r6 = 1
            if (r0 > 0) goto L15
        L13:
            r1 = r6
            goto L2d
        L15:
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r9 = r9.adStyleConfInfo
            int r9 = r9.adPushIntervalTime
            long r7 = (long) r9
            int r9 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r9 > 0) goto L20
            r7 = 900(0x384, double:4.447E-321)
        L20:
            r4 = 1000(0x3e8, double:4.94E-321)
            long r7 = r7 * r4
            long r4 = java.lang.System.currentTimeMillis()
            long r4 = r4 - r2
            int r9 = (r4 > r7 ? 1 : (r4 == r7 ? 0 : -1))
            if (r9 <= 0) goto L2d
            goto L13
        L2d:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            java.lang.String r0 = "isPushAdEnable intervalEnable: "
            r9.<init>(r0)
            r9.append(r1)
            java.lang.String r9 = r9.toString()
            java.lang.String r0 = "AdInfoHelper"
            com.kwad.sdk.core.e.c.d(r0, r9)
            return r1
    }

    public static int cE(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r0.adStyleConfInfo
            int r0 = r0.adPushShowAfterTime
            int r0 = r0 * 1000
            return r0
    }

    public static boolean cF(com.kwad.sdk.core.response.model.AdInfo r1) {
            boolean r0 = cw(r1)
            if (r0 == 0) goto L18
            java.lang.String r0 = com.kwad.sdk.core.response.b.b.dE(r1)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L18
            boolean r1 = cG(r1)
            if (r1 != 0) goto L18
            r1 = 1
            return r1
        L18:
            r1 = 0
            return r1
    }

    private static boolean cG(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r0.adStyleConfInfo
            boolean r0 = r0.useNativeForOuterLiveAd
            return r0
    }

    public static long cH(com.kwad.sdk.core.response.model.AdInfo r2) {
            com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo r2 = r2.adRewardInfo
            com.kwad.sdk.core.response.model.AdInfo$CallBackStrategyInfo r2 = r2.callBackStrategyInfo
            int r2 = r2.callBackAdvanceMs
            long r0 = (long) r2
            return r0
    }

    public static boolean cI(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo r0 = r0.adRewardInfo
            com.kwad.sdk.core.response.model.AdInfo$CallBackStrategyInfo r0 = r0.callBackStrategyInfo
            boolean r0 = r0.serverCheckSwitch
            return r0
    }

    public static boolean cJ(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo r0 = r0.adRewardInfo
            com.kwad.sdk.core.response.model.AdInfo$CallBackStrategyInfo r0 = r0.callBackStrategyInfo
            boolean r0 = r0.rewardAdvanceSwitch
            return r0
    }

    public static int ca(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r0 = r0.adInsertScreenInfo
            int r0 = r0.guideShowTime
            return r0
    }

    public static java.lang.String cb(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r0 = r0.adInsertScreenInfo
            java.lang.String r0 = r0.retainWindowText
            return r0
    }

    public static boolean cc(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r0 = r0.adInsertScreenInfo
            boolean r0 = r0.cycleAggregateSwitch
            return r0
    }

    public static int cd(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r0 = r0.adInsertScreenInfo
            int r0 = r0.cycleAggregateStyle
            return r0
    }

    public static int ce(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r0 = r0.adInsertScreenInfo
            int r0 = r0.cycleAggregateInterval
            return r0
    }

    public static int cf(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdInsertScreenInfo r0 = r0.adInsertScreenInfo
            int r0 = r0.cycleAggregateDailyShowCount
            return r0
    }

    public static boolean cg(com.kwad.sdk.core.response.model.AdInfo r2) {
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r0 = r2.adSplashInfo
            int r0 = r0.skipType
            r1 = 2
            if (r0 == r1) goto L11
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r2 = r2.adSplashInfo
            int r2 = r2.skipType
            r0 = 3
            if (r2 != r0) goto Lf
            goto L11
        Lf:
            r2 = 0
            return r2
        L11:
            r2 = 1
            return r2
    }

    public static boolean ch(com.kwad.sdk.core.response.model.AdInfo r2) {
            boolean r0 = ci(r2)
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r0 = r2.adSplashInfo
            int r0 = r0.skipType
            if (r0 == 0) goto L17
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r2 = r2.adSplashInfo
            int r2 = r2.skipType
            r0 = 2
            if (r2 != r0) goto L16
            goto L17
        L16:
            return r1
        L17:
            r2 = 1
            return r2
    }

    public static boolean ci(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r0 = r0.adSplashInfo
            int r0 = r0.skipSecond
            if (r0 < 0) goto L8
            r0 = 1
            return r0
        L8:
            r0 = 0
            return r0
    }

    public static boolean cj(com.kwad.sdk.core.response.model.AdInfo r2) {
            r0 = 0
            if (r2 == 0) goto L10
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r1 = r2.adSplashInfo
            if (r1 != 0) goto L8
            goto L10
        L8:
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r2 = r2.adSplashInfo
            int r2 = r2.countdownShow
            r1 = 1
            if (r2 != r1) goto L10
            return r1
        L10:
            return r0
    }

    public static boolean ck(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r0 = r0.adSplashInfo
            boolean r0 = r0.impressionStatisticalChangeSwitch
            return r0
    }

    public static int cl(com.kwad.sdk.core.response.model.AdInfo r4) {
            com.kwad.sdk.core.response.model.AdInfo$AdSplashInfo r4 = r4.adSplashInfo
            double r0 = r4.impressionLimitSize
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L10
            r2 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L15
        L10:
            r0 = 4604480258916220928(0x3fe6666660000000, double:0.699999988079071)
        L15:
            int r4 = (int) r0
            int r4 = r4 * 100
            return r4
    }

    public static boolean cm(com.kwad.sdk.core.response.model.AdInfo r1) {
            if (r1 == 0) goto Lc
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r0 = r1.downloadSafeInfo
            if (r0 != 0) goto L7
            goto Lc
        L7:
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = r1.downloadSafeInfo
            boolean r1 = r1.downloadPauseEnable
            return r1
        Lc:
            r1 = 0
            return r1
    }

    public static java.lang.String cn(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r0.adBaseInfo
            java.lang.String r0 = r0.sdkExtraData
            return r0
    }

    @java.lang.Deprecated
    public static boolean co(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r1 = r1.adStyleConfInfo
            int r1 = r1.innerAdType
            r0 = 3
            if (r1 != r0) goto L9
            r1 = 1
            return r1
        L9:
            r1 = 0
            return r1
    }

    public static boolean cp(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r0 = r0.advertiserInfo
            boolean r0 = r0.followed
            return r0
    }

    public static boolean cq(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r1 = r1.adStyleConfInfo
            int r1 = r1.innerAdType
            r0 = 1
            if (r1 != r0) goto L8
            return r0
        L8:
            r1 = 0
            return r1
    }

    public static java.lang.String cr(com.kwad.sdk.core.response.model.AdInfo r4) {
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r4 = r4.advertiserInfo
            int r4 = r4.fansCount
            r0 = 10000(0x2710, float:1.4013E-41)
            r1 = 200(0xc8, float:2.8E-43)
            if (r4 < r1) goto L11
            if (r4 >= r0) goto L11
            java.lang.String r4 = java.lang.String.valueOf(r4)
            goto L38
        L11:
            if (r4 < r0) goto L37
            double r0 = (double) r4
            r2 = 4666723172467343360(0x40c3880000000000, double:10000.0)
            double r0 = r0 / r2
            java.text.DecimalFormat r4 = new java.text.DecimalFormat
            java.lang.String r2 = "0.0"
            r4.<init>(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = r4.format(r0)
            r2.append(r4)
            java.lang.String r4 = "w"
            r2.append(r4)
            java.lang.String r4 = r2.toString()
            goto L38
        L37:
            r4 = 0
        L38:
            return r4
    }

    public static java.lang.String cs(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r0 = r0.advertiserInfo
            java.lang.String r0 = r0.brief
            return r0
    }

    public static java.lang.String ct(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdvertiserInfo r0 = r0.advertiserInfo
            java.lang.String r0 = r0.portraitUrl
            return r0
    }

    public static boolean cu(com.kwad.sdk.core.response.model.AdInfo r2) {
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r0 = r2.adStyleConfInfo
            int r0 = r0.innerAdType
            r1 = 4
            if (r0 == r1) goto L11
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r2 = r2.adStyleConfInfo
            int r2 = r2.innerAdType
            r0 = 5
            if (r2 != r0) goto Lf
            goto L11
        Lf:
            r2 = 0
            return r2
        L11:
            r2 = 1
            return r2
    }

    @java.lang.Deprecated
    public static java.lang.String cv(int r1) {
            java.lang.String r0 = "下载中  %s%%"
            java.lang.String r1 = l(r1, r0)
            return r1
    }

    public static boolean cv(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdStyleConfInfo r1 = r1.adStyleConfInfo
            int r1 = r1.innerAdType
            r0 = 7
            if (r1 != r0) goto L9
            r1 = 1
            return r1
        L9:
            r1 = 0
            return r1
    }

    public static java.lang.String cw(int r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "继续下载 "
            r0.<init>(r1)
            r0.append(r2)
            java.lang.String r2 = "%"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static boolean cw(com.kwad.sdk.core.response.model.AdInfo r6) {
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r6.adBaseInfo
            int r0 = r0.universeLiveType
            r1 = 1
            if (r0 != r1) goto L12
            long r2 = bR(r6)
            r4 = 0
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 == 0) goto L12
            return r1
        L12:
            r6 = 0
            return r6
    }

    public static java.lang.String cx(com.kwad.sdk.core.response.model.AdInfo r2) {
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            if (r0 != 0) goto Lc
            r0 = 0
            goto L10
        Lc:
            android.content.Context r0 = r0.getContext()
        L10:
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r2.adConversionInfo
            java.lang.String r1 = r1.deeplinkUrl
            boolean r2 = at(r2)
            java.lang.String r2 = com.kwad.sdk.utils.ac.c(r0, r1, r2)
            return r2
    }

    public static com.kwad.sdk.core.response.model.AdProductInfo cy(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdProductInfo r0 = r0.adProductInfo
            return r0
    }

    public static java.lang.String cz(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r0.adConversionInfo
            java.lang.String r0 = r0.marketUrl
            return r0
    }

    public static android.text.SpannableString e(com.kwad.sdk.core.response.model.AdInfo r3, int r4) {
            java.lang.String r3 = cr(r3)
            if (r3 == 0) goto L2d
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            r0[r1] = r3
            java.lang.String r1 = "已有%s粉丝关注了TA"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            int r1 = r0.indexOf(r3)
            if (r1 < 0) goto L2d
            android.text.SpannableString r2 = new android.text.SpannableString
            r2.<init>(r0)
            android.text.style.ForegroundColorSpan r0 = new android.text.style.ForegroundColorSpan
            r0.<init>(r4)
            int r3 = r3.length()
            int r3 = r3 + r1
            r4 = 18
            r2.setSpan(r0, r1, r3, r4)
            goto L2e
        L2d:
            r2 = 0
        L2e:
            return r2
    }

    public static java.lang.String l(int r2, java.lang.String r3) {
            if (r3 != 0) goto L4
            java.lang.String r3 = "下载中  %s%%"
        L4:
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r0[r1] = r2
            java.lang.String r2 = java.lang.String.format(r3, r0)
            return r2
    }
}
