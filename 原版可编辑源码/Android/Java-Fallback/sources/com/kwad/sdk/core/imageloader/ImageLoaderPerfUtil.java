package com.kwad.sdk.core.imageloader;

public class ImageLoaderPerfUtil {
    private static final java.lang.String TAG = null;


    static {
            java.lang.Class<com.kwad.sdk.core.imageloader.ImageLoaderPerfUtil> r0 = com.kwad.sdk.core.imageloader.ImageLoaderPerfUtil.class
            java.lang.String r0 = r0.getSimpleName()
            com.kwad.sdk.core.imageloader.ImageLoaderPerfUtil.TAG = r0
            return
    }

    public ImageLoaderPerfUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String access$000() {
            java.lang.String r0 = com.kwad.sdk.core.imageloader.ImageLoaderPerfUtil.TAG
            return r0
    }

    public static com.kwad.sdk.core.imageloader.ImageLoaderInfo getInfo() {
            com.kwad.sdk.core.imageloader.ImageLoaderInfo r0 = new com.kwad.sdk.core.imageloader.ImageLoaderInfo
            r0.<init>()
            int r1 = com.kwad.sdk.utils.y.IG()
            r0.totalCount = r1
            int r1 = com.kwad.sdk.utils.y.IH()
            r0.successCount = r1
            int r1 = com.kwad.sdk.utils.y.II()
            r0.failedCount = r1
            double r1 = com.kwad.sdk.utils.y.IF()
            r0.duration = r1
            return r0
    }

    public static void report() {
            com.kwad.sdk.core.imageloader.ImageLoaderPerfUtil$1 r0 = new com.kwad.sdk.core.imageloader.ImageLoaderPerfUtil$1
            r0.<init>()
            com.kwad.sdk.utils.g.execute(r0)
            return
    }
}
