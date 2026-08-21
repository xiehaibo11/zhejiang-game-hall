package com.kwad.components.core.webview.jshandler;

public final class aj implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.api.KsAppDownloadListener Tn;
    private com.kwad.sdk.core.webview.c.c Tv;
    private final com.kwad.sdk.core.webview.b cE;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;


    public static final class a extends com.kwad.sdk.core.response.a.a {
        public double Vf;
        public int status;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public static final class b extends com.kwad.sdk.core.response.a.a {
        public java.lang.String UA;
        public java.lang.String UC;
        public long Vm;
        public java.lang.String appName;
        public java.lang.String icon;
        public java.lang.String qm;
        public java.lang.String url;
        public java.lang.String version;
        public int versionCode;

        public b() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public aj(com.kwad.sdk.core.webview.b r3) {
            r2 = this;
            r2.<init>()
            r2.cE = r3
            com.kwad.sdk.core.response.model.AdTemplate r3 = new com.kwad.sdk.core.response.model.AdTemplate     // Catch: java.lang.Exception -> L2f
            r3.<init>()     // Catch: java.lang.Exception -> L2f
            r2.mAdTemplate = r3     // Catch: java.lang.Exception -> L2f
            com.kwad.sdk.core.webview.b r3 = r2.cE     // Catch: java.lang.Exception -> L2f
            com.kwad.sdk.core.response.model.AdTemplate r3 = r3.getAdTemplate()     // Catch: java.lang.Exception -> L2f
            if (r3 == 0) goto L2e
            java.lang.String r0 = r3.mOriginJString     // Catch: java.lang.Exception -> L2f
            if (r0 == 0) goto L25
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate     // Catch: java.lang.Exception -> L2f
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2f
            java.lang.String r3 = r3.mOriginJString     // Catch: java.lang.Exception -> L2f
            r1.<init>(r3)     // Catch: java.lang.Exception -> L2f
            r0.parseJson(r1)     // Catch: java.lang.Exception -> L2f
            goto L33
        L25:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate     // Catch: java.lang.Exception -> L2f
            org.json.JSONObject r3 = r3.toJson()     // Catch: java.lang.Exception -> L2f
            r0.parseJson(r3)     // Catch: java.lang.Exception -> L2f
        L2e:
            return
        L2f:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
        L33:
            return
    }

    private void a(int r4, float r5) {
            r3 = this;
            com.kwad.sdk.core.webview.c.c r0 = r3.Tv
            if (r0 == 0) goto L13
            com.kwad.components.core.webview.jshandler.aj$a r0 = new com.kwad.components.core.webview.jshandler.aj$a
            r0.<init>()
            double r1 = (double) r5
            r0.Vf = r1
            r0.status = r4
            com.kwad.sdk.core.webview.c.c r4 = r3.Tv
            r4.a(r0)
        L13:
            return
    }

    static void a(com.kwad.components.core.webview.jshandler.aj r0, int r1, float r2) {
            r0.a(r1, r2)
            return
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo r3, com.kwad.components.core.webview.jshandler.aj.b r4) {
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r3.adBaseInfo
            r1 = 1
            r0.adOperationType = r1
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r3.adBaseInfo
            java.lang.String r1 = r4.UA
            r0.appPackageName = r1
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r3.adBaseInfo
            java.lang.String r1 = r4.appName
            r0.appName = r1
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r3.adBaseInfo
            java.lang.String r1 = r4.version
            r0.appVersion = r1
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r3.adBaseInfo
            long r1 = r4.Vm
            r0.packageSize = r1
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r3.adBaseInfo
            java.lang.String r1 = r4.icon
            r0.appIconUrl = r1
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r3.adBaseInfo
            java.lang.String r1 = r4.qm
            r0.appDescription = r1
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r3.adConversionInfo
            java.lang.String r4 = r4.url
            r0.appDownloadUrl = r4
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r4 = r3.adConversionInfo
            java.lang.String r4 = r4.appDownloadUrl
            java.lang.String r4 = com.kwad.sdk.utils.ad.bp(r4)
            r3.downloadId = r4
            return
    }

    private com.kwad.sdk.api.KsAppDownloadListener rt() {
            r1 = this;
            com.kwad.components.core.webview.jshandler.aj$1 r0 = new com.kwad.components.core.webview.jshandler.aj$1
            r0.<init>(r1)
            return r0
    }

    @Override
    public final void a(java.lang.String r4, com.kwad.sdk.core.webview.c.c r5) {
            r3 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            if (r0 != 0) goto Lb
            r4 = -1
            java.lang.String r0 = "native photo is null"
            r5.onError(r4, r0)
            return
        Lb:
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r0)
            if (r0 == 0) goto L29
            com.kwad.components.core.e.d.c r4 = r3.mApkDownloadHelper
            if (r4 != 0) goto L22
            com.kwad.components.core.e.d.c r4 = new com.kwad.components.core.e.d.c
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            r4.<init>(r0)
            r3.mApkDownloadHelper = r4
        L22:
            com.kwad.components.core.e.d.c r4 = r3.mApkDownloadHelper
            r0 = 2
        L25:
            r4.ar(r0)
            goto L55
        L29:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.components.core.webview.jshandler.aj$b r1 = new com.kwad.components.core.webview.jshandler.aj$b
            r1.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L3d
            r2.<init>(r4)     // Catch: java.lang.Exception -> L3d
            r1.parseJson(r2)     // Catch: java.lang.Exception -> L3d
            goto L41
        L3d:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)
        L41:
            a(r0, r1)
            com.kwad.components.core.e.d.c r4 = r3.mApkDownloadHelper
            if (r4 != 0) goto L51
            com.kwad.components.core.e.d.c r4 = new com.kwad.components.core.e.d.c
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            r4.<init>(r0)
            r3.mApkDownloadHelper = r4
        L51:
            com.kwad.components.core.e.d.c r4 = r3.mApkDownloadHelper
            r0 = 1
            goto L25
        L55:
            r3.Tv = r5
            com.kwad.sdk.api.KsAppDownloadListener r4 = r3.Tn
            if (r4 != 0) goto L67
            com.kwad.sdk.api.KsAppDownloadListener r4 = r3.rt()
            r3.Tn = r4
            com.kwad.components.core.e.d.c r5 = r3.mApkDownloadHelper
            r5.b(r4)
            return
        L67:
            com.kwad.components.core.e.d.c r5 = r3.mApkDownloadHelper
            r5.d(r4)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerApkStatusListener"
            return r0
    }

    @Override
    public final void onDestroy() {
            r3 = this;
            r0 = 0
            r3.Tv = r0
            com.kwad.components.core.e.d.c r1 = r3.mApkDownloadHelper
            if (r1 == 0) goto L10
            com.kwad.sdk.api.KsAppDownloadListener r2 = r3.Tn
            if (r2 == 0) goto L10
            r1.c(r2)
            r3.Tn = r0
        L10:
            return
    }
}
