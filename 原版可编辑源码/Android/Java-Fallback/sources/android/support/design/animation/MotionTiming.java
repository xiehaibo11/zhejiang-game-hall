package android.support.design.animation;

public class MotionTiming {
    private long delay;
    private long duration;
    private android.animation.TimeInterpolator interpolator;
    private int repeatCount;
    private int repeatMode;

    public MotionTiming(long r3, long r5) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.delay = r0
            r0 = 300(0x12c, double:1.48E-321)
            r2.duration = r0
            r0 = 0
            r2.interpolator = r0
            r0 = 0
            r2.repeatCount = r0
            r0 = 1
            r2.repeatMode = r0
            r2.delay = r3
            r2.duration = r5
            return
    }

    public MotionTiming(long r3, long r5, android.animation.TimeInterpolator r7) {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.delay = r0
            r0 = 300(0x12c, double:1.48E-321)
            r2.duration = r0
            r0 = 0
            r2.interpolator = r0
            r0 = 0
            r2.repeatCount = r0
            r0 = 1
            r2.repeatMode = r0
            r2.delay = r3
            r2.duration = r5
            r2.interpolator = r7
            return
    }

    static android.support.design.animation.MotionTiming createFromAnimator(android.animation.ValueAnimator r7) {
            android.support.design.animation.MotionTiming r6 = new android.support.design.animation.MotionTiming
            long r1 = r7.getStartDelay()
            long r3 = r7.getDuration()
            android.animation.TimeInterpolator r5 = getInterpolatorCompat(r7)
            r0 = r6
            r0.<init>(r1, r3, r5)
            int r0 = r7.getRepeatCount()
            r6.repeatCount = r0
            int r7 = r7.getRepeatMode()
            r6.repeatMode = r7
            return r6
    }

    private static android.animation.TimeInterpolator getInterpolatorCompat(android.animation.ValueAnimator r1) {
            android.animation.TimeInterpolator r1 = r1.getInterpolator()
            boolean r0 = r1 instanceof android.view.animation.AccelerateDecelerateInterpolator
            if (r0 != 0) goto L19
            if (r1 != 0) goto Lb
            goto L19
        Lb:
            boolean r0 = r1 instanceof android.view.animation.AccelerateInterpolator
            if (r0 == 0) goto L12
            android.animation.TimeInterpolator r1 = android.support.design.animation.AnimationUtils.FAST_OUT_LINEAR_IN_INTERPOLATOR
            return r1
        L12:
            boolean r0 = r1 instanceof android.view.animation.DecelerateInterpolator
            if (r0 == 0) goto L18
            android.animation.TimeInterpolator r1 = android.support.design.animation.AnimationUtils.LINEAR_OUT_SLOW_IN_INTERPOLATOR
        L18:
            return r1
        L19:
            android.animation.TimeInterpolator r1 = android.support.design.animation.AnimationUtils.FAST_OUT_SLOW_IN_INTERPOLATOR
            return r1
    }

    public void apply(android.animation.Animator r3) {
            r2 = this;
            long r0 = r2.getDelay()
            r3.setStartDelay(r0)
            long r0 = r2.getDuration()
            r3.setDuration(r0)
            android.animation.TimeInterpolator r0 = r2.getInterpolator()
            r3.setInterpolator(r0)
            boolean r0 = r3 instanceof android.animation.ValueAnimator
            if (r0 == 0) goto L29
            android.animation.ValueAnimator r3 = (android.animation.ValueAnimator) r3
            int r0 = r2.getRepeatCount()
            r3.setRepeatCount(r0)
            int r0 = r2.getRepeatMode()
            r3.setRepeatMode(r0)
        L29:
            return
    }

    public boolean equals(java.lang.Object r6) {
            r5 = this;
            if (r5 != r6) goto L4
            r6 = 1
            return r6
        L4:
            r0 = 0
            if (r6 == 0) goto L59
            java.lang.Class r1 = r5.getClass()
            java.lang.Class r2 = r6.getClass()
            if (r1 == r2) goto L12
            goto L59
        L12:
            android.support.design.animation.MotionTiming r6 = (android.support.design.animation.MotionTiming) r6
            long r1 = r5.getDelay()
            long r3 = r6.getDelay()
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto L21
            return r0
        L21:
            long r1 = r5.getDuration()
            long r3 = r6.getDuration()
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto L2e
            return r0
        L2e:
            int r1 = r5.getRepeatCount()
            int r2 = r6.getRepeatCount()
            if (r1 == r2) goto L39
            return r0
        L39:
            int r1 = r5.getRepeatMode()
            int r2 = r6.getRepeatMode()
            if (r1 == r2) goto L44
            return r0
        L44:
            android.animation.TimeInterpolator r0 = r5.getInterpolator()
            java.lang.Class r0 = r0.getClass()
            android.animation.TimeInterpolator r6 = r6.getInterpolator()
            java.lang.Class r6 = r6.getClass()
            boolean r6 = r0.equals(r6)
            return r6
        L59:
            return r0
    }

    public long getDelay() {
            r2 = this;
            long r0 = r2.delay
            return r0
    }

    public long getDuration() {
            r2 = this;
            long r0 = r2.duration
            return r0
    }

    public android.animation.TimeInterpolator getInterpolator() {
            r1 = this;
            android.animation.TimeInterpolator r0 = r1.interpolator
            if (r0 == 0) goto L5
            goto L7
        L5:
            android.animation.TimeInterpolator r0 = android.support.design.animation.AnimationUtils.FAST_OUT_SLOW_IN_INTERPOLATOR
        L7:
            return r0
    }

    public int getRepeatCount() {
            r1 = this;
            int r0 = r1.repeatCount
            return r0
    }

    public int getRepeatMode() {
            r1 = this;
            int r0 = r1.repeatMode
            return r0
    }

    public int hashCode() {
            r7 = this;
            long r0 = r7.getDelay()
            long r2 = r7.getDelay()
            r4 = 32
            long r2 = r2 >>> r4
            long r0 = r0 ^ r2
            int r0 = (int) r0
            int r0 = r0 * 31
            long r1 = r7.getDuration()
            long r5 = r7.getDuration()
            long r3 = r5 >>> r4
            long r1 = r1 ^ r3
            int r1 = (int) r1
            int r0 = r0 + r1
            int r0 = r0 * 31
            android.animation.TimeInterpolator r1 = r7.getInterpolator()
            java.lang.Class r1 = r1.getClass()
            int r1 = r1.hashCode()
            int r0 = r0 + r1
            int r0 = r0 * 31
            int r1 = r7.getRepeatCount()
            int r0 = r0 + r1
            int r0 = r0 * 31
            int r1 = r7.getRepeatMode()
            int r0 = r0 + r1
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 10
            r0.append(r1)
            java.lang.Class r1 = r3.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            r1 = 123(0x7b, float:1.72E-43)
            r0.append(r1)
            int r1 = java.lang.System.identityHashCode(r3)
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
            java.lang.String r1 = " delay: "
            r0.append(r1)
            long r1 = r3.getDelay()
            r0.append(r1)
            java.lang.String r1 = " duration: "
            r0.append(r1)
            long r1 = r3.getDuration()
            r0.append(r1)
            java.lang.String r1 = " interpolator: "
            r0.append(r1)
            android.animation.TimeInterpolator r1 = r3.getInterpolator()
            java.lang.Class r1 = r1.getClass()
            r0.append(r1)
            java.lang.String r1 = " repeatCount: "
            r0.append(r1)
            int r1 = r3.getRepeatCount()
            r0.append(r1)
            java.lang.String r1 = " repeatMode: "
            r0.append(r1)
            int r1 = r3.getRepeatMode()
            r0.append(r1)
            java.lang.String r1 = "}\n"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
