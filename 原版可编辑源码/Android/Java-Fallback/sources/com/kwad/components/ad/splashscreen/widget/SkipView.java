package com.kwad.components.ad.splashscreen.widget;

public class SkipView extends android.widget.LinearLayout implements com.kwad.components.ad.splashscreen.widget.a {
    private com.kwad.components.ad.splashscreen.widget.SkipView.a EW;
    private java.lang.Runnable Fh;
    private final com.kwad.components.ad.splashscreen.widget.SkipView.b Gp;
    private android.view.View Gq;
    private android.widget.TextView Gr;
    private android.widget.TextView Gs;
    private int Gt;
    private boolean nL;
    private boolean sy;



    public interface a {
        void Z(int r1);

        void kU();

        void kV();
    }

    static class b {
        private int Fd;
        private java.lang.String Gv;
        private java.lang.String Gw;
        private int Gx;
        private boolean Gy;
        private boolean Gz;

        private b() {
                r1 = this;
                r1.<init>()
                java.lang.String r0 = "跳过"
                r1.Gv = r0
                java.lang.String r0 = ""
                r1.Gw = r0
                r0 = 5
                r1.Gx = r0
                r1.Fd = r0
                r0 = 1
                r1.Gy = r0
                r1.Gz = r0
                return
        }

        b(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        static java.lang.String a(com.kwad.components.ad.splashscreen.widget.SkipView.b r0, java.lang.String r1) {
                r0.Gw = r1
                return r1
        }

        static boolean a(com.kwad.components.ad.splashscreen.widget.SkipView.b r0, boolean r1) {
                r0.Gy = r1
                return r1
        }

        static int b(com.kwad.components.ad.splashscreen.widget.SkipView.b r0) {
                int r0 = r0.Gx
                return r0
        }

        static java.lang.String b(com.kwad.components.ad.splashscreen.widget.SkipView.b r0, java.lang.String r1) {
                r0.Gv = r1
                return r1
        }

        static boolean b(com.kwad.components.ad.splashscreen.widget.SkipView.b r0, boolean r1) {
                r0.Gz = r1
                return r1
        }

        static int c(com.kwad.components.ad.splashscreen.widget.SkipView.b r0) {
                int r0 = r0.Fd
                return r0
        }

        static int d(com.kwad.components.ad.splashscreen.widget.SkipView.b r2) {
                int r0 = r2.Fd
                int r1 = r0 + (-1)
                r2.Fd = r1
                return r0
        }

        static java.lang.String e(com.kwad.components.ad.splashscreen.widget.SkipView.b r0) {
                java.lang.String r0 = r0.Gv
                return r0
        }

        static boolean f(com.kwad.components.ad.splashscreen.widget.SkipView.b r0) {
                boolean r0 = r0.Gy
                return r0
        }

        static boolean g(com.kwad.components.ad.splashscreen.widget.SkipView.b r0) {
                boolean r0 = r0.Gz
                return r0
        }

        static boolean h(com.kwad.components.ad.splashscreen.widget.SkipView.b r0) {
                boolean r0 = r0.lM()
                return r0
        }

        private boolean lM() {
                r1 = this;
                boolean r0 = r1.Gy
                if (r0 == 0) goto La
                boolean r0 = r1.Gz
                if (r0 == 0) goto La
                r0 = 1
                return r0
            La:
                r0 = 0
                return r0
        }

        public final void ad(java.lang.String r2) {
                r1 = this;
                r0 = -1
                r1.Fd = r0
                r1.Gw = r2
                return
        }

        public final void af(int r1) {
                r0 = this;
                r0.Gx = r1
                r0.Fd = r1
                return
        }

        public final java.lang.String lK() {
                r2 = this;
                int r0 = r2.Fd
                if (r0 >= 0) goto L7
                java.lang.String r0 = r2.Gw
                return r0
            L7:
                if (r0 != 0) goto L1c
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = r2.Gw
                r0.append(r1)
                r1 = 1
            L14:
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                return r0
            L1c:
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = r2.Gw
                r0.append(r1)
                int r1 = r2.Fd
                goto L14
        }

        public final boolean lL() {
                r1 = this;
                int r0 = r1.Fd
                if (r0 > 0) goto L6
                r0 = 1
                return r0
            L6:
                r0 = 0
                return r0
        }
    }

    public SkipView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public SkipView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public SkipView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            android.content.Context r1 = com.kwad.sdk.m.l.wrapContextIfNeed(r1)
            r0.<init>(r1, r2, r3)
            com.kwad.components.ad.splashscreen.widget.SkipView$b r1 = new com.kwad.components.ad.splashscreen.widget.SkipView$b
            r2 = 0
            r1.<init>(r2)
            r0.Gp = r1
            r1 = -1
            r0.Gt = r1
            r0.nL = r2
            r1 = 1
            r0.sy = r1
            com.kwad.components.ad.splashscreen.widget.SkipView$1 r1 = new com.kwad.components.ad.splashscreen.widget.SkipView$1
            r1.<init>(r0)
            r0.Fh = r1
            r0.init()
            return
    }

    private void Y(int r2) {
            r1 = this;
            com.kwad.components.ad.splashscreen.widget.SkipView$a r0 = r1.EW
            if (r0 == 0) goto L7
            r0.Z(r2)
        L7:
            return
    }

    private void a(com.kwad.components.ad.splashscreen.widget.SkipView.b r5) {
            r4 = this;
            if (r5 != 0) goto L3
            return
        L3:
            android.widget.TextView r0 = r4.Gr
            r1 = 0
            r2 = 8
            if (r0 == 0) goto L29
            java.lang.String r0 = com.kwad.components.ad.splashscreen.widget.SkipView.b.e(r5)
            if (r0 == 0) goto L19
            android.widget.TextView r0 = r4.Gr
            java.lang.String r3 = com.kwad.components.ad.splashscreen.widget.SkipView.b.e(r5)
            r0.setText(r3)
        L19:
            com.kwad.components.ad.splashscreen.widget.SkipView$b r0 = r4.Gp
            boolean r0 = com.kwad.components.ad.splashscreen.widget.SkipView.b.f(r0)
            if (r0 == 0) goto L23
            r0 = r1
            goto L24
        L23:
            r0 = r2
        L24:
            android.widget.TextView r3 = r4.Gr
            r3.setVisibility(r0)
        L29:
            java.lang.String r5 = r5.lK()
            android.widget.TextView r0 = r4.Gs
            if (r0 == 0) goto L46
            if (r5 == 0) goto L36
            r0.setText(r5)
        L36:
            com.kwad.components.ad.splashscreen.widget.SkipView$b r5 = r4.Gp
            boolean r5 = com.kwad.components.ad.splashscreen.widget.SkipView.b.g(r5)
            if (r5 == 0) goto L40
            r5 = r1
            goto L41
        L40:
            r5 = r2
        L41:
            android.widget.TextView r0 = r4.Gs
            r0.setVisibility(r5)
        L46:
            android.view.View r5 = r4.Gq
            if (r5 == 0) goto L71
            com.kwad.components.ad.splashscreen.widget.SkipView$b r5 = r4.Gp
            boolean r5 = com.kwad.components.ad.splashscreen.widget.SkipView.b.h(r5)
            if (r5 == 0) goto L53
            goto L54
        L53:
            r1 = r2
        L54:
            android.view.View r0 = r4.Gq
            r0.setVisibility(r1)
            android.view.ViewGroup$LayoutParams r0 = r4.getLayoutParams()
            if (r0 == 0) goto L71
            if (r5 != 0) goto L68
            r5 = -2
            r0.width = r5
            r4.invalidate()
            return
        L68:
            int r5 = r4.Gt
            if (r5 <= 0) goto L71
            r0.width = r5
            r4.invalidate()
        L71:
            return
    }

    static void a(com.kwad.components.ad.splashscreen.widget.SkipView r0, int r1) {
            r0.Y(r1)
            return
    }

    static void a(com.kwad.components.ad.splashscreen.widget.SkipView r0, com.kwad.components.ad.splashscreen.widget.SkipView.b r1) {
            r0.a(r1)
            return
    }

    static boolean a(com.kwad.components.ad.splashscreen.widget.SkipView r0) {
            boolean r0 = r0.nL
            return r0
    }

    static com.kwad.components.ad.splashscreen.widget.SkipView.b b(com.kwad.components.ad.splashscreen.widget.SkipView r0) {
            com.kwad.components.ad.splashscreen.widget.SkipView$b r0 = r0.Gp
            return r0
    }

    static com.kwad.components.ad.splashscreen.widget.SkipView.a c(com.kwad.components.ad.splashscreen.widget.SkipView r0) {
            com.kwad.components.ad.splashscreen.widget.SkipView$a r0 = r0.EW
            return r0
    }

    private void eX() {
            r1 = this;
            com.kwad.components.ad.splashscreen.widget.SkipView$b r0 = r1.Gp
            r1.a(r0)
            java.lang.Runnable r0 = r1.Fh
            r1.post(r0)
            return
    }

    private void eY() {
            r1 = this;
            r0 = 1
            r1.nL = r0
            return
    }

    private void eZ() {
            r1 = this;
            r0 = 0
            r1.nL = r0
            return
    }

    private void init() {
            r2 = this;
            r0 = 0
            r2.setOrientation(r0)
            android.content.Context r0 = r2.getContext()
            int r1 = com.kwad.sdk.R.layout.ksad_skip_view
            com.kwad.sdk.m.l.inflate(r0, r1, r2)
            int r0 = com.kwad.sdk.R.id.ksad_skip_view_skip
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.Gr = r0
            int r0 = com.kwad.sdk.R.id.ksad_skip_view_timer
            android.view.View r0 = r2.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r2.Gs = r0
            int r0 = com.kwad.sdk.R.id.ksad_skip_view_divider
            android.view.View r0 = r2.findViewById(r0)
            r2.Gq = r0
            com.kwad.components.ad.splashscreen.widget.SkipView$2 r0 = new com.kwad.components.ad.splashscreen.widget.SkipView$2
            r0.<init>(r2)
            r2.setOnClickListener(r0)
            r0 = 1
            r2.setSkipBtnVisible(r0)
            r2.setTimerBtnVisible(r0)
            return
    }

    private void lJ() {
            r3 = this;
            int r0 = r3.getVisibility()
            if (r0 != 0) goto L7
            return
        L7:
            r0 = 0
            r3.setVisibility(r0)
            r0 = 0
            r3.setAlpha(r0)
            android.view.ViewPropertyAnimator r0 = r3.animate()
            r1 = 1065353216(0x3f800000, float:1.0)
            android.view.ViewPropertyAnimator r0 = r0.alpha(r1)
            r1 = 500(0x1f4, double:2.47E-321)
            android.view.ViewPropertyAnimator r0 = r0.setDuration(r1)
            r0.start()
            return
    }

    private void y(com.kwad.sdk.core.response.model.AdInfo r1) {
            r0 = this;
            boolean r1 = com.kwad.sdk.core.response.b.a.cj(r1)
            r0.setTimerBtnVisible(r1)
            return
    }

    @Override
    public final void a(com.kwad.components.ad.splashscreen.local.SplashSkipViewModel r2, com.kwad.sdk.core.response.model.AdInfo r3) {
            r1 = this;
            boolean r0 = com.kwad.sdk.core.response.b.a.ci(r3)
            r1.sy = r0
            com.kwad.sdk.core.config.item.p r0 = com.kwad.components.ad.splashscreen.b.a.Cw
            java.lang.String r0 = com.kwad.sdk.core.config.d.a(r0)
            r1.setTimerPrefixText(r0)
            int r2 = r2.skipSecond
            r1.setTimerSecond(r2)
            boolean r2 = com.kwad.sdk.core.response.b.a.aU(r3)
            if (r2 != 0) goto L1d
            r1.eX()
        L1d:
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.bS(r3)
            r1.setSkipText(r2)
            r2 = 8
            r1.setVisibility(r2)
            r1.y(r3)
            return
    }

    @Override
    public final int ac(int r3) {
            r2 = this;
            android.view.ViewGroup$LayoutParams r3 = r2.getLayoutParams()
            android.content.Context r0 = r2.getContext()
            r1 = 1108082688(0x420c0000, float:35.0)
            int r0 = com.kwad.sdk.d.a.a.a(r0, r1)
            r3.height = r0
            int r0 = r2.getWidth()
            r2.setLayoutParams(r3)
            return r0
    }

    public final void ad(java.lang.String r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return
        L3:
            com.kwad.components.ad.splashscreen.widget.SkipView$b r0 = r1.Gp
            r0.ad(r2)
            com.kwad.components.ad.splashscreen.widget.SkipView$b r2 = r1.Gp
            r1.a(r2)
            return
    }

    @Override
    public final void bd() {
            r2 = this;
            android.os.Handler r0 = r2.getHandler()
            if (r0 == 0) goto Le
            android.os.Handler r0 = r2.getHandler()
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
        Le:
            return
    }

    @Override
    public void setLayoutParams(android.view.ViewGroup.LayoutParams r1) {
            r0 = this;
            super.setLayoutParams(r1)
            int r1 = r1.width
            r0.Gt = r1
            return
    }

    @Override
    public void setOnViewListener(com.kwad.components.ad.splashscreen.widget.SkipView.a r1) {
            r0 = this;
            r0.EW = r1
            return
    }

    public void setSkipBtnVisible(boolean r2) {
            r1 = this;
            com.kwad.components.ad.splashscreen.widget.SkipView$b r0 = r1.Gp
            com.kwad.components.ad.splashscreen.widget.SkipView.b.a(r0, r2)
            com.kwad.components.ad.splashscreen.widget.SkipView$b r2 = r1.Gp
            r1.a(r2)
            return
    }

    public void setSkipText(java.lang.String r2) {
            r1 = this;
            com.kwad.components.ad.splashscreen.widget.SkipView$b r0 = r1.Gp
            com.kwad.components.ad.splashscreen.widget.SkipView.b.b(r0, r2)
            com.kwad.components.ad.splashscreen.widget.SkipView$b r2 = r1.Gp
            r1.a(r2)
            return
    }

    public void setTimerBtnVisible(boolean r2) {
            r1 = this;
            com.kwad.components.ad.splashscreen.widget.SkipView$b r0 = r1.Gp
            com.kwad.components.ad.splashscreen.widget.SkipView.b.b(r0, r2)
            com.kwad.components.ad.splashscreen.widget.SkipView$b r2 = r1.Gp
            r1.a(r2)
            return
    }

    public void setTimerPrefixText(java.lang.String r2) {
            r1 = this;
            com.kwad.components.ad.splashscreen.widget.SkipView$b r0 = r1.Gp
            com.kwad.components.ad.splashscreen.widget.SkipView.b.a(r0, r2)
            com.kwad.components.ad.splashscreen.widget.SkipView$b r2 = r1.Gp
            r1.a(r2)
            return
    }

    public void setTimerSecond(int r2) {
            r1 = this;
            com.kwad.components.ad.splashscreen.widget.SkipView$b r0 = r1.Gp
            r0.af(r2)
            com.kwad.components.ad.splashscreen.widget.SkipView$b r2 = r1.Gp
            r1.a(r2)
            return
    }

    @Override
    public final void w(com.kwad.sdk.core.response.model.AdInfo r1) {
            r0 = this;
            boolean r1 = com.kwad.sdk.core.response.b.a.aU(r1)
            if (r1 != 0) goto L9
            r0.eY()
        L9:
            return
    }

    @Override
    public final void x(com.kwad.sdk.core.response.model.AdInfo r2) {
            r1 = this;
            boolean r0 = r1.sy
            if (r0 == 0) goto L7
            r1.lJ()
        L7:
            boolean r2 = com.kwad.sdk.core.response.b.a.aU(r2)
            if (r2 != 0) goto L10
            r1.eZ()
        L10:
            return
    }
}
