package com.kwad.components.core.webview.b;

public class h implements com.kwad.sdk.components.i, com.kwad.sdk.core.webview.d.a.a {
    private static java.util.Map<java.lang.Integer, java.lang.ref.WeakReference<com.kwad.components.core.webview.b.c.d>> We;
    private long Db;
    private com.kwad.components.offline.api.tk.model.StyleTemplate QO;
    private com.kwad.sdk.core.download.e Tj;
    private com.kwad.components.core.webview.b.c.d VP;
    protected com.kwad.components.core.webview.b.i VQ;
    private com.kwad.sdk.core.webview.c.g VR;
    private com.kwad.components.core.offline.api.b.c VS;
    private java.util.concurrent.Future<?> VT;
    private com.kwad.sdk.components.l VU;
    private com.kwad.components.core.webview.b.a.p VV;
    private boolean VW;
    private boolean VX;
    private boolean VY;
    private boolean VZ;
    private int Wa;
    private long Wb;
    private long Wc;
    private java.util.Map<java.lang.String, java.lang.Object> Wd;
    private int Wf;
    protected com.kwad.sdk.core.webview.e Wg;
    private com.kwad.components.core.webview.b.h.a Wh;
    private com.kwad.sdk.components.j Wi;
    private final java.lang.Runnable Wj;
    private android.app.Activity mActivity;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    protected final android.content.Context mContext;
    private long mInitTime;
    private final com.kwad.components.core.video.l mVideoPlayStateListener;
    private final com.kwad.components.core.webview.b.b.y wp;
    protected long xI;























    interface a {
        void onFailed();

        void onSuccess();
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.kwad.components.core.webview.b.h.We = r0
            return
    }

    public h(long r3, android.content.Context r5) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.VW = r0
            r2.VX = r0
            r2.VY = r0
            r2.VZ = r0
            r2.Wa = r0
            r0 = -1
            r2.xI = r0
            r0 = 1000(0x3e8, float:1.401E-42)
            r2.Wf = r0
            com.kwad.sdk.core.webview.e r0 = new com.kwad.sdk.core.webview.e
            r0.<init>()
            r2.Wg = r0
            com.kwad.components.core.webview.b.h$16 r0 = new com.kwad.components.core.webview.b.h$16
            r0.<init>(r2)
            r2.Wh = r0
            com.kwad.components.core.webview.b.h$18 r0 = new com.kwad.components.core.webview.b.h$18
            r0.<init>(r2)
            r2.Wi = r0
            com.kwad.components.core.webview.b.h$19 r0 = new com.kwad.components.core.webview.b.h$19
            r0.<init>(r2)
            r2.Wj = r0
            com.kwad.components.core.webview.b.h$13 r0 = new com.kwad.components.core.webview.b.h$13
            r0.<init>(r2)
            r2.mVideoPlayStateListener = r0
            r2.mContext = r5
            r2.xI = r3
            com.kwad.components.core.webview.b.b.y r3 = new com.kwad.components.core.webview.b.b.y
            r3.<init>()
            r2.wp = r3
            return
    }

    public h(android.content.Context r5) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.VW = r0
            r4.VX = r0
            r4.VY = r0
            r4.VZ = r0
            r4.Wa = r0
            r0 = -1
            r4.xI = r0
            r2 = 1000(0x3e8, float:1.401E-42)
            r4.Wf = r2
            com.kwad.sdk.core.webview.e r3 = new com.kwad.sdk.core.webview.e
            r3.<init>()
            r4.Wg = r3
            com.kwad.components.core.webview.b.h$16 r3 = new com.kwad.components.core.webview.b.h$16
            r3.<init>(r4)
            r4.Wh = r3
            com.kwad.components.core.webview.b.h$18 r3 = new com.kwad.components.core.webview.b.h$18
            r3.<init>(r4)
            r4.Wi = r3
            com.kwad.components.core.webview.b.h$19 r3 = new com.kwad.components.core.webview.b.h$19
            r3.<init>(r4)
            r4.Wj = r3
            com.kwad.components.core.webview.b.h$13 r3 = new com.kwad.components.core.webview.b.h$13
            r3.<init>(r4)
            r4.mVideoPlayStateListener = r3
            r4.mContext = r5
            r4.xI = r0
            r4.Wf = r2
            com.kwad.components.core.webview.b.b.y r5 = new com.kwad.components.core.webview.b.b.y
            r5.<init>()
            r4.wp = r5
            return
    }

    public h(android.content.Context r3, int r4) {
            r2 = this;
            r2.<init>()
            r4 = 0
            r2.VW = r4
            r2.VX = r4
            r2.VY = r4
            r2.VZ = r4
            r2.Wa = r4
            r0 = -1
            r2.xI = r0
            r4 = 1000(0x3e8, float:1.401E-42)
            r2.Wf = r4
            com.kwad.sdk.core.webview.e r0 = new com.kwad.sdk.core.webview.e
            r0.<init>()
            r2.Wg = r0
            com.kwad.components.core.webview.b.h$16 r0 = new com.kwad.components.core.webview.b.h$16
            r0.<init>(r2)
            r2.Wh = r0
            com.kwad.components.core.webview.b.h$18 r0 = new com.kwad.components.core.webview.b.h$18
            r0.<init>(r2)
            r2.Wi = r0
            com.kwad.components.core.webview.b.h$19 r0 = new com.kwad.components.core.webview.b.h$19
            r0.<init>(r2)
            r2.Wj = r0
            com.kwad.components.core.webview.b.h$13 r0 = new com.kwad.components.core.webview.b.h$13
            r0.<init>(r2)
            r2.mVideoPlayStateListener = r0
            r2.mContext = r3
            r2.Wf = r4
            com.kwad.components.core.webview.b.b.y r3 = new com.kwad.components.core.webview.b.b.y
            r3.<init>()
            r2.wp = r3
            return
    }

    static long a(com.kwad.components.core.webview.b.h r0, long r1) {
            r0.Db = r1
            return r1
    }

    static android.app.Activity a(com.kwad.components.core.webview.b.h r0, android.app.Activity r1) {
            r0.mActivity = r1
            return r1
    }

    static com.kwad.components.core.webview.b.c.d a(com.kwad.components.core.webview.b.h r0, com.kwad.components.core.webview.b.c.d r1) {
            r0.VP = r1
            return r1
    }

    static com.kwad.components.core.webview.b.h.a a(com.kwad.components.core.webview.b.h r0) {
            com.kwad.components.core.webview.b.h$a r0 = r0.Wh
            return r0
    }

    static void a(com.kwad.components.core.webview.b.h r0, com.kwad.components.core.webview.jshandler.aa.a r1) {
            r0.b(r1)
            return
    }

    static void a(com.kwad.components.core.webview.b.h r0, com.kwad.components.offline.api.tk.TKDownloadListener r1) {
            r0.a(r1)
            return
    }

    static void a(com.kwad.components.core.webview.b.h r0, com.kwad.components.offline.api.tk.model.StyleTemplate r1) {
            r0.b(r1)
            return
    }

    static void a(com.kwad.components.core.webview.b.h r0, com.kwad.components.offline.api.tk.model.StyleTemplate r1, com.kwad.components.core.webview.b.h.a r2) {
            r0.a(r1, r2)
            return
    }

    static void a(com.kwad.components.core.webview.b.h r0, java.lang.String r1) {
            r0.aL(r1)
            return
    }

    static void a(com.kwad.components.core.webview.b.h r0, java.lang.Throwable r1) {
            r0.f(r1)
            return
    }

    private void a(com.kwad.components.offline.api.tk.TKDownloadListener r15) {
            r14 = this;
            com.kwad.components.offline.api.tk.model.StyleTemplate r0 = r14.QO
            if (r0 != 0) goto L27
            com.kwad.sdk.core.response.model.AdTemplate r0 = r14.rL()
            com.kwad.components.core.webview.b.i r1 = r14.VQ
            java.lang.String r1 = r1.getTkTemplateId()
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r0 = com.kwad.sdk.core.response.b.b.c(r0, r1)
            if (r0 != 0) goto L15
            return
        L15:
            com.kwad.components.core.offline.api.b.c r1 = r14.VS
            android.content.Context r2 = r14.mContext
            java.lang.String r3 = r0.templateId
            java.lang.String r4 = r0.templateMd5
            java.lang.String r5 = r0.templateUrl
            long r6 = r0.templateVersionCode
            int r6 = (int) r6
            r7 = r15
            r1.loadTkFileByTemplateId(r2, r3, r4, r5, r6, r7)
            return
        L27:
            com.kwad.components.core.offline.api.b.c r7 = r14.VS
            android.content.Context r8 = r14.mContext
            java.lang.String r9 = r0.templateId
            com.kwad.components.offline.api.tk.model.StyleTemplate r0 = r14.QO
            java.lang.String r10 = r0.templateMd5
            com.kwad.components.offline.api.tk.model.StyleTemplate r0 = r14.QO
            java.lang.String r11 = r0.templateUrl
            com.kwad.components.offline.api.tk.model.StyleTemplate r0 = r14.QO
            int r12 = r0.templateVersionCode
            r13 = r15
            r7.loadTkFileByTemplateId(r8, r9, r10, r11, r12, r13)
            return
    }

    private void a(com.kwad.components.offline.api.tk.model.StyleTemplate r6, com.kwad.components.core.webview.b.h.a r7) {
            r5 = this;
            r5.QO = r6
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "addTKView mTKPlugin.getState(): "
            r0.<init>(r1)
            com.kwad.components.core.offline.api.b.c r1 = r5.VS
            com.kwad.components.offline.api.tk.ITkOfflineCompo$TKState r1 = r1.getState()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "TKLoadController"
            com.kwad.sdk.core.e.c.w(r1, r0)
            com.kwad.components.core.offline.api.b.c r0 = r5.VS
            com.kwad.components.offline.api.tk.ITkOfflineCompo$TKState r0 = r0.getState()
            com.kwad.components.offline.api.tk.ITkOfflineCompo$TKState r1 = com.kwad.components.offline.api.tk.ITkOfflineCompo.TKState.SO_FAIL
            if (r0 != r1) goto L30
            java.lang.String r6 = "so_fail"
            r5.aM(r6)
            if (r7 == 0) goto L2f
            r7.onFailed()
        L2f:
            return
        L30:
            java.lang.String r0 = r6.jsStr
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L43
            java.lang.String r6 = "no_template"
            r5.aN(r6)
            if (r7 == 0) goto L42
            r7.onFailed()
        L42:
            return
        L43:
            r5.rO()     // Catch: java.lang.Throwable -> Lf7
            long r0 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> Lf7
            r5.Wc = r0     // Catch: java.lang.Throwable -> Lf7
            com.kwad.components.core.offline.api.b.c r0 = r5.VS     // Catch: java.lang.Throwable -> Lf7
            android.content.Context r1 = r5.mContext     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r2 = r6.templateId     // Catch: java.lang.Throwable -> Lf7
            int r3 = r6.templateVersionCode     // Catch: java.lang.Throwable -> Lf7
            int r4 = r6.tkSouce     // Catch: java.lang.Throwable -> Lf7
            com.kwad.sdk.components.l r0 = r0.getView(r1, r2, r3, r4)     // Catch: java.lang.Throwable -> Lf7
            int r1 = r0.getUniqId()     // Catch: java.lang.Throwable -> Lf7
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.mAdTemplate     // Catch: java.lang.Throwable -> Lf7
            com.kwad.components.core.offline.api.b.a.a.a(r1, r2)     // Catch: java.lang.Throwable -> Lf7
            com.kwad.sdk.components.j r1 = r5.Wi     // Catch: java.lang.Throwable -> Lf7
            r0.a(r1)     // Catch: java.lang.Throwable -> Lf7
            com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate     // Catch: java.lang.Throwable -> Lf7
            if (r1 == 0) goto L87
            com.kwad.sdk.core.response.model.AdTemplate r1 = r5.mAdTemplate     // Catch: java.lang.Throwable -> Lf7
            com.kwad.sdk.internal.api.SceneImpl r1 = r1.mAdScene     // Catch: java.lang.Throwable -> Lf7
            if (r1 == 0) goto L87
            java.util.Map r1 = r5.rR()     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r2 = "adStyle"
            com.kwad.sdk.core.response.model.AdTemplate r3 = r5.mAdTemplate     // Catch: java.lang.Throwable -> Lf7
            com.kwad.sdk.internal.api.SceneImpl r3 = r3.mAdScene     // Catch: java.lang.Throwable -> Lf7
            int r3 = r3.getAdStyle()     // Catch: java.lang.Throwable -> Lf7
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> Lf7
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lf7
        L87:
            java.util.Map r1 = r5.rR()     // Catch: java.lang.Throwable -> Lf7
            r0.setCustomEnv(r1)     // Catch: java.lang.Throwable -> Lf7
            r5.VU = r0     // Catch: java.lang.Throwable -> Lf7
            com.kwad.sdk.core.webview.c.g r1 = r5.VR     // Catch: java.lang.Throwable -> Lf7
            if (r1 == 0) goto L99
            com.kwad.sdk.core.webview.c.g r1 = r5.VR     // Catch: java.lang.Throwable -> Lf7
            r0.b(r1)     // Catch: java.lang.Throwable -> Lf7
        L99:
            long r1 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> Lf7
            long r3 = r5.Wc     // Catch: java.lang.Throwable -> Lf7
            long r1 = r1 - r3
            r5.mInitTime = r1     // Catch: java.lang.Throwable -> Lf7
            long r1 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> Lf7
            r5.Wb = r1     // Catch: java.lang.Throwable -> Lf7
            r5.rK()     // Catch: java.lang.Throwable -> Lf7
            r5.a(r0)     // Catch: java.lang.Throwable -> Lf7
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> Lf7
            com.kwad.components.core.offline.api.b.c r2 = r5.VS     // Catch: java.lang.Throwable -> Lf7
            android.content.Context r3 = r5.mContext     // Catch: java.lang.Throwable -> Lf7
            com.kwad.components.core.webview.b.i r4 = r5.VQ     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r4 = r4.getTkTemplateId()     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r2 = r2.getJsBaseDir(r3, r4)     // Catch: java.lang.Throwable -> Lf7
            r1.<init>(r2)     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r6 = r6.jsStr     // Catch: java.lang.Throwable -> Lf7
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Lf7
            r2.<init>()     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r1 = r1.getAbsolutePath()     // Catch: java.lang.Throwable -> Lf7
            r2.append(r1)     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r1 = "/"
            r2.append(r1)     // Catch: java.lang.Throwable -> Lf7
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> Lf7
            com.kwad.components.core.webview.b.h$17 r2 = new com.kwad.components.core.webview.b.h$17     // Catch: java.lang.Throwable -> Lf7
            r2.<init>(r5, r7)     // Catch: java.lang.Throwable -> Lf7
            r0.a(r6, r1, r2)     // Catch: java.lang.Throwable -> Lf7
            android.view.View r6 = r0.getView()     // Catch: java.lang.Throwable -> Lf7
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> Lf7
            r1 = -1
            r0.<init>(r1, r1)     // Catch: java.lang.Throwable -> Lf7
            r6.setLayoutParams(r0)     // Catch: java.lang.Throwable -> Lf7
            com.kwad.components.core.webview.b.i r0 = r5.VQ     // Catch: java.lang.Throwable -> Lf7
            android.widget.FrameLayout r0 = r0.getTKContainer()     // Catch: java.lang.Throwable -> Lf7
            r0.addView(r6)     // Catch: java.lang.Throwable -> Lf7
            return
        Lf7:
            r6 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r6)
            r5.f(r6)
            if (r7 == 0) goto L103
            r7.onFailed()
        L103:
            return
    }

    private void a(com.kwad.sdk.components.l r5) {
            r4 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.rL()
            if (r0 == 0) goto L10
            com.kwad.components.core.e.d.c r0 = new com.kwad.components.core.e.d.c
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.rL()
            r0.<init>(r1)
            goto L11
        L10:
            r0 = 0
        L11:
            com.kwad.components.core.webview.b.i r1 = r4.VQ
            com.kwad.sdk.core.webview.e r2 = r4.Wg
            r1.a(r5, r2)
            com.kwad.components.core.webview.b.a.s r1 = new com.kwad.components.core.webview.b.a.s
            r1.<init>()
            com.kwad.components.core.webview.b.h$21 r2 = new com.kwad.components.core.webview.b.h$21
            r2.<init>(r4)
            r1.a(r2)
            a(r5, r1)
            com.kwad.sdk.core.webview.e r1 = r4.Wg
            com.kwad.components.core.webview.jshandler.ab r1 = r4.c(r1)
            a(r5, r1)
            com.kwad.sdk.core.webview.d.a r1 = new com.kwad.sdk.core.webview.d.a
            r1.<init>()
            a(r5, r1)
            com.kwad.components.core.webview.b.a.f r1 = new com.kwad.components.core.webview.b.a.f
            r1.<init>()
            a(r5, r1)
            boolean r1 = r4.mS()
            if (r1 == 0) goto L4f
            com.kwad.components.core.webview.jshandler.o r1 = new com.kwad.components.core.webview.jshandler.o
            com.kwad.sdk.core.webview.e r2 = r4.Wg
            r1.<init>(r2, r0, r4)
            goto L56
        L4f:
            com.kwad.components.core.webview.jshandler.r r1 = new com.kwad.components.core.webview.jshandler.r
            com.kwad.sdk.core.webview.e r2 = r4.Wg
            r1.<init>(r2, r0, r4)
        L56:
            a(r5, r1)
            com.kwad.components.core.webview.jshandler.q r1 = new com.kwad.components.core.webview.jshandler.q
            r1.<init>()
            a(r5, r1)
            com.kwad.components.core.webview.b.a.k r1 = new com.kwad.components.core.webview.b.a.k
            r1.<init>()
            a(r5, r1)
            com.kwad.components.core.webview.jshandler.u r1 = new com.kwad.components.core.webview.jshandler.u
            com.kwad.sdk.core.webview.e r2 = r4.Wg
            r1.<init>(r2)
            a(r5, r1)
            com.kwad.components.core.webview.jshandler.x r1 = new com.kwad.components.core.webview.jshandler.x
            com.kwad.sdk.core.webview.e r2 = r4.Wg
            r1.<init>(r2)
            a(r5, r1)
            com.kwad.components.core.webview.jshandler.t r1 = new com.kwad.components.core.webview.jshandler.t
            com.kwad.sdk.core.webview.e r2 = r4.Wg
            r1.<init>(r2)
            com.kwad.components.core.webview.b.h$22 r2 = new com.kwad.components.core.webview.b.h$22
            r2.<init>(r4)
            r1.a(r2)
            a(r5, r1)
            com.kwad.components.core.webview.jshandler.aa r1 = new com.kwad.components.core.webview.jshandler.aa
            com.kwad.sdk.core.webview.e r2 = r4.Wg
            com.kwad.components.core.webview.b.h$2 r3 = new com.kwad.components.core.webview.b.h$2
            r3.<init>(r4)
            r1.<init>(r2, r3)
            a(r5, r1)
            com.kwad.components.core.webview.jshandler.ah r1 = new com.kwad.components.core.webview.jshandler.ah
            com.kwad.components.core.webview.b.h$3 r2 = new com.kwad.components.core.webview.b.h$3
            r2.<init>(r4)
            r1.<init>(r2)
            a(r5, r1)
            com.kwad.components.core.webview.jshandler.am r1 = new com.kwad.components.core.webview.jshandler.am
            r1.<init>()
            a(r5, r1)
            com.kwad.components.core.webview.b.i r2 = r4.VQ
            r2.a(r1)
            com.kwad.components.core.webview.jshandler.ap r1 = new com.kwad.components.core.webview.jshandler.ap
            com.kwad.sdk.core.webview.e r2 = r4.Wg
            r1.<init>(r2, r0)
            a(r5, r1)
            com.kwad.components.core.webview.b.a.p r1 = new com.kwad.components.core.webview.b.a.p
            r1.<init>()
            r4.VV = r1
            a(r5, r1)
            com.kwad.components.core.webview.b.i r1 = r4.VQ
            com.kwad.components.core.webview.b.a.p r2 = r4.VV
            r1.a(r2)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.rL()
            if (r1 == 0) goto L107
            com.kwad.sdk.core.response.model.AdTemplate r1 = r4.rL()
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            boolean r1 = com.kwad.sdk.core.response.b.a.ax(r1)
            if (r1 == 0) goto L107
            com.kwad.components.core.webview.b.a.l r1 = new com.kwad.components.core.webview.b.a.l
            r1.<init>()
            a(r5, r1)
            com.kwad.components.core.webview.b.h$4 r2 = new com.kwad.components.core.webview.b.h$4
            com.kwad.sdk.core.response.model.AdTemplate r3 = r4.rL()
            r2.<init>(r4, r3, r1)
            r4.Tj = r2
            com.kwad.sdk.core.download.c r1 = com.kwad.sdk.core.download.c.Aw()
            com.kwad.sdk.core.download.e r2 = r4.Tj
            com.kwad.sdk.core.response.model.AdTemplate r3 = r4.rL()
            r1.a(r2, r3)
        L107:
            com.kwad.components.core.webview.b.a.t r1 = new com.kwad.components.core.webview.b.a.t
            r1.<init>()
            com.kwad.components.core.webview.b.h$5 r2 = new com.kwad.components.core.webview.b.h$5
            r2.<init>(r4)
            r1.a(r2)
            a(r5, r1)
            com.kwad.components.core.webview.b.a.u r1 = new com.kwad.components.core.webview.b.a.u
            r1.<init>()
            com.kwad.components.core.webview.b.h$6 r2 = new com.kwad.components.core.webview.b.h$6
            r2.<init>(r4)
            r1.a(r2)
            a(r5, r1)
            com.kwad.components.core.webview.b.a.o r1 = new com.kwad.components.core.webview.b.a.o
            r1.<init>()
            a(r5, r1)
            com.kwad.components.core.webview.b.i r2 = r4.VQ
            r2.a(r1)
            com.kwad.components.core.webview.b.h$7 r1 = new com.kwad.components.core.webview.b.h$7
            r1.<init>(r4)
            a(r5, r1)
            com.kwad.components.core.webview.b.h$8 r1 = new com.kwad.components.core.webview.b.h$8
            r1.<init>(r4)
            a(r5, r1)
            com.kwad.components.core.webview.jshandler.p r1 = new com.kwad.components.core.webview.jshandler.p
            com.kwad.components.core.webview.b.h$9 r2 = new com.kwad.components.core.webview.b.h$9
            r2.<init>(r4)
            r1.<init>(r2)
            a(r5, r1)
            com.kwad.components.core.webview.b.h$10 r1 = new com.kwad.components.core.webview.b.h$10
            r1.<init>(r4)
            a(r5, r1)
            com.kwad.components.core.webview.b.h$11 r1 = new com.kwad.components.core.webview.b.h$11
            r1.<init>(r4)
            a(r5, r1)
            com.kwad.components.core.webview.b.a.a r1 = new com.kwad.components.core.webview.b.a.a
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.rL()
            r1.<init>(r2)
            a(r5, r1)
            com.kwad.components.core.webview.b.a r1 = new com.kwad.components.core.webview.b.a
            com.kwad.sdk.core.response.model.AdTemplate r2 = r4.rL()
            r1.<init>(r2)
            a(r5, r1)
            com.kwad.sdk.core.webview.e r1 = r4.Wg
            com.kwad.components.core.webview.b.i r2 = r4.VQ
            android.widget.FrameLayout r2 = r2.getTKContainer()
            r4.a(r1, r0, r5, r2)
            return
    }

    private static void a(com.kwad.sdk.components.l r0, com.kwad.sdk.core.webview.c.a r1) {
            r0.c(r1)
            return
    }

    static boolean a(com.kwad.components.core.webview.b.h r0, boolean r1) {
            r1 = 1
            r0.VW = r1
            return r1
    }

    private void aL(java.lang.String r1) {
            r0 = this;
            r0.rM()
            r0.aM(r1)
            return
    }

    private void aM(java.lang.String r5) {
            r4 = this;
            com.kwad.components.offline.api.tk.model.StyleTemplate r0 = r4.rJ()
            if (r0 != 0) goto L7
            return
        L7:
            com.kwad.components.offline.api.tk.TkLoggerReporter r1 = com.kwad.components.offline.api.tk.TkLoggerReporter.get()
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r2 = new com.kwad.components.offline.api.tk.model.report.TKPerformMsg
            int r3 = r4.Wa
            r2.<init>(r3)
            r3 = 4
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r2 = r2.setRenderState(r3)
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r5 = r2.setErrorReason(r5)
            com.kwad.components.core.webview.b.i r2 = r4.VQ
            java.lang.String r2 = r2.getTkTemplateId()
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r5 = r5.setTemplateId(r2)
            int r0 = r0.templateVersionCode
            java.lang.String r0 = java.lang.String.valueOf(r0)
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r5 = r5.setVersionCode(r0)
            org.json.JSONObject r5 = r5.toJson()
            java.lang.String r0 = "ad_client_error_log"
            r1.reportTKPerform(r0, r5)
            return
    }

    private void aN(java.lang.String r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "logTkRenderFail : "
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r1 = ", templateId = "
            r0.append(r1)
            com.kwad.components.core.webview.b.i r1 = r3.VQ
            java.lang.String r1 = r1.getTkTemplateId()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "tkRender"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = r3.VX
            if (r0 == 0) goto L60
            boolean r0 = r3.VY
            if (r0 == 0) goto L2a
            goto L60
        L2a:
            r0 = 1
            r3.VY = r0
            com.kwad.components.offline.api.tk.TkLoggerReporter r0 = com.kwad.components.offline.api.tk.TkLoggerReporter.get()
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r1 = new com.kwad.components.offline.api.tk.model.report.TKPerformMsg
            int r2 = r3.Wa
            r1.<init>(r2)
            r2 = 2
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r1 = r1.setRenderState(r2)
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r4 = r1.setErrorReason(r4)
            com.kwad.components.core.webview.b.i r1 = r3.VQ
            java.lang.String r1 = r1.getTkTemplateId()
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r4 = r4.setTemplateId(r1)
            com.kwad.components.offline.api.tk.model.StyleTemplate r1 = r3.QO
            int r1 = r1.templateVersionCode
            java.lang.String r1 = java.lang.String.valueOf(r1)
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r4 = r4.setVersionCode(r1)
            org.json.JSONObject r4 = r4.toJson()
            java.lang.String r1 = "ad_client_error_log"
            r0.reportTKPerform(r1, r4)
        L60:
            return
    }

    static void b(com.kwad.components.core.webview.b.h r0) {
            r0.rM()
            return
    }

    static void b(com.kwad.components.core.webview.b.h r0, java.lang.String r1) {
            r0.aN(r1)
            return
    }

    private void b(com.kwad.components.core.webview.jshandler.aa.a r5) {
            r4 = this;
            com.kwad.components.core.webview.b.i r0 = r4.VQ
            android.widget.FrameLayout r0 = r0.getTKContainer()
            if (r0 == 0) goto L40
            android.view.ViewGroup$LayoutParams r1 = r0.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r1 = (android.widget.FrameLayout.LayoutParams) r1
            android.content.Context r2 = r4.mContext
            int r3 = r5.height
            float r3 = (float) r3
            int r2 = com.kwad.sdk.d.a.a.a(r2, r3)
            r1.height = r2
            android.content.Context r2 = r4.mContext
            int r3 = r5.leftMargin
            float r3 = (float) r3
            int r2 = com.kwad.sdk.d.a.a.a(r2, r3)
            r1.leftMargin = r2
            android.content.Context r2 = r4.mContext
            int r3 = r5.rightMargin
            float r3 = (float) r3
            int r2 = com.kwad.sdk.d.a.a.a(r2, r3)
            r1.rightMargin = r2
            android.content.Context r2 = r4.mContext
            int r5 = r5.bottomMargin
            float r5 = (float) r5
            int r5 = com.kwad.sdk.d.a.a.a(r2, r5)
            r1.bottomMargin = r5
            r5 = -1
            r1.width = r5
            r0.setLayoutParams(r1)
        L40:
            return
    }

    private void b(com.kwad.components.offline.api.tk.model.StyleTemplate r6) {
            r5 = this;
            java.lang.String r0 = r6.templateId
            java.lang.String r1 = r6.templateUrl
            java.lang.String r2 = ""
            java.lang.String r3 = "renderType_tk"
            com.kwad.sdk.utils.i.e(r2, r3, r0, r1)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "读取完毕，总耗时"
            r0.<init>(r1)
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r3 = r5.Db
            long r1 = r1 - r3
            r0.append(r1)
            java.lang.String r1 = ", 读取成功"
            r0.append(r1)
            java.lang.String r1 = r6.templateId
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "TKLoadController"
            com.kwad.sdk.core.e.c.d(r1, r0)
            boolean r0 = r5.VW
            if (r0 == 0) goto L34
            return
        L34:
            java.lang.String r0 = "没有超时"
            com.kwad.sdk.core.e.c.d(r1, r0)
            java.lang.Runnable r0 = r5.Wj
            com.kwad.sdk.utils.bj.b(r0)
            com.kwad.components.core.webview.b.h$12 r0 = new com.kwad.components.core.webview.b.h$12
            r0.<init>(r5, r6)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
    }

    static boolean b(com.kwad.components.core.webview.b.h r0, boolean r1) {
            r1 = 1
            r0.VZ = r1
            return r1
    }

    static android.app.Activity c(com.kwad.components.core.webview.b.h r0) {
            android.app.Activity r0 = r0.mActivity
            return r0
    }

    static void d(com.kwad.components.core.webview.b.h r0) {
            r0.rQ()
            return
    }

    static boolean e(com.kwad.components.core.webview.b.h r0) {
            boolean r0 = r0.VZ
            return r0
    }

    static void f(com.kwad.components.core.webview.b.h r0) {
            r0.rP()
            return
    }

    private void f(java.lang.Throwable r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "logTkRenderFail : "
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r1 = ", templateId = "
            r0.append(r1)
            com.kwad.components.core.webview.b.i r1 = r3.VQ
            java.lang.String r1 = r1.getTkTemplateId()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "tkRender"
            com.kwad.sdk.core.e.c.d(r1, r0)
            com.kwad.components.offline.api.tk.TkLoggerReporter r0 = com.kwad.components.offline.api.tk.TkLoggerReporter.get()
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r1 = new com.kwad.components.offline.api.tk.model.report.TKPerformMsg
            int r2 = r3.Wa
            r1.<init>(r2)
            r2 = 3
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r1 = r1.setRenderState(r2)
            java.lang.String r4 = r4.toString()
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r4 = r1.setErrorReason(r4)
            com.kwad.components.core.webview.b.i r1 = r3.VQ
            java.lang.String r1 = r1.getTkTemplateId()
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r4 = r4.setTemplateId(r1)
            com.kwad.components.offline.api.tk.model.StyleTemplate r1 = r3.QO
            int r1 = r1.templateVersionCode
            java.lang.String r1 = java.lang.String.valueOf(r1)
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r4 = r4.setVersionCode(r1)
            org.json.JSONObject r4 = r4.toJson()
            java.lang.String r1 = "ad_client_error_log"
            r0.reportTKPerform(r1, r4)
            return
    }

    static long g(com.kwad.components.core.webview.b.h r2) {
            long r0 = r2.Wc
            return r0
    }

    static long h(com.kwad.components.core.webview.b.h r2) {
            long r0 = r2.Db
            return r0
    }

    static long i(com.kwad.components.core.webview.b.h r2) {
            long r0 = r2.mInitTime
            return r0
    }

    static long j(com.kwad.components.core.webview.b.h r2) {
            long r0 = r2.Wb
            return r0
    }

    static com.kwad.components.core.webview.b.c.d k(com.kwad.components.core.webview.b.h r0) {
            com.kwad.components.core.webview.b.c.d r0 = r0.VP
            return r0
    }

    static com.kwad.components.core.webview.b.b.y l(com.kwad.components.core.webview.b.h r0) {
            com.kwad.components.core.webview.b.b.y r0 = r0.wp
            return r0
    }

    static com.kwad.components.core.webview.b.a.p m(com.kwad.components.core.webview.b.h r0) {
            com.kwad.components.core.webview.b.a.p r0 = r0.VV
            return r0
    }

    static com.kwad.components.offline.api.tk.model.StyleTemplate n(com.kwad.components.core.webview.b.h r0) {
            com.kwad.components.offline.api.tk.model.StyleTemplate r0 = r0.QO
            return r0
    }

    private void rH() {
            r2 = this;
            r0 = 0
            r2.VX = r0
            r2.VY = r0
            r2.VW = r0
            r2.VZ = r0
            r0 = 0
            r2.Db = r0
            r2.Wc = r0
            r2.mInitTime = r0
            r2.Wb = r0
            return
    }

    private void rI() {
            r3 = this;
            java.lang.Runnable r0 = r3.Wj
            int r1 = r3.Wf
            long r1 = (long) r1
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r0, r1)
            java.util.concurrent.ExecutorService r0 = com.kwad.sdk.core.threads.GlobalThreadPools.CW()
            com.kwad.components.core.webview.b.h$1 r1 = new com.kwad.components.core.webview.b.h$1
            r1.<init>(r3)
            java.util.concurrent.Future r0 = r0.submit(r1)
            r3.VT = r0
            return
    }

    private com.kwad.components.offline.api.tk.model.StyleTemplate rJ() {
            r8 = this;
            com.kwad.components.offline.api.tk.model.StyleTemplate r0 = r8.QO
            if (r0 == 0) goto L5
            return r0
        L5:
            com.kwad.sdk.core.response.model.AdTemplate r0 = r8.rL()
            com.kwad.components.core.webview.b.i r1 = r8.VQ
            java.lang.String r1 = r1.getTkTemplateId()
            com.kwad.sdk.core.response.model.AdMatrixInfo$MatrixTemplate r0 = com.kwad.sdk.core.response.b.b.c(r0, r1)
            if (r0 != 0) goto L17
            r0 = 0
            return r0
        L17:
            com.kwad.components.core.offline.api.b.c r1 = r8.VS
            if (r1 != 0) goto L35
            com.kwad.components.offline.api.tk.model.StyleTemplate r1 = new com.kwad.components.offline.api.tk.model.StyleTemplate
            r1.<init>()
            java.lang.String r2 = r0.templateId
            r1.templateId = r2
            java.lang.String r2 = r0.templateMd5
            r1.templateMd5 = r2
            java.lang.String r2 = r0.templateUrl
            r1.templateUrl = r2
            long r2 = r0.templateVersionCode
            int r0 = (int) r2
            r1.templateVersionCode = r0
            r0 = 0
            r1.tkSouce = r0
            goto L44
        L35:
            android.content.Context r2 = r8.mContext
            java.lang.String r3 = r0.templateId
            java.lang.String r4 = r0.templateMd5
            java.lang.String r5 = r0.templateUrl
            long r6 = r0.templateVersionCode
            int r6 = (int) r6
            com.kwad.components.offline.api.tk.model.StyleTemplate r1 = r1.checkStyleTemplateById(r2, r3, r4, r5, r6)
        L44:
            return r1
    }

    private void rK() {
            r5 = this;
            com.kwad.sdk.core.webview.e r0 = r5.Wg
            boolean r1 = com.kwad.sdk.utils.ai.IN()
            r1 = r1 ^ 1
            com.kwad.components.core.webview.b.i r2 = r5.VQ
            com.kwad.sdk.widget.e r2 = r2.getTouchCoordsView()
            com.kwad.components.core.webview.b.i r3 = r5.VQ
            android.widget.FrameLayout r3 = r3.getTKContainer()
            com.kwad.components.core.webview.b.i r4 = r5.VQ
            java.lang.String r4 = r4.getTkTemplateId()
            r0.a(r1, r2, r3, r4)
            return
    }

    private void rM() {
            r1 = this;
            com.kwad.components.core.webview.b.h$20 r0 = new com.kwad.components.core.webview.b.h$20
            r0.<init>(r1)
            com.kwad.sdk.utils.bj.postOnUiThread(r0)
            return
    }

    private void rN() {
            r4 = this;
            com.kwad.components.offline.api.tk.model.StyleTemplate r0 = r4.rJ()
            if (r0 != 0) goto L7
            return
        L7:
            int r1 = r0.tkSouce
            r4.Wa = r1
            com.kwad.components.offline.api.tk.TkLoggerReporter r1 = com.kwad.components.offline.api.tk.TkLoggerReporter.get()
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r2 = new com.kwad.components.offline.api.tk.model.report.TKPerformMsg
            int r3 = r4.Wa
            r2.<init>(r3)
            r3 = -1
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r2 = r2.setRenderState(r3)
            com.kwad.components.core.webview.b.i r3 = r4.VQ
            java.lang.String r3 = r3.getTkTemplateId()
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r2 = r2.setTemplateId(r3)
            int r0 = r0.templateVersionCode
            java.lang.String r0 = java.lang.String.valueOf(r0)
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r0 = r2.setVersionCode(r0)
            org.json.JSONObject r0 = r0.toJson()
            java.lang.String r2 = "ad_client_apm_log"
            r1.reportTKPerform(r2, r0)
            return
    }

    private void rO() {
            r3 = this;
            r0 = 1
            r3.VX = r0
            com.kwad.components.offline.api.tk.TkLoggerReporter r0 = com.kwad.components.offline.api.tk.TkLoggerReporter.get()
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r1 = new com.kwad.components.offline.api.tk.model.report.TKPerformMsg
            int r2 = r3.Wa
            r1.<init>(r2)
            r2 = 0
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r1 = r1.setRenderState(r2)
            com.kwad.components.core.webview.b.i r2 = r3.VQ
            java.lang.String r2 = r2.getTkTemplateId()
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r1 = r1.setTemplateId(r2)
            com.kwad.components.offline.api.tk.model.StyleTemplate r2 = r3.QO
            int r2 = r2.templateVersionCode
            java.lang.String r2 = java.lang.String.valueOf(r2)
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r1 = r1.setVersionCode(r2)
            org.json.JSONObject r1 = r1.toJson()
            java.lang.String r2 = "ad_client_apm_log"
            r0.reportTKPerform(r2, r1)
            return
    }

    private void rP() {
            r6 = this;
            boolean r0 = r6.VX
            if (r0 == 0) goto L5d
            boolean r0 = r6.VY
            if (r0 == 0) goto L9
            goto L5d
        L9:
            r0 = 1
            r6.VY = r0
            long r1 = r6.Wb
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L1c
            long r1 = android.os.SystemClock.elapsedRealtime()
            long r3 = r6.Wb
            long r3 = r1 - r3
        L1c:
            com.kwad.components.offline.api.tk.TkLoggerReporter r1 = com.kwad.components.offline.api.tk.TkLoggerReporter.get()
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r2 = new com.kwad.components.offline.api.tk.model.report.TKPerformMsg
            int r5 = r6.Wa
            r2.<init>(r5)
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r0 = r2.setRenderState(r0)
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r0 = r0.setRenderTime(r3)
            com.kwad.components.core.webview.b.i r2 = r6.VQ
            java.lang.String r2 = r2.getTkTemplateId()
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r0 = r0.setTemplateId(r2)
            long r2 = r6.Wc
            long r4 = r6.Db
            long r2 = r2 - r4
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r0 = r0.setLoadTime(r2)
            long r2 = r6.mInitTime
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r0 = r0.setInitTime(r2)
            com.kwad.components.offline.api.tk.model.StyleTemplate r2 = r6.QO
            int r2 = r2.templateVersionCode
            java.lang.String r2 = java.lang.String.valueOf(r2)
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r0 = r0.setVersionCode(r2)
            org.json.JSONObject r0 = r0.toJson()
            java.lang.String r2 = "ad_client_apm_log"
            r1.reportTKPerform(r2, r0)
        L5d:
            return
    }

    private void rQ() {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "logTkRenderFail : timeout, templateId = "
            r0.<init>(r1)
            com.kwad.components.core.webview.b.i r1 = r4.VQ
            java.lang.String r1 = r1.getTkTemplateId()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "tkRender"
            com.kwad.sdk.core.e.c.d(r1, r0)
            com.kwad.components.offline.api.tk.model.StyleTemplate r0 = r4.rJ()
            if (r0 != 0) goto L20
            return
        L20:
            com.kwad.components.offline.api.tk.TkLoggerReporter r1 = com.kwad.components.offline.api.tk.TkLoggerReporter.get()
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r2 = new com.kwad.components.offline.api.tk.model.report.TKPerformMsg
            int r3 = r4.Wa
            r2.<init>(r3)
            r3 = 3
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r2 = r2.setRenderState(r3)
            java.lang.String r3 = "timeout"
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r2 = r2.setErrorReason(r3)
            com.kwad.components.core.webview.b.i r3 = r4.VQ
            java.lang.String r3 = r3.getTkTemplateId()
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r2 = r2.setTemplateId(r3)
            int r0 = r0.templateVersionCode
            java.lang.String r0 = java.lang.String.valueOf(r0)
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r0 = r2.setVersionCode(r0)
            org.json.JSONObject r0 = r0.toJson()
            java.lang.String r2 = "ad_client_error_log"
            r1.reportTKPerform(r2, r0)
            return
    }

    private java.util.Map<java.lang.String, java.lang.Object> rR() {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r3.Wd
            if (r0 != 0) goto L27
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r3.Wd = r0
            java.lang.String r1 = "TKVersion"
            java.lang.String r2 = "5.0.3"
            r0.put(r1, r2)
            java.util.Map<java.lang.String, java.lang.Object> r0 = r3.Wd
            java.lang.String r1 = "SDKVersion"
            java.lang.String r2 = "3.3.42"
            r0.put(r1, r2)
            java.util.Map<java.lang.String, java.lang.Object> r0 = r3.Wd
            r1 = 1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "sdkType"
            r0.put(r2, r1)
        L27:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r3.Wd
            return r0
    }

    private void rS() {
            r10 = this;
            java.lang.String r0 = "TKLoadController"
            com.kwad.components.core.offline.api.b.c r1 = r10.VS
            if (r1 == 0) goto La9
            com.kwad.sdk.components.l r1 = r10.VU
            if (r1 != 0) goto Lc
            goto La9
        Lc:
            java.io.File r1 = new java.io.File
            com.kwad.components.core.offline.api.b.c r2 = r10.VS
            android.content.Context r3 = r10.mContext
            com.kwad.components.core.webview.b.i r4 = r10.VQ
            java.lang.String r4 = r4.getTkTemplateId()
            java.lang.String r2 = r2.getJsBaseDir(r3, r4)
            r1.<init>(r2)
            java.io.File r2 = new java.io.File
            java.lang.String r3 = "kcov.json"
            r2.<init>(r1, r3)
            boolean r1 = r2.exists()
            if (r1 != 0) goto L2d
            return
        L2d:
            java.lang.String r1 = com.kwad.sdk.utils.q.V(r2)     // Catch: java.lang.Throwable -> La5
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> La5
            if (r2 == 0) goto L38
            return
        L38:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La5
            java.lang.String r3 = "kcov.json:"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> La5
            r2.append(r1)     // Catch: java.lang.Throwable -> La5
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> La5
            com.kwad.sdk.core.e.c.d(r0, r2)     // Catch: java.lang.Throwable -> La5
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> La5
            r2.<init>(r1)     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = "gitHeadCommit"
            java.lang.String r8 = r2.getString(r1)     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = "coverageApi"
            java.lang.String r7 = r2.getString(r1)     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = "coverageTaskId"
            java.lang.String r5 = r2.getString(r1)     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = "currentBranch"
            java.lang.String r6 = r2.getString(r1)     // Catch: java.lang.Throwable -> La5
            boolean r1 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> La5
            if (r1 != 0) goto L9f
            boolean r1 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> La5
            if (r1 != 0) goto L9f
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> La5
            if (r1 != 0) goto L9f
            boolean r1 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> La5
            if (r1 == 0) goto L7f
            goto L9f
        L7f:
            java.lang.String r1 = "尝试获取覆盖率统计..."
            com.kwad.sdk.core.e.c.d(r0, r1)     // Catch: java.lang.Throwable -> La5
            com.kwad.sdk.components.l r0 = r10.VU     // Catch: java.lang.Throwable -> La5
            java.lang.String r1 = "JSON.stringify(this.__coverage__)"
            java.lang.Object r0 = r0.execute(r1)     // Catch: java.lang.Throwable -> La5
            boolean r1 = r0 instanceof java.lang.String     // Catch: java.lang.Throwable -> La5
            if (r1 != 0) goto L91
            return
        L91:
            r9 = r0
            java.lang.String r9 = (java.lang.String) r9     // Catch: java.lang.Throwable -> La5
            com.kwad.components.core.webview.b.h$15 r0 = new com.kwad.components.core.webview.b.h$15     // Catch: java.lang.Throwable -> La5
            r3 = r0
            r4 = r10
            r3.<init>(r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> La5
            com.kwad.sdk.utils.g.execute(r0)     // Catch: java.lang.Throwable -> La5
            return
        L9f:
            java.lang.String r1 = "kcov.json数据不合法，缺少关键字段gitHeadCommit | coverageApi | coverageTaskId | currentBranch"
            com.kwad.sdk.core.e.c.d(r0, r1)     // Catch: java.lang.Throwable -> La5
            return
        La5:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
        La9:
            return
    }

    static java.util.Map rT() {
            java.util.Map<java.lang.Integer, java.lang.ref.WeakReference<com.kwad.components.core.webview.b.c.d>> r0 = com.kwad.components.core.webview.b.h.We
            return r0
    }

    public void a(android.app.Activity r1, com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.components.core.webview.b.i r3) {
            r0 = this;
            r0.mActivity = r1
            r0.mAdTemplate = r2
            com.kwad.sdk.core.webview.e r1 = r0.Wg
            r1.setAdTemplate(r2)
            r0.VQ = r3
            r0.rH()
            com.kwad.components.core.webview.b.i r1 = r0.VQ
            android.widget.FrameLayout r1 = r1.getTKContainer()
            if (r1 == 0) goto L19
            r1.removeAllViews()
        L19:
            boolean r1 = com.kwad.sdk.core.config.d.isCanUseTk()
            if (r1 != 0) goto L23
            r0.rM()
            return
        L23:
            java.lang.Class<com.kwad.components.core.offline.api.b.c> r1 = com.kwad.components.core.offline.api.b.c.class
            com.kwad.sdk.components.a r1 = com.kwad.sdk.components.c.f(r1)
            com.kwad.components.core.offline.api.b.c r1 = (com.kwad.components.core.offline.api.b.c) r1
            r0.VS = r1
            r0.rN()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "bind mTKPlugin: "
            r1.<init>(r2)
            com.kwad.components.core.offline.api.b.c r2 = r0.VS
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "TKLoadController"
            com.kwad.sdk.core.e.c.d(r2, r1)
            com.kwad.components.core.offline.api.b.c r1 = r0.VS
            if (r1 == 0) goto L4d
            r0.rI()
            return
        L4d:
            r0.rM()
            com.kwad.components.offline.api.tk.TkLoggerReporter r1 = com.kwad.components.offline.api.tk.TkLoggerReporter.get()
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r2 = new com.kwad.components.offline.api.tk.model.report.TKPerformMsg
            int r3 = r0.Wa
            r2.<init>(r3)
            r3 = 4
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r2 = r2.setRenderState(r3)
            java.lang.String r3 = "offline_failed"
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r2 = r2.setErrorReason(r3)
            com.kwad.components.core.webview.b.i r3 = r0.VQ
            java.lang.String r3 = r3.getTkTemplateId()
            com.kwad.components.offline.api.tk.model.report.TKPerformMsg r2 = r2.setTemplateId(r3)
            org.json.JSONObject r2 = r2.toJson()
            java.lang.String r3 = "ad_client_error_log"
            r1.reportTKPerform(r3, r2)
            return
    }

    public final void a(com.kwad.components.offline.api.tk.model.StyleTemplate r1) {
            r0 = this;
            r0.QO = r1
            return
    }

    protected void a(com.kwad.sdk.core.webview.b r1, com.kwad.components.core.e.d.c r2, com.kwad.sdk.components.l r3, android.view.ViewGroup r4) {
            r0 = this;
            return
    }

    public final void a(com.kwad.sdk.core.webview.c.g r1) {
            r0 = this;
            r0.VR = r1
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.webview.d.b.a r2) {
            r1 = this;
            com.kwad.components.core.webview.b.i r0 = r1.VQ
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public final void a(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            java.util.Map r0 = r1.rR()
            r0.put(r2, r3)
            return
    }

    protected com.kwad.components.core.webview.jshandler.ab c(com.kwad.sdk.core.webview.b r2) {
            r1 = this;
            com.kwad.components.core.webview.jshandler.ab r0 = new com.kwad.components.core.webview.jshandler.ab
            r0.<init>(r2)
            return r0
    }

    @Override
    public final void callJS(java.lang.String r3) {
            r2 = this;
            com.kwad.sdk.components.l r0 = r2.VU
            if (r0 == 0) goto L8
            r1 = 0
            r0.a(r3, r1, r1)
        L8:
            return
    }

    public final java.lang.String getTkTemplateId() {
            r1 = this;
            com.kwad.components.core.webview.b.i r0 = r1.VQ
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.lang.String r0 = r0.getTkTemplateId()
            return r0
    }

    public void jv() {
            r2 = this;
            java.util.concurrent.Future<?> r0 = r2.VT
            if (r0 == 0) goto L8
            r1 = 1
            r0.cancel(r1)
        L8:
            java.lang.Runnable r0 = r2.Wj
            com.kwad.sdk.utils.bj.b(r0)
            com.kwad.sdk.core.download.e r0 = r2.Tj
            if (r0 == 0) goto L1a
            com.kwad.sdk.core.download.c r0 = com.kwad.sdk.core.download.c.Aw()
            com.kwad.sdk.core.download.e r1 = r2.Tj
            r0.a(r1)
        L1a:
            com.kwad.components.core.webview.b.c.d r0 = r2.VP
            if (r0 == 0) goto L21
            r0.dismiss()
        L21:
            java.lang.Boolean r0 = com.kwad.components.core.a.ml
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L2c
            r2.rS()
        L2c:
            com.kwad.components.core.offline.api.b.c r0 = r2.VS
            if (r0 == 0) goto L33
            r0.onDestroy()
        L33:
            com.kwad.sdk.components.l r0 = r2.VU
            if (r0 == 0) goto L49
            int r1 = r0.getUniqId()
            com.kwad.components.core.offline.api.b.a.a.av(r1)
            r1 = 0
            r2.VU = r1
            com.kwad.components.core.webview.b.h$14 r1 = new com.kwad.components.core.webview.b.h$14
            r1.<init>(r2, r0)
            com.kwad.sdk.utils.bj.postOnUiThread(r1)
        L49:
            return
    }

    protected boolean mS() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final com.kwad.sdk.core.webview.b rG() {
            r1 = this;
            com.kwad.sdk.core.webview.e r0 = r1.Wg
            return r0
    }

    protected final com.kwad.sdk.core.response.model.AdTemplate rL() {
            r1 = this;
            com.kwad.sdk.core.webview.e r0 = r1.Wg
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            return r0
    }
}
