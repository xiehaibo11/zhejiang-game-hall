package android.support.transition;

class ViewUtils {
    static final android.util.Property<android.view.View, android.graphics.Rect> CLIP_BOUNDS = null;
    private static final android.support.transition.ViewUtilsBase IMPL = null;
    private static final java.lang.String TAG = "ViewUtils";
    static final android.util.Property<android.view.View, java.lang.Float> TRANSITION_ALPHA = null;
    private static final int VISIBILITY_MASK = 12;
    private static java.lang.reflect.Field sViewFlagsField;
    private static boolean sViewFlagsFieldFetched;



    static {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 22
            if (r0 < r1) goto Le
            android.support.transition.ViewUtilsApi22 r0 = new android.support.transition.ViewUtilsApi22
            r0.<init>()
            android.support.transition.ViewUtils.IMPL = r0
            goto L31
        Le:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L1c
            android.support.transition.ViewUtilsApi21 r0 = new android.support.transition.ViewUtilsApi21
            r0.<init>()
            android.support.transition.ViewUtils.IMPL = r0
            goto L31
        L1c:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L2a
            android.support.transition.ViewUtilsApi19 r0 = new android.support.transition.ViewUtilsApi19
            r0.<init>()
            android.support.transition.ViewUtils.IMPL = r0
            goto L31
        L2a:
            android.support.transition.ViewUtilsBase r0 = new android.support.transition.ViewUtilsBase
            r0.<init>()
            android.support.transition.ViewUtils.IMPL = r0
        L31:
            android.support.transition.ViewUtils$1 r0 = new android.support.transition.ViewUtils$1
            java.lang.Class<java.lang.Float> r1 = java.lang.Float.class
            java.lang.String r2 = "translationAlpha"
            r0.<init>(r1, r2)
            android.support.transition.ViewUtils.TRANSITION_ALPHA = r0
            android.support.transition.ViewUtils$2 r0 = new android.support.transition.ViewUtils$2
            java.lang.Class<android.graphics.Rect> r1 = android.graphics.Rect.class
            java.lang.String r2 = "clipBounds"
            r0.<init>(r1, r2)
            android.support.transition.ViewUtils.CLIP_BOUNDS = r0
            return
    }

    private ViewUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    static void clearNonTransitionAlpha(android.view.View r1) {
            android.support.transition.ViewUtilsBase r0 = android.support.transition.ViewUtils.IMPL
            r0.clearNonTransitionAlpha(r1)
            return
    }

    private static void fetchViewFlagsField() {
            boolean r0 = android.support.transition.ViewUtils.sViewFlagsFieldFetched
            if (r0 != 0) goto L1c
            r0 = 1
            java.lang.Class<android.view.View> r1 = android.view.View.class
            java.lang.String r2 = "mViewFlags"
            java.lang.reflect.Field r1 = r1.getDeclaredField(r2)     // Catch: java.lang.NoSuchFieldException -> L13
            android.support.transition.ViewUtils.sViewFlagsField = r1     // Catch: java.lang.NoSuchFieldException -> L13
            r1.setAccessible(r0)     // Catch: java.lang.NoSuchFieldException -> L13
            goto L1a
        L13:
            java.lang.String r1 = "ViewUtils"
            java.lang.String r2 = "fetchViewFlagsField: "
            android.util.Log.i(r1, r2)
        L1a:
            android.support.transition.ViewUtils.sViewFlagsFieldFetched = r0
        L1c:
            return
    }

    static android.support.transition.ViewOverlayImpl getOverlay(android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto Lc
            android.support.transition.ViewOverlayApi18 r0 = new android.support.transition.ViewOverlayApi18
            r0.<init>(r2)
            return r0
        Lc:
            android.support.transition.ViewOverlayApi14 r2 = android.support.transition.ViewOverlayApi14.createFrom(r2)
            return r2
    }

    static float getTransitionAlpha(android.view.View r1) {
            android.support.transition.ViewUtilsBase r0 = android.support.transition.ViewUtils.IMPL
            float r1 = r0.getTransitionAlpha(r1)
            return r1
    }

    static android.support.transition.WindowIdImpl getWindowId(android.view.View r2) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 18
            if (r0 < r1) goto Lc
            android.support.transition.WindowIdApi18 r0 = new android.support.transition.WindowIdApi18
            r0.<init>(r2)
            return r0
        Lc:
            android.support.transition.WindowIdApi14 r0 = new android.support.transition.WindowIdApi14
            android.os.IBinder r2 = r2.getWindowToken()
            r0.<init>(r2)
            return r0
    }

    static void saveNonTransitionAlpha(android.view.View r1) {
            android.support.transition.ViewUtilsBase r0 = android.support.transition.ViewUtils.IMPL
            r0.saveNonTransitionAlpha(r1)
            return
    }

    static void setAnimationMatrix(android.view.View r1, android.graphics.Matrix r2) {
            android.support.transition.ViewUtilsBase r0 = android.support.transition.ViewUtils.IMPL
            r0.setAnimationMatrix(r1, r2)
            return
    }

    static void setLeftTopRightBottom(android.view.View r6, int r7, int r8, int r9, int r10) {
            android.support.transition.ViewUtilsBase r0 = android.support.transition.ViewUtils.IMPL
            r1 = r6
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r0.setLeftTopRightBottom(r1, r2, r3, r4, r5)
            return
    }

    static void setTransitionAlpha(android.view.View r1, float r2) {
            android.support.transition.ViewUtilsBase r0 = android.support.transition.ViewUtils.IMPL
            r0.setTransitionAlpha(r1, r2)
            return
    }

    static void setTransitionVisibility(android.view.View r2, int r3) {
            fetchViewFlagsField()
            java.lang.reflect.Field r0 = android.support.transition.ViewUtils.sViewFlagsField
            if (r0 == 0) goto L13
            int r0 = r0.getInt(r2)     // Catch: java.lang.IllegalAccessException -> L13
            java.lang.reflect.Field r1 = android.support.transition.ViewUtils.sViewFlagsField     // Catch: java.lang.IllegalAccessException -> L13
            r0 = r0 & (-13)
            r3 = r3 | r0
            r1.setInt(r2, r3)     // Catch: java.lang.IllegalAccessException -> L13
        L13:
            return
    }

    static void transformMatrixToGlobal(android.view.View r1, android.graphics.Matrix r2) {
            android.support.transition.ViewUtilsBase r0 = android.support.transition.ViewUtils.IMPL
            r0.transformMatrixToGlobal(r1, r2)
            return
    }

    static void transformMatrixToLocal(android.view.View r1, android.graphics.Matrix r2) {
            android.support.transition.ViewUtilsBase r0 = android.support.transition.ViewUtils.IMPL
            r0.transformMatrixToLocal(r1, r2)
            return
    }
}
