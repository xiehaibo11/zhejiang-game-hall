package com.kwad.sdk.core.imageloader.core.display;

public class RoundedBitmapDisplayer implements com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer {
    protected final int cornerRadius;
    protected final int margin;

    public static class RoundedDrawable extends android.graphics.drawable.Drawable {
        protected final android.graphics.BitmapShader bitmapShader;
        protected final float cornerRadius;
        protected final android.graphics.RectF mBitmapRect;
        protected final android.graphics.RectF mRect;
        protected final int margin;
        protected final android.graphics.Paint paint;

        public RoundedDrawable(android.graphics.Bitmap r3, int r4, int r5) {
                r2 = this;
                r2.<init>()
                android.graphics.RectF r0 = new android.graphics.RectF
                r0.<init>()
                r2.mRect = r0
                float r4 = (float) r4
                r2.cornerRadius = r4
                r2.margin = r5
                android.graphics.BitmapShader r4 = new android.graphics.BitmapShader
                android.graphics.Shader$TileMode r0 = android.graphics.Shader.TileMode.CLAMP
                r4.<init>(r3, r0, r0)
                r2.bitmapShader = r4
                android.graphics.RectF r4 = new android.graphics.RectF
                float r0 = (float) r5
                int r1 = r3.getWidth()
                int r1 = r1 - r5
                float r1 = (float) r1
                int r3 = r3.getHeight()
                int r3 = r3 - r5
                float r3 = (float) r3
                r4.<init>(r0, r0, r1, r3)
                r2.mBitmapRect = r4
                android.graphics.Paint r3 = new android.graphics.Paint
                r3.<init>()
                r2.paint = r3
                r4 = 1
                r3.setAntiAlias(r4)
                android.graphics.Paint r3 = r2.paint
                android.graphics.BitmapShader r5 = r2.bitmapShader
                r3.setShader(r5)
                android.graphics.Paint r3 = r2.paint
                r3.setFilterBitmap(r4)
                android.graphics.Paint r3 = r2.paint
                r3.setDither(r4)
                return
        }

        @Override
        public void draw(android.graphics.Canvas r4) {
                r3 = this;
                android.graphics.RectF r0 = r3.mRect
                float r1 = r3.cornerRadius
                android.graphics.Paint r2 = r3.paint
                r4.drawRoundRect(r0, r1, r1, r2)
                return
        }

        @Override
        public int getOpacity() {
                r1 = this;
                r0 = -3
                return r0
        }

        @Override
        protected void onBoundsChange(android.graphics.Rect r6) {
                r5 = this;
                super.onBoundsChange(r6)
                android.graphics.RectF r0 = r5.mRect
                int r1 = r5.margin
                float r2 = (float) r1
                float r1 = (float) r1
                int r3 = r6.width()
                int r4 = r5.margin
                int r3 = r3 - r4
                float r3 = (float) r3
                int r6 = r6.height()
                int r4 = r5.margin
                int r6 = r6 - r4
                float r6 = (float) r6
                r0.set(r2, r1, r3, r6)
                android.graphics.Matrix r6 = new android.graphics.Matrix
                r6.<init>()
                android.graphics.RectF r0 = r5.mBitmapRect
                android.graphics.RectF r1 = r5.mRect
                android.graphics.Matrix$ScaleToFit r2 = android.graphics.Matrix.ScaleToFit.FILL
                r6.setRectToRect(r0, r1, r2)
                android.graphics.BitmapShader r0 = r5.bitmapShader
                r0.setLocalMatrix(r6)
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

    public RoundedBitmapDisplayer(int r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public RoundedBitmapDisplayer(int r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.cornerRadius = r1
            r0.margin = r2
            return
    }

    @Override
    public void display(com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3, com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r4, com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r5) {
            r2 = this;
            boolean r5 = r4 instanceof com.kwad.sdk.core.imageloader.core.imageaware.ImageViewAware
            if (r5 == 0) goto L13
            com.kwad.sdk.core.imageloader.core.display.RoundedBitmapDisplayer$RoundedDrawable r5 = new com.kwad.sdk.core.imageloader.core.display.RoundedBitmapDisplayer$RoundedDrawable
            android.graphics.Bitmap r3 = r3.mBitmap
            int r0 = r2.cornerRadius
            int r1 = r2.margin
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
