package com.kwad.components.ad.splashscreen;

public final class SplashPlayModuleCache {
    private java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.kwad.components.ad.splashscreen.e.a>> BY;

    enum Holder extends java.lang.Enum<com.kwad.components.ad.splashscreen.SplashPlayModuleCache.Holder> {
        private static final com.kwad.components.ad.splashscreen.SplashPlayModuleCache.Holder[] $VALUES = null;
        public static final com.kwad.components.ad.splashscreen.SplashPlayModuleCache.Holder INSTANCE = null;
        private com.kwad.components.ad.splashscreen.SplashPlayModuleCache mInstance;

        static {
                com.kwad.components.ad.splashscreen.SplashPlayModuleCache$Holder r0 = new com.kwad.components.ad.splashscreen.SplashPlayModuleCache$Holder
                r1 = 0
                java.lang.String r2 = "INSTANCE"
                r0.<init>(r2, r1)
                com.kwad.components.ad.splashscreen.SplashPlayModuleCache.Holder.INSTANCE = r0
                r2 = 1
                com.kwad.components.ad.splashscreen.SplashPlayModuleCache$Holder[] r2 = new com.kwad.components.ad.splashscreen.SplashPlayModuleCache.Holder[r2]
                r2[r1] = r0
                com.kwad.components.ad.splashscreen.SplashPlayModuleCache.Holder.$VALUES = r2
                return
        }

        Holder(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                com.kwad.components.ad.splashscreen.SplashPlayModuleCache r1 = new com.kwad.components.ad.splashscreen.SplashPlayModuleCache
                r2 = 0
                r1.<init>(r2)
                r0.mInstance = r1
                return
        }

        public static com.kwad.components.ad.splashscreen.SplashPlayModuleCache.Holder valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.components.ad.splashscreen.SplashPlayModuleCache$Holder> r0 = com.kwad.components.ad.splashscreen.SplashPlayModuleCache.Holder.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.components.ad.splashscreen.SplashPlayModuleCache$Holder r1 = (com.kwad.components.ad.splashscreen.SplashPlayModuleCache.Holder) r1
                return r1
        }

        public static com.kwad.components.ad.splashscreen.SplashPlayModuleCache.Holder[] values() {
                com.kwad.components.ad.splashscreen.SplashPlayModuleCache$Holder[] r0 = com.kwad.components.ad.splashscreen.SplashPlayModuleCache.Holder.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.components.ad.splashscreen.SplashPlayModuleCache$Holder[] r0 = (com.kwad.components.ad.splashscreen.SplashPlayModuleCache.Holder[]) r0
                return r0
        }

        final com.kwad.components.ad.splashscreen.SplashPlayModuleCache getInstance() {
                r1 = this;
                com.kwad.components.ad.splashscreen.SplashPlayModuleCache r0 = r1.mInstance
                return r0
        }
    }

    private SplashPlayModuleCache() {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 1
            r0.<init>(r1)
            r2.BY = r0
            return
    }

    SplashPlayModuleCache(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }
}
