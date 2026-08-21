package com.mbridge.msdk.foundation.tools;

import android.graphics.Rect;
import android.os.Build;
import android.view.View;
import android.view.ViewGroup;
import android.webkit.WebView;

/* JADX INFO: compiled from: ViewCoveredUtils.java */
/* JADX INFO: loaded from: classes2.dex */
public final class am {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static boolean f3520a;

    /* JADX WARN: Removed duplicated region for block: B:47:0x00e4  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static boolean a(android.view.View r8) {
        /*
            Method dump skipped, instruction units count: 251
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.mbridge.msdk.foundation.tools.am.a(android.view.View):boolean");
    }

    private static boolean b(View view) {
        if (view.getAlpha() <= 0.5f) {
            return false;
        }
        if (Build.VERSION.SDK_INT >= 19) {
            return view.getBackground() != null && view.getBackground().getAlpha() > 127;
        }
        return true;
    }

    private static boolean a(View view, View view2) {
        Rect rect = new Rect();
        view.getGlobalVisibleRect(rect);
        Rect rect2 = new Rect();
        view2.getGlobalVisibleRect(rect2);
        return Rect.intersects(rect, rect2) && ((Math.min(rect.right, rect2.right) - Math.max(rect.left, rect2.left)) * (Math.min(rect.bottom, rect2.bottom) - Math.max(rect.top, rect2.top))) * 2 >= view.getMeasuredHeight() * view.getMeasuredWidth();
    }

    private static int a(View view, ViewGroup viewGroup) {
        int i = 0;
        while (i < viewGroup.getChildCount() && viewGroup.getChildAt(i) != view) {
            i++;
        }
        return i;
    }

    private static boolean b(View view, ViewGroup viewGroup) {
        for (int i = 0; i < viewGroup.getChildCount(); i++) {
            z.d("ViewUtils", "View Judge : Start Loop");
            View childAt = viewGroup.getChildAt(i);
            if (childAt.getVisibility() == 0 && a(view, childAt)) {
                if ((childAt instanceof WebView) && childAt.getVisibility() == 0) {
                    z.d("ViewUtils", "View Judge : View Covered by WebView.");
                    f3520a = true;
                }
                if (b(childAt)) {
                    z.d("ViewUtils", "View Judge : View Covered and Cover ViewGroup is not transparent.");
                    f3520a = true;
                }
                if (f3520a) {
                    break;
                }
                if (childAt instanceof ViewGroup) {
                    b(view, (ViewGroup) childAt);
                }
            }
        }
        return f3520a;
    }
}
