package android.support.v4.widget;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Paint;
import android.graphics.RadialGradient;
import android.graphics.Shader;
import android.graphics.drawable.ShapeDrawable;
import android.graphics.drawable.shapes.OvalShape;
import android.os.Build;
import android.support.v4.content.ContextCompat;
import android.support.v4.view.ViewCompat;
import android.view.animation.Animation;
import android.widget.ImageView;

class CircleImageView extends ImageView {
    private static final int FILL_SHADOW_COLOR = 1023410176;
    private static final int KEY_SHADOW_COLOR = 503316480;
    private static final int SHADOW_ELEVATION = 4;
    private static final float SHADOW_RADIUS = 3.5f;
    private static final float X_OFFSET = 0.0f;
    private static final float Y_OFFSET = 1.75f;
    private Animation.AnimationListener mListener;
    int mShadowRadius;

    private class OvalShadow extends OvalShape {
        private RadialGradient mRadialGradient;
        private Paint mShadowPaint;
        final CircleImageView this$0;

        OvalShadow(CircleImageView r2, int r3) {
            this.this$0 = r2;
            this.mShadowPaint = new Paint();
            r2.mShadowRadius = r3;
            updateRadialGradient((int) rect().width());
        }

        @Override
        protected void onResize(float r1, float r2) {
            super.onResize(r1, r2);
            updateRadialGradient((int) r1);
        }

        @Override
        public void draw(Canvas r5, Paint r6) {
            float r2 = this.this$0.getWidth() / 2;
            float r1 = this.this$0.getHeight() / 2;
            r5.drawCircle(r2, r1, r2, this.mShadowPaint);
            r5.drawCircle(r2, r1, r0 - this.this$0.mShadowRadius, r6);
        }

        private void updateRadialGradient(int r9) {
            float r2 = r9 / 2;
            this.mRadialGradient = new RadialGradient(r2, r2, this.this$0.mShadowRadius, new int[]{CircleImageView.FILL_SHADOW_COLOR, 0}, null, Shader.TileMode.CLAMP);
            this.mShadowPaint.setShader(this.mRadialGradient);
        }
    }

    CircleImageView(Context r6, int r7) {
        super(r6);
        float r62 = getContext().getResources().getDisplayMetrics().density;
        int r0 = (int) (Y_OFFSET * r62);
        int r1 = (int) (0.0f * r62);
        this.mShadowRadius = (int) (SHADOW_RADIUS * r62);
        if (elevationSupported() == false) goto L5;
        ShapeDrawable r02 = new ShapeDrawable(new OvalShape());
        ViewCompat.setElevation(this, r62 * 4.0f);
    L6:
        r02.getPaint().setColor(r7);
        ViewCompat.setBackground(this, r02);
        return;
    L5:
        ShapeDrawable r2 = new ShapeDrawable(new OvalShadow(this, this.mShadowRadius));
        setLayerType(1, r2.getPaint());
        r2.getPaint().setShadowLayer(this.mShadowRadius, r1, r0, KEY_SHADOW_COLOR);
        int r63 = this.mShadowRadius;
        setPadding(r63, r63, r63, r63);
        r02 = r2;
        goto L6
    }

    private boolean elevationSupported() {
        if (Build.VERSION.SDK_INT < 21) goto L5;
        return true;
    L5:
        return false;
    }

    @Override
    protected void onMeasure(int r2, int r3) {
        super.onMeasure(r2, r3);
        if (elevationSupported() == true) goto L6;
        setMeasuredDimension(getMeasuredWidth() + (this.mShadowRadius * 2), getMeasuredHeight() + (this.mShadowRadius * 2));
        return;
    }

    public void setAnimationListener(Animation.AnimationListener r1) {
        this.mListener = r1;
    }

    @Override
    public void onAnimationStart() {
        super.onAnimationStart();
        Animation.AnimationListener r0 = this.mListener;
        if (r0 == null) goto L6;
        r0.onAnimationStart(getAnimation());
        return;
    }

    @Override
    public void onAnimationEnd() {
        super.onAnimationEnd();
        Animation.AnimationListener r0 = this.mListener;
        if (r0 == null) goto L6;
        r0.onAnimationEnd(getAnimation());
        return;
    }

    public void setBackgroundColorRes(int r2) {
        setBackgroundColor(ContextCompat.getColor(getContext(), r2));
    }

    @Override
    public void setBackgroundColor(int r2) {
        if ((getBackground() instanceof ShapeDrawable) == false) goto L6;
        ((ShapeDrawable) getBackground()).getPaint().setColor(r2);
        return;
    }
}
