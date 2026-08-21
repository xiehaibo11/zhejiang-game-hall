package com.mbridge.msdk.video.module;

public abstract class MBridgeBaseView extends android.widget.RelativeLayout {
    public static final java.lang.String TAG = "MBridgeBaseView";
    protected android.content.Context a;
    protected com.mbridge.msdk.foundation.entity.CampaignEx b;
    protected android.view.LayoutInflater c;
    protected int d;
    protected com.mbridge.msdk.video.module.a.a e;
    protected boolean f;
    protected float g;
    protected float h;
    protected boolean i;
    protected int j;
    protected boolean k;
    protected int l;
    protected int m;

    public MBridgeBaseView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public MBridgeBaseView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r1.<init>(r2, r3)
            r3 = 1
            r1.d = r3
            com.mbridge.msdk.video.module.a.a.e r0 = new com.mbridge.msdk.video.module.a.a.e
            r0.<init>()
            r1.e = r0
            r0 = 0
            r1.f = r0
            r1.l = r3
            r1.m = r0
            r1.a = r2
            android.view.LayoutInflater r3 = android.view.LayoutInflater.from(r2)
            r1.c = r3
            r1.init(r2)
            return
    }

    public MBridgeBaseView(android.content.Context r2, android.util.AttributeSet r3, boolean r4, int r5, boolean r6, int r7, int r8) {
            r1 = this;
            r1.<init>(r2, r3)
            r3 = 1
            r1.d = r3
            com.mbridge.msdk.video.module.a.a.e r0 = new com.mbridge.msdk.video.module.a.a.e
            r0.<init>()
            r1.e = r0
            r0 = 0
            r1.f = r0
            r1.l = r3
            r1.m = r0
            r1.a = r2
            android.view.LayoutInflater r3 = android.view.LayoutInflater.from(r2)
            r1.c = r3
            r1.i = r4
            r1.j = r5
            r1.k = r6
            r1.l = r7
            r1.m = r8
            r1.init(r2)
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
            float r3 = r4.g     // Catch: org.json.JSONException -> L60
            int r2 = com.mbridge.msdk.foundation.tools.ae.a(r2, r3)     // Catch: org.json.JSONException -> L60
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L60
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.o     // Catch: org.json.JSONException -> L60
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: org.json.JSONException -> L60
            android.content.Context r2 = r2.j()     // Catch: org.json.JSONException -> L60
            float r3 = r4.h     // Catch: org.json.JSONException -> L60
            int r2 = com.mbridge.msdk.foundation.tools.ae.a(r2, r3)     // Catch: org.json.JSONException -> L60
            r1.put(r0, r2)     // Catch: org.json.JSONException -> L60
            java.lang.String r0 = com.mbridge.msdk.foundation.same.a.q     // Catch: org.json.JSONException -> L60
            r1.put(r0, r5)     // Catch: org.json.JSONException -> L60
            android.content.Context r5 = r4.getContext()     // Catch: java.lang.Exception -> L46 org.json.JSONException -> L60
            android.content.res.Resources r5 = r5.getResources()     // Catch: java.lang.Exception -> L46 org.json.JSONException -> L60
            android.content.res.Configuration r5 = r5.getConfiguration()     // Catch: java.lang.Exception -> L46 org.json.JSONException -> L60
            int r5 = r5.orientation     // Catch: java.lang.Exception -> L46 org.json.JSONException -> L60
            r4.d = r5     // Catch: java.lang.Exception -> L46 org.json.JSONException -> L60
            goto L4a
        L46:
            r5 = move-exception
            r5.printStackTrace()     // Catch: org.json.JSONException -> L60
        L4a:
            java.lang.String r5 = com.mbridge.msdk.foundation.same.a.r     // Catch: org.json.JSONException -> L60
            int r0 = r4.d     // Catch: org.json.JSONException -> L60
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

    protected void c() {
            r0 = this;
            return
    }

    protected final java.lang.String d() {
            r1 = this;
            r0 = 0
            org.json.JSONObject r0 = r1.a(r0)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public void defaultShow() {
            r2 = this;
            java.lang.String r0 = "MBridgeBaseView"
            java.lang.String r1 = "defaultShow"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            return
    }

    public int filterFindViewId(boolean r1, java.lang.String r2) {
            r0 = this;
            if (r1 == 0) goto L7
            int r1 = r0.findDyID(r2)
            goto Lb
        L7:
            int r1 = r0.findID(r2)
        Lb:
            return r1
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

    public int findDyID(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto Lb
            int r2 = r2.hashCode()
            return r2
        Lb:
            r2 = -1
            return r2
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
            r2.d = r0
            super.onConfigurationChanged(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onConfigurationChanged:"
            r0.append(r1)
            int r3 = r3.orientation
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "MBridgeBaseView"
            android.util.Log.d(r0, r3)
            return
    }

    @Override
    public boolean onInterceptTouchEvent(android.view.MotionEvent r2) {
            r1 = this;
            float r0 = r2.getRawX()
            r1.g = r0
            float r0 = r2.getRawY()
            r1.h = r0
            boolean r2 = super.onInterceptTouchEvent(r2)
            return r2
    }

    public void onSelfConfigurationChanged(android.content.res.Configuration r3) {
            r2 = this;
            int r0 = r3.orientation
            r2.d = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "onSelfConfigurationChanged:"
            r0.append(r1)
            int r3 = r3.orientation
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "MBridgeBaseView"
            android.util.Log.d(r0, r3)
            return
    }

    public void setCampaign(com.mbridge.msdk.foundation.entity.CampaignEx r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public void setLayoutCenter(int r4, int r5) {
            r3 = this;
            android.widget.RelativeLayout$LayoutParams r0 = r3.getParentRelativeLayoutParams()
            android.widget.LinearLayout$LayoutParams r1 = r3.getParentLinearLayoutParams()
            r2 = -999(0xfffffffffffffc19, float:NaN)
            if (r0 == 0) goto L1d
            r1 = 13
            r0.addRule(r1)
            if (r4 == r2) goto L15
            r0.width = r4
        L15:
            if (r5 == r2) goto L19
            r0.height = r5
        L19:
            r3.setLayoutParams(r0)
            goto L2e
        L1d:
            if (r1 == 0) goto L2e
            r0 = 17
            r1.gravity = r0
            if (r4 == r2) goto L27
            r1.width = r4
        L27:
            if (r5 == r2) goto L2b
            r1.height = r5
        L2b:
            r3.setLayoutParams(r1)
        L2e:
            return
    }

    public void setLayoutParam(int r4, int r5, int r6, int r7) {
            r3 = this;
            android.widget.RelativeLayout$LayoutParams r0 = r3.getParentRelativeLayoutParams()
            android.widget.LinearLayout$LayoutParams r1 = r3.getParentLinearLayoutParams()
            r2 = -999(0xfffffffffffffc19, float:NaN)
            if (r0 == 0) goto L1c
            r0.topMargin = r5
            r0.leftMargin = r4
            if (r6 == r2) goto L14
            r0.width = r6
        L14:
            if (r7 == r2) goto L18
            r0.height = r7
        L18:
            r3.setLayoutParams(r0)
            goto L2d
        L1c:
            if (r1 == 0) goto L2d
            r1.topMargin = r5
            r1.leftMargin = r4
            if (r6 == r2) goto L26
            r1.width = r6
        L26:
            if (r7 == r2) goto L2a
            r1.height = r7
        L2a:
            r3.setLayoutParams(r1)
        L2d:
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

    public void setNotifyListener(com.mbridge.msdk.video.module.a.a r1) {
            r0 = this;
            r0.e = r1
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
