package com.bumptech.glide.load.resource.bitmap;

public class GlideBitmapDrawable extends com.bumptech.glide.load.resource.drawable.GlideDrawable {
    private boolean applyGravity;
    private final android.graphics.Rect destRect;
    private int height;
    private boolean mutated;
    private com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable.BitmapState state;
    private int width;

    static class BitmapState extends android.graphics.drawable.Drawable.ConstantState {
        private static final android.graphics.Paint DEFAULT_PAINT = null;
        private static final int DEFAULT_PAINT_FLAGS = 6;
        private static final int GRAVITY = 119;
        final android.graphics.Bitmap bitmap;
        android.graphics.Paint paint;
        int targetDensity;

        static {
                android.graphics.Paint r0 = new android.graphics.Paint
                r1 = 6
                r0.<init>(r1)
                com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable.BitmapState.DEFAULT_PAINT = r0
                return
        }

        public BitmapState(android.graphics.Bitmap r2) {
                r1 = this;
                r1.<init>()
                android.graphics.Paint r0 = com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable.BitmapState.DEFAULT_PAINT
                r1.paint = r0
                r1.bitmap = r2
                return
        }

        BitmapState(com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable.BitmapState r2) {
                r1 = this;
                android.graphics.Bitmap r0 = r2.bitmap
                r1.<init>(r0)
                int r2 = r2.targetDensity
                r1.targetDensity = r2
                return
        }

        @Override
        public int getChangingConfigurations() {
                r1 = this;
                r0 = 0
                return r0
        }

        void mutatePaint() {
                r2 = this;
                android.graphics.Paint r0 = com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable.BitmapState.DEFAULT_PAINT
                android.graphics.Paint r1 = r2.paint
                if (r0 != r1) goto Le
                android.graphics.Paint r0 = new android.graphics.Paint
                r1 = 6
                r0.<init>(r1)
                r2.paint = r0
            Le:
                return
        }

        @Override
        public android.graphics.drawable.Drawable newDrawable() {
                r2 = this;
                com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable r0 = new com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable
                r1 = 0
                r0.<init>(r1, r2)
                return r0
        }

        @Override
        public android.graphics.drawable.Drawable newDrawable(android.content.res.Resources r2) {
                r1 = this;
                com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable r0 = new com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable
                r0.<init>(r2, r1)
                return r0
        }

        void setAlpha(int r2) {
                r1 = this;
                r1.mutatePaint()
                android.graphics.Paint r0 = r1.paint
                r0.setAlpha(r2)
                return
        }

        void setColorFilter(android.graphics.ColorFilter r2) {
                r1 = this;
                r1.mutatePaint()
                android.graphics.Paint r0 = r1.paint
                r0.setColorFilter(r2)
                return
        }
    }

    public GlideBitmapDrawable(android.content.res.Resources r2, android.graphics.Bitmap r3) {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable$BitmapState r0 = new com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable$BitmapState
            r0.<init>(r3)
            r1.<init>(r2, r0)
            return
    }

    GlideBitmapDrawable(android.content.res.Resources r2, com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable.BitmapState r3) {
            r1 = this;
            r1.<init>()
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r1.destRect = r0
            if (r3 == 0) goto L30
            r1.state = r3
            if (r2 == 0) goto L1d
            android.util.DisplayMetrics r2 = r2.getDisplayMetrics()
            int r2 = r2.densityDpi
            if (r2 != 0) goto L1a
            r2 = 160(0xa0, float:2.24E-43)
        L1a:
            r3.targetDensity = r2
            goto L1f
        L1d:
            int r2 = r3.targetDensity
        L1f:
            android.graphics.Bitmap r0 = r3.bitmap
            int r0 = r0.getScaledWidth(r2)
            r1.width = r0
            android.graphics.Bitmap r3 = r3.bitmap
            int r2 = r3.getScaledHeight(r2)
            r1.height = r2
            return
        L30:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "BitmapState must not be null"
            r2.<init>(r3)
            throw r2
    }

    @Override
    public void draw(android.graphics.Canvas r6) {
            r5 = this;
            boolean r0 = r5.applyGravity
            if (r0 == 0) goto L16
            r0 = 119(0x77, float:1.67E-43)
            int r1 = r5.width
            int r2 = r5.height
            android.graphics.Rect r3 = r5.getBounds()
            android.graphics.Rect r4 = r5.destRect
            android.view.Gravity.apply(r0, r1, r2, r3, r4)
            r0 = 0
            r5.applyGravity = r0
        L16:
            com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable$BitmapState r0 = r5.state
            android.graphics.Bitmap r0 = r0.bitmap
            r1 = 0
            android.graphics.Rect r2 = r5.destRect
            com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable$BitmapState r3 = r5.state
            android.graphics.Paint r3 = r3.paint
            r6.drawBitmap(r0, r1, r2, r3)
            return
    }

    public android.graphics.Bitmap getBitmap() {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable$BitmapState r0 = r1.state
            android.graphics.Bitmap r0 = r0.bitmap
            return r0
    }

    @Override
    public android.graphics.drawable.Drawable.ConstantState getConstantState() {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable$BitmapState r0 = r1.state
            return r0
    }

    @Override
    public int getIntrinsicHeight() {
            r1 = this;
            int r0 = r1.height
            return r0
    }

    @Override
    public int getIntrinsicWidth() {
            r1 = this;
            int r0 = r1.width
            return r0
    }

    @Override
    public int getOpacity() {
            r2 = this;
            com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable$BitmapState r0 = r2.state
            android.graphics.Bitmap r0 = r0.bitmap
            if (r0 == 0) goto L1b
            boolean r0 = r0.hasAlpha()
            if (r0 != 0) goto L1b
            com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable$BitmapState r0 = r2.state
            android.graphics.Paint r0 = r0.paint
            int r0 = r0.getAlpha()
            r1 = 255(0xff, float:3.57E-43)
            if (r0 >= r1) goto L19
            goto L1b
        L19:
            r0 = -1
            goto L1c
        L1b:
            r0 = -3
        L1c:
            return r0
    }

    @Override
    public boolean isAnimated() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean isRunning() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public android.graphics.drawable.Drawable mutate() {
            r2 = this;
            boolean r0 = r2.mutated
            if (r0 != 0) goto L16
            android.graphics.drawable.Drawable r0 = super.mutate()
            if (r0 != r2) goto L16
            com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable$BitmapState r0 = new com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable$BitmapState
            com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable$BitmapState r1 = r2.state
            r0.<init>(r1)
            r2.state = r0
            r0 = 1
            r2.mutated = r0
        L16:
            return r2
    }

    @Override
    protected void onBoundsChange(android.graphics.Rect r1) {
            r0 = this;
            super.onBoundsChange(r1)
            r1 = 1
            r0.applyGravity = r1
            return
    }

    @Override
    public void setAlpha(int r2) {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable$BitmapState r0 = r1.state
            android.graphics.Paint r0 = r0.paint
            int r0 = r0.getAlpha()
            if (r0 == r2) goto L12
            com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable$BitmapState r0 = r1.state
            r0.setAlpha(r2)
            r1.invalidateSelf()
        L12:
            return
    }

    @Override
    public void setColorFilter(android.graphics.ColorFilter r2) {
            r1 = this;
            com.bumptech.glide.load.resource.bitmap.GlideBitmapDrawable$BitmapState r0 = r1.state
            r0.setColorFilter(r2)
            r1.invalidateSelf()
            return
    }

    @Override
    public void setLoopCount(int r1) {
            r0 = this;
            return
    }

    @Override
    public void start() {
            r0 = this;
            return
    }

    @Override
    public void stop() {
            r0 = this;
            return
    }
}
