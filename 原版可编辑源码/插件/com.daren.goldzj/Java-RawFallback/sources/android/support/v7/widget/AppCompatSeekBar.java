package android.support.v7.widget;

public class AppCompatSeekBar extends android.widget.SeekBar {
    private final android.support.v7.widget.AppCompatSeekBarHelper mAppCompatSeekBarHelper;

    public AppCompatSeekBar(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public AppCompatSeekBar(android.content.Context r2, android.util.AttributeSet r3) {
            r1 = this;
            int r0 = android.support.v7.appcompat.R.attr.seekBarStyle
            r1.<init>(r2, r3, r0)
            return
    }

    public AppCompatSeekBar(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            android.support.v7.widget.AppCompatSeekBarHelper r1 = new android.support.v7.widget.AppCompatSeekBarHelper
            r1.<init>(r0)
            r0.mAppCompatSeekBarHelper = r1
            android.support.v7.widget.AppCompatSeekBarHelper r1 = r0.mAppCompatSeekBarHelper
            r1.loadFromAttributes(r2, r3)
            return
    }

    @Override
    protected void drawableStateChanged() {
            r1 = this;
            super.drawableStateChanged()
            android.support.v7.widget.AppCompatSeekBarHelper r0 = r1.mAppCompatSeekBarHelper
            r0.drawableStateChanged()
            return
    }

    @Override
    public void jumpDrawablesToCurrentState() {
            r1 = this;
            super.jumpDrawablesToCurrentState()
            android.support.v7.widget.AppCompatSeekBarHelper r0 = r1.mAppCompatSeekBarHelper
            r0.jumpDrawablesToCurrentState()
            return
    }

    @Override
    protected synchronized void onDraw(android.graphics.Canvas r2) {
            r1 = this;
            monitor-enter(r1)
            super.onDraw(r2)     // Catch: java.lang.Throwable -> Lb
            android.support.v7.widget.AppCompatSeekBarHelper r0 = r1.mAppCompatSeekBarHelper     // Catch: java.lang.Throwable -> Lb
            r0.drawTickMarks(r2)     // Catch: java.lang.Throwable -> Lb
            monitor-exit(r1)
            return
        Lb:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }
}
