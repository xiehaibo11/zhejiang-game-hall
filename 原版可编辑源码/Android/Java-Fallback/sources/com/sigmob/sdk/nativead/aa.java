package com.sigmob.sdk.nativead;

public class aa {
    private android.view.ViewGroup a;
    private com.sigmob.sdk.nativead.z b;
    private com.sigmob.sdk.nativead.z c;
    private long d;



    public aa(android.view.ViewGroup r1, com.sigmob.sdk.nativead.z r2, com.sigmob.sdk.nativead.z r3, long r4) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            return
    }

    static android.view.ViewGroup a(com.sigmob.sdk.nativead.aa r0) {
            android.view.ViewGroup r0 = r0.a
            return r0
    }

    public void a() {
            r9 = this;
            android.view.ViewGroup r0 = r9.a
            r1 = 2
            float[] r2 = new float[r1]
            com.sigmob.sdk.nativead.z r3 = r9.b
            int r3 = r3.a()
            float r3 = (float) r3
            r4 = 0
            r2[r4] = r3
            com.sigmob.sdk.nativead.z r3 = r9.c
            int r3 = r3.a()
            float r3 = (float) r3
            r5 = 1
            r2[r5] = r3
            java.lang.String r3 = "x"
            android.animation.ObjectAnimator r0 = android.animation.ObjectAnimator.ofFloat(r0, r3, r2)
            android.view.ViewGroup r2 = r9.a
            float[] r3 = new float[r1]
            com.sigmob.sdk.nativead.z r6 = r9.b
            int r6 = r6.b()
            float r6 = (float) r6
            r3[r4] = r6
            com.sigmob.sdk.nativead.z r6 = r9.c
            int r6 = r6.b()
            float r6 = (float) r6
            r3[r5] = r6
            java.lang.String r6 = "y"
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofFloat(r2, r6, r3)
            int[] r3 = new int[r1]
            com.sigmob.sdk.nativead.z r6 = r9.b
            int r6 = r6.c()
            r3[r4] = r6
            com.sigmob.sdk.nativead.z r6 = r9.c
            int r6 = r6.c()
            r3[r5] = r6
            android.animation.ValueAnimator r3 = android.animation.ValueAnimator.ofInt(r3)
            int[] r6 = new int[r1]
            com.sigmob.sdk.nativead.z r7 = r9.b
            int r7 = r7.d()
            r6[r4] = r7
            com.sigmob.sdk.nativead.z r7 = r9.c
            int r7 = r7.d()
            r6[r5] = r7
            android.animation.ValueAnimator r6 = android.animation.ValueAnimator.ofInt(r6)
            com.sigmob.sdk.nativead.aa$1 r7 = new com.sigmob.sdk.nativead.aa$1
            r7.<init>(r9)
            r3.addUpdateListener(r7)
            com.sigmob.sdk.nativead.aa$2 r7 = new com.sigmob.sdk.nativead.aa$2
            r7.<init>(r9)
            r6.addUpdateListener(r7)
            android.animation.AnimatorSet r7 = new android.animation.AnimatorSet
            r7.<init>()
            r8 = 4
            android.animation.Animator[] r8 = new android.animation.Animator[r8]
            r8[r4] = r0
            r8[r5] = r2
            r8[r1] = r3
            r0 = 3
            r8[r0] = r6
            r7.playTogether(r8)
            long r0 = r9.d
            r7.setDuration(r0)
            android.view.animation.DecelerateInterpolator r0 = new android.view.animation.DecelerateInterpolator
            r0.<init>()
            r7.setInterpolator(r0)
            r7.start()
            return
    }
}
