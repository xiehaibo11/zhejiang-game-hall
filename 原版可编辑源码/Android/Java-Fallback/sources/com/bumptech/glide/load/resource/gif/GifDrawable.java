package com.bumptech.glide.load.resource.gif;

public class GifDrawable extends com.bumptech.glide.load.resource.drawable.GlideDrawable implements com.bumptech.glide.load.resource.gif.GifFrameLoader.FrameCallback {
    private boolean applyGravity;
    private final com.bumptech.glide.gifdecoder.GifDecoder decoder;
    private final android.graphics.Rect destRect;
    private final com.bumptech.glide.load.resource.gif.GifFrameLoader frameLoader;
    private boolean isRecycled;
    private boolean isRunning;
    private boolean isStarted;
    private boolean isVisible;
    private int loopCount;
    private int maxLoopCount;
    private final android.graphics.Paint paint;
    private final com.bumptech.glide.load.resource.gif.GifDrawable.GifState state;

    static class GifState extends android.graphics.drawable.Drawable.ConstantState {
        private static final int GRAVITY = 119;
        com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool bitmapPool;
        com.bumptech.glide.gifdecoder.GifDecoder.BitmapProvider bitmapProvider;
        android.content.Context context;
        byte[] data;
        android.graphics.Bitmap firstFrame;
        com.bumptech.glide.load.Transformation<android.graphics.Bitmap> frameTransformation;
        com.bumptech.glide.gifdecoder.GifHeader gifHeader;
        int targetHeight;
        int targetWidth;

        public GifState(com.bumptech.glide.gifdecoder.GifHeader r1, byte[] r2, android.content.Context r3, com.bumptech.glide.load.Transformation<android.graphics.Bitmap> r4, int r5, int r6, com.bumptech.glide.gifdecoder.GifDecoder.BitmapProvider r7, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r8, android.graphics.Bitmap r9) {
                r0 = this;
                r0.<init>()
                if (r9 == 0) goto L1c
                r0.gifHeader = r1
                r0.data = r2
                r0.bitmapPool = r8
                r0.firstFrame = r9
                android.content.Context r1 = r3.getApplicationContext()
                r0.context = r1
                r0.frameTransformation = r4
                r0.targetWidth = r5
                r0.targetHeight = r6
                r0.bitmapProvider = r7
                return
            L1c:
                java.lang.NullPointerException r1 = new java.lang.NullPointerException
                java.lang.String r2 = "The first frame of the GIF must not be null"
                r1.<init>(r2)
                throw r1
        }

        public GifState(com.bumptech.glide.load.resource.gif.GifDrawable.GifState r2) {
                r1 = this;
                r1.<init>()
                if (r2 == 0) goto L29
                com.bumptech.glide.gifdecoder.GifHeader r0 = r2.gifHeader
                r1.gifHeader = r0
                byte[] r0 = r2.data
                r1.data = r0
                android.content.Context r0 = r2.context
                r1.context = r0
                com.bumptech.glide.load.Transformation<android.graphics.Bitmap> r0 = r2.frameTransformation
                r1.frameTransformation = r0
                int r0 = r2.targetWidth
                r1.targetWidth = r0
                int r0 = r2.targetHeight
                r1.targetHeight = r0
                com.bumptech.glide.gifdecoder.GifDecoder$BitmapProvider r0 = r2.bitmapProvider
                r1.bitmapProvider = r0
                com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r0 = r2.bitmapPool
                r1.bitmapPool = r0
                android.graphics.Bitmap r2 = r2.firstFrame
                r1.firstFrame = r2
            L29:
                return
        }

        @Override
        public int getChangingConfigurations() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public android.graphics.drawable.Drawable newDrawable() {
                r1 = this;
                com.bumptech.glide.load.resource.gif.GifDrawable r0 = new com.bumptech.glide.load.resource.gif.GifDrawable
                r0.<init>(r1)
                return r0
        }

        @Override
        public android.graphics.drawable.Drawable newDrawable(android.content.res.Resources r1) {
                r0 = this;
                android.graphics.drawable.Drawable r1 = r0.newDrawable()
                return r1
        }
    }

    public GifDrawable(android.content.Context r12, com.bumptech.glide.gifdecoder.GifDecoder.BitmapProvider r13, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r14, com.bumptech.glide.load.Transformation<android.graphics.Bitmap> r15, int r16, int r17, com.bumptech.glide.gifdecoder.GifHeader r18, byte[] r19, android.graphics.Bitmap r20) {
            r11 = this;
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r10 = new com.bumptech.glide.load.resource.gif.GifDrawable$GifState
            r0 = r10
            r1 = r18
            r2 = r19
            r3 = r12
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r13
            r8 = r14
            r9 = r20
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            r0 = r11
            r11.<init>(r10)
            return
    }

    GifDrawable(com.bumptech.glide.gifdecoder.GifDecoder r2, com.bumptech.glide.load.resource.gif.GifFrameLoader r3, android.graphics.Bitmap r4, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r5, android.graphics.Paint r6) {
            r1 = this;
            r1.<init>()
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r1.destRect = r0
            r0 = 1
            r1.isVisible = r0
            r0 = -1
            r1.maxLoopCount = r0
            r1.decoder = r2
            r1.frameLoader = r3
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r2 = new com.bumptech.glide.load.resource.gif.GifDrawable$GifState
            r3 = 0
            r2.<init>(r3)
            r1.state = r2
            r1.paint = r6
            r2.bitmapPool = r5
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r2 = r1.state
            r2.firstFrame = r4
            return
    }

    GifDrawable(com.bumptech.glide.load.resource.gif.GifDrawable.GifState r10) {
            r9 = this;
            r9.<init>()
            android.graphics.Rect r0 = new android.graphics.Rect
            r0.<init>()
            r9.destRect = r0
            r0 = 1
            r9.isVisible = r0
            r0 = -1
            r9.maxLoopCount = r0
            if (r10 == 0) goto L44
            r9.state = r10
            com.bumptech.glide.gifdecoder.GifDecoder r0 = new com.bumptech.glide.gifdecoder.GifDecoder
            com.bumptech.glide.gifdecoder.GifDecoder$BitmapProvider r1 = r10.bitmapProvider
            r0.<init>(r1)
            r9.decoder = r0
            android.graphics.Paint r0 = new android.graphics.Paint
            r0.<init>()
            r9.paint = r0
            com.bumptech.glide.gifdecoder.GifDecoder r0 = r9.decoder
            com.bumptech.glide.gifdecoder.GifHeader r1 = r10.gifHeader
            byte[] r2 = r10.data
            r0.setData(r1, r2)
            com.bumptech.glide.load.resource.gif.GifFrameLoader r0 = new com.bumptech.glide.load.resource.gif.GifFrameLoader
            android.content.Context r4 = r10.context
            com.bumptech.glide.gifdecoder.GifDecoder r6 = r9.decoder
            int r7 = r10.targetWidth
            int r8 = r10.targetHeight
            r3 = r0
            r5 = r9
            r3.<init>(r4, r5, r6, r7, r8)
            r9.frameLoader = r0
            com.bumptech.glide.load.Transformation<android.graphics.Bitmap> r10 = r10.frameTransformation
            r0.setFrameTransformation(r10)
            return
        L44:
            java.lang.NullPointerException r10 = new java.lang.NullPointerException
            java.lang.String r0 = "GifState must not be null"
            r10.<init>(r0)
            throw r10
    }

    public GifDrawable(com.bumptech.glide.load.resource.gif.GifDrawable r12, android.graphics.Bitmap r13, com.bumptech.glide.load.Transformation<android.graphics.Bitmap> r14) {
            r11 = this;
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r10 = new com.bumptech.glide.load.resource.gif.GifDrawable$GifState
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r0 = r12.state
            com.bumptech.glide.gifdecoder.GifHeader r1 = r0.gifHeader
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r0 = r12.state
            byte[] r2 = r0.data
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r0 = r12.state
            android.content.Context r3 = r0.context
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r0 = r12.state
            int r5 = r0.targetWidth
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r0 = r12.state
            int r6 = r0.targetHeight
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r0 = r12.state
            com.bumptech.glide.gifdecoder.GifDecoder$BitmapProvider r7 = r0.bitmapProvider
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r12 = r12.state
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r8 = r12.bitmapPool
            r0 = r10
            r4 = r14
            r9 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9)
            r11.<init>(r10)
            return
    }

    private void reset() {
            r1 = this;
            com.bumptech.glide.load.resource.gif.GifFrameLoader r0 = r1.frameLoader
            r0.clear()
            r1.invalidateSelf()
            return
    }

    private void resetLoopCount() {
            r1 = this;
            r0 = 0
            r1.loopCount = r0
            return
    }

    private void startRunning() {
            r2 = this;
            com.bumptech.glide.gifdecoder.GifDecoder r0 = r2.decoder
            int r0 = r0.getFrameCount()
            r1 = 1
            if (r0 != r1) goto Ld
            r2.invalidateSelf()
            goto L1b
        Ld:
            boolean r0 = r2.isRunning
            if (r0 != 0) goto L1b
            r2.isRunning = r1
            com.bumptech.glide.load.resource.gif.GifFrameLoader r0 = r2.frameLoader
            r0.start()
            r2.invalidateSelf()
        L1b:
            return
    }

    private void stopRunning() {
            r1 = this;
            r0 = 0
            r1.isRunning = r0
            com.bumptech.glide.load.resource.gif.GifFrameLoader r0 = r1.frameLoader
            r0.stop()
            return
    }

    @Override
    public void draw(android.graphics.Canvas r6) {
            r5 = this;
            boolean r0 = r5.isRecycled
            if (r0 == 0) goto L5
            return
        L5:
            boolean r0 = r5.applyGravity
            if (r0 == 0) goto L1f
            r0 = 119(0x77, float:1.67E-43)
            int r1 = r5.getIntrinsicWidth()
            int r2 = r5.getIntrinsicHeight()
            android.graphics.Rect r3 = r5.getBounds()
            android.graphics.Rect r4 = r5.destRect
            android.view.Gravity.apply(r0, r1, r2, r3, r4)
            r0 = 0
            r5.applyGravity = r0
        L1f:
            com.bumptech.glide.load.resource.gif.GifFrameLoader r0 = r5.frameLoader
            android.graphics.Bitmap r0 = r0.getCurrentFrame()
            if (r0 == 0) goto L28
            goto L2c
        L28:
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r0 = r5.state
            android.graphics.Bitmap r0 = r0.firstFrame
        L2c:
            r1 = 0
            android.graphics.Rect r2 = r5.destRect
            android.graphics.Paint r3 = r5.paint
            r6.drawBitmap(r0, r1, r2, r3)
            return
    }

    @Override
    public android.graphics.drawable.Drawable.ConstantState getConstantState() {
            r1 = this;
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r0 = r1.state
            return r0
    }

    public byte[] getData() {
            r1 = this;
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r0 = r1.state
            byte[] r0 = r0.data
            return r0
    }

    public com.bumptech.glide.gifdecoder.GifDecoder getDecoder() {
            r1 = this;
            com.bumptech.glide.gifdecoder.GifDecoder r0 = r1.decoder
            return r0
    }

    public android.graphics.Bitmap getFirstFrame() {
            r1 = this;
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r0 = r1.state
            android.graphics.Bitmap r0 = r0.firstFrame
            return r0
    }

    public int getFrameCount() {
            r1 = this;
            com.bumptech.glide.gifdecoder.GifDecoder r0 = r1.decoder
            int r0 = r0.getFrameCount()
            return r0
    }

    public com.bumptech.glide.load.Transformation<android.graphics.Bitmap> getFrameTransformation() {
            r1 = this;
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r0 = r1.state
            com.bumptech.glide.load.Transformation<android.graphics.Bitmap> r0 = r0.frameTransformation
            return r0
    }

    @Override
    public int getIntrinsicHeight() {
            r1 = this;
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r0 = r1.state
            android.graphics.Bitmap r0 = r0.firstFrame
            int r0 = r0.getHeight()
            return r0
    }

    @Override
    public int getIntrinsicWidth() {
            r1 = this;
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r0 = r1.state
            android.graphics.Bitmap r0 = r0.firstFrame
            int r0 = r0.getWidth()
            return r0
    }

    @Override
    public int getOpacity() {
            r1 = this;
            r0 = -2
            return r0
    }

    @Override
    public boolean isAnimated() {
            r1 = this;
            r0 = 1
            return r0
    }

    boolean isRecycled() {
            r1 = this;
            boolean r0 = r1.isRecycled
            return r0
    }

    @Override
    public boolean isRunning() {
            r1 = this;
            boolean r0 = r1.isRunning
            return r0
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
    public void onFrameReady(int r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 11
            if (r0 < r1) goto L13
            android.graphics.drawable.Drawable$Callback r0 = r2.getCallback()
            if (r0 != 0) goto L13
            r2.stop()
            r2.reset()
            return
        L13:
            r2.invalidateSelf()
            com.bumptech.glide.gifdecoder.GifDecoder r0 = r2.decoder
            int r0 = r0.getFrameCount()
            int r0 = r0 + (-1)
            if (r3 != r0) goto L26
            int r3 = r2.loopCount
            int r3 = r3 + 1
            r2.loopCount = r3
        L26:
            int r3 = r2.maxLoopCount
            r0 = -1
            if (r3 == r0) goto L32
            int r0 = r2.loopCount
            if (r0 < r3) goto L32
            r2.stop()
        L32:
            return
    }

    public void recycle() {
            r2 = this;
            r0 = 1
            r2.isRecycled = r0
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r0 = r2.state
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r0 = r0.bitmapPool
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r1 = r2.state
            android.graphics.Bitmap r1 = r1.firstFrame
            r0.put(r1)
            com.bumptech.glide.load.resource.gif.GifFrameLoader r0 = r2.frameLoader
            r0.clear()
            com.bumptech.glide.load.resource.gif.GifFrameLoader r0 = r2.frameLoader
            r0.stop()
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

    public void setFrameTransformation(com.bumptech.glide.load.Transformation<android.graphics.Bitmap> r2, android.graphics.Bitmap r3) {
            r1 = this;
            if (r3 == 0) goto L1a
            if (r2 == 0) goto L12
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r0 = r1.state
            r0.frameTransformation = r2
            com.bumptech.glide.load.resource.gif.GifDrawable$GifState r0 = r1.state
            r0.firstFrame = r3
            com.bumptech.glide.load.resource.gif.GifFrameLoader r3 = r1.frameLoader
            r3.setFrameTransformation(r2)
            return
        L12:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "The frame transformation must not be null"
            r2.<init>(r3)
            throw r2
        L1a:
            java.lang.NullPointerException r2 = new java.lang.NullPointerException
            java.lang.String r3 = "The first frame of the GIF must not be null"
            r2.<init>(r3)
            throw r2
    }

    void setIsRunning(boolean r1) {
            r0 = this;
            r0.isRunning = r1
            return
    }

    @Override
    public void setLoopCount(int r2) {
            r1 = this;
            if (r2 > 0) goto L10
            r0 = -1
            if (r2 == r0) goto L10
            if (r2 != 0) goto L8
            goto L10
        L8:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Loop count must be greater than 0, or equal to GlideDrawable.LOOP_FOREVER, or equal to GlideDrawable.LOOP_INTRINSIC"
            r2.<init>(r0)
            throw r2
        L10:
            if (r2 != 0) goto L1b
            com.bumptech.glide.gifdecoder.GifDecoder r2 = r1.decoder
            int r2 = r2.getLoopCount()
            r1.maxLoopCount = r2
            goto L1d
        L1b:
            r1.maxLoopCount = r2
        L1d:
            return
    }

    @Override
    public boolean setVisible(boolean r2, boolean r3) {
            r1 = this;
            r1.isVisible = r2
            if (r2 != 0) goto L8
            r1.stopRunning()
            goto Lf
        L8:
            boolean r0 = r1.isStarted
            if (r0 == 0) goto Lf
            r1.startRunning()
        Lf:
            boolean r2 = super.setVisible(r2, r3)
            return r2
    }

    @Override
    public void start() {
            r1 = this;
            r0 = 1
            r1.isStarted = r0
            r1.resetLoopCount()
            boolean r0 = r1.isVisible
            if (r0 == 0) goto Ld
            r1.startRunning()
        Ld:
            return
    }

    @Override
    public void stop() {
            r2 = this;
            r0 = 0
            r2.isStarted = r0
            r2.stopRunning()
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 11
            if (r0 >= r1) goto Lf
            r2.reset()
        Lf:
            return
    }
}
