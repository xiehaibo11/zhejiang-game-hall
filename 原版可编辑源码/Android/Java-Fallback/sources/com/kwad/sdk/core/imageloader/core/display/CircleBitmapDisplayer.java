package com.kwad.sdk.core.imageloader.core.display;

public class CircleBitmapDisplayer implements com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer {
    protected final java.lang.Integer strokeColor;
    protected final float strokeWidth;

    public static class CircleDrawable extends android.graphics.drawable.Drawable {
        protected final android.graphics.BitmapShader bitmapShader;
        protected final android.graphics.RectF mBitmapRect;
        protected final android.graphics.RectF mRect;
        protected final android.graphics.Paint paint;
        protected float radius;
        protected final android.graphics.Paint strokePaint;
        protected float strokeRadius;
        protected final float strokeWidth;

        public CircleDrawable(android.graphics.Bitmap r4, java.lang.Integer r5, float r6) {
                r3 = this;
                r3.<init>()
                android.graphics.RectF r0 = new android.graphics.RectF
                r0.<init>()
                r3.mRect = r0
                int r0 = r4.getWidth()
                int r1 = r4.getHeight()
                int r0 = java.lang.Math.min(r0, r1)
                int r0 = r0 / 2
                float r0 = (float) r0
                r3.radius = r0
                android.graphics.BitmapShader r0 = new android.graphics.BitmapShader
                android.graphics.Shader$TileMode r1 = android.graphics.Shader.TileMode.CLAMP
                r0.<init>(r4, r1, r1)
                r3.bitmapShader = r0
                android.graphics.RectF r0 = new android.graphics.RectF
                int r1 = r4.getWidth()
                float r1 = (float) r1
                int r4 = r4.getHeight()
                float r4 = (float) r4
                r2 = 0
                r0.<init>(r2, r2, r1, r4)
                r3.mBitmapRect = r0
                android.graphics.Paint r4 = new android.graphics.Paint
                r4.<init>()
                r3.paint = r4
                r0 = 1
                r4.setAntiAlias(r0)
                android.graphics.Paint r4 = r3.paint
                android.graphics.BitmapShader r1 = r3.bitmapShader
                r4.setShader(r1)
                android.graphics.Paint r4 = r3.paint
                r4.setFilterBitmap(r0)
                android.graphics.Paint r4 = r3.paint
                r4.setDither(r0)
                if (r5 != 0) goto L58
                r4 = 0
                r3.strokePaint = r4
                goto L77
            L58:
                android.graphics.Paint r4 = new android.graphics.Paint
                r4.<init>()
                r3.strokePaint = r4
                android.graphics.Paint$Style r1 = android.graphics.Paint.Style.STROKE
                r4.setStyle(r1)
                android.graphics.Paint r4 = r3.strokePaint
                int r5 = r5.intValue()
                r4.setColor(r5)
                android.graphics.Paint r4 = r3.strokePaint
                r4.setStrokeWidth(r6)
                android.graphics.Paint r4 = r3.strokePaint
                r4.setAntiAlias(r0)
            L77:
                r3.strokeWidth = r6
                float r4 = r3.radius
                r5 = 1073741824(0x40000000, float:2.0)
                float r6 = r6 / r5
                float r4 = r4 - r6
                r3.strokeRadius = r4
                return
        }

        @Override
        public void draw(android.graphics.Canvas r4) {
                r3 = this;
                float r0 = r3.radius
                android.graphics.Paint r1 = r3.paint
                r4.drawCircle(r0, r0, r0, r1)
                android.graphics.Paint r0 = r3.strokePaint
                if (r0 == 0) goto L12
                float r1 = r3.radius
                float r2 = r3.strokeRadius
                r4.drawCircle(r1, r1, r2, r0)
            L12:
                return
        }

        @Override
        public int getOpacity() {
                r1 = this;
                r0 = -3
                return r0
        }

        @Override
        protected void onBoundsChange(android.graphics.Rect r5) {
                r4 = this;
                super.onBoundsChange(r5)
                android.graphics.RectF r0 = r4.mRect
                int r1 = r5.width()
                float r1 = (float) r1
                int r2 = r5.height()
                float r2 = (float) r2
                r3 = 0
                r0.set(r3, r3, r1, r2)
                int r0 = r5.width()
                int r5 = r5.height()
                int r5 = java.lang.Math.min(r0, r5)
                int r5 = r5 / 2
                float r5 = (float) r5
                r4.radius = r5
                float r0 = r4.strokeWidth
                r1 = 1073741824(0x40000000, float:2.0)
                float r0 = r0 / r1
                float r5 = r5 - r0
                r4.strokeRadius = r5
                android.graphics.Matrix r5 = new android.graphics.Matrix
                r5.<init>()
                android.graphics.RectF r0 = r4.mBitmapRect
                android.graphics.RectF r1 = r4.mRect
                android.graphics.Matrix$ScaleToFit r2 = android.graphics.Matrix.ScaleToFit.FILL
                r5.setRectToRect(r0, r1, r2)
                android.graphics.BitmapShader r0 = r4.bitmapShader
                r0.setLocalMatrix(r5)
                return
        }

        @Override
        public void setAlpha(int r2) {
                r1 = this;
                android.graphics.Paint r0 = r1.paint
                r0.setAlpha(r2)
                return
        }

        @Override
        public void setColorFilter(android.graphics.ColorFilter r2) {
                r1 = this;
                android.graphics.Paint r0 = r1.paint
                r0.setColorFilter(r2)
                return
        }
    }

    public CircleBitmapDisplayer() {
            r1 = this;
            r0 = 0
            r1.<init>(r0)
            return
    }

    public CircleBitmapDisplayer(java.lang.Integer r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public CircleBitmapDisplayer(java.lang.Integer r1, float r2) {
            r0 = this;
            r0.<init>()
            r0.strokeColor = r1
            r0.strokeWidth = r2
            return
    }

    @Override
    public void display(com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3, com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r4, com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r5) {
            r2 = this;
            boolean r5 = r4 instanceof com.kwad.sdk.core.imageloader.core.imageaware.ImageViewAware
            if (r5 == 0) goto L13
            com.kwad.sdk.core.imageloader.core.display.CircleBitmapDisplayer$CircleDrawable r5 = new com.kwad.sdk.core.imageloader.core.display.CircleBitmapDisplayer$CircleDrawable
            android.graphics.Bitmap r3 = r3.mBitmap
            java.lang.Integer r0 = r2.strokeColor
            float r1 = r2.strokeWidth
            r5.<init>(r3, r0, r1)
            r4.setImageDrawable(r5)
            return
        L13:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "ImageAware should wrap ImageView. ImageViewAware is expected."
            r3.<init>(r4)
            throw r3
    }
}
