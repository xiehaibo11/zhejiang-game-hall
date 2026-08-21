package android.support.design.widget;

public class CollapsingToolbarLayout extends android.widget.FrameLayout {
    private static final int DEFAULT_SCRIM_ANIMATION_DURATION = 600;
    final android.support.design.widget.CollapsingTextHelper collapsingTextHelper;
    private boolean collapsingTitleEnabled;
    private android.graphics.drawable.Drawable contentScrim;
    int currentOffset;
    private boolean drawCollapsingTitle;
    private android.view.View dummyView;
    private int expandedMarginBottom;
    private int expandedMarginEnd;
    private int expandedMarginStart;
    private int expandedMarginTop;
    android.support.v4.view.WindowInsetsCompat lastInsets;
    private android.support.design.widget.AppBarLayout.OnOffsetChangedListener onOffsetChangedListener;
    private boolean refreshToolbar;
    private int scrimAlpha;
    private long scrimAnimationDuration;
    private android.animation.ValueAnimator scrimAnimator;
    private int scrimVisibleHeightTrigger;
    private boolean scrimsAreShown;
    android.graphics.drawable.Drawable statusBarScrim;
    private final android.graphics.Rect tmpRect;
    private android.support.v7.widget.Toolbar toolbar;
    private android.view.View toolbarDirectChild;
    private int toolbarId;



    public static class LayoutParams extends android.widget.FrameLayout.LayoutParams {
        public static final int COLLAPSE_MODE_OFF = 0;
        public static final int COLLAPSE_MODE_PARALLAX = 2;
        public static final int COLLAPSE_MODE_PIN = 1;
        private static final float DEFAULT_PARALLAX_MULTIPLIER = 0.5f;
        int collapseMode;
        float parallaxMult;

        public LayoutParams(int r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                r1 = 0
                r0.collapseMode = r1
                r1 = 1056964608(0x3f000000, float:0.5)
                r0.parallaxMult = r1
                return
        }

        public LayoutParams(int r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                r1 = 0
                r0.collapseMode = r1
                r1 = 1056964608(0x3f000000, float:0.5)
                r0.parallaxMult = r1
                return
        }

        public LayoutParams(android.content.Context r4, android.util.AttributeSet r5) {
                r3 = this;
                r3.<init>(r4, r5)
                r0 = 0
                r3.collapseMode = r0
                r1 = 1056964608(0x3f000000, float:0.5)
                r3.parallaxMult = r1
                int[] r2 = android.support.design.R.styleable.CollapsingToolbarLayout_Layout
                android.content.res.TypedArray r4 = r4.obtainStyledAttributes(r5, r2)
                int r5 = android.support.design.R.styleable.CollapsingToolbarLayout_Layout_layout_collapseMode
                int r5 = r4.getInt(r5, r0)
                r3.collapseMode = r5
                int r5 = android.support.design.R.styleable.CollapsingToolbarLayout_Layout_layout_collapseParallaxMultiplier
                float r5 = r4.getFloat(r5, r1)
                r3.setParallaxMultiplier(r5)
                r4.recycle()
                return
        }

        public LayoutParams(android.view.ViewGroup.LayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                r1 = 0
                r0.collapseMode = r1
                r1 = 1056964608(0x3f000000, float:0.5)
                r0.parallaxMult = r1
                return
        }

        public LayoutParams(android.view.ViewGroup.MarginLayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                r1 = 0
                r0.collapseMode = r1
                r1 = 1056964608(0x3f000000, float:0.5)
                r0.parallaxMult = r1
                return
        }

        public LayoutParams(android.widget.FrameLayout.LayoutParams r1) {
                r0 = this;
                r0.<init>(r1)
                r1 = 0
                r0.collapseMode = r1
                r1 = 1056964608(0x3f000000, float:0.5)
                r0.parallaxMult = r1
                return
        }

        public int getCollapseMode() {
                r1 = this;
                int r0 = r1.collapseMode
                return r0
        }

        public float getParallaxMultiplier() {
                r1 = this;
                float r0 = r1.parallaxMult
                return r0
        }

        public void setCollapseMode(int r1) {
                r0 = this;
                r0.collapseMode = r1
                return
        }

        public void setParallaxMultiplier(float r1) {
                r0 = this;
                r0.parallaxMult = r1
                return
        }
    }

    private class OffsetUpdateListener implements android.support.design.widget.AppBarLayout.OnOffsetChangedListener {
        final android.support.design.widget.CollapsingToolbarLayout this$0;

        OffsetUpdateListener(android.support.design.widget.CollapsingToolbarLayout r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void onOffsetChanged(android.support.design.widget.AppBarLayout r9, int r10) {
                r8 = this;
                android.support.design.widget.CollapsingToolbarLayout r9 = r8.this$0
                r9.currentOffset = r10
                android.support.design.widget.CollapsingToolbarLayout r9 = r8.this$0
                android.support.v4.view.WindowInsetsCompat r9 = r9.lastInsets
                r0 = 0
                if (r9 == 0) goto L14
                android.support.design.widget.CollapsingToolbarLayout r9 = r8.this$0
                android.support.v4.view.WindowInsetsCompat r9 = r9.lastInsets
                int r9 = r9.getSystemWindowInsetTop()
                goto L15
            L14:
                r9 = r0
            L15:
                android.support.design.widget.CollapsingToolbarLayout r1 = r8.this$0
                int r1 = r1.getChildCount()
                r2 = r0
            L1c:
                if (r2 >= r1) goto L55
                android.support.design.widget.CollapsingToolbarLayout r3 = r8.this$0
                android.view.View r3 = r3.getChildAt(r2)
                android.view.ViewGroup$LayoutParams r4 = r3.getLayoutParams()
                android.support.design.widget.CollapsingToolbarLayout$LayoutParams r4 = (android.support.design.widget.CollapsingToolbarLayout.LayoutParams) r4
                android.support.design.widget.ViewOffsetHelper r5 = android.support.design.widget.CollapsingToolbarLayout.getViewOffsetHelper(r3)
                int r6 = r4.collapseMode
                r7 = 1
                if (r6 == r7) goto L44
                r3 = 2
                if (r6 == r3) goto L37
                goto L52
            L37:
                int r3 = -r10
                float r3 = (float) r3
                float r4 = r4.parallaxMult
                float r3 = r3 * r4
                int r3 = java.lang.Math.round(r3)
                r5.setTopAndBottomOffset(r3)
                goto L52
            L44:
                int r4 = -r10
                android.support.design.widget.CollapsingToolbarLayout r6 = r8.this$0
                int r3 = r6.getMaxOffsetForPinChild(r3)
                int r3 = android.support.v4.math.MathUtils.clamp(r4, r0, r3)
                r5.setTopAndBottomOffset(r3)
            L52:
                int r2 = r2 + 1
                goto L1c
            L55:
                android.support.design.widget.CollapsingToolbarLayout r0 = r8.this$0
                r0.updateScrimVisibility()
                android.support.design.widget.CollapsingToolbarLayout r0 = r8.this$0
                android.graphics.drawable.Drawable r0 = r0.statusBarScrim
                if (r0 == 0) goto L67
                if (r9 <= 0) goto L67
                android.support.design.widget.CollapsingToolbarLayout r0 = r8.this$0
                android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r0)
            L67:
                android.support.design.widget.CollapsingToolbarLayout r0 = r8.this$0
                int r0 = r0.getHeight()
                android.support.design.widget.CollapsingToolbarLayout r1 = r8.this$0
                int r1 = android.support.v4.view.ViewCompat.getMinimumHeight(r1)
                int r0 = r0 - r1
                int r0 = r0 - r9
                android.support.design.widget.CollapsingToolbarLayout r9 = r8.this$0
                android.support.design.widget.CollapsingTextHelper r9 = r9.collapsingTextHelper
                int r10 = java.lang.Math.abs(r10)
                float r10 = (float) r10
                float r0 = (float) r0
                float r10 = r10 / r0
                r9.setExpansionFraction(r10)
                return
        }
    }

    public CollapsingToolbarLayout(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public CollapsingToolbarLayout(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public CollapsingToolbarLayout(android.content.Context r11, android.util.AttributeSet r12, int r13) {
            r10 = this;
            r10.<init>(r11, r12, r13)
            r0 = 1
            r10.refreshToolbar = r0
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r10.tmpRect = r1
            r1 = -1
            r10.scrimVisibleHeightTrigger = r1
            android.support.design.widget.CollapsingTextHelper r2 = new android.support.design.widget.CollapsingTextHelper
            r2.<init>(r10)
            r10.collapsingTextHelper = r2
            android.animation.TimeInterpolator r3 = android.support.design.animation.AnimationUtils.DECELERATE_INTERPOLATOR
            r2.setTextSizeInterpolator(r3)
            int[] r6 = android.support.design.R.styleable.CollapsingToolbarLayout
            int r8 = android.support.design.R.style.Widget_Design_CollapsingToolbar
            r2 = 0
            int[] r9 = new int[r2]
            r4 = r11
            r5 = r12
            r7 = r13
            android.content.res.TypedArray r11 = android.support.design.internal.ThemeEnforcement.obtainStyledAttributes(r4, r5, r6, r7, r8, r9)
            android.support.design.widget.CollapsingTextHelper r12 = r10.collapsingTextHelper
            int r13 = android.support.design.R.styleable.CollapsingToolbarLayout_expandedTitleGravity
            r3 = 8388691(0x800053, float:1.175506E-38)
            int r13 = r11.getInt(r13, r3)
            r12.setExpandedTextGravity(r13)
            android.support.design.widget.CollapsingTextHelper r12 = r10.collapsingTextHelper
            int r13 = android.support.design.R.styleable.CollapsingToolbarLayout_collapsedTitleGravity
            r3 = 8388627(0x800013, float:1.175497E-38)
            int r13 = r11.getInt(r13, r3)
            r12.setCollapsedTextGravity(r13)
            int r12 = android.support.design.R.styleable.CollapsingToolbarLayout_expandedTitleMargin
            int r12 = r11.getDimensionPixelSize(r12, r2)
            r10.expandedMarginBottom = r12
            r10.expandedMarginEnd = r12
            r10.expandedMarginTop = r12
            r10.expandedMarginStart = r12
            int r12 = android.support.design.R.styleable.CollapsingToolbarLayout_expandedTitleMarginStart
            boolean r12 = r11.hasValue(r12)
            if (r12 == 0) goto L64
            int r12 = android.support.design.R.styleable.CollapsingToolbarLayout_expandedTitleMarginStart
            int r12 = r11.getDimensionPixelSize(r12, r2)
            r10.expandedMarginStart = r12
        L64:
            int r12 = android.support.design.R.styleable.CollapsingToolbarLayout_expandedTitleMarginEnd
            boolean r12 = r11.hasValue(r12)
            if (r12 == 0) goto L74
            int r12 = android.support.design.R.styleable.CollapsingToolbarLayout_expandedTitleMarginEnd
            int r12 = r11.getDimensionPixelSize(r12, r2)
            r10.expandedMarginEnd = r12
        L74:
            int r12 = android.support.design.R.styleable.CollapsingToolbarLayout_expandedTitleMarginTop
            boolean r12 = r11.hasValue(r12)
            if (r12 == 0) goto L84
            int r12 = android.support.design.R.styleable.CollapsingToolbarLayout_expandedTitleMarginTop
            int r12 = r11.getDimensionPixelSize(r12, r2)
            r10.expandedMarginTop = r12
        L84:
            int r12 = android.support.design.R.styleable.CollapsingToolbarLayout_expandedTitleMarginBottom
            boolean r12 = r11.hasValue(r12)
            if (r12 == 0) goto L94
            int r12 = android.support.design.R.styleable.CollapsingToolbarLayout_expandedTitleMarginBottom
            int r12 = r11.getDimensionPixelSize(r12, r2)
            r10.expandedMarginBottom = r12
        L94:
            int r12 = android.support.design.R.styleable.CollapsingToolbarLayout_titleEnabled
            boolean r12 = r11.getBoolean(r12, r0)
            r10.collapsingTitleEnabled = r12
            int r12 = android.support.design.R.styleable.CollapsingToolbarLayout_title
            java.lang.CharSequence r12 = r11.getText(r12)
            r10.setTitle(r12)
            android.support.design.widget.CollapsingTextHelper r12 = r10.collapsingTextHelper
            int r13 = android.support.design.R.style.TextAppearance_Design_CollapsingToolbar_Expanded
            r12.setExpandedTextAppearance(r13)
            android.support.design.widget.CollapsingTextHelper r12 = r10.collapsingTextHelper
            int r13 = android.support.v7.appcompat.R.style.TextAppearance_AppCompat_Widget_ActionBar_Title
            r12.setCollapsedTextAppearance(r13)
            int r12 = android.support.design.R.styleable.CollapsingToolbarLayout_expandedTitleTextAppearance
            boolean r12 = r11.hasValue(r12)
            if (r12 == 0) goto Lc6
            android.support.design.widget.CollapsingTextHelper r12 = r10.collapsingTextHelper
            int r13 = android.support.design.R.styleable.CollapsingToolbarLayout_expandedTitleTextAppearance
            int r13 = r11.getResourceId(r13, r2)
            r12.setExpandedTextAppearance(r13)
        Lc6:
            int r12 = android.support.design.R.styleable.CollapsingToolbarLayout_collapsedTitleTextAppearance
            boolean r12 = r11.hasValue(r12)
            if (r12 == 0) goto Ld9
            android.support.design.widget.CollapsingTextHelper r12 = r10.collapsingTextHelper
            int r13 = android.support.design.R.styleable.CollapsingToolbarLayout_collapsedTitleTextAppearance
            int r13 = r11.getResourceId(r13, r2)
            r12.setCollapsedTextAppearance(r13)
        Ld9:
            int r12 = android.support.design.R.styleable.CollapsingToolbarLayout_scrimVisibleHeightTrigger
            int r12 = r11.getDimensionPixelSize(r12, r1)
            r10.scrimVisibleHeightTrigger = r12
            int r12 = android.support.design.R.styleable.CollapsingToolbarLayout_scrimAnimationDuration
            r13 = 600(0x258, float:8.41E-43)
            int r12 = r11.getInt(r12, r13)
            long r12 = (long) r12
            r10.scrimAnimationDuration = r12
            int r12 = android.support.design.R.styleable.CollapsingToolbarLayout_contentScrim
            android.graphics.drawable.Drawable r12 = r11.getDrawable(r12)
            r10.setContentScrim(r12)
            int r12 = android.support.design.R.styleable.CollapsingToolbarLayout_statusBarScrim
            android.graphics.drawable.Drawable r12 = r11.getDrawable(r12)
            r10.setStatusBarScrim(r12)
            int r12 = android.support.design.R.styleable.CollapsingToolbarLayout_toolbarId
            int r12 = r11.getResourceId(r12, r1)
            r10.toolbarId = r12
            r11.recycle()
            r10.setWillNotDraw(r2)
            android.support.design.widget.CollapsingToolbarLayout$1 r11 = new android.support.design.widget.CollapsingToolbarLayout$1
            r11.<init>(r10)
            android.support.v4.view.ViewCompat.setOnApplyWindowInsetsListener(r10, r11)
            return
    }

    private void animateScrim(int r5) {
            r4 = this;
            r4.ensureToolbar()
            android.animation.ValueAnimator r0 = r4.scrimAnimator
            if (r0 != 0) goto L2c
            android.animation.ValueAnimator r0 = new android.animation.ValueAnimator
            r0.<init>()
            r4.scrimAnimator = r0
            long r1 = r4.scrimAnimationDuration
            r0.setDuration(r1)
            android.animation.ValueAnimator r0 = r4.scrimAnimator
            int r1 = r4.scrimAlpha
            if (r5 <= r1) goto L1c
            android.animation.TimeInterpolator r1 = android.support.design.animation.AnimationUtils.FAST_OUT_LINEAR_IN_INTERPOLATOR
            goto L1e
        L1c:
            android.animation.TimeInterpolator r1 = android.support.design.animation.AnimationUtils.LINEAR_OUT_SLOW_IN_INTERPOLATOR
        L1e:
            r0.setInterpolator(r1)
            android.animation.ValueAnimator r0 = r4.scrimAnimator
            android.support.design.widget.CollapsingToolbarLayout$2 r1 = new android.support.design.widget.CollapsingToolbarLayout$2
            r1.<init>(r4)
            r0.addUpdateListener(r1)
            goto L37
        L2c:
            boolean r0 = r0.isRunning()
            if (r0 == 0) goto L37
            android.animation.ValueAnimator r0 = r4.scrimAnimator
            r0.cancel()
        L37:
            android.animation.ValueAnimator r0 = r4.scrimAnimator
            r1 = 2
            int[] r1 = new int[r1]
            r2 = 0
            int r3 = r4.scrimAlpha
            r1[r2] = r3
            r2 = 1
            r1[r2] = r5
            r0.setIntValues(r1)
            android.animation.ValueAnimator r5 = r4.scrimAnimator
            r5.start()
            return
    }

    private void ensureToolbar() {
            r6 = this;
            boolean r0 = r6.refreshToolbar
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 0
            r6.toolbar = r0
            r6.toolbarDirectChild = r0
            int r1 = r6.toolbarId
            r2 = -1
            if (r1 == r2) goto L1f
            android.view.View r1 = r6.findViewById(r1)
            android.support.v7.widget.Toolbar r1 = (android.support.v7.widget.Toolbar) r1
            r6.toolbar = r1
            if (r1 == 0) goto L1f
            android.view.View r1 = r6.findDirectChild(r1)
            r6.toolbarDirectChild = r1
        L1f:
            android.support.v7.widget.Toolbar r1 = r6.toolbar
            r2 = 0
            if (r1 != 0) goto L3c
            int r1 = r6.getChildCount()
            r3 = r2
        L29:
            if (r3 >= r1) goto L3a
            android.view.View r4 = r6.getChildAt(r3)
            boolean r5 = r4 instanceof android.support.v7.widget.Toolbar
            if (r5 == 0) goto L37
            r0 = r4
            android.support.v7.widget.Toolbar r0 = (android.support.v7.widget.Toolbar) r0
            goto L3a
        L37:
            int r3 = r3 + 1
            goto L29
        L3a:
            r6.toolbar = r0
        L3c:
            r6.updateDummyView()
            r6.refreshToolbar = r2
            return
    }

    private android.view.View findDirectChild(android.view.View r3) {
            r2 = this;
            android.view.ViewParent r0 = r3.getParent()
        L4:
            if (r0 == r2) goto L14
            if (r0 == 0) goto L14
            boolean r1 = r0 instanceof android.view.View
            if (r1 == 0) goto Lf
            r3 = r0
            android.view.View r3 = (android.view.View) r3
        Lf:
            android.view.ViewParent r0 = r0.getParent()
            goto L4
        L14:
            return r3
    }

    private static int getHeightWithMargins(android.view.View r2) {
            android.view.ViewGroup$LayoutParams r0 = r2.getLayoutParams()
            boolean r1 = r0 instanceof android.view.ViewGroup.MarginLayoutParams
            if (r1 == 0) goto L15
            android.view.ViewGroup$MarginLayoutParams r0 = (android.view.ViewGroup.MarginLayoutParams) r0
            int r2 = r2.getHeight()
            int r1 = r0.topMargin
            int r2 = r2 + r1
            int r0 = r0.bottomMargin
            int r2 = r2 + r0
            return r2
        L15:
            int r2 = r2.getHeight()
            return r2
    }

    static android.support.design.widget.ViewOffsetHelper getViewOffsetHelper(android.view.View r2) {
            int r0 = android.support.design.R.id.view_offset_helper
            java.lang.Object r0 = r2.getTag(r0)
            android.support.design.widget.ViewOffsetHelper r0 = (android.support.design.widget.ViewOffsetHelper) r0
            if (r0 != 0) goto L14
            android.support.design.widget.ViewOffsetHelper r0 = new android.support.design.widget.ViewOffsetHelper
            r0.<init>(r2)
            int r1 = android.support.design.R.id.view_offset_helper
            r2.setTag(r1, r0)
        L14:
            return r0
    }

    private boolean isToolbarChild(android.view.View r4) {
            r3 = this;
            android.view.View r0 = r3.toolbarDirectChild
            r1 = 1
            r2 = 0
            if (r0 == 0) goto Lc
            if (r0 != r3) goto L9
            goto Lc
        L9:
            if (r4 != r0) goto L11
            goto L12
        Lc:
            android.support.v7.widget.Toolbar r0 = r3.toolbar
            if (r4 != r0) goto L11
            goto L12
        L11:
            r1 = r2
        L12:
            return r1
    }

    private void updateContentDescriptionFromTitle() {
            r1 = this;
            java.lang.CharSequence r0 = r1.getTitle()
            r1.setContentDescription(r0)
            return
    }

    private void updateDummyView() {
            r3 = this;
            boolean r0 = r3.collapsingTitleEnabled
            if (r0 != 0) goto L17
            android.view.View r0 = r3.dummyView
            if (r0 == 0) goto L17
            android.view.ViewParent r0 = r0.getParent()
            boolean r1 = r0 instanceof android.view.ViewGroup
            if (r1 == 0) goto L17
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            android.view.View r1 = r3.dummyView
            r0.removeView(r1)
        L17:
            boolean r0 = r3.collapsingTitleEnabled
            if (r0 == 0) goto L3e
            android.support.v7.widget.Toolbar r0 = r3.toolbar
            if (r0 == 0) goto L3e
            android.view.View r0 = r3.dummyView
            if (r0 != 0) goto L2e
            android.view.View r0 = new android.view.View
            android.content.Context r1 = r3.getContext()
            r0.<init>(r1)
            r3.dummyView = r0
        L2e:
            android.view.View r0 = r3.dummyView
            android.view.ViewParent r0 = r0.getParent()
            if (r0 != 0) goto L3e
            android.support.v7.widget.Toolbar r0 = r3.toolbar
            android.view.View r1 = r3.dummyView
            r2 = -1
            r0.addView(r1, r2, r2)
        L3e:
            return
    }

    @Override
    protected boolean checkLayoutParams(android.view.ViewGroup.LayoutParams r1) {
            r0 = this;
            boolean r1 = r1 instanceof android.support.design.widget.CollapsingToolbarLayout.LayoutParams
            return r1
    }

    @Override
    public void draw(android.graphics.Canvas r7) {
            r6 = this;
            super.draw(r7)
            r6.ensureToolbar()
            android.support.v7.widget.Toolbar r0 = r6.toolbar
            if (r0 != 0) goto L20
            android.graphics.drawable.Drawable r0 = r6.contentScrim
            if (r0 == 0) goto L20
            int r1 = r6.scrimAlpha
            if (r1 <= 0) goto L20
            android.graphics.drawable.Drawable r0 = r0.mutate()
            int r1 = r6.scrimAlpha
            r0.setAlpha(r1)
            android.graphics.drawable.Drawable r0 = r6.contentScrim
            r0.draw(r7)
        L20:
            boolean r0 = r6.collapsingTitleEnabled
            if (r0 == 0) goto L2d
            boolean r0 = r6.drawCollapsingTitle
            if (r0 == 0) goto L2d
            android.support.design.widget.CollapsingTextHelper r0 = r6.collapsingTextHelper
            r0.draw(r7)
        L2d:
            android.graphics.drawable.Drawable r0 = r6.statusBarScrim
            if (r0 == 0) goto L61
            int r0 = r6.scrimAlpha
            if (r0 <= 0) goto L61
            android.support.v4.view.WindowInsetsCompat r0 = r6.lastInsets
            r1 = 0
            if (r0 == 0) goto L3f
            int r0 = r0.getSystemWindowInsetTop()
            goto L40
        L3f:
            r0 = r1
        L40:
            if (r0 <= 0) goto L61
            android.graphics.drawable.Drawable r2 = r6.statusBarScrim
            int r3 = r6.currentOffset
            int r3 = -r3
            int r4 = r6.getWidth()
            int r5 = r6.currentOffset
            int r0 = r0 - r5
            r2.setBounds(r1, r3, r4, r0)
            android.graphics.drawable.Drawable r0 = r6.statusBarScrim
            android.graphics.drawable.Drawable r0 = r0.mutate()
            int r1 = r6.scrimAlpha
            r0.setAlpha(r1)
            android.graphics.drawable.Drawable r0 = r6.statusBarScrim
            r0.draw(r7)
        L61:
            return
    }

    @Override
    protected boolean drawChild(android.graphics.Canvas r5, android.view.View r6, long r7) {
            r4 = this;
            android.graphics.drawable.Drawable r0 = r4.contentScrim
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L22
            int r0 = r4.scrimAlpha
            if (r0 <= 0) goto L22
            boolean r0 = r4.isToolbarChild(r6)
            if (r0 == 0) goto L22
            android.graphics.drawable.Drawable r0 = r4.contentScrim
            android.graphics.drawable.Drawable r0 = r0.mutate()
            int r3 = r4.scrimAlpha
            r0.setAlpha(r3)
            android.graphics.drawable.Drawable r0 = r4.contentScrim
            r0.draw(r5)
            r0 = r1
            goto L23
        L22:
            r0 = r2
        L23:
            boolean r5 = super.drawChild(r5, r6, r7)
            if (r5 != 0) goto L2d
            if (r0 == 0) goto L2c
            goto L2d
        L2c:
            r1 = r2
        L2d:
            return r1
    }

    @Override
    protected void drawableStateChanged() {
            r4 = this;
            super.drawableStateChanged()
            int[] r0 = r4.getDrawableState()
            android.graphics.drawable.Drawable r1 = r4.statusBarScrim
            r2 = 0
            if (r1 == 0) goto L17
            boolean r3 = r1.isStateful()
            if (r3 == 0) goto L17
            boolean r1 = r1.setState(r0)
            r2 = r2 | r1
        L17:
            android.graphics.drawable.Drawable r1 = r4.contentScrim
            if (r1 == 0) goto L26
            boolean r3 = r1.isStateful()
            if (r3 == 0) goto L26
            boolean r1 = r1.setState(r0)
            r2 = r2 | r1
        L26:
            android.support.design.widget.CollapsingTextHelper r1 = r4.collapsingTextHelper
            if (r1 == 0) goto L2f
            boolean r0 = r1.setState(r0)
            r2 = r2 | r0
        L2f:
            if (r2 == 0) goto L34
            r4.invalidate()
        L34:
            return
    }

    @Override
    protected android.support.design.widget.CollapsingToolbarLayout.LayoutParams generateDefaultLayoutParams() {
            r2 = this;
            android.support.design.widget.CollapsingToolbarLayout$LayoutParams r0 = new android.support.design.widget.CollapsingToolbarLayout$LayoutParams
            r1 = -1
            r0.<init>(r1, r1)
            return r0
    }

    @Override
    protected android.view.ViewGroup.LayoutParams generateDefaultLayoutParams() {
            r1 = this;
            android.support.design.widget.CollapsingToolbarLayout$LayoutParams r0 = r1.generateDefaultLayoutParams()
            return r0
    }

    @Override
    protected android.widget.FrameLayout.LayoutParams generateDefaultLayoutParams() {
            r1 = this;
            android.support.design.widget.CollapsingToolbarLayout$LayoutParams r0 = r1.generateDefaultLayoutParams()
            return r0
    }

    @Override
    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet r1) {
            r0 = this;
            android.widget.FrameLayout$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    @Override
    protected android.view.ViewGroup.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams r1) {
            r0 = this;
            android.widget.FrameLayout$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    @Override
    public android.widget.FrameLayout.LayoutParams generateLayoutParams(android.util.AttributeSet r3) {
            r2 = this;
            android.support.design.widget.CollapsingToolbarLayout$LayoutParams r0 = new android.support.design.widget.CollapsingToolbarLayout$LayoutParams
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1, r3)
            return r0
    }

    @Override
    protected android.widget.FrameLayout.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams r2) {
            r1 = this;
            android.support.design.widget.CollapsingToolbarLayout$LayoutParams r0 = new android.support.design.widget.CollapsingToolbarLayout$LayoutParams
            r0.<init>(r2)
            return r0
    }

    public int getCollapsedTitleGravity() {
            r1 = this;
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            int r0 = r0.getCollapsedTextGravity()
            return r0
    }

    public android.graphics.Typeface getCollapsedTitleTypeface() {
            r1 = this;
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            android.graphics.Typeface r0 = r0.getCollapsedTypeface()
            return r0
    }

    public android.graphics.drawable.Drawable getContentScrim() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.contentScrim
            return r0
    }

    public int getExpandedTitleGravity() {
            r1 = this;
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            int r0 = r0.getExpandedTextGravity()
            return r0
    }

    public int getExpandedTitleMarginBottom() {
            r1 = this;
            int r0 = r1.expandedMarginBottom
            return r0
    }

    public int getExpandedTitleMarginEnd() {
            r1 = this;
            int r0 = r1.expandedMarginEnd
            return r0
    }

    public int getExpandedTitleMarginStart() {
            r1 = this;
            int r0 = r1.expandedMarginStart
            return r0
    }

    public int getExpandedTitleMarginTop() {
            r1 = this;
            int r0 = r1.expandedMarginTop
            return r0
    }

    public android.graphics.Typeface getExpandedTitleTypeface() {
            r1 = this;
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            android.graphics.Typeface r0 = r0.getExpandedTypeface()
            return r0
    }

    final int getMaxOffsetForPinChild(android.view.View r4) {
            r3 = this;
            android.support.design.widget.ViewOffsetHelper r0 = getViewOffsetHelper(r4)
            android.view.ViewGroup$LayoutParams r1 = r4.getLayoutParams()
            android.support.design.widget.CollapsingToolbarLayout$LayoutParams r1 = (android.support.design.widget.CollapsingToolbarLayout.LayoutParams) r1
            int r2 = r3.getHeight()
            int r0 = r0.getLayoutTop()
            int r2 = r2 - r0
            int r4 = r4.getHeight()
            int r2 = r2 - r4
            int r4 = r1.bottomMargin
            int r2 = r2 - r4
            return r2
    }

    int getScrimAlpha() {
            r1 = this;
            int r0 = r1.scrimAlpha
            return r0
    }

    public long getScrimAnimationDuration() {
            r2 = this;
            long r0 = r2.scrimAnimationDuration
            return r0
    }

    public int getScrimVisibleHeightTrigger() {
            r2 = this;
            int r0 = r2.scrimVisibleHeightTrigger
            if (r0 < 0) goto L5
            return r0
        L5:
            android.support.v4.view.WindowInsetsCompat r0 = r2.lastInsets
            if (r0 == 0) goto Le
            int r0 = r0.getSystemWindowInsetTop()
            goto Lf
        Le:
            r0 = 0
        Lf:
            int r1 = android.support.v4.view.ViewCompat.getMinimumHeight(r2)
            if (r1 <= 0) goto L21
            int r1 = r1 * 2
            int r1 = r1 + r0
            int r0 = r2.getHeight()
            int r0 = java.lang.Math.min(r1, r0)
            return r0
        L21:
            int r0 = r2.getHeight()
            int r0 = r0 / 3
            return r0
    }

    public android.graphics.drawable.Drawable getStatusBarScrim() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.statusBarScrim
            return r0
    }

    public java.lang.CharSequence getTitle() {
            r1 = this;
            boolean r0 = r1.collapsingTitleEnabled
            if (r0 == 0) goto Lb
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            java.lang.CharSequence r0 = r0.getText()
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }

    public boolean isTitleEnabled() {
            r1 = this;
            boolean r0 = r1.collapsingTitleEnabled
            return r0
    }

    @Override
    protected void onAttachedToWindow() {
            r2 = this;
            super.onAttachedToWindow()
            android.view.ViewParent r0 = r2.getParent()
            boolean r1 = r0 instanceof android.support.design.widget.AppBarLayout
            if (r1 == 0) goto L2a
            r1 = r0
            android.view.View r1 = (android.view.View) r1
            boolean r1 = android.support.v4.view.ViewCompat.getFitsSystemWindows(r1)
            android.support.v4.view.ViewCompat.setFitsSystemWindows(r2, r1)
            android.support.design.widget.AppBarLayout$OnOffsetChangedListener r1 = r2.onOffsetChangedListener
            if (r1 != 0) goto L20
            android.support.design.widget.CollapsingToolbarLayout$OffsetUpdateListener r1 = new android.support.design.widget.CollapsingToolbarLayout$OffsetUpdateListener
            r1.<init>(r2)
            r2.onOffsetChangedListener = r1
        L20:
            android.support.design.widget.AppBarLayout r0 = (android.support.design.widget.AppBarLayout) r0
            android.support.design.widget.AppBarLayout$OnOffsetChangedListener r1 = r2.onOffsetChangedListener
            r0.addOnOffsetChangedListener(r1)
            android.support.v4.view.ViewCompat.requestApplyInsets(r2)
        L2a:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r3 = this;
            android.view.ViewParent r0 = r3.getParent()
            android.support.design.widget.AppBarLayout$OnOffsetChangedListener r1 = r3.onOffsetChangedListener
            if (r1 == 0) goto L11
            boolean r2 = r0 instanceof android.support.design.widget.AppBarLayout
            if (r2 == 0) goto L11
            android.support.design.widget.AppBarLayout r0 = (android.support.design.widget.AppBarLayout) r0
            r0.removeOnOffsetChangedListener(r1)
        L11:
            super.onDetachedFromWindow()
            return
    }

    @Override
    protected void onLayout(boolean r8, int r9, int r10, int r11, int r12) {
            r7 = this;
            super.onLayout(r8, r9, r10, r11, r12)
            android.support.v4.view.WindowInsetsCompat r8 = r7.lastInsets
            r0 = 0
            if (r8 == 0) goto L29
            int r8 = r8.getSystemWindowInsetTop()
            int r1 = r7.getChildCount()
            r2 = r0
        L11:
            if (r2 >= r1) goto L29
            android.view.View r3 = r7.getChildAt(r2)
            boolean r4 = android.support.v4.view.ViewCompat.getFitsSystemWindows(r3)
            if (r4 != 0) goto L26
            int r4 = r3.getTop()
            if (r4 >= r8) goto L26
            android.support.v4.view.ViewCompat.offsetTopAndBottom(r3, r8)
        L26:
            int r2 = r2 + 1
            goto L11
        L29:
            boolean r8 = r7.collapsingTitleEnabled
            if (r8 == 0) goto Lcb
            android.view.View r8 = r7.dummyView
            if (r8 == 0) goto Lcb
            boolean r8 = android.support.v4.view.ViewCompat.isAttachedToWindow(r8)
            r1 = 1
            if (r8 == 0) goto L42
            android.view.View r8 = r7.dummyView
            int r8 = r8.getVisibility()
            if (r8 != 0) goto L42
            r8 = r1
            goto L43
        L42:
            r8 = r0
        L43:
            r7.drawCollapsingTitle = r8
            if (r8 == 0) goto Lcb
            int r8 = android.support.v4.view.ViewCompat.getLayoutDirection(r7)
            if (r8 != r1) goto L4e
            goto L4f
        L4e:
            r1 = r0
        L4f:
            android.view.View r8 = r7.toolbarDirectChild
            if (r8 == 0) goto L54
            goto L56
        L54:
            android.support.v7.widget.Toolbar r8 = r7.toolbar
        L56:
            int r8 = r7.getMaxOffsetForPinChild(r8)
            android.view.View r2 = r7.dummyView
            android.graphics.Rect r3 = r7.tmpRect
            android.support.design.widget.DescendantOffsetUtils.getDescendantRect(r7, r2, r3)
            android.support.design.widget.CollapsingTextHelper r2 = r7.collapsingTextHelper
            android.graphics.Rect r3 = r7.tmpRect
            int r3 = r3.left
            if (r1 == 0) goto L70
            android.support.v7.widget.Toolbar r4 = r7.toolbar
            int r4 = r4.getTitleMarginEnd()
            goto L76
        L70:
            android.support.v7.widget.Toolbar r4 = r7.toolbar
            int r4 = r4.getTitleMarginStart()
        L76:
            int r3 = r3 + r4
            android.graphics.Rect r4 = r7.tmpRect
            int r4 = r4.top
            int r4 = r4 + r8
            android.support.v7.widget.Toolbar r5 = r7.toolbar
            int r5 = r5.getTitleMarginTop()
            int r4 = r4 + r5
            android.graphics.Rect r5 = r7.tmpRect
            int r5 = r5.right
            if (r1 == 0) goto L90
            android.support.v7.widget.Toolbar r6 = r7.toolbar
            int r6 = r6.getTitleMarginStart()
            goto L96
        L90:
            android.support.v7.widget.Toolbar r6 = r7.toolbar
            int r6 = r6.getTitleMarginEnd()
        L96:
            int r5 = r5 + r6
            android.graphics.Rect r6 = r7.tmpRect
            int r6 = r6.bottom
            int r6 = r6 + r8
            android.support.v7.widget.Toolbar r8 = r7.toolbar
            int r8 = r8.getTitleMarginBottom()
            int r6 = r6 - r8
            r2.setCollapsedBounds(r3, r4, r5, r6)
            android.support.design.widget.CollapsingTextHelper r8 = r7.collapsingTextHelper
            if (r1 == 0) goto Lad
            int r2 = r7.expandedMarginEnd
            goto Laf
        Lad:
            int r2 = r7.expandedMarginStart
        Laf:
            android.graphics.Rect r3 = r7.tmpRect
            int r3 = r3.top
            int r4 = r7.expandedMarginTop
            int r3 = r3 + r4
            int r11 = r11 - r9
            if (r1 == 0) goto Lbc
            int r9 = r7.expandedMarginStart
            goto Lbe
        Lbc:
            int r9 = r7.expandedMarginEnd
        Lbe:
            int r11 = r11 - r9
            int r12 = r12 - r10
            int r9 = r7.expandedMarginBottom
            int r12 = r12 - r9
            r8.setExpandedBounds(r2, r3, r11, r12)
            android.support.design.widget.CollapsingTextHelper r8 = r7.collapsingTextHelper
            r8.recalculate()
        Lcb:
            int r8 = r7.getChildCount()
        Lcf:
            if (r0 >= r8) goto Ldf
            android.view.View r9 = r7.getChildAt(r0)
            android.support.design.widget.ViewOffsetHelper r9 = getViewOffsetHelper(r9)
            r9.onViewLayout()
            int r0 = r0 + 1
            goto Lcf
        Ldf:
            android.support.v7.widget.Toolbar r8 = r7.toolbar
            if (r8 == 0) goto L114
            boolean r8 = r7.collapsingTitleEnabled
            if (r8 == 0) goto Lfc
            android.support.design.widget.CollapsingTextHelper r8 = r7.collapsingTextHelper
            java.lang.CharSequence r8 = r8.getText()
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            if (r8 == 0) goto Lfc
            android.support.v7.widget.Toolbar r8 = r7.toolbar
            java.lang.CharSequence r8 = r8.getTitle()
            r7.setTitle(r8)
        Lfc:
            android.view.View r8 = r7.toolbarDirectChild
            if (r8 == 0) goto L10b
            if (r8 != r7) goto L103
            goto L10b
        L103:
            int r8 = getHeightWithMargins(r8)
            r7.setMinimumHeight(r8)
            goto L114
        L10b:
            android.support.v7.widget.Toolbar r8 = r7.toolbar
            int r8 = getHeightWithMargins(r8)
            r7.setMinimumHeight(r8)
        L114:
            r7.updateScrimVisibility()
            return
    }

    @Override
    protected void onMeasure(int r2, int r3) {
            r1 = this;
            r1.ensureToolbar()
            super.onMeasure(r2, r3)
            int r3 = android.view.View.MeasureSpec.getMode(r3)
            android.support.v4.view.WindowInsetsCompat r0 = r1.lastInsets
            if (r0 == 0) goto L13
            int r0 = r0.getSystemWindowInsetTop()
            goto L14
        L13:
            r0 = 0
        L14:
            if (r3 != 0) goto L26
            if (r0 <= 0) goto L26
            int r3 = r1.getMeasuredHeight()
            int r3 = r3 + r0
            r0 = 1073741824(0x40000000, float:2.0)
            int r3 = android.view.View.MeasureSpec.makeMeasureSpec(r3, r0)
            super.onMeasure(r2, r3)
        L26:
            return
    }

    @Override
    protected void onSizeChanged(int r1, int r2, int r3, int r4) {
            r0 = this;
            super.onSizeChanged(r1, r2, r3, r4)
            android.graphics.drawable.Drawable r3 = r0.contentScrim
            if (r3 == 0) goto Lb
            r4 = 0
            r3.setBounds(r4, r4, r1, r2)
        Lb:
            return
    }

    android.support.v4.view.WindowInsetsCompat onWindowInsetChanged(android.support.v4.view.WindowInsetsCompat r3) {
            r2 = this;
            boolean r0 = android.support.v4.view.ViewCompat.getFitsSystemWindows(r2)
            if (r0 == 0) goto L8
            r0 = r3
            goto L9
        L8:
            r0 = 0
        L9:
            android.support.v4.view.WindowInsetsCompat r1 = r2.lastInsets
            boolean r1 = android.support.v4.util.ObjectsCompat.equals(r1, r0)
            if (r1 != 0) goto L16
            r2.lastInsets = r0
            r2.requestLayout()
        L16:
            android.support.v4.view.WindowInsetsCompat r3 = r3.consumeSystemWindowInsets()
            return r3
    }

    public void setCollapsedTitleGravity(int r2) {
            r1 = this;
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            r0.setCollapsedTextGravity(r2)
            return
    }

    public void setCollapsedTitleTextAppearance(int r2) {
            r1 = this;
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            r0.setCollapsedTextAppearance(r2)
            return
    }

    public void setCollapsedTitleTextColor(int r1) {
            r0 = this;
            android.content.res.ColorStateList r1 = android.content.res.ColorStateList.valueOf(r1)
            r0.setCollapsedTitleTextColor(r1)
            return
    }

    public void setCollapsedTitleTextColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            r0.setCollapsedTextColor(r2)
            return
    }

    public void setCollapsedTitleTypeface(android.graphics.Typeface r2) {
            r1 = this;
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            r0.setCollapsedTypeface(r2)
            return
    }

    public void setContentScrim(android.graphics.drawable.Drawable r4) {
            r3 = this;
            android.graphics.drawable.Drawable r0 = r3.contentScrim
            if (r0 == r4) goto L2f
            r1 = 0
            if (r0 == 0) goto La
            r0.setCallback(r1)
        La:
            if (r4 == 0) goto L10
            android.graphics.drawable.Drawable r1 = r4.mutate()
        L10:
            r3.contentScrim = r1
            if (r1 == 0) goto L2c
            int r4 = r3.getWidth()
            int r0 = r3.getHeight()
            r2 = 0
            r1.setBounds(r2, r2, r4, r0)
            android.graphics.drawable.Drawable r4 = r3.contentScrim
            r4.setCallback(r3)
            android.graphics.drawable.Drawable r4 = r3.contentScrim
            int r0 = r3.scrimAlpha
            r4.setAlpha(r0)
        L2c:
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r3)
        L2f:
            return
    }

    public void setContentScrimColor(int r2) {
            r1 = this;
            android.graphics.drawable.ColorDrawable r0 = new android.graphics.drawable.ColorDrawable
            r0.<init>(r2)
            r1.setContentScrim(r0)
            return
    }

    public void setContentScrimResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            android.graphics.drawable.Drawable r2 = android.support.v4.content.ContextCompat.getDrawable(r0, r2)
            r1.setContentScrim(r2)
            return
    }

    public void setExpandedTitleColor(int r1) {
            r0 = this;
            android.content.res.ColorStateList r1 = android.content.res.ColorStateList.valueOf(r1)
            r0.setExpandedTitleTextColor(r1)
            return
    }

    public void setExpandedTitleGravity(int r2) {
            r1 = this;
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            r0.setExpandedTextGravity(r2)
            return
    }

    public void setExpandedTitleMargin(int r1, int r2, int r3, int r4) {
            r0 = this;
            r0.expandedMarginStart = r1
            r0.expandedMarginTop = r2
            r0.expandedMarginEnd = r3
            r0.expandedMarginBottom = r4
            r0.requestLayout()
            return
    }

    public void setExpandedTitleMarginBottom(int r1) {
            r0 = this;
            r0.expandedMarginBottom = r1
            r0.requestLayout()
            return
    }

    public void setExpandedTitleMarginEnd(int r1) {
            r0 = this;
            r0.expandedMarginEnd = r1
            r0.requestLayout()
            return
    }

    public void setExpandedTitleMarginStart(int r1) {
            r0 = this;
            r0.expandedMarginStart = r1
            r0.requestLayout()
            return
    }

    public void setExpandedTitleMarginTop(int r1) {
            r0 = this;
            r0.expandedMarginTop = r1
            r0.requestLayout()
            return
    }

    public void setExpandedTitleTextAppearance(int r2) {
            r1 = this;
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            r0.setExpandedTextAppearance(r2)
            return
    }

    public void setExpandedTitleTextColor(android.content.res.ColorStateList r2) {
            r1 = this;
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            r0.setExpandedTextColor(r2)
            return
    }

    public void setExpandedTitleTypeface(android.graphics.Typeface r2) {
            r1 = this;
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            r0.setExpandedTypeface(r2)
            return
    }

    void setScrimAlpha(int r2) {
            r1 = this;
            int r0 = r1.scrimAlpha
            if (r2 == r0) goto L14
            android.graphics.drawable.Drawable r0 = r1.contentScrim
            if (r0 == 0) goto Lf
            android.support.v7.widget.Toolbar r0 = r1.toolbar
            if (r0 == 0) goto Lf
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r0)
        Lf:
            r1.scrimAlpha = r2
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r1)
        L14:
            return
    }

    public void setScrimAnimationDuration(long r1) {
            r0 = this;
            r0.scrimAnimationDuration = r1
            return
    }

    public void setScrimVisibleHeightTrigger(int r2) {
            r1 = this;
            int r0 = r1.scrimVisibleHeightTrigger
            if (r0 == r2) goto L9
            r1.scrimVisibleHeightTrigger = r2
            r1.updateScrimVisibility()
        L9:
            return
    }

    public void setScrimsShown(boolean r2) {
            r1 = this;
            boolean r0 = android.support.v4.view.ViewCompat.isLaidOut(r1)
            if (r0 == 0) goto Le
            boolean r0 = r1.isInEditMode()
            if (r0 != 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            r1.setScrimsShown(r2, r0)
            return
    }

    public void setScrimsShown(boolean r3, boolean r4) {
            r2 = this;
            boolean r0 = r2.scrimsAreShown
            if (r0 == r3) goto L1a
            r0 = 255(0xff, float:3.57E-43)
            r1 = 0
            if (r4 == 0) goto L11
            if (r3 == 0) goto Lc
            goto Ld
        Lc:
            r0 = r1
        Ld:
            r2.animateScrim(r0)
            goto L18
        L11:
            if (r3 == 0) goto L14
            goto L15
        L14:
            r0 = r1
        L15:
            r2.setScrimAlpha(r0)
        L18:
            r2.scrimsAreShown = r3
        L1a:
            return
    }

    public void setStatusBarScrim(android.graphics.drawable.Drawable r3) {
            r2 = this;
            android.graphics.drawable.Drawable r0 = r2.statusBarScrim
            if (r0 == r3) goto L4a
            r1 = 0
            if (r0 == 0) goto La
            r0.setCallback(r1)
        La:
            if (r3 == 0) goto L10
            android.graphics.drawable.Drawable r1 = r3.mutate()
        L10:
            r2.statusBarScrim = r1
            if (r1 == 0) goto L47
            boolean r3 = r1.isStateful()
            if (r3 == 0) goto L23
            android.graphics.drawable.Drawable r3 = r2.statusBarScrim
            int[] r0 = r2.getDrawableState()
            r3.setState(r0)
        L23:
            android.graphics.drawable.Drawable r3 = r2.statusBarScrim
            int r0 = android.support.v4.view.ViewCompat.getLayoutDirection(r2)
            android.support.v4.graphics.drawable.DrawableCompat.setLayoutDirection(r3, r0)
            android.graphics.drawable.Drawable r3 = r2.statusBarScrim
            int r0 = r2.getVisibility()
            r1 = 0
            if (r0 != 0) goto L37
            r0 = 1
            goto L38
        L37:
            r0 = r1
        L38:
            r3.setVisible(r0, r1)
            android.graphics.drawable.Drawable r3 = r2.statusBarScrim
            r3.setCallback(r2)
            android.graphics.drawable.Drawable r3 = r2.statusBarScrim
            int r0 = r2.scrimAlpha
            r3.setAlpha(r0)
        L47:
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r2)
        L4a:
            return
    }

    public void setStatusBarScrimColor(int r2) {
            r1 = this;
            android.graphics.drawable.ColorDrawable r0 = new android.graphics.drawable.ColorDrawable
            r0.<init>(r2)
            r1.setStatusBarScrim(r0)
            return
    }

    public void setStatusBarScrimResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            android.graphics.drawable.Drawable r2 = android.support.v4.content.ContextCompat.getDrawable(r0, r2)
            r1.setStatusBarScrim(r2)
            return
    }

    public void setTitle(java.lang.CharSequence r2) {
            r1 = this;
            android.support.design.widget.CollapsingTextHelper r0 = r1.collapsingTextHelper
            r0.setText(r2)
            r1.updateContentDescriptionFromTitle()
            return
    }

    public void setTitleEnabled(boolean r2) {
            r1 = this;
            boolean r0 = r1.collapsingTitleEnabled
            if (r2 == r0) goto Lf
            r1.collapsingTitleEnabled = r2
            r1.updateContentDescriptionFromTitle()
            r1.updateDummyView()
            r1.requestLayout()
        Lf:
            return
    }

    @Override
    public void setVisibility(int r3) {
            r2 = this;
            super.setVisibility(r3)
            r0 = 0
            if (r3 != 0) goto L8
            r3 = 1
            goto L9
        L8:
            r3 = r0
        L9:
            android.graphics.drawable.Drawable r1 = r2.statusBarScrim
            if (r1 == 0) goto L18
            boolean r1 = r1.isVisible()
            if (r1 == r3) goto L18
            android.graphics.drawable.Drawable r1 = r2.statusBarScrim
            r1.setVisible(r3, r0)
        L18:
            android.graphics.drawable.Drawable r1 = r2.contentScrim
            if (r1 == 0) goto L27
            boolean r1 = r1.isVisible()
            if (r1 == r3) goto L27
            android.graphics.drawable.Drawable r1 = r2.contentScrim
            r1.setVisible(r3, r0)
        L27:
            return
    }

    final void updateScrimVisibility() {
            r2 = this;
            android.graphics.drawable.Drawable r0 = r2.contentScrim
            if (r0 != 0) goto L8
            android.graphics.drawable.Drawable r0 = r2.statusBarScrim
            if (r0 == 0) goto L1b
        L8:
            int r0 = r2.getHeight()
            int r1 = r2.currentOffset
            int r0 = r0 + r1
            int r1 = r2.getScrimVisibleHeightTrigger()
            if (r0 >= r1) goto L17
            r0 = 1
            goto L18
        L17:
            r0 = 0
        L18:
            r2.setScrimsShown(r0)
        L1b:
            return
    }

    @Override
    protected boolean verifyDrawable(android.graphics.drawable.Drawable r2) {
            r1 = this;
            boolean r0 = super.verifyDrawable(r2)
            if (r0 != 0) goto L11
            android.graphics.drawable.Drawable r0 = r1.contentScrim
            if (r2 == r0) goto L11
            android.graphics.drawable.Drawable r0 = r1.statusBarScrim
            if (r2 != r0) goto Lf
            goto L11
        Lf:
            r2 = 0
            goto L12
        L11:
            r2 = 1
        L12:
            return r2
    }
}
