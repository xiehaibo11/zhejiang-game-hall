package android.support.design.widget;

import android.support.design.widget.BaseTransientBottomBar;

public abstract class BaseTransientBottomBar<B extends android.support.design.widget.BaseTransientBottomBar<B>> {
    static final int ANIMATION_DURATION = 250;
    static final int ANIMATION_FADE_DURATION = 180;
    public static final int LENGTH_INDEFINITE = -2;
    public static final int LENGTH_LONG = 0;
    public static final int LENGTH_SHORT = -1;
    static final int MSG_DISMISS = 1;
    static final int MSG_SHOW = 0;
    private static final int[] SNACKBAR_STYLE_ATTR = null;
    private static final boolean USE_OFFSET_API = false;
    static final android.os.Handler handler = null;
    private final android.view.accessibility.AccessibilityManager accessibilityManager;
    private android.support.design.widget.BaseTransientBottomBar.Behavior behavior;
    private java.util.List<android.support.design.widget.BaseTransientBottomBar.BaseCallback<B>> callbacks;
    private final android.support.design.snackbar.ContentViewCallback contentViewCallback;
    private final android.content.Context context;
    private int duration;
    final android.support.design.widget.SnackbarManager.Callback managerCallback;
    private final android.view.ViewGroup targetParent;
    protected final android.support.design.widget.BaseTransientBottomBar.SnackbarBaseLayout view;












    public static abstract class BaseCallback<B> {
        public static final int DISMISS_EVENT_ACTION = 1;
        public static final int DISMISS_EVENT_CONSECUTIVE = 4;
        public static final int DISMISS_EVENT_MANUAL = 3;
        public static final int DISMISS_EVENT_SWIPE = 0;
        public static final int DISMISS_EVENT_TIMEOUT = 2;

        @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
        public @interface DismissEvent {
        }

        public BaseCallback() {
                r0 = this;
                r0.<init>()
                return
        }

        public void onDismissed(B r1, int r2) {
                r0 = this;
                return
        }

        public void onShown(B r1) {
                r0 = this;
                return
        }
    }

    public static class Behavior extends android.support.design.widget.SwipeDismissBehavior<android.view.View> {
        private final android.support.design.widget.BaseTransientBottomBar.BehaviorDelegate delegate;

        public Behavior() {
                r1 = this;
                r1.<init>()
                android.support.design.widget.BaseTransientBottomBar$BehaviorDelegate r0 = new android.support.design.widget.BaseTransientBottomBar$BehaviorDelegate
                r0.<init>(r1)
                r1.delegate = r0
                return
        }

        static void access$000(android.support.design.widget.BaseTransientBottomBar.Behavior r0, android.support.design.widget.BaseTransientBottomBar r1) {
                r0.setBaseTransientBottomBar(r1)
                return
        }

        private void setBaseTransientBottomBar(android.support.design.widget.BaseTransientBottomBar<?> r2) {
                r1 = this;
                android.support.design.widget.BaseTransientBottomBar$BehaviorDelegate r0 = r1.delegate
                r0.setBaseTransientBottomBar(r2)
                return
        }

        @Override
        public boolean canSwipeDismissView(android.view.View r2) {
                r1 = this;
                android.support.design.widget.BaseTransientBottomBar$BehaviorDelegate r0 = r1.delegate
                boolean r2 = r0.canSwipeDismissView(r2)
                return r2
        }

        @Override
        public boolean onInterceptTouchEvent(android.support.design.widget.CoordinatorLayout r2, android.view.View r3, android.view.MotionEvent r4) {
                r1 = this;
                android.support.design.widget.BaseTransientBottomBar$BehaviorDelegate r0 = r1.delegate
                r0.onInterceptTouchEvent(r2, r3, r4)
                boolean r2 = super.onInterceptTouchEvent(r2, r3, r4)
                return r2
        }
    }

    public static class BehaviorDelegate {
        private android.support.design.widget.SnackbarManager.Callback managerCallback;

        public BehaviorDelegate(android.support.design.widget.SwipeDismissBehavior<?> r2) {
                r1 = this;
                r1.<init>()
                r0 = 1036831949(0x3dcccccd, float:0.1)
                r2.setStartAlphaSwipeDistance(r0)
                r0 = 1058642330(0x3f19999a, float:0.6)
                r2.setEndAlphaSwipeDistance(r0)
                r0 = 0
                r2.setSwipeDirection(r0)
                return
        }

        public boolean canSwipeDismissView(android.view.View r1) {
                r0 = this;
                boolean r1 = r1 instanceof android.support.design.widget.BaseTransientBottomBar.SnackbarBaseLayout
                return r1
        }

        public void onInterceptTouchEvent(android.support.design.widget.CoordinatorLayout r2, android.view.View r3, android.view.MotionEvent r4) {
                r1 = this;
                int r0 = r4.getActionMasked()
                if (r0 == 0) goto L17
                r2 = 1
                if (r0 == r2) goto Ld
                r2 = 3
                if (r0 == r2) goto Ld
                goto L30
            Ld:
                android.support.design.widget.SnackbarManager r2 = android.support.design.widget.SnackbarManager.getInstance()
                android.support.design.widget.SnackbarManager$Callback r3 = r1.managerCallback
                r2.restoreTimeoutIfPaused(r3)
                goto L30
            L17:
                float r0 = r4.getX()
                int r0 = (int) r0
                float r4 = r4.getY()
                int r4 = (int) r4
                boolean r2 = r2.isPointInChildBounds(r3, r0, r4)
                if (r2 == 0) goto L30
                android.support.design.widget.SnackbarManager r2 = android.support.design.widget.SnackbarManager.getInstance()
                android.support.design.widget.SnackbarManager$Callback r3 = r1.managerCallback
                r2.pauseTimeout(r3)
            L30:
                return
        }

        public void setBaseTransientBottomBar(android.support.design.widget.BaseTransientBottomBar<?> r1) {
                r0 = this;
                android.support.design.widget.SnackbarManager$Callback r1 = r1.managerCallback
                r0.managerCallback = r1
                return
        }
    }

    @java.lang.Deprecated
    public interface ContentViewCallback extends android.support.design.snackbar.ContentViewCallback {
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface Duration {
    }

    protected interface OnAttachStateChangeListener {
        void onViewAttachedToWindow(android.view.View r1);

        void onViewDetachedFromWindow(android.view.View r1);
    }

    protected interface OnLayoutChangeListener {
        void onLayoutChange(android.view.View r1, int r2, int r3, int r4, int r5);
    }

    protected static class SnackbarBaseLayout extends android.widget.FrameLayout {
        private final android.view.accessibility.AccessibilityManager accessibilityManager;
        private android.support.design.widget.BaseTransientBottomBar.OnAttachStateChangeListener onAttachStateChangeListener;
        private android.support.design.widget.BaseTransientBottomBar.OnLayoutChangeListener onLayoutChangeListener;
        private final android.support.v4.view.accessibility.AccessibilityManagerCompat.TouchExplorationStateChangeListener touchExplorationStateChangeListener;


        protected SnackbarBaseLayout(android.content.Context r2) {
                r1 = this;
                r0 = 0
                r1.<init>(r2, r0)
                return
        }

        protected SnackbarBaseLayout(android.content.Context r3, android.util.AttributeSet r4) {
                r2 = this;
                r2.<init>(r3, r4)
                int[] r0 = android.support.design.R.styleable.SnackbarLayout
                android.content.res.TypedArray r4 = r3.obtainStyledAttributes(r4, r0)
                int r0 = android.support.design.R.styleable.SnackbarLayout_elevation
                boolean r0 = r4.hasValue(r0)
                if (r0 == 0) goto L1c
                int r0 = android.support.design.R.styleable.SnackbarLayout_elevation
                r1 = 0
                int r0 = r4.getDimensionPixelSize(r0, r1)
                float r0 = (float) r0
                android.support.v4.view.ViewCompat.setElevation(r2, r0)
            L1c:
                r4.recycle()
                java.lang.String r4 = "accessibility"
                java.lang.Object r3 = r3.getSystemService(r4)
                android.view.accessibility.AccessibilityManager r3 = (android.view.accessibility.AccessibilityManager) r3
                r2.accessibilityManager = r3
                android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout$1 r3 = new android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout$1
                r3.<init>(r2)
                r2.touchExplorationStateChangeListener = r3
                android.view.accessibility.AccessibilityManager r4 = r2.accessibilityManager
                android.support.v4.view.accessibility.AccessibilityManagerCompat.addTouchExplorationStateChangeListener(r4, r3)
                android.view.accessibility.AccessibilityManager r3 = r2.accessibilityManager
                boolean r3 = r3.isTouchExplorationEnabled()
                r2.setClickableOrFocusableBasedOnAccessibility(r3)
                return
        }

        static void access$300(android.support.design.widget.BaseTransientBottomBar.SnackbarBaseLayout r0, boolean r1) {
                r0.setClickableOrFocusableBasedOnAccessibility(r1)
                return
        }

        private void setClickableOrFocusableBasedOnAccessibility(boolean r2) {
                r1 = this;
                r0 = r2 ^ 1
                r1.setClickable(r0)
                r1.setFocusable(r2)
                return
        }

        @Override
        protected void onAttachedToWindow() {
                r1 = this;
                super.onAttachedToWindow()
                android.support.design.widget.BaseTransientBottomBar$OnAttachStateChangeListener r0 = r1.onAttachStateChangeListener
                if (r0 == 0) goto La
                r0.onViewAttachedToWindow(r1)
            La:
                android.support.v4.view.ViewCompat.requestApplyInsets(r1)
                return
        }

        @Override
        protected void onDetachedFromWindow() {
                r2 = this;
                super.onDetachedFromWindow()
                android.support.design.widget.BaseTransientBottomBar$OnAttachStateChangeListener r0 = r2.onAttachStateChangeListener
                if (r0 == 0) goto La
                r0.onViewDetachedFromWindow(r2)
            La:
                android.view.accessibility.AccessibilityManager r0 = r2.accessibilityManager
                android.support.v4.view.accessibility.AccessibilityManagerCompat$TouchExplorationStateChangeListener r1 = r2.touchExplorationStateChangeListener
                android.support.v4.view.accessibility.AccessibilityManagerCompat.removeTouchExplorationStateChangeListener(r0, r1)
                return
        }

        @Override
        protected void onLayout(boolean r7, int r8, int r9, int r10, int r11) {
                r6 = this;
                super.onLayout(r7, r8, r9, r10, r11)
                android.support.design.widget.BaseTransientBottomBar$OnLayoutChangeListener r0 = r6.onLayoutChangeListener
                if (r0 == 0) goto Lf
                r1 = r6
                r2 = r8
                r3 = r9
                r4 = r10
                r5 = r11
                r0.onLayoutChange(r1, r2, r3, r4, r5)
            Lf:
                return
        }

        void setOnAttachStateChangeListener(android.support.design.widget.BaseTransientBottomBar.OnAttachStateChangeListener r1) {
                r0 = this;
                r0.onAttachStateChangeListener = r1
                return
        }

        void setOnLayoutChangeListener(android.support.design.widget.BaseTransientBottomBar.OnLayoutChangeListener r1) {
                r0 = this;
                r0.onLayoutChangeListener = r1
                return
        }
    }

    static {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 1
            r2 = 0
            r3 = 16
            if (r0 < r3) goto L10
            int r0 = android.os.Build.VERSION.SDK_INT
            r3 = 19
            if (r0 > r3) goto L10
            r0 = r1
            goto L11
        L10:
            r0 = r2
        L11:
            android.support.design.widget.BaseTransientBottomBar.USE_OFFSET_API = r0
            int[] r0 = new int[r1]
            int r1 = android.support.design.R.attr.snackbarStyle
            r0[r2] = r1
            android.support.design.widget.BaseTransientBottomBar.SNACKBAR_STYLE_ATTR = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            android.support.design.widget.BaseTransientBottomBar$1 r2 = new android.support.design.widget.BaseTransientBottomBar$1
            r2.<init>()
            r0.<init>(r1, r2)
            android.support.design.widget.BaseTransientBottomBar.handler = r0
            return
    }

    protected BaseTransientBottomBar(android.view.ViewGroup r3, android.view.View r4, android.support.design.snackbar.ContentViewCallback r5) {
            r2 = this;
            r2.<init>()
            android.support.design.widget.BaseTransientBottomBar$4 r0 = new android.support.design.widget.BaseTransientBottomBar$4
            r0.<init>(r2)
            r2.managerCallback = r0
            if (r3 == 0) goto L76
            if (r4 == 0) goto L6e
            if (r5 == 0) goto L66
            r2.targetParent = r3
            r2.contentViewCallback = r5
            android.content.Context r3 = r3.getContext()
            r2.context = r3
            android.support.design.internal.ThemeEnforcement.checkAppCompatTheme(r3)
            android.content.Context r3 = r2.context
            android.view.LayoutInflater r3 = android.view.LayoutInflater.from(r3)
            int r5 = r2.getSnackbarBaseLayoutResId()
            android.view.ViewGroup r0 = r2.targetParent
            r1 = 0
            android.view.View r3 = r3.inflate(r5, r0, r1)
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r3 = (android.support.design.widget.BaseTransientBottomBar.SnackbarBaseLayout) r3
            r2.view = r3
            r3.addView(r4)
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r3 = r2.view
            r4 = 1
            android.support.v4.view.ViewCompat.setAccessibilityLiveRegion(r3, r4)
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r3 = r2.view
            android.support.v4.view.ViewCompat.setImportantForAccessibility(r3, r4)
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r3 = r2.view
            android.support.v4.view.ViewCompat.setFitsSystemWindows(r3, r4)
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r3 = r2.view
            android.support.design.widget.BaseTransientBottomBar$2 r4 = new android.support.design.widget.BaseTransientBottomBar$2
            r4.<init>(r2)
            android.support.v4.view.ViewCompat.setOnApplyWindowInsetsListener(r3, r4)
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r3 = r2.view
            android.support.design.widget.BaseTransientBottomBar$3 r4 = new android.support.design.widget.BaseTransientBottomBar$3
            r4.<init>(r2)
            android.support.v4.view.ViewCompat.setAccessibilityDelegate(r3, r4)
            android.content.Context r3 = r2.context
            java.lang.String r4 = "accessibility"
            java.lang.Object r3 = r3.getSystemService(r4)
            android.view.accessibility.AccessibilityManager r3 = (android.view.accessibility.AccessibilityManager) r3
            r2.accessibilityManager = r3
            return
        L66:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Transient bottom bar must have non-null callback"
            r3.<init>(r4)
            throw r3
        L6e:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Transient bottom bar must have non-null content"
            r3.<init>(r4)
            throw r3
        L76:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Transient bottom bar must have non-null parent"
            r3.<init>(r4)
            throw r3
    }

    static android.support.design.snackbar.ContentViewCallback access$100(android.support.design.widget.BaseTransientBottomBar r0) {
            android.support.design.snackbar.ContentViewCallback r0 = r0.contentViewCallback
            return r0
    }

    static boolean access$200() {
            boolean r0 = android.support.design.widget.BaseTransientBottomBar.USE_OFFSET_API
            return r0
    }

    private void animateViewOut(int r5) {
            r4 = this;
            android.animation.ValueAnimator r0 = new android.animation.ValueAnimator
            r0.<init>()
            r1 = 2
            int[] r1 = new int[r1]
            r2 = 0
            r1[r2] = r2
            int r2 = r4.getTranslationYBottom()
            r3 = 1
            r1[r3] = r2
            r0.setIntValues(r1)
            android.animation.TimeInterpolator r1 = android.support.design.animation.AnimationUtils.FAST_OUT_SLOW_IN_INTERPOLATOR
            r0.setInterpolator(r1)
            r1 = 250(0xfa, double:1.235E-321)
            r0.setDuration(r1)
            android.support.design.widget.BaseTransientBottomBar$10 r1 = new android.support.design.widget.BaseTransientBottomBar$10
            r1.<init>(r4, r5)
            r0.addListener(r1)
            android.support.design.widget.BaseTransientBottomBar$11 r5 = new android.support.design.widget.BaseTransientBottomBar$11
            r5.<init>(r4)
            r0.addUpdateListener(r5)
            r0.start()
            return
    }

    private int getTranslationYBottom() {
            r3 = this;
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r0 = r3.view
            int r0 = r0.getHeight()
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r1 = r3.view
            android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
            boolean r2 = r1 instanceof android.view.ViewGroup.MarginLayoutParams
            if (r2 == 0) goto L15
            android.view.ViewGroup$MarginLayoutParams r1 = (android.view.ViewGroup.MarginLayoutParams) r1
            int r1 = r1.bottomMargin
            int r0 = r0 + r1
        L15:
            return r0
    }

    public B addCallback(android.support.design.widget.BaseTransientBottomBar.BaseCallback<B> r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            java.util.List<android.support.design.widget.BaseTransientBottomBar$BaseCallback<B extends android.support.design.widget.BaseTransientBottomBar<B>>> r0 = r1.callbacks
            if (r0 != 0) goto Le
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.callbacks = r0
        Le:
            java.util.List<android.support.design.widget.BaseTransientBottomBar$BaseCallback<B extends android.support.design.widget.BaseTransientBottomBar<B>>> r0 = r1.callbacks
            r0.add(r2)
            return r1
    }

    void animateViewIn() {
            r5 = this;
            int r0 = r5.getTranslationYBottom()
            boolean r1 = android.support.design.widget.BaseTransientBottomBar.USE_OFFSET_API
            if (r1 == 0) goto Le
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r1 = r5.view
            android.support.v4.view.ViewCompat.offsetTopAndBottom(r1, r0)
            goto L14
        Le:
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r1 = r5.view
            float r2 = (float) r0
            r1.setTranslationY(r2)
        L14:
            android.animation.ValueAnimator r1 = new android.animation.ValueAnimator
            r1.<init>()
            r2 = 2
            int[] r2 = new int[r2]
            r3 = 0
            r2[r3] = r0
            r4 = 1
            r2[r4] = r3
            r1.setIntValues(r2)
            android.animation.TimeInterpolator r2 = android.support.design.animation.AnimationUtils.FAST_OUT_SLOW_IN_INTERPOLATOR
            r1.setInterpolator(r2)
            r2 = 250(0xfa, double:1.235E-321)
            r1.setDuration(r2)
            android.support.design.widget.BaseTransientBottomBar$8 r2 = new android.support.design.widget.BaseTransientBottomBar$8
            r2.<init>(r5)
            r1.addListener(r2)
            android.support.design.widget.BaseTransientBottomBar$9 r2 = new android.support.design.widget.BaseTransientBottomBar$9
            r2.<init>(r5, r0)
            r1.addUpdateListener(r2)
            r1.start()
            return
    }

    public void dismiss() {
            r1 = this;
            r0 = 3
            r1.dispatchDismiss(r0)
            return
    }

    protected void dispatchDismiss(int r3) {
            r2 = this;
            android.support.design.widget.SnackbarManager r0 = android.support.design.widget.SnackbarManager.getInstance()
            android.support.design.widget.SnackbarManager$Callback r1 = r2.managerCallback
            r0.dismiss(r1, r3)
            return
    }

    public android.support.design.widget.BaseTransientBottomBar.Behavior getBehavior() {
            r1 = this;
            android.support.design.widget.BaseTransientBottomBar$Behavior r0 = r1.behavior
            return r0
    }

    public android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.context
            return r0
    }

    public int getDuration() {
            r1 = this;
            int r0 = r1.duration
            return r0
    }

    protected android.support.design.widget.SwipeDismissBehavior<? extends android.view.View> getNewBehavior() {
            r1 = this;
            android.support.design.widget.BaseTransientBottomBar$Behavior r0 = new android.support.design.widget.BaseTransientBottomBar$Behavior
            r0.<init>()
            return r0
    }

    protected int getSnackbarBaseLayoutResId() {
            r1 = this;
            boolean r0 = r1.hasSnackbarStyleAttr()
            if (r0 == 0) goto L9
            int r0 = android.support.design.R.layout.mtrl_layout_snackbar
            goto Lb
        L9:
            int r0 = android.support.design.R.layout.design_layout_snackbar
        Lb:
            return r0
    }

    public android.view.View getView() {
            r1 = this;
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r0 = r1.view
            return r0
    }

    protected boolean hasSnackbarStyleAttr() {
            r4 = this;
            android.content.Context r0 = r4.context
            int[] r1 = android.support.design.widget.BaseTransientBottomBar.SNACKBAR_STYLE_ATTR
            android.content.res.TypedArray r0 = r0.obtainStyledAttributes(r1)
            r1 = -1
            r2 = 0
            int r3 = r0.getResourceId(r2, r1)
            r0.recycle()
            if (r3 == r1) goto L14
            r2 = 1
        L14:
            return r2
    }

    final void hideView(int r2) {
            r1 = this;
            boolean r0 = r1.shouldAnimate()
            if (r0 == 0) goto L12
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r0 = r1.view
            int r0 = r0.getVisibility()
            if (r0 != 0) goto L12
            r1.animateViewOut(r2)
            goto L15
        L12:
            r1.onViewHidden(r2)
        L15:
            return
    }

    public boolean isShown() {
            r2 = this;
            android.support.design.widget.SnackbarManager r0 = android.support.design.widget.SnackbarManager.getInstance()
            android.support.design.widget.SnackbarManager$Callback r1 = r2.managerCallback
            boolean r0 = r0.isCurrent(r1)
            return r0
    }

    public boolean isShownOrQueued() {
            r2 = this;
            android.support.design.widget.SnackbarManager r0 = android.support.design.widget.SnackbarManager.getInstance()
            android.support.design.widget.SnackbarManager$Callback r1 = r2.managerCallback
            boolean r0 = r0.isCurrentOrNext(r1)
            return r0
    }

    void onViewHidden(int r3) {
            r2 = this;
            android.support.design.widget.SnackbarManager r0 = android.support.design.widget.SnackbarManager.getInstance()
            android.support.design.widget.SnackbarManager$Callback r1 = r2.managerCallback
            r0.onDismissed(r1)
            java.util.List<android.support.design.widget.BaseTransientBottomBar$BaseCallback<B extends android.support.design.widget.BaseTransientBottomBar<B>>> r0 = r2.callbacks
            if (r0 == 0) goto L23
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L13:
            if (r0 < 0) goto L23
            java.util.List<android.support.design.widget.BaseTransientBottomBar$BaseCallback<B extends android.support.design.widget.BaseTransientBottomBar<B>>> r1 = r2.callbacks
            java.lang.Object r1 = r1.get(r0)
            android.support.design.widget.BaseTransientBottomBar$BaseCallback r1 = (android.support.design.widget.BaseTransientBottomBar.BaseCallback) r1
            r1.onDismissed(r2, r3)
            int r0 = r0 + (-1)
            goto L13
        L23:
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r3 = r2.view
            android.view.ViewParent r3 = r3.getParent()
            boolean r0 = r3 instanceof android.view.ViewGroup
            if (r0 == 0) goto L34
            android.view.ViewGroup r3 = (android.view.ViewGroup) r3
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r0 = r2.view
            r3.removeView(r0)
        L34:
            return
    }

    void onViewShown() {
            r2 = this;
            android.support.design.widget.SnackbarManager r0 = android.support.design.widget.SnackbarManager.getInstance()
            android.support.design.widget.SnackbarManager$Callback r1 = r2.managerCallback
            r0.onShown(r1)
            java.util.List<android.support.design.widget.BaseTransientBottomBar$BaseCallback<B extends android.support.design.widget.BaseTransientBottomBar<B>>> r0 = r2.callbacks
            if (r0 == 0) goto L23
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L13:
            if (r0 < 0) goto L23
            java.util.List<android.support.design.widget.BaseTransientBottomBar$BaseCallback<B extends android.support.design.widget.BaseTransientBottomBar<B>>> r1 = r2.callbacks
            java.lang.Object r1 = r1.get(r0)
            android.support.design.widget.BaseTransientBottomBar$BaseCallback r1 = (android.support.design.widget.BaseTransientBottomBar.BaseCallback) r1
            r1.onShown(r2)
            int r0 = r0 + (-1)
            goto L13
        L23:
            return
    }

    public B removeCallback(android.support.design.widget.BaseTransientBottomBar.BaseCallback<B> r2) {
            r1 = this;
            if (r2 != 0) goto L3
            return r1
        L3:
            java.util.List<android.support.design.widget.BaseTransientBottomBar$BaseCallback<B extends android.support.design.widget.BaseTransientBottomBar<B>>> r0 = r1.callbacks
            if (r0 != 0) goto L8
            return r1
        L8:
            r0.remove(r2)
            return r1
    }

    public B setBehavior(android.support.design.widget.BaseTransientBottomBar.Behavior r1) {
            r0 = this;
            r0.behavior = r1
            return r0
    }

    public B setDuration(int r1) {
            r0 = this;
            r0.duration = r1
            return r0
    }

    boolean shouldAnimate() {
            r2 = this;
            android.view.accessibility.AccessibilityManager r0 = r2.accessibilityManager
            r1 = 1
            java.util.List r0 = r0.getEnabledAccessibilityServiceList(r1)
            if (r0 == 0) goto L10
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L10
            goto L11
        L10:
            r1 = 0
        L11:
            return r1
    }

    public void show() {
            r3 = this;
            android.support.design.widget.SnackbarManager r0 = android.support.design.widget.SnackbarManager.getInstance()
            int r1 = r3.getDuration()
            android.support.design.widget.SnackbarManager$Callback r2 = r3.managerCallback
            r0.show(r1, r2)
            return
    }

    final void showView() {
            r3 = this;
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r0 = r3.view
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L3c
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r0 = r3.view
            android.view.ViewGroup$LayoutParams r0 = r0.getLayoutParams()
            boolean r1 = r0 instanceof android.support.design.widget.CoordinatorLayout.LayoutParams
            if (r1 == 0) goto L35
            android.support.design.widget.CoordinatorLayout$LayoutParams r0 = (android.support.design.widget.CoordinatorLayout.LayoutParams) r0
            android.support.design.widget.BaseTransientBottomBar$Behavior r1 = r3.behavior
            if (r1 != 0) goto L1c
            android.support.design.widget.SwipeDismissBehavior r1 = r3.getNewBehavior()
        L1c:
            boolean r2 = r1 instanceof android.support.design.widget.BaseTransientBottomBar.Behavior
            if (r2 == 0) goto L26
            r2 = r1
            android.support.design.widget.BaseTransientBottomBar$Behavior r2 = (android.support.design.widget.BaseTransientBottomBar.Behavior) r2
            android.support.design.widget.BaseTransientBottomBar.Behavior.access$000(r2, r3)
        L26:
            android.support.design.widget.BaseTransientBottomBar$5 r2 = new android.support.design.widget.BaseTransientBottomBar$5
            r2.<init>(r3)
            r1.setListener(r2)
            r0.setBehavior(r1)
            r1 = 80
            r0.insetEdge = r1
        L35:
            android.view.ViewGroup r0 = r3.targetParent
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r1 = r3.view
            r0.addView(r1)
        L3c:
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r0 = r3.view
            android.support.design.widget.BaseTransientBottomBar$6 r1 = new android.support.design.widget.BaseTransientBottomBar$6
            r1.<init>(r3)
            r0.setOnAttachStateChangeListener(r1)
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r0 = r3.view
            boolean r0 = android.support.v4.view.ViewCompat.isLaidOut(r0)
            if (r0 == 0) goto L5c
            boolean r0 = r3.shouldAnimate()
            if (r0 == 0) goto L58
            r3.animateViewIn()
            goto L66
        L58:
            r3.onViewShown()
            goto L66
        L5c:
            android.support.design.widget.BaseTransientBottomBar$SnackbarBaseLayout r0 = r3.view
            android.support.design.widget.BaseTransientBottomBar$7 r1 = new android.support.design.widget.BaseTransientBottomBar$7
            r1.<init>(r3)
            r0.setOnLayoutChangeListener(r1)
        L66:
            return
    }
}
