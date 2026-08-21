package com.kwad.sdk.utils;

import android.app.Activity;
import android.content.Context;
import android.graphics.Rect;
import android.view.View;

public final class bm {
    public static boolean a(View view, int i, boolean z) {
        return view != null && b(view, i, z) && cr(view.getContext());
    }

    private static boolean b(View view, int i, boolean z) {
        if (view == null || view.getParent() == null) {
            return false;
        }
        Activity activityDr = com.kwad.sdk.m.l.dr(view.getContext());
        if ((activityDr != null && activityDr.isFinishing()) || !view.isShown() || view.getVisibility() != 0 || (z && !view.hasWindowFocus())) {
            return false;
        }
        Rect rect = new Rect();
        if (view.getGlobalVisibleRect(rect)) {
            long jHeight = ((long) rect.height()) * ((long) rect.width());
            long height = ((long) view.getHeight()) * ((long) view.getWidth());
            if (height > 0 && jHeight * 100 >= ((long) i) * height) {
                return true;
            }
        }
        return false;
    }

    private static boolean cr(Context context) {
        return an.IP().cr(context);
    }

    public static boolean o(View view, int i) {
        return view != null && b(view, i, true) && view.hasWindowFocus() && cr(view.getContext());
    }
}
