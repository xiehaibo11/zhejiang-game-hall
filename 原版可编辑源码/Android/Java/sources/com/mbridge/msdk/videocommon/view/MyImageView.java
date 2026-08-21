package com.mbridge.msdk.videocommon.view;

import android.content.Context;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.util.Log;
import com.mbridge.msdk.widget.MBImageView;

public class MyImageView extends MBImageView {
    public MyImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public MyImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public MyImageView(Context context) {
        super(context);
    }

    @Override
    protected void onDraw(Canvas canvas) {
        try {
            super.onDraw(canvas);
        } catch (Exception unused) {
            Log.e("", "MyImageView  -> onDraw() Canvas: trying to use a recycled bitmap");
        }
    }
}
