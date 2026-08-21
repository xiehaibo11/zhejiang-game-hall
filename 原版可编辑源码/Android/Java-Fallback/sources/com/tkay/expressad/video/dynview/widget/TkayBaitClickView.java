package com.tkay.expressad.video.dynview.widget;

public class TkayBaitClickView extends android.widget.RelativeLayout {
    public static final int ANIMATION_TYPE_DOUBLE_CLICK = 4;
    public static final int ANIMATION_TYPE_FAST_SCALE = 1;
    public static final int ANIMATION_TYPE_ROTATE = 5;
    public static final int ANIMATION_TYPE_SLOW_SCALE = 2;
    public static final int ANIMATION_TYPE_SLOW_SCALE_WITH_PAUSE = 3;
    private static final java.lang.String a = "MBridgeAnimationClickView";
    private com.tkay.expressad.video.dynview.widget.TYImageView b;
    private com.tkay.expressad.video.dynview.widget.TYImageView c;
    private android.widget.TextView d;
    private java.lang.String e;
    private java.lang.String f;
    private java.lang.String g;
    private int h;
    private int i;
    private android.view.animation.Animation j;
    private android.view.animation.Animation k;
    private android.view.animation.Animation l;
    private android.view.animation.Animation m;



    final class 3 implements android.view.animation.Animation.AnimationListener {
        final com.tkay.expressad.video.dynview.widget.TkayBaitClickView a;

        3(com.tkay.expressad.video.dynview.widget.TkayBaitClickView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onAnimationEnd(android.view.animation.Animation r2) {
                r1 = this;
                com.tkay.expressad.video.dynview.widget.TkayBaitClickView r2 = r1.a
                com.tkay.expressad.video.dynview.widget.TYImageView r2 = com.tkay.expressad.video.dynview.widget.TkayBaitClickView.a(r2)
                if (r2 == 0) goto L12
                com.tkay.expressad.video.dynview.widget.TkayBaitClickView r2 = r1.a
                com.tkay.expressad.video.dynview.widget.TYImageView r2 = com.tkay.expressad.video.dynview.widget.TkayBaitClickView.a(r2)
                r0 = 4
                r2.setVisibility(r0)
            L12:
                return
        }

        @Override
        public final void onAnimationRepeat(android.view.animation.Animation r1) {
                r0 = this;
                return
        }

        @Override
        public final void onAnimationStart(android.view.animation.Animation r2) {
                r1 = this;
                com.tkay.expressad.video.dynview.widget.TkayBaitClickView r2 = r1.a
                com.tkay.expressad.video.dynview.widget.TYImageView r2 = com.tkay.expressad.video.dynview.widget.TkayBaitClickView.a(r2)
                if (r2 == 0) goto L12
                com.tkay.expressad.video.dynview.widget.TkayBaitClickView r2 = r1.a
                com.tkay.expressad.video.dynview.widget.TYImageView r2 = com.tkay.expressad.video.dynview.widget.TkayBaitClickView.a(r2)
                r0 = 0
                r2.setVisibility(r0)
            L12:
                return
        }
    }

    final class 4 implements android.view.animation.Animation.AnimationListener {
        final android.view.animation.AnimationSet a;
        final com.tkay.expressad.video.dynview.widget.TkayBaitClickView b;



        4(com.tkay.expressad.video.dynview.widget.TkayBaitClickView r1, android.view.animation.AnimationSet r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onAnimationEnd(android.view.animation.Animation r4) {
                r3 = this;
                com.tkay.expressad.video.dynview.widget.TkayBaitClickView r4 = r3.b
                com.tkay.expressad.video.dynview.widget.TkayBaitClickView$4$2 r0 = new com.tkay.expressad.video.dynview.widget.TkayBaitClickView$4$2
                r0.<init>(r3)
                r1 = 1000(0x3e8, double:4.94E-321)
                r4.postDelayed(r0, r1)
                return
        }

        @Override
        public final void onAnimationRepeat(android.view.animation.Animation r1) {
                r0 = this;
                return
        }

        @Override
        public final void onAnimationStart(android.view.animation.Animation r4) {
                r3 = this;
                com.tkay.expressad.video.dynview.widget.TkayBaitClickView r4 = r3.b
                com.tkay.expressad.video.dynview.widget.TkayBaitClickView$4$1 r0 = new com.tkay.expressad.video.dynview.widget.TkayBaitClickView$4$1
                r0.<init>(r3)
                r1 = 550(0x226, double:2.717E-321)
                r4.postDelayed(r0, r1)
                return
        }
    }

    final class 5 implements android.view.animation.Animation.AnimationListener {
        final com.tkay.expressad.video.dynview.widget.TkayBaitClickView a;


        5(com.tkay.expressad.video.dynview.widget.TkayBaitClickView r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void onAnimationEnd(android.view.animation.Animation r4) {
                r3 = this;
                com.tkay.expressad.video.dynview.widget.TkayBaitClickView r4 = r3.a
                com.tkay.expressad.video.dynview.widget.TkayBaitClickView$5$1 r0 = new com.tkay.expressad.video.dynview.widget.TkayBaitClickView$5$1
                r0.<init>(r3)
                r1 = 1000(0x3e8, double:4.94E-321)
                r4.postDelayed(r0, r1)
                return
        }

        @Override
        public final void onAnimationRepeat(android.view.animation.Animation r1) {
                r0 = this;
                return
        }

        @Override
        public final void onAnimationStart(android.view.animation.Animation r1) {
                r0 = this;
                return
        }
    }

    public TkayBaitClickView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            java.lang.String r1 = ""
            r0.e = r1
            r0.f = r1
            java.lang.String r1 = "Click now for details"
            r0.g = r1
            r1 = 1
            r0.h = r1
            r1 = 1342177280(0x50000000, float:8.589935E9)
            r0.i = r1
            return
    }

    public TkayBaitClickView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            java.lang.String r1 = ""
            r0.e = r1
            r0.f = r1
            java.lang.String r1 = "Click now for details"
            r0.g = r1
            r1 = 1
            r0.h = r1
            r1 = 1342177280(0x50000000, float:8.589935E9)
            r0.i = r1
            return
    }

    public TkayBaitClickView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            java.lang.String r1 = ""
            r0.e = r1
            r0.f = r1
            java.lang.String r1 = "Click now for details"
            r0.g = r1
            r1 = 1
            r0.h = r1
            r1 = 1342177280(0x50000000, float:8.589935E9)
            r0.i = r1
            return
    }

    public TkayBaitClickView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            java.lang.String r1 = ""
            r0.e = r1
            r0.f = r1
            java.lang.String r1 = "Click now for details"
            r0.g = r1
            r1 = 1
            r0.h = r1
            r1 = 1342177280(0x50000000, float:8.589935E9)
            r0.i = r1
            return
    }

    static com.tkay.expressad.video.dynview.widget.TYImageView a(com.tkay.expressad.video.dynview.widget.TkayBaitClickView r0) {
            com.tkay.expressad.video.dynview.widget.TYImageView r0 = r0.c
            return r0
    }

    private void a() {
            r4 = this;
            android.content.Context r0 = r4.getContext()     // Catch: java.lang.Throwable -> L17
            android.content.Context r1 = r4.getContext()     // Catch: java.lang.Throwable -> L17
            java.lang.String r2 = "tkay_cm_click_for_detail"
            java.lang.String r3 = "string"
            int r1 = com.tkay.expressad.foundation.h.i.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L17
            java.lang.String r0 = r0.getString(r1)     // Catch: java.lang.Throwable -> L17
            r4.g = r0     // Catch: java.lang.Throwable -> L17
            return
        L17:
            r0 = move-exception
            r0.getMessage()
            return
    }

    static com.tkay.expressad.video.dynview.widget.TYImageView b(com.tkay.expressad.video.dynview.widget.TkayBaitClickView r0) {
            com.tkay.expressad.video.dynview.widget.TYImageView r0 = r0.b
            return r0
    }

    private void b() {
            r12 = this;
            android.view.animation.ScaleAnimation r9 = new android.view.animation.ScaleAnimation
            r1 = 1065353216(0x3f800000, float:1.0)
            r2 = 1060320051(0x3f333333, float:0.7)
            r3 = 1065353216(0x3f800000, float:1.0)
            r4 = 1060320051(0x3f333333, float:0.7)
            r5 = 1
            r6 = 1056964608(0x3f000000, float:0.5)
            r7 = 1
            r8 = 1056964608(0x3f000000, float:0.5)
            r0 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r12.j = r9
            r0 = 200(0xc8, double:9.9E-322)
            r9.setDuration(r0)
            android.view.animation.Animation r0 = r12.j
            r1 = -1
            r0.setRepeatCount(r1)
            android.view.animation.Animation r0 = r12.j
            r2 = 2
            r0.setRepeatMode(r2)
            com.tkay.expressad.video.dynview.widget.TYImageView r0 = r12.b
            if (r0 == 0) goto L32
            android.view.animation.Animation r2 = r12.j
            r0.startAnimation(r2)
        L32:
            android.view.animation.ScaleAnimation r0 = new android.view.animation.ScaleAnimation
            r4 = 0
            r5 = 1067030938(0x3f99999a, float:1.2)
            r6 = 0
            r7 = 1067030938(0x3f99999a, float:1.2)
            r8 = 1
            r9 = 1056964608(0x3f000000, float:0.5)
            r10 = 1
            r11 = 1056964608(0x3f000000, float:0.5)
            r3 = r0
            r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11)
            r12.k = r0
            r2 = 400(0x190, double:1.976E-321)
            r0.setDuration(r2)
            android.view.animation.Animation r0 = r12.k
            r0.setRepeatCount(r1)
            android.view.animation.AlphaAnimation r0 = new android.view.animation.AlphaAnimation
            r4 = 1065353216(0x3f800000, float:1.0)
            r5 = 1050253722(0x3e99999a, float:0.3)
            r0.<init>(r4, r5)
            r12.l = r0
            r0.setDuration(r2)
            android.view.animation.Animation r0 = r12.l
            r0.setRepeatCount(r1)
            android.view.animation.AnimationSet r0 = new android.view.animation.AnimationSet
            r1 = 1
            r0.<init>(r1)
            android.view.animation.Animation r1 = r12.k
            r0.addAnimation(r1)
            android.view.animation.Animation r1 = r12.l
            r0.addAnimation(r1)
            com.tkay.expressad.video.dynview.widget.TYImageView r1 = r12.c
            if (r1 == 0) goto L7d
            r1.startAnimation(r0)
        L7d:
            return
    }

    static android.view.animation.Animation c(com.tkay.expressad.video.dynview.widget.TkayBaitClickView r0) {
            android.view.animation.Animation r0 = r0.j
            return r0
    }

    private void c() {
            r10 = this;
            android.view.animation.ScaleAnimation r9 = new android.view.animation.ScaleAnimation
            r1 = 1065353216(0x3f800000, float:1.0)
            r2 = 1060320051(0x3f333333, float:0.7)
            r3 = 1065353216(0x3f800000, float:1.0)
            r4 = 1060320051(0x3f333333, float:0.7)
            r5 = 1
            r6 = 1056964608(0x3f000000, float:0.5)
            r7 = 1
            r8 = 1056964608(0x3f000000, float:0.5)
            r0 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r10.j = r9
            r0 = 500(0x1f4, double:2.47E-321)
            r9.setDuration(r0)
            android.view.animation.Animation r0 = r10.j
            r1 = -1
            r0.setRepeatCount(r1)
            android.view.animation.Animation r0 = r10.j
            r1 = 2
            r0.setRepeatMode(r1)
            com.tkay.expressad.video.dynview.widget.TYImageView r0 = r10.b
            if (r0 == 0) goto L32
            android.view.animation.Animation r1 = r10.j
            r0.startAnimation(r1)
        L32:
            return
    }

    private void d() {
            r12 = this;
            com.tkay.expressad.video.dynview.widget.TYImageView r0 = r12.c
            if (r0 == 0) goto L8
            r1 = 4
            r0.setVisibility(r1)
        L8:
            android.view.animation.ScaleAnimation r0 = new android.view.animation.ScaleAnimation
            r3 = 1065353216(0x3f800000, float:1.0)
            r4 = 1060320051(0x3f333333, float:0.7)
            r5 = 1065353216(0x3f800000, float:1.0)
            r6 = 1060320051(0x3f333333, float:0.7)
            r7 = 1
            r8 = 1056964608(0x3f000000, float:0.5)
            r9 = 1
            r10 = 1056964608(0x3f000000, float:0.5)
            r2 = r0
            r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10)
            r12.j = r0
            r1 = 500(0x1f4, double:2.47E-321)
            r0.setDuration(r1)
            android.view.animation.Animation r0 = r12.j
            r1 = 1
            r0.setRepeatCount(r1)
            android.view.animation.Animation r0 = r12.j
            r2 = 2
            r0.setRepeatMode(r2)
            android.view.animation.ScaleAnimation r0 = new android.view.animation.ScaleAnimation
            r4 = 0
            r5 = 1069547520(0x3fc00000, float:1.5)
            r6 = 0
            r7 = 1069547520(0x3fc00000, float:1.5)
            r8 = 1
            r9 = 1056964608(0x3f000000, float:0.5)
            r10 = 1
            r11 = 1056964608(0x3f000000, float:0.5)
            r3 = r0
            r3.<init>(r4, r5, r6, r7, r8, r9, r10, r11)
            r12.k = r0
            r2 = 1000(0x3e8, double:4.94E-321)
            r0.setDuration(r2)
            android.view.animation.Animation r0 = r12.k
            r4 = 0
            r0.setRepeatCount(r4)
            android.view.animation.AlphaAnimation r0 = new android.view.animation.AlphaAnimation
            r5 = 1065353216(0x3f800000, float:1.0)
            r0.<init>(r5, r6)
            r12.l = r0
            r0.setDuration(r2)
            android.view.animation.Animation r0 = r12.l
            r0.setRepeatCount(r4)
            android.view.animation.AnimationSet r0 = new android.view.animation.AnimationSet
            r0.<init>(r1)
            android.view.animation.Animation r1 = r12.k
            r0.addAnimation(r1)
            android.view.animation.Animation r1 = r12.l
            r0.addAnimation(r1)
            android.view.animation.Animation r1 = r12.k
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView$3 r2 = new com.tkay.expressad.video.dynview.widget.TkayBaitClickView$3
            r2.<init>(r12)
            r1.setAnimationListener(r2)
            android.view.animation.Animation r1 = r12.j
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView$4 r2 = new com.tkay.expressad.video.dynview.widget.TkayBaitClickView$4
            r2.<init>(r12, r0)
            r1.setAnimationListener(r2)
            com.tkay.expressad.video.dynview.widget.TYImageView r0 = r12.b
            if (r0 == 0) goto L8d
            android.view.animation.Animation r1 = r12.j
            r0.startAnimation(r1)
        L8d:
            return
    }

    private void e() {
            r10 = this;
            android.view.animation.ScaleAnimation r9 = new android.view.animation.ScaleAnimation
            r1 = 1061997773(0x3f4ccccd, float:0.8)
            r2 = 1065353216(0x3f800000, float:1.0)
            r3 = 1061997773(0x3f4ccccd, float:0.8)
            r4 = 1065353216(0x3f800000, float:1.0)
            r5 = 1
            r6 = 1056964608(0x3f000000, float:0.5)
            r7 = 1
            r8 = 1056964608(0x3f000000, float:0.5)
            r0 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r10.j = r9
            r0 = 200(0xc8, double:9.9E-322)
            r9.setDuration(r0)
            android.view.animation.Animation r0 = r10.j
            r1 = 1
            r0.setRepeatCount(r1)
            android.view.animation.Animation r0 = r10.j
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView$5 r1 = new com.tkay.expressad.video.dynview.widget.TkayBaitClickView$5
            r1.<init>(r10)
            r0.setAnimationListener(r1)
            com.tkay.expressad.video.dynview.widget.TYImageView r0 = r10.b
            if (r0 == 0) goto L36
            android.view.animation.Animation r1 = r10.j
            r0.startAnimation(r1)
        L36:
            return
    }

    private void f() {
            r11 = this;
            android.view.animation.RotateAnimation r7 = new android.view.animation.RotateAnimation
            r1 = -1054867456(0xffffffffc1200000, float:-10.0)
            r2 = 1106247680(0x41f00000, float:30.0)
            r3 = 1
            r4 = 1056964608(0x3f000000, float:0.5)
            r5 = 1
            r6 = 1056964608(0x3f000000, float:0.5)
            r0 = r7
            r0.<init>(r1, r2, r3, r4, r5, r6)
            r11.m = r7
            r0 = 300(0x12c, double:1.48E-321)
            r7.setDuration(r0)
            android.view.animation.Animation r0 = r11.m
            r1 = 2
            r0.setRepeatMode(r1)
            android.view.animation.Animation r0 = r11.m
            r1 = -1
            r0.setRepeatCount(r1)
            android.view.animation.ScaleAnimation r0 = new android.view.animation.ScaleAnimation
            r3 = 0
            r4 = 1067030938(0x3f99999a, float:1.2)
            r5 = 0
            r6 = 1067030938(0x3f99999a, float:1.2)
            r7 = 1
            r8 = 1056964608(0x3f000000, float:0.5)
            r9 = 1
            r10 = 1056964608(0x3f000000, float:0.5)
            r2 = r0
            r2.<init>(r3, r4, r5, r6, r7, r8, r9, r10)
            r11.k = r0
            r2 = 600(0x258, double:2.964E-321)
            r0.setDuration(r2)
            android.view.animation.Animation r0 = r11.k
            r0.setRepeatCount(r1)
            android.view.animation.AlphaAnimation r0 = new android.view.animation.AlphaAnimation
            r4 = 1065353216(0x3f800000, float:1.0)
            r0.<init>(r4, r5)
            r11.l = r0
            r0.setDuration(r2)
            android.view.animation.Animation r0 = r11.l
            r0.setRepeatCount(r1)
            android.view.animation.AnimationSet r0 = new android.view.animation.AnimationSet
            r1 = 1
            r0.<init>(r1)
            android.view.animation.Animation r1 = r11.k
            r0.addAnimation(r1)
            android.view.animation.Animation r1 = r11.l
            r0.addAnimation(r1)
            com.tkay.expressad.video.dynview.widget.TYImageView r1 = r11.b
            if (r1 == 0) goto L6d
            android.view.animation.Animation r2 = r11.m
            r1.startAnimation(r2)
        L6d:
            com.tkay.expressad.video.dynview.widget.TYImageView r1 = r11.c
            if (r1 == 0) goto L74
            r1.startAnimation(r0)
        L74:
            return
    }

    public void init() {
            r9 = this;
            java.lang.String r0 = "drawable"
            int r1 = r9.i     // Catch: java.lang.Throwable -> L14f
            r9.setBackgroundColor(r1)     // Catch: java.lang.Throwable -> L14f
            android.content.Context r1 = r9.getContext()     // Catch: java.lang.Throwable -> L1e
            android.content.Context r2 = r9.getContext()     // Catch: java.lang.Throwable -> L1e
            java.lang.String r3 = "tkay_cm_click_for_detail"
            java.lang.String r4 = "string"
            int r2 = com.tkay.expressad.foundation.h.i.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L1e
            java.lang.String r1 = r1.getString(r2)     // Catch: java.lang.Throwable -> L1e
            r9.g = r1     // Catch: java.lang.Throwable -> L1e
            goto L22
        L1e:
            r1 = move-exception
            r1.getMessage()     // Catch: java.lang.Throwable -> L14f
        L22:
            android.widget.RelativeLayout r1 = new android.widget.RelativeLayout     // Catch: java.lang.Throwable -> L14f
            android.content.Context r2 = r9.getContext()     // Catch: java.lang.Throwable -> L14f
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14f
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L14f
            r3 = -2
            r2.<init>(r3, r3)     // Catch: java.lang.Throwable -> L14f
            r1.setLayoutParams(r2)     // Catch: java.lang.Throwable -> L14f
            android.content.Context r2 = r9.getContext()     // Catch: java.lang.Throwable -> L14f
            r4 = 1113325568(0x425c0000, float:55.0)
            int r2 = com.tkay.expressad.foundation.h.t.b(r2, r4)     // Catch: java.lang.Throwable -> L14f
            android.content.Context r4 = r9.getContext()     // Catch: java.lang.Throwable -> L14f
            r5 = 1107558400(0x42040000, float:33.0)
            int r4 = com.tkay.expressad.foundation.h.t.b(r4, r5)     // Catch: java.lang.Throwable -> L14f
            com.tkay.expressad.video.dynview.widget.TYImageView r5 = new com.tkay.expressad.video.dynview.widget.TYImageView     // Catch: java.lang.Throwable -> L14f
            android.content.Context r6 = r9.getContext()     // Catch: java.lang.Throwable -> L14f
            r5.<init>(r6)     // Catch: java.lang.Throwable -> L14f
            r9.c = r5     // Catch: java.lang.Throwable -> L14f
            android.widget.RelativeLayout$LayoutParams r5 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L14f
            r5.<init>(r2, r2)     // Catch: java.lang.Throwable -> L14f
            r2 = 0
            r5.setMargins(r4, r4, r2, r2)     // Catch: java.lang.Throwable -> L14f
            com.tkay.expressad.video.dynview.widget.TYImageView r4 = r9.c     // Catch: java.lang.Throwable -> L14f
            r4.setLayoutParams(r5)     // Catch: java.lang.Throwable -> L14f
            android.content.Context r4 = r9.getContext()     // Catch: java.lang.Throwable -> L14f
            java.lang.String r5 = "tkay_icon_click_circle"
            int r4 = com.tkay.expressad.foundation.h.i.a(r4, r5, r0)     // Catch: java.lang.Throwable -> L14f
            java.lang.String r5 = r9.f     // Catch: java.lang.Throwable -> L14f
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L14f
            if (r5 == 0) goto L79
            com.tkay.expressad.video.dynview.widget.TYImageView r5 = r9.c     // Catch: java.lang.Throwable -> L14f
            r5.setImageResource(r4)     // Catch: java.lang.Throwable -> L14f
            goto L8f
        L79:
            com.tkay.core.common.b.m r5 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L14f
            android.content.Context r5 = r5.f()     // Catch: java.lang.Throwable -> L14f
            com.tkay.expressad.foundation.g.d.b r5 = com.tkay.expressad.foundation.g.d.b.a(r5)     // Catch: java.lang.Throwable -> L14f
            java.lang.String r6 = r9.e     // Catch: java.lang.Throwable -> L14f
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView$1 r7 = new com.tkay.expressad.video.dynview.widget.TkayBaitClickView$1     // Catch: java.lang.Throwable -> L14f
            r7.<init>(r9, r4)     // Catch: java.lang.Throwable -> L14f
            r5.a(r6, r7)     // Catch: java.lang.Throwable -> L14f
        L8f:
            android.content.Context r4 = r9.getContext()     // Catch: java.lang.Throwable -> L14f
            r5 = 1121452032(0x42d80000, float:108.0)
            int r4 = com.tkay.expressad.foundation.h.t.b(r4, r5)     // Catch: java.lang.Throwable -> L14f
            android.content.Context r5 = r9.getContext()     // Catch: java.lang.Throwable -> L14f
            r6 = 1108082688(0x420c0000, float:35.0)
            int r5 = com.tkay.expressad.foundation.h.t.b(r5, r6)     // Catch: java.lang.Throwable -> L14f
            android.content.Context r6 = r9.getContext()     // Catch: java.lang.Throwable -> L14f
            r7 = 1110179840(0x422c0000, float:43.0)
            int r6 = com.tkay.expressad.foundation.h.t.b(r6, r7)     // Catch: java.lang.Throwable -> L14f
            com.tkay.expressad.video.dynview.widget.TYImageView r7 = new com.tkay.expressad.video.dynview.widget.TYImageView     // Catch: java.lang.Throwable -> L14f
            android.content.Context r8 = r9.getContext()     // Catch: java.lang.Throwable -> L14f
            r7.<init>(r8)     // Catch: java.lang.Throwable -> L14f
            r9.b = r7     // Catch: java.lang.Throwable -> L14f
            android.widget.RelativeLayout$LayoutParams r7 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L14f
            r7.<init>(r4, r4)     // Catch: java.lang.Throwable -> L14f
            r7.setMargins(r5, r6, r2, r2)     // Catch: java.lang.Throwable -> L14f
            com.tkay.expressad.video.dynview.widget.TYImageView r2 = r9.b     // Catch: java.lang.Throwable -> L14f
            r2.setLayoutParams(r7)     // Catch: java.lang.Throwable -> L14f
            android.content.Context r2 = r9.getContext()     // Catch: java.lang.Throwable -> L14f
            java.lang.String r4 = "tkay_icon_click_hand"
            int r0 = com.tkay.expressad.foundation.h.i.a(r2, r4, r0)     // Catch: java.lang.Throwable -> L14f
            java.lang.String r2 = r9.e     // Catch: java.lang.Throwable -> L14f
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L14f
            if (r2 == 0) goto Ldd
            com.tkay.expressad.video.dynview.widget.TYImageView r2 = r9.b     // Catch: java.lang.Throwable -> L14f
            r2.setImageResource(r0)     // Catch: java.lang.Throwable -> L14f
            goto Lf3
        Ldd:
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L14f
            android.content.Context r2 = r2.f()     // Catch: java.lang.Throwable -> L14f
            com.tkay.expressad.foundation.g.d.b r2 = com.tkay.expressad.foundation.g.d.b.a(r2)     // Catch: java.lang.Throwable -> L14f
            java.lang.String r4 = r9.e     // Catch: java.lang.Throwable -> L14f
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView$2 r5 = new com.tkay.expressad.video.dynview.widget.TkayBaitClickView$2     // Catch: java.lang.Throwable -> L14f
            r5.<init>(r9, r0)     // Catch: java.lang.Throwable -> L14f
            r2.a(r4, r5)     // Catch: java.lang.Throwable -> L14f
        Lf3:
            com.tkay.expressad.video.dynview.widget.TYImageView r0 = r9.c     // Catch: java.lang.Throwable -> L14f
            r1.addView(r0)     // Catch: java.lang.Throwable -> L14f
            com.tkay.expressad.video.dynview.widget.TYImageView r0 = r9.b     // Catch: java.lang.Throwable -> L14f
            r1.addView(r0)     // Catch: java.lang.Throwable -> L14f
            android.widget.LinearLayout r0 = new android.widget.LinearLayout     // Catch: java.lang.Throwable -> L14f
            android.content.Context r2 = r9.getContext()     // Catch: java.lang.Throwable -> L14f
            r0.<init>(r2)     // Catch: java.lang.Throwable -> L14f
            android.widget.RelativeLayout$LayoutParams r2 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L14f
            r2.<init>(r3, r3)     // Catch: java.lang.Throwable -> L14f
            r4 = 13
            r2.addRule(r4)     // Catch: java.lang.Throwable -> L14f
            r0.setLayoutParams(r2)     // Catch: java.lang.Throwable -> L14f
            r2 = 1
            r0.setOrientation(r2)     // Catch: java.lang.Throwable -> L14f
            r0.setGravity(r2)     // Catch: java.lang.Throwable -> L14f
            r0.addView(r1)     // Catch: java.lang.Throwable -> L14f
            android.widget.TextView r1 = new android.widget.TextView     // Catch: java.lang.Throwable -> L14f
            android.content.Context r2 = r9.getContext()     // Catch: java.lang.Throwable -> L14f
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14f
            r9.d = r1     // Catch: java.lang.Throwable -> L14f
            android.widget.RelativeLayout$LayoutParams r1 = new android.widget.RelativeLayout$LayoutParams     // Catch: java.lang.Throwable -> L14f
            r1.<init>(r3, r3)     // Catch: java.lang.Throwable -> L14f
            android.widget.TextView r2 = r9.d     // Catch: java.lang.Throwable -> L14f
            r2.setLayoutParams(r1)     // Catch: java.lang.Throwable -> L14f
            android.widget.TextView r1 = r9.d     // Catch: java.lang.Throwable -> L14f
            java.lang.String r2 = r9.g     // Catch: java.lang.Throwable -> L14f
            r1.setText(r2)     // Catch: java.lang.Throwable -> L14f
            android.widget.TextView r1 = r9.d     // Catch: java.lang.Throwable -> L14f
            r2 = -1
            r1.setTextColor(r2)     // Catch: java.lang.Throwable -> L14f
            android.widget.TextView r1 = r9.d     // Catch: java.lang.Throwable -> L14f
            r2 = 14
            r1.setGravity(r2)     // Catch: java.lang.Throwable -> L14f
            android.widget.TextView r1 = r9.d     // Catch: java.lang.Throwable -> L14f
            r0.addView(r1)     // Catch: java.lang.Throwable -> L14f
            r9.addView(r0)     // Catch: java.lang.Throwable -> L14f
            return
        L14f:
            r0 = move-exception
            r0.getMessage()
            return
    }

    public void init(int r1) {
            r0 = this;
            r0.h = r1
            r0.init()
            return
    }

    public void init(int r1, int r2) {
            r0 = this;
            r0.i = r1
            r0.h = r2
            r0.init()
            return
    }

    public void init(int r1, int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r0 = this;
            r0.i = r1
            r0.h = r2
            r0.e = r3
            r0.f = r4
            r0.g = r5
            r0.init()
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            r1.clearAnimation()
            android.view.animation.Animation r0 = r1.j
            if (r0 == 0) goto Ld
            r0.cancel()
        Ld:
            android.view.animation.Animation r0 = r1.k
            if (r0 == 0) goto L14
            r0.cancel()
        L14:
            android.view.animation.Animation r0 = r1.l
            if (r0 == 0) goto L1b
            r0.cancel()
        L1b:
            android.view.animation.Animation r0 = r1.m
            if (r0 == 0) goto L22
            r0.cancel()
        L22:
            return
    }

    public void startAnimation() {
            r20 = this;
            r0 = r20
            int r1 = r0.h
            r2 = 500(0x1f4, double:2.47E-321)
            r4 = 4
            r5 = 2
            r6 = -1
            if (r1 == r5) goto L1c1
            r7 = 3
            r8 = 0
            r9 = 1065353216(0x3f800000, float:1.0)
            r10 = 1
            if (r1 == r7) goto L13e
            r2 = 200(0xc8, double:9.9E-322)
            if (r1 == r4) goto L103
            r4 = 5
            if (r1 == r4) goto L94
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
            r0.j = r1
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.j
            r1.setRepeatCount(r6)
            android.view.animation.Animation r1 = r0.j
            r1.setRepeatMode(r5)
            com.tkay.expressad.video.dynview.widget.TYImageView r1 = r0.b
            if (r1 == 0) goto L49
            android.view.animation.Animation r2 = r0.j
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
            r0.k = r1
            r2 = 400(0x190, double:1.976E-321)
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.k
            r1.setRepeatCount(r6)
            android.view.animation.AlphaAnimation r1 = new android.view.animation.AlphaAnimation
            r4 = 1050253722(0x3e99999a, float:0.3)
            r1.<init>(r9, r4)
            r0.l = r1
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.l
            r1.setRepeatCount(r6)
            android.view.animation.AnimationSet r1 = new android.view.animation.AnimationSet
            r1.<init>(r10)
            android.view.animation.Animation r2 = r0.k
            r1.addAnimation(r2)
            android.view.animation.Animation r2 = r0.l
            r1.addAnimation(r2)
            com.tkay.expressad.video.dynview.widget.TYImageView r2 = r0.c
            if (r2 == 0) goto L93
            r2.startAnimation(r1)
        L93:
            return
        L94:
            android.view.animation.RotateAnimation r1 = new android.view.animation.RotateAnimation
            r12 = -1054867456(0xffffffffc1200000, float:-10.0)
            r13 = 1106247680(0x41f00000, float:30.0)
            r14 = 1
            r15 = 1056964608(0x3f000000, float:0.5)
            r16 = 1
            r17 = 1056964608(0x3f000000, float:0.5)
            r11 = r1
            r11.<init>(r12, r13, r14, r15, r16, r17)
            r0.m = r1
            r2 = 300(0x12c, double:1.48E-321)
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.m
            r1.setRepeatMode(r5)
            android.view.animation.Animation r1 = r0.m
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
            r0.k = r1
            r2 = 600(0x258, double:2.964E-321)
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.k
            r1.setRepeatCount(r6)
            android.view.animation.AlphaAnimation r1 = new android.view.animation.AlphaAnimation
            r1.<init>(r9, r8)
            r0.l = r1
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.l
            r1.setRepeatCount(r6)
            android.view.animation.AnimationSet r1 = new android.view.animation.AnimationSet
            r1.<init>(r10)
            android.view.animation.Animation r2 = r0.k
            r1.addAnimation(r2)
            android.view.animation.Animation r2 = r0.l
            r1.addAnimation(r2)
            com.tkay.expressad.video.dynview.widget.TYImageView r2 = r0.b
            if (r2 == 0) goto Lfb
            android.view.animation.Animation r3 = r0.m
            r2.startAnimation(r3)
        Lfb:
            com.tkay.expressad.video.dynview.widget.TYImageView r2 = r0.c
            if (r2 == 0) goto L102
            r2.startAnimation(r1)
        L102:
            return
        L103:
            com.tkay.expressad.video.dynview.widget.TYImageView r1 = r0.c
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
            r0.j = r1
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.j
            r1.setRepeatCount(r10)
            android.view.animation.Animation r1 = r0.j
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView$5 r2 = new com.tkay.expressad.video.dynview.widget.TkayBaitClickView$5
            r2.<init>(r0)
            r1.setAnimationListener(r2)
            com.tkay.expressad.video.dynview.widget.TYImageView r1 = r0.b
            if (r1 == 0) goto L13d
            android.view.animation.Animation r2 = r0.j
            r1.startAnimation(r2)
        L13d:
            return
        L13e:
            com.tkay.expressad.video.dynview.widget.TYImageView r1 = r0.c
            if (r1 == 0) goto L145
            r1.setVisibility(r4)
        L145:
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
            r0.j = r1
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.j
            r1.setRepeatCount(r10)
            android.view.animation.Animation r1 = r0.j
            r1.setRepeatMode(r5)
            android.view.animation.ScaleAnimation r1 = new android.view.animation.ScaleAnimation
            r12 = 0
            r13 = 1069547520(0x3fc00000, float:1.5)
            r14 = 0
            r15 = 1069547520(0x3fc00000, float:1.5)
            r11 = r1
            r11.<init>(r12, r13, r14, r15, r16, r17, r18, r19)
            r0.k = r1
            r2 = 1000(0x3e8, double:4.94E-321)
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.k
            r4 = 0
            r1.setRepeatCount(r4)
            android.view.animation.AlphaAnimation r1 = new android.view.animation.AlphaAnimation
            r1.<init>(r9, r8)
            r0.l = r1
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.l
            r1.setRepeatCount(r4)
            android.view.animation.AnimationSet r1 = new android.view.animation.AnimationSet
            r1.<init>(r10)
            android.view.animation.Animation r2 = r0.k
            r1.addAnimation(r2)
            android.view.animation.Animation r2 = r0.l
            r1.addAnimation(r2)
            android.view.animation.Animation r2 = r0.k
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView$3 r3 = new com.tkay.expressad.video.dynview.widget.TkayBaitClickView$3
            r3.<init>(r0)
            r2.setAnimationListener(r3)
            android.view.animation.Animation r2 = r0.j
            com.tkay.expressad.video.dynview.widget.TkayBaitClickView$4 r3 = new com.tkay.expressad.video.dynview.widget.TkayBaitClickView$4
            r3.<init>(r0, r1)
            r2.setAnimationListener(r3)
            com.tkay.expressad.video.dynview.widget.TYImageView r1 = r0.b
            if (r1 == 0) goto L1c0
            android.view.animation.Animation r2 = r0.j
            r1.startAnimation(r2)
        L1c0:
            return
        L1c1:
            com.tkay.expressad.video.dynview.widget.TYImageView r1 = r0.c
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
            r0.j = r1
            r1.setDuration(r2)
            android.view.animation.Animation r1 = r0.j
            r1.setRepeatCount(r6)
            android.view.animation.Animation r1 = r0.j
            r1.setRepeatMode(r5)
            com.tkay.expressad.video.dynview.widget.TYImageView r1 = r0.b
            if (r1 == 0) goto L1f4
            android.view.animation.Animation r2 = r0.j
            r1.startAnimation(r2)
        L1f4:
            return
    }
}
