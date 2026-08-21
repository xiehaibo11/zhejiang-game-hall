package android.support.v4.widget;

import android.content.Context;
import android.support.annotation.NonNull;
import android.support.annotation.Nullable;
import android.util.AttributeSet;
import android.widget.ProgressBar;

public class ContentLoadingProgressBar extends ProgressBar {
    private static final int MIN_DELAY = 500;
    private static final int MIN_SHOW_TIME = 500;
    private final Runnable mDelayedHide;
    private final Runnable mDelayedShow;
    boolean mDismissed;
    boolean mPostedHide;
    boolean mPostedShow;
    long mStartTime;

    public ContentLoadingProgressBar(@NonNull Context r2) {
        this(r2, null);
    }

    public ContentLoadingProgressBar(@NonNull Context r2, @Nullable AttributeSet r3) {
        super(r2, r3, 0);
        this.mStartTime = -1;
        this.mPostedHide = false;
        this.mPostedShow = false;
        this.mDismissed = false;
        this.mDelayedHide = new 1(this);
        this.mDelayedShow = new 2(this);
    }

    @Override
    public void onAttachedToWindow() {
        super.onAttachedToWindow();
        removeCallbacks();
    }

    @Override
    public void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        removeCallbacks();
    }

    private void removeCallbacks() {
        removeCallbacks(this.mDelayedHide);
        removeCallbacks(this.mDelayedShow);
    }

    public synchronized void hide() {
        monitor-enter(this);
        this.mDismissed = true;     // Catch: Throwable -> L15
        removeCallbacks(this.mDelayedShow);     // Catch: Throwable -> L15
        this.mPostedShow = false;     // Catch: Throwable -> L15
        long r1 = System.currentTimeMillis() - this.mStartTime;     // Catch: Throwable -> L15
        if (r1 < 500) goto L7;
    L12:
        setVisibility(8);     // Catch: Throwable -> L15
    L13:
        monitor-exit(this);
        return;
    L7:
        if (this.mStartTime == (-1)) goto L12;
        if (this.mPostedHide == true) goto L13;
        postDelayed(this.mDelayedHide, 500 - r1);     // Catch: Throwable -> L15
        this.mPostedHide = true;     // Catch: Throwable -> L15
    L15:
        th = move-exception;
        throw th;
    }

    public synchronized void show() {
        monitor-enter(this);
        this.mStartTime = -1;     // Catch: Throwable -> L9
        this.mDismissed = false;     // Catch: Throwable -> L9
        removeCallbacks(this.mDelayedHide);     // Catch: Throwable -> L9
        this.mPostedHide = false;     // Catch: Throwable -> L9
        if (this.mPostedShow == true) goto L7;
        postDelayed(this.mDelayedShow, 500);     // Catch: Throwable -> L9
        this.mPostedShow = true;     // Catch: Throwable -> L9
    L7:
        monitor-exit(this);
        return;
    L9:
        th = move-exception;
        throw th;
    }
}
