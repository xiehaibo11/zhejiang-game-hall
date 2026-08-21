package android.support.v7.view;

@android.support.annotation.RestrictTo({android.support.annotation.RestrictTo.Scope.LIBRARY_GROUP})
public class ViewPropertyAnimatorCompatSet {
    final java.util.ArrayList<android.support.v4.view.ViewPropertyAnimatorCompat> mAnimators;
    private long mDuration;
    private android.view.animation.Interpolator mInterpolator;
    private boolean mIsStarted;
    android.support.v4.view.ViewPropertyAnimatorListener mListener;
    private final android.support.v4.view.ViewPropertyAnimatorListenerAdapter mProxyListener;


    public ViewPropertyAnimatorCompatSet() {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.mDuration = r0
            android.support.v7.view.ViewPropertyAnimatorCompatSet$1 r0 = new android.support.v7.view.ViewPropertyAnimatorCompatSet$1
            r0.<init>(r2)
            r2.mProxyListener = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.mAnimators = r0
            return
    }

    public void cancel() {
            r2 = this;
            boolean r0 = r2.mIsStarted
            if (r0 != 0) goto L5
            return
        L5:
            java.util.ArrayList<android.support.v4.view.ViewPropertyAnimatorCompat> r0 = r2.mAnimators
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r0.next()
            android.support.v4.view.ViewPropertyAnimatorCompat r1 = (android.support.v4.view.ViewPropertyAnimatorCompat) r1
            r1.cancel()
            goto Lb
        L1b:
            r0 = 0
            r2.mIsStarted = r0
            return
    }

    void onAnimationsEnded() {
            r1 = this;
            r0 = 0
            r1.mIsStarted = r0
            return
    }

    public android.support.v7.view.ViewPropertyAnimatorCompatSet play(android.support.v4.view.ViewPropertyAnimatorCompat r2) {
            r1 = this;
            boolean r0 = r1.mIsStarted
            if (r0 != 0) goto L9
            java.util.ArrayList<android.support.v4.view.ViewPropertyAnimatorCompat> r0 = r1.mAnimators
            r0.add(r2)
        L9:
            return r1
    }

    public android.support.v7.view.ViewPropertyAnimatorCompatSet playSequentially(android.support.v4.view.ViewPropertyAnimatorCompat r3, android.support.v4.view.ViewPropertyAnimatorCompat r4) {
            r2 = this;
            java.util.ArrayList<android.support.v4.view.ViewPropertyAnimatorCompat> r0 = r2.mAnimators
            r0.add(r3)
            long r0 = r3.getDuration()
            r4.setStartDelay(r0)
            java.util.ArrayList<android.support.v4.view.ViewPropertyAnimatorCompat> r3 = r2.mAnimators
            r3.add(r4)
            return r2
    }

    public android.support.v7.view.ViewPropertyAnimatorCompatSet setDuration(long r2) {
            r1 = this;
            boolean r0 = r1.mIsStarted
            if (r0 != 0) goto L6
            r1.mDuration = r2
        L6:
            return r1
    }

    public android.support.v7.view.ViewPropertyAnimatorCompatSet setInterpolator(android.view.animation.Interpolator r2) {
            r1 = this;
            boolean r0 = r1.mIsStarted
            if (r0 != 0) goto L6
            r1.mInterpolator = r2
        L6:
            return r1
    }

    public android.support.v7.view.ViewPropertyAnimatorCompatSet setListener(android.support.v4.view.ViewPropertyAnimatorListener r2) {
            r1 = this;
            boolean r0 = r1.mIsStarted
            if (r0 != 0) goto L6
            r1.mListener = r2
        L6:
            return r1
    }

    public void start() {
            r7 = this;
            boolean r0 = r7.mIsStarted
            if (r0 == 0) goto L5
            return
        L5:
            java.util.ArrayList<android.support.v4.view.ViewPropertyAnimatorCompat> r0 = r7.mAnimators
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L36
            java.lang.Object r1 = r0.next()
            android.support.v4.view.ViewPropertyAnimatorCompat r1 = (android.support.v4.view.ViewPropertyAnimatorCompat) r1
            long r2 = r7.mDuration
            r4 = 0
            int r6 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r6 < 0) goto L22
            r1.setDuration(r2)
        L22:
            android.view.animation.Interpolator r2 = r7.mInterpolator
            if (r2 == 0) goto L29
            r1.setInterpolator(r2)
        L29:
            android.support.v4.view.ViewPropertyAnimatorListener r2 = r7.mListener
            if (r2 == 0) goto L32
            android.support.v4.view.ViewPropertyAnimatorListenerAdapter r2 = r7.mProxyListener
            r1.setListener(r2)
        L32:
            r1.start()
            goto Lb
        L36:
            r0 = 1
            r7.mIsStarted = r0
            return
    }
}
