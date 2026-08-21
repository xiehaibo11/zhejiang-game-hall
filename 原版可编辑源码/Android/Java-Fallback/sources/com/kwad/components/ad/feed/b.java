package com.kwad.components.ad.feed;

public final class b {

    static class 1 {
        static final int[] dF = null;

        static {
                com.kwad.components.model.FeedType[] r0 = com.kwad.components.model.FeedType.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.kwad.components.ad.feed.b.1.dF = r0
                com.kwad.components.model.FeedType r1 = com.kwad.components.model.FeedType.FEED_TYPE_TEXT_IMMERSE     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.kwad.components.ad.feed.b.1.dF     // Catch: java.lang.NoSuchFieldError -> L1d
                com.kwad.components.model.FeedType r1 = com.kwad.components.model.FeedType.FEED_TYPE_TEXT_ABOVE     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.kwad.components.ad.feed.b.1.dF     // Catch: java.lang.NoSuchFieldError -> L28
                com.kwad.components.model.FeedType r1 = com.kwad.components.model.FeedType.FEED_TYPE_TEXT_BELOW     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r0 = com.kwad.components.ad.feed.b.1.dF     // Catch: java.lang.NoSuchFieldError -> L33
                com.kwad.components.model.FeedType r1 = com.kwad.components.model.FeedType.FEED_TYPE_TEXT_LEFT     // Catch: java.lang.NoSuchFieldError -> L33
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r2 = 4
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r0 = com.kwad.components.ad.feed.b.1.dF     // Catch: java.lang.NoSuchFieldError -> L3e
                com.kwad.components.model.FeedType r1 = com.kwad.components.model.FeedType.FEED_TYPE_TEXT_RIGHT     // Catch: java.lang.NoSuchFieldError -> L3e
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r2 = 5
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                int[] r0 = com.kwad.components.ad.feed.b.1.dF     // Catch: java.lang.NoSuchFieldError -> L49
                com.kwad.components.model.FeedType r1 = com.kwad.components.model.FeedType.FEED_TYPE_TEXT_ABOVE_GROUP     // Catch: java.lang.NoSuchFieldError -> L49
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L49
                r2 = 6
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L49
            L49:
                int[] r0 = com.kwad.components.ad.feed.b.1.dF     // Catch: java.lang.NoSuchFieldError -> L54
                com.kwad.components.model.FeedType r1 = com.kwad.components.model.FeedType.FEED_TYPE_UNKNOWN     // Catch: java.lang.NoSuchFieldError -> L54
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L54
                r2 = 7
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L54
            L54:
                return
        }
    }

    private static com.kwad.components.core.widget.b a(android.content.Context r2, com.kwad.components.model.FeedType r3) {
            int[] r0 = com.kwad.components.ad.feed.b.1.dF
            int r1 = r3.ordinal()
            r0 = r0[r1]
            switch(r0) {
                case 1: goto L38;
                case 2: goto L32;
                case 3: goto L2c;
                case 4: goto L26;
                case 5: goto L20;
                case 6: goto Lc;
                case 7: goto Lc;
                default: goto Lb;
            }
        Lb:
            goto L3e
        Lc:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r0 = "getSingleImageView type is unknown:"
            r2.<init>(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "KSFeedFactory"
            com.kwad.sdk.core.e.c.e(r3, r2)
            goto L3e
        L20:
            com.kwad.components.ad.feed.b.l r3 = new com.kwad.components.ad.feed.b.l
            r3.<init>(r2)
            return r3
        L26:
            com.kwad.components.ad.feed.b.k r3 = new com.kwad.components.ad.feed.b.k
            r3.<init>(r2)
            return r3
        L2c:
            com.kwad.components.ad.feed.b.h r3 = new com.kwad.components.ad.feed.b.h
            r3.<init>(r2)
            return r3
        L32:
            com.kwad.components.ad.feed.b.f r3 = new com.kwad.components.ad.feed.b.f
            r3.<init>(r2)
            return r3
        L38:
            com.kwad.components.ad.feed.b.j r3 = new com.kwad.components.ad.feed.b.j
            r3.<init>(r2)
            return r3
        L3e:
            r2 = 0
            return r2
    }

    public static com.kwad.components.core.widget.b a(android.content.Context r3, com.kwad.components.model.FeedType r4, int r5) {
            com.kwad.components.model.FeedType r0 = com.kwad.components.model.FeedType.FEED_TYPE_TEXT_NEW
            r1 = 8
            r2 = 1
            if (r4 != r0) goto L18
            if (r5 == r2) goto L12
            if (r5 != r1) goto Lc
            goto L12
        Lc:
            com.kwad.components.ad.feed.b.f r4 = new com.kwad.components.ad.feed.b.f
            r4.<init>(r3)
            return r4
        L12:
            com.kwad.components.ad.feed.b.g r4 = new com.kwad.components.ad.feed.b.g
            r4.<init>(r3)
            return r4
        L18:
            if (r5 == r2) goto L35
            r0 = 2
            if (r5 == r0) goto L30
            r0 = 3
            if (r5 == r0) goto L2b
            if (r5 == r1) goto L35
            java.lang.String r3 = "KSFeedFactory"
            java.lang.String r4 = "getNewFeedView materialType is unknown"
            com.kwad.sdk.core.e.c.e(r3, r4)
            r3 = 0
            return r3
        L2b:
            com.kwad.components.core.widget.b r3 = b(r3, r4)
            return r3
        L30:
            com.kwad.components.core.widget.b r3 = a(r3, r4)
            return r3
        L35:
            com.kwad.components.core.widget.b r3 = c(r3, r4)
            return r3
    }

    private static com.kwad.components.core.widget.b b(android.content.Context r2, com.kwad.components.model.FeedType r3) {
            int[] r0 = com.kwad.components.ad.feed.b.1.dF
            int r1 = r3.ordinal()
            r0 = r0[r1]
            switch(r0) {
                case 1: goto L3e;
                case 2: goto L38;
                case 3: goto L32;
                case 4: goto L2c;
                case 5: goto L26;
                case 6: goto L20;
                case 7: goto Lc;
                default: goto Lb;
            }
        Lb:
            goto L44
        Lc:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r0 = "getVideoView type is unknown"
            r2.<init>(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "KSFeedFactory"
            com.kwad.sdk.core.e.c.e(r3, r2)
            goto L44
        L20:
            com.kwad.components.ad.feed.b.h r3 = new com.kwad.components.ad.feed.b.h
            r3.<init>(r2)
            return r3
        L26:
            com.kwad.components.ad.feed.b.l r3 = new com.kwad.components.ad.feed.b.l
            r3.<init>(r2)
            return r3
        L2c:
            com.kwad.components.ad.feed.b.k r3 = new com.kwad.components.ad.feed.b.k
            r3.<init>(r2)
            return r3
        L32:
            com.kwad.components.ad.feed.b.h r3 = new com.kwad.components.ad.feed.b.h
            r3.<init>(r2)
            return r3
        L38:
            com.kwad.components.ad.feed.b.f r3 = new com.kwad.components.ad.feed.b.f
            r3.<init>(r2)
            return r3
        L3e:
            com.kwad.components.ad.feed.b.j r3 = new com.kwad.components.ad.feed.b.j
            r3.<init>(r2)
            return r3
        L44:
            r2 = 0
            return r2
    }

    private static com.kwad.components.core.widget.b c(android.content.Context r2, com.kwad.components.model.FeedType r3) {
            int[] r0 = com.kwad.components.ad.feed.b.1.dF
            int r1 = r3.ordinal()
            r0 = r0[r1]
            r1 = 2
            if (r0 == r1) goto L29
            r1 = 3
            if (r0 == r1) goto L23
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r0 = "getVideoView type is unknown:"
            r2.<init>(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "KSFeedFactory"
            com.kwad.sdk.core.e.c.e(r3, r2)
            r2 = 0
            return r2
        L23:
            com.kwad.components.ad.feed.b.i r3 = new com.kwad.components.ad.feed.b.i
            r3.<init>(r2)
            return r3
        L29:
            com.kwad.components.ad.feed.b.g r3 = new com.kwad.components.ad.feed.b.g
            r3.<init>(r2)
            return r3
    }
}
