package com.kwad.components.core.page.splitLandingPage.view;

import android.app.Activity;
import android.content.Context;
import android.support.v4.view.MotionEventCompat;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;
import com.kwad.components.core.t.d;
import com.kwad.sdk.core.webview.KsAdWebView;

public class SplitScrollWebView extends KsAdWebView {
    private boolean OE;
    private a OF;
    private float OG;
    private boolean OH;
    private int Oh;

    public interface a {
        void d(float f);

        boolean pq();
    }

    public SplitScrollWebView(Context context) {
        super(context);
        this.OE = false;
        pk();
    }

    public SplitScrollWebView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.OE = false;
        pk();
    }

    public SplitScrollWebView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.OE = false;
        pk();
    }

    private void pk() {
        this.Oh = 0;
    }

    @Override
    protected void onMeasure(int i, int i2) {
        if (this.Oh != 0) {
            i2 = View.MeasureSpec.makeMeasureSpec(((getContext() instanceof Activity ? com.kwad.sdk.d.a.a.e((Activity) getContext()) : com.kwad.sdk.d.a.a.getScreenHeight(getContext())) - (d.qn() ? com.kwad.sdk.d.a.a.getStatusBarHeight(getContext()) : 0)) - this.Oh, 1073741824);
        }
        super.onMeasure(i, i2);
    }

    @Override
    public boolean onTouchEvent(MotionEvent motionEvent) {
        MotionEvent motionEventObtain = MotionEvent.obtain(motionEvent);
        if (this.OE) {
            return super.onTouchEvent(motionEventObtain);
        }
        int actionMasked = MotionEventCompat.getActionMasked(motionEvent);
        float y = motionEvent.getY();
        if (actionMasked == 0) {
            this.OG = y;
            this.OH = false;
            return super.onTouchEvent(motionEvent);
        }
        if (actionMasked != 1) {
            if (actionMasked == 2) {
                float f = this.OG;
                float f2 = f - y;
                a aVar = this.OF;
                if (aVar != null && y <= f) {
                    this.OH = true;
                    aVar.d(f2);
                }
                return super.onTouchEvent(motionEventObtain);
            }
            if (actionMasked != 3) {
                return false;
            }
        }
        if (this.OF == null) {
            return false;
        }
        if ((this.OG - y < 0.0f && !this.OH) || !this.OF.pq()) {
            return false;
        }
        this.OE = true;
        return false;
    }

    public void setDisableAnimation(boolean z) {
        this.OE = z;
    }

    public void setSplitScrollWebViewListener(a aVar) {
        this.OF = aVar;
    }
}
