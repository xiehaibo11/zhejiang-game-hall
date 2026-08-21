package com.bumptech.glide.load.resource.gif;

class GifFrameLoader {
    private final com.bumptech.glide.load.resource.gif.GifFrameLoader.FrameCallback callback;
    private com.bumptech.glide.load.resource.gif.GifFrameLoader.DelayTarget current;
    private final com.bumptech.glide.gifdecoder.GifDecoder gifDecoder;
    private final android.os.Handler handler;
    private boolean isCleared;
    private boolean isLoadPending;
    private boolean isRunning;
    private com.bumptech.glide.GenericRequestBuilder<com.bumptech.glide.gifdecoder.GifDecoder, com.bumptech.glide.gifdecoder.GifDecoder, android.graphics.Bitmap, android.graphics.Bitmap> requestBuilder;

    static class 1 {
    }

    static class DelayTarget extends com.bumptech.glide.request.target.SimpleTarget<android.graphics.Bitmap> {
        private final android.os.Handler handler;
        private final int index;
        private android.graphics.Bitmap resource;
        private final long targetTime;

        public DelayTarget(android.os.Handler r1, int r2, long r3) {
                r0 = this;
                r0.<init>()
                r0.handler = r1
                r0.index = r2
                r0.targetTime = r3
                return
        }

        static int access$100(com.bumptech.glide.load.resource.gif.GifFrameLoader.DelayTarget r0) {
                int r0 = r0.index
                return r0
        }

        public android.graphics.Bitmap getResource() {
                r1 = this;
                android.graphics.Bitmap r0 = r1.resource
                return r0
        }

        public void onResourceReady(android.graphics.Bitmap r3, com.bumptech.glide.request.animation.GlideAnimation<? super android.graphics.Bitmap> r4) {
                r2 = this;
                r2.resource = r3
                android.os.Handler r3 = r2.handler
                r4 = 1
                android.os.Message r3 = r3.obtainMessage(r4, r2)
                android.os.Handler r4 = r2.handler
                long r0 = r2.targetTime
                r4.sendMessageAtTime(r3, r0)
                return
        }

        @Override
        public void onResourceReady(java.lang.Object r1, com.bumptech.glide.request.animation.GlideAnimation r2) {
                r0 = this;
                android.graphics.Bitmap r1 = (android.graphics.Bitmap) r1
                r0.onResourceReady(r1, r2)
                return
        }
    }

    public interface FrameCallback {
        void onFrameReady(int r1);
    }

    private class FrameLoaderCallback implements android.os.Handler.Callback {
        public static final int MSG_CLEAR = 2;
        public static final int MSG_DELAY = 1;
        final com.bumptech.glide.load.resource.gif.GifFrameLoader this$0;

        private FrameLoaderCallback(com.bumptech.glide.load.resource.gif.GifFrameLoader r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        FrameLoaderCallback(com.bumptech.glide.load.resource.gif.GifFrameLoader r1, com.bumptech.glide.load.resource.gif.GifFrameLoader.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public boolean handleMessage(android.os.Message r3) {
                r2 = this;
                int r0 = r3.what
                r1 = 1
                if (r0 != r1) goto Lf
                java.lang.Object r3 = r3.obj
                com.bumptech.glide.load.resource.gif.GifFrameLoader$DelayTarget r3 = (com.bumptech.glide.load.resource.gif.GifFrameLoader.DelayTarget) r3
                com.bumptech.glide.load.resource.gif.GifFrameLoader r0 = r2.this$0
                r0.onFrameReady(r3)
                return r1
            Lf:
                int r0 = r3.what
                r1 = 2
                if (r0 != r1) goto L1b
                java.lang.Object r3 = r3.obj
                com.bumptech.glide.load.resource.gif.GifFrameLoader$DelayTarget r3 = (com.bumptech.glide.load.resource.gif.GifFrameLoader.DelayTarget) r3
                com.bumptech.glide.Glide.clear(r3)
            L1b:
                r3 = 0
                return r3
        }
    }

    static class FrameSignature implements com.bumptech.glide.load.Key {
        private final java.util.UUID uuid;

        public FrameSignature() {
                r1 = this;
                java.util.UUID r0 = java.util.UUID.randomUUID()
                r1.<init>(r0)
                return
        }

        FrameSignature(java.util.UUID r1) {
                r0 = this;
                r0.<init>()
                r0.uuid = r1
                return
        }

        @Override
        public boolean equals(java.lang.Object r2) {
                r1 = this;
                boolean r0 = r2 instanceof com.bumptech.glide.load.resource.gif.GifFrameLoader.FrameSignature
                if (r0 == 0) goto Lf
                com.bumptech.glide.load.resource.gif.GifFrameLoader$FrameSignature r2 = (com.bumptech.glide.load.resource.gif.GifFrameLoader.FrameSignature) r2
                java.util.UUID r2 = r2.uuid
                java.util.UUID r0 = r1.uuid
                boolean r2 = r2.equals(r0)
                return r2
            Lf:
                r2 = 0
                return r2
        }

        @Override
        public int hashCode() {
                r1 = this;
                java.util.UUID r0 = r1.uuid
                int r0 = r0.hashCode()
                return r0
        }

        @Override
        public void updateDiskCacheKey(java.security.MessageDigest r2) throws java.io.UnsupportedEncodingException {
                r1 = this;
                java.lang.UnsupportedOperationException r2 = new java.lang.UnsupportedOperationException
                java.lang.String r0 = "Not implemented"
                r2.<init>(r0)
                throw r2
        }
    }

    public GifFrameLoader(android.content.Context r2, com.bumptech.glide.load.resource.gif.GifFrameLoader.FrameCallback r3, com.bumptech.glide.gifdecoder.GifDecoder r4, int r5, int r6) {
            r1 = this;
            com.bumptech.glide.Glide r0 = com.bumptech.glide.Glide.get(r2)
            com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r0 = r0.getBitmapPool()
            com.bumptech.glide.GenericRequestBuilder r2 = getRequestBuilder(r2, r4, r5, r6, r0)
            r5 = 0
            r1.<init>(r3, r4, r5, r2)
            return
    }

    GifFrameLoader(com.bumptech.glide.load.resource.gif.GifFrameLoader.FrameCallback r4, com.bumptech.glide.gifdecoder.GifDecoder r5, android.os.Handler r6, com.bumptech.glide.GenericRequestBuilder<com.bumptech.glide.gifdecoder.GifDecoder, com.bumptech.glide.gifdecoder.GifDecoder, android.graphics.Bitmap, android.graphics.Bitmap> r7) {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.isRunning = r0
            r3.isLoadPending = r0
            if (r6 != 0) goto L19
            android.os.Handler r6 = new android.os.Handler
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            com.bumptech.glide.load.resource.gif.GifFrameLoader$FrameLoaderCallback r1 = new com.bumptech.glide.load.resource.gif.GifFrameLoader$FrameLoaderCallback
            r2 = 0
            r1.<init>(r3, r2)
            r6.<init>(r0, r1)
        L19:
            r3.callback = r4
            r3.gifDecoder = r5
            r3.handler = r6
            r3.requestBuilder = r7
            return
    }

    private static com.bumptech.glide.GenericRequestBuilder<com.bumptech.glide.gifdecoder.GifDecoder, com.bumptech.glide.gifdecoder.GifDecoder, android.graphics.Bitmap, android.graphics.Bitmap> getRequestBuilder(android.content.Context r3, com.bumptech.glide.gifdecoder.GifDecoder r4, int r5, int r6, com.bumptech.glide.load.engine.bitmap_recycle.BitmapPool r7) {
            com.bumptech.glide.load.resource.gif.GifFrameResourceDecoder r0 = new com.bumptech.glide.load.resource.gif.GifFrameResourceDecoder
            r0.<init>(r7)
            com.bumptech.glide.load.resource.gif.GifFrameModelLoader r7 = new com.bumptech.glide.load.resource.gif.GifFrameModelLoader
            r7.<init>()
            com.bumptech.glide.load.Encoder r1 = com.bumptech.glide.load.resource.NullEncoder.get()
            com.bumptech.glide.RequestManager r3 = com.bumptech.glide.Glide.with(r3)
            java.lang.Class<com.bumptech.glide.gifdecoder.GifDecoder> r2 = com.bumptech.glide.gifdecoder.GifDecoder.class
            com.bumptech.glide.RequestManager$GenericModelRequest r3 = r3.using(r7, r2)
            com.bumptech.glide.RequestManager$GenericModelRequest$GenericTypeRequest r3 = r3.load(r4)
            java.lang.Class<android.graphics.Bitmap> r4 = android.graphics.Bitmap.class
            com.bumptech.glide.GenericTranscodeRequest r3 = r3.as(r4)
            com.bumptech.glide.GenericRequestBuilder r3 = r3.sourceEncoder(r1)
            com.bumptech.glide.GenericRequestBuilder r3 = r3.decoder(r0)
            r4 = 1
            com.bumptech.glide.GenericRequestBuilder r3 = r3.skipMemoryCache(r4)
            com.bumptech.glide.load.engine.DiskCacheStrategy r4 = com.bumptech.glide.load.engine.DiskCacheStrategy.NONE
            com.bumptech.glide.GenericRequestBuilder r3 = r3.diskCacheStrategy(r4)
            com.bumptech.glide.GenericRequestBuilder r3 = r3.override(r5, r6)
            return r3
    }

    private void loadNextFrame() {
            r5 = this;
            boolean r0 = r5.isRunning
            if (r0 == 0) goto L38
            boolean r0 = r5.isLoadPending
            if (r0 == 0) goto L9
            goto L38
        L9:
            r0 = 1
            r5.isLoadPending = r0
            com.bumptech.glide.gifdecoder.GifDecoder r0 = r5.gifDecoder
            r0.advance()
            long r0 = android.os.SystemClock.uptimeMillis()
            com.bumptech.glide.gifdecoder.GifDecoder r2 = r5.gifDecoder
            int r2 = r2.getNextDelay()
            long r2 = (long) r2
            long r0 = r0 + r2
            com.bumptech.glide.load.resource.gif.GifFrameLoader$DelayTarget r2 = new com.bumptech.glide.load.resource.gif.GifFrameLoader$DelayTarget
            android.os.Handler r3 = r5.handler
            com.bumptech.glide.gifdecoder.GifDecoder r4 = r5.gifDecoder
            int r4 = r4.getCurrentFrameIndex()
            r2.<init>(r3, r4, r0)
            com.bumptech.glide.GenericRequestBuilder<com.bumptech.glide.gifdecoder.GifDecoder, com.bumptech.glide.gifdecoder.GifDecoder, android.graphics.Bitmap, android.graphics.Bitmap> r0 = r5.requestBuilder
            com.bumptech.glide.load.resource.gif.GifFrameLoader$FrameSignature r1 = new com.bumptech.glide.load.resource.gif.GifFrameLoader$FrameSignature
            r1.<init>()
            com.bumptech.glide.GenericRequestBuilder r0 = r0.signature(r1)
            r0.into(r2)
        L38:
            return
    }

    public void clear() {
            r1 = this;
            r1.stop()
            com.bumptech.glide.load.resource.gif.GifFrameLoader$DelayTarget r0 = r1.current
            if (r0 == 0) goto Ld
            com.bumptech.glide.Glide.clear(r0)
            r0 = 0
            r1.current = r0
        Ld:
            r0 = 1
            r1.isCleared = r0
            return
    }

    public android.graphics.Bitmap getCurrentFrame() {
            r1 = this;
            com.bumptech.glide.load.resource.gif.GifFrameLoader$DelayTarget r0 = r1.current
            if (r0 == 0) goto L9
            android.graphics.Bitmap r0 = r0.getResource()
            goto La
        L9:
            r0 = 0
        La:
            return r0
    }

    void onFrameReady(com.bumptech.glide.load.resource.gif.GifFrameLoader.DelayTarget r4) {
            r3 = this;
            boolean r0 = r3.isCleared
            r1 = 2
            if (r0 == 0) goto Lf
            android.os.Handler r0 = r3.handler
            android.os.Message r4 = r0.obtainMessage(r1, r4)
            r4.sendToTarget()
            return
        Lf:
            com.bumptech.glide.load.resource.gif.GifFrameLoader$DelayTarget r0 = r3.current
            r3.current = r4
            com.bumptech.glide.load.resource.gif.GifFrameLoader$FrameCallback r2 = r3.callback
            int r4 = com.bumptech.glide.load.resource.gif.GifFrameLoader.DelayTarget.access$100(r4)
            r2.onFrameReady(r4)
            if (r0 == 0) goto L27
            android.os.Handler r4 = r3.handler
            android.os.Message r4 = r4.obtainMessage(r1, r0)
            r4.sendToTarget()
        L27:
            r4 = 0
            r3.isLoadPending = r4
            r3.loadNextFrame()
            return
    }

    public void setFrameTransformation(com.bumptech.glide.load.Transformation<android.graphics.Bitmap> r4) {
            r3 = this;
            if (r4 == 0) goto L11
            com.bumptech.glide.GenericRequestBuilder<com.bumptech.glide.gifdecoder.GifDecoder, com.bumptech.glide.gifdecoder.GifDecoder, android.graphics.Bitmap, android.graphics.Bitmap> r0 = r3.requestBuilder
            r1 = 1
            com.bumptech.glide.load.Transformation[] r1 = new com.bumptech.glide.load.Transformation[r1]
            r2 = 0
            r1[r2] = r4
            com.bumptech.glide.GenericRequestBuilder r4 = r0.transform(r1)
            r3.requestBuilder = r4
            return
        L11:
            java.lang.NullPointerException r4 = new java.lang.NullPointerException
            java.lang.String r0 = "Transformation must not be null"
            r4.<init>(r0)
            throw r4
    }

    public void start() {
            r1 = this;
            boolean r0 = r1.isRunning
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r1.isRunning = r0
            r0 = 0
            r1.isCleared = r0
            r1.loadNextFrame()
            return
    }

    public void stop() {
            r1 = this;
            r0 = 0
            r1.isRunning = r0
            return
    }
}
