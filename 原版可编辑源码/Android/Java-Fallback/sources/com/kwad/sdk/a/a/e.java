package com.kwad.sdk.a.a;

public final class e implements android.view.View.OnClickListener {
    private final boolean ahN;
    private final boolean ahO;
    private android.view.View ahP;
    private android.widget.ImageView ahQ;
    private android.widget.TextView ahR;
    private android.widget.Button ahS;
    private int ahT;
    private int ahU;
    private boolean ahV;
    private final com.kwad.sdk.core.response.model.AdInfo mAdInfo;
    private final com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private final android.content.Context mContext;
    private android.view.View mRootView;



    public e(android.content.Context r1, com.kwad.sdk.core.response.model.AdTemplate r2, boolean r3, boolean r4, boolean r5) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            r0.mAdTemplate = r2
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r2)
            r0.mAdInfo = r1
            r0.ahN = r3
            r0.ahO = r4
            android.view.View r1 = r0.yj()
            r0.mRootView = r1
            r0.ahV = r5
            r0.ll()
            return
    }

    private android.animation.Animator A(android.view.View r6) {
            r5 = this;
            boolean r0 = r5.ahN
            r1 = 1
            r2 = 0
            r3 = 2
            r4 = 0
            if (r0 == 0) goto L1c
            boolean r0 = r5.ahO
            if (r0 == 0) goto L1c
            android.util.Property r0 = android.view.View.TRANSLATION_X
            float[] r3 = new float[r3]
            r3[r2] = r4
            int r2 = r5.ahU
            float r2 = (float) r2
            r3[r1] = r2
            android.animation.ObjectAnimator r6 = android.animation.ObjectAnimator.ofFloat(r6, r0, r3)
            goto L2c
        L1c:
            android.util.Property r0 = android.view.View.TRANSLATION_Y
            float[] r3 = new float[r3]
            r3[r2] = r4
            int r2 = r5.ahT
            int r2 = -r2
            float r2 = (float) r2
            r3[r1] = r2
            android.animation.ObjectAnimator r6 = android.animation.ObjectAnimator.ofFloat(r6, r0, r3)
        L2c:
            r0 = 1054280253(0x3ed70a3d, float:0.42)
            r1 = 1062836634(0x3f59999a, float:0.85)
            r2 = 1059313418(0x3f23d70a, float:0.64)
            android.view.animation.Interpolator r0 = android.support.v4.view.animation.PathInterpolatorCompat.create(r4, r0, r1, r2)
            r6.setInterpolator(r0)
            r0 = 260(0x104, double:1.285E-321)
            r6.setDuration(r0)
            return r6
    }

    static android.view.View a(com.kwad.sdk.a.a.e r0) {
            android.view.View r0 = r0.mRootView
            return r0
    }

    private void b(android.widget.FrameLayout r5) {
            r4 = this;
            android.content.Context r0 = r4.mContext
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_install_tips_card_height
            int r0 = r0.getDimensionPixelSize(r1)
            android.content.Context r1 = r4.mContext
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_install_tips_card_margin
            int r1 = r1.getDimensionPixelSize(r2)
            int r2 = r0 + r1
            r4.ahT = r2
            android.view.View r2 = r4.mRootView
            android.view.ViewGroup$LayoutParams r2 = r2.getLayoutParams()
            boolean r3 = r2 instanceof android.widget.FrameLayout.LayoutParams
            if (r3 == 0) goto L29
            android.widget.FrameLayout$LayoutParams r2 = (android.widget.FrameLayout.LayoutParams) r2
            goto L2f
        L29:
            android.widget.FrameLayout$LayoutParams r2 = new android.widget.FrameLayout$LayoutParams
            r3 = -1
            r2.<init>(r3, r0)
        L2f:
            r0 = 48
            r2.gravity = r0
            r2.leftMargin = r1
            r2.rightMargin = r1
            r2.topMargin = r1
            android.view.View r0 = r4.mRootView
            int r1 = r4.ahT
            int r1 = -r1
            float r1 = (float) r1
            r0.setTranslationY(r1)
            android.view.View r0 = r4.mRootView
            r5.addView(r0, r2)
            r4.show()
            return
    }

    private void c(android.widget.FrameLayout r6) {
            r5 = this;
            android.content.Context r0 = r5.mContext
            int r0 = com.kwad.sdk.utils.be.getScreenWidth(r0)
            android.content.Context r1 = r5.mContext
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.dimen.ksad_install_tips_bottom_margin_left
            int r1 = r1.getDimensionPixelSize(r2)
            android.content.Context r2 = r5.mContext
            android.content.res.Resources r2 = r2.getResources()
            int r3 = com.kwad.sdk.R.dimen.ksad_install_tips_bottom_margin_bottom
            int r2 = r2.getDimensionPixelSize(r3)
            android.content.Context r3 = r5.mContext
            android.content.res.Resources r3 = r3.getResources()
            int r4 = com.kwad.sdk.R.dimen.ksad_install_tips_bottom_height
            int r3 = r3.getDimensionPixelOffset(r4)
            int r0 = r0 - r1
            r5.ahU = r0
            android.view.View r0 = r5.mRootView
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            boolean r4 = r0 instanceof android.widget.FrameLayout.LayoutParams
            if (r4 == 0) goto L3a
            android.widget.FrameLayout$LayoutParams r0 = (android.widget.FrameLayout.LayoutParams) r0
            goto L40
        L3a:
            android.widget.FrameLayout$LayoutParams r0 = new android.widget.FrameLayout$LayoutParams
            r4 = -1
            r0.<init>(r4, r3)
        L40:
            r3 = 80
            r0.gravity = r3
            r0.leftMargin = r1
            r1 = 0
            r0.rightMargin = r1
            r0.bottomMargin = r2
            android.view.View r1 = r5.mRootView
            int r2 = r5.ahU
            float r2 = (float) r2
            r1.setTranslationX(r2)
            android.view.View r1 = r5.mRootView
            r6.addView(r1, r0)
            r5.show()
            return
    }

    private void ll() {
            r5 = this;
            android.widget.Button r0 = r5.ahS
            boolean r1 = r5.ahN
            if (r1 == 0) goto L9
            java.lang.String r1 = "安装"
            goto Lb
        L9:
            java.lang.String r1 = "打开"
        Lb:
            r0.setText(r1)
            android.view.View r0 = r5.ahP
            r0.setOnClickListener(r5)
            android.widget.Button r0 = r5.ahS
            r0.setOnClickListener(r5)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.bQ(r0)
            android.widget.ImageView r1 = r5.ahQ
            com.kwad.sdk.core.response.model.AdTemplate r2 = r5.mAdTemplate
            r3 = 8
            com.kwad.sdk.core.imageloader.KSImageLoader.loadAppIcon(r1, r0, r2, r3)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.ao(r0)
            int r1 = r0.length()
            r2 = 0
            if (r1 < r3) goto L52
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r3 = 7
            java.lang.String r0 = r0.substring(r2, r3)
            r1.append(r0)
            java.lang.String r0 = "..."
            r1.append(r0)
            java.lang.String r0 = r1.toString()
        L52:
            android.content.Context r1 = r5.mContext
            boolean r3 = r5.ahN
            if (r3 == 0) goto L5b
            int r3 = com.kwad.sdk.R.string.ksad_install_tips
            goto L5d
        L5b:
            int r3 = com.kwad.sdk.R.string.ksad_launch_tips
        L5d:
            r4 = 1
            java.lang.Object[] r4 = new java.lang.Object[r4]
            r4[r2] = r0
            java.lang.String r0 = r1.getString(r3, r4)
            android.widget.TextView r1 = r5.ahR
            r1.setText(r0)
            return
    }

    private void show() {
            r7 = this;
            boolean r0 = r7.ahN
            r1 = 0
            r2 = 1
            r3 = 0
            r4 = 2
            if (r0 == 0) goto L1e
            boolean r0 = r7.ahO
            if (r0 == 0) goto L1e
            android.view.View r0 = r7.mRootView
            android.util.Property r5 = android.view.View.TRANSLATION_X
            float[] r4 = new float[r4]
            int r6 = r7.ahU
            float r6 = (float) r6
            r4[r3] = r6
            r4[r2] = r1
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r0, r5, r4)
            goto L30
        L1e:
            android.view.View r0 = r7.mRootView
            android.util.Property r5 = android.view.View.TRANSLATION_Y
            float[] r4 = new float[r4]
            int r6 = r7.ahT
            int r6 = -r6
            float r6 = (float) r6
            r4[r3] = r6
            r4[r2] = r1
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r0, r5, r4)
        L30:
            r1 = 1048576000(0x3e800000, float:0.25)
            r2 = 1036831949(0x3dcccccd, float:0.1)
            r3 = 1049247089(0x3e8a3d71, float:0.27)
            r4 = 1063172178(0x3f5eb852, float:0.87)
            android.view.animation.Interpolator r1 = android.support.v4.view.animation.PathInterpolatorCompat.create(r1, r2, r3, r4)
            r0.setInterpolator(r1)
            r1 = 300(0x12c, double:1.48E-321)
            r0.setDuration(r1)
            r0.start()
            return
    }

    private android.view.View yj() {
            r3 = this;
            boolean r0 = r3.ahN
            r1 = 0
            if (r0 == 0) goto Le
            boolean r0 = r3.ahO
            if (r0 == 0) goto Le
            android.content.Context r0 = r3.mContext
            int r2 = com.kwad.sdk.R.layout.ksad_install_tips_bottom
            goto L12
        Le:
            android.content.Context r0 = r3.mContext
            int r2 = com.kwad.sdk.R.layout.ksad_install_tips
        L12:
            android.view.View r0 = com.kwad.sdk.m.l.inflate(r0, r2, r1)
            r3.mRootView = r0
            android.content.Context r0 = r3.mContext
            android.content.res.Resources r0 = r0.getResources()
            int r1 = com.kwad.sdk.R.dimen.ksad_install_tips_card_elevation
            float r0 = r0.getDimension(r1)
            android.view.View r1 = r3.mRootView
            android.support.v4.view.ViewCompat.setElevation(r1, r0)
            android.view.View r0 = r3.mRootView
            int r1 = com.kwad.sdk.R.id.ksad_install_tips_close
            android.view.View r0 = r0.findViewById(r1)
            r3.ahP = r0
            android.view.View r0 = r3.mRootView
            int r1 = com.kwad.sdk.R.id.ksad_install_tips_icon
            android.view.View r0 = r0.findViewById(r1)
            android.widget.ImageView r0 = (android.widget.ImageView) r0
            r3.ahQ = r0
            android.view.View r0 = r3.mRootView
            int r1 = com.kwad.sdk.R.id.ksad_install_tips_content
            android.view.View r0 = r0.findViewById(r1)
            android.widget.TextView r0 = (android.widget.TextView) r0
            r3.ahR = r0
            android.view.View r0 = r3.mRootView
            int r1 = com.kwad.sdk.R.id.ksad_install_tips_install
            android.view.View r0 = r0.findViewById(r1)
            android.widget.Button r0 = (android.widget.Button) r0
            r3.ahS = r0
            android.view.View r0 = r3.mRootView
            return r0
    }

    public final void a(android.widget.FrameLayout r4) {
            r3 = this;
            android.view.View r0 = r3.mRootView
            android.view.ViewParent r0 = r0.getParent()
            if (r0 == 0) goto L9
            return
        L9:
            boolean r0 = r3.ahN
            if (r0 == 0) goto L15
            boolean r0 = r3.ahO
            if (r0 == 0) goto L15
            r3.c(r4)
            goto L18
        L15:
            r3.b(r4)
        L18:
            android.view.View r4 = r3.mRootView
            com.kwad.sdk.a.a.e$1 r0 = new com.kwad.sdk.a.a.e$1
            r0.<init>(r3)
            r1 = 10000(0x2710, double:4.9407E-320)
            r4.postDelayed(r0, r1)
            return
    }

    public final void dismiss() {
            r3 = this;
            android.view.View r0 = r3.mRootView
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L9
            return
        L9:
            android.view.View r0 = r3.mRootView
            android.view.ViewParent r0 = r0.getParent()
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            android.view.View r1 = r3.mRootView
            android.animation.Animator r1 = r3.A(r1)
            com.kwad.sdk.a.a.e$2 r2 = new com.kwad.sdk.a.a.e$2
            r2.<init>(r3, r0)
            r1.addListener(r2)
            r1.start()
            com.kwad.sdk.a.a.c r0 = com.kwad.sdk.a.a.c.yb()
            r0.yg()
            return
    }

    @Override
    public final void onClick(android.view.View r5) {
            r4 = this;
            r4.dismiss()
            int r0 = r5.getId()
            int r1 = com.kwad.sdk.R.id.ksad_install_tips_install
            r2 = 1
            r3 = 23
            if (r0 != r1) goto L67
            boolean r5 = r4.ahN
            if (r5 == 0) goto L4c
            boolean r5 = r4.ahV
            if (r5 == 0) goto L29
            com.kwad.sdk.core.report.j r5 = new com.kwad.sdk.core.report.j
            r5.<init>()
            r0 = 29
            r5.ci(r0)
            r5.cm(r3)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            com.kwad.sdk.core.report.a.a(r0, r5)
            goto L30
        L29:
            com.kwad.sdk.core.response.model.AdTemplate r5 = r4.mAdTemplate
            r0 = 45
            com.kwad.sdk.core.report.a.p(r5, r0)
        L30:
            java.lang.Class<com.kwad.sdk.service.a.e> r5 = com.kwad.sdk.service.a.e.class
            java.lang.Object r5 = com.kwad.sdk.service.ServiceProvider.get(r5)
            com.kwad.sdk.service.a.e r5 = (com.kwad.sdk.service.a.e) r5
            android.content.Context r5 = r5.getContext()
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            java.lang.String r0 = r0.downloadFilePath
            boolean r5 = com.kwad.sdk.utils.ak.an(r5, r0)
            if (r5 == 0) goto L4b
            com.kwad.sdk.core.response.model.AdTemplate r5 = r4.mAdTemplate
            com.kwad.sdk.core.report.a.i(r5, r2)
        L4b:
            return
        L4c:
            android.content.Context r5 = r4.mContext
            com.kwad.sdk.core.response.model.AdInfo r0 = r4.mAdInfo
            java.lang.String r0 = com.kwad.sdk.core.response.b.a.aq(r0)
            boolean r5 = com.kwad.sdk.utils.ak.am(r5, r0)
            if (r5 == 0) goto L5f
            com.kwad.sdk.core.response.model.AdTemplate r5 = r4.mAdTemplate
            com.kwad.sdk.core.report.a.ax(r5)
        L5f:
            com.kwad.sdk.core.response.model.AdTemplate r5 = r4.mAdTemplate
            r0 = 47
            com.kwad.sdk.core.report.a.o(r5, r0)
            return
        L67:
            int r5 = r5.getId()
            int r0 = com.kwad.sdk.R.id.ksad_install_tips_close
            if (r5 != r0) goto L9c
            boolean r5 = r4.ahN
            if (r5 == 0) goto L95
            boolean r5 = r4.ahV
            if (r5 == 0) goto L8d
            com.kwad.sdk.core.report.j r5 = new com.kwad.sdk.core.report.j
            r5.<init>()
            r0 = 69
            r5.ci(r0)
            r5.cm(r3)
            r5.cq(r2)
            com.kwad.sdk.core.response.model.AdTemplate r0 = r4.mAdTemplate
            com.kwad.sdk.core.report.a.a(r0, r5)
            return
        L8d:
            com.kwad.sdk.core.response.model.AdTemplate r5 = r4.mAdTemplate
            r0 = 46
            com.kwad.sdk.core.report.a.p(r5, r0)
            return
        L95:
            com.kwad.sdk.core.response.model.AdTemplate r5 = r4.mAdTemplate
            r0 = 48
            com.kwad.sdk.core.report.a.o(r5, r0)
        L9c:
            return
    }
}
