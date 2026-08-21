package android.support.design.widget;

public class DrawableUtils {
    private static final java.lang.String LOG_TAG = "DrawableUtils";
    private static java.lang.reflect.Method setConstantStateMethod;
    private static boolean setConstantStateMethodFetched;

    private DrawableUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean setContainerConstantState(android.graphics.drawable.DrawableContainer r0, android.graphics.drawable.Drawable.ConstantState r1) {
            boolean r0 = setContainerConstantStateV9(r0, r1)
            return r0
    }

    private static boolean setContainerConstantStateV9(android.graphics.drawable.DrawableContainer r7, android.graphics.drawable.Drawable.ConstantState r8) {
            boolean r0 = android.support.design.widget.DrawableUtils.setConstantStateMethodFetched
            java.lang.String r1 = "DrawableUtils"
            r2 = 0
            r3 = 1
            if (r0 != 0) goto L23
            java.lang.Class<android.graphics.drawable.DrawableContainer> r0 = android.graphics.drawable.DrawableContainer.class
            java.lang.String r4 = "setConstantState"
            java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.NoSuchMethodException -> L1c
            java.lang.Class<android.graphics.drawable.DrawableContainer$DrawableContainerState> r6 = android.graphics.drawable.DrawableContainer.DrawableContainerState.class
            r5[r2] = r6     // Catch: java.lang.NoSuchMethodException -> L1c
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r4, r5)     // Catch: java.lang.NoSuchMethodException -> L1c
            android.support.design.widget.DrawableUtils.setConstantStateMethod = r0     // Catch: java.lang.NoSuchMethodException -> L1c
            r0.setAccessible(r3)     // Catch: java.lang.NoSuchMethodException -> L1c
            goto L21
        L1c:
            java.lang.String r0 = "Could not fetch setConstantState(). Oh well."
            android.util.Log.e(r1, r0)
        L21:
            android.support.design.widget.DrawableUtils.setConstantStateMethodFetched = r3
        L23:
            java.lang.reflect.Method r0 = android.support.design.widget.DrawableUtils.setConstantStateMethod
            if (r0 == 0) goto L34
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L2f
            r4[r2] = r8     // Catch: java.lang.Exception -> L2f
            r0.invoke(r7, r4)     // Catch: java.lang.Exception -> L2f
            return r3
        L2f:
            java.lang.String r7 = "Could not invoke setConstantState(). Oh well."
            android.util.Log.e(r1, r7)
        L34:
            return r2
    }
}
