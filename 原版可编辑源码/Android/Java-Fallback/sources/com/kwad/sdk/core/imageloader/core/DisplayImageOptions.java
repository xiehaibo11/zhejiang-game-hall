package com.kwad.sdk.core.imageloader.core;

public final class DisplayImageOptions {
    private final boolean cacheInMemory;
    private final boolean cacheOnDisk;
    private final boolean considerExifParams;
    private final android.graphics.BitmapFactory.Options decodingOptions;
    private final int delayBeforeLoading;
    private final com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer displayer;
    private final java.lang.Object extraForDownloader;
    private final android.os.Handler handler;
    private final android.graphics.drawable.Drawable imageForEmptyUri;
    private final android.graphics.drawable.Drawable imageOnFail;
    private final android.graphics.drawable.Drawable imageOnLoading;
    private final int imageResForEmptyUri;
    private final int imageResOnFail;
    private final int imageResOnLoading;
    private final com.kwad.sdk.core.imageloader.core.assist.ImageScaleType imageScaleType;
    private final boolean isSyncLoading;
    private final com.kwad.sdk.core.imageloader.core.process.BitmapProcessor postProcessor;
    private final com.kwad.sdk.core.imageloader.core.process.BitmapProcessor preProcessor;
    private final boolean resetViewBeforeLoading;

    static class 1 {
    }

    public static class Builder {
        private boolean cacheInMemory;
        private boolean cacheOnDisk;
        private boolean considerExifParams;
        private android.graphics.BitmapFactory.Options decodingOptions;
        private int delayBeforeLoading;
        private com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer displayer;
        private java.lang.Object extraForDownloader;
        private android.os.Handler handler;
        private android.graphics.drawable.Drawable imageForEmptyUri;
        private android.graphics.drawable.Drawable imageOnFail;
        private android.graphics.drawable.Drawable imageOnLoading;
        private int imageResForEmptyUri;
        private int imageResOnFail;
        private int imageResOnLoading;
        private com.kwad.sdk.core.imageloader.core.assist.ImageScaleType imageScaleType;
        private boolean isSyncLoading;
        private com.kwad.sdk.core.imageloader.core.process.BitmapProcessor postProcessor;
        private com.kwad.sdk.core.imageloader.core.process.BitmapProcessor preProcessor;
        private boolean resetViewBeforeLoading;

        public Builder() {
                r3 = this;
                r3.<init>()
                r0 = 0
                r3.imageResOnLoading = r0
                r3.imageResForEmptyUri = r0
                r3.imageResOnFail = r0
                r1 = 0
                r3.imageOnLoading = r1
                r3.imageForEmptyUri = r1
                r3.imageOnFail = r1
                r3.resetViewBeforeLoading = r0
                r3.cacheInMemory = r0
                r3.cacheOnDisk = r0
                com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r2 = com.kwad.sdk.core.imageloader.core.assist.ImageScaleType.IN_SAMPLE_POWER_OF_2
                r3.imageScaleType = r2
                android.graphics.BitmapFactory$Options r2 = new android.graphics.BitmapFactory$Options
                r2.<init>()
                r3.decodingOptions = r2
                r3.delayBeforeLoading = r0
                r3.considerExifParams = r0
                r3.extraForDownloader = r1
                r3.preProcessor = r1
                r3.postProcessor = r1
                com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer r2 = com.kwad.sdk.core.imageloader.core.DefaultConfigurationFactory.createBitmapDisplayer()
                r3.displayer = r2
                r3.handler = r1
                r3.isSyncLoading = r0
                return
        }

        static int access$000(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                int r0 = r0.imageResOnLoading
                return r0
        }

        static int access$100(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                int r0 = r0.imageResForEmptyUri
                return r0
        }

        static android.graphics.BitmapFactory.Options access$1000(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                android.graphics.BitmapFactory$Options r0 = r0.decodingOptions
                return r0
        }

        static int access$1100(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                int r0 = r0.delayBeforeLoading
                return r0
        }

        static boolean access$1200(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                boolean r0 = r0.considerExifParams
                return r0
        }

        static java.lang.Object access$1300(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                java.lang.Object r0 = r0.extraForDownloader
                return r0
        }

        static com.kwad.sdk.core.imageloader.core.process.BitmapProcessor access$1400(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r0 = r0.preProcessor
                return r0
        }

        static com.kwad.sdk.core.imageloader.core.process.BitmapProcessor access$1500(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r0 = r0.postProcessor
                return r0
        }

        static com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer access$1600(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer r0 = r0.displayer
                return r0
        }

        static android.os.Handler access$1700(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                android.os.Handler r0 = r0.handler
                return r0
        }

        static boolean access$1800(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                boolean r0 = r0.isSyncLoading
                return r0
        }

        static int access$200(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                int r0 = r0.imageResOnFail
                return r0
        }

        static android.graphics.drawable.Drawable access$300(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                android.graphics.drawable.Drawable r0 = r0.imageOnLoading
                return r0
        }

        static android.graphics.drawable.Drawable access$400(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                android.graphics.drawable.Drawable r0 = r0.imageForEmptyUri
                return r0
        }

        static android.graphics.drawable.Drawable access$500(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                android.graphics.drawable.Drawable r0 = r0.imageOnFail
                return r0
        }

        static boolean access$600(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                boolean r0 = r0.resetViewBeforeLoading
                return r0
        }

        static boolean access$700(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                boolean r0 = r0.cacheInMemory
                return r0
        }

        static boolean access$800(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                boolean r0 = r0.cacheOnDisk
                return r0
        }

        static com.kwad.sdk.core.imageloader.core.assist.ImageScaleType access$900(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r0) {
                com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r0 = r0.imageScaleType
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder bitmapConfig(android.graphics.Bitmap.Config r2) {
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

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions build() {
                r2 = this;
                com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptions
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }

        @java.lang.Deprecated
        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder cacheInMemory() {
                r1 = this;
                r0 = 1
                r1.cacheInMemory = r0
                return r1
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder cacheInMemory(boolean r1) {
                r0 = this;
                r0.cacheInMemory = r1
                return r0
        }

        @java.lang.Deprecated
        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder cacheOnDisc() {
                r1 = this;
                r0 = 1
                com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r0 = r1.cacheOnDisk(r0)
                return r0
        }

        @java.lang.Deprecated
        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder cacheOnDisc(boolean r1) {
                r0 = this;
                com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r1 = r0.cacheOnDisk(r1)
                return r1
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder cacheOnDisk(boolean r1) {
                r0 = this;
                r0.cacheOnDisk = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder cloneFrom(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r2) {
                r1 = this;
                int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$1900(r2)
                r1.imageResOnLoading = r0
                int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$2000(r2)
                r1.imageResForEmptyUri = r0
                int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$2100(r2)
                r1.imageResOnFail = r0
                android.graphics.drawable.Drawable r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$2200(r2)
                r1.imageOnLoading = r0
                android.graphics.drawable.Drawable r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$2300(r2)
                r1.imageForEmptyUri = r0
                android.graphics.drawable.Drawable r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$2400(r2)
                r1.imageOnFail = r0
                boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$2500(r2)
                r1.resetViewBeforeLoading = r0
                boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$2600(r2)
                r1.cacheInMemory = r0
                boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$2700(r2)
                r1.cacheOnDisk = r0
                com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$2800(r2)
                r1.imageScaleType = r0
                android.graphics.BitmapFactory$Options r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$2900(r2)
                r1.decodingOptions = r0
                int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$3000(r2)
                r1.delayBeforeLoading = r0
                boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$3100(r2)
                r1.considerExifParams = r0
                java.lang.Object r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$3200(r2)
                r1.extraForDownloader = r0
                com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$3300(r2)
                r1.preProcessor = r0
                com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$3400(r2)
                r1.postProcessor = r0
                com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$3500(r2)
                r1.displayer = r0
                android.os.Handler r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$3600(r2)
                r1.handler = r0
                boolean r2 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.access$3700(r2)
                r1.isSyncLoading = r2
                return r1
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder considerExifParams(boolean r1) {
                r0 = this;
                r0.considerExifParams = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder decodingOptions(android.graphics.BitmapFactory.Options r2) {
                r1 = this;
                if (r2 == 0) goto L5
                r1.decodingOptions = r2
                return r1
            L5:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "decodingOptions can't be null"
                r2.<init>(r0)
                throw r2
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder delayBeforeLoading(int r1) {
                r0 = this;
                r0.delayBeforeLoading = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder displayer(com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer r2) {
                r1 = this;
                if (r2 == 0) goto L5
                r1.displayer = r2
                return r1
            L5:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r0 = "displayer can't be null"
                r2.<init>(r0)
                throw r2
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder extraForDownloader(java.lang.Object r1) {
                r0 = this;
                r0.extraForDownloader = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder handler(android.os.Handler r1) {
                r0 = this;
                r0.handler = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder imageScaleType(com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r1) {
                r0 = this;
                r0.imageScaleType = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder postProcessor(com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r1) {
                r0 = this;
                r0.postProcessor = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder preProcessor(com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r1) {
                r0 = this;
                r0.preProcessor = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder resetViewBeforeLoading() {
                r1 = this;
                r0 = 1
                r1.resetViewBeforeLoading = r0
                return r1
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder resetViewBeforeLoading(boolean r1) {
                r0 = this;
                r0.resetViewBeforeLoading = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder setBlurRadius(int r1) {
                r0 = this;
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder showImageForEmptyUri(int r1) {
                r0 = this;
                r0.imageResForEmptyUri = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder showImageForEmptyUri(android.graphics.drawable.Drawable r1) {
                r0 = this;
                r0.imageForEmptyUri = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder showImageOnFail(int r1) {
                r0 = this;
                r0.imageResOnFail = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder showImageOnFail(android.graphics.drawable.Drawable r1) {
                r0 = this;
                r0.imageOnFail = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder showImageOnLoading(int r1) {
                r0 = this;
                r0.imageResOnLoading = r1
                return r0
        }

        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder showImageOnLoading(android.graphics.drawable.Drawable r1) {
                r0 = this;
                r0.imageOnLoading = r1
                return r0
        }

        @java.lang.Deprecated
        public com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder showStubImage(int r1) {
                r0 = this;
                r0.imageResOnLoading = r1
                return r0
        }

        com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder syncLoading(boolean r1) {
                r0 = this;
                r0.isSyncLoading = r1
                return r0
        }
    }

    private DisplayImageOptions(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r2) {
            r1 = this;
            r1.<init>()
            int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$000(r2)
            r1.imageResOnLoading = r0
            int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$100(r2)
            r1.imageResForEmptyUri = r0
            int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$200(r2)
            r1.imageResOnFail = r0
            android.graphics.drawable.Drawable r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$300(r2)
            r1.imageOnLoading = r0
            android.graphics.drawable.Drawable r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$400(r2)
            r1.imageForEmptyUri = r0
            android.graphics.drawable.Drawable r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$500(r2)
            r1.imageOnFail = r0
            boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$600(r2)
            r1.resetViewBeforeLoading = r0
            boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$700(r2)
            r1.cacheInMemory = r0
            boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$800(r2)
            r1.cacheOnDisk = r0
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$900(r2)
            r1.imageScaleType = r0
            android.graphics.BitmapFactory$Options r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$1000(r2)
            r1.decodingOptions = r0
            int r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$1100(r2)
            r1.delayBeforeLoading = r0
            boolean r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$1200(r2)
            r1.considerExifParams = r0
            java.lang.Object r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$1300(r2)
            r1.extraForDownloader = r0
            com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$1400(r2)
            r1.preProcessor = r0
            com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$1500(r2)
            r1.postProcessor = r0
            com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$1600(r2)
            r1.displayer = r0
            android.os.Handler r0 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$1700(r2)
            r1.handler = r0
            boolean r2 = com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder.access$1800(r2)
            r1.isSyncLoading = r2
            return
    }

    DisplayImageOptions(com.kwad.sdk.core.imageloader.core.DisplayImageOptions.Builder r1, com.kwad.sdk.core.imageloader.core.DisplayImageOptions.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    static int access$1900(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            int r0 = r0.imageResOnLoading
            return r0
    }

    static int access$2000(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            int r0 = r0.imageResForEmptyUri
            return r0
    }

    static int access$2100(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            int r0 = r0.imageResOnFail
            return r0
    }

    static android.graphics.drawable.Drawable access$2200(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            android.graphics.drawable.Drawable r0 = r0.imageOnLoading
            return r0
    }

    static android.graphics.drawable.Drawable access$2300(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            android.graphics.drawable.Drawable r0 = r0.imageForEmptyUri
            return r0
    }

    static android.graphics.drawable.Drawable access$2400(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            android.graphics.drawable.Drawable r0 = r0.imageOnFail
            return r0
    }

    static boolean access$2500(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            boolean r0 = r0.resetViewBeforeLoading
            return r0
    }

    static boolean access$2600(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            boolean r0 = r0.cacheInMemory
            return r0
    }

    static boolean access$2700(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            boolean r0 = r0.cacheOnDisk
            return r0
    }

    static com.kwad.sdk.core.imageloader.core.assist.ImageScaleType access$2800(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r0 = r0.imageScaleType
            return r0
    }

    static android.graphics.BitmapFactory.Options access$2900(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            android.graphics.BitmapFactory$Options r0 = r0.decodingOptions
            return r0
    }

    static int access$3000(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            int r0 = r0.delayBeforeLoading
            return r0
    }

    static boolean access$3100(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            boolean r0 = r0.considerExifParams
            return r0
    }

    static java.lang.Object access$3200(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            java.lang.Object r0 = r0.extraForDownloader
            return r0
    }

    static com.kwad.sdk.core.imageloader.core.process.BitmapProcessor access$3300(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r0 = r0.preProcessor
            return r0
    }

    static com.kwad.sdk.core.imageloader.core.process.BitmapProcessor access$3400(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r0 = r0.postProcessor
            return r0
    }

    static com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer access$3500(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer r0 = r0.displayer
            return r0
    }

    static android.os.Handler access$3600(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            android.os.Handler r0 = r0.handler
            return r0
    }

    static boolean access$3700(com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0) {
            boolean r0 = r0.isSyncLoading
            return r0
    }

    public static com.kwad.sdk.core.imageloader.core.DisplayImageOptions createSimple() {
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder r0 = new com.kwad.sdk.core.imageloader.core.DisplayImageOptions$Builder
            r0.<init>()
            com.kwad.sdk.core.imageloader.core.DisplayImageOptions r0 = r0.build()
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

    public final com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer getDisplayer() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.display.BitmapDisplayer r0 = r1.displayer
            return r0
    }

    public final java.lang.Object getExtraForDownloader() {
            r1 = this;
            java.lang.Object r0 = r1.extraForDownloader
            return r0
    }

    public final android.os.Handler getHandler() {
            r1 = this;
            android.os.Handler r0 = r1.handler
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

    public final com.kwad.sdk.core.imageloader.core.assist.ImageScaleType getImageScaleType() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.assist.ImageScaleType r0 = r1.imageScaleType
            return r0
    }

    public final com.kwad.sdk.core.imageloader.core.process.BitmapProcessor getPostProcessor() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r0 = r1.postProcessor
            return r0
    }

    public final com.kwad.sdk.core.imageloader.core.process.BitmapProcessor getPreProcessor() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r0 = r1.preProcessor
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

    public final boolean isConsiderExifParams() {
            r1 = this;
            boolean r0 = r1.considerExifParams
            return r0
    }

    public final boolean isResetViewBeforeLoading() {
            r1 = this;
            boolean r0 = r1.resetViewBeforeLoading
            return r0
    }

    final boolean isSyncLoading() {
            r1 = this;
            boolean r0 = r1.isSyncLoading
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

    public final boolean shouldPostProcess() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r0 = r1.postProcessor
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    public final boolean shouldPreProcess() {
            r1 = this;
            com.kwad.sdk.core.imageloader.core.process.BitmapProcessor r0 = r1.preProcessor
            if (r0 == 0) goto L6
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
