package android.support.transition;

class AnimatorUtils {

    interface AnimatorPauseListenerCompat {
        void onAnimationPause(android.animation.Animator r1);

        void onAnimationResume(android.animation.Animator r1);
    }

    private AnimatorUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    static void addPauseListener(android.animation.Animator r2, android.animation.AnimatorListenerAdapter r3) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L9
            r2.addPauseListener(r3)
        L9:
            return
    }

    static void pause(android.animation.Animator r5) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto La
            r5.pause()
            goto L29
        La:
            java.util.ArrayList r0 = r5.getListeners()
            if (r0 == 0) goto L29
            r1 = 0
            int r2 = r0.size()
        L15:
            if (r1 >= r2) goto L29
            java.lang.Object r3 = r0.get(r1)
            android.animation.Animator$AnimatorListener r3 = (android.animation.Animator.AnimatorListener) r3
            boolean r4 = r3 instanceof android.support.transition.AnimatorUtils.AnimatorPauseListenerCompat
            if (r4 == 0) goto L26
            android.support.transition.AnimatorUtils$AnimatorPauseListenerCompat r3 = (android.support.transition.AnimatorUtils.AnimatorPauseListenerCompat) r3
            r3.onAnimationPause(r5)
        L26:
            int r1 = r1 + 1
            goto L15
        L29:
            return
    }

    static void resume(android.animation.Animator r5) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto La
            r5.resume()
            goto L29
        La:
            java.util.ArrayList r0 = r5.getListeners()
            if (r0 == 0) goto L29
            r1 = 0
            int r2 = r0.size()
        L15:
            if (r1 >= r2) goto L29
            java.lang.Object r3 = r0.get(r1)
            android.animation.Animator$AnimatorListener r3 = (android.animation.Animator.AnimatorListener) r3
            boolean r4 = r3 instanceof android.support.transition.AnimatorUtils.AnimatorPauseListenerCompat
            if (r4 == 0) goto L26
            android.support.transition.AnimatorUtils$AnimatorPauseListenerCompat r3 = (android.support.transition.AnimatorUtils.AnimatorPauseListenerCompat) r3
            r3.onAnimationResume(r5)
        L26:
            int r1 = r1 + 1
            goto L15
        L29:
            return
    }
}
