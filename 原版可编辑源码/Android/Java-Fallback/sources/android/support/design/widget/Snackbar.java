package android.support.design.widget;

public final class Snackbar extends android.support.design.widget.BaseTransientBottomBar<android.support.design.widget.Snackbar> {
    public static final int LENGTH_INDEFINITE = -2;
    public static final int LENGTH_LONG = 0;
    public static final int LENGTH_SHORT = -1;
    private static final int[] SNACKBAR_BUTTON_STYLE_ATTR = null;
    private final android.view.accessibility.AccessibilityManager accessibilityManager;
    private android.support.design.widget.BaseTransientBottomBar.BaseCallback<android.support.design.widget.Snackbar> callback;
    private boolean hasAction;


    public static class Callback extends android.support.design.widget.BaseTransientBottomBar.BaseCallback<android.support.design.widget.Snackbar> {
        public static final int DISMISS_EVENT_ACTION = 1;
        public static final int DISMISS_EVENT_CONSECUTIVE = 4;
        public static final int DISMISS_EVENT_MANUAL = 3;
        public static final int DISMISS_EVENT_SWIPE = 0;
        public static final int DISMISS_EVENT_TIMEOUT = 2;

        public Callback() {
                r0 = this;
                r0.<init>()
                return
        }

        public void onDismissed(android.support.design.widget.Snackbar r1, int r2) {
                r0 = this;
                return
        }

        @Override
        public void onDismissed(android.support.design.widget.Snackbar r1, int r2) {
                r0 = this;
                android.support.design.widget.Snackbar r1 = (android.support.design.widget.Snackbar) r1
                r0.onDismissed(r1, r2)
                return
        }

        public void onShown(android.support.design.widget.Snackbar r1) {
                r0 = this;
                return
        }

        @Override
        public void onShown(android.support.design.widget.Snackbar r1) {
                r0 = this;
                android.support.design.widget.Snackbar r1 = (android.support.design.widget.Snackbar) r1
                r0.onShown(r1)
                return
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface Duration {
    }

    public static final class SnackbarLayout extends android.support.design.widget.BaseTransientBottomBar.SnackbarBaseLayout {
        public SnackbarLayout(android.content.Context r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public SnackbarLayout(android.content.Context r1, android.util.AttributeSet r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        @Override
        protected void onMeasure(int r6, int r7) {
                r5 = this;
                super.onMeasure(r6, r7)
                int r6 = r5.getChildCount()
                int r7 = r5.getMeasuredWidth()
                int r0 = r5.getPaddingLeft()
                int r7 = r7 - r0
                int r0 = r5.getPaddingRight()
                int r7 = r7 - r0
                r0 = 0
            L16:
                if (r0 >= r6) goto L39
                android.view.View r1 = r5.getChildAt(r0)
                android.view.ViewGroup$LayoutParams r2 = r1.getLayoutParams()
                int r2 = r2.width
                r3 = -1
                if (r2 != r3) goto L36
                r2 = 1073741824(0x40000000, float:2.0)
                int r3 = android.view.View.MeasureSpec.makeMeasureSpec(r7, r2)
                int r4 = r1.getMeasuredHeight()
                int r2 = android.view.View.MeasureSpec.makeMeasureSpec(r4, r2)
                r1.measure(r3, r2)
            L36:
                int r0 = r0 + 1
                goto L16
            L39:
                return
        }
    }

    static {
            r0 = 1
            int[] r0 = new int[r0]
            int r1 = android.support.design.R.attr.snackbarButtonStyle
            r2 = 0
            r0[r2] = r1
            android.support.design.widget.Snackbar.SNACKBAR_BUTTON_STYLE_ATTR = r0
            return
    }

    private Snackbar(android.view.ViewGroup r1, android.view.View r2, android.support.design.snackbar.ContentViewCallback r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            android.content.Context r1 = r1.getContext()
            java.lang.String r2 = "accessibility"
            java.lang.Object r1 = r1.getSystemService(r2)
            android.view.accessibility.AccessibilityManager r1 = (android.view.accessibility.AccessibilityManager) r1
            r0.accessibilityManager = r1
            return
    }

    private static android.view.ViewGroup findSuitableParent(android.view.View r3) {
            r0 = 0
            r1 = r0
        L2:
            boolean r2 = r3 instanceof android.support.design.widget.CoordinatorLayout
            if (r2 == 0) goto L9
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            return r3
        L9:
            boolean r2 = r3 instanceof android.widget.FrameLayout
            if (r2 == 0) goto L1c
            int r1 = r3.getId()
            r2 = 16908290(0x1020002, float:2.3877235E-38)
            if (r1 != r2) goto L19
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            return r3
        L19:
            r1 = r3
            android.view.ViewGroup r1 = (android.view.ViewGroup) r1
        L1c:
            if (r3 == 0) goto L2a
            android.view.ViewParent r3 = r3.getParent()
            boolean r2 = r3 instanceof android.view.View
            if (r2 == 0) goto L29
            android.view.View r3 = (android.view.View) r3
            goto L2a
        L29:
            r3 = r0
        L2a:
            if (r3 != 0) goto L2
            return r1
    }

    protected static boolean hasSnackbarButtonStyleAttr(android.content.Context r3) {
            int[] r0 = android.support.design.widget.Snackbar.SNACKBAR_BUTTON_STYLE_ATTR
            android.content.res.TypedArray r3 = r3.obtainStyledAttributes(r0)
            r0 = -1
            r1 = 0
            int r2 = r3.getResourceId(r1, r0)
            r3.recycle()
            if (r2 == r0) goto L12
            r1 = 1
        L12:
            return r1
    }

    public static android.support.design.widget.Snackbar make(android.view.View r1, int r2, int r3) {
            android.content.res.Resources r0 = r1.getResources()
            java.lang.CharSequence r2 = r0.getText(r2)
            android.support.design.widget.Snackbar r1 = make(r1, r2, r3)
            return r1
    }

    public static android.support.design.widget.Snackbar make(android.view.View r3, java.lang.CharSequence r4, int r5) {
            android.view.ViewGroup r3 = findSuitableParent(r3)
            if (r3 == 0) goto L30
            android.content.Context r0 = r3.getContext()
            android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
            android.content.Context r1 = r3.getContext()
            boolean r1 = hasSnackbarButtonStyleAttr(r1)
            if (r1 == 0) goto L1b
            int r1 = android.support.design.R.layout.mtrl_layout_snackbar_include
            goto L1d
        L1b:
            int r1 = android.support.design.R.layout.design_layout_snackbar_include
        L1d:
            r2 = 0
            android.view.View r0 = r0.inflate(r1, r3, r2)
            android.support.design.widget.SnackbarContentLayout r0 = (android.support.design.widget.SnackbarContentLayout) r0
            android.support.design.widget.Snackbar r1 = new android.support.design.widget.Snackbar
            r1.<init>(r3, r0, r0)
            r1.setText(r4)
            r1.setDuration(r5)
            return r1
        L30:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "No suitable parent found from the given view. Please provide a valid view."
            r3.<init>(r4)
            throw r3
    }

    @Override
    public void dismiss() {
            r0 = this;
            super.dismiss()
            return
    }

    @Override
    public int getDuration() {
            r1 = this;
            boolean r0 = r1.hasAction
            if (r0 == 0) goto Le
            android.view.accessibility.AccessibilityManager r0 = r1.accessibilityManager
            boolean r0 = r0.isTouchExplorationEnabled()
            if (r0 == 0) goto Le
            r0 = -2
            goto L12
        Le:
            int r0 = super.getDuration()
        L12:
            return r0
    }

    @Override
    public boolean isShown() {
            r1 = this;
            boolean r0 = super.isShown()
            return r0
    }

    public android.support.design.widget.Snackbar setAction(int r2, android.view.View.OnClickListener r3) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            java.lang.CharSequence r2 = r0.getText(r2)
            android.support.design.widget.Snackbar r2 = r1.setAction(r2, r3)
            return r2
    }

    public android.support.design.widget.Snackbar setAction(java.lang.CharSequence r4, android.view.View.OnClickListener r5) {
            r3 = this;
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r0 = r3.view
            r1 = 0
            android.view.View r0 = r0.getChildAt(r1)
            android.support.design.widget.SnackbarContentLayout r0 = (android.support.design.widget.SnackbarContentLayout) r0
            android.widget.Button r0 = r0.getActionView()
            boolean r2 = android.text.TextUtils.isEmpty(r4)
            if (r2 != 0) goto L28
            if (r5 != 0) goto L16
            goto L28
        L16:
            r2 = 1
            r3.hasAction = r2
            r0.setVisibility(r1)
            r0.setText(r4)
            android.support.design.widget.Snackbar$1 r4 = new android.support.design.widget.Snackbar$1
            r4.<init>(r3, r5)
            r0.setOnClickListener(r4)
            goto L33
        L28:
            r4 = 8
            r0.setVisibility(r4)
            r4 = 0
            r0.setOnClickListener(r4)
            r3.hasAction = r1
        L33:
            return r3
    }

    public android.support.design.widget.Snackbar setActionTextColor(int r3) {
            r2 = this;
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r0 = r2.view
            r1 = 0
            android.view.View r0 = r0.getChildAt(r1)
            android.support.design.widget.SnackbarContentLayout r0 = (android.support.design.widget.SnackbarContentLayout) r0
            android.widget.Button r0 = r0.getActionView()
            r0.setTextColor(r3)
            return r2
    }

    public android.support.design.widget.Snackbar setActionTextColor(android.content.res.ColorStateList r3) {
            r2 = this;
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r0 = r2.view
            r1 = 0
            android.view.View r0 = r0.getChildAt(r1)
            android.support.design.widget.SnackbarContentLayout r0 = (android.support.design.widget.SnackbarContentLayout) r0
            android.widget.Button r0 = r0.getActionView()
            r0.setTextColor(r3)
            return r2
    }

    @java.lang.Deprecated
    public android.support.design.widget.Snackbar setCallback(android.support.design.widget.Snackbar.Callback r2) {
            r1 = this;
            android.support.design.widget.BaseTransientBottomBar$BaseCallback<android.support.design.widget.Snackbar> r0 = r1.callback
            if (r0 == 0) goto L7
            r1.removeCallback(r0)
        L7:
            if (r2 == 0) goto Lc
            r1.addCallback(r2)
        Lc:
            r1.callback = r2
            return r1
    }

    public android.support.design.widget.Snackbar setText(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            java.lang.CharSequence r2 = r0.getText(r2)
            android.support.design.widget.Snackbar r2 = r1.setText(r2)
            return r2
    }

    public android.support.design.widget.Snackbar setText(java.lang.CharSequence r3) {
            r2 = this;
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r0 = r2.view
            r1 = 0
            android.view.View r0 = r0.getChildAt(r1)
            android.support.design.widget.SnackbarContentLayout r0 = (android.support.design.widget.SnackbarContentLayout) r0
            android.widget.TextView r0 = r0.getMessageView()
            r0.setText(r3)
            return r2
    }

    @Override
    public void show() {
            r0 = this;
            super.show()
            return
    }
}
