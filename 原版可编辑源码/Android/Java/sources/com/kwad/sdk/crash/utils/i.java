package com.kwad.sdk.crash.utils;

import android.support.v4.os.EnvironmentCompat;
import java.text.SimpleDateFormat;
import java.util.Date;

public final class i {
    private static SimpleDateFormat aBW = new SimpleDateFormat("yyyy-MM-dd HH:mm:ss");

    public static String al(long j) {
        return j <= 0 ? EnvironmentCompat.MEDIA_UNKNOWN : aBW.format(new Date(j));
    }
}
