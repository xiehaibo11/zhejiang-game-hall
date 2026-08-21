package android.support.transition;

class TranslationAnimationCreator {

    private static class TransitionPositionListener extends android.animation.AnimatorListenerAdapter {
        private final android.view.View mMovingView;
        private float mPausedX;
        private float mPausedY;
        private final int mStartX;
        private final int mStartY;
        private final float mTerminalX;
        private final float mTerminalY;
        private int[] mTransitionPosition;
        private final android.view.View mViewInHierarchy;

        TransitionPositionListener(android.view.View r1, android.view.View r2, int r3, int r4, float r5, float r6) {
                r0 = this;
                r0.<init>()
                r0.mMovingView = r1
                r0.mViewInHierarchy = r2
                float r1 = r1.getTranslationX()
                int r1 = java.lang.Math.round(r1)
                int r3 = r3 - r1
                r0.mStartX = r3
                android.view.View r1 = r0.mMovingView
                float r1 = r1.getTranslationY()
                int r1 = java.lang.Math.round(r1)
                int r4 = r4 - r1
                r0.mStartY = r4
                r0.mTerminalX = r5
                r0.mTerminalY = r6
                android.view.View r1 = r0.mViewInHierarchy
                int r2 = android.support.transition.R.id.transition_position
                java.lang.Object r1 = r1.getTag(r2)
                int[] r1 = (int[]) r1
                int[] r1 = (int[]) r1
                r0.mTransitionPosition = r1
                if (r1 == 0) goto L3b
                android.view.View r1 = r0.mViewInHierarchy
                int r2 = android.support.transition.R.id.transition_position
                r3 = 0
                r1.setTag(r2, r3)
            L3b:
                return
        }

        @Override
        public void onAnimationCancel(android.animation.Animator r4) {
                r3 = this;
                int[] r4 = r3.mTransitionPosition
                if (r4 != 0) goto L9
                r4 = 2
                int[] r4 = new int[r4]
                r3.mTransitionPosition = r4
            L9:
                int[] r4 = r3.mTransitionPosition
                r0 = 0
                int r1 = r3.mStartX
                float r1 = (float) r1
                android.view.View r2 = r3.mMovingView
                float r2 = r2.getTranslationX()
                float r1 = r1 + r2
                int r1 = java.lang.Math.round(r1)
                r4[r0] = r1
                int[] r4 = r3.mTransitionPosition
                r0 = 1
                int r1 = r3.mStartY
                float r1 = (float) r1
                android.view.View r2 = r3.mMovingView
                float r2 = r2.getTranslationY()
                float r1 = r1 + r2
                int r1 = java.lang.Math.round(r1)
                r4[r0] = r1
                android.view.View r4 = r3.mViewInHierarchy
                int r0 = android.support.transition.R.id.transition_position
                int[] r1 = r3.mTransitionPosition
                r4.setTag(r0, r1)
                return
        }

        @Override
        public void onAnimationEnd(android.animation.Animator r2) {
                r1 = this;
                android.view.View r2 = r1.mMovingView
                float r0 = r1.mTerminalX
                r2.setTranslationX(r0)
                android.view.View r2 = r1.mMovingView
                float r0 = r1.mTerminalY
                r2.setTranslationY(r0)
                return
        }

        @Override
        public void onAnimationPause(android.animation.Animator r2) {
                r1 = this;
                android.view.View r2 = r1.mMovingView
                float r2 = r2.getTranslationX()
                r1.mPausedX = r2
                android.view.View r2 = r1.mMovingView
                float r2 = r2.getTranslationY()
                r1.mPausedY = r2
                android.view.View r2 = r1.mMovingView
                float r0 = r1.mTerminalX
                r2.setTranslationX(r0)
                android.view.View r2 = r1.mMovingView
                float r0 = r1.mTerminalY
                r2.setTranslationY(r0)
                return
        }

        @Override
        public void onAnimationResume(android.animation.Animator r2) {
                r1 = this;
                android.view.View r2 = r1.mMovingView
                float r0 = r1.mPausedX
                r2.setTranslationX(r0)
                android.view.View r2 = r1.mMovingView
                float r0 = r1.mPausedY
                r2.setTranslationY(r0)
                return
        }
    }

    private TranslationAnimationCreator() {
            r0 = this;
            r0.<init>()
            return
    }

    static android.animation.Animator createAnimation(android.view.View r14, android.support.transition.TransitionValues r15, int r16, int r17, float r18, float r19, float r20, float r21, android.animation.TimeInterpolator r22) {
            r0 = r14
            r1 = r15
            float r2 = r14.getTranslationX()
            float r3 = r14.getTranslationY()
            android.view.View r4 = r1.view
            int r5 = android.support.transition.R.id.transition_position
            java.lang.Object r4 = r4.getTag(r5)
            int[] r4 = (int[]) r4
            int[] r4 = (int[]) r4
            r5 = 1
            r6 = 0
            if (r4 == 0) goto L27
            r7 = r4[r6]
            int r7 = r7 - r16
            float r7 = (float) r7
            float r7 = r7 + r2
            r4 = r4[r5]
            int r4 = r4 - r17
            float r4 = (float) r4
            float r4 = r4 + r3
            goto L2b
        L27:
            r7 = r18
            r4 = r19
        L2b:
            float r8 = r7 - r2
            int r8 = java.lang.Math.round(r8)
            int r8 = r16 + r8
            float r9 = r4 - r3
            int r9 = java.lang.Math.round(r9)
            int r9 = r17 + r9
            r14.setTranslationX(r7)
            r14.setTranslationY(r4)
            int r10 = (r7 > r20 ? 1 : (r7 == r20 ? 0 : -1))
            if (r10 != 0) goto L4b
            int r10 = (r4 > r21 ? 1 : (r4 == r21 ? 0 : -1))
            if (r10 != 0) goto L4b
            r0 = 0
            return r0
        L4b:
            r10 = 2
            android.animation.PropertyValuesHolder[] r11 = new android.animation.PropertyValuesHolder[r10]
            android.util.Property r12 = android.view.View.TRANSLATION_X
            float[] r13 = new float[r10]
            r13[r6] = r7
            r13[r5] = r20
            android.animation.PropertyValuesHolder r7 = android.animation.PropertyValuesHolder.ofFloat(r12, r13)
            r11[r6] = r7
            android.util.Property r7 = android.view.View.TRANSLATION_Y
            float[] r10 = new float[r10]
            r10[r6] = r4
            r10[r5] = r21
            android.animation.PropertyValuesHolder r4 = android.animation.PropertyValuesHolder.ofFloat(r7, r10)
            r11[r5] = r4
            android.animation.ObjectAnimator r4 = android.animation.ObjectAnimator.ofPropertyValuesHolder(r14, r11)
            android.support.transition.TranslationAnimationCreator$TransitionPositionListener r5 = new android.support.transition.TranslationAnimationCreator$TransitionPositionListener
            android.view.View r1 = r1.view
            r15 = r5
            r16 = r14
            r17 = r1
            r18 = r8
            r19 = r9
            r20 = r2
            r21 = r3
            r15.<init>(r16, r17, r18, r19, r20, r21)
            r4.addListener(r5)
            android.support.transition.AnimatorUtils.addPauseListener(r4, r5)
            r0 = r22
            r4.setInterpolator(r0)
            return r4
    }
}
