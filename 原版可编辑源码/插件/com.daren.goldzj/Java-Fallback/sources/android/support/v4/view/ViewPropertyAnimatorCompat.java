package android.support.v4.view;

import android.animation.ValueAnimator;
import android.os.Build;
import android.view.View;
import android.view.animation.Interpolator;
import java.lang.ref.WeakReference;

public final class ViewPropertyAnimatorCompat {
    static final int LISTENER_TAG_ID = 2113929216;
    private static final String TAG = "ViewAnimatorCompat";
    Runnable mEndAction;
    int mOldLayerType;
    Runnable mStartAction;
    private WeakReference<View> mView;

    static class ViewPropertyAnimatorListenerApi14 implements ViewPropertyAnimatorListener {
        boolean mAnimEndCalled;
        ViewPropertyAnimatorCompat mVpa;

        ViewPropertyAnimatorListenerApi14(ViewPropertyAnimatorCompat r1) {
            this.mVpa = r1;
        }

        @Override
        public void onAnimationStart(View r4) {
            this.mAnimEndCalled = false;
            ViewPropertyAnimatorListener r1 = null;
            if (this.mVpa.mOldLayerType <= (-1)) goto L6;
            r4.setLayerType(2, null);
        L6:
            if (this.mVpa.mStartAction == null) goto L8;
            Runnable r0 = this.mVpa.mStartAction;
            this.mVpa.mStartAction = null;
            r0.run();
        L8:
            Object r02 = r4.getTag(ViewPropertyAnimatorCompat.LISTENER_TAG_ID);
            if ((r02 instanceof ViewPropertyAnimatorListener) == false) goto L11;
            r1 = (ViewPropertyAnimatorListener) r02;
        L11:
            if (r1 == null) goto L14;
            r1.onAnimationStart(r4);
            return;
        }

        @Override
        public void onAnimationEnd(View r4) {
            ViewPropertyAnimatorListener r2 = null;
            if (this.mVpa.mOldLayerType <= (-1)) goto L6;
            r4.setLayerType(this.mVpa.mOldLayerType, null);
            this.mVpa.mOldLayerType = -1;
        L6:
            if (Build.VERSION.SDK_INT >= 16) goto L10;
            if (this.mAnimEndCalled == false) goto L10;
            return;
        L10:
            if (this.mVpa.mEndAction == null) goto L12;
            Runnable r0 = this.mVpa.mEndAction;
            this.mVpa.mEndAction = null;
            r0.run();
        L12:
            Object r02 = r4.getTag(ViewPropertyAnimatorCompat.LISTENER_TAG_ID);
            if ((r02 instanceof ViewPropertyAnimatorListener) == false) goto L15;
            r2 = (ViewPropertyAnimatorListener) r02;
        L15:
            if (r2 == null) goto L17;
            r2.onAnimationEnd(r4);
        L17:
            this.mAnimEndCalled = true;
        }

        @Override
        public void onAnimationCancel(View r3) {
            Object r0 = r3.getTag(ViewPropertyAnimatorCompat.LISTENER_TAG_ID);
            if ((r0 instanceof ViewPropertyAnimatorListener) == false) goto L5;
            ViewPropertyAnimatorListener r02 = (ViewPropertyAnimatorListener) r0;
        L6:
            if (r02 == null) goto L9;
            r02.onAnimationCancel(r3);
            return;
        L9:
            return;
        L5:
            r02 = null;
            goto L6
        }
    }

    ViewPropertyAnimatorCompat(View r2) {
        this.mStartAction = null;
        this.mEndAction = null;
        this.mOldLayerType = -1;
        this.mView = new WeakReference(r2);
    }

    public ViewPropertyAnimatorCompat setDuration(long r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().setDuration(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat alpha(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().alpha(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat alphaBy(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().alphaBy(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat translationX(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().translationX(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat translationY(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().translationY(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat withEndAction(Runnable r4) {
        View r0 = this.mView.get();
        if (r0 != null) goto L5;
    L8:
        return this;
    L5:
        if (Build.VERSION.SDK_INT < 16) goto L7;
        r0.animate().withEndAction(r4);
        goto L8
    L7:
        setListenerInternal(r0, new ViewPropertyAnimatorListenerApi14(this));
        this.mEndAction = r4;
        goto L8
    }

    public long getDuration() {
        View r0 = this.mView.get();
        if (r0 != null) goto L5;
        return 0;
    L5:
        return r0.animate().getDuration();
    }

    public ViewPropertyAnimatorCompat setInterpolator(Interpolator r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().setInterpolator(r2);
    L5:
        return this;
    }

    public Interpolator getInterpolator() {
        View r0 = this.mView.get();
        if (r0 != null) goto L5;
        return null;
    L5:
        if (Build.VERSION.SDK_INT >= 18) goto L7;
        return null;
    L7:
        return (Interpolator) r0.animate().getInterpolator();
    }

    public ViewPropertyAnimatorCompat setStartDelay(long r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().setStartDelay(r2);
    L5:
        return this;
    }

    public long getStartDelay() {
        View r0 = this.mView.get();
        if (r0 != null) goto L5;
        return 0;
    L5:
        return r0.animate().getStartDelay();
    }

    public ViewPropertyAnimatorCompat rotation(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().rotation(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat rotationBy(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().rotationBy(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat rotationX(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().rotationX(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat rotationXBy(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().rotationXBy(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat rotationY(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().rotationY(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat rotationYBy(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().rotationYBy(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat scaleX(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().scaleX(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat scaleXBy(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().scaleXBy(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat scaleY(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().scaleY(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat scaleYBy(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().scaleYBy(r2);
    L5:
        return this;
    }

    public void cancel() {
        View r0 = this.mView.get();
        if (r0 == null) goto L6;
        r0.animate().cancel();
        return;
    }

    public ViewPropertyAnimatorCompat x(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().x(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat xBy(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().xBy(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat y(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().y(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat yBy(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().yBy(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat translationXBy(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().translationXBy(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat translationYBy(float r2) {
        View r0 = this.mView.get();
        if (r0 == null) goto L5;
        r0.animate().translationYBy(r2);
    L5:
        return this;
    }

    public ViewPropertyAnimatorCompat translationZBy(float r4) {
        View r0 = this.mView.get();
        if (r0 != null) goto L5;
    L7:
        return this;
    L5:
        if (Build.VERSION.SDK_INT < 21) goto L7;
        r0.animate().translationZBy(r4);
        goto L7
    }

    public ViewPropertyAnimatorCompat translationZ(float r4) {
        View r0 = this.mView.get();
        if (r0 != null) goto L5;
    L7:
        return this;
    L5:
        if (Build.VERSION.SDK_INT < 21) goto L7;
        r0.animate().translationZ(r4);
        goto L7
    }

    public ViewPropertyAnimatorCompat z(float r4) {
        View r0 = this.mView.get();
        if (r0 != null) goto L5;
    L7:
        return this;
    L5:
        if (Build.VERSION.SDK_INT < 21) goto L7;
        r0.animate().z(r4);
        goto L7
    }

    public ViewPropertyAnimatorCompat zBy(float r4) {
        View r0 = this.mView.get();
        if (r0 != null) goto L5;
    L7:
        return this;
    L5:
        if (Build.VERSION.SDK_INT < 21) goto L7;
        r0.animate().zBy(r4);
        goto L7
    }

    public void start() {
        View r0 = this.mView.get();
        if (r0 == null) goto L6;
        r0.animate().start();
        return;
    }

    public ViewPropertyAnimatorCompat withLayer() {
        View r0 = this.mView.get();
        if (r0 != null) goto L5;
    L8:
        return this;
    L5:
        if (Build.VERSION.SDK_INT < 16) goto L7;
        r0.animate().withLayer();
        goto L8
    L7:
        this.mOldLayerType = r0.getLayerType();
        setListenerInternal(r0, new ViewPropertyAnimatorListenerApi14(this));
        goto L8
    }

    public ViewPropertyAnimatorCompat withStartAction(Runnable r4) {
        View r0 = this.mView.get();
        if (r0 != null) goto L5;
    L8:
        return this;
    L5:
        if (Build.VERSION.SDK_INT < 16) goto L7;
        r0.animate().withStartAction(r4);
        goto L8
    L7:
        setListenerInternal(r0, new ViewPropertyAnimatorListenerApi14(this));
        this.mStartAction = r4;
        goto L8
    }

    public ViewPropertyAnimatorCompat setListener(ViewPropertyAnimatorListener r4) {
        View r0 = this.mView.get();
        if (r0 != null) goto L5;
    L8:
        return this;
    L5:
        if (Build.VERSION.SDK_INT < 16) goto L7;
        setListenerInternal(r0, r4);
        goto L8
    L7:
        r0.setTag(LISTENER_TAG_ID, r4);
        setListenerInternal(r0, new ViewPropertyAnimatorListenerApi14(this));
        goto L8
    }

    private void setListenerInternal(final View r3, final ViewPropertyAnimatorListener r4) {
        if (r4 == null) goto L4;
        r3.animate().setListener(new 1(this, r4, r3));
        return;
    L4:
        r3.animate().setListener(null);
    }

    public ViewPropertyAnimatorCompat setUpdateListener(final ViewPropertyAnimatorUpdateListener r4) {
        final View r0 = this.mView.get();
        if (r0 != null) goto L5;
    L10:
        return this;
    L5:
        if (Build.VERSION.SDK_INT < 19) goto L10;
        ValueAnimator.AnimatorUpdateListener r1 = null;
        if (r4 == null) goto L9;
        r1 = new 2(this, r4, r0);
    L9:
        r0.animate().setUpdateListener(r1);
        goto L10
    }
}
