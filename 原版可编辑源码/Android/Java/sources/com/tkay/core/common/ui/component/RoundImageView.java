package com.tkay.core.common.ui.component;

import android.content.Context;
import android.graphics.Canvas;
import android.util.AttributeSet;
import com.tkay.core.common.l.h;
import com.tkay.core.common.l.u;
import com.tkay.core.common.res.image.RecycleImageView;

public class RoundImageView extends RecycleImageView {
    int a;
    boolean b;

    public RoundImageView(Context context) {
        super(context);
        this.a = h.a(getContext(), 5.0f);
    }

    public RoundImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.a = h.a(getContext(), 5.0f);
    }

    public RoundImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.a = h.a(getContext(), 5.0f);
    }

    public void setNeedRadiu(boolean z) {
        this.b = z;
    }

    public void setRadiusInDip(int i) {
        this.a = h.a(getContext(), i);
    }

    @Override
    protected void dispatchDraw(Canvas canvas) {
        try {
            if (this.b) {
                int iSaveLayer = canvas.saveLayer(0.0f, 0.0f, getWidth(), getHeight(), null, 31);
                super.dispatchDraw(canvas);
                canvas.translate(getPaddingLeft(), getPaddingTop());
                u.a(canvas, getWidth() - (getPaddingLeft() * 2), getHeight() - (getPaddingTop() * 2), this.a);
                canvas.restoreToCount(iSaveLayer);
                return;
            }
        } catch (Exception unused) {
        }
        super.dispatchDraw(canvas);
    }

    @Override
    protected void onDraw(Canvas canvas) {
        try {
            if (this.b) {
                int iSaveLayer = canvas.saveLayer(0.0f, 0.0f, getWidth(), getHeight(), null, 31);
                super.onDraw(canvas);
                canvas.translate(getPaddingLeft(), getPaddingTop());
                u.a(canvas, getWidth() - (getPaddingLeft() * 2), getHeight() - (getPaddingTop() * 2), this.a);
                canvas.restoreToCount(iSaveLayer);
                return;
            }
        } catch (Exception unused) {
        }
        super.onDraw(canvas);
    }
}
