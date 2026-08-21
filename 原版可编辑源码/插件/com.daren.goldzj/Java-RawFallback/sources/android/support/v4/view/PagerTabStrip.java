package android.support.v4.view;

public class PagerTabStrip extends android.support.v4.view.PagerTitleStrip {
    private static final int FULL_UNDERLINE_HEIGHT = 1;
    private static final int INDICATOR_HEIGHT = 3;
    private static final int MIN_PADDING_BOTTOM = 6;
    private static final int MIN_STRIP_HEIGHT = 32;
    private static final int MIN_TEXT_SPACING = 64;
    private static final int TAB_PADDING = 16;
    private static final int TAB_SPACING = 32;
    private static final java.lang.String TAG = "PagerTabStrip";
    private boolean mDrawFullUnderline;
    private boolean mDrawFullUnderlineSet;
    private int mFullUnderlineHeight;
    private boolean mIgnoreTap;
    private int mIndicatorColor;
    private int mIndicatorHeight;
    private float mInitialMotionX;
    private float mInitialMotionY;
    private int mMinPaddingBottom;
    private int mMinStripHeight;
    private int mMinTextSpacing;
    private int mTabAlpha;
    private int mTabPadding;
    private final android.graphics.Paint mTabPaint;
    private final android.graphics.Rect mTempRect;
    private int mTouchSlop;



    public PagerTabStrip(@android.support.annotation.NonNull android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public PagerTabStrip(@android.support.annotation.NonNull android.content.Context r4, @android.support.annotation.Nullable android.util.AttributeSet r5) {
            r3 = this;
            r3.<init>(r4, r5)
            android.graphics.Paint r5 = new android.graphics.Paint
            r5.<init>()
            r3.mTabPaint = r5
            android.graphics.Rect r5 = new android.graphics.Rect
            r5.<init>()
            r3.mTempRect = r5
            r5 = 255(0xff, float:3.57E-43)
            r3.mTabAlpha = r5
            r5 = 0
            r3.mDrawFullUnderline = r5
            r3.mDrawFullUnderlineSet = r5
            int r0 = r3.mTextColor
            r3.mIndicatorColor = r0
            android.graphics.Paint r0 = r3.mTabPaint
            int r1 = r3.mIndicatorColor
            r0.setColor(r1)
            android.content.res.Resources r0 = r4.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            r1 = 1077936128(0x40400000, float:3.0)
            float r1 = r1 * r0
            r2 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r2
            int r1 = (int) r1
            r3.mIndicatorHeight = r1
            r1 = 1086324736(0x40c00000, float:6.0)
            float r1 = r1 * r0
            float r1 = r1 + r2
            int r1 = (int) r1
            r3.mMinPaddingBottom = r1
            r1 = 1115684864(0x42800000, float:64.0)
            float r1 = r1 * r0
            int r1 = (int) r1
            r3.mMinTextSpacing = r1
            r1 = 1098907648(0x41800000, float:16.0)
            float r1 = r1 * r0
            float r1 = r1 + r2
            int r1 = (int) r1
            r3.mTabPadding = r1
            r1 = 1065353216(0x3f800000, float:1.0)
            float r1 = r1 * r0
            float r1 = r1 + r2
            int r1 = (int) r1
            r3.mFullUnderlineHeight = r1
            r1 = 1107296256(0x42000000, float:32.0)
            float r0 = r0 * r1
            float r0 = r0 + r2
            int r0 = (int) r0
            r3.mMinStripHeight = r0
            android.view.ViewConfiguration r4 = android.view.ViewConfiguration.get(r4)
            int r4 = r4.getScaledTouchSlop()
            r3.mTouchSlop = r4
            int r4 = r3.getPaddingLeft()
            int r0 = r3.getPaddingTop()
            int r1 = r3.getPaddingRight()
            int r2 = r3.getPaddingBottom()
            r3.setPadding(r4, r0, r1, r2)
            int r4 = r3.getTextSpacing()
            r3.setTextSpacing(r4)
            r3.setWillNotDraw(r5)
            android.widget.TextView r4 = r3.mPrevText
            r5 = 1
            r4.setFocusable(r5)
            android.widget.TextView r4 = r3.mPrevText
            android.support.v4.view.PagerTabStrip$1 r0 = new android.support.v4.view.PagerTabStrip$1
            r0.<init>(r3)
            r4.setOnClickListener(r0)
            android.widget.TextView r4 = r3.mNextText
            r4.setFocusable(r5)
            android.widget.TextView r4 = r3.mNextText
            android.support.v4.view.PagerTabStrip$2 r0 = new android.support.v4.view.PagerTabStrip$2
            r0.<init>(r3)
            r4.setOnClickListener(r0)
            android.graphics.drawable.Drawable r4 = r3.getBackground()
            if (r4 != 0) goto Lae
            r3.mDrawFullUnderline = r5
        Lae:
            return
    }

    public boolean getDrawFullUnderline() {
            r1 = this;
            boolean r0 = r1.mDrawFullUnderline
            return r0
    }

    @Override
    int getMinHeight() {
            r2 = this;
            int r0 = super.getMinHeight()
            int r1 = r2.mMinStripHeight
            int r0 = java.lang.Math.max(r0, r1)
            return r0
    }

    @android.support.annotation.ColorInt
    public int getTabIndicatorColor() {
            r1 = this;
            int r0 = r1.mIndicatorColor
            return r0
    }

    @Override
    protected void onDraw(android.graphics.Canvas r15) {
            r14 = this;
            super.onDraw(r15)
            int r0 = r14.getHeight()
            android.widget.TextView r1 = r14.mCurrText
            int r1 = r1.getLeft()
            int r2 = r14.mTabPadding
            int r1 = r1 - r2
            android.widget.TextView r2 = r14.mCurrText
            int r2 = r2.getRight()
            int r3 = r14.mTabPadding
            int r2 = r2 + r3
            int r3 = r14.mIndicatorHeight
            int r3 = r0 - r3
            android.graphics.Paint r4 = r14.mTabPaint
            int r5 = r14.mTabAlpha
            int r5 = r5 << 24
            int r6 = r14.mIndicatorColor
            r7 = 16777215(0xffffff, float:2.3509886E-38)
            r6 = r6 & r7
            r5 = r5 | r6
            r4.setColor(r5)
            float r9 = (float) r1
            float r10 = (float) r3
            float r11 = (float) r2
            float r5 = (float) r0
            android.graphics.Paint r13 = r14.mTabPaint
            r8 = r15
            r12 = r5
            r8.drawRect(r9, r10, r11, r12, r13)
            boolean r1 = r14.mDrawFullUnderline
            if (r1 == 0) goto L60
            android.graphics.Paint r1 = r14.mTabPaint
            r2 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            int r3 = r14.mIndicatorColor
            r3 = r3 & r7
            r2 = r2 | r3
            r1.setColor(r2)
            int r1 = r14.getPaddingLeft()
            float r2 = (float) r1
            int r1 = r14.mFullUnderlineHeight
            int r0 = r0 - r1
            float r3 = (float) r0
            int r0 = r14.getWidth()
            int r1 = r14.getPaddingRight()
            int r0 = r0 - r1
            float r4 = (float) r0
            android.graphics.Paint r6 = r14.mTabPaint
            r1 = r15
            r1.drawRect(r2, r3, r4, r5, r6)
        L60:
            return
    }

    @Override
    public boolean onTouchEvent(android.view.MotionEvent r5) {
            r4 = this;
            int r0 = r5.getAction()
            r1 = 0
            if (r0 == 0) goto Lc
            boolean r2 = r4.mIgnoreTap
            if (r2 == 0) goto Lc
            return r1
        Lc:
            float r2 = r5.getX()
            float r5 = r5.getY()
            r3 = 1
            if (r0 == 0) goto L72
            if (r0 == r3) goto L3c
            r1 = 2
            if (r0 == r1) goto L1d
            goto L78
        L1d:
            float r0 = r4.mInitialMotionX
            float r2 = r2 - r0
            float r0 = java.lang.Math.abs(r2)
            int r1 = r4.mTouchSlop
            float r1 = (float) r1
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 > 0) goto L39
            float r0 = r4.mInitialMotionY
            float r5 = r5 - r0
            float r5 = java.lang.Math.abs(r5)
            int r0 = r4.mTouchSlop
            float r0 = (float) r0
            int r5 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r5 <= 0) goto L78
        L39:
            r4.mIgnoreTap = r3
            goto L78
        L3c:
            android.widget.TextView r5 = r4.mCurrText
            int r5 = r5.getLeft()
            int r0 = r4.mTabPadding
            int r5 = r5 - r0
            float r5 = (float) r5
            int r5 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r5 >= 0) goto L57
            android.support.v4.view.ViewPager r5 = r4.mPager
            android.support.v4.view.ViewPager r0 = r4.mPager
            int r0 = r0.getCurrentItem()
            int r0 = r0 - r3
            r5.setCurrentItem(r0)
            goto L78
        L57:
            android.widget.TextView r5 = r4.mCurrText
            int r5 = r5.getRight()
            int r0 = r4.mTabPadding
            int r5 = r5 + r0
            float r5 = (float) r5
            int r5 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r5 <= 0) goto L78
            android.support.v4.view.ViewPager r5 = r4.mPager
            android.support.v4.view.ViewPager r0 = r4.mPager
            int r0 = r0.getCurrentItem()
            int r0 = r0 + r3
            r5.setCurrentItem(r0)
            goto L78
        L72:
            r4.mInitialMotionX = r2
            r4.mInitialMotionY = r5
            r4.mIgnoreTap = r1
        L78:
            return r3
    }

    @Override
    public void setBackgroundColor(@android.support.annotation.ColorInt int r2) {
            r1 = this;
            super.setBackgroundColor(r2)
            boolean r0 = r1.mDrawFullUnderlineSet
            if (r0 != 0) goto L11
            r0 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r2 = r2 & r0
            if (r2 != 0) goto Le
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            r1.mDrawFullUnderline = r2
        L11:
            return
    }

    @Override
    public void setBackgroundDrawable(android.graphics.drawable.Drawable r2) {
            r1 = this;
            super.setBackgroundDrawable(r2)
            boolean r0 = r1.mDrawFullUnderlineSet
            if (r0 != 0) goto Le
            if (r2 != 0) goto Lb
            r2 = 1
            goto Lc
        Lb:
            r2 = 0
        Lc:
            r1.mDrawFullUnderline = r2
        Le:
            return
    }

    @Override
    public void setBackgroundResource(@android.support.annotation.DrawableRes int r2) {
            r1 = this;
            super.setBackgroundResource(r2)
            boolean r0 = r1.mDrawFullUnderlineSet
            if (r0 != 0) goto Le
            if (r2 != 0) goto Lb
            r2 = 1
            goto Lc
        Lb:
            r2 = 0
        Lc:
            r1.mDrawFullUnderline = r2
        Le:
            return
    }

    public void setDrawFullUnderline(boolean r1) {
            r0 = this;
            r0.mDrawFullUnderline = r1
            r1 = 1
            r0.mDrawFullUnderlineSet = r1
            r0.invalidate()
            return
    }

    @Override
    public void setPadding(int r2, int r3, int r4, int r5) {
            r1 = this;
            int r0 = r1.mMinPaddingBottom
            if (r5 >= r0) goto L5
            r5 = r0
        L5:
            super.setPadding(r2, r3, r4, r5)
            return
    }

    public void setTabIndicatorColor(@android.support.annotation.ColorInt int r2) {
            r1 = this;
            r1.mIndicatorColor = r2
            android.graphics.Paint r2 = r1.mTabPaint
            int r0 = r1.mIndicatorColor
            r2.setColor(r0)
            r1.invalidate()
            return
    }

    public void setTabIndicatorColorResource(@android.support.annotation.ColorRes int r2) {
            r1 = this;
            android.content.Context r0 = r1.getContext()
            int r2 = android.support.v4.content.ContextCompat.getColor(r0, r2)
            r1.setTabIndicatorColor(r2)
            return
    }

    @Override
    public void setTextSpacing(int r2) {
            r1 = this;
            int r0 = r1.mMinTextSpacing
            if (r2 >= r0) goto L5
            r2 = r0
        L5:
            super.setTextSpacing(r2)
            return
    }

    @Override
    void updateTextPositions(int r6, float r7, boolean r8) {
            r5 = this;
            android.graphics.Rect r0 = r5.mTempRect
            int r1 = r5.getHeight()
            android.widget.TextView r2 = r5.mCurrText
            int r2 = r2.getLeft()
            int r3 = r5.mTabPadding
            int r2 = r2 - r3
            android.widget.TextView r3 = r5.mCurrText
            int r3 = r3.getRight()
            int r4 = r5.mTabPadding
            int r3 = r3 + r4
            int r4 = r5.mIndicatorHeight
            int r4 = r1 - r4
            r0.set(r2, r4, r3, r1)
            super.updateTextPositions(r6, r7, r8)
            r6 = 1056964608(0x3f000000, float:0.5)
            float r7 = r7 - r6
            float r6 = java.lang.Math.abs(r7)
            r7 = 1073741824(0x40000000, float:2.0)
            float r6 = r6 * r7
            r7 = 1132396544(0x437f0000, float:255.0)
            float r6 = r6 * r7
            int r6 = (int) r6
            r5.mTabAlpha = r6
            android.widget.TextView r6 = r5.mCurrText
            int r6 = r6.getLeft()
            int r7 = r5.mTabPadding
            int r6 = r6 - r7
            android.widget.TextView r7 = r5.mCurrText
            int r7 = r7.getRight()
            int r8 = r5.mTabPadding
            int r7 = r7 + r8
            r0.union(r6, r4, r7, r1)
            r5.invalidate(r0)
            return
    }
}
