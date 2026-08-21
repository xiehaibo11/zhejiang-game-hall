package com.kwad.sdk.core.imageloader;

import com.kwad.sdk.core.e.c;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.utils.aw;
import com.kwad.sdk.utils.g;
import com.kwad.sdk.utils.y;

public class ImageLoaderPerfUtil {
    private static final String TAG = ImageLoaderPerfUtil.class.getSimpleName();

    public static ImageLoaderInfo getInfo() {
        ImageLoaderInfo imageLoaderInfo = new ImageLoaderInfo();
        imageLoaderInfo.totalCount = y.IG();
        imageLoaderInfo.successCount = y.IH();
        imageLoaderInfo.failedCount = y.II();
        imageLoaderInfo.duration = y.IF();
        return imageLoaderInfo;
    }

    public static void report() {
        g.execute(new aw() {
            @Override
            public final void doTask() {
                ImageLoaderInfo info = ImageLoaderPerfUtil.getInfo();
                if (info.totalCount == 0) {
                    c.w(ImageLoaderPerfUtil.TAG, "info.totalCount == 0");
                    return;
                }
                c.d(ImageLoaderPerfUtil.TAG, "ImageLoaderInfo:" + info.toJson().toString());
                KSLoggerReporter.y(info.toJson());
            }
        });
    }
}
