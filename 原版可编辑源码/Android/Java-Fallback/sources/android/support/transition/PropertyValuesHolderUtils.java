package android.support.transition;

class PropertyValuesHolderUtils {
    private PropertyValuesHolderUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.animation.PropertyValuesHolder ofPointF(android.util.Property<?, android.graphics.PointF> r2, android.graphics.Path r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lc
            r0 = 0
            android.animation.PropertyValuesHolder r2 = android.animation.PropertyValuesHolder.ofObject(r2, r0, r3)
            return r2
        Lc:
            android.support.transition.PathProperty r0 = new android.support.transition.PathProperty
            r0.<init>(r2, r3)
            r2 = 2
            float[] r2 = new float[r2]
            r2 = {x001c: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
            android.animation.PropertyValuesHolder r2 = android.animation.PropertyValuesHolder.ofFloat(r0, r2)
            return r2
    }
}
