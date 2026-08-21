package android.support.design.animation;

public class MotionSpec {
    private static final java.lang.String TAG = "MotionSpec";
    private final android.support.v4.util.SimpleArrayMap<java.lang.String, android.support.design.animation.MotionTiming> timings;

    public MotionSpec() {
            r1 = this;
            r1.<init>()
            android.support.v4.util.SimpleArrayMap r0 = new android.support.v4.util.SimpleArrayMap
            r0.<init>()
            r1.timings = r0
            return
    }

    private static void addTimingFromAnimator(android.support.design.animation.MotionSpec r2, android.animation.Animator r3) {
            boolean r0 = r3 instanceof android.animation.ObjectAnimator
            if (r0 == 0) goto L12
            android.animation.ObjectAnimator r3 = (android.animation.ObjectAnimator) r3
            java.lang.String r0 = r3.getPropertyName()
            android.support.design.animation.MotionTiming r3 = android.support.design.animation.MotionTiming.createFromAnimator(r3)
            r2.setTiming(r0, r3)
            return
        L12:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Animator must be an ObjectAnimator: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.<init>(r3)
            throw r2
    }

    public static android.support.design.animation.MotionSpec createFromAttribute(android.content.Context r1, android.content.res.TypedArray r2, int r3) {
            boolean r0 = r2.hasValue(r3)
            if (r0 == 0) goto L12
            r0 = 0
            int r2 = r2.getResourceId(r3, r0)
            if (r2 == 0) goto L12
            android.support.design.animation.MotionSpec r1 = createFromResource(r1, r2)
            return r1
        L12:
            r1 = 0
            return r1
    }

    public static android.support.design.animation.MotionSpec createFromResource(android.content.Context r3, int r4) {
            r0 = 0
            android.animation.Animator r3 = android.animation.AnimatorInflater.loadAnimator(r3, r4)     // Catch: java.lang.Exception -> L24
            boolean r1 = r3 instanceof android.animation.AnimatorSet     // Catch: java.lang.Exception -> L24
            if (r1 == 0) goto L14
            android.animation.AnimatorSet r3 = (android.animation.AnimatorSet) r3     // Catch: java.lang.Exception -> L24
            java.util.ArrayList r3 = r3.getChildAnimations()     // Catch: java.lang.Exception -> L24
            android.support.design.animation.MotionSpec r3 = createSpecFromAnimators(r3)     // Catch: java.lang.Exception -> L24
            return r3
        L14:
            if (r3 == 0) goto L23
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Exception -> L24
            r1.<init>()     // Catch: java.lang.Exception -> L24
            r1.add(r3)     // Catch: java.lang.Exception -> L24
            android.support.design.animation.MotionSpec r3 = createSpecFromAnimators(r1)     // Catch: java.lang.Exception -> L24
            return r3
        L23:
            return r0
        L24:
            r3 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Can't load animation resource ID #0x"
            r1.append(r2)
            java.lang.String r4 = java.lang.Integer.toHexString(r4)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = "MotionSpec"
            android.util.Log.w(r1, r4, r3)
            return r0
    }

    private static android.support.design.animation.MotionSpec createSpecFromAnimators(java.util.List<android.animation.Animator> r4) {
            android.support.design.animation.MotionSpec r0 = new android.support.design.animation.MotionSpec
            r0.<init>()
            int r1 = r4.size()
            r2 = 0
        La:
            if (r2 >= r1) goto L18
            java.lang.Object r3 = r4.get(r2)
            android.animation.Animator r3 = (android.animation.Animator) r3
            addTimingFromAnimator(r0, r3)
            int r2 = r2 + 1
            goto La
        L18:
            return r0
    }

    public boolean equals(java.lang.Object r3) {
            r2 = this;
            if (r2 != r3) goto L4
            r3 = 1
            return r3
        L4:
            if (r3 == 0) goto L1c
            java.lang.Class r0 = r2.getClass()
            java.lang.Class r1 = r3.getClass()
            if (r0 == r1) goto L11
            goto L1c
        L11:
            android.support.design.animation.MotionSpec r3 = (android.support.design.animation.MotionSpec) r3
            android.support.v4.util.SimpleArrayMap<java.lang.String, android.support.design.animation.MotionTiming> r0 = r2.timings
            android.support.v4.util.SimpleArrayMap<java.lang.String, android.support.design.animation.MotionTiming> r3 = r3.timings
            boolean r3 = r0.equals(r3)
            return r3
        L1c:
            r3 = 0
            return r3
    }

    public android.support.design.animation.MotionTiming getTiming(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.hasTiming(r2)
            if (r0 == 0) goto Lf
            android.support.v4.util.SimpleArrayMap<java.lang.String, android.support.design.animation.MotionTiming> r0 = r1.timings
            java.lang.Object r2 = r0.get(r2)
            android.support.design.animation.MotionTiming r2 = (android.support.design.animation.MotionTiming) r2
            return r2
        Lf:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            r2.<init>()
            throw r2
    }

    public long getTotalDuration() {
            r9 = this;
            android.support.v4.util.SimpleArrayMap<java.lang.String, android.support.design.animation.MotionTiming> r0 = r9.timings
            int r0 = r0.size()
            r1 = 0
            r3 = 0
        L9:
            if (r3 >= r0) goto L23
            android.support.v4.util.SimpleArrayMap<java.lang.String, android.support.design.animation.MotionTiming> r4 = r9.timings
            java.lang.Object r4 = r4.valueAt(r3)
            android.support.design.animation.MotionTiming r4 = (android.support.design.animation.MotionTiming) r4
            long r5 = r4.getDelay()
            long r7 = r4.getDuration()
            long r5 = r5 + r7
            long r1 = java.lang.Math.max(r1, r5)
            int r3 = r3 + 1
            goto L9
        L23:
            return r1
    }

    public boolean hasTiming(java.lang.String r2) {
            r1 = this;
            android.support.v4.util.SimpleArrayMap<java.lang.String, android.support.design.animation.MotionTiming> r0 = r1.timings
            java.lang.Object r2 = r0.get(r2)
            if (r2 == 0) goto La
            r2 = 1
            goto Lb
        La:
            r2 = 0
        Lb:
            return r2
    }

    public int hashCode() {
            r1 = this;
            android.support.v4.util.SimpleArrayMap<java.lang.String, android.support.design.animation.MotionTiming> r0 = r1.timings
            int r0 = r0.hashCode()
            return r0
    }

    public void setTiming(java.lang.String r2, android.support.design.animation.MotionTiming r3) {
            r1 = this;
            android.support.v4.util.SimpleArrayMap<java.lang.String, android.support.design.animation.MotionTiming> r0 = r1.timings
            r0.put(r2, r3)
            return
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 10
            r0.append(r1)
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            r1 = 123(0x7b, float:1.72E-43)
            r0.append(r1)
            int r1 = java.lang.System.identityHashCode(r2)
            java.lang.String r1 = java.lang.Integer.toHexString(r1)
            r0.append(r1)
            java.lang.String r1 = " timings: "
            r0.append(r1)
            android.support.v4.util.SimpleArrayMap<java.lang.String, android.support.design.animation.MotionTiming> r1 = r2.timings
            r0.append(r1)
            java.lang.String r1 = "}\n"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
