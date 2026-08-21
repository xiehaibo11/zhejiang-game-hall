package com.kwad.components.ad.splashscreen.widget;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.ValueAnimator;
import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.RectF;
import android.util.AttributeSet;
import android.view.View;
import android.view.animation.LinearInterpolator;
import android.widget.FrameLayout;
import android.widget.TextView;
import com.kwad.components.ad.splashscreen.local.SplashSkipViewModel;
import com.kwad.components.ad.splashscreen.widget.SkipView;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdInfo;
import com.kwad.sdk.widget.KSFrameLayout;

/* JADX INFO: loaded from: classes2.dex */
public class CircleSkipView extends KSFrameLayout implements a {
    private float ER;
    private float ES;
    private int ET;
    private ValueAnimator EU;
    private boolean EV;
    private SkipView.a EW;
    private long EX;
    private float EY;
    private Paint mPaint;
    private RectF mRectF;
    private int padding;
    private int radius;
    private boolean sy;

    public CircleSkipView(Context context) {
        this(context, null, 0);
    }

    public CircleSkipView(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public CircleSkipView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.mPaint = new Paint();
        this.ER = 270.0f;
        this.ES = 360.0f;
        this.radius = 0;
        this.ET = 0;
        this.EV = false;
        this.EX = 0L;
        this.EY = 0.0f;
        this.padding = 0;
        this.sy = true;
        W(context);
    }

    private void W(Context context) {
        FrameLayout.LayoutParams layoutParams = new FrameLayout.LayoutParams(-2, -2);
        layoutParams.gravity = 17;
        X(context);
        addView(Y(context), layoutParams);
        setOnClickListener(new View.OnClickListener() { // from class: com.kwad.components.ad.splashscreen.widget.CircleSkipView.1
            @Override // android.view.View.OnClickListener
            public final void onClick(View view) {
                if (CircleSkipView.this.EW != null) {
                    CircleSkipView.this.EW.kU();
                }
            }
        });
    }

    private void X(Context context) {
        this.ET = com.kwad.sdk.d.a.a.a(context, 2.0f);
        int iA = com.kwad.sdk.d.a.a.a(context, 32.0f);
        int i = this.ET;
        this.radius = iA - i;
        this.padding = i / 2;
        int i2 = this.padding;
        int i3 = this.radius;
        this.mRectF = new RectF(i2, i2, i3 + i2, i3 + i2);
    }

    private static TextView Y(Context context) {
        TextView textView = new TextView(context);
        textView.setText(context.getString(R.string.ksad_skip_text));
        textView.setTextColor(-1);
        textView.setTextSize(12.0f);
        return textView;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void Y(int i) {
        SkipView.a aVar = this.EW;
        if (aVar != null) {
            aVar.Z(i);
        }
    }

    static /* synthetic */ boolean a(CircleSkipView circleSkipView, boolean z) {
        circleSkipView.EV = true;
        return true;
    }

    private void c(final int i, final boolean z) {
        ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(0.0f, 1.0f);
        this.EU = valueAnimatorOfFloat;
        valueAnimatorOfFloat.setDuration(i);
        this.EU.setInterpolator(new LinearInterpolator());
        this.EU.addListener(new AnimatorListenerAdapter() { // from class: com.kwad.components.ad.splashscreen.widget.CircleSkipView.2
            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationEnd(Animator animator) {
                if (CircleSkipView.this.EY != 1.0f || CircleSkipView.this.EW == null) {
                    return;
                }
                CircleSkipView.this.EW.kV();
            }
        });
        this.EU.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.kwad.components.ad.splashscreen.widget.CircleSkipView.3
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                float fFloatValue = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                CircleSkipView.this.EY = fFloatValue;
                CircleSkipView circleSkipView = CircleSkipView.this;
                circleSkipView.Y((int) ((i / 1000) * circleSkipView.EY));
                if (z) {
                    CircleSkipView.a(CircleSkipView.this, true);
                    float f = fFloatValue * 360.0f;
                    CircleSkipView.this.ER = 270.0f - f;
                    CircleSkipView.this.ES = 360.0f - f;
                    CircleSkipView.this.invalidate();
                }
            }
        });
    }

    private void lC() {
        this.EV = true;
        ValueAnimator valueAnimator = this.EU;
        if (valueAnimator != null) {
            valueAnimator.setCurrentPlayTime(this.EX);
            this.EU.start();
        }
    }

    private void lD() {
        this.EV = false;
        ValueAnimator valueAnimator = this.EU;
        if (valueAnimator != null) {
            this.EX = valueAnimator.getCurrentPlayTime();
            this.EU.cancel();
        }
    }

    private void setAnimationPaint(Paint paint) {
        paint.reset();
        paint.setAntiAlias(true);
        paint.setStyle(Paint.Style.STROKE);
        paint.setStrokeWidth(this.ET);
        paint.setColor(-1);
    }

    private void setBgCirclePaint(Paint paint) {
        paint.reset();
        paint.setStyle(Paint.Style.FILL);
        paint.setColor(Color.parseColor("#4D000000"));
        paint.setAntiAlias(true);
    }

    private void setOuterCirclePaint(Paint paint) {
        paint.reset();
        paint.setStyle(Paint.Style.STROKE);
        paint.setStrokeWidth(this.ET);
        paint.setColor(Color.parseColor("#33FFFFFF"));
        paint.setAntiAlias(true);
    }

    @Override // com.kwad.components.ad.splashscreen.widget.a
    public final void a(SplashSkipViewModel splashSkipViewModel, AdInfo adInfo) {
        this.sy = com.kwad.sdk.core.response.b.a.ci(adInfo);
        boolean zCj = com.kwad.sdk.core.response.b.a.cj(adInfo);
        if (this.sy) {
            setVisibility(0);
        }
        c(splashSkipViewModel.skipSecond * 1000, zCj);
    }

    @Override // com.kwad.components.ad.splashscreen.widget.a
    public final int ac(int i) {
        getLayoutParams().height = com.kwad.sdk.d.a.a.a(getContext(), 35.0f);
        return getWidth();
    }

    @Override // com.kwad.components.ad.splashscreen.widget.a
    public final void bd() {
        lD();
    }

    @Override // com.kwad.sdk.widget.KSFrameLayout, android.view.ViewGroup, android.view.View
    public void dispatchDraw(Canvas canvas) {
        setBgCirclePaint(this.mPaint);
        canvas.drawCircle(getWidth() / 2.0f, getHeight() / 2.0f, (Math.min(getWidth(), getHeight()) / 2.0f) - this.ET, this.mPaint);
        setOuterCirclePaint(this.mPaint);
        canvas.drawArc(this.mRectF, 0.0f, 360.0f, false, this.mPaint);
        if (this.EV) {
            setAnimationPaint(this.mPaint);
            canvas.drawArc(this.mRectF, this.ER, -this.ES, false, this.mPaint);
        }
        super.dispatchDraw(canvas);
    }

    @Override // com.kwad.components.ad.splashscreen.widget.a
    public void setOnViewListener(SkipView.a aVar) {
        this.EW = aVar;
    }

    @Override // com.kwad.components.ad.splashscreen.widget.a
    public final void w(AdInfo adInfo) {
        lD();
    }

    @Override // com.kwad.components.ad.splashscreen.widget.a
    public final void x(AdInfo adInfo) {
        lC();
    }
}
