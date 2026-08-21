package android.support.v4.view;

public final class ViewPropertyAnimatorCompat {
    static final int LISTENER_TAG_ID = 2113929216;
    private static final java.lang.String TAG = "ViewAnimatorCompat";
    java.lang.Runnable mEndAction;
    int mOldLayerType;
    java.lang.Runnable mStartAction;
    private java.lang.ref.WeakReference<android.view.View> mView;



    static class ViewPropertyAnimatorListenerApi14 implements android.support.v4.view.ViewPropertyAnimatorListener {
        boolean mAnimEndCalled;
        android.support.v4.view.ViewPropertyAnimatorCompat mVpa;

        ViewPropertyAnimatorListenerApi14(android.support.v4.view.ViewPropertyAnimatorCompat r1) {
                r0 = this;
                r0.<init>()
                r0.mVpa = r1
                return
        }

        @Override
        public void onAnimationCancel(android.view.View r3) {
                r2 = this;
                r0 = 2113929216(0x7e000000, float:4.2535296E37)
                java.lang.Object r0 = r3.getTag(r0)
                boolean r1 = r0 instanceof android.support.v4.view.ViewPropertyAnimatorListener
                if (r1 == 0) goto Ld
                android.support.v4.view.ViewPropertyAnimatorListener r0 = (android.support.v4.view.ViewPropertyAnimatorListener) r0
                goto Le
            Ld:
                r0 = 0
            Le:
                if (r0 == 0) goto L13
                r0.onAnimationCancel(r3)
            L13:
                return
        }

        @Override
        public void onAnimationEnd(android.view.View r4) {
                r3 = this;
                android.support.v4.view.ViewPropertyAnimatorCompat r0 = r3.mVpa
                int r0 = r0.mOldLayerType
                r1 = -1
                r2 = 0
                if (r0 <= r1) goto L13
                android.support.v4.view.ViewPropertyAnimatorCompat r0 = r3.mVpa
                int r0 = r0.mOldLayerType
                r4.setLayerType(r0, r2)
                android.support.v4.view.ViewPropertyAnimatorCompat r0 = r3.mVpa
                r0.mOldLayerType = r1
            L13:
                int r0 = android.os.Build.VERSION.SDK_INT
                r1 = 16
                if (r0 >= r1) goto L1d
                boolean r0 = r3.mAnimEndCalled
                if (r0 != 0) goto L43
            L1d:
                android.support.v4.view.ViewPropertyAnimatorCompat r0 = r3.mVpa
                java.lang.Runnable r0 = r0.mEndAction
                if (r0 == 0) goto L2e
                android.support.v4.view.ViewPropertyAnimatorCompat r0 = r3.mVpa
                java.lang.Runnable r0 = r0.mEndAction
                android.support.v4.view.ViewPropertyAnimatorCompat r1 = r3.mVpa
                r1.mEndAction = r2
                r0.run()
            L2e:
                r0 = 2113929216(0x7e000000, float:4.2535296E37)
                java.lang.Object r0 = r4.getTag(r0)
                boolean r1 = r0 instanceof android.support.v4.view.ViewPropertyAnimatorListener
                if (r1 == 0) goto L3b
                r2 = r0
                android.support.v4.view.ViewPropertyAnimatorListener r2 = (android.support.v4.view.ViewPropertyAnimatorListener) r2
            L3b:
                if (r2 == 0) goto L40
                r2.onAnimationEnd(r4)
            L40:
                r4 = 1
                r3.mAnimEndCalled = r4
            L43:
                return
        }

        @Override
        public void onAnimationStart(android.view.View r4) {
                r3 = this;
                r0 = 0
                r3.mAnimEndCalled = r0
                android.support.v4.view.ViewPropertyAnimatorCompat r0 = r3.mVpa
                int r0 = r0.mOldLayerType
                r1 = 0
                r2 = -1
                if (r0 <= r2) goto Lf
                r0 = 2
                r4.setLayerType(r0, r1)
            Lf:
                android.support.v4.view.ViewPropertyAnimatorCompat r0 = r3.mVpa
                java.lang.Runnable r0 = r0.mStartAction
                if (r0 == 0) goto L20
                android.support.v4.view.ViewPropertyAnimatorCompat r0 = r3.mVpa
                java.lang.Runnable r0 = r0.mStartAction
                android.support.v4.view.ViewPropertyAnimatorCompat r2 = r3.mVpa
                r2.mStartAction = r1
                r0.run()
            L20:
                r0 = 2113929216(0x7e000000, float:4.2535296E37)
                java.lang.Object r0 = r4.getTag(r0)
                boolean r2 = r0 instanceof android.support.v4.view.ViewPropertyAnimatorListener
                if (r2 == 0) goto L2d
                r1 = r0
                android.support.v4.view.ViewPropertyAnimatorListener r1 = (android.support.v4.view.ViewPropertyAnimatorListener) r1
            L2d:
                if (r1 == 0) goto L32
                r1.onAnimationStart(r4)
            L32:
                return
        }
    }

    ViewPropertyAnimatorCompat(android.view.View r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.mStartAction = r0
            r1.mEndAction = r0
            r0 = -1
            r1.mOldLayerType = r0
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.mView = r0
            return
    }

    private void setListenerInternal(android.view.View r3, android.support.v4.view.ViewPropertyAnimatorListener r4) {
            r2 = this;
            if (r4 == 0) goto Lf
            android.view.ViewPropertyAnimator r0 = r3.animate()
            android.support.v4.view.ViewPropertyAnimatorCompat$1 r1 = new android.support.v4.view.ViewPropertyAnimatorCompat$1
            r1.<init>(r2, r4, r3)
            r0.setListener(r1)
            goto L17
        Lf:
            android.view.ViewPropertyAnimator r3 = r3.animate()
            r4 = 0
            r3.setListener(r4)
        L17:
            return
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat alpha(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.alpha(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat alphaBy(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.alphaBy(r2)
        L11:
            return r1
    }

    public void cancel() {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.cancel()
        L11:
            return
    }

    public long getDuration() {
            r2 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r2.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L13
            android.view.ViewPropertyAnimator r0 = r0.animate()
            long r0 = r0.getDuration()
            return r0
        L13:
            r0 = 0
            return r0
    }

    public android.view.animation.Interpolator getInterpolator() {
            r3 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r3.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L1b
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 18
            if (r1 < r2) goto L1b
            android.view.ViewPropertyAnimator r0 = r0.animate()
            android.animation.TimeInterpolator r0 = r0.getInterpolator()
            android.view.animation.Interpolator r0 = (android.view.animation.Interpolator) r0
            return r0
        L1b:
            r0 = 0
            return r0
    }

    public long getStartDelay() {
            r2 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r2.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L13
            android.view.ViewPropertyAnimator r0 = r0.animate()
            long r0 = r0.getStartDelay()
            return r0
        L13:
            r0 = 0
            return r0
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat rotation(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.rotation(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat rotationBy(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.rotationBy(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat rotationX(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.rotationX(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat rotationXBy(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.rotationXBy(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat rotationY(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.rotationY(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat rotationYBy(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.rotationYBy(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat scaleX(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.scaleX(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat scaleXBy(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.scaleXBy(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat scaleY(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.scaleY(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat scaleYBy(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.scaleYBy(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat setDuration(long r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.setDuration(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat setInterpolator(android.view.animation.Interpolator r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.setInterpolator(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat setListener(android.support.v4.view.ViewPropertyAnimatorListener r4) {
            r3 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r3.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L21
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            if (r1 < r2) goto L14
            r3.setListenerInternal(r0, r4)
            goto L21
        L14:
            r1 = 2113929216(0x7e000000, float:4.2535296E37)
            r0.setTag(r1, r4)
            android.support.v4.view.ViewPropertyAnimatorCompat$ViewPropertyAnimatorListenerApi14 r4 = new android.support.v4.view.ViewPropertyAnimatorCompat$ViewPropertyAnimatorListenerApi14
            r4.<init>(r3)
            r3.setListenerInternal(r0, r4)
        L21:
            return r3
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat setStartDelay(long r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.setStartDelay(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat setUpdateListener(android.support.v4.view.ViewPropertyAnimatorUpdateListener r4) {
            r3 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r3.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L1f
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            if (r1 < r2) goto L1f
            r1 = 0
            if (r4 == 0) goto L18
            android.support.v4.view.ViewPropertyAnimatorCompat$2 r1 = new android.support.v4.view.ViewPropertyAnimatorCompat$2
            r1.<init>(r3, r4, r0)
        L18:
            android.view.ViewPropertyAnimator r4 = r0.animate()
            r4.setUpdateListener(r1)
        L1f:
            return r3
    }

    public void start() {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.start()
        L11:
            return
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat translationX(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.translationX(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat translationXBy(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.translationXBy(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat translationY(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.translationY(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat translationYBy(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.translationYBy(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat translationZ(float r4) {
            r3 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r3.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L17
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L17
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.translationZ(r4)
        L17:
            return r3
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat translationZBy(float r4) {
            r3 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r3.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L17
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L17
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.translationZBy(r4)
        L17:
            return r3
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat withEndAction(java.lang.Runnable r4) {
            r3 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r3.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L22
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            if (r1 < r2) goto L18
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.withEndAction(r4)
            goto L22
        L18:
            android.support.v4.view.ViewPropertyAnimatorCompat$ViewPropertyAnimatorListenerApi14 r1 = new android.support.v4.view.ViewPropertyAnimatorCompat$ViewPropertyAnimatorListenerApi14
            r1.<init>(r3)
            r3.setListenerInternal(r0, r1)
            r3.mEndAction = r4
        L22:
            return r3
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat withLayer() {
            r3 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r3.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L26
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            if (r1 < r2) goto L18
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.withLayer()
            goto L26
        L18:
            int r1 = r0.getLayerType()
            r3.mOldLayerType = r1
            android.support.v4.view.ViewPropertyAnimatorCompat$ViewPropertyAnimatorListenerApi14 r1 = new android.support.v4.view.ViewPropertyAnimatorCompat$ViewPropertyAnimatorListenerApi14
            r1.<init>(r3)
            r3.setListenerInternal(r0, r1)
        L26:
            return r3
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat withStartAction(java.lang.Runnable r4) {
            r3 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r3.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L22
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            if (r1 < r2) goto L18
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.withStartAction(r4)
            goto L22
        L18:
            android.support.v4.view.ViewPropertyAnimatorCompat$ViewPropertyAnimatorListenerApi14 r1 = new android.support.v4.view.ViewPropertyAnimatorCompat$ViewPropertyAnimatorListenerApi14
            r1.<init>(r3)
            r3.setListenerInternal(r0, r1)
            r3.mStartAction = r4
        L22:
            return r3
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat x(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.x(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat xBy(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.xBy(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat y(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.y(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat yBy(float r2) {
            r1 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r1.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L11
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.yBy(r2)
        L11:
            return r1
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat z(float r4) {
            r3 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r3.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L17
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L17
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.z(r4)
        L17:
            return r3
    }

    public android.support.v4.view.ViewPropertyAnimatorCompat zBy(float r4) {
            r3 = this;
            java.lang.ref.WeakReference<android.view.View> r0 = r3.mView
            java.lang.Object r0 = r0.get()
            android.view.View r0 = (android.view.View) r0
            if (r0 == 0) goto L17
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L17
            android.view.ViewPropertyAnimator r0 = r0.animate()
            r0.zBy(r4)
        L17:
            return r3
    }
}
