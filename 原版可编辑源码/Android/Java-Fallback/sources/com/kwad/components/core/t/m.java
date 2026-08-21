package com.kwad.components.core.t;

public final class m {






    public static android.animation.Animator a(android.view.View r2, android.view.animation.Interpolator r3, float r4, float r5) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            r3 = 1058306785(0x3f147ae1, float:0.58)
            r0 = 1065353216(0x3f800000, float:1.0)
            r1 = 0
            android.view.animation.Interpolator r3 = android.support.v4.view.animation.PathInterpolatorCompat.create(r1, r1, r3, r0)
            r0 = 2
            float[] r0 = new float[r0]
            r1 = 0
            r0[r1] = r4
            r4 = 1
            r0[r4] = r5
            java.lang.String r4 = "translationY"
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofFloat(r2, r4, r0)
            r4 = 300(0x12c, double:1.48E-321)
            r2.setDuration(r4)
            r2.setInterpolator(r3)
            return r2
    }

    public static android.animation.Animator a(android.view.View r18, android.view.animation.Interpolator r19, long r20, float r22) {
            r0 = r18
            r1 = r20
            r3 = r22
            android.animation.AnimatorSet r4 = new android.animation.AnimatorSet
            r4.<init>()
            if (r19 != 0) goto L1d
            r5 = 1046562734(0x3e6147ae, float:0.22)
            r6 = 1058474557(0x3f170a3d, float:0.59)
            r7 = 1052266988(0x3eb851ec, float:0.36)
            r8 = 1065353216(0x3f800000, float:1.0)
            android.view.animation.Interpolator r5 = android.support.v4.view.animation.PathInterpolatorCompat.create(r5, r6, r7, r8)
            goto L1f
        L1d:
            r5 = r19
        L1f:
            r6 = 2
            float[] r7 = new float[r6]
            r7 = {x00a8: FILL_ARRAY_DATA , data: [1065353216, 1065353216} // fill-array
            java.lang.String r8 = "alpha"
            android.animation.ObjectAnimator r7 = android.animation.ObjectAnimator.ofFloat(r0, r8, r7)
            r8 = 300(0x12c, double:1.48E-321)
            r7.setDuration(r8)
            float[] r8 = new float[r6]
            r9 = 0
            r10 = 0
            r8[r10] = r9
            r11 = 1
            r8[r11] = r3
            java.lang.String r12 = "rotation"
            android.animation.ObjectAnimator r8 = android.animation.ObjectAnimator.ofFloat(r0, r12, r8)
            android.animation.ObjectAnimator r8 = r8.setDuration(r1)
            float[] r13 = new float[r6]
            r13[r10] = r3
            float r14 = -r3
            r13[r11] = r14
            android.animation.ObjectAnimator r13 = android.animation.ObjectAnimator.ofFloat(r0, r12, r13)
            r15 = 2
            r17 = r12
            long r11 = r1 * r15
            android.animation.ObjectAnimator r13 = r13.setDuration(r11)
            r13.setInterpolator(r5)
            float[] r15 = new float[r6]
            r15[r10] = r14
            r16 = 1
            r15[r16] = r3
            r9 = r17
            android.animation.ObjectAnimator r15 = android.animation.ObjectAnimator.ofFloat(r0, r9, r15)
            android.animation.ObjectAnimator r15 = r15.setDuration(r11)
            r17 = r4
            float[] r4 = new float[r6]
            r4[r10] = r3
            r4[r16] = r14
            android.animation.ObjectAnimator r3 = android.animation.ObjectAnimator.ofFloat(r0, r9, r4)
            android.animation.ObjectAnimator r3 = r3.setDuration(r11)
            r3.setInterpolator(r5)
            float[] r4 = new float[r6]
            r4[r10] = r14
            r5 = 0
            r4[r16] = r5
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r0, r9, r4)
            android.animation.ObjectAnimator r0 = r0.setDuration(r1)
            r1 = 6
            android.animation.Animator[] r1 = new android.animation.Animator[r1]
            r1[r10] = r7
            r1[r16] = r8
            r1[r6] = r13
            r2 = 3
            r1[r2] = r15
            r2 = 4
            r1[r2] = r3
            r2 = 5
            r1[r2] = r0
            r0 = r17
            r0.playSequentially(r1)
            return r0
    }

    public static android.animation.ValueAnimator b(android.view.View r2, int r3, int r4) {
            k(r2, r3)
            r0 = 2
            int[] r0 = new int[r0]
            r1 = 0
            r0[r1] = r3
            r3 = 1
            r0[r3] = r4
            android.animation.ValueAnimator r3 = android.animation.ValueAnimator.ofInt(r0)
            com.kwad.components.core.t.m$1 r0 = new com.kwad.components.core.t.m$1
            r0.<init>(r2)
            r3.addUpdateListener(r0)
            com.kwad.components.core.t.m$4 r0 = new com.kwad.components.core.t.m$4
            r0.<init>(r2, r4)
            r3.addListener(r0)
            return r3
    }

    public static android.animation.ValueAnimator c(android.view.View r2, int r3, int r4) {
            r0 = 2
            int[] r0 = new int[r0]
            r1 = 0
            r0[r1] = r3
            r3 = 1
            r0[r3] = r4
            android.animation.ValueAnimator r3 = android.animation.ObjectAnimator.ofInt(r0)
            com.kwad.components.core.t.m$5 r4 = new com.kwad.components.core.t.m$5
            r4.<init>(r2)
            r3.addUpdateListener(r4)
            return r3
    }

    public static android.animation.ValueAnimator h(android.view.View r5, boolean r6) {
            r0 = 2
            float[] r0 = new float[r0]
            r1 = 0
            r2 = 1065353216(0x3f800000, float:1.0)
            if (r6 == 0) goto La
            r3 = r1
            goto Lb
        La:
            r3 = r2
        Lb:
            r4 = 0
            r0[r4] = r3
            r3 = 1
            if (r6 == 0) goto L13
            r4 = r2
            goto L14
        L13:
            r4 = r1
        L14:
            r0[r3] = r4
            android.animation.ValueAnimator r0 = android.animation.ValueAnimator.ofFloat(r0)
            r3 = 1055286886(0x3ee66666, float:0.45)
            r4 = 1058642330(0x3f19999a, float:0.6)
            android.view.animation.Interpolator r1 = android.support.v4.view.animation.PathInterpolatorCompat.create(r3, r1, r4, r2)
            r0.setInterpolator(r1)
            r1 = 300(0x12c, double:1.48E-321)
            r0.setDuration(r1)
            com.kwad.components.core.t.m$2 r1 = new com.kwad.components.core.t.m$2
            r1.<init>(r5)
            r0.addUpdateListener(r1)
            com.kwad.components.core.t.m$3 r1 = new com.kwad.components.core.t.m$3
            r1.<init>(r6, r5)
            r0.addListener(r1)
            return r0
    }

    private static void k(android.view.View r1, int r2) {
            android.view.ViewGroup$LayoutParams r0 = r1.getLayoutParams()
            r0.height = r2
            r1.setLayoutParams(r0)
            return
    }

    static void l(android.view.View r0, int r1) {
            k(r0, r1)
            return
    }
}
