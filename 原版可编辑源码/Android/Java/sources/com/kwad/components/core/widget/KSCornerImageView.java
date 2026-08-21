package com.kwad.components.core.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.widget.ImageView;
import com.kwad.sdk.R;
import com.kwad.sdk.widget.h;

public class KSCornerImageView extends ImageView {
    private com.kwad.sdk.widget.h mViewRCHelper;

    public KSCornerImageView(Context context) {
        super(context);
        a(context, null);
    }

    public KSCornerImageView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        a(context, attributeSet);
    }

    public KSCornerImageView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        a(context, attributeSet);
    }

    public KSCornerImageView(Context context, AttributeSet attributeSet, int i, int i2) {
        super(context, attributeSet, i, i2);
        a(context, attributeSet);
    }

    private void a(Context context, AttributeSet attributeSet) {
        h.a aVar = new h.a();
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, R.styleable.ksad_KSCornerImageView);
        aVar.bS(typedArrayObtainStyledAttributes.getBoolean(R.styleable.ksad_KSCornerImageView_ksad_leftTopCorner, true));
        aVar.bT(typedArrayObtainStyledAttributes.getBoolean(R.styleable.ksad_KSCornerImageView_ksad_topRightCorner, true));
        aVar.bU(typedArrayObtainStyledAttributes.getBoolean(R.styleable.ksad_KSCornerImageView_ksad_rightBottomCorner, true));
        aVar.bV(typedArrayObtainStyledAttributes.getBoolean(R.styleable.ksad_KSCornerImageView_ksad_bottomLeftCorner, true));
        typedArrayObtainStyledAttributes.recycle();
        com.kwad.sdk.widget.h hVar = new com.kwad.sdk.widget.h(aVar);
        this.mViewRCHelper = hVar;
        hVar.initAttrs(context, attributeSet);
    }

    @Override
    protected void dispatchDraw(Canvas canvas) {
        this.mViewRCHelper.beforeDispatchDraw(canvas);
        super.dispatchDraw(canvas);
        this.mViewRCHelper.afterDispatchDraw(canvas);
    }

    @Override
    public void draw(Canvas canvas) {
        this.mViewRCHelper.beforeDraw(canvas);
        super.draw(canvas);
        this.mViewRCHelper.afterDraw(canvas);
    }

    @Override
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        super.onSizeChanged(i, i2, i3, i4);
        this.mViewRCHelper.onSizeChanged(i, i2);
    }

    public void setRadius(float f) {
        this.mViewRCHelper.setRadius(f);
        postInvalidate();
    }
}
