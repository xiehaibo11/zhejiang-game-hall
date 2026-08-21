package android.support.v7.widget;

class ActionBarBackgroundDrawable extends android.graphics.drawable.Drawable {
    final android.support.v7.widget.ActionBarContainer mContainer;

    public ActionBarBackgroundDrawable(android.support.v7.widget.ActionBarContainer r1) {
            r0 = this;
            r0.<init>()
            r0.mContainer = r1
            return
    }

    @Override
    public void draw(android.graphics.Canvas r2) {
            r1 = this;
            android.support.v7.widget.ActionBarContainer r0 = r1.mContainer
            boolean r0 = r0.mIsSplit
            if (r0 == 0) goto L14
            android.support.v7.widget.ActionBarContainer r0 = r1.mContainer
            android.graphics.drawable.Drawable r0 = r0.mSplitBackground
            if (r0 == 0) goto L34
            android.support.v7.widget.ActionBarContainer r0 = r1.mContainer
            android.graphics.drawable.Drawable r0 = r0.mSplitBackground
            r0.draw(r2)
            goto L34
        L14:
            android.support.v7.widget.ActionBarContainer r0 = r1.mContainer
            android.graphics.drawable.Drawable r0 = r0.mBackground
            if (r0 == 0) goto L21
            android.support.v7.widget.ActionBarContainer r0 = r1.mContainer
            android.graphics.drawable.Drawable r0 = r0.mBackground
            r0.draw(r2)
        L21:
            android.support.v7.widget.ActionBarContainer r0 = r1.mContainer
            android.graphics.drawable.Drawable r0 = r0.mStackedBackground
            if (r0 == 0) goto L34
            android.support.v7.widget.ActionBarContainer r0 = r1.mContainer
            boolean r0 = r0.mIsStacked
            if (r0 == 0) goto L34
            android.support.v7.widget.ActionBarContainer r0 = r1.mContainer
            android.graphics.drawable.Drawable r0 = r0.mStackedBackground
            r0.draw(r2)
        L34:
            return
    }

    @Override
    public int getOpacity() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    @android.support.annotation.RequiresApi(21)
    public void getOutline(@android.support.annotation.NonNull android.graphics.Outline r2) {
            r1 = this;
            android.support.v7.widget.ActionBarContainer r0 = r1.mContainer
            boolean r0 = r0.mIsSplit
            if (r0 == 0) goto L14
            android.support.v7.widget.ActionBarContainer r0 = r1.mContainer
            android.graphics.drawable.Drawable r0 = r0.mSplitBackground
            if (r0 == 0) goto L21
            android.support.v7.widget.ActionBarContainer r0 = r1.mContainer
            android.graphics.drawable.Drawable r0 = r0.mSplitBackground
            r0.getOutline(r2)
            goto L21
        L14:
            android.support.v7.widget.ActionBarContainer r0 = r1.mContainer
            android.graphics.drawable.Drawable r0 = r0.mBackground
            if (r0 == 0) goto L21
            android.support.v7.widget.ActionBarContainer r0 = r1.mContainer
            android.graphics.drawable.Drawable r0 = r0.mBackground
            r0.getOutline(r2)
        L21:
            return
    }

    @Override
    public void setAlpha(int r1) {
            r0 = this;
            return
    }

    @Override
    public void setColorFilter(android.graphics.ColorFilter r1) {
            r0 = this;
            return
    }
}
