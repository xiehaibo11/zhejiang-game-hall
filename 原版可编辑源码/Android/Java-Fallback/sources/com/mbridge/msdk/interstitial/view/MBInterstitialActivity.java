package com.mbridge.msdk.interstitial.view;

public class MBInterstitialActivity extends com.mbridge.msdk.activity.MBBaseActivity implements com.mbridge.msdk.mbjscommon.mraid.b {
    public static final java.lang.String INTENT_CAMAPIGN = "campaign";
    public static final java.lang.String INTENT_UNIT_ID = "unitId";
    public static final long WATI_JS_INVOKE = 2000;
    public static final long WEB_LOAD_TIME = 15000;
    java.lang.Runnable a;
    java.lang.Runnable b;
    private boolean c;
    private boolean d;
    private com.mbridge.msdk.foundation.entity.CampaignEx e;
    private com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView f;
    private android.widget.ImageView g;
    private com.mbridge.msdk.interstitial.c.a.c h;
    private boolean i;
    private com.mbridge.msdk.mbjscommon.mraid.d j;
    private long k;
    private boolean l;
    private boolean m;
    public boolean mIsMBPage;
    public android.widget.ProgressBar mProgressBar;
    public java.lang.String mUnitid;
    private android.os.Handler n;
    private com.mbridge.msdk.click.b o;
















    public MBInterstitialActivity() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            r1.d = r0
            r1.mIsMBPage = r0
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity$1 r0 = new com.mbridge.msdk.interstitial.view.MBInterstitialActivity$1
            r0.<init>(r1)
            r1.n = r0
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity$11 r0 = new com.mbridge.msdk.interstitial.view.MBInterstitialActivity$11
            r0.<init>(r1)
            r1.a = r0
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity$12 r0 = new com.mbridge.msdk.interstitial.view.MBInterstitialActivity$12
            r0.<init>(r1)
            r1.b = r0
            return
    }

    static com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView a(com.mbridge.msdk.interstitial.view.MBInterstitialActivity r0) {
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r0.f
            return r0
    }

    private void a() {
            r2 = this;
            android.content.Intent r0 = r2.getIntent()
            if (r0 == 0) goto L18
            java.lang.String r1 = "unitId"
            java.lang.String r1 = r0.getStringExtra(r1)
            r2.mUnitid = r1
            java.lang.String r1 = "campaign"
            java.io.Serializable r0 = r0.getSerializableExtra(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            r2.e = r0
        L18:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.e
            if (r0 == 0) goto L36
            boolean r0 = r0.isMraid()
            if (r0 == 0) goto L36
            com.mbridge.msdk.mbjscommon.mraid.d r0 = new com.mbridge.msdk.mbjscommon.mraid.d
            r0.<init>(r2)
            r2.j = r0
            r0.c()
            com.mbridge.msdk.mbjscommon.mraid.d r0 = r2.j
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity$13 r1 = new com.mbridge.msdk.interstitial.view.MBInterstitialActivity$13
            r1.<init>(r2)
            r0.a(r1)
        L36:
            return
    }

    static void a(com.mbridge.msdk.interstitial.view.MBInterstitialActivity r5, int r6, java.lang.String r7) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r5.e
            if (r0 == 0) goto L5d
            boolean r0 = r0.isMraid()
            if (r0 == 0) goto L5d
            com.mbridge.msdk.foundation.entity.p r0 = new com.mbridge.msdk.foundation.entity.p
            r0.<init>()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r5.e
            java.lang.String r1 = r1.getRequestId()
            r0.k(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r5.e
            java.lang.String r1 = r1.getRequestIdNotice()
            r0.l(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r5.e
            java.lang.String r1 = r1.getId()
            r0.n(r1)
            r0.d(r6)
            long r1 = java.lang.System.currentTimeMillis()
            long r3 = r5.k
            long r1 = r1 - r3
            java.lang.String r6 = java.lang.String.valueOf(r1)
            r0.q(r6)
            java.lang.String r6 = ""
            r0.f(r6)
            r0.p(r7)
            java.lang.String r6 = "5"
            r0.h(r6)
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r5.e
            boolean r6 = r6.isMraid()
            if (r6 == 0) goto L53
            int r6 = com.mbridge.msdk.foundation.entity.p.a
            goto L55
        L53:
            int r6 = com.mbridge.msdk.foundation.entity.p.b
        L55:
            r0.a(r6)
            java.lang.String r5 = r5.mUnitid
            com.mbridge.msdk.foundation.same.report.c.b(r0, r5)
        L5d:
            return
    }

    static void a(com.mbridge.msdk.interstitial.view.MBInterstitialActivity r0, boolean r1, java.lang.String r2) {
            r0.a(r1, r2)
            return
    }

    private void a(java.lang.String r9) {
            r8 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.getMraidCampaign()
            if (r0 == 0) goto L25
            com.mbridge.msdk.foundation.same.report.d r1 = new com.mbridge.msdk.foundation.same.report.d
            android.content.Context r2 = r8.getApplicationContext()
            r1.<init>(r2)
            java.lang.String r2 = r0.getRequestId()
            java.lang.String r3 = r0.getRequestIdNotice()
            java.lang.String r4 = r0.getId()
            java.lang.String r5 = r8.mUnitid
            boolean r7 = r0.isBidCampaign()
            r6 = r9
            r1.b(r2, r3, r4, r5, r6, r7)
        L25:
            return
    }

    private void a(boolean r3, java.lang.String r4) {
            r2 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.e     // Catch: java.lang.Exception -> L2e
            if (r0 == 0) goto L2d
            java.lang.String r0 = r2.mUnitid     // Catch: java.lang.Exception -> L2e
            boolean r0 = com.mbridge.msdk.foundation.tools.ai.a(r0)     // Catch: java.lang.Exception -> L2e
            if (r0 == 0) goto Ld
            goto L2d
        Ld:
            r2.onIntersClick()     // Catch: java.lang.Exception -> L2e
            com.mbridge.msdk.click.b r0 = r2.o     // Catch: java.lang.Exception -> L2e
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity$5 r1 = new com.mbridge.msdk.interstitial.view.MBInterstitialActivity$5     // Catch: java.lang.Exception -> L2e
            r1.<init>(r2)     // Catch: java.lang.Exception -> L2e
            r0.a(r1)     // Catch: java.lang.Exception -> L2e
            com.mbridge.msdk.click.b r0 = r2.o     // Catch: java.lang.Exception -> L2e
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.e     // Catch: java.lang.Exception -> L2e
            r0.c(r1)     // Catch: java.lang.Exception -> L2e
            if (r3 == 0) goto L32
            boolean r3 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L2e
            if (r3 != 0) goto L32
            r2.a(r4)     // Catch: java.lang.Exception -> L2e
            goto L32
        L2d:
            return
        L2e:
            r3 = move-exception
            r3.printStackTrace()
        L32:
            return
    }

    static boolean a(com.mbridge.msdk.interstitial.view.MBInterstitialActivity r0, boolean r1) {
            r0.i = r1
            return r1
    }

    static com.mbridge.msdk.interstitial.c.a.c b(com.mbridge.msdk.interstitial.view.MBInterstitialActivity r0) {
            com.mbridge.msdk.interstitial.c.a$c r0 = r0.h
            return r0
    }

    private void b() {
            r2 = this;
            java.util.Map<java.lang.String, com.mbridge.msdk.interstitial.c.a$c> r0 = com.mbridge.msdk.interstitial.c.a.e     // Catch: java.lang.Exception -> L2a
            if (r0 == 0) goto L2e
            java.lang.String r0 = r2.mUnitid     // Catch: java.lang.Exception -> L2a
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L2a
            if (r0 != 0) goto L2e
            java.util.Map<java.lang.String, com.mbridge.msdk.interstitial.c.a$c> r0 = com.mbridge.msdk.interstitial.c.a.e     // Catch: java.lang.Exception -> L2a
            java.lang.String r1 = r2.mUnitid     // Catch: java.lang.Exception -> L2a
            boolean r0 = r0.containsKey(r1)     // Catch: java.lang.Exception -> L2a
            if (r0 == 0) goto L2e
            java.util.Map<java.lang.String, com.mbridge.msdk.interstitial.c.a$c> r0 = com.mbridge.msdk.interstitial.c.a.e     // Catch: java.lang.Exception -> L2a
            java.lang.String r1 = r2.mUnitid     // Catch: java.lang.Exception -> L2a
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Exception -> L2a
            com.mbridge.msdk.interstitial.c.a$c r0 = (com.mbridge.msdk.interstitial.c.a.c) r0     // Catch: java.lang.Exception -> L2a
            r2.h = r0     // Catch: java.lang.Exception -> L2a
            java.lang.String r0 = "MBInterstitialActivity"
            java.lang.String r1 = "mShowIntersInnerListener 初始化成功"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)     // Catch: java.lang.Exception -> L2a
            goto L2e
        L2a:
            r0 = move-exception
            r0.printStackTrace()
        L2e:
            return
    }

    static boolean b(com.mbridge.msdk.interstitial.view.MBInterstitialActivity r0, boolean r1) {
            r0.c = r1
            return r1
    }

    private void c() {
            r7 = this;
            com.mbridge.msdk.foundation.same.report.d r0 = new com.mbridge.msdk.foundation.same.report.d
            android.content.Context r1 = r7.getApplicationContext()
            r0.<init>(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.e
            if (r1 == 0) goto L3e
            java.lang.String r1 = r1.getRequestId()
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r7.e
            java.lang.String r2 = r2.getRequestIdNotice()
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r7.e
            java.lang.String r3 = r3.getId()
            java.lang.String r4 = r7.mUnitid
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r7.e
            java.lang.String r5 = r5.getId()
            java.lang.String r5 = com.mbridge.msdk.mbjscommon.mraid.c.a(r5)
            com.mbridge.msdk.foundation.entity.CampaignEx r6 = r7.e
            boolean r6 = r6.isBidCampaign()
            r0.a(r1, r2, r3, r4, r5, r6)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.e
            java.lang.String r0 = r0.getId()
            com.mbridge.msdk.mbjscommon.mraid.c.b(r0)
            r0 = 1
            r7.l = r0
        L3e:
            return
    }

    static boolean c(com.mbridge.msdk.interstitial.view.MBInterstitialActivity r0) {
            boolean r0 = r0.i
            return r0
    }

    static boolean c(com.mbridge.msdk.interstitial.view.MBInterstitialActivity r0, boolean r1) {
            r0.d = r1
            return r1
    }

    static android.os.Handler d(com.mbridge.msdk.interstitial.view.MBInterstitialActivity r0) {
            android.os.Handler r0 = r0.n
            return r0
    }

    static void e(com.mbridge.msdk.interstitial.view.MBInterstitialActivity r9) {
            java.lang.String r0 = "true"
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r9.e
            if (r1 == 0) goto Lad
            boolean r1 = r1.isMraid()
            if (r1 == 0) goto Lad
            android.content.res.Resources r1 = r9.getResources()
            android.content.res.Configuration r1 = r1.getConfiguration()
            int r1 = r1.orientation
            if (r1 == 0) goto L27
            r2 = 1
            if (r1 == r2) goto L24
            r2 = 2
            if (r1 == r2) goto L21
            java.lang.String r1 = "UNDEFINED"
            goto L29
        L21:
            java.lang.String r1 = "landscape"
            goto L29
        L24:
            java.lang.String r1 = "portrait"
            goto L29
        L27:
            java.lang.String r1 = "undefined"
        L29:
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.lang.String r3 = "orientation"
            r2.put(r3, r1)     // Catch: java.lang.Exception -> L39
            java.lang.String r1 = "locked"
            r2.put(r1, r0)     // Catch: java.lang.Exception -> L39
            goto L3d
        L39:
            r1 = move-exception
            r1.printStackTrace()
        L3d:
            int r1 = com.mbridge.msdk.foundation.tools.v.x(r9)
            float r1 = (float) r1
            int r3 = com.mbridge.msdk.foundation.tools.v.y(r9)
            float r3 = (float) r3
            android.util.DisplayMetrics r4 = new android.util.DisplayMetrics
            r4.<init>()
            android.view.WindowManager r5 = r9.getWindowManager()
            android.view.Display r5 = r5.getDefaultDisplay()
            r5.getMetrics(r4)
            int r5 = r4.widthPixels
            float r5 = (float) r5
            int r4 = r4.heightPixels
            float r4 = (float) r4
            java.util.HashMap r6 = new java.util.HashMap
            r6.<init>()
            java.lang.String r7 = "placementType"
            java.lang.String r8 = "Interstitial"
            r6.put(r7, r8)
            java.lang.String r7 = "state"
            java.lang.String r8 = "default"
            r6.put(r7, r8)
            java.lang.String r7 = "viewable"
            r6.put(r7, r0)
            java.lang.String r0 = "currentAppOrientation"
            r6.put(r0, r2)
            com.mbridge.msdk.mbjscommon.mraid.a r0 = com.mbridge.msdk.mbjscommon.mraid.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r2 = r9.f
            r0.b(r2, r1, r3)
            com.mbridge.msdk.mbjscommon.mraid.a r0 = com.mbridge.msdk.mbjscommon.mraid.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r9.f
            r0.c(r1, r5, r4)
            com.mbridge.msdk.mbjscommon.mraid.a r0 = com.mbridge.msdk.mbjscommon.mraid.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r9.f
            r0.a(r1, r6)
            com.mbridge.msdk.mbjscommon.mraid.a r0 = com.mbridge.msdk.mbjscommon.mraid.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r9.f
            com.mbridge.msdk.mbjscommon.mraid.d r2 = r9.j
            double r2 = r2.a()
            r0.a(r1, r2)
            com.mbridge.msdk.mbjscommon.mraid.a r0 = com.mbridge.msdk.mbjscommon.mraid.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r9 = r9.f
            r0.a(r9)
        Lad:
            return
    }

    static boolean f(com.mbridge.msdk.interstitial.view.MBInterstitialActivity r0) {
            boolean r0 = r0.d
            return r0
    }

    static com.mbridge.msdk.foundation.entity.CampaignEx g(com.mbridge.msdk.interstitial.view.MBInterstitialActivity r0) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.e
            return r0
    }

    static void h(com.mbridge.msdk.interstitial.view.MBInterstitialActivity r8) {
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La9
            r0.a(r8)     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.e     // Catch: java.lang.Throwable -> La9
            java.lang.String r0 = r0.getImpressionURL()     // Catch: java.lang.Throwable -> La9
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> La9
            if (r0 != 0) goto L2c
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La9
            android.content.Context r1 = r0.j()     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.e     // Catch: java.lang.Throwable -> La9
            java.lang.String r3 = r8.mUnitid     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.e     // Catch: java.lang.Throwable -> La9
            java.lang.String r4 = r0.getImpressionURL()     // Catch: java.lang.Throwable -> La9
            r5 = 0
            r6 = 1
            int r7 = com.mbridge.msdk.click.a.a.g     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> La9
        L2c:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.e     // Catch: java.lang.Throwable -> La9
            java.lang.String r0 = r0.getOnlyImpressionURL()     // Catch: java.lang.Throwable -> La9
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> La9
            if (r0 != 0) goto L51
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La9
            android.content.Context r1 = r0.j()     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.e     // Catch: java.lang.Throwable -> La9
            java.lang.String r3 = r8.mUnitid     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.e     // Catch: java.lang.Throwable -> La9
            java.lang.String r4 = r0.getOnlyImpressionURL()     // Catch: java.lang.Throwable -> La9
            r5 = 0
            r6 = 1
            int r7 = com.mbridge.msdk.click.a.a.h     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.click.b.a(r1, r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> La9
        L51:
            java.lang.String r0 = r8.mUnitid     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.e     // Catch: java.lang.Throwable -> La9
            java.lang.String r2 = "interstitial"
            com.mbridge.msdk.foundation.same.a.d.a(r0, r1, r2)     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity$7 r0 = new com.mbridge.msdk.interstitial.view.MBInterstitialActivity$7     // Catch: java.lang.Throwable -> La9
            r0.<init>(r8)     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.foundation.controller.b r1 = com.mbridge.msdk.foundation.controller.b.a()     // Catch: java.lang.Throwable -> La9
            boolean r1 = r1.d()     // Catch: java.lang.Throwable -> La9
            if (r1 == 0) goto L71
            java.util.concurrent.ThreadPoolExecutor r1 = com.mbridge.msdk.foundation.same.f.b.a()     // Catch: java.lang.Throwable -> La9
            r1.execute(r0)     // Catch: java.lang.Throwable -> La9
            goto L74
        L71:
            r0.run()     // Catch: java.lang.Throwable -> La9
        L74:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.e     // Catch: java.lang.Throwable -> La9
            if (r0 == 0) goto Lb3
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.e     // Catch: java.lang.Throwable -> La9
            java.util.List r0 = r0.getPv_urls()     // Catch: java.lang.Throwable -> La9
            if (r0 == 0) goto Lb3
            int r1 = r0.size()     // Catch: java.lang.Throwable -> La9
            if (r1 <= 0) goto Lb3
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> La9
        L8a:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> La9
            if (r1 == 0) goto Lb3
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> La9
            r5 = r1
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La9
            android.content.Context r2 = r1.j()     // Catch: java.lang.Throwable -> La9
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r8.e     // Catch: java.lang.Throwable -> La9
            java.lang.String r4 = r8.mUnitid     // Catch: java.lang.Throwable -> La9
            r6 = 0
            r7 = 1
            com.mbridge.msdk.click.b.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> La9
            goto L8a
        La9:
            r8 = move-exception
            java.lang.String r8 = r8.getMessage()
            java.lang.String r0 = "MBInterstitialActivity"
            com.mbridge.msdk.foundation.tools.z.a(r0, r8)
        Lb3:
            return
    }

    static boolean i(com.mbridge.msdk.interstitial.view.MBInterstitialActivity r0) {
            boolean r0 = r0.c
            return r0
    }

    static void j(com.mbridge.msdk.interstitial.view.MBInterstitialActivity r2) {
            com.mbridge.msdk.foundation.entity.p r0 = new com.mbridge.msdk.foundation.entity.p     // Catch: java.lang.Exception -> L3a
            r0.<init>()     // Catch: java.lang.Exception -> L3a
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.e     // Catch: java.lang.Exception -> L3a
            java.lang.String r1 = r1.getRequestId()     // Catch: java.lang.Exception -> L3a
            r0.k(r1)     // Catch: java.lang.Exception -> L3a
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.e     // Catch: java.lang.Exception -> L3a
            java.lang.String r1 = r1.getRequestIdNotice()     // Catch: java.lang.Exception -> L3a
            r0.l(r1)     // Catch: java.lang.Exception -> L3a
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.e     // Catch: java.lang.Exception -> L3a
            java.lang.String r1 = r1.getId()     // Catch: java.lang.Exception -> L3a
            r0.n(r1)     // Catch: java.lang.Exception -> L3a
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r2.e     // Catch: java.lang.Exception -> L3a
            boolean r1 = r1.isMraid()     // Catch: java.lang.Exception -> L3a
            if (r1 == 0) goto L2b
            int r1 = com.mbridge.msdk.foundation.entity.p.a     // Catch: java.lang.Exception -> L3a
            goto L2d
        L2b:
            int r1 = com.mbridge.msdk.foundation.entity.p.b     // Catch: java.lang.Exception -> L3a
        L2d:
            r0.a(r1)     // Catch: java.lang.Exception -> L3a
            android.content.Context r1 = r2.getApplicationContext()     // Catch: java.lang.Exception -> L3a
            java.lang.String r2 = r2.mUnitid     // Catch: java.lang.Exception -> L3a
            com.mbridge.msdk.foundation.same.report.c.a(r0, r1, r2)     // Catch: java.lang.Exception -> L3a
            goto L3e
        L3a:
            r2 = move-exception
            r2.printStackTrace()
        L3e:
            return
    }

    static void k(com.mbridge.msdk.interstitial.view.MBInterstitialActivity r2) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r2.e
            if (r0 == 0) goto L14
            boolean r0 = r0.isMraid()
            if (r0 == 0) goto L14
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r2.f
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity$6 r1 = new com.mbridge.msdk.interstitial.view.MBInterstitialActivity$6
            r1.<init>(r2)
            r0.post(r1)
        L14:
            return
    }

    public void clickTracking(boolean r8, java.lang.String r9) {
            r7 = this;
            com.mbridge.msdk.click.b r0 = new com.mbridge.msdk.click.b
            android.content.Context r1 = r7.getApplicationContext()
            java.lang.String r2 = r7.mUnitid
            r0.<init>(r1, r2)
            r7.o = r0
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.e     // Catch: java.lang.Throwable -> L4b
            if (r0 == 0) goto L55
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.e     // Catch: java.lang.Throwable -> L4b
            boolean r0 = r0.needShowIDialog()     // Catch: java.lang.Throwable -> L4b
            if (r0 == 0) goto L55
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity$4 r6 = new com.mbridge.msdk.interstitial.view.MBInterstitialActivity$4     // Catch: java.lang.Throwable -> L4b
            r6.<init>(r7, r8, r9)     // Catch: java.lang.Throwable -> L4b
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.e     // Catch: java.lang.Throwable -> L4b
            boolean r0 = com.mbridge.msdk.click.c.a(r0)     // Catch: java.lang.Throwable -> L4b
            if (r0 == 0) goto L55
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r7.e     // Catch: java.lang.Throwable -> L4b
            boolean r0 = r0.needShowIDialog()     // Catch: java.lang.Throwable -> L4b
            if (r0 == 0) goto L55
            com.mbridge.msdk.click.b r0 = r7.o     // Catch: java.lang.Throwable -> L4b
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r7.e     // Catch: java.lang.Throwable -> L4b
            boolean r0 = r0.b(r1)     // Catch: java.lang.Throwable -> L4b
            if (r0 != 0) goto L47
            com.mbridge.msdk.mbjscommon.confirmation.e r1 = com.mbridge.msdk.mbjscommon.confirmation.e.a()     // Catch: java.lang.Throwable -> L4b
            java.lang.String r2 = ""
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r7.e     // Catch: java.lang.Throwable -> L4b
            java.lang.String r5 = r7.mUnitid     // Catch: java.lang.Throwable -> L4b
            r4 = r7
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L4b
            goto L4a
        L47:
            r7.onIntersClick()     // Catch: java.lang.Throwable -> L4b
        L4a:
            return
        L4b:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "MBInterstitialActivity"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L55:
            r7.a(r8, r9)
            return
    }

    @Override
    public void close() {
            r0 = this;
            r0.finish()
            return
    }

    @Override
    public void expand(java.lang.String r1, boolean r2) {
            r0 = this;
            return
    }

    @Override
    public void finish() {
            r1 = this;
            super.finish()
            boolean r0 = r1.l
            if (r0 != 0) goto La
            r1.c()
        La:
            boolean r0 = r1.m
            if (r0 != 0) goto L11
            r1.reportPlayableClosed()
        L11:
            return
    }

    public com.mbridge.msdk.c.d getIntersUnitSetting() {
            r4 = this;
            r0 = 0
            java.lang.String r1 = r4.mUnitid     // Catch: java.lang.Exception -> L2c
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L2c
            if (r1 == 0) goto La
            return r0
        La:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L2c
            java.lang.String r1 = r1.k()     // Catch: java.lang.Exception -> L2c
            com.mbridge.msdk.c.b r2 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Exception -> L2c
            java.lang.String r3 = r4.mUnitid     // Catch: java.lang.Exception -> L2c
            com.mbridge.msdk.c.d r1 = r2.e(r1, r3)     // Catch: java.lang.Exception -> L2c
            if (r1 != 0) goto L2b
            java.lang.String r1 = "MBInterstitialActivity"
            java.lang.String r2 = "获取默认的unitsetting"
            com.mbridge.msdk.foundation.tools.z.b(r1, r2)     // Catch: java.lang.Exception -> L2c
            java.lang.String r1 = r4.mUnitid     // Catch: java.lang.Exception -> L2c
            com.mbridge.msdk.c.d r1 = com.mbridge.msdk.c.d.f(r1)     // Catch: java.lang.Exception -> L2c
        L2b:
            return r1
        L2c:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    @Override
    public com.mbridge.msdk.foundation.entity.CampaignEx getMraidCampaign() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.e
            return r0
    }

    public void goneWebView() {
            r1 = this;
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity$15 r0 = new com.mbridge.msdk.interstitial.view.MBInterstitialActivity$15     // Catch: java.lang.Exception -> L9
            r0.<init>(r1)     // Catch: java.lang.Exception -> L9
            r1.runOnUiThread(r0)     // Catch: java.lang.Exception -> L9
            goto Ld
        L9:
            r0 = move-exception
            r0.printStackTrace()
        Ld:
            return
    }

    public void hideLoading() {
            r1 = this;
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity$3 r0 = new com.mbridge.msdk.interstitial.view.MBInterstitialActivity$3     // Catch: java.lang.Exception -> L9
            r0.<init>(r1)     // Catch: java.lang.Exception -> L9
            r1.runOnUiThread(r0)     // Catch: java.lang.Exception -> L9
            goto Ld
        L9:
            r0 = move-exception
            r0.printStackTrace()
        Ld:
            return
    }

    public void initView() {
            r3 = this;
            android.content.Context r0 = r3.getApplicationContext()
            java.lang.String r1 = "id"
            java.lang.String r2 = "mbridge_interstitial_wv"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r2, r1)
            android.view.View r0 = r3.findViewById(r0)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = (com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView) r0
            r3.f = r0
            android.content.Context r0 = r3.getApplicationContext()
            java.lang.String r2 = "mbridge_interstitial_pb"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r2, r1)
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ProgressBar r0 = (android.widget.ProgressBar) r0
            r3.mProgressBar = r0
            android.content.Context r0 = r3.getApplicationContext()
            java.lang.String r2 = "mbridge_interstitial_iv_close"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r2, r1)
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.g = r0
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r7) {
            r6 = this;
            super.onCreate(r7)
            android.content.Context r7 = r6.getApplicationContext()     // Catch: java.lang.Exception -> L138
            java.lang.String r0 = "mbridge_interstitial_activity"
            java.lang.String r1 = "layout"
            int r7 = com.mbridge.msdk.foundation.tools.s.a(r7, r0, r1)     // Catch: java.lang.Exception -> L138
            r0 = -1
            if (r7 == r0) goto L123
            r6.setContentView(r7)     // Catch: java.lang.Exception -> L138
            r6.initView()     // Catch: java.lang.Exception -> L138
            r6.a()     // Catch: java.lang.Exception -> L138
            android.widget.ImageView r7 = r6.g     // Catch: java.lang.Exception -> L138
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity$9 r0 = new com.mbridge.msdk.interstitial.view.MBInterstitialActivity$9     // Catch: java.lang.Exception -> L138
            r0.<init>(r6)     // Catch: java.lang.Exception -> L138
            r7.setOnClickListener(r0)     // Catch: java.lang.Exception -> L138
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r7 = r6.f     // Catch: java.lang.Exception -> L138
            if (r7 == 0) goto L4d
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = r6.e     // Catch: java.lang.Exception -> L138
            if (r7 == 0) goto L4d
            com.mbridge.msdk.foundation.webview.BrowserView$MBDownloadListener r7 = new com.mbridge.msdk.foundation.webview.BrowserView$MBDownloadListener     // Catch: java.lang.Exception -> L138
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.e     // Catch: java.lang.Exception -> L138
            r7.<init>(r0)     // Catch: java.lang.Exception -> L138
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.e     // Catch: java.lang.Exception -> L138
            java.lang.String r0 = r0.getAppName()     // Catch: java.lang.Exception -> L138
            r7.setTitle(r0)     // Catch: java.lang.Exception -> L138
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r6.f     // Catch: java.lang.Exception -> L138
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r6.e     // Catch: java.lang.Exception -> L138
            java.lang.String r1 = r1.getId()     // Catch: java.lang.Exception -> L138
            r0.setCampaignId(r1)     // Catch: java.lang.Exception -> L138
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r6.f     // Catch: java.lang.Exception -> L138
            r0.setDownloadListener(r7)     // Catch: java.lang.Exception -> L138
        L4d:
            r6.b()     // Catch: java.lang.Exception -> L138
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = r6.e     // Catch: java.lang.Exception -> Lf4
            if (r7 == 0) goto Le8
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = r6.e     // Catch: java.lang.Exception -> Lf4
            java.lang.String r7 = r7.getHtmlUrl()     // Catch: java.lang.Exception -> Lf4
            boolean r7 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> Lf4
            if (r7 == 0) goto L68
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = r6.e     // Catch: java.lang.Exception -> Lf4
            boolean r7 = r7.isMraid()     // Catch: java.lang.Exception -> Lf4
            if (r7 == 0) goto Le8
        L68:
            java.lang.String r7 = "MBInterstitialActivity"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf4
            r0.<init>()     // Catch: java.lang.Exception -> Lf4
            java.lang.String r1 = "url:"
            r0.append(r1)     // Catch: java.lang.Exception -> Lf4
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r6.e     // Catch: java.lang.Exception -> Lf4
            java.lang.String r1 = r1.getHtmlUrl()     // Catch: java.lang.Exception -> Lf4
            r0.append(r1)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Lf4
            com.mbridge.msdk.foundation.tools.z.b(r7, r0)     // Catch: java.lang.Exception -> Lf4
            r6.goneWebView()     // Catch: java.lang.Exception -> Lf4
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r7 = r6.f     // Catch: java.lang.Exception -> Lf4
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity$10 r0 = new com.mbridge.msdk.interstitial.view.MBInterstitialActivity$10     // Catch: java.lang.Exception -> Lf4
            r0.<init>(r6)     // Catch: java.lang.Exception -> Lf4
            r7.setWebViewListener(r0)     // Catch: java.lang.Exception -> Lf4
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = r6.e     // Catch: java.lang.Exception -> Lf4
            java.lang.String r7 = r7.getHtmlUrl()     // Catch: java.lang.Exception -> Lf4
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.e     // Catch: java.lang.Exception -> Lf4
            boolean r0 = r0.isMraid()     // Catch: java.lang.Exception -> Lf4
            if (r0 == 0) goto Ld3
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> Lf4
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r6.e     // Catch: java.lang.Exception -> Lf4
            java.lang.String r1 = r1.getMraid()     // Catch: java.lang.Exception -> Lf4
            r0.<init>(r1)     // Catch: java.lang.Exception -> Lf4
            boolean r1 = r0.exists()     // Catch: java.lang.Exception -> Lf4
            if (r1 == 0) goto Ld3
            boolean r1 = r0.isFile()     // Catch: java.lang.Exception -> Lf4
            if (r1 == 0) goto Ld3
            boolean r0 = r0.canRead()     // Catch: java.lang.Exception -> Lf4
            if (r0 == 0) goto Ld3
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lf4
            r7.<init>()     // Catch: java.lang.Exception -> Lf4
            java.lang.String r0 = "file:////"
            r7.append(r0)     // Catch: java.lang.Exception -> Lf4
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r6.e     // Catch: java.lang.Exception -> Lf4
            java.lang.String r0 = r0.getMraid()     // Catch: java.lang.Exception -> Lf4
            r7.append(r0)     // Catch: java.lang.Exception -> Lf4
            java.lang.String r7 = r7.toString()     // Catch: java.lang.Exception -> Lf4
        Ld3:
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> Lf4
            r6.k = r0     // Catch: java.lang.Exception -> Lf4
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r6.f     // Catch: java.lang.Exception -> Lf4
            r0.loadUrl(r7)     // Catch: java.lang.Exception -> Lf4
            android.os.Handler r7 = r6.n     // Catch: java.lang.Exception -> Lf4
            java.lang.Runnable r0 = r6.a     // Catch: java.lang.Exception -> Lf4
            r1 = 15000(0x3a98, double:7.411E-320)
            r7.postDelayed(r0, r1)     // Catch: java.lang.Exception -> Lf4
            goto Lf8
        Le8:
            com.mbridge.msdk.interstitial.c.a$c r7 = r6.h     // Catch: java.lang.Exception -> Lf4
            if (r7 == 0) goto Lf8
            com.mbridge.msdk.interstitial.c.a$c r7 = r6.h     // Catch: java.lang.Exception -> Lf4
            java.lang.String r0 = "offerwall htmlurl is null"
            r7.a(r0)     // Catch: java.lang.Exception -> Lf4
            goto Lf8
        Lf4:
            r7 = move-exception
            r7.printStackTrace()     // Catch: java.lang.Exception -> L138
        Lf8:
            com.mbridge.msdk.foundation.controller.a r7 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L138
            r7.a(r6)     // Catch: java.lang.Exception -> L138
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Exception -> L138
            java.lang.String r1 = r6.mUnitid     // Catch: java.lang.Exception -> L138
            r3 = 0
            r4 = 0
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity$8 r5 = new com.mbridge.msdk.interstitial.view.MBInterstitialActivity$8     // Catch: java.lang.Exception -> L138
            r5.<init>(r6)     // Catch: java.lang.Exception -> L138
            r2 = r6
            r0.a(r1, r2, r3, r4, r5)     // Catch: java.lang.Exception -> L138
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = r6.e     // Catch: java.lang.Exception -> L138
            java.lang.String r0 = r6.mUnitid     // Catch: java.lang.Exception -> L138
            r7.setCampaignUnitId(r0)     // Catch: java.lang.Exception -> L138
            com.mbridge.msdk.foundation.b.b r7 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Exception -> L138
            java.lang.String r0 = r6.mUnitid     // Catch: java.lang.Exception -> L138
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r6.e     // Catch: java.lang.Exception -> L138
            r7.a(r0, r1)     // Catch: java.lang.Exception -> L138
            goto L13c
        L123:
            r6.a()     // Catch: java.lang.Exception -> L138
            r6.b()     // Catch: java.lang.Exception -> L138
            com.mbridge.msdk.interstitial.c.a$c r7 = r6.h     // Catch: java.lang.Exception -> L138
            if (r7 == 0) goto L134
            com.mbridge.msdk.interstitial.c.a$c r7 = r6.h     // Catch: java.lang.Exception -> L138
            java.lang.String r0 = "not found resource"
            r7.a(r0)     // Catch: java.lang.Exception -> L138
        L134:
            r6.finish()     // Catch: java.lang.Exception -> L138
            return
        L138:
            r7 = move-exception
            r7.printStackTrace()
        L13c:
            return
    }

    @Override
    protected void onDestroy() {
            r3 = this;
            super.onDestroy()
            com.mbridge.msdk.interstitial.c.a$c r0 = r3.h     // Catch: java.lang.Exception -> L50
            if (r0 == 0) goto Lc
            com.mbridge.msdk.interstitial.c.a$c r0 = r3.h     // Catch: java.lang.Exception -> L50
            r0.b()     // Catch: java.lang.Exception -> L50
        Lc:
            com.mbridge.msdk.click.b r0 = r3.o     // Catch: java.lang.Exception -> L50
            r1 = 0
            if (r0 == 0) goto L21
            com.mbridge.msdk.click.b r0 = r3.o     // Catch: java.lang.Exception -> L50
            r2 = 0
            r0.a(r2)     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.click.b r0 = r3.o     // Catch: java.lang.Exception -> L50
            r0.a(r1)     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.click.b r0 = r3.o     // Catch: java.lang.Exception -> L50
            r0.a()     // Catch: java.lang.Exception -> L50
        L21:
            com.mbridge.msdk.mbjscommon.mraid.d r0 = r3.j     // Catch: java.lang.Exception -> L50
            if (r0 == 0) goto L2a
            com.mbridge.msdk.mbjscommon.mraid.d r0 = r3.j     // Catch: java.lang.Exception -> L50
            r0.d()     // Catch: java.lang.Exception -> L50
        L2a:
            boolean r0 = r3.l     // Catch: java.lang.Exception -> L50
            if (r0 != 0) goto L31
            r3.c()     // Catch: java.lang.Exception -> L50
        L31:
            java.util.Map<java.lang.String, com.mbridge.msdk.interstitial.c.a$c> r0 = com.mbridge.msdk.interstitial.c.a.e     // Catch: java.lang.Exception -> L50
            if (r0 == 0) goto L44
            java.lang.String r0 = r3.mUnitid     // Catch: java.lang.Exception -> L50
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L50
            if (r0 != 0) goto L44
            java.util.Map<java.lang.String, com.mbridge.msdk.interstitial.c.a$c> r0 = com.mbridge.msdk.interstitial.c.a.e     // Catch: java.lang.Exception -> L50
            java.lang.String r2 = r3.mUnitid     // Catch: java.lang.Exception -> L50
            r0.remove(r2)     // Catch: java.lang.Exception -> L50
        L44:
            r3.h = r1     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.b.b r0 = com.mbridge.msdk.foundation.b.b.a()     // Catch: java.lang.Exception -> L50
            java.lang.String r1 = r3.mUnitid     // Catch: java.lang.Exception -> L50
            r0.c(r1)     // Catch: java.lang.Exception -> L50
            goto L54
        L50:
            r0 = move-exception
            r0.printStackTrace()
        L54:
            return
    }

    public void onIntersClick() {
            r1 = this;
            com.mbridge.msdk.interstitial.c.a$c r0 = r1.h     // Catch: java.lang.Exception -> La
            if (r0 == 0) goto Le
            com.mbridge.msdk.interstitial.c.a$c r0 = r1.h     // Catch: java.lang.Exception -> La
            r0.c()     // Catch: java.lang.Exception -> La
            goto Le
        La:
            r0 = move-exception
            r0.printStackTrace()
        Le:
            return
    }

    @Override
    protected void onPause() {
            r3 = this;
            super.onPause()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.e
            if (r0 == 0) goto L18
            boolean r0 = r0.isMraid()
            if (r0 == 0) goto L18
            com.mbridge.msdk.mbjscommon.mraid.a r0 = com.mbridge.msdk.mbjscommon.mraid.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r3.f
            java.lang.String r2 = "false"
            r0.b(r1, r2)
        L18:
            return
    }

    @Override
    protected void onResume() {
            r3 = this;
            super.onResume()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.e
            if (r0 == 0) goto L18
            boolean r0 = r0.isMraid()
            if (r0 == 0) goto L18
            com.mbridge.msdk.mbjscommon.mraid.a r0 = com.mbridge.msdk.mbjscommon.mraid.a.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r3.f
            java.lang.String r2 = "true"
            r0.b(r1, r2)
        L18:
            return
    }

    @Override
    public void open(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Lb
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.e
            r0.setClickURL(r2)
        Lb:
            r0 = 1
            r1.clickTracking(r0, r2)
            return
    }

    public void reportPlayableClosed() {
            r8 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.e
            if (r0 == 0) goto L4c
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            int r7 = com.mbridge.msdk.foundation.tools.v.D(r0)
            com.mbridge.msdk.foundation.entity.p r0 = new com.mbridge.msdk.foundation.entity.p
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.e
            java.lang.String r3 = r1.getId()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.e
            java.lang.String r4 = r1.getRequestId()
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.e
            java.lang.String r5 = r1.getRequestIdNotice()
            java.lang.String r6 = r8.mUnitid
            java.lang.String r2 = "2000061"
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.e
            boolean r1 = r1.isMraid()
            if (r1 == 0) goto L37
            int r1 = com.mbridge.msdk.foundation.entity.p.a
            goto L39
        L37:
            int r1 = com.mbridge.msdk.foundation.entity.p.b
        L39:
            r0.a(r1)
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            java.lang.String r2 = r8.mUnitid
            com.mbridge.msdk.foundation.same.report.c.b(r0, r1, r2)
            r0 = 1
            r8.m = r0
        L4c:
            return
    }

    @Override
    public void setTopControllerPadding(int r2, int r3, int r4, int r5, int r6) {
            r1 = this;
            r2 = 1092616192(0x41200000, float:10.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            if (r3 > 0) goto L9
            r3 = r2
        L9:
            if (r4 > 0) goto Lc
            r4 = r2
        Lc:
            if (r5 > 0) goto Lf
            r5 = r2
        Lf:
            if (r6 > 0) goto L12
            r6 = r2
        L12:
            android.widget.ImageView r2 = r1.g
            if (r2 == 0) goto L2e
            r2 = 1103626240(0x41c80000, float:25.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            r0.<init>(r2, r2)
            r2 = 11
            r0.addRule(r2)
            r0.setMargins(r3, r5, r4, r6)
            android.widget.ImageView r2 = r1.g
            r2.setLayoutParams(r0)
        L2e:
            return
    }

    public void showLoading() {
            r1 = this;
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity$2 r0 = new com.mbridge.msdk.interstitial.view.MBInterstitialActivity$2     // Catch: java.lang.Exception -> L9
            r0.<init>(r1)     // Catch: java.lang.Exception -> L9
            r1.runOnUiThread(r0)     // Catch: java.lang.Exception -> L9
            goto Ld
        L9:
            r0 = move-exception
            r0.printStackTrace()
        Ld:
            return
    }

    public void showWebView() {
            r1 = this;
            com.mbridge.msdk.interstitial.view.MBInterstitialActivity$14 r0 = new com.mbridge.msdk.interstitial.view.MBInterstitialActivity$14     // Catch: java.lang.Exception -> L9
            r0.<init>(r1)     // Catch: java.lang.Exception -> L9
            r1.runOnUiThread(r0)     // Catch: java.lang.Exception -> L9
            goto Ld
        L9:
            r0 = move-exception
            r0.printStackTrace()
        Ld:
            return
    }

    @Override
    public void unload() {
            r0 = this;
            r0.close()
            return
    }

    @Override
    public void useCustomClose(boolean r4) {
            r3 = this;
            if (r4 == 0) goto Le
            android.widget.ImageView r4 = r3.g
            android.graphics.drawable.ColorDrawable r0 = new android.graphics.drawable.ColorDrawable
            r1 = 0
            r0.<init>(r1)
            r4.setImageDrawable(r0)
            goto L1f
        Le:
            android.widget.ImageView r4 = r3.g
            android.content.Context r0 = r3.getApplicationContext()
            java.lang.String r1 = "mbridge_interstitial_close"
            java.lang.String r2 = "drawable"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r0, r1, r2)
            r4.setImageResource(r0)
        L1f:
            return
    }
}
