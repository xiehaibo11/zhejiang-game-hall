package com.tkay.expressad.video.dynview.widget;

import android.content.Context;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.widget.ImageView;

public class TYDyImageView extends ImageView {
    private static final String a = "TYDyImageView";

    public TYDyImageView(Context context) {
        super(context);
    }

    public TYDyImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public TYDyImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    @Override
    protected void onDraw(Canvas canvas) {
        try {
            super.onDraw(canvas);
        } catch (Throwable th) {
            th.getMessage();
        }
    }
}
