package android.support.v7.widget;

import android.content.Context;
import android.graphics.Bitmap;
import android.support.v7.appcompat.R;
import android.util.AttributeSet;
import android.view.View;
import android.widget.RatingBar;

public class AppCompatRatingBar extends RatingBar {
    private final AppCompatProgressBarHelper mAppCompatProgressBarHelper;

    public AppCompatRatingBar(Context r2) {
        this(r2, null);
    }

    public AppCompatRatingBar(Context r2, AttributeSet r3) {
        this(r2, r3, R.attr.ratingBarStyle);
    }

    public AppCompatRatingBar(Context r1, AttributeSet r2, int r3) {
        super(r1, r2, r3);
        this.mAppCompatProgressBarHelper = new AppCompatProgressBarHelper(this);
        this.mAppCompatProgressBarHelper.loadFromAttributes(r2, r3);
    }

    @Override
    protected synchronized void onMeasure(int r2, int r3) {
        monitor-enter(this);
        super.onMeasure(r2, r3);     // Catch: Throwable -> L8
        Bitmap r32 = this.mAppCompatProgressBarHelper.getSampleTime();     // Catch: Throwable -> L8
        if (r32 == null) goto L6;
        setMeasuredDimension(View.resolveSizeAndState(r32.getWidth() * getNumStars(), r2, 0), getMeasuredHeight());     // Catch: Throwable -> L8
    L6:
        monitor-exit(this);
        return;
    L8:
        th = move-exception;
        throw th;
    }
}
