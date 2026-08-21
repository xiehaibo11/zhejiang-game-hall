package android.support.transition;

class ImageViewUtils {
    private static final java.lang.String TAG = "ImageViewUtils";
    private static java.lang.reflect.Method sAnimateTransformMethod;
    private static boolean sAnimateTransformMethodFetched;


    private ImageViewUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    static void animateTransform(android.widget.ImageView r3, android.graphics.Matrix r4) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 >= r1) goto La
            r3.setImageMatrix(r4)
            goto L26
        La:
            fetchAnimateTransformMethod()
            java.lang.reflect.Method r0 = android.support.transition.ImageViewUtils.sAnimateTransformMethod
            if (r0 == 0) goto L26
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.reflect.InvocationTargetException -> L1b java.lang.IllegalAccessException -> L26
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.reflect.InvocationTargetException -> L1b java.lang.IllegalAccessException -> L26
            r0.invoke(r3, r1)     // Catch: java.lang.reflect.InvocationTargetException -> L1b java.lang.IllegalAccessException -> L26
            goto L26
        L1b:
            r3 = move-exception
            java.lang.RuntimeException r4 = new java.lang.RuntimeException
            java.lang.Throwable r3 = r3.getCause()
            r4.<init>(r3)
            throw r4
        L26:
            return
    }

    private static void fetchAnimateTransformMethod() {
            boolean r0 = android.support.transition.ImageViewUtils.sAnimateTransformMethodFetched
            if (r0 != 0) goto L24
            r0 = 1
            java.lang.Class<android.widget.ImageView> r1 = android.widget.ImageView.class
            java.lang.String r2 = "animateTransform"
            java.lang.Class[] r3 = new java.lang.Class[r0]     // Catch: java.lang.NoSuchMethodException -> L1a
            r4 = 0
            java.lang.Class<android.graphics.Matrix> r5 = android.graphics.Matrix.class
            r3[r4] = r5     // Catch: java.lang.NoSuchMethodException -> L1a
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r2, r3)     // Catch: java.lang.NoSuchMethodException -> L1a
            android.support.transition.ImageViewUtils.sAnimateTransformMethod = r1     // Catch: java.lang.NoSuchMethodException -> L1a
            r1.setAccessible(r0)     // Catch: java.lang.NoSuchMethodException -> L1a
            goto L22
        L1a:
            r1 = move-exception
            java.lang.String r2 = "ImageViewUtils"
            java.lang.String r3 = "Failed to retrieve animateTransform method"
            android.util.Log.i(r2, r3, r1)
        L22:
            android.support.transition.ImageViewUtils.sAnimateTransformMethodFetched = r0
        L24:
            return
    }

    static void reserveEndAnimateTransform(android.widget.ImageView r2, android.animation.Animator r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 >= r1) goto Le
            android.support.transition.ImageViewUtils$1 r0 = new android.support.transition.ImageViewUtils$1
            r0.<init>(r2)
            r3.addListener(r0)
        Le:
            return
    }

    static void startAnimateTransform(android.widget.ImageView r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 >= r1) goto L27
            android.widget.ImageView$ScaleType r0 = r2.getScaleType()
            int r1 = android.support.transition.R.id.save_scale_type
            r2.setTag(r1, r0)
            android.widget.ImageView$ScaleType r1 = android.widget.ImageView.ScaleType.MATRIX
            if (r0 != r1) goto L1d
            int r0 = android.support.transition.R.id.save_image_matrix
            android.graphics.Matrix r1 = r2.getImageMatrix()
            r2.setTag(r0, r1)
            goto L22
        L1d:
            android.widget.ImageView$ScaleType r0 = android.widget.ImageView.ScaleType.MATRIX
            r2.setScaleType(r0)
        L22:
            android.graphics.Matrix r0 = android.support.transition.MatrixUtils.IDENTITY_MATRIX
            r2.setImageMatrix(r0)
        L27:
            return
    }
}
