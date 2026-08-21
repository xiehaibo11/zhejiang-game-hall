package android.support.v7.widget;

import android.os.SystemClock;
import android.support.annotation.RestrictTo;
import android.support.v7.view.menu.ShowableListMenu;
import android.view.MotionEvent;
import android.view.View;
import android.view.ViewConfiguration;
import android.view.ViewParent;

@RestrictTo({RestrictTo.Scope.LIBRARY_GROUP})
public abstract class ForwardingListener implements View.OnTouchListener, View.OnAttachStateChangeListener {
    private int mActivePointerId;
    private Runnable mDisallowIntercept;
    private boolean mForwarding;
    private final int mLongPressTimeout;
    private final float mScaledTouchSlop;
    final View mSrc;
    private final int mTapTimeout;
    private final int[] mTmpLocation;
    private Runnable mTriggerLongPress;

    private class DisallowIntercept implements Runnable {
        final ForwardingListener this$0;

        DisallowIntercept(ForwardingListener r1) {
            this.this$0 = r1;
        }

        @Override
        public void run() {
            ViewParent r0 = this.this$0.mSrc.getParent();
            if (r0 == null) goto L6;
            r0.requestDisallowInterceptTouchEvent(true);
            return;
        }
    }

    private class TriggerLongPress implements Runnable {
        final ForwardingListener this$0;

        TriggerLongPress(ForwardingListener r1) {
            this.this$0 = r1;
        }

        @Override
        public void run() {
            this.this$0.onLongPress();
        }
    }

    public abstract ShowableListMenu getPopup();

    @Override
    public void onViewAttachedToWindow(View r1) {
    }

    public ForwardingListener(View r3) {
        this.mTmpLocation = new int[2];
        this.mSrc = r3;
        r3.setLongClickable(true);
        r3.addOnAttachStateChangeListener(this);
        this.mScaledTouchSlop = ViewConfiguration.get(r3.getContext()).getScaledTouchSlop();
        this.mTapTimeout = ViewConfiguration.getTapTimeout();
        this.mLongPressTimeout = (this.mTapTimeout + ViewConfiguration.getLongPressTimeout()) / 2;
    }

    @Override
    public boolean onTouch(View r11, MotionEvent r12) {
        boolean r112 = this.mForwarding;
        if (r112 == false) goto L12;
        if (onTouchForwarded(r12) == false) goto L7;
    L10:
        boolean r122 = true;
    L19:
        this.mForwarding = r122;
        if (r122 == true) goto L25;
        if (r112 == true) goto L26;
        return false;
    L26:
        return true;
    L25:
        return true;
    L7:
        if (onForwardingStopped() == false) goto L10;
        r122 = false;
        goto L19
    L12:
        if (onTouchObserved(r12) == true) goto L14;
    L16:
        r122 = false;
    L17:
        if (r122 == false) goto L19;
        long r4 = SystemClock.uptimeMillis();
        MotionEvent r2 = MotionEvent.obtain(r4, r4, 3, 0.0f, 0.0f, 0);
        this.mSrc.onTouchEvent(r2);
        r2.recycle();
        goto L19
    L14:
        if (onForwardingStarted() == false) goto L16;
        r122 = true;
        goto L17
    }

    @Override
    public void onViewDetachedFromWindow(View r2) {
        this.mForwarding = false;
        this.mActivePointerId = -1;
        Runnable r22 = this.mDisallowIntercept;
        if (r22 == null) goto L6;
        this.mSrc.removeCallbacks(r22);
        return;
    }

    protected boolean onForwardingStarted() {
        ShowableListMenu r0 = getPopup();
        if (r0 != null) goto L5;
        return true;
    L5:
        if (r0.isShowing() == true) goto L10;
        r0.show();
        return true;
    L10:
        return true;
    }

    protected boolean onForwardingStopped() {
        ShowableListMenu r0 = getPopup();
        if (r0 != null) goto L5;
        return true;
    L5:
        if (r0.isShowing() == false) goto L10;
        r0.dismiss();
        return true;
    L10:
        return true;
    }

    private boolean onTouchObserved(MotionEvent r6) {
        View r0 = this.mSrc;
        if (r0.isEnabled() == true) goto L5;
        return false;
    L5:
        int r1 = r6.getActionMasked();
        if (r1 != 0) goto L8;
        this.mActivePointerId = r6.getPointerId(0);
        if (this.mDisallowIntercept != null) goto L24;
        this.mDisallowIntercept = new DisallowIntercept(this);
    L24:
        r0.postDelayed(this.mDisallowIntercept, this.mTapTimeout);
        if (this.mTriggerLongPress != null) goto L27;
        this.mTriggerLongPress = new TriggerLongPress(this);
    L27:
        r0.postDelayed(this.mTriggerLongPress, this.mLongPressTimeout);
    L28:
        return false;
    L8:
        if (r1 != 1) goto L10;
    L20:
        clearCallbacks();
        goto L28
    L10:
        if (r1 != 2) goto L12;
        int r12 = r6.findPointerIndex(this.mActivePointerId);
        if (r12 < 0) goto L28;
        if (pointInView(r0, r6.getX(r12), r6.getY(r12), this.mScaledTouchSlop) == true) goto L28;
        clearCallbacks();
        r0.getParent().requestDisallowInterceptTouchEvent(true);
        return true;
    L12:
        if (r1 == 3) goto L20;
        goto L20
    }

    private void clearCallbacks() {
        Runnable r0 = this.mTriggerLongPress;
        if (r0 == null) goto L5;
        this.mSrc.removeCallbacks(r0);
    L5:
        Runnable r02 = this.mDisallowIntercept;
        if (r02 == null) goto L9;
        this.mSrc.removeCallbacks(r02);
        return;
    }

    void onLongPress() {
        clearCallbacks();
        View r0 = this.mSrc;
        if (r0.isEnabled() == true) goto L5;
        return;
    L5:
        if (r0.isLongClickable() == false) goto L8;
        return;
    L8:
        if (onForwardingStarted() == true) goto L10;
        return;
    L10:
        r0.getParent().requestDisallowInterceptTouchEvent(true);
        long r5 = SystemClock.uptimeMillis();
        MotionEvent r1 = MotionEvent.obtain(r5, r5, 3, 0.0f, 0.0f, 0);
        r0.onTouchEvent(r1);
        r1.recycle();
        this.mForwarding = true;
    }

    private boolean onTouchForwarded(MotionEvent r5) {
        View r0 = this.mSrc;
        ShowableListMenu r1 = getPopup();
        if (r1 != null) goto L5;
    L23:
        return false;
    L5:
        if (r1.isShowing() == false) goto L23;
        DropDownListView r12 = (DropDownListView) r1.getListView();
        if (r12 == null) goto L23;
        if (r12.isShown() == false) goto L23;
        MotionEvent r3 = MotionEvent.obtainNoHistory(r5);
        toGlobalMotionEvent(r0, r3);
        toLocalMotionEvent(r12, r3);
        boolean r02 = r12.onForwardedEvent(r3, this.mActivePointerId);
        r3.recycle();
        int r52 = r5.getActionMasked();
        if (r52 != 1) goto L15;
    L17:
        boolean r53 = false;
    L18:
        if (r02 == false) goto L21;
        if (r53 == false) goto L21;
        return true;
    L21:
        return false;
    L15:
        if (r52 == 3) goto L17;
        r53 = true;
        goto L18
    }

    private static boolean pointInView(View r2, float r3, float r4, float r5) {
        float r0 = -r5;
        if (r3 >= r0) goto L5;
    L11:
        return false;
    L5:
        if (r4 < r0) goto L11;
        if (r3 >= ((r2.getRight() - r2.getLeft()) + r5)) goto L11;
        if (r4 >= ((r2.getBottom() - r2.getTop()) + r5)) goto L11;
        return true;
    }

    private boolean toLocalMotionEvent(View r3, MotionEvent r4) {
        r3.getLocationOnScreen(this.mTmpLocation);
        r4.offsetLocation(-r0[0], -r0[1]);
        return true;
    }

    private boolean toGlobalMotionEvent(View r3, MotionEvent r4) {
        r3.getLocationOnScreen(this.mTmpLocation);
        r4.offsetLocation(r0[0], r0[1]);
        return true;
    }
}
