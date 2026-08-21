package com.kwad.sdk.core.video.videoview;

public final class AdVideoPlayerViewCache {
    private java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.kwad.sdk.core.video.videoview.a>> BY;

    enum Holder extends java.lang.Enum<com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.Holder> {
        private static final com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.Holder[] $VALUES = null;
        public static final com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.Holder INSTANCE = null;
        private com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache mInstance;

        static {
                com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache$Holder r0 = new com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache$Holder
                r1 = 0
                java.lang.String r2 = "INSTANCE"
                r0.<init>(r2, r1)
                com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.Holder.INSTANCE = r0
                r2 = 1
                com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache$Holder[] r2 = new com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.Holder[r2]
                r2[r1] = r0
                com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.Holder.$VALUES = r2
                return
        }

        Holder(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache r1 = new com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache
                r2 = 0
                r1.<init>(r2)
                r0.mInstance = r1
                return
        }

        public static com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.Holder valueOf(java.lang.String r1) {
                java.lang.Class<com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache$Holder> r0 = com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.Holder.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache$Holder r1 = (com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.Holder) r1
                return r1
        }

        public static com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.Holder[] values() {
                com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache$Holder[] r0 = com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.Holder.$VALUES
                java.lang.Object r0 = r0.clone()
                com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache$Holder[] r0 = (com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.Holder[]) r0
                return r0
        }

        final com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache getInstance() {
                r1 = this;
                com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache r0 = r1.mInstance
                return r0
        }
    }

    private AdVideoPlayerViewCache() {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 1
            r0.<init>(r1)
            r2.BY = r0
            return
    }

    AdVideoPlayerViewCache(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache getInstance() {
            com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache$Holder r0 = com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache.Holder.INSTANCE
            com.kwad.sdk.core.video.videoview.AdVideoPlayerViewCache r0 = r0.getInstance()
            return r0
    }

    public final void a(java.lang.String r2, com.kwad.sdk.core.video.videoview.a r3) {
            r1 = this;
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r3)
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.kwad.sdk.core.video.videoview.a>> r3 = r1.BY
            r3.put(r2, r0)
            return
    }

    public final com.kwad.sdk.core.video.videoview.a dJ(java.lang.String r3) {
            r2 = this;
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.kwad.sdk.core.video.videoview.a>> r0 = r2.BY
            java.lang.Object r0 = r0.get(r3)
            java.lang.ref.WeakReference r0 = (java.lang.ref.WeakReference) r0
            r1 = 0
            if (r0 == 0) goto L19
            java.lang.Object r0 = r0.get()
            com.kwad.sdk.core.video.videoview.a r0 = (com.kwad.sdk.core.video.videoview.a) r0
            if (r0 == 0) goto L14
            return r0
        L14:
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.kwad.sdk.core.video.videoview.a>> r0 = r2.BY
            r0.remove(r3)
        L19:
            return r1
    }

    public final void remove(java.lang.String r2) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.ref.WeakReference<com.kwad.sdk.core.video.videoview.a>> r0 = r1.BY
            r0.remove(r2)
            return
    }
}
