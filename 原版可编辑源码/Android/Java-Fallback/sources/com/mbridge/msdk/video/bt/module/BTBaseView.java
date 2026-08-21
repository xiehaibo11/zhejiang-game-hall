package com.mbridge.msdk.video.bt.module;

public abstract class BTBaseView extends android.widget.FrameLayout {
    public static final java.lang.String TAG = "BTBaseView";
    protected static int n = 0;
    protected static int o = 1;
    protected android.content.Context a;
    protected com.mbridge.msdk.foundation.entity.CampaignEx b;
    protected java.lang.String c;
    protected java.lang.String d;
    protected com.mbridge.msdk.videocommon.d.c e;
    protected android.view.LayoutInflater f;
    protected int g;
    protected boolean h;
    protected float i;
    protected float j;
    protected android.graphics.Rect k;
    protected int l;
    protected int m;

    static {
            return
    }

    public BTBaseView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public BTBaseView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r2 = ""
            r0.d = r2
            r2 = 1
            r0.g = r2
            r2 = 0
            r0.h = r2
            r0.a = r1
            android.view.LayoutInflater r2 = android.view.LayoutInflater.from(r1)
            r0.f = r2
            r0.init(r1)
            return
    }

    protected static void a(android.webkit.WebView r3, java.lang.String r4, java.lang.String r5) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r0.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "code"
            int r2 = com.mbridge.msdk.video.bt.module.BTBaseView.n     // Catch: java.lang.Exception -> L30
            r0.put(r1, r2)     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "id"
            r0.put(r1, r5)     // Catch: java.lang.Exception -> L30
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Exception -> L30
            r5.<init>()     // Catch: java.lang.Exception -> L30
            java.lang.String r1 = "data"
            r0.put(r1, r5)     // Catch: java.lang.Exception -> L30
            com.mbridge.msdk.mbjscommon.windvane.h r5 = com.mbridge.msdk.mbjscommon.windvane.h.a()     // Catch: java.lang.Exception -> L30
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L30
            byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L30
            r1 = 2
            java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L30
            r5.a(r3, r4, r0)     // Catch: java.lang.Exception -> L30
            goto L45
        L30:
            r4 = move-exception
            com.mbridge.msdk.video.bt.a.c r5 = com.mbridge.msdk.video.bt.a.c.a()
            java.lang.String r0 = r4.getMessage()
            r5.a(r3, r0)
            java.lang.String r3 = r4.getMessage()
            java.lang.String r4 = "BTBaseView"
            com.mbridge.msdk.foundation.tools.z.a(r4, r3)
        L45:
            return
    }

    protected final org.json.JSONObject a(int r5) {
            r4 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L63
            r1.<init>()     // Catch: org.json.JSONException -> L63
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.n     // Catch: org.json.JSONException -> L60
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: org.json.JSONException -> L60
            android.content.Context r2 = r2.j()     // Catch: org.json.JSONException -> L60
            float r3 = r4.i     // Catch: org.json.JSONException -> L60
            int r2 = com.mbridge.msdk.foundation.tools.ae.a(r2, r3)     // Catch: org.json.JSONException -> L60
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L60
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.o     // Catch: org.json.JSONException -> L60
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: org.json.JSONException -> L60
            android.content.Context r2 = r2.j()     // Catch: org.json.JSONException -> L60
            float r3 = r4.j     // Catch: org.json.JSONException -> L60
            int r2 = com.mbridge.msdk.foundation.tools.ae.a(r2, r3)     // Catch: org.json.JSONException -> L60
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L60
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.q     // Catch: org.json.JSONException -> L60
            r1.put(r0, r5)     // Catch: org.json.JSONException -> L60
            android.content.Context r5 = r4.getContext()     // Catch: java.lang.Exception -> L46 org.json.JSONException -> L60
            android.content.res.Resources r5 = r5.getResources()     // Catch: java.lang.Exception -> L46 org.json.JSONException -> L60
            android.content.res.Configuration r5 = r5.getConfiguration()     // Catch: java.lang.Exception -> L46 org.json.JSONException -> L60
            int r5 = r5.orientation     // Catch: java.lang.Exception -> L46 org.json.JSONException -> L60
            r4.g = r5     // Catch: java.lang.Exception -> L46 org.json.JSONException -> L60
            goto L4a
        L46:
            r5 = move-exception
            r5.printStackTrace()     // Catch: org.json.JSONException -> L60
        L4a:
            java.lang.String r5 = com.mbridge.msdk.foundation.same.a.r     // Catch: org.json.JSONException -> L60
            int r0 = r4.g     // Catch: org.json.JSONException -> L60
            r1.put(r5, r0)     // Catch: org.json.JSONException -> L60
            java.lang.String r5 = com.mbridge.msdk.foundation.same.a.s     // Catch: org.json.JSONException -> L60
            android.content.Context r0 = r4.getContext()     // Catch: org.json.JSONException -> L60
            float r0 = com.mbridge.msdk.foundation.tools.ae.d(r0)     // Catch: org.json.JSONException -> L60
            double r2 = (double) r0     // Catch: org.json.JSONException -> L60
            r1.put(r5, r2)     // Catch: org.json.JSONException -> L60
            goto L68
        L60:
            r5 = move-exception
            r0 = r1
            goto L64
        L63:
            r5 = move-exception
        L64:
            r5.printStackTrace()
            r1 = r0
        L68:
            return r1
    }

    protected void a() {
            r0 = this;
            return
    }

    public void defaultShow() {
            r2 = this;
            java.lang.String r0 = "BTBaseView"
            java.lang.String r1 = "defaultShow"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            return
    }

    public int findColor(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.a
            android.content.Context r0 = r0.getApplicationContext()
            java.lang.String r1 = "color"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r0, r3, r1)
            return r3
    }

    public int findDrawable(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.a
            android.content.Context r0 = r0.getApplicationContext()
            java.lang.String r1 = "drawable"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r0, r3, r1)
            return r3
    }

    public int findID(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.a
            android.content.Context r0 = r0.getApplicationContext()
            java.lang.String r1 = "id"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r0, r3, r1)
            return r3
    }

    public int findLayout(java.lang.String r3) {
            r2 = this;
            android.content.Context r0 = r2.a
            android.content.Context r0 = r0.getApplicationContext()
            java.lang.String r1 = "layout"
            int r3 = com.mbridge.msdk.foundation.tools.s.a(r0, r3, r1)
            return r3
    }

    public com.mbridge.msdk.foundation.entity.CampaignEx getCampaign() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.b
            return r0
    }

    public java.lang.String getInstanceId() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public android.widget.FrameLayout.LayoutParams getParentFrameLayoutParams() {
            r2 = this;
            android.view.ViewGroup$LayoutParams r0 = r2.getLayoutParams()
            boolean r1 = r0 instanceof android.widget.FrameLayout.LayoutParams
            if (r1 == 0) goto Lb
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public android.widget.LinearLayout.LayoutParams getParentLinearLayoutParams() {
            r2 = this;
            android.view.ViewGroup$LayoutParams r0 = r2.getLayoutParams()
            boolean r1 = r0 instanceof android.widget.LinearLayout.LayoutParams
            if (r1 == 0) goto Lb
            android.widget.LinearLayout$LayoutParams r0 = (android.widget.LinearLayout.LayoutParams) r0
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public android.widget.RelativeLayout.LayoutParams getParentRelativeLayoutParams() {
            r2 = this;
            android.view.ViewGroup$LayoutParams r0 = r2.getLayoutParams()
            boolean r1 = r0 instanceof android.widget.RelativeLayout.LayoutParams
            if (r1 == 0) goto Lb
            android.widget.RelativeLayout$LayoutParams r0 = (android.widget.RelativeLayout.LayoutParams) r0
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public android.graphics.Rect getRect() {
            r1 = this;
            android.graphics.Rect r0 = r1.k
            return r0
    }

    public java.lang.String getUnitId() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public int getViewHeight() {
            r1 = this;
            int r0 = r1.m
            return r0
    }

    public int getViewWidth() {
            r1 = this;
            int r0 = r1.l
            return r0
    }

    public abstract void init(android.content.Context r1);

    public boolean isLandscape() {
            r2 = this;
            android.content.Context r0 = r2.a
            android.content.res.Resources r0 = r0.getResources()
            android.content.res.Configuration r0 = r0.getConfiguration()
            int r0 = r0.orientation
            r1 = 2
            if (r0 != r1) goto L11
            r0 = 1
            goto L12
        L11:
            r0 = 0
        L12:
            return r0
    }

    public boolean isNotNULL(android.view.View... r5) {
            r4 = this;
            r0 = 0
            if (r5 == 0) goto L11
            int r1 = r5.length
            r2 = r0
            r3 = r2
        L6:
            if (r2 >= r1) goto L10
            r3 = r5[r2]
            if (r3 == 0) goto L11
            int r2 = r2 + 1
            r3 = 1
            goto L6
        L10:
            r0 = r3
        L11:
            return r0
    }

    @Override
    public void onConfigurationChanged(android.content.res.Configuration r3) {
            r2 = this;
            int r0 = r3.orientation
            r2.g = r0
            super.onConfigurationChanged(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onConfigurationChanged:"
            r0.append(r1)
            int r3 = r3.orientation
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "BTBaseView"
            android.util.Log.d(r0, r3)
            return
    }

    public abstract void onDestory();

    @Override
    public boolean onInterceptTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            float r0 = r2.getRawX()
            r1.i = r0
            float r0 = r2.getRawY()
            r1.j = r0
            boolean r2 = super.onInterceptTouchEvent(r2)
            return r2
    }

    public void onSelfConfigurationChanged(android.content.res.Configuration r3) {
            r2 = this;
            int r0 = r3.orientation
            r2.g = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onSelfConfigurationChanged:"
            r0.append(r1)
            int r3 = r3.orientation
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "BTBaseView"
            android.util.Log.d(r0, r3)
            return
    }

    public void setCampaign(com.mbridge.msdk.foundation.entity.CampaignEx r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setInstanceId(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setLayout(int r1, int r2) {
            r0 = this;
            r0.l = r1
            r0.m = r2
            return
    }

    public void setLayoutCenter(int r5, int r6) {
            r4 = this;
            android.widget.FrameLayout$LayoutParams r0 = r4.getParentFrameLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = r4.getParentRelativeLayoutParams()
            android.widget.LinearLayout$LayoutParams r2 = r4.getParentLinearLayoutParams()
            r3 = -999(0xfffffffffffffc19, float:NaN)
            if (r1 == 0) goto L21
            r0 = 13
            r1.addRule(r0)
            if (r5 == r3) goto L19
            r1.width = r5
        L19:
            if (r6 == r3) goto L1d
            r1.height = r6
        L1d:
            r4.setLayoutParams(r1)
            goto L42
        L21:
            r1 = 17
            if (r2 == 0) goto L33
            r2.gravity = r1
            if (r5 == r3) goto L2b
            r2.width = r5
        L2b:
            if (r6 == r3) goto L2f
            r2.height = r6
        L2f:
            r4.setLayoutParams(r2)
            goto L42
        L33:
            if (r0 == 0) goto L42
            r0.gravity = r1
            if (r5 == r3) goto L3b
            r0.width = r5
        L3b:
            if (r6 == r3) goto L3f
            r0.height = r6
        L3f:
            r4.setLayoutParams(r0)
        L42:
            return
    }

    public void setLayoutParam(int r5, int r6, int r7, int r8) {
            r4 = this;
            android.widget.FrameLayout$LayoutParams r0 = r4.getParentFrameLayoutParams()
            android.widget.RelativeLayout$LayoutParams r1 = r4.getParentRelativeLayoutParams()
            android.widget.LinearLayout$LayoutParams r2 = r4.getParentLinearLayoutParams()
            r3 = -999(0xfffffffffffffc19, float:NaN)
            if (r1 == 0) goto L20
            r1.topMargin = r6
            r1.leftMargin = r5
            if (r7 == r3) goto L18
            r1.width = r7
        L18:
            if (r8 == r3) goto L1c
            r1.height = r8
        L1c:
            r4.setLayoutParams(r1)
            goto L43
        L20:
            if (r2 == 0) goto L32
            r2.topMargin = r6
            r2.leftMargin = r5
            if (r7 == r3) goto L2a
            r2.width = r7
        L2a:
            if (r8 == r3) goto L2e
            r2.height = r8
        L2e:
            r4.setLayoutParams(r2)
            goto L43
        L32:
            if (r0 == 0) goto L43
            r0.topMargin = r6
            r0.leftMargin = r5
            if (r7 == r3) goto L3c
            r0.width = r7
        L3c:
            if (r8 == r3) goto L40
            r0.height = r8
        L40:
            r4.setLayoutParams(r0)
        L43:
            return
    }

    public void setMatchParent() {
            r2 = this;
            android.view.ViewGroup$LayoutParams r0 = r2.getLayoutParams()
            r1 = -1
            if (r0 != 0) goto L10
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r0.<init>(r1, r1)
            r2.setLayoutParams(r0)
            goto L14
        L10:
            r0.height = r1
            r0.width = r1
        L14:
            return
    }

    public void setRect(android.graphics.Rect r1) {
            r0 = this;
            r0.k = r1
            return
    }

    public void setRewardUnitSetting(com.mbridge.msdk.videocommon.d.c r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void setUnitId(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public void setWrapContent() {
            r2 = this;
            android.view.ViewGroup$LayoutParams r0 = r2.getLayoutParams()
            r1 = -2
            if (r0 != 0) goto L10
            android.view.ViewGroup$LayoutParams r0 = new android.view.ViewGroup$LayoutParams
            r0.<init>(r1, r1)
            r2.setLayoutParams(r0)
            goto L14
        L10:
            r0.height = r1
            r0.width = r1
        L14:
            return
    }
}
