package com.kwad.sdk.widget;

import android.content.Context;
import android.util.AttributeSet;
import android.util.Log;
import android.view.View;
import android.widget.FrameLayout;

/* JADX INFO: loaded from: classes2.dex */
public class RatioFrameLayout extends FrameLayout {
    private double aqQ;

    public RatioFrameLayout(Context context) {
        this(context, null);
    }

    public RatioFrameLayout(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public RatioFrameLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.aqQ = 0.0d;
    }

    public double getRatio() {
        return this.aqQ;
    }

    @Override // android.widget.FrameLayout, android.view.View
    protected void onMeasure(int i, int i2) {
        if (this.aqQ != 0.0d) {
            int size = View.MeasureSpec.getSize(i);
            Log.d("RatioFrameLayout", "widthSize:" + size);
            i2 = View.MeasureSpec.makeMeasureSpec((int) (((double) size) * this.aqQ), 1073741824);
        }
        super.onMeasure(i, i2);
    }

    public void setRatio(double d) {
        this.aqQ = d;
    }
}
