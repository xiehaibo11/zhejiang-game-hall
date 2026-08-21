package com.kwad.components.core.page.recycle;

import android.app.Activity;
import android.content.Context;
import android.support.v4.view.MotionEventCompat;
import android.support.v4.view.NestedScrollingChild;
import android.support.v4.view.NestedScrollingChildHelper;
import android.support.v4.view.VelocityTrackerCompat;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.View;
import android.view.ViewConfiguration;
import com.kwad.sdk.core.webview.KsAdWebView;

public class NestedScrollWebView extends KsAdWebView implements NestedScrollingChild {
    private int NX;
    private int NY;
    private final int[] NZ;
    private final int[] Oa;
    private int Ob;
    private boolean Oc;
    private int Od;
    private int Oe;
    private NestedScrollingChildHelper Of;
    private VelocityTracker Og;
    private int Oh;

    public NestedScrollWebView(Context context) {
        super(context);
        this.NZ = new int[2];
        this.Oa = new int[2];
        pk();
    }

    public NestedScrollWebView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.NZ = new int[2];
        this.Oa = new int[2];
        pk();
    }

    public NestedScrollWebView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.NZ = new int[2];
        this.Oa = new int[2];
        pk();
    }

    private void pk() {
        this.Oh = 0;
        ViewConfiguration viewConfiguration = ViewConfiguration.get(getContext());
        this.Of = new NestedScrollingChildHelper(this);
        setNestedScrollingEnabled(true);
        this.Oe = viewConfiguration.getScaledMaximumFlingVelocity();
        this.Od = viewConfiguration.getScaledMinimumFlingVelocity();
    }

    @Override
    public boolean dispatchNestedFling(float f, float f2, boolean z) {
        return this.Of.dispatchNestedFling(f, f2, z);
    }

    @Override
    public boolean dispatchNestedPreFling(float f, float f2) {
        return this.Of.dispatchNestedPreFling(f, f2);
    }

    @Override
    public boolean dispatchNestedPreScroll(int i, int i2, int[] iArr, int[] iArr2) {
        return this.Of.dispatchNestedPreScroll(i, i2, iArr, iArr2);
    }

    @Override
    public boolean dispatchNestedScroll(int i, int i2, int i3, int i4, int[] iArr) {
        return this.Of.dispatchNestedScroll(i, i2, i3, i4, iArr);
    }

    @Override
    public boolean hasNestedScrollingParent() {
        return this.Of.hasNestedScrollingParent();
    }

    @Override
    public boolean isNestedScrollingEnabled() {
        return this.Of.isNestedScrollingEnabled();
    }

    @Override
    protected void onMeasure(int i, int i2) {
        if (this.Oh != 0) {
            i2 = View.MeasureSpec.makeMeasureSpec(((getContext() instanceof Activity ? com.kwad.sdk.d.a.a.e((Activity) getContext()) : com.kwad.sdk.d.a.a.getScreenHeight(getContext())) - (com.kwad.components.core.t.d.qn() ? com.kwad.sdk.d.a.a.getStatusBarHeight(getContext()) : 0)) - this.Oh, 1073741824);
        }
        super.onMeasure(i, i2);
    }

    @Override
    public void onScrollChanged(int i, int i2, int i3, int i4) {
        super.onScrollChanged(i, i2, i3, i4);
        if (hasFocus()) {
            return;
        }
        requestFocus();
    }

    /* JADX WARN: Removed duplicated region for block: B:37:0x00e2  */
    @Override
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public boolean onTouchEvent(MotionEvent motionEvent) {
        boolean zOnTouchEvent;
        MotionEvent motionEventObtain = MotionEvent.obtain(motionEvent);
        int actionMasked = MotionEventCompat.getActionMasked(motionEvent);
        boolean z = false;
        if (actionMasked == 0) {
            this.Ob = 0;
        }
        if (this.Og == null) {
            this.Og = VelocityTracker.obtain();
        }
        int actionIndex = MotionEventCompat.getActionIndex(motionEvent);
        int y = (int) motionEvent.getY();
        motionEvent.offsetLocation(0.0f, this.Ob);
        if (actionMasked == 0) {
            this.NX = y;
            this.NY = (int) motionEvent.getX();
            startNestedScroll(2);
            int[] iArr = this.Oa;
            iArr[0] = 0;
            iArr[1] = 0;
            int[] iArr2 = this.NZ;
            iArr2[0] = 0;
            iArr2[1] = 0;
            zOnTouchEvent = super.onTouchEvent(motionEvent);
            this.Oc = false;
        } else if (actionMasked == 1) {
            this.Og.addMovement(motionEvent);
            this.Og.computeCurrentVelocity(1000, this.Oe);
            float f = -VelocityTrackerCompat.getYVelocity(this.Og, MotionEventCompat.getPointerId(motionEvent, actionIndex));
            if (Math.abs(f) > this.Od && !dispatchNestedPreFling(0.0f, f) && hasNestedScrollingParent()) {
                dispatchNestedFling(0.0f, f, true);
            }
            boolean zOnTouchEvent2 = super.onTouchEvent(motionEvent);
            stopNestedScroll();
            if (Math.abs(motionEvent.getY() - this.NX) < 10.0f) {
                Math.abs(motionEvent.getX() - this.NY);
            }
            zOnTouchEvent = zOnTouchEvent2;
            z = true;
        } else if (actionMasked == 2) {
            int i = this.NX - y;
            if (dispatchNestedPreScroll(0, i, this.Oa, this.NZ)) {
                i -= this.Oa[1];
                motionEventObtain.offsetLocation(0.0f, this.NZ[1]);
                this.Ob += this.NZ[1];
            }
            int scrollY = getScrollY();
            this.NX = y - this.NZ[1];
            int iMax = Math.max(0, scrollY + i);
            int i2 = i - (iMax - scrollY);
            if (dispatchNestedScroll(0, iMax - i2, 0, i2, this.NZ)) {
                this.NX = this.NX - this.NZ[1];
                motionEventObtain.offsetLocation(0.0f, r1[1]);
                this.Ob += this.NZ[1];
            }
            if (Math.abs(this.Oa[1]) >= 5 || Math.abs(this.NZ[1]) >= 5) {
                if (!this.Oc) {
                    this.Oc = true;
                    super.onTouchEvent(MotionEvent.obtain(0L, 0L, 3, 0.0f, 0.0f, 0));
                }
                zOnTouchEvent = false;
            } else {
                if (this.Oc) {
                    this.Oc = false;
                    zOnTouchEvent = false;
                } else {
                    zOnTouchEvent = super.onTouchEvent(motionEventObtain);
                }
                motionEventObtain.recycle();
            }
        } else if (actionMasked != 3) {
            if (actionMasked != 5) {
                zOnTouchEvent = false;
            } else {
                stopNestedScroll();
                zOnTouchEvent = super.onTouchEvent(motionEvent);
            }
        }
        if (!z) {
            this.Og.addMovement(motionEvent);
        }
        return zOnTouchEvent;
    }

    @Override
    public void setNestedScrollingEnabled(boolean z) {
        this.Of.setNestedScrollingEnabled(z);
    }

    @Override
    public boolean startNestedScroll(int i) {
        return this.Of.startNestedScroll(i);
    }

    @Override
    public void stopNestedScroll() {
        this.Of.stopNestedScroll();
    }
}
