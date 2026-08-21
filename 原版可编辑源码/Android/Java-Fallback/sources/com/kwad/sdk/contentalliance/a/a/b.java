package com.kwad.sdk.contentalliance.a.a;

public final class b {
    public com.kwad.sdk.core.response.model.AdTemplate adTemplate;
    public com.kwad.sdk.contentalliance.a.a.a aka;
    public boolean isNoCache;
    public java.lang.String manifest;
    public com.kwad.sdk.core.response.model.VideoPlayerStatus videoPlayerStatus;
    public java.lang.String videoUrl;

    public static class a {
        private com.kwad.sdk.core.response.model.AdTemplate adTemplate;
        private com.kwad.sdk.contentalliance.a.a.a aka;
        private boolean isNoCache;
        private java.lang.String manifest;
        private com.kwad.sdk.core.response.model.VideoPlayerStatus videoPlayerStatus;
        private java.lang.String videoUrl;

        public a(com.kwad.sdk.core.response.model.AdTemplate r2) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.isNoCache = r0
                r1.adTemplate = r2
                return
        }

        public a(java.lang.String r2) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.isNoCache = r0
                r1.videoUrl = r2
                return
        }

        static com.kwad.sdk.core.response.model.AdTemplate a(com.kwad.sdk.contentalliance.a.a.b.a r0) {
                com.kwad.sdk.core.response.model.AdTemplate r0 = r0.adTemplate
                return r0
        }

        static java.lang.String b(com.kwad.sdk.contentalliance.a.a.b.a r0) {
                java.lang.String r0 = r0.videoUrl
                return r0
        }

        static java.lang.String c(com.kwad.sdk.contentalliance.a.a.b.a r0) {
                java.lang.String r0 = r0.manifest
                return r0
        }

        static com.kwad.sdk.core.response.model.VideoPlayerStatus d(com.kwad.sdk.contentalliance.a.a.b.a r0) {
                com.kwad.sdk.core.response.model.VideoPlayerStatus r0 = r0.videoPlayerStatus
                return r0
        }

        static com.kwad.sdk.contentalliance.a.a.a e(com.kwad.sdk.contentalliance.a.a.b.a r0) {
                com.kwad.sdk.contentalliance.a.a.a r0 = r0.aka
                return r0
        }

        static boolean f(com.kwad.sdk.contentalliance.a.a.b.a r0) {
                boolean r0 = r0.isNoCache
                return r0
        }

        public final com.kwad.sdk.contentalliance.a.a.b.a a(com.kwad.sdk.core.response.model.VideoPlayerStatus r1) {
                r0 = this;
                r0.videoPlayerStatus = r1
                return r0
        }

        public final com.kwad.sdk.contentalliance.a.a.b.a b(com.kwad.sdk.contentalliance.a.a.a r1) {
                r0 = this;
                r0.aka = r1
                return r0
        }

        public final com.kwad.sdk.contentalliance.a.a.b.a bd(boolean r1) {
                r0 = this;
                r0.isNoCache = r1
                return r0
        }

        public final com.kwad.sdk.contentalliance.a.a.b.a cn(java.lang.String r1) {
                r0 = this;
                r0.videoUrl = r1
                return r0
        }

        public final com.kwad.sdk.contentalliance.a.a.b.a co(java.lang.String r1) {
                r0 = this;
                r0.manifest = r1
                return r0
        }

        public final com.kwad.sdk.contentalliance.a.a.b yS() {
                r2 = this;
                com.kwad.sdk.contentalliance.a.a.b r0 = new com.kwad.sdk.contentalliance.a.a.b
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }
    }

    private b(com.kwad.sdk.contentalliance.a.a.b.a r4) {
            r3 = this;
            r3.<init>()
            com.kwad.sdk.contentalliance.a.a.a r0 = new com.kwad.sdk.contentalliance.a.a.a
            r0.<init>()
            r3.aka = r0
            r0 = 0
            r3.isNoCache = r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = com.kwad.sdk.contentalliance.a.a.b.a.a(r4)
            r3.adTemplate = r0
            java.lang.String r0 = com.kwad.sdk.contentalliance.a.a.b.a.b(r4)
            r3.videoUrl = r0
            java.lang.String r0 = com.kwad.sdk.contentalliance.a.a.b.a.c(r4)
            r3.manifest = r0
            com.kwad.sdk.core.response.model.VideoPlayerStatus r0 = com.kwad.sdk.contentalliance.a.a.b.a.d(r4)
            r3.videoPlayerStatus = r0
            com.kwad.sdk.contentalliance.a.a.a r0 = com.kwad.sdk.contentalliance.a.a.b.a.e(r4)
            if (r0 == 0) goto L53
            com.kwad.sdk.contentalliance.a.a.a r0 = r3.aka
            com.kwad.sdk.contentalliance.a.a.a r1 = com.kwad.sdk.contentalliance.a.a.b.a.e(r4)
            long r1 = r1.photoId
            r0.photoId = r1
            com.kwad.sdk.contentalliance.a.a.a r0 = r3.aka
            com.kwad.sdk.contentalliance.a.a.a r1 = com.kwad.sdk.contentalliance.a.a.b.a.e(r4)
            long r1 = r1.clickTime
            r0.clickTime = r1
            com.kwad.sdk.contentalliance.a.a.a r0 = r3.aka
            com.kwad.sdk.contentalliance.a.a.a r1 = com.kwad.sdk.contentalliance.a.a.b.a.e(r4)
            long r1 = r1.adStyle
            r0.adStyle = r1
            com.kwad.sdk.contentalliance.a.a.a r0 = r3.aka
            com.kwad.sdk.contentalliance.a.a.a r1 = com.kwad.sdk.contentalliance.a.a.b.a.e(r4)
            int r1 = r1.contentType
            r0.contentType = r1
        L53:
            boolean r4 = com.kwad.sdk.contentalliance.a.a.b.a.f(r4)
            r3.isNoCache = r4
            return
    }

    b(com.kwad.sdk.contentalliance.a.a.b.a r1, byte r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }
}
