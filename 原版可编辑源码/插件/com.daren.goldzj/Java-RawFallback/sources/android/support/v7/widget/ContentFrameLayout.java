package android.support.v7.widget;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY})
public class ContentFrameLayout extends android.widget.FrameLayout {
    private android.support.v7.widget.ContentFrameLayout.OnAttachListener mAttachListener;
    private final android.graphics.Rect mDecorPadding;
    private android.util.TypedValue mFixedHeightMajor;
    private android.util.TypedValue mFixedHeightMinor;
    private android.util.TypedValue mFixedWidthMajor;
    private android.util.TypedValue mFixedWidthMinor;
    private android.util.TypedValue mMinWidthMajor;
    private android.util.TypedValue mMinWidthMinor;

    public interface OnAttachListener {
        void onAttachedFromWindow();

        void onDetachedFromWindow();
    }

    public ContentFrameLayout(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public ContentFrameLayout(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public ContentFrameLayout(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            android.graphics.Rect r1 = new android.graphics.Rect
            r1.<init>()
            r0.mDecorPadding = r1
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public void dispatchFitSystemWindows(android.graphics.Rect r1) {
            r0 = this;
            r0.fitSystemWindows(r1)
            return
    }

    public android.util.TypedValue getFixedHeightMajor() {
            r1 = this;
            android.util.TypedValue r0 = r1.mFixedHeightMajor
            if (r0 != 0) goto Lb
            android.util.TypedValue r0 = new android.util.TypedValue
            r0.<init>()
            r1.mFixedHeightMajor = r0
        Lb:
            android.util.TypedValue r0 = r1.mFixedHeightMajor
            return r0
    }

    public android.util.TypedValue getFixedHeightMinor() {
            r1 = this;
            android.util.TypedValue r0 = r1.mFixedHeightMinor
            if (r0 != 0) goto Lb
            android.util.TypedValue r0 = new android.util.TypedValue
            r0.<init>()
            r1.mFixedHeightMinor = r0
        Lb:
            android.util.TypedValue r0 = r1.mFixedHeightMinor
            return r0
    }

    public android.util.TypedValue getFixedWidthMajor() {
            r1 = this;
            android.util.TypedValue r0 = r1.mFixedWidthMajor
            if (r0 != 0) goto Lb
            android.util.TypedValue r0 = new android.util.TypedValue
            r0.<init>()
            r1.mFixedWidthMajor = r0
        Lb:
            android.util.TypedValue r0 = r1.mFixedWidthMajor
            return r0
    }

    public android.util.TypedValue getFixedWidthMinor() {
            r1 = this;
            android.util.TypedValue r0 = r1.mFixedWidthMinor
            if (r0 != 0) goto Lb
            android.util.TypedValue r0 = new android.util.TypedValue
            r0.<init>()
            r1.mFixedWidthMinor = r0
        Lb:
            android.util.TypedValue r0 = r1.mFixedWidthMinor
            return r0
    }

    public android.util.TypedValue getMinWidthMajor() {
            r1 = this;
            android.util.TypedValue r0 = r1.mMinWidthMajor
            if (r0 != 0) goto Lb
            android.util.TypedValue r0 = new android.util.TypedValue
            r0.<init>()
            r1.mMinWidthMajor = r0
        Lb:
            android.util.TypedValue r0 = r1.mMinWidthMajor
            return r0
    }

    public android.util.TypedValue getMinWidthMinor() {
            r1 = this;
            android.util.TypedValue r0 = r1.mMinWidthMinor
            if (r0 != 0) goto Lb
            android.util.TypedValue r0 = new android.util.TypedValue
            r0.<init>()
            r1.mMinWidthMinor = r0
        Lb:
            android.util.TypedValue r0 = r1.mMinWidthMinor
            return r0
    }

    @Override
    protected void onAttachedToWindow() {
            r1 = this;
            super.onAttachedToWindow()
            android.support.v7.widget.ContentFrameLayout$OnAttachListener r0 = r1.mAttachListener
            if (r0 == 0) goto La
            r0.onAttachedFromWindow()
        La:
            return
    }

    @Override
    protected void onDetachedFromWindow() {
            r1 = this;
            super.onDetachedFromWindow()
            android.support.v7.widget.ContentFrameLayout$OnAttachListener r0 = r1.mAttachListener
            if (r0 == 0) goto La
            r0.onDetachedFromWindow()
        La:
            return
    }

    @Override
    protected void onMeasure(int r14, int r15) {
            r13 = this;
            android.content.Context r0 = r13.getContext()
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            int r1 = r0.widthPixels
            int r2 = r0.heightPixels
            r3 = 1
            r4 = 0
            if (r1 >= r2) goto L16
            r1 = 1
            goto L17
        L16:
            r1 = 0
        L17:
            int r2 = android.view.View.MeasureSpec.getMode(r14)
            int r5 = android.view.View.MeasureSpec.getMode(r15)
            r6 = 6
            r7 = 5
            r8 = -2147483648(0xffffffff80000000, float:-0.0)
            r9 = 1073741824(0x40000000, float:2.0)
            if (r2 != r8) goto L69
            if (r1 == 0) goto L2c
            android.util.TypedValue r10 = r13.mFixedWidthMinor
            goto L2e
        L2c:
            android.util.TypedValue r10 = r13.mFixedWidthMajor
        L2e:
            if (r10 == 0) goto L69
            int r11 = r10.type
            if (r11 == 0) goto L69
            int r11 = r10.type
            if (r11 != r7) goto L3e
            float r10 = r10.getDimension(r0)
        L3c:
            int r10 = (int) r10
            goto L4e
        L3e:
            int r11 = r10.type
            if (r11 != r6) goto L4d
            int r11 = r0.widthPixels
            float r11 = (float) r11
            int r12 = r0.widthPixels
            float r12 = (float) r12
            float r10 = r10.getFraction(r11, r12)
            goto L3c
        L4d:
            r10 = 0
        L4e:
            if (r10 <= 0) goto L69
            android.graphics.Rect r11 = r13.mDecorPadding
            int r11 = r11.left
            android.graphics.Rect r12 = r13.mDecorPadding
            int r12 = r12.right
            int r11 = r11 + r12
            int r10 = r10 - r11
            int r14 = android.view.View.MeasureSpec.getSize(r14)
            int r14 = java.lang.Math.min(r10, r14)
            int r14 = android.view.View.MeasureSpec.makeMeasureSpec(r14, r9)
            r10 = r14
            r14 = 1
            goto L6b
        L69:
            r10 = r14
            r14 = 0
        L6b:
            if (r5 != r8) goto Lac
            if (r1 == 0) goto L72
            android.util.TypedValue r5 = r13.mFixedHeightMajor
            goto L74
        L72:
            android.util.TypedValue r5 = r13.mFixedHeightMinor
        L74:
            if (r5 == 0) goto Lac
            int r11 = r5.type
            if (r11 == 0) goto Lac
            int r11 = r5.type
            if (r11 != r7) goto L84
            float r5 = r5.getDimension(r0)
        L82:
            int r5 = (int) r5
            goto L94
        L84:
            int r11 = r5.type
            if (r11 != r6) goto L93
            int r11 = r0.heightPixels
            float r11 = (float) r11
            int r12 = r0.heightPixels
            float r12 = (float) r12
            float r5 = r5.getFraction(r11, r12)
            goto L82
        L93:
            r5 = 0
        L94:
            if (r5 <= 0) goto Lac
            android.graphics.Rect r11 = r13.mDecorPadding
            int r11 = r11.top
            android.graphics.Rect r12 = r13.mDecorPadding
            int r12 = r12.bottom
            int r11 = r11 + r12
            int r5 = r5 - r11
            int r15 = android.view.View.MeasureSpec.getSize(r15)
            int r15 = java.lang.Math.min(r5, r15)
            int r15 = android.view.View.MeasureSpec.makeMeasureSpec(r15, r9)
        Lac:
            super.onMeasure(r10, r15)
            int r5 = r13.getMeasuredWidth()
            int r10 = android.view.View.MeasureSpec.makeMeasureSpec(r5, r9)
            if (r14 != 0) goto Lf5
            if (r2 != r8) goto Lf5
            if (r1 == 0) goto Lc0
            android.util.TypedValue r14 = r13.mMinWidthMinor
            goto Lc2
        Lc0:
            android.util.TypedValue r14 = r13.mMinWidthMajor
        Lc2:
            if (r14 == 0) goto Lf5
            int r1 = r14.type
            if (r1 == 0) goto Lf5
            int r1 = r14.type
            if (r1 != r7) goto Ld2
            float r14 = r14.getDimension(r0)
        Ld0:
            int r14 = (int) r14
            goto Le2
        Ld2:
            int r1 = r14.type
            if (r1 != r6) goto Le1
            int r1 = r0.widthPixels
            float r1 = (float) r1
            int r0 = r0.widthPixels
            float r0 = (float) r0
            float r14 = r14.getFraction(r1, r0)
            goto Ld0
        Le1:
            r14 = 0
        Le2:
            if (r14 <= 0) goto Lee
            android.graphics.Rect r0 = r13.mDecorPadding
            int r0 = r0.left
            android.graphics.Rect r1 = r13.mDecorPadding
            int r1 = r1.right
            int r0 = r0 + r1
            int r14 = r14 - r0
        Lee:
            if (r5 >= r14) goto Lf5
            int r10 = android.view.View.MeasureSpec.makeMeasureSpec(r14, r9)
            goto Lf6
        Lf5:
            r3 = 0
        Lf6:
            if (r3 == 0) goto Lfb
            super.onMeasure(r10, r15)
        Lfb:
            return
    }

    public void setAttachListener(android.support.v7.widget.ContentFrameLayout.OnAttachListener r1) {
            r0 = this;
            r0.mAttachListener = r1
            return
    }

    @android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
    public void setDecorPadding(int r2, int r3, int r4, int r5) {
            r1 = this;
            android.graphics.Rect r0 = r1.mDecorPadding
            r0.set(r2, r3, r4, r5)
            boolean r2 = android.support.v4.view.ViewCompat.isLaidOut(r1)
            if (r2 == 0) goto Le
            r1.requestLayout()
        Le:
            return
    }
}
