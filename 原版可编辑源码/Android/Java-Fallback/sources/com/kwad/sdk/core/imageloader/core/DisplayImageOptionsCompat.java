package com.kwad.sdk.core.imageloader.core;

public final class DisplayImageOptionsCompat {
    private final int blurRadius;
    private final boolean cacheInMemory;
    private final boolean cacheOnDisk;
    private final boolean considerExifParams;
    private final int cornerRound;
    private final android.graphics.BitmapFactory.Options decodingOptions;
    private final int delayBeforeLoading;
    private final android.graphics.drawable.Drawable imageForEmptyUri;
    private final android.graphics.drawable.Drawable imageOnFail;
    private final android.graphics.drawable.Drawable imageOnLoading;
    private final int imageResForEmptyUri;
    private final int imageResOnFail;
    private final int imageResOnLoading;
    private final boolean isCircle;
    private final boolean isFrameSequence;
    private final boolean isSyncLoading;
    private final boolean resetViewBeforeLoading;
    private final int strokeColor;
    private final float strokeWidth;

    static class 1 {
    }

    public static class Builder {
        private int blurRadius;
        private boolean cacheInMemory;
        private boolean cacheOnDisk;
        private boolean considerExifParams;
        private int cornerRound;
        private android.graphics.BitmapFactory.Options decodingOptions;
        private int delayBeforeLoading;
        private android.graphics.drawable.Drawable imageForEmptyUri;
        private android.graphics.drawable.Drawable imageOnFail;
        private android.graphics.drawable.Drawable imageOnLoading;
        private int imageResForEmptyUri;
        private int imageResOnFail;
        private int imageResOnLoading;
        private boolean isCircle;
        private boolean isFrameSequence;
        private boolean isSyncLoading;
        private boolean resetViewBeforeLoading;
        private int strokeColor;
        private float strokeWidth;

        public Builder() {
                r2 = this;
                r2.<init>()
                r0 = 0
                r2.imageResOnLoading = r0
                r2.imageResForEmptyUri = r0
                r2.imageResOnFail = r0
                r1 = 0
                r2.imageOnLoading = r1
                r2.imageForEmptyUri = r1
                r2.imageOnFail = r1
                r2.resetViewBeforeLoading = r0
                r2.cacheInMemory = r0
                r2.cacheOnDisk = r0
                android.graphics.BitmapFactory$Options r1 = new android.graphics.BitmapFactory$Options
                r1.<init>()
                r2.decodingOptions = r1
                r2.delayBeforeLoading = r0
                r2.considerExifParams = r0
                r2.isSyncLoading = r0
                return
        }

        static int access$000(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                int r0 = r0.imageResOnLoading
                return r0
        }

        static int access$100(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                int r0 = r0.imageResForEmptyUri
                return r0
        }

        static int access$1000(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                int r0 = r0.delayBeforeLoading
                return r0
        }

        static boolean access$1100(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                boolean r0 = r0.considerExifParams
                return r0
        }

        static boolean access$1200(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                boolean r0 = r0.isSyncLoading
                return r0
        }

        static int access$1300(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                int r0 = r0.blurRadius
                return r0
        }

        static boolean access$1400(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                boolean r0 = r0.isFrameSequence
                return r0
        }

        static int access$1500(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                int r0 = r0.cornerRound
                return r0
        }

        static boolean access$1600(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                boolean r0 = r0.isCircle
                return r0
        }

        static int access$1700(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                int r0 = r0.strokeColor
                return r0
        }

        static float access$1800(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                float r0 = r0.strokeWidth
                return r0
        }

        static int access$200(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                int r0 = r0.imageResOnFail
                return r0
        }

        static android.graphics.drawable.Drawable access$300(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                android.graphics.drawable.Drawable r0 = r0.imageOnLoading
                return r0
        }

        static android.graphics.drawable.Drawable access$400(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                android.graphics.drawable.Drawable r0 = r0.imageForEmptyUri
                return r0
        }

        static android.graphics.drawable.Drawable access$500(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                android.graphics.drawable.Drawable r0 = r0.imageOnFail
                return r0
        }

        static boolean access$600(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                boolean r0 = r0.resetViewBeforeLoading
                return r0
        }

        static boolean access$700(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                boolean r0 = r0.cacheInMemory
                return r0
        }

        static boolean access$800(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                boolean r0 = r0.cacheOnDisk
                return r0
        }

        static android.graphics.BitmapFactory.Options access$900(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r0) {
                android.graphics.BitmapFactory$Options r0 = r0.decodingOptions
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder bitmapConfig(android.graphics.Bitmap.Config r2) {
                r1 = this;
                if (r2 == 0) goto L7
                android.graphics.BitmapFactory$Options r0 = r1.decodingOptions
                r0.inPreferredConfig = r2
                return r1
            L7:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "bitmapConfig can't be null"
                r2.<init>(r0)
                throw r2
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat build() {
                r2 = this;
                com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }

        @java.lang.Deprecated
        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder cacheInMemory() {
                r1 = this;
                r0 = 1
                r1.cacheInMemory = r0
                return r1
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder cacheInMemory(boolean r1) {
                r0 = this;
                r0.cacheInMemory = r1
                return r0
        }

        @java.lang.Deprecated
        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder cacheOnDisc() {
                r1 = this;
                r0 = 1
                com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = r1.cacheOnDisk(r0)
                return r0
        }

        @java.lang.Deprecated
        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder cacheOnDisc(boolean r1) {
                r0 = this;
                com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r1 = r0.cacheOnDisk(r1)
                return r1
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder cacheOnDisk(boolean r1) {
                r0 = this;
                r0.cacheOnDisk = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder cloneFrom(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r2) {
                r1 = this;
                int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$1900(r2)
                r1.imageResOnLoading = r0
                int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$2000(r2)
                r1.imageResForEmptyUri = r0
                int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$2100(r2)
                r1.imageResOnFail = r0
                android.graphics.drawable.Drawable r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$2200(r2)
                r1.imageOnLoading = r0
                android.graphics.drawable.Drawable r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$2300(r2)
                r1.imageForEmptyUri = r0
                android.graphics.drawable.Drawable r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$2400(r2)
                r1.imageOnFail = r0
                boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$2500(r2)
                r1.resetViewBeforeLoading = r0
                boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$2600(r2)
                r1.cacheInMemory = r0
                boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$2700(r2)
                r1.cacheOnDisk = r0
                android.graphics.BitmapFactory$Options r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$2800(r2)
                r1.decodingOptions = r0
                int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$2900(r2)
                r1.delayBeforeLoading = r0
                boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$3000(r2)
                r1.considerExifParams = r0
                boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$3100(r2)
                r1.isSyncLoading = r0
                int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$3200(r2)
                r1.blurRadius = r0
                boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$3300(r2)
                r1.isFrameSequence = r0
                int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$3400(r2)
                r1.cornerRound = r0
                boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$3500(r2)
                r1.isCircle = r0
                int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$3600(r2)
                r1.strokeColor = r0
                float r2 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.access$3700(r2)
                r1.strokeWidth = r2
                return r1
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder considerExifParams(boolean r1) {
                r0 = this;
                r0.considerExifParams = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder setBlurRadius(int r1) {
                r0 = this;
                r0.blurRadius = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder setCircle(boolean r1) {
                r0 = this;
                r0.isCircle = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder setCornerRound(int r1) {
                r0 = this;
                r0.cornerRound = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder setFrameSequence(boolean r1) {
                r0 = this;
                r0.isFrameSequence = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder setStrokeColor(int r1) {
                r0 = this;
                r0.strokeColor = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder setStrokeWidth(float r2) {
                r1 = this;
                r0 = 0
                int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
                if (r0 <= 0) goto La
                r1.strokeWidth = r2
                r2 = 1
                r1.isCircle = r2
            La:
                return r1
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder showImageForEmptyUri(int r1) {
                r0 = this;
                r0.imageResForEmptyUri = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder showImageForEmptyUri(android.graphics.drawable.Drawable r1) {
                r0 = this;
                r0.imageForEmptyUri = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder showImageOnFail(int r1) {
                r0 = this;
                r0.imageResOnFail = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder showImageOnFail(android.graphics.drawable.Drawable r1) {
                r0 = this;
                r0.imageOnFail = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder showImageOnLoading(int r1) {
                r0 = this;
                r0.imageResOnLoading = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder showImageOnLoading(android.graphics.drawable.Drawable r1) {
                r0 = this;
                r0.imageOnLoading = r1
                return r0
        }

        @java.lang.Deprecated
        public com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder showStubImage(int r1) {
                r0 = this;
                r0.imageResOnLoading = r1
                return r0
        }
    }

    private DisplayImageOptionsCompat(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r2) {
            r1 = this;
            r1.<init>()
            int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$000(r2)
            r1.imageResOnLoading = r0
            int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$100(r2)
            r1.imageResForEmptyUri = r0
            int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$200(r2)
            r1.imageResOnFail = r0
            android.graphics.drawable.Drawable r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$300(r2)
            r1.imageOnLoading = r0
            android.graphics.drawable.Drawable r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$400(r2)
            r1.imageForEmptyUri = r0
            android.graphics.drawable.Drawable r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$500(r2)
            r1.imageOnFail = r0
            boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$600(r2)
            r1.resetViewBeforeLoading = r0
            boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$700(r2)
            r1.cacheInMemory = r0
            boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$800(r2)
            r1.cacheOnDisk = r0
            android.graphics.BitmapFactory$Options r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$900(r2)
            r1.decodingOptions = r0
            int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$1000(r2)
            r1.delayBeforeLoading = r0
            boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$1100(r2)
            r1.considerExifParams = r0
            boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$1200(r2)
            r1.isSyncLoading = r0
            int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$1300(r2)
            r1.blurRadius = r0
            boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$1400(r2)
            r1.isFrameSequence = r0
            int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$1500(r2)
            r1.cornerRound = r0
            boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$1600(r2)
            r1.isCircle = r0
            int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$1700(r2)
            r1.strokeColor = r0
            float r2 = com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder.access$1800(r2)
            r1.strokeWidth = r2
            return
    }

    DisplayImageOptionsCompat(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.Builder r1, com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    static int access$1900(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            int r0 = r0.imageResOnLoading
            return r0
    }

    static int access$2000(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            int r0 = r0.imageResForEmptyUri
            return r0
    }

    static int access$2100(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            int r0 = r0.imageResOnFail
            return r0
    }

    static android.graphics.drawable.Drawable access$2200(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            android.graphics.drawable.Drawable r0 = r0.imageOnLoading
            return r0
    }

    static android.graphics.drawable.Drawable access$2300(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            android.graphics.drawable.Drawable r0 = r0.imageForEmptyUri
            return r0
    }

    static android.graphics.drawable.Drawable access$2400(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            android.graphics.drawable.Drawable r0 = r0.imageOnFail
            return r0
    }

    static boolean access$2500(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            boolean r0 = r0.resetViewBeforeLoading
            return r0
    }

    static boolean access$2600(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            boolean r0 = r0.cacheInMemory
            return r0
    }

    static boolean access$2700(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            boolean r0 = r0.cacheOnDisk
            return r0
    }

    static android.graphics.BitmapFactory.Options access$2800(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            android.graphics.BitmapFactory$Options r0 = r0.decodingOptions
            return r0
    }

    static int access$2900(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            int r0 = r0.delayBeforeLoading
            return r0
    }

    static boolean access$3000(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            boolean r0 = r0.considerExifParams
            return r0
    }

    static boolean access$3100(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            boolean r0 = r0.isSyncLoading
            return r0
    }

    static int access$3200(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            int r0 = r0.blurRadius
            return r0
    }

    static boolean access$3300(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            boolean r0 = r0.isFrameSequence
            return r0
    }

    static int access$3400(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            int r0 = r0.cornerRound
            return r0
    }

    static boolean access$3500(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            boolean r0 = r0.isCircle
            return r0
    }

    static int access$3600(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            int r0 = r0.strokeColor
            return r0
    }

    static float access$3700(com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0) {
            float r0 = r0.strokeWidth
            return r0
    }

    public static com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat createSimple() {
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder r0 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat$Builder
            r0.<init>()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptionsCompat r0 = r0.build()
            return r0
    }

    public final int getBlurRadius() {
            r1 = this;
            int r0 = r1.blurRadius
            return r0
    }

    public final int getCornerRound() {
            r1 = this;
            int r0 = r1.cornerRound
            return r0
    }

    public final android.graphics.BitmapFactory.Options getDecodingOptions() {
            r1 = this;
            android.graphics.BitmapFactory$Options r0 = r1.decodingOptions
            return r0
    }

    public final int getDelayBeforeLoading() {
            r1 = this;
            int r0 = r1.delayBeforeLoading
            return r0
    }

    public final android.graphics.drawable.Drawable getImageForEmptyUri(android.content.res.Resources r2) {
            r1 = this;
            int r0 = r1.imageResForEmptyUri
            if (r0 == 0) goto L9
            android.graphics.drawable.Drawable r2 = r2.getDrawable(r0)
            return r2
        L9:
            android.graphics.drawable.Drawable r2 = r1.imageForEmptyUri
            return r2
    }

    public final android.graphics.drawable.Drawable getImageOnFail(android.content.res.Resources r2) {
            r1 = this;
            int r0 = r1.imageResOnFail
            if (r0 == 0) goto L9
            android.graphics.drawable.Drawable r2 = r2.getDrawable(r0)
            return r2
        L9:
            android.graphics.drawable.Drawable r2 = r1.imageOnFail
            return r2
    }

    public final android.graphics.drawable.Drawable getImageOnLoading(android.content.res.Resources r2) {
            r1 = this;
            int r0 = r1.imageResOnLoading
            if (r0 == 0) goto L9
            android.graphics.drawable.Drawable r2 = r2.getDrawable(r0)
            return r2
        L9:
            android.graphics.drawable.Drawable r2 = r1.imageOnLoading
            return r2
    }

    public final int getStrokeColor() {
            r1 = this;
            int r0 = r1.strokeColor
            return r0
    }

    public final float getStrokeWidth() {
            r1 = this;
            float r0 = r1.strokeWidth
            return r0
    }

    public final boolean isCacheInMemory() {
            r1 = this;
            boolean r0 = r1.cacheInMemory
            return r0
    }

    public final boolean isCacheOnDisk() {
            r1 = this;
            boolean r0 = r1.cacheOnDisk
            return r0
    }

    public final boolean isCircle() {
            r1 = this;
            boolean r0 = r1.isCircle
            return r0
    }

    public final boolean isConsiderExifParams() {
            r1 = this;
            boolean r0 = r1.considerExifParams
            return r0
    }

    public final boolean isFrameSequence() {
            r1 = this;
            boolean r0 = r1.isFrameSequence
            return r0
    }

    public final boolean isResetViewBeforeLoading() {
            r1 = this;
            boolean r0 = r1.resetViewBeforeLoading
            return r0
    }

    public final boolean shouldDelayBeforeLoading() {
            r1 = this;
            int r0 = r1.delayBeforeLoading
            if (r0 <= 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    public final boolean shouldShowImageForEmptyUri() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.imageForEmptyUri
            if (r0 != 0) goto Lb
            int r0 = r1.imageResForEmptyUri
            if (r0 == 0) goto L9
            goto Lb
        L9:
            r0 = 0
            return r0
        Lb:
            r0 = 1
            return r0
    }

    public final boolean shouldShowImageOnFail() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.imageOnFail
            if (r0 != 0) goto Lb
            int r0 = r1.imageResOnFail
            if (r0 == 0) goto L9
            goto Lb
        L9:
            r0 = 0
            return r0
        Lb:
            r0 = 1
            return r0
    }

    public final boolean shouldShowImageOnLoading() {
            r1 = this;
            android.graphics.drawable.Drawable r0 = r1.imageOnLoading
            if (r0 != 0) goto Lb
            int r0 = r1.imageResOnLoading
            if (r0 == 0) goto L9
            goto Lb
        L9:
            r0 = 0
            return r0
        Lb:
            r0 = 1
            return r0
    }
}
