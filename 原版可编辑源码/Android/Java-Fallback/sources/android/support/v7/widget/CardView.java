package android.support.v7.widget;

public class CardView extends android.widget.FrameLayout {
    private static final int[] COLOR_BACKGROUND_ATTR = null;
    private static final android.support.v7.widget.CardViewImpl IMPL = null;
    private final android.support.v7.widget.CardViewDelegate mCardViewDelegate;
    private boolean mCompatPadding;
    final android.graphics.Rect mContentPadding;
    private boolean mPreventCornerOverlap;
    final android.graphics.Rect mShadowBounds;
    int mUserSetMinHeight;
    int mUserSetMinWidth;


    static {
            r0 = 1
            int[] r0 = new int[r0]
            r1 = 0
            r2 = 16842801(0x1010031, float:2.3693695E-38)
            r0[r1] = r2
            android.support.v7.widget.CardView.COLOR_BACKGROUND_ATTR = r0
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto L19
            android.support.v7.widget.CardViewApi21Impl r0 = new android.support.v7.widget.CardViewApi21Impl
            r0.<init>()
            android.support.v7.widget.CardView.IMPL = r0
            goto L2e
        L19:
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 < r1) goto L27
            android.support.v7.widget.CardViewApi17Impl r0 = new android.support.v7.widget.CardViewApi17Impl
            r0.<init>()
            android.support.v7.widget.CardView.IMPL = r0
            goto L2e
        L27:
            android.support.v7.widget.CardViewBaseImpl r0 = new android.support.v7.widget.CardViewBaseImpl
            r0.<init>()
            android.support.v7.widget.CardView.IMPL = r0
        L2e:
            android.support.v7.widget.CardViewImpl r0 = android.support.v7.widget.CardView.IMPL
            r0.initStatic()
            return
    }

    public CardView(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public CardView(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.v7.cardview.R.attr.cardViewStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public CardView(android.content.Context r9, android.util.AttributeSet r10, int r11) {
            r8 = this;
            r8.<init>(r9, r10, r11)
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r8.mContentPadding = r0
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r8.mShadowBounds = r0
            android.support.v7.widget.CardView$1 r0 = new android.support.v7.widget.CardView$1
            r0.<init>(r8)
            r8.mCardViewDelegate = r0
            int[] r0 = android.support.v7.cardview.R.styleable.CardView
            int r1 = android.support.v7.cardview.R.style.CardView
            android.content.res.TypedArray r10 = r9.obtainStyledAttributes(r10, r0, r11, r1)
            int r11 = android.support.v7.cardview.R.styleable.CardView_cardBackgroundColor
            boolean r11 = r10.hasValue(r11)
            r0 = 0
            if (r11 == 0) goto L31
            int r11 = android.support.v7.cardview.R.styleable.CardView_cardBackgroundColor
            android.content.res.ColorStateList r11 = r10.getColorStateList(r11)
        L2f:
            r4 = r11
            goto L6b
        L31:
            android.content.Context r11 = r8.getContext()
            int[] r1 = android.support.v7.widget.CardView.COLOR_BACKGROUND_ATTR
            android.content.res.TypedArray r11 = r11.obtainStyledAttributes(r1)
            int r1 = r11.getColor(r0, r0)
            r11.recycle()
            r11 = 3
            float[] r11 = new float[r11]
            android.graphics.Color.colorToHSV(r1, r11)
            r1 = 2
            r11 = r11[r1]
            r1 = 1056964608(0x3f000000, float:0.5)
            int r11 = (r11 > r1 ? 1 : (r11 == r1 ? 0 : -1))
            if (r11 <= 0) goto L5c
            android.content.res.Resources r11 = r8.getResources()
            int r1 = android.support.v7.cardview.R.color.cardview_light_background
            int r11 = r11.getColor(r1)
            goto L66
        L5c:
            android.content.res.Resources r11 = r8.getResources()
            int r1 = android.support.v7.cardview.R.color.cardview_dark_background
            int r11 = r11.getColor(r1)
        L66:
            android.content.res.ColorStateList r11 = android.content.res.ColorStateList.valueOf(r11)
            goto L2f
        L6b:
            int r11 = android.support.v7.cardview.R.styleable.CardView_cardCornerRadius
            r1 = 0
            float r5 = r10.getDimension(r11, r1)
            int r11 = android.support.v7.cardview.R.styleable.CardView_cardElevation
            float r6 = r10.getDimension(r11, r1)
            int r11 = android.support.v7.cardview.R.styleable.CardView_cardMaxElevation
            float r11 = r10.getDimension(r11, r1)
            int r1 = android.support.v7.cardview.R.styleable.CardView_cardUseCompatPadding
            boolean r1 = r10.getBoolean(r1, r0)
            r8.mCompatPadding = r1
            int r1 = android.support.v7.cardview.R.styleable.CardView_cardPreventCornerOverlap
            r2 = 1
            boolean r1 = r10.getBoolean(r1, r2)
            r8.mPreventCornerOverlap = r1
            int r1 = android.support.v7.cardview.R.styleable.CardView_contentPadding
            int r1 = r10.getDimensionPixelSize(r1, r0)
            android.graphics.Rect r2 = r8.mContentPadding
            int r3 = android.support.v7.cardview.R.styleable.CardView_contentPaddingLeft
            int r3 = r10.getDimensionPixelSize(r3, r1)
            r2.left = r3
            android.graphics.Rect r2 = r8.mContentPadding
            int r3 = android.support.v7.cardview.R.styleable.CardView_contentPaddingTop
            int r3 = r10.getDimensionPixelSize(r3, r1)
            r2.top = r3
            android.graphics.Rect r2 = r8.mContentPadding
            int r3 = android.support.v7.cardview.R.styleable.CardView_contentPaddingRight
            int r3 = r10.getDimensionPixelSize(r3, r1)
            r2.right = r3
            android.graphics.Rect r2 = r8.mContentPadding
            int r3 = android.support.v7.cardview.R.styleable.CardView_contentPaddingBottom
            int r1 = r10.getDimensionPixelSize(r3, r1)
            r2.bottom = r1
            int r1 = (r6 > r11 ? 1 : (r6 == r11 ? 0 : -1))
            if (r1 <= 0) goto Lc3
            r7 = r6
            goto Lc4
        Lc3:
            r7 = r11
        Lc4:
            int r11 = android.support.v7.cardview.R.styleable.CardView_android_minWidth
            int r11 = r10.getDimensionPixelSize(r11, r0)
            r8.mUserSetMinWidth = r11
            int r11 = android.support.v7.cardview.R.styleable.CardView_android_minHeight
            int r11 = r10.getDimensionPixelSize(r11, r0)
            r8.mUserSetMinHeight = r11
            r10.recycle()
            android.support.v7.widget.CardViewImpl r1 = android.support.v7.widget.CardView.IMPL
            android.support.v7.widget.CardViewDelegate r2 = r8.mCardViewDelegate
            r3 = r9
            r1.initialize(r2, r3, r4, r5, r6, r7)
            return
    }

    static void access$001(android.support.v7.widget.CardView r0, int r1, int r2, int r3, int r4) {
            super.setPadding(r1, r2, r3, r4)
            return
    }

    static void access$101(android.support.v7.widget.CardView r0, int r1) {
            super.setMinimumWidth(r1)
            return
    }

    static void access$201(android.support.v7.widget.CardView r0, int r1) {
            super.setMinimumHeight(r1)
            return
    }

    public android.content.res.ColorStateList getCardBackgroundColor() {
            r2 = this;
            android.support.v7.widget.CardViewImpl r0 = android.support.v7.widget.CardView.IMPL
            android.support.v7.widget.CardViewDelegate r1 = r2.mCardViewDelegate
            android.content.res.ColorStateList r0 = r0.getBackgroundColor(r1)
            return r0
    }

    public float getCardElevation() {
            r2 = this;
            android.support.v7.widget.CardViewImpl r0 = android.support.v7.widget.CardView.IMPL
            android.support.v7.widget.CardViewDelegate r1 = r2.mCardViewDelegate
            float r0 = r0.getElevation(r1)
            return r0
    }

    public int getContentPaddingBottom() {
            r1 = this;
            android.graphics.Rect r0 = r1.mContentPadding
            int r0 = r0.bottom
            return r0
    }

    public int getContentPaddingLeft() {
            r1 = this;
            android.graphics.Rect r0 = r1.mContentPadding
            int r0 = r0.left
            return r0
    }

    public int getContentPaddingRight() {
            r1 = this;
            android.graphics.Rect r0 = r1.mContentPadding
            int r0 = r0.right
            return r0
    }

    public int getContentPaddingTop() {
            r1 = this;
            android.graphics.Rect r0 = r1.mContentPadding
            int r0 = r0.top
            return r0
    }

    public float getMaxCardElevation() {
            r2 = this;
            android.support.v7.widget.CardViewImpl r0 = android.support.v7.widget.CardView.IMPL
            android.support.v7.widget.CardViewDelegate r1 = r2.mCardViewDelegate
            float r0 = r0.getMaxElevation(r1)
            return r0
    }

    public boolean getPreventCornerOverlap() {
            r1 = this;
            boolean r0 = r1.mPreventCornerOverlap
            return r0
    }

    public float getRadius() {
            r2 = this;
            android.support.v7.widget.CardViewImpl r0 = android.support.v7.widget.CardView.IMPL
            android.support.v7.widget.CardViewDelegate r1 = r2.mCardViewDelegate
            float r0 = r0.getRadius(r1)
            return r0
    }

    public boolean getUseCompatPadding() {
            r1 = this;
            boolean r0 = r1.mCompatPadding
            return r0
    }

    @Override
    protected void onMeasure(int r6, int r7) {
            r5 = this;
            android.support.v7.widget.CardViewImpl r0 = android.support.v7.widget.CardView.IMPL
            boolean r0 = r0 instanceof android.support.v7.widget.CardViewApi21Impl
            if (r0 != 0) goto L54
            int r0 = android.view.View.MeasureSpec.getMode(r6)
            r1 = 1073741824(0x40000000, float:2.0)
            r2 = -2147483648(0xffffffff80000000, float:-0.0)
            if (r0 == r2) goto L13
            if (r0 == r1) goto L13
            goto L2d
        L13:
            android.support.v7.widget.CardViewImpl r3 = android.support.v7.widget.CardView.IMPL
            android.support.v7.widget.CardViewDelegate r4 = r5.mCardViewDelegate
            float r3 = r3.getMinWidth(r4)
            double r3 = (double) r3
            double r3 = java.lang.Math.ceil(r3)
            int r3 = (int) r3
            int r6 = android.view.View.MeasureSpec.getSize(r6)
            int r6 = java.lang.Math.max(r3, r6)
            int r6 = android.view.View.MeasureSpec.makeMeasureSpec(r6, r0)
        L2d:
            int r0 = android.view.View.MeasureSpec.getMode(r7)
            if (r0 == r2) goto L36
            if (r0 == r1) goto L36
            goto L50
        L36:
            android.support.v7.widget.CardViewImpl r1 = android.support.v7.widget.CardView.IMPL
            android.support.v7.widget.CardViewDelegate r2 = r5.mCardViewDelegate
            float r1 = r1.getMinHeight(r2)
            double r1 = (double) r1
            double r1 = java.lang.Math.ceil(r1)
            int r1 = (int) r1
            int r7 = android.view.View.MeasureSpec.getSize(r7)
            int r7 = java.lang.Math.max(r1, r7)
            int r7 = android.view.View.MeasureSpec.makeMeasureSpec(r7, r0)
        L50:
            super.onMeasure(r6, r7)
            goto L57
        L54:
            super.onMeasure(r6, r7)
        L57:
            return
    }

    public void setCardBackgroundColor(int r3) {
            r2 = this;
            android.support.v7.widget.CardViewImpl r0 = android.support.v7.widget.CardView.IMPL
            android.support.v7.widget.CardViewDelegate r1 = r2.mCardViewDelegate
            android.content.res.ColorStateList r3 = android.content.res.ColorStateList.valueOf(r3)
            r0.setBackgroundColor(r1, r3)
            return
    }

    public void setCardBackgroundColor(android.content.res.ColorStateList r3) {
            r2 = this;
            android.support.v7.widget.CardViewImpl r0 = android.support.v7.widget.CardView.IMPL
            android.support.v7.widget.CardViewDelegate r1 = r2.mCardViewDelegate
            r0.setBackgroundColor(r1, r3)
            return
    }

    public void setCardElevation(float r3) {
            r2 = this;
            android.support.v7.widget.CardViewImpl r0 = android.support.v7.widget.CardView.IMPL
            android.support.v7.widget.CardViewDelegate r1 = r2.mCardViewDelegate
            r0.setElevation(r1, r3)
            return
    }

    public void setContentPadding(int r2, int r3, int r4, int r5) {
            r1 = this;
            android.graphics.Rect r0 = r1.mContentPadding
            r0.set(r2, r3, r4, r5)
            android.support.v7.widget.CardViewImpl r2 = android.support.v7.widget.CardView.IMPL
            android.support.v7.widget.CardViewDelegate r3 = r1.mCardViewDelegate
            r2.updatePadding(r3)
            return
    }

    public void setMaxCardElevation(float r3) {
            r2 = this;
            android.support.v7.widget.CardViewImpl r0 = android.support.v7.widget.CardView.IMPL
            android.support.v7.widget.CardViewDelegate r1 = r2.mCardViewDelegate
            r0.setMaxElevation(r1, r3)
            return
    }

    @Override
    public void setMinimumHeight(int r1) {
            r0 = this;
            r0.mUserSetMinHeight = r1
            super.setMinimumHeight(r1)
            return
    }

    @Override
    public void setMinimumWidth(int r1) {
            r0 = this;
            r0.mUserSetMinWidth = r1
            super.setMinimumWidth(r1)
            return
    }

    @Override
    public void setPadding(int r1, int r2, int r3, int r4) {
            r0 = this;
            return
    }

    @Override
    public void setPaddingRelative(int r1, int r2, int r3, int r4) {
            r0 = this;
            return
    }

    public void setPreventCornerOverlap(boolean r2) {
            r1 = this;
            boolean r0 = r1.mPreventCornerOverlap
            if (r2 == r0) goto Ld
            r1.mPreventCornerOverlap = r2
            android.support.v7.widget.CardViewImpl r2 = android.support.v7.widget.CardView.IMPL
            android.support.v7.widget.CardViewDelegate r0 = r1.mCardViewDelegate
            r2.onPreventCornerOverlapChanged(r0)
        Ld:
            return
    }

    public void setRadius(float r3) {
            r2 = this;
            android.support.v7.widget.CardViewImpl r0 = android.support.v7.widget.CardView.IMPL
            android.support.v7.widget.CardViewDelegate r1 = r2.mCardViewDelegate
            r0.setRadius(r1, r3)
            return
    }

    public void setUseCompatPadding(boolean r2) {
            r1 = this;
            boolean r0 = r1.mCompatPadding
            if (r0 == r2) goto Ld
            r1.mCompatPadding = r2
            android.support.v7.widget.CardViewImpl r2 = android.support.v7.widget.CardView.IMPL
            android.support.v7.widget.CardViewDelegate r0 = r1.mCardViewDelegate
            r2.onCompatPaddingChanged(r0)
        Ld:
            return
    }
}
