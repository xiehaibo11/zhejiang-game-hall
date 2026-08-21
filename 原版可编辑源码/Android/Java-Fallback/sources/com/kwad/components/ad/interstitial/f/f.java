package com.kwad.components.ad.interstitial.f;

public final class f extends com.kwad.sdk.widget.KSFrameLayout implements com.kwad.sdk.widget.c {
    private android.widget.ImageView du;
    private android.widget.TextView eo;
    private android.widget.ImageView ew;
    private com.kwad.sdk.widget.KSFrameLayout jR;
    private com.kwad.sdk.widget.KSFrameLayout kK;
    private java.lang.String lN;
    private android.view.View lO;
    private android.widget.ImageView lP;
    private com.kwad.components.core.page.widget.TextProgressBar lQ;
    private android.view.ViewGroup lR;
    private android.view.ViewGroup lS;
    private android.widget.ImageView lT;
    private android.view.View lU;
    private android.view.View lV;
    private android.widget.TextView lW;
    private android.widget.ImageView lX;
    private android.widget.TextView lY;
    private android.widget.TextView lZ;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.components.core.widget.KsLogoView mLogoView;
    private android.widget.TextView ma;
    private com.kwad.components.core.page.widget.TextProgressBar mb;
    private android.widget.TextView mc;
    private com.kwad.components.ad.interstitial.f.g md;
    private final com.kwad.components.ad.interstitial.f.f.a me;
    private boolean mf;


    public static class a {
        private boolean mh;
        private boolean mi;
        private int mj;
        private boolean mk;

        public a() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.mh = r0
                r1.mi = r0
                r1.mj = r0
                r0 = 1
                r1.mk = r0
                return
        }

        static boolean a(com.kwad.components.ad.interstitial.f.f.a r0) {
                boolean r0 = r0.mh
                return r0
        }

        static boolean b(com.kwad.components.ad.interstitial.f.f.a r0) {
                boolean r0 = r0.mi
                return r0
        }

        public final void E(int r1) {
                r0 = this;
                r0.mj = r1
                return
        }

        public final int eB() {
                r1 = this;
                int r0 = r1.mj
                return r0
        }

        public final boolean eC() {
                r1 = this;
                boolean r0 = r1.mk
                return r0
        }

        public final void v(boolean r1) {
                r0 = this;
                r0.mh = r1
                return
        }

        public final void w(boolean r1) {
                r0 = this;
                r0.mi = r1
                return
        }

        public final void x(boolean r1) {
                r0 = this;
                r0.mk = r1
                return
        }
    }

    public f(android.content.Context r2, com.kwad.components.ad.interstitial.f.f.a r3) {
            r1 = this;
            r1.<init>(r2)
            java.lang.String r0 = "%s秒后进入试玩页"
            r1.lN = r0
            r0 = 0
            r1.mf = r0
            r1.me = r3
            boolean r3 = r3.eC()
            if (r3 == 0) goto L15
            int r3 = com.kwad.sdk.R.layout.ksad_interstitial_native_above
            goto L17
        L15:
            int r3 = com.kwad.sdk.R.layout.ksad_interstitial_native
        L17:
            com.kwad.sdk.m.l.inflate(r2, r3, r1)
            com.kwad.components.ad.interstitial.f.f$a r2 = r1.me
            boolean r2 = com.kwad.components.ad.interstitial.f.f.a.a(r2)
            r1.s(r2)
            return
    }

    static android.widget.ImageView a(com.kwad.components.ad.interstitial.f.f r0) {
            android.widget.ImageView r0 = r0.lT
            return r0
    }

    private void a(android.view.View r3, int r4, int r5) {
            r2 = this;
            android.view.ViewGroup$LayoutParams r0 = r3.getLayoutParams()
            android.content.Context r1 = r2.getContext()
            float r4 = (float) r4
            int r4 = com.kwad.sdk.d.a.a.a(r1, r4)
            r0.width = r4
            android.content.Context r4 = r2.getContext()
            float r5 = (float) r5
            int r4 = com.kwad.sdk.d.a.a.a(r4, r5)
            r0.height = r4
            r3.setLayoutParams(r0)
            return
    }

    private void a(com.kwad.sdk.widget.KSFrameLayout r3, boolean r4) {
            r2 = this;
            r0 = 1
            r3.setClickable(r0)
            com.kwad.sdk.widget.f r1 = new com.kwad.sdk.widget.f
            r1.<init>(r3, r2)
            com.kwad.sdk.widget.KSFrameLayout r3 = r2.jR
            r4 = r4 ^ r0
            r3.setWidthBasedRatio(r4)
            return
    }

    static com.kwad.components.ad.interstitial.f.g b(com.kwad.components.ad.interstitial.f.f r0) {
            com.kwad.components.ad.interstitial.f.g r0 = r0.md
            return r0
    }

    private void b(android.view.View r2, boolean r3) {
            r1 = this;
            com.kwad.components.ad.interstitial.f.g r0 = r1.md
            if (r0 == 0) goto Le
            r0.p(r3)
            com.kwad.components.ad.interstitial.f.g r3 = r1.md
            com.kwad.sdk.widget.KSFrameLayout r0 = r1.kK
            r3.a(r0)
        Le:
            boolean r3 = r2.equals(r1)
            if (r3 == 0) goto L1c
            com.kwad.components.ad.interstitial.f.g r2 = r1.md
            if (r2 == 0) goto Lf8
            r2.dK()
            return
        L1c:
            android.view.View r3 = r1.lU
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto L39
            com.kwad.components.ad.interstitial.f.f$a r2 = r1.me
            int r2 = r2.eB()
            r3 = 1
            if (r3 != r2) goto L2e
            goto L2f
        L2e:
            r3 = 0
        L2f:
            if (r3 == 0) goto L38
            com.kwad.components.ad.interstitial.f.g r2 = r1.md
            if (r2 == 0) goto L38
            r2.dJ()
        L38:
            return
        L39:
            com.kwad.components.core.page.widget.TextProgressBar r3 = r1.mb
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto L49
            com.kwad.components.ad.interstitial.f.g r2 = r1.md
            if (r2 == 0) goto Lf8
            r2.dL()
            return
        L49:
            android.view.ViewGroup r3 = r1.lS
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto L59
            com.kwad.components.ad.interstitial.f.g r2 = r1.md
            if (r2 == 0) goto Lf8
            r2.dW()
            return
        L59:
            com.kwad.components.core.page.widget.TextProgressBar r3 = r1.lQ
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto L69
            com.kwad.components.ad.interstitial.f.g r2 = r1.md
            if (r2 == 0) goto Lf8
            r2.dM()
            return
        L69:
            android.view.View r3 = r1.lV
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto L79
            com.kwad.components.ad.interstitial.f.g r2 = r1.md
            if (r2 == 0) goto Lf8
            r2.dP()
            return
        L79:
            com.kwad.sdk.widget.KSFrameLayout r3 = r1.jR
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto L89
            com.kwad.components.ad.interstitial.f.g r2 = r1.md
            if (r2 == 0) goto Lf8
            r2.dN()
            return
        L89:
            android.widget.ImageView r3 = r1.ew
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto L99
            com.kwad.components.ad.interstitial.f.g r2 = r1.md
            if (r2 == 0) goto Lf8
            r2.dO()
            return
        L99:
            android.widget.ImageView r3 = r1.du
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto La9
            com.kwad.components.ad.interstitial.f.g r2 = r1.md
            if (r2 == 0) goto Lf8
            r2.dQ()
            return
        La9:
            android.widget.TextView r3 = r1.lY
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto Lb9
            com.kwad.components.ad.interstitial.f.g r2 = r1.md
            if (r2 == 0) goto Lf8
            r2.dR()
            return
        Lb9:
            android.widget.TextView r3 = r1.eo
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto Lc9
            com.kwad.components.ad.interstitial.f.g r2 = r1.md
            if (r2 == 0) goto Lf8
            r2.dS()
            return
        Lc9:
            android.widget.ImageView r3 = r1.lX
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto Ld9
            com.kwad.components.ad.interstitial.f.g r2 = r1.md
            if (r2 == 0) goto Lf8
            r2.dT()
            return
        Ld9:
            android.widget.TextView r3 = r1.lZ
            boolean r3 = r2.equals(r3)
            if (r3 == 0) goto Le9
            com.kwad.components.ad.interstitial.f.g r2 = r1.md
            if (r2 == 0) goto Lf8
            r2.dU()
            return
        Le9:
            android.widget.TextView r3 = r1.ma
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto Lf8
            com.kwad.components.ad.interstitial.f.g r2 = r1.md
            if (r2 == 0) goto Lf8
            r2.dV()
        Lf8:
            return
    }

    private void d(android.view.View r2, int r3) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            float r3 = (float) r3
            int r3 = com.kwad.sdk.d.a.a.a(r0, r3)
            r0 = 0
            com.kwad.sdk.d.a.a.b(r2, r0, r3, r0, r0)
            return
    }

    private void ev() {
            r3 = this;
            android.widget.ImageView r0 = r3.lX
            r1 = 40
            r3.a(r0, r1, r1)
            com.kwad.components.core.page.widget.TextProgressBar r0 = r3.mb
            r1 = 130(0x82, float:1.82E-43)
            r2 = 30
            r3.a(r0, r1, r2)
            android.widget.TextView r0 = r3.lZ
            r1 = 1096810496(0x41600000, float:14.0)
            r0.setTextSize(r1)
            com.kwad.components.core.page.widget.TextProgressBar r0 = r3.mb
            r1 = 11
            r3.d(r0, r1)
            android.widget.TextView r0 = r3.lZ
            r1 = 7
            r3.d(r0, r1)
            android.widget.TextView r0 = r3.ma
            r3.d(r0, r1)
            return
    }

    private void s(boolean r4) {
            r3 = this;
            r0 = 1
            r3.setClickable(r0)
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_native_container
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.sdk.widget.KSFrameLayout r0 = (com.kwad.sdk.widget.KSFrameLayout) r0
            r3.kK = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_native_video_container
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.sdk.widget.KSFrameLayout r0 = (com.kwad.sdk.widget.KSFrameLayout) r0
            r3.jR = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_full_bg
            android.view.View r0 = r3.findViewById(r0)
            r3.lO = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_tail_frame
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.lP = r0
            int r0 = com.kwad.sdk.R.id.ksad_video_first_frame_container
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.ew = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_interstitial_logo
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.components.core.widget.KsLogoView r0 = (com.kwad.components.core.widget.KsLogoView) r0
            r3.mLogoView = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_playing
            android.view.View r0 = r3.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r3.lR = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_play_end
            android.view.View r0 = r3.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r3.lS = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_download_btn
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.components.core.page.widget.TextProgressBar r0 = (com.kwad.components.core.page.widget.TextProgressBar) r0
            r3.lQ = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_close_outer
            android.view.View r0 = r3.findViewById(r0)
            r3.lU = r0
            com.kwad.components.core.page.widget.TextProgressBar r0 = r3.lQ
            if (r0 == 0) goto L7c
            android.content.Context r1 = r3.getContext()
            r2 = 1092616192(0x41200000, float:10.0)
            int r1 = com.kwad.sdk.d.a.a.a(r1, r2)
            float r1 = (float) r1
            r0.setTextDimen(r1)
            com.kwad.components.core.page.widget.TextProgressBar r0 = r3.lQ
            r1 = -1
            r0.setTextColor(r1)
        L7c:
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_mute
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.lT = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_count_down
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.lW = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_logo
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.lX = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_name
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.lZ = r0
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_desc
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.ma = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_download_btn
            android.view.View r0 = r3.findViewById(r0)
            com.kwad.components.core.page.widget.TextProgressBar r0 = (com.kwad.components.core.page.widget.TextProgressBar) r0
            r3.mb = r0
            int r0 = com.kwad.sdk.R.id.ksad_ad_download_container
            android.view.View r0 = r3.findViewById(r0)
            r3.lV = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_icon
            android.view.View r0 = r3.findViewById(r0)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.du = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_title
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.lY = r0
            int r0 = com.kwad.sdk.R.id.ksad_app_desc
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.eo = r0
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            r0.<init>(r3, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.widget.ImageView r1 = r3.ew
            r0.<init>(r1, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            com.kwad.components.core.page.widget.TextProgressBar r1 = r3.lQ
            r0.<init>(r1, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            com.kwad.components.core.page.widget.TextProgressBar r1 = r3.mb
            r0.<init>(r1, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.view.View r1 = r3.lU
            r0.<init>(r1, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.view.ViewGroup r1 = r3.lS
            r0.<init>(r1, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.widget.TextView r1 = r3.lW
            r0.<init>(r1, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.view.View r1 = r3.lV
            r0.<init>(r1, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.widget.ImageView r1 = r3.du
            r0.<init>(r1, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.widget.TextView r1 = r3.lY
            r0.<init>(r1, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.widget.TextView r1 = r3.eo
            r0.<init>(r1, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.widget.ImageView r1 = r3.lX
            r0.<init>(r1, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.widget.TextView r1 = r3.lZ
            r0.<init>(r1, r3)
            com.kwad.sdk.widget.f r0 = new com.kwad.sdk.widget.f
            android.widget.TextView r1 = r3.ma
            r0.<init>(r1, r3)
            android.widget.ImageView r0 = r3.lT
            com.kwad.components.ad.interstitial.f.f$1 r1 = new com.kwad.components.ad.interstitial.f.f$1
            r1.<init>(r3)
            r0.setOnClickListener(r1)
            int r0 = com.kwad.sdk.R.id.ksad_interstitial_playable_timer
            android.view.View r0 = r3.findViewById(r0)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.mc = r0
            com.kwad.sdk.widget.KSFrameLayout r0 = r3.jR
            r3.a(r0, r4)
            boolean r4 = com.kwad.sdk.utils.ai.IO()
            if (r4 != 0) goto L160
            r3.ev()
        L160:
            return
    }

    public final void a(float r2, com.kwad.sdk.core.video.videoview.a r3) {
            r1 = this;
            com.kwad.sdk.widget.KSFrameLayout r0 = r1.jR
            r0.setRatio(r2)
            com.kwad.sdk.widget.KSFrameLayout r2 = r1.jR
            r2.addView(r3)
            android.view.ViewGroup$LayoutParams r2 = r3.getLayoutParams()
            android.widget.FrameLayout$LayoutParams r2 = (android.widget.FrameLayout.LayoutParams) r2
            r0 = 0
            r2.topMargin = r0
            r0 = -1
            r2.width = r0
            r2.height = r0
            r0 = 17
            r2.gravity = r0
            r3.setLayoutParams(r2)
            return
    }

    @Override
    public final void a(android.view.View r2) {
            r1 = this;
            r0 = 1
            r1.b(r2, r0)
            return
    }

    public final void a(com.kwad.sdk.core.response.model.AdTemplate r5, com.kwad.sdk.core.response.model.AdInfo r6) {
            r4 = this;
            android.widget.ImageView r0 = r4.lX
            int r1 = com.kwad.sdk.R.drawable.ksad_default_app_icon
            r0.setImageResource(r1)
            int r0 = com.kwad.sdk.core.response.b.a.bM(r6)
            r1 = 0
            r2 = 2
            if (r0 != r2) goto L4f
            android.widget.ImageView r5 = r4.lX
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.ct(r6)
            android.content.Context r2 = r4.getContext()
            android.content.res.Resources r2 = r2.getResources()
            int r3 = com.kwad.sdk.R.drawable.ksad_default_app_icon
            android.graphics.drawable.Drawable r2 = r2.getDrawable(r3)
            com.kwad.sdk.core.imageloader.KSImageLoader.loadCircleIcon(r5, r0, r2)
            android.widget.TextView r5 = r4.lZ
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.bP(r6)
            r5.setText(r0)
            android.widget.TextView r5 = r4.ma
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.an(r6)
            r5.setText(r0)
            boolean r5 = com.kwad.sdk.core.response.b.a.cp(r6)
            if (r5 == 0) goto L48
            com.kwad.components.core.page.widget.TextProgressBar r5 = r4.mb
            java.lang.String r6 = com.kwad.components.ad.d.b.V()
        L44:
            r5.e(r6, r1)
            return
        L48:
            com.kwad.components.core.page.widget.TextProgressBar r5 = r4.mb
            java.lang.String r6 = com.kwad.components.ad.d.b.Y()
            goto L44
        L4f:
            boolean r0 = com.kwad.components.ad.interstitial.a.b.cH()
            r2 = 4
            if (r0 == 0) goto L7d
            int r0 = com.kwad.sdk.core.response.b.a.bM(r6)
            r3 = 3
            if (r0 != r3) goto L7d
            com.kwad.sdk.core.response.model.AdProductInfo r6 = com.kwad.sdk.core.response.b.a.cy(r6)
            android.widget.ImageView r0 = r4.lX
            java.lang.String r3 = r6.icon
            com.kwad.sdk.core.imageloader.KSImageLoader.loadWithRadius(r0, r3, r5, r2)
            android.widget.TextView r5 = r4.lZ
            java.lang.String r6 = r6.name
            r5.setText(r6)
            android.widget.TextView r5 = r4.ma
            r6 = 8
            r5.setVisibility(r6)
            com.kwad.components.core.page.widget.TextProgressBar r5 = r4.mb
            java.lang.String r6 = com.kwad.components.ad.d.b.W()
            goto L44
        L7d:
            boolean r0 = com.kwad.sdk.core.response.b.a.ax(r6)
            if (r0 == 0) goto La5
            android.widget.ImageView r0 = r4.lX
            java.lang.String r3 = com.kwad.sdk.core.response.b.a.bQ(r6)
            com.kwad.sdk.core.imageloader.KSImageLoader.loadWithRadius(r0, r3, r5, r2)
            android.widget.TextView r5 = r4.lZ
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.ao(r6)
        L92:
            r5.setText(r0)
            android.widget.TextView r5 = r4.ma
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.an(r6)
            r5.setText(r0)
            com.kwad.components.core.page.widget.TextProgressBar r5 = r4.mb
            java.lang.String r6 = com.kwad.sdk.core.response.b.a.aw(r6)
            goto L44
        La5:
            android.widget.ImageView r0 = r4.lX
            java.lang.String r3 = com.kwad.sdk.core.response.b.d.cl(r5)
            com.kwad.sdk.core.imageloader.KSImageLoader.loadWithRadius(r0, r3, r5, r2)
            android.widget.TextView r5 = r4.lZ
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.bO(r6)
            goto L92
    }

    public final void a(java.lang.String r3, com.kwad.sdk.core.response.model.AdTemplate r4) {
            r2 = this;
            boolean r0 = com.kwad.sdk.utils.bc.isNullString(r3)
            if (r0 != 0) goto L11
            android.widget.ImageView r0 = r2.ew
            r1 = 0
            r0.setImageDrawable(r1)
            android.widget.ImageView r0 = r2.ew
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r0, r3, r4)
        L11:
            return
    }

    @Override
    public final void b(android.view.View r2) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
            boolean r0 = com.kwad.sdk.core.response.b.c.bV(r0)
            if (r0 == 0) goto Lc
            r0 = 0
            r1.b(r2, r0)
        Lc:
            return
    }

    public final void b(boolean r4, int r5) {
            r3 = this;
            android.widget.TextView r4 = r3.mc
            if (r4 != 0) goto L5
            return
        L5:
            r0 = 0
            r4.setVisibility(r0)
            if (r5 < 0) goto L1f
            android.widget.TextView r4 = r3.mc
            java.lang.String r1 = r3.lN
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.lang.String r5 = java.lang.String.valueOf(r5)
            r2[r0] = r5
            java.lang.String r5 = java.lang.String.format(r1, r2)
            r4.setText(r5)
        L1f:
            return
    }

    public final void b(boolean r2, boolean r3) {
            r1 = this;
            android.widget.ImageView r0 = r1.ew
            if (r0 == 0) goto L14
            if (r2 == 0) goto L8
            r2 = 0
            goto La
        L8:
            r2 = 8
        La:
            android.widget.ImageView r0 = r1.ew
            r0.setVisibility(r2)
            android.widget.ImageView r2 = r1.ew
            r2.setClickable(r3)
        L14:
            return
    }

    public final boolean eA() {
            r2 = this;
            android.view.ViewGroup r0 = r2.lS
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            int r0 = r0.getVisibility()
            if (r0 != 0) goto Le
            r0 = 1
            return r0
        Le:
            return r1
    }

    public final void ew() {
            r2 = this;
            android.widget.TextView r0 = r2.lW
            if (r0 == 0) goto Lc
            r1 = 8
            r0.setVisibility(r1)
            r0 = 1
            r2.mf = r0
        Lc:
            return
    }

    public final void ex() {
            r2 = this;
            android.view.View r0 = r2.lU
            if (r0 == 0) goto L9
            r1 = 8
            r0.setVisibility(r1)
        L9:
            return
    }

    public final void ey() {
            r2 = this;
            r0 = 0
            r2.t(r0)
            android.view.ViewGroup r1 = r2.lS
            r1.setVisibility(r0)
            android.widget.ImageView r1 = r2.lP
            r1.setVisibility(r0)
            return
    }

    public final void ez() {
            r2 = this;
            android.view.ViewGroup r0 = r2.lS
            r1 = 8
            r0.setVisibility(r1)
            android.widget.ImageView r0 = r2.lP
            r0.setVisibility(r1)
            r0 = 1
            r2.t(r0)
            return
    }

    public final void f(int r2, int r3) {
            r1 = this;
            android.view.ViewGroup$LayoutParams r0 = r1.getLayoutParams()
            android.view.ViewGroup$MarginLayoutParams r0 = (android.view.ViewGroup.MarginLayoutParams) r0
            r0.width = r2
            r0.height = r3
            r1.setLayoutParams(r0)
            return
    }

    public final void g(java.lang.String r2, int r3) {
            r1 = this;
            com.kwad.components.core.page.widget.TextProgressBar r3 = r1.lQ
            r0 = 0
            if (r3 == 0) goto L8
            r3.e(r2, r0)
        L8:
            com.kwad.components.core.page.widget.TextProgressBar r3 = r1.mb
            if (r3 == 0) goto Lf
            r3.e(r2, r0)
        Lf:
            return
    }

    public final android.view.View getBlurBgView() {
            r1 = this;
            android.view.View r0 = r1.lO
            return r0
    }

    public final android.widget.ImageView getTailFrameView() {
            r1 = this;
            android.widget.ImageView r0 = r1.lP
            return r0
    }

    public final void l(com.kwad.sdk.core.response.model.AdTemplate r2) {
            r1 = this;
            com.kwad.components.core.widget.KsLogoView r0 = r1.mLogoView
            r0.aa(r2)
            return
    }

    public final void setAdTemplate(com.kwad.sdk.core.response.model.AdTemplate r1) {
            r0 = this;
            r0.mAdTemplate = r1
            return
    }

    public final void setViewListener(com.kwad.components.ad.interstitial.f.g r1) {
            r0 = this;
            r0.md = r1
            return
    }

    public final void t(boolean r2) {
            r1 = this;
            android.view.ViewGroup r0 = r1.lR
            if (r0 == 0) goto Lf
            if (r2 == 0) goto L8
            r2 = 0
            goto La
        L8:
            r2 = 8
        La:
            android.view.ViewGroup r0 = r1.lR
            r0.setVisibility(r2)
        Lf:
            return
    }

    public final void u(boolean r2) {
            r1 = this;
            android.widget.ImageView r0 = r1.lT
            if (r0 == 0) goto L7
            r0.setSelected(r2)
        L7:
            return
    }

    public final void y(java.lang.String r2) {
            r1 = this;
            android.widget.TextView r0 = r1.lW
            if (r0 != 0) goto L5
            return
        L5:
            if (r2 == 0) goto La
            r0.setText(r2)
        La:
            com.kwad.components.ad.interstitial.f.f$a r2 = r1.me
            boolean r2 = com.kwad.components.ad.interstitial.f.f.a.b(r2)
            if (r2 == 0) goto L24
            boolean r2 = r1.mf
            if (r2 != 0) goto L24
            android.widget.TextView r2 = r1.lW
            int r2 = r2.getVisibility()
            if (r2 == 0) goto L24
            android.widget.TextView r2 = r1.lW
            r0 = 0
            r2.setVisibility(r0)
        L24:
            return
    }
}
