package com.tkay.expressad.video.dynview.widget;

import android.content.Context;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.widget.ImageView;

/* JADX INFO: loaded from: classes3.dex */
public class TYDyImageView extends ImageView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f7257a = "TYDyImageView";

    public TYDyImageView(Context context) {
        super(context);
    }

    public TYDyImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
    }

    public TYDyImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
    }

    @Override // android.widget.ImageView, android.view.View
    protected void onDraw(Canvas canvas) {
        try {
            super.onDraw(canvas);
        } catch (Throwable th) {
            th.getMessage();
        }
    }
}
