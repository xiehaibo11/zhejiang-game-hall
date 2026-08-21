package com.kwad.sdk.widget;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.LinearGradient;
import android.graphics.Matrix;
import android.graphics.Paint;
import android.graphics.Path;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Shader;
import android.os.SystemClock;
import android.util.AttributeSet;
import android.view.View;

public class DownloadProgressBar extends View {
    private Runnable Dm;
    Paint aLG;
    Paint aLH;
    Paint aLI;
    private String aLJ;
    private float aLK;
    private Rect aLL;
    private LinearGradient aLM;
    private LinearGradient aLN;
    private LinearGradient aLO;
    private Matrix mMatrix;
    private Path mPath;
    private RectF mRectF;
    private long mStartTime;

    public DownloadProgressBar(Context context) {
        this(context, null, 0);
    }

    public DownloadProgressBar(Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0);
    }

    public DownloadProgressBar(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        this.Dm = new Runnable() {
            @Override
            public final void run() {
                DownloadProgressBar.this.invalidate();
                if (DownloadProgressBar.this.getWindowVisibility() == 0) {
                    DownloadProgressBar.this.postDelayed(this, 34L);
                }
            }
        };
        this.aLG = new Paint(1);
        this.aLH = new Paint(1);
        this.mRectF = new RectF();
        Paint paint = new Paint(1);
        this.aLI = paint;
        paint.setTextSize(com.kwad.sdk.d.a.a.a(context, 16.0f));
        this.aLI.setColor(-1);
        this.aLI.setTextAlign(Paint.Align.CENTER);
        this.aLL = new Rect();
        this.mMatrix = new Matrix();
        this.mPath = new Path();
    }

    @Override
    protected void onDetachedFromWindow() {
        super.onDetachedFromWindow();
        removeCallbacks(this.Dm);
    }

    @Override
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        canvas.clipPath(this.mPath);
        this.aLG.setShader(this.aLM);
        canvas.drawRect(this.mRectF, this.aLG);
        this.aLG.setShader(this.aLN);
        canvas.drawRect(0.0f, 0.0f, (getWidth() * this.aLK) / 100.0f, getHeight(), this.aLG);
        float f = this.aLK;
        float f2 = 0.0f;
        if (f > 0.0f && f < 100.0f) {
            long jElapsedRealtime = (SystemClock.elapsedRealtime() - this.mStartTime) % 2500;
            float f3 = jElapsedRealtime >= 1500 ? 0.0f : jElapsedRealtime / 1500.0f;
            this.mMatrix.reset();
            this.mMatrix.setScale(1.0f, f3);
            this.aLO.setLocalMatrix(this.mMatrix);
            this.aLH.setShader(this.aLO);
            canvas.drawRect(0.0f, 0.0f, ((getWidth() * this.aLK) / 100.0f) * f3, getHeight(), this.aLH);
            if (jElapsedRealtime > 500 && jElapsedRealtime <= 1500) {
                f2 = (jElapsedRealtime - 500) / 1000.0f;
            }
            float width = ((getWidth() * this.aLK) / 100.0f) * f2;
            this.mMatrix.reset();
            this.mMatrix.setScale(1.0f, f3);
            this.aLO.setLocalMatrix(this.mMatrix);
            this.aLH.setShader(this.aLO);
            canvas.drawRect(0.0f, 0.0f, width, getHeight(), this.aLH);
        }
        String str = this.aLJ;
        if (str != null) {
            this.aLI.getTextBounds(str, 0, str.length(), this.aLL);
            canvas.drawText(this.aLJ, getWidth() / 2.0f, (getHeight() / 2.0f) - ((this.aLL.top + this.aLL.bottom) / 2.0f), this.aLI);
        }
    }

    @Override
    protected void onSizeChanged(int i, int i2, int i3, int i4) {
        super.onSizeChanged(i, i2, i3, i4);
        this.aLM = new LinearGradient(0.0f, 0.0f, getMeasuredWidth(), 0.0f, new int[]{1291525714, 1291569420}, new float[]{0.0f, 1.0f}, Shader.TileMode.CLAMP);
        this.aLN = new LinearGradient(0.0f, 0.0f, getMeasuredWidth(), 0.0f, new int[]{-319918, -276212}, new float[]{0.0f, 1.0f}, Shader.TileMode.CLAMP);
        this.aLG.setShader(this.aLM);
        LinearGradient linearGradient = new LinearGradient(0.0f, 0.0f, getMeasuredWidth(), 0.0f, new int[]{16501004, -276212}, new float[]{0.0f, 1.0f}, Shader.TileMode.CLAMP);
        this.aLO = linearGradient;
        this.aLH.setShader(linearGradient);
        float f = i;
        this.mRectF.set(0.0f, 0.0f, f, i2);
        this.mPath.reset();
        float f2 = f / 2.0f;
        this.mPath.addRoundRect(this.mRectF, f2, f2, Path.Direction.CW);
    }

    @Override
    protected void onVisibilityChanged(View view, int i) {
        super.onVisibilityChanged(view, i);
    }

    @Override
    protected void onWindowVisibilityChanged(int i) {
        super.onWindowVisibilityChanged(i);
        if (i != 0) {
            removeCallbacks(this.Dm);
            return;
        }
        float f = this.aLK;
        if (f <= 0.0f || f >= 100.0f) {
            return;
        }
        this.mStartTime = SystemClock.elapsedRealtime();
        post(this.Dm);
    }

    public void setProgress(float f) {
        this.aLK = f;
        invalidate();
        if (f == 0.0f || f == 100.0f) {
            removeCallbacks(this.Dm);
        } else if (getWindowVisibility() == 0 && this.mStartTime == 0) {
            post(this.Dm);
        }
    }

    public void setText(String str) {
        this.aLJ = str;
        invalidate();
    }
}
