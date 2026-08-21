package android.support.v7.widget;

import android.content.Context;
import android.graphics.Canvas;
import android.support.v7.appcompat.R;
import android.util.AttributeSet;
import android.widget.SeekBar;

public class AppCompatSeekBar extends SeekBar {
    private final AppCompatSeekBarHelper mAppCompatSeekBarHelper;

    public AppCompatSeekBar(Context r2) {
        this(r2, null);
    }

    public AppCompatSeekBar(Context r2, AttributeSet r3) {
        this(r2, r3, R.attr.seekBarStyle);
    }

    public AppCompatSeekBar(Context r1, AttributeSet r2, int r3) {
        super(r1, r2, r3);
        this.mAppCompatSeekBarHelper = new AppCompatSeekBarHelper(this);
        this.mAppCompatSeekBarHelper.loadFromAttributes(r2, r3);
    }

    @Override
    protected synchronized void onDraw(Canvas r2) {
        monitor-enter(this);
        super.onDraw(r2);     // Catch: Throwable -> L6
        this.mAppCompatSeekBarHelper.drawTickMarks(r2);     // Catch: Throwable -> L6
        monitor-exit(this);
        return;
    L6:
        th = move-exception;
        throw th;
    }

    @Override
    protected void drawableStateChanged() {
        super.drawableStateChanged();
        this.mAppCompatSeekBarHelper.drawableStateChanged();
    }

    @Override
    public void jumpDrawablesToCurrentState() {
        super.jumpDrawablesToCurrentState();
        this.mAppCompatSeekBarHelper.jumpDrawablesToCurrentState();
    }
}
