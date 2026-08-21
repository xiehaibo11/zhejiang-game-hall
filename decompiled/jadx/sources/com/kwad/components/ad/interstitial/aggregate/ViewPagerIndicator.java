package com.kwad.components.ad.interstitial.aggregate;

import android.animation.Animator;
import android.animation.AnimatorListenerAdapter;
import android.animation.ValueAnimator;
import android.content.Context;
import android.content.res.TypedArray;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.RectF;
import android.support.v4.view.PagerAdapter;
import android.support.v4.view.ViewPager;
import android.util.AttributeSet;
import android.view.View;
import com.kwad.sdk.R;

/* JADX INFO: loaded from: classes2.dex */
public class ViewPagerIndicator extends View {
    private float iA;
    private float iB;
    private float iC;
    private int iD;
    private Paint iE;
    private float iF;
    private boolean iG;
    private a iH;
    private ValueAnimator iI;
    private int im;
    private int iu;
    private int iv;
    private int iw;
    private float ix;
    private float iy;
    private Paint iz;
    private final Context mContext;

    public interface a {
        void cs();
    }

    public ViewPagerIndicator(Context context) {
        this(context, null);
    }

    public ViewPagerIndicator(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public ViewPagerIndicator(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.mContext = context;
        setWillNotDraw(false);
        a(context, attributeSet, i);
        cw();
    }

    private void a(Context context, AttributeSet attributeSet, int i) {
        TypedArray typedArrayObtainStyledAttributes = context.obtainStyledAttributes(attributeSet, R.styleable.ksad_ViewPagerIndicator, i, 0);
        this.iy = typedArrayObtainStyledAttributes.getDimension(R.styleable.ksad_ViewPagerIndicator_ksad_dot_distance, com.kwad.sdk.d.a.a.a(this.mContext, 5.0f));
        this.iA = typedArrayObtainStyledAttributes.getDimension(R.styleable.ksad_ViewPagerIndicator_ksad_dot_height, com.kwad.sdk.d.a.a.a(this.mContext, 6.0f));
        this.iB = typedArrayObtainStyledAttributes.getDimension(R.styleable.ksad_ViewPagerIndicator_ksad_dot_selected_width, com.kwad.sdk.d.a.a.a(this.mContext, 50.0f));
        this.iC = typedArrayObtainStyledAttributes.getDimension(R.styleable.ksad_ViewPagerIndicator_ksad_dot_unselected_width, com.kwad.sdk.d.a.a.a(this.mContext, 6.0f));
        this.iv = typedArrayObtainStyledAttributes.getColor(R.styleable.ksad_ViewPagerIndicator_ksad_default_color, getResources().getColor(R.color.ksad_88_white));
        this.iu = typedArrayObtainStyledAttributes.getColor(R.styleable.ksad_ViewPagerIndicator_ksad_height_color, getResources().getColor(R.color.ksad_white));
        typedArrayObtainStyledAttributes.recycle();
    }

    private void a(Canvas canvas) {
        float f;
        Paint paint;
        int i;
        RectF rectF = new RectF();
        for (int i2 = 0; i2 < this.iw; i2++) {
            int i3 = this.im;
            if (i2 < i3) {
                f = i2 * (this.iy + this.iC);
            } else {
                if (i2 == i3) {
                    rectF.left = i2 * (this.iy + this.iC);
                    float f2 = rectF.left;
                    float f3 = this.iC;
                    rectF.right = f2 + f3 + ((this.iB - f3) * (1.0f - this.ix));
                    if (this.iG) {
                        this.iz.setColor(this.iu);
                        paint = this.iz;
                        i = (int) (((1.0f - this.ix) * 127.0f) + 127.0f);
                        paint.setAlpha(i);
                    }
                    this.iz.setColor(this.iv);
                } else if (i2 == i3 + 1) {
                    float f4 = this.iy;
                    float f5 = this.iC;
                    rectF.left = ((i2 - 1) * (f4 + f5)) + f5 + ((this.iB - f5) * (1.0f - this.ix)) + f4;
                    float f6 = rectF.left;
                    float f7 = this.ix;
                    float f8 = this.iB;
                    float f9 = this.iC;
                    rectF.right = f6 + (f7 * (f8 - f9)) + f9;
                    if (this.iG) {
                        this.iz.setColor(this.iu);
                        paint = this.iz;
                        i = (int) (255.0f - ((1.0f - this.ix) * 127.0f));
                        paint.setAlpha(i);
                    }
                    this.iz.setColor(this.iv);
                } else {
                    float f10 = this.iy;
                    f = ((i2 - 1) * (this.iC + f10)) + f10 + this.iB;
                }
                rectF.top = 0.0f;
                rectF.bottom = rectF.top + this.iA;
                float f11 = this.iA;
                canvas.drawRoundRect(rectF, f11 / 2.0f, f11 / 2.0f, this.iz);
            }
            rectF.left = f;
            rectF.right = rectF.left + this.iC;
            this.iz.setColor(this.iv);
            rectF.top = 0.0f;
            rectF.bottom = rectF.top + this.iA;
            float f112 = this.iA;
            canvas.drawRoundRect(rectF, f112 / 2.0f, f112 / 2.0f, this.iz);
        }
    }

    static /* synthetic */ boolean a(ViewPagerIndicator viewPagerIndicator, boolean z) {
        viewPagerIndicator.iG = true;
        return true;
    }

    private void b(Canvas canvas) {
        if (this.iG || this.im != 0) {
            return;
        }
        RectF rectF = new RectF(0.0f, 0.0f, this.iF, this.iA);
        float f = this.iA;
        canvas.drawRoundRect(rectF, f / 2.0f, f / 2.0f, this.iE);
    }

    private void cw() {
        Paint paint = new Paint(1);
        this.iz = paint;
        paint.setStyle(Paint.Style.FILL_AND_STROKE);
        this.iz.setStrokeWidth(1.0f);
        this.iz.setColor(this.iv);
        Paint paint2 = new Paint(1);
        this.iE = paint2;
        paint2.setStyle(Paint.Style.FILL_AND_STROKE);
        this.iE.setStrokeWidth(1.0f);
        this.iE.setColor(this.iu);
    }

    private void cx() {
        if (this.iD <= 0) {
            setVisibility(8);
            return;
        }
        ValueAnimator valueAnimatorOfFloat = ValueAnimator.ofFloat(this.iC, this.iB);
        this.iI = valueAnimatorOfFloat;
        valueAnimatorOfFloat.setDuration(this.iD * 1000);
        this.iI.addUpdateListener(new ValueAnimator.AnimatorUpdateListener() { // from class: com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator.1
            @Override // android.animation.ValueAnimator.AnimatorUpdateListener
            public final void onAnimationUpdate(ValueAnimator valueAnimator) {
                ViewPagerIndicator.this.iF = ((Float) valueAnimator.getAnimatedValue()).floatValue();
                ViewPagerIndicator.this.invalidate();
            }
        });
        this.iI.addListener(new AnimatorListenerAdapter() { // from class: com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator.2
            @Override // android.animation.AnimatorListenerAdapter, android.animation.Animator.AnimatorListener
            public final void onAnimationEnd(Animator animator) {
                ViewPagerIndicator.a(ViewPagerIndicator.this, true);
                if (ViewPagerIndicator.this.iH != null) {
                    ViewPagerIndicator.this.iH.cs();
                }
            }
        });
        this.iI.start();
    }

    public final void cy() {
        ValueAnimator valueAnimator = this.iI;
        if (valueAnimator != null) {
            valueAnimator.pause();
        }
    }

    public final void cz() {
        ValueAnimator valueAnimator = this.iI;
        if (valueAnimator != null) {
            valueAnimator.resume();
        }
    }

    @Override // android.view.View
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        a(canvas);
        b(canvas);
    }

    @Override // android.view.View
    protected void onMeasure(int i, int i2) {
        super.onMeasure(i, i2);
        int size = View.MeasureSpec.getSize(i);
        int size2 = View.MeasureSpec.getSize(i2);
        int mode = View.MeasureSpec.getMode(i);
        int mode2 = View.MeasureSpec.getMode(i2);
        if (mode2 != 1073741824) {
            size2 = mode2 == Integer.MIN_VALUE ? (int) this.iA : 0;
        }
        if (mode != 1073741824) {
            if (mode == Integer.MIN_VALUE) {
                size = this.iw > 1 ? (int) (this.iB + ((r6 - 1) * (this.iy + this.iC))) : (int) this.iB;
            } else {
                size = 0;
            }
        }
        setMeasuredDimension(size, size2);
    }

    public void setFirstAdShowTime(int i) {
        this.iD = i;
    }

    public void setPlayProgressListener(a aVar) {
        this.iH = aVar;
    }

    public void setViewPager(ViewPager viewPager) {
        PagerAdapter adapter = viewPager.getAdapter();
        if (adapter == null) {
            return;
        }
        int count = adapter.getCount();
        this.iw = count;
        if (count <= 1) {
            return;
        }
        this.iG = false;
        viewPager.addOnPageChangeListener(new ViewPager.OnPageChangeListener() { // from class: com.kwad.components.ad.interstitial.aggregate.ViewPagerIndicator.3
            @Override // android.support.v4.view.ViewPager.OnPageChangeListener
            public final void onPageScrollStateChanged(int i) {
            }

            @Override // android.support.v4.view.ViewPager.OnPageChangeListener
            public final void onPageScrolled(int i, float f, int i2) {
                ViewPagerIndicator.this.im = i;
                ViewPagerIndicator.this.ix = f;
                ViewPagerIndicator.this.invalidate();
            }

            @Override // android.support.v4.view.ViewPager.OnPageChangeListener
            public final void onPageSelected(int i) {
                ViewPagerIndicator.this.im = i;
                ViewPagerIndicator.this.ix = 0.0f;
                ViewPagerIndicator.this.invalidate();
            }
        });
        cx();
    }
}
