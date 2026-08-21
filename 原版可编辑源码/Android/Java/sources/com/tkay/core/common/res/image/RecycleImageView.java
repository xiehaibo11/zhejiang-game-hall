package com.tkay.core.common.res.image;

import android.content.Context;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.widget.ImageView;

public class RecycleImageView extends ImageView {
    public RecycleImageView(Context context) {
        super(context);
    }

    public RecycleImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public RecycleImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    @Override
    protected void dispatchDraw(Canvas canvas) {
        try {
            super.dispatchDraw(canvas);
        } catch (Throwable unused) {
        }
    }

    @Override
    protected void onDraw(Canvas canvas) {
        try {
            super.onDraw(canvas);
        } catch (Throwable unused) {
        }
    }
}
