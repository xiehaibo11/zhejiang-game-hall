package com.kwad.sdk.core.imageloader.core.display;

public class RoundedVignetteBitmapDisplayer extends com.kwad.sdk.core.imageloader.core.display.RoundedBitmapDisplayer {

    protected static class RoundedVignetteDrawable extends com.kwad.sdk.core.imageloader.core.display.RoundedBitmapDisplayer.RoundedDrawable {
        RoundedVignetteDrawable(android.graphics.Bitmap r1, int r2, int r3) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                return
        }

        @Override
        protected void onBoundsChange(android.graphics.Rect r10) {
                r9 = this;
                super.onBoundsChange(r10)
                android.graphics.RadialGradient r10 = new android.graphics.RadialGradient
                android.graphics.RectF r0 = r9.mRect
                float r1 = r0.centerX()
                android.graphics.RectF r0 = r9.mRect
                float r0 = r0.centerY()
                r7 = 1065353216(0x3f800000, float:1.0)
                float r0 = r0 * r7
                r8 = 1060320051(0x3f333333, float:0.7)
                float r2 = r0 / r8
                android.graphics.RectF r0 = r9.mRect
                float r0 = r0.centerX()
                r3 = 1067869798(0x3fa66666, float:1.3)
                float r3 = r3 * r0
                r0 = 3
                int[] r4 = new int[r0]
                r4 = {x004e: FILL_ARRAY_DATA , data: [0, 0, 2130706432} // fill-array
                float[] r5 = new float[r0]
                r5 = {x0058: FILL_ARRAY_DATA , data: [0, 1060320051, 1065353216} // fill-array
                android.graphics.Shader$TileMode r6 = android.graphics.Shader.TileMode.CLAMP
                r0 = r10
                r0.<init>(r1, r2, r3, r4, r5, r6)
                android.graphics.Matrix r0 = new android.graphics.Matrix
                r0.<init>()
                r0.setScale(r7, r8)
                r10.setLocalMatrix(r0)
                android.graphics.Paint r0 = r9.paint
                android.graphics.ComposeShader r1 = new android.graphics.ComposeShader
                android.graphics.BitmapShader r2 = r9.bitmapShader
                android.graphics.PorterDuff$Mode r3 = android.graphics.PorterDuff.Mode.SRC_OVER
                r1.<init>(r2, r10, r3)
                r0.setShader(r1)
                return
        }
    }

    public RoundedVignetteBitmapDisplayer(int r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public void display(com.kwad.sdk.core.imageloader.core.decode.DecodedResult r3, com.kwad.sdk.core.imageloader.core.imageaware.ImageAware r4, com.kwad.sdk.core.imageloader.core.assist.LoadedFrom r5) {
            r2 = this;
            boolean r5 = r4 instanceof com.kwad.sdk.core.imageloader.core.imageaware.ImageViewAware
            if (r5 == 0) goto L13
            com.kwad.sdk.core.imageloader.core.display.RoundedVignetteBitmapDisplayer$RoundedVignetteDrawable r5 = new com.kwad.sdk.core.imageloader.core.display.RoundedVignetteBitmapDisplayer$RoundedVignetteDrawable
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
