package com.tkay.expressad.video.bt.module;

public class TkayBTWebView extends com.tkay.expressad.video.bt.module.BTBaseView implements com.tkay.expressad.atsignalcommon.mraid.IMraidJSBridge {
    private static final java.lang.String s = "portrait";
    private static final java.lang.String t = "landscape";
    private com.tkay.expressad.video.signal.a.j A;
    private android.webkit.WebView B;
    private java.lang.String p;
    private java.lang.String q;
    private java.lang.String r;
    private boolean u;
    private android.widget.ImageView v;
    private boolean w;
    private com.tkay.expressad.videocommon.e.d x;
    private java.util.List<com.tkay.expressad.foundation.d.c> y;
    private com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView z;





    public TkayBTWebView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r1 = 0
            r0.u = r1
            r0.w = r1
            return
    }

    public TkayBTWebView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.u = r1
            r0.w = r1
            return
    }

    static android.webkit.WebView a(com.tkay.expressad.video.bt.module.TkayBTWebView r0, android.webkit.WebView r1) {
            r0.B = r1
            return r1
    }

    static com.tkay.expressad.video.signal.a.j a(com.tkay.expressad.video.bt.module.TkayBTWebView r0) {
            com.tkay.expressad.video.signal.a.j r0 = r0.A
            return r0
    }

    static java.lang.String a(com.tkay.expressad.video.bt.module.TkayBTWebView r0, java.lang.String r1) {
            r0.p = r1
            return r1
    }

    private void a(com.tkay.expressad.atsignalcommon.base.c r2) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r1.z
            if (r0 == 0) goto L7
            r0.setFilter(r2)
        L7:
            return
    }

    static android.webkit.WebView b(com.tkay.expressad.video.bt.module.TkayBTWebView r0) {
            android.webkit.WebView r0 = r0.B
            return r0
    }

    static java.lang.String b(com.tkay.expressad.video.bt.module.TkayBTWebView r0, java.lang.String r1) {
            r0.q = r1
            return r1
    }

    private void b() {
            r1 = this;
            r1.getMraidCampaign()     // Catch: java.lang.Throwable -> L4
            return
        L4:
            r0 = move-exception
            r0.getMessage()
            return
    }

    static com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView c(com.tkay.expressad.video.bt.module.TkayBTWebView r0) {
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r0.z
            return r0
    }

    static java.lang.String c(com.tkay.expressad.video.bt.module.TkayBTWebView r0, java.lang.String r1) {
            r0.r = r1
            return r1
    }

    public void broadcast(java.lang.String r5, org.json.JSONObject r6) {
            r4 = this;
            java.lang.String r0 = "broadcast"
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r4.z
            if (r1 == 0) goto L43
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L39
            r1.<init>()     // Catch: java.lang.Exception -> L39
            java.lang.String r2 = "code"
            int r3 = com.tkay.expressad.video.bt.module.TkayBTWebView.n     // Catch: java.lang.Exception -> L39
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L39
            java.lang.String r2 = "id"
            java.lang.String r3 = r4.d     // Catch: java.lang.Exception -> L39
            r1.put(r2, r3)     // Catch: java.lang.Exception -> L39
            java.lang.String r2 = "eventName"
            r1.put(r2, r5)     // Catch: java.lang.Exception -> L39
            java.lang.String r5 = "data"
            r1.put(r5, r6)     // Catch: java.lang.Exception -> L39
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L39
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r4.z     // Catch: java.lang.Exception -> L39
            java.lang.String r6 = r1.toString()     // Catch: java.lang.Exception -> L39
            byte[] r6 = r6.getBytes()     // Catch: java.lang.Exception -> L39
            r1 = 2
            java.lang.String r6 = android.util.Base64.encodeToString(r6, r1)     // Catch: java.lang.Exception -> L39
            com.tkay.expressad.atsignalcommon.windvane.j.a(r5, r0, r6)     // Catch: java.lang.Exception -> L39
            return
        L39:
            com.tkay.expressad.video.bt.a.c.a()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r4.z
            java.lang.String r6 = r4.d
            com.tkay.expressad.video.bt.a.c.a(r5, r0, r6)
        L43:
            return
    }

    @Override
    public void close() {
            r3 = this;
            android.webkit.WebView r0 = r3.B
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

    public java.util.List<com.tkay.expressad.foundation.d.c> getCampaigns() {
            r1 = this;
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r1.y
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
    public com.tkay.expressad.foundation.d.c getMraidCampaign() {
            r1 = this;
            com.tkay.expressad.foundation.d.c r0 = r1.b
            return r0
    }

    public com.tkay.expressad.videocommon.e.d getRewardUnitSetting() {
            r1 = this;
            com.tkay.expressad.videocommon.e.d r0 = r1.x
            return r0
    }

    public com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView getWebView() {
            r1 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r1.z
            return r0
    }

    @Override
    public void init(android.content.Context r4) {
            r3 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = new com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView
            r0.<init>(r4)
            r3.z = r0
            r4 = 0
            r0.setBackgroundColor(r4)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r3.z
            r0.setVisibility(r4)
            com.tkay.expressad.video.signal.a.j r4 = new com.tkay.expressad.video.signal.a.j
            com.tkay.expressad.foundation.d.c r0 = r3.b
            java.util.List<com.tkay.expressad.foundation.d.c> r1 = r3.y
            r2 = 0
            r4.<init>(r2, r0, r1)
            r3.A = r4
            java.lang.String r0 = r3.c
            r4.a(r0)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.z
            com.tkay.expressad.video.signal.a.j r0 = r3.A
            r4.setObject(r0)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.z
            r4.setMraidObject(r3)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.z
            com.tkay.expressad.video.bt.module.TkayBTWebView$1 r0 = new com.tkay.expressad.video.bt.module.TkayBTWebView$1
            r0.<init>(r3)
            r4.setWebViewListener(r0)
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r4 = r3.z
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            r3.addView(r4, r0)
            com.tkay.expressad.video.bt.module.TkayBTWebView$2 r4 = new com.tkay.expressad.video.bt.module.TkayBTWebView$2
            r4.<init>(r3)
            r3.setOnClickListener(r4)
            android.widget.ImageView r4 = new android.widget.ImageView     // Catch: java.lang.Throwable -> La3
            android.content.Context r0 = r3.getContext()     // Catch: java.lang.Throwable -> La3
            r4.<init>(r0)     // Catch: java.lang.Throwable -> La3
            r3.v = r4     // Catch: java.lang.Throwable -> La3
            java.lang.String r0 = "tkay_reward_close"
            int r0 = r3.findDrawable(r0)     // Catch: java.lang.Throwable -> La3
            r4.setImageResource(r0)     // Catch: java.lang.Throwable -> La3
            android.widget.FrameLayout$LayoutParams r4 = new android.widget.FrameLayout$LayoutParams     // Catch: java.lang.Throwable -> La3
            r0 = 96
            r4.<init>(r0, r0)     // Catch: java.lang.Throwable -> La3
            r0 = 8388661(0x800035, float:1.1755018E-38)
            r4.gravity = r0     // Catch: java.lang.Throwable -> La3
            r0 = 30
            r4.setMargins(r0, r0, r0, r0)     // Catch: java.lang.Throwable -> La3
            android.widget.ImageView r0 = r3.v     // Catch: java.lang.Throwable -> La3
            r0.setLayoutParams(r4)     // Catch: java.lang.Throwable -> La3
            android.widget.ImageView r4 = r3.v     // Catch: java.lang.Throwable -> La3
            boolean r0 = r3.u     // Catch: java.lang.Throwable -> La3
            r1 = 4
            if (r0 == 0) goto L7d
            r0 = r1
            goto L7f
        L7d:
            r0 = 8
        L7f:
            r4.setVisibility(r0)     // Catch: java.lang.Throwable -> La3
            com.tkay.expressad.foundation.d.c r4 = r3.b     // Catch: java.lang.Throwable -> La3
            if (r4 == 0) goto L93
            com.tkay.expressad.foundation.d.c r4 = r3.b     // Catch: java.lang.Throwable -> La3
            boolean r4 = r4.H()     // Catch: java.lang.Throwable -> La3
            if (r4 == 0) goto L93
            android.widget.ImageView r4 = r3.v     // Catch: java.lang.Throwable -> La3
            r4.setVisibility(r1)     // Catch: java.lang.Throwable -> La3
        L93:
            android.widget.ImageView r4 = r3.v     // Catch: java.lang.Throwable -> La3
            com.tkay.expressad.video.bt.module.TkayBTWebView$3 r0 = new com.tkay.expressad.video.bt.module.TkayBTWebView$3     // Catch: java.lang.Throwable -> La3
            r0.<init>(r3)     // Catch: java.lang.Throwable -> La3
            r4.setOnClickListener(r0)     // Catch: java.lang.Throwable -> La3
            android.widget.ImageView r4 = r3.v     // Catch: java.lang.Throwable -> La3
            r3.addView(r4)     // Catch: java.lang.Throwable -> La3
            return
        La3:
            r4 = move-exception
            r4.getMessage()
            return
    }

    public void notifyEvent(java.lang.String r3) {
            r2 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r2.z
            if (r0 == 0) goto L9
            java.lang.String r1 = r2.d
            a(r0, r3, r1)
        L9:
            return
    }

    public void onBackPressed() {
            r3 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r3.z
            if (r0 == 0) goto L10
            com.tkay.expressad.video.bt.a.c.a()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r3.z
            java.lang.String r1 = r3.d
            java.lang.String r2 = "onSystemBackPressed"
            com.tkay.expressad.video.bt.a.c.a(r0, r2, r1)
        L10:
            return
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r5) {
            r4 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r4.z
            if (r0 == 0) goto L3b
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L37
            r0.<init>()     // Catch: java.lang.Exception -> L37
            int r5 = r5.orientation     // Catch: java.lang.Exception -> L37
            r1 = 2
            java.lang.String r2 = "orientation"
            if (r5 != r1) goto L16
            java.lang.String r5 = "landscape"
            r0.put(r2, r5)     // Catch: java.lang.Exception -> L37
            goto L1b
        L16:
            java.lang.String r5 = "portrait"
            r0.put(r2, r5)     // Catch: java.lang.Exception -> L37
        L1b:
            java.lang.String r5 = "instanceId"
            java.lang.String r3 = r4.d     // Catch: java.lang.Exception -> L37
            r0.put(r5, r3)     // Catch: java.lang.Exception -> L37
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Exception -> L37
            byte[] r5 = r5.getBytes()     // Catch: java.lang.Exception -> L37
            java.lang.String r5 = android.util.Base64.encodeToString(r5, r1)     // Catch: java.lang.Exception -> L37
            com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L37
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r4.z     // Catch: java.lang.Exception -> L37
            com.tkay.expressad.atsignalcommon.windvane.j.a(r0, r2, r5)     // Catch: java.lang.Exception -> L37
            return
        L37:
            r5 = move-exception
            r5.printStackTrace()
        L3b:
            return
    }

    @Override
    public void onDestory() {
            r4 = this;
            boolean r0 = r4.w
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r4.w = r0
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r4.z     // Catch: java.lang.Throwable -> L33
            if (r0 == 0) goto L18
            com.tkay.expressad.video.bt.a.c.a()     // Catch: java.lang.Throwable -> L33
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r4.z     // Catch: java.lang.Throwable -> L33
            java.lang.String r1 = "onSystemDestory"
            java.lang.String r2 = r4.d     // Catch: java.lang.Throwable -> L33
            com.tkay.expressad.video.bt.a.c.a(r0, r1, r2)     // Catch: java.lang.Throwable -> L33
        L18:
            android.os.Handler r0 = new android.os.Handler     // Catch: java.lang.Throwable -> L33
            android.os.Looper r1 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L33
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L33
            com.tkay.expressad.video.bt.module.TkayBTWebView$4 r1 = new com.tkay.expressad.video.bt.module.TkayBTWebView$4     // Catch: java.lang.Throwable -> L33
            r1.<init>(r4)     // Catch: java.lang.Throwable -> L33
            r2 = 500(0x1f4, double:2.47E-321)
            r0.postDelayed(r1, r2)     // Catch: java.lang.Throwable -> L33
            r0 = 0
            r4.setOnClickListener(r0)     // Catch: java.lang.Throwable -> L33
            r4.removeAllViews()     // Catch: java.lang.Throwable -> L33
            return
        L33:
            r0 = move-exception
            r0.getMessage()
            return
    }

    @Override
    public void open(java.lang.String r4) {
            r3 = this;
            com.tkay.expressad.foundation.d.c r0 = r3.b     // Catch: java.lang.Throwable -> L2a
            java.lang.String r0 = r0.ad()     // Catch: java.lang.Throwable -> L2a
            boolean r1 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L2a
            if (r1 != 0) goto L19
            com.tkay.expressad.foundation.d.c r1 = r3.b     // Catch: java.lang.Throwable -> L2a
            r1.p(r4)     // Catch: java.lang.Throwable -> L2a
            r3.getMraidCampaign()     // Catch: java.lang.Throwable -> L15
            goto L19
        L15:
            r4 = move-exception
            r4.getMessage()     // Catch: java.lang.Throwable -> L2a
        L19:
            com.tkay.expressad.a.a r4 = new com.tkay.expressad.a.a     // Catch: java.lang.Throwable -> L2a
            android.content.Context r1 = r3.getContext()     // Catch: java.lang.Throwable -> L2a
            java.lang.String r2 = r3.c     // Catch: java.lang.Throwable -> L2a
            r4.<init>(r1, r2)     // Catch: java.lang.Throwable -> L2a
            com.tkay.expressad.foundation.d.c r4 = r3.b     // Catch: java.lang.Throwable -> L2a
            r4.p(r0)     // Catch: java.lang.Throwable -> L2a
            return
        L2a:
            r4 = move-exception
            r4.getMessage()
            return
    }

    public void preload() {
            r7 = this;
            java.lang.String r0 = r7.p
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r7.z
            java.lang.String r1 = r7.p
            r0.loadUrl(r1)
            return
        L10:
            java.lang.String r0 = r7.q
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L20
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r7.z
            java.lang.String r1 = r7.q
            r0.loadUrl(r1)
            return
        L20:
            java.lang.String r0 = r7.r
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L36
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r1 = r7.z
            java.lang.String r3 = r7.r
            r6 = 0
            java.lang.String r2 = ""
            java.lang.String r4 = "text/html"
            java.lang.String r5 = "UTF-8"
            r1.loadDataWithBaseURL(r2, r3, r4, r5, r6)
        L36:
            return
    }

    public void setCampaigns(java.util.List<com.tkay.expressad.foundation.d.c> r1) {
            r0 = this;
            r0.y = r1
            return
    }

    public void setCreateWebView(android.webkit.WebView r1) {
            r0 = this;
            r0.B = r1
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
            com.tkay.expressad.atsignalcommon.base.c r2 = new com.tkay.expressad.atsignalcommon.base.c
            r2.<init>()
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r1.z
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
    public void setRewardUnitSetting(com.tkay.expressad.videocommon.e.d r1) {
            r0 = this;
            r0.x = r1
            return
    }

    public void setWebViewRid(java.lang.String r2) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r1.z
            if (r0 == 0) goto L7
            r0.setRid(r2)
        L7:
            return
    }

    public void setWebviewClickable(boolean r2) {
            r1 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r1.z
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
            android.widget.ImageView r0 = r1.v     // Catch: java.lang.Throwable -> Lb
            if (r2 == 0) goto L6
            r2 = 4
            goto L7
        L6:
            r2 = 0
        L7:
            r0.setVisibility(r2)     // Catch: java.lang.Throwable -> Lb
            return
        Lb:
            r2 = move-exception
            r2.getMessage()
            return
    }

    public boolean webviewGoBack() {
            r1 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r1.z
            if (r0 == 0) goto L11
            boolean r0 = r0.canGoBack()
            if (r0 == 0) goto L11
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r1.z
            r0.goBack()
            r0 = 1
            return r0
        L11:
            r0 = 0
            return r0
    }

    public boolean webviewGoForward() {
            r1 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r1.z
            if (r0 == 0) goto L11
            boolean r0 = r0.canGoForward()
            if (r0 == 0) goto L11
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r1.z
            r0.goForward()
            r0 = 1
            return r0
        L11:
            r0 = 0
            return r0
    }

    public void webviewLoad(int r5) {
            r4 = this;
            com.tkay.expressad.video.signal.a.j r0 = r4.A
            if (r0 != 0) goto L10
            com.tkay.expressad.video.signal.a.j r0 = new com.tkay.expressad.video.signal.a.j
            r1 = 0
            com.tkay.expressad.foundation.d.c r2 = r4.b
            java.util.List<com.tkay.expressad.foundation.d.c> r3 = r4.y
            r0.<init>(r1, r2, r3)
            r4.A = r0
        L10:
            com.tkay.expressad.foundation.d.c r0 = r4.b
            r1 = 1
            if (r0 == 0) goto L1d
            com.tkay.expressad.video.signal.a.j r0 = r4.A
            com.tkay.expressad.foundation.d.c r2 = r4.b
            r0.a(r2)
            goto L44
        L1d:
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r4.y
            if (r0 == 0) goto L44
            int r0 = r0.size()
            if (r0 <= 0) goto L44
            com.tkay.expressad.video.signal.a.j r0 = r4.A
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r4.y
            r0.a(r2)
            java.util.List<com.tkay.expressad.foundation.d.c> r0 = r4.y
            int r0 = r0.size()
            if (r0 != r1) goto L44
            com.tkay.expressad.video.signal.a.j r0 = r4.A
            java.util.List<com.tkay.expressad.foundation.d.c> r2 = r4.y
            r3 = 0
            java.lang.Object r2 = r2.get(r3)
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2
            r0.a(r2)
        L44:
            com.tkay.expressad.videocommon.e.d r0 = r4.x
            if (r0 == 0) goto L4d
            com.tkay.expressad.video.signal.a.j r2 = r4.A
            r2.a(r0)
        L4d:
            com.tkay.expressad.video.signal.a.j r0 = r4.A
            java.lang.String r2 = r4.c
            r0.a(r2)
            com.tkay.expressad.video.signal.a.j r0 = r4.A
            java.lang.String r2 = r4.d
            r0.c(r2)
            if (r5 != r1) goto L62
            com.tkay.expressad.video.signal.a.j r5 = r4.A
            r5.q()
        L62:
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r5 = r4.z
            if (r5 == 0) goto L6b
            com.tkay.expressad.video.signal.a.j r0 = r4.A
            r5.setObject(r0)
        L6b:
            com.tkay.expressad.foundation.d.c r5 = r4.b
            if (r5 == 0) goto L7d
            com.tkay.expressad.foundation.d.c r5 = r4.b
            boolean r5 = r5.H()
            if (r5 == 0) goto L7d
            android.widget.ImageView r5 = r4.v
            r0 = 4
            r5.setVisibility(r0)
        L7d:
            r4.preload()
            return
    }

    public boolean webviewReload() {
            r1 = this;
            com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView r0 = r1.z
            if (r0 == 0) goto L9
            r0.reload()
            r0 = 1
            return r0
        L9:
            r0 = 0
            return r0
    }
}
