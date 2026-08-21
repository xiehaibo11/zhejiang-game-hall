package com.kwad.sdk.core.response.b;

public final class b {
    private static java.util.Random auz;

    static {
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            com.kwad.sdk.core.response.b.b.auz = r0
            return
    }

    public static com.kwad.sdk.core.response.model.AdMatrixInfo aO(com.kwad.sdk.core.response.model.AdTemplate r1) {
            boolean r0 = com.kwad.sdk.core.response.b.d.bY(r1)
            if (r0 == 0) goto Ld
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r1.adMatrixInfo
            return r1
        Ld:
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = new com.kwad.sdk.core.response.model.AdMatrixInfo
            r1.<init>()
            return r1
    }

    private static com.kwad.sdk.core.response.model.AdMatrixInfo.AdDataV2 aP(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            return r0
    }

    public static com.kwad.sdk.core.response.model.FeedSlideConf aQ(com.kwad.sdk.core.response.model.AdTemplate r4) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r0 = bn(r4)
            java.lang.String r0 = r0.templateId
            com.kwad.sdk.core.response.model.AdMatrixInfo$TemplateData r4 = d(r4, r0)
            if (r4 == 0) goto Lf
            java.lang.String r4 = r4.data
            goto L11
        Lf:
            java.lang.String r4 = ""
        L11:
            r0 = 0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L4e
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L4e
            java.lang.String r4 = "slideInfo"
            org.json.JSONObject r4 = r1.optJSONObject(r4)     // Catch: java.lang.Throwable -> L4e
            if (r4 == 0) goto L4e
            java.lang.String r1 = "angle"
            org.json.JSONArray r4 = r4.optJSONArray(r1)     // Catch: java.lang.Throwable -> L4e
            if (r4 == 0) goto L4e
            int r1 = r4.length()     // Catch: java.lang.Throwable -> L4e
            r2 = 1
            if (r1 > r2) goto L2f
            goto L4e
        L2f:
            com.kwad.sdk.core.response.model.FeedSlideConf r1 = new com.kwad.sdk.core.response.model.FeedSlideConf     // Catch: java.lang.Throwable -> L4e
            r1.<init>()     // Catch: java.lang.Throwable -> L4e
            r3 = 0
            java.lang.Object r3 = r4.get(r3)     // Catch: java.lang.Throwable -> L4e
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> L4e
            int r3 = r3.intValue()     // Catch: java.lang.Throwable -> L4e
            r1.minRange = r3     // Catch: java.lang.Throwable -> L4e
            java.lang.Object r4 = r4.get(r2)     // Catch: java.lang.Throwable -> L4e
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Throwable -> L4e
            int r4 = r4.intValue()     // Catch: java.lang.Throwable -> L4e
            r1.maxRange = r4     // Catch: java.lang.Throwable -> L4e
            return r1
        L4e:
            return r0
    }

    public static boolean aR(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo r0 = aS(r1)
            java.lang.String r0 = r0.templateId
            boolean r1 = f(r1, r0)
            return r1
    }

    private static com.kwad.sdk.core.response.model.AdMatrixInfo.InterstitialCardInfo aS(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = aO(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo r0 = r0.interstitialCardInfo
            return r0
    }

    public static java.lang.String aT(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = aO(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r0.splashActionBarInfo
            java.lang.String r0 = r0.templateId
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r1 = b(r1, r0)
            if (r1 == 0) goto L13
            java.lang.String r1 = r1.templateUrl
            return r1
        L13:
            java.lang.String r1 = ""
            return r1
    }

    private static com.kwad.sdk.core.response.model.AdMatrixInfo.ActionBarInfoNew aU(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = aO(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$ActionBarInfoNew r0 = r0.actionBarInfo
            return r0
    }

    public static java.lang.String aV(com.kwad.sdk.core.response.model.AdTemplate r3) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r3)
            int r1 = com.kwad.sdk.core.response.b.d.ca(r3)
            r2 = 3
            if (r1 == r2) goto L11
            r2 = 2
            if (r1 != r2) goto Lf
            goto L11
        Lf:
            r1 = 0
            goto L12
        L11:
            r1 = 1
        L12:
            boolean r0 = com.kwad.sdk.core.response.b.a.cw(r0)
            java.lang.String r2 = ""
            if (r0 == 0) goto L1b
            return r2
        L1b:
            if (r1 == 0) goto L33
            boolean r0 = com.kwad.sdk.core.response.b.a.aN(r3)
            if (r0 == 0) goto L33
            com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo r0 = bL(r3)
            java.lang.String r0 = r0.templateId
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r3 = b(r3, r0)
            if (r3 == 0) goto L32
            java.lang.String r3 = r3.templateUrl
            return r3
        L32:
            return r2
        L33:
            com.kwad.sdk.core.response.model.AdMatrixInfo$ActionBarInfoNew r0 = aU(r3)
            java.lang.String r0 = r0.templateId
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r3 = b(r3, r0)
            if (r3 == 0) goto L42
            java.lang.String r3 = r3.templateUrl
            return r3
        L42:
            return r2
    }

    public static long aW(com.kwad.sdk.core.response.model.AdTemplate r2) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$ActionBarInfoNew r2 = aU(r2)
            long r0 = r2.maxTimeOut
            return r0
    }

    public static boolean aX(com.kwad.sdk.core.response.model.AdTemplate r0) {
            java.lang.String r0 = aV(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    private static com.kwad.sdk.core.response.model.AdMatrixInfo.AggregationCardInfo aY(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = aO(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$AggregationCardInfo r0 = r0.aggregationCardInfo
            return r0
    }

    public static java.lang.String aZ(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$AggregationCardInfo r0 = aY(r1)
            java.lang.String r0 = r0.templateId
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r1 = b(r1, r0)
            if (r1 == 0) goto Lf
            java.lang.String r1 = r1.templateUrl
            return r1
        Lf:
            java.lang.String r1 = ""
            return r1
    }

    private static com.kwad.sdk.core.response.model.AdMatrixInfo.MatrixTemplate b(com.kwad.sdk.core.response.model.AdTemplate r3, java.lang.String r4) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = aO(r3)
            com.kwad.sdk.core.response.model.AdMatrixInfo$Styles r0 = r0.styles
            java.util.List<com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate> r0 = r0.templateList
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r1 = (com.kwad.sdk.core.response.model.AdMatrixInfo.MatrixTemplate) r1
            java.lang.String r2 = r1.templateId
            boolean r2 = com.kwad.sdk.utils.bc.isEquals(r4, r2)
            if (r2 == 0) goto Lc
            return r1
        L21:
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r0 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.RESPONE_MONITOR
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r0.buildNormalApmReporter()
            java.lang.String r1 = "response_biz_error_tk"
            com.kwad.sdk.core.report.KSLoggerReporter$b r0 = r0.dx(r1)
            com.kwad.sdk.core.report.KSLoggerReporter$b r3 = r0.aK(r3)
            com.kwai.adclient.kscommerciallogger.model.BusinessType r0 = com.kwai.adclient.kscommerciallogger.model.BusinessType.TACHIKOMA
            com.kwad.sdk.core.report.KSLoggerReporter$b r3 = r3.a(r0)
            java.lang.String r0 = "TkTemplateDataLost"
            com.kwad.sdk.core.report.KSLoggerReporter$b r3 = r3.W(r0, r4)
            r3.report()
            r3 = 0
            return r3
    }

    public static boolean bA(com.kwad.sdk.core.response.model.AdTemplate r2) {
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            r0 = 0
            com.kwad.sdk.core.response.model.AdMatrixInfo r2 = r2.adMatrixInfo     // Catch: java.lang.Exception -> L12
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r2 = r2.adDataV2     // Catch: java.lang.Exception -> L12
            com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo r2 = r2.interstitialCardInfo     // Catch: java.lang.Exception -> L12
            int r2 = r2.renderType     // Catch: java.lang.Exception -> L12
            r1 = 1
            if (r2 != r1) goto L11
            return r1
        L11:
            return r0
        L12:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
            return r0
    }

    public static int bB(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo r0 = r0.interstitialCardInfo
            int r0 = r0.renderType
            return r0
    }

    public static java.lang.String bC(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo r0 = by(r1)
            java.lang.String r0 = r0.templateId
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r1 = b(r1, r0)
            if (r1 == 0) goto Lf
            java.lang.String r1 = r1.templateUrl
            return r1
        Lf:
            java.lang.String r1 = ""
            return r1
    }

    public static float bD(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo     // Catch: java.lang.Exception -> L11
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2     // Catch: java.lang.Exception -> L11
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r0 = r0.splashInfo     // Catch: java.lang.Exception -> L11
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo     // Catch: java.lang.Exception -> L11
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r0 = r0.shakeInfo     // Catch: java.lang.Exception -> L11
            int r0 = r0.acceleration     // Catch: java.lang.Exception -> L11
            goto L16
        L11:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            r0 = 7
        L16:
            float r0 = (float) r0
            return r0
    }

    public static com.kwad.sdk.core.response.model.AdMatrixInfo.RotateInfo bE(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo     // Catch: java.lang.Exception -> Lf
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2     // Catch: java.lang.Exception -> Lf
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r0 = r0.splashInfo     // Catch: java.lang.Exception -> Lf
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo     // Catch: java.lang.Exception -> Lf
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo r0 = r0.rotateInfo     // Catch: java.lang.Exception -> Lf
            goto L14
        Lf:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            r0 = 0
        L14:
            return r0
    }

    private static com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate bF(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = aO(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r0.complianceCardInfo
            return r0
    }

    public static java.lang.String bG(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = bF(r1)
            java.lang.String r0 = r0.templateId
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r1 = b(r1, r0)
            if (r1 == 0) goto Lf
            java.lang.String r1 = r1.templateUrl
            return r1
        Lf:
            java.lang.String r1 = ""
            return r1
    }

    public static boolean bH(com.kwad.sdk.core.response.model.AdTemplate r0) {
            java.lang.String r0 = bG(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    private static com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate bI(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = aO(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r0.downloadConfirmCardInfo
            return r0
    }

    public static java.lang.String bJ(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = bI(r1)
            java.lang.String r0 = r0.templateId
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r1 = b(r1, r0)
            if (r1 == 0) goto Lf
            java.lang.String r1 = r1.templateUrl
            return r1
        Lf:
            java.lang.String r1 = ""
            return r1
    }

    public static boolean bK(com.kwad.sdk.core.response.model.AdTemplate r0) {
            java.lang.String r0 = bJ(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public static com.kwad.sdk.core.response.model.AdMatrixInfo.MerchantLiveReservationInfo bL(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = aO(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$MerchantLiveReservationInfo r0 = r0.merchantLiveReservationInfo
            return r0
    }

    public static com.kwad.sdk.core.response.model.AdMatrixInfo.FullScreenInfo bM(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = aO(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$FullScreenInfo r0 = r0.fullScreenInfo
            return r0
    }

    public static boolean bN(com.kwad.sdk.core.response.model.AdTemplate r5) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r5)
            boolean r1 = g(r0)
            r2 = 0
            if (r1 == 0) goto Lc
            return r2
        Lc:
            boolean r1 = com.kwad.sdk.core.response.b.d.ct(r5)
            if (r1 == 0) goto L13
            return r2
        L13:
            com.kwad.sdk.core.response.model.AdMatrixInfo$ActionBarInfoNew r1 = aU(r5)
            int r1 = r1.cardType
            r3 = 4
            r4 = 1
            if (r1 != r3) goto L1f
            r1 = r4
            goto L20
        L1f:
            r1 = r2
        L20:
            if (r1 == 0) goto L23
            return r2
        L23:
            com.kwad.sdk.core.response.model.AdInfo r5 = com.kwad.sdk.core.response.b.d.cg(r5)
            com.kwad.sdk.core.response.model.AdStyleInfo r5 = r5.adStyleInfo2
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo r5 = r5.playDetailInfo
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailCommonInfo r5 = r5.detailCommonInfo
            int r5 = r5.rewardInteractionType
            if (r5 <= 0) goto L32
            return r2
        L32:
            com.kwad.sdk.core.response.model.AdMatrixInfo r5 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r5 = r5.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$FullScreenInfo r5 = r5.fullScreenInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r5 = r5.interactionInfo
            int r5 = r5.interactiveStyle
            r0 = 2
            if (r5 != r0) goto L40
            return r4
        L40:
            return r2
    }

    public static boolean bO(com.kwad.sdk.core.response.model.AdTemplate r5) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r5)
            boolean r1 = g(r0)
            r2 = 0
            if (r1 == 0) goto Lc
            return r2
        Lc:
            boolean r1 = com.kwad.sdk.core.response.b.d.ct(r5)
            if (r1 == 0) goto L13
            return r2
        L13:
            com.kwad.sdk.core.response.model.AdMatrixInfo$ActionBarInfoNew r1 = aU(r5)
            int r1 = r1.cardType
            r3 = 1
            r4 = 4
            if (r1 != r4) goto L1f
            r1 = r3
            goto L20
        L1f:
            r1 = r2
        L20:
            if (r1 == 0) goto L23
            return r2
        L23:
            com.kwad.sdk.core.response.model.AdInfo r5 = com.kwad.sdk.core.response.b.d.cg(r5)
            com.kwad.sdk.core.response.model.AdStyleInfo r5 = r5.adStyleInfo2
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo r5 = r5.playDetailInfo
            com.kwad.sdk.core.response.model.AdStyleInfo$PlayDetailInfo$DetailWebCardInfo r5 = r5.detailWebCardInfo
            int r5 = r5.cardType
            if (r5 != r4) goto L32
            return r2
        L32:
            com.kwad.sdk.core.response.model.AdMatrixInfo r5 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r5 = r5.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$NeoVideoInfo r5 = r5.neoVideoInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r5 = r5.interactionInfo
            int r5 = r5.interactiveStyle
            r0 = 2
            if (r5 != r0) goto L40
            return r3
        L40:
            return r2
    }

    public static com.kwad.sdk.core.response.model.AdMatrixInfo.PreLandingPageTKInfo bP(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$PreLandingPageTKInfo r0 = r0.preLandingPageTKInfo
            return r0
    }

    public static boolean bQ(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = aP(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$InstalledActivateInfo r0 = r0.installedActivateInfo
            boolean r0 = r0.cardSwitch
            return r0
    }

    public static long bR(com.kwad.sdk.core.response.model.AdTemplate r4) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r4 = aP(r4)
            com.kwad.sdk.core.response.model.AdMatrixInfo$InstalledActivateInfo r4 = r4.installedActivateInfo
            long r0 = r4.showTime
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto Lf
            return r0
        Lf:
            return r2
    }

    public static long ba(com.kwad.sdk.core.response.model.AdTemplate r2) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$AggregationCardInfo r0 = aY(r2)
            java.lang.String r0 = r0.templateId
            long r0 = e(r2, r0)
            return r0
    }

    public static long bb(com.kwad.sdk.core.response.model.AdTemplate r4) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$AggregationCardInfo r4 = aY(r4)
            int r4 = r4.changeTime
            long r0 = (long) r4
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            return r0
    }

    public static int bc(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$AggregationCardInfo r0 = aY(r0)
            int r0 = r0.maxTimesPerDay
            return r0
    }

    public static long bd(com.kwad.sdk.core.response.model.AdTemplate r2) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$AggregationCardInfo r2 = aY(r2)
            long r0 = r2.intervalTime
            return r0
    }

    public static boolean be(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r1)
            if (r0 != 0) goto L12
            boolean r1 = com.kwad.sdk.core.response.b.a.al(r1)
            if (r1 == 0) goto L12
            r1 = 1
            return r1
        L12:
            r1 = 0
            return r1
    }

    public static boolean bf(com.kwad.sdk.core.response.model.AdTemplate r6) {
            java.lang.String r0 = aZ(r6)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r0 == 0) goto Lc
            return r1
        Lc:
            long r2 = ba(r6)
            r4 = 0
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 > 0) goto L17
            return r1
        L17:
            boolean r6 = com.kwad.sdk.utils.ai.IO()
            return r6
    }

    private static com.kwad.sdk.core.response.model.AdMatrixInfo.BaseMatrixTemplate bg(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = aO(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r0.halfCardInfo
            return r0
    }

    public static java.lang.String bh(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = bg(r1)
            java.lang.String r0 = r0.templateId
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r1 = b(r1, r0)
            if (r1 == 0) goto Lf
            java.lang.String r1 = r1.templateUrl
            return r1
        Lf:
            java.lang.String r1 = ""
            return r1
    }

    private static com.kwad.sdk.core.response.model.AdMatrixInfo.EndCardInfo bi(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = aO(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$EndCardInfo r0 = r0.endCardInfo
            return r0
    }

    public static java.lang.String bj(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$EndCardInfo r0 = bi(r1)
            java.lang.String r0 = r0.templateId
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r1 = b(r1, r0)
            if (r1 == 0) goto Lf
            java.lang.String r1 = r1.templateUrl
            return r1
        Lf:
            java.lang.String r1 = ""
            return r1
    }

    public static boolean bk(com.kwad.sdk.core.response.model.AdTemplate r0) {
            java.lang.String r0 = bj(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    private static java.lang.String bl(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$ActivityMiddlePageInfo r0 = r0.activityMiddlePageInfo
            java.lang.String r0 = r0.templateId
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r1 = b(r1, r0)
            if (r1 == 0) goto L15
            java.lang.String r1 = r1.templateUrl
            return r1
        L15:
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String bm(com.kwad.sdk.core.response.model.AdTemplate r1) {
            boolean r0 = r1.mIsForceJumpLandingPage
            if (r0 != 0) goto L13
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r1)
            boolean r0 = cP(r0)
            if (r0 == 0) goto L13
            java.lang.String r1 = bl(r1)
            return r1
        L13:
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.aK(r1)
            return r1
    }

    private static com.kwad.sdk.core.response.model.AdMatrixInfo.FeedInfo bn(com.kwad.sdk.core.response.model.AdTemplate r1) {
            boolean r0 = bo(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = aO(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2
            if (r0 == 0) goto Lf
            com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r1 = r1.adUnionFeedLiveTemplateInfo
            return r1
        Lf:
            com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r1 = r1.feedInfo
            return r1
    }

    private static boolean bo(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.a.cw(r0)
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    private static com.kwad.sdk.core.response.model.AdMatrixInfo.FeedInfo bp(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = aO(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r0 = r0.adUnionFeedLiveMediaInfo
            return r0
    }

    public static java.lang.String bq(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r0 = bn(r1)
            java.lang.String r0 = r0.templateId
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r1 = b(r1, r0)
            if (r1 == 0) goto Lf
            java.lang.String r1 = r1.templateUrl
            return r1
        Lf:
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String br(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r0 = bp(r1)
            java.lang.String r0 = r0.templateId
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r1 = b(r1, r0)
            if (r1 == 0) goto Lf
            java.lang.String r1 = r1.templateUrl
            return r1
        Lf:
            java.lang.String r1 = ""
            return r1
    }

    public static boolean bs(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r1 = bn(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = r1.interactionInfo
            int r1 = r1.interactiveStyle
            r0 = 2
            if (r1 != r0) goto Ld
            r1 = 1
            return r1
        Ld:
            r1 = 0
            return r1
    }

    public static boolean bt(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r0 = bn(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r0 = r0.shakeInfo
            boolean r0 = r0.clickDisabled
            return r0
    }

    public static int bu(com.kwad.sdk.core.response.model.AdTemplate r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$FeedInfo r1 = bn(r1)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = r1.interactionInfo
            if (r1 == 0) goto L11
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r0 = r1.shakeInfo
            if (r0 == 0) goto L11
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r1 = r1.shakeInfo
            int r1 = r1.acceleration
            return r1
        L11:
            r1 = 0
            return r1
    }

    public static double bv(com.kwad.sdk.core.response.model.AdTemplate r2) {
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            com.kwad.sdk.core.response.model.AdStyleInfo r2 = r2.adStyleInfo
            com.kwad.sdk.core.response.model.AdStyleInfo$FeedAdInfo r2 = r2.feedAdInfo
            double r0 = r2.heightRatio
            return r0
    }

    public static boolean bw(com.kwad.sdk.core.response.model.AdTemplate r0) {
            java.lang.String r0 = bq(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    public static boolean bx(com.kwad.sdk.core.response.model.AdTemplate r0) {
            java.lang.String r0 = br(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    private static com.kwad.sdk.core.response.model.AdMatrixInfo.InterstitialCardInfo by(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = aO(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo r0 = r0.interstitialCardInfo
            return r0
    }

    public static float bz(com.kwad.sdk.core.response.model.AdTemplate r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo     // Catch: java.lang.Exception -> L11
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2     // Catch: java.lang.Exception -> L11
            com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo r0 = r0.interstitialCardInfo     // Catch: java.lang.Exception -> L11
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo     // Catch: java.lang.Exception -> L11
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r0 = r0.shakeInfo     // Catch: java.lang.Exception -> L11
            int r0 = r0.acceleration     // Catch: java.lang.Exception -> L11
            goto L16
        L11:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            r0 = 7
        L16:
            if (r0 <= 0) goto L1a
            float r0 = (float) r0
            return r0
        L1a:
            r0 = 1088421888(0x40e00000, float:7.0)
            return r0
    }

    public static com.kwad.sdk.core.response.model.AdMatrixInfo.MatrixTemplate c(com.kwad.sdk.core.response.model.AdTemplate r0, java.lang.String r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r0 = b(r0, r1)
            return r0
    }

    public static boolean cK(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashEndCardTKInfo r0 = r0.splashEndCardTKInfo
            java.lang.String r0 = r0.templateId
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10
            r0 = 1
            return r0
        L10:
            r0 = 0
            return r0
    }

    public static boolean cL(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashEndCardTKInfo r0 = r0.splashEndCardTKInfo
            boolean r0 = r0.endCardFullScreenClick
            return r0
    }

    public static boolean cM(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$TopFloorTKInfo r0 = r0.topFloorTKInfo
            java.lang.String r0 = r0.templateId
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10
            r0 = 1
            return r0
        L10:
            r0 = 0
            return r0
    }

    public static boolean cN(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashPlayCardTKInfo r0 = r0.splashPlayCardTKInfo
            java.lang.String r0 = r0.templateId
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10
            r0 = 1
            return r0
        L10:
            r0 = 0
            return r0
    }

    public static boolean cO(com.kwad.sdk.core.response.model.AdInfo r1) {
            boolean r0 = cP(r1)
            if (r0 == 0) goto Lf
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r1.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$ActivityMiddlePageInfo r1 = r1.activityMiddlePageInfo
            boolean r1 = r1.showHeaderBar
            return r1
        Lf:
            r1 = 1
            return r1
    }

    public static boolean cP(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$ActivityMiddlePageInfo r0 = r0.activityMiddlePageInfo
            java.lang.String r0 = r0.templateId
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10
            r0 = 1
            return r0
        L10:
            r0 = 0
            return r0
    }

    public static com.kwad.sdk.core.response.model.AdMatrixInfo.DownloadTexts cQ(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r0 = r0.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo r0 = r0.rotateInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r0 = r0.downloadTexts
            return r0
    }

    public static com.kwad.sdk.core.response.model.AdMatrixInfo.DownloadTexts cR(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r0 = r0.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashSlideInfo r0 = r0.slideInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r0 = r0.downloadTexts
            return r0
    }

    public static java.lang.String cS(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r0 = r0.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo r0 = r0.rotateInfo
            java.lang.String r0 = r0.title
            return r0
    }

    public static long cT(com.kwad.sdk.core.response.model.AdInfo r2) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r2 = r2.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r2 = r2.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r2 = r2.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r2 = r2.interactionInfo
            long r0 = r2.tkDefaultTimeout
            return r0
    }

    public static java.lang.String cU(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r0 = r0.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$RotateInfo r0 = r0.rotateInfo
            java.lang.String r0 = r0.subTitle
            return r0
    }

    public static com.kwad.sdk.core.response.model.AdMatrixInfo.DownloadTexts cV(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r0 = r0.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashActionBarInfo r0 = r0.splashActionBarInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r0 = r0.downloadTexts
            return r0
    }

    public static java.lang.String cW(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r0 = r0.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashActionBarInfo r0 = r0.splashActionBarInfo
            java.lang.String r0 = r0.title
            return r0
    }

    public static boolean cX(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r1.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo r1 = r1.interstitialCardInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = r1.interactionInfo
            int r1 = r1.interactiveStyle
            r0 = 2
            if (r1 != r0) goto Lf
            r1 = 1
            return r1
        Lf:
            r1 = 0
            return r1
    }

    public static java.lang.String cY(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo r0 = r0.interstitialCardInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$CycleAggregateInfo r0 = r0.cycleAggregateInfo
            java.lang.String r0 = r0.cutIconUrl
            return r0
    }

    public static java.lang.String cZ(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo r0 = r0.interstitialCardInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$CycleAggregateInfo r0 = r0.cycleAggregateInfo
            java.lang.String r0 = r0.refreshIconUrl
            return r0
    }

    private static com.kwad.sdk.core.response.model.AdMatrixInfo.TemplateData d(com.kwad.sdk.core.response.model.AdTemplate r2, java.lang.String r3) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r2 = aO(r2)
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r2 = r2.adDataV2
            java.util.List<com.kwad.sdk.core.response.model.AdMatrixInfo$TemplateData> r2 = r2.templateDataList
            java.util.Iterator r2 = r2.iterator()
        Lc:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L21
            java.lang.Object r0 = r2.next()
            com.kwad.sdk.core.response.model.AdMatrixInfo$TemplateData r0 = (com.kwad.sdk.core.response.model.AdMatrixInfo.TemplateData) r0
            java.lang.String r1 = r0.templateId
            boolean r1 = com.kwad.sdk.utils.bc.isEquals(r3, r1)
            if (r1 == 0) goto Lc
            return r0
        L21:
            r2 = 0
            return r2
    }

    public static boolean dA(com.kwad.sdk.core.response.model.AdInfo r3) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r3 = r3.adMatrixInfo
            java.util.List<com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTag> r3 = r3.tag
            java.util.Iterator r3 = r3.iterator()
        L8:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L21
            java.lang.Object r0 = r3.next()
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTag r0 = (com.kwad.sdk.core.response.model.AdMatrixInfo.MatrixTag) r0
            java.lang.String r1 = r0.type
            java.lang.String r2 = "playEndClose"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L8
            boolean r3 = r0.isHide
            return r3
        L21:
            r3 = 0
            return r3
    }

    public static boolean dB(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r1.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r1 = r1.neoTKInfo
            int r1 = r1.renderType
            r0 = 1
            if (r1 != r0) goto Lc
            return r0
        Lc:
            r1 = 0
            return r1
    }

    public static boolean dC(com.kwad.sdk.core.response.model.AdInfo r2) {
            boolean r0 = com.kwad.sdk.core.response.b.a.bv(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            com.kwad.sdk.core.response.model.AdMatrixInfo r2 = r2.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r2 = r2.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$PreLandingPageTKInfo r2 = r2.preLandingPageTKInfo
            java.lang.String r2 = r2.templateId
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L18
            r2 = 1
            return r2
        L18:
            return r1
    }

    public static int dD(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$PreLandingPageTKInfo r0 = r0.preLandingPageTKInfo
            int r0 = r0.preLandingPageShowType
            return r0
    }

    public static boolean dD(java.lang.String r1) {
            java.lang.Class<com.kwad.sdk.service.a.f> r0 = com.kwad.sdk.service.a.f.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)     // Catch: java.lang.Exception -> Ld
            com.kwad.sdk.service.a.f r0 = (com.kwad.sdk.service.a.f) r0     // Catch: java.lang.Exception -> Ld
            boolean r1 = r0.bS(r1)     // Catch: java.lang.Exception -> Ld
            goto Le
        Ld:
            r1 = 0
        Le:
            return r1
    }

    public static java.lang.String dE(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r0 = r0.videoLiveTKInfo
            java.lang.String r0 = r0.templateId
            return r0
    }

    public static boolean dF(com.kwad.sdk.core.response.model.AdInfo r1) {
            boolean r0 = com.kwad.sdk.core.response.b.a.aV(r1)
            if (r0 == 0) goto L16
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r1.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$BaseMatrixTemplate r1 = r1.videoImageTKInfo
            java.lang.String r1 = r1.templateId
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L16
            r1 = 1
            return r1
        L16:
            r1 = 0
            return r1
    }

    public static java.lang.String da(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$InterstitialCardInfo r0 = r0.interstitialCardInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$CycleAggregateInfo r0 = r0.cycleAggregateInfo
            java.lang.String r0 = r0.convertIconUrl
            return r0
    }

    public static int db(com.kwad.sdk.core.response.model.AdInfo r2) {
            r0 = 1
            com.kwad.sdk.core.response.model.AdMatrixInfo r2 = r2.adMatrixInfo     // Catch: java.lang.Exception -> L13
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r2 = r2.adDataV2     // Catch: java.lang.Exception -> L13
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r2 = r2.splashInfo     // Catch: java.lang.Exception -> L13
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r2 = r2.interactionInfo     // Catch: java.lang.Exception -> L13
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r2 = r2.shakeInfo     // Catch: java.lang.Exception -> L13
            int r2 = r2.componentIndex     // Catch: java.lang.Exception -> L13
            r1 = 2
            if (r2 == r1) goto L11
            goto L12
        L11:
            r0 = r2
        L12:
            return r0
        L13:
            r2 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r2)
            return r0
    }

    public static boolean dc(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r1.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r0 = r0.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo
            boolean r0 = r0.isMediaDisable
            if (r0 == 0) goto L1b
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r1.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r1 = r1.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = r1.interactionInfo
            int r1 = r1.interactiveStyle
            r0 = 4
            if (r1 != r0) goto L1b
            r1 = 1
            return r1
        L1b:
            r1 = 0
            return r1
    }

    public static boolean dd(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r1.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r1 = r1.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = r1.interactionInfo
            int r1 = r1.interactiveStyle
            r0 = 2
            if (r1 != r0) goto Lf
            r1 = 1
            return r1
        Lf:
            r1 = 0
            return r1
    }

    public static int de(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r0 = r0.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo
            int r0 = r0.interactiveStyle
            return r0
    }

    public static int df(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r0 = r0.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo
            int r0 = r0.interactivityDefaultStyle
            return r0
    }

    public static boolean dg(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r1.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r1 = r1.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = r1.interactionInfo
            int r1 = r1.interactivityDefaultStyle
            r0 = 2
            if (r1 != r0) goto Lf
            r1 = 1
            return r1
        Lf:
            r1 = 0
            return r1
    }

    public static boolean dh(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r1.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r1 = r1.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = r1.interactionInfo
            int r1 = r1.interactiveStyle
            r0 = 1
            if (r1 != r0) goto Le
            return r0
        Le:
            r1 = 0
            return r1
    }

    public static boolean di(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r1.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r1 = r1.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = r1.interactionInfo
            int r1 = r1.interactivityDefaultStyle
            r0 = 1
            if (r1 != r0) goto Le
            return r0
        Le:
            r1 = 0
            return r1
    }

    public static boolean dj(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r1.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r1 = r1.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = r1.interactionInfo
            int r1 = r1.interactiveStyle
            r0 = 3
            if (r1 != r0) goto Lf
            r1 = 1
            return r1
        Lf:
            r1 = 0
            return r1
    }

    public static boolean dk(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r1.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r1 = r1.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = r1.interactionInfo
            int r1 = r1.interactiveStyle
            r0 = 10
            if (r1 != r0) goto L10
            r1 = 1
            return r1
        L10:
            r1 = 0
            return r1
    }

    public static boolean dl(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r1.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r1 = r1.splashInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = r1.interactionInfo
            int r1 = r1.interactivityDefaultStyle
            r0 = 3
            if (r1 != r0) goto Lf
            r1 = 1
            return r1
        Lf:
            r1 = 0
            return r1
    }

    public static boolean dm(com.kwad.sdk.core.response.model.AdInfo r3) {
            r0 = 0
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r3.adMatrixInfo     // Catch: java.lang.Exception -> L20
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2     // Catch: java.lang.Exception -> L20
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r1 = r1.splashInfo     // Catch: java.lang.Exception -> L20
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = r1.interactionInfo     // Catch: java.lang.Exception -> L20
            int r1 = r1.interactiveStyle     // Catch: java.lang.Exception -> L20
            r2 = 4
            if (r1 == r2) goto L1e
            com.kwad.sdk.core.response.model.AdMatrixInfo r3 = r3.adMatrixInfo     // Catch: java.lang.Exception -> L20
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r3 = r3.adDataV2     // Catch: java.lang.Exception -> L20
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r3 = r3.splashInfo     // Catch: java.lang.Exception -> L20
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r3 = r3.interactionInfo     // Catch: java.lang.Exception -> L20
            int r3 = r3.interactiveStyle     // Catch: java.lang.Exception -> L20
            r1 = 9
            if (r3 != r1) goto L1d
            goto L1e
        L1d:
            return r0
        L1e:
            r3 = 1
            return r3
        L20:
            return r0
    }

    public static boolean dn(com.kwad.sdk.core.response.model.AdInfo r1) {
            r0 = 0
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r1.adMatrixInfo     // Catch: java.lang.Exception -> Lf
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2     // Catch: java.lang.Exception -> Lf
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r1 = r1.splashInfo     // Catch: java.lang.Exception -> Lf
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = r1.interactionInfo     // Catch: java.lang.Exception -> Lf
            int r1 = r1.interactiveStyle     // Catch: java.lang.Exception -> Lf
            if (r1 != 0) goto Lf
            r1 = 1
            return r1
        Lf:
            return r0
    }

    public static boolean do(com.kwad.sdk.core.response.model.AdInfo r2) {
            r0 = 0
            com.kwad.sdk.core.response.model.AdMatrixInfo r2 = r2.adMatrixInfo     // Catch: java.lang.Exception -> L10
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r2 = r2.adDataV2     // Catch: java.lang.Exception -> L10
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r2 = r2.splashInfo     // Catch: java.lang.Exception -> L10
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r2 = r2.interactionInfo     // Catch: java.lang.Exception -> L10
            int r2 = r2.interactiveStyle     // Catch: java.lang.Exception -> L10
            r1 = 4
            if (r2 != r1) goto L10
            r2 = 1
            return r2
        L10:
            return r0
    }

    public static boolean dp(com.kwad.sdk.core.response.model.AdInfo r1) {
            r0 = 0
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r1.adMatrixInfo     // Catch: java.lang.Exception -> L11
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2     // Catch: java.lang.Exception -> L11
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r1 = r1.splashInfo     // Catch: java.lang.Exception -> L11
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = r1.interactionInfo     // Catch: java.lang.Exception -> L11
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r1 = r1.shakeInfo     // Catch: java.lang.Exception -> L11
            boolean r1 = r1.clickDisabled     // Catch: java.lang.Exception -> L11
            if (r1 != 0) goto L11
            r1 = 1
            return r1
        L11:
            return r0
    }

    public static long dq(com.kwad.sdk.core.response.model.AdInfo r6) {
            r0 = 1500(0x5dc, double:7.41E-321)
            com.kwad.sdk.core.response.model.AdMatrixInfo r6 = r6.adMatrixInfo     // Catch: java.lang.Exception -> L14
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r6 = r6.adDataV2     // Catch: java.lang.Exception -> L14
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashInfo r6 = r6.splashInfo     // Catch: java.lang.Exception -> L14
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r6 = r6.interactionInfo     // Catch: java.lang.Exception -> L14
            long r2 = r6.switchDefaultTime     // Catch: java.lang.Exception -> L14
            r4 = 0
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 > 0) goto L13
            goto L14
        L13:
            r0 = r2
        L14:
            return r0
    }

    public static boolean dr(com.kwad.sdk.core.response.model.AdInfo r1) {
            r0 = 0
            com.kwad.sdk.core.response.model.AdMatrixInfo r1 = r1.adMatrixInfo     // Catch: java.lang.Exception -> L11
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r1 = r1.adDataV2     // Catch: java.lang.Exception -> L11
            com.kwad.sdk.core.response.model.AdMatrixInfo$NeoVideoInfo r1 = r1.neoVideoInfo     // Catch: java.lang.Exception -> L11
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r1 = r1.interactionInfo     // Catch: java.lang.Exception -> L11
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r1 = r1.shakeInfo     // Catch: java.lang.Exception -> L11
            boolean r1 = r1.clickDisabled     // Catch: java.lang.Exception -> L11
            if (r1 != 0) goto L11
            r1 = 1
            return r1
        L11:
            return r0
    }

    public static float ds(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo     // Catch: java.lang.Exception -> Ld
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2     // Catch: java.lang.Exception -> Ld
            com.kwad.sdk.core.response.model.AdMatrixInfo$FullScreenInfo r0 = r0.fullScreenInfo     // Catch: java.lang.Exception -> Ld
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo     // Catch: java.lang.Exception -> Ld
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r0 = r0.shakeInfo     // Catch: java.lang.Exception -> Ld
            int r0 = r0.acceleration     // Catch: java.lang.Exception -> Ld
            goto L12
        Ld:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            r0 = 7
        L12:
            float r0 = (float) r0
            return r0
    }

    public static float dt(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo     // Catch: java.lang.Exception -> Ld
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2     // Catch: java.lang.Exception -> Ld
            com.kwad.sdk.core.response.model.AdMatrixInfo$NeoVideoInfo r0 = r0.neoVideoInfo     // Catch: java.lang.Exception -> Ld
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo     // Catch: java.lang.Exception -> Ld
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r0 = r0.shakeInfo     // Catch: java.lang.Exception -> Ld
            int r0 = r0.acceleration     // Catch: java.lang.Exception -> Ld
            goto L12
        Ld:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            r0 = 7
        L12:
            float r0 = (float) r0
            return r0
    }

    public static java.lang.String du(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$FullScreenInfo r0 = r0.fullScreenInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r0 = r0.shakeInfo
            java.lang.String r0 = r0.title
            return r0
    }

    public static java.lang.String dv(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$NeoVideoInfo r0 = r0.neoVideoInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r0 = r0.shakeInfo
            java.lang.String r0 = r0.title
            return r0
    }

    public static java.lang.String dw(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$FullScreenInfo r0 = r0.fullScreenInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r0 = r0.shakeInfo
            java.lang.String r0 = r0.subtitle
            return r0
    }

    public static java.lang.String dx(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$NeoVideoInfo r0 = r0.neoVideoInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$ShakeInfo r0 = r0.shakeInfo
            java.lang.String r0 = r0.subtitle
            return r0
    }

    public static com.kwad.sdk.core.response.model.AdMatrixInfo.DownloadTexts dy(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$FullScreenInfo r0 = r0.fullScreenInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashActionBarInfo r0 = r0.splashActionBarInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r0 = r0.downloadTexts
            return r0
    }

    public static com.kwad.sdk.core.response.model.AdMatrixInfo.DownloadTexts dz(com.kwad.sdk.core.response.model.AdInfo r0) {
            com.kwad.sdk.core.response.model.AdMatrixInfo r0 = r0.adMatrixInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdDataV2 r0 = r0.adDataV2
            com.kwad.sdk.core.response.model.AdMatrixInfo$NeoVideoInfo r0 = r0.neoVideoInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$AdInteractionInfo r0 = r0.interactionInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$SplashActionBarInfo r0 = r0.splashActionBarInfo
            com.kwad.sdk.core.response.model.AdMatrixInfo$DownloadTexts r0 = r0.downloadTexts
            return r0
    }

    private static long e(com.kwad.sdk.core.response.model.AdTemplate r0, java.lang.String r1) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$TemplateData r0 = d(r0, r1)
            if (r0 == 0) goto L9
            long r0 = r0.templateDelayTime
            return r0
        L9:
            r0 = 0
            return r0
    }

    private static boolean f(com.kwad.sdk.core.response.model.AdTemplate r1, java.lang.String r2) {
            com.kwad.sdk.core.response.model.AdMatrixInfo$TemplateData r1 = d(r1, r2)
            if (r1 == 0) goto L9
            java.lang.String r1 = r1.data
            goto Lb
        L9:
            java.lang.String r1 = ""
        Lb:
            r2 = 0
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L27
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L27
            java.lang.String r1 = "autoCallAppInfo"
            org.json.JSONObject r1 = r0.optJSONObject(r1)     // Catch: java.lang.Throwable -> L27
            if (r1 == 0) goto L27
            java.lang.String r0 = "adTitle"
            java.lang.String r1 = r1.optString(r0)     // Catch: java.lang.Throwable -> L27
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L27
            if (r1 != 0) goto L27
            r1 = 1
            r2 = r1
        L27:
            return r2
    }

    public static boolean g(com.kwad.sdk.core.response.model.AdInfo r1) {
            com.kwad.sdk.core.response.model.AdInfo$AdRewardInfo r0 = r1.adRewardInfo
            boolean r0 = r0.recommendAggregateSwitch
            if (r0 == 0) goto L14
            boolean r0 = com.kwad.sdk.core.response.b.a.cA(r1)
            if (r0 != 0) goto L14
            boolean r1 = com.kwad.sdk.core.response.b.a.bv(r1)
            if (r1 != 0) goto L14
            r1 = 1
            return r1
        L14:
            r1 = 0
            return r1
    }
}
