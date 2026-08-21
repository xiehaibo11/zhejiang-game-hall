package com.tkay.expressad.foundation.h;

import android.content.Context;
import android.content.res.Resources;

public class f {
    private static String a = "DomainSameSDKTool";

    private static boolean a(Context context) {
        if (context == null) {
            return false;
        }
        try {
            Resources resources = context.getResources();
            return resources.getDimensionPixelSize(resources.getIdentifier("navigation_bar_height", "dimen", "android")) > 0;
        } catch (Throwable th) {
            th.getMessage();
            return false;
        }
    }
}
