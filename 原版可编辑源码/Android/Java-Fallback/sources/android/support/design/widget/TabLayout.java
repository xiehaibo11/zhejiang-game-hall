package android.support.design.widget;

@android.support.v4.view.ViewPager.DecorView
public class TabLayout extends android.widget.HorizontalScrollView {
    private static final int ANIMATION_DURATION = 300;
    static final int DEFAULT_GAP_TEXT_ICON = 8;
    private static final int DEFAULT_HEIGHT = 48;
    private static final int DEFAULT_HEIGHT_WITH_TEXT_ICON = 72;
    static final int FIXED_WRAP_GUTTER_MIN = 16;
    public static final int GRAVITY_CENTER = 1;
    public static final int GRAVITY_FILL = 0;
    public static final int INDICATOR_GRAVITY_BOTTOM = 0;
    public static final int INDICATOR_GRAVITY_CENTER = 1;
    public static final int INDICATOR_GRAVITY_STRETCH = 3;
    public static final int INDICATOR_GRAVITY_TOP = 2;
    private static final int INVALID_WIDTH = -1;
    private static final int MIN_INDICATOR_WIDTH = 24;
    public static final int MODE_FIXED = 1;
    public static final int MODE_SCROLLABLE = 0;
    private static final int TAB_MIN_WIDTH_MARGIN = 56;
    private static final android.support.v4.util.Pools.Pool<android.support.design.widget.TabLayout.Tab> tabPool = null;
    private android.support.design.widget.TabLayout.AdapterChangeListener adapterChangeListener;
    private int contentInsetStart;
    private android.support.design.widget.TabLayout.BaseOnTabSelectedListener currentVpSelectedListener;
    boolean inlineLabel;
    int mode;
    private android.support.design.widget.TabLayout.TabLayoutOnPageChangeListener pageChangeListener;
    private android.support.v4.view.PagerAdapter pagerAdapter;
    private android.database.DataSetObserver pagerAdapterObserver;
    private final int requestedTabMaxWidth;
    private final int requestedTabMinWidth;
    private android.animation.ValueAnimator scrollAnimator;
    private final int scrollableTabMinWidth;
    private android.support.design.widget.TabLayout.BaseOnTabSelectedListener selectedListener;
    private final java.util.ArrayList<android.support.design.widget.TabLayout.BaseOnTabSelectedListener> selectedListeners;
    private android.support.design.widget.TabLayout.Tab selectedTab;
    private boolean setupViewPagerImplicitly;
    private final android.support.design.widget.TabLayout.SlidingTabIndicator slidingTabIndicator;
    final int tabBackgroundResId;
    int tabGravity;
    android.content.res.ColorStateList tabIconTint;
    android.graphics.PorterDuff.Mode tabIconTintMode;
    int tabIndicatorAnimationDuration;
    boolean tabIndicatorFullWidth;
    int tabIndicatorGravity;
    int tabMaxWidth;
    int tabPaddingBottom;
    int tabPaddingEnd;
    int tabPaddingStart;
    int tabPaddingTop;
    android.content.res.ColorStateList tabRippleColorStateList;
    android.graphics.drawable.Drawable tabSelectedIndicator;
    int tabTextAppearance;
    android.content.res.ColorStateList tabTextColors;
    float tabTextMultiLineSize;
    float tabTextSize;
    private final android.graphics.RectF tabViewContentBounds;
    private final android.support.v4.util.Pools.Pool<android.support.design.widget.TabLayout.TabView> tabViewPool;
    private final java.util.ArrayList<android.support.design.widget.TabLayout.Tab> tabs;
    boolean unboundedRipple;
    android.support.v4.view.ViewPager viewPager;


    private class AdapterChangeListener implements android.support.v4.view.ViewPager.OnAdapterChangeListener {
        private boolean autoRefresh;
        final android.support.design.widget.TabLayout this$0;

        AdapterChangeListener(android.support.design.widget.TabLayout r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void onAdapterChanged(android.support.v4.view.ViewPager r1, android.support.v4.view.PagerAdapter r2, android.support.v4.view.PagerAdapter r3) {
                r0 = this;
                android.support.design.widget.TabLayout r2 = r0.this$0
                android.support.v4.view.ViewPager r2 = r2.viewPager
                if (r2 != r1) goto Ld
                android.support.design.widget.TabLayout r1 = r0.this$0
                boolean r2 = r0.autoRefresh
                r1.setPagerAdapter(r3, r2)
            Ld:
                return
        }

        void setAutoRefresh(boolean r1) {
                r0 = this;
                r0.autoRefresh = r1
                return
        }
    }

    public interface BaseOnTabSelectedListener<T extends android.support.design.widget.TabLayout.Tab> {
        void onTabReselected(T r1);

        void onTabSelected(T r1);

        void onTabUnselected(T r1);
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface Mode {
    }

    public interface OnTabSelectedListener extends android.support.design.widget.TabLayout.BaseOnTabSelectedListener<android.support.design.widget.TabLayout.Tab> {
    }

    private class PagerAdapterObserver extends android.database.DataSetObserver {
        final android.support.design.widget.TabLayout this$0;

        PagerAdapterObserver(android.support.design.widget.TabLayout r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        @Override
        public void onChanged() {
                r1 = this;
                android.support.design.widget.TabLayout r0 = r1.this$0
                r0.populateFromPagerAdapter()
                return
        }

        @Override
        public void onInvalidated() {
                r1 = this;
                android.support.design.widget.TabLayout r0 = r1.this$0
                r0.populateFromPagerAdapter()
                return
        }
    }

    private class SlidingTabIndicator extends android.widget.LinearLayout {
        private final android.graphics.drawable.GradientDrawable defaultSelectionIndicator;
        private android.animation.ValueAnimator indicatorAnimator;
        private int indicatorLeft;
        private int indicatorRight;
        private int layoutDirection;
        private int selectedIndicatorHeight;
        private final android.graphics.Paint selectedIndicatorPaint;
        int selectedPosition;
        float selectionOffset;
        final android.support.design.widget.TabLayout this$0;



        SlidingTabIndicator(android.support.design.widget.TabLayout r1, android.content.Context r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>(r2)
                r1 = -1
                r0.selectedPosition = r1
                r0.layoutDirection = r1
                r0.indicatorLeft = r1
                r0.indicatorRight = r1
                r1 = 0
                r0.setWillNotDraw(r1)
                android.graphics.Paint r1 = new android.graphics.Paint
                r1.<init>()
                r0.selectedIndicatorPaint = r1
                android.graphics.drawable.GradientDrawable r1 = new android.graphics.drawable.GradientDrawable
                r1.<init>()
                r0.defaultSelectionIndicator = r1
                return
        }

        private void calculateTabViewContentBounds(android.support.design.widget.TabLayout.TabView r4, android.graphics.RectF r5) {
                r3 = this;
                int r0 = android.support.design.widget.TabLayout.TabView.access$500(r4)
                android.support.design.widget.TabLayout r1 = r3.this$0
                r2 = 24
                int r1 = r1.dpToPx(r2)
                if (r0 >= r1) goto L14
                android.support.design.widget.TabLayout r0 = r3.this$0
                int r0 = r0.dpToPx(r2)
            L14:
                int r1 = r4.getLeft()
                int r4 = r4.getRight()
                int r1 = r1 + r4
                int r1 = r1 / 2
                int r0 = r0 / 2
                int r4 = r1 - r0
                int r1 = r1 + r0
                float r4 = (float) r4
                float r0 = (float) r1
                r1 = 0
                r5.set(r4, r1, r0, r1)
                return
        }

        private void updateIndicatorPosition() {
                r7 = this;
                int r0 = r7.selectedPosition
                android.view.View r0 = r7.getChildAt(r0)
                if (r0 == 0) goto L99
                int r1 = r0.getWidth()
                if (r1 <= 0) goto L99
                int r1 = r0.getLeft()
                int r2 = r0.getRight()
                android.support.design.widget.TabLayout r3 = r7.this$0
                boolean r3 = r3.tabIndicatorFullWidth
                if (r3 != 0) goto L3d
                boolean r3 = r0 instanceof android.support.design.widget.TabLayout.TabView
                if (r3 == 0) goto L3d
                android.support.design.widget.TabLayout$TabView r0 = (android.support.design.widget.TabLayout.TabView) r0
                android.support.design.widget.TabLayout r1 = r7.this$0
                android.graphics.RectF r1 = android.support.design.widget.TabLayout.access$400(r1)
                r7.calculateTabViewContentBounds(r0, r1)
                android.support.design.widget.TabLayout r0 = r7.this$0
                android.graphics.RectF r0 = android.support.design.widget.TabLayout.access$400(r0)
                float r0 = r0.left
                int r1 = (int) r0
                android.support.design.widget.TabLayout r0 = r7.this$0
                android.graphics.RectF r0 = android.support.design.widget.TabLayout.access$400(r0)
                float r0 = r0.right
                int r2 = (int) r0
            L3d:
                float r0 = r7.selectionOffset
                r3 = 0
                int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
                if (r0 <= 0) goto L9b
                int r0 = r7.selectedPosition
                int r3 = r7.getChildCount()
                int r3 = r3 + (-1)
                if (r0 >= r3) goto L9b
                int r0 = r7.selectedPosition
                int r0 = r0 + 1
                android.view.View r0 = r7.getChildAt(r0)
                int r3 = r0.getLeft()
                int r4 = r0.getRight()
                android.support.design.widget.TabLayout r5 = r7.this$0
                boolean r5 = r5.tabIndicatorFullWidth
                if (r5 != 0) goto L85
                boolean r5 = r0 instanceof android.support.design.widget.TabLayout.TabView
                if (r5 == 0) goto L85
                android.support.design.widget.TabLayout$TabView r0 = (android.support.design.widget.TabLayout.TabView) r0
                android.support.design.widget.TabLayout r3 = r7.this$0
                android.graphics.RectF r3 = android.support.design.widget.TabLayout.access$400(r3)
                r7.calculateTabViewContentBounds(r0, r3)
                android.support.design.widget.TabLayout r0 = r7.this$0
                android.graphics.RectF r0 = android.support.design.widget.TabLayout.access$400(r0)
                float r0 = r0.left
                int r3 = (int) r0
                android.support.design.widget.TabLayout r0 = r7.this$0
                android.graphics.RectF r0 = android.support.design.widget.TabLayout.access$400(r0)
                float r0 = r0.right
                int r4 = (int) r0
            L85:
                float r0 = r7.selectionOffset
                float r3 = (float) r3
                float r3 = r3 * r0
                r5 = 1065353216(0x3f800000, float:1.0)
                float r6 = r5 - r0
                float r1 = (float) r1
                float r6 = r6 * r1
                float r3 = r3 + r6
                int r1 = (int) r3
                float r3 = (float) r4
                float r3 = r3 * r0
                float r5 = r5 - r0
                float r0 = (float) r2
                float r5 = r5 * r0
                float r3 = r3 + r5
                int r2 = (int) r3
                goto L9b
            L99:
                r1 = -1
                r2 = r1
            L9b:
                r7.setIndicatorPosition(r1, r2)
                return
        }

        void animateIndicatorToPosition(int r10, int r11) {
                r9 = this;
                android.animation.ValueAnimator r0 = r9.indicatorAnimator
                if (r0 == 0) goto Lf
                boolean r0 = r0.isRunning()
                if (r0 == 0) goto Lf
                android.animation.ValueAnimator r0 = r9.indicatorAnimator
                r0.cancel()
            Lf:
                android.view.View r0 = r9.getChildAt(r10)
                if (r0 != 0) goto L19
                r9.updateIndicatorPosition()
                return
            L19:
                int r1 = r0.getLeft()
                int r2 = r0.getRight()
                android.support.design.widget.TabLayout r3 = r9.this$0
                boolean r3 = r3.tabIndicatorFullWidth
                if (r3 != 0) goto L48
                boolean r3 = r0 instanceof android.support.design.widget.TabLayout.TabView
                if (r3 == 0) goto L48
                android.support.design.widget.TabLayout$TabView r0 = (android.support.design.widget.TabLayout.TabView) r0
                android.support.design.widget.TabLayout r1 = r9.this$0
                android.graphics.RectF r1 = android.support.design.widget.TabLayout.access$400(r1)
                r9.calculateTabViewContentBounds(r0, r1)
                android.support.design.widget.TabLayout r0 = r9.this$0
                android.graphics.RectF r0 = android.support.design.widget.TabLayout.access$400(r0)
                float r0 = r0.left
                int r1 = (int) r0
                android.support.design.widget.TabLayout r0 = r9.this$0
                android.graphics.RectF r0 = android.support.design.widget.TabLayout.access$400(r0)
                float r0 = r0.right
                int r2 = (int) r0
            L48:
                r6 = r1
                r8 = r2
                int r5 = r9.indicatorLeft
                int r7 = r9.indicatorRight
                if (r5 != r6) goto L52
                if (r7 == r8) goto L80
            L52:
                android.animation.ValueAnimator r0 = new android.animation.ValueAnimator
                r0.<init>()
                r9.indicatorAnimator = r0
                android.animation.TimeInterpolator r1 = android.support.design.animation.AnimationUtils.FAST_OUT_SLOW_IN_INTERPOLATOR
                r0.setInterpolator(r1)
                long r1 = (long) r11
                r0.setDuration(r1)
                r11 = 2
                float[] r11 = new float[r11]
                r11 = {x0082: FILL_ARRAY_DATA , data: [0, 1065353216} // fill-array
                r0.setFloatValues(r11)
                android.support.design.widget.TabLayout$SlidingTabIndicator$1 r11 = new android.support.design.widget.TabLayout$SlidingTabIndicator$1
                r3 = r11
                r4 = r9
                r3.<init>(r4, r5, r6, r7, r8)
                r0.addUpdateListener(r11)
                android.support.design.widget.TabLayout$SlidingTabIndicator$2 r11 = new android.support.design.widget.TabLayout$SlidingTabIndicator$2
                r11.<init>(r9, r10)
                r0.addListener(r11)
                r0.start()
            L80:
                return
        }

        boolean childrenNeedLayout() {
                r4 = this;
                int r0 = r4.getChildCount()
                r1 = 0
                r2 = r1
            L6:
                if (r2 >= r0) goto L17
                android.view.View r3 = r4.getChildAt(r2)
                int r3 = r3.getWidth()
                if (r3 > 0) goto L14
                r0 = 1
                return r0
            L14:
                int r2 = r2 + 1
                goto L6
            L17:
                return r1
        }

        @Override
        public void draw(android.graphics.Canvas r6) {
                r5 = this;
                android.support.design.widget.TabLayout r0 = r5.this$0
                android.graphics.drawable.Drawable r0 = r0.tabSelectedIndicator
                r1 = 0
                if (r0 == 0) goto L10
                android.support.design.widget.TabLayout r0 = r5.this$0
                android.graphics.drawable.Drawable r0 = r0.tabSelectedIndicator
                int r0 = r0.getIntrinsicHeight()
                goto L11
            L10:
                r0 = r1
            L11:
                int r2 = r5.selectedIndicatorHeight
                if (r2 < 0) goto L16
                r0 = r2
            L16:
                android.support.design.widget.TabLayout r2 = r5.this$0
                int r2 = r2.tabIndicatorGravity
                if (r2 == 0) goto L3a
                r3 = 1
                r4 = 2
                if (r2 == r3) goto L2c
                if (r2 == r4) goto L43
                r0 = 3
                if (r2 == r0) goto L27
                r0 = r1
                goto L43
            L27:
                int r0 = r5.getHeight()
                goto L43
            L2c:
                int r1 = r5.getHeight()
                int r1 = r1 - r0
                int r1 = r1 / r4
                int r2 = r5.getHeight()
                int r2 = r2 + r0
                int r0 = r2 / 2
                goto L43
            L3a:
                int r1 = r5.getHeight()
                int r1 = r1 - r0
                int r0 = r5.getHeight()
            L43:
                int r2 = r5.indicatorLeft
                if (r2 < 0) goto L85
                int r3 = r5.indicatorRight
                if (r3 <= r2) goto L85
                android.support.design.widget.TabLayout r2 = r5.this$0
                android.graphics.drawable.Drawable r2 = r2.tabSelectedIndicator
                if (r2 == 0) goto L56
                android.support.design.widget.TabLayout r2 = r5.this$0
                android.graphics.drawable.Drawable r2 = r2.tabSelectedIndicator
                goto L58
            L56:
                android.graphics.drawable.GradientDrawable r2 = r5.defaultSelectionIndicator
            L58:
                android.graphics.drawable.Drawable r2 = android.support.v4.graphics.drawable.DrawableCompat.wrap(r2)
                int r3 = r5.indicatorLeft
                int r4 = r5.indicatorRight
                r2.setBounds(r3, r1, r4, r0)
                android.graphics.Paint r0 = r5.selectedIndicatorPaint
                if (r0 == 0) goto L82
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 21
                if (r0 != r1) goto L79
                android.graphics.Paint r0 = r5.selectedIndicatorPaint
                int r0 = r0.getColor()
                android.graphics.PorterDuff$Mode r1 = android.graphics.PorterDuff.Mode.SRC_IN
                r2.setColorFilter(r0, r1)
                goto L82
            L79:
                android.graphics.Paint r0 = r5.selectedIndicatorPaint
                int r0 = r0.getColor()
                android.support.v4.graphics.drawable.DrawableCompat.setTint(r2, r0)
            L82:
                r2.draw(r6)
            L85:
                super.draw(r6)
                return
        }

        float getIndicatorPosition() {
                r2 = this;
                int r0 = r2.selectedPosition
                float r0 = (float) r0
                float r1 = r2.selectionOffset
                float r0 = r0 + r1
                return r0
        }

        @Override
        protected void onLayout(boolean r1, int r2, int r3, int r4, int r5) {
                r0 = this;
                super.onLayout(r1, r2, r3, r4, r5)
                android.animation.ValueAnimator r1 = r0.indicatorAnimator
                if (r1 == 0) goto L2d
                boolean r1 = r1.isRunning()
                if (r1 == 0) goto L2d
                android.animation.ValueAnimator r1 = r0.indicatorAnimator
                r1.cancel()
                android.animation.ValueAnimator r1 = r0.indicatorAnimator
                long r1 = r1.getDuration()
                int r3 = r0.selectedPosition
                r4 = 1065353216(0x3f800000, float:1.0)
                android.animation.ValueAnimator r5 = r0.indicatorAnimator
                float r5 = r5.getAnimatedFraction()
                float r4 = r4 - r5
                float r1 = (float) r1
                float r4 = r4 * r1
                int r1 = java.lang.Math.round(r4)
                r0.animateIndicatorToPosition(r3, r1)
                goto L30
            L2d:
                r0.updateIndicatorPosition()
            L30:
                return
        }

        @Override
        protected void onMeasure(int r9, int r10) {
                r8 = this;
                super.onMeasure(r9, r10)
                int r0 = android.view.View.MeasureSpec.getMode(r9)
                r1 = 1073741824(0x40000000, float:2.0)
                if (r0 == r1) goto Lc
                return
            Lc:
                android.support.design.widget.TabLayout r0 = r8.this$0
                int r0 = r0.mode
                r1 = 1
                if (r0 != r1) goto L7d
                android.support.design.widget.TabLayout r0 = r8.this$0
                int r0 = r0.tabGravity
                if (r0 != r1) goto L7d
                int r0 = r8.getChildCount()
                r2 = 0
                r3 = r2
                r4 = r3
            L20:
                if (r3 >= r0) goto L37
                android.view.View r5 = r8.getChildAt(r3)
                int r6 = r5.getVisibility()
                if (r6 != 0) goto L34
                int r5 = r5.getMeasuredWidth()
                int r4 = java.lang.Math.max(r4, r5)
            L34:
                int r3 = r3 + 1
                goto L20
            L37:
                if (r4 > 0) goto L3a
                return
            L3a:
                android.support.design.widget.TabLayout r3 = r8.this$0
                r5 = 16
                int r3 = r3.dpToPx(r5)
                int r5 = r4 * r0
                int r6 = r8.getMeasuredWidth()
                int r3 = r3 * 2
                int r6 = r6 - r3
                if (r5 > r6) goto L6f
                r3 = r2
            L4e:
                if (r2 >= r0) goto L6d
                android.view.View r5 = r8.getChildAt(r2)
                android.view.ViewGroup$LayoutParams r5 = r5.getLayoutParams()
                android.widget.LinearLayout$LayoutParams r5 = (android.widget.LinearLayout.LayoutParams) r5
                int r6 = r5.width
                r7 = 0
                if (r6 != r4) goto L65
                float r6 = r5.weight
                int r6 = (r6 > r7 ? 1 : (r6 == r7 ? 0 : -1))
                if (r6 == 0) goto L6a
            L65:
                r5.width = r4
                r5.weight = r7
                r3 = r1
            L6a:
                int r2 = r2 + 1
                goto L4e
            L6d:
                r1 = r3
                goto L78
            L6f:
                android.support.design.widget.TabLayout r0 = r8.this$0
                r0.tabGravity = r2
                android.support.design.widget.TabLayout r0 = r8.this$0
                r0.updateTabViews(r2)
            L78:
                if (r1 == 0) goto L7d
                super.onMeasure(r9, r10)
            L7d:
                return
        }

        @Override
        public void onRtlPropertiesChanged(int r3) {
                r2 = this;
                super.onRtlPropertiesChanged(r3)
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 23
                if (r0 >= r1) goto L12
                int r0 = r2.layoutDirection
                if (r0 == r3) goto L12
                r2.requestLayout()
                r2.layoutDirection = r3
            L12:
                return
        }

        void setIndicatorPosition(int r2, int r3) {
                r1 = this;
                int r0 = r1.indicatorLeft
                if (r2 != r0) goto L8
                int r0 = r1.indicatorRight
                if (r3 == r0) goto Lf
            L8:
                r1.indicatorLeft = r2
                r1.indicatorRight = r3
                android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r1)
            Lf:
                return
        }

        void setIndicatorPositionFromTabPosition(int r2, float r3) {
                r1 = this;
                android.animation.ValueAnimator r0 = r1.indicatorAnimator
                if (r0 == 0) goto Lf
                boolean r0 = r0.isRunning()
                if (r0 == 0) goto Lf
                android.animation.ValueAnimator r0 = r1.indicatorAnimator
                r0.cancel()
            Lf:
                r1.selectedPosition = r2
                r1.selectionOffset = r3
                r1.updateIndicatorPosition()
                return
        }

        void setSelectedIndicatorColor(int r2) {
                r1 = this;
                android.graphics.Paint r0 = r1.selectedIndicatorPaint
                int r0 = r0.getColor()
                if (r0 == r2) goto L10
                android.graphics.Paint r0 = r1.selectedIndicatorPaint
                r0.setColor(r2)
                android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r1)
            L10:
                return
        }

        void setSelectedIndicatorHeight(int r2) {
                r1 = this;
                int r0 = r1.selectedIndicatorHeight
                if (r0 == r2) goto L9
                r1.selectedIndicatorHeight = r2
                android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r1)
            L9:
                return
        }
    }

    public static class Tab {
        public static final int INVALID_POSITION = -1;
        private java.lang.CharSequence contentDesc;
        private android.view.View customView;
        private android.graphics.drawable.Drawable icon;
        public android.support.design.widget.TabLayout parent;
        private int position;
        private java.lang.Object tag;
        private java.lang.CharSequence text;
        public android.support.design.widget.TabLayout.TabView view;

        public Tab() {
                r1 = this;
                r1.<init>()
                r0 = -1
                r1.position = r0
                return
        }

        static java.lang.CharSequence access$100(android.support.design.widget.TabLayout.Tab r0) {
                java.lang.CharSequence r0 = r0.contentDesc
                return r0
        }

        static java.lang.CharSequence access$200(android.support.design.widget.TabLayout.Tab r0) {
                java.lang.CharSequence r0 = r0.text
                return r0
        }

        public java.lang.CharSequence getContentDescription() {
                r1 = this;
                android.support.design.widget.TabLayout$TabView r0 = r1.view
                if (r0 != 0) goto L6
                r0 = 0
                goto La
            L6:
                java.lang.CharSequence r0 = r0.getContentDescription()
            La:
                return r0
        }

        public android.view.View getCustomView() {
                r1 = this;
                android.view.View r0 = r1.customView
                return r0
        }

        public android.graphics.drawable.Drawable getIcon() {
                r1 = this;
                android.graphics.drawable.Drawable r0 = r1.icon
                return r0
        }

        public int getPosition() {
                r1 = this;
                int r0 = r1.position
                return r0
        }

        public java.lang.Object getTag() {
                r1 = this;
                java.lang.Object r0 = r1.tag
                return r0
        }

        public java.lang.CharSequence getText() {
                r1 = this;
                java.lang.CharSequence r0 = r1.text
                return r0
        }

        public boolean isSelected() {
                r2 = this;
                android.support.design.widget.TabLayout r0 = r2.parent
                if (r0 == 0) goto L10
                int r0 = r0.getSelectedTabPosition()
                int r1 = r2.position
                if (r0 != r1) goto Le
                r0 = 1
                goto Lf
            Le:
                r0 = 0
            Lf:
                return r0
            L10:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r1 = "Tab not attached to a TabLayout"
                r0.<init>(r1)
                throw r0
        }

        void reset() {
                r2 = this;
                r0 = 0
                r2.parent = r0
                r2.view = r0
                r2.tag = r0
                r2.icon = r0
                r2.text = r0
                r2.contentDesc = r0
                r1 = -1
                r2.position = r1
                r2.customView = r0
                return
        }

        public void select() {
                r2 = this;
                android.support.design.widget.TabLayout r0 = r2.parent
                if (r0 == 0) goto L8
                r0.selectTab(r2)
                return
            L8:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r1 = "Tab not attached to a TabLayout"
                r0.<init>(r1)
                throw r0
        }

        public android.support.design.widget.TabLayout.Tab setContentDescription(int r2) {
                r1 = this;
                android.support.design.widget.TabLayout r0 = r1.parent
                if (r0 == 0) goto L11
                android.content.res.Resources r0 = r0.getResources()
                java.lang.CharSequence r2 = r0.getText(r2)
                android.support.design.widget.TabLayout$Tab r2 = r1.setContentDescription(r2)
                return r2
            L11:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "Tab not attached to a TabLayout"
                r2.<init>(r0)
                throw r2
        }

        public android.support.design.widget.TabLayout.Tab setContentDescription(java.lang.CharSequence r1) {
                r0 = this;
                r0.contentDesc = r1
                r0.updateView()
                return r0
        }

        public android.support.design.widget.TabLayout.Tab setCustomView(int r4) {
                r3 = this;
                android.support.design.widget.TabLayout$TabView r0 = r3.view
                android.content.Context r0 = r0.getContext()
                android.view.LayoutInflater r0 = android.view.LayoutInflater.from(r0)
                android.support.design.widget.TabLayout$TabView r1 = r3.view
                r2 = 0
                android.view.View r4 = r0.inflate(r4, r1, r2)
                android.support.design.widget.TabLayout$Tab r4 = r3.setCustomView(r4)
                return r4
        }

        public android.support.design.widget.TabLayout.Tab setCustomView(android.view.View r1) {
                r0 = this;
                r0.customView = r1
                r0.updateView()
                return r0
        }

        public android.support.design.widget.TabLayout.Tab setIcon(int r2) {
                r1 = this;
                android.support.design.widget.TabLayout r0 = r1.parent
                if (r0 == 0) goto L11
                android.content.Context r0 = r0.getContext()
                android.graphics.drawable.Drawable r2 = android.support.v7.content.res.AppCompatResources.getDrawable(r0, r2)
                android.support.design.widget.TabLayout$Tab r2 = r1.setIcon(r2)
                return r2
            L11:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "Tab not attached to a TabLayout"
                r2.<init>(r0)
                throw r2
        }

        public android.support.design.widget.TabLayout.Tab setIcon(android.graphics.drawable.Drawable r1) {
                r0 = this;
                r0.icon = r1
                r0.updateView()
                return r0
        }

        void setPosition(int r1) {
                r0 = this;
                r0.position = r1
                return
        }

        public android.support.design.widget.TabLayout.Tab setTag(java.lang.Object r1) {
                r0 = this;
                r0.tag = r1
                return r0
        }

        public android.support.design.widget.TabLayout.Tab setText(int r2) {
                r1 = this;
                android.support.design.widget.TabLayout r0 = r1.parent
                if (r0 == 0) goto L11
                android.content.res.Resources r0 = r0.getResources()
                java.lang.CharSequence r2 = r0.getText(r2)
                android.support.design.widget.TabLayout$Tab r2 = r1.setText(r2)
                return r2
            L11:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "Tab not attached to a TabLayout"
                r2.<init>(r0)
                throw r2
        }

        public android.support.design.widget.TabLayout.Tab setText(java.lang.CharSequence r2) {
                r1 = this;
                java.lang.CharSequence r0 = r1.contentDesc
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto L13
                boolean r0 = android.text.TextUtils.isEmpty(r2)
                if (r0 != 0) goto L13
                android.support.design.widget.TabLayout$TabView r0 = r1.view
                r0.setContentDescription(r2)
            L13:
                r1.text = r2
                r1.updateView()
                return r1
        }

        void updateView() {
                r1 = this;
                android.support.design.widget.TabLayout$TabView r0 = r1.view
                if (r0 == 0) goto L7
                r0.update()
            L7:
                return
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface TabGravity {
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface TabIndicatorGravity {
    }

    public static class TabLayoutOnPageChangeListener implements android.support.v4.view.ViewPager.OnPageChangeListener {
        private int previousScrollState;
        private int scrollState;
        private final java.lang.ref.WeakReference<android.support.design.widget.TabLayout> tabLayoutRef;

        public TabLayoutOnPageChangeListener(android.support.design.widget.TabLayout r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.tabLayoutRef = r0
                return
        }

        @Override
        public void onPageScrollStateChanged(int r2) {
                r1 = this;
                int r0 = r1.scrollState
                r1.previousScrollState = r0
                r1.scrollState = r2
                return
        }

        @Override
        public void onPageScrolled(int r6, float r7, int r8) {
                r5 = this;
                java.lang.ref.WeakReference<android.support.design.widget.TabLayout> r8 = r5.tabLayoutRef
                java.lang.Object r8 = r8.get()
                android.support.design.widget.TabLayout r8 = (android.support.design.widget.TabLayout) r8
                if (r8 == 0) goto L25
                int r0 = r5.scrollState
                r1 = 0
                r2 = 2
                r3 = 1
                if (r0 != r2) goto L18
                int r0 = r5.previousScrollState
                if (r0 != r3) goto L16
                goto L18
            L16:
                r0 = r1
                goto L19
            L18:
                r0 = r3
            L19:
                int r4 = r5.scrollState
                if (r4 != r2) goto L21
                int r2 = r5.previousScrollState
                if (r2 == 0) goto L22
            L21:
                r1 = r3
            L22:
                r8.setScrollPosition(r6, r7, r0, r1)
            L25:
                return
        }

        @Override
        public void onPageSelected(int r4) {
                r3 = this;
                java.lang.ref.WeakReference<android.support.design.widget.TabLayout> r0 = r3.tabLayoutRef
                java.lang.Object r0 = r0.get()
                android.support.design.widget.TabLayout r0 = (android.support.design.widget.TabLayout) r0
                if (r0 == 0) goto L2c
                int r1 = r0.getSelectedTabPosition()
                if (r1 == r4) goto L2c
                int r1 = r0.getTabCount()
                if (r4 >= r1) goto L2c
                int r1 = r3.scrollState
                if (r1 == 0) goto L24
                r2 = 2
                if (r1 != r2) goto L22
                int r1 = r3.previousScrollState
                if (r1 != 0) goto L22
                goto L24
            L22:
                r1 = 0
                goto L25
            L24:
                r1 = 1
            L25:
                android.support.design.widget.TabLayout$Tab r4 = r0.getTabAt(r4)
                r0.selectTab(r4, r1)
            L2c:
                return
        }

        void reset() {
                r1 = this;
                r0 = 0
                r1.scrollState = r0
                r1.previousScrollState = r0
                return
        }
    }

    class TabView extends android.widget.LinearLayout {
        private android.graphics.drawable.Drawable baseBackgroundDrawable;
        private android.widget.ImageView customIconView;
        private android.widget.TextView customTextView;
        private android.view.View customView;
        private int defaultMaxLines;
        private android.widget.ImageView iconView;
        private android.support.design.widget.TabLayout.Tab tab;
        private android.widget.TextView textView;
        final android.support.design.widget.TabLayout this$0;

        public TabView(android.support.design.widget.TabLayout r4, android.content.Context r5) {
                r3 = this;
                r3.this$0 = r4
                r3.<init>(r5)
                r0 = 2
                r3.defaultMaxLines = r0
                r3.updateBackgroundDrawable(r5)
                int r5 = r4.tabPaddingStart
                int r0 = r4.tabPaddingTop
                int r1 = r4.tabPaddingEnd
                int r2 = r4.tabPaddingBottom
                android.support.v4.view.ViewCompat.setPaddingRelative(r3, r5, r0, r1, r2)
                r5 = 17
                r3.setGravity(r5)
                boolean r4 = r4.inlineLabel
                r5 = 1
                r4 = r4 ^ r5
                r3.setOrientation(r4)
                r3.setClickable(r5)
                android.content.Context r4 = r3.getContext()
                r5 = 1002(0x3ea, float:1.404E-42)
                android.support.v4.view.PointerIconCompat r4 = android.support.v4.view.PointerIconCompat.getSystemIcon(r4, r5)
                android.support.v4.view.ViewCompat.setPointerIcon(r3, r4)
                return
        }

        static void access$000(android.support.design.widget.TabLayout.TabView r0, android.content.Context r1) {
                r0.updateBackgroundDrawable(r1)
                return
        }

        static void access$300(android.support.design.widget.TabLayout.TabView r0, android.graphics.Canvas r1) {
                r0.drawBackground(r1)
                return
        }

        static int access$500(android.support.design.widget.TabLayout.TabView r0) {
                int r0 = r0.getContentWidth()
                return r0
        }

        private float approximateLineWidth(android.text.Layout r1, int r2, float r3) {
                r0 = this;
                float r2 = r1.getLineWidth(r2)
                android.text.TextPaint r1 = r1.getPaint()
                float r1 = r1.getTextSize()
                float r3 = r3 / r1
                float r2 = r2 * r3
                return r2
        }

        private void drawBackground(android.graphics.Canvas r6) {
                r5 = this;
                android.graphics.drawable.Drawable r0 = r5.baseBackgroundDrawable
                if (r0 == 0) goto L1c
                int r1 = r5.getLeft()
                int r2 = r5.getTop()
                int r3 = r5.getRight()
                int r4 = r5.getBottom()
                r0.setBounds(r1, r2, r3, r4)
                android.graphics.drawable.Drawable r0 = r5.baseBackgroundDrawable
                r0.draw(r6)
            L1c:
                return
        }

        private int getContentWidth() {
                r9 = this;
                r0 = 3
                android.view.View[] r1 = new android.view.View[r0]
                android.widget.TextView r2 = r9.textView
                r3 = 0
                r1[r3] = r2
                android.widget.ImageView r2 = r9.iconView
                r4 = 1
                r1[r4] = r2
                android.view.View r2 = r9.customView
                r5 = 2
                r1[r5] = r2
                r2 = r3
                r5 = r2
                r6 = r5
            L15:
                if (r3 >= r0) goto L43
                r7 = r1[r3]
                if (r7 == 0) goto L40
                int r8 = r7.getVisibility()
                if (r8 != 0) goto L40
                if (r6 == 0) goto L2c
                int r8 = r7.getLeft()
                int r5 = java.lang.Math.min(r5, r8)
                goto L30
            L2c:
                int r5 = r7.getLeft()
            L30:
                if (r6 == 0) goto L3b
                int r6 = r7.getRight()
                int r2 = java.lang.Math.max(r2, r6)
                goto L3f
            L3b:
                int r2 = r7.getRight()
            L3f:
                r6 = r4
            L40:
                int r3 = r3 + 1
                goto L15
            L43:
                int r2 = r2 - r5
                return r2
        }

        private void updateBackgroundDrawable(android.content.Context r7) {
                r6 = this;
                android.support.design.widget.TabLayout r0 = r6.this$0
                int r0 = r0.tabBackgroundResId
                r1 = 0
                if (r0 == 0) goto L23
                android.support.design.widget.TabLayout r0 = r6.this$0
                int r0 = r0.tabBackgroundResId
                android.graphics.drawable.Drawable r7 = android.support.v7.content.res.AppCompatResources.getDrawable(r7, r0)
                r6.baseBackgroundDrawable = r7
                if (r7 == 0) goto L25
                boolean r7 = r7.isStateful()
                if (r7 == 0) goto L25
                android.graphics.drawable.Drawable r7 = r6.baseBackgroundDrawable
                int[] r0 = r6.getDrawableState()
                r7.setState(r0)
                goto L25
            L23:
                r6.baseBackgroundDrawable = r1
            L25:
                android.graphics.drawable.GradientDrawable r7 = new android.graphics.drawable.GradientDrawable
                r7.<init>()
                r0 = r7
                android.graphics.drawable.GradientDrawable r0 = (android.graphics.drawable.GradientDrawable) r0
                r2 = 0
                r0.setColor(r2)
                android.support.design.widget.TabLayout r0 = r6.this$0
                android.content.res.ColorStateList r0 = r0.tabRippleColorStateList
                if (r0 == 0) goto L7f
                android.graphics.drawable.GradientDrawable r0 = new android.graphics.drawable.GradientDrawable
                r0.<init>()
                r3 = 925353388(0x3727c5ac, float:1.0E-5)
                r0.setCornerRadius(r3)
                r3 = -1
                r0.setColor(r3)
                android.support.design.widget.TabLayout r3 = r6.this$0
                android.content.res.ColorStateList r3 = r3.tabRippleColorStateList
                android.content.res.ColorStateList r3 = android.support.design.ripple.RippleUtils.convertToRippleDrawableColor(r3)
                int r4 = android.os.Build.VERSION.SDK_INT
                r5 = 21
                if (r4 < r5) goto L6a
                android.graphics.drawable.RippleDrawable r2 = new android.graphics.drawable.RippleDrawable
                android.support.design.widget.TabLayout r4 = r6.this$0
                boolean r4 = r4.unboundedRipple
                if (r4 == 0) goto L5d
                r7 = r1
            L5d:
                android.support.design.widget.TabLayout r4 = r6.this$0
                boolean r4 = r4.unboundedRipple
                if (r4 == 0) goto L64
                goto L65
            L64:
                r1 = r0
            L65:
                r2.<init>(r3, r7, r1)
                r7 = r2
                goto L7f
            L6a:
                android.graphics.drawable.Drawable r0 = android.support.v4.graphics.drawable.DrawableCompat.wrap(r0)
                android.support.v4.graphics.drawable.DrawableCompat.setTintList(r0, r3)
                android.graphics.drawable.LayerDrawable r1 = new android.graphics.drawable.LayerDrawable
                r3 = 2
                android.graphics.drawable.Drawable[] r3 = new android.graphics.drawable.Drawable[r3]
                r3[r2] = r7
                r7 = 1
                r3[r7] = r0
                r1.<init>(r3)
                r7 = r1
            L7f:
                android.support.v4.view.ViewCompat.setBackground(r6, r7)
                android.support.design.widget.TabLayout r7 = r6.this$0
                r7.invalidate()
                return
        }

        private void updateTextAndIcon(android.widget.TextView r6, android.widget.ImageView r7) {
                r5 = this;
                android.support.design.widget.TabLayout$Tab r0 = r5.tab
                r1 = 0
                if (r0 == 0) goto L1a
                android.graphics.drawable.Drawable r0 = r0.getIcon()
                if (r0 == 0) goto L1a
                android.support.design.widget.TabLayout$Tab r0 = r5.tab
                android.graphics.drawable.Drawable r0 = r0.getIcon()
                android.graphics.drawable.Drawable r0 = android.support.v4.graphics.drawable.DrawableCompat.wrap(r0)
                android.graphics.drawable.Drawable r0 = r0.mutate()
                goto L1b
            L1a:
                r0 = r1
            L1b:
                android.support.design.widget.TabLayout$Tab r2 = r5.tab
                if (r2 == 0) goto L24
                java.lang.CharSequence r2 = r2.getText()
                goto L25
            L24:
                r2 = r1
            L25:
                r3 = 8
                r4 = 0
                if (r7 == 0) goto L3c
                if (r0 == 0) goto L36
                r7.setImageDrawable(r0)
                r7.setVisibility(r4)
                r5.setVisibility(r4)
                goto L3c
            L36:
                r7.setVisibility(r3)
                r7.setImageDrawable(r1)
            L3c:
                boolean r0 = android.text.TextUtils.isEmpty(r2)
                r0 = r0 ^ 1
                if (r6 == 0) goto L56
                if (r0 == 0) goto L50
                r6.setText(r2)
                r6.setVisibility(r4)
                r5.setVisibility(r4)
                goto L56
            L50:
                r6.setVisibility(r3)
                r6.setText(r1)
            L56:
                if (r7 == 0) goto L95
                android.view.ViewGroup$LayoutParams r6 = r7.getLayoutParams()
                android.view.ViewGroup$MarginLayoutParams r6 = (android.view.ViewGroup.MarginLayoutParams) r6
                if (r0 == 0) goto L6d
                int r2 = r7.getVisibility()
                if (r2 != 0) goto L6d
                android.support.design.widget.TabLayout r2 = r5.this$0
                int r2 = r2.dpToPx(r3)
                goto L6e
            L6d:
                r2 = r4
            L6e:
                android.support.design.widget.TabLayout r3 = r5.this$0
                boolean r3 = r3.inlineLabel
                if (r3 == 0) goto L86
                int r3 = android.support.v4.view.MarginLayoutParamsCompat.getMarginEnd(r6)
                if (r2 == r3) goto L95
                android.support.v4.view.MarginLayoutParamsCompat.setMarginEnd(r6, r2)
                r6.bottomMargin = r4
                r7.setLayoutParams(r6)
                r7.requestLayout()
                goto L95
            L86:
                int r3 = r6.bottomMargin
                if (r2 == r3) goto L95
                r6.bottomMargin = r2
                android.support.v4.view.MarginLayoutParamsCompat.setMarginEnd(r6, r4)
                r7.setLayoutParams(r6)
                r7.requestLayout()
            L95:
                android.support.design.widget.TabLayout$Tab r6 = r5.tab
                if (r6 == 0) goto L9e
                java.lang.CharSequence r6 = android.support.design.widget.TabLayout.Tab.access$100(r6)
                goto L9f
            L9e:
                r6 = r1
            L9f:
                if (r0 == 0) goto La2
                goto La3
            La2:
                r1 = r6
            La3:
                android.support.v7.widget.TooltipCompat.setTooltipText(r5, r1)
                return
        }

        @Override
        protected void drawableStateChanged() {
                r3 = this;
                super.drawableStateChanged()
                int[] r0 = r3.getDrawableState()
                android.graphics.drawable.Drawable r1 = r3.baseBackgroundDrawable
                r2 = 0
                if (r1 == 0) goto L19
                boolean r1 = r1.isStateful()
                if (r1 == 0) goto L19
                android.graphics.drawable.Drawable r1 = r3.baseBackgroundDrawable
                boolean r0 = r1.setState(r0)
                r2 = r2 | r0
            L19:
                if (r2 == 0) goto L23
                r3.invalidate()
                android.support.design.widget.TabLayout r0 = r3.this$0
                r0.invalidate()
            L23:
                return
        }

        public android.support.design.widget.TabLayout.Tab getTab() {
                r1 = this;
                android.support.design.widget.TabLayout$Tab r0 = r1.tab
                return r0
        }

        @Override
        public void onInitializeAccessibilityEvent(android.view.accessibility.AccessibilityEvent r2) {
                r1 = this;
                super.onInitializeAccessibilityEvent(r2)
                java.lang.Class<android.support.v7.app.ActionBar$Tab> r0 = android.support.v7.app.ActionBar.Tab.class
                java.lang.String r0 = r0.getName()
                r2.setClassName(r0)
                return
        }

        @Override
        public void onInitializeAccessibilityNodeInfo(android.view.accessibility.AccessibilityNodeInfo r2) {
                r1 = this;
                super.onInitializeAccessibilityNodeInfo(r2)
                java.lang.Class<android.support.v7.app.ActionBar$Tab> r0 = android.support.v7.app.ActionBar.Tab.class
                java.lang.String r0 = r0.getName()
                r2.setClassName(r0)
                return
        }

        @Override
        public void onMeasure(int r8, int r9) {
                r7 = this;
                int r0 = android.view.View.MeasureSpec.getSize(r8)
                int r1 = android.view.View.MeasureSpec.getMode(r8)
                android.support.design.widget.TabLayout r2 = r7.this$0
                int r2 = r2.getTabMaxWidth()
                if (r2 <= 0) goto L1e
                if (r1 == 0) goto L14
                if (r0 <= r2) goto L1e
            L14:
                android.support.design.widget.TabLayout r8 = r7.this$0
                int r8 = r8.tabMaxWidth
                r0 = -2147483648(0xffffffff80000000, float:-0.0)
                int r8 = android.view.View.MeasureSpec.makeMeasureSpec(r8, r0)
            L1e:
                super.onMeasure(r8, r9)
                android.widget.TextView r0 = r7.textView
                if (r0 == 0) goto L9a
                android.support.design.widget.TabLayout r0 = r7.this$0
                float r0 = r0.tabTextSize
                int r1 = r7.defaultMaxLines
                android.widget.ImageView r2 = r7.iconView
                r3 = 1
                if (r2 == 0) goto L38
                int r2 = r2.getVisibility()
                if (r2 != 0) goto L38
                r1 = r3
                goto L46
            L38:
                android.widget.TextView r2 = r7.textView
                if (r2 == 0) goto L46
                int r2 = r2.getLineCount()
                if (r2 <= r3) goto L46
                android.support.design.widget.TabLayout r0 = r7.this$0
                float r0 = r0.tabTextMultiLineSize
            L46:
                android.widget.TextView r2 = r7.textView
                float r2 = r2.getTextSize()
                android.widget.TextView r4 = r7.textView
                int r4 = r4.getLineCount()
                android.widget.TextView r5 = r7.textView
                int r5 = android.support.v4.widget.TextViewCompat.getMaxLines(r5)
                int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r2 != 0) goto L60
                if (r5 < 0) goto L9a
                if (r1 == r5) goto L9a
            L60:
                android.support.design.widget.TabLayout r5 = r7.this$0
                int r5 = r5.mode
                r6 = 0
                if (r5 != r3) goto L8b
                if (r2 <= 0) goto L8b
                if (r4 != r3) goto L8b
                android.widget.TextView r2 = r7.textView
                android.text.Layout r2 = r2.getLayout()
                if (r2 == 0) goto L8a
                float r2 = r7.approximateLineWidth(r2, r6, r0)
                int r4 = r7.getMeasuredWidth()
                int r5 = r7.getPaddingLeft()
                int r4 = r4 - r5
                int r5 = r7.getPaddingRight()
                int r4 = r4 - r5
                float r4 = (float) r4
                int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r2 <= 0) goto L8b
            L8a:
                r3 = r6
            L8b:
                if (r3 == 0) goto L9a
                android.widget.TextView r2 = r7.textView
                r2.setTextSize(r6, r0)
                android.widget.TextView r0 = r7.textView
                r0.setMaxLines(r1)
                super.onMeasure(r8, r9)
            L9a:
                return
        }

        @Override
        public boolean performClick() {
                r2 = this;
                boolean r0 = super.performClick()
                android.support.design.widget.TabLayout$Tab r1 = r2.tab
                if (r1 == 0) goto L14
                if (r0 != 0) goto Le
                r0 = 0
                r2.playSoundEffect(r0)
            Le:
                android.support.design.widget.TabLayout$Tab r0 = r2.tab
                r0.select()
                r0 = 1
            L14:
                return r0
        }

        void reset() {
                r1 = this;
                r0 = 0
                r1.setTab(r0)
                r0 = 0
                r1.setSelected(r0)
                return
        }

        @Override
        public void setSelected(boolean r3) {
                r2 = this;
                boolean r0 = r2.isSelected()
                if (r0 == r3) goto L8
                r0 = 1
                goto L9
            L8:
                r0 = 0
            L9:
                super.setSelected(r3)
                if (r0 == 0) goto L1a
                if (r3 == 0) goto L1a
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 16
                if (r0 >= r1) goto L1a
                r0 = 4
                r2.sendAccessibilityEvent(r0)
            L1a:
                android.widget.TextView r0 = r2.textView
                if (r0 == 0) goto L21
                r0.setSelected(r3)
            L21:
                android.widget.ImageView r0 = r2.iconView
                if (r0 == 0) goto L28
                r0.setSelected(r3)
            L28:
                android.view.View r0 = r2.customView
                if (r0 == 0) goto L2f
                r0.setSelected(r3)
            L2f:
                return
        }

        void setTab(android.support.design.widget.TabLayout.Tab r2) {
                r1 = this;
                android.support.design.widget.TabLayout$Tab r0 = r1.tab
                if (r2 == r0) goto L9
                r1.tab = r2
                r1.update()
            L9:
                return
        }

        final void update() {
                r5 = this;
                android.support.design.widget.TabLayout$Tab r0 = r5.tab
                r1 = 0
                if (r0 == 0) goto La
                android.view.View r2 = r0.getCustomView()
                goto Lb
            La:
                r2 = r1
            Lb:
                if (r2 == 0) goto L53
                android.view.ViewParent r3 = r2.getParent()
                if (r3 == r5) goto L1d
                if (r3 == 0) goto L1a
                android.view.ViewGroup r3 = (android.view.ViewGroup) r3
                r3.removeView(r2)
            L1a:
                r5.addView(r2)
            L1d:
                r5.customView = r2
                android.widget.TextView r3 = r5.textView
                r4 = 8
                if (r3 == 0) goto L28
                r3.setVisibility(r4)
            L28:
                android.widget.ImageView r3 = r5.iconView
                if (r3 == 0) goto L34
                r3.setVisibility(r4)
                android.widget.ImageView r3 = r5.iconView
                r3.setImageDrawable(r1)
            L34:
                r3 = 16908308(0x1020014, float:2.3877285E-38)
                android.view.View r3 = r2.findViewById(r3)
                android.widget.TextView r3 = (android.widget.TextView) r3
                r5.customTextView = r3
                if (r3 == 0) goto L47
                int r3 = android.support.v4.widget.TextViewCompat.getMaxLines(r3)
                r5.defaultMaxLines = r3
            L47:
                r3 = 16908294(0x1020006, float:2.3877246E-38)
                android.view.View r2 = r2.findViewById(r3)
                android.widget.ImageView r2 = (android.widget.ImageView) r2
                r5.customIconView = r2
                goto L60
            L53:
                android.view.View r2 = r5.customView
                if (r2 == 0) goto L5c
                r5.removeView(r2)
                r5.customView = r1
            L5c:
                r5.customTextView = r1
                r5.customIconView = r1
            L60:
                android.view.View r2 = r5.customView
                r3 = 0
                if (r2 != 0) goto Le7
                android.widget.ImageView r2 = r5.iconView
                if (r2 != 0) goto L7e
                android.content.Context r2 = r5.getContext()
                android.view.LayoutInflater r2 = android.view.LayoutInflater.from(r2)
                int r4 = android.support.design.R.layout.design_layout_tab_icon
                android.view.View r2 = r2.inflate(r4, r5, r3)
                android.widget.ImageView r2 = (android.widget.ImageView) r2
                r5.addView(r2, r3)
                r5.iconView = r2
            L7e:
                if (r0 == 0) goto L92
                android.graphics.drawable.Drawable r2 = r0.getIcon()
                if (r2 == 0) goto L92
                android.graphics.drawable.Drawable r1 = r0.getIcon()
                android.graphics.drawable.Drawable r1 = android.support.v4.graphics.drawable.DrawableCompat.wrap(r1)
                android.graphics.drawable.Drawable r1 = r1.mutate()
            L92:
                if (r1 == 0) goto La8
                android.support.design.widget.TabLayout r2 = r5.this$0
                android.content.res.ColorStateList r2 = r2.tabIconTint
                android.support.v4.graphics.drawable.DrawableCompat.setTintList(r1, r2)
                android.support.design.widget.TabLayout r2 = r5.this$0
                android.graphics.PorterDuff$Mode r2 = r2.tabIconTintMode
                if (r2 == 0) goto La8
                android.support.design.widget.TabLayout r2 = r5.this$0
                android.graphics.PorterDuff$Mode r2 = r2.tabIconTintMode
                android.support.v4.graphics.drawable.DrawableCompat.setTintMode(r1, r2)
            La8:
                android.widget.TextView r1 = r5.textView
                if (r1 != 0) goto Lc7
                android.content.Context r1 = r5.getContext()
                android.view.LayoutInflater r1 = android.view.LayoutInflater.from(r1)
                int r2 = android.support.design.R.layout.design_layout_tab_text
                android.view.View r1 = r1.inflate(r2, r5, r3)
                android.widget.TextView r1 = (android.widget.TextView) r1
                r5.addView(r1)
                r5.textView = r1
                int r1 = android.support.v4.widget.TextViewCompat.getMaxLines(r1)
                r5.defaultMaxLines = r1
            Lc7:
                android.widget.TextView r1 = r5.textView
                android.support.design.widget.TabLayout r2 = r5.this$0
                int r2 = r2.tabTextAppearance
                android.support.v4.widget.TextViewCompat.setTextAppearance(r1, r2)
                android.support.design.widget.TabLayout r1 = r5.this$0
                android.content.res.ColorStateList r1 = r1.tabTextColors
                if (r1 == 0) goto Ldf
                android.widget.TextView r1 = r5.textView
                android.support.design.widget.TabLayout r2 = r5.this$0
                android.content.res.ColorStateList r2 = r2.tabTextColors
                r1.setTextColor(r2)
            Ldf:
                android.widget.TextView r1 = r5.textView
                android.widget.ImageView r2 = r5.iconView
                r5.updateTextAndIcon(r1, r2)
                goto Lf6
            Le7:
                android.widget.TextView r1 = r5.customTextView
                if (r1 != 0) goto Lef
                android.widget.ImageView r1 = r5.customIconView
                if (r1 == 0) goto Lf6
            Lef:
                android.widget.TextView r1 = r5.customTextView
                android.widget.ImageView r2 = r5.customIconView
                r5.updateTextAndIcon(r1, r2)
            Lf6:
                if (r0 == 0) goto L109
                java.lang.CharSequence r1 = android.support.design.widget.TabLayout.Tab.access$100(r0)
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 != 0) goto L109
                java.lang.CharSequence r1 = android.support.design.widget.TabLayout.Tab.access$100(r0)
                r5.setContentDescription(r1)
            L109:
                if (r0 == 0) goto L112
                boolean r0 = r0.isSelected()
                if (r0 == 0) goto L112
                r3 = 1
            L112:
                r5.setSelected(r3)
                return
        }

        final void updateOrientation() {
                r2 = this;
                android.support.design.widget.TabLayout r0 = r2.this$0
                boolean r0 = r0.inlineLabel
                r0 = r0 ^ 1
                r2.setOrientation(r0)
                android.widget.TextView r0 = r2.customTextView
                if (r0 != 0) goto L1a
                android.widget.ImageView r0 = r2.customIconView
                if (r0 == 0) goto L12
                goto L1a
            L12:
                android.widget.TextView r0 = r2.textView
                android.widget.ImageView r1 = r2.iconView
                r2.updateTextAndIcon(r0, r1)
                goto L21
            L1a:
                android.widget.TextView r0 = r2.customTextView
                android.widget.ImageView r1 = r2.customIconView
                r2.updateTextAndIcon(r0, r1)
            L21:
                return
        }
    }

    public static class ViewPagerOnTabSelectedListener implements android.support.design.widget.TabLayout.OnTabSelectedListener {
        private final android.support.v4.view.ViewPager viewPager;

        public ViewPagerOnTabSelectedListener(android.support.v4.view.ViewPager r1) {
                r0 = this;
                r0.<init>()
                r0.viewPager = r1
                return
        }

        @Override
        public void onTabReselected(android.support.design.widget.TabLayout.Tab r1) {
                r0 = this;
                return
        }

        @Override
        public void onTabSelected(android.support.design.widget.TabLayout.Tab r2) {
                r1 = this;
                android.support.v4.view.ViewPager r0 = r1.viewPager
                int r2 = r2.getPosition()
                r0.setCurrentItem(r2)
                return
        }

        @Override
        public void onTabUnselected(android.support.design.widget.TabLayout.Tab r1) {
                r0 = this;
                return
        }
    }

    static {
            android.support.v4.util.Pools$SynchronizedPool r0 = new android.support.v4.util.Pools$SynchronizedPool
            r1 = 16
            r0.<init>(r1)
            android.support.design.widget.TabLayout.tabPool = r0
            return
    }

    public TabLayout(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public TabLayout(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.design.R.attr.tabStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public TabLayout(android.content.Context r12, android.util.AttributeSet r13, int r14) {
            r11 = this;
            r11.<init>(r12, r13, r14)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r11.tabs = r0
            android.graphics.RectF r0 = new android.graphics.RectF
            r0.<init>()
            r11.tabViewContentBounds = r0
            r0 = 2147483647(0x7fffffff, float:NaN)
            r11.tabMaxWidth = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r11.selectedListeners = r0
            android.support.v4.util.Pools$SimplePool r0 = new android.support.v4.util.Pools$SimplePool
            r1 = 12
            r0.<init>(r1)
            r11.tabViewPool = r0
            r0 = 0
            r11.setHorizontalScrollBarEnabled(r0)
            android.support.design.widget.TabLayout$SlidingTabIndicator r1 = new android.support.design.widget.TabLayout$SlidingTabIndicator
            r1.<init>(r11, r12)
            r11.slidingTabIndicator = r1
            android.widget.FrameLayout$LayoutParams r2 = new android.widget.FrameLayout$LayoutParams
            r3 = -1
            r4 = -2
            r2.<init>(r4, r3)
            super.addView(r1, r0, r2)
            int[] r7 = android.support.design.R.styleable.TabLayout
            int r9 = android.support.design.R.style.Widget_Design_TabLayout
            r1 = 1
            int[] r10 = new int[r1]
            int r2 = android.support.design.R.styleable.TabLayout_tabTextAppearance
            r10[r0] = r2
            r5 = r12
            r6 = r13
            r8 = r14
            android.content.res.TypedArray r13 = android.support.design.internal.ThemeEnforcement.obtainStyledAttributes(r5, r6, r7, r8, r9, r10)
            android.support.design.widget.TabLayout$SlidingTabIndicator r14 = r11.slidingTabIndicator
            int r2 = android.support.design.R.styleable.TabLayout_tabIndicatorHeight
            int r2 = r13.getDimensionPixelSize(r2, r3)
            r14.setSelectedIndicatorHeight(r2)
            android.support.design.widget.TabLayout$SlidingTabIndicator r14 = r11.slidingTabIndicator
            int r2 = android.support.design.R.styleable.TabLayout_tabIndicatorColor
            int r2 = r13.getColor(r2, r0)
            r14.setSelectedIndicatorColor(r2)
            int r14 = android.support.design.R.styleable.TabLayout_tabIndicator
            android.graphics.drawable.Drawable r14 = android.support.design.resources.MaterialResources.getDrawable(r12, r13, r14)
            r11.setSelectedTabIndicator(r14)
            int r14 = android.support.design.R.styleable.TabLayout_tabIndicatorGravity
            int r14 = r13.getInt(r14, r0)
            r11.setSelectedTabIndicatorGravity(r14)
            int r14 = android.support.design.R.styleable.TabLayout_tabIndicatorFullWidth
            boolean r14 = r13.getBoolean(r14, r1)
            r11.setTabIndicatorFullWidth(r14)
            int r14 = android.support.design.R.styleable.TabLayout_tabPadding
            int r14 = r13.getDimensionPixelSize(r14, r0)
            r11.tabPaddingBottom = r14
            r11.tabPaddingEnd = r14
            r11.tabPaddingTop = r14
            r11.tabPaddingStart = r14
            int r14 = android.support.design.R.styleable.TabLayout_tabPaddingStart
            int r2 = r11.tabPaddingStart
            int r14 = r13.getDimensionPixelSize(r14, r2)
            r11.tabPaddingStart = r14
            int r14 = android.support.design.R.styleable.TabLayout_tabPaddingTop
            int r2 = r11.tabPaddingTop
            int r14 = r13.getDimensionPixelSize(r14, r2)
            r11.tabPaddingTop = r14
            int r14 = android.support.design.R.styleable.TabLayout_tabPaddingEnd
            int r2 = r11.tabPaddingEnd
            int r14 = r13.getDimensionPixelSize(r14, r2)
            r11.tabPaddingEnd = r14
            int r14 = android.support.design.R.styleable.TabLayout_tabPaddingBottom
            int r2 = r11.tabPaddingBottom
            int r14 = r13.getDimensionPixelSize(r14, r2)
            r11.tabPaddingBottom = r14
            int r14 = android.support.design.R.styleable.TabLayout_tabTextAppearance
            int r2 = android.support.design.R.style.TextAppearance_Design_Tab
            int r14 = r13.getResourceId(r14, r2)
            r11.tabTextAppearance = r14
            int[] r2 = android.support.v7.appcompat.R.styleable.TextAppearance
            android.content.res.TypedArray r14 = r12.obtainStyledAttributes(r14, r2)
            int r2 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textSize     // Catch: java.lang.Throwable -> L185
            int r2 = r14.getDimensionPixelSize(r2, r0)     // Catch: java.lang.Throwable -> L185
            float r2 = (float) r2     // Catch: java.lang.Throwable -> L185
            r11.tabTextSize = r2     // Catch: java.lang.Throwable -> L185
            int r2 = android.support.v7.appcompat.R.styleable.TextAppearance_android_textColor     // Catch: java.lang.Throwable -> L185
            android.content.res.ColorStateList r2 = android.support.design.resources.MaterialResources.getColorStateList(r12, r14, r2)     // Catch: java.lang.Throwable -> L185
            r11.tabTextColors = r2     // Catch: java.lang.Throwable -> L185
            r14.recycle()
            int r14 = android.support.design.R.styleable.TabLayout_tabTextColor
            boolean r14 = r13.hasValue(r14)
            if (r14 == 0) goto Le8
            int r14 = android.support.design.R.styleable.TabLayout_tabTextColor
            android.content.res.ColorStateList r14 = android.support.design.resources.MaterialResources.getColorStateList(r12, r13, r14)
            r11.tabTextColors = r14
        Le8:
            int r14 = android.support.design.R.styleable.TabLayout_tabSelectedTextColor
            boolean r14 = r13.hasValue(r14)
            if (r14 == 0) goto L102
            int r14 = android.support.design.R.styleable.TabLayout_tabSelectedTextColor
            int r14 = r13.getColor(r14, r0)
            android.content.res.ColorStateList r2 = r11.tabTextColors
            int r2 = r2.getDefaultColor()
            android.content.res.ColorStateList r14 = createColorStateList(r2, r14)
            r11.tabTextColors = r14
        L102:
            int r14 = android.support.design.R.styleable.TabLayout_tabIconTint
            android.content.res.ColorStateList r14 = android.support.design.resources.MaterialResources.getColorStateList(r12, r13, r14)
            r11.tabIconTint = r14
            int r14 = android.support.design.R.styleable.TabLayout_tabIconTintMode
            int r14 = r13.getInt(r14, r3)
            r2 = 0
            android.graphics.PorterDuff$Mode r14 = android.support.design.internal.ViewUtils.parseTintMode(r14, r2)
            r11.tabIconTintMode = r14
            int r14 = android.support.design.R.styleable.TabLayout_tabRippleColor
            android.content.res.ColorStateList r12 = android.support.design.resources.MaterialResources.getColorStateList(r12, r13, r14)
            r11.tabRippleColorStateList = r12
            int r12 = android.support.design.R.styleable.TabLayout_tabIndicatorAnimationDuration
            r14 = 300(0x12c, float:4.2E-43)
            int r12 = r13.getInt(r12, r14)
            r11.tabIndicatorAnimationDuration = r12
            int r12 = android.support.design.R.styleable.TabLayout_tabMinWidth
            int r12 = r13.getDimensionPixelSize(r12, r3)
            r11.requestedTabMinWidth = r12
            int r12 = android.support.design.R.styleable.TabLayout_tabMaxWidth
            int r12 = r13.getDimensionPixelSize(r12, r3)
            r11.requestedTabMaxWidth = r12
            int r12 = android.support.design.R.styleable.TabLayout_tabBackground
            int r12 = r13.getResourceId(r12, r0)
            r11.tabBackgroundResId = r12
            int r12 = android.support.design.R.styleable.TabLayout_tabContentStart
            int r12 = r13.getDimensionPixelSize(r12, r0)
            r11.contentInsetStart = r12
            int r12 = android.support.design.R.styleable.TabLayout_tabMode
            int r12 = r13.getInt(r12, r1)
            r11.mode = r12
            int r12 = android.support.design.R.styleable.TabLayout_tabGravity
            int r12 = r13.getInt(r12, r0)
            r11.tabGravity = r12
            int r12 = android.support.design.R.styleable.TabLayout_tabInlineLabel
            boolean r12 = r13.getBoolean(r12, r0)
            r11.inlineLabel = r12
            int r12 = android.support.design.R.styleable.TabLayout_tabUnboundedRipple
            boolean r12 = r13.getBoolean(r12, r0)
            r11.unboundedRipple = r12
            r13.recycle()
            android.content.res.Resources r12 = r11.getResources()
            int r13 = android.support.design.R.dimen.design_tab_text_size_2line
            int r13 = r12.getDimensionPixelSize(r13)
            float r13 = (float) r13
            r11.tabTextMultiLineSize = r13
            int r13 = android.support.design.R.dimen.design_tab_scrollable_min_width
            int r12 = r12.getDimensionPixelSize(r13)
            r11.scrollableTabMinWidth = r12
            r11.applyModeAndGravity()
            return
        L185:
            r12 = move-exception
            r14.recycle()
            throw r12
    }

    static android.graphics.RectF access$400(android.support.design.widget.TabLayout r0) {
            android.graphics.RectF r0 = r0.tabViewContentBounds
            return r0
    }

    private void addTabFromItemView(android.support.design.widget.TabItem r3) {
            r2 = this;
            android.support.design.widget.TabLayout$Tab r0 = r2.newTab()
            java.lang.CharSequence r1 = r3.text
            if (r1 == 0) goto Ld
            java.lang.CharSequence r1 = r3.text
            r0.setText(r1)
        Ld:
            android.graphics.drawable.Drawable r1 = r3.icon
            if (r1 == 0) goto L16
            android.graphics.drawable.Drawable r1 = r3.icon
            r0.setIcon(r1)
        L16:
            int r1 = r3.customLayout
            if (r1 == 0) goto L1f
            int r1 = r3.customLayout
            r0.setCustomView(r1)
        L1f:
            java.lang.CharSequence r1 = r3.getContentDescription()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L30
            java.lang.CharSequence r3 = r3.getContentDescription()
            r0.setContentDescription(r3)
        L30:
            r2.addTab(r0)
            return
    }

    private void addTabView(android.support.design.widget.TabLayout.Tab r4) {
            r3 = this;
            android.support.design.widget.TabLayout$TabView r0 = r4.view
            android.support.design.widget.TabLayout$SlidingTabIndicator r1 = r3.slidingTabIndicator
            int r4 = r4.getPosition()
            android.widget.LinearLayout$LayoutParams r2 = r3.createLayoutParamsForTabs()
            r1.addView(r0, r4, r2)
            return
    }

    private void addViewInternal(android.view.View r2) {
            r1 = this;
            boolean r0 = r2 instanceof android.support.design.widget.TabItem
            if (r0 == 0) goto La
            android.support.design.widget.TabItem r2 = (android.support.design.widget.TabItem) r2
            r1.addTabFromItemView(r2)
            return
        La:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Only TabItem instances can be added to TabLayout"
            r2.<init>(r0)
            throw r2
    }

    private void animateToTab(int r7) {
            r6 = this;
            r0 = -1
            if (r7 != r0) goto L4
            return
        L4:
            android.os.IBinder r0 = r6.getWindowToken()
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L42
            boolean r0 = android.support.v4.view.ViewCompat.isLaidOut(r6)
            if (r0 == 0) goto L42
            android.support.design.widget.TabLayout$SlidingTabIndicator r0 = r6.slidingTabIndicator
            boolean r0 = r0.childrenNeedLayout()
            if (r0 == 0) goto L1b
            goto L42
        L1b:
            int r0 = r6.getScrollX()
            int r2 = r6.calculateScrollXForTab(r7, r2)
            if (r0 == r2) goto L3a
            r6.ensureScrollAnimator()
            android.animation.ValueAnimator r3 = r6.scrollAnimator
            r4 = 2
            int[] r4 = new int[r4]
            r5 = 0
            r4[r5] = r0
            r4[r1] = r2
            r3.setIntValues(r4)
            android.animation.ValueAnimator r0 = r6.scrollAnimator
            r0.start()
        L3a:
            android.support.design.widget.TabLayout$SlidingTabIndicator r0 = r6.slidingTabIndicator
            int r1 = r6.tabIndicatorAnimationDuration
            r0.animateIndicatorToPosition(r7, r1)
            return
        L42:
            r6.setScrollPosition(r7, r2, r1)
            return
    }

    private void applyModeAndGravity() {
            r3 = this;
            int r0 = r3.mode
            r1 = 0
            if (r0 != 0) goto Lf
            int r0 = r3.contentInsetStart
            int r2 = r3.tabPaddingStart
            int r0 = r0 - r2
            int r0 = java.lang.Math.max(r1, r0)
            goto L10
        Lf:
            r0 = r1
        L10:
            android.support.design.widget.TabLayout$SlidingTabIndicator r2 = r3.slidingTabIndicator
            android.support.v4.view.ViewCompat.setPaddingRelative(r2, r0, r1, r1, r1)
            int r0 = r3.mode
            r1 = 1
            if (r0 == 0) goto L23
            if (r0 == r1) goto L1d
            goto L2b
        L1d:
            android.support.design.widget.TabLayout$SlidingTabIndicator r0 = r3.slidingTabIndicator
            r0.setGravity(r1)
            goto L2b
        L23:
            android.support.design.widget.TabLayout$SlidingTabIndicator r0 = r3.slidingTabIndicator
            r2 = 8388611(0x800003, float:1.1754948E-38)
            r0.setGravity(r2)
        L2b:
            r3.updateTabViews(r1)
            return
    }

    private int calculateScrollXForTab(int r4, float r5) {
            r3 = this;
            int r0 = r3.mode
            r1 = 0
            if (r0 != 0) goto L4a
            android.support.design.widget.TabLayout$SlidingTabIndicator r0 = r3.slidingTabIndicator
            android.view.View r0 = r0.getChildAt(r4)
            int r4 = r4 + 1
            android.support.design.widget.TabLayout$SlidingTabIndicator r2 = r3.slidingTabIndicator
            int r2 = r2.getChildCount()
            if (r4 >= r2) goto L1c
            android.support.design.widget.TabLayout$SlidingTabIndicator r2 = r3.slidingTabIndicator
            android.view.View r4 = r2.getChildAt(r4)
            goto L1d
        L1c:
            r4 = 0
        L1d:
            if (r0 == 0) goto L24
            int r2 = r0.getWidth()
            goto L25
        L24:
            r2 = r1
        L25:
            if (r4 == 0) goto L2b
            int r1 = r4.getWidth()
        L2b:
            int r4 = r0.getLeft()
            int r0 = r2 / 2
            int r4 = r4 + r0
            int r0 = r3.getWidth()
            int r0 = r0 / 2
            int r4 = r4 - r0
            int r2 = r2 + r1
            float r0 = (float) r2
            r1 = 1056964608(0x3f000000, float:0.5)
            float r0 = r0 * r1
            float r0 = r0 * r5
            int r5 = (int) r0
            int r0 = android.support.v4.view.ViewCompat.getLayoutDirection(r3)
            if (r0 != 0) goto L48
            int r4 = r4 + r5
            goto L49
        L48:
            int r4 = r4 - r5
        L49:
            return r4
        L4a:
            return r1
    }

    private void configureTab(android.support.design.widget.TabLayout.Tab r2, int r3) {
            r1 = this;
            r2.setPosition(r3)
            java.util.ArrayList<android.support.design.widget.TabLayout$Tab> r0 = r1.tabs
            r0.add(r3, r2)
            java.util.ArrayList<android.support.design.widget.TabLayout$Tab> r2 = r1.tabs
            int r2 = r2.size()
        Le:
            int r3 = r3 + 1
            if (r3 >= r2) goto L1e
            java.util.ArrayList<android.support.design.widget.TabLayout$Tab> r0 = r1.tabs
            java.lang.Object r0 = r0.get(r3)
            android.support.design.widget.TabLayout$Tab r0 = (android.support.design.widget.TabLayout.Tab) r0
            r0.setPosition(r3)
            goto Le
        L1e:
            return
    }

    private static android.content.res.ColorStateList createColorStateList(int r4, int r5) {
            r0 = 2
            int[][] r1 = new int[r0][]
            int[] r0 = new int[r0]
            int[] r2 = android.support.design.widget.TabLayout.SELECTED_STATE_SET
            r3 = 0
            r1[r3] = r2
            r0[r3] = r5
            int[] r5 = android.support.design.widget.TabLayout.EMPTY_STATE_SET
            r2 = 1
            r1[r2] = r5
            r0[r2] = r4
            android.content.res.ColorStateList r4 = new android.content.res.ColorStateList
            r4.<init>(r1, r0)
            return r4
    }

    private android.widget.LinearLayout.LayoutParams createLayoutParamsForTabs() {
            r3 = this;
            android.widget.LinearLayout$LayoutParams r0 = new android.widget.LinearLayout$LayoutParams
            r1 = -2
            r2 = -1
            r0.<init>(r1, r2)
            r3.updateTabViewLayoutParams(r0)
            return r0
    }

    private android.support.design.widget.TabLayout.TabView createTabView(android.support.design.widget.TabLayout.Tab r3) {
            r2 = this;
            android.support.v4.util.Pools$Pool<android.support.design.widget.TabLayout$TabView> r0 = r2.tabViewPool
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r0.acquire()
            android.support.design.widget.TabLayout$TabView r0 = (android.support.design.widget.TabLayout.TabView) r0
            goto Lc
        Lb:
            r0 = 0
        Lc:
            if (r0 != 0) goto L17
            android.support.design.widget.TabLayout$TabView r0 = new android.support.design.widget.TabLayout$TabView
            android.content.Context r1 = r2.getContext()
            r0.<init>(r2, r1)
        L17:
            r0.setTab(r3)
            r1 = 1
            r0.setFocusable(r1)
            int r1 = r2.getTabMinWidth()
            r0.setMinimumWidth(r1)
            java.lang.CharSequence r1 = android.support.design.widget.TabLayout.Tab.access$100(r3)
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L37
            java.lang.CharSequence r3 = android.support.design.widget.TabLayout.Tab.access$200(r3)
            r0.setContentDescription(r3)
            goto L3e
        L37:
            java.lang.CharSequence r3 = android.support.design.widget.TabLayout.Tab.access$100(r3)
            r0.setContentDescription(r3)
        L3e:
            return r0
    }

    private void dispatchTabReselected(android.support.design.widget.TabLayout.Tab r3) {
            r2 = this;
            java.util.ArrayList<android.support.design.widget.TabLayout$BaseOnTabSelectedListener> r0 = r2.selectedListeners
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L8:
            if (r0 < 0) goto L18
            java.util.ArrayList<android.support.design.widget.TabLayout$BaseOnTabSelectedListener> r1 = r2.selectedListeners
            java.lang.Object r1 = r1.get(r0)
            android.support.design.widget.TabLayout$BaseOnTabSelectedListener r1 = (android.support.design.widget.TabLayout.BaseOnTabSelectedListener) r1
            r1.onTabReselected(r3)
            int r0 = r0 + (-1)
            goto L8
        L18:
            return
    }

    private void dispatchTabSelected(android.support.design.widget.TabLayout.Tab r3) {
            r2 = this;
            java.util.ArrayList<android.support.design.widget.TabLayout$BaseOnTabSelectedListener> r0 = r2.selectedListeners
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L8:
            if (r0 < 0) goto L18
            java.util.ArrayList<android.support.design.widget.TabLayout$BaseOnTabSelectedListener> r1 = r2.selectedListeners
            java.lang.Object r1 = r1.get(r0)
            android.support.design.widget.TabLayout$BaseOnTabSelectedListener r1 = (android.support.design.widget.TabLayout.BaseOnTabSelectedListener) r1
            r1.onTabSelected(r3)
            int r0 = r0 + (-1)
            goto L8
        L18:
            return
    }

    private void dispatchTabUnselected(android.support.design.widget.TabLayout.Tab r3) {
            r2 = this;
            java.util.ArrayList<android.support.design.widget.TabLayout$BaseOnTabSelectedListener> r0 = r2.selectedListeners
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L8:
            if (r0 < 0) goto L18
            java.util.ArrayList<android.support.design.widget.TabLayout$BaseOnTabSelectedListener> r1 = r2.selectedListeners
            java.lang.Object r1 = r1.get(r0)
            android.support.design.widget.TabLayout$BaseOnTabSelectedListener r1 = (android.support.design.widget.TabLayout.BaseOnTabSelectedListener) r1
            r1.onTabUnselected(r3)
            int r0 = r0 + (-1)
            goto L8
        L18:
            return
    }

    private void ensureScrollAnimator() {
            r3 = this;
            android.animation.ValueAnimator r0 = r3.scrollAnimator
            if (r0 != 0) goto L22
            android.animation.ValueAnimator r0 = new android.animation.ValueAnimator
            r0.<init>()
            r3.scrollAnimator = r0
            android.animation.TimeInterpolator r1 = android.support.design.animation.AnimationUtils.FAST_OUT_SLOW_IN_INTERPOLATOR
            r0.setInterpolator(r1)
            android.animation.ValueAnimator r0 = r3.scrollAnimator
            int r1 = r3.tabIndicatorAnimationDuration
            long r1 = (long) r1
            r0.setDuration(r1)
            android.animation.ValueAnimator r0 = r3.scrollAnimator
            android.support.design.widget.TabLayout$1 r1 = new android.support.design.widget.TabLayout$1
            r1.<init>(r3)
            r0.addUpdateListener(r1)
        L22:
            return
    }

    private int getDefaultHeight() {
            r5 = this;
            java.util.ArrayList<android.support.design.widget.TabLayout$Tab> r0 = r5.tabs
            int r0 = r0.size()
            r1 = 0
            r2 = r1
        L8:
            if (r2 >= r0) goto L29
            java.util.ArrayList<android.support.design.widget.TabLayout$Tab> r3 = r5.tabs
            java.lang.Object r3 = r3.get(r2)
            android.support.design.widget.TabLayout$Tab r3 = (android.support.design.widget.TabLayout.Tab) r3
            if (r3 == 0) goto L26
            android.graphics.drawable.Drawable r4 = r3.getIcon()
            if (r4 == 0) goto L26
            java.lang.CharSequence r3 = r3.getText()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L26
            r1 = 1
            goto L29
        L26:
            int r2 = r2 + 1
            goto L8
        L29:
            if (r1 == 0) goto L32
            boolean r0 = r5.inlineLabel
            if (r0 != 0) goto L32
            r0 = 72
            goto L34
        L32:
            r0 = 48
        L34:
            return r0
    }

    private int getTabMinWidth() {
            r2 = this;
            int r0 = r2.requestedTabMinWidth
            r1 = -1
            if (r0 == r1) goto L6
            return r0
        L6:
            int r0 = r2.mode
            if (r0 != 0) goto Ld
            int r0 = r2.scrollableTabMinWidth
            goto Le
        Ld:
            r0 = 0
        Le:
            return r0
    }

    private int getTabScrollRange() {
            r2 = this;
            android.support.design.widget.TabLayout$SlidingTabIndicator r0 = r2.slidingTabIndicator
            int r0 = r0.getWidth()
            int r1 = r2.getWidth()
            int r0 = r0 - r1
            int r1 = r2.getPaddingLeft()
            int r0 = r0 - r1
            int r1 = r2.getPaddingRight()
            int r0 = r0 - r1
            r1 = 0
            int r0 = java.lang.Math.max(r1, r0)
            return r0
    }

    private void removeTabViewAt(int r3) {
            r2 = this;
            android.support.design.widget.TabLayout$SlidingTabIndicator r0 = r2.slidingTabIndicator
            android.view.View r0 = r0.getChildAt(r3)
            android.support.design.widget.TabLayout$TabView r0 = (android.support.design.widget.TabLayout.TabView) r0
            android.support.design.widget.TabLayout$SlidingTabIndicator r1 = r2.slidingTabIndicator
            r1.removeViewAt(r3)
            if (r0 == 0) goto L17
            r0.reset()
            android.support.v4.util.Pools$Pool<android.support.design.widget.TabLayout$TabView> r3 = r2.tabViewPool
            r3.release(r0)
        L17:
            r2.requestLayout()
            return
    }

    private void setSelectedTabView(int r7) {
            r6 = this;
            android.support.design.widget.TabLayout$SlidingTabIndicator r0 = r6.slidingTabIndicator
            int r0 = r0.getChildCount()
            if (r7 >= r0) goto L25
            r1 = 0
            r2 = r1
        La:
            if (r2 >= r0) goto L25
            android.support.design.widget.TabLayout$SlidingTabIndicator r3 = r6.slidingTabIndicator
            android.view.View r3 = r3.getChildAt(r2)
            r4 = 1
            if (r2 != r7) goto L17
            r5 = r4
            goto L18
        L17:
            r5 = r1
        L18:
            r3.setSelected(r5)
            if (r2 != r7) goto L1e
            goto L1f
        L1e:
            r4 = r1
        L1f:
            r3.setActivated(r4)
            int r2 = r2 + 1
            goto La
        L25:
            return
    }

    private void setupWithViewPager(android.support.v4.view.ViewPager r3, boolean r4, boolean r5) {
            r2 = this;
            android.support.v4.view.ViewPager r0 = r2.viewPager
            if (r0 == 0) goto L14
            android.support.design.widget.TabLayout$TabLayoutOnPageChangeListener r1 = r2.pageChangeListener
            if (r1 == 0) goto Lb
            r0.removeOnPageChangeListener(r1)
        Lb:
            android.support.design.widget.TabLayout$AdapterChangeListener r0 = r2.adapterChangeListener
            if (r0 == 0) goto L14
            android.support.v4.view.ViewPager r1 = r2.viewPager
            r1.removeOnAdapterChangeListener(r0)
        L14:
            android.support.design.widget.TabLayout$BaseOnTabSelectedListener r0 = r2.currentVpSelectedListener
            r1 = 0
            if (r0 == 0) goto L1e
            r2.removeOnTabSelectedListener(r0)
            r2.currentVpSelectedListener = r1
        L1e:
            if (r3 == 0) goto L69
            r2.viewPager = r3
            android.support.design.widget.TabLayout$TabLayoutOnPageChangeListener r0 = r2.pageChangeListener
            if (r0 != 0) goto L2d
            android.support.design.widget.TabLayout$TabLayoutOnPageChangeListener r0 = new android.support.design.widget.TabLayout$TabLayoutOnPageChangeListener
            r0.<init>(r2)
            r2.pageChangeListener = r0
        L2d:
            android.support.design.widget.TabLayout$TabLayoutOnPageChangeListener r0 = r2.pageChangeListener
            r0.reset()
            android.support.design.widget.TabLayout$TabLayoutOnPageChangeListener r0 = r2.pageChangeListener
            r3.addOnPageChangeListener(r0)
            android.support.design.widget.TabLayout$ViewPagerOnTabSelectedListener r0 = new android.support.design.widget.TabLayout$ViewPagerOnTabSelectedListener
            r0.<init>(r3)
            r2.currentVpSelectedListener = r0
            r2.addOnTabSelectedListener(r0)
            android.support.v4.view.PagerAdapter r0 = r3.getAdapter()
            if (r0 == 0) goto L4a
            r2.setPagerAdapter(r0, r4)
        L4a:
            android.support.design.widget.TabLayout$AdapterChangeListener r0 = r2.adapterChangeListener
            if (r0 != 0) goto L55
            android.support.design.widget.TabLayout$AdapterChangeListener r0 = new android.support.design.widget.TabLayout$AdapterChangeListener
            r0.<init>(r2)
            r2.adapterChangeListener = r0
        L55:
            android.support.design.widget.TabLayout$AdapterChangeListener r0 = r2.adapterChangeListener
            r0.setAutoRefresh(r4)
            android.support.design.widget.TabLayout$AdapterChangeListener r4 = r2.adapterChangeListener
            r3.addOnAdapterChangeListener(r4)
            int r3 = r3.getCurrentItem()
            r4 = 0
            r0 = 1
            r2.setScrollPosition(r3, r4, r0)
            goto L6f
        L69:
            r2.viewPager = r1
            r3 = 0
            r2.setPagerAdapter(r1, r3)
        L6f:
            r2.setupViewPagerImplicitly = r5
            return
    }

    private void updateAllTabs() {
            r3 = this;
            java.util.ArrayList<android.support.design.widget.TabLayout$Tab> r0 = r3.tabs
            int r0 = r0.size()
            r1 = 0
        L7:
            if (r1 >= r0) goto L17
            java.util.ArrayList<android.support.design.widget.TabLayout$Tab> r2 = r3.tabs
            java.lang.Object r2 = r2.get(r1)
            android.support.design.widget.TabLayout$Tab r2 = (android.support.design.widget.TabLayout.Tab) r2
            r2.updateView()
            int r1 = r1 + 1
            goto L7
        L17:
            return
    }

    private void updateTabViewLayoutParams(android.widget.LinearLayout.LayoutParams r3) {
            r2 = this;
            int r0 = r2.mode
            r1 = 1
            if (r0 != r1) goto L11
            int r0 = r2.tabGravity
            if (r0 != 0) goto L11
            r0 = 0
            r3.width = r0
            r0 = 1065353216(0x3f800000, float:1.0)
            r3.weight = r0
            goto L17
        L11:
            r0 = -2
            r3.width = r0
            r0 = 0
            r3.weight = r0
        L17:
            return
    }

    public void addOnTabSelectedListener(android.support.design.widget.TabLayout.BaseOnTabSelectedListener r2) {
            r1 = this;
            java.util.ArrayList<android.support.design.widget.TabLayout$BaseOnTabSelectedListener> r0 = r1.selectedListeners
            boolean r0 = r0.contains(r2)
            if (r0 != 0) goto Ld
            java.util.ArrayList<android.support.design.widget.TabLayout$BaseOnTabSelectedListener> r0 = r1.selectedListeners
            r0.add(r2)
        Ld:
            return
    }

    public void addTab(android.support.design.widget.TabLayout.Tab r2) {
            r1 = this;
            java.util.ArrayList<android.support.design.widget.TabLayout$Tab> r0 = r1.tabs
            boolean r0 = r0.isEmpty()
            r1.addTab(r2, r0)
            return
    }

    public void addTab(android.support.design.widget.TabLayout.Tab r2, int r3) {
            r1 = this;
            java.util.ArrayList<android.support.design.widget.TabLayout$Tab> r0 = r1.tabs
            boolean r0 = r0.isEmpty()
            r1.addTab(r2, r3, r0)
            return
    }

    public void addTab(android.support.design.widget.TabLayout.Tab r2, int r3, boolean r4) {
            r1 = this;
            android.support.design.widget.TabLayout r0 = r2.parent
            if (r0 != r1) goto L10
            r1.configureTab(r2, r3)
            r1.addTabView(r2)
            if (r4 == 0) goto Lf
            r2.select()
        Lf:
            return
        L10:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "Tab belongs to a different TabLayout."
            r2.<init>(r3)
            throw r2
    }

    public void addTab(android.support.design.widget.TabLayout.Tab r2, boolean r3) {
            r1 = this;
            java.util.ArrayList<android.support.design.widget.TabLayout$Tab> r0 = r1.tabs
            int r0 = r0.size()
            r1.addTab(r2, r0, r3)
            return
    }

    @Override
    public void addView(android.view.View r1) {
            r0 = this;
            r0.addViewInternal(r1)
            return
    }

    @Override
    public void addView(android.view.View r1, int r2) {
            r0 = this;
            r0.addViewInternal(r1)
            return
    }

    @Override
    public void addView(android.view.View r1, int r2, android.view.ViewGroup.LayoutParams r3) {
            r0 = this;
            r0.addViewInternal(r1)
            return
    }

    @Override
    public void addView(android.view.View r1, android.view.ViewGroup.LayoutParams r2) {
            r0 = this;
            r0.addViewInternal(r1)
            return
    }

    public void clearOnTabSelectedListeners() {
            r1 = this;
            java.util.ArrayList<android.support.design.widget.TabLayout$BaseOnTabSelectedListener> r0 = r1.selectedListeners
            r0.clear()
            return
    }

    protected android.support.design.widget.TabLayout.Tab createTabFromPool() {
            r1 = this;
            android.support.v4.util.Pools$Pool<android.support.design.widget.TabLayout$Tab> r0 = android.support.design.widget.TabLayout.tabPool
            java.lang.Object r0 = r0.acquire()
            android.support.design.widget.TabLayout$Tab r0 = (android.support.design.widget.TabLayout.Tab) r0
            if (r0 != 0) goto Lf
            android.support.design.widget.TabLayout$Tab r0 = new android.support.design.widget.TabLayout$Tab
            r0.<init>()
        Lf:
            return r0
    }

    int dpToPx(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            float r2 = (float) r2
            float r0 = r0 * r2
            int r2 = java.lang.Math.round(r0)
            return r2
    }

    @Override
    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet r1) {
            r0 = this;
            android.widget.FrameLayout$LayoutParams r1 = r0.generateLayoutParams(r1)
            return r1
    }

    @Override
    public android.widget.FrameLayout.LayoutParams generateLayoutParams(android.util.AttributeSet r1) {
            r0 = this;
            android.widget.FrameLayout$LayoutParams r1 = r0.generateDefaultLayoutParams()
            return r1
    }

    public int getSelectedTabPosition() {
            r1 = this;
            android.support.design.widget.TabLayout$Tab r0 = r1.selectedTab
            if (r0 == 0) goto L9
            int r0 = r0.getPosition()
            goto La
        L9:
            r0 = -1
        La:
            return r0
    }

    public android.support.design.widget.TabLayout.Tab getTabAt(int r2) {
            r1 = this;
            if (r2 < 0) goto L12
            int r0 = r1.getTabCount()
            if (r2 < r0) goto L9
            goto L12
        L9:
            java.util.ArrayList<android.support.design.widget.TabLayout$Tab> r0 = r1.tabs
            java.lang.Object r2 = r0.get(r2)
            android.support.design.widget.TabLayout$Tab r2 = (android.support.design.widget.TabLayout.Tab) r2
            goto L13
        L12:
            r2 = 0
        L13:
            return r2
    }

    public int getTabCount() {
            r1 = this;
            java.util.ArrayList<android.support.design.widget.TabLayout$Tab> r0 = r1.tabs
            int r0 = r0.size()
            return r0
    }

    public int getTabGravity() {
            r1 = this;
            int r0 = r1.tabGravity
            return r0
    }

    public android.content.res.ColorStateList getTabIconTint() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.tabIconTint
            return r0
    }

    public int getTabIndicatorGravity() {
            r1 = this;
            int r0 = r1.tabIndicatorGravity
            return r0
    }

    int getTabMaxWidth() {
            r1 = this;
            int r0 = r1.tabMaxWidth
            return r0
    }

    public int getTabMode() {
            r1 = this;
            int r0 = r1.mode
            return r0
    }

    public android.content.res.ColorStateList getTabRippleColor() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.tabRippleColorStateList
            return r0
    }

    public android.graphics.drawable.Drawable getTabSelectedIndicator() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.tabSelectedIndicator
            return r0
    }

    public android.content.res.ColorStateList getTabTextColors() {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.tabTextColors
            return r0
    }

    public boolean hasUnboundedRipple() {
            r1 = this;
            boolean r0 = r1.unboundedRipple
            return r0
    }

    public boolean isInlineLabel() {
            r1 = this;
            boolean r0 = r1.inlineLabel
            return r0
    }

    public boolean isTabIndicatorFullWidth() {
            r1 = this;
            boolean r0 = r1.tabIndicatorFullWidth
            return r0
    }

    public android.support.design.widget.TabLayout.Tab newTab() {
            r2 = this;
            android.support.design.widget.TabLayout$Tab r0 = r2.createTabFromPool()
            r0.parent = r2
            android.support.design.widget.TabLayout$TabView r1 = r2.createTabView(r0)
            r0.view = r1
            return r0
    }

    @Override
    protected void onAttachedToWindow() {
            r2 = this;
            super.onAttachedToWindow()
            android.support.v4.view.ViewPager r0 = r2.viewPager
            if (r0 != 0) goto L15
            android.view.ViewParent r0 = r2.getParent()
            boolean r1 = r0 instanceof android.support.v4.view.ViewPager
            if (r1 == 0) goto L15
            android.support.v4.view.ViewPager r0 = (android.support.v4.view.ViewPager) r0
            r1 = 1
            r2.setupWithViewPager(r0, r1, r1)
        L15:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            boolean r0 = r1.setupViewPagerImplicitly
            if (r0 == 0) goto Le
            r0 = 0
            r1.setupWithViewPager(r0)
            r0 = 0
            r1.setupViewPagerImplicitly = r0
        Le:
            return
    }

    @Override
    protected void onDraw(android.graphics.Canvas r4) {
            r3 = this;
            r0 = 0
        L1:
            android.support.design.widget.TabLayout$SlidingTabIndicator r1 = r3.slidingTabIndicator
            int r1 = r1.getChildCount()
            if (r0 >= r1) goto L1b
            android.support.design.widget.TabLayout$SlidingTabIndicator r1 = r3.slidingTabIndicator
            android.view.View r1 = r1.getChildAt(r0)
            boolean r2 = r1 instanceof android.support.design.widget.TabLayout.TabView
            if (r2 == 0) goto L18
            android.support.design.widget.TabLayout$TabView r1 = (android.support.design.widget.TabLayout.TabView) r1
            android.support.design.widget.TabLayout.TabView.access$300(r1, r4)
        L18:
            int r0 = r0 + 1
            goto L1
        L1b:
            super.onDraw(r4)
            return
    }

    @Override
    protected void onMeasure(int r6, int r7) {
            r5 = this;
            int r0 = r5.getDefaultHeight()
            int r0 = r5.dpToPx(r0)
            int r1 = r5.getPaddingTop()
            int r0 = r0 + r1
            int r1 = r5.getPaddingBottom()
            int r0 = r0 + r1
            int r1 = android.view.View.MeasureSpec.getMode(r7)
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            r3 = 1073741824(0x40000000, float:2.0)
            if (r1 == r2) goto L24
            if (r1 == 0) goto L1f
            goto L30
        L1f:
            int r7 = android.view.View.MeasureSpec.makeMeasureSpec(r0, r3)
            goto L30
        L24:
            int r7 = android.view.View.MeasureSpec.getSize(r7)
            int r7 = java.lang.Math.min(r0, r7)
            int r7 = android.view.View.MeasureSpec.makeMeasureSpec(r7, r3)
        L30:
            int r0 = android.view.View.MeasureSpec.getSize(r6)
            int r1 = android.view.View.MeasureSpec.getMode(r6)
            if (r1 == 0) goto L49
            int r1 = r5.requestedTabMaxWidth
            if (r1 <= 0) goto L3f
            goto L47
        L3f:
            r1 = 56
            int r1 = r5.dpToPx(r1)
            int r1 = r0 - r1
        L47:
            r5.tabMaxWidth = r1
        L49:
            super.onMeasure(r6, r7)
            int r6 = r5.getChildCount()
            r0 = 1
            if (r6 != r0) goto L97
            r6 = 0
            android.view.View r1 = r5.getChildAt(r6)
            int r2 = r5.mode
            if (r2 == 0) goto L6a
            if (r2 == r0) goto L5f
            goto L77
        L5f:
            int r2 = r1.getMeasuredWidth()
            int r4 = r5.getMeasuredWidth()
            if (r2 == r4) goto L75
            goto L76
        L6a:
            int r2 = r1.getMeasuredWidth()
            int r4 = r5.getMeasuredWidth()
            if (r2 >= r4) goto L75
            goto L76
        L75:
            r0 = r6
        L76:
            r6 = r0
        L77:
            if (r6 == 0) goto L97
            int r6 = r5.getPaddingTop()
            int r0 = r5.getPaddingBottom()
            int r6 = r6 + r0
            android.view.ViewGroup$LayoutParams r0 = r1.getLayoutParams()
            int r0 = r0.height
            int r6 = getChildMeasureSpec(r7, r6, r0)
            int r7 = r5.getMeasuredWidth()
            int r7 = android.view.View.MeasureSpec.makeMeasureSpec(r7, r3)
            r1.measure(r7, r6)
        L97:
            return
    }

    void populateFromPagerAdapter() {
            r5 = this;
            r5.removeAllTabs()
            android.support.v4.view.PagerAdapter r0 = r5.pagerAdapter
            if (r0 == 0) goto L40
            int r0 = r0.getCount()
            r1 = 0
            r2 = r1
        Ld:
            if (r2 >= r0) goto L23
            android.support.design.widget.TabLayout$Tab r3 = r5.newTab()
            android.support.v4.view.PagerAdapter r4 = r5.pagerAdapter
            java.lang.CharSequence r4 = r4.getPageTitle(r2)
            android.support.design.widget.TabLayout$Tab r3 = r3.setText(r4)
            r5.addTab(r3, r1)
            int r2 = r2 + 1
            goto Ld
        L23:
            android.support.v4.view.ViewPager r1 = r5.viewPager
            if (r1 == 0) goto L40
            if (r0 <= 0) goto L40
            int r0 = r1.getCurrentItem()
            int r1 = r5.getSelectedTabPosition()
            if (r0 == r1) goto L40
            int r1 = r5.getTabCount()
            if (r0 >= r1) goto L40
            android.support.design.widget.TabLayout$Tab r0 = r5.getTabAt(r0)
            r5.selectTab(r0)
        L40:
            return
    }

    protected boolean releaseFromTabPool(android.support.design.widget.TabLayout.Tab r2) {
            r1 = this;
            android.support.v4.util.Pools$Pool<android.support.design.widget.TabLayout$Tab> r0 = android.support.design.widget.TabLayout.tabPool
            boolean r2 = r0.release(r2)
            return r2
    }

    public void removeAllTabs() {
            r2 = this;
            android.support.design.widget.TabLayout$SlidingTabIndicator r0 = r2.slidingTabIndicator
            int r0 = r0.getChildCount()
            int r0 = r0 + (-1)
        L8:
            if (r0 < 0) goto L10
            r2.removeTabViewAt(r0)
            int r0 = r0 + (-1)
            goto L8
        L10:
            java.util.ArrayList<android.support.design.widget.TabLayout$Tab> r0 = r2.tabs
            java.util.Iterator r0 = r0.iterator()
        L16:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2c
            java.lang.Object r1 = r0.next()
            android.support.design.widget.TabLayout$Tab r1 = (android.support.design.widget.TabLayout.Tab) r1
            r0.remove()
            r1.reset()
            r2.releaseFromTabPool(r1)
            goto L16
        L2c:
            r0 = 0
            r2.selectedTab = r0
            return
    }

    public void removeOnTabSelectedListener(android.support.design.widget.TabLayout.BaseOnTabSelectedListener r2) {
            r1 = this;
            java.util.ArrayList<android.support.design.widget.TabLayout$BaseOnTabSelectedListener> r0 = r1.selectedListeners
            r0.remove(r2)
            return
    }

    public void removeTab(android.support.design.widget.TabLayout.Tab r2) {
            r1 = this;
            android.support.design.widget.TabLayout r0 = r2.parent
            if (r0 != r1) goto Lc
            int r2 = r2.getPosition()
            r1.removeTabAt(r2)
            return
        Lc:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Tab does not belong to this TabLayout."
            r2.<init>(r0)
            throw r2
    }

    public void removeTabAt(int r6) {
            r5 = this;
            android.support.design.widget.TabLayout$Tab r0 = r5.selectedTab
            r1 = 0
            if (r0 == 0) goto La
            int r0 = r0.getPosition()
            goto Lb
        La:
            r0 = r1
        Lb:
            r5.removeTabViewAt(r6)
            java.util.ArrayList<android.support.design.widget.TabLayout$Tab> r2 = r5.tabs
            java.lang.Object r2 = r2.remove(r6)
            android.support.design.widget.TabLayout$Tab r2 = (android.support.design.widget.TabLayout.Tab) r2
            if (r2 == 0) goto L1e
            r2.reset()
            r5.releaseFromTabPool(r2)
        L1e:
            java.util.ArrayList<android.support.design.widget.TabLayout$Tab> r2 = r5.tabs
            int r2 = r2.size()
            r3 = r6
        L25:
            if (r3 >= r2) goto L35
            java.util.ArrayList<android.support.design.widget.TabLayout$Tab> r4 = r5.tabs
            java.lang.Object r4 = r4.get(r3)
            android.support.design.widget.TabLayout$Tab r4 = (android.support.design.widget.TabLayout.Tab) r4
            r4.setPosition(r3)
            int r3 = r3 + 1
            goto L25
        L35:
            if (r0 != r6) goto L52
            java.util.ArrayList<android.support.design.widget.TabLayout$Tab> r0 = r5.tabs
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L41
            r6 = 0
            goto L4f
        L41:
            java.util.ArrayList<android.support.design.widget.TabLayout$Tab> r0 = r5.tabs
            int r6 = r6 + (-1)
            int r6 = java.lang.Math.max(r1, r6)
            java.lang.Object r6 = r0.get(r6)
            android.support.design.widget.TabLayout$Tab r6 = (android.support.design.widget.TabLayout.Tab) r6
        L4f:
            r5.selectTab(r6)
        L52:
            return
    }

    void selectTab(android.support.design.widget.TabLayout.Tab r2) {
            r1 = this;
            r0 = 1
            r1.selectTab(r2, r0)
            return
    }

    void selectTab(android.support.design.widget.TabLayout.Tab r5, boolean r6) {
            r4 = this;
            android.support.design.widget.TabLayout$Tab r0 = r4.selectedTab
            if (r0 != r5) goto L11
            if (r0 == 0) goto L40
            r4.dispatchTabReselected(r5)
            int r5 = r5.getPosition()
            r4.animateToTab(r5)
            goto L40
        L11:
            r1 = -1
            if (r5 == 0) goto L19
            int r2 = r5.getPosition()
            goto L1a
        L19:
            r2 = r1
        L1a:
            if (r6 == 0) goto L34
            if (r0 == 0) goto L24
            int r6 = r0.getPosition()
            if (r6 != r1) goto L2c
        L24:
            if (r2 == r1) goto L2c
            r6 = 0
            r3 = 1
            r4.setScrollPosition(r2, r6, r3)
            goto L2f
        L2c:
            r4.animateToTab(r2)
        L2f:
            if (r2 == r1) goto L34
            r4.setSelectedTabView(r2)
        L34:
            r4.selectedTab = r5
            if (r0 == 0) goto L3b
            r4.dispatchTabUnselected(r0)
        L3b:
            if (r5 == 0) goto L40
            r4.dispatchTabSelected(r5)
        L40:
            return
    }

    public void setInlineLabel(boolean r3) {
            r2 = this;
            boolean r0 = r2.inlineLabel
            if (r0 == r3) goto L24
            r2.inlineLabel = r3
            r3 = 0
        L7:
            android.support.design.widget.TabLayout$SlidingTabIndicator r0 = r2.slidingTabIndicator
            int r0 = r0.getChildCount()
            if (r3 >= r0) goto L21
            android.support.design.widget.TabLayout$SlidingTabIndicator r0 = r2.slidingTabIndicator
            android.view.View r0 = r0.getChildAt(r3)
            boolean r1 = r0 instanceof android.support.design.widget.TabLayout.TabView
            if (r1 == 0) goto L1e
            android.support.design.widget.TabLayout$TabView r0 = (android.support.design.widget.TabLayout.TabView) r0
            r0.updateOrientation()
        L1e:
            int r3 = r3 + 1
            goto L7
        L21:
            r2.applyModeAndGravity()
        L24:
            return
    }

    public void setInlineLabelResource(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            boolean r2 = r0.getBoolean(r2)
            r1.setInlineLabel(r2)
            return
    }

    @java.lang.Deprecated
    public void setOnTabSelectedListener(android.support.design.widget.TabLayout.BaseOnTabSelectedListener r2) {
            r1 = this;
            android.support.design.widget.TabLayout$BaseOnTabSelectedListener r0 = r1.selectedListener
            if (r0 == 0) goto L7
            r1.removeOnTabSelectedListener(r0)
        L7:
            r1.selectedListener = r2
            if (r2 == 0) goto Le
            r1.addOnTabSelectedListener(r2)
        Le:
            return
    }

    void setPagerAdapter(android.support.v4.view.PagerAdapter r3, boolean r4) {
            r2 = this;
            android.support.v4.view.PagerAdapter r0 = r2.pagerAdapter
            if (r0 == 0) goto Lb
            android.database.DataSetObserver r1 = r2.pagerAdapterObserver
            if (r1 == 0) goto Lb
            r0.unregisterDataSetObserver(r1)
        Lb:
            r2.pagerAdapter = r3
            if (r4 == 0) goto L21
            if (r3 == 0) goto L21
            android.database.DataSetObserver r4 = r2.pagerAdapterObserver
            if (r4 != 0) goto L1c
            android.support.design.widget.TabLayout$PagerAdapterObserver r4 = new android.support.design.widget.TabLayout$PagerAdapterObserver
            r4.<init>(r2)
            r2.pagerAdapterObserver = r4
        L1c:
            android.database.DataSetObserver r4 = r2.pagerAdapterObserver
            r3.registerDataSetObserver(r4)
        L21:
            r2.populateFromPagerAdapter()
            return
    }

    void setScrollAnimatorListener(android.animation.Animator.AnimatorListener r2) {
            r1 = this;
            r1.ensureScrollAnimator()
            android.animation.ValueAnimator r0 = r1.scrollAnimator
            r0.addListener(r2)
            return
    }

    public void setScrollPosition(int r2, float r3, boolean r4) {
            r1 = this;
            r0 = 1
            r1.setScrollPosition(r2, r3, r4, r0)
            return
    }

    void setScrollPosition(int r3, float r4, boolean r5, boolean r6) {
            r2 = this;
            float r0 = (float) r3
            float r0 = r0 + r4
            int r0 = java.lang.Math.round(r0)
            if (r0 < 0) goto L34
            android.support.design.widget.TabLayout$SlidingTabIndicator r1 = r2.slidingTabIndicator
            int r1 = r1.getChildCount()
            if (r0 < r1) goto L11
            goto L34
        L11:
            if (r6 == 0) goto L18
            android.support.design.widget.TabLayout$SlidingTabIndicator r6 = r2.slidingTabIndicator
            r6.setIndicatorPositionFromTabPosition(r3, r4)
        L18:
            android.animation.ValueAnimator r6 = r2.scrollAnimator
            if (r6 == 0) goto L27
            boolean r6 = r6.isRunning()
            if (r6 == 0) goto L27
            android.animation.ValueAnimator r6 = r2.scrollAnimator
            r6.cancel()
        L27:
            int r3 = r2.calculateScrollXForTab(r3, r4)
            r4 = 0
            r2.scrollTo(r3, r4)
            if (r5 == 0) goto L34
            r2.setSelectedTabView(r0)
        L34:
            return
    }

    public void setSelectedTabIndicator(int r2) {
            r1 = this;
            if (r2 == 0) goto Le
            android.content.Context r0 = r1.getContext()
            android.graphics.drawable.Drawable r2 = android.support.v7.content.res.AppCompatResources.getDrawable(r0, r2)
            r1.setSelectedTabIndicator(r2)
            goto L12
        Le:
            r2 = 0
            r1.setSelectedTabIndicator(r2)
        L12:
            return
    }

    public void setSelectedTabIndicator(android.graphics.drawable.Drawable r2) {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.tabSelectedIndicator
            if (r0 == r2) goto Lb
            r1.tabSelectedIndicator = r2
            android.support.design.widget.TabLayout$SlidingTabIndicator r2 = r1.slidingTabIndicator
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r2)
        Lb:
            return
    }

    public void setSelectedTabIndicatorColor(int r2) {
            r1 = this;
            android.support.design.widget.TabLayout$SlidingTabIndicator r0 = r1.slidingTabIndicator
            r0.setSelectedIndicatorColor(r2)
            return
    }

    public void setSelectedTabIndicatorGravity(int r2) {
            r1 = this;
            int r0 = r1.tabIndicatorGravity
            if (r0 == r2) goto Lb
            r1.tabIndicatorGravity = r2
            android.support.design.widget.TabLayout$SlidingTabIndicator r2 = r1.slidingTabIndicator
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r2)
        Lb:
            return
    }

    @java.lang.Deprecated
    public void setSelectedTabIndicatorHeight(int r2) {
            r1 = this;
            android.support.design.widget.TabLayout$SlidingTabIndicator r0 = r1.slidingTabIndicator
            r0.setSelectedIndicatorHeight(r2)
            return
    }

    public void setTabGravity(int r2) {
            r1 = this;
            int r0 = r1.tabGravity
            if (r0 == r2) goto L9
            r1.tabGravity = r2
            r1.applyModeAndGravity()
        L9:
            return
    }

    public void setTabIconTint(android.content.res.ColorStateList r2) {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.tabIconTint
            if (r0 == r2) goto L9
            r1.tabIconTint = r2
            r1.updateAllTabs()
        L9:
            return
    }

    public void setTabIconTintResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            android.content.res.ColorStateList r2 = android.support.v7.content.res.AppCompatResources.getColorStateList(r0, r2)
            r1.setTabIconTint(r2)
            return
    }

    public void setTabIndicatorFullWidth(boolean r1) {
            r0 = this;
            r0.tabIndicatorFullWidth = r1
            android.support.design.widget.TabLayout$SlidingTabIndicator r1 = r0.slidingTabIndicator
            android.support.v4.view.ViewCompat.postInvalidateOnAnimation(r1)
            return
    }

    public void setTabMode(int r2) {
            r1 = this;
            int r0 = r1.mode
            if (r2 == r0) goto L9
            r1.mode = r2
            r1.applyModeAndGravity()
        L9:
            return
    }

    public void setTabRippleColor(android.content.res.ColorStateList r3) {
            r2 = this;
            android.content.res.ColorStateList r0 = r2.tabRippleColorStateList
            if (r0 == r3) goto L25
            r2.tabRippleColorStateList = r3
            r3 = 0
        L7:
            android.support.design.widget.TabLayout$SlidingTabIndicator r0 = r2.slidingTabIndicator
            int r0 = r0.getChildCount()
            if (r3 >= r0) goto L25
            android.support.design.widget.TabLayout$SlidingTabIndicator r0 = r2.slidingTabIndicator
            android.view.View r0 = r0.getChildAt(r3)
            boolean r1 = r0 instanceof android.support.design.widget.TabLayout.TabView
            if (r1 == 0) goto L22
            android.support.design.widget.TabLayout$TabView r0 = (android.support.design.widget.TabLayout.TabView) r0
            android.content.Context r1 = r2.getContext()
            android.support.design.widget.TabLayout.TabView.access$000(r0, r1)
        L22:
            int r3 = r3 + 1
            goto L7
        L25:
            return
    }

    public void setTabRippleColorResource(int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            android.content.res.ColorStateList r2 = android.support.v7.content.res.AppCompatResources.getColorStateList(r0, r2)
            r1.setTabRippleColor(r2)
            return
    }

    public void setTabTextColors(int r1, int r2) {
            r0 = this;
            android.content.res.ColorStateList r1 = createColorStateList(r1, r2)
            r0.setTabTextColors(r1)
            return
    }

    public void setTabTextColors(android.content.res.ColorStateList r2) {
            r1 = this;
            android.content.res.ColorStateList r0 = r1.tabTextColors
            if (r0 == r2) goto L9
            r1.tabTextColors = r2
            r1.updateAllTabs()
        L9:
            return
    }

    @java.lang.Deprecated
    public void setTabsFromPagerAdapter(android.support.v4.view.PagerAdapter r2) {
            r1 = this;
            r0 = 0
            r1.setPagerAdapter(r2, r0)
            return
    }

    public void setUnboundedRipple(boolean r3) {
            r2 = this;
            boolean r0 = r2.unboundedRipple
            if (r0 == r3) goto L25
            r2.unboundedRipple = r3
            r3 = 0
        L7:
            android.support.design.widget.TabLayout$SlidingTabIndicator r0 = r2.slidingTabIndicator
            int r0 = r0.getChildCount()
            if (r3 >= r0) goto L25
            android.support.design.widget.TabLayout$SlidingTabIndicator r0 = r2.slidingTabIndicator
            android.view.View r0 = r0.getChildAt(r3)
            boolean r1 = r0 instanceof android.support.design.widget.TabLayout.TabView
            if (r1 == 0) goto L22
            android.support.design.widget.TabLayout$TabView r0 = (android.support.design.widget.TabLayout.TabView) r0
            android.content.Context r1 = r2.getContext()
            android.support.design.widget.TabLayout.TabView.access$000(r0, r1)
        L22:
            int r3 = r3 + 1
            goto L7
        L25:
            return
    }

    public void setUnboundedRippleResource(int r2) {
            r1 = this;
            android.content.res.Resources r0 = r1.getResources()
            boolean r2 = r0.getBoolean(r2)
            r1.setUnboundedRipple(r2)
            return
    }

    public void setupWithViewPager(android.support.v4.view.ViewPager r2) {
            r1 = this;
            r0 = 1
            r1.setupWithViewPager(r2, r0)
            return
    }

    public void setupWithViewPager(android.support.v4.view.ViewPager r2, boolean r3) {
            r1 = this;
            r0 = 0
            r1.setupWithViewPager(r2, r3, r0)
            return
    }

    @Override
    public boolean shouldDelayChildPressedState() {
            r1 = this;
            int r0 = r1.getTabScrollRange()
            if (r0 <= 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    void updateTabViews(boolean r4) {
            r3 = this;
            r0 = 0
        L1:
            android.support.design.widget.TabLayout$SlidingTabIndicator r1 = r3.slidingTabIndicator
            int r1 = r1.getChildCount()
            if (r0 >= r1) goto L27
            android.support.design.widget.TabLayout$SlidingTabIndicator r1 = r3.slidingTabIndicator
            android.view.View r1 = r1.getChildAt(r0)
            int r2 = r3.getTabMinWidth()
            r1.setMinimumWidth(r2)
            android.view.ViewGroup$LayoutParams r2 = r1.getLayoutParams()
            android.widget.LinearLayout$LayoutParams r2 = (android.widget.LinearLayout.LayoutParams) r2
            r3.updateTabViewLayoutParams(r2)
            if (r4 == 0) goto L24
            r1.requestLayout()
        L24:
            int r0 = r0 + 1
            goto L1
        L27:
            return
    }
}
