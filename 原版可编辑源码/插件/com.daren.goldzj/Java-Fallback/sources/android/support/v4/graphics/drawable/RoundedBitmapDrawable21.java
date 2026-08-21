package android.support.v4.graphics.drawable;

import android.content.res.Resources;
import android.graphics.Bitmap;
import android.graphics.Outline;
import android.graphics.Rect;
import android.support.annotation.RequiresApi;
import android.view.Gravity;

@RequiresApi(21)
class RoundedBitmapDrawable21 extends RoundedBitmapDrawable {
    protected RoundedBitmapDrawable21(Resources r1, Bitmap r2) {
        super(r1, r2);
    }

    @Override
    public void getOutline(Outline r3) {
        updateDstRect();
        r3.setRoundRect(this.mDstRect, getCornerRadius());
    }

    @Override
    public void setMipMap(boolean r2) {
        if (this.mBitmap == null) goto L6;
        this.mBitmap.setHasMipMap(r2);
        invalidateSelf();
        return;
    }

    @Override
    public boolean hasMipMap() {
        if (this.mBitmap != null) goto L5;
    L7:
        return false;
    L5:
        if (this.mBitmap.hasMipMap() == false) goto L7;
        return true;
    }

    @Override
    void gravityCompatApply(int r7, int r8, int r9, Rect r10, Rect r11) {
        Gravity.apply(r7, r8, r9, r10, r11, 0);
    }
}
