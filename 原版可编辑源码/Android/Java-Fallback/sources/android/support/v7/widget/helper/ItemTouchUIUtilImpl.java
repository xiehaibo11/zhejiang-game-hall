package android.support.v7.widget.helper;

class ItemTouchUIUtilImpl implements android.support.v7.widget.helper.ItemTouchUIUtil {
    static final android.support.v7.widget.helper.ItemTouchUIUtil INSTANCE = null;

    static {
            android.support.v7.widget.helper.ItemTouchUIUtilImpl r0 = new android.support.v7.widget.helper.ItemTouchUIUtilImpl
            r0.<init>()
            android.support.v7.widget.helper.ItemTouchUIUtilImpl.INSTANCE = r0
            return
    }

    ItemTouchUIUtilImpl() {
            r0 = this;
            r0.<init>()
            return
    }

    private static float findMaxElevation(android.support.v7.widget.RecyclerView r5, android.view.View r6) {
            int r0 = r5.getChildCount()
            r1 = 0
            r2 = 0
        L6:
            if (r2 >= r0) goto L1b
            android.view.View r3 = r5.getChildAt(r2)
            if (r3 != r6) goto Lf
            goto L18
        Lf:
            float r3 = android.support.v4.view.ViewCompat.getElevation(r3)
            int r4 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r4 <= 0) goto L18
            r1 = r3
        L18:
            int r2 = r2 + 1
            goto L6
        L1b:
            return r1
    }

    @Override
    public void clearView(android.view.View r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L21
            int r0 = android.support.v7.recyclerview.R.id.item_touch_helper_previous_elevation
            java.lang.Object r0 = r3.getTag(r0)
            if (r0 == 0) goto L1b
            boolean r1 = r0 instanceof java.lang.Float
            if (r1 == 0) goto L1b
            java.lang.Float r0 = (java.lang.Float) r0
            float r0 = r0.floatValue()
            android.support.v4.view.ViewCompat.setElevation(r3, r0)
        L1b:
            int r0 = android.support.v7.recyclerview.R.id.item_touch_helper_previous_elevation
            r1 = 0
            r3.setTag(r0, r1)
        L21:
            r0 = 0
            r3.setTranslationX(r0)
            r3.setTranslationY(r0)
            return
    }

    @Override
    public void onDraw(android.graphics.Canvas r1, android.support.v7.widget.RecyclerView r2, android.view.View r3, float r4, float r5, int r6, boolean r7) {
            r0 = this;
            int r1 = android.os.Build.VERSION.SDK_INT
            r6 = 21
            if (r1 < r6) goto L27
            if (r7 == 0) goto L27
            int r1 = android.support.v7.recyclerview.R.id.item_touch_helper_previous_elevation
            java.lang.Object r1 = r3.getTag(r1)
            if (r1 != 0) goto L27
            float r1 = android.support.v4.view.ViewCompat.getElevation(r3)
            java.lang.Float r1 = java.lang.Float.valueOf(r1)
            r6 = 1065353216(0x3f800000, float:1.0)
            float r2 = findMaxElevation(r2, r3)
            float r2 = r2 + r6
            android.support.v4.view.ViewCompat.setElevation(r3, r2)
            int r2 = android.support.v7.recyclerview.R.id.item_touch_helper_previous_elevation
            r3.setTag(r2, r1)
        L27:
            r3.setTranslationX(r4)
            r3.setTranslationY(r5)
            return
    }

    @Override
    public void onDrawOver(android.graphics.Canvas r1, android.support.v7.widget.RecyclerView r2, android.view.View r3, float r4, float r5, int r6, boolean r7) {
            r0 = this;
            return
    }

    @Override
    public void onSelected(android.view.View r1) {
            r0 = this;
            return
    }
}
