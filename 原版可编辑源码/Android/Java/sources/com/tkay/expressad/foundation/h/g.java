package com.tkay.expressad.foundation.h;

import android.content.Context;
import android.content.res.Resources;

public class g {
    private static String a = "DomainSameTool";

    private static void b(Context context) {
        if (context == null) {
        }
    }

    public static boolean a(Context context) {
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
