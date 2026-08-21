package com.kwad.sdk.widget;

import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.util.AttributeSet;
import android.view.MotionEvent;
import android.view.View;
import android.widget.RelativeLayout;
import com.kwad.sdk.R;
import com.kwad.sdk.utils.ac;
import java.util.Arrays;
import java.util.concurrent.atomic.AtomicBoolean;

public class KSRelativeLayout extends RelativeLayout implements i {
    private final AtomicBoolean SN;
    private g aLQ;
    private i aLR;
    private final ac.a axd;
    private float mRatio;
    private h mViewRCHelper;

    public KSRelativeLayout(Context context) {
        super(context);
        this.SN = new AtomicBoolean(true);
        this.mRatio = 0.0f;
        this.axd = new ac.a();
        init(context, null);
    }

    public KSRelativeLayout(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.SN = new AtomicBoolean(true);
        this.mRatio = 0.0f;
        this.axd = new ac.a();
        init(context, attributeSet);
    }

    public KSRelativeLayout(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.SN = new AtomicBoolean(true);
        this.mRatio = 0.0f;
        this.axd = new ac.a();
        init(context, attributeSet);
    }

    private void init(Context context, AttributeSet attributeSet) {
        if (attributeSet != null) {
            int i = R.attr.ksad_ratio;
            int[] iArr = {i};
            Arrays.sort(iArr);
            TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, iArr);
            this.mRatio = typedArrayObtainStyledAttributes.getFloat(Arrays.binarySearch(iArr, i), 0.0f);
            typedArrayObtainStyledAttributes.recycle();
        }
        g gVar = new g(this, this);
        this.aLQ = gVar;
        gVar.bR(true);
        h hVar = new h();
        this.mViewRCHelper = hVar;
        hVar.initAttrs(context, attributeSet);
    }

    private void sn() {
        if (this.SN.getAndSet(false)) {
            com.kwad.sdk.core.e.c.i("KSRelativeLayout", "onViewAttached");
            aa();
        }
    }

    private void so() {
        if (this.SN.getAndSet(true)) {
            return;
        }
        com.kwad.sdk.core.e.c.i("KSRelativeLayout", "onViewDetached");
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

    public ac.a getTouchCoords() {
        return this.axd;
    }

    public float getVisiblePercent() {
        return this.aLQ.getVisiblePercent();
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
            i2 = View.MeasureSpec.makeMeasureSpec((int) (View.MeasureSpec.getSize(i) * this.mRatio), 1073741824);
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

    public void setRadius(float f) {
        this.mViewRCHelper.setRadius(f);
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

    @Override
    public final void z(View view) {
        i iVar = this.aLR;
        if (iVar != null) {
            iVar.z(view);
        }
    }
}
