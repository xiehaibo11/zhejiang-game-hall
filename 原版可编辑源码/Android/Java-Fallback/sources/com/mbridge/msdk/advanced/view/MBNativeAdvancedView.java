package com.mbridge.msdk.advanced.view;

public class MBNativeAdvancedView extends android.widget.RelativeLayout {
    private static java.lang.String a = "MBAdvancedNativeView";
    private com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview b;
    private android.view.View c;
    private boolean d;
    private boolean e;
    private boolean f;
    private com.mbridge.msdk.advanced.js.a g;
    private android.content.Context h;


    static {
            return
    }

    public MBNativeAdvancedView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public MBNativeAdvancedView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public MBNativeAdvancedView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.h = r1
            return
    }

    static com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview a(com.mbridge.msdk.advanced.view.MBNativeAdvancedView r0) {
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r0.b
            return r0
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.advanced.view.MBNativeAdvancedView.a
            return r0
    }

    public static void transInfoForMraid(android.webkit.WebView r17, int r18, int r19, int r20, int r21) {
            r0 = r17
            java.lang.String r1 = "true"
            java.lang.String r2 = com.mbridge.msdk.advanced.view.MBNativeAdvancedView.a
            java.lang.String r7 = "transInfoForMraid"
            com.mbridge.msdk.foundation.tools.z.d(r2, r7)
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Ldc
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> Ldc
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Throwable -> Ldc
            android.content.res.Configuration r2 = r2.getConfiguration()     // Catch: java.lang.Throwable -> Ldc
            int r2 = r2.orientation     // Catch: java.lang.Throwable -> Ldc
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Ldc
            r3.<init>()     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r4 = "orientation"
            r5 = 2
            if (r2 != r5) goto L2a
            java.lang.String r2 = "landscape"
            goto L32
        L2a:
            r5 = 1
            if (r2 != r5) goto L30
            java.lang.String r2 = "portrait"
            goto L32
        L30:
            java.lang.String r2 = "undefined"
        L32:
            r3.put(r4, r2)     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r2 = "locked"
            r3.put(r2, r1)     // Catch: java.lang.Throwable -> Ldc
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Ldc
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> Ldc
            int r2 = com.mbridge.msdk.foundation.tools.v.x(r2)     // Catch: java.lang.Throwable -> Ldc
            float r8 = (float) r2     // Catch: java.lang.Throwable -> Ldc
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Ldc
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> Ldc
            int r2 = com.mbridge.msdk.foundation.tools.v.y(r2)     // Catch: java.lang.Throwable -> Ldc
            float r9 = (float) r2     // Catch: java.lang.Throwable -> Ldc
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Ldc
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> Ldc
            java.util.HashMap r2 = com.mbridge.msdk.foundation.tools.v.z(r2)     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r4 = "width"
            java.lang.Object r4 = r2.get(r4)     // Catch: java.lang.Throwable -> Ldc
            java.lang.Integer r4 = (java.lang.Integer) r4     // Catch: java.lang.Throwable -> Ldc
            int r10 = r4.intValue()     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r4 = "height"
            java.lang.Object r2 = r2.get(r4)     // Catch: java.lang.Throwable -> Ldc
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> Ldc
            int r11 = r2.intValue()     // Catch: java.lang.Throwable -> Ldc
            java.util.HashMap r12 = new java.util.HashMap     // Catch: java.lang.Throwable -> Ldc
            r12.<init>()     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r2 = "placementType"
            java.lang.String r4 = "inline"
            r12.put(r2, r4)     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r2 = "state"
            java.lang.String r4 = "default"
            r12.put(r2, r4)     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r2 = "viewable"
            r12.put(r2, r1)     // Catch: java.lang.Throwable -> Ldc
            java.lang.String r1 = "currentAppOrientation"
            r12.put(r1, r3)     // Catch: java.lang.Throwable -> Ldc
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> Ldc
            r2 = r18
            float r13 = (float) r2     // Catch: java.lang.Throwable -> Ldc
            r2 = r19
            float r14 = (float) r2     // Catch: java.lang.Throwable -> Ldc
            r2 = r20
            float r15 = (float) r2     // Catch: java.lang.Throwable -> Ldc
            r2 = r21
            float r6 = (float) r2     // Catch: java.lang.Throwable -> Ldc
            r2 = r17
            r3 = r13
            r4 = r14
            r5 = r15
            r16 = r6
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> Ldc
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> Ldc
            r2 = r17
            r3 = r13
            r4 = r14
            r5 = r15
            r6 = r16
            r1.b(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> Ldc
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> Ldc
            r1.b(r0, r8, r9)     // Catch: java.lang.Throwable -> Ldc
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> Ldc
            float r2 = (float) r10     // Catch: java.lang.Throwable -> Ldc
            float r3 = (float) r11     // Catch: java.lang.Throwable -> Ldc
            r1.c(r0, r2, r3)     // Catch: java.lang.Throwable -> Ldc
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> Ldc
            r1.a(r0, r12)     // Catch: java.lang.Throwable -> Ldc
            com.mbridge.msdk.mbjscommon.mraid.a r1 = com.mbridge.msdk.mbjscommon.mraid.a.a()     // Catch: java.lang.Throwable -> Ldc
            r1.a(r0)     // Catch: java.lang.Throwable -> Ldc
            goto Le2
        Ldc:
            r0 = move-exception
            java.lang.String r1 = com.mbridge.msdk.advanced.view.MBNativeAdvancedView.a
            com.mbridge.msdk.foundation.tools.z.c(r1, r7, r0)
        Le2:
            return
    }

    public void changeCloseBtnState(int r3) {
            r2 = this;
            android.view.View r0 = r2.c
            if (r0 == 0) goto L11
            r1 = 2
            if (r3 != r1) goto Ld
            r3 = 8
            r0.setVisibility(r3)
            goto L11
        Ld:
            r3 = 0
            r0.setVisibility(r3)
        L11:
            return
    }

    public void clearResState() {
            r1 = this;
            r0 = 0
            r1.f = r0
            r1.e = r0
            r1.d = r0
            return
    }

    public void clearResStateAndRemoveClose() {
            r1 = this;
            r1.clearResState()
            android.view.View r0 = r1.c
            if (r0 == 0) goto L12
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L12
            android.view.View r0 = r1.c
            r1.removeView(r0)
        L12:
            return
    }

    public void destroy() {
            r3 = this;
            r3.removeAllViews()
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r3.b
            if (r0 == 0) goto L1b
            boolean r0 = r0.isDestoryed()
            if (r0 != 0) goto L1b
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r3.b
            r0.release()
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r3.b
            java.lang.String r1 = "onSystemDestory"
            java.lang.String r2 = ""
            com.mbridge.msdk.advanced.js.b.a(r0, r1, r2)
        L1b:
            android.content.Context r0 = r3.h
            if (r0 == 0) goto L22
            r0 = 0
            r3.h = r0
        L22:
            return
    }

    public com.mbridge.msdk.advanced.js.a getAdvancedNativeJSBridgeImpl() {
            r1 = this;
            com.mbridge.msdk.advanced.js.a r0 = r1.g
            return r0
    }

    public com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview getAdvancedNativeWebview() {
            r1 = this;
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r1.b
            return r0
    }

    public android.view.View getCloseView() {
            r1 = this;
            android.view.View r0 = r1.c
            return r0
    }

    public boolean isEndCardReady() {
            r1 = this;
            boolean r0 = r1.f
            return r0
    }

    public boolean isH5Ready() {
            r1 = this;
            boolean r0 = r1.d
            return r0
    }

    public boolean isVideoReady() {
            r1 = this;
            boolean r0 = r1.e
            return r0
    }

    @Override
    protected void onConfigurationChanged(android.content.res.Configuration r1) {
            r0 = this;
            super.onConfigurationChanged(r1)
            return
    }

    public void resetLoadState() {
            r1 = this;
            r0 = 0
            r1.f = r0
            r1.e = r0
            r1.d = r0
            return
    }

    public void setAdvancedNativeJSBridgeImpl(com.mbridge.msdk.advanced.js.a r2) {
            r1 = this;
            r1.g = r2
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r1.b
            if (r0 == 0) goto L9
            r0.setObject(r2)
        L9:
            return
    }

    public void setAdvancedNativeWebview(com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r2) {
            r1 = this;
            r1.b = r2
            com.mbridge.msdk.advanced.js.a r0 = r1.g
            if (r0 == 0) goto L9
            r2.setObject(r0)
        L9:
            return
    }

    public void setCloseView(android.view.View r2) {
            r1 = this;
            r1.c = r2
            if (r2 == 0) goto L9
            java.lang.String r0 = "closeButton"
            r2.setContentDescription(r0)
        L9:
            return
    }

    public void setEndCardReady(boolean r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void setH5Ready(boolean r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setVideoReady(boolean r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void show() {
            r5 = this;
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r5.b
            if (r0 == 0) goto L15
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L15
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r5.b
            android.view.ViewGroup$LayoutParams r1 = new android.view.ViewGroup$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r5.addView(r0, r1)
        L15:
            r0 = 2
            int[] r0 = new int[r0]
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r1 = r5.b
            r1.getLocationInWindow(r0)
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r1 = r5.b
            r2 = 0
            r2 = r0[r2]
            r3 = 1
            r0 = r0[r3]
            int r3 = r1.getWidth()
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r4 = r5.b
            int r4 = r4.getHeight()
            transInfoForMraid(r1, r2, r0, r3, r4)
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r5.b
            if (r0 == 0) goto L45
            com.mbridge.msdk.advanced.js.a r1 = r5.g
            r0.setObject(r1)
            com.mbridge.msdk.advanced.view.MBNativeAdvancedWebview r0 = r5.b
            com.mbridge.msdk.advanced.view.MBNativeAdvancedView$1 r1 = new com.mbridge.msdk.advanced.view.MBNativeAdvancedView$1
            r1.<init>(r5)
            r0.post(r1)
        L45:
            android.view.View r0 = r5.c
            if (r0 == 0) goto L93
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L8e
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r1 = r5.getContext()
            r2 = 1105199104(0x41e00000, float:28.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            android.content.Context r2 = r5.getContext()
            r3 = 1098907648(0x41800000, float:16.0)
            int r2 = com.mbridge.msdk.foundation.tools.ae.b(r2, r3)
            r0.<init>(r1, r2)
            r1 = 10
            r0.addRule(r1)
            r1 = 11
            r0.addRule(r1)
            android.content.Context r1 = r5.getContext()
            r2 = 1073741824(0x40000000, float:2.0)
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r0.rightMargin = r1
            android.content.Context r1 = r5.getContext()
            int r1 = com.mbridge.msdk.foundation.tools.ae.b(r1, r2)
            r0.topMargin = r1
            android.view.View r1 = r5.c
            r5.addView(r1, r0)
            goto L93
        L8e:
            android.view.View r0 = r5.c
            r5.bringChildToFront(r0)
        L93:
            r5.clearResState()
            return
    }
}
