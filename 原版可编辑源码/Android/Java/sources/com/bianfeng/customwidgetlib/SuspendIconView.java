package com.bianfeng.customwidgetlib;

import android.content.Context;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.ViewGroup;
import android.view.animation.BounceInterpolator;
import android.widget.Button;
import com.bianfeng.utilslib.UtilsSdk;

public class SuspendIconView extends Button {
    private boolean isDrug;
    private float mLastRawX;
    private float mLastRawY;
    private int mRootMeasuredHeight;
    private int mRootMeasuredWidth;
    private int mRootTopY;

    public SuspendIconView(Context context) {
        super(context);
        this.isDrug = false;
        this.mRootMeasuredWidth = 0;
        this.mRootMeasuredHeight = 0;
        this.mRootTopY = 0;
    }

    public SuspendIconView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.isDrug = false;
        this.mRootMeasuredWidth = 0;
        this.mRootMeasuredHeight = 0;
        this.mRootTopY = 0;
        if (UtilsSdk.getConfiguration().isLand()) {
            animate().setInterpolator(new BounceInterpolator()).setDuration(500L).rotation(-90.0f).start();
        }
    }

    public SuspendIconView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.isDrug = false;
        this.mRootMeasuredWidth = 0;
        this.mRootMeasuredHeight = 0;
        this.mRootTopY = 0;
    }

    @Override
    public boolean dispatchTouchEvent(MotionEvent motionEvent) {
        super.dispatchTouchEvent(motionEvent);
        return true;
    }

    private void getMeasured() {
        ViewGroup viewGroup = (ViewGroup) getParent();
        if (viewGroup != null) {
            int[] iArr = new int[2];
            viewGroup.getLocationInWindow(iArr);
            this.mRootMeasuredHeight = viewGroup.getMeasuredHeight();
            this.mRootMeasuredWidth = viewGroup.getMeasuredWidth();
            this.mRootTopY = iArr[1];
        }
    }

    @Override
    public boolean onTouchEvent(MotionEvent motionEvent) {
        float rawX = motionEvent.getRawX();
        float rawY = motionEvent.getRawY();
        int action = motionEvent.getAction();
        if (action == 0) {
            this.isDrug = false;
            this.mLastRawX = rawX;
            this.mLastRawY = rawY;
            getMeasured();
        } else if (action != 1) {
            if (action == 2) {
                if (rawX >= 0.0f && rawX <= this.mRootMeasuredWidth) {
                    if (rawY >= this.mRootTopY && rawY <= this.mRootMeasuredHeight + r5) {
                        float f = rawX - this.mLastRawX;
                        float f2 = rawY - this.mLastRawY;
                        if (!this.isDrug) {
                            if (Math.sqrt((f * f) + (f2 * f2)) < 2.0d) {
                                this.isDrug = false;
                            } else {
                                this.isDrug = true;
                            }
                        }
                        float x = getX() + f;
                        float y = getY() + f2;
                        float width = this.mRootMeasuredWidth - getWidth();
                        float height = this.mRootMeasuredHeight - getHeight();
                        if (x < 0.0f) {
                            x = 0.0f;
                        } else if (x > width) {
                            x = width;
                        }
                        float f3 = y >= 0.0f ? y > height ? height : y : 0.0f;
                        setX(x);
                        setY(f3);
                        this.mLastRawX = rawX;
                        this.mLastRawY = rawY;
                    }
                }
            }
        } else if (!this.isDrug) {
            setX(100.0f);
            setY(100.0f);
        }
        boolean z = this.isDrug;
        return z ? z : super.onTouchEvent(motionEvent);
    }

    public void setRotation(int i) {
        animate().setInterpolator(new BounceInterpolator()).setDuration(500L).rotation(i).start();
    }
}
