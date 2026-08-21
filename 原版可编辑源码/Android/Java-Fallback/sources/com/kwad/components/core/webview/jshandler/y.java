package com.kwad.components.core.webview.jshandler;

public final class y implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.sdk.core.webview.b TL;
    private final android.os.Handler TT;
    private final com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.e.d.c mApkDownloadHelper;


    public static final class a extends com.kwad.sdk.core.response.a.a {
        public java.lang.String UA;
        public int UB;
        public java.lang.String UC;
        public java.lang.String UD;
        public java.lang.String UE;

        @java.lang.Deprecated
        public boolean UF;
        public boolean UG;
        public boolean UH;
        public java.lang.String appId;
        public java.lang.String appName;
        public java.lang.String icon;
        public java.lang.String qm;
        public int type;
        public java.lang.String url;
        public java.lang.String version;
        public int versionCode;

        public a() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public y(com.kwad.sdk.core.webview.b r3) {
            r2 = this;
            r2.<init>()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.TT = r0
            r2.TL = r3
            com.kwad.sdk.core.response.model.AdTemplate r3 = new com.kwad.sdk.core.response.model.AdTemplate
            r3.<init>()
            r2.mAdTemplate = r3
            com.kwad.sdk.core.webview.b r3 = r2.TL     // Catch: java.lang.Exception -> L3a
            com.kwad.sdk.core.response.model.AdTemplate r3 = r3.getAdTemplate()     // Catch: java.lang.Exception -> L3a
            if (r3 == 0) goto L39
            java.lang.String r0 = r3.mOriginJString     // Catch: java.lang.Exception -> L3a
            if (r0 == 0) goto L30
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate     // Catch: java.lang.Exception -> L3a
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L3a
            java.lang.String r3 = r3.mOriginJString     // Catch: java.lang.Exception -> L3a
            r1.<init>(r3)     // Catch: java.lang.Exception -> L3a
            r0.parseJson(r1)     // Catch: java.lang.Exception -> L3a
            goto L3e
        L30:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.mAdTemplate     // Catch: java.lang.Exception -> L3a
            org.json.JSONObject r3 = r3.toJson()     // Catch: java.lang.Exception -> L3a
            r0.parseJson(r3)     // Catch: java.lang.Exception -> L3a
        L39:
            return
        L3a:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r3)
        L3e:
            return
    }

    static com.kwad.components.core.e.d.c a(com.kwad.components.core.webview.jshandler.y r0) {
            com.kwad.components.core.e.d.c r0 = r0.mApkDownloadHelper
            return r0
    }

    private static void a(com.kwad.sdk.core.response.model.AdInfo r3, com.kwad.components.core.webview.jshandler.y.a r4) {
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r3.adConversionInfo
            java.lang.String r1 = r4.UD
            r0.deeplinkUrl = r1
            java.lang.String r1 = r4.UE
            r0.marketUrl = r1
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r3.adBaseInfo
            int r1 = r4.type
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
            int r1 = r4.UB
            long r1 = (long) r1
            r0.packageSize = r1
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r3.adBaseInfo
            java.lang.String r1 = r4.icon
            r0.appIconUrl = r1
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r3.adBaseInfo
            java.lang.String r1 = r4.qm
            r0.appDescription = r1
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r3)
            if (r0 == 0) goto L4c
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r3.adConversionInfo
            java.lang.String r4 = r4.url
            r0.appDownloadUrl = r4
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r4 = r3.adConversionInfo
            java.lang.String r4 = r4.appDownloadUrl
            java.lang.String r4 = com.kwad.sdk.utils.ad.bp(r4)
            r3.downloadId = r4
            return
        L4c:
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r3 = r3.adConversionInfo
            java.lang.String r4 = r4.url
            r3.h5Url = r4
            return
    }

    static com.kwad.sdk.core.response.model.AdTemplate b(com.kwad.components.core.webview.jshandler.y r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    static com.kwad.sdk.core.webview.b c(com.kwad.components.core.webview.jshandler.y r0) {
            com.kwad.sdk.core.webview.b r0 = r0.TL
            return r0
    }

    @Override
    public final void a(java.lang.String r4, com.kwad.sdk.core.webview.c.c r5) {
            r3 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r0)
            if (r0 == 0) goto L20
            com.kwad.components.core.e.d.c r4 = r3.mApkDownloadHelper
            if (r4 != 0) goto L19
            com.kwad.components.core.e.d.c r4 = new com.kwad.components.core.e.d.c
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            r4.<init>(r0)
            r3.mApkDownloadHelper = r4
        L19:
            com.kwad.components.core.e.d.c r4 = r3.mApkDownloadHelper
            r0 = 2
        L1c:
            r4.ar(r0)
            goto L4c
        L20:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.components.core.webview.jshandler.y$a r1 = new com.kwad.components.core.webview.jshandler.y$a
            r1.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L34
            r2.<init>(r4)     // Catch: java.lang.Exception -> L34
            r1.parseJson(r2)     // Catch: java.lang.Exception -> L34
            goto L38
        L34:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)
        L38:
            a(r0, r1)
            com.kwad.components.core.e.d.c r4 = r3.mApkDownloadHelper
            if (r4 != 0) goto L48
            com.kwad.components.core.e.d.c r4 = new com.kwad.components.core.e.d.c
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            r4.<init>(r0)
            r3.mApkDownloadHelper = r4
        L48:
            com.kwad.components.core.e.d.c r4 = r3.mApkDownloadHelper
            r0 = 1
            goto L1c
        L4c:
            android.os.Handler r4 = r3.TT
            com.kwad.components.core.webview.jshandler.y$1 r0 = new com.kwad.components.core.webview.jshandler.y$1
            r0.<init>(r3)
            r4.post(r0)
            r4 = 0
            r5.a(r4)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "handleAdUrl"
            return r0
    }

    @Override
    public final void onDestroy() {
            r2 = this;
            android.os.Handler r0 = r2.TT
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            return
    }
}
