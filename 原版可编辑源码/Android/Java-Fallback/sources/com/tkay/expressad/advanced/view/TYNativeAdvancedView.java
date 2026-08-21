package com.tkay.expressad.advanced.view;

public class TYNativeAdvancedView extends android.widget.RelativeLayout {
    protected static final java.lang.String a = "webviewshow";
    private static java.lang.String b = "TYNativeAdvancedView";
    private com.tkay.expressad.advanced.view.TYNativeAdvancedWebview c;
    private android.view.View d;
    private boolean e;
    private boolean f;
    private boolean g;
    private com.tkay.expressad.advanced.d.c h;
    private com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl i;
    private android.content.Context j;

    final class 1 implements java.lang.Runnable {
        final com.tkay.expressad.advanced.view.TYNativeAdvancedView a;

        1(com.tkay.expressad.advanced.view.TYNativeAdvancedView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r8 = this;
                com.tkay.expressad.advanced.view.TYNativeAdvancedView.a()     // Catch: java.lang.Exception -> L80
                java.lang.String r0 = ""
                r1 = 2
                int[] r2 = new int[r1]     // Catch: java.lang.Throwable -> L5e
                com.tkay.expressad.advanced.view.TYNativeAdvancedView r3 = r8.a     // Catch: java.lang.Throwable -> L5e
                com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r3 = com.tkay.expressad.advanced.view.TYNativeAdvancedView.a(r3)     // Catch: java.lang.Throwable -> L5e
                r3.getLocationOnScreen(r2)     // Catch: java.lang.Throwable -> L5e
                com.tkay.expressad.advanced.view.TYNativeAdvancedView.a()     // Catch: java.lang.Throwable -> L5e
                java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L5e
                java.lang.String r4 = "coordinate:"
                r3.<init>(r4)     // Catch: java.lang.Throwable -> L5e
                r4 = 0
                r5 = r2[r4]     // Catch: java.lang.Throwable -> L5e
                r3.append(r5)     // Catch: java.lang.Throwable -> L5e
                java.lang.String r5 = "--"
                r3.append(r5)     // Catch: java.lang.Throwable -> L5e
                r5 = 1
                r6 = r2[r5]     // Catch: java.lang.Throwable -> L5e
                r3.append(r6)     // Catch: java.lang.Throwable -> L5e
                org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L5e
                r3.<init>()     // Catch: java.lang.Throwable -> L5e
                java.lang.String r6 = "startX"
                com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L5e
                android.content.Context r7 = r7.f()     // Catch: java.lang.Throwable -> L5e
                r4 = r2[r4]     // Catch: java.lang.Throwable -> L5e
                float r4 = (float) r4     // Catch: java.lang.Throwable -> L5e
                int r4 = com.tkay.expressad.foundation.h.t.a(r7, r4)     // Catch: java.lang.Throwable -> L5e
                r3.put(r6, r4)     // Catch: java.lang.Throwable -> L5e
                java.lang.String r4 = "startY"
                com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L5e
                android.content.Context r6 = r6.f()     // Catch: java.lang.Throwable -> L5e
                r2 = r2[r5]     // Catch: java.lang.Throwable -> L5e
                float r2 = (float) r2     // Catch: java.lang.Throwable -> L5e
                int r2 = com.tkay.expressad.foundation.h.t.a(r6, r2)     // Catch: java.lang.Throwable -> L5e
                r3.put(r4, r2)     // Catch: java.lang.Throwable -> L5e
                java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L5e
                goto L65
            L5e:
                r2 = move-exception
                com.tkay.expressad.advanced.view.TYNativeAdvancedView.a()     // Catch: java.lang.Exception -> L80
                r2.getMessage()     // Catch: java.lang.Exception -> L80
            L65:
                java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L80
                byte[] r0 = r0.getBytes()     // Catch: java.lang.Exception -> L80
                java.lang.String r0 = android.util.Base64.encodeToString(r0, r1)     // Catch: java.lang.Exception -> L80
                com.tkay.expressad.atsignalcommon.windvane.j.a()     // Catch: java.lang.Exception -> L80
                com.tkay.expressad.advanced.view.TYNativeAdvancedView r1 = r8.a     // Catch: java.lang.Exception -> L80
                com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r1 = com.tkay.expressad.advanced.view.TYNativeAdvancedView.a(r1)     // Catch: java.lang.Exception -> L80
                java.lang.String r2 = "webviewshow"
                com.tkay.expressad.atsignalcommon.windvane.j.a(r1, r2, r0)     // Catch: java.lang.Exception -> L80
                return
            L80:
                r0 = move-exception
                r0.printStackTrace()
                return
        }
    }

    static {
            return
    }

    public TYNativeAdvancedView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public TYNativeAdvancedView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public TYNativeAdvancedView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.j = r1
            return
    }

    static com.tkay.expressad.advanced.view.TYNativeAdvancedWebview a(com.tkay.expressad.advanced.view.TYNativeAdvancedView r0) {
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r0.c
            return r0
    }

    static java.lang.String a() {
            java.lang.String r0 = com.tkay.expressad.advanced.view.TYNativeAdvancedView.b
            return r0
    }

    private void b() {
            r5 = this;
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r5.c
            if (r0 == 0) goto L15
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L15
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r5.c
            android.view.ViewGroup$LayoutParams r1 = new android.view.ViewGroup$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r5.addView(r0, r1)
        L15:
            r0 = 2
            int[] r0 = new int[r0]
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r1 = r5.c
            r1.getLocationInWindow(r0)
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r1 = r5.c
            r2 = 0
            r2 = r0[r2]
            r3 = 1
            r0 = r0[r3]
            int r3 = r1.getWidth()
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r4 = r5.c
            int r4 = r4.getHeight()
            transInfoForMraid(r1, r2, r0, r3, r4)
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r5.c
            if (r0 == 0) goto L45
            com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl r1 = r5.i
            r0.setObject(r1)
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r5.c
            com.tkay.expressad.advanced.view.TYNativeAdvancedView$1 r1 = new com.tkay.expressad.advanced.view.TYNativeAdvancedView$1
            r1.<init>(r5)
            r0.post(r1)
        L45:
            android.view.View r0 = r5.d
            if (r0 == 0) goto L93
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L8e
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r1 = r5.getContext()
            r2 = 1105199104(0x41e00000, float:28.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            android.content.Context r2 = r5.getContext()
            r3 = 1098907648(0x41800000, float:16.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r3)
            r0.<init>(r1, r2)
            r1 = 10
            r0.addRule(r1)
            r1 = 11
            r0.addRule(r1)
            android.content.Context r1 = r5.getContext()
            r2 = 1073741824(0x40000000, float:2.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r0.rightMargin = r1
            android.content.Context r1 = r5.getContext()
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r0.topMargin = r1
            android.view.View r1 = r5.d
            r5.addView(r1, r0)
            return
        L8e:
            android.view.View r0 = r5.d
            r5.bringChildToFront(r0)
        L93:
            return
    }

    private void c() {
            r5 = this;
            r0 = 2
            int[] r0 = new int[r0]
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r1 = r5.c
            r1.getLocationInWindow(r0)
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r1 = r5.c
            r2 = 0
            r2 = r0[r2]
            r3 = 1
            r0 = r0[r3]
            int r3 = r1.getWidth()
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r4 = r5.c
            int r4 = r4.getHeight()
            transInfoForMraid(r1, r2, r0, r3, r4)
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r5.c
            if (r0 == 0) goto L30
            com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl r1 = r5.i
            r0.setObject(r1)
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r5.c
            com.tkay.expressad.advanced.view.TYNativeAdvancedView$1 r1 = new com.tkay.expressad.advanced.view.TYNativeAdvancedView$1
            r1.<init>(r5)
            r0.post(r1)
        L30:
            return
    }

    public static void transInfoForMraid(android.webkit.WebView r16, int r17, int r18, int r19, int r20) {
            r6 = r16
            java.lang.String r0 = "true"
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Ld2
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> Ld2
            android.content.res.Resources r1 = r1.getResources()     // Catch: java.lang.Throwable -> Ld2
            android.content.res.Configuration r1 = r1.getConfiguration()     // Catch: java.lang.Throwable -> Ld2
            int r1 = r1.orientation     // Catch: java.lang.Throwable -> Ld2
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Ld2
            r2.<init>()     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r3 = "orientation"
            r4 = 2
            if (r1 != r4) goto L23
            java.lang.String r1 = "landscape"
            goto L2b
        L23:
            r4 = 1
            if (r1 != r4) goto L29
            java.lang.String r1 = "portrait"
            goto L2b
        L29:
            java.lang.String r1 = "undefined"
        L2b:
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r1 = "locked"
            r2.put(r1, r0)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Ld2
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> Ld2
            int r1 = com.tkay.expressad.foundation.h.k.e(r1)     // Catch: java.lang.Throwable -> Ld2
            float r7 = (float) r1     // Catch: java.lang.Throwable -> Ld2
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Ld2
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> Ld2
            int r1 = com.tkay.expressad.foundation.h.k.f(r1)     // Catch: java.lang.Throwable -> Ld2
            float r8 = (float) r1     // Catch: java.lang.Throwable -> Ld2
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> Ld2
            android.content.Context r1 = r1.f()     // Catch: java.lang.Throwable -> Ld2
            java.util.HashMap r1 = com.tkay.expressad.foundation.h.k.g(r1)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r3 = "width"
            java.lang.Object r3 = r1.get(r3)     // Catch: java.lang.Throwable -> Ld2
            java.lang.Integer r3 = (java.lang.Integer) r3     // Catch: java.lang.Throwable -> Ld2
            int r9 = r3.intValue()     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r3 = "height"
            java.lang.Object r1 = r1.get(r3)     // Catch: java.lang.Throwable -> Ld2
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Throwable -> Ld2
            int r10 = r1.intValue()     // Catch: java.lang.Throwable -> Ld2
            java.util.HashMap r11 = new java.util.HashMap     // Catch: java.lang.Throwable -> Ld2
            r11.<init>()     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r1 = "placementType"
            java.lang.String r3 = "inline"
            r11.put(r1, r3)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r1 = "state"
            java.lang.String r3 = "default"
            r11.put(r1, r3)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r1 = "viewable"
            r11.put(r1, r0)     // Catch: java.lang.Throwable -> Ld2
            java.lang.String r0 = "currentAppOrientation"
            r11.put(r0, r2)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Ld2
            r1 = r17
            float r12 = (float) r1     // Catch: java.lang.Throwable -> Ld2
            r1 = r18
            float r13 = (float) r1     // Catch: java.lang.Throwable -> Ld2
            r1 = r19
            float r14 = (float) r1     // Catch: java.lang.Throwable -> Ld2
            r1 = r20
            float r15 = (float) r1     // Catch: java.lang.Throwable -> Ld2
            r1 = r16
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r0.fireSetDefaultPosition(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Ld2
            r1 = r16
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r15
            r0.fireSetCurrentPosition(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Ld2
            r0.fireSetScreenSize(r6, r7, r8)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Ld2
            float r1 = (float) r9     // Catch: java.lang.Throwable -> Ld2
            float r2 = (float) r10     // Catch: java.lang.Throwable -> Ld2
            r0.fireSetMaxSize(r6, r1, r2)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Ld2
            r0.fireChangeEventForPropertys(r6, r11)     // Catch: java.lang.Throwable -> Ld2
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r0 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Throwable -> Ld2
            r0.fireReadyEvent(r6)     // Catch: java.lang.Throwable -> Ld2
        Ld2:
            return
    }

    public void changeCloseBtnState(int r3) {
            r2 = this;
            android.view.View r0 = r2.d
            if (r0 == 0) goto L11
            r1 = 2
            if (r3 != r1) goto Ld
            r3 = 8
            r0.setVisibility(r3)
            return
        Ld:
            r3 = 0
            r0.setVisibility(r3)
        L11:
            return
    }

    public void clearResState() {
            r1 = this;
            r0 = 0
            r1.g = r0
            r1.f = r0
            r1.e = r0
            return
    }

    public void clearResStateAndRemoveClose() {
            r1 = this;
            r1.clearResState()
            android.view.View r0 = r1.d
            if (r0 == 0) goto L12
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L12
            android.view.View r0 = r1.d
            r1.removeView(r0)
        L12:
            return
    }

    public void destroy() {
            r3 = this;
            r3.removeAllViews()
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r3.c
            if (r0 == 0) goto L1b
            boolean r0 = r0.isDestroyed()
            if (r0 != 0) goto L1b
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r3.c
            r0.release()
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r3.c
            java.lang.String r1 = "onSystemDestory"
            java.lang.String r2 = ""
            com.tkay.expressad.advanced.js.NativeAdvancedJsUtils.sendEventToH5(r0, r1, r2)
        L1b:
            android.content.Context r0 = r3.j
            if (r0 == 0) goto L22
            r0 = 0
            r3.j = r0
        L22:
            return
    }

    public com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl getAdvancedNativeJSBridgeImpl() {
            r1 = this;
            com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl r0 = r1.i
            return r0
    }

    public com.tkay.expressad.advanced.view.TYNativeAdvancedWebview getAdvancedNativeWebview() {
            r1 = this;
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r1.c
            return r0
    }

    public android.view.View getCloseView() {
            r1 = this;
            android.view.View r0 = r1.d
            return r0
    }

    public boolean isEndCardReady() {
            r1 = this;
            boolean r0 = r1.g
            return r0
    }

    public boolean isH5Ready() {
            r1 = this;
            boolean r0 = r1.e
            return r0
    }

    public boolean isVideoReady() {
            r1 = this;
            boolean r0 = r1.f
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
            r1.g = r0
            r1.f = r0
            r1.e = r0
            return
    }

    public void setAdvancedNativeJSBridgeImpl(com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl r2) {
            r1 = this;
            r1.i = r2
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r1.c
            if (r0 == 0) goto L9
            r0.setObject(r2)
        L9:
            return
    }

    public void setAdvancedNativeWebview(com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r2) {
            r1 = this;
            r1.c = r2
            com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl r0 = r1.i
            if (r0 == 0) goto L9
            r2.setObject(r0)
        L9:
            return
    }

    public void setCloseView(android.view.View r2) {
            r1 = this;
            r1.d = r2
            if (r2 == 0) goto L9
            java.lang.String r0 = "closeButton"
            r2.setContentDescription(r0)
        L9:
            return
    }

    public void setEndCardReady(boolean r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void setH5Ready(boolean r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public void setVideoReady(boolean r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void show() {
            r5 = this;
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r5.c
            if (r0 == 0) goto L15
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L15
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r5.c
            android.view.ViewGroup$LayoutParams r1 = new android.view.ViewGroup$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r5.addView(r0, r1)
        L15:
            r0 = 2
            int[] r0 = new int[r0]
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r1 = r5.c
            r1.getLocationInWindow(r0)
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r1 = r5.c
            r2 = 0
            r2 = r0[r2]
            r3 = 1
            r0 = r0[r3]
            int r3 = r1.getWidth()
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r4 = r5.c
            int r4 = r4.getHeight()
            transInfoForMraid(r1, r2, r0, r3, r4)
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r5.c
            if (r0 == 0) goto L45
            com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl r1 = r5.i
            r0.setObject(r1)
            com.tkay.expressad.advanced.view.TYNativeAdvancedWebview r0 = r5.c
            com.tkay.expressad.advanced.view.TYNativeAdvancedView$1 r1 = new com.tkay.expressad.advanced.view.TYNativeAdvancedView$1
            r1.<init>(r5)
            r0.post(r1)
        L45:
            android.view.View r0 = r5.d
            if (r0 == 0) goto L93
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L8e
            android.widget.RelativeLayout$LayoutParams r0 = new android.widget.RelativeLayout$LayoutParams
            android.content.Context r1 = r5.getContext()
            r2 = 1105199104(0x41e00000, float:28.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            android.content.Context r2 = r5.getContext()
            r3 = 1098907648(0x41800000, float:16.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r3)
            r0.<init>(r1, r2)
            r1 = 10
            r0.addRule(r1)
            r1 = 11
            r0.addRule(r1)
            android.content.Context r1 = r5.getContext()
            r2 = 1073741824(0x40000000, float:2.0)
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r0.rightMargin = r1
            android.content.Context r1 = r5.getContext()
            int r1 = com.tkay.expressad.foundation.h.t.b(r1, r2)
            r0.topMargin = r1
            android.view.View r1 = r5.d
            r5.addView(r1, r0)
            goto L93
        L8e:
            android.view.View r0 = r5.d
            r5.bringChildToFront(r0)
        L93:
            r5.clearResState()
            return
    }
}
