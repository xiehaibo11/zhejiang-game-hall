package android.support.design.widget;

@android.support.design.widget.CoordinatorLayout.DefaultBehavior(android.support.design.widget.FloatingActionButton.Behavior.class)
public class FloatingActionButton extends android.support.design.widget.VisibilityAwareImageButton implements android.support.v4.view.TintableBackgroundView, android.support.v4.widget.TintableImageSourceView, android.support.design.expandable.ExpandableTransformationWidget {
    private static final int AUTO_MINI_LARGEST_SCREEN_WIDTH = 470;
    private static final java.lang.String EXPANDABLE_WIDGET_HELPER_KEY = "expandableWidgetHelper";
    private static final java.lang.String LOG_TAG = "FloatingActionButton";
    public static final int NO_CUSTOM_SIZE = 0;
    public static final int SIZE_AUTO = -1;
    public static final int SIZE_MINI = 1;
    public static final int SIZE_NORMAL = 0;
    private android.content.res.ColorStateList backgroundTint;
    private android.graphics.PorterDuff.Mode backgroundTintMode;
    private int borderWidth;
    boolean compatPadding;
    private int customSize;
    private final android.support.design.expandable.ExpandableWidgetHelper expandableWidgetHelper;
    private final android.support.v7.widget.AppCompatImageHelper imageHelper;
    private android.graphics.PorterDuff.Mode imageMode;
    private int imagePadding;
    private android.content.res.ColorStateList imageTint;
    private android.support.design.widget.FloatingActionButtonImpl impl;
    private int maxImageSize;
    private android.content.res.ColorStateList rippleColor;
    final android.graphics.Rect shadowPadding;
    private int size;
    private final android.graphics.Rect touchArea;


    protected static class BaseBehavior<T extends android.support.design.widget.FloatingActionButton> extends android.support.design.widget.CoordinatorLayout.Behavior<T> {
        private static final boolean AUTO_HIDE_DEFAULT = true;
        private boolean autoHideEnabled;
        private android.support.design.widget.FloatingActionButton.OnVisibilityChangedListener internalAutoHideListener;
        private android.graphics.Rect tmpRect;

        public BaseBehavior() {
                r1 = this;
                r1.<init>()
                r0 = 1
                r1.autoHideEnabled = r0
                return
        }

        public BaseBehavior(android.content.Context r2, android.util.AttributeSet r3) {
                r1 = this;
                r1.<init>(r2, r3)
                int[] r0 = android.support.design.R.styleable.FloatingActionButton_Behavior_Layout
                android.content.res.TypedArray r2 = r2.obtainStyledAttributes(r3, r0)
                int r3 = android.support.design.R.styleable.FloatingActionButton_Behavior_Layout_behavior_autoHide
                r0 = 1
                boolean r3 = r2.getBoolean(r3, r0)
                r1.autoHideEnabled = r3
                r2.recycle()
                return
        }

        private static boolean isBottomSheet(android.view.View r1) {
                android.view.ViewGroup$LayoutParams r1 = r1.getLayoutParams()
                boolean r0 = r1 instanceof android.support.design.widget.CoordinatorLayout.LayoutParams
                if (r0 == 0) goto L11
                android.support.design.widget.CoordinatorLayout$LayoutParams r1 = (android.support.design.widget.CoordinatorLayout.LayoutParams) r1
                android.support.design.widget.CoordinatorLayout$Behavior r1 = r1.getBehavior()
                boolean r1 = r1 instanceof android.support.design.widget.BottomSheetBehavior
                return r1
            L11:
                r1 = 0
                return r1
        }

        private void offsetIfNeeded(android.support.design.widget.CoordinatorLayout r7, android.support.design.widget.FloatingActionButton r8) {
                r6 = this;
                android.graphics.Rect r0 = r8.shadowPadding
                if (r0 == 0) goto L59
                int r1 = r0.centerX()
                if (r1 <= 0) goto L59
                int r1 = r0.centerY()
                if (r1 <= 0) goto L59
                android.view.ViewGroup$LayoutParams r1 = r8.getLayoutParams()
                android.support.design.widget.CoordinatorLayout$LayoutParams r1 = (android.support.design.widget.CoordinatorLayout.LayoutParams) r1
                int r2 = r8.getRight()
                int r3 = r7.getWidth()
                int r4 = r1.rightMargin
                int r3 = r3 - r4
                r4 = 0
                if (r2 < r3) goto L27
                int r2 = r0.right
                goto L34
            L27:
                int r2 = r8.getLeft()
                int r3 = r1.leftMargin
                if (r2 > r3) goto L33
                int r2 = r0.left
                int r2 = -r2
                goto L34
            L33:
                r2 = r4
            L34:
                int r3 = r8.getBottom()
                int r7 = r7.getHeight()
                int r5 = r1.bottomMargin
                int r7 = r7 - r5
                if (r3 < r7) goto L44
                int r4 = r0.bottom
                goto L4f
            L44:
                int r7 = r8.getTop()
                int r1 = r1.topMargin
                if (r7 > r1) goto L4f
                int r7 = r0.top
                int r4 = -r7
            L4f:
                if (r4 == 0) goto L54
                android.support.v4.view.ViewCompat.offsetTopAndBottom(r8, r4)
            L54:
                if (r2 == 0) goto L59
                android.support.v4.view.ViewCompat.offsetLeftAndRight(r8, r2)
            L59:
                return
        }

        private boolean shouldUpdateVisibility(android.view.View r4, android.support.design.widget.FloatingActionButton r5) {
                r3 = this;
                android.view.ViewGroup$LayoutParams r0 = r5.getLayoutParams()
                android.support.design.widget.CoordinatorLayout$LayoutParams r0 = (android.support.design.widget.CoordinatorLayout.LayoutParams) r0
                boolean r1 = r3.autoHideEnabled
                r2 = 0
                if (r1 != 0) goto Lc
                return r2
            Lc:
                int r0 = r0.getAnchorId()
                int r4 = r4.getId()
                if (r0 == r4) goto L17
                return r2
            L17:
                int r4 = r5.getUserSetVisibility()
                if (r4 == 0) goto L1e
                return r2
            L1e:
                r4 = 1
                return r4
        }

        private boolean updateFabVisibilityForAppBarLayout(android.support.design.widget.CoordinatorLayout r3, android.support.design.widget.AppBarLayout r4, android.support.design.widget.FloatingActionButton r5) {
                r2 = this;
                boolean r0 = r2.shouldUpdateVisibility(r4, r5)
                r1 = 0
                if (r0 != 0) goto L8
                return r1
            L8:
                android.graphics.Rect r0 = r2.tmpRect
                if (r0 != 0) goto L13
                android.graphics.Rect r0 = new android.graphics.Rect
                r0.<init>()
                r2.tmpRect = r0
            L13:
                android.graphics.Rect r0 = r2.tmpRect
                android.support.design.widget.DescendantOffsetUtils.getDescendantRect(r3, r4, r0)
                int r3 = r0.bottom
                int r4 = r4.getMinimumHeightForVisibleOverlappingContent()
                if (r3 > r4) goto L26
                android.support.design.widget.FloatingActionButton$OnVisibilityChangedListener r3 = r2.internalAutoHideListener
                r5.hide(r3, r1)
                goto L2b
            L26:
                android.support.design.widget.FloatingActionButton$OnVisibilityChangedListener r3 = r2.internalAutoHideListener
                r5.show(r3, r1)
            L2b:
                r3 = 1
                return r3
        }

        private boolean updateFabVisibilityForBottomSheet(android.view.View r4, android.support.design.widget.FloatingActionButton r5) {
                r3 = this;
                boolean r0 = r3.shouldUpdateVisibility(r4, r5)
                r1 = 0
                if (r0 != 0) goto L8
                return r1
            L8:
                android.view.ViewGroup$LayoutParams r0 = r5.getLayoutParams()
                android.support.design.widget.CoordinatorLayout$LayoutParams r0 = (android.support.design.widget.CoordinatorLayout.LayoutParams) r0
                int r4 = r4.getTop()
                int r2 = r5.getHeight()
                int r2 = r2 / 2
                int r0 = r0.topMargin
                int r2 = r2 + r0
                if (r4 >= r2) goto L23
                android.support.design.widget.FloatingActionButton$OnVisibilityChangedListener r4 = r3.internalAutoHideListener
                r5.hide(r4, r1)
                goto L28
            L23:
                android.support.design.widget.FloatingActionButton$OnVisibilityChangedListener r4 = r3.internalAutoHideListener
                r5.show(r4, r1)
            L28:
                r4 = 1
                return r4
        }

        public boolean getInsetDodgeRect(android.support.design.widget.CoordinatorLayout r5, android.support.design.widget.FloatingActionButton r6, android.graphics.Rect r7) {
                r4 = this;
                android.graphics.Rect r5 = r6.shadowPadding
                int r0 = r6.getLeft()
                int r1 = r5.left
                int r0 = r0 + r1
                int r1 = r6.getTop()
                int r2 = r5.top
                int r1 = r1 + r2
                int r2 = r6.getRight()
                int r3 = r5.right
                int r2 = r2 - r3
                int r6 = r6.getBottom()
                int r5 = r5.bottom
                int r6 = r6 - r5
                r7.set(r0, r1, r2, r6)
                r5 = 1
                return r5
        }

        @Override
        public boolean getInsetDodgeRect(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, android.graphics.Rect r3) {
                r0 = this;
                android.support.design.widget.FloatingActionButton r2 = (android.support.design.widget.FloatingActionButton) r2
                boolean r1 = r0.getInsetDodgeRect(r1, r2, r3)
                return r1
        }

        public boolean isAutoHideEnabled() {
                r1 = this;
                boolean r0 = r1.autoHideEnabled
                return r0
        }

        @Override
        public void onAttachedToLayoutParams(android.support.design.widget.CoordinatorLayout.LayoutParams r2) {
                r1 = this;
                int r0 = r2.dodgeInsetEdges
                if (r0 != 0) goto L8
                r0 = 80
                r2.dodgeInsetEdges = r0
            L8:
                return
        }

        public boolean onDependentViewChanged(android.support.design.widget.CoordinatorLayout r2, android.support.design.widget.FloatingActionButton r3, android.view.View r4) {
                r1 = this;
                boolean r0 = r4 instanceof android.support.design.widget.AppBarLayout
                if (r0 == 0) goto La
                android.support.design.widget.AppBarLayout r4 = (android.support.design.widget.AppBarLayout) r4
                r1.updateFabVisibilityForAppBarLayout(r2, r4, r3)
                goto L13
            La:
                boolean r2 = isBottomSheet(r4)
                if (r2 == 0) goto L13
                r1.updateFabVisibilityForBottomSheet(r4, r3)
            L13:
                r2 = 0
                return r2
        }

        @Override
        public boolean onDependentViewChanged(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, android.view.View r3) {
                r0 = this;
                android.support.design.widget.FloatingActionButton r2 = (android.support.design.widget.FloatingActionButton) r2
                boolean r1 = r0.onDependentViewChanged(r1, r2, r3)
                return r1
        }

        public boolean onLayoutChild(android.support.design.widget.CoordinatorLayout r6, android.support.design.widget.FloatingActionButton r7, int r8) {
                r5 = this;
                java.util.List r0 = r6.getDependencies(r7)
                int r1 = r0.size()
                r2 = 0
            L9:
                if (r2 >= r1) goto L2e
                java.lang.Object r3 = r0.get(r2)
                android.view.View r3 = (android.view.View) r3
                boolean r4 = r3 instanceof android.support.design.widget.AppBarLayout
                if (r4 == 0) goto L1e
                android.support.design.widget.AppBarLayout r3 = (android.support.design.widget.AppBarLayout) r3
                boolean r3 = r5.updateFabVisibilityForAppBarLayout(r6, r3, r7)
                if (r3 == 0) goto L2b
                goto L2e
            L1e:
                boolean r4 = isBottomSheet(r3)
                if (r4 == 0) goto L2b
                boolean r3 = r5.updateFabVisibilityForBottomSheet(r3, r7)
                if (r3 == 0) goto L2b
                goto L2e
            L2b:
                int r2 = r2 + 1
                goto L9
            L2e:
                r6.onLayoutChild(r7, r8)
                r5.offsetIfNeeded(r6, r7)
                r6 = 1
                return r6
        }

        @Override
        public boolean onLayoutChild(android.support.design.widget.CoordinatorLayout r1, android.view.View r2, int r3) {
                r0 = this;
                android.support.design.widget.FloatingActionButton r2 = (android.support.design.widget.FloatingActionButton) r2
                boolean r1 = r0.onLayoutChild(r1, r2, r3)
                return r1
        }

        public void setAutoHideEnabled(boolean r1) {
                r0 = this;
                r0.autoHideEnabled = r1
                return
        }

        public void setInternalAutoHideListener(android.support.design.widget.FloatingActionButton.OnVisibilityChangedListener r1) {
                r0 = this;
                r0.internalAutoHideListener = r1
                return
        }
    }

    public static class Behavior extends android.support.design.widget.FloatingActionButton.BaseBehavior<android.support.design.widget.FloatingActionButton> {
        public Behavior() {
                r0 = this;
                r0.<init>()
                return
        }

        public Behavior(android.content.Context r1, android.util.AttributeSet r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        @Override
        public boolean getInsetDodgeRect(android.support.design.widget.CoordinatorLayout r1, android.support.design.widget.FloatingActionButton r2, android.graphics.Rect r3) {
                r0 = this;
                boolean r1 = super.getInsetDodgeRect(r1, r2, r3)
                return r1
        }

        @Override
        public boolean isAutoHideEnabled() {
                r1 = this;
                boolean r0 = super.isAutoHideEnabled()
                return r0
        }

        @Override
        public void onAttachedToLayoutParams(android.support.design.widget.CoordinatorLayout.LayoutParams r1) {
                r0 = this;
                super.onAttachedToLayoutParams(r1)
                return
        }

        @Override
        public boolean onDependentViewChanged(android.support.design.widget.CoordinatorLayout r1, android.support.design.widget.FloatingActionButton r2, android.view.View r3) {
                r0 = this;
                boolean r1 = super.onDependentViewChanged(r1, r2, r3)
                return r1
        }

        @Override
        public boolean onLayoutChild(android.support.design.widget.CoordinatorLayout r1, android.support.design.widget.FloatingActionButton r2, int r3) {
                r0 = this;
                boolean r1 = super.onLayoutChild(r1, r2, r3)
                return r1
        }

        @Override
        public void setAutoHideEnabled(boolean r1) {
                r0 = this;
                super.setAutoHideEnabled(r1)
                return
        }

        @Override
        public void setInternalAutoHideListener(android.support.design.widget.FloatingActionButton.OnVisibilityChangedListener r1) {
                r0 = this;
                super.setInternalAutoHideListener(r1)
                return
        }
    }

    public static abstract class OnVisibilityChangedListener {
        public OnVisibilityChangedListener() {
                r0 = this;
                r0.<init>()
                return
        }

        public void onHidden(android.support.design.widget.FloatingActionButton r1) {
                r0 = this;
                return
        }

        public void onShown(android.support.design.widget.FloatingActionButton r1) {
                r0 = this;
                return
        }
    }

    private class ShadowDelegateImpl implements android.support.design.widget.ShadowViewDelegate {
        final android.support.design.widget.FloatingActionButton this$0;

        ShadowDelegateImpl(android.support.design.widget.FloatingActionButton r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public float getRadius() {
                r2 = this;
                android.support.design.widget.FloatingActionButton r0 = r2.this$0
                int r0 = r0.getSizeDimension()
                float r0 = (float) r0
                r1 = 1073741824(0x40000000, float:2.0)
                float r0 = r0 / r1
                return r0
        }

        @Override
        public boolean isCompatPaddingEnabled() {
                r1 = this;
                android.support.design.widget.FloatingActionButton r0 = r1.this$0
                boolean r0 = r0.compatPadding
                return r0
        }

        @Override
        public void setBackgroundDrawable(android.graphics.drawable.Drawable r2) {
                r1 = this;
                android.support.design.widget.FloatingActionButton r0 = r1.this$0
                android.support.design.widget.FloatingActionButton.access$101(r0, r2)
                return
        }

        @Override
        public void setShadowPadding(int r3, int r4, int r5, int r6) {
                r2 = this;
                android.support.design.widget.FloatingActionButton r0 = r2.this$0
                android.graphics.Rect r0 = r0.shadowPadding
                r0.set(r3, r4, r5, r6)
                android.support.design.widget.FloatingActionButton r0 = r2.this$0
                int r1 = android.support.design.widget.FloatingActionButton.access$000(r0)
                int r3 = r3 + r1
                android.support.design.widget.FloatingActionButton r1 = r2.this$0
                int r1 = android.support.design.widget.FloatingActionButton.access$000(r1)
                int r4 = r4 + r1
                android.support.design.widget.FloatingActionButton r1 = r2.this$0
                int r1 = android.support.design.widget.FloatingActionButton.access$000(r1)
                int r5 = r5 + r1
                android.support.design.widget.FloatingActionButton r1 = r2.this$0
                int r1 = android.support.design.widget.FloatingActionButton.access$000(r1)
                int r6 = r6 + r1
                r0.setPadding(r3, r4, r5, r6)
                return
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface Size {
    }

    public FloatingActionButton(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public FloatingActionButton(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.design.R.attr.floatingActionButtonStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public FloatingActionButton(android.content.Context r8, android.util.AttributeSet r9, int r10) {
            r7 = this;
            r7.<init>(r8, r9, r10)
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r7.shadowPadding = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r7.touchArea = r0
            int[] r3 = android.support.design.R.styleable.FloatingActionButton
            int r5 = android.support.design.R.style.Widget_Design_FloatingActionButton
            r0 = 0
            int[] r6 = new int[r0]
            r1 = r8
            r2 = r9
            r4 = r10
            android.content.res.TypedArray r1 = android.support.design.internal.ThemeEnforcement.obtainStyledAttributes(r1, r2, r3, r4, r5, r6)
            int r2 = android.support.design.R.styleable.FloatingActionButton_backgroundTint
            android.content.res.ColorStateList r2 = android.support.design.resources.MaterialResources.getColorStateList(r8, r1, r2)
            r7.backgroundTint = r2
            int r2 = android.support.design.R.styleable.FloatingActionButton_backgroundTintMode
            r3 = -1
            int r2 = r1.getInt(r2, r3)
            r4 = 0
            android.graphics.PorterDuff$Mode r2 = android.support.design.internal.ViewUtils.parseTintMode(r2, r4)
            r7.backgroundTintMode = r2
            int r2 = android.support.design.R.styleable.FloatingActionButton_rippleColor
            android.content.res.ColorStateList r2 = android.support.design.resources.MaterialResources.getColorStateList(r8, r1, r2)
            r7.rippleColor = r2
            int r2 = android.support.design.R.styleable.FloatingActionButton_fabSize
            int r2 = r1.getInt(r2, r3)
            r7.size = r2
            int r2 = android.support.design.R.styleable.FloatingActionButton_fabCustomSize
            int r2 = r1.getDimensionPixelSize(r2, r0)
            r7.customSize = r2
            int r2 = android.support.design.R.styleable.FloatingActionButton_borderWidth
            int r2 = r1.getDimensionPixelSize(r2, r0)
            r7.borderWidth = r2
            int r2 = android.support.design.R.styleable.FloatingActionButton_elevation
            r3 = 0
            float r2 = r1.getDimension(r2, r3)
            int r4 = android.support.design.R.styleable.FloatingActionButton_hoveredFocusedTranslationZ
            float r4 = r1.getDimension(r4, r3)
            int r5 = android.support.design.R.styleable.FloatingActionButton_pressedTranslationZ
            float r3 = r1.getDimension(r5, r3)
            int r5 = android.support.design.R.styleable.FloatingActionButton_useCompatPadding
            boolean r5 = r1.getBoolean(r5, r0)
            r7.compatPadding = r5
            int r5 = android.support.design.R.styleable.FloatingActionButton_maxImageSize
            int r0 = r1.getDimensionPixelSize(r5, r0)
            r7.maxImageSize = r0
            int r0 = android.support.design.R.styleable.FloatingActionButton_showMotionSpec
            android.support.design.animation.MotionSpec r0 = android.support.design.animation.MotionSpec.createFromAttribute(r8, r1, r0)
            int r5 = android.support.design.R.styleable.FloatingActionButton_hideMotionSpec
            android.support.design.animation.MotionSpec r8 = android.support.design.animation.MotionSpec.createFromAttribute(r8, r1, r5)
            r1.recycle()
            android.support.v7.widget.AppCompatImageHelper r1 = new android.support.v7.widget.AppCompatImageHelper
            r1.<init>(r7)
            r7.imageHelper = r1
            r1.loadFromAttributes(r9, r10)
            android.support.design.expandable.ExpandableWidgetHelper r9 = new android.support.design.expandable.ExpandableWidgetHelper
            r9.<init>(r7)
            r7.expandableWidgetHelper = r9
            android.support.design.widget.FloatingActionButtonImpl r9 = r7.getImpl()
            android.content.res.ColorStateList r10 = r7.backgroundTint
            android.graphics.PorterDuff$Mode r1 = r7.backgroundTintMode
            android.content.res.ColorStateList r5 = r7.rippleColor
            int r6 = r7.borderWidth
            r9.setBackgroundDrawable(r10, r1, r5, r6)
            android.support.design.widget.FloatingActionButtonImpl r9 = r7.getImpl()
            r9.setElevation(r2)
            android.support.design.widget.FloatingActionButtonImpl r9 = r7.getImpl()
            r9.setHoveredFocusedTranslationZ(r4)
            android.support.design.widget.FloatingActionButtonImpl r9 = r7.getImpl()
            r9.setPressedTranslationZ(r3)
            android.support.design.widget.FloatingActionButtonImpl r9 = r7.getImpl()
            int r10 = r7.maxImageSize
            r9.setMaxImageSize(r10)
            android.support.design.widget.FloatingActionButtonImpl r9 = r7.getImpl()
            r9.setShowMotionSpec(r0)
            android.support.design.widget.FloatingActionButtonImpl r9 = r7.getImpl()
            r9.setHideMotionSpec(r8)
            android.widget.ImageView$ScaleType r8 = android.widget.ImageView.ScaleType.MATRIX
            r7.setScaleType(r8)
            return
    }

    static int access$000(android.support.design.widget.FloatingActionButton r0) {
            int r0 = r0.imagePadding
            return r0
    }

    static void access$101(android.support.design.widget.FloatingActionButton r0, android.graphics.drawable.Drawable r1) {
            super.setBackgroundDrawable(r1)
            return
    }

    private android.support.design.widget.FloatingActionButtonImpl createImpl() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L11
            android.support.design.widget.FloatingActionButtonImplLollipop r0 = new android.support.design.widget.FloatingActionButtonImplLollipop
            android.support.design.widget.FloatingActionButton$ShadowDelegateImpl r1 = new android.support.design.widget.FloatingActionButton$ShadowDelegateImpl
            r1.<init>(r2)
            r0.<init>(r2, r1)
            return r0
        L11:
            android.support.design.widget.FloatingActionButtonImpl r0 = new android.support.design.widget.FloatingActionButtonImpl
            android.support.design.widget.FloatingActionButton$ShadowDelegateImpl r1 = new android.support.design.widget.FloatingActionButton$ShadowDelegateImpl
            r1.<init>(r2)
            r0.<init>(r2, r1)
            return r0
    }

    private android.support.design.widget.FloatingActionButtonImpl getImpl() {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.impl
            if (r0 != 0) goto La
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.createImpl()
            r1.impl = r0
        La:
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.impl
            return r0
    }

    private int getSizeDimension(int r4) {
            r3 = this;
            int r0 = r3.customSize
            if (r0 == 0) goto L5
            return r0
        L5:
            android.content.res.Resources r0 = r3.getResources()
            r1 = -1
            r2 = 1
            if (r4 == r1) goto L1d
            if (r4 == r2) goto L16
            int r4 = android.support.design.R.dimen.design_fab_size_normal
            int r4 = r0.getDimensionPixelSize(r4)
            return r4
        L16:
            int r4 = android.support.design.R.dimen.design_fab_size_mini
            int r4 = r0.getDimensionPixelSize(r4)
            return r4
        L1d:
            android.content.res.Configuration r4 = r0.getConfiguration()
            int r4 = r4.screenWidthDp
            android.content.res.Configuration r0 = r0.getConfiguration()
            int r0 = r0.screenHeightDp
            int r4 = java.lang.Math.max(r4, r0)
            r0 = 470(0x1d6, float:6.59E-43)
            if (r4 >= r0) goto L36
            int r4 = r3.getSizeDimension(r2)
            goto L3b
        L36:
            r4 = 0
            int r4 = r3.getSizeDimension(r4)
        L3b:
            return r4
    }

    private void offsetRectWithShadow(android.graphics.Rect r3) {
            r2 = this;
            int r0 = r3.left
            android.graphics.Rect r1 = r2.shadowPadding
            int r1 = r1.left
            int r0 = r0 + r1
            r3.left = r0
            int r0 = r3.top
            android.graphics.Rect r1 = r2.shadowPadding
            int r1 = r1.top
            int r0 = r0 + r1
            r3.top = r0
            int r0 = r3.right
            android.graphics.Rect r1 = r2.shadowPadding
            int r1 = r1.right
            int r0 = r0 - r1
            r3.right = r0
            int r0 = r3.bottom
            android.graphics.Rect r1 = r2.shadowPadding
            int r1 = r1.bottom
            int r0 = r0 - r1
            r3.bottom = r0
            return
    }

    private void onApplySupportImageTint() {
            r4 = this;
            android.graphics.drawable.Drawable r0 = r4.getDrawable()
            if (r0 != 0) goto L7
            return
        L7:
            android.content.res.ColorStateList r1 = r4.imageTint
            if (r1 != 0) goto Lf
            android.support.v4.graphics.drawable.DrawableCompat.clearColorFilter(r0)
            return
        Lf:
            int[] r2 = r4.getDrawableState()
            r3 = 0
            int r1 = r1.getColorForState(r2, r3)
            android.graphics.PorterDuff$Mode r2 = r4.imageMode
            if (r2 != 0) goto L1e
            android.graphics.PorterDuff$Mode r2 = android.graphics.PorterDuff.Mode.SRC_IN
        L1e:
            android.graphics.drawable.Drawable r0 = r0.mutate()
            android.graphics.PorterDuffColorFilter r1 = android.support.v7.widget.AppCompatDrawableManager.getPorterDuffColorFilter(r1, r2)
            r0.setColorFilter(r1)
            return
    }

    private static int resolveAdjustedSize(int r2, int r3) {
            int r0 = android.view.View.MeasureSpec.getMode(r3)
            int r3 = android.view.View.MeasureSpec.getSize(r3)
            r1 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r0 == r1) goto L1a
            if (r0 == 0) goto L1e
            r2 = 1073741824(0x40000000, float:2.0)
            if (r0 != r2) goto L14
            r2 = r3
            goto L1e
        L14:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            r2.<init>()
            throw r2
        L1a:
            int r2 = java.lang.Math.min(r2, r3)
        L1e:
            return r2
    }

    private android.support.design.widget.FloatingActionButtonImpl.InternalVisibilityChangedListener wrapOnVisibilityChangedListener(android.support.design.widget.FloatingActionButton.OnVisibilityChangedListener r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            android.support.design.widget.FloatingActionButton$1 r0 = new android.support.design.widget.FloatingActionButton$1
            r0.<init>(r1, r2)
            return r0
    }

    public void addOnHideAnimationListener(android.animation.Animator.AnimatorListener r2) {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            r0.addOnHideAnimationListener(r2)
            return
    }

    public void addOnShowAnimationListener(android.animation.Animator.AnimatorListener r2) {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            r0.addOnShowAnimationListener(r2)
            return
    }

    public void clearCustomSize() {
            r1 = this;
            r0 = 0
            r1.setCustomSize(r0)
            return
    }

    @Override
    protected void drawableStateChanged() {
            r2 = this;
            super.drawableStateChanged()
            android.support.design.widget.FloatingActionButtonImpl r0 = r2.getImpl()
            int[] r1 = r2.getDrawableState()
            r0.onDrawableStateChanged(r1)
            return
    }

    @Override
    public android.content.res.ColorStateList getBackgroundTintList() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.backgroundTint
            return r0
    }

    @Override
    public android.graphics.PorterDuff.Mode getBackgroundTintMode() {
            r1 = this;
            android.graphics.PorterDuff$Mode r0 = r1.backgroundTintMode
            return r0
    }

    public float getCompatElevation() {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            float r0 = r0.getElevation()
            return r0
    }

    public float getCompatHoveredFocusedTranslationZ() {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            float r0 = r0.getHoveredFocusedTranslationZ()
            return r0
    }

    public float getCompatPressedTranslationZ() {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            float r0 = r0.getPressedTranslationZ()
            return r0
    }

    public android.graphics.drawable.Drawable getContentBackground() {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            android.graphics.drawable.Drawable r0 = r0.getContentBackground()
            return r0
    }

    @java.lang.Deprecated
    public boolean getContentRect(android.graphics.Rect r4) {
            r3 = this;
            boolean r0 = android.support.v4.view.ViewCompat.isLaidOut(r3)
            r1 = 0
            if (r0 == 0) goto L17
            int r0 = r3.getWidth()
            int r2 = r3.getHeight()
            r4.set(r1, r1, r0, r2)
            r3.offsetRectWithShadow(r4)
            r4 = 1
            return r4
        L17:
            return r1
    }

    public int getCustomSize() {
            r1 = this;
            int r0 = r1.customSize
            return r0
    }

    @Override
    public int getExpandedComponentIdHint() {
            r1 = this;
            android.support.design.expandable.ExpandableWidgetHelper r0 = r1.expandableWidgetHelper
            int r0 = r0.getExpandedComponentIdHint()
            return r0
    }

    public android.support.design.animation.MotionSpec getHideMotionSpec() {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            android.support.design.animation.MotionSpec r0 = r0.getHideMotionSpec()
            return r0
    }

    public void getMeasuredContentRect(android.graphics.Rect r4) {
            r3 = this;
            int r0 = r3.getMeasuredWidth()
            int r1 = r3.getMeasuredHeight()
            r2 = 0
            r4.set(r2, r2, r0, r1)
            r3.offsetRectWithShadow(r4)
            return
    }

    @java.lang.Deprecated
    public int getRippleColor() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.rippleColor
            if (r0 == 0) goto L9
            int r0 = r0.getDefaultColor()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    public android.content.res.ColorStateList getRippleColorStateList() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.rippleColor
            return r0
    }

    public android.support.design.animation.MotionSpec getShowMotionSpec() {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            android.support.design.animation.MotionSpec r0 = r0.getShowMotionSpec()
            return r0
    }

    public int getSize() {
            r1 = this;
            int r0 = r1.size
            return r0
    }

    int getSizeDimension() {
            r1 = this;
            int r0 = r1.size
            int r0 = r1.getSizeDimension(r0)
            return r0
    }

    @Override
    public android.content.res.ColorStateList getSupportBackgroundTintList() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.getBackgroundTintList()
            return r0
    }

    @Override
    public android.graphics.PorterDuff.Mode getSupportBackgroundTintMode() {
            r1 = this;
            android.graphics.PorterDuff$Mode r0 = r1.getBackgroundTintMode()
            return r0
    }

    @Override
    public android.content.res.ColorStateList getSupportImageTintList() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.imageTint
            return r0
    }

    @Override
    public android.graphics.PorterDuff.Mode getSupportImageTintMode() {
            r1 = this;
            android.graphics.PorterDuff$Mode r0 = r1.imageMode
            return r0
    }

    public boolean getUseCompatPadding() {
            r1 = this;
            boolean r0 = r1.compatPadding
            return r0
    }

    public void hide() {
            r1 = this;
            r0 = 0
            r1.hide(r0)
            return
    }

    public void hide(android.support.design.widget.FloatingActionButton.OnVisibilityChangedListener r2) {
            r1 = this;
            r0 = 1
            r1.hide(r2, r0)
            return
    }

    void hide(android.support.design.widget.FloatingActionButton.OnVisibilityChangedListener r2, boolean r3) {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            android.support.design.widget.FloatingActionButtonImpl$InternalVisibilityChangedListener r2 = r1.wrapOnVisibilityChangedListener(r2)
            r0.hide(r2, r3)
            return
    }

    @Override
    public boolean isExpanded() {
            r1 = this;
            android.support.design.expandable.ExpandableWidgetHelper r0 = r1.expandableWidgetHelper
            boolean r0 = r0.isExpanded()
            return r0
    }

    public boolean isOrWillBeHidden() {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            boolean r0 = r0.isOrWillBeHidden()
            return r0
    }

    public boolean isOrWillBeShown() {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            boolean r0 = r0.isOrWillBeShown()
            return r0
    }

    @Override
    public void jumpDrawablesToCurrentState() {
            r1 = this;
            super.jumpDrawablesToCurrentState()
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            r0.jumpDrawableToCurrentState()
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            r0.onAttachedToWindow()
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            r0.onDetachedFromWindow()
            return
    }

    @Override
    protected void onMeasure(int r3, int r4) {
            r2 = this;
            int r0 = r2.getSizeDimension()
            int r1 = r2.maxImageSize
            int r1 = r0 - r1
            int r1 = r1 / 2
            r2.imagePadding = r1
            android.support.design.widget.FloatingActionButtonImpl r1 = r2.getImpl()
            r1.updatePadding()
            int r3 = resolveAdjustedSize(r0, r3)
            int r4 = resolveAdjustedSize(r0, r4)
            int r3 = java.lang.Math.min(r3, r4)
            android.graphics.Rect r4 = r2.shadowPadding
            int r4 = r4.left
            int r4 = r4 + r3
            android.graphics.Rect r0 = r2.shadowPadding
            int r0 = r0.right
            int r4 = r4 + r0
            android.graphics.Rect r0 = r2.shadowPadding
            int r0 = r0.top
            int r3 = r3 + r0
            android.graphics.Rect r0 = r2.shadowPadding
            int r0 = r0.bottom
            int r3 = r3 + r0
            r2.setMeasuredDimension(r4, r3)
            return
    }

    @Override
    protected void onRestoreInstanceState(android.os.Parcelable r3) {
            r2 = this;
            boolean r0 = r3 instanceof android.support.design.stateful.ExtendableSavedState
            if (r0 != 0) goto L8
            super.onRestoreInstanceState(r3)
            return
        L8:
            android.support.design.stateful.ExtendableSavedState r3 = (android.support.design.stateful.ExtendableSavedState) r3
            android.os.Parcelable r0 = r3.getSuperState()
            super.onRestoreInstanceState(r0)
            android.support.design.expandable.ExpandableWidgetHelper r0 = r2.expandableWidgetHelper
            android.support.v4.util.SimpleArrayMap<java.lang.String, android.os.Bundle> r3 = r3.extendableStates
            java.lang.String r1 = "expandableWidgetHelper"
            java.lang.Object r3 = r3.get(r1)
            android.os.Bundle r3 = (android.os.Bundle) r3
            r0.onRestoreInstanceState(r3)
            return
    }

    @Override
    protected android.os.Parcelable onSaveInstanceState() {
            r4 = this;
            android.os.Parcelable r0 = super.onSaveInstanceState()
            android.support.design.stateful.ExtendableSavedState r1 = new android.support.design.stateful.ExtendableSavedState
            r1.<init>(r0)
            android.support.v4.util.SimpleArrayMap<java.lang.String, android.os.Bundle> r0 = r1.extendableStates
            android.support.design.expandable.ExpandableWidgetHelper r2 = r4.expandableWidgetHelper
            android.os.Bundle r2 = r2.onSaveInstanceState()
            java.lang.String r3 = "expandableWidgetHelper"
            r0.put(r3, r2)
            return r1
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r4) {
            r3 = this;
            int r0 = r4.getAction()
            if (r0 != 0) goto L22
            android.graphics.Rect r0 = r3.touchArea
            boolean r0 = r3.getContentRect(r0)
            if (r0 == 0) goto L22
            android.graphics.Rect r0 = r3.touchArea
            float r1 = r4.getX()
            int r1 = (int) r1
            float r2 = r4.getY()
            int r2 = (int) r2
            boolean r0 = r0.contains(r1, r2)
            if (r0 != 0) goto L22
            r4 = 0
            return r4
        L22:
            boolean r4 = super.onTouchEvent(r4)
            return r4
    }

    public void removeOnHideAnimationListener(android.animation.Animator.AnimatorListener r2) {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            r0.removeOnHideAnimationListener(r2)
            return
    }

    public void removeOnShowAnimationListener(android.animation.Animator.AnimatorListener r2) {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            r0.removeOnShowAnimationListener(r2)
            return
    }

    @Override
    public void setBackgroundColor(int r2) {
            r1 = this;
            java.lang.String r2 = "FloatingActionButton"
            java.lang.String r0 = "Setting a custom background is not supported."
            android.util.Log.i(r2, r0)
            return
    }

    @Override
    public void setBackgroundDrawable(android.graphics.drawable.Drawable r2) {
            r1 = this;
            java.lang.String r2 = "FloatingActionButton"
            java.lang.String r0 = "Setting a custom background is not supported."
            android.util.Log.i(r2, r0)
            return
    }

    @Override
    public void setBackgroundResource(int r2) {
            r1 = this;
            java.lang.String r2 = "FloatingActionButton"
            java.lang.String r0 = "Setting a custom background is not supported."
            android.util.Log.i(r2, r0)
            return
    }

    @Override
    public void setBackgroundTintList(android.content.res.ColorStateList r2) {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.backgroundTint
            if (r0 == r2) goto Ld
            r1.backgroundTint = r2
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            r0.setBackgroundTintList(r2)
        Ld:
            return
    }

    @Override
    public void setBackgroundTintMode(android.graphics.PorterDuff.Mode r2) {
            r1 = this;
            android.graphics.PorterDuff$Mode r0 = r1.backgroundTintMode
            if (r0 == r2) goto Ld
            r1.backgroundTintMode = r2
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            r0.setBackgroundTintMode(r2)
        Ld:
            return
    }

    public void setCompatElevation(float r2) {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            r0.setElevation(r2)
            return
    }

    public void setCompatElevationResource(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            float r2 = r0.getDimension(r2)
            r1.setCompatElevation(r2)
            return
    }

    public void setCompatHoveredFocusedTranslationZ(float r2) {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            r0.setHoveredFocusedTranslationZ(r2)
            return
    }

    public void setCompatHoveredFocusedTranslationZResource(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            float r2 = r0.getDimension(r2)
            r1.setCompatHoveredFocusedTranslationZ(r2)
            return
    }

    public void setCompatPressedTranslationZ(float r2) {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            r0.setPressedTranslationZ(r2)
            return
    }

    public void setCompatPressedTranslationZResource(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            float r2 = r0.getDimension(r2)
            r1.setCompatPressedTranslationZ(r2)
            return
    }

    public void setCustomSize(int r2) {
            r1 = this;
            if (r2 < 0) goto L5
            r1.customSize = r2
            return
        L5:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Custom size must be non-negative"
            r2.<init>(r0)
            throw r2
    }

    @Override
    public boolean setExpanded(boolean r2) {
            r1 = this;
            android.support.design.expandable.ExpandableWidgetHelper r0 = r1.expandableWidgetHelper
            boolean r2 = r0.setExpanded(r2)
            return r2
    }

    @Override
    public void setExpandedComponentIdHint(int r2) {
            r1 = this;
            android.support.design.expandable.ExpandableWidgetHelper r0 = r1.expandableWidgetHelper
            r0.setExpandedComponentIdHint(r2)
            return
    }

    public void setHideMotionSpec(android.support.design.animation.MotionSpec r2) {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            r0.setHideMotionSpec(r2)
            return
    }

    public void setHideMotionSpecResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            android.support.design.animation.MotionSpec r2 = android.support.design.animation.MotionSpec.createFromResource(r0, r2)
            r1.setHideMotionSpec(r2)
            return
    }

    @Override
    public void setImageDrawable(android.graphics.drawable.Drawable r1) {
            r0 = this;
            super.setImageDrawable(r1)
            android.support.design.widget.FloatingActionButtonImpl r1 = r0.getImpl()
            r1.updateImageMatrixScale()
            return
    }

    @Override
    public void setImageResource(int r2) {
            r1 = this;
            android.support.v7.widget.AppCompatImageHelper r0 = r1.imageHelper
            r0.setImageResource(r2)
            return
    }

    public void setRippleColor(int r1) {
            r0 = this;
            android.content.res.ColorStateList r1 = android.content.res.ColorStateList.valueOf(r1)
            r0.setRippleColor(r1)
            return
    }

    public void setRippleColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.rippleColor
            if (r0 == r2) goto Lf
            r1.rippleColor = r2
            android.support.design.widget.FloatingActionButtonImpl r2 = r1.getImpl()
            android.content.res.ColorStateList r0 = r1.rippleColor
            r2.setRippleColor(r0)
        Lf:
            return
    }

    public void setShowMotionSpec(android.support.design.animation.MotionSpec r2) {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            r0.setShowMotionSpec(r2)
            return
    }

    public void setShowMotionSpecResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            android.support.design.animation.MotionSpec r2 = android.support.design.animation.MotionSpec.createFromResource(r0, r2)
            r1.setShowMotionSpec(r2)
            return
    }

    public void setSize(int r2) {
            r1 = this;
            r0 = 0
            r1.customSize = r0
            int r0 = r1.size
            if (r2 == r0) goto Lc
            r1.size = r2
            r1.requestLayout()
        Lc:
            return
    }

    @Override
    public void setSupportBackgroundTintList(android.content.res.ColorStateList r1) {
            r0 = this;
            r0.setBackgroundTintList(r1)
            return
    }

    @Override
    public void setSupportBackgroundTintMode(android.graphics.PorterDuff.Mode r1) {
            r0 = this;
            r0.setBackgroundTintMode(r1)
            return
    }

    @Override
    public void setSupportImageTintList(android.content.res.ColorStateList r2) {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.imageTint
            if (r0 == r2) goto L9
            r1.imageTint = r2
            r1.onApplySupportImageTint()
        L9:
            return
    }

    @Override
    public void setSupportImageTintMode(android.graphics.PorterDuff.Mode r2) {
            r1 = this;
            android.graphics.PorterDuff$Mode r0 = r1.imageMode
            if (r0 == r2) goto L9
            r1.imageMode = r2
            r1.onApplySupportImageTint()
        L9:
            return
    }

    public void setUseCompatPadding(boolean r2) {
            r1 = this;
            boolean r0 = r1.compatPadding
            if (r0 == r2) goto Ld
            r1.compatPadding = r2
            android.support.design.widget.FloatingActionButtonImpl r2 = r1.getImpl()
            r2.onCompatShadowChanged()
        Ld:
            return
    }

    public void show() {
            r1 = this;
            r0 = 0
            r1.show(r0)
            return
    }

    public void show(android.support.design.widget.FloatingActionButton.OnVisibilityChangedListener r2) {
            r1 = this;
            r0 = 1
            r1.show(r2, r0)
            return
    }

    void show(android.support.design.widget.FloatingActionButton.OnVisibilityChangedListener r2, boolean r3) {
            r1 = this;
            android.support.design.widget.FloatingActionButtonImpl r0 = r1.getImpl()
            android.support.design.widget.FloatingActionButtonImpl$InternalVisibilityChangedListener r2 = r1.wrapOnVisibilityChangedListener(r2)
            r0.show(r2, r3)
            return
    }
}
