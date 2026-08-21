package com.kwad.components.ad.feed;

import android.content.Context;
import com.kwad.components.ad.feed.b.g;
import com.kwad.components.ad.feed.b.h;
import com.kwad.components.ad.feed.b.i;
import com.kwad.components.ad.feed.b.j;
import com.kwad.components.ad.feed.b.k;
import com.kwad.components.ad.feed.b.l;
import com.kwad.components.model.FeedType;

public final class b {

    static class 1 {
        static final int[] dF;

        static {
            int[] iArr = new int[FeedType.values().length];
            dF = iArr;
            try {
                iArr[FeedType.FEED_TYPE_TEXT_IMMERSE.ordinal()] = 1;
            } catch (NoSuchFieldError unused) {
            }
            try {
                dF[FeedType.FEED_TYPE_TEXT_ABOVE.ordinal()] = 2;
            } catch (NoSuchFieldError unused2) {
            }
            try {
                dF[FeedType.FEED_TYPE_TEXT_BELOW.ordinal()] = 3;
            } catch (NoSuchFieldError unused3) {
            }
            try {
                dF[FeedType.FEED_TYPE_TEXT_LEFT.ordinal()] = 4;
            } catch (NoSuchFieldError unused4) {
            }
            try {
                dF[FeedType.FEED_TYPE_TEXT_RIGHT.ordinal()] = 5;
            } catch (NoSuchFieldError unused5) {
            }
            try {
                dF[FeedType.FEED_TYPE_TEXT_ABOVE_GROUP.ordinal()] = 6;
            } catch (NoSuchFieldError unused6) {
            }
            try {
                dF[FeedType.FEED_TYPE_UNKNOWN.ordinal()] = 7;
            } catch (NoSuchFieldError unused7) {
            }
        }
    }

    private static com.kwad.components.core.widget.b a(Context context, FeedType feedType) {
        switch (1.dF[feedType.ordinal()]) {
            case 1:
                return new j(context);
            case 2:
                return new com.kwad.components.ad.feed.b.f(context);
            case 3:
                return new h(context);
            case 4:
                return new k(context);
            case 5:
                return new l(context);
            case 6:
            case 7:
                com.kwad.sdk.core.e.c.e("KSFeedFactory", "getSingleImageView type is unknown:" + feedType);
                return null;
            default:
                return null;
        }
    }

    public static com.kwad.components.core.widget.b a(Context context, FeedType feedType, int i) {
        if (feedType == FeedType.FEED_TYPE_TEXT_NEW) {
            return (i == 1 || i == 8) ? new g(context) : new com.kwad.components.ad.feed.b.f(context);
        }
        if (i != 1) {
            if (i == 2) {
                return a(context, feedType);
            }
            if (i == 3) {
                return b(context, feedType);
            }
            if (i != 8) {
                com.kwad.sdk.core.e.c.e("KSFeedFactory", "getNewFeedView materialType is unknown");
                return null;
            }
        }
        return c(context, feedType);
    }

    private static com.kwad.components.core.widget.b b(Context context, FeedType feedType) {
        switch (1.dF[feedType.ordinal()]) {
            case 1:
                return new j(context);
            case 2:
                return new com.kwad.components.ad.feed.b.f(context);
            case 3:
                return new h(context);
            case 4:
                return new k(context);
            case 5:
                return new l(context);
            case 6:
                return new h(context);
            case 7:
                com.kwad.sdk.core.e.c.e("KSFeedFactory", "getVideoView type is unknown" + feedType);
                return null;
            default:
                return null;
        }
    }

    private static com.kwad.components.core.widget.b c(Context context, FeedType feedType) {
        int i = 1.dF[feedType.ordinal()];
        if (i == 2) {
            return new g(context);
        }
        if (i == 3) {
            return new i(context);
        }
        com.kwad.sdk.core.e.c.e("KSFeedFactory", "getVideoView type is unknown:" + feedType);
        return null;
    }
}
