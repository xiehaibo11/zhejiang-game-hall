package com.kwad.components.core.page.recycle;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Rect;
import android.support.v7.widget.RecyclerView;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;

/* JADX INFO: loaded from: classes2.dex */
public class b extends g {
    private Rect NF;
    private int NG;
    private int NH;
    private boolean NI;
    private int NJ;
    private a NK;
    private boolean NL;
    private boolean NM;

    public interface a {
        boolean pi();
    }

    public b(Context context) {
        this(context, null);
    }

    public b(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public b(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.NJ = Integer.MIN_VALUE;
        this.NM = false;
    }

    private void a(int i, int i2, int i3) {
        while (true) {
            if (this.NJ == Integer.MIN_VALUE) {
                int[] iArr = new int[2];
                getLocationOnScreen(iArr);
                this.NJ = iArr[1];
            }
            int iFindFirstVisibleItemPosition = f.b(this).findFirstVisibleItemPosition();
            int iFindLastVisibleItemPosition = f.b(this).findLastVisibleItemPosition();
            if (iFindFirstVisibleItemPosition == -1 || iFindLastVisibleItemPosition == -1) {
                return;
            }
            if (i >= iFindFirstVisibleItemPosition && i <= iFindLastVisibleItemPosition) {
                int i4 = i - iFindFirstVisibleItemPosition;
                if (getChildCount() > i4) {
                    int[] iArr2 = new int[2];
                    getChildAt(i4).getLocationOnScreen(iArr2);
                    scrollBy(0, (iArr2[1] - this.NJ) - i3);
                    return;
                }
                return;
            }
            if (i > iFindLastVisibleItemPosition) {
                scrollBy(0, i2);
                a(i, i2, i3);
                return;
            }
            scrollBy(0, -i2);
        }
    }

    private void pg() {
        Rect rect = this.NF;
        if (rect == null) {
            this.NF = new Rect();
        } else {
            rect.setEmpty();
        }
        int childCount = getChildCount();
        for (int i = 0; i < childCount; i++) {
            View childAt = getChildAt(i);
            if (childAt.getVisibility() == 0) {
                this.NF.union(childAt.getLeft(), childAt.getTop(), childAt.getRight(), childAt.getBottom());
            }
        }
    }

    private void ph() {
        RecyclerView.Adapter adapter = getAdapter();
        if (adapter instanceof d) {
            ((d) adapter).pl();
        }
    }

    private void scrollToPositionWithOffset(int i, int i2) {
        a(i, getHeight(), 0);
    }

    @Override // android.support.v7.widget.RecyclerView, android.view.ViewGroup, android.view.View
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        ph();
    }

    @Override // android.support.v7.widget.RecyclerView, android.view.View
    public void onDraw(Canvas canvas) {
        if (this.NG != 0) {
            pg();
            Rect rect = this.NF;
            if (rect != null && !rect.isEmpty()) {
                canvas.save();
                canvas.clipRect(this.NF);
                canvas.drawColor(this.NG);
                canvas.restore();
            }
        }
        super.onDraw(canvas);
    }

    @Override // android.support.v7.widget.RecyclerView, android.view.ViewGroup
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        if (this.NL) {
            return false;
        }
        if (motionEvent.getAction() == 0 && this.NM) {
            stopScroll();
        }
        a aVar = this.NK;
        if (aVar == null || !aVar.pi()) {
            return super.onInterceptTouchEvent(motionEvent);
        }
        return false;
    }

    @Override // android.support.v7.widget.RecyclerView, android.view.View
    protected void onMeasure(int i, int i2) {
        int size = View.MeasureSpec.getSize(i2);
        int i3 = this.NH;
        if (i3 > 0 && i3 < size) {
            i2 = View.MeasureSpec.makeMeasureSpec(this.NH, View.MeasureSpec.getMode(i2));
        }
        super.onMeasure(i, i2);
    }

    @Override // android.support.v7.widget.RecyclerView, android.view.View
    public boolean onTouchEvent(MotionEvent motionEvent) {
        if (this.NL) {
            return false;
        }
        return super.onTouchEvent(motionEvent);
    }

    @Override // android.support.v7.widget.RecyclerView
    public void scrollToPosition(int i) {
        if (this.NI) {
            scrollToPositionWithOffset(i, 0);
        } else {
            super.scrollToPosition(i);
        }
    }

    public void setDisableScroll(boolean z) {
        this.NL = z;
    }

    public void setDownStop(boolean z) {
        this.NM = z;
    }

    public void setIgnoreTouchSwipeHandler(a aVar) {
        this.NK = aVar;
    }

    public void setUnderneathColor(int i) {
        this.NG = i;
        pg();
        invalidate();
    }

    public void setUseCustomScrollToPosition(boolean z) {
        this.NI = z;
    }
}
