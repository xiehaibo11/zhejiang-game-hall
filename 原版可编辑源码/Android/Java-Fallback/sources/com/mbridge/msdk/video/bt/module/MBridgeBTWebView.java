package com.mbridge.msdk.video.bt.module;

public class MBridgeBTWebView extends com.mbridge.msdk.video.bt.module.BTBaseView implements com.mbridge.msdk.click.h, com.mbridge.msdk.mbjscommon.mraid.b {
    private java.lang.String p;
    private java.lang.String q;
    private java.lang.String r;
    private boolean s;
    private android.widget.ImageView t;
    private boolean u;
    private com.mbridge.msdk.videocommon.d.c v;
    private java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> w;
    private com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView x;
    private com.mbridge.msdk.video.js.a.j y;
    private android.webkit.WebView z;






    public MBridgeBTWebView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.s = r1
            r0.u = r1
            return
    }

    public MBridgeBTWebView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.s = r1
            r0.u = r1
            return
    }

    static android.webkit.WebView a(com.mbridge.msdk.video.bt.module.MBridgeBTWebView r0, android.webkit.WebView r1) {
            r0.z = r1
            return r1
    }

    static com.mbridge.msdk.video.js.a.j a(com.mbridge.msdk.video.bt.module.MBridgeBTWebView r0) {
            com.mbridge.msdk.video.js.a.j r0 = r0.y
            return r0
    }

    static java.lang.String a(com.mbridge.msdk.video.bt.module.MBridgeBTWebView r0, java.lang.String r1) {
            r0.p = r1
            return r1
    }

    private void a(java.lang.String r4) {
            r3 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b     // Catch: java.lang.Exception -> L2d
            java.lang.String r0 = r0.getClickURL()     // Catch: java.lang.Exception -> L2d
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L2d
            if (r1 != 0) goto L14
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.b     // Catch: java.lang.Exception -> L2d
            r1.setClickURL(r4)     // Catch: java.lang.Exception -> L2d
            r3.b(r4)     // Catch: java.lang.Exception -> L2d
        L14:
            com.mbridge.msdk.click.b r4 = new com.mbridge.msdk.click.b     // Catch: java.lang.Exception -> L2d
            android.content.Context r1 = r3.getContext()     // Catch: java.lang.Exception -> L2d
            java.lang.String r2 = r3.c     // Catch: java.lang.Exception -> L2d
            r4.<init>(r1, r2)     // Catch: java.lang.Exception -> L2d
            r4.a(r3)     // Catch: java.lang.Exception -> L2d
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.b     // Catch: java.lang.Exception -> L2d
            r4.c(r1)     // Catch: java.lang.Exception -> L2d
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r3.b     // Catch: java.lang.Exception -> L2d
            r4.setClickURL(r0)     // Catch: java.lang.Exception -> L2d
            goto L37
        L2d:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            java.lang.String r0 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r4)
        L37:
            return
    }

    static android.webkit.WebView b(com.mbridge.msdk.video.bt.module.MBridgeBTWebView r0) {
            android.webkit.WebView r0 = r0.z
            return r0
    }

    static java.lang.String b(com.mbridge.msdk.video.bt.module.MBridgeBTWebView r0, java.lang.String r1) {
            r0.q = r1
            return r1
    }

    private void b(java.lang.String r9) {
            r8 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.getMraidCampaign()     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L32
            com.mbridge.msdk.foundation.same.report.d r1 = new com.mbridge.msdk.foundation.same.report.d     // Catch: java.lang.Throwable -> L28
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> L28
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L28
            java.lang.String r2 = r0.getRequestId()     // Catch: java.lang.Throwable -> L28
            java.lang.String r3 = r0.getRequestIdNotice()     // Catch: java.lang.Throwable -> L28
            java.lang.String r4 = r0.getId()     // Catch: java.lang.Throwable -> L28
            java.lang.String r5 = r8.c     // Catch: java.lang.Throwable -> L28
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r8.b     // Catch: java.lang.Throwable -> L28
            boolean r7 = r0.isBidCampaign()     // Catch: java.lang.Throwable -> L28
            r6 = r9
            r1.b(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L28
            goto L32
        L28:
            r9 = move-exception
            java.lang.String r9 = r9.getMessage()
            java.lang.String r0 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.a(r0, r9)
        L32:
            return
    }

    static com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView c(com.mbridge.msdk.video.bt.module.MBridgeBTWebView r0) {
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r0.x
            return r0
    }

    static java.lang.String c(com.mbridge.msdk.video.bt.module.MBridgeBTWebView r0, java.lang.String r1) {
            r0.r = r1
            return r1
    }

    static void d(com.mbridge.msdk.video.bt.module.MBridgeBTWebView r0, java.lang.String r1) {
            r0.a(r1)
            return
    }

    public void broadcast(java.lang.String r5, org.json.JSONObject r6) {
            r4 = this;
            java.lang.String r0 = "broadcast"
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r4.x
            if (r1 == 0) goto L45
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L3a
            r1.<init>()     // Catch: java.lang.Exception -> L3a
            java.lang.String r2 = "code"
            int r3 = com.mbridge.msdk.video.bt.module.MBridgeBTWebView.n     // Catch: java.lang.Exception -> L3a
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L3a
            java.lang.String r2 = "id"
            java.lang.String r3 = r4.d     // Catch: java.lang.Exception -> L3a
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L3a
            java.lang.String r2 = "eventName"
            r1.put(r2, r5)     // Catch: java.lang.Exception -> L3a
            java.lang.String r5 = "data"
            r1.put(r5, r6)     // Catch: java.lang.Exception -> L3a
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L3a
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r4.x     // Catch: java.lang.Exception -> L3a
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L3a
            byte[] r1 = r1.getBytes()     // Catch: java.lang.Exception -> L3a
            r2 = 2
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r2)     // Catch: java.lang.Exception -> L3a
            r5.a(r6, r0, r1)     // Catch: java.lang.Exception -> L3a
            goto L45
        L3a:
            com.mbridge.msdk.video.bt.a.c r5 = com.mbridge.msdk.video.bt.a.c.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r6 = r4.x
            java.lang.String r1 = r4.d
            r5.a(r6, r0, r1)
        L45:
            return
    }

    @Override
    public void close() {
            r3 = this;
            android.webkit.WebView r0 = r3.z
            if (r0 == 0) goto Lb
            java.lang.String r1 = r3.d
            java.lang.String r2 = "onPlayerCloseBtnClicked"
            a(r0, r2, r1)
        Lb:
            return
    }

    @Override
    public void expand(java.lang.String r1, boolean r2) {
            r0 = this;
            return
    }

    public java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> getCampaigns() {
            r1 = this;
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r1.w
            return r0
    }

    public java.lang.String getFilePath() {
            r1 = this;
            java.lang.String r0 = r1.q
            return r0
    }

    public java.lang.String getFileURL() {
            r1 = this;
            java.lang.String r0 = r1.p
            return r0
    }

    public java.lang.String getHtml() {
            r1 = this;
            java.lang.String r0 = r1.r
            return r0
    }

    @Override
    public com.mbridge.msdk.foundation.entity.CampaignEx getMraidCampaign() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.b
            return r0
    }

    public com.mbridge.msdk.videocommon.d.c getRewardUnitSetting() {
            r1 = this;
            com.mbridge.msdk.videocommon.d.c r0 = r1.v
            return r0
    }

    public com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView getWebView() {
            r1 = this;
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r1.x
            return r0
    }

    @Override
    public void init(android.content.Context r5) {
            r4 = this;
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = new com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView
            r0.<init>(r5)
            r4.x = r0
            r5 = 0
            r0.setBackgroundColor(r5)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r4.x
            r0.setVisibility(r5)
            com.mbridge.msdk.video.js.a.j r0 = new com.mbridge.msdk.video.js.a.j
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.b
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2 = r4.w
            r3 = 0
            r0.<init>(r3, r1, r2)
            r4.y = r0
            java.lang.String r1 = r4.c
            r0.a(r1)
            com.mbridge.msdk.video.js.a.j r0 = r4.y
            r0.c(r5)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.x
            com.mbridge.msdk.video.js.a.j r0 = r4.y
            r5.setObject(r0)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.x
            r5.setMraidObject(r4)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.x
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView$1 r0 = new com.mbridge.msdk.video.bt.module.MBridgeBTWebView$1
            r0.<init>(r4)
            r5.setWebViewListener(r0)
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.x
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r4.addView(r5, r0)
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView$2 r5 = new com.mbridge.msdk.video.bt.module.MBridgeBTWebView$2
            r5.<init>(r4)
            r4.setOnClickListener(r5)
            android.widget.ImageView r5 = new android.widget.ImageView     // Catch: java.lang.Throwable -> La8
            android.content.Context r0 = r4.getContext()     // Catch: java.lang.Throwable -> La8
            r5.<init>(r0)     // Catch: java.lang.Throwable -> La8
            r4.t = r5     // Catch: java.lang.Throwable -> La8
            java.lang.String r0 = "mbridge_reward_close"
            int r0 = r4.findDrawable(r0)     // Catch: java.lang.Throwable -> La8
            r5.setImageResource(r0)     // Catch: java.lang.Throwable -> La8
            android.widget.FrameLayout$LayoutParams r5 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> La8
            r0 = 96
            r5.<init>(r0, r0)     // Catch: java.lang.Throwable -> La8
            r0 = 8388661(0x800035, float:1.1755018E-38)
            r5.gravity = r0     // Catch: java.lang.Throwable -> La8
            r0 = 30
            r5.setMargins(r0, r0, r0, r0)     // Catch: java.lang.Throwable -> La8
            android.widget.ImageView r0 = r4.t     // Catch: java.lang.Throwable -> La8
            r0.setLayoutParams(r5)     // Catch: java.lang.Throwable -> La8
            android.widget.ImageView r5 = r4.t     // Catch: java.lang.Throwable -> La8
            boolean r0 = r4.s     // Catch: java.lang.Throwable -> La8
            r1 = 4
            if (r0 == 0) goto L82
            r0 = r1
            goto L84
        L82:
            r0 = 8
        L84:
            r5.setVisibility(r0)     // Catch: java.lang.Throwable -> La8
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.b     // Catch: java.lang.Throwable -> La8
            if (r5 == 0) goto L98
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.b     // Catch: java.lang.Throwable -> La8
            boolean r5 = r5.isMraid()     // Catch: java.lang.Throwable -> La8
            if (r5 == 0) goto L98
            android.widget.ImageView r5 = r4.t     // Catch: java.lang.Throwable -> La8
            r5.setVisibility(r1)     // Catch: java.lang.Throwable -> La8
        L98:
            android.widget.ImageView r5 = r4.t     // Catch: java.lang.Throwable -> La8
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView$3 r0 = new com.mbridge.msdk.video.bt.module.MBridgeBTWebView$3     // Catch: java.lang.Throwable -> La8
            r0.<init>(r4)     // Catch: java.lang.Throwable -> La8
            r5.setOnClickListener(r0)     // Catch: java.lang.Throwable -> La8
            android.widget.ImageView r5 = r4.t     // Catch: java.lang.Throwable -> La8
            r4.addView(r5)     // Catch: java.lang.Throwable -> La8
            goto Lb2
        La8:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            java.lang.String r0 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.a(r0, r5)
        Lb2:
            return
    }

    public void notifyEvent(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r2.x
            if (r0 == 0) goto L9
            java.lang.String r1 = r2.d
            a(r0, r3, r1)
        L9:
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r3 = this;
            super.onAttachedToWindow()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r3.b
            if (r0 == 0) goto L32
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.c
            r1.append(r2)
            java.lang.String r2 = "_"
            r1.append(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r3.b
            java.lang.String r2 = r2.getRequestId()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.app.Activity r0 = r0.d(r1)
            if (r0 == 0) goto L32
            com.mbridge.msdk.video.js.a.j r1 = r3.y
            r1.a(r0)
        L32:
            return
    }

    public void onBackPressed() {
            r4 = this;
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r4.x
            if (r0 == 0) goto L11
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r4.x
            java.lang.String r2 = r4.d
            java.lang.String r3 = "onSystemBackPressed"
            r0.a(r1, r3, r2)
        L11:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r5) {
            r4 = this;
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r4.x
            if (r0 == 0) goto L3c
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L38
            r0.<init>()     // Catch: java.lang.Exception -> L38
            int r5 = r5.orientation     // Catch: java.lang.Exception -> L38
            r1 = 2
            java.lang.String r2 = "orientation"
            if (r5 != r1) goto L16
            java.lang.String r5 = "landscape"
            r0.put(r2, r5)     // Catch: java.lang.Exception -> L38
            goto L1b
        L16:
            java.lang.String r5 = "portrait"
            r0.put(r2, r5)     // Catch: java.lang.Exception -> L38
        L1b:
            java.lang.String r5 = "instanceId"
            java.lang.String r3 = r4.d     // Catch: java.lang.Exception -> L38
            r0.put(r5, r3)     // Catch: java.lang.Exception -> L38
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L38
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L38
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r1)     // Catch: java.lang.Exception -> L38
            com.mbridge.msdk.mbjscommon.windvane.h r0 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L38
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r4.x     // Catch: java.lang.Exception -> L38
            r0.a(r1, r2, r5)     // Catch: java.lang.Exception -> L38
            goto L3c
        L38:
            r5 = move-exception
            r5.printStackTrace()
        L3c:
            return
    }

    @Override
    public void onDestory() {
            r4 = this;
            boolean r0 = r4.u
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r4.u = r0
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r4.x     // Catch: java.lang.Throwable -> L34
            if (r0 == 0) goto L19
            com.mbridge.msdk.video.bt.a.c r0 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L34
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r4.x     // Catch: java.lang.Throwable -> L34
            java.lang.String r2 = "onSystemDestory"
            java.lang.String r3 = r4.d     // Catch: java.lang.Throwable -> L34
            r0.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L34
        L19:
            android.os.Handler r0 = new android.os.Handler     // Catch: java.lang.Throwable -> L34
            android.os.Looper r1 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L34
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L34
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView$4 r1 = new com.mbridge.msdk.video.bt.module.MBridgeBTWebView$4     // Catch: java.lang.Throwable -> L34
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L34
            r2 = 500(0x1f4, double:2.47E-321)
            r0.postDelayed(r1, r2)     // Catch: java.lang.Throwable -> L34
            r0 = 0
            r4.setOnClickListener(r0)     // Catch: java.lang.Throwable -> L34
            r4.removeAllViews()     // Catch: java.lang.Throwable -> L34
            goto L3e
        L34:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)
        L3e:
            return
    }

    @Override
    public void onFinishRedirection(com.mbridge.msdk.out.Campaign r2, java.lang.String r3) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            int r3 = r2.getLinkType()
            r0 = 8
            if (r3 != r0) goto L1b
            com.mbridge.msdk.foundation.entity.AabEntity r2 = r2.getAabEntity()
            int r2 = r2.getHlp()
            r3 = 1
            if (r2 != r3) goto L1b
            com.mbridge.msdk.foundation.tools.ad.a(r1)
        L1b:
            return
    }

    @Override
    public void onRedirectionFailed(com.mbridge.msdk.out.Campaign r2, java.lang.String r3) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = (com.mbridge.msdk.foundation.entity.CampaignEx) r2
            int r3 = r2.getLinkType()
            r0 = 8
            if (r3 != r0) goto L1b
            com.mbridge.msdk.foundation.entity.AabEntity r2 = r2.getAabEntity()
            int r2 = r2.getHlp()
            r3 = 1
            if (r2 != r3) goto L1b
            com.mbridge.msdk.foundation.tools.ad.a(r1)
        L1b:
            return
    }

    @Override
    public void onStartRedirection(com.mbridge.msdk.out.Campaign r1, java.lang.String r2) {
            r0 = this;
            com.mbridge.msdk.foundation.tools.ad.a(r1, r0)
            return
    }

    @Override
    public void open(java.lang.String r9) {
            r8 = this;
            java.lang.String r0 = "BTBaseView"
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.b     // Catch: java.lang.Throwable -> Lb2
            if (r1 == 0) goto Lae
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.b     // Catch: java.lang.Throwable -> Lb2
            boolean r1 = r1.needShowIDialog()     // Catch: java.lang.Throwable -> Lb2
            if (r1 == 0) goto Lae
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.b     // Catch: java.lang.Throwable -> Lb2
            boolean r1 = com.mbridge.msdk.click.c.a(r1)     // Catch: java.lang.Throwable -> Lb2
            if (r1 == 0) goto Lae
            com.mbridge.msdk.click.b r1 = new com.mbridge.msdk.click.b     // Catch: java.lang.Throwable -> Lb2
            android.content.Context r2 = r8.getContext()     // Catch: java.lang.Throwable -> Lb2
            java.lang.String r3 = r8.c     // Catch: java.lang.Throwable -> Lb2
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> Lb2
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r8.b     // Catch: java.lang.Throwable -> Lb2
            boolean r1 = r1.b(r2)     // Catch: java.lang.Throwable -> Lb2
            if (r1 != 0) goto Lbd
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.b     // Catch: java.lang.Throwable -> Lb2
            r1.getAppName()     // Catch: java.lang.Throwable -> Lb2
            com.mbridge.msdk.video.bt.module.MBridgeBTWebView$5 r7 = new com.mbridge.msdk.video.bt.module.MBridgeBTWebView$5     // Catch: java.lang.Throwable -> La2
            r7.<init>(r8, r9)     // Catch: java.lang.Throwable -> La2
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La2
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> La2
            if (r1 == 0) goto L46
            android.content.Context r2 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> La2
            if (r1 != r2) goto L44
            goto L46
        L44:
            r5 = r1
            goto L6b
        L46:
            com.mbridge.msdk.video.bt.a.c r1 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> La2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La2
            r2.<init>()     // Catch: java.lang.Throwable -> La2
            java.lang.String r3 = r8.c     // Catch: java.lang.Throwable -> La2
            r2.append(r3)     // Catch: java.lang.Throwable -> La2
            java.lang.String r3 = "_"
            r2.append(r3)     // Catch: java.lang.Throwable -> La2
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r8.b     // Catch: java.lang.Throwable -> La2
            java.lang.String r3 = r3.getRequestId()     // Catch: java.lang.Throwable -> La2
            r2.append(r3)     // Catch: java.lang.Throwable -> La2
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> La2
            android.app.Activity r1 = r1.d(r2)     // Catch: java.lang.Throwable -> La2
            goto L44
        L6b:
            if (r5 == 0) goto Lbd
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r8.b     // Catch: java.lang.Throwable -> La2
            if (r1 == 0) goto Lbd
            com.mbridge.msdk.videocommon.d.b r1 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> La2
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> La2
            java.lang.String r2 = r2.k()     // Catch: java.lang.Throwable -> La2
            java.lang.String r3 = r8.c     // Catch: java.lang.Throwable -> La2
            r4 = 0
            r1.a(r2, r3, r4)     // Catch: java.lang.Throwable -> La2
            java.lang.String r3 = com.mbridge.msdk.videocommon.d.c.a     // Catch: java.lang.Throwable -> La2
            com.mbridge.msdk.mbjscommon.confirmation.e r2 = com.mbridge.msdk.mbjscommon.confirmation.e.a()     // Catch: java.lang.Throwable -> La2
            com.mbridge.msdk.foundation.entity.CampaignEx r4 = r8.b     // Catch: java.lang.Throwable -> La2
            java.lang.String r6 = r8.c     // Catch: java.lang.Throwable -> La2
            r2.a(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> La2
            com.mbridge.msdk.video.bt.a.c r1 = com.mbridge.msdk.video.bt.a.c.a()     // Catch: java.lang.Throwable -> La2
            java.lang.String r2 = r8.c     // Catch: java.lang.Throwable -> La2
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r8.b     // Catch: java.lang.Throwable -> La2
            java.lang.String r3 = r3.getRequestId()     // Catch: java.lang.Throwable -> La2
            java.lang.String r4 = "onInstallAlertShow"
            r1.a(r2, r3, r4)     // Catch: java.lang.Throwable -> La2
            goto Lbd
        La2:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()     // Catch: java.lang.Throwable -> Lb2
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Throwable -> Lb2
            r8.a(r9)     // Catch: java.lang.Throwable -> Lb2
            goto Lbd
        Lae:
            r8.a(r9)     // Catch: java.lang.Throwable -> Lb2
            goto Lbd
        Lb2:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            r8.a(r9)
        Lbd:
            return
    }

    public void preload() {
            r7 = this;
            java.lang.String r0 = r7.p
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r7.x
            java.lang.String r1 = r7.p
            r0.loadUrl(r1)
            return
        L10:
            java.lang.String r0 = r7.q
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L20
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r7.x
            java.lang.String r1 = r7.q
            r0.loadUrl(r1)
            return
        L20:
            java.lang.String r0 = r7.r
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L36
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r1 = r7.x
            java.lang.String r3 = r7.r
            r6 = 0
            java.lang.String r2 = ""
            java.lang.String r4 = "text/html"
            java.lang.String r5 = "UTF-8"
            r1.loadDataWithBaseURL(r2, r3, r4, r5, r6)
        L36:
            return
    }

    public void setCampaigns(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r1) {
            r0 = this;
            r0.w = r1
            return
    }

    public void setCreateWebView(android.webkit.WebView r1) {
            r0 = this;
            r0.z = r1
            return
    }

    public void setFilePath(java.lang.String r1) {
            r0 = this;
            r0.q = r1
            return
    }

    public void setFileURL(java.lang.String r2) {
            r1 = this;
            r1.p = r2
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L21
            java.lang.String r0 = "play.google.com"
            boolean r2 = r2.contains(r0)
            r0 = r2 ^ 1
            r1.setWebviewClickable(r0)
            if (r2 == 0) goto L21
            com.mbridge.msdk.mbjscommon.base.c r2 = new com.mbridge.msdk.mbjscommon.base.c
            r2.<init>()
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r1.x
            if (r0 == 0) goto L21
            r0.setFilter(r2)
        L21:
            return
    }

    public void setHtml(java.lang.String r1) {
            r0 = this;
            r0.r = r1
            return
    }

    @Override
    public void setRewardUnitSetting(com.mbridge.msdk.videocommon.d.c r1) {
            r0 = this;
            r0.v = r1
            return
    }

    public void setWebViewRid(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r1.x
            if (r0 == 0) goto L7
            r0.setRid(r2)
        L7:
            return
    }

    public void setWebviewClickable(boolean r2) {
            r1 = this;
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r1.x
            if (r0 == 0) goto L7
            r0.setClickable(r2)
        L7:
            return
    }

    @Override
    public void unload() {
            r0 = this;
            r0.close()
            return
    }

    @Override
    public void useCustomClose(boolean r2) {
            r1 = this;
            android.widget.ImageView r0 = r1.t     // Catch: java.lang.Throwable -> Lb
            if (r2 == 0) goto L6
            r2 = 4
            goto L7
        L6:
            r2 = 0
        L7:
            r0.setVisibility(r2)     // Catch: java.lang.Throwable -> Lb
            goto L15
        Lb:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            java.lang.String r0 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
        L15:
            return
    }

    public boolean webviewGoBack() {
            r1 = this;
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r1.x
            if (r0 == 0) goto L11
            boolean r0 = r0.canGoBack()
            if (r0 == 0) goto L11
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r1.x
            r0.goBack()
            r0 = 1
            return r0
        L11:
            r0 = 0
            return r0
    }

    public boolean webviewGoForward() {
            r1 = this;
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r1.x
            if (r0 == 0) goto L11
            boolean r0 = r0.canGoForward()
            if (r0 == 0) goto L11
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r1.x
            r0.goForward()
            r0 = 1
            return r0
        L11:
            r0 = 0
            return r0
    }

    public void webviewLoad(int r5) {
            r4 = this;
            com.mbridge.msdk.video.js.a.j r0 = r4.y
            if (r0 != 0) goto L10
            com.mbridge.msdk.video.js.a.j r0 = new com.mbridge.msdk.video.js.a.j
            r1 = 0
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.b
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r4.w
            r0.<init>(r1, r2, r3)
            r4.y = r0
        L10:
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.b
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L1e
            com.mbridge.msdk.video.js.a.j r0 = r4.y
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r4.b
            r0.a(r3)
            goto L44
        L1e:
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r4.w
            if (r0 == 0) goto L44
            int r0 = r0.size()
            if (r0 <= 0) goto L44
            com.mbridge.msdk.video.js.a.j r0 = r4.y
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r4.w
            r0.a(r3)
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r0 = r4.w
            int r0 = r0.size()
            if (r0 != r1) goto L44
            com.mbridge.msdk.video.js.a.j r0 = r4.y
            java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r3 = r4.w
            java.lang.Object r3 = r3.get(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            r0.a(r3)
        L44:
            com.mbridge.msdk.videocommon.d.c r0 = r4.v
            if (r0 == 0) goto L4d
            com.mbridge.msdk.video.js.a.j r3 = r4.y
            r3.a(r0)
        L4d:
            com.mbridge.msdk.video.js.a.j r0 = r4.y
            java.lang.String r3 = r4.c
            r0.a(r3)
            com.mbridge.msdk.video.js.a.j r0 = r4.y
            java.lang.String r3 = r4.d
            r0.c(r3)
            com.mbridge.msdk.video.js.a.j r0 = r4.y
            r0.c(r2)
            if (r5 != r1) goto L67
            com.mbridge.msdk.video.js.a.j r5 = r4.y
            r5.o()
        L67:
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r5 = r4.x
            if (r5 == 0) goto L70
            com.mbridge.msdk.video.js.a.j r0 = r4.y
            r5.setObject(r0)
        L70:
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.b
            if (r5 == 0) goto L82
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r4.b
            boolean r5 = r5.isMraid()
            if (r5 == 0) goto L82
            android.widget.ImageView r5 = r4.t
            r0 = 4
            r5.setVisibility(r0)
        L82:
            r4.preload()
            return
    }

    public boolean webviewReload() {
            r1 = this;
            com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView r0 = r1.x
            if (r0 == 0) goto L9
            r0.reload()
            r0 = 1
            return r0
        L9:
            r0 = 0
            return r0
    }
}
