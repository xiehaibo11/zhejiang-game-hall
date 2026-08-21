package com.kwad.components.core.e.d;

public final class c implements com.kwad.sdk.core.NetworkMonitor.a, com.kwad.sdk.core.download.d, com.kwad.sdk.core.webview.a {
    private com.kwad.sdk.core.response.model.AdTemplate JU;
    private long JV;
    private boolean JW;
    private com.kwad.components.core.e.d.c.a JX;
    private android.content.DialogInterface.OnShowListener JY;
    private java.util.List<com.kwad.sdk.api.KsAppDownloadListener> JZ;
    private boolean downloadPauseEnable;
    private com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private android.os.Handler mHandler;
    private android.content.DialogInterface.OnDismissListener mOnDismissListener;
    private org.json.JSONObject mReportExtData;








    public interface a {
        boolean handleDownloadDialog(android.content.DialogInterface.OnClickListener r1);
    }

    public c(com.kwad.sdk.core.response.model.AdTemplate r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0, r0)
            return
    }

    public c(com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.sdk.api.KsAppDownloadListener r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0, r3)
            return
    }

    public c(com.kwad.sdk.core.response.model.AdTemplate r1, com.kwad.sdk.api.KsAppDownloadListener r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            r2 = 0
            r0.<init>(r1, r2, r2)
            com.kwad.sdk.core.response.model.AdInfo r1 = r0.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r1 = r1.adConversionInfo
            r1.appDownloadUrl = r3
            com.kwad.sdk.core.response.model.AdInfo r1 = r0.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r1 = r1.adBaseInfo
            r1.appPackageName = r4
            com.kwad.sdk.core.response.model.AdInfo r1 = r0.mAdInfo
            java.lang.String r2 = com.kwad.sdk.utils.ad.bp(r3)
            r1.downloadId = r2
            return
    }

    public c(com.kwad.sdk.core.response.model.AdTemplate r2, org.json.JSONObject r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public c(com.kwad.sdk.core.response.model.AdTemplate r3, org.json.JSONObject r4, com.kwad.sdk.api.KsAppDownloadListener r5) {
            r2 = this;
            r2.<init>()
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.mHandler = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.JZ = r0
            r2.JU = r3
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
            r2.mAdInfo = r3
            r2.mReportExtData = r4
            if (r5 == 0) goto L24
            r2.b(r5)
        L24:
            r2.nv()
            com.kwad.sdk.core.download.c r3 = com.kwad.sdk.core.download.c.Aw()
            com.kwad.sdk.core.response.model.AdTemplate r4 = r2.JU
            r3.a(r2, r4)
            com.kwad.sdk.core.download.c r3 = com.kwad.sdk.core.download.c.Aw()
            com.kwad.sdk.core.response.model.AdTemplate r4 = r2.JU
            r3.aq(r4)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.JU
            com.kwad.sdk.core.response.model.AdInfo r3 = com.kwad.sdk.core.response.b.d.cg(r3)
            boolean r3 = com.kwad.sdk.core.response.b.a.cm(r3)
            r2.downloadPauseEnable = r3
            boolean r3 = com.kwad.sdk.core.config.d.zG()
            if (r3 == 0) goto L5a
            com.kwad.sdk.core.NetworkMonitor r3 = com.kwad.sdk.core.NetworkMonitor.getInstance()
            com.kwad.sdk.KsAdSDKImpl r4 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r4 = r4.getContext()
            r3.a(r4, r2)
        L5a:
            com.kwad.sdk.a.a.c r3 = com.kwad.sdk.a.a.c.yb()
            com.kwad.sdk.core.response.model.AdTemplate r4 = r2.JU
            r3.ak(r4)
            return
    }

    static void a(com.kwad.components.core.e.d.c r0, com.kwad.sdk.api.KsAppDownloadListener r1) {
            r0.a(r1)
            return
    }

    private void a(com.kwad.sdk.api.KsAppDownloadListener r4) {
            r3 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r3.mAdInfo
            int r0 = r0.progress
            com.kwad.sdk.core.response.model.AdInfo r1 = r3.mAdInfo
            int r1 = r1.status
            if (r1 == 0) goto L61
            r2 = 1
            if (r1 == r2) goto L4a
            r2 = 2
            if (r1 == r2) goto L46
            r2 = 3
            if (r1 == r2) goto L46
            r2 = 4
            if (r1 == r2) goto L32
            r0 = 7
            if (r1 == r0) goto L2e
            r0 = 8
            if (r1 == r0) goto L2a
            r0 = 9
            if (r1 == r0) goto L2a
            r0 = 12
            if (r1 == r0) goto L26
            goto L29
        L26:
            r4.onInstalled()
        L29:
            return
        L2a:
            r4.onDownloadFinished()
            return
        L2e:
            r4.onDownloadFailed()
            return
        L32:
            boolean r1 = r4 instanceof com.kwad.sdk.core.download.a.a
            if (r1 == 0) goto L3c
            r1 = r4
            com.kwad.sdk.core.download.a.a r1 = (com.kwad.sdk.core.download.a.a) r1
            r1.onPaused(r0)
        L3c:
            boolean r1 = r4 instanceof com.kwad.sdk.api.KsApkDownloadListener     // Catch: java.lang.Throwable -> L45
            if (r1 == 0) goto L45
            com.kwad.sdk.api.KsApkDownloadListener r4 = (com.kwad.sdk.api.KsApkDownloadListener) r4     // Catch: java.lang.Throwable -> L45
            r4.onPaused(r0)     // Catch: java.lang.Throwable -> L45
        L45:
            return
        L46:
            r4.onProgressUpdate(r0)
            return
        L4a:
            r0 = 0
            r4.onProgressUpdate(r0)
            boolean r0 = r4 instanceof com.kwad.sdk.core.download.a.a
            if (r0 == 0) goto L58
            com.kwad.sdk.core.download.a.a r4 = (com.kwad.sdk.core.download.a.a) r4
            r4.onDownloadStarted()
            return
        L58:
            r4.onDownloadStarted()     // Catch: java.lang.Throwable -> L5c
            return
        L5c:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r4)
            return
        L61:
            r4.onIdle()
            return
    }

    static java.util.List c(com.kwad.components.core.e.d.c r0) {
            java.util.List<com.kwad.sdk.api.KsAppDownloadListener> r0 = r0.JZ
            return r0
    }

    static com.kwad.sdk.core.response.model.AdInfo d(com.kwad.components.core.e.d.c r0) {
            com.kwad.sdk.core.response.model.AdInfo r0 = r0.mAdInfo
            return r0
    }

    private static void d(android.content.Context r1, com.kwad.sdk.core.response.model.AdTemplate r2) {
            if (r1 == 0) goto L8
            if (r2 == 0) goto L8
            r0 = 0
            com.kwad.components.core.page.DownloadLandPageActivity.launch(r1, r2, r0)
        L8:
            return
    }

    static int e(com.kwad.components.core.e.d.c r0) {
            int r0 = r0.nK()
            return r0
    }

    private int n(com.kwad.components.core.e.d.a.a r5) {
            r4 = this;
            android.content.Context r0 = r5.getContext()
            com.kwad.sdk.core.response.model.AdInfo r1 = r4.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.cz(r1)
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.JU
            boolean r2 = com.kwad.sdk.utils.d.a(r0, r1, r2)
            r3 = 0
            if (r2 == 0) goto L1a
            com.kwad.sdk.core.response.model.AdTemplate r5 = r4.JU
            r0 = 1
            com.kwad.sdk.core.report.a.l(r5, r0)
            return r3
        L1a:
            com.kwad.sdk.core.response.model.AdInfo r2 = r4.mAdInfo
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.aq(r2)
            boolean r1 = com.kwad.sdk.utils.d.f(r0, r1, r2)
            if (r1 == 0) goto L2c
            com.kwad.sdk.core.response.model.AdTemplate r5 = r4.JU
            com.kwad.sdk.core.report.a.l(r5, r3)
            return r3
        L2c:
            boolean r1 = r4.nG()
            if (r1 == 0) goto L33
            return r3
        L33:
            boolean r1 = com.kwad.sdk.utils.ag.isNetworkConnected(r0)
            if (r1 != 0) goto L41
            java.lang.String r5 = com.kwad.sdk.utils.w.bX(r0)
            com.kwad.sdk.utils.v.L(r0, r5)
            return r3
        L41:
            boolean r0 = r5.ns()
            if (r0 == 0) goto L52
            boolean r0 = com.kwad.sdk.core.config.d.zj()
            if (r0 == 0) goto L52
            int r5 = r4.o(r5)
            return r5
        L52:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.JU
            boolean r0 = com.kwad.sdk.core.response.b.d.cw(r0)
            if (r0 == 0) goto L6d
            int r0 = r5.nu()
            r1 = 2
            if (r0 == r1) goto L6d
            android.content.Context r0 = r5.getContext()
            com.kwad.sdk.core.response.model.AdTemplate r5 = r5.getAdTemplate()
            d(r0, r5)
            return r3
        L6d:
            boolean r0 = r5.no()
            if (r0 == 0) goto L78
            int r5 = r4.p(r5)
            return r5
        L78:
            boolean r5 = r4.q(r5)
            if (r5 == 0) goto L7f
            return r3
        L7f:
            int r5 = r4.nK()
            return r5
    }

    private void nA() {
            r2 = this;
            android.os.Handler r0 = r2.mHandler
            com.kwad.components.core.e.d.c$3 r1 = new com.kwad.components.core.e.d.c$3
            r1.<init>(r2)
            r0.post(r1)
            return
    }

    private void nB() {
            r4 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r0.adBaseInfo
            java.lang.String r0 = r0.appPackageName
            com.kwad.sdk.KsAdSDKImpl r1 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r1 = r1.getContext()
            if (r1 != 0) goto L11
            return
        L11:
            boolean r0 = com.kwad.sdk.utils.ak.ak(r1, r0)
            r1 = 12
            if (r0 == 0) goto L1e
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            r0.status = r1
            return
        L1e:
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            int r0 = r0.status
            r2 = 0
            if (r0 != r1) goto L2d
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            r0.status = r2
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            r0.progress = r2
        L2d:
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            int r0 = r0.status
            r1 = 8
            if (r0 == r1) goto L3d
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            int r0 = r0.status
            r3 = 9
            if (r0 != r3) goto L5a
        L3d:
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            java.lang.String r0 = r0.downloadFilePath
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 != 0) goto L52
            java.io.File r3 = new java.io.File
            r3.<init>(r0)
            boolean r0 = r3.exists()
            if (r0 != 0) goto L5a
        L52:
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            r0.status = r2
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            r0.progress = r2
        L5a:
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            int r0 = r0.status
            if (r0 != 0) goto L7f
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.download.a.B(r0)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L7f
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            boolean r2 = r2.exists()
            if (r2 == 0) goto L7f
            com.kwad.sdk.core.response.model.AdInfo r2 = r4.mAdInfo
            r2.downloadFilePath = r0
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            r0.status = r1
        L7f:
            return
    }

    private boolean nD() {
            r4 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r0 = r0.adConversionInfo
            java.lang.String r0 = r0.marketUrl
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "isMarKet URL Schema="
            r1.<init>(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "ApkDownloadHelper"
            com.kwad.sdk.core.e.c.i(r2, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            if (r1 != 0) goto L33
            com.kwad.sdk.KsAdSDKImpl r1 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r1 = r1.getContext()
            com.kwad.sdk.core.response.model.AdInfo r3 = r4.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r3 = r3.adBaseInfo
            java.lang.String r3 = r3.appPackageName
            boolean r0 = com.kwad.sdk.utils.d.f(r1, r0, r3)
            goto L34
        L33:
            r0 = r2
        L34:
            if (r0 == 0) goto L3b
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.JU
            com.kwad.sdk.core.report.a.l(r1, r2)
        L3b:
            return r0
    }

    private boolean nG() {
            r2 = this;
            com.kwad.components.core.e.d.c$a r0 = r2.JX
            if (r0 == 0) goto Le
            com.kwad.components.core.e.d.c$4 r1 = new com.kwad.components.core.e.d.c$4
            r1.<init>(r2)
            boolean r0 = r0.handleDownloadDialog(r1)
            return r0
        Le:
            r0 = 0
            return r0
    }

    private boolean nI() {
            r3 = this;
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r0 = r0.getContext()
            com.kwad.components.core.e.d.a$a r1 = new com.kwad.components.core.e.d.a$a
            r1.<init>(r0)
            com.kwad.sdk.core.response.model.AdTemplate r2 = r3.JU
            com.kwad.components.core.e.d.a$a r1 = r1.P(r2)
            r2 = 1
            int r1 = com.kwad.components.core.e.d.d.b(r1, r2)
            if (r1 != r2) goto L1b
            return r2
        L1b:
            com.kwad.sdk.core.response.model.AdInfo r1 = r3.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.aq(r1)
            boolean r0 = com.kwad.sdk.utils.ak.am(r0, r1)
            if (r0 == 0) goto L2c
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.JU
            com.kwad.sdk.core.report.a.ax(r1)
        L2c:
            return r0
    }

    private int nK() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            com.kwad.sdk.core.download.a.C(r0)
            r0 = 1
            return r0
    }

    private void nv() {
            r2 = this;
            com.kwad.sdk.core.download.c.Aw()
            java.lang.String r0 = r2.nx()
            int r0 = com.kwad.sdk.core.download.c.cI(r0)
            if (r0 == 0) goto L11
            com.kwad.sdk.core.response.model.AdInfo r1 = r2.mAdInfo
            r1.status = r0
        L11:
            r2.nB()
            r2.nA()
            return
    }

    private boolean nz() {
            r4 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 29
            if (r0 >= r2) goto L57
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.JU
            boolean r0 = r0.mIsFromContent
            if (r0 == 0) goto L1f
            boolean r0 = com.kwad.sdk.core.config.d.yX()
            if (r0 == 0) goto L1f
            boolean r1 = r4.nI()
            if (r1 == 0) goto L57
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.JU
            com.kwad.sdk.core.report.a.ay(r0)
            goto L57
        L1f:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.JU
            boolean r0 = r0.mIsFromContent
            if (r0 != 0) goto L57
            boolean r0 = com.kwad.sdk.core.config.d.zu()
            if (r0 == 0) goto L57
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r0 = r0.getContext()
            boolean r0 = com.kwad.components.core.k.b.ae(r0)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "handleForceOpenApp enableForceOpen: "
            r2.<init>(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "ApkDownloadHelper"
            com.kwad.sdk.core.e.c.d(r3, r2)
            if (r0 == 0) goto L50
            boolean r1 = r4.nI()
        L50:
            if (r1 == 0) goto L57
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.JU
            com.kwad.sdk.core.report.a.az(r0)
        L57:
            return r1
    }

    private int o(com.kwad.components.core.e.d.a.a r5) {
            r4 = this;
            android.content.Context r0 = r5.getContext()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r5.getAdTemplate()
            int r5 = r5.nt()
            r2 = 1
            if (r5 == r2) goto L3f
            r2 = 2
            r3 = 0
            if (r5 == r2) goto L14
            return r3
        L14:
            boolean r5 = com.kwad.sdk.core.response.b.b.bH(r1)
            if (r5 == 0) goto L3e
            com.kwad.components.core.e.c.b$a r5 = new com.kwad.components.core.e.c.b$a
            r5.<init>()
            com.kwad.components.core.e.c.b$a r5 = r5.O(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.b.bG(r1)
            com.kwad.components.core.e.c.b$a r5 = r5.ak(r1)
            android.content.DialogInterface$OnShowListener r1 = r4.JY
            com.kwad.components.core.e.c.b$a r5 = r5.a(r1)
            android.content.DialogInterface$OnDismissListener r1 = r4.mOnDismissListener
            com.kwad.components.core.e.c.b$a r5 = r5.c(r1)
            com.kwad.components.core.e.c.b$b r5 = r5.nc()
            com.kwad.components.core.e.c.b.a(r0, r5)
        L3e:
            return r3
        L3f:
            int r5 = r4.nK()
            return r5
    }

    private int p(com.kwad.components.core.e.d.a.a r6) {
            r5 = this;
            android.content.Context r0 = r6.getContext()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r6.getAdTemplate()
            int r2 = s(r6)
            r3 = 1
            r4 = 0
            if (r2 == r3) goto L2f
            r0 = 2
            if (r2 == r0) goto L23
            r0 = 3
            if (r2 == r0) goto L22
            boolean r6 = r5.q(r6)
            if (r6 == 0) goto L1d
            return r4
        L1d:
            int r6 = r5.nK()
            return r6
        L22:
            return r4
        L23:
            android.content.Context r0 = r6.getContext()
            com.kwad.sdk.core.response.model.AdTemplate r6 = r6.getAdTemplate()
            d(r0, r6)
            return r4
        L2f:
            boolean r6 = com.kwad.sdk.core.response.b.b.bH(r1)
            if (r6 == 0) goto L59
            com.kwad.components.core.e.c.b$a r6 = new com.kwad.components.core.e.c.b$a
            r6.<init>()
            com.kwad.components.core.e.c.b$a r6 = r6.O(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.b.bG(r1)
            com.kwad.components.core.e.c.b$a r6 = r6.ak(r1)
            android.content.DialogInterface$OnShowListener r1 = r5.JY
            com.kwad.components.core.e.c.b$a r6 = r6.a(r1)
            android.content.DialogInterface$OnDismissListener r1 = r5.mOnDismissListener
            com.kwad.components.core.e.c.b$a r6 = r6.c(r1)
            com.kwad.components.core.e.c.b$b r6 = r6.nc()
            com.kwad.components.core.e.c.b.a(r0, r6)
        L59:
            return r4
    }

    private boolean q(com.kwad.components.core.e.d.a.a r3) {
            r2 = this;
            boolean r0 = r3.nm()
            if (r0 != 0) goto L4a
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            int r0 = r0.status
            r1 = 4
            if (r0 == r1) goto L4a
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.JU
            boolean r0 = com.kwad.sdk.core.response.b.b.bK(r0)
            if (r0 == 0) goto L4a
            boolean r0 = r(r3)
            if (r0 != 0) goto L1c
            goto L4a
        L1c:
            android.content.Context r3 = r3.getContext()
            com.kwad.components.core.e.c.b$a r0 = new com.kwad.components.core.e.c.b$a
            r0.<init>()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.JU
            com.kwad.components.core.e.c.b$a r0 = r0.O(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.JU
            java.lang.String r1 = com.kwad.sdk.core.response.b.b.bJ(r1)
            com.kwad.components.core.e.c.b$a r0 = r0.ak(r1)
            android.content.DialogInterface$OnShowListener r1 = r2.JY
            com.kwad.components.core.e.c.b$a r0 = r0.a(r1)
            android.content.DialogInterface$OnDismissListener r1 = r2.mOnDismissListener
            com.kwad.components.core.e.c.b$a r0 = r0.c(r1)
            com.kwad.components.core.e.c.b$b r0 = r0.nc()
            boolean r3 = com.kwad.components.core.e.c.b.a(r3, r0)
            return r3
        L4a:
            r3 = 0
            return r3
    }

    private static boolean r(com.kwad.components.core.e.d.a.a r3) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.getAdTemplate()
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r1 = com.kwad.sdk.core.response.b.a.bk(r0)
            r2 = 1
            if (r1 == 0) goto L20
            boolean r1 = com.kwad.components.core.page.DownloadLandPageActivity.showingAdWebViewLandPage
            if (r1 != 0) goto L1f
            boolean r1 = com.kwad.components.core.page.AdWebViewVideoActivityProxy.showingAdWebViewVideoActivity
            if (r1 != 0) goto L1f
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.getAdTemplate()
            boolean r1 = r1.isWebViewDownload
            if (r1 == 0) goto L20
        L1f:
            return r2
        L20:
            boolean r0 = com.kwad.sdk.core.response.b.a.bl(r0)
            if (r0 == 0) goto L31
            android.content.Context r3 = r3.getContext()
            boolean r3 = com.kwad.sdk.utils.ag.isWifiConnected(r3)
            if (r3 != 0) goto L31
            return r2
        L31:
            r3 = 0
            return r3
    }

    public static int s(com.kwad.components.core.e.d.a.a r2) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.getAdTemplate()
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r1 = r0.downloadSafeInfo
            com.kwad.sdk.core.response.model.AdInfo$ComplianceInfo r1 = r1.complianceInfo
            if (r1 == 0) goto L2d
            int r2 = r2.cV()
            r1 = 2
            if (r2 == r1) goto L26
            r1 = 3
            if (r2 == r1) goto L1f
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r2 = r0.downloadSafeInfo
            com.kwad.sdk.core.response.model.AdInfo$ComplianceInfo r2 = r2.complianceInfo
            int r2 = r2.actionBarType
            return r2
        L1f:
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r2 = r0.downloadSafeInfo
            com.kwad.sdk.core.response.model.AdInfo$ComplianceInfo r2 = r2.complianceInfo
            int r2 = r2.materialJumpType
            return r2
        L26:
            com.kwad.sdk.core.response.model.AdInfo$DownloadSafeInfo r2 = r0.downloadSafeInfo
            com.kwad.sdk.core.response.model.AdInfo$ComplianceInfo r2 = r2.complianceInfo
            int r2 = r2.describeBarType
            return r2
        L2d:
            r2 = 0
            return r2
    }

    public final void a(com.kwad.components.core.e.d.c.a r1) {
            r0 = this;
            r0.JX = r1
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.NetworkMonitor.NetworkState r3) {
            r2 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            int r0 = r0.status
            r1 = 7
            if (r0 != r1) goto Le
            com.kwad.sdk.core.NetworkMonitor$NetworkState r0 = com.kwad.sdk.core.NetworkMonitor.NetworkState.NETWORK_WIFI
            if (r3 != r0) goto Le
            r2.nK()
        Le:
            return
    }

    @Override
    public final void a(java.lang.String r2, int r3, int r4, int r5) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = r0.downloadId
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto Lb
            return
        Lb:
            com.kwad.sdk.core.response.model.AdInfo r2 = r1.mAdInfo
            r0 = 3
            r2.status = r0
            com.kwad.sdk.core.response.model.AdInfo r2 = r1.mAdInfo
            r2.progress = r3
            com.kwad.sdk.core.response.model.AdInfo r2 = r1.mAdInfo
            long r3 = (long) r4
            r2.soFarBytes = r3
            com.kwad.sdk.core.response.model.AdInfo r2 = r1.mAdInfo
            long r3 = (long) r5
            r2.totalBytes = r3
            r1.nA()
            return
    }

    @Override
    public final void a(java.lang.String r2, int r3, com.kwad.sdk.core.download.f r4) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.JU
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            boolean r3 = r4.Az()
            if (r3 == 0) goto L34
            com.kwad.sdk.core.response.model.AdTemplate r3 = r1.JU
            com.kwad.sdk.core.report.a.av(r3)
            r4.Ay()
            boolean r3 = r1.nz()
            com.kwad.sdk.a.a.c r4 = com.kwad.sdk.a.a.c.yb()
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.JU
            r4.an(r0)
            com.kwad.sdk.a.a.c r4 = com.kwad.sdk.a.a.c.yb()
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.JU
            r4.al(r0)
            com.kwad.sdk.a.a.b r4 = com.kwad.sdk.a.a.b.xY()
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.JU
            r4.ag(r0)
            goto L35
        L34:
            r3 = 0
        L35:
            com.kwad.components.core.e.d.c$2 r4 = new com.kwad.components.core.e.d.c$2
            r4.<init>(r1, r3)
            com.kwad.sdk.utils.g.execute(r4)
            java.lang.String r2 = r2.downloadId
            com.kwad.sdk.core.a r3 = com.kwad.sdk.core.a.yT()
            r3.cs(r2)
            com.kwad.sdk.core.response.model.AdInfo r2 = r1.mAdInfo
            r3 = 12
            r2.status = r3
            r1.nA()
            com.kwad.components.core.e.a.e r2 = com.kwad.components.core.e.a.e.mN()
            com.kwad.sdk.core.response.model.AdTemplate r3 = r1.JU
            r2.L(r3)
            return
    }

    @Override
    public final void a(java.lang.String r2, int r3, java.lang.String r4, com.kwad.sdk.core.download.f r5) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = r0.downloadId
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto Lb
            return
        Lb:
            com.kwad.sdk.core.response.model.AdInfo r2 = r1.mAdInfo
            r0 = 7
            r2.status = r0
            r1.nA()
            boolean r2 = r5.Az()
            if (r2 == 0) goto L3d
            com.kwad.sdk.core.report.a$a r2 = new com.kwad.sdk.core.report.a$a
            r2.<init>(r3, r4)
            com.kwad.sdk.core.response.model.AdTemplate r3 = r1.JU
            com.kwad.sdk.core.report.a.a(r3, r2)
            com.kwad.sdk.core.response.model.AdInfo r3 = r1.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r3 = r3.adConversionInfo
            java.lang.String r3 = r3.appDownloadUrl
            com.kwad.components.core.o.a r4 = com.kwad.components.core.o.a.pA()
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.JU
            org.json.JSONObject r2 = r2.toJson()
            java.lang.String r2 = r2.toString()
            r4.a(r0, r3, r2)
            r5.Ay()
        L3d:
            com.kwad.sdk.core.response.model.AdInfo r2 = r1.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r2 = r2.adConversionInfo
            int r2 = r2.retryH5TimeStep
            if (r2 <= 0) goto L77
            boolean r2 = r1.JW
            if (r2 != 0) goto L77
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = r1.JV
            long r2 = r2 - r4
            com.kwad.sdk.core.response.model.AdInfo r4 = r1.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r4 = r4.adConversionInfo
            int r4 = r4.retryH5TimeStep
            long r4 = (long) r4
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto L77
            com.kwad.sdk.core.response.model.AdInfo r2 = r1.mAdInfo
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.aK(r2)
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L77
            com.kwad.sdk.KsAdSDKImpl r2 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r2 = r2.getContext()
            com.kwad.sdk.core.response.model.AdTemplate r3 = r1.JU
            com.kwad.components.core.page.AdWebViewActivityProxy.launch(r2, r3)
            r2 = 1
            r1.JW = r2
        L77:
            return
    }

    @Override
    public final void a(java.lang.String r2, com.kwad.sdk.core.download.f r3) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = r0.downloadId
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto Lb
            return
        Lb:
            com.kwad.sdk.core.response.model.AdInfo r2 = r1.mAdInfo
            int r2 = r2.status
            r0 = 1
            if (r2 == r0) goto L26
            boolean r2 = r3.Az()
            if (r2 == 0) goto L20
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.JU
            com.kwad.sdk.core.report.a.au(r2)
            r3.Ay()
        L20:
            long r2 = java.lang.System.currentTimeMillis()
            r1.JV = r2
        L26:
            com.kwad.sdk.core.response.model.AdInfo r2 = r1.mAdInfo
            r2.status = r0
            r1.nA()
            return
    }

    @Override
    public final void a(java.lang.String r2, java.lang.String r3, com.kwad.sdk.core.download.f r4) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = r0.downloadId
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto Lb
            return
        Lb:
            com.kwad.sdk.core.response.model.AdInfo r2 = r1.mAdInfo
            r2.downloadFilePath = r3
            com.kwad.sdk.core.response.model.AdInfo r2 = r1.mAdInfo
            r3 = 100
            r2.progress = r3
            com.kwad.sdk.core.response.model.AdInfo r2 = r1.mAdInfo
            int r2 = r2.status
            r3 = 8
            if (r2 == r3) goto L5b
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.JU
            boolean r2 = r2.mDownloadFinishReported
            if (r2 != 0) goto L5b
            com.kwad.components.core.e.d.c$1 r2 = new com.kwad.components.core.e.d.c$1
            r2.<init>(r1)
            com.kwad.sdk.utils.g.execute(r2)
            boolean r2 = r4.Az()
            if (r2 == 0) goto L3b
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.JU
            org.json.JSONObject r0 = r1.mReportExtData
            com.kwad.sdk.core.report.a.e(r2, r0)
            r4.Ay()
        L3b:
            com.kwad.sdk.a.a.c r2 = com.kwad.sdk.a.a.c.yb()
            com.kwad.sdk.core.response.model.AdTemplate r4 = r1.JU
            r2.am(r4)
            com.kwad.sdk.a.a.c r2 = com.kwad.sdk.a.a.c.yb()
            com.kwad.sdk.core.response.model.AdTemplate r4 = r1.JU
            r2.ak(r4)
            com.kwad.sdk.a.a.b r2 = com.kwad.sdk.a.a.b.xY()
            com.kwad.sdk.core.response.model.AdTemplate r4 = r1.JU
            r2.af(r4)
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.JU
            r4 = 1
            r2.mDownloadFinishReported = r4
        L5b:
            com.kwad.sdk.core.response.model.AdInfo r2 = r1.mAdInfo
            r2.status = r3
            r1.nA()
            com.kwad.sdk.core.diskcache.ApkCacheManager r2 = com.kwad.sdk.core.diskcache.ApkCacheManager.getInstance()
            r2.Aj()
            return
    }

    @Override
    public final void am(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = r0.downloadId
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto Lb
            return
        Lb:
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.JU
            com.kwad.sdk.core.report.a.aw(r2)
            return
    }

    public final void ar(int r2) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.JU
            r0.downloadSource = r2
            return
    }

    public final void b(com.kwad.sdk.api.KsAppDownloadListener r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 != r1) goto L1c
            java.util.List<com.kwad.sdk.api.KsAppDownloadListener> r0 = r2.JZ
            boolean r0 = r0.contains(r3)
            if (r0 != 0) goto L26
            java.util.List<com.kwad.sdk.api.KsAppDownloadListener> r0 = r2.JZ
            r1 = 0
            r0.add(r1, r3)
            goto L26
        L1c:
            android.os.Handler r0 = r2.mHandler
            com.kwad.components.core.e.d.c$6 r1 = new com.kwad.components.core.e.d.c$6
            r1.<init>(r2, r3)
            r0.post(r1)
        L26:
            r2.nB()
            r2.a(r3)
            return
    }

    @Override
    public final void b(java.lang.String r3, com.kwad.sdk.core.download.f r4) {
            r2 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            java.lang.String r0 = r0.downloadId
            boolean r3 = r0.equals(r3)
            if (r3 != 0) goto Lb
            return
        Lb:
            com.kwad.sdk.core.response.model.AdInfo r3 = r2.mAdInfo
            int r3 = r3.status
            r0 = 4
            if (r3 == r0) goto L22
            boolean r3 = r4.Az()
            if (r3 == 0) goto L22
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.JU
            org.json.JSONObject r1 = r2.mReportExtData
            com.kwad.sdk.core.report.a.c(r3, r1)
            r4.Ay()
        L22:
            com.kwad.sdk.core.response.model.AdInfo r3 = r2.mAdInfo
            r3.status = r0
            r2.nA()
            return
    }

    public final void c(com.kwad.sdk.api.KsAppDownloadListener r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 != r1) goto L13
            java.util.List<com.kwad.sdk.api.KsAppDownloadListener> r0 = r2.JZ
            r0.remove(r3)
            return
        L13:
            android.os.Handler r0 = r2.mHandler
            com.kwad.components.core.e.d.c$7 r1 = new com.kwad.components.core.e.d.c$7
            r1.<init>(r2, r3)
            r0.post(r1)
            return
    }

    @Override
    public final void c(java.lang.String r3, com.kwad.sdk.core.download.f r4) {
            r2 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            java.lang.String r0 = r0.downloadId
            boolean r3 = r0.equals(r3)
            if (r3 != 0) goto Lb
            return
        Lb:
            com.kwad.sdk.core.response.model.AdInfo r3 = r2.mAdInfo
            int r3 = r3.status
            r0 = 2
            if (r3 == r0) goto L22
            boolean r3 = r4.Az()
            if (r3 == 0) goto L22
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.JU
            org.json.JSONObject r1 = r2.mReportExtData
            com.kwad.sdk.core.report.a.d(r3, r1)
            r4.Ay()
        L22:
            com.kwad.sdk.core.response.model.AdInfo r3 = r2.mAdInfo
            r3.status = r0
            r2.nA()
            return
    }

    public final void clear() {
            r1 = this;
            r1.nL()
            com.kwad.sdk.core.download.c r0 = com.kwad.sdk.core.download.c.Aw()
            r0.a(r1)
            boolean r0 = com.kwad.sdk.core.config.d.zG()
            if (r0 == 0) goto L17
            com.kwad.sdk.core.NetworkMonitor r0 = com.kwad.sdk.core.NetworkMonitor.getInstance()
            r0.a(r1)
        L17:
            return
    }

    public final void d(com.kwad.sdk.api.KsAppDownloadListener r1) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            r0.nB()
            r0.a(r1)
            return
    }

    @Override
    public final void d(java.lang.String r3, com.kwad.sdk.core.download.f r4) {
            r2 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            java.lang.String r0 = r0.downloadId
            boolean r3 = r0.equals(r3)
            if (r3 != 0) goto Lb
            return
        Lb:
            com.kwad.sdk.core.response.model.AdInfo r3 = r2.mAdInfo
            int r3 = r3.status
            r0 = 5
            if (r3 == r0) goto L22
            boolean r3 = r4.Az()
            if (r3 == 0) goto L22
            com.kwad.sdk.core.response.model.AdTemplate r3 = r2.JU
            org.json.JSONObject r1 = r2.mReportExtData
            com.kwad.sdk.core.report.a.f(r3, r1)
            r4.Ay()
        L22:
            com.kwad.sdk.core.response.model.AdInfo r3 = r2.mAdInfo
            r3.status = r0
            r2.nA()
            return
    }

    @Override
    public final void e(java.lang.String r2, com.kwad.sdk.core.download.f r3) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = r0.downloadId
            boolean r2 = r0.equals(r2)
            if (r2 != 0) goto Lb
            return
        Lb:
            boolean r2 = r3.Az()
            if (r2 == 0) goto L1a
            com.kwad.sdk.core.response.model.AdTemplate r2 = r1.JU
            r0 = 2
            com.kwad.sdk.core.report.a.i(r2, r0)
            r3.Ay()
        L1a:
            com.kwad.sdk.core.response.model.AdInfo r2 = r1.mAdInfo
            r3 = 9
            r2.status = r3
            r1.nA()
            return
    }

    public final int m(com.kwad.components.core.e.d.a.a r3) {
            r2 = this;
            r0 = 0
            r2.JW = r0
            r2.nB()
            com.kwad.sdk.core.response.model.AdInfo r1 = r2.mAdInfo
            int r1 = r1.status
            switch(r1) {
                case 0: goto L2d;
                case 1: goto L2d;
                case 2: goto L1b;
                case 3: goto L1b;
                case 4: goto L16;
                case 5: goto L2d;
                case 6: goto L2d;
                case 7: goto L2d;
                case 8: goto L12;
                case 9: goto L12;
                case 10: goto Ld;
                case 11: goto L12;
                case 12: goto Le;
                default: goto Ld;
            }
        Ld:
            goto L31
        Le:
            r2.nH()
            goto L31
        L12:
            r2.nJ()
            goto L31
        L16:
            int r0 = r2.nK()
            goto L31
        L1b:
            boolean r3 = r3.nk()
            if (r3 == 0) goto L31
            boolean r3 = r2.downloadPauseEnable
            if (r3 == 0) goto L31
            com.kwad.sdk.core.response.model.AdInfo r3 = r2.mAdInfo
            java.lang.String r3 = r3.downloadId
            com.kwad.sdk.core.download.a.cH(r3)
            goto L31
        L2d:
            int r0 = r2.n(r3)
        L31:
            return r0
    }

    public final boolean nC() {
            r2 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            int r0 = r0.status
            r1 = 1
            switch(r0) {
                case 0: goto L12;
                case 1: goto L12;
                case 2: goto L8;
                case 3: goto L8;
                case 4: goto L12;
                case 5: goto L12;
                case 6: goto L12;
                case 7: goto L12;
                case 8: goto Le;
                case 9: goto Le;
                case 10: goto L8;
                case 11: goto Le;
                case 12: goto La;
                default: goto L8;
            }
        L8:
            r0 = 0
            return r0
        La:
            r2.nH()
            return r1
        Le:
            r2.nJ()
            return r1
        L12:
            boolean r0 = r2.nD()
            return r0
    }

    public final com.kwad.sdk.core.response.model.AdTemplate nE() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.JU
            return r0
    }

    public final boolean nF() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            int r0 = r0.status
            if (r0 != 0) goto Lb
            boolean r0 = r1.nD()
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public final void nH() {
            r2 = this;
            com.kwad.components.core.e.d.c$5 r0 = new com.kwad.components.core.e.d.c$5
            r0.<init>(r2)
            com.kwad.sdk.utils.g.execute(r0)
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r0 = r0.getContext()
            com.kwad.sdk.core.response.model.AdInfo r1 = r2.mAdInfo
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.aq(r1)
            boolean r0 = com.kwad.sdk.utils.ak.am(r0, r1)
            if (r0 == 0) goto L21
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.JU
            com.kwad.sdk.core.report.a.ax(r0)
        L21:
            return
    }

    public final void nJ() {
            r2 = this;
            com.kwad.sdk.KsAdSDKImpl r0 = com.kwad.sdk.KsAdSDKImpl.get()
            android.content.Context r0 = r0.getContext()
            com.kwad.sdk.core.response.model.AdInfo r1 = r2.mAdInfo
            java.lang.String r1 = r1.downloadFilePath
            boolean r0 = com.kwad.sdk.utils.ak.an(r0, r1)
            if (r0 == 0) goto L18
            com.kwad.sdk.core.response.model.AdTemplate r0 = r2.JU
            r1 = 1
            com.kwad.sdk.core.report.a.i(r0, r1)
        L18:
            return
    }

    @Override
    public final void nL() {
            r1 = this;
            java.util.List<com.kwad.sdk.api.KsAppDownloadListener> r0 = r1.JZ
            if (r0 == 0) goto L7
            r0.clear()
        L7:
            return
    }

    public final int nw() {
            r2 = this;
            r2.nB()
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            int r0 = r0.status
            r1 = 3
            if (r0 != r1) goto Lc
            r0 = 2
            return r0
        Lc:
            com.kwad.sdk.core.response.model.AdInfo r0 = r2.mAdInfo
            int r0 = r0.status
            return r0
    }

    @Override
    public final java.lang.String nx() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            java.lang.String r0 = r0.downloadId
            return r0
    }

    @Override
    public final java.lang.String ny() {
            r1 = this;
            com.kwad.sdk.core.response.model.AdInfo r0 = r1.mAdInfo
            com.kwad.sdk.core.response.model.AdInfo$AdBaseInfo r0 = r0.adBaseInfo
            java.lang.String r0 = r0.appPackageName
            return r0
    }

    public final void setOnDismissListener(android.content.DialogInterface.OnDismissListener r1) {
            r0 = this;
            r0.mOnDismissListener = r1
            return
    }

    public final void setOnShowListener(android.content.DialogInterface.OnShowListener r1) {
            r0 = this;
            r0.JY = r1
            return
    }
}
