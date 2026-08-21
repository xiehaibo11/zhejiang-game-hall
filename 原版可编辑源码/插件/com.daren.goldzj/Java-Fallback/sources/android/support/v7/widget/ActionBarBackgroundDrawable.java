package android.support.v7.widget;

import android.graphics.Canvas;
import android.graphics.ColorFilter;
import android.graphics.Outline;
import android.graphics.drawable.Drawable;
import android.support.annotation.NonNull;
import android.support.annotation.RequiresApi;

class ActionBarBackgroundDrawable extends Drawable {
    final ActionBarContainer mContainer;

    @Override
    public int getOpacity() {
        return 0;
    }

    @Override
    public void setAlpha(int r1) {
    }

    @Override
    public void setColorFilter(ColorFilter r1) {
    }

    public ActionBarBackgroundDrawable(ActionBarContainer r1) {
        this.mContainer = r1;
    }

    @Override
    public void draw(Canvas r2) {
        if (this.mContainer.mIsSplit == false) goto L8;
        if (this.mContainer.mSplitBackground == null) goto L16;
        this.mContainer.mSplitBackground.draw(r2);
        return;
    L16:
        return;
    L8:
        if (this.mContainer.mBackground == null) goto L11;
        this.mContainer.mBackground.draw(r2);
    L11:
        if (this.mContainer.mStackedBackground != null) goto L13;
        return;
    L13:
        if (this.mContainer.mIsStacked == false) goto L19;
        this.mContainer.mStackedBackground.draw(r2);
        return;
    }

    @Override
    @RequiresApi(21)
    public void getOutline(@NonNull Outline r2) {
        if (this.mContainer.mIsSplit == false) goto L8;
        if (this.mContainer.mSplitBackground == null) goto L11;
        this.mContainer.mSplitBackground.getOutline(r2);
        return;
    L11:
        return;
    L8:
        if (this.mContainer.mBackground == null) goto L13;
        this.mContainer.mBackground.getOutline(r2);
        return;
    }
}
