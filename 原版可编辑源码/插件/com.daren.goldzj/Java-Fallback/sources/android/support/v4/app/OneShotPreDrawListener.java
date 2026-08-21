package android.support.v4.app;

import android.view.View;
import android.view.ViewTreeObserver;

class OneShotPreDrawListener implements ViewTreeObserver.OnPreDrawListener, View.OnAttachStateChangeListener {
    private final Runnable mRunnable;
    private final View mView;
    private ViewTreeObserver mViewTreeObserver;

    private OneShotPreDrawListener(View r1, Runnable r2) {
        this.mView = r1;
        this.mViewTreeObserver = r1.getViewTreeObserver();
        this.mRunnable = r2;
    }

    public static OneShotPreDrawListener add(View r1, Runnable r2) {
        OneShotPreDrawListener r0 = new OneShotPreDrawListener(r1, r2);
        r1.getViewTreeObserver().addOnPreDrawListener(r0);
        r1.addOnAttachStateChangeListener(r0);
        return r0;
    }

    @Override
    public boolean onPreDraw() {
        removeListener();
        this.mRunnable.run();
        return true;
    }

    public void removeListener() {
        if (this.mViewTreeObserver.isAlive() == false) goto L5;
        this.mViewTreeObserver.removeOnPreDrawListener(this);
    L6:
        this.mView.removeOnAttachStateChangeListener(this);
        return;
    L5:
        this.mView.getViewTreeObserver().removeOnPreDrawListener(this);
        goto L6
    }

    @Override
    public void onViewAttachedToWindow(View r1) {
        this.mViewTreeObserver = r1.getViewTreeObserver();
    }

    @Override
    public void onViewDetachedFromWindow(View r1) {
        removeListener();
    }
}
