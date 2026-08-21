package com.tkay.expressad.videocommon.view;

import android.content.Context;
import android.graphics.Canvas;
import android.util.AttributeSet;
import com.tkay.expressad.widget.TYImageView;

/* JADX INFO: loaded from: classes3.dex */
public class MyImageView extends TYImageView {
    public MyImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    public MyImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public MyImageView(Context context) {
        super(context);
    }

    @Override // com.tkay.expressad.widget.TYImageView, android.widget.ImageView, android.view.View
    protected void onDraw(Canvas canvas) {
        try {
            super.onDraw(canvas);
        } catch (Exception unused) {
        }
    }
}
