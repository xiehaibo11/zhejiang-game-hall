package android.support.transition;

class ObjectAnimatorUtils {
    private ObjectAnimatorUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    static <T> android.animation.ObjectAnimator ofPointF(T r2, android.util.Property<T, android.graphics.PointF> r3, android.graphics.Path r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lc
            r0 = 0
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofObject(r2, r3, r0, r4)
            return r2
        Lc:
            android.support.transition.PathProperty r0 = new android.support.transition.PathProperty
            r0.<init>(r3, r4)
            r3 = 2
            float[] r3 = new float[r3]
            r3 = {x001c: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            android.animation.ObjectAnimator r2 = android.animation.ObjectAnimator.ofFloat(r2, r0, r3)
            return r2
    }
}
