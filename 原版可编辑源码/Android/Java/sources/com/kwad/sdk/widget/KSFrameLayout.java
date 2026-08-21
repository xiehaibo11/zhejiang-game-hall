package com.kwad.sdk.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;
import android.widget.FrameLayout;
import com.kwad.sdk.R;
import com.kwad.sdk.utils.ac;
import java.util.Arrays;
import java.util.concurrent.atomic.AtomicBoolean;

public class KSFrameLayout extends FrameLayout implements e, i {
    private final AtomicBoolean SN;
    private g aLQ;
    private i aLR;
    private View aLS;
    private final ac.a axd;
    private float mRatio;
    private h mViewRCHelper;
    private boolean widthBasedRatio;

    public KSFrameLayout(Context context) {
        super(context);
        this.SN = new AtomicBoolean(true);
        this.mRatio = 0.0f;
        this.axd = new ac.a();
        this.widthBasedRatio = true;
        init(context, null);
    }

    public KSFrameLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.SN = new AtomicBoolean(true);
        this.mRatio = 0.0f;
        this.axd = new ac.a();
        this.widthBasedRatio = true;
        init(context, attributeSet);
    }

    public KSFrameLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.SN = new AtomicBoolean(true);
        this.mRatio = 0.0f;
        this.axd = new ac.a();
        this.widthBasedRatio = true;
        init(context, attributeSet);
    }

    public KSFrameLayout(Context context, View view) {
        super(context);
        this.SN = new AtomicBoolean(true);
        this.mRatio = 0.0f;
        this.axd = new ac.a();
        this.widthBasedRatio = true;
        this.aLS = view;
        init(context, null);
    }

    private View getPvView() {
        View view = this.aLS;
        return view == null ? this : view;
    }

    private static float[] getRadius(float f, float f2, float f3, float f4) {
        return new float[]{f, f, f2, f2, f3, f3, f4, f4};
    }

    private void sn() {
        if (this.SN.getAndSet(false)) {
            com.kwad.sdk.core.e.c.i("KSFrameLayout", "onViewAttached");
            aa();
        }
    }

    private void so() {
        if (this.SN.getAndSet(true)) {
            return;
        }
        com.kwad.sdk.core.e.c.i("KSFrameLayout", "onViewDetached");
        ab();
    }

    protected void aa() {
        this.aLQ.onAttachedToWindow();
    }

    protected void ab() {
        this.aLQ.onDetachedFromWindow();
    }

    @Override
    protected void dispatchDraw(Canvas canvas) {
        this.mViewRCHelper.beforeDispatchDraw(canvas);
        super.dispatchDraw(canvas);
        this.mViewRCHelper.afterDispatchDraw(canvas);
    }

    @Override
    public boolean dispatchTouchEvent(MotionEvent motionEvent) {
        int action = motionEvent.getAction();
        if (action == 0) {
            this.axd.x(getWidth(), getHeight());
            this.axd.f(motionEvent.getX(), motionEvent.getY());
        } else if (action == 1) {
            this.axd.g(motionEvent.getX(), motionEvent.getY());
        }
        return super.dispatchTouchEvent(motionEvent);
    }

    @Override
    public void draw(Canvas canvas) {
        this.mViewRCHelper.beforeDraw(canvas);
        super.draw(canvas);
        this.mViewRCHelper.afterDraw(canvas);
    }

    @Override
    public ac.a getTouchCoords() {
        return this.axd;
    }

    public float getVisiblePercent() {
        return this.aLQ.getVisiblePercent();
    }

    protected void init(Context context, AttributeSet attributeSet) {
        if (attributeSet != null) {
            int i = R.attr.ksad_ratio;
            int[] iArr = {i};
            Arrays.sort(iArr);
            TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, iArr);
            this.mRatio = typedArrayObtainStyledAttributes.getFloat(Arrays.binarySearch(iArr, i), 0.0f);
            typedArrayObtainStyledAttributes.recycle();
        }
        g gVar = new g(getPvView(), this);
        this.aLQ = gVar;
        gVar.bR(true);
        h hVar = new h();
        this.mViewRCHelper = hVar;
        hVar.initAttrs(context, attributeSet);
    }

    @Override
    @Deprecated
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        sn();
    }

    @Override
    @Deprecated
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        so();
    }

    @Override
    public void onFinishTemporaryDetach() {
        super.onFinishTemporaryDetach();
        sn();
    }

    @Override
    protected void onMeasure(int i, int i2) {
        if (this.mRatio != 0.0f) {
            if (this.widthBasedRatio) {
                i2 = View.MeasureSpec.makeMeasureSpec((int) (View.MeasureSpec.getSize(i) * this.mRatio), 1073741824);
            } else {
                i = View.MeasureSpec.makeMeasureSpec((int) (View.MeasureSpec.getSize(i2) / this.mRatio), 1073741824);
            }
        }
        super.onMeasure(i, i2);
    }

    @Override
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        this.aLQ.b(i, i2, i3, i4);
        super.onSizeChanged(i, i2, i3, i4);
        this.aLQ.KF();
        this.mViewRCHelper.onSizeChanged(i, i2);
    }

    @Override
    public void onStartTemporaryDetach() {
        super.onStartTemporaryDetach();
        so();
    }

    public void setAllCorner(boolean z) {
        this.mViewRCHelper.getCornerConf().setAllCorner(z);
    }

    public void setRadius(float f) {
        this.mViewRCHelper.setRadius(f);
        postInvalidate();
    }

    public final void setRadius(float f, float f2, float f3, float f4) {
        this.mViewRCHelper.setRadius(getRadius(f, f2, f3, f4));
        postInvalidate();
    }

    public void setRatio(float f) {
        this.mRatio = f;
    }

    public void setViewVisibleListener(i iVar) {
        this.aLR = iVar;
    }

    public void setVisiblePercent(float f) {
        this.aLQ.setVisiblePercent(f);
    }

    public void setWidthBasedRatio(boolean z) {
        this.widthBasedRatio = z;
    }

    public void z(View view) {
        i iVar = this.aLR;
        if (iVar != null) {
            iVar.z(view);
        }
    }
}
