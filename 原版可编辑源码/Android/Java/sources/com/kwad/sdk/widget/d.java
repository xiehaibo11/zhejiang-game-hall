package com.kwad.sdk.widget;

import android.content.Context;
import android.support.v4.view.ViewPager;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.ViewParent;

public class d extends ViewPager {
    private int aMh;
    private boolean aMi;

    public d(Context context) {
        super(context);
        this.aMi = false;
    }

    public d(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.aMi = false;
    }

    @Override
    public boolean canScrollHorizontally(int i) {
        if (this.aMi) {
            return super.canScrollHorizontally(i);
        }
        return false;
    }

    @Override
    public boolean dispatchTouchEvent(MotionEvent motionEvent) {
        ViewParent parent;
        boolean z;
        if (!this.aMi) {
            return super.dispatchTouchEvent(motionEvent);
        }
        int x = (int) motionEvent.getX();
        int action = motionEvent.getAction();
        if (action != 0) {
            if (action == 2) {
                int i = x - this.aMh;
                if (getCurrentItem() == 0 && i > 0) {
                    parent = getParent();
                    z = false;
                }
            }
            this.aMh = x;
            return super.dispatchTouchEvent(motionEvent);
        }
        parent = getParent();
        z = true;
        parent.requestDisallowInterceptTouchEvent(z);
        this.aMh = x;
        return super.dispatchTouchEvent(motionEvent);
    }

    @Override
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        return this.aMi && super.onInterceptTouchEvent(motionEvent);
    }

    @Override
    public boolean onTouchEvent(MotionEvent motionEvent) {
        return this.aMi && super.onTouchEvent(motionEvent);
    }

    public void setScrollable(boolean z) {
        this.aMi = z;
    }
}
