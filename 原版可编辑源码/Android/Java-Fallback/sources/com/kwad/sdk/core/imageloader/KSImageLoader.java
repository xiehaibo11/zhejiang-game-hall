package com.kwad.sdk.core.imageloader;

public class KSImageLoader {
    public static com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat IMGOPTION_NORMAL;
    private static com.kwad.sdk.core.imageloader.OnRenderResultListener<com.kwad.sdk.core.response.model.AdTemplate> mDefaultListener;

    static class 1 {
        static final int[] $SwitchMap$com$kwad$sdk$core$imageloader$core$assist$FailReason$FailType = null;

        static {
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType[] r0 = com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.kwad.sdk.core.imageloader.KSImageLoader.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$assist$FailReason$FailType = r0
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r1 = com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.UNKNOWN     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.kwad.sdk.core.imageloader.KSImageLoader.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$assist$FailReason$FailType     // Catch: java.lang.NoSuchFieldError -> L1d
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r1 = com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.IO_ERROR     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.kwad.sdk.core.imageloader.KSImageLoader.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$assist$FailReason$FailType     // Catch: java.lang.NoSuchFieldError -> L28
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r1 = com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.OUT_OF_MEMORY     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.kwad.sdk.core.imageloader.KSImageLoader.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$assist$FailReason$FailType     // Catch: java.lang.NoSuchFieldError -> L33
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r1 = com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.NETWORK_DENIED     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.kwad.sdk.core.imageloader.KSImageLoader.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$assist$FailReason$FailType     // Catch: java.lang.NoSuchFieldError -> L3e
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r1 = com.kwad.sdk.core.imageloader.core.assist.FailReason.FailType.DECODING_ERROR     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                return
        }
    }

    public static class InnerImageLoadingListener implements com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener {
        public static final int MAX_DURATION = 30000;
        com.kwad.sdk.core.response.model.AdTemplate adTemplate;
        com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener loadingListener;
        private long startTime;

        public InnerImageLoadingListener(com.kwad.sdk.core.response.model.AdTemplate r1, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r2) {
                r0 = this;
                r0.<init>()
                r0.adTemplate = r1
                r0.loadingListener = r2
                return
        }

        private long getDuration(long r6) {
                r5 = this;
                r0 = 0
                int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
                r1 = -1
                if (r0 != 0) goto L9
                return r1
            L9:
                long r3 = android.os.SystemClock.elapsedRealtime()
                long r3 = r3 - r6
                r6 = 30000(0x7530, double:1.4822E-319)
                int r6 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
                if (r6 < 0) goto L15
                return r1
            L15:
                return r3
        }

        private void recordDuration(long r3) {
                r2 = this;
                long r3 = r2.getDuration(r3)     // Catch: java.lang.Exception -> Ld
                r0 = 0
                int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
                if (r0 < 0) goto Ld
                com.kwad.sdk.utils.y.au(r3)     // Catch: java.lang.Exception -> Ld
            Ld:
                return
        }

        @Override
        public boolean onDecode(java.lang.String r2, java.io.InputStream r3, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r4) {
                r1 = this;
                com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r0 = r1.loadingListener
                if (r0 == 0) goto L9
                boolean r2 = r0.onDecode(r2, r3, r4)
                return r2
            L9:
                r2 = 0
                return r2
        }

        @Override
        public void onLoadingCancelled(java.lang.String r2, android.view.View r3) {
                r1 = this;
                com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r0 = r1.loadingListener
                if (r0 == 0) goto L7
                r0.onLoadingCancelled(r2, r3)
            L7:
                return
        }

        @Override
        public void onLoadingComplete(java.lang.String r2, android.view.View r3, com.kwad.sdk.core.imageloader.core.decode.DecodedResult r4) {
                r1 = this;
                com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r0 = r1.loadingListener
                if (r0 == 0) goto L7
                r0.onLoadingComplete(r2, r3, r4)
            L7:
                long r2 = r1.startTime
                r1.recordDuration(r2)
                com.kwad.sdk.utils.y.ID()
                return
        }

        @Override
        public void onLoadingFailed(java.lang.String r5, android.view.View r6, com.kwad.sdk.core.imageloader.core.assist.FailReason r7) {
                r4 = this;
                com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r0 = r4.loadingListener
                if (r0 == 0) goto L7
                r0.onLoadingFailed(r5, r6, r7)
            L7:
                com.kwad.sdk.core.response.model.AdTemplate r6 = r4.adTemplate
                if (r6 == 0) goto La7
                java.lang.StringBuilder r6 = new java.lang.StringBuilder
                java.lang.String r0 = "ImageLoader:"
                r6.<init>(r0)
                r0 = 0
                if (r7 == 0) goto L94
                java.lang.Throwable r1 = r7.getCause()
                if (r1 == 0) goto L5f
                java.lang.StackTraceElement[] r2 = r1.getStackTrace()
                int r2 = r2.length
                if (r2 <= 0) goto L5f
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = r1.getMessage()
                r2.append(r3)
                java.lang.String r3 = " @ "
                r2.append(r3)
                java.lang.StackTraceElement[] r3 = r1.getStackTrace()
                r3 = r3[r0]
                java.lang.String r3 = r3.getFileName()
                r2.append(r3)
                java.lang.StackTraceElement[] r3 = r1.getStackTrace()
                r3 = r3[r0]
                java.lang.String r3 = r3.getClassName()
                r2.append(r3)
                java.lang.StackTraceElement[] r1 = r1.getStackTrace()
                r1 = r1[r0]
                int r1 = r1.getLineNumber()
                r2.append(r1)
                java.lang.String r1 = r2.toString()
                goto L61
            L5f:
                java.lang.String r1 = ""
            L61:
                int[] r2 = com.kwad.sdk.core.imageloader.KSImageLoader.1.$SwitchMap$com$kwad$sdk$core$imageloader$core$assist$FailReason$FailType
                com.kwad.sdk.core.imageloader.core.assist.FailReason$FailType r7 = r7.getType()
                int r7 = r7.ordinal()
                r7 = r2[r7]
                r2 = 1
                if (r7 == r2) goto L8f
                r2 = 2
                if (r7 == r2) goto L86
                r1 = 3
                if (r7 == r1) goto L83
                r1 = 4
                if (r7 == r1) goto L80
                r1 = 5
                if (r7 == r1) goto L7d
                goto L94
            L7d:
                java.lang.String r7 = "DECODING_ERROR"
                goto L91
            L80:
                java.lang.String r7 = "NETWORK_DENIED"
                goto L91
            L83:
                java.lang.String r7 = "OUT_OF_MEMORY"
                goto L91
            L86:
                java.lang.String r7 = "IO_ERROR"
                r6.append(r7)
                r6.append(r1)
                goto L94
            L8f:
                java.lang.String r7 = "UNKNOWN"
            L91:
                r6.append(r7)
            L94:
                com.kwad.sdk.core.imageloader.OnRenderResultListener r7 = com.kwad.sdk.core.imageloader.KSImageLoader.access$000()
                if (r7 == 0) goto La7
                com.kwad.sdk.core.imageloader.OnRenderResultListener r7 = com.kwad.sdk.core.imageloader.KSImageLoader.access$000()
                com.kwad.sdk.core.response.model.AdTemplate r1 = r4.adTemplate
                java.lang.String r6 = r6.toString()
                r7.onRenderResult(r0, r1, r5, r6)
            La7:
                com.kwad.sdk.utils.y.IE()
                return
        }

        @Override
        public void onLoadingStarted(java.lang.String r2, android.view.View r3) {
                r1 = this;
                com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r0 = r1.loadingListener
                if (r0 == 0) goto L7
                r0.onLoadingStarted(r2, r3)
            L7:
                long r2 = android.os.SystemClock.elapsedRealtime()
                r1.startTime = r2
                com.kwad.sdk.utils.y.IC()
                return
        }
    }

    static {
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder
            r0.<init>()
            android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.ARGB_8888
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.bitmapConfig(r1)
            r1 = 1
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.cacheOnDisk(r1)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.cacheInMemory(r1)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0 = r0.build()
            com.kwad.sdk.core.imageloader.KSImageLoader.IMGOPTION_NORMAL = r0
            return
    }

    public KSImageLoader() {
            r0 = this;
            r0.<init>()
            return
    }

    static com.kwad.sdk.core.imageloader.OnRenderResultListener access$000() {
            com.kwad.sdk.core.imageloader.OnRenderResultListener r0 = getGlobalImageListener()
            return r0
    }

    public static android.graphics.Bitmap blur(android.content.Context r3, android.graphics.Bitmap r4, int r5) {
            android.graphics.Bitmap$Config r0 = r4.getConfig()     // Catch: java.lang.Exception -> L4c
            android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.ARGB_8888     // Catch: java.lang.Exception -> L4c
            r2 = 1
            if (r0 != r1) goto Lb
            r0 = r4
            goto L11
        Lb:
            android.graphics.Bitmap$Config r0 = android.graphics.Bitmap.Config.ARGB_8888     // Catch: java.lang.Exception -> L4c
            android.graphics.Bitmap r0 = r4.copy(r0, r2)     // Catch: java.lang.Exception -> L4c
        L11:
            if (r0 != 0) goto L1b
            android.graphics.Bitmap$Config r0 = r4.getConfig()     // Catch: java.lang.Exception -> L4c
            android.graphics.Bitmap r0 = r4.copy(r0, r2)     // Catch: java.lang.Exception -> L4c
        L1b:
            int r1 = r0.getWidth()     // Catch: java.lang.Exception -> L4c
            int r2 = r0.getHeight()     // Catch: java.lang.Exception -> L4c
            android.graphics.Bitmap$Config r0 = r0.getConfig()     // Catch: java.lang.Exception -> L4c
            android.graphics.Bitmap r0 = android.graphics.Bitmap.createBitmap(r1, r2, r0)     // Catch: java.lang.Exception -> L4c
            android.renderscript.RenderScript r3 = android.renderscript.RenderScript.create(r3)     // Catch: java.lang.Exception -> L4c
            android.renderscript.Allocation r1 = android.renderscript.Allocation.createFromBitmap(r3, r0)     // Catch: java.lang.Exception -> L4c
            android.renderscript.Element r2 = r1.getElement()     // Catch: java.lang.Exception -> L4c
            android.renderscript.ScriptIntrinsicBlur r2 = android.renderscript.ScriptIntrinsicBlur.create(r3, r2)     // Catch: java.lang.Exception -> L4c
            r2.setInput(r1)     // Catch: java.lang.Exception -> L4c
            float r5 = (float) r5     // Catch: java.lang.Exception -> L4c
            r2.setRadius(r5)     // Catch: java.lang.Exception -> L4c
            r2.forEach(r1)     // Catch: java.lang.Exception -> L4c
            r1.copyTo(r0)     // Catch: java.lang.Exception -> L4c
            r3.destroy()     // Catch: java.lang.Exception -> L4c
            return r0
        L4c:
            return r4
    }

    public static void clearMemory() {
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r0 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE
            java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1
            android.content.Context r1 = r1.getContext()
            r0.clearMemory(r1)
            return
    }

    private static com.kwad.sdk.core.imageloader.OnRenderResultListener<com.kwad.sdk.core.response.model.AdTemplate> getGlobalImageListener() {
            com.kwad.sdk.core.imageloader.OnRenderResultListener<com.kwad.sdk.core.response.model.AdTemplate> r0 = com.kwad.sdk.core.imageloader.KSImageLoader.mDefaultListener
            if (r0 != 0) goto Lb
            com.kwad.sdk.core.imageloader.GlobalImageListener r0 = new com.kwad.sdk.core.imageloader.GlobalImageListener
            r0.<init>()
            com.kwad.sdk.core.imageloader.KSImageLoader.mDefaultListener = r0
        Lb:
            com.kwad.sdk.core.imageloader.OnRenderResultListener<com.kwad.sdk.core.response.model.AdTemplate> r0 = com.kwad.sdk.core.imageloader.KSImageLoader.mDefaultListener
            return r0
    }

    private static android.content.Context getSDKContext() {
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            if (r0 == 0) goto Lf
            android.content.Context r0 = r0.getContext()
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public static void loadAppIcon(android.widget.ImageView r6, java.lang.String r7, com.kwad.sdk.core.response.model.AdTemplate r8, int r9) {
            if (r6 == 0) goto L6e
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 != 0) goto L6e
            android.content.Context r0 = getSDKContext()
            if (r0 != 0) goto Lf
            goto L6e
        Lf:
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder
            r0.<init>()
            android.content.Context r1 = r6.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.drawable.ksad_default_app_icon
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.showImageOnLoading(r1)
            android.content.Context r1 = r6.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.drawable.ksad_default_app_icon
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.showImageForEmptyUri(r1)
            android.content.Context r1 = r6.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.drawable.ksad_default_app_icon
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.showImageOnFail(r1)
            r1 = 1
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.considerExifParams(r1)
            android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.RGB_565
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.bitmapConfig(r1)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r9 = r0.setCornerRound(r9)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r4 = r9.build()
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r0 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE
            android.content.Context r1 = getSDKContext()
            com.kwad.sdk.core.imageloader.KSImageLoader$InnerImageLoadingListener r5 = new com.kwad.sdk.core.imageloader.KSImageLoader$InnerImageLoadingListener
            r9 = 0
            r5.<init>(r8, r9)
            r2 = r7
            r3 = r6
            r0.load(r1, r2, r3, r4, r5)
        L6e:
            return
    }

    public static void loadCircleIcon(android.widget.ImageView r6, java.lang.String r7, android.graphics.drawable.Drawable r8) {
            if (r6 == 0) goto L49
            android.content.Context r0 = getSDKContext()
            if (r0 != 0) goto L9
            goto L49
        L9:
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder
            r0.<init>()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.showImageOnLoading(r8)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.showImageForEmptyUri(r8)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r0.showImageOnFail(r8)
            r0 = 1
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.cacheInMemory(r0)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.cacheOnDisc(r0)
            android.graphics.Bitmap$Config r0 = android.graphics.Bitmap.Config.RGB_565
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.bitmapConfig(r0)
            r0 = 255(0xff, float:3.57E-43)
            int r0 = android.graphics.Color.argb(r0, r0, r0, r0)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.setStrokeColor(r0)
            r0 = 1065353216(0x3f800000, float:1.0)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.setStrokeWidth(r0)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r4 = r8.build()
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r0 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE
            android.content.Context r1 = getSDKContext()
            r5 = 0
            r2 = r7
            r3 = r6
            r0.load(r1, r2, r3, r4, r5)
        L49:
            return
    }

    public static void loadCircleIcon(android.widget.ImageView r6, java.lang.String r7, android.graphics.drawable.Drawable r8, int r9) {
            if (r6 == 0) goto L43
            android.content.Context r0 = getSDKContext()
            if (r0 != 0) goto L9
            goto L43
        L9:
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder
            r0.<init>()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.showImageOnLoading(r8)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.showImageForEmptyUri(r8)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r0.showImageOnFail(r8)
            r0 = 1
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.cacheInMemory(r0)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.cacheOnDisc(r0)
            android.graphics.Bitmap$Config r0 = android.graphics.Bitmap.Config.RGB_565
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.bitmapConfig(r0)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.setStrokeColor(r9)
            r9 = 1065353216(0x3f800000, float:1.0)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.setStrokeWidth(r9)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r4 = r8.build()
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r0 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE
            android.content.Context r1 = getSDKContext()
            r5 = 0
            r2 = r7
            r3 = r6
            r0.load(r1, r2, r3, r4, r5)
        L43:
            return
    }

    public static void loadCircleIconWithBorder(android.widget.ImageView r6, java.lang.String r7, android.graphics.drawable.Drawable r8, java.lang.Integer r9, float r10) {
            if (r6 == 0) goto L45
            android.content.Context r0 = getSDKContext()
            if (r0 != 0) goto L9
            goto L45
        L9:
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder
            r0.<init>()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.showImageOnLoading(r8)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.showImageForEmptyUri(r8)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r0.showImageOnFail(r8)
            r0 = 1
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.cacheInMemory(r0)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.cacheOnDisc(r0)
            android.graphics.Bitmap$Config r0 = android.graphics.Bitmap.Config.RGB_565
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.bitmapConfig(r0)
            int r9 = r9.intValue()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.setStrokeColor(r9)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.setStrokeWidth(r10)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r4 = r8.build()
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r0 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE
            android.content.Context r1 = getSDKContext()
            r5 = 0
            r2 = r7
            r3 = r6
            r0.load(r1, r2, r3, r4, r5)
        L45:
            return
    }

    public static void loadCircleIconWithoutStroke(android.widget.ImageView r6, java.lang.String r7, android.graphics.drawable.Drawable r8) {
            if (r6 == 0) goto L3d
            android.content.Context r0 = getSDKContext()
            if (r0 != 0) goto L9
            goto L3d
        L9:
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder
            r0.<init>()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.showImageOnLoading(r8)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.showImageForEmptyUri(r8)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r0.showImageOnFail(r8)
            r0 = 1
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.cacheInMemory(r0)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.cacheOnDisc(r0)
            android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.RGB_565
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.bitmapConfig(r1)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r8 = r8.setCircle(r0)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r4 = r8.build()
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r0 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE
            android.content.Context r1 = getSDKContext()
            r5 = 0
            r2 = r7
            r3 = r6
            r0.load(r1, r2, r3, r4, r5)
        L3d:
            return
    }

    public static void loadFeeImage(android.widget.ImageView r1, java.lang.String r2, com.kwad.sdk.core.response.model.AdTemplate r3) {
            r0 = 0
            loadFeeImage(r1, r2, r3, r0)
            return
    }

    public static void loadFeeImage(android.widget.ImageView r7, java.lang.String r8, com.kwad.sdk.core.response.model.AdTemplate r9, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r10) {
            if (r7 == 0) goto L3b
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L3b
            android.content.Context r0 = getSDKContext()
            if (r0 != 0) goto Lf
            goto L3b
        Lf:
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder
            r0.<init>()
            android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.RGB_565
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.bitmapConfig(r1)
            r1 = 1
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.cacheInMemory(r1)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.cacheOnDisk(r1)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.setCornerRound(r1)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r5 = r0.build()
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r1 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE
            android.content.Context r2 = getSDKContext()
            com.kwad.sdk.core.imageloader.KSImageLoader$InnerImageLoadingListener r6 = new com.kwad.sdk.core.imageloader.KSImageLoader$InnerImageLoadingListener
            r6.<init>(r9, r10)
            r3 = r8
            r4 = r7
            r1.load(r2, r3, r4, r5, r6)
        L3b:
            return
    }

    public static void loadImage(android.widget.ImageView r2, java.lang.String r3) {
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0 = com.kwad.sdk.core.imageloader.KSImageLoader.IMGOPTION_NORMAL
            r1 = 0
            loadImage(r2, r3, r1, r0)
            return
    }

    public static void loadImage(android.widget.ImageView r6, java.lang.String r7, com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r8) {
            if (r6 != 0) goto L3
            return
        L3:
            if (r8 != 0) goto L7
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r8 = com.kwad.sdk.core.imageloader.KSImageLoader.IMGOPTION_NORMAL
        L7:
            r4 = r8
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r0 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE
            java.lang.Class<com.kwad.sdk.service.a.e> r8 = com.kwad.sdk.service.a.e.class
            java.lang.Object r8 = com.kwad.sdk.service.ServiceProvider.get(r8)
            com.kwad.sdk.service.a.e r8 = (com.kwad.sdk.service.a.e) r8
            android.content.Context r1 = r8.getContext()
            r5 = 0
            r2 = r7
            r3 = r6
            r0.load(r1, r2, r3, r4, r5)
            return
    }

    public static void loadImage(android.widget.ImageView r6, java.lang.String r7, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r8) {
            if (r6 != 0) goto L3
            return
        L3:
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r0 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE
            java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
            com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1
            android.content.Context r1 = r1.getContext()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r4 = com.kwad.sdk.core.imageloader.KSImageLoader.IMGOPTION_NORMAL
            r2 = r7
            r3 = r6
            r5 = r8
            r0.load(r1, r2, r3, r4, r5)
            return
    }

    public static void loadImage(android.widget.ImageView r1, java.lang.String r2, com.kwad.sdk.core.response.model.AdTemplate r3) {
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0 = com.kwad.sdk.core.imageloader.KSImageLoader.IMGOPTION_NORMAL
            loadImage(r1, r2, r3, r0)
            return
    }

    public static void loadImage(android.widget.ImageView r6, java.lang.String r7, com.kwad.sdk.core.response.model.AdTemplate r8, com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r9) {
            if (r6 == 0) goto L1f
            android.content.Context r0 = getSDKContext()
            if (r0 != 0) goto L9
            goto L1f
        L9:
            if (r9 != 0) goto Ld
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r9 = com.kwad.sdk.core.imageloader.KSImageLoader.IMGOPTION_NORMAL
        Ld:
            r4 = r9
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r0 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE
            android.content.Context r1 = getSDKContext()
            com.kwad.sdk.core.imageloader.KSImageLoader$InnerImageLoadingListener r5 = new com.kwad.sdk.core.imageloader.KSImageLoader$InnerImageLoadingListener
            r9 = 0
            r5.<init>(r8, r9)
            r2 = r7
            r3 = r6
            r0.load(r1, r2, r3, r4, r5)
        L1f:
            return
    }

    public static void loadImage(android.widget.ImageView r6, java.lang.String r7, com.kwad.sdk.core.response.model.AdTemplate r8, com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r9, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r10) {
            if (r6 == 0) goto L24
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 != 0) goto L24
            android.content.Context r0 = getSDKContext()
            if (r0 != 0) goto Lf
            goto L24
        Lf:
            if (r9 != 0) goto L13
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r9 = com.kwad.sdk.core.imageloader.KSImageLoader.IMGOPTION_NORMAL
        L13:
            r4 = r9
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r0 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE
            android.content.Context r1 = getSDKContext()
            com.kwad.sdk.core.imageloader.KSImageLoader$InnerImageLoadingListener r5 = new com.kwad.sdk.core.imageloader.KSImageLoader$InnerImageLoadingListener
            r5.<init>(r8, r10)
            r2 = r7
            r3 = r6
            r0.load(r1, r2, r3, r4, r5)
        L24:
            return
    }

    public static void loadImage(android.widget.ImageView r7, java.lang.String r8, com.kwad.sdk.core.response.model.AdTemplate r9, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r10) {
            if (r7 == 0) goto L21
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L21
            android.content.Context r0 = getSDKContext()
            if (r0 != 0) goto Lf
            goto L21
        Lf:
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r1 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE
            android.content.Context r2 = getSDKContext()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r5 = com.kwad.sdk.core.imageloader.KSImageLoader.IMGOPTION_NORMAL
            com.kwad.sdk.core.imageloader.KSImageLoader$InnerImageLoadingListener r6 = new com.kwad.sdk.core.imageloader.KSImageLoader$InnerImageLoadingListener
            r6.<init>(r9, r10)
            r3 = r8
            r4 = r7
            r1.load(r2, r3, r4, r5, r6)
        L21:
            return
    }

    public static void loadImage(java.lang.String r3, com.kwad.sdk.core.response.model.AdTemplate r4, com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r5, com.kwad.sdk.core.imageloader.core.listener.ImageLoadingListener r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L1b
            android.content.Context r0 = getSDKContext()
            if (r0 != 0) goto Ld
            goto L1b
        Ld:
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r0 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE
            android.content.Context r1 = getSDKContext()
            com.kwad.sdk.core.imageloader.KSImageLoader$InnerImageLoadingListener r2 = new com.kwad.sdk.core.imageloader.KSImageLoader$InnerImageLoadingListener
            r2.<init>(r4, r6)
            r0.load(r1, r3, r5, r2)
        L1b:
            return
    }

    public static void loadWithRadius(android.widget.ImageView r6, java.lang.String r7, com.kwad.sdk.core.response.model.AdTemplate r8, int r9) {
            if (r6 == 0) goto L6e
            boolean r0 = android.text.TextUtils.isEmpty(r7)
            if (r0 != 0) goto L6e
            android.content.Context r0 = getSDKContext()
            if (r0 != 0) goto Lf
            goto L6e
        Lf:
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder
            r0.<init>()
            android.content.Context r1 = r6.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.drawable.ksad_default_app_icon
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.showImageOnLoading(r1)
            android.content.Context r1 = r6.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.drawable.ksad_default_app_icon
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.showImageForEmptyUri(r1)
            android.content.Context r1 = r6.getContext()
            android.content.res.Resources r1 = r1.getResources()
            int r2 = com.kwad.sdk.R.drawable.ksad_default_app_icon
            android.graphics.drawable.Drawable r1 = r1.getDrawable(r2)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.showImageOnFail(r1)
            r1 = 1
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.considerExifParams(r1)
            android.graphics.Bitmap$Config r1 = android.graphics.Bitmap.Config.RGB_565
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r0.bitmapConfig(r1)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r9 = r0.setCornerRound(r9)
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r4 = r9.build()
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r0 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE
            android.content.Context r1 = getSDKContext()
            com.kwad.sdk.core.imageloader.KSImageLoader$InnerImageLoadingListener r5 = new com.kwad.sdk.core.imageloader.KSImageLoader$InnerImageLoadingListener
            r9 = 0
            r5.<init>(r8, r9)
            r2 = r7
            r3 = r6
            r0.load(r1, r2, r3, r4, r5)
        L6e:
            return
    }

    public static void pause() {
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r0 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE
            r0.pause()
            return
    }

    public static void preloadImage(java.lang.String r2, com.kwad.sdk.core.response.model.AdTemplate r3) {
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0 = com.kwad.sdk.core.imageloader.KSImageLoader.IMGOPTION_NORMAL
            r1 = 0
            loadImage(r2, r3, r0, r1)
            return
    }

    public static void resume() {
            com.kwad.sdk.core.imageloader.ImageLoaderProxy r0 = com.kwad.sdk.core.imageloader.ImageLoaderProxy.INSTANCE
            r0.resume()
            return
    }
}
