package com.sigmob.sdk.base.views;

public class j extends android.widget.RelativeLayout {
    int a;
    private final android.widget.ImageView b;
    private final android.widget.TextView c;
    private final android.widget.TextView d;
    private final int e;
    private android.widget.TextView f;
    private android.widget.TextView g;
    private com.sigmob.sdk.base.views.p h;
    private com.czhj.volley.toolbox.ImageLoader.ImageContainer i;
    private com.sigmob.sdk.base.views.j j;
    private int k;
    private boolean l;
    private int m;
    private int n;
    private boolean o;
    private boolean p;
    private boolean q;
    private android.widget.LinearLayout r;
    private com.sigmob.sdk.base.models.BaseAdUnit s;






    public j(android.content.Context r11, com.sigmob.sdk.base.models.BaseAdUnit r12, java.lang.String r13, java.lang.String r14, float r15, java.lang.String r16, int r17, int r18, java.lang.String r19, int r20, int r21, int r22, int r23, int r24, float r25) {
            r10 = this;
            r0 = r10
            r1 = r11
            r10.<init>(r11)
            r2 = 0
            r0.j = r2
            r2 = 0
            r0.k = r2
            r3 = r25
            int r3 = com.czhj.sdk.common.utils.Dips.asIntPixels(r3, r11)
            r0.a = r3
            r3 = 1092616192(0x41200000, float:10.0)
            int r3 = com.czhj.sdk.common.utils.Dips.asIntPixels(r3, r11)
            r0.n = r3
            r3 = r12
            r0.s = r3
            r4 = r17
            r0.k = r4
            r4 = r18
            r0.e = r4
            android.widget.TextView r4 = new android.widget.TextView
            r4.<init>(r11)
            r0.d = r4
            r5 = r13
            r4.setText(r13)
            android.widget.TextView r4 = r0.d
            r5 = 1
            r6 = 1098907648(0x41800000, float:16.0)
            r4.setTextSize(r5, r6)
            android.widget.TextView r4 = r0.d
            r6 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r4.setTextColor(r6)
            android.widget.TextView r4 = r0.d
            r4.setSingleLine()
            android.widget.TextView r4 = r0.d
            android.graphics.Typeface r6 = android.graphics.Typeface.defaultFromStyle(r2)
            r4.setTypeface(r6)
            android.widget.TextView r4 = r0.d
            android.text.TextUtils$TruncateAt r6 = android.text.TextUtils.TruncateAt.END
            r4.setEllipsize(r6)
            android.widget.TextView r4 = r0.d
            r6 = 16
            r4.setGravity(r6)
            android.widget.TextView r4 = r0.d
            int r7 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r4.setId(r7)
            android.widget.TextView r4 = r0.d
            int r7 = r0.n
            int r7 = r7 / 6
            r4.setPadding(r7, r2, r2, r2)
            r4 = r22
            r0.m = r4
            android.widget.TextView r4 = new android.widget.TextView
            r4.<init>(r11)
            r0.c = r4
            r7 = 1096810496(0x41600000, float:14.0)
            r4.setTextSize(r5, r7)
            android.widget.TextView r4 = r0.c
            r7 = r21
            r4.setTextColor(r7)
            android.widget.TextView r4 = r0.c
            r7 = 17
            r4.setGravity(r7)
            android.widget.TextView r4 = r0.d
            r4.setSingleLine()
            android.widget.TextView r4 = r0.c
            android.text.TextUtils$TruncateAt r7 = android.text.TextUtils.TruncateAt.END
            r4.setEllipsize(r7)
            android.widget.TextView r4 = r0.c
            r7 = r14
            r4.setText(r14)
            r4 = 1084227584(0x40a00000, float:5.0)
            int r4 = com.czhj.sdk.common.utils.Dips.asIntPixels(r4, r11)
            android.graphics.drawable.GradientDrawable r7 = new android.graphics.drawable.GradientDrawable
            r7.<init>()
            r8 = r20
            r7.setColor(r8)
            int r8 = r4 * 6
            float r8 = (float) r8
            r7.setCornerRadius(r8)
            com.sigmob.sdk.base.views.h r8 = new com.sigmob.sdk.base.views.h
            r8.<init>(r11)
            r0.b = r8
            android.widget.ImageView$ScaleType r9 = android.widget.ImageView.ScaleType.FIT_START
            r8.setScaleType(r9)
            android.widget.ImageView r8 = r0.b
            int r9 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r8.setId(r9)
            android.widget.ImageView r8 = r0.b
            com.sigmob.sdk.base.views.h r8 = (com.sigmob.sdk.base.views.h) r8
            r8.b = r2
            android.widget.ImageView r2 = r0.b
            com.sigmob.sdk.base.views.h r2 = (com.sigmob.sdk.base.views.h) r2
            int r4 = r4 * 2
            float r4 = (float) r4
            r2.a = r4
            int r2 = android.os.Build.VERSION.SDK_INT
            if (r2 < r6) goto Le2
            android.widget.TextView r2 = r0.c
            r2.setBackground(r7)
            goto Le7
        Le2:
            android.widget.TextView r2 = r0.c
            r2.setBackgroundDrawable(r7)
        Le7:
            android.widget.TextView r2 = r0.c
            int r7 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r2.setId(r7)
            android.graphics.drawable.GradientDrawable r2 = new android.graphics.drawable.GradientDrawable
            r2.<init>()
            r2.setCornerRadius(r4)
            r4 = r23
            r2.setColor(r4)
            r4 = r24
            r2.setAlpha(r4)
            int r4 = android.os.Build.VERSION.SDK_INT
            if (r4 < r6) goto L10a
            r10.setBackground(r2)
            goto L10d
        L10a:
            r10.setBackgroundDrawable(r2)
        L10d:
            r0.j = r0
            int r2 = r0.e
            if (r2 != r5) goto L118
            r2 = r15
            r10.a(r11, r15)
            goto L11d
        L118:
            r2 = r16
            r10.a(r11, r2)
        L11d:
            com.sigmob.sdk.base.models.rtb.MaterialMeta r2 = r12.getMaterial()
            if (r2 == 0) goto L12e
            com.sigmob.sdk.base.models.rtb.MaterialMeta r2 = r12.getMaterial()
            com.sigmob.sdk.base.models.rtb.AdPrivacy r2 = r2.ad_privacy
            if (r2 == 0) goto L12e
            r10.a(r11)
        L12e:
            r10.setupUILayout(r11)
            android.widget.ImageView r1 = r0.b
            r2 = 4
            r1.setVisibility(r2)
            r1 = r19
            r10.a(r1)
            r10.g()
            return
    }

    static com.sigmob.sdk.base.views.j a(com.sigmob.sdk.base.views.j r0) {
            com.sigmob.sdk.base.views.j r0 = r0.j
            return r0
    }

    static boolean a(com.sigmob.sdk.base.views.j r0, boolean r1) {
            r0.p = r1
            return r1
    }

    static void b(com.sigmob.sdk.base.views.j r0) {
            r0.g()
            return
    }

    static boolean b(com.sigmob.sdk.base.views.j r0, boolean r1) {
            r0.q = r1
            return r1
    }

    static android.widget.ImageView c(com.sigmob.sdk.base.views.j r0) {
            android.widget.ImageView r0 = r0.b
            return r0
    }

    private void c() {
            r2 = this;
            int r0 = r2.k
            r1 = 1
            if (r0 == r1) goto L14
            r1 = 2
            if (r0 == r1) goto L10
            r1 = 3
            if (r0 == r1) goto Lc
            goto L10
        Lc:
            r2.f()
            goto L17
        L10:
            r2.h()
            goto L17
        L14:
            r2.e()
        L17:
            return
    }

    private void d() {
            r4 = this;
            r0 = 3
            float[] r1 = new float[r0]
            r1 = {x0038: FILL_ARRAY_DATA , data: [1050253722, 1056964608, 1065353216} // fill-array
            java.lang.String r2 = "scaleX"
            android.animation.PropertyValuesHolder r1 = android.animation.PropertyValuesHolder.ofFloat(r2, r1)
            float[] r0 = new float[r0]
            r0 = {x0042: FILL_ARRAY_DATA , data: [1050253722, 1056964608, 1065353216} // fill-array
            java.lang.String r2 = "scaleY"
            android.animation.PropertyValuesHolder r0 = android.animation.PropertyValuesHolder.ofFloat(r2, r0)
            r2 = 2
            android.animation.PropertyValuesHolder[] r2 = new android.animation.PropertyValuesHolder[r2]
            r3 = 0
            r2[r3] = r1
            r1 = 1
            r2[r1] = r0
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofPropertyValuesHolder(r4, r2)
            com.sigmob.sdk.base.views.j$1 r1 = new com.sigmob.sdk.base.views.j$1
            r1.<init>(r4)
            r0.setInterpolator(r1)
            r4.f()
            r1 = 2000(0x7d0, double:9.88E-321)
            r0.setDuration(r1)
            r0.start()
            return
    }

    static boolean d(com.sigmob.sdk.base.views.j r0) {
            boolean r0 = r0.l
            return r0
    }

    private void e() {
            r15 = this;
            r0 = 0
            android.animation.Keyframe r0 = android.animation.Keyframe.ofFloat(r0, r0)
            r1 = 1064514355(0x3f733333, float:0.95)
            r2 = 1056964608(0x3f000000, float:0.5)
            android.animation.Keyframe r2 = android.animation.Keyframe.ofFloat(r2, r1)
            r3 = 1058642330(0x3f19999a, float:0.6)
            r4 = 1063675494(0x3f666666, float:0.9)
            android.animation.Keyframe r3 = android.animation.Keyframe.ofFloat(r3, r4)
            r4 = 1065353216(0x3f800000, float:1.0)
            r5 = 1060320051(0x3f333333, float:0.7)
            android.animation.Keyframe r5 = android.animation.Keyframe.ofFloat(r5, r4)
            r6 = 1061997773(0x3f4ccccd, float:0.8)
            android.animation.Keyframe r1 = android.animation.Keyframe.ofFloat(r6, r1)
            android.animation.Keyframe r4 = android.animation.Keyframe.ofFloat(r4, r4)
            r6 = 6
            android.animation.Keyframe[] r7 = new android.animation.Keyframe[r6]
            r8 = 0
            r7[r8] = r0
            r9 = 1
            r7[r9] = r2
            r10 = 2
            r7[r10] = r3
            r11 = 3
            r7[r11] = r5
            r12 = 4
            r7[r12] = r1
            r13 = 5
            r7[r13] = r4
            java.lang.String r14 = "scaleX"
            android.animation.PropertyValuesHolder r7 = android.animation.PropertyValuesHolder.ofKeyframe(r14, r7)
            android.animation.Keyframe[] r6 = new android.animation.Keyframe[r6]
            r6[r8] = r0
            r6[r9] = r2
            r6[r10] = r3
            r6[r11] = r5
            r6[r12] = r1
            r6[r13] = r4
            java.lang.String r0 = "scaleY"
            android.animation.PropertyValuesHolder r0 = android.animation.PropertyValuesHolder.ofKeyframe(r0, r6)
            android.animation.PropertyValuesHolder[] r1 = new android.animation.PropertyValuesHolder[r10]
            r1[r8] = r7
            r1[r9] = r0
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofPropertyValuesHolder(r15, r1)
            r1 = 1000(0x3e8, double:4.94E-321)
            r0.setDuration(r1)
            r15.f()
            r15.q = r9
            com.sigmob.sdk.base.views.j$2 r1 = new com.sigmob.sdk.base.views.j$2
            r1.<init>(r15)
            r0.addListener(r1)
            r0.start()
            return
    }

    static void e(com.sigmob.sdk.base.views.j r0) {
            r0.c()
            return
    }

    private void f() {
            r1 = this;
            r0 = 1
            r1.o = r0
            r0 = 0
            super.setVisibility(r0)
            return
    }

    private void g() {
            r1 = this;
            r0 = 4
            super.setVisibility(r0)
            return
    }

    private void h() {
            r10 = this;
            java.lang.String r0 = "startDownToUpAnimator"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            android.view.animation.TranslateAnimation r0 = new android.view.animation.TranslateAnimation
            r2 = 2
            r3 = 0
            r4 = 2
            r5 = 0
            r6 = 2
            r7 = 1065353216(0x3f800000, float:1.0)
            r8 = 2
            r9 = 0
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            android.view.animation.LinearInterpolator r1 = new android.view.animation.LinearInterpolator
            r1.<init>()
            r0.setInterpolator(r1)
            r1 = 500(0x1f4, double:2.47E-321)
            r0.setDuration(r1)
            r10.f()
            com.sigmob.sdk.base.views.j$3 r1 = new com.sigmob.sdk.base.views.j$3
            r1.<init>(r10)
            r0.setAnimationListener(r1)
            com.sigmob.sdk.base.views.j r1 = r10.j
            r1.startAnimation(r0)
            return
    }

    private void i() {
            r10 = this;
            java.lang.String r0 = "startUpToDownAnimator"
            com.czhj.sdk.logger.SigmobLog.d(r0)
            android.view.animation.TranslateAnimation r0 = new android.view.animation.TranslateAnimation
            r2 = 2
            r3 = 0
            r4 = 2
            r5 = 0
            r6 = 2
            r7 = 0
            r8 = 2
            r9 = 1065353216(0x3f800000, float:1.0)
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            android.view.animation.LinearInterpolator r1 = new android.view.animation.LinearInterpolator
            r1.<init>()
            r0.setInterpolator(r1)
            r1 = 500(0x1f4, double:2.47E-321)
            r0.setDuration(r1)
            com.sigmob.sdk.base.views.j$4 r1 = new com.sigmob.sdk.base.views.j$4
            r1.<init>(r10)
            r0.setAnimationListener(r1)
            com.sigmob.sdk.base.views.j r1 = r10.j
            r1.startAnimation(r0)
            return
    }

    private void setupUILayout(android.content.Context r8) {
            r7 = this;
            r0 = 1114636288(0x42700000, float:60.0)
            int r0 = com.czhj.sdk.common.utils.Dips.asIntPixels(r0, r8)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            r1.<init>(r0, r0)
            r2 = 15
            r1.addRule(r2)
            int r3 = r7.n
            int r4 = r3 / 4
            r5 = 0
            r1.setMargins(r3, r4, r5, r5)
            android.widget.ImageView r3 = r7.b
            r7.addView(r3, r1)
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams
            float r0 = (float) r0
            r3 = 1072064102(0x3fe66666, float:1.8)
            float r0 = r0 / r3
            int r0 = (int) r0
            r3 = -2
            r1.<init>(r3, r0)
            int r0 = r7.n
            r1.setMargins(r5, r5, r0, r5)
            r1.addRule(r2)
            r0 = 11
            r1.addRule(r0)
            android.widget.TextView r0 = r7.c
            int r4 = r7.n
            r0.setPadding(r4, r5, r4, r5)
            android.widget.TextView r0 = r7.c
            r7.addView(r0, r1)
            android.widget.LinearLayout r0 = new android.widget.LinearLayout
            r0.<init>(r8)
            r1 = 1
            r0.setOrientation(r1)
            android.widget.RelativeLayout$LayoutParams r4 = new android.widget.RelativeLayout$LayoutParams
            r4.<init>(r3, r3)
            int r6 = r7.n
            int r6 = r6 / 2
            r4.setMargins(r6, r5, r5, r5)
            r4.addRule(r2)
            android.widget.ImageView r2 = r7.b
            int r2 = r2.getId()
            r4.addRule(r1, r2)
            android.widget.TextView r2 = r7.c
            int r2 = r2.getId()
            r4.addRule(r5, r2)
            r7.addView(r0, r4)
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams
            r2.<init>(r3, r3)
            android.widget.TextView r4 = r7.d
            r0.addView(r4, r2)
            android.widget.TextView r2 = r7.f
            if (r2 == 0) goto Lbd
            android.widget.RelativeLayout r2 = new android.widget.RelativeLayout
            r2.<init>(r8)
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams
            r8.<init>(r3, r3)
            android.widget.TextView r4 = r7.f
            r2.addView(r4, r8)
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams
            r8.<init>(r3, r3)
            android.widget.TextView r4 = r7.f
            int r4 = r4.getId()
            r8.addRule(r1, r4)
            r1 = 6
            android.widget.TextView r4 = r7.f
            int r4 = r4.getId()
            r8.addRule(r1, r4)
            r1 = 8
            android.widget.TextView r4 = r7.f
            int r4 = r4.getId()
            r8.addRule(r1, r4)
            com.sigmob.sdk.base.views.p r1 = r7.h
            r2.addView(r1, r8)
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams
            r8.<init>(r3, r3)
            r0.addView(r2, r8)
            goto Lcb
        Lbd:
            android.widget.TextView r8 = r7.g
            if (r8 == 0) goto Lcb
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams
            r8.<init>(r3, r3)
            android.widget.TextView r1 = r7.g
            r0.addView(r1, r8)
        Lcb:
            android.widget.LinearLayout r8 = r7.r
            if (r8 == 0) goto Ld9
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams
            r8.<init>(r3, r3)
            android.widget.LinearLayout r1 = r7.r
            r0.addView(r1, r8)
        Ld9:
            return
    }

    public void a(android.content.Context r8) {
            r7 = this;
            android.widget.LinearLayout r0 = new android.widget.LinearLayout
            r0.<init>(r8)
            r7.r = r0
            r1 = 0
            r0.setOrientation(r1)
            android.widget.LinearLayout r0 = r7.r
            int r2 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r0.setId(r2)
            r0 = 1084227584(0x40a00000, float:5.0)
            int r0 = com.czhj.sdk.common.utils.Dips.asIntPixels(r0, r8)
            java.lang.String r2 = "权限"
            java.lang.String r3 = "开发者"
            java.lang.String r4 = "版本"
            java.lang.String r5 = "隐私协议"
            java.lang.String[] r2 = new java.lang.String[]{r2, r3, r4, r5}
            r3 = r1
        L27:
            r4 = 4
            if (r3 >= r4) goto L5c
            android.widget.TextView r4 = new android.widget.TextView
            r4.<init>(r8)
            r5 = 1092616192(0x41200000, float:10.0)
            r6 = 1
            r4.setTextSize(r6, r5)
            r5 = r2[r3]
            r4.setText(r5)
            r5 = -7829368(0xffffffffff888888, float:NaN)
            r4.setTextColor(r5)
            r5 = 1060320051(0x3f333333, float:0.7)
            r4.setAlpha(r5)
            int r5 = r0 / 2
            r4.setPadding(r5, r1, r5, r1)
            android.widget.LinearLayout$LayoutParams r5 = new android.widget.LinearLayout$LayoutParams
            r6 = -2
            r5.<init>(r6, r6)
            r5.setMargins(r1, r1, r0, r1)
            android.widget.LinearLayout r6 = r7.r
            r6.addView(r4, r5)
            int r3 = r3 + 1
            goto L27
        L5c:
            return
    }

    public void a(android.content.Context r5, float r6) {
            r4 = this;
            android.widget.TextView r0 = new android.widget.TextView
            r0.<init>(r5)
            r4.f = r0
            r1 = 1
            r2 = 1096810496(0x41600000, float:14.0)
            r0.setTextSize(r1, r2)
            android.widget.TextView r0 = r4.f
            int r2 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r0.setId(r2)
            android.widget.TextView r0 = r4.f
            r2 = 17
            r0.setGravity(r2)
            android.widget.TextView r0 = r4.f
            r2 = -7829368(0xffffffffff888888, float:NaN)
            r0.setTextColor(r2)
            r0 = 0
            int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r0 <= 0) goto L3e
            android.widget.TextView r0 = r4.f
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.Float r3 = java.lang.Float.valueOf(r6)
            r1[r2] = r3
            java.lang.String r2 = "%.1f"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            r0.setText(r1)
        L3e:
            com.sigmob.sdk.base.views.p r0 = new com.sigmob.sdk.base.views.p
            r0.<init>(r5, r6)
            r4.h = r0
            return
    }

    public void a(android.content.Context r3, java.lang.String r4) {
            r2 = this;
            android.widget.TextView r0 = new android.widget.TextView
            r0.<init>(r3)
            r2.g = r0
            int r3 = com.czhj.sdk.common.ClientMetadata.generateViewId()
            r0.setId(r3)
            android.widget.TextView r3 = r2.g
            r0 = -7829368(0xffffffffff888888, float:NaN)
            r3.setTextColor(r0)
            android.widget.TextView r3 = r2.g
            r3.setSingleLine()
            android.widget.TextView r3 = r2.g
            r0 = 17
            r3.setGravity(r0)
            android.widget.TextView r3 = r2.g
            r0 = 1
            r1 = 1096810496(0x41600000, float:14.0)
            r3.setTextSize(r0, r1)
            android.widget.TextView r3 = r2.g
            android.text.TextUtils$TruncateAt r0 = android.text.TextUtils.TruncateAt.END
            r3.setEllipsize(r0)
            android.widget.TextView r3 = r2.g
            r3.setText(r4)
            return
    }

    public void a(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L17
            com.czhj.volley.toolbox.ImageLoader r0 = com.czhj.sdk.common.network.Networking.getImageLoader()
            if (r0 == 0) goto L17
            com.sigmob.sdk.base.views.j$5 r1 = new com.sigmob.sdk.base.views.j$5
            r1.<init>(r2)
            com.czhj.volley.toolbox.ImageLoader$ImageContainer r3 = r0.get(r3, r1)
            r2.i = r3
        L17:
            return
    }

    public boolean a() {
            r1 = this;
            boolean r0 = r1.o
            return r0
    }

    public boolean b() {
            r1 = this;
            boolean r0 = r1.p
            return r0
    }

    public android.widget.LinearLayout getFourElementsLayout() {
            r1 = this;
            android.widget.LinearLayout r0 = r1.r
            return r0
    }

    @Override
    public int getVisibility() {
            r1 = this;
            int r0 = super.getVisibility()
            return r0
    }

    @Override
    public void setOnTouchListener(android.view.View.OnTouchListener r3) {
            r2 = this;
            int r0 = r2.m
            r1 = 1
            if (r0 != r1) goto Lb
            android.widget.TextView r0 = r2.c
            r0.setOnTouchListener(r3)
            goto Le
        Lb:
            super.setOnTouchListener(r3)
        Le:
            return
    }

    @Override
    public void setVisibility(int r2) {
            r1 = this;
            r0 = 8
            if (r2 != r0) goto L10
            super.setVisibility(r2)
            com.czhj.volley.toolbox.ImageLoader$ImageContainer r2 = r1.i
            r2.cancelRequest()
            r2 = 0
            r1.l = r2
            goto L42
        L10:
            if (r2 != 0) goto L2f
            r2 = 1
            r1.l = r2
            com.sigmob.sdk.base.views.j r2 = r1.j
            android.view.animation.Animation r2 = r2.getAnimation()
            if (r2 != 0) goto L2e
            boolean r2 = r1.q
            if (r2 == 0) goto L22
            goto L2e
        L22:
            android.widget.ImageView r2 = r1.b
            int r2 = r2.getVisibility()
            if (r2 != 0) goto L42
            r1.c()
            goto L42
        L2e:
            return
        L2f:
            r0 = 4
            if (r2 != r0) goto L3f
            com.sigmob.sdk.base.views.j r2 = r1.j
            android.view.animation.Animation r2 = r2.getAnimation()
            if (r2 == 0) goto L3b
            return
        L3b:
            r1.i()
            goto L42
        L3f:
            super.setVisibility(r2)
        L42:
            return
    }
}
