package com.tkay.expressad.video.dynview.h;

public final class b {





    final class 5 implements android.animation.ValueAnimator.AnimatorUpdateListener {
        final android.view.View a;
        final com.tkay.expressad.video.dynview.h.b b;

        5(com.tkay.expressad.video.dynview.h.b r1, android.view.View r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onAnimationUpdate(android.animation.ValueAnimator r2) {
                r1 = this;
                android.view.View r0 = r1.a
                android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
                java.lang.Object r2 = r2.getAnimatedValue()
                java.lang.Integer r2 = (java.lang.Integer) r2
                int r2 = r2.intValue()
                r0.width = r2
                android.view.View r2 = r1.a
                r2.setLayoutParams(r0)
                return
        }
    }

    final class 6 implements android.animation.ValueAnimator.AnimatorUpdateListener {
        final android.view.View a;
        final com.tkay.expressad.video.dynview.h.b b;

        6(com.tkay.expressad.video.dynview.h.b r1, android.view.View r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void onAnimationUpdate(android.animation.ValueAnimator r3) {
                r2 = this;
                android.view.View r0 = r2.a
                java.lang.Object r1 = r3.getAnimatedValue()
                java.lang.Float r1 = (java.lang.Float) r1
                float r1 = r1.floatValue()
                r0.setScaleX(r1)
                android.view.View r0 = r2.a
                java.lang.Object r3 = r3.getAnimatedValue()
                java.lang.Float r3 = (java.lang.Float) r3
                float r3 = r3.floatValue()
                r0.setScaleY(r3)
                return
        }
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.animation.ObjectAnimator a(android.view.View r5) {
            android.util.Property r0 = android.view.View.SCALE_X
            android.animation.PropertyValuesHolder r0 = a(r0)
            android.util.Property r1 = android.view.View.SCALE_Y
            android.animation.PropertyValuesHolder r1 = a(r1)
            android.util.Property r2 = android.view.View.ROTATION_X
            r3 = 1084227584(0x40a00000, float:5.0)
            android.animation.PropertyValuesHolder r2 = a(r2, r3)
            r3 = 3
            android.animation.PropertyValuesHolder[] r3 = new android.animation.PropertyValuesHolder[r3]
            r4 = 0
            r3[r4] = r0
            r0 = 1
            r3[r0] = r1
            r0 = 2
            r3[r0] = r2
            android.animation.ObjectAnimator r5 = android.animation.ObjectAnimator.ofPropertyValuesHolder(r5, r3)
            r0 = 2000(0x7d0, double:9.88E-321)
            android.animation.ObjectAnimator r5 = r5.setDuration(r0)
            r0 = -1
            r5.setRepeatCount(r0)
            return r5
    }

    private static android.animation.PropertyValuesHolder a(android.util.Property r7) {
            r0 = 11
            android.animation.Keyframe[] r0 = new android.animation.Keyframe[r0]
            r1 = 1065353216(0x3f800000, float:1.0)
            r2 = 0
            android.animation.Keyframe r2 = android.animation.Keyframe.ofFloat(r2, r1)
            r3 = 0
            r0[r3] = r2
            r2 = 1058642330(0x3f19999a, float:0.6)
            r3 = 1036831949(0x3dcccccd, float:0.1)
            android.animation.Keyframe r3 = android.animation.Keyframe.ofFloat(r3, r2)
            r4 = 1
            r0[r4] = r3
            r3 = 1061997773(0x3f4ccccd, float:0.8)
            r4 = 1045220557(0x3e4ccccd, float:0.2)
            android.animation.Keyframe r4 = android.animation.Keyframe.ofFloat(r4, r3)
            r5 = 2
            r0[r5] = r4
            r4 = 1067869798(0x3fa66666, float:1.3)
            r5 = 1050253722(0x3e99999a, float:0.3)
            android.animation.Keyframe r5 = android.animation.Keyframe.ofFloat(r5, r4)
            r6 = 3
            r0[r6] = r5
            r5 = 1053609165(0x3ecccccd, float:0.4)
            android.animation.Keyframe r5 = android.animation.Keyframe.ofFloat(r5, r3)
            r6 = 4
            r0[r6] = r5
            r5 = 1056964608(0x3f000000, float:0.5)
            android.animation.Keyframe r5 = android.animation.Keyframe.ofFloat(r5, r4)
            r6 = 5
            r0[r6] = r5
            r5 = 1063675494(0x3f666666, float:0.9)
            android.animation.Keyframe r2 = android.animation.Keyframe.ofFloat(r2, r5)
            r6 = 6
            r0[r6] = r2
            r2 = 1060320051(0x3f333333, float:0.7)
            android.animation.Keyframe r2 = android.animation.Keyframe.ofFloat(r2, r4)
            r4 = 7
            r0[r4] = r2
            android.animation.Keyframe r2 = android.animation.Keyframe.ofFloat(r3, r1)
            r3 = 8
            r0[r3] = r2
            r2 = 1066192077(0x3f8ccccd, float:1.1)
            android.animation.Keyframe r2 = android.animation.Keyframe.ofFloat(r5, r2)
            r3 = 9
            r0[r3] = r2
            android.animation.Keyframe r1 = android.animation.Keyframe.ofFloat(r1, r1)
            r2 = 10
            r0[r2] = r1
            android.animation.PropertyValuesHolder r7 = android.animation.PropertyValuesHolder.ofKeyframe(r7, r0)
            return r7
    }

    private static android.animation.PropertyValuesHolder a(android.util.Property r5, float r6) {
            r0 = 11
            android.animation.Keyframe[] r0 = new android.animation.Keyframe[r0]
            r1 = 0
            android.animation.Keyframe r2 = android.animation.Keyframe.ofFloat(r1, r1)
            r3 = 0
            r0[r3] = r2
            r2 = -1073741824(0xffffffffc0000000, float:-2.0)
            float r2 = r2 * r6
            r3 = 1036831949(0x3dcccccd, float:0.1)
            android.animation.Keyframe r3 = android.animation.Keyframe.ofFloat(r3, r2)
            r4 = 1
            r0[r4] = r3
            r3 = 1045220557(0x3e4ccccd, float:0.2)
            android.animation.Keyframe r3 = android.animation.Keyframe.ofFloat(r3, r2)
            r4 = 2
            r0[r4] = r3
            r3 = 1073741824(0x40000000, float:2.0)
            float r6 = r6 * r3
            r3 = 1050253722(0x3e99999a, float:0.3)
            android.animation.Keyframe r3 = android.animation.Keyframe.ofFloat(r3, r6)
            r4 = 3
            r0[r4] = r3
            r3 = 1053609165(0x3ecccccd, float:0.4)
            android.animation.Keyframe r3 = android.animation.Keyframe.ofFloat(r3, r2)
            r4 = 4
            r0[r4] = r3
            r3 = 1056964608(0x3f000000, float:0.5)
            android.animation.Keyframe r3 = android.animation.Keyframe.ofFloat(r3, r6)
            r4 = 5
            r0[r4] = r3
            r3 = 1058642330(0x3f19999a, float:0.6)
            android.animation.Keyframe r3 = android.animation.Keyframe.ofFloat(r3, r2)
            r4 = 6
            r0[r4] = r3
            r3 = 1060320051(0x3f333333, float:0.7)
            android.animation.Keyframe r3 = android.animation.Keyframe.ofFloat(r3, r6)
            r4 = 7
            r0[r4] = r3
            r3 = 1061997773(0x3f4ccccd, float:0.8)
            android.animation.Keyframe r2 = android.animation.Keyframe.ofFloat(r3, r2)
            r3 = 8
            r0[r3] = r2
            r2 = 1063675494(0x3f666666, float:0.9)
            android.animation.Keyframe r6 = android.animation.Keyframe.ofFloat(r2, r6)
            r2 = 9
            r0[r2] = r6
            r6 = 1065353216(0x3f800000, float:1.0)
            android.animation.Keyframe r6 = android.animation.Keyframe.ofFloat(r6, r1)
            r1 = 10
            r0[r1] = r6
            android.animation.PropertyValuesHolder r5 = android.animation.PropertyValuesHolder.ofKeyframe(r5, r0)
            return r5
    }

    private void a(android.view.View r4, int r5, int r6, int r7, int r8, long r9) {
            r3 = this;
            r0 = 2
            int[] r1 = new int[r0]
            r2 = 0
            r1[r2] = r5
            r5 = 1
            r1[r5] = r6
            android.animation.ValueAnimator r6 = android.animation.ValueAnimator.ofInt(r1)
            com.tkay.expressad.video.dynview.h.b$3 r1 = new com.tkay.expressad.video.dynview.h.b$3
            r1.<init>(r3, r4)
            r6.addUpdateListener(r1)
            int[] r1 = new int[r0]
            r1[r2] = r7
            r1[r5] = r8
            android.animation.ValueAnimator r7 = android.animation.ValueAnimator.ofInt(r1)
            com.tkay.expressad.video.dynview.h.b$4 r8 = new com.tkay.expressad.video.dynview.h.b$4
            r8.<init>(r3, r4)
            r7.addUpdateListener(r8)
            android.animation.AnimatorSet r4 = new android.animation.AnimatorSet
            r4.<init>()
            android.animation.Animator[] r8 = new android.animation.Animator[r0]
            r8[r2] = r6
            r8[r5] = r7
            r4.playTogether(r8)
            r4.setDuration(r9)
            r4.start()
            return
    }

    private void a(android.view.View r3, int r4, int r5, long r6) {
            r2 = this;
            r0 = 2
            int[] r0 = new int[r0]
            r1 = 0
            r0[r1] = r4
            r4 = 1
            r0[r4] = r5
            android.animation.ValueAnimator r4 = android.animation.ValueAnimator.ofInt(r0)
            android.animation.ValueAnimator r4 = r4.setDuration(r6)
            com.tkay.expressad.video.dynview.h.b$2 r5 = new com.tkay.expressad.video.dynview.h.b$2
            r5.<init>(r2, r3)
            r4.addUpdateListener(r5)
            r4.start()
            return
    }

    private void a(android.view.View r5, int r6, long r7) {
            r4 = this;
            android.view.ViewGroup$LayoutParams r0 = r5.getLayoutParams()
            int r0 = r0.width
            r1 = 1
            r2 = 0
            r3 = 2
            if (r0 != 0) goto L16
            int[] r0 = new int[r3]
            r0[r2] = r2
            r0[r1] = r6
            android.animation.ValueAnimator r6 = android.animation.ValueAnimator.ofInt(r0)
            goto L20
        L16:
            int[] r0 = new int[r3]
            r0[r2] = r6
            r0[r1] = r2
            android.animation.ValueAnimator r6 = android.animation.ValueAnimator.ofInt(r0)
        L20:
            r6.setDuration(r7)
            com.tkay.expressad.video.dynview.h.b$5 r0 = new com.tkay.expressad.video.dynview.h.b$5
            r0.<init>(r4, r5)
            r6.addUpdateListener(r0)
            android.view.ViewGroup$LayoutParams r0 = r5.getLayoutParams()
            int r0 = r0.width
            if (r0 != 0) goto L3d
            float[] r0 = new float[r3]
            r0 = {x0064: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            android.animation.ValueAnimator r0 = android.animation.ValueAnimator.ofFloat(r0)
            goto L46
        L3d:
            float[] r0 = new float[r3]
            r0 = {x006c: FILL_ARRAY_DATA , data: [1065353216, 0} // fill-array
            android.animation.ValueAnimator r0 = android.animation.ValueAnimator.ofFloat(r0)
        L46:
            r0.setDuration(r7)
            com.tkay.expressad.video.dynview.h.b$6 r7 = new com.tkay.expressad.video.dynview.h.b$6
            r7.<init>(r4, r5)
            r0.addUpdateListener(r7)
            android.animation.AnimatorSet r5 = new android.animation.AnimatorSet
            r5.<init>()
            android.animation.Animator[] r7 = new android.animation.Animator[r3]
            r7[r2] = r6
            r7[r1] = r0
            r5.playTogether(r7)
            r5.start()
            return
    }

    private void a(android.view.View r6, long r7) {
            r5 = this;
            if (r6 != 0) goto L3
            return
        L3:
            android.content.Context r0 = r6.getContext()
            android.content.Context r0 = r0.getApplicationContext()
            int r0 = com.tkay.expressad.foundation.h.t.f(r0)
            float r0 = (float) r0
            int r0 = (int) r0
            android.view.ViewGroup$LayoutParams r1 = r6.getLayoutParams()
            int r1 = r1.width
            r2 = 1
            r3 = 0
            r4 = 2
            if (r1 != 0) goto L27
            int[] r1 = new int[r4]
            r1[r3] = r3
            r1[r2] = r0
            android.animation.ValueAnimator r0 = android.animation.ValueAnimator.ofInt(r1)
            goto L31
        L27:
            int[] r1 = new int[r4]
            r1[r3] = r0
            r1[r2] = r3
            android.animation.ValueAnimator r0 = android.animation.ValueAnimator.ofInt(r1)
        L31:
            r0.setDuration(r7)
            com.tkay.expressad.video.dynview.h.b$5 r1 = new com.tkay.expressad.video.dynview.h.b$5
            r1.<init>(r5, r6)
            r0.addUpdateListener(r1)
            android.view.ViewGroup$LayoutParams r1 = r6.getLayoutParams()
            int r1 = r1.width
            if (r1 != 0) goto L4e
            float[] r1 = new float[r4]
            r1 = {x0074: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            android.animation.ValueAnimator r1 = android.animation.ValueAnimator.ofFloat(r1)
            goto L57
        L4e:
            float[] r1 = new float[r4]
            r1 = {x007c: FILL_ARRAY_DATA , data: [1065353216, 0} // fill-array
            android.animation.ValueAnimator r1 = android.animation.ValueAnimator.ofFloat(r1)
        L57:
            r1.setDuration(r7)
            com.tkay.expressad.video.dynview.h.b$6 r7 = new com.tkay.expressad.video.dynview.h.b$6
            r7.<init>(r5, r6)
            r1.addUpdateListener(r7)
            android.animation.AnimatorSet r6 = new android.animation.AnimatorSet
            r6.<init>()
            android.animation.Animator[] r7 = new android.animation.Animator[r4]
            r7[r3] = r0
            r7[r2] = r1
            r6.playTogether(r7)
            r6.start()
            return
    }

    private static void a(java.util.Map r1, com.tkay.expressad.video.dynview.c r2, android.view.View r3) {
            if (r3 == 0) goto L9
            com.tkay.expressad.video.dynview.i.a.a r0 = com.tkay.expressad.video.dynview.i.a.a.a()
            r0.a(r1, r2, r3)
        L9:
            return
    }

    public static android.animation.ObjectAnimator b(android.view.View r4) {
            android.util.Property r0 = android.view.View.SCALE_X
            android.animation.PropertyValuesHolder r0 = b(r0)
            android.util.Property r1 = android.view.View.SCALE_Y
            android.animation.PropertyValuesHolder r1 = b(r1)
            r2 = 2
            android.animation.PropertyValuesHolder[] r2 = new android.animation.PropertyValuesHolder[r2]
            r3 = 0
            r2[r3] = r0
            r0 = 1
            r2[r0] = r1
            android.animation.ObjectAnimator r4 = android.animation.ObjectAnimator.ofPropertyValuesHolder(r4, r2)
            r0 = 2000(0x7d0, double:9.88E-321)
            android.animation.ObjectAnimator r4 = r4.setDuration(r0)
            r0 = -1
            r4.setRepeatCount(r0)
            return r4
    }

    private static android.animation.PropertyValuesHolder b(android.util.Property r5) {
            r0 = 11
            android.animation.Keyframe[] r0 = new android.animation.Keyframe[r0]
            r1 = 1065353216(0x3f800000, float:1.0)
            r2 = 0
            android.animation.Keyframe r2 = android.animation.Keyframe.ofFloat(r2, r1)
            r3 = 0
            r0[r3] = r2
            r2 = 1058642330(0x3f19999a, float:0.6)
            r3 = 1036831949(0x3dcccccd, float:0.1)
            android.animation.Keyframe r3 = android.animation.Keyframe.ofFloat(r3, r2)
            r4 = 1
            r0[r4] = r3
            r3 = 1045220557(0x3e4ccccd, float:0.2)
            android.animation.Keyframe r3 = android.animation.Keyframe.ofFloat(r3, r2)
            r4 = 2
            r0[r4] = r3
            r3 = 1050253722(0x3e99999a, float:0.3)
            android.animation.Keyframe r3 = android.animation.Keyframe.ofFloat(r3, r1)
            r4 = 3
            r0[r4] = r3
            r3 = 1053609165(0x3ecccccd, float:0.4)
            android.animation.Keyframe r3 = android.animation.Keyframe.ofFloat(r3, r1)
            r4 = 4
            r0[r4] = r3
            r3 = 1056964608(0x3f000000, float:0.5)
            android.animation.Keyframe r3 = android.animation.Keyframe.ofFloat(r3, r1)
            r4 = 5
            r0[r4] = r3
            android.animation.Keyframe r2 = android.animation.Keyframe.ofFloat(r2, r1)
            r3 = 6
            r0[r3] = r2
            r2 = 1060320051(0x3f333333, float:0.7)
            android.animation.Keyframe r2 = android.animation.Keyframe.ofFloat(r2, r1)
            r3 = 7
            r0[r3] = r2
            r2 = 1061997773(0x3f4ccccd, float:0.8)
            android.animation.Keyframe r2 = android.animation.Keyframe.ofFloat(r2, r1)
            r3 = 8
            r0[r3] = r2
            r2 = 1063675494(0x3f666666, float:0.9)
            android.animation.Keyframe r2 = android.animation.Keyframe.ofFloat(r2, r1)
            r3 = 9
            r0[r3] = r2
            android.animation.Keyframe r1 = android.animation.Keyframe.ofFloat(r1, r1)
            r2 = 10
            r0[r2] = r1
            android.animation.PropertyValuesHolder r5 = android.animation.PropertyValuesHolder.ofKeyframe(r5, r0)
            return r5
    }

    public static android.animation.ObjectAnimator c(android.view.View r3) {
            android.util.Property r0 = android.view.View.ROTATION
            r1 = 1073741824(0x40000000, float:2.0)
            android.animation.PropertyValuesHolder r0 = a(r0, r1)
            r1 = 1
            android.animation.PropertyValuesHolder[] r1 = new android.animation.PropertyValuesHolder[r1]
            r2 = 0
            r1[r2] = r0
            android.animation.ObjectAnimator r3 = android.animation.ObjectAnimator.ofPropertyValuesHolder(r3, r1)
            r0 = 900(0x384, double:4.447E-321)
            android.animation.ObjectAnimator r3 = r3.setDuration(r0)
            r0 = -1
            r3.setRepeatCount(r0)
            return r3
    }

    public static void e(android.view.View r2) {
            if (r2 == 0) goto L19
            r0 = 0
            r2.setVisibility(r0)
            r0 = 0
            r2.setAlpha(r0)
            android.view.ViewPropertyAnimator r2 = r2.animate()
            r0 = 1065353216(0x3f800000, float:1.0)
            android.view.ViewPropertyAnimator r2 = r2.alpha(r0)
            r0 = 500(0x1f4, double:2.47E-321)
            r2.setDuration(r0)
        L19:
            return
    }

    private static android.view.animation.TranslateAnimation f(android.view.View r10) {
            android.view.animation.TranslateAnimation r9 = new android.view.animation.TranslateAnimation
            r1 = 1
            r2 = 0
            r3 = 1
            r4 = 0
            r5 = 1
            r6 = 1065353216(0x3f800000, float:1.0)
            r7 = 1
            r8 = 0
            r0 = r9
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r0 = 400(0x190, double:1.976E-321)
            r9.setDuration(r0)
            r0 = 0
            r10.setVisibility(r0)
            return r9
    }

    private static android.animation.ObjectAnimator g(android.view.View r5) {
            android.util.Property r0 = android.view.View.SCALE_X
            android.animation.PropertyValuesHolder r0 = a(r0)
            android.util.Property r1 = android.view.View.SCALE_Y
            android.animation.PropertyValuesHolder r1 = a(r1)
            android.util.Property r2 = android.view.View.ROTATION_X
            r3 = 1084227584(0x40a00000, float:5.0)
            android.animation.PropertyValuesHolder r2 = a(r2, r3)
            r3 = 3
            android.animation.PropertyValuesHolder[] r3 = new android.animation.PropertyValuesHolder[r3]
            r4 = 0
            r3[r4] = r0
            r0 = 1
            r3[r0] = r1
            r0 = 2
            r3[r0] = r2
            android.animation.ObjectAnimator r5 = android.animation.ObjectAnimator.ofPropertyValuesHolder(r5, r3)
            r0 = 2000(0x7d0, double:9.88E-321)
            android.animation.ObjectAnimator r5 = r5.setDuration(r0)
            return r5
    }

    private static android.animation.ObjectAnimator h(android.view.View r4) {
            android.util.Property r0 = android.view.View.SCALE_X
            android.animation.PropertyValuesHolder r0 = b(r0)
            android.util.Property r1 = android.view.View.SCALE_Y
            android.animation.PropertyValuesHolder r1 = b(r1)
            r2 = 2
            android.animation.PropertyValuesHolder[] r2 = new android.animation.PropertyValuesHolder[r2]
            r3 = 0
            r2[r3] = r0
            r0 = 1
            r2[r0] = r1
            android.animation.ObjectAnimator r4 = android.animation.ObjectAnimator.ofPropertyValuesHolder(r4, r2)
            r0 = 2000(0x7d0, double:9.88E-321)
            android.animation.ObjectAnimator r4 = r4.setDuration(r0)
            return r4
    }

    private static android.animation.ObjectAnimator i(android.view.View r3) {
            android.util.Property r0 = android.view.View.ROTATION
            r1 = 1073741824(0x40000000, float:2.0)
            android.animation.PropertyValuesHolder r0 = a(r0, r1)
            r1 = 1
            android.animation.PropertyValuesHolder[] r1 = new android.animation.PropertyValuesHolder[r1]
            r2 = 0
            r1[r2] = r0
            android.animation.ObjectAnimator r3 = android.animation.ObjectAnimator.ofPropertyValuesHolder(r3, r1)
            r0 = 900(0x384, double:4.447E-321)
            android.animation.ObjectAnimator r3 = r3.setDuration(r0)
            return r3
    }

    public final void d(android.view.View r4) {
            r3 = this;
            if (r4 == 0) goto L1e
            r0 = 1065353216(0x3f800000, float:1.0)
            r4.setAlpha(r0)
            android.view.ViewPropertyAnimator r0 = r4.animate()
            r1 = 0
            android.view.ViewPropertyAnimator r0 = r0.alpha(r1)
            r1 = 500(0x1f4, double:2.47E-321)
            android.view.ViewPropertyAnimator r0 = r0.setDuration(r1)
            com.tkay.expressad.video.dynview.h.b$1 r1 = new com.tkay.expressad.video.dynview.h.b$1
            r1.<init>(r3, r4)
            r0.setListener(r1)
        L1e:
            return
    }
}
