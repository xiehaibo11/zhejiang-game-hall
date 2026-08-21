package com.tkay.basead.ui;

public class MraidSplashATView extends com.tkay.basead.ui.BaseSplashATView {
    com.tkay.basead.ui.MraidContainerView a;

    final class 1 implements com.tkay.basead.ui.MraidContainerView.a {
        final com.tkay.basead.ui.MraidSplashATView a;

        1(com.tkay.basead.ui.MraidSplashATView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void a() {
                r1 = this;
                com.tkay.basead.ui.MraidSplashATView r0 = r1.a     // Catch: java.lang.Throwable -> L5
                com.tkay.basead.ui.MraidSplashATView.a(r0)     // Catch: java.lang.Throwable -> L5
            L5:
                return
        }

        @Override
        public final void a(java.lang.String r2) {
                r1 = this;
                com.tkay.basead.ui.MraidSplashATView r0 = r1.a
                com.tkay.core.common.f.h r0 = r0.d
                r0.v(r2)
                com.tkay.basead.ui.MraidSplashATView r2 = r1.a
                r0 = 1
                r2.b(r0)
                return
        }

        @Override
        public final void b() {
                r1 = this;
                com.tkay.basead.ui.MraidSplashATView r0 = r1.a
                r0.q()
                com.tkay.basead.ui.MraidSplashATView r0 = r1.a
                r0.r()
                com.tkay.basead.ui.MraidSplashATView r0 = r1.a
                r0.p()
                return
        }
    }

    final class 2 implements java.lang.Runnable {
        final com.tkay.basead.ui.MraidSplashATView a;

        2(com.tkay.basead.ui.MraidSplashATView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r1 = this;
                com.tkay.basead.ui.MraidSplashATView r0 = r1.a
                com.tkay.basead.e.a r0 = r0.F
                if (r0 != 0) goto L7
                return
            L7:
                com.tkay.basead.ui.MraidSplashATView r0 = r1.a
                com.tkay.basead.ui.MraidSplashATView.b(r0)
                return
        }
    }

    public MraidSplashATView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public MraidSplashATView(android.content.Context r1, com.tkay.core.common.f.i r2, com.tkay.core.common.f.h r3, com.tkay.basead.e.a r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    static void a(com.tkay.basead.ui.MraidSplashATView r2) {
            com.tkay.core.common.f.h r0 = r2.d
            boolean r0 = r0.g()
            if (r0 == 0) goto Lc
            com.tkay.basead.ui.MraidContainerView r0 = r2.a
            if (r0 == 0) goto L29
        Lc:
            com.tkay.core.common.f.i r0 = r2.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.R()
            if (r0 >= 0) goto L19
            r0 = 100
            goto L21
        L19:
            com.tkay.core.common.f.i r0 = r2.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.R()
        L21:
            com.tkay.basead.ui.MraidSplashATView$2 r1 = new com.tkay.basead.ui.MraidSplashATView$2
            r1.<init>(r2)
            super.a(r0, r1)
        L29:
            return
    }

    private static void a(com.tkay.basead.ui.MraidSplashATView r0, int r1, java.lang.Runnable r2) {
            super.a(r1, r2)
            return
    }

    private void b() {
            r5 = this;
            com.tkay.basead.ui.MraidContainerView r0 = new com.tkay.basead.ui.MraidContainerView
            android.content.Context r1 = r5.getContext()
            com.tkay.core.common.f.h r2 = r5.d
            com.tkay.core.common.f.i r3 = r5.c
            com.tkay.basead.ui.MraidSplashATView$1 r4 = new com.tkay.basead.ui.MraidSplashATView$1
            r4.<init>(r5)
            r0.<init>(r1, r2, r3, r4)
            r5.a = r0
            r1 = 1
            r0.setNeedRegisterVolumeChangeReceiver(r1)
            com.tkay.basead.ui.MraidContainerView r0 = r5.a
            r0.init()
            android.content.Context r0 = r5.getContext()
            java.lang.String r1 = "myoffer_splash_web"
            java.lang.String r2 = "id"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r2)
            android.view.View r0 = r5.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            if (r0 == 0) goto L3c
            com.tkay.basead.ui.MraidContainerView r1 = r5.a
            android.widget.FrameLayout$LayoutParams r2 = new android.widget.FrameLayout$LayoutParams
            r3 = -1
            r2.<init>(r3, r3)
            r0.addView(r1, r2)
        L3c:
            return
    }

    static void b(com.tkay.basead.ui.MraidSplashATView r0) {
            super.h()
            return
    }

    private void c() {
            r2 = this;
            com.tkay.core.common.f.h r0 = r2.d
            boolean r0 = r0.g()
            if (r0 == 0) goto Ld
            com.tkay.basead.ui.MraidContainerView r0 = r2.a
            if (r0 != 0) goto Ld
            return
        Ld:
            com.tkay.core.common.f.i r0 = r2.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.R()
            if (r0 >= 0) goto L1a
            r0 = 100
            goto L22
        L1a:
            com.tkay.core.common.f.i r0 = r2.c
            com.tkay.core.common.f.j r0 = r0.m
            int r0 = r0.R()
        L22:
            com.tkay.basead.ui.MraidSplashATView$2 r1 = new com.tkay.basead.ui.MraidSplashATView$2
            r1.<init>(r2)
            super.a(r0, r1)
            return
    }

    @Override
    protected final void a() {
            r5 = this;
            android.content.Context r0 = r5.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.content.Context r1 = r5.getContext()
            java.lang.String r2 = "myoffer_web_splash_ad_layout"
            java.lang.String r3 = "layout"
            int r1 = com.tkay.core.common.l.h.a(r1, r2, r3)
            r0.inflate(r1, r5)
            com.tkay.basead.ui.MraidContainerView r0 = new com.tkay.basead.ui.MraidContainerView
            android.content.Context r1 = r5.getContext()
            com.tkay.core.common.f.h r2 = r5.d
            com.tkay.core.common.f.i r3 = r5.c
            com.tkay.basead.ui.MraidSplashATView$1 r4 = new com.tkay.basead.ui.MraidSplashATView$1
            r4.<init>(r5)
            r0.<init>(r1, r2, r3, r4)
            r5.a = r0
            r1 = 1
            r0.setNeedRegisterVolumeChangeReceiver(r1)
            com.tkay.basead.ui.MraidContainerView r0 = r5.a
            r0.init()
            android.content.Context r0 = r5.getContext()
            java.lang.String r1 = "myoffer_splash_web"
            java.lang.String r2 = "id"
            int r0 = com.tkay.core.common.l.h.a(r0, r1, r2)
            android.view.View r0 = r5.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            if (r0 == 0) goto L53
            com.tkay.basead.ui.MraidContainerView r1 = r5.a
            android.widget.FrameLayout$LayoutParams r2 = new android.widget.FrameLayout$LayoutParams
            r3 = -1
            r2.<init>(r3, r3)
            r0.addView(r1, r2)
        L53:
            return
    }

    @Override
    public void destroy() {
            r1 = this;
            super.destroy()
            com.tkay.basead.ui.MraidContainerView r0 = r1.a
            if (r0 == 0) goto La
            r0.release()
        La:
            return
    }

    @Override
    public void onWindowFocusChanged(boolean r2) {
            r1 = this;
            super.onWindowFocusChanged(r2)
            com.tkay.basead.ui.MraidContainerView r0 = r1.a
            if (r0 == 0) goto La
            r0.fireMraidIsViewable(r2)
        La:
            return
    }

    @Override
    protected final void p() {
            r4 = this;
            java.util.List<android.view.View> r0 = r4.r
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L1b
            java.util.List<android.view.View> r2 = r4.r
            java.lang.Object r2 = r2.get(r1)
            android.view.View r2 = (android.view.View) r2
            if (r2 == 0) goto L18
            android.view.View$OnClickListener r3 = r4.K
            r2.setOnClickListener(r3)
        L18:
            int r1 = r1 + 1
            goto L7
        L1b:
            return
    }
}
