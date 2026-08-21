package android.support.design.transformation;

public abstract class ExpandableBehavior extends android.support.design.widget.CoordinatorLayout.Behavior<android.view.View> {
    private static final int STATE_COLLAPSED = 2;
    private static final int STATE_EXPANDED = 1;
    private static final int STATE_UNINITIALIZED = 0;
    private int currentState;


    public ExpandableBehavior() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.currentState = r0
            return
    }

    public ExpandableBehavior(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r1 = 0
            r0.currentState = r1
            return
    }

    static int access$000(android.support.design.transformation.ExpandableBehavior r0) {
            int r0 = r0.currentState
            return r0
    }

    private boolean didStateChange(boolean r4) {
            r3 = this;
            r0 = 0
            r1 = 1
            if (r4 == 0) goto Ld
            int r4 = r3.currentState
            if (r4 == 0) goto Lb
            r2 = 2
            if (r4 != r2) goto Lc
        Lb:
            r0 = r1
        Lc:
            return r0
        Ld:
            int r4 = r3.currentState
            if (r4 != r1) goto L12
            r0 = r1
        L12:
            return r0
    }

    public static <T extends android.support.design.transformation.ExpandableBehavior> T from(android.view.View r1, java.lang.Class<T> r2) {
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
            boolean r0 = r1 instanceof android.support.design.widget.CoordinatorLayout.LayoutParams
            if (r0 == 0) goto L21
            android.support.design.widget.CoordinatorLayout$LayoutParams r1 = (android.support.design.widget.CoordinatorLayout.LayoutParams) r1
            android.support.design.widget.CoordinatorLayout$Behavior r1 = r1.getBehavior()
            boolean r0 = r1 instanceof android.support.design.transformation.ExpandableBehavior
            if (r0 == 0) goto L19
            java.lang.Object r1 = r2.cast(r1)
            android.support.design.transformation.ExpandableBehavior r1 = (android.support.design.transformation.ExpandableBehavior) r1
            return r1
        L19:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "The view is not associated with ExpandableBehavior"
            r1.<init>(r2)
            throw r1
        L21:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "The view is not a child of CoordinatorLayout"
            r1.<init>(r2)
            throw r1
    }

    protected android.support.design.expandable.ExpandableWidget findExpandableWidget(android.support.design.widget.CoordinatorLayout r6, android.view.View r7) {
            r5 = this;
            java.util.List r0 = r6.getDependencies(r7)
            int r1 = r0.size()
            r2 = 0
        L9:
            if (r2 >= r1) goto L1d
            java.lang.Object r3 = r0.get(r2)
            android.view.View r3 = (android.view.View) r3
            boolean r4 = r5.layoutDependsOn(r6, r7, r3)
            if (r4 == 0) goto L1a
            android.support.design.expandable.ExpandableWidget r3 = (android.support.design.expandable.ExpandableWidget) r3
            return r3
        L1a:
            int r2 = r2 + 1
            goto L9
        L1d:
            r6 = 0
            return r6
    }

    @Override
    public abstract boolean layoutDependsOn(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, android.view.View r3);

    @Override
    public boolean onDependentViewChanged(android.support.design.widget.CoordinatorLayout r2, android.view.View r3, android.view.View r4) {
            r1 = this;
            android.support.design.expandable.ExpandableWidget r4 = (android.support.design.expandable.ExpandableWidget) r4
            boolean r2 = r4.isExpanded()
            boolean r2 = r1.didStateChange(r2)
            if (r2 == 0) goto L24
            boolean r2 = r4.isExpanded()
            r0 = 1
            if (r2 == 0) goto L15
            r2 = r0
            goto L16
        L15:
            r2 = 2
        L16:
            r1.currentState = r2
            r2 = r4
            android.view.View r2 = (android.view.View) r2
            boolean r4 = r4.isExpanded()
            boolean r2 = r1.onExpandedStateChange(r2, r3, r4, r0)
            return r2
        L24:
            r2 = 0
            return r2
    }

    protected abstract boolean onExpandedStateChange(android.view.View r1, android.view.View r2, boolean r3, boolean r4);

    @Override
    public boolean onLayoutChild(android.support.design.widget.CoordinatorLayout r3, android.view.View r4, int r5) {
            r2 = this;
            boolean r5 = android.support.v4.view.ViewCompat.isLaidOut(r4)
            if (r5 != 0) goto L2d
            android.support.design.expandable.ExpandableWidget r3 = r2.findExpandableWidget(r3, r4)
            if (r3 == 0) goto L2d
            boolean r5 = r3.isExpanded()
            boolean r5 = r2.didStateChange(r5)
            if (r5 == 0) goto L2d
            boolean r5 = r3.isExpanded()
            if (r5 == 0) goto L1e
            r5 = 1
            goto L1f
        L1e:
            r5 = 2
        L1f:
            r2.currentState = r5
            android.view.ViewTreeObserver r0 = r4.getViewTreeObserver()
            android.support.design.transformation.ExpandableBehavior$1 r1 = new android.support.design.transformation.ExpandableBehavior$1
            r1.<init>(r2, r4, r5, r3)
            r0.addOnPreDrawListener(r1)
        L2d:
            r3 = 0
            return r3
    }
}
