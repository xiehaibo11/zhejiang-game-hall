package android.support.design.transformation;

public class FabTransformationSheetBehavior extends android.support.design.transformation.FabTransformationBehavior {
    private java.util.Map<android.view.View, java.lang.Integer> importantForAccessibilityMap;

    public FabTransformationSheetBehavior() {
            r0 = this;
            r0.<init>()
            return
    }

    public FabTransformationSheetBehavior(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    private void updateImportantForAccessibility(android.view.View r9, boolean r10) {
            r8 = this;
            android.view.ViewParent r0 = r9.getParent()
            boolean r1 = r0 instanceof android.support.design.widget.CoordinatorLayout
            if (r1 != 0) goto L9
            return
        L9:
            android.support.design.widget.CoordinatorLayout r0 = (android.support.design.widget.CoordinatorLayout) r0
            int r1 = r0.getChildCount()
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 16
            if (r2 < r3) goto L1e
            if (r10 == 0) goto L1e
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>(r1)
            r8.importantForAccessibilityMap = r2
        L1e:
            r2 = 0
            r4 = r2
        L20:
            if (r4 >= r1) goto L78
            android.view.View r5 = r0.getChildAt(r4)
            android.view.ViewGroup$LayoutParams r6 = r5.getLayoutParams()
            boolean r6 = r6 instanceof android.support.design.widget.CoordinatorLayout.LayoutParams
            if (r6 == 0) goto L3e
            android.view.ViewGroup$LayoutParams r6 = r5.getLayoutParams()
            android.support.design.widget.CoordinatorLayout$LayoutParams r6 = (android.support.design.widget.CoordinatorLayout.LayoutParams) r6
            android.support.design.widget.CoordinatorLayout$Behavior r6 = r6.getBehavior()
            boolean r6 = r6 instanceof android.support.design.transformation.FabTransformationScrimBehavior
            if (r6 == 0) goto L3e
            r6 = 1
            goto L3f
        L3e:
            r6 = r2
        L3f:
            if (r5 == r9) goto L75
            if (r6 == 0) goto L44
            goto L75
        L44:
            if (r10 != 0) goto L60
            java.util.Map<android.view.View, java.lang.Integer> r6 = r8.importantForAccessibilityMap
            if (r6 == 0) goto L75
            boolean r6 = r6.containsKey(r5)
            if (r6 == 0) goto L75
            java.util.Map<android.view.View, java.lang.Integer> r6 = r8.importantForAccessibilityMap
            java.lang.Object r6 = r6.get(r5)
            java.lang.Integer r6 = (java.lang.Integer) r6
            int r6 = r6.intValue()
            android.support.v4.view.ViewCompat.setImportantForAccessibility(r5, r6)
            goto L75
        L60:
            int r6 = android.os.Build.VERSION.SDK_INT
            if (r6 < r3) goto L71
            java.util.Map<android.view.View, java.lang.Integer> r6 = r8.importantForAccessibilityMap
            int r7 = r5.getImportantForAccessibility()
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)
            r6.put(r5, r7)
        L71:
            r6 = 4
            android.support.v4.view.ViewCompat.setImportantForAccessibility(r5, r6)
        L75:
            int r4 = r4 + 1
            goto L20
        L78:
            if (r10 != 0) goto L7d
            r9 = 0
            r8.importantForAccessibilityMap = r9
        L7d:
            return
    }

    @Override
    protected android.support.design.transformation.FabTransformationBehavior.FabTransformationSpec onCreateMotionSpec(android.content.Context r3, boolean r4) {
            r2 = this;
            if (r4 == 0) goto L5
            int r4 = android.support.design.R.animator.mtrl_fab_transformation_sheet_expand_spec
            goto L7
        L5:
            int r4 = android.support.design.R.animator.mtrl_fab_transformation_sheet_collapse_spec
        L7:
            android.support.design.transformation.FabTransformationBehavior$FabTransformationSpec r0 = new android.support.design.transformation.FabTransformationBehavior$FabTransformationSpec
            r0.<init>()
            android.support.design.animation.MotionSpec r3 = android.support.design.animation.MotionSpec.createFromResource(r3, r4)
            r0.timings = r3
            android.support.design.animation.Positioning r3 = new android.support.design.animation.Positioning
            r4 = 17
            r1 = 0
            r3.<init>(r4, r1, r1)
            r0.positioning = r3
            return r0
    }

    @Override
    protected boolean onExpandedStateChange(android.view.View r1, android.view.View r2, boolean r3, boolean r4) {
            r0 = this;
            r0.updateImportantForAccessibility(r2, r3)
            boolean r1 = super.onExpandedStateChange(r1, r2, r3, r4)
            return r1
    }
}
