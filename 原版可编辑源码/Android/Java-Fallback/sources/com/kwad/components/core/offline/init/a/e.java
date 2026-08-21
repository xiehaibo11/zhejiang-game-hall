package com.kwad.components.core.offline.init.a;

final class e implements com.kwad.components.offline.api.core.api.IImageLoader {


    final class 2 implements com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener {
        final android.widget.ImageView CW;
        final com.kwad.components.offline.api.core.api.IImageLoader.ImageLoadingListener Ls;
        final com.kwad.components.core.offline.init.a.e Lt;
        final com.kwad.components.offline.api.core.api.IImageLoader.DisplayImageOptionsCompat Lu;


        2(com.kwad.components.core.offline.init.a.e r1, com.kwad.components.offline.api.core.api.IImageLoader.ImageLoadingListener r2, com.kwad.components.offline.api.core.api.IImageLoader.DisplayImageOptionsCompat r3, android.widget.ImageView r4) {
                r0 = this;
                r0.Lt = r1
                r0.Ls = r2
                r0.Lu = r3
                r0.CW = r4
                r0.<init>()
                return
        }

        @Override
        public final boolean onDecode(java.lang.String r2, java.io.InputStream r3, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r4) {
                r1 = this;
                com.kwad.components.offline.api.core.api.IImageLoader$ImageLoadingListener r0 = r1.Ls
                if (r4 != 0) goto L6
                r4 = 0
                goto L8
            L6:
                android.graphics.Bitmap r4 = r4.mBitmap
            L8:
                boolean r2 = r0.onDecode(r2, r3, r4)
                return r2
        }

        @Override
        public final void onLoadingCancelled(java.lang.String r2, android.view.View r3) {
                r1 = this;
                com.kwad.components.offline.api.core.api.IImageLoader$ImageLoadingListener r0 = r1.Ls
                r0.onLoadingCancelled(r2, r3)
                return
        }

        @Override
        public final void onLoadingComplete(java.lang.String r3, android.view.View r4, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r5) {
                r2 = this;
                com.kwad.components.offline.api.core.api.IImageLoader$DisplayImageOptionsCompat r0 = r2.Lu
                if (r0 == 0) goto L1d
                int r0 = r0.getBlurRadius()
                if (r0 <= 0) goto L1d
                if (r5 == 0) goto L1d
                android.graphics.Bitmap r0 = r5.mBitmap
                if (r0 == 0) goto L1d
                java.util.concurrent.ExecutorService r0 = com.kwad.sdk.core.threads.GlobalThreadPools.CR()
                com.kwad.components.core.offline.init.a.e$2$1 r1 = new com.kwad.components.core.offline.init.a.e$2$1
                r1.<init>(r2, r5, r3, r4)
                r0.submit(r1)
                return
            L1d:
                com.kwad.components.offline.api.core.api.IImageLoader$ImageLoadingListener r0 = r2.Ls
                if (r5 != 0) goto L23
                r5 = 0
                goto L25
            L23:
                android.graphics.Bitmap r5 = r5.mBitmap
            L25:
                r0.onLoadingComplete(r3, r4, r5)
                return
        }

        @Override
        public final void onLoadingFailed(java.lang.String r3, android.view.View r4, com.kwad.sdk.core.imageloader.core.assist.FailReason r5) {
                r2 = this;
                com.kwad.components.offline.api.core.api.IImageLoader$ImageLoadingListener r0 = r2.Ls
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r1 = r5.getType()
                java.lang.String r1 = r1.toString()
                java.lang.Throwable r5 = r5.getCause()
                r0.onLoadingFailed(r3, r4, r1, r5)
                return
        }

        @Override
        public final void onLoadingStarted(java.lang.String r2, android.view.View r3) {
                r1 = this;
                com.kwad.components.offline.api.core.api.IImageLoader$ImageLoadingListener r0 = r1.Ls
                r0.onLoadingStarted(r2, r3)
                return
        }
    }

    e() {
            r0 = this;
            r0.<init>()
            return
    }

    private static com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat a(com.kwad.components.offline.api.core.api.IImageLoader.DisplayImageOptionsCompat r2) {
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder
            r0.<init>()
            android.graphics.drawable.Drawable r1 = r2.getImageOnLoading()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.showImageOnLoading(r1)
            android.graphics.drawable.Drawable r1 = r2.getImageForEmptyUri()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.showImageForEmptyUri(r1)
            android.graphics.drawable.Drawable r1 = r2.getImageOnFail()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.showImageOnFail(r1)
            boolean r1 = r2.isCacheInMemory()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.cacheInMemory(r1)
            boolean r1 = r2.isCacheOnDisk()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.cacheOnDisk(r1)
            android.graphics.BitmapFactory$Options r1 = r2.getDecodingOptions()
            android.graphics.Bitmap$Config r1 = r1.inPreferredConfig
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.bitmapConfig(r1)
            boolean r1 = r2.isConsiderExifParams()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.considerExifParams(r1)
            int r1 = r2.getBlurRadius()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.setBlurRadius(r1)
            boolean r1 = r2.isFrameSequence()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.setFrameSequence(r1)
            int r1 = r2.getCornerRound()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.setCornerRound(r1)
            boolean r1 = r2.isCircle()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.setCircle(r1)
            int r1 = r2.getStrokeColor()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.setStrokeColor(r1)
            float r2 = r2.getStrokeWidth()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r2 = r0.setStrokeWidth(r2)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r2 = r2.build()
            return r2
    }

    private com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener a(com.kwad.components.offline.api.core.api.IImageLoader.ImageLoadingListener r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            com.kwad.components.core.offline.init.a.e$1 r0 = new com.kwad.components.core.offline.init.a.e$1
            r0.<init>(r1, r2)
            return r0
    }

    private com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener a(com.kwad.components.offline.api.core.api.IImageLoader.ImageLoadingListener r2, com.kwad.components.offline.api.core.api.IImageLoader.DisplayImageOptionsCompat r3, android.widget.ImageView r4) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            com.kwad.components.core.offline.init.a.e$2 r0 = new com.kwad.components.core.offline.init.a.e$2
            r0.<init>(r1, r2, r3, r4)
            return r0
    }

    @Override
    public final void loadImage(android.widget.ImageView r1, java.lang.String r2) {
            r0 = this;
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r1, r2)
            return
    }

    @Override
    public final void loadImage(android.widget.ImageView r2, java.lang.String r3, com.kwad.components.offline.api.core.api.IImageLoader.DisplayImageOptionsCompat r4) {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r4 = a(r4)
            r0 = 0
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r2, r3, r0, r4)
            return
    }

    @Override
    public final void loadImage(android.widget.ImageView r2, java.lang.String r3, com.kwad.components.offline.api.core.api.IImageLoader.DisplayImageOptionsCompat r4, com.kwad.components.offline.api.core.api.IImageLoader.ImageLoadingListener r5) {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0 = a(r4)
            com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r4 = r1.a(r5, r4, r2)
            r5 = 0
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r2, r3, r5, r0, r4)
            return
    }

    @Override
    public final void loadImage(android.widget.ImageView r2, java.lang.String r3, com.kwad.components.offline.api.core.api.IImageLoader.ImageLoadingListener r4) {
            r1 = this;
            r0 = 0
            com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r4 = r1.a(r4, r0, r2)
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r2, r3, r0, r4)
            return
    }

    @Override
    public final void loadImage(java.lang.String r2, com.kwad.components.offline.api.core.api.IImageLoader.DisplayImageOptionsCompat r3, com.kwad.components.offline.api.core.api.IImageLoader.ImageLoadingListener r4) {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r3 = a(r3)
            com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r4 = r1.a(r4)
            r0 = 0
            com.kwad.sdk.core.imageloader.KSImageLoader.loadImage(r2, r0, r3, r4)
            return
    }
}
