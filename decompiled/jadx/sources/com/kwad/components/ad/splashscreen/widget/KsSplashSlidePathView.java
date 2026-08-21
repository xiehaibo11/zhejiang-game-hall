package com.kwad.components.ad.splashscreen.widget;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Path;
import android.util.AttributeSet;
import android.view.GestureDetector;
import android.view.MotionEvent;
import android.widget.ImageView;

/* JADX INFO: loaded from: classes2.dex */
public class KsSplashSlidePathView extends ImageView {
    private Path Gf;
    private Paint Gg;
    private float Gh;
    private float Gi;
    private float Gj;
    private float Gk;
    private int Gl;
    private a Gm;
    private GestureDetector Gn;

    public interface a {
        void a(float f, float f2, float f3, float f4);

        void lp();
    }

    public KsSplashSlidePathView(Context context) {
        super(context);
        this.Gl = Color.parseColor("#66ffffff");
        init();
    }

    public KsSplashSlidePathView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        this.Gl = Color.parseColor("#66ffffff");
        init();
    }

    private void b(MotionEvent motionEvent) {
        if (this.Gn.onTouchEvent(motionEvent)) {
            return;
        }
        int actionMasked = motionEvent.getActionMasked();
        if (actionMasked == 0) {
            this.Gf.reset();
            this.Gh = motionEvent.getX();
            float y = motionEvent.getY();
            this.Gi = y;
            float f = this.Gh;
            this.Gj = f;
            this.Gk = y;
            this.Gf.moveTo(f, y);
            invalidate();
            if (this.Gm != null) {
            }
            return;
        }
        if (actionMasked != 1) {
            if (actionMasked != 2) {
                return;
            }
            c(motionEvent.getX(), motionEvent.getY());
            invalidate();
            return;
        }
        this.Gf.reset();
        invalidate();
        a aVar = this.Gm;
        if (aVar != null) {
            aVar.a(this.Gh, this.Gi, motionEvent.getX(), motionEvent.getY());
        }
    }

    private void c(float f, float f2) {
        float fAbs = Math.abs(f - this.Gj);
        float fAbs2 = Math.abs(f2 - this.Gk);
        if (fAbs >= 3.0f || fAbs2 >= 3.0f) {
            Path path = this.Gf;
            float f3 = this.Gj;
            float f4 = this.Gk;
            path.quadTo(f3, f4, (f + f3) / 2.0f, (f2 + f4) / 2.0f);
            this.Gj = f;
            this.Gk = f2;
        }
    }

    private void init() {
        this.Gf = new Path();
        Paint paint = new Paint();
        this.Gg = paint;
        paint.setStrokeCap(Paint.Cap.ROUND);
        this.Gg.setStrokeWidth(com.kwad.sdk.d.a.a.a(getContext(), 15.0f));
        this.Gg.setStyle(Paint.Style.STROKE);
        this.Gg.setColor(this.Gl);
        this.Gg.setDither(true);
        this.Gn = new GestureDetector(new GestureDetector.OnGestureListener() { // from class: com.kwad.components.ad.splashscreen.widget.KsSplashSlidePathView.1
            @Override // android.view.GestureDetector.OnGestureListener
            public final boolean onDown(MotionEvent motionEvent) {
                return false;
            }

            @Override // android.view.GestureDetector.OnGestureListener
            public final boolean onFling(MotionEvent motionEvent, MotionEvent motionEvent2, float f, float f2) {
                return false;
            }

            @Override // android.view.GestureDetector.OnGestureListener
            public final void onLongPress(MotionEvent motionEvent) {
            }

            @Override // android.view.GestureDetector.OnGestureListener
            public final boolean onScroll(MotionEvent motionEvent, MotionEvent motionEvent2, float f, float f2) {
                return false;
            }

            @Override // android.view.GestureDetector.OnGestureListener
            public final void onShowPress(MotionEvent motionEvent) {
            }

            @Override // android.view.GestureDetector.OnGestureListener
            public final boolean onSingleTapUp(MotionEvent motionEvent) {
                if (KsSplashSlidePathView.this.Gm == null) {
                    return false;
                }
                KsSplashSlidePathView.this.Gm.lp();
                return true;
            }
        });
    }

    @Override // android.widget.ImageView, android.view.View
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        canvas.drawPath(this.Gf, this.Gg);
    }

    @Override // android.view.View
    public boolean onTouchEvent(MotionEvent motionEvent) {
        b(motionEvent);
        return true;
    }

    public void setOnSlideTouchListener(a aVar) {
        this.Gm = aVar;
    }
}
