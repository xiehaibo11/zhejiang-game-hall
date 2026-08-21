package android.support.v7.widget;

class AppCompatPopupWindow extends android.widget.PopupWindow {
    private static final boolean COMPAT_OVERLAP_ANCHOR = false;
    private boolean mOverlapAnchor;

    static {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 >= r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            android.support.v7.widget.AppCompatPopupWindow.COMPAT_OVERLAP_ANCHOR = r0
            return
    }

    public AppCompatPopupWindow(@android.support.annotation.NonNull android.content.Context r2, @android.support.annotation.Nullable android.util.AttributeSet r3, @android.support.annotation.AttrRes int r4) {
            r1 = this;
            r1.<init>(r2, r3, r4)
            r0 = 0
            r1.init(r2, r3, r4, r0)
            return
    }

    public AppCompatPopupWindow(@android.support.annotation.NonNull android.content.Context r1, @android.support.annotation.Nullable android.util.AttributeSet r2, @android.support.annotation.AttrRes int r3, @android.support.annotation.StyleRes int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            r0.init(r1, r2, r3, r4)
            return
    }

    private void init(android.content.Context r2, android.util.AttributeSet r3, int r4, int r5) {
            r1 = this;
            int[] r0 = android.support.v7.appcompat.R.styleable.PopupWindow
            android.support.v7.widget.TintTypedArray r2 = android.support.v7.widget.TintTypedArray.obtainStyledAttributes(r2, r3, r0, r4, r5)
            int r3 = android.support.v7.appcompat.R.styleable.PopupWindow_overlapAnchor
            boolean r3 = r2.hasValue(r3)
            if (r3 == 0) goto L18
            int r3 = android.support.v7.appcompat.R.styleable.PopupWindow_overlapAnchor
            r4 = 0
            boolean r3 = r2.getBoolean(r3, r4)
            r1.setSupportOverlapAnchor(r3)
        L18:
            int r3 = android.support.v7.appcompat.R.styleable.PopupWindow_android_popupBackground
            android.graphics.drawable.Drawable r3 = r2.getDrawable(r3)
            r1.setBackgroundDrawable(r3)
            r2.recycle()
            return
    }

    private void setSupportOverlapAnchor(boolean r2) {
            r1 = this;
            boolean r0 = android.support.v7.widget.AppCompatPopupWindow.COMPAT_OVERLAP_ANCHOR
            if (r0 == 0) goto L7
            r1.mOverlapAnchor = r2
            goto La
        L7:
            android.support.v4.widget.PopupWindowCompat.setOverlapAnchor(r1, r2)
        La:
            return
    }

    @Override
    public void showAsDropDown(android.view.View r2, int r3, int r4) {
            r1 = this;
            boolean r0 = android.support.v7.widget.AppCompatPopupWindow.COMPAT_OVERLAP_ANCHOR
            if (r0 == 0) goto Ld
            boolean r0 = r1.mOverlapAnchor
            if (r0 == 0) goto Ld
            int r0 = r2.getHeight()
            int r4 = r4 - r0
        Ld:
            super.showAsDropDown(r2, r3, r4)
            return
    }

    @Override
    public void showAsDropDown(android.view.View r2, int r3, int r4, int r5) {
            r1 = this;
            boolean r0 = android.support.v7.widget.AppCompatPopupWindow.COMPAT_OVERLAP_ANCHOR
            if (r0 == 0) goto Ld
            boolean r0 = r1.mOverlapAnchor
            if (r0 == 0) goto Ld
            int r0 = r2.getHeight()
            int r4 = r4 - r0
        Ld:
            super.showAsDropDown(r2, r3, r4, r5)
            return
    }

    @Override
    public void update(android.view.View r7, int r8, int r9, int r10, int r11) {
            r6 = this;
            boolean r0 = android.support.v7.widget.AppCompatPopupWindow.COMPAT_OVERLAP_ANCHOR
            if (r0 == 0) goto Ld
            boolean r0 = r6.mOverlapAnchor
            if (r0 == 0) goto Ld
            int r0 = r7.getHeight()
            int r9 = r9 - r0
        Ld:
            r3 = r9
            r0 = r6
            r1 = r7
            r2 = r8
            r4 = r10
            r5 = r11
            super.update(r1, r2, r3, r4, r5)
            return
    }
}
