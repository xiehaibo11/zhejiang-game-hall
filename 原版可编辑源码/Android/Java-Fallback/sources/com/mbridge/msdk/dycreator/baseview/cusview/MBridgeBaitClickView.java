package com.mbridge.msdk.dycreator.baseview.cusview;

public class MBridgeBaitClickView extends android.widget.RelativeLayout {
    public static final int ANIMATION_TYPE_DOUBLE_CLICK = 4;
    public static final int ANIMATION_TYPE_FAST_SCALE = 1;
    public static final int ANIMATION_TYPE_ROTATE = 5;
    public static final int ANIMATION_TYPE_SLOW_SCALE = 2;
    public static final int ANIMATION_TYPE_SLOW_SCALE_WITH_PAUSE = 3;
    private com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView a;
    private com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView b;
    private android.widget.TextView c;
    private java.lang.String d;
    private java.lang.String e;
    private java.lang.String f;
    private int g;
    private int h;
    private android.view.animation.Animation i;
    private android.view.animation.Animation j;
    private android.view.animation.Animation k;
    private android.view.animation.Animation l;






    public MBridgeBaitClickView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = ""
            r0.d = r1
            r0.e = r1
            java.lang.String r1 = "Click now for details"
            r0.f = r1
            r1 = 1
            r0.g = r1
            r1 = 1342177280(0x50000000, float:8.589935E9)
            r0.h = r1
            return
    }

    public MBridgeBaitClickView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r1 = ""
            r0.d = r1
            r0.e = r1
            java.lang.String r1 = "Click now for details"
            r0.f = r1
            r1 = 1
            r0.g = r1
            r1 = 1342177280(0x50000000, float:8.589935E9)
            r0.h = r1
            return
    }

    public MBridgeBaitClickView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.lang.String r1 = ""
            r0.d = r1
            r0.e = r1
            java.lang.String r1 = "Click now for details"
            r0.f = r1
            r1 = 1
            r0.g = r1
            r1 = 1342177280(0x50000000, float:8.589935E9)
            r0.h = r1
            return
    }

    public MBridgeBaitClickView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            java.lang.String r1 = ""
            r0.d = r1
            r0.e = r1
            java.lang.String r1 = "Click now for details"
            r0.f = r1
            r1 = 1
            r0.g = r1
            r1 = 1342177280(0x50000000, float:8.589935E9)
            r0.h = r1
            return
    }

    static com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView a(com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView r0) {
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r0 = r0.b
            return r0
    }

    static com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView b(com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView r0) {
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r0 = r0.a
            return r0
    }

    static android.view.animation.Animation c(com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView r0) {
            android.view.animation.Animation r0 = r0.i
            return r0
    }

    public void init() {
            r10 = this;
            java.lang.String r0 = "drawable"
            java.lang.String r1 = "MBridgeAnimationClickView"
            int r2 = r10.h     // Catch: java.lang.Throwable -> L160
            r10.setBackgroundColor(r2)     // Catch: java.lang.Throwable -> L160
            android.content.Context r2 = r10.getContext()     // Catch: java.lang.Throwable -> L2b
            android.content.res.Resources r2 = r2.getResources()     // Catch: java.lang.Throwable -> L2b
            android.content.res.Configuration r2 = r2.getConfiguration()     // Catch: java.lang.Throwable -> L2b
            java.util.Locale r2 = r2.locale     // Catch: java.lang.Throwable -> L2b
            java.lang.String r2 = r2.getLanguage()     // Catch: java.lang.Throwable -> L2b
            java.lang.String r3 = "zh"
            boolean r2 = r2.contains(r3)     // Catch: java.lang.Throwable -> L2b
            if (r2 == 0) goto L26
            java.lang.String r2 = "点击查看详情"
            goto L28
        L26:
            java.lang.String r2 = "Click now for details"
        L28:
            r10.f = r2     // Catch: java.lang.Throwable -> L2b
            goto L33
        L2b:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L160
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)     // Catch: java.lang.Throwable -> L160
        L33:
            android.widget.RelativeLayout r2 = new android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L160
            android.content.Context r3 = r10.getContext()     // Catch: java.lang.Throwable -> L160
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L160
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L160
            r4 = -2
            r3.<init>(r4, r4)     // Catch: java.lang.Throwable -> L160
            r2.setLayoutParams(r3)     // Catch: java.lang.Throwable -> L160
            android.content.Context r3 = r10.getContext()     // Catch: java.lang.Throwable -> L160
            r5 = 1113325568(0x425c0000, float:55.0)
            int r3 = com.mbridge.msdk.foundation.tools.ae.b(r3, r5)     // Catch: java.lang.Throwable -> L160
            android.content.Context r5 = r10.getContext()     // Catch: java.lang.Throwable -> L160
            r6 = 1107558400(0x42040000, float:33.0)
            int r5 = com.mbridge.msdk.foundation.tools.ae.b(r5, r6)     // Catch: java.lang.Throwable -> L160
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r6 = new com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView     // Catch: java.lang.Throwable -> L160
            android.content.Context r7 = r10.getContext()     // Catch: java.lang.Throwable -> L160
            r6.<init>(r7)     // Catch: java.lang.Throwable -> L160
            r10.b = r6     // Catch: java.lang.Throwable -> L160
            android.widget.RelativeLayout$LayoutParams r6 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L160
            r6.<init>(r3, r3)     // Catch: java.lang.Throwable -> L160
            r3 = 0
            r6.setMargins(r5, r5, r3, r3)     // Catch: java.lang.Throwable -> L160
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r5 = r10.b     // Catch: java.lang.Throwable -> L160
            r5.setLayoutParams(r6)     // Catch: java.lang.Throwable -> L160
            android.content.Context r5 = r10.getContext()     // Catch: java.lang.Throwable -> L160
            java.lang.String r6 = "mbridge_icon_click_circle"
            int r5 = com.mbridge.msdk.foundation.tools.s.a(r5, r6, r0)     // Catch: java.lang.Throwable -> L160
            java.lang.String r6 = r10.e     // Catch: java.lang.Throwable -> L160
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L160
            if (r6 == 0) goto L8a
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r6 = r10.b     // Catch: java.lang.Throwable -> L160
            r6.setImageResource(r5)     // Catch: java.lang.Throwable -> L160
            goto La0
        L8a:
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L160
            android.content.Context r6 = r6.j()     // Catch: java.lang.Throwable -> L160
            com.mbridge.msdk.foundation.same.c.b r6 = com.mbridge.msdk.foundation.same.c.b.a(r6)     // Catch: java.lang.Throwable -> L160
            java.lang.String r7 = r10.d     // Catch: java.lang.Throwable -> L160
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView$1 r8 = new com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView$1     // Catch: java.lang.Throwable -> L160
            r8.<init>(r10, r5)     // Catch: java.lang.Throwable -> L160
            r6.a(r7, r8)     // Catch: java.lang.Throwable -> L160
        La0:
            android.content.Context r5 = r10.getContext()     // Catch: java.lang.Throwable -> L160
            r6 = 1121452032(0x42d80000, float:108.0)
            int r5 = com.mbridge.msdk.foundation.tools.ae.b(r5, r6)     // Catch: java.lang.Throwable -> L160
            android.content.Context r6 = r10.getContext()     // Catch: java.lang.Throwable -> L160
            r7 = 1108082688(0x420c0000, float:35.0)
            int r6 = com.mbridge.msdk.foundation.tools.ae.b(r6, r7)     // Catch: java.lang.Throwable -> L160
            android.content.Context r7 = r10.getContext()     // Catch: java.lang.Throwable -> L160
            r8 = 1110179840(0x422c0000, float:43.0)
            int r7 = com.mbridge.msdk.foundation.tools.ae.b(r7, r8)     // Catch: java.lang.Throwable -> L160
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r8 = new com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView     // Catch: java.lang.Throwable -> L160
            android.content.Context r9 = r10.getContext()     // Catch: java.lang.Throwable -> L160
            r8.<init>(r9)     // Catch: java.lang.Throwable -> L160
            r10.a = r8     // Catch: java.lang.Throwable -> L160
            android.widget.RelativeLayout$LayoutParams r8 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L160
            r8.<init>(r5, r5)     // Catch: java.lang.Throwable -> L160
            r8.setMargins(r6, r7, r3, r3)     // Catch: java.lang.Throwable -> L160
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r3 = r10.a     // Catch: java.lang.Throwable -> L160
            r3.setLayoutParams(r8)     // Catch: java.lang.Throwable -> L160
            android.content.Context r3 = r10.getContext()     // Catch: java.lang.Throwable -> L160
            java.lang.String r5 = "mbridge_icon_click_hand"
            int r0 = com.mbridge.msdk.foundation.tools.s.a(r3, r5, r0)     // Catch: java.lang.Throwable -> L160
            java.lang.String r3 = r10.d     // Catch: java.lang.Throwable -> L160
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L160
            if (r3 == 0) goto Lee
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r3 = r10.a     // Catch: java.lang.Throwable -> L160
            r3.setImageResource(r0)     // Catch: java.lang.Throwable -> L160
            goto L104
        Lee:
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L160
            android.content.Context r3 = r3.j()     // Catch: java.lang.Throwable -> L160
            com.mbridge.msdk.foundation.same.c.b r3 = com.mbridge.msdk.foundation.same.c.b.a(r3)     // Catch: java.lang.Throwable -> L160
            java.lang.String r5 = r10.d     // Catch: java.lang.Throwable -> L160
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView$2 r6 = new com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView$2     // Catch: java.lang.Throwable -> L160
            r6.<init>(r10, r0)     // Catch: java.lang.Throwable -> L160
            r3.a(r5, r6)     // Catch: java.lang.Throwable -> L160
        L104:
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r0 = r10.b     // Catch: java.lang.Throwable -> L160
            r2.addView(r0)     // Catch: java.lang.Throwable -> L160
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r0 = r10.a     // Catch: java.lang.Throwable -> L160
            r2.addView(r0)     // Catch: java.lang.Throwable -> L160
            android.widget.LinearLayout r0 = new android.widget.LinearLayout     // Catch: java.lang.Throwable -> L160
            android.content.Context r3 = r10.getContext()     // Catch: java.lang.Throwable -> L160
            r0.<init>(r3)     // Catch: java.lang.Throwable -> L160
            android.widget.RelativeLayout$LayoutParams r3 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L160
            r3.<init>(r4, r4)     // Catch: java.lang.Throwable -> L160
            r5 = 13
            r3.addRule(r5)     // Catch: java.lang.Throwable -> L160
            r0.setLayoutParams(r3)     // Catch: java.lang.Throwable -> L160
            r3 = 1
            r0.setOrientation(r3)     // Catch: java.lang.Throwable -> L160
            r0.setGravity(r3)     // Catch: java.lang.Throwable -> L160
            r0.addView(r2)     // Catch: java.lang.Throwable -> L160
            android.widget.TextView r2 = new android.widget.TextView     // Catch: java.lang.Throwable -> L160
            android.content.Context r3 = r10.getContext()     // Catch: java.lang.Throwable -> L160
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L160
            r10.c = r2     // Catch: java.lang.Throwable -> L160
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L160
            r2.<init>(r4, r4)     // Catch: java.lang.Throwable -> L160
            android.widget.TextView r3 = r10.c     // Catch: java.lang.Throwable -> L160
            r3.setLayoutParams(r2)     // Catch: java.lang.Throwable -> L160
            android.widget.TextView r2 = r10.c     // Catch: java.lang.Throwable -> L160
            java.lang.String r3 = r10.f     // Catch: java.lang.Throwable -> L160
            r2.setText(r3)     // Catch: java.lang.Throwable -> L160
            android.widget.TextView r2 = r10.c     // Catch: java.lang.Throwable -> L160
            r3 = -1
            r2.setTextColor(r3)     // Catch: java.lang.Throwable -> L160
            android.widget.TextView r2 = r10.c     // Catch: java.lang.Throwable -> L160
            r3 = 14
            r2.setGravity(r3)     // Catch: java.lang.Throwable -> L160
            android.widget.TextView r2 = r10.c     // Catch: java.lang.Throwable -> L160
            r0.addView(r2)     // Catch: java.lang.Throwable -> L160
            r10.addView(r0)     // Catch: java.lang.Throwable -> L160
            goto L168
        L160:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L168:
            return
    }

    public void init(int r1) {
            r0 = this;
            r0.g = r1
            r0.init()
            return
    }

    public void init(int r1, int r2) {
            r0 = this;
            r0.h = r1
            r0.g = r2
            r0.init()
            return
    }

    public void init(int r1, int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r0 = this;
            r0.h = r1
            r0.g = r2
            r0.d = r3
            r0.e = r4
            r0.f = r5
            r0.init()
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            r1.clearAnimation()
            android.view.animation.Animation r0 = r1.i
            if (r0 == 0) goto Ld
            r0.cancel()
        Ld:
            android.view.animation.Animation r0 = r1.j
            if (r0 == 0) goto L14
            r0.cancel()
        L14:
            android.view.animation.Animation r0 = r1.k
            if (r0 == 0) goto L1b
            r0.cancel()
        L1b:
            android.view.animation.Animation r0 = r1.l
            if (r0 == 0) goto L22
            r0.cancel()
        L22:
            return
    }

    public void startAnimation() {
            r20 = this;
            r0 = r20
            int r1 = r0.g
            r2 = 500(0x1f4, double:2.47E-321)
            r4 = 4
            r5 = 2
            r6 = -1
            if (r1 == r5) goto L1c4
            r7 = 3
            r8 = 0
            r9 = 1065353216(0x3f800000, float:1.0)
            r10 = 1
            if (r1 == r7) goto L141
            r2 = 200(0xc8, double:9.9E-322)
            if (r1 == r4) goto L105
            r4 = 5
            if (r1 == r4) goto L95
            android.view.animation.ScaleAnimation r1 = new android.view.animation.ScaleAnimation
            r12 = 1065353216(0x3f800000, float:1.0)
            r13 = 1060320051(0x3f333333, float:0.7)
            r14 = 1065353216(0x3f800000, float:1.0)
            r15 = 1060320051(0x3f333333, float:0.7)
            r16 = 1
            r17 = 1056964608(0x3f000000, float:0.5)
            r18 = 1
            r19 = 1056964608(0x3f000000, float:0.5)
            r11 = r1
            r11.<init>(r12, r13, r14, r15, r16, r17, r18, r19)
            r0.i = r1
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.i
            r1.setRepeatCount(r6)
            android.view.animation.Animation r1 = r0.i
            r1.setRepeatMode(r5)
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r1 = r0.a
            if (r1 == 0) goto L49
            android.view.animation.Animation r2 = r0.i
            r1.startAnimation(r2)
        L49:
            android.view.animation.ScaleAnimation r1 = new android.view.animation.ScaleAnimation
            r12 = 0
            r13 = 1067030938(0x3f99999a, float:1.2)
            r14 = 0
            r15 = 1067030938(0x3f99999a, float:1.2)
            r16 = 1
            r17 = 1056964608(0x3f000000, float:0.5)
            r18 = 1
            r19 = 1056964608(0x3f000000, float:0.5)
            r11 = r1
            r11.<init>(r12, r13, r14, r15, r16, r17, r18, r19)
            r0.j = r1
            r2 = 400(0x190, double:1.976E-321)
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.j
            r1.setRepeatCount(r6)
            android.view.animation.AlphaAnimation r1 = new android.view.animation.AlphaAnimation
            r4 = 1050253722(0x3e99999a, float:0.3)
            r1.<init>(r9, r4)
            r0.k = r1
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.k
            r1.setRepeatCount(r6)
            android.view.animation.AnimationSet r1 = new android.view.animation.AnimationSet
            r1.<init>(r10)
            android.view.animation.Animation r2 = r0.j
            r1.addAnimation(r2)
            android.view.animation.Animation r2 = r0.k
            r1.addAnimation(r2)
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r2 = r0.b
            if (r2 == 0) goto L1f7
            r2.startAnimation(r1)
            goto L1f7
        L95:
            android.view.animation.RotateAnimation r1 = new android.view.animation.RotateAnimation
            r12 = -1054867456(0xffffffffc1200000, float:-10.0)
            r13 = 1106247680(0x41f00000, float:30.0)
            r14 = 1
            r15 = 1056964608(0x3f000000, float:0.5)
            r16 = 1
            r17 = 1056964608(0x3f000000, float:0.5)
            r11 = r1
            r11.<init>(r12, r13, r14, r15, r16, r17)
            r0.l = r1
            r2 = 300(0x12c, double:1.48E-321)
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.l
            r1.setRepeatMode(r5)
            android.view.animation.Animation r1 = r0.l
            r1.setRepeatCount(r6)
            android.view.animation.ScaleAnimation r1 = new android.view.animation.ScaleAnimation
            r12 = 0
            r13 = 1067030938(0x3f99999a, float:1.2)
            r14 = 0
            r15 = 1067030938(0x3f99999a, float:1.2)
            r18 = 1
            r19 = 1056964608(0x3f000000, float:0.5)
            r11 = r1
            r11.<init>(r12, r13, r14, r15, r16, r17, r18, r19)
            r0.j = r1
            r2 = 600(0x258, double:2.964E-321)
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.j
            r1.setRepeatCount(r6)
            android.view.animation.AlphaAnimation r1 = new android.view.animation.AlphaAnimation
            r1.<init>(r9, r8)
            r0.k = r1
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.k
            r1.setRepeatCount(r6)
            android.view.animation.AnimationSet r1 = new android.view.animation.AnimationSet
            r1.<init>(r10)
            android.view.animation.Animation r2 = r0.j
            r1.addAnimation(r2)
            android.view.animation.Animation r2 = r0.k
            r1.addAnimation(r2)
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r2 = r0.a
            if (r2 == 0) goto Lfc
            android.view.animation.Animation r3 = r0.l
            r2.startAnimation(r3)
        Lfc:
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r2 = r0.b
            if (r2 == 0) goto L1f7
            r2.startAnimation(r1)
            goto L1f7
        L105:
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r1 = r0.b
            r1.setVisibility(r4)
            android.view.animation.ScaleAnimation r1 = new android.view.animation.ScaleAnimation
            r12 = 1061997773(0x3f4ccccd, float:0.8)
            r13 = 1065353216(0x3f800000, float:1.0)
            r14 = 1061997773(0x3f4ccccd, float:0.8)
            r15 = 1065353216(0x3f800000, float:1.0)
            r16 = 1
            r17 = 1056964608(0x3f000000, float:0.5)
            r18 = 1
            r19 = 1056964608(0x3f000000, float:0.5)
            r11 = r1
            r11.<init>(r12, r13, r14, r15, r16, r17, r18, r19)
            r0.i = r1
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.i
            r1.setRepeatCount(r10)
            android.view.animation.Animation r1 = r0.i
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView$5 r2 = new com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView$5
            r2.<init>(r0)
            r1.setAnimationListener(r2)
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r1 = r0.a
            if (r1 == 0) goto L1f7
            android.view.animation.Animation r2 = r0.i
            r1.startAnimation(r2)
            goto L1f7
        L141:
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r1 = r0.b
            if (r1 == 0) goto L148
            r1.setVisibility(r4)
        L148:
            android.view.animation.ScaleAnimation r1 = new android.view.animation.ScaleAnimation
            r12 = 1065353216(0x3f800000, float:1.0)
            r13 = 1060320051(0x3f333333, float:0.7)
            r14 = 1065353216(0x3f800000, float:1.0)
            r15 = 1060320051(0x3f333333, float:0.7)
            r16 = 1
            r17 = 1056964608(0x3f000000, float:0.5)
            r18 = 1
            r19 = 1056964608(0x3f000000, float:0.5)
            r11 = r1
            r11.<init>(r12, r13, r14, r15, r16, r17, r18, r19)
            r0.i = r1
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.i
            r1.setRepeatCount(r10)
            android.view.animation.Animation r1 = r0.i
            r1.setRepeatMode(r5)
            android.view.animation.ScaleAnimation r1 = new android.view.animation.ScaleAnimation
            r12 = 0
            r13 = 1069547520(0x3fc00000, float:1.5)
            r14 = 0
            r15 = 1069547520(0x3fc00000, float:1.5)
            r11 = r1
            r11.<init>(r12, r13, r14, r15, r16, r17, r18, r19)
            r0.j = r1
            r2 = 1000(0x3e8, double:4.94E-321)
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.j
            r4 = 0
            r1.setRepeatCount(r4)
            android.view.animation.AlphaAnimation r1 = new android.view.animation.AlphaAnimation
            r1.<init>(r9, r8)
            r0.k = r1
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.k
            r1.setRepeatCount(r4)
            android.view.animation.AnimationSet r1 = new android.view.animation.AnimationSet
            r1.<init>(r10)
            android.view.animation.Animation r2 = r0.j
            r1.addAnimation(r2)
            android.view.animation.Animation r2 = r0.k
            r1.addAnimation(r2)
            android.view.animation.Animation r2 = r0.j
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView$3 r3 = new com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView$3
            r3.<init>(r0)
            r2.setAnimationListener(r3)
            android.view.animation.Animation r2 = r0.i
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView$4 r3 = new com.mbridge.msdk.dycreator.baseview.cusview.MBridgeBaitClickView$4
            r3.<init>(r0, r1)
            r2.setAnimationListener(r3)
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r1 = r0.a
            if (r1 == 0) goto L1f7
            android.view.animation.Animation r2 = r0.i
            r1.startAnimation(r2)
            goto L1f7
        L1c4:
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r1 = r0.b
            r1.setVisibility(r4)
            android.view.animation.ScaleAnimation r1 = new android.view.animation.ScaleAnimation
            r8 = 1065353216(0x3f800000, float:1.0)
            r9 = 1060320051(0x3f333333, float:0.7)
            r10 = 1065353216(0x3f800000, float:1.0)
            r11 = 1060320051(0x3f333333, float:0.7)
            r12 = 1
            r13 = 1056964608(0x3f000000, float:0.5)
            r14 = 1
            r15 = 1056964608(0x3f000000, float:0.5)
            r7 = r1
            r7.<init>(r8, r9, r10, r11, r12, r13, r14, r15)
            r0.i = r1
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.i
            r1.setRepeatCount(r6)
            android.view.animation.Animation r1 = r0.i
            r1.setRepeatMode(r5)
            com.mbridge.msdk.dycreator.baseview.cusview.MBridgeDyImageView r1 = r0.a
            if (r1 == 0) goto L1f7
            android.view.animation.Animation r2 = r0.i
            r1.startAnimation(r2)
        L1f7:
            return
    }
}
