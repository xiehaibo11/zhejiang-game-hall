package android.support.graphics.drawable;

import android.graphics.drawable.Animatable;
import android.graphics.drawable.Animatable2;
import android.graphics.drawable.Drawable;
import android.support.annotation.NonNull;
import android.support.annotation.RequiresApi;

public interface Animatable2Compat extends Animatable {

    public static abstract class AnimationCallback {
        Animatable2.AnimationCallback mPlatformCallback;

        public void onAnimationEnd(Drawable r1) {
        }

        public void onAnimationStart(Drawable r1) {
        }

        public AnimationCallback() {
        }

        @RequiresApi(23)
        Animatable2.AnimationCallback getPlatformCallback() {
            if (this.mPlatformCallback != null) goto L6;
            this.mPlatformCallback = new 1(this);
        L6:
            return this.mPlatformCallback;
        }
    }

    void clearAnimationCallbacks();

    void registerAnimationCallback(@NonNull AnimationCallback r1);

    boolean unregisterAnimationCallback(@NonNull AnimationCallback r1);
}
