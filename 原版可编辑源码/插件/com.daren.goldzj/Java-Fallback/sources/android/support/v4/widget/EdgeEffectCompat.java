package android.support.v4.widget;

import android.content.Context;
import android.graphics.Canvas;
import android.os.Build;
import android.support.annotation.NonNull;
import android.widget.EdgeEffect;

public final class EdgeEffectCompat {
    private EdgeEffect mEdgeEffect;

    @Deprecated
    public EdgeEffectCompat(Context r2) {
        this.mEdgeEffect = new EdgeEffect(r2);
    }

    @Deprecated
    public void setSize(int r2, int r3) {
        this.mEdgeEffect.setSize(r2, r3);
    }

    @Deprecated
    public boolean isFinished() {
        return this.mEdgeEffect.isFinished();
    }

    @Deprecated
    public void finish() {
        this.mEdgeEffect.finish();
    }

    @Deprecated
    public boolean onPull(float r2) {
        this.mEdgeEffect.onPull(r2);
        return true;
    }

    @Deprecated
    public boolean onPull(float r2, float r3) {
        onPull(this.mEdgeEffect, r2, r3);
        return true;
    }

    public static void onPull(@NonNull EdgeEffect r2, float r3, float r4) {
        if (Build.VERSION.SDK_INT < 21) goto L5;
        r2.onPull(r3, r4);
        return;
    L5:
        r2.onPull(r3);
    }

    @Deprecated
    public boolean onRelease() {
        this.mEdgeEffect.onRelease();
        return this.mEdgeEffect.isFinished();
    }

    @Deprecated
    public boolean onAbsorb(int r2) {
        this.mEdgeEffect.onAbsorb(r2);
        return true;
    }

    @Deprecated
    public boolean draw(Canvas r2) {
        return this.mEdgeEffect.draw(r2);
    }
}
