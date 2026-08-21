package com.tkay.basead.ui;

public class MraidContainerView extends android.widget.FrameLayout {
    private static final java.lang.String h = null;
    protected com.tkay.core.common.f.h a;
    protected com.tkay.core.common.f.j b;
    protected com.tkay.core.common.f.i c;
    protected com.tkay.basead.ui.b d;
    protected com.tkay.basead.ui.ClickToReLoadView e;
    protected com.tkay.basead.mraid.MraidWebView f;
    protected com.tkay.basead.ui.MraidContainerView.a g;
    private boolean i;
    private boolean j;
    private boolean k;
    private boolean l;




    public interface a {
        void a();

        void a(java.lang.String r1);

        void b();
    }

    static {
            java.lang.Class<com.tkay.basead.ui.MraidContainerView> r0 = com.tkay.basead.ui.MraidContainerView.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.basead.ui.MraidContainerView.h = r0
            return
    }

    public MraidContainerView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MraidContainerView(android.content.Context r1, com.tkay.core.common.f.h r2, com.tkay.core.common.f.i r3, com.tkay.basead.ui.MraidContainerView.a r4) {
            r0 = this;
            r0.<init>(r1)
            r0.a = r2
            com.tkay.core.common.f.j r2 = r3.m
            r0.b = r2
            r0.c = r3
            r0.g = r4
            android.content.res.Resources r2 = r0.getResources()
            java.lang.String r3 = "color_99000000"
            java.lang.String r4 = "color"
            int r1 = com.tkay.core.common.l.h.a(r1, r3, r4)
            int r1 = r2.getColor(r1)
            r0.setBackgroundColor(r1)
            return
    }

    static java.lang.String a() {
            java.lang.String r0 = com.tkay.basead.ui.MraidContainerView.h
            return r0
    }

    static boolean a(com.tkay.basead.ui.MraidContainerView r1) {
            r0 = 0
            r1.k = r0
            return r0
    }

    private void b() {
            r3 = this;
            com.tkay.core.common.f.i r0 = r3.c
            com.tkay.core.common.f.h r1 = r3.a
            java.lang.String r0 = com.tkay.basead.a.b.c.a(r0, r1)
            com.tkay.basead.mraid.MraidWebView r0 = com.tkay.basead.a.b.c.b(r0)
            r3.f = r0
            if (r0 == 0) goto L3a
            r1 = 1
            r3.l = r1
            boolean r2 = r3.j
            if (r2 == 0) goto L1a
            r0.setNeedRegisterVolumeChangeReceiver(r1)
        L1a:
            com.tkay.basead.mraid.MraidWebView r0 = r3.f
            android.content.Context r1 = r3.getContext()
            com.tkay.basead.ui.MraidContainerView$1 r2 = new com.tkay.basead.ui.MraidContainerView$1
            r2.<init>(r3)
            r0.prepare(r1, r2)
            com.tkay.basead.mraid.MraidWebView r0 = r3.f
            android.widget.FrameLayout$LayoutParams r1 = new android.widget.FrameLayout$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r3.addView(r0, r1)
            com.tkay.basead.ui.MraidContainerView$a r0 = r3.g
            if (r0 == 0) goto L3a
            r0.a()
        L3a:
            return
    }

    static void b(com.tkay.basead.ui.MraidContainerView r0) {
            r0.b()
            return
    }

    private void c() {
            r3 = this;
            com.tkay.basead.ui.ClickToReLoadView r0 = r3.e
            if (r0 != 0) goto L17
            com.tkay.basead.ui.ClickToReLoadView r0 = new com.tkay.basead.ui.ClickToReLoadView
            android.content.Context r1 = r3.getContext()
            r0.<init>(r1)
            r3.e = r0
            com.tkay.basead.ui.MraidContainerView$3 r1 = new com.tkay.basead.ui.MraidContainerView$3
            r1.<init>(r3)
            r0.setListener(r1)
        L17:
            com.tkay.basead.ui.ClickToReLoadView r0 = r3.e
            android.widget.FrameLayout$LayoutParams r1 = new android.widget.FrameLayout$LayoutParams
            r2 = -1
            r1.<init>(r2, r2)
            r3.addView(r0, r1)
            return
    }

    static void c(com.tkay.basead.ui.MraidContainerView r0) {
            r0.f()
            return
    }

    private void d() {
            r1 = this;
            com.tkay.basead.ui.ClickToReLoadView r0 = r1.e
            if (r0 == 0) goto L7
            r1.removeView(r0)
        L7:
            return
    }

    static void d(com.tkay.basead.ui.MraidContainerView r0) {
            r0.c()
            return
    }

    private void e() {
            r1 = this;
            com.tkay.basead.ui.b r0 = r1.d
            if (r0 == 0) goto L7
            r0.b()
        L7:
            return
    }

    private void f() {
            r1 = this;
            com.tkay.basead.ui.b r0 = r1.d
            if (r0 == 0) goto L7
            r0.c()
        L7:
            return
    }

    private void g() {
            r1 = this;
            com.tkay.core.common.f.j r0 = r1.b
            boolean r0 = r0.V()
            if (r0 == 0) goto L9
            return
        L9:
            r1.loadMraidWebView()
            return
    }

    public void fireAudioVolumeChange(boolean r4) {
            r3 = this;
            boolean r0 = r3.l     // Catch: java.lang.Exception -> L21
            if (r0 == 0) goto L21
            com.tkay.basead.mraid.MraidWebView r0 = r3.f     // Catch: java.lang.Exception -> L21
            if (r0 == 0) goto L21
            if (r4 == 0) goto L16
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r4 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Exception -> L21
            com.tkay.basead.mraid.MraidWebView r0 = r3.f     // Catch: java.lang.Exception -> L21
            r1 = 0
            r4.fireAudioVolumeChange(r0, r1)     // Catch: java.lang.Exception -> L21
            return
        L16:
            com.tkay.expressad.atsignalcommon.mraid.CallMraidJS r4 = com.tkay.expressad.atsignalcommon.mraid.CallMraidJS.getInstance()     // Catch: java.lang.Exception -> L21
            com.tkay.basead.mraid.MraidWebView r0 = r3.f     // Catch: java.lang.Exception -> L21
            r1 = 4607182418800017408(0x3ff0000000000000, double:1.0)
            r4.fireAudioVolumeChange(r0, r1)     // Catch: java.lang.Exception -> L21
        L21:
            return
    }

    public void fireMraidIsViewable(boolean r2) {
            r1 = this;
            boolean r0 = r1.l     // Catch: java.lang.Throwable -> L17
            if (r0 == 0) goto L17
            com.tkay.basead.mraid.MraidWebView r0 = r1.f     // Catch: java.lang.Throwable -> L17
            if (r0 == 0) goto L17
            if (r2 == 0) goto L11
            com.tkay.basead.mraid.MraidWebView r2 = r1.f     // Catch: java.lang.Throwable -> L17
            r0 = 1
            com.tkay.expressad.mbbanner.a.a.a.a(r2, r0)     // Catch: java.lang.Throwable -> L17
            return
        L11:
            com.tkay.basead.mraid.MraidWebView r2 = r1.f     // Catch: java.lang.Throwable -> L17
            r0 = 0
            com.tkay.expressad.mbbanner.a.a.a.a(r2, r0)     // Catch: java.lang.Throwable -> L17
        L17:
            return
    }

    public void init() {
            r1 = this;
            com.tkay.core.common.f.j r0 = r1.b
            boolean r0 = r0.V()
            if (r0 == 0) goto Lc
            r1.b()
            return
        Lc:
            com.tkay.basead.ui.b r0 = new com.tkay.basead.ui.b
            r0.<init>(r1)
            r1.d = r0
            r0.a()
            return
    }

    public void loadMraidWebView() {
            r4 = this;
            boolean r0 = r4.k
            if (r0 == 0) goto L5
            return
        L5:
            boolean r0 = r4.l
            if (r0 == 0) goto La
            return
        La:
            r0 = 1
            r4.k = r0
            com.tkay.basead.ui.ClickToReLoadView r0 = r4.e
            if (r0 == 0) goto L14
            r4.removeView(r0)
        L14:
            com.tkay.basead.ui.b r0 = r4.d
            if (r0 == 0) goto L1b
            r0.b()
        L1b:
            com.tkay.core.common.f.i r0 = r4.c
            com.tkay.core.common.f.h r1 = r4.a
            java.lang.String r0 = com.tkay.basead.mraid.d.a(r0, r1)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L33
            r0 = 0
            r4.k = r0
            r4.c()
            r4.f()
            return
        L33:
            com.tkay.core.common.f.i r1 = r4.c
            com.tkay.core.common.f.h r2 = r4.a
            java.lang.String r1 = com.tkay.basead.a.b.c.a(r1, r2)
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            com.tkay.basead.ui.MraidContainerView$2 r3 = new com.tkay.basead.ui.MraidContainerView$2
            r3.<init>(r4, r1, r0)
            r2.a(r3)
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            r0 = 1
            r1.i = r0
            r1.g()
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            r0 = 0
            r1.i = r0
            return
    }

    public void release() {
            r3 = this;
            boolean r0 = r3.l     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L25
            com.tkay.basead.mraid.MraidWebView r0 = r3.f     // Catch: java.lang.Throwable -> L28
            if (r0 == 0) goto L25
            com.tkay.basead.mraid.MraidWebView r0 = r3.f     // Catch: java.lang.Throwable -> L28
            com.tkay.core.common.l.u.a(r0)     // Catch: java.lang.Throwable -> L28
            com.tkay.basead.mraid.MraidWebView r0 = r3.f     // Catch: java.lang.Throwable -> L28
            r0.release()     // Catch: java.lang.Throwable -> L28
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L28
            android.content.Context r0 = r0.f()     // Catch: java.lang.Throwable -> L28
            com.tkay.core.common.res.d r0 = com.tkay.core.common.res.d.a(r0)     // Catch: java.lang.Throwable -> L28
            com.tkay.core.common.f.i r1 = r3.c     // Catch: java.lang.Throwable -> L28
            com.tkay.core.common.f.h r2 = r3.a     // Catch: java.lang.Throwable -> L28
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L28
        L25:
            com.tkay.core.common.l.u.a(r3)     // Catch: java.lang.Throwable -> L28
        L28:
            return
    }

    public void setNeedRegisterVolumeChangeReceiver(boolean r1) {
            r0 = this;
            r0.j = r1
            return
    }

    @Override
    public void setVisibility(int r1) {
            r0 = this;
            super.setVisibility(r1)
            boolean r1 = r0.i
            if (r1 == 0) goto La
            r0.g()
        La:
            return
    }
}
