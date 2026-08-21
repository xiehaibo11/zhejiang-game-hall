package com.kwad.components.core.e.d;

public final class d extends com.kwad.sdk.core.download.a.b {
    private static boolean Kd;
    private static final com.kwad.components.core.e.d.b Ke = null;



    static {
            com.kwad.components.core.e.d.d$2 r0 = new com.kwad.components.core.e.d.d$2
            r0.<init>()
            com.kwad.components.core.e.d.d.Ke = r0
            return
    }

    private static java.lang.String a(com.kwad.components.core.e.d.a.a r3, com.kwad.sdk.core.response.model.AdInfo r4, java.lang.String r5) {
            boolean r0 = com.kwad.sdk.core.response.b.a.ba(r4)
            if (r0 != 0) goto L7
            return r5
        L7:
            r0 = 0
            java.util.concurrent.Callable r1 = r3.nh()
            if (r1 == 0) goto L15
            java.lang.Object r1 = r1.call()     // Catch: java.lang.Exception -> L15
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L15
            r0 = r1
        L15:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L1f
            java.lang.String r0 = r3.ng()
        L1f:
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r1 = "__simpleItemId__"
            java.lang.String r2 = "__itemId__"
            if (r3 == 0) goto L3c
            boolean r3 = r5.contains(r2)
            if (r3 != 0) goto L37
            boolean r3 = r5.contains(r1)
            if (r3 == 0) goto L36
            goto L37
        L36:
            return r5
        L37:
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.cx(r4)
            return r3
        L3c:
            long r3 = com.kwad.components.core.e.b.a.ai(r0)     // Catch: java.lang.Throwable -> L45
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L45
            goto L46
        L45:
            r3 = r0
        L46:
            java.lang.String r4 = r5.replaceAll(r2, r0)
            java.lang.String r3 = r4.replaceAll(r1, r3)
            return r3
    }

    public static java.lang.String a(com.kwad.components.core.e.d.a.a r5, com.kwad.sdk.core.response.model.AdTemplate r6) {
            com.kwad.sdk.core.response.model.AdInfo r6 = com.kwad.sdk.core.response.b.d.cg(r6)
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r6.adConversionInfo
            java.util.List<com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo$DeeplinkItemInfo> r0 = r0.deeplinkConf
            java.util.Iterator r0 = r0.iterator()
        Lc:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L6a
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo$DeeplinkItemInfo r1 = (com.kwad.sdk.core.response.model.AdInfo.AdConversionInfo.DeeplinkItemInfo) r1
            java.util.List<java.lang.Integer> r2 = r1.areaConf
            int r3 = r5.cY()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            boolean r2 = r2.contains(r3)
            java.util.List<java.lang.Integer> r3 = r1.sceneConf
            int r4 = r5.nj()
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            boolean r3 = r3.contains(r4)
            if (r2 == 0) goto L38
            if (r3 != 0) goto L4c
        L38:
            if (r2 == 0) goto L42
            java.util.List<java.lang.Integer> r2 = r1.sceneConf
            int r2 = r2.size()
            if (r2 == 0) goto L4c
        L42:
            if (r3 == 0) goto Lc
            java.util.List<java.lang.Integer> r2 = r1.areaConf
            int r2 = r2.size()
            if (r2 != 0) goto Lc
        L4c:
            java.lang.String r2 = r1.url
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto Lc
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = r1.url
            r5.append(r0)
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r6 = r6.adConversionInfo
            java.lang.String r6 = r6.deeplinkExtra
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            return r5
        L6a:
            java.lang.String r5 = com.kwad.sdk.core.response.b.a.cx(r6)
            return r5
    }

    private static java.lang.String a(java.lang.String r1, int r2, java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return r1
        L7:
            if (r2 == 0) goto Ld
            r0 = 3
            if (r2 == r0) goto Ld
            goto L11
        Ld:
            java.lang.String r1 = g(r1, r3)
        L11:
            return r1
    }

    private static java.lang.String a(java.lang.String r3, android.content.Context r4, com.kwad.sdk.internal.api.SceneImpl r5) {
            java.lang.String r0 = ""
            if (r5 == 0) goto L27
            java.lang.String r1 = "com.smile.gifmaker"
            boolean r1 = com.kwad.sdk.utils.ak.ak(r4, r1)
            r2 = 0
            if (r1 == 0) goto Le
            goto L17
        Le:
            java.lang.String r1 = "com.kuaishou.nebula"
            boolean r4 = com.kwad.sdk.utils.ak.ak(r4, r1)
            if (r4 == 0) goto L17
            r2 = 3
        L17:
            java.lang.String r4 = r5.getBackUrl()
            boolean r5 = android.text.TextUtils.isEmpty(r4)
            if (r5 == 0) goto L22
            goto L23
        L22:
            r0 = r4
        L23:
            java.lang.String r0 = a(r3, r2, r0)
        L27:
            return r0
    }

    private static java.lang.String a(java.lang.String r2, com.kwad.components.core.e.d.a.a r3, com.kwad.sdk.core.response.model.AdInfo r4) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.getAdTemplate()
            boolean r1 = com.kwad.sdk.core.response.b.a.bb(r4)
            if (r1 == 0) goto Le
            java.lang.String r2 = b(r3, r4, r2)
        Le:
            boolean r1 = com.kwad.sdk.core.response.b.a.cw(r4)
            if (r1 == 0) goto L18
            java.lang.String r2 = a(r3, r4, r2)
        L18:
            boolean r1 = com.kwad.sdk.core.response.b.a.co(r4)
            if (r1 != 0) goto L24
            boolean r4 = com.kwad.sdk.core.response.b.a.cu(r4)
            if (r4 == 0) goto L32
        L24:
            com.kwad.sdk.internal.api.SceneImpl r4 = r0.mAdScene
            if (r4 == 0) goto L32
            android.content.Context r3 = r3.getContext()
            com.kwad.sdk.internal.api.SceneImpl r4 = r0.mAdScene
            java.lang.String r2 = a(r2, r3, r4)
        L32:
            return r2
    }

    private static org.json.JSONObject an(java.lang.String r2) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L10
            android.net.Uri r2 = android.net.Uri.parse(r2)     // Catch: java.lang.Throwable -> L10
            java.lang.String r1 = "universeClientInfo"
            java.lang.String r2 = r2.getQueryParameter(r1)     // Catch: java.lang.Throwable -> L10
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L10
            return r0
        L10:
            r2 = 0
            return r2
    }

    public static void au(boolean r0) {
            com.kwad.sdk.core.report.a.aqy = r0
            return
    }

    private static void av(boolean r0) {
            com.kwad.components.core.e.d.d.Kd = r0
            return
    }

    static void aw(boolean r0) {
            r0 = 0
            av(r0)
            return
    }

    public static int b(com.kwad.components.core.e.d.a.a r6, int r7) {
            android.content.Context r0 = r6.getContext()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r6.getAdTemplate()
            if (r1 == 0) goto L6f
            if (r0 != 0) goto Ld
            goto L6f
        Ld:
            com.kwad.components.core.e.d.b r2 = com.kwad.components.core.e.d.d.Ke
            r2.setAdTemplate(r1)
            com.kwad.sdk.core.c.b.AU()
            com.kwad.components.core.e.d.b r2 = com.kwad.components.core.e.d.d.Ke
            com.kwad.sdk.core.c.b.a(r2)
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r1)
            java.lang.String r3 = a(r6, r1)
            java.lang.String r2 = a(r3, r6, r2)
            org.json.JSONObject r3 = an(r2)
            com.kwad.sdk.core.report.a.aqx = r3
            int r0 = j(r0, r2)
            r2 = 1
            java.lang.String r3 = ""
            r4 = 0
            if (r0 != r2) goto L68
            com.kwad.sdk.core.response.model.AdTemplate r2 = r6.getAdTemplate()
            if (r2 == 0) goto L52
            com.kwad.sdk.core.response.model.AdTemplate r2 = r6.getAdTemplate()
            com.kwad.sdk.internal.api.SceneImpl r2 = r2.mAdScene
            if (r2 == 0) goto L52
            com.kwad.sdk.core.response.model.AdTemplate r2 = r6.getAdTemplate()
            com.kwad.sdk.internal.api.SceneImpl r2 = r2.mAdScene
            int r2 = r2.getAdStyle()
            com.kwai.adclient.kscommerciallogger.model.BusinessType r4 = com.kwad.sdk.core.report.KSLoggerReporter.cs(r2)
        L52:
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r2 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CONVERT_DPLINK
            java.lang.String r5 = "dplinkSuccess"
            com.kwad.sdk.core.report.KSLoggerReporter$b r2 = r2.buildMethodCheck(r4, r5)
            r2.report()
            com.kwad.sdk.core.report.z$b r6 = r6.getClientParams()
            com.kwad.sdk.core.report.a.a(r1, r3, r7, r6)
            e(r1, r7)
            goto L6e
        L68:
            r6 = -1
            if (r0 != r6) goto L6e
            com.kwad.sdk.core.report.a.b(r1, r3, r7, r4)
        L6e:
            return r0
        L6f:
            r6 = 0
            return r6
    }

    private static java.lang.String b(com.kwad.components.core.e.d.a.a r4, com.kwad.sdk.core.response.model.AdInfo r5, java.lang.String r6) {
            com.kwad.sdk.core.response.model.AdTemplate r4 = r4.getAdTemplate()
            long r0 = r4.getmCurPlayTime()
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 <= 0) goto L17
            long r4 = com.kwad.sdk.core.response.b.a.bc(r5)
            long r0 = r0 - r4
            long r0 = java.lang.Math.max(r0, r2)
        L17:
            android.net.Uri r4 = android.net.Uri.parse(r6)
            android.net.Uri$Builder r4 = r4.buildUpon()
            java.lang.String r5 = java.lang.String.valueOf(r0)
            java.lang.String r6 = "playStartTime"
            android.net.Uri$Builder r4 = r4.appendQueryParameter(r6, r5)
            java.lang.String r4 = r4.toString()
            return r4
    }

    private static void e(com.kwad.sdk.core.response.model.AdTemplate r4, int r5) {
            boolean r0 = nM()
            if (r0 == 0) goto L7
            return
        L7:
            r0 = 1
            av(r0)
            int r0 = com.kwad.sdk.core.config.d.zq()
            com.kwad.sdk.core.config.d.zr()
            int r0 = java.lang.Math.abs(r0)
            if (r0 <= 0) goto L25
            com.kwad.components.core.e.d.d$1 r1 = new com.kwad.components.core.e.d.d$1
            r1.<init>(r4, r5)
            r4 = 0
            int r0 = r0 * 1000
            long r2 = (long) r0
            com.kwad.sdk.utils.bj.a(r1, r4, r2)
            return
        L25:
            r4 = 0
            av(r4)
            return
    }

    private static java.lang.String g(java.lang.String r2, java.lang.String r3) {
            android.net.Uri r2 = android.net.Uri.parse(r2)
            android.net.Uri$Builder r2 = r2.buildUpon()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "liveunion_"
            r0.<init>(r1)
            com.kwad.sdk.KsAdSDKImpl r1 = com.kwad.sdk.KsAdSDKImpl.get()
            java.lang.String r1 = r1.getAppId()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "returnBack"
            android.net.Uri$Builder r2 = r2.appendQueryParameter(r1, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L2c
            java.lang.String r3 = "0"
        L2c:
            java.lang.String r0 = "back_url"
            android.net.Uri$Builder r2 = r2.appendQueryParameter(r0, r3)
            java.lang.String r2 = r2.toString()
            return r2
    }

    private static boolean nM() {
            boolean r0 = com.kwad.components.core.e.d.d.Kd
            return r0
    }

    static com.kwad.components.core.e.d.b nN() {
            com.kwad.components.core.e.d.b r0 = com.kwad.components.core.e.d.d.Ke
            return r0
    }
}
