package com.kwad.components.core.page.recycle;

import android.app.Activity;
import android.content.Context;
import android.support.v4.view.ViewCompat;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;
import com.kwad.components.core.t.n;
import com.kwad.sdk.utils.s;

public class DetailWebRecycleView extends b {
    private int NN;
    private boolean NO;
    private boolean NP;
    private int NQ;
    private int NR;
    private boolean NS;
    a NT;
    private Runnable NU;
    private n NV;
    private int mn;

    public interface a {
        boolean pj();
    }

    public DetailWebRecycleView(Context context) {
        this(context, null);
    }

    public DetailWebRecycleView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public DetailWebRecycleView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.NN = 1000;
        this.NO = false;
        this.NP = false;
        Runnable runnable = new Runnable() {
            @Override
            public final void run() {
                try {
                    Object objF = s.f(DetailWebRecycleView.this, "mGapWorker");
                    if (objF != null) {
                        s.f(objF, "postFromTraversal", DetailWebRecycleView.this, 0, Integer.valueOf(DetailWebRecycleView.this.NN));
                    }
                } catch (RuntimeException e) {
                    com.kwad.sdk.core.e.c.printStackTraceOnly(e);
                }
            }
        };
        this.NU = runnable;
        this.NV = new n(runnable);
        this.mn = context instanceof Activity ? com.kwad.sdk.d.a.a.e((Activity) context) : com.kwad.sdk.d.a.a.getScreenHeight(context);
    }

    @Override
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        postDelayed(this.NV, 50L);
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        removeCallbacks(this.NV);
    }

    @Override
    public boolean onInterceptTouchEvent(MotionEvent motionEvent) {
        a aVar = this.NT;
        if (aVar != null && aVar.pj()) {
            return true;
        }
        this.NR = computeVerticalScrollOffset();
        if (motionEvent.getY() <= this.NQ - this.NR) {
            return super.onInterceptTouchEvent(motionEvent);
        }
        return false;
    }

    @Override
    public boolean onNestedPreFling(View view, float f, float f2) {
        int iComputeVerticalScrollOffset = computeVerticalScrollOffset();
        this.NR = iComputeVerticalScrollOffset;
        if (iComputeVerticalScrollOffset >= this.NQ) {
            return false;
        }
        fling((int) f, (int) f2);
        return true;
    }

    @Override
    public void onNestedPreScroll(View view, int i, int i2, int[] iArr) {
        int iComputeVerticalScrollOffset = computeVerticalScrollOffset();
        this.NR = iComputeVerticalScrollOffset;
        if ((i2 > 0 && iComputeVerticalScrollOffset < this.NQ) && !this.NS && this.NR < this.mn) {
            scrollBy(0, i2);
            iArr[1] = i2;
        }
        if (i2 < 0 && this.NR > 0 && !ViewCompat.canScrollVertically(view, -1)) {
            scrollBy(0, i2);
            iArr[1] = i2;
        }
    }

    @Override
    public void onScrollStateChanged(int i) {
        super.onScrollStateChanged(i);
        if (i == 0) {
            View childAt = getLayoutManager().getChildAt(getLayoutManager().getChildCount() - 1);
            if (childAt != null) {
                int bottom = childAt.getBottom();
                int bottom2 = getBottom() - getPaddingBottom();
                int position = getLayoutManager().getPosition(childAt);
                if (bottom == bottom2 && position == getLayoutManager().getItemCount() - 1) {
                    this.NS = true;
                    return;
                }
            }
            this.NS = false;
        }
    }

    @Override
    public boolean onStartNestedScroll(View view, View view2, int i) {
        return (i & 2) != 0;
    }

    @Override
    public void requestChildFocus(View view, View view2) {
        if (this.NP) {
            this.NP = false;
        } else {
            if (this.NO) {
                return;
            }
            super.requestChildFocus(view, view2);
        }
    }

    public void setInterceptRequestFocusForWeb(boolean z) {
        this.NO = z;
    }

    public void setInterceptRequestFocusForWebFiredOnce(boolean z) {
        this.NP = z;
    }

    public void setInterceptTouchListener(a aVar) {
        this.NT = aVar;
    }

    public void setTopViewHeight(int i) {
        this.NQ = i;
    }
}
