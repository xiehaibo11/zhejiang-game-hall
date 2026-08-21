package android.support.transition;

public abstract class Visibility extends android.support.transition.Transition {
    public static final int MODE_IN = 1;
    public static final int MODE_OUT = 2;
    private static final java.lang.String PROPNAME_PARENT = "android:visibility:parent";
    private static final java.lang.String PROPNAME_SCREEN_LOCATION = "android:visibility:screenLocation";
    static final java.lang.String PROPNAME_VISIBILITY = "android:visibility:visibility";
    private static final java.lang.String[] sTransitionProperties = null;
    private int mMode;


    private static class DisappearListener extends android.animation.AnimatorListenerAdapter implements android.support.transition.Transition.TransitionListener, android.support.transition.AnimatorUtils.AnimatorPauseListenerCompat {
        boolean mCanceled;
        private final int mFinalVisibility;
        private boolean mLayoutSuppressed;
        private final android.view.ViewGroup mParent;
        private final boolean mSuppressLayout;
        private final android.view.View mView;

        DisappearListener(android.view.View r2, int r3, boolean r4) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.mCanceled = r0
                r1.mView = r2
                r1.mFinalVisibility = r3
                android.view.ViewParent r2 = r2.getParent()
                android.view.ViewGroup r2 = (android.view.ViewGroup) r2
                r1.mParent = r2
                r1.mSuppressLayout = r4
                r2 = 1
                r1.suppressLayout(r2)
                return
        }

        private void hideViewWhenNotCanceled() {
                r2 = this;
                boolean r0 = r2.mCanceled
                if (r0 != 0) goto L12
                android.view.View r0 = r2.mView
                int r1 = r2.mFinalVisibility
                android.support.transition.ViewUtils.setTransitionVisibility(r0, r1)
                android.view.ViewGroup r0 = r2.mParent
                if (r0 == 0) goto L12
                r0.invalidate()
            L12:
                r0 = 0
                r2.suppressLayout(r0)
                return
        }

        private void suppressLayout(boolean r2) {
                r1 = this;
                boolean r0 = r1.mSuppressLayout
                if (r0 == 0) goto L11
                boolean r0 = r1.mLayoutSuppressed
                if (r0 == r2) goto L11
                android.view.ViewGroup r0 = r1.mParent
                if (r0 == 0) goto L11
                r1.mLayoutSuppressed = r2
                android.support.transition.ViewGroupUtils.suppressLayout(r0, r2)
            L11:
                return
        }

        @Override
        public void onAnimationCancel(android.animation.Animator r1) {
                r0 = this;
                r1 = 1
                r0.mCanceled = r1
                return
        }

        @Override
        public void onAnimationEnd(android.animation.Animator r1) {
                r0 = this;
                r0.hideViewWhenNotCanceled()
                return
        }

        @Override
        public void onAnimationPause(android.animation.Animator r2) {
                r1 = this;
                boolean r2 = r1.mCanceled
                if (r2 != 0) goto Lb
                android.view.View r2 = r1.mView
                int r0 = r1.mFinalVisibility
                android.support.transition.ViewUtils.setTransitionVisibility(r2, r0)
            Lb:
                return
        }

        @Override
        public void onAnimationRepeat(android.animation.Animator r1) {
                r0 = this;
                return
        }

        @Override
        public void onAnimationResume(android.animation.Animator r2) {
                r1 = this;
                boolean r2 = r1.mCanceled
                if (r2 != 0) goto La
                android.view.View r2 = r1.mView
                r0 = 0
                android.support.transition.ViewUtils.setTransitionVisibility(r2, r0)
            La:
                return
        }

        @Override
        public void onAnimationStart(android.animation.Animator r1) {
                r0 = this;
                return
        }

        @Override
        public void onTransitionCancel(android.support.transition.Transition r1) {
                r0 = this;
                return
        }

        @Override
        public void onTransitionEnd(android.support.transition.Transition r1) {
                r0 = this;
                r0.hideViewWhenNotCanceled()
                r1.removeListener(r0)
                return
        }

        @Override
        public void onTransitionPause(android.support.transition.Transition r1) {
                r0 = this;
                r1 = 0
                r0.suppressLayout(r1)
                return
        }

        @Override
        public void onTransitionResume(android.support.transition.Transition r1) {
                r0 = this;
                r1 = 1
                r0.suppressLayout(r1)
                return
        }

        @Override
        public void onTransitionStart(android.support.transition.Transition r1) {
                r0 = this;
                return
        }
    }

    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface Mode {
    }

    private static class VisibilityInfo {
        android.view.ViewGroup mEndParent;
        int mEndVisibility;
        boolean mFadeIn;
        android.view.ViewGroup mStartParent;
        int mStartVisibility;
        boolean mVisibilityChange;

        VisibilityInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.lang.String r0 = "android:visibility:visibility"
            java.lang.String r1 = "android:visibility:parent"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1}
            android.support.transition.Visibility.sTransitionProperties = r0
            return
    }

    public Visibility() {
            r1 = this;
            r1.<init>()
            r0 = 3
            r1.mMode = r0
            return
    }

    public Visibility(android.content.Context r3, android.util.AttributeSet r4) {
            r2 = this;
            r2.<init>(r3, r4)
            r0 = 3
            r2.mMode = r0
            int[] r0 = android.support.transition.Styleable.VISIBILITY_TRANSITION
            android.content.res.TypedArray r3 = r3.obtainStyledAttributes(r4, r0)
            android.content.res.XmlResourceParser r4 = (android.content.res.XmlResourceParser) r4
            r0 = 0
            java.lang.String r1 = "transitionVisibilityMode"
            int r4 = android.support.v4.content.res.TypedArrayUtils.getNamedInt(r3, r4, r1, r0, r0)
            r3.recycle()
            if (r4 == 0) goto L1d
            r2.setMode(r4)
        L1d:
            return
    }

    private void captureValues(android.support.transition.TransitionValues r4) {
            r3 = this;
            android.view.View r0 = r4.view
            int r0 = r0.getVisibility()
            java.util.Map<java.lang.String, java.lang.Object> r1 = r4.values
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            java.lang.String r2 = "android:visibility:visibility"
            r1.put(r2, r0)
            java.util.Map<java.lang.String, java.lang.Object> r0 = r4.values
            android.view.View r1 = r4.view
            android.view.ViewParent r1 = r1.getParent()
            java.lang.String r2 = "android:visibility:parent"
            r0.put(r2, r1)
            r0 = 2
            int[] r0 = new int[r0]
            android.view.View r1 = r4.view
            r1.getLocationOnScreen(r0)
            java.util.Map<java.lang.String, java.lang.Object> r4 = r4.values
            java.lang.String r1 = "android:visibility:screenLocation"
            r4.put(r1, r0)
            return
    }

    private android.support.transition.Visibility.VisibilityInfo getVisibilityChangeInfo(android.support.transition.TransitionValues r8, android.support.transition.TransitionValues r9) {
            r7 = this;
            android.support.transition.Visibility$VisibilityInfo r0 = new android.support.transition.Visibility$VisibilityInfo
            r0.<init>()
            r1 = 0
            r0.mVisibilityChange = r1
            r0.mFadeIn = r1
            java.lang.String r2 = "android:visibility:parent"
            r3 = 0
            r4 = -1
            java.lang.String r5 = "android:visibility:visibility"
            if (r8 == 0) goto L33
            java.util.Map<java.lang.String, java.lang.Object> r6 = r8.values
            boolean r6 = r6.containsKey(r5)
            if (r6 == 0) goto L33
            java.util.Map<java.lang.String, java.lang.Object> r6 = r8.values
            java.lang.Object r6 = r6.get(r5)
            java.lang.Integer r6 = (java.lang.Integer) r6
            int r6 = r6.intValue()
            r0.mStartVisibility = r6
            java.util.Map<java.lang.String, java.lang.Object> r6 = r8.values
            java.lang.Object r6 = r6.get(r2)
            android.view.ViewGroup r6 = (android.view.ViewGroup) r6
            r0.mStartParent = r6
            goto L37
        L33:
            r0.mStartVisibility = r4
            r0.mStartParent = r3
        L37:
            if (r9 == 0) goto L5a
            java.util.Map<java.lang.String, java.lang.Object> r6 = r9.values
            boolean r6 = r6.containsKey(r5)
            if (r6 == 0) goto L5a
            java.util.Map<java.lang.String, java.lang.Object> r3 = r9.values
            java.lang.Object r3 = r3.get(r5)
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r3 = r3.intValue()
            r0.mEndVisibility = r3
            java.util.Map<java.lang.String, java.lang.Object> r3 = r9.values
            java.lang.Object r2 = r3.get(r2)
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            r0.mEndParent = r2
            goto L5e
        L5a:
            r0.mEndVisibility = r4
            r0.mEndParent = r3
        L5e:
            r2 = 1
            if (r8 == 0) goto L9a
            if (r9 == 0) goto L9a
            int r8 = r0.mStartVisibility
            int r9 = r0.mEndVisibility
            if (r8 != r9) goto L70
            android.view.ViewGroup r8 = r0.mStartParent
            android.view.ViewGroup r9 = r0.mEndParent
            if (r8 != r9) goto L70
            return r0
        L70:
            int r8 = r0.mStartVisibility
            int r9 = r0.mEndVisibility
            if (r8 == r9) goto L88
            int r8 = r0.mStartVisibility
            if (r8 != 0) goto L7f
            r0.mFadeIn = r1
            r0.mVisibilityChange = r2
            goto Laf
        L7f:
            int r8 = r0.mEndVisibility
            if (r8 != 0) goto Laf
            r0.mFadeIn = r2
            r0.mVisibilityChange = r2
            goto Laf
        L88:
            android.view.ViewGroup r8 = r0.mEndParent
            if (r8 != 0) goto L91
            r0.mFadeIn = r1
            r0.mVisibilityChange = r2
            goto Laf
        L91:
            android.view.ViewGroup r8 = r0.mStartParent
            if (r8 != 0) goto Laf
            r0.mFadeIn = r2
            r0.mVisibilityChange = r2
            goto Laf
        L9a:
            if (r8 != 0) goto La5
            int r8 = r0.mEndVisibility
            if (r8 != 0) goto La5
            r0.mFadeIn = r2
            r0.mVisibilityChange = r2
            goto Laf
        La5:
            if (r9 != 0) goto Laf
            int r8 = r0.mStartVisibility
            if (r8 != 0) goto Laf
            r0.mFadeIn = r1
            r0.mVisibilityChange = r2
        Laf:
            return r0
    }

    @Override
    public void captureEndValues(android.support.transition.TransitionValues r1) {
            r0 = this;
            r0.captureValues(r1)
            return
    }

    @Override
    public void captureStartValues(android.support.transition.TransitionValues r1) {
            r0 = this;
            r0.captureValues(r1)
            return
    }

    @Override
    public android.animation.Animator createAnimator(android.view.ViewGroup r9, android.support.transition.TransitionValues r10, android.support.transition.TransitionValues r11) {
            r8 = this;
            android.support.transition.Visibility$VisibilityInfo r0 = r8.getVisibilityChangeInfo(r10, r11)
            boolean r1 = r0.mVisibilityChange
            if (r1 == 0) goto L2e
            android.view.ViewGroup r1 = r0.mStartParent
            if (r1 != 0) goto L10
            android.view.ViewGroup r1 = r0.mEndParent
            if (r1 == 0) goto L2e
        L10:
            boolean r1 = r0.mFadeIn
            if (r1 == 0) goto L21
            int r5 = r0.mStartVisibility
            int r7 = r0.mEndVisibility
            r2 = r8
            r3 = r9
            r4 = r10
            r6 = r11
            android.animation.Animator r9 = r2.onAppear(r3, r4, r5, r6, r7)
            return r9
        L21:
            int r3 = r0.mStartVisibility
            int r5 = r0.mEndVisibility
            r0 = r8
            r1 = r9
            r2 = r10
            r4 = r11
            android.animation.Animator r9 = r0.onDisappear(r1, r2, r3, r4, r5)
            return r9
        L2e:
            r9 = 0
            return r9
    }

    public int getMode() {
            r1 = this;
            int r0 = r1.mMode
            return r0
    }

    @Override
    public java.lang.String[] getTransitionProperties() {
            r1 = this;
            java.lang.String[] r0 = android.support.transition.Visibility.sTransitionProperties
            return r0
    }

    @Override
    public boolean isTransitionRequired(android.support.transition.TransitionValues r5, android.support.transition.TransitionValues r6) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L6
            if (r6 != 0) goto L6
            return r0
        L6:
            if (r5 == 0) goto L1b
            if (r6 == 0) goto L1b
            java.util.Map<java.lang.String, java.lang.Object> r1 = r6.values
            java.lang.String r2 = "android:visibility:visibility"
            boolean r1 = r1.containsKey(r2)
            java.util.Map<java.lang.String, java.lang.Object> r3 = r5.values
            boolean r2 = r3.containsKey(r2)
            if (r1 == r2) goto L1b
            return r0
        L1b:
            android.support.transition.Visibility$VisibilityInfo r5 = r4.getVisibilityChangeInfo(r5, r6)
            boolean r6 = r5.mVisibilityChange
            if (r6 == 0) goto L2c
            int r6 = r5.mStartVisibility
            if (r6 == 0) goto L2b
            int r5 = r5.mEndVisibility
            if (r5 != 0) goto L2c
        L2b:
            r0 = 1
        L2c:
            return r0
    }

    public boolean isVisible(android.support.transition.TransitionValues r4) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.util.Map<java.lang.String, java.lang.Object> r1 = r4.values
            java.lang.String r2 = "android:visibility:visibility"
            java.lang.Object r1 = r1.get(r2)
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            java.util.Map<java.lang.String, java.lang.Object> r4 = r4.values
            java.lang.String r2 = "android:visibility:parent"
            java.lang.Object r4 = r4.get(r2)
            android.view.View r4 = (android.view.View) r4
            if (r1 != 0) goto L21
            if (r4 == 0) goto L21
            r0 = 1
        L21:
            return r0
    }

    public android.animation.Animator onAppear(android.view.ViewGroup r3, android.support.transition.TransitionValues r4, int r5, android.support.transition.TransitionValues r6, int r7) {
            r2 = this;
            int r5 = r2.mMode
            r7 = 1
            r5 = r5 & r7
            r0 = 0
            if (r5 != r7) goto L2d
            if (r6 != 0) goto La
            goto L2d
        La:
            if (r4 != 0) goto L26
            android.view.View r5 = r6.view
            android.view.ViewParent r5 = r5.getParent()
            android.view.View r5 = (android.view.View) r5
            r7 = 0
            android.support.transition.TransitionValues r1 = r2.getMatchedTransitionValues(r5, r7)
            android.support.transition.TransitionValues r5 = r2.getTransitionValues(r5, r7)
            android.support.transition.Visibility$VisibilityInfo r5 = r2.getVisibilityChangeInfo(r1, r5)
            boolean r5 = r5.mVisibilityChange
            if (r5 == 0) goto L26
            return r0
        L26:
            android.view.View r5 = r6.view
            android.animation.Animator r3 = r2.onAppear(r3, r5, r4, r6)
            return r3
        L2d:
            return r0
    }

    public android.animation.Animator onAppear(android.view.ViewGroup r1, android.view.View r2, android.support.transition.TransitionValues r3, android.support.transition.TransitionValues r4) {
            r0 = this;
            r1 = 0
            return r1
    }

    public android.animation.Animator onDisappear(android.view.ViewGroup r7, android.support.transition.TransitionValues r8, int r9, android.support.transition.TransitionValues r10, int r11) {
            r6 = this;
            int r9 = r6.mMode
            r0 = 2
            r9 = r9 & r0
            r1 = 0
            if (r9 == r0) goto L8
            return r1
        L8:
            if (r8 == 0) goto Ld
            android.view.View r9 = r8.view
            goto Le
        Ld:
            r9 = r1
        Le:
            if (r10 == 0) goto L13
            android.view.View r2 = r10.view
            goto L14
        L13:
            r2 = r1
        L14:
            r3 = 1
            if (r2 == 0) goto L37
            android.view.ViewParent r4 = r2.getParent()
            if (r4 != 0) goto L1e
            goto L37
        L1e:
            r4 = 4
            if (r11 != r4) goto L22
            goto L24
        L22:
            if (r9 != r2) goto L27
        L24:
            r9 = r1
            goto L84
        L27:
            boolean r2 = r6.mCanRemoveViews
            if (r2 == 0) goto L2c
            goto L44
        L2c:
            android.view.ViewParent r2 = r9.getParent()
            android.view.View r2 = (android.view.View) r2
            android.view.View r9 = android.support.transition.TransitionUtils.copyViewImage(r7, r9, r2)
            goto L3a
        L37:
            if (r2 == 0) goto L3c
            r9 = r2
        L3a:
            r2 = r1
            goto L84
        L3c:
            if (r9 == 0) goto L82
            android.view.ViewParent r2 = r9.getParent()
            if (r2 != 0) goto L45
        L44:
            goto L3a
        L45:
            android.view.ViewParent r2 = r9.getParent()
            boolean r2 = r2 instanceof android.view.View
            if (r2 == 0) goto L82
            android.view.ViewParent r2 = r9.getParent()
            android.view.View r2 = (android.view.View) r2
            android.support.transition.TransitionValues r4 = r6.getTransitionValues(r2, r3)
            android.support.transition.TransitionValues r5 = r6.getMatchedTransitionValues(r2, r3)
            android.support.transition.Visibility$VisibilityInfo r4 = r6.getVisibilityChangeInfo(r4, r5)
            boolean r4 = r4.mVisibilityChange
            if (r4 != 0) goto L68
            android.view.View r9 = android.support.transition.TransitionUtils.copyViewImage(r7, r9, r2)
            goto L3a
        L68:
            android.view.ViewParent r4 = r2.getParent()
            if (r4 != 0) goto L80
            int r2 = r2.getId()
            r4 = -1
            if (r2 == r4) goto L80
            android.view.View r2 = r7.findViewById(r2)
            if (r2 == 0) goto L80
            boolean r2 = r6.mCanRemoveViews
            if (r2 == 0) goto L80
            goto L3a
        L80:
            r9 = r1
            goto L3a
        L82:
            r9 = r1
            r2 = r9
        L84:
            r4 = 0
            if (r9 == 0) goto Lce
            if (r8 == 0) goto Lce
            java.util.Map<java.lang.String, java.lang.Object> r11 = r8.values
            java.lang.String r1 = "android:visibility:screenLocation"
            java.lang.Object r11 = r11.get(r1)
            int[] r11 = (int[]) r11
            int[] r11 = (int[]) r11
            r1 = r11[r4]
            r11 = r11[r3]
            int[] r0 = new int[r0]
            r7.getLocationOnScreen(r0)
            r2 = r0[r4]
            int r1 = r1 - r2
            int r2 = r9.getLeft()
            int r1 = r1 - r2
            r9.offsetLeftAndRight(r1)
            r0 = r0[r3]
            int r11 = r11 - r0
            int r0 = r9.getTop()
            int r11 = r11 - r0
            r9.offsetTopAndBottom(r11)
            android.support.transition.ViewGroupOverlayImpl r11 = android.support.transition.ViewGroupUtils.getOverlay(r7)
            r11.add(r9)
            android.animation.Animator r7 = r6.onDisappear(r7, r9, r8, r10)
            if (r7 != 0) goto Lc5
            r11.remove(r9)
            goto Lcd
        Lc5:
            android.support.transition.Visibility$1 r8 = new android.support.transition.Visibility$1
            r8.<init>(r6, r11, r9)
            r7.addListener(r8)
        Lcd:
            return r7
        Lce:
            if (r2 == 0) goto Lf0
            int r9 = r2.getVisibility()
            android.support.transition.ViewUtils.setTransitionVisibility(r2, r4)
            android.animation.Animator r7 = r6.onDisappear(r7, r2, r8, r10)
            if (r7 == 0) goto Lec
            android.support.transition.Visibility$DisappearListener r8 = new android.support.transition.Visibility$DisappearListener
            r8.<init>(r2, r11, r3)
            r7.addListener(r8)
            android.support.transition.AnimatorUtils.addPauseListener(r7, r8)
            r6.addListener(r8)
            goto Lef
        Lec:
            android.support.transition.ViewUtils.setTransitionVisibility(r2, r9)
        Lef:
            return r7
        Lf0:
            return r1
    }

    public android.animation.Animator onDisappear(android.view.ViewGroup r1, android.view.View r2, android.support.transition.TransitionValues r3, android.support.transition.TransitionValues r4) {
            r0 = this;
            r1 = 0
            return r1
    }

    public void setMode(int r2) {
            r1 = this;
            r0 = r2 & (-4)
            if (r0 != 0) goto L7
            r1.mMode = r2
            return
        L7:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Only MODE_IN and MODE_OUT flags are allowed"
            r2.<init>(r0)
            throw r2
    }
}
