package android.support.v4.widget;

import android.annotation.SuppressLint;
import android.content.Context;
import android.graphics.Canvas;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.util.AttributeSet;
import android.view.View;

@Deprecated
public class Space extends View {
    @Override
    @SuppressLint({"MissingSuperCall"})
    @Deprecated
    public void draw(Canvas r1) {
    }

    @Deprecated
    public Space(@NonNull Context r1, @Nullable AttributeSet r2, int r3) {
        super(r1, r2, r3);
        if (getVisibility() != 0) goto L6;
        setVisibility(4);
        return;
    }

    @Deprecated
    public Space(@NonNull Context r2, @Nullable AttributeSet r3) {
        this(r2, r3, 0);
    }

    @Deprecated
    public Space(@NonNull Context r2) {
        this(r2, null);
    }

    private static int getDefaultSize2(int r2, int r3) {
        int r0 = View.MeasureSpec.getMode(r3);
        int r32 = View.MeasureSpec.getSize(r3);
        if (r0 == Integer.MIN_VALUE) goto L10;
        if (r0 != 0) goto L6;
        return r2;
    L6:
        if (r0 == 1073741824) goto L12;
        return r2;
    L12:
        return r32;
    L10:
        return Math.min(r2, r32);
    }

    @Override
    @Deprecated
    protected void onMeasure(int r2, int r3) {
        setMeasuredDimension(getDefaultSize2(getSuggestedMinimumWidth(), r2), getDefaultSize2(getSuggestedMinimumHeight(), r3));
    }
}
