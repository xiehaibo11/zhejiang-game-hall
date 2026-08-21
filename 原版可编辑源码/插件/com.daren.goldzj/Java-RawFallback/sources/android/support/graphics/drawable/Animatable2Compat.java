package android.support.graphics.drawable;

public interface Animatable2Compat extends android.graphics.drawable.Animatable {

    public static abstract class AnimationCallback {
        android.graphics.drawable.Animatable2.AnimationCallback mPlatformCallback;


        public AnimationCallback() {
                r0 = this;
                r0.<init>()
                return
        }

        @android.support.annotation.RequiresApi(23)
        android.graphics.drawable.Animatable2.AnimationCallback getPlatformCallback() {
                r1 = this;
                android.graphics.drawable.Animatable2$AnimationCallback r0 = r1.mPlatformCallback
                if (r0 != 0) goto Lb
                android.support.graphics.drawable.Animatable2Compat$AnimationCallback$1 r0 = new android.support.graphics.drawable.Animatable2Compat$AnimationCallback$1
                r0.<init>(r1)
                r1.mPlatformCallback = r0
            Lb:
                android.graphics.drawable.Animatable2$AnimationCallback r0 = r1.mPlatformCallback
                return r0
        }

        public void onAnimationEnd(android.graphics.drawable.Drawable r1) {
                r0 = this;
                return
        }

        public void onAnimationStart(android.graphics.drawable.Drawable r1) {
                r0 = this;
                return
        }
    }

    void clearAnimationCallbacks();

    void registerAnimationCallback(@android.support.annotation.NonNull android.support.graphics.drawable.Animatable2Compat.AnimationCallback r1);

    boolean unregisterAnimationCallback(@android.support.annotation.NonNull android.support.graphics.drawable.Animatable2Compat.AnimationCallback r1);
}
